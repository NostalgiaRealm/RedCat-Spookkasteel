import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

/** The paired tower door shown in Stuck in doors.png, using its actual brushes,
 * authored hinges, compiled Open callback and normal player hull/controller. */
export async function verifyDoorScenes(page) {
  await mkdir('artifacts',{recursive:true});
  const before=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(4);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts;
    for(const motion of host.players.values())motion.stop();
    host.cutscene=false;host.camera=null;host.enemiesFrozen=true;
    for(const object of game.objects)if(object.kind==='trigger')object.enabled=false;
    world.player.position=[-40,2368.05,659];world.player.velocityY=0;world.player.grounded=true;
    world.yaw=Math.PI;world.pitch=.12;world.syncPlayer(0,{});world.updateCamera(1,true);world.render();
    const doors=['door_witch01','door_witch02'].map(name=>game.find(name)[0]);
    window.__doorFixture={doors,samples:[],initial:[...world.player.position]};
    return {position:[...world.player.position],solid:world.collider.trace(world.player.position,world.player.position,world.player.mins,world.player.maxs,world.physicalModels).startSolid,
      doors:doors.map(door=>({id:door.id,model:door.modelIndex,open:door.open,time:host.players.get(door.id).time}))};
  });
  assert.equal(before.solid,false);assert.deepEqual(before.doors.map(door=>door.model),[2,3]);
  await page.screenshot({path:'artifacts/tower-door-before.png'});
  const during=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,fixture=window.__doorFixture;
    game.command(fixture.doors[0],'open');
    for(let frame=0;frame<20;frame++) {
      world.update(.025,{forward:0,right:0});
      const p=world.player.position;
      fixture.samples.push({position:[...p],solid:world.collider.trace(p,p,world.player.mins,world.player.maxs,world.physicalModels).startSolid,time:game.scripts.players.get(fixture.doors[0].id).time});
    }
    world.updateCamera(1,true);world.render();return fixture.samples.at(-1);
  });
  assert.equal(during.solid,false);assert.ok(during.time>.4&&during.time<.6);
  await page.screenshot({path:'artifacts/tower-door-opening.png'});
  const opened=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,fixture=window.__doorFixture;
    for(let frame=0;frame<22;frame++) {
      world.update(.025,{forward:0,right:0});
      const p=world.player.position;
      fixture.samples.push({position:[...p],solid:world.collider.trace(p,p,world.player.mins,world.player.maxs,world.physicalModels).startSolid,time:game.scripts.players.get(fixture.doors[0].id).time});
    }
    world.updateCamera(1,true);world.render();
    return {position:[...world.player.position],samples:fixture.samples,doors:fixture.doors.map(door=>({open:door.open,time:game.scripts.players.get(door.id).time})),error:game.scripts.vm.lastError};
  });
  assert.ok(opened.samples.every(sample=>!sample.solid),'Opening door left the player hull inside a solid brush');
  assert.ok(Math.hypot(...opened.position.map((v,i)=>v-before.position[i]))>10,'Player was not displaced by the opening leaf');
  assert.ok(opened.doors.every(door=>door.open&&door.time===1));assert.equal(opened.error,null);
  await page.screenshot({path:'artifacts/tower-door-open.png'});
  const walked=await page.evaluate(()=>{
    const world=window.__redcat.world;world.yaw=0;
    for(let frame=0;frame<20;frame++)world.update(.025,{forward:1,right:0});
    return [...world.player.position];
  });
  assert.ok(walked[2]<opened.position[2]-50,`Player cannot walk away from opened door: ${walked}`);
  await writeFile('artifacts/door-scenes.json',JSON.stringify({before,during,opened,walked},null,2)+'\n');
  console.log('PASS original paired tower door pushes RedCat clear throughout opening, finishes both hinges and permits walking away.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4190'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
    await page.goto('http://127.0.0.1:4190/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyDoorScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
