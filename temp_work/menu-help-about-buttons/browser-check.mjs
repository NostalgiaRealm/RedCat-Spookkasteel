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
 for(const [width,height,label] of [[1280,900,'desktop'],[320,740,'mobile']]){
  await page.setViewportSize({width,height});
  await page.locator('#menu').evaluate(el=>el.scrollTop=el.scrollHeight);
  await page.screenshot({path:`temp_work/menu-help-about-buttons/${label}.png`});
  for(const [id,target,close] of [['open-help','help','close-help'],['open-about','about','close-about']]){
   await page.locator('#'+id).click();
   console.log(label,id,'opens',await page.locator('#'+target).isVisible());
   await page.locator('#'+close).click();
  }
 }
 console.log('Page errors:',errors);

}finally{await browser?.close();server.kill();}
