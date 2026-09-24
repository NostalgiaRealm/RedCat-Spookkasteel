import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const port=4279;
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:String(port)},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
const report={},errors=[];
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const context=await browser.newContext({viewport:{width:1280,height:800}});
  const page=await context.newPage();
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({touchControls:'on',autoIntro:false})));
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);
  await page.waitForFunction(()=>window.__redcat);
  await page.locator('#open-recovery').click();
  await page.waitForFunction(()=>document.querySelectorAll('[data-recovery-minutes]').length===3);
  assert.deepEqual(await page.locator('[data-recovery-minutes]').evaluateAll(buttons=>buttons.map(button=>({minutes:Number(button.dataset.recoveryMinutes),disabled:button.disabled}))),[{minutes:2,disabled:true},{minutes:5,disabled:true},{minutes:10,disabled:true}]);
  await page.keyboard.press('Escape');
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'menu');

  // Capture real level snapshots while the world is paused, advancing only the
  // recovery play clock. This exercises IndexedDB and full game restoration
  // without waiting twelve real minutes or depending on render-frame timing.
  report.seed=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();await app.recovery.flush();
    const game=app.gameplay,world=app.world;
    for(const player of game.scripts.players.values())player.stop();
    game.scripts.cutscene=false;game.scripts.camera=null;game.scripts.enemiesFrozen=true;
    world.player.noClip=true;
    const button=game.objects.find(object=>object.kind==='button');
    if(!button)throw new Error('Forest fixture has no authored puzzle button');
    window.__recoveryButton=button.id;
    window.__recoveryOrigin=[...world.player.position];
    const expected=[];
    for(let minute=1;minute<=12;minute++) {
      app.recovery.advance(60);
      game.state.score=minute;game.state.potions=minute;
      world.player.position=window.__recoveryOrigin.map((value,axis)=>value+(axis===0?minute:0));
      world.player.lastSafe=[...world.player.position];
      button.switchCount=minute;button.switchedOn=minute%2===0;
      game.variables.set('recovery-fixture-minute',minute);
      app.saveGame(true);await app.recovery.flush();
      if(minute===2)expected.push({minute,choices:app.recovery.choices().map(choice=>({minutes:choice.minutes,available:!!choice.save}))});
    }
    return {buttonId:button.id,origin:window.__recoveryOrigin,early:expected[0],choices:app.recovery.choices().map(choice=>({minutes:choice.minutes,score:choice.save?.game.state.score,age:choice.ageSeconds})),retained:app.recovery.state.checkpoints.map(entry=>entry.save.game.state.score),latest:JSON.parse(localStorage.getItem('redcat.save.v1')).game.state.score};
  });
  assert.deepEqual(report.seed.early.choices,[{minutes:2,available:true},{minutes:5,available:false},{minutes:10,available:false}]);
  assert.deepEqual(report.seed.choices,[{minutes:2,score:10,age:120},{minutes:5,score:7,age:300},{minutes:10,score:2,age:600}]);
  assert.deepEqual(report.seed.retained,[2,3,4,5,6,7,8,9,10,11,12]);assert.equal(report.seed.latest,12);
  await page.locator('#pause-recovery').click();
  assert.equal(await page.evaluate(()=>document.getElementById('recovery-saves').matches(':modal')),true);
  const clockBefore=await page.evaluate(()=>window.__redcat.recovery.clock);
  await page.keyboard.press('Escape');
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'paused');
  assert.equal(await page.evaluate(()=>document.getElementById('pause').hidden),false);
  assert.equal(await page.evaluate(()=>window.__redcat.recovery.clock),clockBefore,'paused menu time does not advance recovery age');
  await page.locator('#return-menu').click();
  await page.evaluate(()=>window.__redcat.recovery.flush());

  // Reload creates a new storage client. A closed game must retain the same
  // recovery choices, rather than aging them out using the wall clock.
  await page.reload();await page.waitForFunction(()=>window.__redcat);
  report.reopened=await page.evaluate(async()=>{await window.__redcat.recovery.ready;return window.__redcat.recovery.choices().map(choice=>({minutes:choice.minutes,score:choice.save?.game.state.score,age:choice.ageSeconds}));});
  assert.deepEqual(report.reopened,report.seed.choices);
  await page.locator('#open-recovery').click();
  await page.waitForFunction(()=>document.querySelectorAll('[data-recovery-minutes]:enabled').length===3);
  const desktopRect=await page.locator('#recovery-saves').boundingBox();
  assert.ok(desktopRect.x>=0&&desktopRect.y>=0&&desktopRect.x+desktopRect.width<=1280&&desktopRect.y+desktopRect.height<=800);
  await page.screenshot({path:'artifacts/recovery-menu-desktop.png'});
  await page.setViewportSize({width:390,height:844});
  const phoneRect=await page.locator('#recovery-saves').boundingBox();
  assert.ok(phoneRect.x>=0&&phoneRect.y>=0&&phoneRect.x+phoneRect.width<=390&&phoneRect.y+phoneRect.height<=844,JSON.stringify(phoneRect));
  for(const minutes of [2,5,10])assert.equal(await page.locator(`[data-recovery-minutes="${minutes}"]`).isEnabled(),true);
  await page.screenshot({path:'artifacts/recovery-menu-phone.png'});
  report.layout={desktop:desktopRect,phone:phoneRect};
  await page.locator('#close-recovery').click();await page.setViewportSize({width:1280,height:800});
  assert.equal(await page.locator('#menu').innerText().then(text=>/0\.9\.2|versie\s+\d|version\s+\d/i.test(text)),false,'menu has no release version badge');

  report.loads=[];
  for(const [minutes,score]of [[2,10],[5,7],[10,2]]) {
    await page.locator('#open-recovery').click();
    await page.locator(`[data-recovery-minutes="${minutes}"]`).click();
    await page.waitForFunction(()=>window.__redcat.world&&['playing','paused'].includes(window.__redcat.mode),{},{timeout:60000});
    const restored=await page.evaluate(async({buttonId})=>{
      const app=window.__redcat;app.pause();await app.recovery.flush();
      const button=app.gameplay.objects.find(object=>object.id===buttonId),latest=JSON.parse(localStorage.getItem('redcat.save.v1'));
      return {level:app.world.id,score:app.gameplay.state.score,potions:app.gameplay.state.potions,position:app.world.player.position,button:{switchedOn:button.switchedOn,switchCount:button.switchCount},variable:app.gameplay.variables.get('recovery-fixture-minute'),latestScore:latest.game.state.score,retained:app.recovery.state.checkpoints.map(entry=>entry.save.game.state.score)};
    },{buttonId:report.seed.buttonId});
    assert.equal(restored.level,'lvl00a');assert.equal(restored.score,score);assert.equal(restored.potions,score);
    assert.deepEqual(restored.position,report.seed.origin.map((value,axis)=>value+(axis===0?score:0)));
    assert.deepEqual(restored.button,{switchedOn:score%2===0,switchCount:score});assert.equal(restored.variable,score);assert.equal(restored.latestScore,score);
    assert.deepEqual(restored.retained,report.seed.retained,'loading recovery leaves the remaining older choices available');
    report.loads.push({minutes,...restored});
    await page.locator('#return-menu').click();
  }

  // A canceled new adventure preserves recovery; a successful confirmed start
  // begins a fresh timeline, so another adventure cannot leak into its menu.
  await page.locator('#start').click();
  assert.equal(await page.evaluate(()=>document.getElementById('new-adventure-warning').open),true);
  await page.locator('#cancel-new-adventure').click();
  assert.deepEqual(await page.evaluate(()=>window.__redcat.recovery.state.checkpoints.map(entry=>entry.save.game.state.score)),report.seed.retained);
  await page.locator('#start').click();await page.locator('#confirm-new-adventure').click();
  await page.waitForFunction(()=>window.__redcat.world&&['playing','paused'].includes(window.__redcat.mode),{},{timeout:60000});
  report.reset=await page.evaluate(async()=>{const app=window.__redcat;app.pause();await app.recovery.flush();return {score:app.gameplay.state.score,retained:app.recovery.state.checkpoints.length,choices:app.recovery.choices().map(choice=>!!choice.save)};});
  assert.deepEqual(report.reset,{score:0,retained:1,choices:[false,false,false]});
  assert.deepEqual(errors,[]);
  await writeFile('artifacts/recovery-menu-scenes.json',JSON.stringify({report,errors},null,2)+'\n');
  console.log('PASS recovery menus on desktop/mobile; unavailable early slots; IndexedDB history survives reload; 2/5/10-minute restores include position, inventory and puzzle state; old saves pruned; paused time excluded; cancel preserves history and confirmed new adventure resets it.');
} finally {await browser?.close();server.kill();}
