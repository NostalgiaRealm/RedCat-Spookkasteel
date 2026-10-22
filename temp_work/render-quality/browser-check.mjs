import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4291'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
let browser;
try{
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=swiftshader','--enable-unsafe-swiftshader']});
 const page=await browser.newPage({viewport:{width:1280,height:900}});const errors=[];page.on('pageerror',e=>errors.push(String(e)));
 await page.goto('http://127.0.0.1:4291/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.locator('#open-settings').click();assert.equal(await page.locator('#render-scale').inputValue(),'100');
 await page.locator('#fullscreen').uncheck();await page.locator('#resolution').selectOption('1920x1080');
 await page.locator('#render-scale').fill('75');await page.locator('#show-fps').check();await page.locator('#apply-settings').click();
 assert.deepEqual(await page.locator('#game').evaluate(c=>[c.width,c.height]),[1440,810]);
 await page.reload();await page.waitForFunction(()=>window.__redcat);
 assert.deepEqual(await page.locator('#game').evaluate(c=>[c.width,c.height]),[1440,810]);
 await page.locator('#open-settings').click();assert.equal(await page.locator('#render-scale').inputValue(),'75');assert.equal(await page.locator('#show-fps').isChecked(),true);
 await page.screenshot({path:'temp_work/render-quality/settings.png'});
 assert.deepEqual(errors,[]);console.log('Settings persistence, drawing-buffer sizing, FPS toggle and page errors: passed');
}finally{await browser?.close();server.kill();}
