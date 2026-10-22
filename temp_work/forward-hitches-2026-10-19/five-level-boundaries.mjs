import {chromium} from 'playwright';
import http from 'node:http';
import {mkdir,readFile,writeFile,readdir} from 'node:fs/promises';
import path from 'node:path';
import {createHash} from 'node:crypto';
const root=process.cwd(),base=path.resolve('temp_work/forward-hitches-2026-10-19'),phase=process.argv.includes('--after')?'after':'before';
const out=path.join(base,`${phase}-five-boundaries-${Date.now()}`);await mkdir(out,{recursive:true});process.env.TMPDIR='temp_work/forward-hitches-2026-10-19/scratch';await mkdir(process.env.TMPDIR,{recursive:true});
const sourceHashes={},replaced=new Set((await readdir(base+'/source-before')).filter(f=>f.endsWith('.js'))),mime={'.html':'text/html','.js':'text/javascript','.json':'application/json','.css':'text/css','.png':'image/png','.wav':'audio/wav','.bin':'application/octet-stream'};
const server=http.createServer(async(req,res)=>{try{let route=decodeURIComponent(new URL(req.url,'http://localhost').pathname);if(route==='/')route='/index.html';let file=path.resolve(root,'.'+route);if(!file.startsWith(root+path.sep))throw Error('path');if(phase==='before'&&route.startsWith('/src/')&&replaced.has(path.basename(route)))file=path.join(base,'source-before',path.basename(route));const bytes=await readFile(file);if(route.startsWith('/src/'))sourceHashes[route]=createHash('sha256').update(bytes).digest('hex');res.writeHead(200,{'Content-Type':mime[path.extname(file)]||'application/octet-stream','Cache-Control':'no-store'});res.end(bytes);}catch{res.writeHead(404);res.end('Not found');}});
await new Promise(r=>server.listen(0,'127.0.0.1',r));const url=`http://127.0.0.1:${server.address().port}`;let browser;const report={phase,out,sourceHashes,errors:[],levels:[],method:'Graphics-only position probes through original BSP doorway connections, not actual walking or campaign completion. Stops simulation and animation-frame main loop. Original script camera is temporarily neutralized while selecting ordinary player-room camera. Gameplay snapshot is compared before/after, after restoring original camera and player pose.'};
try{
 browser=await chromium.launchPersistentContext(out+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});const page=await browser.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
 await page.addInitScript(()=>{localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'960x540'}));localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));window.manualFrames=true;const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(t=>{if(fn.name==='frame'&&window.manualFrames)return;fn(t);});});
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 for(const level of [0,1,2,3,4]){
  const value=await page.evaluate(async level=>{
   const app=window.__redcat;if(!await app.startLevel(level))throw Error('load '+level);app.pause();const w=app.world,g=app.gameplay,s=w.geometryStream,rooms=s.rooms;
   const state=JSON.stringify(g.snapshot()),savedCamera=g.scripts.camera,savedPosition=[...w.player.position],savedYaw=w.yaw,savedPitch=w.pitch;
   g.scripts.camera=null;const edges=[...new Set(rooms.edges.flat().map(e=>e.model))],candidates=[];
   for(const model of edges){const box=rooms.portalBounds.get(model);if(!box)continue;const middle=box.min.map((v,i)=>(v+box.max[i])/2);let pair=null;
    for(const axis of [0,2].sort((a,b)=>(box.max[a]-box.min[a])-(box.max[b]-box.min[b])))for(const height of [box.min[1]+48,middle[1],box.max[1]-48])for(const margin of [40,64,96]){
     if(pair)break;const a=[...middle],b=[...middle];a[1]=b[1]=height;a[axis]=box.min[axis]-margin;b[axis]=box.max[axis]+margin;const areaA=rooms.areaAt(a),areaB=rooms.areaAt(b);
     if(areaA<0||areaB<0||areaA===areaB||!rooms.edges[areaA]?.some(e=>e.model===model&&e.area===areaB))continue;
     pair={model,axis,a:a.map((v,i)=>v-(i===1?32:0)),b:b.map((v,i)=>v-(i===1?32:0)),areaA,areaB};
    }
    if(pair){pair.distance=Math.hypot(...pair.a.map((v,i)=>v-savedPosition[i]));candidates.push(pair);}
   }
   candidates.sort((a,b)=>a.distance-b.distance);const routes=candidates.slice(0,2),frames=[],requests=[],firstRequired=[],seenRequired=new Set();let current=null,number=0;
   const request=s.request;s.request=function(chunk,...args){if(current)requests.push({frame:current.number,chunkID:this.chunks.indexOf(chunk),required:chunk.requiredForView,areas:chunk.areas,texture:chunk.group.texture,count:chunk.count,distance:chunk.bounds.distanceToPoint(w.camera.position),inView:chunk.inView});return request.call(this,chunk,...args);};
   const move=point=>{w.player.position=[...point];w.camera.position.set(point[0],point[1]+92,point[2]+140);w.camera.lookAt(point[0],point[1]+40,point[2]);w.camera.updateMatrixWorld();};
   const prepare=async()=>{w.updateRenderResidency();await s.settle();w.updateRenderResidency();await w.actorResidency.settle();w.updateActorTextureResidency();await w.actorTextures.settle();w.updateRenderResidency();w.render();};
   for(const route of routes){move(route.a);await prepare();
    for(let leg=0;leg<2;leg++){const from=leg?route.b:route.a,to=leg?route.a:route.b;const steps=Math.ceil(Math.hypot(...to.map((v,i)=>v-from[i]))/3.2);
     for(let j=0;j<steps+24;j++){
      current={number:number++,model:route.model,leg,step:j,cpu:0,queueBefore:w.streamingWork.stats.jobs};const started=performance.now();w.streamingWork.pump(number);
      const alpha=Math.min(1,(j+1)/steps);move(from.map((v,i)=>v+(to[i]-v)*alpha));w.syncPlayer(0,{});w.updateRenderResidency();w.updateActorTextureResidency();w.effects.update(0);
      for(const c of s.chunks)if(c.requiredForView&&!seenRequired.has(c)){seenRequired.add(c);firstRequired.push({frame:current.number,chunkID:s.chunks.indexOf(c),areas:c.areas,texture:c.group.texture,count:c.count,distance:c.bounds.distanceToPoint(w.camera.position)});}
      current.ready=s.readyForView&&w.actorResidency.readyForView&&w.actorTextures.readyForView;current.room=rooms.area;current.roomStats={...rooms.stats};current.position=[...w.player.position];current.pending=w.streamingWork.stats.pending;current.jobs=w.streamingWork.stats.jobs-current.queueBefore;
      if(current.ready)w.render();else{current.missing=s.chunks.filter(c=>c.requiredForView&&!c.resident).map(c=>({areas:c.areas,texture:c.group.texture,count:c.count}));current.missingActors=[...w.actorResidency.records.values()].filter(r=>r.requiredForView&&!r.rendered).length;}
      current.cpu=performance.now()-started;frames.push(current);current=null;await new Promise(r=>setTimeout(r,8));
     }
    }
   }
   s.request=request;g.scripts.camera=savedCamera;w.player.position=savedPosition;w.yaw=savedYaw;w.pitch=savedPitch;
   return {id:w.id,routes,candidateCount:candidates.length,frames,requests,firstRequired,snapshotPreserved:state===JSON.stringify(g.snapshot()),scriptError:g.scripts.vm.lastError,worldStats:{...s.stats},summary:{frames:frames.length,notReady:frames.filter(f=>!f.ready).length,roomCrossings:frames.reduce((n,f,i)=>n+Number(i>0&&f.room!==frames[i-1].room),0),maxCpu:Math.max(...frames.map(f=>f.cpu)),maxJobs:Math.max(...frames.map(f=>f.jobs)),worldRequests:requests.length}};
  },level);
  report.levels.push(value);console.log(JSON.stringify({id:value.id,routes:value.routes,summary:value.summary,snapshotPreserved:value.snapshotPreserved,misses:value.frames.filter(f=>!f.ready).slice(0,3)}));
 }
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2));await browser?.close();await new Promise(r=>server.close(r));}
