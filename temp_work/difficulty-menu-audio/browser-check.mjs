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
 assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/mn_red24.wav');
 await page.locator('#difficulty').dispatchEvent('pointerdown',{button:0});
 assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/rcmn30.wav');
 for(const [value,file] of [['Easy','mn_red02.wav'],['Normal','mn_red03.wav'],['Hard','mn_red04.wav']]){
  await page.locator('#difficulty').selectOption(value);
  assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/'+file);
  await page.locator('#difficulty').dispatchEvent('click');
  assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/'+file);
 }
 await page.locator('#difficulty').dispatchEvent('keydown',{key:' ',repeat:false});
 assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/rcmn30.wav');
 await page.locator('#apply-settings').click();assert.equal(await page.evaluate(()=>window.__redcat.settings.difficulty),'Hard');
 await page.locator('#open-settings').click();assert.equal(await page.locator('#difficulty').inputValue(),'Hard');
 assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/mn_red24.wav');
 assert.deepEqual(errors,[]);console.log('Difficulty open cue, all choices, trailing-click order, keyboard opening and saved setting passed.');

}finally{await browser?.close();server.kill();}
