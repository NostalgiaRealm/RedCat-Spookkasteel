import {chromium} from 'playwright';import {spawn} from 'node:child_process';import {mkdir,readFile,writeFile,access} from 'node:fs/promises';import path from 'node:path';import assert from 'node:assert/strict';
const root='temp_work/cpu-browser-followup-2026-10-18';await mkdir(root+'/scratch',{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});let browser;const report={runs:[],errors:[]};
try{
 const url=await new Promise(resolve=>server.stdout.once('data',d=>resolve(String(d).trim().split(' ').at(-1))));
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:root+'/scratch'},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 for(const before of [true,false]){
  const context=await browser.newContext({viewport:{width:800,height:600}}),page=await context.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
  if(before)await context.route('**/src/**',async route=>{
   const pathname=new URL(route.request().url()).pathname;if(!pathname.endsWith('.js'))return route.continue();
   const file=path.resolve(root+'/before',pathname.slice(1));try{await access(file);await route.fulfill({status:200,contentType:'text/javascript',body:await readFile(file)});}catch{await route.continue();}
  });
  await page.addInitScript(()=>{
   localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'800x600'}));
   localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);await page.evaluate(()=>window.__redcat.startLevel(0));
  await page.evaluate(async()=>{const app=window.__redcat;app.pause();await app.world.geometryStream.settle();window.calls={render:0,poll:0};const renderer=app.world.renderer,draw=renderer.render;renderer.render=function(...args){window.calls.render++;return draw.apply(this,args);};const poll=app.gamepad.poll;app.gamepad.poll=function(...args){window.calls.poll++;return poll.apply(this,args);};});
  await page.waitForTimeout(750);const paused=await page.evaluate(()=>({...window.calls,mode:window.__redcat.mode}));
  assert.equal(paused.mode,'paused');assert.ok(paused.poll>10);if(before)assert.ok(paused.render>10);else assert.ok(paused.render<=1);
  await page.evaluate(()=>{window.calls.render=0;window.__redcat.settings.renderScale=75;window.__redcat.resize();});await page.waitForTimeout(250);
  const resized=await page.evaluate(()=>({...window.calls,size:[document.getElementById('game').width,document.getElementById('game').height]}));assert.deepEqual(resized.size,[600,450]);if(!before)assert.equal(resized.render,1);
  await page.evaluate(()=>{window.calls.render=0;window.__redcat.resume();});await page.waitForTimeout(250);const resumed=await page.evaluate(()=>({...window.calls,mode:window.__redcat.mode}));assert.ok(resumed.render>1);
  report.runs.push({before,paused,resized,resumed});
  if(!before){
   await page.evaluate(()=>window.__redcat.startLevel(3));
   const hits=await page.evaluate(()=>{
    const app=window.__redcat,w=app.world,g=app.gameplay;app.pause();
    const object=g.objects.find(o=>o.kind==='enemy'&&o.enemyType==='maxd');object.enabled=object.visible=true;object.health=100;object.boss.hidden=false;object.yaw=0;object.position=[...object.boss.home];
    w.syncActors(0);w.collider.actors=w.collider.actors.filter(record=>record.id===object.id);const [x,y,z]=object.boss.home;
    return [30,48,60,78].map(height=>{const hit=w.collider.trace([x,y+height,z+120],[x,y+height,z-30],[0,0,0],[0,0,0],[],{mask:'canBeShot',ignoreId:'redcat'});return {height,actor:hit.actorId,expected:object.id,fraction:hit.fraction};});
   });for(const hit of hits){assert.equal(hit.actor,hit.expected);assert.ok(hit.fraction<1);}report.turretHits=hits;
  }
  await context.close();
 }
 assert.deepEqual(report.errors,[]);console.log(report);
}finally{await writeFile(root+'/paused-frame-check.json',JSON.stringify(report,null,2)+'\n');await browser?.close();server.kill();}
