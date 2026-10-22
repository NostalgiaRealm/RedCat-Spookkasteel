import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
const work='current_work/zombie-rise-smooth-2026-10-05',phase=process.env.RISE_PHASE||'baseline',out=`${work}/${phase}`;
await mkdir(out,{recursive:true});await mkdir(`${work}/t`,{recursive:true});
const saved=JSON.parse(await readFile(`${work}/live-autosave.json`,'utf8'));
const env={...process.env,TMPDIR:`${work}/t`},port='4384';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((r,j)=>{server.stdout.once('data',r);server.once('error',j);});
let browser;
const hz=Number(process.env.RISE_HZ||60),fixedDt=Number(process.env.RISE_DT||0),variable=process.env.RISE_VARIABLE==='1';
const fixtures=[
{name:'saved-zombie1',zombie:'zombie1',saved:true},
{name:'frogzom12_tr',zombie:'frogzom2',position:[2696,528,-260],yaw:0},
{name:'graf1_trigger',zombie:'zombie1',position:[3568,-47,1350],yaw:Math.PI},
{name:'dknopa',zombie:'zombie3',position:[2604,-47,220],yaw:0},
{name:'dknopb',zombie:'zombie4',position:[2220,-47,1380],yaw:Math.PI},
{name:'graf2_trigger',zombie:'zombie2',position:[2250,-47,800],yaw:0}];
try{
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,env,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));
 if(process.env.RISE_OLD==='1')await page.route('**/src/gameplay.js',route=>route.fulfill({path:`${work}/gameplay-before-rise.js`,contentType:'application/javascript'}));
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
 await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
 const results=[];
 for(const fixture of fixtures.filter(f=>!process.env.RISE_CASE||f.name===process.env.RISE_CASE)){
  console.log(`Loading ${phase} ${fixture.name}`);
  const result=await page.evaluate(async({fixture,saved,hz,fixedDt,variable})=>{
   const a=window.__redcat;await a.startLevel(2,fixture.saved?saved:null);a.pause();document.getElementById('pause').hidden=true;
   const w=a.world,g=a.gameplay,h=g.scripts;
   for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
   for(const o of g.objects)if(o.kind==='trigger'&&![fixture.name,'dubbeltrigger'].includes(o.entity.DaviName))o.enabled=false;
   if(!fixture.saved){
    const ground=w.collider.trace([fixture.position[0],fixture.position[1]+100,fixture.position[2]],[fixture.position[0],fixture.position[1]-150,fixture.position[2]],w.player.mins,w.player.maxs,w.physicalModels);
    w.player.position=ground.end.map((v,i)=>v+(i===1?.05:0));w.player.lastSafe=[...w.player.position];w.player.velocityY=0;w.player.grounded=true;w.yaw=fixture.yaw;w.pitch=.12;
   }
   w.syncModels();w.syncActors(0);w.syncPlayer(0,{});w.updateCamera(1,true);await w.geometryStream.settle();w.render();
   const z=g.find(fixture.zombie)[0],trigger=fixture.saved?null:g.find(fixture.name)[0],input={forward:0,right:0,jump:false,attack:false,use:false};
   let count=0,enemyCount=0,active=false;const origTrace=w.collider.trace;w.collider.trace=function(...args){count++;if(active)enemyCount++;return origTrace.apply(this,args);};
   const origEnemy=g.updateEnemy;g.updateEnemy=function(o,...args){active=o===z;try{return origEnemy.call(this,o,...args);}finally{active=false;}};
   const state=()=>{const actor=w.actorInstances.get(z.id),mesh=actor?.userData.mesh,animator=actor?.userData.stateAnimator?.animator;actor?.updateWorldMatrix(true,true);const bounds=mesh?.geometry.boundingBox?.clone().applyMatrix4(mesh.matrixWorld);return {at:g.time,position:[...z.position],enabled:z.enabled,animation:z.animationState,animationSerial:z.animationSerial,animationTime:z.animationTime,motion:animator?.name,motionTime:animator?.time,grounded:z.grounded,velocityY:z.velocityY,alerted:z.alerted,patrol:z.patrol?structuredClone(z.patrol):null,recovery:z.movementRecovery?structuredClone(z.movementRecovery):null,bounds:bounds?{min:bounds.min.toArray(),max:bounds.max.toArray()}:null,enemyTraces:enemyCount,traces:count};};
   const before=state(),frames=[],approach=[];
   if(!fixture.saved)for(let i=0;i<100;i++){w.update(1/hz,{...input,forward:1});approach.push(state());if(trigger.switchCount||trigger.triggerCount)break;}
   const activated=state();
   for(let i=0;i<hz*6;i++){
    const dt=fixedDt||(variable?[.007,.0085,.009,.0072,.011,.0075][i%6]:1/hz);
    count=0;enemyCount=0;const start=performance.now();w.update(dt,input);const updateMs=performance.now()-start;
    frames.push({frame:i,dt,updateMs,...state()});if(i%60===0){w.render();await new Promise(r=>setTimeout(r,0));}
   }
   w.updateCamera(1,true);w.render();
   return {fixture,player:[...w.player.position],triggerCounts:trigger?{switch:trigger.switchCount,trigger:trigger.triggerCount}:null,speed:z.stats.Speed,before,approach,activated,frames,scriptError:h.vm.lastError};
  },{fixture,saved,hz,fixedDt,variable});
  results.push(result);await writeFile(`${out}/${fixture.name}.json`,JSON.stringify(result,null,2));
  await page.screenshot({path:`${out}/${fixture.name}.png`});
  console.log(JSON.stringify({fixture:fixture.name,initial:result.before.position,activated:result.activated.position,final:result.frames.at(-1).position,animations:result.frames.map(x=>x.animation).filter((x,i,a)=>i===0||x!==a[i-1]).length,minY:Math.min(...result.frames.map(x=>x.position[1])),maxY:Math.max(...result.frames.map(x=>x.position[1])),maxEnemyTraces:Math.max(...result.frames.map(x=>x.enemyTraces)),scriptError:result.scriptError}));
 }
 await writeFile(`${out}/report.json`,JSON.stringify({results,errors},null,2));console.log(`FINISHED ${phase}`);
}finally{await browser?.close();server.kill();}
