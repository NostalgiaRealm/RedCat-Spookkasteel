import {_electron as electron} from 'playwright';
import {mkdtemp,rm,writeFile,mkdir,cp} from 'node:fs/promises';
import {execFileSync} from 'node:child_process';
import os from 'node:os';
import path from 'node:path';
const backend=process.argv[2]||'vulkan',extra=process.argv.slice(3),label=[backend,...extra,...(process.env.REDCAT_PROFILE_SOURCE?['saved-profile']:[])].join('-').replace(/[^a-z0-9_-]/gi,'');
const profile=await mkdtemp(path.join(os.tmpdir(),'redcat-display-'));
if(process.env.REDCAT_PROFILE_SOURCE)await cp(process.env.REDCAT_PROFILE_SOURCE,profile,{recursive:true,filter:file=>!['SingletonLock','SingletonCookie','SingletonSocket'].includes(path.basename(file))});
await mkdir('artifacts/display',{recursive:true});
let app;const logs=[];
try {
 app=await electron.launch({executablePath:process.env.REDCAT_EXECUTABLE||path.resolve('dist/linux-unpacked/redcat-spookkasteel'),args:[...(process.env.REDCAT_DEV?['.']:[]),`--user-data-dir=${profile}`,`--use-angle=${backend}`,...extra],timeout:30000});
 app.process().stderr?.on('data',data=>logs.push(data.toString()));
 const page=await app.firstWindow();page.on('pageerror',error=>logs.push(error.stack));
 await page.waitForFunction(()=>window.__redcat,{timeout:20000});
 const window=await app.evaluate(({BrowserWindow,app})=>{const w=BrowserWindow.getAllWindows()[0];return {id:w.getNativeWindowHandle().readUInt32LE(),bounds:w.getBounds(),visible:w.isVisible(),gpu:app.getGPUFeatureStatus(),args:process.argv};});
 console.log('WINDOW',window);
 async function capture(stage){
  await page.waitForTimeout(1000);
  const output=`artifacts/display/${label}-${stage}`;
  try{if(process.env.REDCAT_SPECTACLE){await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].focus());execFileSync('spectacle',['-a','-b','-n','-e','-S','-o',path.resolve(output+'-native.png')],{timeout:8000});}else execFileSync('import',['-silent','-window',String(window.id),output+'-native.png'],{timeout:8000});}catch(error){logs.push(String(error));}
  await page.screenshot({path:output+'-page.png'});
  console.log(stage,await page.evaluate(()=>({mode:window.__redcat.mode,error:document.getElementById('fatal-message').textContent,renderer:window.__redcat.world?.renderer.getContext().getParameter(7937)})));
 }
 await capture('intro');
 if(await page.locator('#intro').isVisible())await page.locator('#skip-intro').click();
 await capture('menu');
 await page.evaluate(()=>window.__redcat.startLevel(0));
 await capture('level');
 console.log('GPU INFO',await app.evaluate(async({app})=>{const info=await app.getGPUInfo('complete');return{gpuDevice:info.gpuDevice,auxAttributes:info.auxAttributes};}));
} catch(error){console.log('FAILED',error.message);logs.push(error.stack);process.exitCode=1;}
finally{await app?.close();await writeFile(`artifacts/display/${label}.log`,logs.join('\n'));await rm(profile,{recursive:true,force:true});}
