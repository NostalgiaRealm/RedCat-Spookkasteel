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
 await page.locator('#open-settings').click();
 assert.equal((await page.locator('#apply-settings').textContent()).trim(),'OK');
 await page.locator('#fov').fill('70');await page.locator('#apply-settings').click();
 assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/rcmn1.wav');
 assert.ok(await page.evaluate(()=>typeof __clips.at(-1).onended==='function'),'OK voice survives closing settings');
 assert.equal(await page.locator('#settings').evaluate(el=>el.hidden),true);
 assert.equal(await page.evaluate(()=>window.__redcat.settings.fov),70);
 for(const [open,close] of [['open-settings','close-settings'],['open-help','close-help'],['open-about','close-about'],['open-recovery','close-recovery']]){
  await page.locator('#'+open).click();await page.locator('#'+close).click();
  assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/rcmn2.wav');
  assert.ok(await page.evaluate(()=>typeof __clips.at(-1).onended==='function'));
 }
 assert.deepEqual(errors,[]);console.log('OK label, application, uninterrupted OK cue and all four X button cues passed.');

}finally{await browser?.close();server.kill();}
