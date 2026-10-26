import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve('temp_work/water-contact-2026-10-11/scenes-'+Date.now());
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'};
const savePath=process.env.REDCAT_WATER_SAVE;
const save=savePath?JSON.parse(await readFile(savePath,'utf8')):null;
const transitionsOnly=process.argv.includes('--transitions-only');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
const report={cases:[],errors:[],badResponses:[]};
try{
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage();page.on('pageerror',e=>report.errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)report.badResponses.push(r.url());});
 await page.addInitScript(save=>{
  if(save)localStorage.setItem('redcat.save.v1',JSON.stringify(save));
  localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:.6,autoIntro:false}));
 },save);
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(async hasSave=>{
  const a=__redcat;a.playerMenu.audio.say=async()=>true;
  if(hasSave)await a.loadSave();else await a.startLevel(0);
  a.pause();document.getElementById('pause').hidden=true;
  for(const p of a.gameplay.scripts.players.values())p.stop();
  a.gameplay.scripts.cutscene=false;a.gameplay.scripts.enemiesFrozen=true;a.gameplay.scripts.camera=null;
 },!!save);
 assert.equal(await page.evaluate(()=>__redcat.world.id),'lvl00a');
 for(const fixture of transitionsOnly?[]:[
  {name:'saved-moat',position:[-1810,-164.95,1190],yaw:Math.PI,water:true},
  {name:'second-forest-pool',position:[-1220,-183.95,1460],yaw:-Math.PI/2,water:true},
  {name:'dry-bank',position:[-1710,-136.95,1190],yaw:Math.PI,water:false},
 ]){
  const result=await page.evaluate(async f=>{
   const a=__redcat,w=a.world,g=a.gameplay,{GameplayAudio}=await import('./source/gameplay-audio.js');
   const router=new GameplayAudio(a.audio),input={forward:1};
   a.audio.reset();a.audio.pause();g.state.health=10;g.footstepState={phase:0,side:0};
   w.player.position=[...f.position];w.player.grounded=true;w.player.noClip=false;w.player.resetVelocity();w.player.movementRecovery.reset();w.yaw=f.yaw;
   const contacts=[];
   for(let i=0;i<60;i++){w.update(1/60,input);router.update(1/60,w,g,input);contacts.push(g.playerContactContents(w.player.position));}
   w.updateCamera(1,true);w.syncActors(0);await w.geometryStream.settle();w.updateRenderResidency();w.render();
   const steps=[...a.audio.sounds].filter(s=>s.group==='player:step');
   window.waterCheckSteps=steps;
   return {name:f.name,position:[...w.player.position],grounded:w.player.grounded,contents:[...new Set(contacts)],sounds:steps.map(s=>s.name)};
  },fixture);
  if(fixture.water)assert.deepEqual(result.sounds,['rclwater.wav','rcrwater.wav'],JSON.stringify(result));
  else assert.deepEqual(result.sounds,['rcwalk1.wav','rcwalk2.wav'],JSON.stringify(result));
  await page.waitForFunction(()=>waterCheckSteps.length&&waterCheckSteps.every(s=>s.element.readyState>=2));
  result.decoded=await page.evaluate(()=>waterCheckSteps.map(s=>({name:s.name,duration:s.element.duration,volume:s.element.volume})));
  for(const audio of result.decoded){assert.ok(audio.duration>0);assert.ok(audio.volume>0);}
  if(fixture.water){assert.ok(result.decoded[0].duration>.71);assert.ok(result.decoded[1].duration>.77);}
  await page.screenshot({path:path.join(out,fixture.name+'.png')});
  report.cases.push(result);
 }
 const transitions=await page.evaluate(()=>{
  const a=__redcat,w=a.world,g=a.gameplay,events=[],old=g.onEvent;
  g.onEvent=e=>{if(e.type==='jump'||e.type==='land')events.push(e);old(e);};
  try {
   a.audio.reset();a.audio.pause();g.state.health=10;
   w.player.position=[-1810,-164.95,1250];w.player.grounded=true;w.player.noClip=false;
   w.player.resetVelocity();w.player.movementRecovery.reset();w.player.previousJump=false;
   w.update(1/60,{jump:true});
   for(let i=0;i<60;i++)w.update(1/60,{});
   const sounds=[...a.audio.sounds].filter(s=>s.key==='player:jump'||s.group==='player:land');
   window.waterContactSounds=sounds;
   return {name:'water-jump-and-landing',events,sounds:sounds.map(s=>({name:s.name,key:s.key,group:s.group,gain:s.volume})),position:[...w.player.position],grounded:w.player.grounded};
  } finally {g.onEvent=old;}
 });
 assert.deepEqual(transitions.events.map(e=>e.type),['jump','land']);
 assert.deepEqual(transitions.sounds.map(s=>s.name),['rcwalk1.wav','rcwalk1.wav']);
 assert.ok(transitions.sounds[1].gain>.46&&transitions.sounds[1].gain<.57);
 assert.equal(transitions.grounded,true);
 await page.waitForFunction(()=>waterContactSounds.every(s=>s.element.readyState>=2));
 transitions.decoded=await page.evaluate(()=>waterContactSounds.map(s=>({duration:s.element.duration,volume:s.element.volume})));
 assert.ok(transitions.decoded.every(s=>s.duration>.079&&s.volume>0));
 report.cases.push(transitions);
 assert.deepEqual(report.errors,[]);assert.deepEqual(report.badResponses,[]);
 console.log('PASS: '+(transitionsOnly?'':'both forest pool splashes and dry-bank footsteps; ')+'real water jump/landing events and decoded contact audio.\n'+out);
}finally{
 await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');
 await context?.close();server.kill();
}
