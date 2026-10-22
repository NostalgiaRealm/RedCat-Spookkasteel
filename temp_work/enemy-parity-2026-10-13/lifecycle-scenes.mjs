import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
const out=path.resolve(`temp_work/enemy-parity-2026-10-13/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
// Keep Chromium's Unix socket path below sun_path's limit, inside temp_work.
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(m.text()))errors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false})));
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const lifecycles=await page.evaluate(async()=>{
    const app=window.__redcat;document.getElementById('cheat-unlock-levels').click();
    const {ActorStateAnimator}=await import('./src/animation.js');
    const results=[];
    for(const [level,type] of [[1,'knight'],[4,'gargoyle'],[3,'skeleton']]) {
      if(!await app.startLevel(level))throw new Error('Cannot start '+level);app.pause();
      const g=app.gameplay,w=app.world,h=g.scripts;
      for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
      const o=g.objects.find(o=>o.enemyType===type),a=w.actorInstances.get(o?.id);
      if(!a)throw new Error('Missing imported '+type);
      Object.assign(o,{enabled:true,visible:true,health:o.maxHealth,alerted:false,lastSeenAt:-100,attackTimer:0,pendingAttack:null,salvoRemaining:0,
        animationState:'dormant',animationRate:1,animationUntil:0,animationSerial:(o.animationSerial||0)+1,ambush:{version:1,type,phase:'dormant',elapsed:0}});
      o.stats={...o.stats,AttackRange:0};g.time=100;
      let states=new ActorStateAnimator(a.userData.animator,o.stats);a.userData.stateAnimator=states;o.animationSnapshot=()=>states.snapshot();
      const capture=()=>({phase:o.ambush.phase,elapsed:o.ambush.elapsed,rate:o.animationRate,pose:states.snapshot()});
      const near=[o.position[0],o.position[1],o.position[2]+50],far=[o.position[0]+10000,o.position[1],o.position[2]+10000];o.yaw=0;
      const step=(dt,seen)=>{g.time+=dt;g.updateEnemy(o,dt,seen?near:far,()=>seen,null);states.update(o,dt,false,g.time);};
      step(0,false);const dormant=capture();step(0,true);const waking=capture();
      const duration=o.ambush.duration||0;
      for(let i=0;i<Math.ceil(duration*60)+2;i++)step(1/60,true);
      const awake=capture();
      for(let i=0;i<Math.ceil((Number(o.stats.TimeToRememberVisual)||2)*60)+3;i++)step(1/60,false);
      const retiring=capture();
      if(type!=='gargoyle')for(let i=0;i<12;i++)step(1/60,false);
      const mid=capture(),save=g.snapshot(),vertices=Array.from(a.userData.mesh.geometry.attributes.position.array);
      g.restore(save);states=new ActorStateAnimator(a.userData.animator,o.stats);a.userData.stateAnimator=states;o.animationSnapshot=()=>states.snapshot();
      states.update(o,0,false,g.time);const restored=capture(),restoredVertices=Array.from(a.userData.mesh.geometry.attributes.position.array);
      for(let i=0;i<200;i++)step(1/60,false);
      const final=capture();results.push({type,dormant,waking,awake,retiring,mid,restored,final,
        savedVerticesEqual:vertices.every((v,i)=>v===restoredVertices[i]),finite:restoredVertices.every(Number.isFinite)});
    }
    return results;
  });
  await writeFile(path.join(out,'lifecycles-report.json'),JSON.stringify({lifecycles,errors},null,2)+'\n');
  for(const r of lifecycles){
    assert.equal(r.dormant.phase,'dormant',r.type);assert.equal(r.awake.phase,'awake',r.type);
    assert.equal(r.final.phase,'dormant',r.type);assert.ok(r.savedVerticesEqual,r.type+' saved vertices');assert.ok(r.finite);
    assert.deepEqual(r.mid,r.restored,r.type+' saved lifecycle');
    if(r.type!=='gargoyle'){assert.equal(r.waking.phase,'waking');assert.equal(r.retiring.phase,'retracting');assert.ok(r.retiring.rate<0);}
    else assert.equal(r.waking.phase,'awake');
  }
  assert.deepEqual(errors,[]);console.log('PASS imported knight/gargoyle/skeleton lifecycle and save pose. '+out);
}finally{await context?.close();server.kill();}
