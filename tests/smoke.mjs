import { chromium } from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4174'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
const executablePath=process.env.CHROME_PATH || '/usr/bin/google-chrome';
let browser;
try {
 await mkdir('artifacts',{recursive:true});
 browser=await chromium.launch({executablePath,headless:true,args:['--use-angle=gl']});
 const page=await browser.newPage({viewport:{width:1440,height:900}}),errors=[],badRequests=[];
 page.on('pageerror',e=>errors.push(e.stack));
 page.on('response',r=>{if(r.status()>=400&&!r.url().includes('favicon'))badRequests.push(r.url());});
 await page.goto('http://127.0.0.1:4174/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 assert.equal(await page.locator('.level-card').count(),5);
 await page.screenshot({path:'artifacts/menu.png'});
 await page.getByRole('button',{name:'Besturing',exact:true}).click();assert.ok(await page.locator('#help').isVisible());await page.locator('#close-help').click();
 for(let i=0;i<5;i++){
  await page.evaluate(i=>window.__redcat.startLevel(i),i);await page.waitForTimeout(250);
  const result=await page.evaluate(()=>({mode:window.__redcat.mode,error:document.getElementById('fatal-message').textContent,position:window.__redcat.world.player.position,actors:window.__redcat.world.actorInstances.size,triangles:window.__redcat.world.renderer.info.render.triangles,redcat:!!window.__redcat.world.redcat}));
  assert.equal(result.mode,'playing');assert.equal(result.error,'');assert.ok(result.actors>0);assert.ok(result.triangles>1000);assert.ok(result.redcat);assert.ok(result.position.every(Number.isFinite));
  await page.screenshot({path:`artifacts/level-${i+1}.png`});console.log(`PASS level ${i+1}`,result);
 }
 await page.evaluate(()=>window.__redcat.startLevel(0));
 await page.evaluate(()=>{window.__redcat.gameplay.complete();window.__redcat.pause();});
 await page.waitForTimeout(850);await page.evaluate(()=>window.__redcat.resume());
 assert.equal(await page.evaluate(()=>window.__redcat.world.id),'lvl01a');
 assert.equal(await page.evaluate(()=>window.__redcat.gameplay.completed),false);
 await page.evaluate(()=>{window.__redcat.gameplay.state.lives=1;window.__redcat.gameplay.hitCooldown=0;window.__redcat.gameplay.damage(100);});
 assert.equal(await page.evaluate(()=>window.__redcat.mode),'paused');await page.evaluate(()=>window.__redcat.resume());
 assert.ok(await page.evaluate(()=>window.__redcat.gameplay.state.health>0));
 await page.evaluate(()=>window.__redcat.pause());await page.locator('#pause-settings').click();
 for(const res of ['1920x1080','3440x1440','1024x768']) {
  await page.locator('#resolution').selectOption(res);await page.locator('#apply-settings').click();
  const actual=await page.evaluate(()=>({size:[document.getElementById('game').width,document.getElementById('game').height],aspect:window.__redcat.world.camera.aspect}));
  const [w,h]=res.split('x').map(Number);assert.deepEqual(actual.size,[w,h]);assert.ok(Math.abs(actual.aspect-w/h)<0.00001);
  await page.locator('#pause-settings').click();
 }
 await page.locator('#resolution').selectOption('1920x1080');await page.locator('#camera-mode').selectOption('first');await page.locator('#auto-intro').uncheck();await page.locator('#apply-settings').click();
 await page.locator('#save').click();
 const before=await page.evaluate(()=>({position:[...window.__redcat.world.player.position],level:window.__redcat.world.id}));
 await page.evaluate(()=>window.__redcat.loadSave());
 const after=await page.evaluate(()=>({position:[...window.__redcat.world.player.position],level:window.__redcat.world.id}));
 assert.equal(before.level,after.level);assert.ok(Math.hypot(...before.position.map((v,i)=>v-after.position[i]))<1);
 await page.evaluate(()=>window.__redcat.pause());await page.locator('#pause-settings').click();await page.screenshot({path:'artifacts/settings.png'});
 await page.reload();await page.waitForFunction(()=>window.__redcat);assert.equal(await page.evaluate(()=>window.__redcat.settings.resolution),'1920x1080');assert.equal(await page.evaluate(()=>window.__redcat.settings.camera),'first');
 await page.locator('#play-intro').click();await page.waitForFunction(()=>document.getElementById('intro-video').readyState>=2);assert.ok(await page.locator('#intro').isVisible());await page.locator('#skip-intro').click();
 assert.deepEqual(errors,[]);assert.deepEqual(badRequests,[]);console.log('PASS menus, 5 levels, Full HD, ultrawide, 4:3, camera, save/load, settings persistence, intro playback.');
}finally{await browser?.close();server.kill();}
