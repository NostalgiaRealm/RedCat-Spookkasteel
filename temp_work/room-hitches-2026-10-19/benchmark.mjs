import {chromium} from 'playwright';
import http from 'node:http';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
import {createHash} from 'node:crypto';

const root=process.cwd(),base=path.resolve('temp_work/room-hitches-2026-10-19');
const phase=process.argv.includes('--before')?'before':'after';
const routeMode=process.argv.includes('--walk')?'walk':'abrupt';
const solidCamera=process.argv.includes('--solid-camera');
const diagnosticOnly=process.argv.includes('--gates-only');
const throttle=Number(process.argv.find(a=>a.startsWith('--cpu-throttle='))?.split('=')[1]||1);
const output=path.join(base,`${phase}-${routeMode}${solidCamera?'-solid-camera':''}${throttle>1?`-cpu${throttle}`:''}-${Date.now()}`);
await mkdir(output,{recursive:true});await mkdir(path.join(base,'scratch'),{recursive:true});
process.env.TMPDIR='temp_work/room-hitches-2026-10-19/scratch';
const replaced=new Set(['main.js','world.js','world-streaming.js','actor-render-residency.js','actor-texture-stream.js','room-visibility.js']);
const mime={'.html':'text/html','.js':'text/javascript','.mjs':'text/javascript','.json':'application/json','.css':'text/css','.png':'image/png','.jpg':'image/jpeg','.wav':'audio/wav','.mp4':'video/mp4','.bin':'application/octet-stream'};
const server=http.createServer(async(req,res)=>{try{
 let route=decodeURIComponent(new URL(req.url,'http://localhost').pathname);if(route==='/')route='/index.html';
 let file=path.resolve(root,'.'+route);if(!file.startsWith(root+path.sep))throw Error('Invalid path');
 if(phase==='before'&&route.startsWith('/src/')&&replaced.has(path.basename(route)))file=path.join(base,'source-before',path.basename(route));
 res.writeHead(200,{'Content-Type':mime[path.extname(file)]||'application/octet-stream','Cache-Control':'no-store'});res.end(await readFile(file));
 }catch{res.writeHead(404);res.end('Not found');}});
await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
const url=`http://127.0.0.1:${server.address().port}`;
const saved=JSON.parse(await readFile('temp_work/room-streaming-2026-10-19/save/live-autosave.json','utf8'));
let browser;const report={phase,routeMode,solidCamera,throttle,output,errors:[],method:'Isolated headless Chrome; copied Castle basement save; fixed doorway probes and returns. Walk route advances 2.8 world units per frame (168 units/sec at 60Hz); abrupt route approaches in 16 frames. --solid-camera enables normal camera collision resolution while still applying scripted player position probes. Initial load excluded. Manual streaming/render frames yield 8 ms; incomplete views retain last completed frame. CPU throttle is a browser development-tool simulation, not an i3 hardware measurement.'};
report.sourceHashes={};for(const name of replaced){const file=phase==='before'?path.join(base,'source-before',name):path.join(root,'src',name);report.sourceHashes['src/'+name]=createHash('sha256').update(await readFile(file)).digest('hex');}
if(phase==='after')for(const name of ['streaming-work.js','streaming-gpu-preparation.js'])report.sourceHashes['src/'+name]=createHash('sha256').update(await readFile(path.join(root,'src',name))).digest('hex');
try{
 browser=await chromium.launchPersistentContext(path.join(output,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
 if(throttle>1){const cdp=await browser.newCDPSession(page);await cdp.send('Emulation.setCPUThrottlingRate',{rate:throttle});}
 await page.addInitScript(()=>{localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'960x540'}));localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
 const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(time=>{if(window.manualFrames&&fn.name==='frame')return;fn(time);});});
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 report.route=await page.evaluate(async ({saved,routeMode,solidCamera,diagnosticOnly})=>{
  const app=window.__redcat;assertReady(await app.startLevel(1,saved),'load');app.pause();window.manualFrames=true;
  const w=app.world,g=app.gameplay,s=w.geometryStream;
  for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;g.scripts.pendingCutsceneStop=null;
  w.player.noClip=!solidCamera;w.updateCamera(1,true);w.syncModels();w.syncActors(0);
  await s.settle();await w.actorResidency.settle();w.updateActorTextureResidency();await w.actorTextures.settle();w.render();
  const gates=[...new Set(s.rooms.edges.flat().map(e=>e.model))].map(model=>{
   const door=s.rooms.doors.get(model),motion=g.scripts.players.get(door?.id),meshes=w.modelMeshes.get(model)||[];
   return {model,door:door&&{id:door.id,modelIndex:door.modelIndex,open:door.open,openFraction:door.openFraction,visible:door.visible,enabled:door.enabled,collected:door.collected},
    motion:motion&&{time:motion.time,startTime:motion.motion.startTime,playing:motion.playing,started:motion.started,finished:motion.finished},
    meshes:meshes.map(mesh=>({name:mesh.name,visible:mesh.visible,opacity:mesh.material?.opacity,colorWrite:mesh.material?.colorWrite,alphaTest:mesh.material?.alphaTest})),
    portalOpen:s.rooms.portalOpen(model),portalViewOpen:s.rooms.portalViewOpen?.(model)};});
  if(diagnosticOnly)return {frames:[],legs:[],gates,room:s.rooms.stats,queue:w.streamingWork?.stats||null,finalWorld:s.stats,finalActors:w.actorResidency.stats};
  const start=[...w.player.position],route=[[-544,-143,-1384],start,[-332,-143,-1560],start,[364,-143,-1388],start,[-234,-143,-1596],start];
  let current=null;const gl=w.renderer.getContext(),wrapped={};
  for(const name of ['bufferData','bufferSubData','texImage2D','texSubImage2D']){wrapped[name]=gl[name];gl[name]=function(...args){const t=performance.now();try{return wrapped[name].apply(this,args);}finally{if(current){current[name]++;current.gpuSubmitMs+=performance.now()-t;}}};}
  const activate=s.activate;s.activate=function(...args){const t=performance.now();try{return activate.apply(this,args);}finally{if(current){current.activations++;current.activationMs+=performance.now()-t;}}};
  const frames=[],legs=[];let previous=start,number=0;
  for(let leg=0;leg<route.length;leg++){
   const destination=route[leg],begin=frames.length;
   const approachFrames=routeMode==='walk'?Math.ceil(Math.hypot(...previous.map((v,i)=>v-destination[i]))/2.8):16;
   for(let frame=0;frame<approachFrames+48;frame++){
    current={number:number++,leg,frame,activations:0,activationMs:0,bufferData:0,bufferSubData:0,texImage2D:0,texSubImage2D:0,gpuSubmitMs:0};
    const t=performance.now(),queueJobs=w.streamingWork?.stats.jobs||0;w.streamingWork?.pump(number);
    current.queueJobs=(w.streamingWork?.stats.jobs||0)-queueJobs;
    const alpha=Math.min(1,(frame+1)/approachFrames);w.player.position=previous.map((v,i)=>v+(destination[i]-v)*alpha);w.updateCamera(1,true);w.syncPlayer(0,{});
    w.updateRenderResidency();w.residencyPrepared=true;w.updateActorTextureResidency();w.effects.update(0);
    current.worldReady=s.readyForView;current.actorReady=w.actorResidency?.readyForView!==false;current.textureReady=w.actorTextures?.readyForView!==false;
    current.ready=current.worldReady&&current.actorReady&&current.textureReady;
    // Keep the old complete frame, matching the renderer's presentation guard.
    if(current.ready){w.render();current.presented=true;}else{current.presented=false;}
    current.cpuMs=performance.now()-t;current.room=s.rooms?.stats?.area;current.queuePending=w.streamingWork?.stats.pending||0;
    if(!current.ready){
     const missing=s.chunks.filter(c=>c.inView&&!c.resident),areas={};
     for(const c of missing)for(const area of c.areas||[])areas[area]=(areas[area]||0)+1;
     current.missingWorldCount=missing.length;current.missingWorldAreas=areas;
     current.cameraArea=s.rooms.areaAt(w.camera.position.toArray());current.playerArea=s.rooms.areaAt(w.player.position.map((v,i)=>v+(i===1?32:0)));current.viewAreas=s.rooms.stats.viewAreas;current.camera=w.camera.position.toArray();current.player=[...w.player.position];
     current.missingActorIDs=[...w.actorResidency.records.values()].filter(r=>r.inView&&!r.rendered).map(r=>[...w.actorInstances].find(([,a])=>a===r.root)?.[0]||r.root.name||r.root.uuid);
     current.queuePriorities=(w.streamingWork?.jobs||[]).map(j=>j.priority());
    }
    frames.push(current);current=null;
    await new Promise(resolve=>setTimeout(resolve,8));
   }
   legs.push({leg,position:destination,approachFrames,firstReady:frames.slice(begin).findIndex(f=>f.frame>=approachFrames-1&&f.ready),finalReady:frames.at(-1).ready,room:frames.at(-1).room});previous=destination;
  }
  for(const name in wrapped)gl[name]=wrapped[name];s.activate=activate;
  function assertReady(ok,context){if(!ok)throw Error('Not ready: '+context);}
  return {frames,legs,gates,queue:w.streamingWork?.stats||null,finalWorld:s.stats,finalActors:w.actorResidency.stats};
 },{saved,routeMode,solidCamera,diagnosticOnly});
 const frames=report.route.frames,values=key=>frames.map(f=>f[key]).sort((a,b)=>a-b),summary={frames:frames.length};
 for(const key of ['cpuMs','queueJobs','activations','activationMs','bufferData','bufferSubData','texImage2D','texSubImage2D','gpuSubmitMs']){const v=values(key);summary[key]={p95:v[Math.floor(v.length*.95)],max:v.at(-1),total:v.reduce((a,b)=>a+b,0)};}
 summary.incompleteFrames=frames.filter(f=>!f.ready).length;summary.incompletePresentedFrames=frames.filter(f=>!f.ready&&f.presented).length;summary.finalReady=report.route.legs.every(l=>l.finalReady);report.summary=summary;
 assert.deepEqual(report.errors,[]);assert.equal(summary.incompletePresentedFrames,0);assert.equal(summary.finalReady,true);
 console.log(JSON.stringify({phase,output,summary,legs:report.route.legs,queue:report.route.queue,...diagnosticOnly?{gates:report.route.gates,room:report.route.room}:{}}));
}finally{await writeFile(path.join(output,'report.json'),JSON.stringify(report,null,2)+'\n');await browser?.close();await new Promise(resolve=>server.close(resolve));}
