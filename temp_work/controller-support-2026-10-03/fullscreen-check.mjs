import assert from 'node:assert/strict';
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
process.env.TMPDIR='current_work';
const output=resolve(`current_work/controller-support-2026-10-03/fullscreen-${Date.now()}`);await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4333'},stdio:['ignore','pipe','inherit']});await new Promise(r=>server.stdout.once('data',r));
let context;const report={errors:[]};
try{
context=await chromium.launchPersistentContext(resolve(output,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});const page=await context.newPage();page.on('pageerror',e=>report.errors.push(String(e)));
await page.addInitScript(()=>{localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,autoIntro:false,volume:0}));window.pad={index:0,id:'Standard test pad',mapping:'standard',connected:true,axes:[0,0,0,0],buttons:Array.from({length:17},()=>({pressed:false,value:0}))};Object.defineProperty(navigator,'getGamepads',{value:()=>[window.pad]});});
const client=await context.newCDPSession(page);const quiet=async(fn,arg)=>{const r=await client.send('Runtime.evaluate',{expression:'('+fn.toString()+')('+JSON.stringify(arg??null)+')',awaitPromise:true,returnByValue:true,userGesture:false});if(r.exceptionDetails)throw new Error(JSON.stringify(r.exceptionDetails));return r.result.value;};
await page.goto('http://127.0.0.1:4333/?skipIntro');await page.waitForFunction(()=>window.__redcat);const frames=()=>quiet(async()=>{for(let i=0;i<5;i++)await new Promise(requestAnimationFrame);});
const tap=async n=>{await quiet(n=>window.pad.buttons[n]={pressed:true,value:1},n);await frames();await quiet(n=>window.pad.buttons[n]={pressed:false,value:0},n);await frames();};
await tap(2);await quiet(()=>document.getElementById('open-settings').focus());await tap(0);await quiet(()=>document.getElementById('fullscreen').focus());await tap(0);assert.equal(await page.locator('#fullscreen').isChecked(),true);
await quiet(()=>document.getElementById('sensitivity').value='1.4');await quiet(()=>document.getElementById('apply-settings').focus());await page.waitForTimeout(6000);await tap(0);
await page.waitForFunction(()=>document.getElementById('settings').hidden);assert.equal(await quiet(()=>window.__redcat.settings.fullscreen),true);assert.equal(await quiet(()=>window.__redcat.settings.sensitivity),1.4);assert.equal(await quiet(()=>!!document.fullscreenElement),false);
await page.locator('#open-help').click();await page.waitForFunction(()=>!!document.fullscreenElement);assert.deepEqual(report.errors,[]);report.passed='Controller applies settings without browser activation; fullscreen waits for the next real click.';console.log(report.passed);
}finally{await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));await context?.close();server.kill();console.log(output);}
