import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const label=process.argv[2]||'camera-local-scenes';
const output=path.resolve('temp_work/distant-work-2026-10-19',label);
process.env.TMPDIR='temp_work/distant-work-2026-10-19/scratch';
await mkdir(output,{recursive:true});await mkdir(process.env.TMPDIR,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const report={levels:[],errors:[]};let context;
try {
 const url=await new Promise(resolve=>server.stdout.once('data',data=>resolve(String(data).trim().split(' ').at(-1))));
 context=await chromium.launchPersistentContext(output+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage(),requests=[];page.on('pageerror',e=>report.errors.push(e.stack));
 page.on('request',request=>{if(/assets\/actors\/textures\//.test(request.url()))requests.push(new URL(request.url()).pathname);});
 page.on('console',message=>{if(message.type()==='error')report.errors.push(message.text());});
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'960x540'}));
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(time=>{if(window.manualFrames&&fn.name==='frame')return;fn(time);});
 });
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 for(const index of process.argv[3]==='forest-only'?[0]:[0,1,2,3,4]) {
  const result=await page.evaluate(async index=>{
   const app=window.__redcat;await app.startLevel(index);app.pause();window.manualFrames=true;
   const w=app.world,g=app.gameplay,T=await import('three'),{WORLD_STREAMING:cfg}=await import('./src/world-streaming.js'),s=w.geometryStream;
   for(const player of g.scripts.players.values())player.stop();g.scripts.cutscene=false;g.scripts.camera=null;g.scripts.pendingCutsceneStop=null;
   w.updateCamera(1,true);w.syncModels();w.syncActors(0);
   const roots=w.actorRoots,initialCamera=w.camera.position.clone(),initialRotation=w.camera.quaternion.clone(),gameState=JSON.stringify(g.snapshot());
   const boss=g.objects.find(o=>o.kind==='enemy'&&o.boss)||g.find('brutus')[0]||g.objects.filter(o=>o.kind==='enemy').sort((a,b)=>Math.hypot(...b.position.map((v,i)=>v-w.player.position[i]))-Math.hypot(...a.position.map((v,i)=>v-w.player.position[i])))[0];
   const target=new T.Vector3(...boss.position),camera=target.clone().add(new T.Vector3(0,120,450));let time=performance.now()/1000;
   const settle=async()=>{await s.settle();w.actorResidency.update(roots,w.camera,time);await w.actorResidency.settle?.();w.updateRenderResidency();w.effects.update(0);w.render();};
   // Looking toward the far arena may not pull it into residency.
   w.camera.lookAt(target);await settle();
   const finalChunks=s.chunks.filter(c=>c.bounds.distanceToPoint(target)<700&&c.bounds.distanceToPoint(initialCamera)>cfg.viewRadius);
   const start={camera:initialCamera.toArray(),target:target.toArray(),distance:initialCamera.distanceTo(target),world:{...s.stats},actors:{...w.actorResidency.stats},finalChunks:finalChunks.map(c=>({model:c.group.model,distance:c.bounds.distanceToPoint(initialCamera),resident:c.resident,requested:!!c.request,vertices:c.mesh.geometry.attributes.position.count}))};
   const bossRoot=w.actorInstances.get(boss.id),bossMaps=new Set();bossRoot?.traverse(mesh=>{for(const material of Array.isArray(mesh.material)?mesh.material:[mesh.material])if(material?.map)bossMaps.add(material.map);});
   const bossTextures=()=>[...w.actorTextures.entries.values()].filter(e=>bossMaps.has(e.texture)).map(e=>({url:e.url,requested:!!e.promise,loaded:e.ready}));
   const startImage=w.renderer.domElement.toDataURL(),actorTexturesAtStart=w.actorTextures?{created:w.actorTextures.entries.size,loaded:[...w.actorTextures.entries.values()].filter(e=>e.ready).length,bossTextures:bossTextures()}:null;
   w.camera.position.copy(camera);w.camera.lookAt(target);time+=20;await settle();
   const near={camera:camera.toArray(),world:{...s.stats},actors:{...w.actorResidency.stats},finalLoaded:finalChunks.filter(c=>c.resident).length,visible:s.chunks.filter(c=>c.inView).length,ready:s.readyForView,bossTextures:bossTextures()};
   const nearImage=w.renderer.domElement.toDataURL();
   const statePreserved=gameState===JSON.stringify(g.snapshot());
   w.camera.position.copy(initialCamera);w.camera.quaternion.copy(initialRotation);time+=20;await settle();s.update(time);w.actorResidency.update(roots,w.camera,time);
   const returned={world:{...s.stats},finalStillLoaded:finalChunks.filter(c=>c.resident).length,finalRequested:finalChunks.filter(c=>c.request).length};
   return {index,id:w.id,start,near,returned,actorTexturesAtStart,statePreserved,scriptError:g.scripts.vm.lastError,startImage,nearImage};
  },index);
  for(const key of ['startImage','nearImage']){await writeFile(output+`/level-${index}-${key}.png`,Buffer.from(result[key].split(',')[1],'base64'));delete result[key];}
  report.levels.push(result);console.log(JSON.stringify(result));
  assert.equal(result.statePreserved,true);assert.equal(result.scriptError,null);assert.equal(result.near.ready,true);
  assert.ok(result.near.visible>0);
  if(index===0){assert.ok(result.start.finalChunks.length>0);assert.ok(result.start.finalChunks.every(c=>!c.resident&&!c.requested&&c.vertices===0));assert.ok(result.near.finalLoaded>0);assert.equal(result.returned.finalStillLoaded,0);assert.equal(result.returned.finalRequested,0);assert.ok(result.actorTexturesAtStart.bossTextures.length>0);assert.ok(result.actorTexturesAtStart.bossTextures.every(t=>!t.requested&&!t.loaded));assert.ok(result.near.bossTextures.every(t=>t.requested&&t.loaded));}
 }
 assert.deepEqual(report.errors,[]);
} finally {await writeFile(output+'/report.json',JSON.stringify(report,null,2)+'\n');await context?.close();server.kill();}
