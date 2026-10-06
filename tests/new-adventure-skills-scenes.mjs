// Focused regression for learned abilities leaking from a replaced adventure.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const output=resolve(`current_work/new-adventure-skills-2026-10-03/scenes-${Date.now()}`);
await mkdir(output,{recursive:true});
const report={checks:[],errors:[]},check=name=>{report.checks.push(name);console.log(`PASS ${name}`);};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4341'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context,page;
try{
  context=await chromium.launchPersistentContext(resolve(output,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1280,height:800}});
  page=await context.newPage();page.on('pageerror',error=>report.errors.push(String(error)));
  await page.addInitScript(()=>{
    if(!localStorage.getItem('redcat.settings.v1'))localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,resolution:'1280x720'}));
    if(!localStorage.getItem('redcat.progress.v1'))localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4,earnedSkills:15}));
  });
  const ready=()=>page.waitForFunction(()=>window.__redcat);
  const loaded=()=>page.waitForFunction(()=>window.__redcat.world&&['playing','paused'].includes(window.__redcat.mode),null,{timeout:60000});
  const pause=()=>page.evaluate(async()=>{window.__redcat.pause();await window.__redcat.recovery.flush();});
  const state=()=>page.evaluate(async()=>{
    const app=window.__redcat,{playerShotDefinition}=await import('/src/player-projectiles.js');
    const skill=app.gameplay.state.skill;
    return {skill,shot:playerShotDefinition(skill,app.gameplay.settings,app.gameplay.difficulty).key,superSkippie:!!(skill&8),charge:app.gameplay.playerCharge??null,
      progress:JSON.parse(localStorage.getItem('redcat.progress.v1')),savedSkill:JSON.parse(localStorage.getItem('redcat.save.v1')).game.state.skill};
  });
  const preserved=async()=>{
    const result=await state();assert.equal(result.skill,15);assert.equal(result.shot,'RcSuperShot');assert.equal(result.superSkippie,true);
    assert.equal(result.progress.earnedSkills,15);assert.equal(result.progress.highestUnlocked,4);assert.equal(result.savedSkill,15);
  };
  const normal=async()=>{
    // The original Forest starts at mask 0; its opening scripts enable the
    // ordinary shot later. Neither new-game entry nor reload may grant upgrades.
    const result=await state();assert.equal(result.skill,0);assert.equal(result.shot,'RcShot');assert.equal(result.superSkippie,false);assert.equal(result.charge,null);
    assert.equal(result.progress.earnedSkills??0,0);assert.equal(result.progress.highestUnlocked,4);assert.equal(result.savedSkill,0);
  };
  await page.goto('http://127.0.0.1:4341/?skipIntro');await ready();
  // Build an actual adventure checkpoint with all three learned upgrades.
  assert.equal(await page.evaluate(()=>window.__redcat.startLevel(0)),true);await loaded();await pause();
  await page.evaluate(async()=>{window.__redcat.saveGame(true);await window.__redcat.recovery.flush();});await preserved();
  await page.locator('#return-menu').click();
  await page.locator('#continue').click();await loaded();await pause();await preserved();
  check('Continue retains learned shot upgrades and SUPERSKIPPIE');

  await page.locator('#return-menu').click();await page.locator('[data-level="lvl00a"]').click();
  await page.locator('#new-adventure-warning').waitFor({state:'visible'});await page.locator('#confirm-new-adventure').click();
  await loaded();await pause();await preserved();
  check('replaying the forest through its chapter card retains learned abilities');

  await page.locator('#return-menu').click();
  const stored=()=>page.evaluate(()=>({save:localStorage.getItem('redcat.save.v1'),progress:localStorage.getItem('redcat.progress.v1'),history:JSON.stringify(window.__redcat.recovery.state.checkpoints)}));
  const before=await stored();await page.locator('#start-over').click();await page.locator('#cancel-new-adventure').click();assert.deepEqual(await stored(),before);
  check('cancelling Start opnieuw preserves the save, learned abilities and recovery history');

  let releaseLoad,loadingRequested;
  const held=new Promise(resolve=>{releaseLoad=resolve;}),requested=new Promise(resolve=>{loadingRequested=resolve;});
  await page.route('**/data/levels/lvl00a/level.json',async route=>{loadingRequested();await held;await route.continue();});
  await page.locator('#start-over').click();await page.locator('#confirm-new-adventure').click();await requested;
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'loading');assert.deepEqual(await stored(),before);
  releaseLoad();await loaded();await pause();await normal();
  assert.equal(await page.evaluate(()=>window.__redcat.recovery.state.checkpoints.length),1);
  check('confirmed new adventure resets shots and jumping only after loading succeeds, while keeping chapter unlocks');
  await page.screenshot({path:resolve(output,'new-adventure.png')});

  await page.reload();await ready();await page.locator('#continue').click();await loaded();await pause();await normal();
  check('reload and Continue cannot restore the discarded adventure abilities');
  assert.deepEqual(report.errors,[]);
}catch(error){report.failure=String(error.stack||error);await page?.screenshot({path:resolve(output,'failure.png')}).catch(()=>{});throw error;}
finally{await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));await context?.close();server.kill();console.log(output);}
