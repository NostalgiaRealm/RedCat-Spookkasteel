import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

// Isolated original-level fixtures; no desktop session or user save is opened.
const out=path.resolve(`current_work/camera-wall-overhead-2026-10-03/scene-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'current_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'4336'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try {
 context=await chromium.launchPersistentContext(path.join(out,`scene-profile-${Date.now()}`),{
  executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
  viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required'],
 });
 const page=await context.newPage(),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));
 page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:1})));
 await page.goto('http://127.0.0.1:4336/?skipIntro');
 await page.waitForFunction(()=>window.__redcat);
 assert.equal(await page.evaluate(()=>window.__redcat.startLevel(1)),true);
 await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
  app.pause();document.getElementById('pause').hidden=true;
  for(const player of h.players.values())player.stop();
  h.cutscene=false;h.camera=null;h.enemiesFrozen=true;h.playerVisible=true;
  for(const object of g.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
  w.targeting.clear();w.settings.camera='third';w.player.noClip=false;
  w.syncModels();w.syncActors(0);
  const {cameraInsidePlayer}=await import('/src/third-person-camera.js');
  const {Vector3,Box3}=await import('three');
  const trace=(a,b)=>w.collider.trace(a,b,[-4,-4,-4],[4,4,4],w.physicalModels);
  const frame=()=>{
   const position=w.camera.position.toArray(),player=[...w.player.position],anchor=[player[0],player[1]+43,player[2]];
   const occupied=trace(position,position),line=trace(anchor,position);
   const desired=[anchor[0]+145*Math.sin(w.yaw)*Math.cos(w.pitch),anchor[1]+145*Math.sin(w.pitch)+13,anchor[2]+145*Math.cos(w.yaw)*Math.cos(w.pitch)];
   return {position,player,occupied:occupied.startSolid,lineFraction:line.fraction,insideBody:cameraInsidePlayer(position,player),
    visible:w.redcat.visible,height:position[1]-player[1],yaw:w.yaw,pitch:w.pitch,
    desiredDistance:Math.hypot(...desired.map((v,i)=>v-position[i])),legacy:trace(anchor,desired)};
  };
  const place=(position,yaw,pitch=.16)=>{
   w.player.position=[...position];w.player.resetVelocity();w.player.grounded=true;w.player.movementRecovery.reset();
   w.yaw=yaw;w.pitch=pitch;w.syncPlayer(0,{});w.updateCamera(1,true);return frame();
  };
  const step=(input,dt=1/60)=>{w.player.update(dt,input,w.yaw,w.pitch);w.syncPlayer(dt,input);w.updateCamera(dt);return frame();};
  const capture=async()=>{await w.geometryStream.settle();w.render();return w.renderer.domElement.toDataURL('image/png').split(',')[1];};
  window.__wallFixture={w,place,step,frame,trace,capture,Vector3,Box3};
 });
 const wall=await page.evaluate(async()=>{
  const f=window.__wallFixture,{w}=f;
  const initial=f.place([-85,-31.95,-94],Math.PI/2);
  const images={normal:await f.capture()},approach=[];
  for(let i=0;i<240;i++)approach.push(f.step({forward:-1,right:0}));
  const atWall=approach.at(-1);images.overhead=await f.capture();
  // Reconstruct the prior chest-to-wall camera at this same valid player pose.
  const fixedPose=w.camera.position.clone(),fixedRotation=w.camera.quaternion.clone();
  w.camera.position.fromArray(atWall.legacy.end);
  const anchor=new f.Vector3(...w.player.position).add(new f.Vector3(0,43,0));
  w.camera.lookAt(anchor.add(new f.Vector3(-Math.sin(w.yaw)*Math.cos(w.pitch),-Math.sin(w.pitch),-Math.cos(w.yaw)*Math.cos(w.pitch)).multiplyScalar(80)));
  images.before=await f.capture();w.camera.position.copy(fixedPose);w.camera.quaternion.copy(fixedRotation);
  const retreat=[];for(let i=0;i<105;i++)retreat.push(f.step({forward:1,right:0}));
  for(let i=0;i<60;i++)retreat.push(f.step({forward:0,right:0}));
  images.recovered=await f.capture();
  return {initial,atWall,approach,retreat,images};
 });
 for(const [name,image] of Object.entries(wall.images))await writeFile(path.join(out,`castle-wall-${name}.png`),Buffer.from(image,'base64'));
 delete wall.images;
 const confined=await page.evaluate(async()=>{
  const f=window.__wallFixture,{w}=f,results=[];
  // Actual authored rooms: the second has only 28 units above the chest.
  for(const fixture of [
   {name:'castle-low-ceiling',position:[-832.95,-23.95,-1407],yaw:Math.PI*1.5},
   {name:'castle-sloped-ceiling',position:[-788.0869370602062,-23.95,-1315.05],yaw:Math.PI*15/8},
  ]) {
   const start=f.place(fixture.position,fixture.yaw,0),frames=[];
   const playerHull=w.collider.trace(w.player.position,w.player.position,w.player.mins,w.player.maxs,w.physicalModels);
   const anchor=[w.player.position[0],w.player.position[1]+43,w.player.position[2]],overhead=f.trace(anchor,[anchor[0],anchor[1]+150,anchor[2]]);
   for(let i=0;i<60;i++){w.syncPlayer(1/60,{});w.updateCamera(1/60);frames.push(f.frame());}
   results.push({...fixture,start,frames,playerOccupied:playerHull.startSolid,overheadFraction:overhead.fraction,image:await f.capture()});
  }
  return results;
 });
 for(const scene of confined){await writeFile(path.join(out,`${scene.name}.png`),Buffer.from(scene.image,'base64'));delete scene.image;}
 const report={wall,confined,errors};
 await writeFile(path.join(out,'camera-wall-scenes.json'),JSON.stringify(report,null,2)+'\n');
 assert.deepEqual(errors,[]);
 assert.equal(wall.initial.legacy.fraction,1,'the original castle room starts with a clear normal rear view');
 assert.ok(wall.initial.desiredDistance<1e-6);
 assert.ok(Math.abs(wall.atWall.player[0]-276.95)<.2,'actual backward movement reaches the authored castle wall');
 assert.ok(wall.atWall.legacy.fraction<.15,'the fixture reproduces the old camera being pressed into the player');
 assert.ok(wall.atWall.height>85,'camera rises above RedCat at the wall');
 assert.equal(wall.atWall.visible,true,'RedCat stays visible in the overhead view');
 assert.ok(wall.retreat.at(-1).desiredDistance<.05,'normal rear view returns after walking away');
 for(const [name,frames] of [['approach',wall.approach],['retreat',wall.retreat],...confined.map(s=>[s.name,s.frames])])for(const [i,frame] of frames.entries()){
  assert.equal(frame.occupied,false,`${name} frame ${i}: camera hull is outside level solids`);
  assert.ok(frame.lineFraction>.999,`${name} frame ${i}: camera remains connected to the player through free space`);
  assert.equal(frame.insideBody,false,`${name} frame ${i}: camera stays outside the padded player model`);
  assert.equal(frame.visible,true,`${name} frame ${i}: an external viewpoint keeps RedCat visible`);
 }
 for(const scene of confined){assert.equal(scene.playerOccupied,false,`${scene.name}: player fixture is not inside solids`);assert.ok(scene.overheadFraction<.5,`${scene.name}: real low ceiling restricts the overhead route`);}
 for(const frame of [...wall.approach,...wall.retreat]){assert.equal(frame.yaw,Math.PI/2);assert.equal(frame.pitch,.16);}
 console.log('PASS actual castle backward wall approach and retreat, camera hull/body clearance, overhead visibility, low/sloped ceilings and unchanged aim angles.');
 console.log(JSON.stringify({atWall:wall.atWall,recovered:wall.retreat.at(-1),confined:confined.map(s=>({name:s.name,overheadFraction:s.overheadFraction,pose:s.frames.at(-1)})),evidence:out},null,2));
}finally{await context?.close();server.kill();}
