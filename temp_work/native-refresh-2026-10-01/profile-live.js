(async()=>{
 const E=process.mainModule.require('electron'),fs=process.mainModule.require('node:fs'),w=E.BrowserWindow.getAllWindows()[0],wc=w.webContents;
 const root='/mnt/Storage/Cloud/Games/RedCat_Spookkasteel_Rebuild_2026/RCSPOOK_NEW/current_work/native-refresh-2026-10-01/';
 const label='live-before';
 const attached=wc.debugger.isAttached();if(!attached)wc.debugger.attach('1.3');
 try {
  await wc.executeJavaScript(`(()=>{
   const a=window.__redcat,w=a.world,g=a.gameplay;
   const m=window.__frameProfile={frames:[],totals:{},counts:{},restore:[],position:[...w.player.position],level:w.id,start:performance.now()};
   const wrap=(o,k,label)=>{const fn=o?.[k];if(typeof fn!=='function')return;const wrapped=function(...args){const start=performance.now();try{return fn.apply(this,args);}finally{m.totals[label]=(m.totals[label]||0)+performance.now()-start;m.counts[label]=(m.counts[label]||0)+1;}};o[k]=wrapped;m.restore.push(()=>{if(o[k]===wrapped)o[k]=fn;});};
   for(const key of ['update','render','syncModels','syncMountedActorCollisions','syncActors','syncActorLighting','updateCamera','updateRenderResidency','syncPlayer','syncProjectiles'])wrap(w,key,key);
   wrap(w.renderer,'render','renderer');wrap(g,'update','gameplay');wrap(w.effects,'update','effects');wrap(w.geometryStream,'update','stream');wrap(w.actorResidency,'update','actors');wrap(a.audio,'update','audio');
   let last=performance.now();const sample=now=>{if(window.__frameProfile!==m)return;m.frames.push(now-last);last=now;requestAnimationFrame(sample);};requestAnimationFrame(sample);
  })()`);
  await wc.debugger.sendCommand('Profiler.enable');await wc.debugger.sendCommand('Profiler.start');
  await new Promise(resolve=>setTimeout(resolve,7000));
  const profile=await wc.debugger.sendCommand('Profiler.stop');
  fs.writeFileSync(root+label+'.cpuprofile',JSON.stringify(profile.profile));
  const stats=await wc.executeJavaScript(`(()=>{const m=window.__frameProfile;delete window.__frameProfile;for(const restore of m.restore)restore();delete m.restore;const sorted=[...m.frames].sort((a,b)=>a-b);return {...m,end:performance.now(),fps:1000/((performance.now()-m.start)/m.frames.length),p50:sorted[Math.floor(sorted.length*.5)],p95:sorted[Math.floor(sorted.length*.95)],mode:window.__redcat.mode};})()`);
  fs.writeFileSync(root+label+'.json',JSON.stringify(stats,null,2));
  const {frames,...summary}=stats;return summary;
 } finally {if(!attached)wc.debugger.detach();}
})()
