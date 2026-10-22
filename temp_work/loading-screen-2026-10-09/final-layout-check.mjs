import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFile,writeFile,mkdir} from 'node:fs/promises';
import assert from 'node:assert/strict';
import path from 'node:path';

const scratch='temp_work/loading-screen-2026-10-09';
const out=path.resolve(scratch,'final-layout-'+Date.now());
await mkdir(out,{recursive:true});
const source=await readFile('index.html','utf8');
const markup=source.slice(source.indexOf('<div id="loading"'),source.indexOf('<div id="intro"'));
await writeFile(path.join(out,'fixture.html'),`<!doctype html><meta name="viewport" content="width=device-width, initial-scale=1"><base href="/"><link rel="stylesheet" href="src/style.css"><link rel="stylesheet" href="src/loading-screen.css">${markup}<script type="module">import {OriginalLoadingScreen} from '/src/loading-screen.js';window.loader=new OriginalLoadingScreen(document.getElementById('loading'));await loader.ready;loader.show(4);loader.setProgress(.42);window.ready=true;</script>`);
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let browser;
try {
 browser=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env});
 const page=await browser.newPage(),errors=[];
 page.on('pageerror',e=>errors.push(e.message));
 await page.goto(base+'/'+path.relative(process.cwd(),path.join(out,'fixture.html')));
 await page.waitForFunction(()=>window.ready);
 const report=[];
 for(const [width,height] of [[1280,960],[1920,1080],[844,390],[390,844],[320,568]]){
  await page.setViewportSize({width,height});
  const rects=await page.evaluate(()=>Object.fromEntries(['.loading-logo','#loading-title','#loading-mode','#loading-picture','#loading-detail','.loading-progress'].map(selector=>{
   const e=document.querySelector(selector),r=e.getBoundingClientRect();return [selector,{x:r.x,y:r.y,right:r.right,bottom:r.bottom,scroll:e.scrollWidth,client:e.clientWidth}];
  })));
  for(const r of Object.values(rects)){assert.ok(r.x>=0&&r.y>=0&&r.right<=width+1&&r.bottom<=height+1);assert.ok(r.scroll<=r.client+1);}
  assert.equal(rects['.loading-logo'].x,width>height?0:8);
  assert.ok(rects['#loading-title'].bottom<rects['#loading-mode'].y);
  assert.ok(rects['#loading-mode'].bottom<rects['#loading-picture'].y);
  assert.ok(rects['#loading-picture'].bottom<rects['#loading-detail'].y);
  assert.ok(rects['#loading-detail'].bottom<rects['.loading-progress'].y);
  await page.screenshot({path:path.join(out,`layout-${width}x${height}.png`)});
  report.push({width,height,rects});
 }
 assert.deepEqual(errors,[]);
 await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');
 console.log('PASS: final logo placement and five responsive layouts.\n'+out);
}finally{await browser?.close();server.kill();}
