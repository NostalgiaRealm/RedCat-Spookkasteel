import {chromium} from 'playwright';
import {spawn,execFileSync} from 'node:child_process';
import {writeFile,mkdir} from 'node:fs/promises';
import {resolve} from 'node:path';
const dir=resolve('temp_work/mangohud-wayland/source-launcher-sized');await mkdir(dir,{recursive:true});
const env={...process.env,TMPDIR:'./temp_work',MANGOHUD_CONFIG:'fps,frame_timing,position=top-left,font_size=32,fps_limit=0'};delete env.MANGOHUD;delete env.LD_PRELOAD;
const child=spawn('npm',['run','start:mangohud','--',`--user-data-dir=${dir}/profile`,'--remote-debugging-port=9348'],{env,detached:true,stdio:['ignore','pipe','pipe']});
let logs='',browser;child.stdout.on('data',b=>logs+=b);child.stderr.on('data',b=>logs+=b);
try{
 for(let i=0;i<120;i++){try{browser=await chromium.connectOverCDP('http://127.0.0.1:9348');break;}catch{await new Promise(r=>setTimeout(r,250));}}
 if(!browser)throw new Error('No debugging endpoint');const page=browser.contexts()[0].pages()[0];await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:true,autoIntro:false,volume:0})));
 await page.reload();await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(async()=>{await window.__redcat.startLevel(0);});
 await page.waitForFunction(()=>window.__redcat.world);
 await page.waitForTimeout(3000);await page.keyboard.down('e');await page.waitForTimeout(2400);await page.keyboard.up('e');await page.mouse.click(700,450);await page.waitForTimeout(500);execFileSync('spectacle',['-a','-b','-n','-o',resolve(dir,'window.png')],{timeout:10000});await writeFile(resolve(dir,'state.json'),JSON.stringify(await page.evaluate(()=>({pointerLock:!!document.pointerLockElement,screen:[screen.width,screen.height],dpr:devicePixelRatio,mode:window.__redcat.mode,size:[innerWidth,innerHeight],level:window.__redcat.world?.level?.id})),null,2));console.log('Source launcher captured');
}catch(e){console.log(String(e));}finally{await writeFile(resolve(dir,'output.log'),logs);try{process.kill(-child.pid,'SIGTERM');}catch{}await browser?.close();}
