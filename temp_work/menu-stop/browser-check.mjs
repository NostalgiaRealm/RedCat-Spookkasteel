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
  localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,autoIntro:false}));
  window.__clips=[];window.Audio=class{constructor(url){this.url=url;this.volume=1;this.currentTime=0;this.plays=0;window.__clips.push(this);}load(){}play(){this.plays++;return Promise.resolve();}pause(){}};
 });
 await page.goto('http://127.0.0.1:4292/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>{window.__closeCount=0;window.close=()=>window.__closeCount++;});
 await page.locator('#open-quit').click();assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/mn_red23.wav');
 await page.screenshot({path:'temp_work/menu-stop/confirmation-desktop.png'});
 await page.locator('#quit-no').click();assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/rcmn4.wav');
 assert.equal(await page.locator('#quit-confirmation').evaluate(d=>d.open),false);
 await page.setViewportSize({width:390,height:844});await page.locator('#open-quit').click();
 await page.screenshot({path:'temp_work/menu-stop/confirmation-mobile.png'});
 await page.locator('#quit-yes').click();assert.equal(await page.evaluate(()=>__clips.at(-2).url),'assets/voices/rcmn3.wav');
 assert.equal(await page.evaluate(()=>__closeCount),0);
 await page.evaluate(()=>__clips.at(-2).onended());await page.waitForFunction(()=>__clips.at(-1).plays===1);
 assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/mn_red28.wav');
 assert.equal(await page.evaluate(()=>__closeCount),0);await page.evaluate(()=>__clips.at(-1).onended());
 await page.waitForFunction(()=>__closeCount===1);
 assert.equal(await page.locator('#quit-status').textContent(),'Je kunt dit tabblad nu sluiten.');
 assert.deepEqual(errors,[]);console.log('Stoppen/Nee/Ja browser wiring, sequential audio, closure timing and mobile layout passed.');

}finally{await browser?.close();server.kill();}
