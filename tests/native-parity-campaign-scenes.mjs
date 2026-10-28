// Browser checks for parity review items 3 and 4 in the real app, with an
// isolated Playwright profile: a game-over retry and the pause-menu restart
// restore the chapter-entry state, and finishing the Tower records the
// highscore and closes the adventure. Also: the new-player field of view and
// the camera distance keys.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4419'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
const entryProgress={health:12,maxHealth:14,lives:0,score:500,mirror:2,skill:1,potions:4,coins:7,kills:3,secrets:1};
const snapshot=state=>({health:state.health,maxHealth:state.maxHealth,lives:state.lives,score:state.score,mirror:state.mirror,potions:state.potions,basicShot:(state.skill&1)===1});
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,touchControls:'on'}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4,earnedSkills:1}));
  });
  await page.goto('http://127.0.0.1:4419/?skipIntro');await page.waitForFunction(()=>window.__redcat);

  // Enter the Castle carrying upgrades from the Forest.
  const quiet=async()=>page.evaluate(()=>{const a=window.__redcat,g=a.gameplay;if(a.mode!=='playing')a.resume();a.pause();for(const p of g.scripts.players.values())p.stop();
    g.scripts.cutscene=false;g.scripts.camera=null;for(const o of g.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;});
  const entry=await page.evaluate(async progress=>{const a=window.__redcat;await a.startLevel(1,null,progress);return {...a.gameplay.entryState};},entryProgress);
  await quiet();
  assert.deepEqual(snapshot(entry),{health:12,maxHealth:14,lives:0,score:500,mirror:2,potions:0,basicShot:true},'chapter entry keeps upgrades; potions restart at 0');

  // Play on, then die on the last attempt (0 lives): game over shows the retry screen after the 2 s hold.
  await page.evaluate(()=>{const a=window.__redcat,g=a.gameplay;a.resume();g.state.score=900;g.state.potions=5;g.state.mirror=3;g.damage(100);});
  await page.waitForFunction(()=>window.__redcat.mode==='retry'&&window.__redcat.retryScreen.phase==='shown'&&window.__redcat.gameplay.playerReaction?.finished===true,null,{timeout:15000});
  // Ja on the retry screen retries the chapter from its entry state.
  await page.evaluate(()=>{window.__redcat.__before=window.__redcat.gameplay;});await page.keyboard.press('ControlLeft');
  await page.waitForFunction(()=>window.__redcat.gameplay&&window.__redcat.gameplay!==window.__redcat.__before&&window.__redcat.world?.id==='lvl01a',null,{timeout:30000});
  const retried=await page.evaluate(()=>({...window.__redcat.gameplay.state}));
  assert.deepEqual(snapshot(retried),snapshot(entry),'game-over retry restores the chapter-entry state');

  // The pause menu's restart does the same.
  await quiet();
  await page.evaluate(()=>{const g=window.__redcat.gameplay;g.state.score=1200;g.state.maxHealth=16;window.__redcat.__before=g;});
  await page.locator('#restart').click();
  await page.waitForFunction(()=>window.__redcat.gameplay!==window.__redcat.__before&&window.__redcat.world?.id==='lvl01a',null,{timeout:30000});
  assert.deepEqual(snapshot(await page.evaluate(()=>({...window.__redcat.gameplay.state}))),snapshot(entry),'pause-menu restart restores the chapter-entry state');

  // A new player gets the original's 54° field of view. The Weapon1/2/3 keys
  // (default 1, 2 and 3) pick the follow camera's distance row.
  assert.equal(await page.evaluate(()=>window.__redcat.world.camera.fov),54);
  await page.evaluate(()=>window.__redcat.resume());
  const row=()=>page.evaluate(()=>window.__redcat.world.followCamera.presetIndex);
  assert.equal(await row(),0);
  await page.keyboard.press('Digit3');assert.equal(await row(),2);
  await page.keyboard.press('Digit2');assert.equal(await row(),1);

  // Finish the Tower: the final debriefing records the highscore and closes the adventure.
  await page.evaluate(async()=>{const a=window.__redcat;await a.startLevel(4,null,{health:10,maxHealth:16,lives:2,score:4321,mirror:4,skill:7});});
  await quiet();
  assert.equal(await row(),0,'the distance row resets to 0 in the next chapter');
  await page.evaluate(()=>{const a=window.__redcat;a.resume();a.gameplay.complete();});
  await page.waitForFunction(()=>window.__redcat.mode==='debriefing',null,{timeout:30000});
  const finalScore=await page.evaluate(()=>window.__redcat.gameplay.state.score);
  await page.waitForFunction(()=>!document.querySelector('#debriefing button').disabled,null,{timeout:30000});
  await page.keyboard.press('ControlLeft');
  await page.waitForFunction(()=>window.__redcat.mode==='intro',null,{timeout:30000});
  await page.getByRole('button',{name:'Overslaan →',exact:true}).click();
  const closed=await page.evaluate(()=>{const a=window.__redcat,scores=[];
    for(let i=0;i<localStorage.length;i++){const key=localStorage.key(i);if(/highscore/i.test(key))scores.push(...(JSON.parse(localStorage.getItem(key))?.entries||[]));}
    return {mode:a.mode,hasSave:a.originalMenu.getState().hasSave,scores:scores.map(e=>e.score)};});
  assert.equal(closed.mode,'menu');
  assert.ok(closed.scores.includes(finalScore),`final score ${finalScore} recorded at completion (${closed.scores})`);
  assert.equal(closed.hasSave,false,'a completed adventure is not offered to continue');
  assert.deepEqual(errors,[]);
  console.log(JSON.stringify({entry:snapshot(entry),retried:snapshot(retried),finalScore,closed},null,1));
  console.log('PASS game-over retry and pause restart restore the chapter-entry state; finishing the Tower records the highscore and closes the adventure; 54° default view; distance keys pick and reset the camera row.');
}finally{await browser?.close();server.kill();}
