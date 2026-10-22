import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const output=path.resolve('temp_work/distant-work-2026-10-19/actor-loading-view');
process.env.TMPDIR='temp_work/distant-work-2026-10-19/scratch';await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const report={errors:[]};let context;
try {
 const url=await new Promise(resolve=>server.stdout.once('data',data=>resolve(String(data).trim().split(' ').at(-1))));
 context=await chromium.launchPersistentContext(output+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage();page.on('pageerror',e=>report.errors.push(e.stack));page.on('console',m=>{if(m.type()==='error')report.errors.push(m.text());});
 await page.addInitScript(()=>{localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on'}));});
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 report.before=await page.evaluate(async()=>{
  const app=window.__redcat;await app.startLevel(0);app.pause();const w=app.world,g=app.gameplay,h=g.scripts;
  for(const p of h.players.values())p.stop();h.camera=null;h.cutscene=false;h.pendingCutsceneStop=null;
  w.updateCamera=()=>{};w.camera.position.set(2396,-36,-1045);w.camera.lookAt(2396,-156,-1495);await w.geometryStream.settle();
  const stream=w.actorTextures,entry=stream.entries.get('assets/actors/textures/brutusm-0.png');if(entry.promise)throw new Error('Brutus texture was requested before approaching');
  const original=stream.load;let release;const gate=new Promise(resolve=>release=resolve);
  stream.load=async url=>{if(url===entry.url)await gate;return original(url);};window.releaseActorLoad=()=>{stream.load=original;release();};
  w.updateRenderResidency();w.render();app.resume();
  return {time:g.time,recovery:app.recovery.clock,placeholderWidth:entry.texture.image.width,ready:w.actorResidency.readyForView};
 });
 assert.equal(report.before.ready,false);assert.equal(report.before.placeholderWidth,1);
 await page.waitForFunction(()=>window.__redcat.audio.paused&&!document.getElementById('loading').hidden,null,{timeout:10000});
 report.held=await page.evaluate(()=>({time:window.__redcat.gameplay.time,recovery:window.__redcat.recovery.clock,paused:window.__redcat.audio.paused}));
 await page.waitForTimeout(500);
 report.later=await page.evaluate(()=>({time:window.__redcat.gameplay.time,recovery:window.__redcat.recovery.clock,paused:window.__redcat.audio.paused}));
 assert.equal(report.held.time,report.before.time);assert.equal(report.held.recovery,report.before.recovery);assert.deepEqual(report.later,report.held);
 await page.evaluate(()=>window.releaseActorLoad());
 await page.waitForFunction(time=>window.__redcat.gameplay.time>time&&!window.__redcat.audio.paused&&document.getElementById('loading').hidden,report.held.time,{timeout:15000});
 report.resumed=await page.evaluate(()=>{const app=window.__redcat,w=app.world;app.pause();return {time:app.gameplay.time,recovery:app.recovery.clock,ready:w.actorResidency.readyForView,width:w.actorTextures.entries.get('assets/actors/textures/brutusm-0.png').texture.image.width,gpuError:w.renderer.getContext().getError()};});
 assert.ok(report.resumed.width>1);assert.equal(report.resumed.ready,true);assert.equal(report.resumed.gpuError,0);
 // Evict/reload the same stable handle while paused. The paused redraw path
 // must finish the view without advancing gameplay or displaying a placeholder.
 report.paused=await page.evaluate(()=>{
  const w=window.__redcat.world,s=w.actorTextures,e=s.entries.get('assets/actors/textures/brutusm-0.png');e.lastWanted=-1000;s.nextRelease=0;s.trim();
  w.updateRenderResidency();return {time:window.__redcat.gameplay.time,requested:!!e.promise,ready:w.actorResidency.readyForView};
 });
 assert.equal(report.paused.ready,false);
 await page.waitForFunction(()=>window.__redcat.world.actorResidency.readyForView&&window.__redcat.world.actorTextures.entries.get('assets/actors/textures/brutusm-0.png').ready,null,{timeout:15000});
 report.pausedCompleted=await page.evaluate(()=>({time:window.__redcat.gameplay.time,gpuError:window.__redcat.world.renderer.getContext().getError(),mode:window.__redcat.mode}));
 assert.equal(report.pausedCompleted.time,report.paused.time);assert.equal(report.pausedCompleted.gpuError,0);assert.equal(report.pausedCompleted.mode,'paused');assert.deepEqual(report.errors,[]);
 await page.screenshot({path:output+'/complete.png'});console.log(JSON.stringify(report,null,2));
} finally {await writeFile(output+'/report.json',JSON.stringify(report,null,2)+'\n');await context?.close();server.kill();}
