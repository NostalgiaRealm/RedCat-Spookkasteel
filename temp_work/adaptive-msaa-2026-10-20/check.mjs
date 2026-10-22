import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium} from 'playwright';
const output='temp_work/adaptive-msaa-2026-10-20';
const report={checks:[],errors:[]};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4389',TMPDIR:'temp_work'},stdio:['ignore','pipe','pipe']});
let context,log='';server.stdout.on('data',d=>log+=d);server.stderr.on('data',d=>log+=d);
await new Promise((resolve,reject)=>{server.stdout.on('data',d=>{if(String(d).includes('RedCat:'))resolve();});server.once('error',reject);server.once('exit',code=>reject(new Error(`server exited ${code}`)));});
try{
 context=await chromium.launchPersistentContext(resolve(output,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:'temp_work'},args:['--use-gl=angle','--use-angle=gl-egl','--autoplay-policy=no-user-gesture-required'],viewport:{width:800,height:600},deviceScaleFactor:1});
 await context.addInitScript(()=>{
  if(!localStorage.getItem('adaptive-test-initialized')){
   localStorage.setItem('redcat.settings.v1',JSON.stringify({renderScale:100,msaa:4,autoIntro:false,fullscreen:false,volume:0}));
   localStorage.setItem('adaptive-test-initialized','true');
  }
  const raf=window.requestAnimationFrame.bind(window);
  window.requestAnimationFrame=callback=>raf(time=>{
   if(window.__slowFrames)setTimeout(()=>callback(performance.now()),50);
   else callback(time);
  });
 });
 const page=await context.newPage();page.on('pageerror',e=>report.errors.push(String(e)));page.on('console',m=>{if(m.type()==='error')report.errors.push(m.text());});
 await page.goto('http://127.0.0.1:4389/?skipIntro');await page.waitForFunction(()=>window.__redcat?.originalMenu);
 await page.evaluate(async()=>{
  __redcat.menuAudio.say=()=>Promise.resolve(true);
  const {MsaaRenderer}=await import('/src/msaa-renderer.js');const set=MsaaRenderer.prototype.setSamples;
  window.__sampleChanges=[];MsaaRenderer.prototype.setSamples=function(samples){window.__sampleChanges.push(samples);return set.call(this,samples);};
  await __redcat.startLevel(0);__redcat.pause();
 });
 assert.equal(await page.evaluate(()=>__redcat.settings.renderScale),100);
 for(const expected of [75,50,25]){
  await page.evaluate(()=>{window.__slowFrames=true;__redcat.resume();});
  await page.waitForFunction(expected=>__redcat.settings.renderScale===expected,expected,{timeout:20000});
  await page.evaluate(()=>{__redcat.pause();window.__slowFrames=false;});
  await page.waitForFunction(expected=>document.querySelector('#game').width===800*expected/100,expected);
  const state=await page.evaluate(()=>({scale:__redcat.settings.renderScale,msaa:__redcat.settings.msaa,size:[document.querySelector('#game').width,document.querySelector('#game').height],stored:JSON.parse(localStorage.getItem('redcat.settings.v1')),calls:window.__sampleChanges,error:__redcat.world.renderer.getContext().getError()}));
  assert.equal(state.msaa,0);assert.equal(state.stored.msaa,0);assert.equal(state.stored.renderScale,expected);assert.deepEqual(state.size,[800*expected/100,600*expected/100]);assert.equal(state.error,0);assert.equal(state.calls.at(-1),0);
  await page.locator('#pause-settings').click();await page.locator('#open-advanced-settings').click();
  assert.equal(await page.locator('#render-scale').inputValue(),String(expected));assert.equal(await page.locator('#render-scale-value').textContent(),`${expected}%`);assert.equal(await page.locator('#msaa').inputValue(),'0');
  if(expected===75){await page.locator('#msaa').evaluate(el=>el.scrollIntoView({block:'end'}));await page.screenshot({path:`${output}/automatic-75-msaa-off.png`});}
  await page.locator('#apply-settings').click();
  assert.equal(await page.evaluate(()=>__redcat.settings.renderScale),expected);
  assert.equal(await page.locator('#game').getAttribute('width'),String(800*expected/100));
  report.checks.push(`${expected}%: actual buffer size, stored settings, visible slider/output, MSAA Uit, renderer update and no double reduction on OK`);
 }
 await page.evaluate(async()=>{await __redcat.startLevel(0);__redcat.pause();});
 assert.equal(await page.evaluate(()=>__redcat.settings.msaa),0);assert.equal(await page.locator('#game').getAttribute('width'),'200');
 await page.reload();await page.waitForFunction(()=>window.__redcat?.originalMenu);
 assert.equal(await page.evaluate(()=>__redcat.settings.msaa),0);assert.equal(await page.evaluate(()=>__redcat.settings.renderScale),25);
 await page.evaluate(()=>{__redcat.menuAudio.say=()=>Promise.resolve(true);});
 await page.locator('#open-settings').click();await page.locator('#open-advanced-settings').click();
 assert.equal(await page.locator('#render-scale').inputValue(),'25');assert.equal(await page.locator('#msaa').inputValue(),'0');
 await page.locator('#msaa').selectOption('4');await page.locator('#apply-settings').click();
 assert.equal(await page.evaluate(()=>__redcat.settings.msaa),4);assert.equal(await page.evaluate(()=>JSON.parse(localStorage.getItem('redcat.settings.v1')).msaa),4);
 report.checks.push('Reduced scale and MSAA Uit survive level restart and page reload; user can explicitly restore 4x');
 assert.deepEqual(report.errors,[]);report.passed=true;
}catch(error){report.failure=String(error.stack||error);throw error;}
finally{await writeFile(`${output}/report.json`,JSON.stringify(report,null,2)+'\n');await writeFile(`${output}/server.log`,log);await context?.close();server.kill();console.log(JSON.stringify(report,null,2));}
