// Browser check for review item D6 in the real app, with an isolated
// Playwright profile: dying on the last life shows the original "Opnieuw
// proberen?" screen. Ja retries the chapter from its entry state; Nee returns
// to the main menu with the adventure save untouched and the branch the game
// was started from highlighted.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import assert from 'node:assert/strict';
import {sceneOutput} from './support/scene-output.mjs';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4421'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
const entryProgress={health:12,maxHealth:14,lives:0,score:500,mirror:2,skill:1,potions:4,coins:7,kills:3,secrets:1};
const snapshot=state=>({health:state.health,maxHealth:state.maxHealth,lives:state.lives,score:state.score,mirror:state.mirror});
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,touchControls:'off'}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4,earnedSkills:1}));
  });
  await page.goto('http://127.0.0.1:4421/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const quiet=()=>page.evaluate(()=>{const a=window.__redcat,g=a.gameplay;if(a.mode!=='playing')a.resume();a.pause();for(const p of g.scripts.players.values())p.stop();
    g.scripts.cutscene=false;g.scripts.camera=null;for(const o of g.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;});
  const saves=()=>page.evaluate(()=>Object.fromEntries(Object.keys(localStorage).filter(k=>/save/i.test(k)).map(k=>[k,localStorage.getItem(k)])));
  const die=async()=>{
    await page.evaluate(()=>{const a=window.__redcat,g=a.gameplay;a.resume();g.state.lives=0;g.respawnProtection=0;g.damage(100);});
    await page.waitForFunction(()=>window.__redcat.mode==='retry'&&window.__redcat.retryScreen.phase==='shown',null,{timeout:15000});
  };

  const entry=await page.evaluate(async progress=>{const a=window.__redcat;await a.startLevel(1,null,progress);return {...a.gameplay.entryState};},entryProgress);
  await quiet();
  await die();
  const shown=await page.evaluate(()=>{const a=window.__redcat,r=a.retryScreen,el=document.getElementById('retry');
    return {selection:r.selection,visible:!el.hidden,pauseHidden:document.getElementById('pause').hidden,status:el.querySelector('[role="status"]').textContent,
      buttons:[...el.querySelectorAll('button')].map(b=>{const box=b.getBoundingClientRect();return [b.getAttribute('aria-label'),Math.round(box.width),Math.round(box.height)];})};});
  assert.deepEqual(shown,{selection:1,visible:true,pauseHidden:true,status:'Opnieuw proberen? Wil je dit level opnieuw spelen?',
    buttons:[['Ja',210,81],['Nee',210,81]]},'the retry screen opens on Ja instead of the pause menu');
  await page.screenshot({path:sceneOutput('artifacts/retry-screen.png')});
  // Escape does nothing; left/right select; Fire confirms.
  await page.keyboard.press('Escape');await page.keyboard.press('ArrowRight');
  assert.deepEqual(await page.evaluate(()=>[window.__redcat.mode,window.__redcat.retryScreen.selection]),['retry',0]);
  await page.keyboard.press('ArrowLeft');
  await page.evaluate(()=>{window.__redcat.__before=window.__redcat.gameplay;});await page.keyboard.press('ControlLeft');
  await page.waitForFunction(()=>window.__redcat.gameplay!==window.__redcat.__before&&window.__redcat.world?.id==='lvl01a'&&window.__redcat.mode!=='loading',null,{timeout:30000});
  assert.deepEqual(snapshot(await page.evaluate(()=>({...window.__redcat.gameplay.state}))),snapshot(entry),'Ja restores the chapter-entry state');
  assert.equal(await page.evaluate(()=>document.getElementById('retry').hidden),true);

  // Nee: back to the main menu; a dead state is never saved over the adventure.
  await quiet();
  await page.evaluate(()=>window.__redcat.saveGame(true));
  const before=await saves();
  assert.ok(Object.keys(before).length>0,'an adventure save exists');
  await die();
  await page.keyboard.press('ArrowRight');await page.keyboard.press('Space');
  await page.waitForFunction(()=>window.__redcat.mode==='menu',null,{timeout:15000});
  const menu=await page.evaluate(()=>({menuHidden:document.getElementById('menu').hidden,retryHidden:document.getElementById('retry').hidden,page:window.__redcat.originalMenu.page,choice:window.__redcat.originalMenu.choice}));
  assert.deepEqual(menu,{menuHidden:false,retryHidden:true,page:'home',choice:'adventure'});
  assert.deepEqual(await saves(),before,'Nee leaves the adventure save untouched');

  // A quick-play game returns with Snelspel highlighted.
  await page.evaluate(async progress=>{const a=window.__redcat;await a.startLevel(1,null,progress);a.originalMenu.flow='quickplay';},entryProgress);
  await quiet();await die();
  await page.locator('#retry button[data-retry="0"]').click();
  await page.waitForFunction(()=>window.__redcat.mode==='menu',null,{timeout:15000});
  assert.equal(await page.evaluate(()=>window.__redcat.originalMenu.choice),'quickplay');
  assert.deepEqual(errors,[]);
  console.log(JSON.stringify({entry:snapshot(entry),shown,menu},null,1));
  console.log('PASS game over shows the original retry screen on Ja; Ja retries from the chapter entry; Nee returns to the menu with the save untouched.');
}finally{await browser?.close();server.kill();}
