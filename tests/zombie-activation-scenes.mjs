import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

// Exercise the graveyard's actual button/trigger brushes and compiled scripts.
// The actor state is never enabled directly and E is never pressed.
const cases=[
  {name:'dknopa',zombie:'zombie3',lid:'grafdek4_mc',cover:'graf4_deksel',position:[2604,-47,220],yaw:0,camera:[2440,85,550],look:[2370,-40,220]},
  {name:'dknopb',zombie:'zombie4',lid:'grafdek3_mc',cover:'graf3_deksel',position:[2220,-47,1380],yaw:Math.PI,camera:[2390,70,880],look:[2250,-45,1140]},
  {name:'graf1_trigger',zombie:'zombie1',lid:'grafdek1_mc',cover:'graf1_deksel',position:[3568,-47,1350],yaw:Math.PI,camera:[3680,90,1350],look:[3876,-55,1010]},
  {name:'graf2_trigger',zombie:'zombie2',lid:'grafdek2_mc',cover:'graf2_deksel',position:[2250,-47,800],yaw:0,camera:[2490,70,870],look:[2630,-50,520]}
];
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4216'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto('http://127.0.0.1:4216/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const results=[];
  for(const fixture of cases.filter(f=>!process.env.ZOMBIE_CASE||process.env.ZOMBIE_CASE===f.name)) {
    await page.evaluate(async fixture=>{
      const app=window.__redcat;await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
      const w=app.world,g=app.gameplay,h=g.scripts,{targetableObject}=await import('/src/targeting.js');
      for(const player of h.players.values())player.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
      // Keep only the relevant original spatial trigger and chained counter.
      // Suppress unrelated camera tours while recording this one encounter.
      for(const o of g.objects)if(o.kind==='trigger'&&![fixture.name,'dubbeltrigger'].includes(o.entity.DaviName))o.enabled=false;
      const object=g.find(fixture.name)[0],zombie=g.find(fixture.zombie)[0],lid=g.find(fixture.lid)[0],cover=g.find(fixture.cover)[0];
      const ground=w.collider.trace([fixture.position[0],40,fixture.position[2]],[fixture.position[0],-160,fixture.position[2]],w.player.mins,w.player.maxs,w.physicalModels);
      w.player.position=ground.end.map((v,i)=>v+(i===1?.05:0));w.player.lastSafe=[...w.player.position];w.player.velocityY=0;w.player.grounded=true;w.yaw=fixture.yaw;w.pitch=.12;
      w.syncModels();w.syncActors(0);w.syncPlayer(0,{});
      const actorState=o=>{
        const actor=w.actorInstances.get(o.id),mesh=actor?.userData.mesh,animator=actor?.userData.stateAnimator?.animator;
        actor?.updateWorldMatrix(true,true);
        const bounds=mesh?.geometry.boundingBox?.clone().applyMatrix4(mesh.matrixWorld);
        return {id:o.id,name:o.entity.DaviName,type:o.entity.Type,subtype:o.entity.SubType,initial:o.entity.IsInitiallyEnabled,enabled:o.enabled,visible:actor?.visible,targetable:targetableObject(o),health:o.health,patrol:o.patrol?{...o.patrol}:null,actor:o.actorFile,animation:o.animationState,phase:o.ambush?.phase,motion:animator?.name,motionTime:animator?.time,position:[...o.position],bounds:bounds?{min:bounds.min.toArray(),max:bounds.max.toArray()}:null};
      };
      const state=()=>({at:g.time,player:[...w.player.position],contacts:[...(w.player.contacts||[])],inside:object.inside,switchCount:object.switchCount,triggerCount:object.triggerCount,zombie:actorState(zombie),lid:g.modelState(lid.modelIndex),coverVisible:w.actorInstances.get(cover.id)?.visible,coverHealth:cover.health,coverExplosion:!!g.explosions?.some(e=>e.sourceId===cover.id),fragments:w.effects?.destructibles?.particles.length||0});
      const photograph=()=>{w.syncPlayer(0,{});w.camera.position.fromArray(fixture.camera);w.camera.lookAt(...fixture.look);w.render();};
      const events=[],oldEvent=g.onEvent;g.onEvent=event=>{if(['visibility','enemyDefeated','enable'].includes(event.type)||event.type==='scriptSound'&&event.sound==='expl6.wav')events.push({at:g.time,...event});oldEvent(event);};
      window.__zombieFixture={w,g,h,object,zombie,lid,cover,actorState,state,photograph,fixture,ground,events};
      photograph();
    },fixture);
    const before=await page.evaluate(()=>{
      const f=window.__zombieFixture;
      return {state:f.state(),ground:{startSolid:f.ground.startSolid,fraction:f.ground.fraction,end:f.ground.end},all:f.g.objects.filter(o=>o.entity.classname==='MovingEnemy'&&o.entity.Type==='4').map(f.actorState),statue:f.actorState(f.g.find('AdamAnyActor134')[0]),model:f.object.modelIndex};
    });
    await page.screenshot({path:`artifacts/zombie-${fixture.name}-before.png`});
    const after=await page.evaluate(()=>{
      const {w,g,h,object,zombie,state,photograph,events}=window.__zombieFixture,input={forward:0,right:0,use:false,attack:false},approach=[],timeline=[];
      for(let i=0;i<100;i++){w.update(1/60,{...input,forward:1});approach.push(state());if(object.switchCount||object.triggerCount)break;}
      const touched=state();
      for(let i=0;i<180;i++){w.update(1/60,input);if(i%6===0)timeline.push(state());}
      const trace=w.collider.trace(zombie.position,zombie.position,zombie.collisionMins,zombie.collisionMaxs,w.physicalModels);
      const groundTrace=w.collider.trace(zombie.position,zombie.position.map((v,i)=>v-(i===1?100:0)),zombie.collisionMins,zombie.collisionMaxs,w.physicalModels);
      photograph();return {approach,touched,timeline,events,final:state(),diagnostics:{enemiesFrozen:h.enemiesFrozen,cutscene:h.cutscene,trace,groundTrace},error:h.vm.lastError};
    });
    await page.screenshot({path:`artifacts/zombie-${fixture.name}-after.png`});
    results.push({fixture,before,after});
  }
  await writeFile('artifacts/zombie-activation-scenes.json',JSON.stringify({results,errors},null,2)+'\n');
  if(process.env.ZOMBIE_DIAGNOSE==='1') {
    for(const r of results)console.log(JSON.stringify({name:r.fixture.name,initialVisible:r.before.all.filter(o=>o.visible).map(o=>o.name),before:r.before.state,after:{touched:r.after.touched,final:r.after.final,states:[...new Set(r.after.timeline.map(x=>`${x.zombie.animation}/${x.zombie.visible}`))],diagnostics:r.after.diagnostics,error:r.after.error}}));
  }else{
    for(const r of results){
      assert.equal(r.before.ground.startSolid,false,`${r.fixture.name}: valid player approach`);
      assert.equal(r.before.all.length,12);
      assert.deepEqual(r.before.all.filter(o=>o.visible).map(o=>o.name).sort(),['mausozom1','mausozom2']);
      for(const zombie of r.before.all){assert.equal(zombie.visible,zombie.initial==='1',`${zombie.name}: native initial activation controls rendering`);assert.equal(zombie.targetable,zombie.initial==='1',`${zombie.name}: inactive zombie cannot be targeted`);}
      assert.equal(r.before.state.zombie.enabled,false);
      assert.equal(r.before.state.coverVisible,true);assert.equal(r.before.state.lid.visible,true);
      if(r.fixture.name.startsWith('dknop')){
        assert.ok(r.after.touched.contacts.includes(r.before.model),`${r.fixture.name}: actual hull touches original button brush`);
        assert.equal(r.after.touched.switchCount,1,`${r.fixture.name}: movement activates button without E`);
      }else assert.ok(r.after.touched.triggerCount>0,`${r.fixture.name}: real player movement crosses trigger volume`);
      assert.equal(r.after.final.zombie.enabled,true,`${r.fixture.name}: original compiled script enables its zombie`);
      assert.equal(r.after.final.lid.visible,false);assert.equal(r.after.final.coverVisible,false);
      assert.equal(r.after.final.zombie.visible,true,`${r.fixture.name}: activated zombie renders`);
      assert.ok(r.after.timeline.some(s=>s.zombie.animation==='walk'&&s.zombie.motion==='walkfw'),`${r.fixture.name}: activated zombie plays original walking animation`);
      assert.ok(Math.hypot(...r.after.final.zombie.position.map((v,i)=>v-r.before.state.zombie.position[i]))>70,`${r.fixture.name}: activated zombie walks along its original route`);
      const explosion=r.after.events.findIndex(e=>e.type==='scriptSound'&&e.sound==='expl6.wav'),activation=r.after.events.findIndex(e=>e.type==='enable'&&e.id===r.before.state.zombie.id&&e.enabled);
      assert.ok(explosion>=0&&activation>explosion,`${r.fixture.name}: grave-cover explosion precedes zombie activation`);
      assert.ok(r.after.timeline.some(s=>s.coverExplosion&&s.fragments>0),`${r.fixture.name}: original grave-cover fragments render`);
      assert.equal(r.before.statue.visible,true,`${r.fixture.name}: original entrance statue remains visible`);
      assert.equal(r.after.error,null);
    }
    assert.deepEqual(errors,[]);
    console.log('PASS original graveyard wall buttons and spatial triggers activate their zombies using real player movement without E, remove corresponding grave lids, and preserve the entrance statue; no browser, script or HTTP errors.');
  }
}finally{await browser?.close();server.kill();}
