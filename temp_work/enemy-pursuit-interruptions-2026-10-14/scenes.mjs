import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`temp_work/enemy-pursuit-interruptions-2026-10-14/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
const report={out,errors:[]};let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
  const page=await context.newPage();
  page.on('pageerror',e=>report.errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error')report.errors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)report.errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  report.reactions=await page.evaluate(async()=>{
    const app=window.__redcat;if(!await app.startLevel(2))throw new Error('Graveyard failed to load');app.pause();document.getElementById('pause').hidden=true;
    const g=app.gameplay,w=app.world,h=g.scripts;
    for(const motion of h.players.values())motion.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    for(const o of g.objects)if(['enemy','trigger','fairy','pickup'].includes(o.kind))o.enabled=false;
    const frog=g.find('frog01')[0];frog.enabled=true;frog.visible=true;
    const events=[],onEvent=g.onEvent;g.onEvent=e=>{events.push(e);onEvent(e);};
    const capture=()=>({health:frog.health,animation:frog.animationState,serial:frog.animationSerial,until:frog.animationUntil,
      rate:frog.animationRate,pending:frog.pendingAttack?structuredClone(frog.pendingAttack):null,alerted:frog.alerted,
      clip:w.actorInstances.get(frog.id).userData.animator.name});
    const reset=seed=>{
      g.time=100;g.playerReaction=null;g.state.health=20;g.state.maxHealth=20;
      frog.health=100;frog.alerted=false;frog.pendingAttack=null;frog.animationState='idle';frog.animationUntil=0;frog.batContact=null;
      const duration=g.enemyAnimation(frog,'attack',g.enemyDuration(frog,'attack'));
      frog.pendingAttack={at:g.time+duration*Number(frog.stats.DrawMotionPart)};frog.attackTimer=duration;
      frog.aiRandomState=seed;w.syncActors(0);events.length=0;
    };
    const samples=[];
    for(let i=0;i<64;i++){
      const seed=Math.imul(i+1,0x9e3779b9)>>>0;reset(seed);const before=capture();
      g.playerProjectileHit(frog,{damage:.125,type:0});w.syncActors(0);
      samples.push({seed,before,after:capture(),actions:events.filter(e=>e.type==='enemyAction'&&e.id===frog.id).map(e=>e.action)});
    }
    const hurt=samples.find(s=>s.after.animation==='hurt'),continuation=samples.find(s=>s.after.animation==='attack');
    if(!hurt||!continuation)return {id:frog.id,samples,missingBranch:true};
    reset(hurt.seed);g.playerProjectileHit(frog,{damage:.125,type:0});w.syncActors(0);g.time+=.1;
    const beforeRepeat=capture();g.playerProjectileHit(frog,{damage:.125,type:0});w.syncActors(0);const afterRepeat=capture();
    return {id:frog.id,samples,counts:{hurt:samples.filter(s=>s.after.animation==='hurt').length,continuation:samples.filter(s=>s.after.animation==='attack').length},
      hurt,continuation,repeat:{before:beforeRepeat,after:afterRepeat},scriptError:h.vm.lastError};
  });
  await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');

  report.stone=await page.evaluate(async seeds=>{
    const app=window.__redcat;if(!await app.startLevel(1))throw new Error('Castle failed to load');app.pause();document.getElementById('pause').hidden=true;
    const g=app.gameplay,w=app.world,h=g.scripts;
    for(const motion of h.players.values())motion.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    for(const o of g.objects)if(['enemy','trigger','fairy','pickup'].includes(o.kind))o.enabled=false;
    const knight=g.find('knightstanding01')[0];knight.enabled=true;knight.visible=true;knight.ambush.phase='dormant';knight.animationState='dormant';knight.alerted=false;
    w.player.noClip=true;w.player.update=()=>{};w.updateCamera=()=>{};w.player.position=[knight.position[0],knight.position[1],knight.position[2]+80];g.playerPosition=[...w.player.position];g.time=100;w.syncActors(0);
    const before={health:knight.health,phase:knight.ambush.phase,animation:knight.animationState};
    knight.aiRandomState=seeds.continuation;
    g.playerProjectileHit(knight,{damage:1,type:0});
    const hit={health:knight.health,phase:knight.ambush.phase,animation:knight.animationState,alerted:knight.alerted,lastSeenAt:knight.lastSeenAt};
    w.update(.025,{forward:0,right:0,turn:0,jump:false,attack:false,use:false});
    const wake={health:knight.health,phase:knight.ambush.phase,animation:knight.animationState,clip:w.actorInstances.get(knight.id).userData.animator.name};
    const box=knight.explosionBounds(),focus=box.min.map((v,i)=>(v+box.max[i])*.5),eyes=[];
    for(const radius of [110,85,60])for(const height of [20,0,40])for(let i=0;i<32;i++){
      const angle=i*Math.PI/16,eye=[focus[0]+Math.sin(angle)*radius,focus[1]+height,focus[2]+Math.cos(angle)*radius];
      if(w.collider.trace(focus,eye,[0,0,0],[0,0,0],w.physicalModels,null).fraction>.99)eyes.push(eye);
    }
    if(!eyes.length)throw new Error('No unobstructed camera around the waking knight');
    w.camera.position.set(...eyes[0]);w.camera.lookAt(...focus);
    w.updateRenderResidency();await w.geometryStream.settle();w.render();
    const png=w.renderer.domElement.toDataURL('image/png').split(',')[1];
    g.time=110;knight.health=before.health;knight.ambush={version:1,type:'knight',phase:'dormant',elapsed:0};knight.alerted=false;
    g.enemyAnimation(knight,'dormant');knight.aiRandomState=seeds.hurt;g.playerProjectileHit(knight,{damage:1,type:0});
    const reacting={health:knight.health,phase:knight.ambush.phase,animation:knight.animationState,alerted:knight.alerted};
    knight.aiRandomState=seeds.continuation;g.playerProjectileHit(knight,{damage:1,type:0});
    const following={health:knight.health,phase:knight.ambush.phase,animation:knight.animationState};
    for(let i=0;i<80&&knight.animationState==='hurt';i++)w.update(.025,{forward:0,right:0,turn:0,jump:false,attack:false,use:false});
    const resume={health:knight.health,phase:knight.ambush.phase,animation:knight.animationState};
    return {id:knight.id,before,hit,wake,reacting,following,resume,camera:{eye:eyes[0],focus},scriptError:h.vm.lastError,png};
  },{hurt:report.reactions.hurt?.seed,continuation:report.reactions.continuation?.seed});
  await writeFile(path.join(out,'knight-wakes.png'),Buffer.from(report.stone.png,'base64'));delete report.stone.png;
  await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');

  report.pursuit=await page.evaluate(async()=>{
    const app=window.__redcat;if(!await app.startLevel(2))throw new Error('Graveyard failed to reload');app.pause();document.getElementById('pause').hidden=true;
    const g=app.gameplay,w=app.world,h=g.scripts;
    for(const motion of h.players.values())motion.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    for(const o of g.objects)if(['enemy','trigger','fairy','pickup'].includes(o.kind))o.enabled=false;
    w.player.noClip=true;w.player.update=()=>{};w.updateCamera=()=>{};
    const input={forward:0,right:0,turn:0,jump:false,attack:false,use:false};
    const los=(a,b)=>w.collider.trace(a,b,[0,0,0],[0,0,0],w.physicalModels,'blocksLOS').fraction>.98;
    const buildStart=performance.now();g.navigation.build(los);const graphBuildMs=performance.now()-buildStart;
    let traceCount=0,search=[],approaches=[];
    const trace=w.collider.trace;w.collider.trace=function(...args){traceCount++;return trace.apply(this,args);};
    const pursuit=g.navigation.pursuitTarget;
    g.navigation.pursuitTarget=function(object,...args){const start=performance.now(),before=traceCount;try{return pursuit.call(this,object,...args);}finally{search.push({id:object.id,ms:performance.now()-start,traces:traceCount-before,reacquiring:object.patrol?.reacquiring});}};
    for(const method of ['approachTarget','retreatTarget']){
      const select=g.navigation[method];
      g.navigation[method]=function(object,goal,...args){
        const before=structuredClone(object.patrol),target=select.call(this,object,goal,...args),after=structuredClone(object.patrol);
        const links=[...(this.links.get(after.current)||[])];
        approaches.push({method,id:object.id,goal:[...goal],before,after,target:target?.id??null,adjacent:!target||after.reacquiring||target.id===after.current||links.includes(target.id)});return target;
      };
    }
    const stages=[];
    const summary=values=>{const sorted=[...values].sort((a,b)=>a-b);return {median:sorted[Math.floor(sorted.length*.5)],p95:sorted[Math.floor(sorted.length*.95)],max:sorted.at(-1),over50:sorted.filter(v=>v>50).length};};
    const run=async(name,object,frames,move)=>{
      const samples=[],edges=[],start=[...object.position],capturedApproaches=[];
      for(let i=0;i<frames;i++){
        move?.(i);search=[];approaches=[];traceCount=0;
        const before=[...object.position],begin=performance.now();w.update(1/60,input);const updateMs=performance.now()-begin;
        const renderStart=performance.now();w.render();const renderMs=performance.now()-renderStart;
        samples.push({frame:i,updateMs,renderMs,traces:traceCount,search,position:[...object.position],animation:object.animationState,
          patrol:object.patrol?structuredClone(object.patrol):null,touch:object.batContact?structuredClone(object.batContact):null,moved:Math.hypot(...object.position.map((v,a)=>v-before[a]))});
        capturedApproaches.push(...approaches);
        const current=object.patrol?.current,target=object.patrol?.target;
        if(current&&target&&!object.patrol?.reacquiring&&current!==target)edges.push({current,target,adjacent:g.navigation.links.get(current)?.has(target)===true});
        if(i%30===0)await new Promise(resolve=>setTimeout(resolve,0));
      }
      const stage={name,id:object.id,frames,start,end:[...object.position],distance:samples.reduce((n,s)=>n+s.moved,0),update:summary(samples.map(s=>s.updateMs)),render:summary(samples.map(s=>s.renderMs)),
        maxSearchTraces:Math.max(0,...samples.flatMap(s=>s.search.map(q=>q.traces))),searchCalls:samples.reduce((n,s)=>n+s.search.length,0),
        maxSearchMs:Math.max(0,...samples.flatMap(s=>s.search.map(q=>q.ms))),edges,approaches:capturedApproaches,samples};
      stages.push(stage);return stage;
    };
    const frog=g.find('frog01')[0],start=g.navigation.find(frog.patrol.start);frog.enabled=true;frog.visible=true;frog.health=100;frog.position=[...start.position];frog.grounded=true;frog.velocityY=0;
    Object.assign(frog.patrol,{current:start.id,target:null,leftStart:true,reacquiring:false});
    let goal=null;
    const aim=()=>{
      const current=g.navigation.find(frog.patrol.current)||start;
      const points=[...(g.navigation.links.get(current.id)||[])].map(id=>g.navigation.find(id)).filter(p=>Math.abs(p.position[1]-current.position[1])<40);
      const toward=points.find(p=>p.id!==frog.patrol.previous)||points[0];
      if(!toward)throw new Error('Frog has no reachable authored neighbor');
      const dx=toward.position[0]-frog.position[0],dz=toward.position[2]-frog.position[2],length=Math.hypot(dx,dz)||1;
      goal=[frog.position[0]+dx/length*170,frog.position[1],frog.position[2]+dz/length*170];
      w.player.position=[...goal];g.playerPosition=[...goal];g.notePlayerAttack(frog,true);frog.yaw=Math.atan2(dx,dz);
    };
    aim();w.syncActors(0);w.camera.position.set(start.position[0]+220,start.position[1]+200,start.position[2]+260);w.camera.lookAt(...start.position);
    w.updateRenderResidency();await w.geometryStream.settle();w.render();
    await run('frog-neighbor-approach',frog,360,i=>{if(i%90===0)aim();});
    frog.enabled=false;g.projectiles=[];
    const skeleton=g.find('skeleton1')[0],skeletonStart=g.navigation.find(skeleton.patrol.start);
    skeleton.enabled=true;skeleton.visible=true;skeleton.health=100;skeleton.ambush.phase='awake';skeleton.position=[...skeletonStart.position];
    skeleton.grounded=true;skeleton.velocityY=0;skeleton.animationState='dormant';skeleton.pendingAttack=null;skeleton.attackTimer=0;
    Object.assign(skeleton.patrol,{current:skeletonStart.id,target:null,leftStart:true,reacquiring:false});g.enemyAnimation(skeleton,'idle');
    w.player.position=[skeleton.position[0]+25,skeleton.position[1],skeleton.position[2]];g.playerPosition=[...w.player.position];g.notePlayerAttack(skeleton,true);
    w.syncActors(0);w.camera.position.set(skeleton.position[0]+150,skeleton.position[1]+180,skeleton.position[2]+200);w.camera.lookAt(...skeleton.position);
    w.updateRenderResidency();await w.geometryStream.settle();
    await run('skeleton-neighbor-retreat',skeleton,180);
    skeleton.enabled=false;g.projectiles=[];
    const zombie=g.find('zombie1')[0],trigger=g.find('graf1_trigger')[0],zombieStart=[...zombie.position];
    trigger.enabled=true;w.player.position=[3568,-47,1350];g.playerPosition=[...w.player.position];g.trigger(trigger);trigger.enabled=false;
    w.camera.position.set(3860,150,1250);w.camera.lookAt(3860,-40,1020);w.updateRenderResidency();await w.geometryStream.settle();
    await run('zombie-grave-activation',zombie,240);
    const origin=[...zombie.position];
    await run('zombie-blocked-pursuit',zombie,360,i=>{
      const phase=i/180*Math.PI*2;w.player.position=[origin[0]+Math.sin(phase)*220,origin[1],origin[2]+Math.cos(phase)*200];
      if(i%60===0){g.playerPosition=[...w.player.position];g.notePlayerAttack(zombie,true);}
    });
    const box=zombie.explosionBounds(),focus=box.min.map((v,i)=>(v+box.max[i])*.5),eyes=[];
    for(const radius of [150,110,80])for(const height of [30,0,60])for(let i=0;i<32;i++){
      const angle=i*Math.PI/16,eye=[focus[0]+Math.sin(angle)*radius,focus[1]+height,focus[2]+Math.cos(angle)*radius];
      if(w.collider.trace(focus,eye,[0,0,0],[0,0,0],w.physicalModels,null).fraction>.99)eyes.push(eye);
    }
    if(!eyes.length)throw new Error('No unobstructed camera around the pursuing zombie');
    w.camera.position.set(...eyes[0]);w.camera.lookAt(...focus);w.updateRenderResidency();await w.geometryStream.settle();w.render();
    return {graphBuildMs,graphPoints:g.navigation.points.length,stages,zombie:{id:zombie.id,start:zombieStart,enabled:zombie.enabled,end:[...zombie.position],triggerCount:trigger.triggerCount},
      scriptError:h.vm.lastError,png:w.renderer.domElement.toDataURL('image/png').split(',')[1]};
  });
  await writeFile(path.join(out,'graveyard-pursuit.png'),Buffer.from(report.pursuit.png,'base64'));delete report.pursuit.png;
  await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');

  const r=report.reactions;
  assert.equal(r.missingBranch,undefined,'both ordinary hit-response branches occur');
  assert.ok(r.counts.hurt>0&&r.counts.continuation>0);
  assert.equal(r.hurt.after.health,r.hurt.before.health-.125);assert.equal(r.hurt.after.pending,null);
  assert.deepEqual(r.continuation.after.pending,r.continuation.before.pending,'sound-only response keeps the pending strike');
  assert.equal(r.continuation.after.serial,r.continuation.before.serial);assert.equal(r.continuation.after.until,r.continuation.before.until);
  assert.equal(r.continuation.after.health,r.continuation.before.health-.125);assert.ok(r.continuation.actions.includes('hurt'),'sound-only response retains hurt audio');
  assert.equal(r.repeat.after.health,r.repeat.before.health-.125);assert.equal(r.repeat.after.serial,r.repeat.before.serial,'active hurt motion does not restart');assert.equal(r.repeat.after.until,r.repeat.before.until);
  assert.equal(report.stone.hit.health,report.stone.before.health,'dormant stone first hit does not reduce health');assert.equal(report.stone.hit.alerted,true);
  assert.equal(report.stone.wake.phase,'waking');assert.equal(report.stone.wake.animation,'start');assert.equal(report.stone.wake.health,report.stone.before.health);
  assert.equal(report.stone.reacting.health,report.stone.before.health);assert.equal(report.stone.reacting.animation,'hurt');assert.equal(report.stone.reacting.alerted,true);
  assert.equal(report.stone.following.health,report.stone.before.health-1,'a hit reaction removes the inactive stone shield');
  assert.equal(report.stone.resume.phase,'waking','knight resumes a fresh wake after the hurt reaction');
  const p=report.pursuit,approaches=p.stages.flatMap(s=>s.approaches),edges=p.stages.flatMap(s=>s.edges);
  assert.ok(approaches.some(a=>a.method==='approachTarget'),'real moving shooter enters neighboring-waypoint approach');
  assert.ok(approaches.some(a=>a.method==='retreatTarget'),'real skeleton enters neighboring-waypoint retreat');
  assert.ok(approaches.every(a=>a.adjacent),'approach and retreat never choose an arbitrary non-neighbor endpoint');
  assert.ok(edges.length>0&&edges.every(e=>e.adjacent),'normal authored edge travel stays on the neighbor graph');
  assert.ok(p.stages[0].distance>40,'frog actually moves');assert.ok(p.zombie.enabled&&p.zombie.triggerCount>0,'authored grave activation still runs');
  assert.ok(Math.hypot(...p.zombie.end.map((v,i)=>v-p.zombie.start[i]))>70,'zombie exits its grave');
  assert.ok(p.stages.find(s=>s.name==='zombie-blocked-pursuit').samples.some(s=>s.touch?.version===2),'zombie uses recovered touching-enemy steering');
  assert.ok(p.stages.every(s=>s.maxSearchTraces<=18),'bounded recovery routing cannot flood a frame with BSP traces');
  for(const result of [r,report.stone,p])assert.equal(result.scriptError,null);
  assert.deepEqual(report.errors,[]);
  console.log(`PASS real hurt branches, repeated-hit stability, stone wake immunity, neighbor pursuit and bounded recovery traces. ${out}`);
} catch(error) {report.failure=error.stack;await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');throw error;
} finally {await context?.close();server.kill();}
