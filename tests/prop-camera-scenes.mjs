import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const cameraOnly=process.argv.includes('--camera-only');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4197'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 // Camera fixtures exercise the caves directly; normal campaign gating remains intact.
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:3})));
 await page.goto('http://127.0.0.1:4197/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 let props=null;
 if(!cameraOnly){
 await page.evaluate(()=>window.__redcat.startLevel(1));
 props=await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
  app.pause();document.getElementById('pause').hidden=true;
  for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;h.weaponsEnabled=true;
  for(const o of g.objects)if(o.kind==='enemy'||o.kind==='trigger')o.enabled=false;
  const button=g.find('knopbridge')[0],bridge=g.find('ophaalbrug01_mc')[0],bridgeMotion=h.players.get(bridge.id);g.state.skill|=1;bridgeMotion.seek(bridgeMotion.motion.endTime);h.applyMotion(bridge,bridgeMotion);bridge.open=true;
  w.player.position=[-350,-50,1260];w.yaw=0;w.pitch=0;w.syncModels();w.syncActors(0);w.syncPlayer(0,{});
  w.targeting.clear();w.updateTargeting(.05,{attack:true});w.updateCamera(1,true);w.syncTargetMarker();w.render();
  const {targetAimPoint}=await import('/src/targeting.js'),{hudCommands}=await import('/src/hud.js');
  const manifest=await(await fetch('/assets/hud/manifest.json')).json();
  const selected=w.targeting.target,aim=targetAimPoint(button),eye=w.player.position.map((v,i)=>v+(i===1?45:0));
  const hit=w.collider.trace(eye,aim,[0,0,0],[0,0,0],w.physicalModels,'blocksLOS');
  const before={button:button.id,selected:selected?.id,ring:w.targetMarker.visible,lock:w.targeting.locked,hitModel:hit.modelIndex,buttonModel:button.modelIndex,aim,editor:button.position,
   enemyHud:hudCommands(manifest,g.state,5,selected).some(c=>c.name==='EnemyPortrait')};
  const events=[],oldEvent=g.onEvent;g.onEvent=e=>{events.push(e);oldEvent(e);};
  g.attack(w.player.position,[0,0,-1]);g.time=2;g.releasePlayerAttack(w.player.position,[0,0,-1],()=>eye,()=>aim);
  for(let i=0;i<30&&g.projectiles.length;i++)g.updateProjectiles(.05,w.player.position,(a,b)=>w.collider.trace(a,b,[0,0,0],[0,0,0],w.physicalModels,'canBeShot'));
  for(let i=0;i<60;i++)h.update(.05);
  w.updateTargeting(.05,{attack:false});
  const after={switched:button.switchedOn,count:button.switchCount,selected:w.targeting.target?.id,impact:events.find(e=>e.type==='playerProjectileImpact')?.target,
   bridgeOpen:bridge.open,bridgeTime:bridgeMotion.time,error:h.vm.lastError};
  // Targeted crate coverage uses actual authored graveyard crates in
  // target-eligibility-scenes.mjs; the castle has no Targetable crates.
  return {before,after};
 });
 console.log(JSON.stringify({props}));
 assert.equal(props.before.selected,props.before.button);assert.ok(props.before.ring&&props.before.lock);assert.equal(props.before.enemyHud,false);
 assert.equal(props.before.hitModel,props.before.buttonModel);assert.notDeepEqual(props.before.aim,props.before.editor);
 assert.equal(props.after.impact,props.before.button);assert.equal(props.after.switched,true);assert.equal(props.after.bridgeOpen,false);assert.notEqual(props.after.selected,props.before.button);assert.equal(props.after.error,null);
 }
 await page.evaluate(()=>window.__redcat.startLevel(3));
 const camera=await page.evaluate(()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;app.pause();document.getElementById('pause').hidden=true;
  for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;h.weaponsEnabled=true;w.targeting.clear();
  // Isolate the authored camera: unrelated physical triggers must not replace
  // it when the actual player and weapon controllers advance below.
  for(const object of g.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
  g.state.skill|=1;w.yaw=0;w.pitch=.16;
  const overview=g.find('cam_waterlab01')[0],regional=g.find('cam_waterlab')[0],persistent=g.find('cam_waterlab05')[0],normal=g.find('cam_earthlab02')[0];
  const pose=()=>[...w.camera.position.toArray(),...w.camera.quaternion.toArray()];
  const input={forward:0,right:0,turn:0,jump:false,attack:true,use:false};
  const events=[],previous=g.onEvent;g.onEvent=e=>{events.push(e);previous(e);};
  h.activateCamera(overview);w.updateCamera(1,true);
  const preview=pose(),yaw=w.yaw,pitch=w.pitch,samples=[];let keptFrames=0,stableFrames=0;
  for(let i=1;i<=99;i++) {
   w.look(60,-80);w.update(.05,input);
   if(h.camera?.id===overview.id)keptFrames++;
   if(pose().every((v,j)=>Math.abs(v-preview[j])<1e-10))stableFrames++;
   if([20,60,99].includes(i))samples.push({elapsed:h.time-h.camera?.start,id:h.camera?.id,yaw:w.yaw,pitch:w.pitch});
  }
  const held={duration:h.camera?.duration,elapsed:h.time-h.camera?.start,keptFrames,stableFrames,yaw:w.yaw,pitch:w.pitch,shots:events.filter(e=>e.type==='attack').length};
  w.render();window.__fixedPreviewScreenshot=w.renderer.domElement.toDataURL('image/png').split(',')[1];
  w.update(.1,{...input,attack:false});const expired=h.camera===null;
  w.targeting.clear();const beforeLook={yaw:w.yaw,pitch:w.pitch};w.look(30,-40);w.updateCamera(1,true);
  const afterLook={yaw:w.yaw,pitch:w.pitch};
  h.activateCamera(regional);w.updateCamera(1,true);
  const initial=w.pitch,forward=w.camera.getWorldDirection(w.camera.position.clone()).toArray();
  w.look(60,-80);w.updateCamera(1,true);const adjusted=w.pitch,after=w.camera.getWorldDirection(w.camera.position.clone()).toArray();
  h.activateCamera(persistent);w.updateCamera(1,true);const persistentPose=pose(),persistentAngles=[w.yaw,w.pitch];
  for(let i=0;i<20;i++){w.look(20,20);w.update(.05,{...input,attack:false});}
  const persistentHeld=h.camera?.id===persistent.id&&h.camera.duration===0&&pose().every((v,i)=>Math.abs(v-persistentPose[i])<1e-10)&&w.yaw===persistentAngles[0]&&w.pitch===persistentAngles[1];
  // A zero-duration original camera is released by the next script camera
  // command. Mouse input must not manufacture an expiry for it.
  h.activateCamera(normal);w.updateCamera(1,true);const recovered=h.camera===null;
  w.settings.camera='first';w.updateCamera(1,true);
  const visible=w.camera.getWorldDirection(w.camera.position.clone()).toArray(),shot=[-Math.sin(w.yaw)*Math.cos(w.pitch),-Math.sin(w.pitch),-Math.cos(w.yaw)*Math.cos(w.pitch)];
  return {preview,yaw,pitch,held,samples,expired,beforeLook,afterLook,initial,adjusted,forward,after,persistentHeld,recovered,aimDot:visible.reduce((s,v,i)=>s+v*shot[i],0),error:h.vm.lastError};
 });
 assert.equal(camera.held.duration,5);assert.ok(Math.abs(camera.held.elapsed-4.95)<1e-8);assert.equal(camera.held.keptFrames,99);assert.equal(camera.held.stableFrames,99);assert.ok(camera.held.shots>=3,'actual attacks continued without dismissing the preview');
 assert.equal(camera.held.yaw,camera.yaw);assert.equal(camera.held.pitch,camera.pitch);assert.equal(camera.expired,true);assert.ok(camera.afterLook.yaw<camera.beforeLook.yaw);assert.ok(camera.afterLook.pitch<camera.beforeLook.pitch);
 assert.equal(camera.persistentHeld,true);assert.equal(camera.recovered,true);assert.ok(Math.abs(camera.initial-20*Math.PI/180)<1e-8);assert.ok(camera.adjusted<camera.initial);assert.notDeepEqual(camera.forward,camera.after);assert.ok(camera.aimDot>.9999);assert.equal(camera.error,null);
 await mkdir('artifacts',{recursive:true});await writeFile('artifacts/camera-fixed-preview.png',Buffer.from(await page.evaluate(()=>window.__fixedPreviewScreenshot),'base64'));
 const timed=await page.evaluate(async()=>{
  let app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
  const overview=g.find('cam_waterlab01')[0];w.targeting.clear();h.activateCamera(overview);w.updateCamera(1,true);
  for(let i=0;i<40;i++){w.look(20,20);w.update(.05,{forward:0,right:0,attack:false});}
  const remainingBefore=h.camera.duration-(h.time-h.camera.start);
  const save={version:1,level:w.id,position:[...w.player.position],lastSafe:[...w.player.lastSafe],yaw:w.yaw,pitch:w.pitch,game:g.snapshot()};
  await app.startLevel(3,save);app.pause();document.getElementById('pause').hidden=true;
  w=app.world;g=app.gameplay;h=g.scripts;
  const remainingAfter=h.camera.duration-(h.time-h.camera.start),angles=[w.yaw,w.pitch],position=w.camera.position.toArray(),direction=w.camera.quaternion.toArray();
  let kept=true;
  for(let i=0;i<59;i++){w.look(25,-25);w.update(.05,{forward:0,right:0,attack:false});kept&&=h.camera?.id===overview.id;}
  const remainingNearEnd=h.camera&&h.camera.duration-(h.time-h.camera.start),anglesUnchanged=w.yaw===angles[0]&&w.pitch===angles[1],frameUnchanged=w.camera.position.toArray().every((v,i)=>Math.abs(v-position[i])<1e-10)&&w.camera.quaternion.toArray().every((v,i)=>Math.abs(v-direction[i])<1e-10);
  w.update(.1,{forward:0,right:0,attack:false});const expired=h.camera===null;
  const eight=g.find('cam_firelab07')[0];w.targeting.clear();h.activateCamera(eight);w.updateCamera(1,true);const eightId=h.camera.id;
  for(let i=0;i<159;i++){w.look(20,-20);w.update(.05,{forward:0,right:0,attack:false});}
  const eightHeld=h.camera?.id===eightId&&h.camera.duration===8;w.update(.1,{forward:0,right:0,attack:false});
  return {remainingBefore,remainingAfter,remainingNearEnd,kept,anglesUnchanged,frameUnchanged,expired,eightHeld,eightExpired:h.camera===null,error:h.vm.lastError};
 });
 assert.ok(Math.abs(timed.remainingBefore-3)<1e-8);assert.ok(Math.abs(timed.remainingAfter-3)<1e-8);assert.ok(timed.remainingNearEnd>0&&timed.remainingNearEnd<.051);assert.ok(timed.kept&&timed.anglesUnchanged&&timed.frameUnchanged&&timed.expired&&timed.eightHeld&&timed.eightExpired);assert.equal(timed.error,null);
 const sequence=await page.evaluate(()=>{
  const w=window.__redcat.world,g=window.__redcat.gameplay,h=g.scripts;
  const trigger=g.find('wat_trigger03')[0],controller=g.find('anim_cam03')[0],motion=h.players.get(controller.id);
  // Feed the authored three-enter threshold through Gameplay.trigger. Its
  // original commands start the zero-duration camera and original motion198;
  // all later camera changes must come from that motion's Davi markers.
  g.command(trigger,'enable');for(let i=0;i<3;i++)g.trigger(trigger);
  w.updateCamera(1,true);const angles=[w.yaw,w.pitch],samples=[],expected=['cam_waterlab05','cam_trigger11','cam_trigger12','cam_back03'].map(name=>g.find(name)[0].id);
  const first=h.camera?.id;let anglesHeld=true;
  for(let i=1;i<=301;i++){
   w.look(25,-25);w.update(.05,{forward:0,right:0,attack:true});
   if(i<=299)anglesHeld&&=w.yaw===angles[0]&&w.pitch===angles[1];
   if([59,61,151,299,301].includes(i))samples.push({time:motion.time,id:h.camera?.id,mode:h.camera?.mode});
  }
  const beforeLook={yaw:w.yaw,pitch:w.pitch};w.targeting.clear();w.look(30,-40);w.updateCamera(1,true);
  return {first,expected,samples,anglesHeld,threshold:trigger.triggerCount,finished:motion.finished,mouseResumed:w.yaw<beforeLook.yaw&&w.pitch<beforeLook.pitch,error:h.vm.lastError};
 });
 assert.equal(sequence.threshold,3);assert.equal(sequence.first,sequence.expected[0]);assert.deepEqual(sequence.samples.map(s=>s.id),[sequence.expected[0],sequence.expected[1],sequence.expected[2],sequence.expected[2],sequence.expected[3]]);assert.equal(sequence.samples.at(-1).mode,1);assert.ok(sequence.anglesHeld&&sequence.finished&&sequence.mouseResumed);assert.equal(sequence.error,null);
 const legacy=await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
  h.activateCamera(g.find('cam_waterlab')[0]);
  const save={version:1,level:w.id,position:[...w.player.position],lastSafe:[...w.player.lastSafe],yaw:w.yaw,pitch:-1.2,game:g.snapshot()};
  delete save.game.scripts.camera.manualPitch;delete save.game.scripts.camera.returnPitch;
  await app.startLevel(3,save);app.pause();
  const regional=app.world.pitch;app.gameplay.scripts.camera=null;app.world.updateCamera(1,true);
  return {regional,released:app.world.pitch,error:app.gameplay.scripts.vm.lastError};
 });
 assert.ok(Math.abs(legacy.regional-20*Math.PI/180)<1e-8);assert.equal(legacy.released,.16);assert.equal(legacy.error,null);
 assert.deepEqual(errors,[]);await mkdir('artifacts',{recursive:true});await writeFile(cameraOnly?'artifacts/camera-recovery-scenes.json':'artifacts/prop-camera-scenes.json',JSON.stringify({props,camera,timed,sequence,legacy,errors},null,2)+'\n');
 console.log(cameraOnly?'PASS authored 5/8-second camera previews resist sustained mouse/fire, saved previews retain remaining time, zero-duration camera waits for script handoff, regional mouse control and legacy-save recovery remain correct.':'PASS authored castle drawbridge control; caves overview expiry, regional mouse control, visible weapon aim and old-save recovery.');
}finally{await browser?.close();server.kill();}
