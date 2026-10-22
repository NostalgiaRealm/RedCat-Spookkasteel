import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4292'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));let browser;
try{
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=swiftshader','--enable-unsafe-swiftshader']});
 const page=await browser.newPage({viewport:{width:1280,height:900}}),errors=[],requests=[];
 page.on('pageerror',e=>errors.push(String(e)));page.on('request',r=>requests.push(r.url()));
 await page.addInitScript(()=>{
  if(!localStorage.getItem('redcat.settings.v1'))localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,autoIntro:false}));
  window.__clips=[];window.Audio=class{constructor(url){this.url=url;this.volume=1;this.currentTime=0;this.plays=0;window.__clips.push(this);}load(){}play(){this.plays++;return Promise.resolve();}pause(){}};
 });
 await page.goto('http://127.0.0.1:4292/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.locator('#open-settings').click();
 assert.equal(await page.locator('#render-scale').inputValue(),'100');
 await page.locator('#resolution').selectOption('1280x720');
 await page.locator('#render-scale').fill('300');assert.equal(await page.locator('#render-scale-value').textContent(),'300%');
 await page.locator('#apply-settings').click();
 assert.deepEqual(await page.locator('#game').evaluate(c=>[c.width,c.height]),[3840,2160]);
 await page.reload();await page.waitForFunction(()=>window.__redcat);await page.locator('#open-settings').click();
 assert.equal(await page.locator('#render-scale').inputValue(),'300');
 await page.screenshot({path:'temp_work/render-scale-300/settings.png'});
 assert.deepEqual(errors,[]);console.log('300% drawing buffer, persistence, default and slider output passed.');

}finally{await browser?.close();server.kill();}
