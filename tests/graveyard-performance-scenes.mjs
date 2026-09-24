import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const port=process.env.PERF_PORT||'4288';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>{if(m.text().startsWith('PERF '))console.log(m.text());});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
 await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(async()=>{await window.__redcat.startLevel(2);window.__redcat.pause();});
 const report=await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts,a=app.audio;
  for(const player of h.players.values())player.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
  // Keep actual enemies, models, effects and audio. Exclude scripted camera and
  // level transitions so each route round visits the same measured locations.
  for(const o of g.objects)if(['trigger','fairy'].includes(o.kind))o.enabled=false;
  w.player.noClip=true;
  const timings={},count={};
  const wrap=(obj,key,label=key)=>{const fn=obj[key];if(!fn)return;obj[key]=function(...args){const t=performance.now();try{return fn.apply(this,args);}finally{timings[label]=(timings[label]||0)+performance.now()-t;count[label]=(count[label]||0)+1;}};};
  for(const key of ['syncModels','syncMountedActorCollisions','syncActors','syncPlayer','syncActorLighting','syncModelStates','syncProjectiles','updateCamera'])wrap(w,key);
  wrap(w.effects,'update','effects');wrap(g,'update','gameplay');wrap(g,'updateEnemy');wrap(g.navigation,'pursuitTarget');wrap(g.navigation,'route');wrap(w.collider,'trace');wrap(a,'update','audio');wrap(a.environment,'query','audioQuery');
  const homes=g.objects.filter(o=>o.kind==='enemy'&&o.enabled&&o.visible).map(o=>[...o.position]);
  const points=[[...w.player.position],...homes];
  const rounds=[];
  for(let round=0;round<3;round++){
   const frames=[],before={...timings},calls={...count};
   for(const [index,point] of points.entries()){
    w.player.position=point.map((v,i)=>v+(i===0?80:i===1?35:0));
    for(let frame=0;frame<15;frame++){
     const t=performance.now();w.update(1/30,{forward:0,right:0,turn:0,jump:false,attack:false,use:false});a.update(1/30,w.camera.position.toArray());frames.push(performance.now()-t);
     if(frame===0){w.render();await new Promise(resolve=>setTimeout(resolve,0));}
    }
    if(index%10===0)console.log('PERF '+JSON.stringify({round,index,total:timings.gameplay,pursuit:timings.pursuitTarget,trace:timings.trace}));
   }
   frames.sort((a,b)=>a-b);
   rounds.push({round,frames:frames.length,median:frames[Math.floor(frames.length*.5)],p95:frames[Math.floor(frames.length*.95)],max:frames.at(-1),total:frames.reduce((a,b)=>a+b,0),
    timings:Object.fromEntries(Object.entries(timings).map(([key,value])=>[key,value-(before[key]||0)])),calls:Object.fromEntries(Object.entries(count).map(([key,value])=>[key,value-(calls[key]||0)])),
    sounds:a.sounds.size,resources:w.resources.size,actors:w.actorInstances.size,projectiles:g.projectiles.length,sceneChildren:w.scene.children.length,programs:w.renderer.info.programs.length,
    particles:[...w.effects.entries.values()].reduce((sum,state)=>sum+state.particles.length,0)});
  }
  return {points:points.length,enemies:homes.length,rounds};
 });
 for(const round of report.rounds){
  assert.ok(round.calls.trace<round.frames*100,'patrols must not flood the BSP with full-route searches');
  assert.ok((round.calls.pursuitTarget||0)<round.frames,'pursuit is reserved for chasing, not every patrol step');
  assert.equal(round.resources,report.rounds[0].resources,'graphics resources remain bounded');
  assert.equal(round.sceneChildren,report.rounds[0].sceneChildren,'scene objects remain bounded');
 }
 assert.deepEqual(errors,[]);
 await mkdir('artifacts',{recursive:true});const output=process.env.PERF_REPORT||'artifacts/graveyard-performance-scenes.json';await writeFile(output,JSON.stringify(report,null,2)+'\n');
 console.log(JSON.stringify(report,null,2));
}finally{await browser?.close();server.kill();}
