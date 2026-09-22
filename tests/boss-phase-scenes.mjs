import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

// Isolate the battle from entry triggers while exercising Gameplay.update,
// imported actor clips and the WebGL renderer in each original arena.
export async function verifyBossPhaseScenes(page) {
  await mkdir('artifacts',{recursive:true});
  const results={};
  for(const [type,index] of [['maxd',3],['maxj',1],['witch',4]]){
    const initial=await page.evaluate(async({type,index})=>{
      const app=window.__redcat;await app.startLevel(index);app.pause();document.getElementById('pause').hidden=true;
      const world=app.world,game=app.gameplay,host=game.scripts;
      for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
      let intro=null;
      if(type==='maxd') {
        const {WebGLRenderTarget}=await import('/node_modules/three/build/three.module.js');
        const double=game.find('max_actor')[0],renderedDouble=world.actorInstances.get(double.id),boss=game.find('Max')[0];
        const [x,y,z]=boss.boss.home;
        world.camera.position.set(x+140,y+80,z+160);world.camera.lookAt(x,y+30,z);
        const changedPixels=()=>{
          const renderer=world.renderer,target=new WebGLRenderTarget(320,180),previous=renderer.getRenderTarget();
          const before=new Uint8Array(320*180*4),after=new Uint8Array(before.length),visible=renderedDouble.visible;
          renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,320,180,before);
          renderedDouble.visible=false;renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,320,180,after);
          renderedDouble.visible=visible;renderer.setRenderTarget(previous);target.dispose();
          let changed=0;for(let i=0;i<before.length;i+=4)if(before[i]!==after[i]||before[i+1]!==after[i+1]||before[i+2]!==after[i+2])changed++;
          return changed;
        };
        world.syncActors(0);const before={position:renderedDouble.position.toArray(),pixels:changedPixels()};
        game.trigger(game.find('trigger_cuts05')[0]);
        for(let i=0;i<400;i++)host.update(.05);
        world.syncModels();world.syncActors(0);
        const after={position:renderedDouble.position.toArray(),pixels:changedPixels()};
        game.setDoor(game.find('door_left_endbattle')[0],true);game.setDoor(game.find('door_left_endbattle')[0],false);
        intro={before,after,actor:boss.actorFile,enabled:boss.enabled,error:host.vm.lastError,cutscene:host.cutscene};
      }
      for(const o of game.objects)if(o.kind==='trigger'||o.kind==='enemy')o.enabled=false;
      const boss=game.objects.find(o=>o.enemyType===type),actor=world.actorInstances.get(boss.id),events=[];
      const old=game.onEvent;game.onEvent=e=>{events.push(e);old(e);};boss.enabled=true;
      window.__phaseFixture={boss,actor,events,tick(){
        game.state.health=10;
        // Follow the Witch's vertical flight so visibility is controlled by
        // the phase, not by the test camera or an unrelated arena obstacle.
        const player=[boss.position[0],boss.position[1],boss.position[2]+100];
        boss.yaw=0;game.update(.05,player,{traceProjectile:(start,end)=>({fraction:0,end:start})});
        world.syncActors(.05);world.syncProjectiles();
      },render(){
        world.camera.position.set(boss.position[0]+140,boss.position[1]+80,boss.position[2]+160);
        world.camera.lookAt(boss.position[0],boss.position[1]+30,boss.position[2]);world.render();
      }};
      world.syncActors(0);window.__phaseFixture.render();
      return {position:[...boss.position],machine:world.bossMachines.get(boss.id)?.root.children.length||0,...(intro?{intro}:{})};
    },{type,index});
    const phases=await page.evaluate(type=>{
      const f=window.__phaseFixture,game=window.__redcat.gameplay,world=window.__redcat.world;
      const seen=[],record=()=>{
        const b=f.boss.boss;if(seen.at(-1)?.phase===b.phase)return;
        const machine=world.bossMachines.get(f.boss.id);
        seen.push({phase:b.phase,elapsed:b.elapsed,position:[...f.boss.position],visible:f.actor.visible,
          clip:f.actor.userData.animator.name,machineMotion:machine?.top?.userData.animator?.name});
      };
      const end=type==='maxd'?'lower':'shoot';
      for(let i=0;i<1200;i++){
        f.tick();record();
        if(f.boss.boss.phase===end&&(type!=='witch'||f.events.some(e=>e.type==='enemyProjectile')))break;
      }
      f.render();return {seen,shots:f.events.filter(e=>e.type==='enemyProjectile').map(e=>e.kind),phase:f.boss.boss.phase};
    },type);
    if(type==='maxd'){
      assert.deepEqual(initial.intro.before.position,[2,36,-2143]);assert.ok(initial.intro.before.pixels>20,'original cutscene double is visible before descending');
      // The authored descent is exact; do not replace it with a special
      // Hide command. A few edge pixels can remain above the platform.
      assert.deepEqual(initial.intro.after.position,[2,-37,-2143]);assert.ok(initial.intro.after.pixels<initial.intro.before.pixels*.05,'original Max double withdraws beneath the platform after the compiled max_weg event: '+JSON.stringify(initial.intro));
      assert.equal(initial.intro.actor,'maxd');assert.equal(initial.intro.enabled,true);assert.equal(initial.intro.cutscene,false);assert.equal(initial.intro.error,null);
      assert.equal(initial.machine,3);assert.equal(phases.phase,'lower');
      for(const p of ['shoot','betweenShots','rise','look','lower'])assert.ok(phases.seen.some(s=>s.phase===p),p);
      assert.equal(phases.seen.find(s=>s.phase==='shoot').machineMotion,'shoot1');
      assert.equal(phases.seen.find(s=>s.phase==='rise').machineMotion,'litopen');
      assert.equal(phases.seen.find(s=>s.phase==='lower').machineMotion,'litclose');
      assert.equal(phases.seen.find(s=>s.phase==='look').position[1],initial.position[1]+40);
      assert.deepEqual(phases.shots,['magma','magma','magma']);
    }else if(type==='maxj'){
      assert.equal(phases.phase,'shoot');assert.equal(phases.seen.find(s=>s.phase==='invisible').visible,false);
      const out=phases.seen.find(s=>s.phase==='teleportOut'),into=phases.seen.find(s=>s.phase==='teleportIn');
      assert.equal(out.clip,'teleport');assert.equal(into.clip,'teleport');assert.equal(into.visible,true);
      const shot=await page.evaluate(()=>{const f=window.__phaseFixture;for(let i=0;i<100&&!f.events.some(e=>e.type==='enemyProjectile');i++)f.tick();f.render();return f.events.filter(e=>e.type==='enemyProjectile').map(e=>e.kind);});
      assert.deepEqual(shot,['jesterBall']);phases.shots=shot;
    }else{
      assert.equal(phases.phase,'shoot');assert.equal(phases.seen.find(s=>s.phase==='start').clip,'start');
      assert.ok(phases.seen.some(s=>s.phase==='fly'));
      assert.notDeepEqual(phases.seen.find(s=>s.phase==='shoot').position,initial.position);
      assert.deepEqual(phases.shots,['magicBall']);
    }
    await page.screenshot({path:`artifacts/${type}-boss-phase.png`});
    const shielding=type==='maxd'?await page.evaluate(()=>{
      const {world,gameplay:game}=window.__redcat,{boss,events}=window.__phaseFixture,host=game.scripts;
      const [x,y,z]=boss.boss.home,health=boss.health,input={forward:0,right:0,turn:0,jump:false,attack:false,use:false};
      world.player.position=[x+300,y,z+200];world.player.velocityY=0;
      host.enemiesFrozen=true;boss.yaw=0;boss.position=[x,y,z];world.syncActors(0);
      const shoot=height=>{
        game.projectiles=[{id:'shield-pellet',sourceId:'redcat',owner:'player',kind:'shot',position:[x,y+height,z+120],velocity:[0,0,-1500],radius:3,age:0,life:1,gravity:0,damage:1}];
        // Exercise World.update's real BSP/actor query and source forwarding,
        // not the isolated phase fixture's projectile stub.
        world.update(.1,input);
        return {health:boss.health,remaining:game.projectiles.length,target:events.filter(e=>e.type==='playerProjectileImpact').at(-1)?.target};
      };
      const low=shoot(30),coveredHead=shoot(48);
      boss.position[1]=y+40;boss.boss.phase='look';world.syncActors(0);
      const raisedHead=shoot(88);
      host.enemiesFrozen=false;boss.boss.phase='look';boss.boss.elapsed=0;
      const fireFromMachine=sourceId=>{
        game.projectiles=[{id:'shield-magma',sourceId,owner:'enemy',kind:'magma',position:[x,y+30,z],velocity:[0,0,1000],radius:2,age:0,life:1,gravity:0,damage:1}];
        world.update(.1,input);
        return game.projectiles.filter(p=>p.id==='shield-magma').map(p=>[...p.position]);
      };
      const foreignShot=fireFromMachine('other-enemy'),ownShot=fireFromMachine(boss.id);
      game.projectiles=[];
      return {health,bossId:boss.id,low,coveredHead,raisedHead,foreignShot,ownShot,exit:[x,y+30,z+100]};
    }):null;
    if(shielding){
      assert.deepEqual(shielding.low,{health:shielding.health-1,remaining:0,target:shielding.bossId});
      assert.deepEqual(shielding.coveredHead,{health:shielding.health-2,remaining:0,target:shielding.bossId});
      assert.deepEqual(shielding.raisedHead,{health:shielding.health-3,remaining:0,target:shielding.bossId});
      assert.deepEqual(shielding.foreignShot,[]);assert.deepEqual(shielding.ownShot,[shielding.exit]);
    }
    const defeat=await page.evaluate(type=>{
      const {gameplay:game,world}=window.__redcat,f=window.__phaseFixture,host=game.scripts;
      // These calls exercise the same accepted-health path used by pellets.
      f.boss.boss.hidden=false;f.boss.boss.invulnerable=false;
      if(type==='witch')f.boss.health=3;game.hurtEnemy(f.boss,type==='witch'?1:100);
      for(let i=0;i<6;i++)host.update(.1);world.syncActors(0);
      return {health:f.boss.health,kills:game.state.kills,cutscene:host.cutscene,frozen:host.enemiesFrozen,error:host.vm.lastError,
        beams:type==='witch'?['beam_sequence01','beam_sequence02'].map(name=>game.find(name)[0].enabled):null,
        gates:type==='maxd'?['door_left_to_tower','door_right_to_tower'].map(name=>game.find(name)[0].locked):null,
        camera:host.camera?.id,expectedCamera:type==='witch'?game.find('cam_witch11')[0].id:null};
    },type);
    assert.equal(defeat.health,0);assert.equal(defeat.kills,1);assert.equal(defeat.error,null);
    if(type==='maxd')assert.deepEqual(defeat.gates,[false,false]);
    if(type==='witch'){assert.deepEqual(defeat.beams,[true,true]);assert.equal(defeat.cutscene,true);assert.equal(defeat.frozen,true);assert.equal(defeat.camera,defeat.expectedCamera);}
    results[type]={initial,phases,...(shielding?{shielding}:{}),defeat};
  }
  await writeFile('artifacts/boss-phase-scenes.json',JSON.stringify(results,null,2)+'\n');
  console.log('PASS Dungeon Max machine cycle and physical shielding, Jester visibility/teleport animation, Witch takeoff/flight, original ammunition and defeat script handoffs.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href){
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4184'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
  try{
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];page.on('pageerror',error=>errors.push(error.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
    await page.goto('http://127.0.0.1:4184/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyBossPhaseScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
