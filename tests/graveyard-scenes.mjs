import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyGraveyardScenes(page) {
  await mkdir('artifacts',{recursive:true});
  const before=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts;
    for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;
    for(const object of game.objects)if(object.kind==='enemy'||object.kind==='trigger'&&object.entity.DaviName!=='dubbeltrigger')object.enabled=false;
    world.player.position=[1900,-39,728];world.player.grounded=true;world.player.velocityY=0;world.yaw=Math.PI/2;world.pitch=.02;
    for(let i=0;i<40;i++)world.update(.025,{forward:0,right:0});world.updateCamera(1,true);world.render();
    const doors=['lastdoor_left','lastdoor_right'].map(name=>game.find(name)[0]);
    window.__graveDoorFixture={doors};
    return {doors:doors.map(door=>({id:door.id,enabled:door.enabled,open:door.open})),blocked:world.collider.trace([1660,-39,728],[1560,-39,728],world.player.mins,world.player.maxs,world.physicalModels).fraction<1};
  });
  assert.equal(before.blocked,true);assert.ok(before.doors.every(door=>!door.enabled&&!door.open));
  await page.screenshot({path:'artifacts/graveyard-door-before.png'});
  const buttons=[];
  for(const [name,position,yaw] of [['dknopa',[2604,-39,176],0],['dknopb',[2220,-39,1416],Math.PI]]) {
    const button=await page.evaluate(({name,position,yaw})=>{
      const world=window.__redcat.world,game=world.gameplay,object=game.find(name)[0];
      world.player.position=position;world.player.velocityY=0;world.player.grounded=true;world.yaw=yaw;
      world.update(.025,{forward:0,right:0,use:true});
      for(let i=0;i<48;i++)world.update(.025,{forward:0,right:0,use:false});
      return {name,switched:object.switchedOn,counter:game.find('dubbeltrigger')[0].triggerCount,open:window.__graveDoorFixture.doors.map(door=>door.open)};
    },{name,position,yaw});
    assert.equal(button.switched,true);buttons.push(button);
  }
  assert.equal(buttons[0].counter,1);assert.deepEqual(buttons[0].open,[false,false]);
  assert.equal(buttons[1].counter,2);assert.deepEqual(buttons[1].open,[true,true]);
  const after=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,doors=window.__graveDoorFixture.doors;
    for(let i=0;i<90;i++)world.update(.025,{forward:0,right:0});
    game.scripts.camera=null;game.scripts.cutscene=false;
    world.player.position=[1900,-39,728];world.player.velocityY=0;world.player.grounded=true;world.yaw=Math.PI/2;world.pitch=.02;
    world.syncPlayer(0,{});world.updateCamera(1,true);world.render();
    return {doors:doors.map(door=>({open:door.open,enabled:door.enabled,time:game.scripts.players.get(door.id).time,rotation:game.scripts.modelTransforms.get(door.modelIndex).rotation})),fraction:world.collider.trace([1660,-39,728],[1560,-39,728],world.player.mins,world.player.maxs,world.physicalModels).fraction,error:game.scripts.vm.lastError};
  });
  assert.equal(after.fraction,1);assert.equal(after.error,null);
  assert.ok(after.doors.every(door=>door.open&&!door.enabled&&door.time===2));
  await page.screenshot({path:'artifacts/graveyard-door-after.png'});
  const crossing=await page.evaluate(()=>{
    const world=window.__redcat.world;world.player.position=[1670,-39,728];world.player.velocityY=0;world.player.grounded=true;world.yaw=Math.PI/2;
    for(let i=0;i<36;i++)world.update(.025,{forward:1,right:0});world.render();
    return {position:[...world.player.position],health:world.gameplay.state.health};
  });
  assert.ok(crossing.position[0]<1590,`Player remains blocked at ${crossing.position}`);
  const statue=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,host=game.scripts;
    for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;
    for(const object of game.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
    const object=game.find('AdamAnyActor134')[0],actor=world.actorInstances.get(object.id),blocker=world.collider.actors.find(item=>item.id===object.id);
    if(!blocker)throw new Error('Original entrance statue has no collider');
    const start=[1824,-63.95,3510],end=[1824,-63.95,3300];
    const direct=world.collider.trace(start,end,world.player.mins,world.player.maxs,world.physicalModels);
    const shot=world.collider.trace([1824,-40,3510],[1824,-40,3300],[0,0,0],[0,0,0],world.physicalModels,'canBeShot');
    const sight=world.collider.trace([1824,-40,3510],[1824,-40,3300],[0,0,0],[0,0,0],world.physicalModels,'blocksLOS');
    const yaw=-20*Math.PI/180;
    world.player.position=[1824+Math.sin(yaw)*140,-63.95,3368+Math.cos(yaw)*140];world.player.velocityY=0;world.player.grounded=true;world.yaw=yaw;
    for(let i=0;i<100;i++)world.update(.025,{forward:1,right:0});
    const stopped=[...world.player.position];
    for(let i=0;i<20;i++)world.update(.025,{forward:1,right:0});
    const stable=[...world.player.position];
    world.updateCamera(1,true);world.render();
    window.__graveStatueFixture={object,actor,blocker};
    return {id:object.id,rotation:actor.rotation.y,meshRotation:actor.userData.mesh.rotation.x,scale:actor.userData.mesh.scale.x,
      bounds:{min:blocker.min,max:blocker.max},direct:{fraction:direct.fraction,id:direct.actorId},shot:{fraction:shot.fraction,id:shot.actorId},sight:sight.fraction,stopped,stable};
  });
  assert.ok(Math.abs(statue.rotation+20*Math.PI/180)<1e-8);assert.ok(Math.abs(statue.meshRotation+Math.PI/2)<1e-8);assert.equal(statue.scale,1);
  assert.equal(statue.direct.id,statue.id);assert.ok(statue.direct.fraction<1);assert.equal(statue.shot.id,statue.id);assert.ok(statue.shot.fraction<1);assert.equal(statue.sight,1);
  // The beveled original pedestal can slide the player sideways a little;
  // forward progress must stay blocked instead of crossing its 96-unit depth.
  assert.ok(statue.stopped[2]>3368,JSON.stringify(statue));assert.ok(statue.stable[2]>3368);
  assert.ok(Math.hypot(...statue.stopped.map((v,i)=>v-statue.stable[i]))<10,'Forward movement should be blocked at the pedestal: '+JSON.stringify(statue));
  await page.screenshot({path:'artifacts/graveyard-statue-collision.png'});
  const around=await page.evaluate(()=>{
    const world=window.__redcat.world;
    for(let i=0;i<30;i++)world.update(.025,{forward:0,right:-1});
    for(let i=0;i<55;i++)world.update(.025,{forward:1,right:0});world.render();
    return [...world.player.position];
  });
  assert.ok(around[2]<statue.bounds.min[2]-15,`Player cannot walk around the statue: ${around}`);
  await writeFile('artifacts/graveyard-scenes.json',JSON.stringify({before,buttons,after,crossing,statue,around},null,2)+'\n');
  console.log('PASS grave buttons open paired doors and permit passage; original entrance statue blocks walking/shots, preserves clear line of sight, and allows walking around.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4185'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
    await page.goto('http://127.0.0.1:4185/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyGraveyardScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
