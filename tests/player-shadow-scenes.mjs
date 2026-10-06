import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`current_work/player-shadow-2026-10-04/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'current_work'},server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'4337'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try{
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  await page.goto('http://127.0.0.1:4337/?skipIntro');
  await page.waitForFunction(()=>window.__redcat);
  const scenes=[];
  for(const level of [0,1,2]){
    assert.equal(await page.evaluate(index=>window.__redcat.startLevel(index),level),true);
    const result=await page.evaluate(async()=>{
      const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
      app.pause();document.getElementById('pause').hidden=true;
      for(const player of h.players.values())player.stop();
      h.cutscene=false;h.camera=null;h.playerVisible=true;h.enemiesFrozen=true;
      for(const object of g.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
      w.player.noClip=false;w.settings.camera='third';w.syncModels();w.syncActors(0);
      // Real starting room, with a steeper view so both feet and ground are visible.
      const spawn=w.level.spawn.position;
      const start=[spawn[0],spawn[1]+10,spawn[2]],end=[spawn[0],spawn[1]-10000,spawn[2]];
      const ground=w.collider.trace(start,end,w.player.mins,w.player.maxs,w.physicalModels);
      w.player.position=[...ground.end];w.player.resetVelocity();w.player.grounded=true;
      w.pitch=.55;w.syncPlayer(0,{});w.updateCamera(1,true);
      await w.geometryStream.settle();w.playerShadow.update();
      const shadow=w.playerShadow.mesh,vertices=()=>Array.from(shadow.geometry.attributes.position.array);
      const capture=()=>{w.renderer.render(w.scene,w.camera);return w.renderer.domElement.toDataURL('image/png').split(',')[1];};
      const visible=shadow.visible,groundVertices=vertices(),withShadow=capture();
      shadow.visible=false;const withoutShadow=capture();shadow.visible=true;
      w.player.position[1]+=90;w.player.grounded=false;w.syncPlayer(0,{});w.updateCamera(1,true);await w.geometryStream.settle();w.render();
      const airborneVertices=vertices(),airborneVisible=shadow.visible,jumping=capture();
      h.playerVisible=false;w.syncPlayer(0,{});w.render();const hidden=!shadow.visible;
      h.playerVisible=true;w.settings.camera='first';w.syncPlayer(0,{});w.updateCamera(1,true);w.render();const firstPersonHidden=!shadow.visible;
      return {level:w.id,visible,groundVertices,airborneVertices,airborneVisible,hidden,firstPersonHidden,
        texture:[shadow.material.map.image.width,shadow.material.map.image.height],opacity:shadow.material.opacity,
        withShadow,withoutShadow,jumping};
    });
    for(const key of ['withShadow','withoutShadow','jumping']){await writeFile(path.join(out,`${result.level}-${key}.png`),Buffer.from(result[key],'base64'));delete result[key];}
    scenes.push(result);
    assert.equal(result.visible,true,`${result.level}: ground shadow visible`);
    assert.equal(result.airborneVisible,true,`${result.level}: jumping retains floor shadow`);
    result.groundVertices.forEach((v,i)=>assert.ok(Math.abs(v-result.airborneVertices[i])<.1,`${result.level}: shadow remains on its ground plane`));
    assert.equal(result.hidden,true);assert.equal(result.firstPersonHidden,true);
    assert.deepEqual(result.texture,[64,64]);assert.equal(result.opacity,1);
  }
  await writeFile(path.join(out,'report.json'),JSON.stringify({scenes,errors},null,2)+'\n');
  assert.deepEqual(errors,[]);
  console.log('PASS forest/castle/graveyard native shadow rendering, jumping, hidden-player and first-person visibility.');
  console.log(out);
}finally{await context?.close();server.kill();}
