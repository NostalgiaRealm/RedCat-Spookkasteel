import {chromium} from 'playwright';import {spawn} from 'node:child_process';import {mkdir,writeFile,readFile,access} from 'node:fs/promises';import path from 'node:path';
const label=process.argv[2]||'baseline',rate=Number(process.argv[3]||1),out=path.resolve(`temp_work/cpu-deeper-2026-10-18/${label}`);await mkdir(out,{recursive:true});
process.env.TMPDIR='temp_work/cpu-deeper-2026-10-18/scratch';await mkdir(process.env.TMPDIR,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});let context;
const before=process.argv[4]==='before';
const report={label,rate,before,levels:[],errors:[]};
try{
 const url=await new Promise(resolve=>server.stdout.once('data',d=>resolve(String(d).trim().split(' ').at(-1))));
 context=await chromium.launchPersistentContext(out+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},env:{...process.env,TMPDIR:'temp_work/cpu-deeper-2026-10-18/scratch'},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 if(before)await context.route('**/src/**',async route=>{
  if(!new URL(route.request().url()).pathname.endsWith('.js'))return route.continue();
  const file=path.resolve('temp_work/cpu-deeper-2026-10-18/before',new URL(route.request().url()).pathname.slice(1));
  try{await access(file);await route.fulfill({status:200,contentType:'text/javascript',body:await readFile(file)});}catch{await route.continue();}
 });
 for(const index of [2,1,3]){
  const page=await context.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
  await page.addInitScript(()=>{
   let seed=12345;Math.random=()=>{seed=(Math.imul(seed,1664525)+1013904223)>>>0;return seed/4294967296;};
   localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'960x540'}));
   localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
   const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(t=>{if(window.manualFrames&&fn.name==='frame')return;fn(t);});
  });
  await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async index=>{
   const app=window.__redcat;await app.startLevel(index);app.pause();window.manualFrames=true;
   const w=app.world,g=app.gameplay,h=g.scripts;
   for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.pendingCutsceneStop=null;h.enemiesFrozen=false;
   for(const o of g.objects)if(['trigger','fairy'].includes(o.kind))o.enabled=false;
   g.damage=()=>{};w.updateCamera(1,true);await w.geometryStream.settle();w.updateRenderResidency();w.effects.update(0);
   app.audio.pause();
   window.measure=async(n,profile=false)=>{
    const frames=[],totals={},counts={},timers={};
    const wrap=(obj,k,label=k)=>{const original=obj?.[k];if(!original)return;obj[k]=function(...args){const start=performance.now();try{return original.apply(this,args);}finally{timers[label]=(timers[label]||0)+performance.now()-start;counts[label]=(counts[label]||0)+1;}};return()=>obj[k]=original;};
    const restores=[];if(!profile){
     for(const k of ['syncModels','syncModelStates','syncMountedActorCollisions','syncActors','syncPlayer','syncActorLighting','syncProjectiles','updateCamera','updateRenderResidency'])restores.push(wrap(w,k));
     restores.push(wrap(g,'update','gameplay'),wrap(w.effects,'update','effects'),wrap(w.effects.destructibles,'update','debris'),wrap(app.audio,'update','audio'));
    }
    for(let i=0;i<n;i++){
     for(const k of Object.keys(timers))timers[k]=0;
     const t=performance.now();w.update(1/60,{forward:.25,turn:.55});app.audio.update(1/60,w.camera.position.toArray());const update=performance.now()-t;
     const rt=performance.now();w.render();const render=performance.now()-rt;
     frames.push({update,render});for(const[k,v]of Object.entries(timers))totals[k]=(totals[k]||0)+v;
     if(i%8===0)await new Promise(resolve=>setTimeout(resolve,0));
    }
    for(const restore of restores)restore?.();
    const summary=key=>{const a=frames.map(f=>f[key]).sort((a,b)=>a-b);return{mean:a.reduce((s,x)=>s+x,0)/a.length,p50:a[Math.floor(a.length*.5)],p95:a[Math.floor(a.length*.95)],max:a.at(-1)};};
    return {frames,update:summary('update'),render:summary('render'),meanParts:Object.fromEntries(Object.entries(totals).map(([k,v])=>[k,v/n])),counts,stream:{...w.geometryStream.stats},actorIndex:w.collider.actorIndex?{...w.collider.actorIndex.stats,actors:w.collider.actors.length}:null,objects:g.objects.length,activeEnemies:g.objects.filter(o=>o.kind==='enemy'&&o.enabled).length,position:[...w.player.position],scriptError:h.vm.lastError};
   };
   await window.measure(360,true);
  },index);
  const cdp=await context.newCDPSession(page);await cdp.send('Emulation.setCPUThrottlingRate',{rate});
  const measured=await page.evaluate(()=>window.measure(600,true));
  await cdp.send('Profiler.enable');await cdp.send('Profiler.setSamplingInterval',{interval:1000});await cdp.send('Profiler.start');
  await page.evaluate(()=>window.measure(240,true));const {profile}=await cdp.send('Profiler.stop');
  await writeFile(out+`/level-${index}.cpuprofile`,JSON.stringify(profile));
  report.levels.push({index,...measured});console.log(JSON.stringify({index,rate,update:measured.update,render:measured.render,parts:measured.meanParts}));
  await writeFile(out+`/level-${index}-state.json`,JSON.stringify(await page.evaluate(()=>window.__redcat.gameplay.snapshot()),null,2)+'\n');
  await page.evaluate(()=>{document.getElementById('pause').hidden=true;window.__redcat.renderHud();window.__redcat.world.render();});
  await page.screenshot({path:out+`/level-${index}.png`});await page.close();
 }
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2)+'\n');await context?.close();server.kill();}
