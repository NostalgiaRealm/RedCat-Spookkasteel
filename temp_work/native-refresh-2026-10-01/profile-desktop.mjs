import {_electron as electron} from 'playwright';
import {readFile,writeFile,mkdir} from 'node:fs/promises';
import {resolve} from 'node:path';
const root=resolve('current_work/native-refresh-2026-10-01'),label='profile-after',output=resolve(root,label+'-'+Date.now());
await mkdir(output,{recursive:true});
const live=JSON.parse(await readFile(resolve(root,'live-snapshot.json'),'utf8')).state;
let app;const report={results:[],errors:[]};
try {
 const env={...process.env,TMPDIR:'current_work',MANGOHUD_CONFIG:'read_cfg,fps_limit=0'};delete env.LD_PRELOAD;delete env.MANGOHUD;
 app=await electron.launch({args:['.','--ozone-platform=x11',`--user-data-dir=${resolve(output,'profile')}`],cwd:process.cwd(),env,timeout:30000});
 const page=await app.firstWindow();page.on('pageerror',e=>report.errors.push(String(e)));
 await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>{localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0,touchControls:'on',resolution:'2560x1080',fov:56}));localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));});
 await page.reload();await page.waitForFunction(()=>window.__redcat);
 await app.evaluate(({BrowserWindow})=>{const w=BrowserWindow.getAllWindows()[0];w.setContentSize(2560,1080);w.center();w.focus();});
 report.display=await app.evaluate(({BrowserWindow,screen})=>screen.getDisplayMatching(BrowserWindow.getAllWindows()[0].getBounds()));
 for(const variant of ['after']) {
  await page.evaluate(async({variant,live})=>{
   const a=window.__redcat,dir=live.cameraTarget;
   const save={game:structuredClone(live.save),position:live.position,yaw:Math.atan2(-dir[0],-dir[2]),pitch:Math.asin(-dir[1])};
   await a.startLevel(2,save);a.pause();
   const w=a.world,g=a.gameplay;
   if(variant==='before') {
    const {BspCollider}=await import('./current_work/native-refresh-2026-10-01/collision-before.mjs');
    const {ActorAnimator}=await import('./current_work/native-refresh-2026-10-01/animation-before.mjs');
    for(const c of [w.collider,g.volumeCollider])if(c)Object.setPrototypeOf(c,BspCollider.prototype);
    w.scene.traverse(o=>{if(o.userData.animator)Object.setPrototypeOf(o.userData.animator,ActorAnimator.prototype);if(o.userData.stateAnimator)Object.setPrototypeOf(o.userData.stateAnimator.animator,ActorAnimator.prototype);});
   }
   g.damage=()=>{};w.updateCamera(1,true);await w.geometryStream.settle();w.effects.update(0);w.render();a.resume();
  },{variant,live});
  await page.waitForTimeout(3500);
  const cdp=await page.context().newCDPSession(page);await cdp.send('Profiler.enable');await cdp.send('Profiler.start');
  const result=await page.evaluate(()=>new Promise(resolve=>{
   const a=window.__redcat,w=a.world,g=a.gameplay,frames=[],costs={},counts={},restores=[];
   const wrap=(o,key,label=key)=>{const original=o[key];o[key]=function(...args){const t=performance.now();try{return original.apply(this,args);}finally{(costs[label]??=[]).push(performance.now()-t);counts[label]=(counts[label]||0)+1;}};restores.push(()=>o[key]=original);};
   for(const key of ['update','render','syncActors','syncActorLighting','updateRenderResidency'])wrap(w,key);
   wrap(g,'update','gameplay');wrap(w.effects,'update','effects');
   let begin,last;const tick=now=>{if(begin===undefined)begin=last=now;else {frames.push(now-last);last=now;}if(now-begin<6000)requestAnimationFrame(tick);else{
    restores.forEach(restore=>restore());const q=(v,f)=>[...v].sort((a,b)=>a-b)[Math.floor((v.length-1)*f)];
    resolve({fps:frames.length*1000/(now-begin),frames:frames.length,frameMedian:q(frames,.5),frameP95:q(frames,.95),frameMax:Math.max(...frames),timings:Object.fromEntries(Object.entries(costs).map(([key,v])=>[key,{mean:v.reduce((s,n)=>s+n,0)/v.length,median:q(v,.5),p95:q(v,.95)}])),level:w.id,position:w.player.position,resolution:[w.renderer.domElement.width,w.renderer.domElement.height],render:{...w.renderer.info.render},stream:{...w.geometryStream.stats},actors:{...w.actorResidency.stats},mode:a.mode});
   }};requestAnimationFrame(tick);
  }));
  const {profile}=await cdp.send('Profiler.stop');await writeFile(resolve(output,'after.cpuprofile'),JSON.stringify(profile));await cdp.detach();
  report.results.push({variant,...result});console.log(JSON.stringify({variant,...result}));await page.screenshot({path:resolve(output,variant+'.png')});
 }
} finally {await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));await app?.close();console.log(output);}
