import { _electron as electron } from 'playwright';
import { mkdir, writeFile } from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve('current_work/music-loop-2026-09-28');
await mkdir(out,{recursive:true});
let app;
try {
 app=await electron.launch({args:['.','--ozone-platform=x11','--autoplay-policy=no-user-gesture-required',`--user-data-dir=${out}/electron-baseline-profile`],cwd:process.cwd(),env:{...process.env,TMPDIR:'current_work'},timeout:30000});
 const page=await app.firstWindow();const errors=[];page.on('pageerror',e=>errors.push(e.stack));
 await page.waitForFunction(()=>window.__redcat);
 const report=await page.evaluate(async()=>{
   document.querySelectorAll('audio,video').forEach(e=>e.pause());window.__redcat.audio.reset();
   const files=['level 1 - the forest.wav','level 2- -the castle.wav','level 3 - the graveyard.wav','level 4 - the caves.wav','level 5 - the castletowerr.wav'];
   const results=files.map(file=>({file,duration:null,wraps:[],ended:0,errors:[],waiting:[],stalled:0,samples:0,maxTime:0,seeked:0}));
   const elements=files.map((file,i)=>{
     const e=new Audio(`assets/audio/${encodeURIComponent(file)}`),r=results[i];e.loop=true;e.playbackRate=4;e.preservesPitch=false;e.volume=0;e.preload='auto';
     e.addEventListener('error',()=>r.errors.push({code:e.error?.code,message:e.error?.message}));
     e.addEventListener('ended',()=>r.ended++);e.addEventListener('stalled',()=>r.stalled++);e.addEventListener('seeked',()=>r.seeked++);
     e.addEventListener('waiting',()=>r.waiting.push({time:e.currentTime,readyState:e.readyState,wall:performance.now()}));return e;
   });
   const started=performance.now();await Promise.all(elements.map(e=>e.play()));
   const previous=elements.map(()=>0);await new Promise(resolve=>{const timer=setInterval(()=>{
     elements.forEach((e,i)=>{const r=results[i],t=e.currentTime;r.duration=e.duration;r.samples++;r.maxTime=Math.max(t,r.maxTime);if(previous[i]>t+1)r.wraps.push({from:previous[i],to:t,wallSeconds:(performance.now()-started)/1000});previous[i]=t;});
     if(results.every(r=>r.wraps.length>=2)||performance.now()-started>41000){clearInterval(timer);resolve();}
   },10);});
   elements.forEach((e,i)=>{results[i].final={currentTime:e.currentTime,paused:e.paused,ended:e.ended,readyState:e.readyState,networkState:e.networkState,seekable:Array.from({length:e.seekable.length},(_,j)=>[e.seekable.start(j),e.seekable.end(j)])};e.pause();});
   return {origin:location.origin,elapsedSeconds:(performance.now()-started)/1000,results};
 });
 report.pageErrors=errors;report.passed=errors.length===0&&report.results.every(r=>r.wraps.length>=2&&!r.errors.length&&!r.final.paused);
 await writeFile(path.join(out,'electron-loop-baseline.json'),JSON.stringify(report,null,2)+'\n');console.log(JSON.stringify(report,null,2));if(!report.passed)process.exitCode=1;
} finally {await app?.close();}
