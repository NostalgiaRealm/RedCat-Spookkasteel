import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile,readFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const output=path.resolve('temp_work/room-streaming-2026-10-19',`render-${Date.now()}`);
process.env.TMPDIR='temp_work/room-streaming-2026-10-19/scratch';
await mkdir(output,{recursive:true});await mkdir(process.env.TMPDIR,{recursive:true});
const saved=JSON.parse(await readFile('temp_work/room-streaming-2026-10-19/save/live-autosave.json','utf8'));
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
let browser;const report={errors:[],views:[]};
try {
 const url=await new Promise((resolve,reject)=>{server.stdout.once('data',d=>resolve(String(d).trim().split(' ').at(-1)));server.once('error',reject);});
 browser=await chromium.launchPersistentContext(output+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage();page.on('pageerror',e=>report.errors.push(e.stack));page.on('console',m=>{if(m.type()==='error')report.errors.push(m.text());});
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'960x540'}));
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(time=>{if(window.manualFrames&&fn.name==='frame')return;fn(time);});
 });
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 for(const index of process.argv.includes('--basement-only')?[1]:[1,0,2,3,4]) {
  const result=await page.evaluate(async ({index,saved})=>{
   const app=window.__redcat;const ok=await app.startLevel(index,index===1?saved:null);if(!ok)throw new Error('Level load failed');
   app.pause();window.manualFrames=true;
   const w=app.world,g=app.gameplay,T=await import('three'),s=w.geometryStream;
   for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;g.scripts.pendingCutsceneStop=null;
   w.updateCamera(1,true);w.syncModels();w.syncActors(0);
   const start={player:[...w.player.position],camera:w.camera.position.toArray(),rotation:w.camera.quaternion.toArray(),noClip:w.player.noClip};
   const boss=g.objects.find(o=>o.kind==='enemy'&&o.boss)||g.find('brutus')[0]||g.objects.filter(o=>o.kind==='enemy').at(-1);
   const views=[{name:index===1?'saved-basement':'start',...start},
    {name:'boss',player:boss.position,camera:boss.position.map((v,i)=>v+[0,120,450][i]),target:boss.position,noClip:false}];
   if(index===1)views.splice(1,0,{name:'basement-outside-camera',player:start.player,camera:[-100,100,-1050],target:[-100,-120,-1450],noClip:true});
   const results=[];
   for(const view of views) {
    w.player.position=[...view.player];w.player.noClip=view.noClip;w.camera.position.fromArray(view.camera);
    w.syncPlayer(0,{});
    if(view.rotation)w.camera.quaternion.fromArray(view.rotation);else w.camera.lookAt(...view.target);
    const state=JSON.stringify(g.snapshot());
    const settle=async()=>{await s.settle();w.updateRenderResidency();await w.actorResidency.settle();w.updateActorTextureResidency();await w.actorTextures.settle();w.updateRenderResidency();w.effects.update(0);};
    await settle();
    const stats=()=>({world:{...s.stats},actors:{...w.actorResidency.stats},decodedActorTextures:[...w.actorTextures.entries.values()].filter(e=>e.ready).length,
     areas:[...new Set(s.chunks.filter(c=>c.resident&&c.group.model===0).flatMap(c=>c.areas))].sort((a,b)=>a-b),room:{...s.rooms.stats}});
    const after=stats();if(view.name==='basement-outside-camera')after.renderedActors=[...w.actorResidency.records.values()].filter(r=>r.rendered).map(r=>({id:[...w.actorInstances].find(([,a])=>a===r.root)?.[0],position:r.root.position.toArray(),area:s.rooms.areaAt(r.root.position.toArray()),bounds:[r.bounds.min.toArray(),r.bounds.max.toArray()]}));
    const rt=new T.WebGLRenderTarget(640,360),draw=()=>{w.renderer.setRenderTarget(rt);w.renderer.render(w.scene,w.camera);const pixels=new Uint8Array(640*360*4);w.renderer.readRenderTargetPixels(rt,0,0,640,360,pixels);const triangles=w.renderer.info.render.triangles,calls=w.renderer.info.render.calls;w.renderer.setRenderTarget(null);return {pixels,triangles,calls};};
    const filtered=draw();w.renderer.render(w.scene,w.camera);const image=w.renderer.domElement.toDataURL();
    const update=s.rooms.update;s.rooms.update=()=>{s.rooms.active=false;s.rooms.visibilityPosition=null;};await settle();const before=stats(),baseline=draw();w.renderer.render(w.scene,w.camera);const reference=w.renderer.domElement.toDataURL();
    s.rooms.update=update;await settle();rt.dispose();
    let different=0,maxDelta=0;for(let i=0;i<filtered.pixels.length;i+=4){let delta=0;for(let a=0;a<3;a++)delta+=Math.abs(filtered.pixels[i+a]-baseline.pixels[i+a]);maxDelta=Math.max(maxDelta,delta);if(delta>30)different++;}
    results.push({id:w.id,name:view.name,player:view.player,camera:view.camera,after,before,filtered:{triangles:filtered.triangles,calls:filtered.calls},baseline:{triangles:baseline.triangles,calls:baseline.calls},differentPixels:different,maxDelta,totalPixels:640*360,statePreserved:state===JSON.stringify(g.snapshot()),scriptError:g.scripts.vm.lastError,image,reference});
   }
   // Exercise actual room crossings without changing any door or puzzle state.
   if(index===1) {
    const crossings=[];
    for(const position of [start.player,[-544,-143,-1384],start.player,[-332,-143,-1560],start.player,[364,-143,-1388],start.player,[-234,-143,-1596],start.player]) {
     w.player.position=[...position];w.player.noClip=true;w.updateCamera(1,true);await s.settle();w.updateRenderResidency();await w.actorResidency.settle();
     crossings.push({position,room:{...s.rooms.stats},ready:s.readyForView,vertices:s.stats.residentVertices});
    }
    window.roomCrossings=crossings;
    const remote=[];
    for(const camera of [[0,140,-1800],[10000,5000,10000]]) {
     w.player.position=[...start.player];g.scripts.camera={mode:2};w.camera.position.fromArray(camera);w.camera.lookAt(...start.player);await s.settle();
     remote.push({camera,room:{...s.rooms.stats},ready:s.readyForView});
    }
    g.scripts.camera=null;w.camera.position.fromArray(start.camera);await s.settle();remote.push({returned:true,room:{...s.rooms.stats},ready:s.readyForView});window.roomRemoteViews=remote;
   }
   return results;
  },{index,saved});
  for(const view of result){for(const key of ['image','reference']){await writeFile(output+`/${view.id}-${view.name}-${key}.png`,Buffer.from(view[key].split(',')[1],'base64'));delete view[key];}report.views.push(view);console.log(JSON.stringify(view));}
 }
 report.crossings=await page.evaluate(()=>window.roomCrossings);report.remote=await page.evaluate(()=>window.roomRemoteViews);assert.deepEqual(report.errors,[]);
 for(const view of report.views){assert.equal(view.statePreserved,true);assert.equal(view.scriptError,null);if(view.name!=='basement-outside-camera')assert.ok(view.differentPixels/view.totalPixels<.015,JSON.stringify(view));}
 const basement=report.views.find(v=>v.name==='saved-basement');assert.equal(basement.after.room.area,19);assert.ok(!basement.after.areas.includes(18));assert.ok(basement.after.world.residentVertices<basement.before.world.residentVertices);
 const tower=report.views.find(v=>v.id==='lvl04a'&&v.name==='boss');if(tower){assert.equal(tower.after.room.area,1);assert.ok(tower.differentPixels/tower.totalPixels<.001);}
 assert.ok(report.crossings.every(c=>c.ready));
 assert.deepEqual(report.crossings.map(c=>c.room.area),[19,22,19,20,19,16,19,20,19]);
 assert.equal(report.remote[1].room.active,false);assert.equal(report.remote[2].room.area,19);
}finally{await writeFile(output+'/report.json',JSON.stringify(report,null,2)+'\n');await browser?.close();server.kill();}
