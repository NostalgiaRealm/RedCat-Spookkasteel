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
 for(const [id,lower,higher] of [['volume','0.4','0.7'],['sensitivity','0.8','1.2'],['fov','60','70'],['render-scale','75','100']]){
  for(const [value,file] of [[lower,id==='volume'?'rcmn15.wav':'rcmn23.wav'],[higher,id==='volume'?'rcmn16.wav':'rcmn22.wav']]){
   await page.locator('#'+id).fill(value);
   assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/'+file);
   if(id==='volume')assert.equal(await page.evaluate(()=>__clips.at(-1).volume),Number(value));
   await page.evaluate(()=>__clips.at(-1).onended());
  }
 }
 await page.locator('#close-settings').click();await page.locator('#open-settings').click();
 assert.equal(await page.locator('#volume').inputValue(),'0.6');
 await page.locator('#fov').focus();await page.keyboard.press('ArrowRight');
 assert.equal(await page.evaluate(()=>__clips.at(-1).url),'assets/voices/rcmn22.wav');
 assert.deepEqual(errors,[]);console.log('Browser: all slider directions, volume preview, settings reopen and keyboard feedback passed.');

}finally{await browser?.close();server.kill();}
