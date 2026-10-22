import { _electron as electron } from 'playwright';
import { writeFile } from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve('current_work/music-loop-2026-09-28');let app;
try {
 app=await electron.launch({args:['.','--ozone-platform=x11','--autoplay-policy=no-user-gesture-required',`--user-data-dir=${out}/electron-continuity-fallback-profile`],cwd:process.cwd(),env:{...process.env,TMPDIR:'current_work'},timeout:30000});
 const page=await app.firstWindow();const errors=[];page.on('pageerror',e=>errors.push(e.stack));await page.waitForFunction(()=>window.__redcat);
 const report=await page.evaluate(async()=>{
   document.querySelectorAll('audio,video').forEach(e=>e.pause());window.__redcat.audio.reset();
   const {GameAudio}=await import(`./src/audio.js?musicContinuity=${Date.now()}`),a=new GameAudio({master:0,createContext:()=>null});
   const delay=ms=>new Promise(r=>setTimeout(r,ms));
   const ready=async e=>{const deadline=performance.now()+5000;while(e.readyState<2){if(performance.now()>deadline)throw Error('Audio load timeout');await delay(10);}};
   const forest='level 1 - the forest.wav',combat='Endbosses.wav';
   const original=a.playMusic({sound:forest});await ready(original.element);original.element.currentTime=25;await delay(60);
   const beforeCombat=original.element.currentTime; a.playMusic({sound:combat,crossFade:true,fadeOutTimeSeconds:.1});a.update(.2);
   const remembered=a.musicPositions.get(forest),oldReleased=!a.sounds.has(original);
   const resumed=a.playMusic({sound:forest}),pendingResume={time:resumed.element.currentTime,readyState:resumed.element.readyState};await ready(resumed.element);await delay(120);
   const afterResume=resumed.element.currentTime;
   const beforeQuickReturn=resumed.element.currentTime;
   a.playMusic({sound:combat,crossFade:true,fadeOutTimeSeconds:2});a.update(.05);
   const quick=a.playMusic({sound:forest,crossFade:true,fadeInTimeSeconds:.5,fadeOutTimeSeconds:.5});
   const quickReturn={sameRecord:quick===resumed,currentTime:quick.element.currentTime,voices:a.sounds.size};
   a.pause();const pausedAt=quick.element.currentTime;await delay(250);const pausedAfter=quick.element.currentTime;
   a.resume();await delay(250);const resumedAfterPause=quick.element.currentTime;
   const report={origin:location.origin,beforeCombat,remembered,oldReleased,pendingResume,afterResume,beforeQuickReturn,quickReturn,pausedAt,pausedAfter,resumedAfterPause,
     pass:oldReleased&&pendingResume.time>=25&&afterResume>=25&&afterResume<26&&quickReturn.sameRecord&&quickReturn.voices<=2&&Math.abs(pausedAfter-pausedAt)<.03&&resumedAfterPause>pausedAfter};
   a.reset();return report;
 });report.pageErrors=errors;await writeFile(path.join(out,'electron-continuity-fallback.json'),JSON.stringify(report,null,2)+'\n');console.log(JSON.stringify(report,null,2));if(!report.pass||errors.length)process.exitCode=1;
}finally{await app?.close();}
