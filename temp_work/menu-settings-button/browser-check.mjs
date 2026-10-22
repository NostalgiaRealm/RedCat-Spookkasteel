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
 for(const [width,height,label] of [[1280,900,'desktop'],[390,844,'mobile']]){
  await page.setViewportSize({width,height});
  const button=page.locator('#open-settings');const box=await button.boundingBox();
  assert.equal(box.x,12);assert.equal(box.y+box.height,height-8);
  await page.screenshot({path:`temp_work/menu-settings-button/${label}.png`});
  await page.locator('#menu').evaluate(el=>el.scrollTop=el.scrollHeight);
  const after=await button.boundingBox();assert.equal(after.y,box.y);
  await button.click();assert.equal(await page.locator('#settings').evaluate(el=>el.hidden),false);
  assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/mn_red24.wav');
  await page.locator('#close-settings').click();
 }
 assert.deepEqual(errors,[]);console.log('Original settings button: desktop/mobile anchoring, scroll position and settings opening passed.');

}finally{await browser?.close();server.kill();}
