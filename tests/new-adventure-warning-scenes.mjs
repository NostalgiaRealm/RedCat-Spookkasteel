import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4265'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
const report={},errors=[];
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}});
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    // Unlock the castle solely to exercise both labels of the same start UI.
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:1}));
    const show=HTMLDialogElement.prototype.showModal;window.__warningOpened=0;
    HTMLDialogElement.prototype.showModal=function(){if(this.id==='new-adventure-warning')window.__warningOpened++;return show.call(this);};
  });
  await page.goto('http://127.0.0.1:4265/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.locator('#new-adventure-warning').waitFor({state:'attached'});
  assert.equal(await page.evaluate(()=>localStorage.getItem('redcat.save.v1')),null);
  await page.locator('#start').click();
  await page.waitForFunction(()=>window.__redcat.world?.id==='lvl00a'&&['playing','paused'].includes(window.__redcat.mode),{},{timeout:60000});
  report.fresh=await page.evaluate(()=>({id:window.__redcat.world.id,warningOpened:window.__warningOpened,dialogOpen:document.getElementById('new-adventure-warning').open}));
  assert.deepEqual(report.fresh,{id:'lvl00a',warningOpened:0,dialogOpen:false});
  await page.evaluate(()=>{const a=window.__redcat;a.pause();a.gameplay.state.score=7777;a.gameplay.state.potions=5;a.saveGame(true);});
  await page.locator('#return-menu').click();
  await page.evaluate(()=>{
    const a=window.__redcat;
    window.__warningBaseline={save:localStorage.getItem('redcat.save.v1'),world:a.world,game:a.gameplay,snapshot:JSON.stringify(a.gameplay.snapshot()),position:JSON.stringify(a.world.player.position)};
  });
  async function assertUnchanged(label) {
    const state=await page.evaluate(()=>{const a=window.__redcat,b=window.__warningBaseline;return {mode:a.mode,open:document.getElementById('new-adventure-warning').open,saveUnchanged:b.save===localStorage.getItem('redcat.save.v1'),worldUnchanged:b.world===a.world,gameUnchanged:b.game===a.gameplay,snapshotUnchanged:b.snapshot===JSON.stringify(a.gameplay.snapshot()),positionUnchanged:b.position===JSON.stringify(a.world.player.position)};});
    assert.equal(state.mode,'menu',label);assert.equal(state.open,false,label);
    for(const key of ['saveUnchanged','worldUnchanged','gameUnchanged','snapshotUnchanged','positionUnchanged'])assert.equal(state[key],true,`${label}: ${key}`);
    return state;
  }
  await page.locator('#start').click();
  report.warning=await page.evaluate(()=>{const d=document.getElementById('new-adventure-warning'),b=d.getBoundingClientRect();return {native:d instanceof HTMLDialogElement,modal:d.matches(':modal'),focus:document.activeElement.id,text:d.textContent,rect:{left:b.left,top:b.top,right:b.right,bottom:b.bottom},mode:window.__redcat.mode};});
  assert.equal(report.warning.native,true);assert.equal(report.warning.modal,true);assert.equal(report.warning.focus,'cancel-new-adventure');assert.match(report.warning.text,/opgeslagen avontuur/i);assert.match(report.warning.text,/overschreven/i);assert.equal(report.warning.mode,'menu');
  assert.ok(report.warning.rect.left>=0&&report.warning.rect.top>=0&&report.warning.rect.right<=1280&&report.warning.rect.bottom<=720);
  await page.screenshot({path:'artifacts/new-adventure-warning.png'});
  const castle=await page.locator('.level-card[data-level="lvl01a"]').boundingBox();
  await page.mouse.click(castle.x+castle.width/2,castle.y+castle.height/2);
  assert.equal(await page.locator('.level-card.selected').getAttribute('data-level'),'lvl00a','native modal blocks chapter selection behind the warning');
  assert.equal(await page.evaluate(()=>document.getElementById('new-adventure-warning').open),true);
  await page.locator('#cancel-new-adventure').click();report.cancel=await assertUnchanged('cancel');
  await page.locator('#start').click();await page.keyboard.press('Escape');report.escape=await assertUnchanged('Escape');
  await page.locator('#start').click();assert.equal(await page.evaluate(()=>document.activeElement.id),'cancel-new-adventure');await page.keyboard.press('Enter');report.enter=await assertUnchanged('Enter on initial cancel focus');

  // Continue restores the checkpoint directly, without routing through the
  // new-adventure warning or resetting the distinguishable saved score.
  const warningsBeforeContinue=await page.evaluate(()=>window.__warningOpened);
  await page.locator('#continue').click();
  await page.waitForFunction(()=>window.__redcat.world&&window.__redcat.world!==window.__warningBaseline.world&&['playing','paused'].includes(window.__redcat.mode),{},{timeout:60000});
  report.continue=await page.evaluate(()=>({id:window.__redcat.world.id,score:window.__redcat.gameplay.state.score,potions:window.__redcat.gameplay.state.potions,warningOpened:window.__warningOpened,open:document.getElementById('new-adventure-warning').open}));
  assert.equal(report.continue.id,'lvl00a');assert.equal(report.continue.score,7777);assert.equal(report.continue.potions,5);assert.equal(report.continue.warningOpened,warningsBeforeContinue);assert.equal(report.continue.open,false);
  await page.evaluate(()=>window.__redcat.pause());await page.locator('#resume').click();
  await page.evaluate(()=>{window.__f9World=window.__redcat.world;window.__redcat.gameplay.state.score=123;});
  await page.keyboard.press('F9');
  await page.waitForFunction(()=>window.__redcat.world&&window.__redcat.world!==window.__f9World&&['playing','paused'].includes(window.__redcat.mode),{},{timeout:60000});
  report.f9=await page.evaluate(()=>({id:window.__redcat.world.id,score:window.__redcat.gameplay.state.score,warningOpened:window.__warningOpened,open:document.getElementById('new-adventure-warning').open}));
  assert.equal(report.f9.id,'lvl00a');assert.equal(report.f9.score,7777);assert.equal(report.f9.warningOpened,warningsBeforeContinue);assert.equal(report.f9.open,false);
  await page.evaluate(()=>window.__redcat.pause());await page.locator('#return-menu').click();

  await page.locator('.level-card[data-level="lvl01a"]').click();assert.match(await page.locator('#start').textContent(),/Start dit level/);
  await page.locator('#start').click();assert.equal(await page.evaluate(()=>document.getElementById('new-adventure-warning').open),true);
  const savedBeforeConfirm=await page.evaluate(()=>localStorage.getItem('redcat.save.v1'));
  // Hold the real castle load at its level-data request so the confirmation's
  // immediate effects can be examined without an automatic pause/save race.
  let releaseLoad,loadedRequest;const held=new Promise(resolve=>{releaseLoad=resolve;}),requested=new Promise(resolve=>{loadedRequest=resolve;});
  await page.route('**/data/levels/lvl01a/level.json',async route=>{loadedRequest();await held;await route.continue();});
  await page.locator('#confirm-new-adventure').click();await requested;
  report.confirm=await page.evaluate(()=>({mode:window.__redcat.mode,open:document.getElementById('new-adventure-warning').open,save:localStorage.getItem('redcat.save.v1'),loadingTitle:document.getElementById('loading-title').textContent}));
  assert.equal(report.confirm.mode,'loading');assert.equal(report.confirm.open,false);assert.equal(report.confirm.save,savedBeforeConfirm,'confirmation does not delete or prematurely overwrite the checkpoint');assert.equal(report.confirm.loadingTitle,'Het kasteel');delete report.confirm.save;
  releaseLoad();await page.waitForFunction(()=>window.__redcat.world?.id==='lvl01a'&&['playing','paused'].includes(window.__redcat.mode),{},{timeout:60000});
  report.started=await page.evaluate(()=>({id:window.__redcat.world.id,score:window.__redcat.gameplay.state.score,potions:window.__redcat.gameplay.state.potions,completed:window.__redcat.gameplay.completed,open:document.getElementById('new-adventure-warning').open}));
  assert.equal(report.started.id,'lvl01a');assert.equal(report.started.score,0);assert.equal(report.started.potions,0);assert.equal(report.started.completed,false);assert.equal(report.started.open,false);
  await page.evaluate(()=>window.__redcat.pause());
  assert.equal(await page.evaluate(()=>JSON.parse(localStorage.getItem('redcat.save.v1')).level),'lvl01a','normal successful-game pause saves the confirmed new adventure');
  assert.deepEqual(errors,[]);
  await writeFile('artifacts/new-adventure-warning-scenes.json',JSON.stringify({report,errors},null,2)+'\n');
  console.log('PASS fresh start bypasses warning; saved adventure receives native modal; cancel/Escape/Enter preserve exact checkpoint and world; background is inert; Continue/F9 restore directly; confirm starts selected castle and preserves checkpoint until normal successful-game saving.');
} finally {await browser?.close();server.kill();}
