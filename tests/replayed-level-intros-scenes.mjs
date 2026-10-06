// Focused real-menu coverage for first-play versus native chapter replay.
// All saves and browser files belong to this isolated, retained test profile.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

const scratch='current_work/replayed-level-intros-2026-10-05';
const output=resolve(`${scratch}/scenes-${Date.now()}`),port=4395;
process.env.TMPDIR=`${scratch}/t`;
await mkdir(process.env.TMPDIR,{recursive:true});await mkdir(output,{recursive:true});
const report={checks:[],sessions:[],errors:[],injectedFailures:[]};
const check=name=>{report.checks.push(name);console.log(`PASS ${name}`);};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:String(port)},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context,page,releaseHeldLoad;
try {
  context=await chromium.launchPersistentContext(resolve(output,'profile'),{
    executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,
    viewport:{width:1280,height:800},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${output}`],
  });
  page=await context.newPage();page.on('pageerror',error=>report.errors.push(String(error)));
  await page.addInitScript(()=>{
    if(!localStorage.getItem('redcat.settings.v1'))localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,resolution:'1280x720'}));
  });
  const ready=()=>page.waitForFunction(()=>window.__redcat);
  const loaded=async id=>{
    await page.waitForFunction(id=>window.__redcat.world?.id===id&&['playing','paused'].includes(window.__redcat.mode),id,{timeout:60000});
    await page.evaluate(async()=>{window.__redcat.pause();await window.__redcat.recovery.flush();});
  };
  const stored=()=>page.evaluate(()=>({save:localStorage.getItem('redcat.save.v1'),progress:localStorage.getItem('redcat.progress.v1'),history:JSON.stringify(window.__redcat.recovery.state)}));
  const session=async name=>{
    const result=await page.evaluate(()=>{
      const app=window.__redcat,scripts=app.gameplay.scripts,save=JSON.parse(localStorage.getItem('redcat.save.v1'));
      return {level:app.world.id,replay:scripts.replayLevel,nativeType:scripts.callNative('GetGameType'),snapshotReplay:scripts.snapshot().replayLevel,
        savedReplay:save?.game.scripts?.replayLevel,score:app.gameplay.state.score,
        progress:JSON.parse(localStorage.getItem('redcat.progress.v1')),errors:scripts.errors,
        forestTriggers:Object.fromEntries(['csmc02_tr','csmc06_tr','csmc10_tr'].map(name=>[name,app.gameplay.find(name)[0]?.enabled??null]))};
    });
    report.sessions.push({name,...result});return result;
  };
  const assertMode=(result,replay)=>{
    assert.equal(result.replay,replay);assert.equal(result.nativeType,Number(replay));assert.equal(result.snapshotReplay,replay);assert.deepEqual(result.errors,[]);
    if(result.level==='lvl00a')assert.deepEqual(result.forestTriggers,{csmc02_tr:!replay,csmc06_tr:true,csmc10_tr:true});
  };
  const toMenu=async()=>{await page.locator('#return-menu').click();await page.evaluate(()=>window.__redcat.recovery.flush());};
  const startChapter=async id=>{
    await page.locator(`[data-level="${id}"]`).click();await page.locator('#new-adventure-warning').waitFor({state:'visible'});
    await page.locator('#confirm-new-adventure').click();await loaded(id);
  };
  const recoveryRoundTrip=async(replay,marker)=>{
    await page.evaluate(async marker=>{
      const a=window.__redcat;a.gameplay.state.score=marker;a.saveGame(true);await a.recovery.flush();
      await a.recovery.capture(JSON.parse(localStorage.getItem('redcat.save.v1')),{reset:true});
      a.recovery.advance(120);a.gameplay.state.score=marker+1;a.saveGame(true);await a.recovery.flush();
    },marker);
    await toMenu();await page.locator('#open-recovery').click();await page.locator('[data-recovery-minutes="2"]').click();await loaded('lvl00a');
    const result=await session(`two-minute recovery ${replay?'replay':'first-play'}`);assertMode(result,replay);assert.equal(result.score,marker);assert.equal(result.savedReplay,replay);
  };
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await ready();

  await page.locator('#open-settings').click();await page.locator('#open-cheats').click();await page.locator('#cheat-unlock-levels').click();
  const unlocked=await page.evaluate(()=>JSON.parse(localStorage.getItem('redcat.progress.v1')));
  assert.equal(unlocked.highestUnlocked,4);assert.deepEqual(unlocked.playedLevels||[],[]);
  await page.locator('#back-cheats').click();await page.locator('#close-settings').click();
  check('unlock-all cheat enables chapter access without marking any chapter played');

  await page.locator('#start').click();await loaded('lvl00a');
  let result=await session('first Forest start');assertMode(result,false);assert.equal(result.savedReplay,false);assert.deepEqual(result.progress.playedLevels,['lvl00a']);
  check('first Forest visit keeps authored tutorial, ability and boss triggers; history is recorded without changing the current first-play session');
  await toMenu();await page.locator('#continue').click();await loaded('lvl00a');
  result=await session('first-play Continue');assertMode(result,false);assert.equal(result.savedReplay,false);
  await recoveryRoundTrip(false,101);
  check('Continue and two-minute recovery retain first-play mode despite Forest already being recorded as played');

  await toMenu();await startChapter('lvl01a');
  result=await session('first cheat-unlocked Castle visit');assertMode(result,false);assert.equal(result.savedReplay,false);assert.deepEqual(result.progress.playedLevels,['lvl00a','lvl01a']);
  check('first visit to a cheat-unlocked Castle remains first-play');
  await toMenu();await startChapter('lvl00a');
  result=await session('Forest chapter-card replay');assertMode(result,true);assert.equal(result.savedReplay,true);assert.deepEqual(result.progress.playedLevels,['lvl00a','lvl01a']);
  check('chapter-card replay takes native tutorial skip branch while retaining Forest ability and boss gates');
  await toMenu();await page.reload();await ready();await page.locator('#continue').click();await loaded('lvl00a');
  result=await session('replay Continue after browser reload');assertMode(result,true);assert.equal(result.savedReplay,true);
  await recoveryRoundTrip(true,202);
  check('replay mode survives browser reload, Continue and two-minute recovery');

  await toMenu();const preserved=await stored();
  await page.locator('#start-over').click();await page.locator('#cancel-new-adventure').click();assert.deepEqual(await stored(),preserved);
  check('cancelling Start opnieuw preserves current save, played history and recovery snapshots');

  // Fail before a previously unplayed chapter loads. Failed attempts are not
  // play evidence and must not destroy the preceding adventure/history.
  const failLoad=async(level,click)=>{
    const pattern=`**/data/levels/${level}/level.json`;
    await page.route(pattern,route=>route.fulfill({status:200,contentType:'application/json',body:'{ intentionally malformed replay fixture'}));
    await click();await page.waitForFunction(()=>window.__redcat.mode==='error');
    report.injectedFailures.push({level,message:await page.locator('#fatal-message').textContent()});
    assert.deepEqual(await stored(),preserved);await page.unroute(pattern);await page.reload();await ready();
  };
  await failLoad('lvl03a',async()=>{
    await page.locator('[data-level="lvl03a"]').click();await page.locator('#confirm-new-adventure').click();
  });
  check('failed first Cave load does not record the level as played or replace saves');
  await failLoad('lvl00a',async()=>{await page.locator('#start-over').click();await page.locator('#confirm-new-adventure').click();});
  check('failed Start opnieuw does not clear played history or recovery snapshots');

  let loadRequested;const requested=new Promise(resolve=>{loadRequested=resolve;});
  const held=new Promise(resolve=>{releaseHeldLoad=resolve;});
  await page.route('**/data/levels/lvl00a/level.json',async route=>{loadRequested();await held;await route.continue();});
  await page.locator('#start-over').click();await page.locator('#confirm-new-adventure').click();await requested;
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'loading');assert.deepEqual(await stored(),preserved);
  releaseHeldLoad();await loaded('lvl00a');
  result=await session('confirmed new adventure');assertMode(result,false);assert.equal(result.savedReplay,false);
  assert.deepEqual(result.progress.playedLevels,['lvl00a']);assert.equal(result.progress.highestUnlocked,4);
  assert.equal(await page.evaluate(()=>window.__redcat.recovery.state.checkpoints.length),1);
  check('confirmed new adventure clears old played history only after successful load, restores first-play tutorials and retains unlocks');
  await page.screenshot({path:resolve(output,'new-adventure-first-play.png')});
  assert.deepEqual(report.errors,[]);
}catch(error){report.failure=String(error.stack||error);await page?.screenshot({path:resolve(output,'failure.png')}).catch(()=>{});throw error;}
finally {releaseHeldLoad?.();await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2)+'\n');await context?.close();server.kill();console.log(output);}
