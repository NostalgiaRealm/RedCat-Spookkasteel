import {chromium} from 'playwright';import {spawn} from 'node:child_process';import {writeFile,mkdir} from 'node:fs/promises';import assert from 'node:assert/strict';import path from 'node:path';
const out=path.resolve('temp_work/cpu-low-end-2026-10-18/hud-browser');await mkdir(out,{recursive:true});
process.env.TMPDIR='temp_work/cpu-low-end-2026-10-18/scratch';await mkdir(process.env.TMPDIR,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});let context;const result={cases:[],errors:[]};
try{
 const url=await new Promise(r=>server.stdout.once('data',d=>r(String(d).trim().split(' ').at(-1))));
 context=await chromium.launchPersistentContext(out+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:1280,height:720},env:{...process.env,TMPDIR:process.env.TMPDIR},args:['--use-angle=gl']});
 const page=await context.newPage();page.on('pageerror',e=>result.errors.push(e.stack));
 await page.route(url+'/',r=>r.fulfill({contentType:'text/html',body:'<!doctype html><html><body style="margin:0;background:#102030"><canvas id="before" style="position:absolute;inset:0;width:100%;height:100%"></canvas><canvas id="after" style="position:absolute;inset:0;width:100%;height:100%"></canvas></body></html>'}));
 await page.goto(url+'/');
 await page.evaluate(async()=>{
  const [{OriginalHud:Before},{OriginalHud:After}]=await Promise.all([import('/temp_work/cpu-low-end-2026-10-18/before/src/hud.js'),import('/src/hud.js')]);
  window.huds=[new Before(document.getElementById('before')),new After(document.getElementById('after'))];await Promise.all(huds.map(h=>h.ready));
  window.state={health:7,maxHealth:10,lives:3,potions:4,score:1230};window.enemy={kind:'enemy',enemyType:'bat',variant:2,health:2.5,maxHealth:6};
 });
 for(const viewport of [{width:1280,height:720},{width:390,height:844},{width:844,height:390}]) {
  await page.setViewportSize(viewport);
  const row=await page.evaluate(async size=>{
   const draws=[0,0],clears=[0,0];
   huds.forEach((h,i)=>{const draw=h.context.drawImage,clear=h.context.clearRect;h.context.drawImage=function(...a){draws[i]++;return draw.apply(this,a);};h.context.clearRect=function(...a){clears[i]++;return clear.apply(this,a);};});
   const records=[];const render=()=>huds.forEach(h=>h.render(state,40,enemy,size.width,size.height,{bottomInset:size.height>size.width?200:0}));
   const hash=async h=>Array.from(new Uint8Array(await crypto.subtle.digest('SHA-256',h.context.getImageData(0,0,h.canvas.width,h.canvas.height).data))).map(b=>b.toString(16).padStart(2,'0')).join('');
   for(let i=0;i<12;i++) {
    state.health=10-(i%7)*.5;state.score=1230+i*25;state.potions=i;enemy.health=i%5*.5;enemy.variant=i%3+1;
    render();const hashes=await Promise.all(huds.map(hash));records.push({hashes,equal:hashes[0]===hashes[1]});
   }
   const priorDraws=[...draws],priorClears=[...clears],timings=[];
   for(let which=0;which<2;which++) {
    const samples=[],h=huds[which];for(let block=0;block<10;block++) {const t=performance.now();for(let i=0;i<60;i++)h.render(state,40,enemy,size.width,size.height,{bottomInset:size.height>size.width?200:0});samples.push((performance.now()-t)/60);await new Promise(r=>setTimeout(r,0));}
    timings.push({mean:samples.reduce((s,x)=>s+x,0)/samples.length,samples});
   }
   return {viewport:size,records,timings,unchangedDraws:draws.map((v,i)=>v-priorDraws[i]),unchangedClears:clears.map((v,i)=>v-priorClears[i])};
  },viewport);
  assert.ok(row.records.every(r=>r.equal));assert.equal(row.unchangedDraws[1],0);assert.equal(row.unchangedClears[1],0);result.cases.push(row);
  await page.screenshot({path:out+`/${viewport.width}x${viewport.height}.png`});
 }
 assert.deepEqual(result.errors,[]);console.log(JSON.stringify(result.cases.map(r=>({viewport:r.viewport,unchangedDraws:r.unchangedDraws,meanRenderMs:r.timings.map(t=>t.mean),identicalImages:r.records.length}))));
}finally{await writeFile(out+'/report.json',JSON.stringify(result,null,2)+'\n');await context?.close();server.kill();}
