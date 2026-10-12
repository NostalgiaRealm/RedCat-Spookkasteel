import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`temp_work/loading-screen-2026-10-09/check-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context,held=null,holdNext=false;
const report={levels:[],layouts:[],errors:[]};
try {
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,viewport:{width:1280,height:960},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0}));
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
 });
 await page.route('**/data/levels/*/level.json',async route=>{
  if(holdNext){holdNext=false;held=route;}else await route.continue();
 });
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>{__redcat.playerMenu.audio.say=async()=>true;});
 const names=['Het Bos','Het Kasteel','Het Kerkhof','De Grotten','De Kasteeltoren'];
 for(let i=0;i<5;i++){
  holdNext=true;held=null;
  await page.evaluate(index=>{window.loadingRun=__redcat.startLevel(index);},i);
  await page.waitForFunction(()=>!document.getElementById('loading').hidden&&document.querySelector('.loading-progress').getAttribute('aria-valuenow')==='5');
  while(!held)await new Promise(resolve=>setTimeout(resolve,20));
  await page.locator('#loading-picture').evaluate(async img=>{await img.decode();});
  assert.equal(await page.locator('#loading-title').textContent(),'Even Wachten');
  assert.equal(await page.locator('#loading-mode').textContent(),'Avontuur');
  assert.equal(await page.locator('#loading-detail').textContent(),'Bezig met het laden van '+names[i]);
  assert.equal(await page.locator('#loading-picture').getAttribute('src'),`assets/loading/level${i+1}.png`);
  assert.equal(await page.locator('#loading .spinner').count(),0);
  await page.screenshot({path:path.join(out,`level${i+1}.png`)});
  if(i===0||i===4)for(const [width,height]of [[1280,960],[1920,1080],[844,390],[390,844],[320,568]]){
   await page.setViewportSize({width,height});
   const layout=await page.evaluate(()=>{
    const ids=['loading-title','loading-mode','loading-picture','loading-detail'];
    const rects=Object.fromEntries(ids.map(id=>{const e=document.getElementById(id),r=e.getBoundingClientRect();return [id,{x:r.x,y:r.y,width:r.width,height:r.height,bottom:r.bottom,right:r.right,scroll:e.scrollWidth,client:e.clientWidth}];}));
    const progress=document.querySelector('.loading-progress').getBoundingClientRect();
    return {width:innerWidth,height:innerHeight,rects,progress:{y:progress.y,bottom:progress.bottom}};
   });
   for(const r of Object.values(layout.rects)){
    assert.ok(r.x>=-1&&r.y>=0&&r.right<=width+1&&r.bottom<=height+1,JSON.stringify(layout));
    assert.ok(r.scroll<=r.client+1,JSON.stringify(layout));
   }
   const r=layout.rects;
   assert.ok(r['loading-title'].bottom<r['loading-mode'].y,JSON.stringify(layout));
   assert.ok(r['loading-mode'].bottom<r['loading-picture'].y,JSON.stringify(layout));
   assert.ok(r['loading-picture'].bottom<r['loading-detail'].y,JSON.stringify(layout));
   assert.ok(r['loading-detail'].bottom<layout.progress.y,JSON.stringify(layout));
   if(width===1280&&height===960){assert.equal(r['loading-picture'].x,384);assert.ok(Math.abs(r['loading-picture'].y-188)<.1);assert.equal(r['loading-picture'].width,512);}
   report.layouts.push({level:i,...layout});
   await page.screenshot({path:path.join(out,`level${i+1}-${width}x${height}.png`)});
  }
  await page.setViewportSize({width:1280,height:960});
  await held.continue();held=null;
  const loaded=await page.evaluate(async()=>{const result=await window.loadingRun;__redcat.pause();return {result,mode:__redcat.mode,hidden:document.getElementById('loading').hidden};});
  assert.equal(loaded.result,true);assert.equal(loaded.hidden,true);assert.equal(loaded.mode,'paused');
  report.levels.push({name:names[i],...loaded});
 }
 // The same screen handles a delayed streamed view, but never advances play.
 await page.evaluate(()=>{
  const stream=__redcat.world.geometryStream;
  window.restoreLoadingStream=stream.update.bind(stream);stream.update=()=>{};stream.readyForView=false;
  __redcat.resume();
 });
 await page.waitForFunction(()=>!document.getElementById('loading').hidden&&document.querySelector('.loading-progress').classList.contains('indeterminate'));
 assert.equal(await page.locator('#loading-detail').textContent(),'Bezig met het laden van De Kasteeltoren');
 assert.equal(await page.locator('.loading-progress').getAttribute('aria-valuenow'),null);
 await page.evaluate(()=>{const stream=__redcat.world.geometryStream;stream.update=window.restoreLoadingStream;stream.readyForView=true;});
 await page.waitForFunction(()=>document.getElementById('loading').hidden);
 await page.evaluate(()=>__redcat.pause());report.streaming='passed';
 // Failed level requests must reveal the error screen, not leave loading up.
 holdNext=true;held=null;
 await page.evaluate(()=>{window.loadingRun=__redcat.startLevel(0);});
 while(!held)await new Promise(resolve=>setTimeout(resolve,20));
 await held.fulfill({status:503,contentType:'application/json',body:'{}'});held=null;
 await page.evaluate(()=>window.loadingRun);
 assert.equal(await page.locator('#loading').isVisible(),false);assert.equal(await page.locator('#fatal').isVisible(),true);
 report.failedLoad='passed';
 assert.deepEqual(report.errors,[]);
 console.log('PASS: five native loading screens, ten responsive layouts, stream wait and error dismissal.\n'+out);
} finally {
 await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');
 await held?.abort();await context?.close();server.kill();
}
