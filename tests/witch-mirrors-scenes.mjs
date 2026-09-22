import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4206'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4206/?skipIntro');await page.waitForFunction(()=>window.__redcat);await mkdir('artifacts',{recursive:true});
  const mirrors=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(4);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts,o=name=>g.find(name)[0],rows=[];
    for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    g.command(o('door_witch01'),'open');
    for(let i=1;i<=5;i++){
      const suffix=String(i).padStart(2,'0'),trigger=o('trigger_sokkel'+suffix),mirror=o('mirror'+suffix),standard=o('standaard'+suffix);
      const [x,,z]=trigger.position,rad=Math.hypot(x,z),direction=[x/rad,z/rad];
      w.player.position=[x-direction[0]*125,2368.05,z-direction[1]*125];w.player.resetVelocity();w.player.grounded=true;
      w.yaw=Math.atan2(-direction[0],-direction[1]);
      if(i===5)g.pickup(o('laatste'));
      let frames=0;
      for(;frames<150&&g.objectPosition(mirror)[1]<2400;frames++)w.update(1/60,{forward:1,right:0,turn:0});
      w.syncActors(0);
      rows.push({name:mirror.entity.DaviName,frames,triggerCount:trigger.triggerCount,player:[...w.player.position],position:w.actorInstances.get(mirror.id).position.toArray(),standard:g.objectPosition(standard),enabled:trigger.enabled});
      if(i===1){w.redcat.visible=false;w.camera.position.set(80,2424,-416);w.camera.lookAt(0,2435,-544);w.render();}
    }
    w.redcat.visible=false;w.camera.position.set(80,2424,-416);w.camera.lookAt(0,2435,-544);w.render();
    return {rows,error:h.vm.lastError};
  });
  await page.waitForFunction(()=>Number(getComputedStyle(document.getElementById('script-flash')).opacity)===0);
  await page.screenshot({path:'artifacts/tower-raised-mirror.png'});
  for(const row of mirrors.rows){assert.ok(row.frames<150,row.name+' must respond to walking into its trigger');assert.equal(row.position[1],2416,row.name);assert.equal(row.standard[1],2304);assert.equal(row.enabled,false);}
  assert.equal(mirrors.error,null);
  const witch=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(4);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts,o=name=>g.find(name)[0];
    for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    g.command(o('door_witch01'),'open');g.command(o('trigger_witchmodel'),'enable');
    const records=[];
    for(let i=0;i<30;i++){
      h.update(.1);w.syncModels();w.syncActors(.1);
      if(i%20===0)records.push({time:h.time,enabled:o('The_Witch').enabled,combat:w.actorInstances.get(o('The_Witch').id).visible,cinematic:w.actorInstances.get(o('witch_model').id).visible});
    }
    // Inspect the actual early window-flight pose and empty cauldron.
    w.redcat.visible=false;
    w.camera.position.set(-175,2530,425);w.camera.lookAt(150,2480,-120);w.render();
    return {records,error:h.vm.lastError};
  });
  await page.screenshot({path:'artifacts/tower-window-witch-single.png'});
  witch.handoff=await page.evaluate(()=>{
    const w=window.__redcat.world,g=window.__redcat.gameplay,h=g.scripts,witch=g.find('The_Witch')[0],body=w.actorInstances.get(witch.id);let earlyVisible=false;
    const motion=h.players.get(g.find('trigger_witchmodel')[0].id);
    while(motion.time<36.4){h.update(.05);w.syncActors(.05);earlyVisible||=body.visible;}
    h.update(.2);w.syncActors(.2);
    return {earlyVisible,enabled:witch.enabled,visible:body.visible,error:h.vm.lastError};
  });
  assert.ok(witch.records.every(r=>!r.combat&&r.cinematic&&!r.enabled));assert.equal(witch.error,null);
  assert.equal(witch.handoff.earlyVisible,false);assert.equal(witch.handoff.enabled,true);assert.equal(witch.handoff.visible,true);assert.equal(witch.handoff.error,null);assert.deepEqual(errors,[]);
  await writeFile('artifacts/witch-mirrors-scenes.json',JSON.stringify({mirrors,witch,errors},null,2)+'\n');
  console.log('PASS five tower mirror placements reached by walking without E, original upright raised actors; combat Witch hidden during window introduction.');
}finally{await browser?.close();server.kill();}
