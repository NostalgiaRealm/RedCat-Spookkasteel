import {chromium} from 'playwright';import {spawn} from 'node:child_process';import{mkdir,writeFile}from'node:fs/promises';import assert from'node:assert/strict';
const targetOnly=process.argv.includes('--target-only');
const skipOnly=process.argv.includes('--skip-only');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4196'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.goto('http://127.0.0.1:4196/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>window.__redcat.startLevel(0));
 await page.waitForFunction(()=>window.__redcat.gameplay?.scripts?.cutscene);
 assert.equal(await page.locator('#pause-button').count(),0,'the II overlay is removed');
 let skip=null;await mkdir('artifacts',{recursive:true});
 if(!targetOnly){
 await page.evaluate(()=>{
  const host=window.__redcat.gameplay.scripts,skip=host.skipCutscene.bind(host);
  window.addEventListener('keydown',e=>{if(e.code==='KeyE'&&!e.repeat)window.skipStarted=performance.now();});
  host.skipCutscene=(...args)=>{window.skipMilliseconds=performance.now()-window.skipStarted;return skip(...args);};
 });
 await page.locator('#cutscene-skip').waitFor({state:'visible'});
 await page.keyboard.down('KeyE');await page.waitForFunction(()=>Number(document.getElementById('cutscene-skip').getAttribute('aria-valuenow'))>=30);
 assert.equal(await page.evaluate(()=>window.__redcat.gameplay.scripts.cutscene),true);
 await page.keyboard.up('KeyE');await page.waitForFunction(()=>document.getElementById('cutscene-skip').getAttribute('aria-valuenow')==='0');
 await mkdir('artifacts',{recursive:true});
 await page.keyboard.down('KeyE');await page.waitForFunction(()=>Number(document.getElementById('cutscene-skip').getAttribute('aria-valuenow'))>=45);
 await page.screenshot({path:'artifacts/cutscene-hold-skip.png'});
 await page.waitForFunction(()=>!window.__redcat.gameplay.scripts.cutscene,{},{timeout:15000});await page.keyboard.up('KeyE');
 // Allow the intentional 400 ms cinema-bar transition to finish before visual QA.
 await page.waitForTimeout(450);
 skip=await page.evaluate(()=>{const app=window.__redcat;app.pause();document.getElementById('pause').hidden=true;return {errors:app.gameplay.scripts.vm.lastError,cutscene:app.gameplay.scripts.cutscene,visible:app.gameplay.scripts.playerVisible,milliseconds:window.skipMilliseconds};});
 assert.equal(skip.errors,null);assert.equal(skip.cutscene,false);assert.equal(skip.visible,true);
 assert.ok(skip.milliseconds>=1900&&skip.milliseconds<2900,`two-second keyboard hold: ${skip.milliseconds}ms`);
 }else await page.evaluate(()=>{const a=window.__redcat;a.pause();a.gameplay.scripts.skipCutscene();document.getElementById('pause').hidden=true;});
 await page.waitForTimeout(450);
 if(skipOnly){
  await page.keyboard.press('Escape');await page.waitForFunction(()=>window.__redcat.mode==='playing');
  await page.keyboard.press('Escape');await page.waitForFunction(()=>window.__redcat.mode==='paused');
  assert.equal(await page.locator('#pause').isVisible(),true,'Escape still opens the pause menu');
  assert.deepEqual(errors,[]);await writeFile('artifacts/cutscene-skip-scenes.json',JSON.stringify({skip,errors},null,2)+'\n');
  console.log(`PASS removed II overlay, two-second keyboard hold (${Math.round(skip.milliseconds)}ms), progress/reset and original intro completion; Escape pause remains available.`);
 }else{
 const target=await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
  for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
  const boss=g.objects.find(o=>o.enemyType==='brutusm');boss.enabled=true;boss.visible=true;boss.yaw=0;
  for(const o of g.objects)if(o.kind==='enemy'&&o!==boss)o.enabled=false;
  w.player.position=[boss.position[0],boss.position[1]+1,boss.position[2]+180];w.yaw=0;g.state.skill|=1;g.state.health=7;g.state.lives=3;g.state.score=9000;g.state.potions=4;
  w.syncActors(0);w.syncPlayer(0,{});w.updateTargeting(.05,{attack:true});w.updateCamera(1,true);w.syncTargetMarker();app.renderHud();w.render();
  const cameraForward=w.camera.getWorldDirection(w.camera.position.clone());
  const {target,locked}=w.targeting;
  const aim=target.position.map((v,i)=>v+(i===1?(target.collisionMins?.[1]||0)+((target.collisionMaxs?.[1]||56)-(target.collisionMins?.[1]||0))*.8:0));
  const direction=aim.map((v,i)=>v-w.camera.position.toArray()[i]),length=Math.hypot(...direction);
  const dot=direction.reduce((s,v,i)=>s+v/length*cameraForward.toArray()[i],0);
  const {WebGLRenderTarget}=await import('/node_modules/three/build/three.module.js');
  const previousMode=w.settings.camera;w.settings.camera='first';w.updateCamera(1,true);w.syncTargetMarker();
  const buffer=new WebGLRenderTarget(320,180),previousTarget=w.renderer.getRenderTarget(),withRing=new Uint8Array(320*180*4),withoutRing=new Uint8Array(withRing.length);
  w.renderer.setRenderTarget(buffer);w.render();w.renderer.readRenderTargetPixels(buffer,0,0,320,180,withRing);w.targetMarker.visible=false;w.render();w.renderer.readRenderTargetPixels(buffer,0,0,320,180,withoutRing);
  let ringPixels=0;for(let i=0;i<withRing.length;i+=4)if(withRing[i]!==withoutRing[i]||withRing[i+1]!==withoutRing[i+1]||withRing[i+2]!==withoutRing[i+2])ringPixels++;
  w.renderer.setRenderTarget(previousTarget);buffer.dispose();w.settings.camera=previousMode;w.updateCamera(1,true);w.syncTargetMarker();w.render();
  const result={ringPixels,selected:target?.enemyType,locked,ring:w.targetMarker.visible,dot,life:document.getElementById('lives').textContent,canvas:[document.getElementById('original-hud').width,document.getElementById('original-hud').height]};
  return result;
 });
 assert.equal(target.selected,'brutusm');assert.equal(target.locked,true);assert.equal(target.ring,true);assert.ok(target.ringPixels>5,JSON.stringify(target));assert.ok(target.dot>.999);assert.equal(target.life,'3');
 await page.screenshot({path:'artifacts/original-hud-target-widescreen.png'});
 const released=await page.evaluate(()=>{const w=window.__redcat.world;w.updateTargeting(.05,{attack:false});return w.targeting.locked;});assert.equal(released,false);
 await page.evaluate(()=>{const app=window.__redcat;app.settings.resolution='1024x768';app.resize();app.renderHud();app.world.render();});
 await page.screenshot({path:'artifacts/original-hud-target-four-three.png'});
 assert.deepEqual(errors,[]);await writeFile(targetOnly?'artifacts/hud-target-scenes.json':'artifacts/hud-target-skip-scenes.json',JSON.stringify({skip,target,errors},null,2)+'\n');
 console.log(targetOnly?'PASS original HUD at widescreen/4:3, visible target ring pixels and firing camera lock/release.':'PASS original HUD at widescreen/4:3, real keyboard 2s hold/release skip, authored intro completion, target ring and firing camera lock/release.');
 }
}finally{await browser?.close();server.kill();}
