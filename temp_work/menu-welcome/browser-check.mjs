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
 const count=()=>page.evaluate(()=>__clips.filter(c=>c.url==='assets/voices/rcmn9.wav').length);
 assert.equal(await count(),1);await page.evaluate(()=>__clips.at(-1).onended());
 for(let i=0;i<2;i++){
  await page.locator('#play-intro').click();await page.waitForFunction(()=>window.__redcat.mode==='intro');
  await page.locator('#skip-intro').click();await page.waitForFunction(()=>window.__redcat.mode==='menu');
  assert.equal(await count(),i+2);await page.evaluate(()=>__clips.at(-1).onended());
 }
 await page.locator('#open-help').click();await page.locator('#close-help').click();
 assert.equal(await count(),3);assert.deepEqual(errors,[]);
 console.log('Initial main menu and repeated returns from intro play exactly one welcome each.');

}finally{await browser?.close();server.kill();}
