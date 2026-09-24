import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4196'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:2})));
  page.on('pageerror',error=>errors.push(error.stack));page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto('http://127.0.0.1:4196/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const castle=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();document.getElementById('pause').hidden=true;
    if(!app.gameplay)throw new Error(document.getElementById('fatal-message').textContent);
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const m of h.players.values())m.stop();for(const o of g.objects)if(o.kind==='trigger'||o.kind==='enemy')o.enabled=false;
    h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    const place=(p,yaw)=>{w.player.position=p;w.player.resetVelocity();w.player.grounded=true;w.yaw=yaw;};
    const step=(frames,input={})=>{for(let i=0;i<frames;i++)w.update(.025,{forward:0,right:0,...input});};
    const right=g.find('doorhallway04_02')[0];
    place([360,-24.05,118],-Math.PI/2);step(15,{forward:1,use:true});
    const blocked={position:[...w.player.position],open:right.open};
    place([460,-24.05,118],Math.PI/2);step(5,{forward:1});
    const returning={position:[...w.player.position],open:right.open};
    step(85);const stairs=['vlakvoortrap','trap01','schuinvlaktrap'].map(n=>g.find(n)[0].open);
    const secret=g.find('doorhallway05_01')[0];place([2080,-24.05,-820],Math.PI);step(20,{forward:1});
    const passage={position:[...w.player.position],open:secret.open,motion:h.players.get(secret.id).time};
    w.updateCamera(1,true);w.render();return {blocked,returning,stairs,passage,error:h.vm.lastError};
  });
  assert.equal(castle.blocked.open,false);assert.equal(castle.returning.open,true);assert.ok(castle.stairs.every(Boolean));assert.equal(castle.passage.open,true);assert.equal(castle.error,null);
  await page.screenshot({path:'artifacts/door-activation-knight-passage.png'});
  const chapel=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const m of h.players.values())m.stop();for(const o of g.objects)if(o.kind==='trigger'||o.kind==='enemy')o.enabled=false;
    h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    const place=(p,yaw)=>{w.player.position=p;w.player.resetVelocity();w.player.grounded=true;w.yaw=yaw;};
    const step=(frames,input={})=>{for(let i=0;i<frames;i++)w.update(.025,{forward:0,right:0,...input});};
    const button=g.find('hek2_button_mc')[0],lift=g.find('kerklift_mc')[0];
    place([948,536.05,-1077],-Math.PI/2);step(20,{forward:1});
    const switched=button.switchedOn;place([300,536.05,0],0);step(310);
    const raised={open:lift.open,time:h.players.get(lift.id).time};
    place([0,528.05,-90],0);step(30,{forward:1});
    const entered={position:[...w.player.position],open:lift.open,time:h.players.get(lift.id).time};
    const samples=[];for(let i=0;i<270;i++){
      step(1);const p=w.player.position;
      samples.push({y:p[1],time:h.players.get(lift.id).time,solid:w.collider.trace(p,p,w.player.mins,w.player.maxs,w.physicalModels).startSolid});
    }
    h.camera=null;w.updateCamera(1,true);w.render();
    return {switched,raised,entered,end:[...w.player.position],samples,checkpoint:g.checkpoint.position,error:h.vm.lastError};
  });
  assert.equal(chapel.switched,true);assert.equal(chapel.raised.open,false);assert.equal(chapel.raised.time,0);
  assert.equal(chapel.entered.open,true);assert.ok(chapel.end[1]<250,JSON.stringify({...chapel,samples:chapel.samples.filter((_,i)=>i%30===0)}));assert.ok(chapel.samples.every(s=>!s.solid));assert.equal(chapel.samples.at(-1).time,6);assert.equal(chapel.error,null);
  await page.screenshot({path:'artifacts/door-activation-chapel-descended.png'});
  const brutus=await page.evaluate(()=>{
    const w=window.__redcat.world,g=w.gameplay;w.player.position=[-1720,216.05,1300];w.player.resetVelocity();w.player.grounded=true;w.yaw=Math.PI;
    for(let i=0;i<32;i++)w.update(.025,{forward:1,right:0});
    return {position:[...w.player.position],open:['endbossdeur_links_mc','endbossdeur_rechts_mc'].map(n=>g.find(n)[0].open)};
  });
  assert.ok(brutus.open.every(Boolean),JSON.stringify(brutus));assert.deepEqual(errors,[]);
  await writeFile('artifacts/door-activation-scenes.json',JSON.stringify({castle,chapel,brutus},null,2)+'\n');
  console.log('PASS physical one-way castle door, knight passage, chapel switch and descending passenger, and Brutus approach doors without E.');
} finally {await browser?.close();server.kill();}
