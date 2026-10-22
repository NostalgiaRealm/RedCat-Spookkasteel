import {spawn} from 'node:child_process';
import {resolve} from 'node:path';
import {chromium} from 'playwright';
const output='temp_work/menu-input-device-2026-10-20';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4389',TMPDIR:'temp_work'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.on('data',data=>{if(String(data).includes('RedCat:'))resolve();});server.once('error',reject);});
let context;
try{
 context=await chromium.launchPersistentContext(resolve(output,'visual-profile'),{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:800,height:600},env:{...process.env,TMPDIR:'temp_work'}});
 const page=await context.newPage();
 await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,autoIntro:false,volume:0})));
 await page.goto('http://127.0.0.1:4389/?skipIntro');
 await page.waitForFunction(()=>window.__redcat?.originalMenu);
 await page.locator('#open-settings').click();
 await page.evaluate(async()=>{
  const elements=[...document.querySelectorAll('#settings, #settings *')];
  const urls=new Set(elements.flatMap(el=>[...getComputedStyle(el).backgroundImage.matchAll(/url\("?([^"()]+)"?\)/g)].map(m=>m[1])));
  await Promise.all([...urls].map(async url=>{const img=new Image();img.src=url;await img.decode();}));
 });
 await page.screenshot({path:`${output}/desktop-settings-final.png`});
}finally{await context?.close();server.kill();}
