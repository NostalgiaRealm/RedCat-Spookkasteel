// Focused compatibility check for the shared frontend during Android work.
// Uses the existing Electron source app; no packaging or player save mutation.
import assert from 'node:assert/strict';
import {mkdtemp, mkdir, writeFile} from 'node:fs/promises';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {_electron as electron} from 'playwright';

const root=fileURLToPath(new URL('../',import.meta.url));
const scratch=path.join(root,'current_work/android-initial-2026-10-06');
await mkdir(scratch,{recursive:true});
const evidence=await mkdtemp(path.join(scratch,'desktop-scenes-'));
const errors=[];let app;
try {
  app=await electron.launch({cwd:root,args:['.',...(process.platform==='linux'?['--ozone-platform=x11']:[]),`--user-data-dir=${path.join(evidence,'profile')}`],
    env:{...process.env,TMPDIR:path.relative(root,evidence)},timeout:60000});
  const page=await app.firstWindow();
  page.on('pageerror',error=>errors.push(error.message));
  await page.waitForFunction(()=>window.__redcat,{timeout:60000});
  assert.deepEqual(await page.evaluate(()=>({desktop:!!window.desktop,android:!!window.RedCatAndroid,touch:window.__redcat.touchEnabled})),
    {desktop:true,android:false,touch:false});
  await page.waitForFunction(()=>document.querySelector('#intro-video').readyState>=2,{},{timeout:30000});
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'intro');
  await page.locator('#skip-intro').click();
  await page.evaluate(()=>window.__redcat.startLevel(0));
  await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:60000});
  assert.equal(await page.evaluate(()=>window.__redcat.saveGame(true)),true);
  await page.evaluate(()=>window.__redcat.pause());
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'paused');
  await page.locator('#pause-settings').click();
  await page.locator('#resolution').selectOption('1280x720');
  await page.locator('#fullscreen').check();
  await page.locator('#apply-settings').click();
  await page.waitForFunction(()=>document.querySelector('#settings').hidden,null,{timeout:10000});
  assert.equal(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen()),true);
  assert.deepEqual(await page.locator('#game').evaluate(canvas=>[canvas.width,canvas.height]),[1280,720]);
  await page.locator('#pause-settings').click();
  await page.locator('#fullscreen').uncheck();
  await page.locator('#apply-settings').click();
  await page.waitForFunction(()=>document.querySelector('#settings').hidden,null,{timeout:10000});
  assert.equal(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen()),false);
  await page.evaluate(()=>window.__redcat.resume());
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'playing');
  await page.screenshot({path:path.join(evidence,'electron-level1.png')});
  const result={ok:true,platform:process.platform,mode:await page.evaluate(()=>window.__redcat.mode),errors};
  assert.deepEqual(errors,[]);
  await writeFile(path.join(evidence,'report.json'),JSON.stringify(result,null,2));
  console.log('PASS existing Electron: intro, Level 1, save, pause/resume, native fullscreen/windowed display. Evidence:',evidence);
}catch(error){
  await writeFile(path.join(evidence,'report.json'),JSON.stringify({ok:false,error:error.stack,errors},null,2));
  throw error;
}finally {await app?.close();}
