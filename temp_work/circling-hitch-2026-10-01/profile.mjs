import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
process.env.TMPDIR='current_work';
const label=process.argv[2]||'before',folder=resolve(`current_work/circling-hitch-2026-10-01/${label}`);
await mkdir(folder,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4319'},stdio:['ignore','pipe','inherit']});
await new Promise((r,j)=>{server.stdout.once('data',r);server.once('error',j);});
let context;const reports=[];
try{
 context=await chromium.launchPersistentContext(resolve(folder,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:960,height:540}});
 const page=context.pages()[0];page.on('pageerror',e=>console.log('ERROR '+e.stack));
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0,touchControls:'on'}));
  const raf=window.requestAnimationFrame.bind(window);
  window.requestAnimationFrame=fn=>raf(now=>{
   if(!window.measure||fn.name!=='frame'){fn(now);return;}
   const m=window.measure,row={start:performance.now(),interval:now-(m.lastRAF??now),timings:{},counts:{}};m.lastRAF=now;m.row=row;
   fn(now);row.cpu=performance.now()-row.start;row.gameTime=window.__redcat.gameplay.time;row.ready=window.__redcat.world.geometryStream.readyForView;row.audioPaused=window.__redcat.audio.paused;
   row.position=[...window.__redcat.world.player.position];m.frames.push(row);m.row=null;
  });
 });
 await page.goto('http://127.0.0.1:4319/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 for(const index of [2,1]){
  await page.evaluate(async index=>{
   window.measure=null;const a=window.__redcat;await a.startLevel(index);a.pause();const w=a.world,g=a.gameplay,h=g.scripts;
   for(const player of h.players.values())player.stop();h.cutscene=false;h.camera=null;h.pendingCutsceneStop=null;h.enemiesFrozen=false;for(const o of g.objects)if(['trigger','fairy'].includes(o.kind))o.enabled=false;g.damage=()=>{};w.updateCamera(1,true);await w.geometryStream.settle();w.updateRenderResidency();w.effects.update(0);w.render();
   const update=w.update;
   w.update=function(dt,input){return update.call(this,dt,{...input,forward:.35,turn:.75});};
   const wrap=(object,key,label=key)=>{const f=object?.[key];if(typeof f!=='function')return;object[key]=function(...args){const r=window.measure?.row,t=performance.now();try{return f.apply(this,args);}finally{if(r){r.timings[label]=(r.timings[label]||0)+performance.now()-t;r.counts[label]=(r.counts[label]||0)+1;}}};};
   for(const key of ['update','render','syncModels','syncActors','syncActorLighting','syncMountedActorCollisions','updateCamera','updateRenderResidency'])wrap(w,key,'world.'+key);
   wrap(w.renderer,'render','gpuSubmit');wrap(g,'update','gameplay');wrap(g.navigation,'pursuitTarget');wrap(w.effects,'update','effects');
   wrap(w.geometryStream,'update','stream');wrap(w.geometryStream,'activate','chunkActivate');wrap(w.geometryStream,'unload','chunkUnload');wrap(w.geometryStream.textures,'load','textureLoad');wrap(w.geometryStream.textures,'release','textureRelease');
   wrap(w.actorResidency,'update','actorResidency');wrap(w.collider,'trace','trace');wrap(a.audio,'update','audio');wrap(a.audio,'pause','pauseAudio');
   for(const key of ['bufferData','bufferSubData','texImage2D','texSubImage2D','compileShader','linkProgram'])wrap(w.renderer.getContext(),key,'gl.'+key);
   window.measure={frames:[],level:w.id,begin:performance.now()};a.resume();
  },index);
  const cdp=await context.newCDPSession(page);await cdp.send('Profiler.enable');await cdp.send('Profiler.start');
  await page.waitForTimeout(16000);
  const {profile}=await cdp.send('Profiler.stop');await writeFile(resolve(folder,`level-${index}.cpuprofile`),JSON.stringify(profile));
  const report=await page.evaluate(()=>{
   const a=window.__redcat,m=window.measure;window.measure=null;a.pause();
   const quantile=(v,p)=>[...v].sort((a,b)=>a-b)[Math.floor((v.length-1)*p)]||0;
   const summarize=rows=>({frames:rows.length,cpu:{median:quantile(rows.map(r=>r.cpu),.5),p95:quantile(rows.map(r=>r.cpu),.95),max:Math.max(...rows.map(r=>r.cpu))},interval:{p95:quantile(rows.map(r=>r.interval),.95),max:Math.max(...rows.map(r=>r.interval))},waitFrames:rows.filter(r=>!r.ready||r.audioPaused).length,counts:rows.reduce((a,r)=>{for(const [k,n]of Object.entries(r.counts))a[k]=(a[k]||0)+n;return a;},{}),timings:rows.reduce((a,r)=>{for(const [k,n]of Object.entries(r.timings))a[k]=(a[k]||0)+n;return a;},{})});
   return {...m,summary:summarize(m.frames),rounds:[0,1,2].map(i=>summarize(m.frames.filter(r=>(r.start-m.begin)>=i*5000&&(r.start-m.begin)<(i+1)*5000))),slow:m.frames.filter(r=>r.cpu>30||r.interval>40).sort((a,b)=>b.cpu-a.cpu).slice(0,20),stream:a.world.geometryStream.stats};
  });
  reports.push(report);await writeFile(resolve(folder,`level-${index}.json`),JSON.stringify(report,null,2));console.log(JSON.stringify({level:report.level,summary:report.summary,rounds:report.rounds,slow:report.slow.slice(0,3)}));
 }
}finally{await writeFile(resolve(folder,'report.json'),JSON.stringify(reports,null,2));await context?.close();server.kill();}
