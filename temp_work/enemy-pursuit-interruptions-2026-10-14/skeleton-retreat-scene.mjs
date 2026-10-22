import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`temp_work/enemy-pursuit-interruptions-2026-10-14/skeleton-retreat-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
const report={out,errors:[]};let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
  const page=await context.newPage();
  page.on('pageerror',error=>report.errors.push(error.stack));
  page.on('console',message=>{if(message.type()==='error')report.errors.push(message.text());});
  page.on('response',response=>{if(response.status()>=400)report.errors.push(`${response.status()} ${response.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  report.scene=await page.evaluate(async()=>{
    const app=window.__redcat;if(!await app.startLevel(2))throw new Error('Graveyard failed to load');app.pause();document.getElementById('pause').hidden=true;
    const game=app.gameplay,world=app.world,host=game.scripts;
    for(const motion of host.players.values())motion.stop();host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
    for(const object of game.objects)if(['enemy','trigger','fairy','pickup'].includes(object.kind))object.enabled=false;
    world.player.noClip=true;world.player.update=()=>{};world.updateCamera=()=>{};
    const enemy=game.find('skeleton1')[0],start=game.navigation.find(enemy.patrol.start);
    enemy.enabled=true;enemy.visible=true;enemy.health=100;enemy.ambush.phase='awake';enemy.position=[...start.position];
    enemy.grounded=true;enemy.velocityY=0;enemy.animationState='dormant';enemy.pendingAttack=null;enemy.attackTimer=0;enemy.nativeShooter=null;enemy.salvoSize=1;
    Object.assign(enemy.patrol,{current:start.id,target:null,leftStart:true,reacquiring:false});game.enemyAnimation(enemy,'idle');
    const animator=world.actorInstances.get(enemy.id).userData.animator;
    const input={forward:0,right:0,turn:0,jump:false,attack:false,use:false};
    const follow=()=>{world.player.position=[enemy.position[0]+25,enemy.position[1],enemy.position[2]];game.playerPosition=[...world.player.position];};
    const los=(a,b)=>world.collider.trace(a,b,[0,0,0],[0,0,0],world.physicalModels,'blocksLOS').fraction>.98;
    game.navigation.build(los);world.syncActors(0);
    const camera=async()=>{
      const box=enemy.explosionBounds(),focus=box.min.map((value,index)=>(value+box.max[index])*.5),eyes=[];
      for(const radius of [125,95,65])for(const height of [10,30,0])for(let i=0;i<32;i++){
        const angle=i*Math.PI/16,eye=[focus[0]+Math.sin(angle)*radius,focus[1]+height,focus[2]+Math.cos(angle)*radius];
        if(world.collider.trace(focus,eye,[0,0,0],[0,0,0],world.physicalModels,null).fraction>.99)eyes.push(eye);
      }
      if(!eyes.length)throw new Error('No clear skeleton camera');
      world.camera.position.set(...eyes[0]);world.camera.lookAt(...focus);world.updateRenderResidency();await world.geometryStream.settle();world.render();
      return {focus,eye:eyes[0]};
    };
    await camera();
    let snapshot=null,freeze=null,firstRetreat=null,held=null;const samples=[],retreat=[];
    let retreatFrames=0,maximumSearchTraces=0;
    for(let frame=0;frame<480;frame++){
      follow();game.notePlayerAttack(enemy,true);
      const before=[...enemy.position],begin=performance.now();world.update(1/60,input);const updateMs=performance.now()-begin;
      const renderStart=performance.now();world.render();const renderMs=performance.now()-renderStart;
      maximumSearchTraces=Math.max(maximumSearchTraces,game.navigation.searchTraces||0);
      const record={frame,time:game.time,updateMs,renderMs,position:[...enemy.position],moved:Math.hypot(...enemy.position.map((v,i)=>v-before[i])),
        phase:enemy.nativeShooter?.phase,animation:enemy.animationState,serial:enemy.animationSerial,until:enemy.animationUntil,
        rate:enemy.animationRate,loop:enemy.animationLoop,clip:animator.name,clipTime:animator.time,clipRate:animator.timeScale,finished:animator.finished,
        yaw:enemy.yaw,player:[...world.player.position],patrol:structuredClone(enemy.patrol),nativeShooter:structuredClone(enemy.nativeShooter)};
      samples.push(record);
      if(enemy.nativeShooter?.phase==='retreat'&&enemy.nativeShooter.retreatStarted){
        retreat.push(record);retreatFrames++;firstRetreat??=record;
        if(retreatFrames===10){
          const inspectionCamera=await camera();
          snapshot={camera:inspectionCamera,png:world.renderer.domElement.toDataURL('image/png').split(',')[1]};
          const beforeFreeze={time:animator.time,position:[...enemy.position],until:enemy.animationUntil,serial:enemy.animationSerial};
          host.enemiesFrozen=true;
          for(let i=0;i<6;i++)world.update(1/60,input);
          host.enemiesFrozen=false;
          freeze={before:beforeFreeze,after:{time:animator.time,position:[...enemy.position],until:enemy.animationUntil,serial:enemy.animationSerial}};
        }
        if(animator.finished){held??=record;if(game.time-held.time>.2)break;}
      }
      if(frame%30===0)await new Promise(resolve=>setTimeout(resolve,0));
    }
    const summary=values=>{const sorted=[...values].sort((a,b)=>a-b);return {median:sorted[Math.floor(sorted.length*.5)],p95:sorted[Math.floor(sorted.length*.95)],max:sorted.at(-1),over50:sorted.filter(value=>value>50).length};};
    return {id:enemy.id,factor:enemy.stats.WalkMotionFactor,rawDuration:animator.prepared.get('walkbw').clip.duration,
      firstRetreat,held,freeze,retreat,samples,frames:samples.length,distance:samples.reduce((sum,s)=>sum+s.moved,0),
      update:summary(samples.map(s=>s.updateMs)),render:summary(samples.map(s=>s.renderMs)),maximumSearchTraces,snapshot,scriptError:host.vm.lastError};
  });
  if(report.scene.snapshot){await writeFile(path.join(out,'skeleton-walkbw.png'),Buffer.from(report.scene.snapshot.png,'base64'));delete report.scene.snapshot.png;}
  await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');
  const s=report.scene;assert.ok(s.firstRetreat&&s.retreat.length>10,'real authored skeleton enters retreat');
  assert.ok(s.retreat.every(row=>row.animation==='walkback'&&row.clip==='walkbw'&&row.loop===false));
  assert.ok(s.retreat.every(row=>Math.abs(row.clipRate-s.factor*s.factor)<1e-7));
  assert.ok(Math.abs(s.firstRetreat.until-s.firstRetreat.time-s.rawDuration/(s.factor*s.factor))<1e-7);
  assert.ok(s.retreat.some(row=>row.moved>.1),'backward animation accompanies physical authored movement');
  assert.ok(s.held&&s.retreat.at(-1).finished,'a still-close player holds the final backward pose');
  assert.ok(s.retreat.every(row=>row.serial===s.firstRetreat.serial),'retreat clip is not restarted');
  assert.deepEqual(s.freeze.after.position,s.freeze.before.position);assert.equal(s.freeze.after.time,s.freeze.before.time);
  assert.equal(s.freeze.after.serial,s.freeze.before.serial);assert.ok(Math.abs(s.freeze.after.until-s.freeze.before.until-.1)<1e-7);
  assert.ok(s.maximumSearchTraces<=48);assert.equal(s.scriptError,null);assert.deepEqual(report.errors,[]);
  console.log(`PASS actual Graveyard backward retreat, rendered native clip, one-shot hold and freeze. ${out}`);
}catch(error){report.failure=error.stack;await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');throw error;}
finally{await context?.close();server.kill();}
