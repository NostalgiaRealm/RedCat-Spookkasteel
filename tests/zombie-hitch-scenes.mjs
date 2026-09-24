import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

// Profile real graveyard activation scripts, then chase around the grave walls.
// Unlike the patrol benchmark, this keeps the relevant trigger and explosion.
const port=process.env.PERF_PORT||'4289';
const fixtures=[
 {name:'dknopa',zombie:'zombie3',position:[2604,-47,220],yaw:0},
 {name:'graf1_trigger',zombie:'zombie1',position:[3568,-47,1350],yaw:Math.PI},
];
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
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
   const stages=[];
   const run=async(name,frames,move)=>{
    const samples=[],positions=[];
    for(let i=0;i<frames;i++){
     const input=move?.(i)||zero;timings={};calls={};pursuits=[];
     const t=performance.now();w.update(1/60,input);a.update(1/60,w.camera.position.toArray());const updateMs=performance.now()-t;
     const rt=performance.now();w.render();const renderMs=performance.now()-rt;
     samples.push({frame:i,updateMs,renderMs,timings,calls,pursuits,particles:w.effects.destructibles.particles.length,enabled:zombie.enabled,player:[...w.player.position],zombie:[...zombie.position]});
     positions.push([...zombie.position]);
     if(i%60===0)console.log('HITCH '+JSON.stringify({fixture:fixture.name,stage:name,frame:i,ms:updateMs,pursuits}));
     await new Promise(resolve=>setTimeout(resolve,0));
     if(name==='approach'&&(button.switchCount||button.triggerCount))break;
    }
    const sorted=samples.map(s=>s.updateMs).sort((a,b)=>a-b),percentile=p=>sorted[Math.min(sorted.length-1,Math.floor(sorted.length*p))];
    const totals={};for(const s of samples)for(const [key,value] of Object.entries(s.timings))totals[key]=(totals[key]||0)+value;
    stages.push({name,frames:samples.length,median:percentile(.5),p95:percentile(.95),p99:percentile(.99),max:sorted.at(-1),over50:samples.filter(s=>s.updateMs>50).length,maxRender:Math.max(...samples.map(s=>s.renderMs)),maxPursuitTraces:Math.max(0,...samples.flatMap(s=>s.pursuits.map(p=>p.traces))),totals,worst:[...samples].sort((a,b)=>b.updateMs-a.updateMs).slice(0,8),positions});
   };
   await run('approach',100,()=>({...zero,forward:1}));
   await run('activation',300);
   const origin=[...w.player.position];w.player.noClip=true;
   for(let round=0;round<2;round++)await run('chase'+round,360,i=>{
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
   return {fixture,initial,activated:zombie.enabled,switchCount:button.switchCount,triggerCount:button.triggerCount,final:[...zombie.position],scriptError:h.vm.lastError,stages};
  },fixture);
  results.push(result);
 }
 const output=process.env.PERF_REPORT||'artifacts/zombie-hitch-scenes.json';await mkdir('artifacts',{recursive:true});await writeFile(output,JSON.stringify({results,errors},null,2)+'\n');
 for(const result of results){
  console.log(JSON.stringify({fixture:result.fixture.name,activated:result.activated,stages:result.stages.map(({positions,worst,totals,...summary})=>summary)}));
  assert.ok(result.activated,'original touch script enables zombie');assert.equal(result.scriptError,null);
  assert.ok(result.stages.flatMap(s=>s.positions).some(p=>Math.hypot(...p.map((v,i)=>v-result.initial[i]))>70),'activated zombie walks out of its grave');
  for(const stage of result.stages)assert.ok(stage.maxPursuitTraces<=18,'route search must not flood one frame with BSP traces');
 }
 assert.deepEqual(errors,[]);
} finally {await browser?.close();server.kill();}
