import { chromium } from 'playwright';
import { spawn } from 'node:child_process';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4175'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1920,height:1080}}),errors=[],requests=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)requests.push(r.url());});
  await page.goto('http://127.0.0.1:4175/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const first=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world;for(let i=0;i<65;i++)world.update(.05,{forward:0,right:0});world.render();
    app.saveGame(true);
    return {time:app.gameplay.scripts.time,cutscene:app.gameplay.scripts.cutscene,camera:world.camera.position.toArray(),subtitle:document.getElementById('subtitle').textContent,voice:app.gameplay.scripts.subtitle.voice,position:[...world.player.position]};
  });
  assert.equal(first.cutscene,true);assert.ok(first.subtitle.length>10);assert.equal(first.voice,'rcgen44.wav');assert.ok(first.camera.every(Number.isFinite));
  await page.screenshot({path:'artifacts/script-forest-cutscene.png'});
  const restored=await page.evaluate(async()=>{const app=window.__redcat;await app.loadSave();app.pause();document.getElementById('pause').hidden=true;app.world.updateCamera(1,true);app.world.render();return {time:app.gameplay.scripts.time,camera:app.world.camera.position.toArray(),subtitle:document.getElementById('subtitle').textContent};});
  assert.equal(restored.time,first.time);assert.deepEqual(restored.camera,first.camera);assert.equal(restored.subtitle,first.subtitle);
  const end=await page.evaluate(()=>{const app=window.__redcat;for(let i=0;i<140;i++)app.world.update(.05,{forward:0,right:0});return {cutscene:app.gameplay.scripts.cutscene,errors:app.gameplay.scripts.vm.lastError,controller:app.gameplay.find('csmc00')[0].enabled};});
  assert.equal(end.cutscene,false);assert.equal(end.errors,null);assert.equal(end.controller,false);
  const tower=await page.evaluate(async()=>{const app=window.__redcat;await app.startLevel(4);app.pause();document.getElementById('pause').hidden=true;for(const p of app.gameplay.scripts.players.values())p.stop();app.gameplay.scripts.cutscene=false;app.gameplay.scripts.camera=null;app.gameplay.destroy(app.gameplay.find('The_Witch')[0]);for(let i=0;i<20;i++)app.gameplay.scripts.update(.05);app.world.syncModels();app.world.updateCamera(1,true);app.world.render();return {cutscene:app.gameplay.scripts.cutscene,frozen:app.gameplay.scripts.enemiesFrozen,camera:app.gameplay.scripts.camera?.id,player:[...app.world.player.position],expected:app.gameplay.find('RC_cuts04')[0].position};});
  assert.equal(tower.cutscene,true);assert.equal(tower.frozen,true);assert.ok(tower.camera);assert.equal(tower.player[0],tower.expected[0]);assert.equal(tower.player[2],tower.expected[2]);
  await page.screenshot({path:'artifacts/script-witch-defeat.png'});
  assert.deepEqual(errors,[]);assert.deepEqual(requests,[]);
  console.log('PASS rendered original cutscene, Dutch voice/subtitles, camera/save/load, timeline completion, witch defeat callback and teleport.');
}finally{await browser?.close();server.kill();}
