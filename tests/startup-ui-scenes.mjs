import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium,_electron as electron} from 'playwright';

process.env.TMPDIR='current_work';
const output=resolve(`current_work/startup-ui-2026-10-03/scenes-${Date.now()}`);
await mkdir(output,{recursive:true});
const report={checks:[],errors:[]},port=Number(process.env.STARTUP_TEST_PORT||4327);
const check=name=>{report.checks.push(name);console.log(`PASS ${name}`);};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:String(port)},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context,app;
try {
  context=await chromium.launchPersistentContext(resolve(output,'browser-profile'),{
    executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,
    args:['--use-angle=gl','--autoplay-policy=document-user-activation-required'],
    viewport:{width:390,height:844},isMobile:true,hasTouch:true,
  });
  const page=await context.newPage();page.on('pageerror',e=>report.errors.push(String(e)));
  await page.goto(`http://127.0.0.1:${port}/`);
  await page.waitForFunction(()=>{const v=document.getElementById('intro-video');return window.__redcat&&v.currentTime>.2&&!v.paused;});
  assert.equal(await page.evaluate(()=>window.__redcat.settings.fullscreen),true);
  assert.equal(await page.evaluate(()=>!!document.fullscreenElement),false,'browser waits for a real gesture');
  await page.locator('#intro-play').tap();
  await page.waitForFunction(()=>!!document.fullscreenElement&&!document.getElementById('intro-video').muted);
  check('fresh browser defaults to fullscreen and the sound gesture enables both sound and fullscreen');
  await page.locator('#skip-intro').tap();
  await page.locator('#open-settings').click();await page.locator('#fullscreen').uncheck();await page.locator('#auto-intro').uncheck();
  await page.locator('#volume').fill('0');await page.locator('#apply-settings').click();
  await page.waitForFunction(()=>!document.fullscreenElement&&window.__redcat.settings.fullscreen===false);
  await page.reload();await page.waitForFunction(()=>window.__redcat);
  assert.equal(await page.evaluate(()=>window.__redcat.settings.fullscreen),false);
  await page.locator('#open-settings').click();assert.equal(await page.locator('#fullscreen').isChecked(),false);await page.locator('#close-settings').click();
  assert.equal(await page.evaluate(()=>!!document.fullscreenElement),false);
  check('disabling fullscreen in settings persists across reload and later clicks');
  assert.equal(await page.evaluate(()=>window.__redcat.touchEnabled),true);
  await page.evaluate(async()=>{
    window.hintShows=[];
    const toast=document.getElementById('toast');
    new MutationObserver(()=>{
      if(toast.classList.contains('visible')&&toast.textContent.startsWith('Stick links:'))window.hintShows.push({at:performance.now(),cutscene:window.__redcat.gameplay.scripts.cutscene,camera:window.__redcat.gameplay.scripts.camera});
    }).observe(toast,{attributes:true,childList:true});
    await window.__redcat.startLevel(0);
  });
  await page.waitForFunction(()=>window.__redcat.gameplay?.scripts?.cutscene);
  assert.equal(await page.evaluate(()=>window.hintShows.length),0);
  await page.waitForFunction(()=>window.hintShows.length===1,null,{timeout:25000});
  assert.equal(await page.evaluate(()=>window.hintShows[0].cutscene),false);
  assert.equal(await page.evaluate(()=>window.hintShows[0].camera),null);
  assert.equal(await page.evaluate(()=>localStorage.getItem('redcat.touch-intro-hint.v1')),'true');
  await page.waitForFunction(()=>getComputedStyle(document.getElementById('toast')).opacity==='1');
  await page.screenshot({path:resolve(output,'touch-hint-after-opening.png')});
  await page.waitForFunction(()=>performance.now()-window.hintShows[0].at>=9400);
  assert.equal(await page.locator('#toast').evaluate(e=>e.classList.contains('visible')),true,'hint remains for nearly ten seconds');
  await page.waitForFunction(()=>!document.getElementById('toast').classList.contains('visible'));
  const elapsed=await page.evaluate(()=>performance.now()-window.hintShows[0].at);assert.ok(elapsed>=9900&&elapsed<12000);
  check('touch hint appears only after the actual forest opening camera and stays visible for ten seconds');
  await page.reload();await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(()=>window.__redcat.startLevel(0));await page.waitForFunction(()=>window.__redcat.gameplay.scripts.cutscene);
  await page.keyboard.down('KeyE');await page.waitForFunction(()=>!window.__redcat.gameplay.scripts.cutscene,null,{timeout:6000});await page.keyboard.up('KeyE');
  assert.equal(await page.locator('#toast').evaluate(e=>e.classList.contains('visible')&&e.textContent.startsWith('Stick links:')),false);
  check('a new page and restarted adventure do not show the touch hint again');
  await context.close();context=null;

  // Native shell can enter fullscreen immediately, without browser activation.
  const env={...process.env,TMPDIR:'current_work'};delete env.LD_PRELOAD;delete env.MANGOHUD;
  app=await electron.launch({args:['.','--ozone-platform=x11',`--user-data-dir=${resolve(output,'electron-profile')}`],cwd:process.cwd(),env});
  const desktop=await app.firstWindow();desktop.on('pageerror',e=>report.errors.push(String(e)));
  await desktop.waitForFunction(()=>window.__redcat);
  for(let i=0;i<30&&!await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen());i++)await desktop.waitForTimeout(100);
  assert.equal(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen()),true);
  await desktop.waitForFunction(()=>document.getElementById('intro-video').currentTime>.2);
  await desktop.locator('#skip-intro').click();await desktop.locator('#open-settings').click();
  await desktop.locator('#fullscreen').uncheck();await desktop.locator('#auto-intro').uncheck();await desktop.locator('#apply-settings').click();
  await desktop.waitForFunction(()=>document.getElementById('settings').hidden);
  assert.equal(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen()),false);
  await desktop.reload();await desktop.waitForFunction(()=>window.__redcat);
  assert.equal(await desktop.evaluate(()=>window.__redcat.settings.fullscreen),false);
  assert.equal(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen()),false);
  check('native desktop starts fullscreen and preserves the windowed setting on reload');
  assert.deepEqual(report.errors,[]);
} finally {
  await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));
  await context?.close();await app?.close();server.kill();console.log(output);
}
