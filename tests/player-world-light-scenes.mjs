import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`current_work/player-world-light-2026-10-04/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'current_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'4339'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try{
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  await page.goto('http://127.0.0.1:4339/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  assert.equal(await page.evaluate(()=>window.__redcat.startLevel(2)),true);
  const result=await page.evaluate(async()=>{
    const THREE=await import('three'),app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
    app.pause();document.getElementById('pause').hidden=true;
    for(const motion of h.players.values())motion.stop();h.cutscene=false;h.camera=null;h.playerVisible=true;
    // Shaded grass beside the starting cemetery courtyard (original face
    // 3756). The central entrance is already bright, masking most of a glow.
    w.player.position=[1244,-63.96,3922];
    w.settings.camera='third';w.pitch=.45;w.syncPlayer(0,{});w.updateCamera(1,true);
    w.camera.position.set(1310,65,4010);w.camera.lookAt(1244,-38,3922);
    w.updateRenderResidency();await w.geometryStream.settle();w.effects.update(0);
    const fx=w.effects,light=fx.playerLight.light,position=[...light.position],radius=fx.lightRadii[0],slots=fx.pointLights.length;
    const floor=w.actorFloorLighting.locate(w.player.position),floorBase=floor?.base;
    const capture=()=>{w.render();return w.renderer.domElement.toDataURL('image/png').split(',')[1];};
    const withLight=capture();
    const target=new THREE.WebGLRenderTarget(640,360),lit=new Uint8Array(640*360*4),unlit=new Uint8Array(lit.length);
    // Compare the displayed sRGB brightness. Linear 8-bit readback rounds
    // most of this deliberately faint light on dark grass down to 0–1.
    target.texture.colorSpace=THREE.SRGBColorSpace;
    const hidden=[];
    // Read world surfaces only: an actor becoming brighter cannot satisfy the
    // regression for the previously missing illumination of the surroundings.
    w.scene.traverse(object=>{if(object.isMesh&&object.visible&&!object.userData.worldChunk){hidden.push(object);object.visible=false;}});
    w.renderer.setRenderTarget(target);
    w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,640,360,lit);
    fx.lightRadii[0]=0;w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,640,360,unlit);
    w.renderer.setRenderTarget(null);for(const object of hidden)object.visible=true;target.dispose();
    w.syncActorLighting(fx.lights.filter(l=>l!==light));const withoutLight=capture();
    fx.lightRadii[0]=radius;w.syncActorLighting(fx.lights);
    let changed=0,brighter=0,darker=0,maxDelta=0;
    for(let i=0;i<lit.length;i+=4){const delta=lit[i]+lit[i+1]+lit[i+2]-unlit[i]-unlit[i+1]-unlit[i+2];if(Math.abs(delta)>3)changed++;if(delta>3)brighter++;if(delta< -3)darker++;maxDelta=Math.max(maxDelta,delta);}
    const originalPlayer=[...w.player.position];w.player.position[1]+=80;w.syncPlayer(0,{});fx.update(0);
    const jumpPosition=[...light.position];w.settings.camera='first';w.syncPlayer(0,{});fx.update(0);
    const firstPerson={modelVisible:w.redcat.visible,radius:fx.lightRadii[0]};
    h.playerVisible=false;w.syncPlayer(0,{});fx.update(0);const hiddenRadius=fx.lightRadii[0];
    h.playerVisible=true;w.settings.camera='third';w.player.position=originalPlayer;w.syncPlayer(0,{});fx.update(0);
    app.saveGame(true);await app.loadSave();app.pause();
    const restored=app.world.effects.playerLight.light;
    return {position,jumpPosition,radius,slots,floorBase,changed,brighter,darker,maxDelta,firstPerson,hiddenRadius,
      restored:{position:restored.position,radius:restored.radius,count:app.world.effects.lights.filter(l=>l.id==='rc glow').length},withLight,withoutLight};
  });
  for(const key of ['withLight','withoutLight']){await writeFile(path.join(out,`${key}.png`),Buffer.from(result[key],'base64'));delete result[key];}
  await writeFile(path.join(out,'report.json'),JSON.stringify({result,errors},null,2)+'\n');
  assert.equal(result.radius,120);assert.equal(result.slots,8);assert.ok(result.brighter>500,JSON.stringify(result));assert.equal(result.darker,0);
  result.position.forEach((v,i)=>assert.ok(Math.abs(result.jumpPosition[i]-v-(i===1?80:0))<1e-6));
  assert.deepEqual(result.firstPerson,{modelVisible:false,radius:120});assert.equal(result.hiddenRadius,120);
  assert.equal(result.restored.radius,120);assert.equal(result.restored.count,1);
  result.position.forEach((v,i)=>assert.ok(Math.abs(result.restored.position[i]-v)<1e-5));assert.deepEqual(errors,[]);
  console.log('PASS original player glow illuminates graveyard world surfaces, follows jumps, survives camera/visibility changes and save restoration with eight light slots.');
  console.log(out);
}finally{await context?.close();server.kill();}
