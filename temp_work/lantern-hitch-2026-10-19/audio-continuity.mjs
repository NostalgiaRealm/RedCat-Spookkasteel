import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import {createHash} from 'node:crypto';
import path from 'node:path';
import assert from 'node:assert/strict';

const base=path.resolve('temp_work/lantern-hitch-2026-10-19');
const output=path.join(base,`audio-continuity-${Date.now()}`);
process.env.TMPDIR='temp_work/lantern-hitch-2026-10-19/scratch';
await mkdir(output,{recursive:true});await mkdir(process.env.TMPDIR,{recursive:true});
const report={output,method:'Focused real main-loop source/browser fault injection. Isolated retained headless Chrome profile; Level 1 startup, quiet settled background queue; real WebAudio music with output muted. Captures the actual animation-frame callback and advances it on real wall-clock intervals. No source edits, user profile writes, campaign traversal, historical tests, builds or CPU benchmark.',errors:[],warnings:[],cases:[]};
report.sourceHashes={};
for(const name of ['main.js','world.js','world-streaming.js','room-visibility.js','actor-render-residency.js','actor-texture-stream.js','audio.js'])report.sourceHashes['src/'+name]=createHash('sha256').update(await readFile('src/'+name)).digest('hex');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
let browser;
try{
 const url=await new Promise((resolve,reject)=>{server.stdout.once('data',data=>resolve(String(data).trim().split(' ').at(-1)));server.once('error',reject);});
 browser=await chromium.launchPersistentContext(path.join(output,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required','--mute-audio']});
 const page=await browser.newPage();page.on('pageerror',error=>report.errors.push(error.stack));
 page.on('console',message=>{if(message.type()==='error')report.errors.push(message.text());else if(message.type()==='warning')report.warnings.push(message.text());});
 page.on('response',response=>{if(response.status()>=400)report.errors.push(`${response.status()} ${response.url()}`);});
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:.1,touchControls:'on',resolution:'960x540'}));
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  const original=requestAnimationFrame;let token=0;
  window.requestAnimationFrame=callback=>{if(callback.name==='frame'){window.__audioTestFrame=callback;return ++token;}return original(callback);};
 });
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat&&window.__audioTestFrame);
 report.setup=await page.evaluate(async()=>{
  const app=window.__redcat;if(!await app.startLevel(0))throw Error('Level 1 failed to load');app.pause();
  const world=app.world,game=app.gameplay;
  for(const player of game.scripts.players.values())player.stop();
  game.scripts.cutscene=false;game.scripts.camera=null;game.scripts.pendingCutsceneStop=null;
  world.updateCamera(1,true);world.syncModels();world.syncActors(0);
  await world.geometryStream.settle();await world.settleActorTextures();world.effects.update(0);world.render();
  await world.streamingWork.waitFor(Promise.all([...world.streamingGpu.pending]));
  await world.geometryStream.settle();await world.settleActorTextures();
  app.resume();await app.audio.context?.resume();
  window.__audioProbe={app,world,game,originalUpdate:world.updateRenderResidency,pause:app.audio.pause,resume:app.audio.resume,calls:[]};
  const probe=window.__audioProbe;
  app.audio.pause=function(){probe.calls.push({method:'pause',at:performance.now(),mode:app.mode});return probe.pause.call(this);};
  app.audio.resume=function(){probe.calls.push({method:'resume',at:performance.now(),mode:app.mode});return probe.resume.call(this);};
  return {world:world.id,mode:app.mode,room:world.geometryStream.rooms.stats,queuePending:world.streamingWork.jobs.length,ready:{world:world.geometryStream.readyForView,actors:world.actorResidency.readyForView,textures:world.actorTextures.readyForView},audioContext:app.audio.context.state};
 });
 await page.waitForFunction(()=>[...window.__redcat.audio.sounds].some(record=>record.channel==='music'&&record.element.nativeBuffered&&record.element.source));
 report.cases=await page.evaluate(async()=>{
  const p=window.__audioProbe,{app,world,game}=p,stream=world.geometryStream;
  const delay=ms=>new Promise(resolve=>setTimeout(resolve,ms));
  const music=[...app.audio.sounds].find(record=>record.channel==='music'&&record.element.nativeBuffered&&record.element.source);
  p.music=music;
  const snap=()=>({mode:app.mode,paused:app.audio.paused,context:app.audio.context.state,gameTime:game.time,audioTime:music.element.currentTime,sourcePresent:!!music.element.source,overlay:!document.getElementById('loading').hidden,queuePending:world.streamingWork.jobs.length,calls:p.calls.map(call=>({...call}))});
  const frame=()=>window.__audioTestFrame(performance.now());
  const force=()=>{stream.readyForView=false;world.updateRenderResidency=function(){stream.readyForView=false;};};
  const clear=()=>{world.updateRenderResidency=p.originalUpdate;world.updateRenderResidency();};
  const assert=(condition,message)=>{if(!condition)throw Error(message);};
  const results=[];

  p.calls=[];const source=music.element.source,shortBefore=snap();force();frame();
  for(let i=0;i<5;i++){await delay(25);frame();}
  const shortDuring=snap();clear();frame();await delay(15);const shortAfter=snap();
  assert(shortDuring.gameTime===shortBefore.gameTime,'Short wait advanced gameplay');
  assert(shortDuring.audioTime>shortBefore.audioTime+.05,'Short wait failed to advance audio');
  assert(music.element.source===source,'Short wait recreated music source');
  assert(p.calls.length===0,'Short wait called pause or resume');
  assert(!shortDuring.overlay&&!shortAfter.overlay,'Short wait displayed loading overlay');
  results.push({name:'short-wait-125ms',before:shortBefore,during:shortDuring,after:shortAfter,sourceIdentityPreserved:true,passed:true});

  p.calls=[];const longBefore=snap();force();frame();
  for(let i=0;i<14;i++){await delay(25);frame();}
  const longDuring=snap();
  assert(longDuring.gameTime===longBefore.gameTime,'Long wait advanced gameplay');
  assert(longDuring.overlay&&longDuring.paused,'Long wait did not hold audio with overlay');
  assert(p.calls.filter(call=>call.method==='pause').length===1,'Long wait repeated/missed audio pause');
  assert(p.calls.filter(call=>call.method==='resume').length===0,'Long wait resumed before ready');
  clear();frame();await delay(25);const longAfter=snap();
  assert(p.calls.filter(call=>call.method==='pause').length===1&&p.calls.filter(call=>call.method==='resume').length===1,'Long wait did not own exactly one pause/resume');
  assert(!longAfter.overlay&&!longAfter.paused&&longAfter.sourcePresent,'Long wait failed to resume');
  results.push({name:'long-wait-350ms',before:longBefore,during:longDuring,after:longAfter,passed:true});

  p.calls=[];force();frame();await delay(25);frame();app.pause();const userPaused=snap();
  clear();frame();await delay(25);frame();const stillPaused=snap();
  assert(stillPaused.mode==='paused'&&stillPaused.paused,'Readiness unpaused user pause');
  assert(p.calls.filter(call=>call.method==='pause').length===1&&p.calls.filter(call=>call.method==='resume').length===0,'Gate resumed user-owned pause');
  app.resume();await delay(25);const explicitResume=snap();
  assert(explicitResume.mode==='playing'&&!explicitResume.paused&&explicitResume.sourcePresent,'Explicit resume failed');
  results.push({name:'explicit-user-pause-during-short-wait',userPaused,stillPaused,explicitResume,passed:true});

  p.calls=[];const errorBefore=snap();stream.error=new Error('Intentional audio continuity fault: asset load failure');frame();
  const errorDuring=snap();stream.error=null;await delay(25);frame();const errorAfter=snap();
  assert(errorAfter.mode==='error'&&errorAfter.paused,'Asset error failed to remain paused');
  assert(!document.getElementById('fatal').hidden,'Asset error failed to display error screen');
  assert(p.calls.filter(call=>call.method==='pause').length===1&&p.calls.filter(call=>call.method==='resume').length===0,'Asset error auto-resumed/repeated pause');
  results.push({name:'asset-error-final-case',before:errorBefore,during:errorDuring,after:errorAfter,errorMessage:document.getElementById('fatal-message').textContent,passed:true});
  return results;
 });
 report.expectedErrors=report.errors.filter(text=>text.includes('Intentional audio continuity fault: asset load failure'));
 report.unexpectedErrors=report.errors.filter(text=>!text.includes('Intentional audio continuity fault: asset load failure'));
 assert.equal(report.cases.length,4);assert.ok(report.cases.every(item=>item.passed));assert.deepEqual(report.unexpectedErrors,[]);assert.equal(report.expectedErrors.length,1);assert.equal(report.setup.queuePending,0);
 report.passed=true;console.log(JSON.stringify({output,setup:report.setup,cases:report.cases,expectedErrors:report.expectedErrors,unexpectedErrors:report.unexpectedErrors,passed:true},null,2));
}finally{await writeFile(path.join(output,'report.json'),JSON.stringify(report,null,2)+'\n');await browser?.close();server.kill();}
