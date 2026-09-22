import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyBossScenes(page) {
  await mkdir('artifacts',{recursive:true});
  const approach=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts;
    for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
    for(const object of game.objects)if(object.kind==='trigger'&&!object.entity.TargetSubLevel||object.kind==='enemy')object.enabled=false;
    const boss=game.find('brutus')[0];world.player.position=[2396,-155,-1150];world.player.grounded=true;world.player.velocityY=0;world.yaw=0;world.pitch=.03;
    world.syncActors(0);world.syncPlayer(0,{});world.updateCamera(1,true);world.render();
    const events=[],previous=game.onEvent;game.onEvent=event=>{events.push(event);previous(event);};
    window.__bossFixture={boss,events};
    return {visible:world.actorInstances.get(boss.id).visible,enabled:boss.enabled,position:[...boss.position]};
  });
  assert.equal(approach.visible,true);assert.equal(approach.enabled,false);
  await page.screenshot({path:'artifacts/brutus-before-intro.png'});
  const intro=await page.evaluate(()=>{
    const {world,gameplay:game}=window.__redcat;
    const trigger=game.find('csmc10_tr')[0];trigger.enabled=true;game.trigger(trigger);trigger.enabled=false;
    for(let i=0;i<105;i++)world.update(.05,{forward:0,right:0});world.render();
    return {cutscene:game.scripts.cutscene,visible:world.actorInstances.get(window.__bossFixture.boss.id).visible,subtitle:document.getElementById('subtitle').textContent};
  });
  assert.equal(intro.cutscene,true);assert.equal(intro.visible,true);assert.ok(intro.subtitle);
  await page.screenshot({path:'artifacts/brutus-during-intro.png'});
  const shot=await page.evaluate(()=>{
    const app=window.__redcat,world=app.world,game=app.gameplay,{boss}=window.__bossFixture;
    for(let i=0;i<410;i++)world.update(.05,{forward:0,right:0});
    const enabled=boss.enabled,music=app.audio.snapshot().find(r=>r.key==='music')?.sound;
    world.player.position=[boss.position[0],boss.position[1]+1,boss.position[2]+250];
    for(let i=0;i<240&&!game.projectiles.some(p=>p.sourceId===boss.id);i++)world.update(.025,{forward:0,right:0});
    const thrown=game.projectiles.find(p=>p.sourceId===boss.id),thrownMesh=world.projectileMeshes.get(thrown?.id);
    const mushroom={kind:thrown?.kind,speed:thrown?Math.hypot(...thrown.velocity):null,sprite:!!thrownMesh?.isSprite,width:thrownMesh?.scale.x,damage:thrown?.damage};
    // Use the real boss collision hull and original arena while keeping the
    // target still to measure RedCat's projectile independently from patrol RNG.
    boss.attackTimer=100;const oldUpdate=game.updateEnemy;game.updateEnemy=()=>{};
    world.player.position=[boss.position[0],boss.position[1]+1,boss.position[2]+250];world.yaw=0;world.pitch=0;game.state.skill=1;
    const health=boss.health;world.update(.025,{forward:0,right:0,attack:true});
    for(let i=0;i<19;i++)world.update(.025,{forward:0,right:0});
    const pellet=game.projectiles.find(p=>p.owner==='player'),mesh=world.projectileMeshes.get(pellet?.id),firstFrame=mesh?.material.map;
    const initial={kind:pellet?.kind,speed:pellet?Math.hypot(...pellet.velocity):null,sprite:!!mesh?.isSprite,visible:mesh?.visible,width:mesh?.scale.x,clip:world.redcat.userData.animator.name,health:boss.health};
    for(let i=0;i<4;i++)world.update(.025,{forward:0,right:0});world.render();
    const animated=mesh?.material.map!==firstFrame;
    for(let i=0;i<45&&boss.health===health;i++)world.update(.025,{forward:0,right:0});
    game.updateEnemy=oldUpdate;
    return {enabled,music,cutscene:game.scripts.cutscene,mushroom,initial,animated,damage:health-boss.health,healthBefore:health};
  });
  assert.equal(shot.enabled,true);assert.equal(shot.cutscene,false);assert.match(shot.music,/endboss/i);
  assert.equal(shot.mushroom.kind,'mushRoom');assert.equal(shot.mushroom.sprite,true);assert.equal(shot.mushroom.width,9.6);
  assert.ok(Math.abs(shot.mushroom.speed-250)<1e-8);assert.equal(shot.mushroom.damage,2);
  assert.equal(shot.initial.kind,'shot');assert.equal(shot.initial.sprite,true);assert.equal(shot.initial.visible,true);
  assert.equal(shot.initial.width,25.6);assert.equal(shot.initial.clip,'shoot1');assert.equal(shot.initial.health,shot.healthBefore);
  assert.ok(shot.initial.speed>=300&&shot.initial.speed<310);assert.equal(shot.animated,true);assert.equal(shot.damage,1);
  const victory=await page.evaluate(()=>{
    const app=window.__redcat,game=app.gameplay,world=app.world,{boss}=window.__bossFixture;
    game.hurtEnemy(boss,boss.health);
    const musicAfterDeath=app.audio.snapshot().find(r=>r.key==='music')?.sound;
    for(let i=0;i<490;i++)world.update(.05,{forward:0,right:0});
    const mirror=game.find('mirror')[0],position=game.objectPosition(mirror),actor=world.actorInstances.get(mirror.id);
    world.player.position=[position[0],position[1],position[2]+100];world.yaw=0;world.pitch=.08;
    world.syncPlayer(0,{});world.camera.position.set(position[0]-90,position[1]+65,position[2]+60);world.camera.lookAt(position[0],position[1]+18,position[2]);world.render();
    return {musicAfterDeath,cutscene:game.scripts.cutscene,position,visible:actor.visible,actorPosition:actor.position.toArray(),platformIncluded:world.physicalModels.includes(mirror.modelIndex),scriptError:game.scripts.vm.lastError};
  });
  assert.ok(!/endboss/i.test(victory.musicAfterDeath));assert.equal(victory.cutscene,false);assert.equal(victory.visible,true);
  assert.deepEqual(victory.position,[2340,-154,-1158]);assert.equal(victory.platformIncluded,true);assert.equal(victory.scriptError,null);
  await page.screenshot({path:'artifacts/brutus-defeated-mirror.png'});
  const exit=await page.evaluate(async()=>{
    const app=window.__redcat,game=app.gameplay,world=app.world,mirror=game.find('mirror')[0];
    world.player.position=[...game.objectPosition(mirror)];world.update(.025,{forward:0,right:0});
    const result={collected:mirror.collected,completed:game.completed,events:window.__bossFixture.events.filter(e=>e.type==='levelComplete')};
    app.saveGame(true);await app.loadSave();app.pause();return {...result,loadedLevel:app.world.id};
  });
  assert.equal(exit.collected,true);assert.equal(exit.completed,true);assert.equal(exit.events.length,1);assert.equal(exit.events[0].target,'lvl01a');assert.equal(exit.loadedLevel,'lvl01a');
  const castle=await page.evaluate(()=>{
    const app=window.__redcat,game=app.gameplay,world=app.world,host=game.scripts;
    for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;
    for(const object of game.objects)if(object.kind==='trigger'||object.kind==='enemy')object.enabled=false;
    const endpoint=game.find('rcpoint1').find(o=>o.entity.classname==='EffectEndPoint');
    world.player.position=[...endpoint.position];world.player.position[1]+=1;
    const trigger=game.find('TRcamera02')[0];trigger.enabled=true;game.trigger(trigger);trigger.enabled=false;
    for(let i=0;i<25;i++)world.update(.05,{forward:0,right:0});
    document.getElementById('pause').hidden=true;world.render();
    return {position:[...world.player.position],expected:endpoint.position,subtitle:document.getElementById('subtitle').textContent,cutscene:host.cutscene};
  });
  assert.equal(castle.cutscene,true);assert.match(castle.subtitle,/Help, RedCat, hellup/);
  assert.equal(castle.position[0],castle.expected[0]);assert.equal(castle.position[2],castle.expected[2]);assert.ok(Math.abs(castle.position[1]-castle.expected[1])<2);
  await page.screenshot({path:'artifacts/castle-whizkitty-position.png'});
  await writeFile('artifacts/boss-scenes.json',JSON.stringify({approach,intro,shot,victory,exit,castle},null,2)+'\n');
  console.log('PASS Brutus visible before/during intro, timed animated pellet and damage, boss music ends, mirror rises/collects/advances, castle cutscene endpoint.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4181'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
    await page.goto('http://127.0.0.1:4181/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyBossScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
