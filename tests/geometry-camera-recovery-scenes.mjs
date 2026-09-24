import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4207'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
 await mkdir('artifacts',{recursive:true});
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:3})));
 await page.goto('http://127.0.0.1:4207/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const fence=await page.evaluate(async()=>{
  const app=window.__redcat;await app.startLevel(1);app.pause();document.getElementById('pause').hidden=true;
  const w=app.world,h=app.gameplay.scripts,{FrontSide,DoubleSide,WebGLRenderTarget}=await import('three');
  for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;w.redcat.visible=false;
  w.camera.position.set(-154,76,710);w.camera.lookAt(-84,42,502);w.syncModels();
  const meshes=w.modelMeshes.get(42),target=new WebGLRenderTarget(640,360),front=new Uint8Array(640*360*4),doubled=new Uint8Array(front.length);
  const sideCounts={front:0,other:0};for(const [index,list]of w.modelMeshes)for(const mesh of list)sideCounts[mesh.material.side===FrontSide?'front':'other']++;
  w.renderer.setRenderTarget(target);w.render();w.renderer.readRenderTargetPixels(target,0,0,640,360,front);
  for(const mesh of meshes){mesh.material.side=DoubleSide;mesh.material.needsUpdate=true;}w.render();w.renderer.readRenderTargetPixels(target,0,0,640,360,doubled);
  for(const mesh of meshes){mesh.material.side=FrontSide;mesh.material.needsUpdate=true;}w.renderer.setRenderTarget(null);target.dispose();w.render();
  let changed=0;for(let i=0;i<front.length;i+=4)if(front[i]!==doubled[i]||front[i+1]!==doubled[i+1]||front[i+2]!==doubled[i+2])changed++;
  return {meshes:meshes.length,faces:w.level.collision.models[42].numFaces,sideCounts,changed,error:h.vm.lastError};
 });
 assert.equal(fence.meshes,1);assert.equal(fence.faces,6);assert.equal(fence.sideCounts.other,0);assert.ok(fence.changed>200,JSON.stringify(fence));assert.equal(fence.error,null);
 await page.screenshot({path:'artifacts/castle-fence-single-surface.png'});
 const doorway=await page.evaluate(async()=>{
  const app=window.__redcat;await app.startLevel(3);app.pause();document.getElementById('pause').hidden=true;
  const w=app.world,g=app.gameplay,h=g.scripts;
  for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
  for(const o of g.objects)if(o.kind==='enemy'){o.health=0;o.enabled=false;}w.syncActors(0);
  const trace=()=>w.collider.trace([-1850,100,-1800],[-1690,100,-1800],w.player.mins,w.player.maxs,w.physicalModels);
  const before=trace();
  for(const n of ['draai_button01','draai_button02','draai_button03']){
   g.switchButton(g.find(n)[0]);for(let i=0;i<480;i++)h.update(.025);w.syncModels();
  }
  w.player.position=[-1850,100,-1800];w.player.resetVelocity();w.player.noClip=false;w.yaw=-Math.PI/2;w.pitch=.16;
  const after=trace();app.saveGame(true);const saved=JSON.parse(localStorage.getItem('redcat.save.v1'));
  await app.loadSave();app.pause();document.getElementById('pause').hidden=true;
  const restored=app.world,rh=app.gameplay.scripts;for(const p of rh.players.values())p.stop();rh.cutscene=false;rh.camera=null;rh.enemiesFrozen=true;
  const reloadTrace=restored.collider.trace([-1850,100,-1800],[-1690,100,-1800],restored.player.mins,restored.player.maxs,restored.physicalModels);
  for(const o of app.gameplay.objects)if(o.kind==='trigger')o.enabled=false;
  for(let i=0;i<48;i++)restored.update(.025,{forward:1,right:0});const outward=[...restored.player.position];
  restored.yaw=Math.PI/2;for(let i=0;i<48;i++)restored.update(.025,{forward:1,right:0});const returning=[...restored.player.position];
  restored.camera.position.set(-1920,180,-1750);restored.camera.lookAt(-1768,145,-1800);restored.render();
  return {before,after,reloadTrace,outward,returning,hidden:app.gameplay.find('draai_opening01')[0].visible===false,disabled:restored.collider.disabledModels.has(122),samePose:JSON.stringify(saved.game.scripts.poses.find(([i])=>i===110))===JSON.stringify(rh.snapshot().poses.find(([i])=>i===110)),error:rh.vm.lastError};
 });
 assert.ok(doorway.before.fraction<1);assert.equal(doorway.after.fraction,1);assert.equal(doorway.reloadTrace.fraction,1);assert.equal(doorway.hidden,true);assert.equal(doorway.disabled,true);assert.equal(doorway.samePose,true);assert.ok(doorway.outward[0]>-1730,JSON.stringify(doorway));assert.ok(doorway.returning[0]<-1810,JSON.stringify(doorway));assert.equal(doorway.error,null);
 await page.screenshot({path:'artifacts/caves-restored-rotating-passage.png'});
 const camera=await page.evaluate(()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
  w.player.position=[2409,0.05,732];w.player.resetVelocity();w.yaw=-Math.PI/2;w.pitch=.16;w.settings.camera='third';
  const preview=g.find('cam_firelab02')[0];g.command(preview,'disable');g.command(preview,'enable');w.updateCamera(1,true);
  const overview={mode:h.camera.mode,position:w.camera.position.toArray(),setting:app.settings.camera};
  app.resume();window.dispatchEvent(new KeyboardEvent('keydown',{code:'KeyV',bubbles:true}));window.dispatchEvent(new KeyboardEvent('keyup',{code:'KeyV',bubbles:true}));app.pause();document.getElementById('pause').hidden=true;
  const hiddenPreference=app.settings.camera;for(let i=0;i<321;i++)h.update(.025);w.updateCamera(1,true);w.syncPlayer(0,{});w.render();
  const returned={camera:h.camera,setting:app.settings.camera,position:w.camera.position.toArray(),distance:Math.hypot(...w.camera.position.toArray().map((v,i)=>v-w.player.position[i])),pitch:w.pitch};
  return {overview,hiddenPreference,returned,error:h.vm.lastError};
 });
 assert.equal(camera.overview.mode,2);assert.equal(camera.hiddenPreference,'third');assert.equal(camera.returned.camera,null);assert.equal(camera.returned.setting,'third');assert.ok(camera.returned.distance>100,JSON.stringify(camera));assert.equal(camera.error,null);
 await page.screenshot({path:'artifacts/caves-fire-overview-return.png'});
 assert.deepEqual(errors,[]);await writeFile('artifacts/geometry-camera-recovery-scenes.json',JSON.stringify({fence,doorway,camera,errors},null,2)+'\n');
 console.log('PASS original fence single visible surface; rotating passage collision and physical traversal after save/load; fire overview ignores hidden mode shortcut and returns to third person.');
} finally {await browser?.close();server.kill();}
