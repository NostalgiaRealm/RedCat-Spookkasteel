import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4222'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4222/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const reports=[];
  for(const hz of [20,60,120]){
  const result=await page.evaluate(async hz=>{
    const app=window.__redcat;await app.startLevel(3);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts;
    // Isolate movement from dialogue/enemy attacks. Keep the original level,
    // fan velocity/volume, solid models and ordinary PlayerController intact.
    h.update=()=>{};h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    for(const o of g.objects)if(o.kind==='enemy'||o.entity.classname==='CameraTrigger'||
      o.kind==='trigger'&&!String(o.entity.AddPlayerSpeed||'').split(/\s+/).some(v=>Number(v)))o.enabled=false;
    const fan=g.find('wind03')[0],fanBounds=w.level.collision.models[fan.modelIndex];
    const floorAt=(x,z)=>w.collider.trace([x,400,z],[x,-100,z],w.player.mins,w.player.maxs,w.physicalModels);
    const startFloor=floorAt(1544,3900),platform=floorAt(1544,3700);
    const start=[1544,startFloor.end[1],3900];
    w.player.position=[...start];w.player.grounded=true;w.player.velocityY=0;w.yaw=0;
    const initialVelocity=g.environmentVelocity(start),samples=[],screenshots={};
    const capture=name=>{
      w.syncPlayer(0,{forward:0,right:0});
      w.camera.position.set(1544,210,4040);w.camera.lookAt(1544,135,3740);w.render();
      screenshots[name]=w.renderer.domElement.toDataURL('image/png').split(',')[1];
    };
    capture('approach');
    let maxY=start[1],firstWind=null,firstAbovePlatform=null,landed=null,approaching=true;
    for(let frame=0;frame<hz*12;frame++){
      if(w.player.position[2]<=3784)approaching=false;
      // Walk to the fan, then let its authored upward and forward stream carry
      // RedCat. No jump, noclip, velocity overrides or post-start teleport.
      w.update(1/hz,{forward:approaching?1:0,right:0,jump:false});
      const p=w.player.position,wind=w.player.environmentVelocity;
      maxY=Math.max(maxY,p[1]);
      if(firstWind===null&&wind[1]>0)firstWind=frame/hz;
      if(firstAbovePlatform===null&&p[1]>platform.end[1]){firstAbovePlatform=frame/hz;capture('lift');}
      if(frame%(hz/10)===0)samples.push({t:frame/hz,position:[...p],velocityY:w.player.velocityY,wind:[...wind],grounded:w.player.grounded});
      if(!approaching&&w.player.grounded&&p[2]<3739&&Math.abs(p[1]-platform.end[1])<.1){
        landed={time:frame/hz,position:[...p],contacts:[...w.player.contacts]};capture('landed');break;
      }
    }
    let recovered=null;
    if(landed){
      // Once supported on the ledge, ordinary movement must let the player
      // continue along its surface rather than remain caught on the edge.
      for(let frame=0;frame<Math.ceil(hz/3);frame++)w.update(1/hz,{forward:1,right:0,jump:false});
      recovered={position:[...w.player.position],grounded:w.player.grounded};capture('recovered');
    }
    if(!landed)capture('failed');
    return {hz,fan:{id:fan.id,name:fan.entity.DaviName,model:fan.modelIndex,enabled:fan.enabled,speed:fan.entity.AddPlayerSpeed,bounds:fanBounds},start,startFloor:{y:startFloor.end[1],solid:startFloor.startSolid},platform:{y:platform.end[1],model:platform.modelIndex,solid:platform.startSolid},initialVelocity,maxY,firstWind,firstAbovePlatform,landed,recovered,samples,screenshots};
  },hz);
  const {screenshots,...report}=result;
  for(const [name,data] of Object.entries(screenshots))await writeFile(`artifacts/vertical-fan-${name}${hz===60?'':`-${hz}hz`}.png`,Buffer.from(data,'base64'));
  reports.push(report);await writeFile('artifacts/vertical-fan-scenes.json',JSON.stringify({reports,errors},null,2)+'\n');
  assert.equal(report.fan.id,'Trigger24');assert.equal(report.fan.model,147);assert.equal(report.fan.enabled,true);assert.equal(report.fan.speed,'0 5 -1');
  assert.equal(report.startFloor.solid,false);assert.equal(report.platform.solid,false);assert.deepEqual(report.initialVelocity,[0,0,0]);
  assert.ok(report.firstWind>0,'player walks into the original fan volume');
  assert.ok(report.maxY>report.platform.y,`fan must lift feet above platform: max ${report.maxY}, platform ${report.platform.y}`);
  assert.ok(report.landed,`fan must carry player onto original platform; final ${report.samples.at(-1)?.position}`);
  assert.ok(report.landed.contacts.includes(0),'landing uses the original BSP solid floor');
  assert.ok(report.recovered.grounded&&report.recovered.position[2]<3700,'player can walk onwards after landing');
  assert.deepEqual(errors,[]);
  console.log(`PASS ${hz} Hz: original caves wind03 lifts RedCat from Y${report.start[1].toFixed(2)} to Y${report.maxY.toFixed(2)} and lands him on Y${report.platform.y.toFixed(2)} platform after ${report.landed.time.toFixed(2)}s; no jump, noclip or velocity overrides; no browser/HTTP errors.`);
  }
} finally {await browser?.close();server.kill();}
