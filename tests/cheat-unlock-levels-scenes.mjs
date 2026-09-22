import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4263'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
const report={},errors=[];
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  async function fresh(name) {
    const context=await browser.newContext({viewport:{width:1280,height:720}}),page=await context.newPage();
    page.on('pageerror',e=>errors.push(`${name}: ${e.stack}`));page.on('response',r=>{if(r.status()>=400)errors.push(`${name}: ${r.status()} ${r.url()}`);});
    await page.goto('http://127.0.0.1:4263/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await page.locator('#cheat-unlock-levels').waitFor({state:'attached'});
    assert.equal(await page.locator('.level-card:disabled').count(),4,`${name} starts with only the forest unlocked`);
    return {context,page};
  }
  async function openCheats(page,paused=false) {
    await page.locator(paused?'#pause-settings':'#open-settings').click();await page.locator('#open-cheats').click();
    assert.match(await page.locator('#cheat-unlock-levels').textContent(),/Alle levels vrijspelen/);
  }
  const main=await fresh('main-menu');
  await openCheats(main.page);assert.equal(await main.page.locator('#cheat-unlock-levels').isDisabled(),false);
  assert.equal(await main.page.locator('#cheat-supplies').isDisabled(),true,'level unlock is available before starting an adventure');
  await main.page.locator('#cheat-unlock-levels').click();
  report.menu=await main.page.evaluate(()=>({mode:window.__redcat.mode,world:window.__redcat.world?.id||null,progress:JSON.parse(localStorage.getItem('redcat.progress.v1')),save:localStorage.getItem('redcat.save.v1'),cards:[...document.querySelectorAll('.level-card')].map(b=>({level:b.dataset.level,disabled:b.disabled,src:b.querySelector('img').getAttribute('src')})),status:document.getElementById('cheat-status').textContent}));
  assert.equal(report.menu.progress.highestUnlocked,4);assert.equal(report.menu.mode,'menu');assert.equal(report.menu.world,null);assert.equal(report.menu.save,null);
  assert.ok(report.menu.cards.every(b=>!b.disabled));assert.ok(report.menu.cards.every(b=>/000[012]\.png$/.test(b.src)),'all five cards immediately use original unlocked artwork');
  assert.equal(await main.page.locator('#cheat-unlock-levels').isDisabled(),true);
  await main.page.screenshot({path:'artifacts/cheat-unlock-levels-menu.png'});
  await main.page.keyboard.press('Escape');await main.page.keyboard.press('Escape');
  await main.page.screenshot({path:'artifacts/cheat-unlock-levels-cards.png'});
  await main.page.reload();await main.page.waitForFunction(()=>window.__redcat);
  assert.equal(await main.page.locator('.level-card:disabled').count(),0,'all chapter unlocks persist after reload');
  await openCheats(main.page);assert.equal(await main.page.locator('#cheat-unlock-levels').isDisabled(),true,'already unlocked remains disabled after reload');
  await main.page.keyboard.press('Escape');await main.page.keyboard.press('Escape');
  await main.page.locator('.level-card[data-level="lvl04a"]').click();await main.page.locator('#start').click();
  await main.page.waitForFunction(()=>window.__redcat.world?.id==='lvl04a'&&['playing','paused'].includes(window.__redcat.mode),{},{timeout:60000});
  await main.page.evaluate(()=>window.__redcat.pause());
  report.tower=await main.page.evaluate(()=>({id:window.__redcat.world.id,mode:window.__redcat.mode,completed:window.__redcat.gameplay.completed,witches:window.__redcat.gameplay.objects.filter(o=>o.enemyType==='witch').length}));
  assert.equal(report.tower.id,'lvl04a');assert.equal(report.tower.completed,false);assert.ok(report.tower.witches>0,'the actual tower world loaded');
  await main.context.close();

  const paused=await fresh('paused-forest');
  await paused.page.evaluate(async()=>{const app=window.__redcat;await app.startLevel(0);app.pause();});
  await openCheats(paused.page,true);
  await paused.page.evaluate(()=>{
    const app=window.__redcat;
    window.__unlockBaseline={world:app.world,game:app.gameplay,snapshot:JSON.stringify(app.gameplay.snapshot()),state:JSON.stringify(app.gameplay.state),checkpoint:JSON.stringify(app.gameplay.checkpoint),position:JSON.stringify(app.world.player.position),save:localStorage.getItem('redcat.save.v1'),events:[]};
    const prior=app.gameplay.onEvent;app.gameplay.onEvent=event=>{window.__unlockBaseline.events.push(event.type);prior(event);};
  });
  await paused.page.locator('#cheat-unlock-levels').click();
  report.paused=await paused.page.evaluate(()=>{
    const app=window.__redcat,b=window.__unlockBaseline;
    return {progress:JSON.parse(localStorage.getItem('redcat.progress.v1')),mode:app.mode,worldId:app.world.id,worldUnchanged:b.world===app.world,gameUnchanged:b.game===app.gameplay,snapshotUnchanged:b.snapshot===JSON.stringify(app.gameplay.snapshot()),stateUnchanged:b.state===JSON.stringify(app.gameplay.state),checkpointUnchanged:b.checkpoint===JSON.stringify(app.gameplay.checkpoint),positionUnchanged:b.position===JSON.stringify(app.world.player.position),saveUnchanged:b.save===localStorage.getItem('redcat.save.v1'),completed:app.gameplay.completed,events:b.events};
  });
  assert.equal(report.paused.progress.highestUnlocked,4);assert.equal(report.paused.mode,'paused');assert.equal(report.paused.worldId,'lvl00a');assert.equal(report.paused.completed,false);
  for(const key of ['worldUnchanged','gameUnchanged','snapshotUnchanged','stateUnchanged','checkpointUnchanged','positionUnchanged','saveUnchanged'])assert.equal(report.paused[key],true,`paused cheat preserves ${key}`);
  assert.deepEqual(report.paused.events,[]);await paused.page.screenshot({path:'artifacts/cheat-unlock-levels-paused.png'});await paused.context.close();

  const failed=await fresh('storage-failure');await openCheats(failed.page);
  await failed.page.evaluate(()=>{
    const original=Storage.prototype.setItem;window.__restoreUnlockStorage=()=>{Storage.prototype.setItem=original;};
    Storage.prototype.setItem=function(key,value){if(key==='redcat.progress.v1')throw new DOMException('Storage test failure','QuotaExceededError');return original.call(this,key,value);};
  });
  await failed.page.locator('#cheat-unlock-levels').click();
  report.failure=await failed.page.evaluate(()=>({progress:JSON.parse(localStorage.getItem('redcat.progress.v1')),status:document.getElementById('cheat-status').textContent,disabled:document.getElementById('cheat-unlock-levels').disabled,locked:document.querySelectorAll('.level-card:disabled').length,mode:window.__redcat.mode}));
  assert.equal(report.failure.progress.highestUnlocked,0);assert.equal(report.failure.locked,4);assert.equal(report.failure.disabled,false);assert.equal(report.failure.status,'Levels konden niet worden opgeslagen. Probeer het opnieuw.');
  await failed.page.screenshot({path:'artifacts/cheat-unlock-levels-storage-failure.png'});
  await failed.page.keyboard.press('Escape');await failed.page.keyboard.press('Escape');
  const blocked=await failed.page.evaluate(async()=>{const app=window.__redcat;const result=await app.startLevel(4);return {result,world:app.world?.id||null,mode:app.mode};});
  assert.deepEqual(blocked,{result:false,world:null,mode:'menu'},'failed persistence must not unlock the in-memory start gate');
  await failed.page.evaluate(()=>window.__restoreUnlockStorage());await openCheats(failed.page);await failed.page.locator('#cheat-unlock-levels').click();
  assert.equal(await failed.page.evaluate(()=>JSON.parse(localStorage.getItem('redcat.progress.v1')).highestUnlocked),4,'retry succeeds after storage recovers');
  await failed.context.close();assert.deepEqual(errors,[]);
  await writeFile('artifacts/cheat-unlock-levels-scenes.json',JSON.stringify({report,errors},null,2)+'\n');
  console.log('PASS unlock-all-levels cheat from fresh menu and paused forest; persistence/reload and actual tower launch; current encounter/save unchanged; failed storage does not unlock and retry succeeds; no browser/HTTP errors.');
} finally {await browser?.close();server.kill();}
