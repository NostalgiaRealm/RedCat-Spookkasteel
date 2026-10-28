// Set A probe: why the desktop first-time hint never appears after the forest opening.
import {spawn} from 'node:child_process';
import {resolve} from 'node:path';
import {chromium} from 'playwright';
import {sceneOutput,sceneTemp} from '../../../tests/support/scene-output.mjs';
process.env.TMPDIR=sceneTemp();
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4431'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
let context;
try{
  context=await chromium.launchPersistentContext(resolve(sceneOutput(`temp_work/setA-hint-${Date.now()}`)),{executablePath:process.env.CHROME_PATH,headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required'],viewport:{width:1000,height:800}});
  const page=await context.newPage();
  await page.addInitScript(()=>{if(!localStorage.getItem('redcat.settings.v1'))localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,resolution:'1280x720'}));});
  await page.goto('http://127.0.0.1:4431/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(()=>{window.hintShown=[];const toast=document.getElementById('toast');new MutationObserver(()=>{if(toast.classList.contains('visible'))window.hintShown.push(toast.textContent.slice(0,60));}).observe(toast,{attributes:true,childList:true,subtree:true});});
  await page.evaluate(()=>window.__redcat.startLevel(0));
  for(let i=0;i<8;i++){await page.waitForTimeout(5000);console.log(JSON.stringify(await page.evaluate(()=>{const a=window.__redcat,h=a.gameplay?.scripts;return {mode:a.mode,cutscene:h?.cutscene,camera:!!h?.camera,pendingStop:h?.pendingCutsceneStop,dialoguePending:a.audio.dialoguePending,dialogueActive:a.audio.dialogueActive?.event?.id||a.audio.dialogueActive?.id||null,time:+(a.gameplay?.time||0).toFixed(1),hints:window.hintShown,controller:a.controllerActive,touch:a.touchEnabled};})));}
}finally{await context?.close();server.kill();}
