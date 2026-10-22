import {chromium} from 'playwright';
import {spawn,execFileSync} from 'node:child_process';
import {writeFile,mkdir} from 'node:fs/promises';
import {resolve} from 'node:path';
const dir=resolve('temp_work/mangohud-wayland/gamescope-overlay-x11');await mkdir(dir,{recursive:true});
const env={...process.env,TMPDIR:'./temp_work',PATH:resolve('temp_work/mangohud-wayland/mangoapp-bin')+':'+process.env.PATH,MANGOHUD_CONFIG:'fps,frame_timing,position=top-left,font_size=32,fps_limit=0'};delete env.MANGOHUD;delete env.LD_PRELOAD;
const child=spawn('gamescope',['--backend','wayland','--expose-wayland','--mangoapp','-w','1280','-h','720','-r','144','--',resolve('node_modules/electron/dist/electron'),'.','--ozone-platform=wayland',`--user-data-dir=${dir}/profile`,'--remote-debugging-port=9348'],{env,detached:true,stdio:['ignore','pipe','pipe']});
let logs='',browser;child.stdout.on('data',b=>logs+=b);child.stderr.on('data',b=>logs+=b);
try{
 for(let i=0;i<40;i++){try{browser=await chromium.connectOverCDP('http://127.0.0.1:9348');break;}catch{await new Promise(r=>setTimeout(r,250));}}
 if(!browser)throw new Error('No debugging endpoint');const page=browser.contexts()[0].pages()[0];await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:true,autoIntro:false,volume:0})));
 await page.reload();await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>{document.getElementById('menu').hidden=true;const g=document.getElementById('game').getContext('webgl2');function draw(t){g.clearColor(.1,.2,.3+Math.sin(t/500)*.05,1);g.clear(g.COLOR_BUFFER_BIT);requestAnimationFrame(draw);}requestAnimationFrame(draw);});
 await page.waitForTimeout(3000);execFileSync('spectacle',['-a','-b','-n','-o',resolve(dir,'window.png')],{timeout:10000});console.log('Gamescope probe captured');
}catch(e){console.log(String(e));}finally{await writeFile(resolve(dir,'output.log'),logs);try{process.kill(-child.pid,'SIGTERM');}catch{}await browser?.close();}
