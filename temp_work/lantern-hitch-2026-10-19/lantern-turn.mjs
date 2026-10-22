import {chromium} from 'playwright';
import http from 'node:http';
import {mkdir,readFile,writeFile,readdir} from 'node:fs/promises';
import path from 'node:path';
import {createHash} from 'node:crypto';
const root=process.cwd(),base=path.resolve('temp_work/lantern-hitch-2026-10-19');
const phase=process.argv.includes('--before')?'before':'after';
const experiment=process.argv.includes('--retain-mask');
const out=path.join(base,`${phase}${experiment?'-retention-experiment':''}-turn-${Date.now()}`);await mkdir(out,{recursive:true});
process.env.TMPDIR='temp_work/lantern-hitch-2026-10-19/scratch';await mkdir(process.env.TMPDIR,{recursive:true});
const sourceHashes={};
const replaced=new Set((await readdir(path.join(base,'source-before'))).filter(f=>f.endsWith('.js')));
const mime={'.html':'text/html','.js':'text/javascript','.mjs':'text/javascript','.json':'application/json','.css':'text/css','.png':'image/png','.jpg':'image/jpeg','.wav':'audio/wav','.webm':'video/webm','.bin':'application/octet-stream'};
const server=http.createServer(async(req,res)=>{try {let route=decodeURIComponent(new URL(req.url,'http://localhost').pathname);if(route==='/')route='/index.html';let file=path.resolve(root,'.'+route);if(!file.startsWith(root+path.sep))throw Error('path');if(phase==='before'&&route.startsWith('/src/')&&replaced.has(path.basename(route)))file=path.join(base,'source-before',path.basename(route));res.writeHead(200,{'Content-Type':mime[path.extname(file)]||'application/octet-stream','Cache-Control':'no-store'});const bytes=await readFile(file);if(route.startsWith('/src/'))sourceHashes[route]=createHash('sha256').update(bytes).digest('hex');res.end(bytes);}catch{res.writeHead(404);res.end('Not found');}});
await new Promise(r=>server.listen(0,'127.0.0.1',r));const url=`http://127.0.0.1:${server.address().port}`;
const saved=JSON.parse(await readFile(path.join(base,'save/live-autosave.json'),'utf8'));
let browser;const report={phase,experiment,out,errors:[],requests:[],sourceHashes};
try{
 browser=await chromium.launchPersistentContext(out+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:.15,touchControls:'on',resolution:'1280x720',renderScale:100}));localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(time=>{if(fn.name!=='frame')return fn(time);if(window.__probe)window.__probe.before(time);fn(time);if(window.__probe)window.__probe.after(time);});
 });
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 report.initial=await page.evaluate(async saved=>{const app=window.__redcat;if(!await app.startLevel(0,saved))throw Error('load failed');const w=app.world,g=app.gameplay;window.__requestStart=performance.now();return {level:w.id,position:[...w.player.position],camera:w.camera.position.toArray(),yaw:w.yaw,pitch:w.pitch,scriptCamera:g.scripts.camera,cutscene:g.scripts.cutscene,room:w.geometryStream.rooms.stats,queue:w.streamingWork.stats};},saved);
 page.on('request',r=>{if(/assets|data/.test(r.url()))report.requests.push({time:Date.now(),url:r.url().replace(url,'')});});
 report.result=await page.evaluate(async experiment=>{
  const app=window.__redcat,w=app.world,s=w.geometryStream,a=app.audio,g=app.gameplay;
  // Instrument real main loop; camera-only probes leave RedCat and scripts in place.
  const frames=[],events=[],missing=[],baseYaw=w.yaw;let frame=0,current=null;
  if(experiment){
   const rooms=s.rooms,update=rooms.update,originalStream=s.update,lastSeen=new Map();let anchor=rooms.area;
   rooms.update=function(...args){update.apply(this,args);const now=performance.now();if(this.area!==anchor){lastSeen.clear();anchor=this.area;}
    for(let i=0;i<this.allowed.length;i++)if(this.allowed[i])lastSeen.set(i,now);
    let changed=false;for(const [area,t]of lastSeen)if(now-t<750&&!this.allowed[area]){this.allowed[area]=1;changed=true;}
    if(changed){this.revision++;this.grid.clear();this.stats.allowedAreas=[...this.allowed.keys()].filter(i=>this.allowed[i]);}
   };
   s.update=function(...args){const value=originalStream.apply(this,args);for(const c of this.chunks)if(!c.request&&c.mesh.visible&&c.bounds.distanceToPoint(w.camera.position)<=this.viewRadius&&(c.group.model===0?rooms.areasAllowed(c.areas):this.roomBoundsAllowed(c.bounds))){c.preloadPriority=0;this.request(c);}return value;};
  }
  const originalUpdate=w.update;w.update=function(...args){if(current)current.updated=true;return originalUpdate.apply(this,args);};
  for(const method of ['pause','resume']){const original=a[method];a[method]=function(...args){events.push({frame,method,t:performance.now()});return original.apply(this,args);};}
  const request=s.request;s.request=function(chunk,...args){if(frame>0)missing.push({frame,kind:'world',group:chunk.group.texture,areas:chunk.areas,count:chunk.count,bounds:[chunk.bounds.min.toArray(),chunk.bounds.max.toArray()],inView:chunk.inView});return request.call(this,chunk,...args);};
  const sources=new WeakMap();let sourceSerial=0;
  const music=()=>{const record=a.keyed.get('music'),source=record?.element.source;if(source&&!sources.has(source))sources.set(source,++sourceSerial);return {name:record?.name,time:record?.element.currentTime,buffered:record?.element.nativeBuffered,source:!!source,sourceID:source?sources.get(source):null,paused:a.paused};};
  const gl=w.renderer.getContext(),originalGL={};for(const method of ['bufferData','bufferSubData','texImage2D','texSubImage2D']){originalGL[method]=gl[method];gl[method]=function(...args){if(current)current[method]++;return originalGL[method].apply(this,args);};}
  const actorIDs=new Map([...w.actorInstances].map(([id,root])=>[root,id]));
  let previous=performance.now();
  window.__probe={before(t){if(frame>=420)return;current={frame,dt:t-previous,started:performance.now(),updated:false,bufferData:0,bufferSubData:0,texImage2D:0,texSubImage2D:0,queueBefore:w.streamingWork.stats.jobs};previous=t;
    // Wait half a second, sweep left toward the first fairy lantern, hold,
    // return, then repeat the same turn to detect repeated residency churn.
    const phase=frame<30?0:frame<90?(frame-30)/60:frame<150?1:frame<210?1-(frame-150)/60:frame<240?0:frame<300?(frame-240)/60:frame<360?1:1-(frame-360)/60;
    w.yaw=baseYaw+phase*2.0;
  },after(t){if(!current)return;current.cpu=performance.now()-current.started;current.queueJobs=w.streamingWork.stats.jobs-current.queueBefore;current.ready={world:s.readyForView,actors:w.actorResidency.readyForView,textures:w.actorTextures.readyForView};current.camera=w.camera.position.toArray();current.cameraLeaf=s.visibility.findLeaf(current.camera);current.cameraArea=s.rooms.areaAt(current.camera);current.playerArea=s.rooms.area;current.room={...s.rooms.stats};current.music=music();current.pending=w.streamingWork.stats.pending;current.worldStats={...s.stats};current.actorStats={...w.actorResidency.stats};current.preloadAreas=s.rooms.stats.preloadAreas;
   current.farBossResident=[...w.actorResidency.records.values()].some(r=>actorIDs.get(r.root)==='MovingEnemy1'&&r.resident);
   if(!current.updated||!Object.values(current.ready).every(Boolean)){current.missingWorld=s.chunks.filter(c=>c.requiredForView&&!c.resident).map(c=>({areas:c.areas,texture:c.group.texture,count:c.count}));current.missingActors=[...w.actorResidency.records.values()].filter(r=>r.requiredForView&&!r.rendered).map(r=>({id:[...w.actorInstances].find(([,a])=>a===r.root)?.[0],name:r.root.name}));}
   frames.push(current);current=null;frame++;
  }};
  while(frame<420&&app.mode==='playing')await new Promise(r=>setTimeout(r,50));window.__probe=null;w.update=originalUpdate;s.request=request;for(const method in originalGL)gl[method]=originalGL[method];
  return {frames,events,requests:missing,mode:app.mode,baseYaw,room:s.rooms.stats,queue:w.streamingWork.stats,music:music(),scriptError:g.scripts.vm.lastError};
 },experiment);
 await page.screenshot({path:out+'/final.png'});
 const f=report.result.frames;report.summary={frames:f.length,holds:f.filter(x=>!x.updated).length,notReady:f.filter(x=>!Object.values(x.ready).every(Boolean)).length,maxCpu:Math.max(...f.map(x=>x.cpu)),maxDt:Math.max(...f.map(x=>x.dt)),pause:report.result.events.filter(e=>e.method==='pause').length,resume:report.result.events.filter(e=>e.method==='resume').length,requests:report.result.requests.length,networkRequests:report.requests.length,maxJobs:Math.max(...f.map(x=>x.queueJobs)),maxBufferData:Math.max(...f.map(x=>x.bufferData)),maxTexUploads:Math.max(...f.map(x=>x.texImage2D+x.texSubImage2D)),musicSourceIDs:[...new Set(f.map(x=>x.music.sourceID))],peakVertices:Math.max(...f.map(x=>x.worldStats.residentVertices)),lastWorld:f.at(-1).worldStats,farBossEverResident:f.some(x=>x.farBossResident)};console.log(JSON.stringify({phase,out,initial:report.initial,summary:report.summary,misses:f.filter(x=>!x.updated).slice(0,10),worldRequests:report.result.requests.slice(0,10)},null,2));
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2));await browser?.close();await new Promise(r=>server.close(r));}
