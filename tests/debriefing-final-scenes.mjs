import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4234'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,touchControls:'on'}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  await page.goto('http://127.0.0.1:4234/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{const a=window.__redcat;await a.startLevel(4);a.pause();a.audio.reset();for(const p of a.gameplay.scripts.players.values())p.stop();a.gameplay.scripts.cutscene=false;for(const o of a.gameplay.objects)o.enabled=false;});
  await page.evaluate(()=>window.__redcat.resume());
  await page.keyboard.down('KeyW');
  const position=await page.evaluate(()=>{const a=window.__redcat,g=a.gameplay;g.state.health=1;g.complete();g.damage(999,'fall');return [...a.world.player.position];});
  await page.waitForTimeout(300);
  const pending=await page.evaluate(()=>({position:[...window.__redcat.world.player.position],completed:window.__redcat.gameplay.completed,health:window.__redcat.gameplay.state.health,mode:window.__redcat.mode}));
  assert.equal(pending.mode,'playing');assert.equal(pending.completed,true);assert.equal(pending.health,1);assert.deepEqual(pending.position,position);
  await page.keyboard.up('KeyW');await page.waitForFunction(()=>window.__redcat.mode==='debriefing');
  assert.equal(await page.locator('#intro').isVisible(),false);
  await page.waitForFunction(()=>!document.querySelector('#debriefing button').disabled);
  await page.keyboard.press('ControlLeft');
  await page.waitForFunction(()=>window.__redcat.mode==='intro'&&document.getElementById('intro-video').currentTime>0);
  assert.match(await page.locator('#intro-video').getAttribute('src'),/outronl\.webm$/);
  await page.getByRole('button',{name:'Overslaan →',exact:true}).click();
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'menu');
  assert.deepEqual(errors,[]);
  console.log('PASS final-level scoreboard precedes outro, keyboard shooting continues, completed player cannot move or die while audio drains.');
}finally{await browser?.close();server.kill();}
