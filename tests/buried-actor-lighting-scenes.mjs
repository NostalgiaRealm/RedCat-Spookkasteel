import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`current_work/buried-actor-lighting-2026-10-05/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'current_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'4371'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try{
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await context.newPage(),errors=[],results=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  page.on('console',message=>{if(message.type()==='error'&&/shader|WebGLProgram|VALIDATE_STATUS/i.test(message.text()))errors.push(message.text());});
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  await page.goto('http://127.0.0.1:4371/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const scenes=[
    {name:'castle-knights',level:1,ids:['StandingEnemy1','StandingEnemy14'],camera:[-90,142,-782],look:[2,126,-946]},
    {name:'graveyard-bench',level:2,ids:['AdamAnyActor11'],camera:[1100,15,2100],look:[925,-40,2020]},
    {name:'graveyard-crosses',level:2,ids:['AdamAnyActor232','AdamAnyActor233'],camera:[1950,60,600],look:[1950,-10,380]},
    {name:'tower-candlestick',level:4,ids:['AdamAnyActor26'],camera:[-30,2400,820],look:[-72,2395,784]},
  ];
  for(const scene of scenes.filter(scene=>!process.argv[2]||scene.name===process.argv[2])){
    const result=await page.evaluate(async scene=>{
      const THREE=await import('three'),app=window.__redcat;
      if(app.world?.id!==`lvl0${scene.level}a`&&!await app.startLevel(scene.level))throw new Error('Level load failed');
      app.pause();document.getElementById('pause').hidden=true;
      const w=app.world,g=app.gameplay;
      for(const motion of g.scripts.players.values())motion.stop();g.scripts.camera=null;g.scripts.cutscene=false;
      w.syncModels();w.syncActors(0);w.syncPlayer(0,{});
      w.camera.position.fromArray(scene.camera);w.camera.lookAt(...scene.look);
      w.updateRenderResidency();await w.geometryStream.settle();w.effects.update(0);
      const actors=scene.ids.map(id=>w.actorInstances.get(id)),states=actors.map(a=>a.userData.mesh.userData.actorLighting);
      const positions=actors.map(a=>a.position.toArray()),bounds=states.map(s=>s.floorRecoveryBounds);
      const target=new THREE.WebGLRenderTarget(640,360);target.texture.colorSpace=THREE.SRGBColorSpace;
      const capture=()=>{
        const pixels=new Uint8Array(640*360*4);w.renderer.setRenderTarget(target);
        w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,640,360,pixels);
        w.renderer.setRenderTarget(null);w.render();
        return {pixels,png:w.renderer.domElement.toDataURL('image/png').split(',')[1]};
      };
      // Replay only the old root lookup, with the same Sun, flames, camera,
      // streaming residency and geometry in both renders.
      for(const state of states)delete state.floorRecoveryBounds;
      w.syncActorLighting(w.effects.lights);const baseline=states.map(s=>s.uniforms.actorAmbient.value.toArray()),before=capture();
      states.forEach((s,i)=>s.floorRecoveryBounds=bounds[i]);w.syncActorLighting(w.effects.lights);
      const ambient=states.map(s=>s.uniforms.actorAmbient.value.toArray()),after=capture();
      let brighter=0,darker=0,maxDelta=0;
      for(let i=0;i<before.pixels.length;i+=4){
        const delta=after.pixels[i]+after.pixels[i+1]+after.pixels[i+2]-before.pixels[i]-before.pixels[i+1]-before.pixels[i+2];
        if(delta>8)brighter++;if(delta< -8)darker++;maxDelta=Math.max(maxDelta,delta);
      }
      const queries=w.actorFloorLighting.stats.queries;
      for(let frame=0;frame<60;frame++)w.syncActorLighting(w.effects.lights);
      target.dispose();
      return {name:scene.name,ids:scene.ids,baseline,ambient,positions,finalPositions:actors.map(a=>a.position.toArray()),brighter,darker,maxDelta,
        repeatedQueries:w.actorFloorLighting.stats.queries-queries,before:before.png,after:after.png};
    },scene);
    for(const key of ['before','after']){await writeFile(path.join(out,`${scene.name}-${key}.png`),Buffer.from(result[key],'base64'));delete result[key];}
    results.push(result);
  }
  await writeFile(path.join(out,'report.json'),JSON.stringify({results,errors},null,2)+'\n');
  for(const result of results){
    assert.ok(result.baseline.every(rgb=>rgb.every(v=>v===0)),JSON.stringify(result));
    assert.ok(result.ambient.every(rgb=>rgb.some(v=>v>0)),JSON.stringify(result));
    assert.ok(result.brighter>100,JSON.stringify(result));assert.equal(result.darker,0);
    assert.deepEqual(result.positions,result.finalPositions);assert.equal(result.repeatedQueries,0);
  }
  assert.deepEqual(errors,[]);
  assert.ok(results.length,'No matching scene');
  console.log(`PASS buried-actor lighting: ${results.map(r=>`${r.name} ${r.brighter} restored pixels`).join(', ')}; positions preserved, no repeat floor queries.`);
  console.log(out);
}finally{await context?.close();server.kill();}
