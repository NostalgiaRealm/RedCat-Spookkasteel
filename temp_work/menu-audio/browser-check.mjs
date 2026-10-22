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
 await page.locator('#open-cheats').click();await page.locator('#cheat-unlock-levels').click();await page.locator('#close-cheats').click();await page.locator('#close-settings').click();
 for(let i=0;i<5;i++){
  await page.locator(`.level-card[data-level="lvl0${i}a"]`).click();
  const pair=await page.evaluate(()=>__clips.slice(-2).map(c=>({url:c.url,plays:c.plays})));
  assert.deepEqual(pair,[{url:`assets/voices/rcmn${33+i}.wav`,plays:1},{url:`assets/voices/rcmn${38+i}.wav`,plays:0}]);
  await page.evaluate(()=>__clips.at(-2).onended());
  await page.waitForFunction(()=>__clips.at(-1).plays===1);
 }
 await page.locator('#start').click();await page.waitForFunction(()=>__clips.at(-1).url==='assets/voices/rcmn32.wav');
 assert.equal(await page.evaluate(()=>window.__redcat.mode),'loading');
 assert.ok(requests.some(url=>url.endsWith('/assets/audio/menumuz.wav')));
 assert.deepEqual(errors,[]);
 console.log('Browser: music requested, settings cue, all five sequences, and start cue before loading passed.');
}finally{await browser?.close();server.kill();}
