import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4232'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:900}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    // Drive the real application's frame callback with elapsed wall time,
    // avoiding a minute-long wait or bypassing the actual autosave call site.
    let callbacks=[],now=performance.now();
    window.requestAnimationFrame=cb=>{callbacks.push(cb);return callbacks.length;};
    window.__resetFrameClock=()=>{now=performance.now();};
    window.__stepFrame=seconds=>{now+=seconds*1000;const pending=callbacks;callbacks=[];for(const cb of pending)cb(now);};
    HTMLCanvasElement.prototype.requestPointerLock=()=>Promise.resolve();
    const setItem=Storage.prototype.setItem;window.__saveWrites=0;
    Storage.prototype.setItem=function(key,value){const result=setItem.call(this,key,value);if(key==='redcat.save.v1')window.__saveWrites++;return result;};
  });
  const ready=async()=>{await page.waitForFunction(()=>window.__redcat,null,{polling:100});};
  const read=()=>page.evaluate(()=>JSON.parse(localStorage.getItem('redcat.save.v1')));
  await page.goto('http://127.0.0.1:4232/?skipIntro');await ready();
  assert.deepEqual(await page.locator('.level-card').evaluateAll(cards=>cards.map(b=>b.disabled)),[false,true,true,true,true]);
  assert.ok((await page.locator('[data-level="lvl01a"] img').getAttribute('src')).endsWith('04010003.png'));
  assert.equal(await page.evaluate(()=>window.__redcat.startLevel(3)),false);
  assert.equal(await page.evaluate(()=>window.__redcat.world),null);
  await page.screenshot({path:'artifacts/campaign-menu-locked.png'});

  await page.locator('#open-settings').click();
  assert.deepEqual(await page.locator('#difficulty option').allTextContents(),['Makkelijk','Normaal','Moeilijk']);
  await page.locator('#difficulty').selectOption('Hard');await page.locator('#apply-settings').click();
  await page.locator('#open-settings').click();assert.equal(await page.locator('#difficulty').inputValue(),'Hard');
  await page.screenshot({path:'artifacts/difficulty-settings.png'});
  await page.locator('#close-settings').click();await page.locator('#start').click();
  await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{polling:100});
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.difficulty),'Hard');

  const autosave=await page.evaluate(()=>{
    const app=window.__redcat;app.saveGame(true);window.__resetFrameClock();
    const initial=window.__saveWrites;app.gameplay.state.score=1234;
    window.__stepFrame(59);const before=window.__saveWrites;
    window.__stepFrame(1.1);const after=window.__saveWrites;
    const saved=JSON.parse(localStorage.getItem('redcat.save.v1'));
    app.pause();const paused=window.__saveWrites;window.__stepFrame(300);
    return {initial,before,after,paused,afterPause:window.__saveWrites,saved};
  });
  assert.equal(autosave.before,autosave.initial);assert.equal(autosave.after,autosave.initial+1);
  assert.equal(autosave.saved.game.state.score,1234);assert.equal(autosave.saved.game.difficulty,'Hard');
  assert.equal(autosave.afterPause,autosave.paused,'paused time makes no periodic writes');

  await page.locator('#pause-settings').click();await page.locator('#difficulty').selectOption('Easy');
  await page.locator('#apply-settings').click();
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.difficulty),'Hard','settings do not retune a live encounter');
  await page.evaluate(async()=>{await window.__redcat.loadSave();window.__redcat.pause();});
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.difficulty),'Hard','continue retains saved difficulty');
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.state.score),1234);
  await page.locator('#restart').click();await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{polling:100});
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.difficulty),'Easy','restart uses new selection');
  await page.evaluate(()=>{const app=window.__redcat;app.gameplay.complete();app.pause();});
  const progress=await page.evaluate(()=>JSON.parse(localStorage.getItem('redcat.progress.v1')));
  assert.equal(progress.highestUnlocked,1);
  await page.locator('#return-menu').click();
  assert.deepEqual(await page.locator('.level-card').evaluateAll(cards=>cards.map(b=>b.disabled)),[false,false,true,true,true]);
  await page.locator('[data-level="lvl01a"]').hover();
  assert.ok((await page.locator('[data-level="lvl01a"] img').getAttribute('src')).endsWith('04010001.png'));
  await page.screenshot({path:'artifacts/campaign-menu-unlocked.png'});
  // An earlier replay cannot erase the campaign milestone or grant a later one.
  await page.evaluate(async()=>{const app=window.__redcat;await app.startLevel(0);app.pause();});
  await page.reload();await ready();
  assert.deepEqual(await page.locator('.level-card').evaluateAll(cards=>cards.map(b=>b.disabled)),[false,false,true,true,true]);

  // Simulate the prior source release's valid caves checkpoint, which predates
  // explicit progress and difficulty metadata. The next launch migrates it.
  await page.evaluate(async()=>{
    const save=JSON.parse(localStorage.getItem('redcat.save.v1'));
    const {Gameplay}=await import('/src/gameplay.js');
    const level=await (await fetch('/data/levels/lvl03a/level.json')).json();
    save.level=level.id;save.position=[...level.spawn.position];save.lastSafe=[...save.position];
    save.game=new Gameplay(level,{deferInit:true}).snapshot();delete save.game.difficulty;
    localStorage.setItem('redcat.save.v1',JSON.stringify(save));localStorage.removeItem('redcat.progress.v1');
  });
  await page.reload();await ready();
  assert.deepEqual(await page.locator('.level-card').evaluateAll(cards=>cards.map(b=>b.disabled)),[false,false,false,false,true]);
  await page.locator('#continue').click();await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{polling:100});
  assert.equal(await page.evaluate(()=>window.__redcat.world.id),'lvl03a');
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.difficulty),'Normal','legacy encounter keeps historical Normal');
  await page.evaluate(()=>window.__redcat.pause());
  assert.equal((await read()).game.difficulty,'Normal');
  assert.deepEqual(errors,[]);
  await writeFile('artifacts/campaign-settings-scenes.json',JSON.stringify({autosave,progress,errors},null,2)+'\n');
  console.log('PASS: locked menu/native artwork, completion unlock and replay persistence, all difficulty choices/save compatibility, real frame-loop minute autosave and pause exclusion; no browser/HTTP errors.');
} finally {await browser?.close();server.kill();}
