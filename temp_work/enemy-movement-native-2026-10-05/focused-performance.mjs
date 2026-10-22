import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

// Profile real graveyard activation scripts, then chase around the grave walls.
// Unlike the patrol benchmark, this keeps the relevant trigger and explosion.
const port=process.env.PERF_PORT||'4297';
const work='current_work/enemy-movement-native-2026-10-05';
const phase=process.env.PERF_PHASE||'baseline';
const fixtures=[{name:'dknopa',zombie:'zombie3',position:[2604,-47,220],yaw:0}];
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${work}/perf-tmp`]});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));
 page.on('console',m=>{if(m.text().startsWith('HITCH '))console.log(m.text());});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
 await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
 const results=[];
 for(const fixture of fixtures.filter(f=>!process.env.ZOMBIE_CASE||f.name===process.env.ZOMBIE_CASE)){
  await page.evaluate(async()=>{await window.__redcat.startLevel(2);window.__redcat.pause();});
  const result=await page.evaluate(async fixture=>{
   const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts,a=app.audio;
   for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
   for(const o of g.objects)if(o.kind==='trigger'&&![fixture.name,'dubbeltrigger'].includes(o.entity.DaviName))o.enabled=false;
   const button=g.find(fixture.name)[0],zombie=g.find(fixture.zombie)[0],initial=[...zombie.position];
   const ground=w.collider.trace([fixture.position[0],40,fixture.position[2]],[fixture.position[0],-160,fixture.position[2]],w.player.mins,w.player.maxs,w.physicalModels);
   w.player.position=ground.end.map((v,i)=>v+(i===1?.05:0));w.player.lastSafe=[...w.player.position];w.player.velocityY=0;w.player.grounded=true;w.yaw=fixture.yaw;w.pitch=.12;
   w.syncModels();w.syncActors(0);w.syncPlayer(0,{});w.updateCamera(1);w.render();
   const zero={forward:0,right:0,turn:0,jump:false,attack:false,use:false};
   let timings={},calls={},pursuits=[],activeEnemy=null;
   const wrap=(obj,key,label=key)=>{const fn=obj?.[key];if(!fn)return;obj[key]=function(...args){const t=performance.now();try{return fn.apply(this,args);}finally{timings[label]=(timings[label]||0)+performance.now()-t;calls[label]=(calls[label]||0)+1;}};};
   for(const key of ['syncModels','syncMountedActorCollisions','syncActors','syncPlayer','syncActorLighting','syncModelStates','syncProjectiles','updateCamera'])wrap(w,key);
   wrap(w.effects,'update','effects');wrap(w.effects?.destructibles,'update','debris');wrap(g,'update','gameplay');wrap(g.navigation,'route');wrap(w.collider,'trace');wrap(a,'update','audio');wrap(a.environment,'query','audioQuery');
   const updateEnemy=g.updateEnemy;g.updateEnemy=function(o,...args){activeEnemy=o.entity.DaviName||o.id;try{return updateEnemy.call(this,o,...args);}finally{activeEnemy=null;}};wrap(g,'updateEnemy');
   const pursuit=g.navigation.pursuitTarget;g.navigation.pursuitTarget=function(...args){const t=performance.now(),before=calls.trace||0;try{return pursuit.apply(this,args);}finally{pursuits.push({enemy:activeEnemy,ms:performance.now()-t,traces:(calls.trace||0)-before});}};
   const resources=()=>({sounds:a.sounds.size,resources:w.resources.size,actors:w.actorInstances.size,projectiles:g.projectiles.length,sceneChildren:w.scene.children.length,programs:w.renderer.info.programs.length,particles:[...w.effects.entries.values()].reduce((sum,s)=>sum+s.particles.length,0),destructibleParticles:w.effects.destructibles.particles.length,pursuitJobs:g.navigation.pursuitJobs.size});
   const initialResources=resources(),stages=[];
   const run=async(name,frames,move)=>{
    const samples=[],positions=[],resourceBefore=resources();
    for(let i=0;i<frames;i++){
     const input=move?.(i)||zero;timings={};calls={};pursuits=[];
     const t=performance.now();w.update(1/60,input);a.update(1/60,w.camera.position.toArray());const updateMs=performance.now()-t;
     const rt=performance.now();w.render();const renderMs=performance.now()-rt;
     samples.push({frame:i,updateMs,renderMs,timings,calls,pursuits,searchTraces:g.navigation.searchFrame===g.time?g.navigation.searchTraces:0,resources:resources(),particles:w.effects.destructibles.particles.length,enabled:zombie.enabled,player:[...w.player.position],zombie:[...zombie.position]});
     positions.push([...zombie.position]);
     if(i%60===0)console.log('HITCH '+JSON.stringify({fixture:fixture.name,stage:name,frame:i,ms:updateMs,pursuits}));
     await new Promise(resolve=>setTimeout(resolve,0));
     if(name==='approach'&&(button.switchCount||button.triggerCount))break;
    }
    const sorted=samples.map(s=>s.updateMs).sort((a,b)=>a-b),percentile=p=>sorted[Math.min(sorted.length-1,Math.floor(sorted.length*p))];
    const totals={};for(const s of samples)for(const [key,value] of Object.entries(s.timings))totals[key]=(totals[key]||0)+value;
    stages.push({name,frames:samples.length,median:percentile(.5),p95:percentile(.95),p99:percentile(.99),max:sorted.at(-1),over50:samples.filter(s=>s.updateMs>50).length,maxRender:Math.max(...samples.map(s=>s.renderMs)),maxPursuitTraces:Math.max(0,...samples.flatMap(s=>s.pursuits.map(p=>p.traces))),maxFrameSearchTraces:Math.max(0,...samples.map(s=>s.searchTraces)),maxFrameTraces:Math.max(0,...samples.map(s=>s.calls.trace||0)),resourceBefore,resourceAfter:resources(),resourcePeak:Object.fromEntries(Object.keys(resourceBefore).map(k=>[k,Math.max(...samples.map(s=>s.resources[k]))])),totals,samples,worst:[...samples].sort((a,b)=>b.updateMs-a.updateMs).slice(0,8),positions});
   };
   await run('approach',100,()=>({...zero,forward:1}));
   await run('activation',300);
   const origin=[...w.player.position];w.player.noClip=true;
   for(let round=0;round<1;round++)await run('chase'+round,360,i=>{
    // Move behind and alongside the grave, making direct pursuit obstructed.
    const phase=i/360*Math.PI*2;
    w.player.position=[origin[0]+Math.sin(phase)*220,origin[1],origin[2]+Math.cos(phase)*180];return zero;
   });
   // A hit alerts the enemy even when the player has moved outside its sight
   // cone. Retreat alongside the grave walls, as during ordinary combat.
   const combatOrigin=[...zombie.position];
   await run('blocked-chase',360,i=>{
    const phase=i/180*Math.PI*2;
    w.player.position=[combatOrigin[0]+Math.sin(phase)*240,combatOrigin[1],combatOrigin[2]+Math.cos(phase)*220];
    if(i%60===0){g.playerPosition=[...w.player.position];g.hurtEnemy(zombie,0);}
    return zero;
   });
   return {fixture,initial,initialResources,activated:zombie.enabled,switchCount:button.switchCount,triggerCount:button.triggerCount,final:[...zombie.position],scriptError:h.vm.lastError,stages};
  },fixture);
  results.push(result);
 }

 await page.evaluate(async()=>{await window.__redcat.startLevel(1);window.__redcat.pause();});
 const batReport=await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts,a=app.audio;
  for(const p of h.players.values())p.stop();h.update=()=>{};h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
  const bat=g.objects.find(o=>o.id==='MovingEnemy16');
  for(const o of g.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;
  bat.enabled=true;w.player.noClip=true;g.state.health=100;g.state.maxHealth=100;
  const initial=[...bat.position],candidates=[];
  for(const radius of [220,300,180,140])for(let angle=0;angle<Math.PI*2;angle+=Math.PI/16){
   const probe=[initial[0]+Math.sin(angle)*radius,initial[1]+50,initial[2]+Math.cos(angle)*radius];
   const floor=w.collider.trace(probe,[probe[0],initial[1]-240,probe[2]],w.player.mins,w.player.maxs,w.physicalModels);
   if(floor.startSolid||floor.fraction===1)continue;
   const path=w.collider.trace(initial,floor.end,bat.collisionMins,bat.collisionMaxs,w.physicalModels);
   if(path.startSolid||path.fraction>.95)continue;
   const sight=w.collider.trace([initial[0],initial[1]+25,initial[2]],[floor.end[0],floor.end[1]+28,floor.end[2]],[0,0,0],[0,0,0],w.physicalModels,'blocksLOS');
   candidates.push({target:floor.end,pathFraction:path.fraction,sightFraction:sight.fraction});
  }
  if(!candidates.length)throw new Error('No original blocked bat target');
  candidates.sort((a,b)=>b.sightFraction-a.sightFraction);
  const fixture=candidates[0],target=fixture.target;
  w.player.position=[...target];w.player.grounded=true;w.player.velocityY=0;
  bat.yaw=Math.atan2(target[0]-initial[0],target[2]-initial[2]);
  w.syncModels();w.syncActors(0);w.syncPlayer(0,{});w.updateCamera(1);w.render();
  let timings={},calls={},activeEnemy=null,enemyTraces={},enemyMs={};
  const wrap=(o,k,label=k)=>{const fn=o?.[k];if(fn)o[k]=function(...args){const t=performance.now();try{return fn.apply(this,args)}finally{timings[label]=(timings[label]||0)+performance.now()-t;calls[label]=(calls[label]||0)+1;}}};
  for(const k of ['syncModels','syncMountedActorCollisions','syncActors','syncPlayer','syncActorLighting','syncModelStates','syncProjectiles','updateCamera'])wrap(w,k);
  wrap(w.effects,'update','effects');wrap(g,'update','gameplay');wrap(a,'update','audio');wrap(g.navigation,'pursuitTarget');wrap(g.navigation,'route');
  const trace=w.collider.trace;w.collider.trace=function(...args){if(activeEnemy)enemyTraces[activeEnemy]=(enemyTraces[activeEnemy]||0)+1;return trace.apply(this,args)};wrap(w.collider,'trace');
  const update=g.updateEnemy;g.updateEnemy=function(o,...args){activeEnemy=o.id;const t=performance.now();try{return update.call(this,o,...args)}finally{enemyMs[o.id]=(enemyMs[o.id]||0)+performance.now()-t;activeEnemy=null}};
  const resources=()=>({sounds:a.sounds.size,resources:w.resources.size,actors:w.actorInstances.size,projectiles:g.projectiles.length,sceneChildren:w.scene.children.length,programs:w.renderer.info.programs.length,particles:[...w.effects.entries.values()].reduce((sum,s)=>sum+s.particles.length,0),destructibleParticles:w.effects.destructibles.particles.length,pursuitJobs:g.navigation.pursuitJobs.size});
  const samples=[],resourceBefore=resources();
  for(let i=0;i<600;i++){
   // Refresh memory of a player behind an obstruction. The original spawn,
   // player target, BSP, runtime movement, models, effects and audio are real.
   if(i%60===0){bat.alerted=true;bat.lastSeenAt=g.time;bat.lastSeenPosition=[...target];}
   timings={};calls={};enemyTraces={};enemyMs={};
   const t=performance.now();w.update(1/60,{forward:0,right:0,turn:0,jump:false,attack:false,use:false});a.update(1/60,w.camera.position.toArray());const updateMs=performance.now()-t;
   const rt=performance.now();w.render();const renderMs=performance.now()-rt;
   samples.push({frame:i,updateMs,renderMs,timings,calls,enemyTraces,enemyMs,position:[...bat.position],detour:bat.flightDetour?{...bat.flightDetour}:null,resources:resources()});
   if(i%120===0)console.log('BAT '+JSON.stringify({frame:i,ms:updateMs,traces:enemyTraces[bat.id],position:bat.position}));
   await new Promise(resolve=>setTimeout(resolve,0));
  }
  const sorted=samples.map(s=>s.updateMs).sort((a,b)=>a-b),p=q=>sorted[Math.min(sorted.length-1,Math.floor(sorted.length*q))];
  return {name:'original-castle-blocked-green-bat',id:bat.id,initial,fixture,frames:samples.length,median:p(.5),p95:p(.95),p99:p(.99),max:sorted.at(-1),maxFrameTraces:Math.max(...samples.map(s=>s.calls.trace||0)),maxEnemyTraces:Math.max(...samples.map(s=>s.enemyTraces[bat.id]||0)),resourceBefore,resourceAfter:resources(),resourcePeak:Object.fromEntries(Object.keys(resourceBefore).map(k=>[k,Math.max(...samples.map(s=>s.resources[k]))])),samples};
 });
 console.log(JSON.stringify({bat:Object.fromEntries(Object.entries(batReport).filter(([k])=>k!=='samples'))}));
 const output=process.env.PERF_REPORT||`${work}/perf-${phase}.json`;await writeFile(output,JSON.stringify({phase,results,batReport,errors},null,2)+'\n');
 for(const result of results){
  console.log(JSON.stringify({fixture:result.fixture.name,activated:result.activated,stages:result.stages.map(({positions,worst,totals,samples,...summary})=>summary)}));
  assert.ok(result.activated,'original touch script enables zombie');assert.equal(result.scriptError,null);
  assert.ok(result.stages.flatMap(s=>s.positions).some(p=>Math.hypot(...p.map((v,i)=>v-result.initial[i]))>70),'activated zombie walks out of its grave');
  for(const stage of result.stages){assert.ok(stage.maxPursuitTraces<=18,'route search must not flood one frame with BSP traces');assert.ok(stage.maxFrameSearchTraces<=48,'global search traces remain within 48/frame');}
 }
 assert.deepEqual(errors,[]);
} finally {await browser?.close();server.kill();}
