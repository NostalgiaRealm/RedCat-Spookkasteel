import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const port=process.env.EFFECT_PORT||'4290',label=process.env.EFFECT_REPORT||'native';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
 await mkdir('artifacts',{recursive:true});
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
 await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>{
  window.__effectsFixture={
   input:{forward:0,right:0,turn:0,jump:false,attack:false,use:false},
   async start(level){
    const app=window.__redcat;await app.startLevel(level);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    for(const o of g.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;
    w.updateCamera=()=>{};w.player.noClip=true;
    return {w,g,h};
   },
  };
 });
 await page.evaluate(async()=>{
  const f=window.__effectsFixture,{w,g,h}=await f.start(4),o=g.find('telepfx01')[0];
  w.player.position=[365,-3351,600];w.player.update=()=>{};w.camera.position.set(185,-3225,435);w.camera.lookAt(365,-3310,600);
  const events=[],onEvent=g.onEvent;g.onEvent=e=>{if(e.type==='scriptSound'||e.type==='scriptVolume')events.push({at:o.teleportEffectAge,...e});onEvent(e);};
  Object.assign(f,{w,g,h,o,events});w.effects.update(0);
  g.command(g.find('telepoort01')[0],'enable');
 });
 const portal=[];
 for(const time of [.5,2,4,6.85,7.3]){
  portal.push(await page.evaluate(time=>{
   const f=window.__effectsFixture,{w,g,o}=f;
   while((o.teleportEffectAge??0)<time&&(!Number.isFinite(o.teleportEffectAge)||o.teleportEffectAge<7.25)){
    const prior=o.teleportEffectAge;w.update(1/60,f.input);if(o.teleportEffectAge===prior&&prior>=7)break;
   }
   w.render();const state=w.effects.entries.get(o.id),geometry=state.teleporterGeometry;
   return {time,age:o.teleportEffectAge,active:geometry.active,sparks:geometry.sparks.length,rays:geometry.rays,discs:geometry.discs,light:geometry.light,
    draws:w.renderer.info.render.calls,programs:w.renderer.info.programs.length,scriptError:g.scripts.vm.lastError};
  },time));
  await page.screenshot({path:`artifacts/portal-${label}-${time}.png`});
 }
 const sounds=await page.evaluate(()=>window.__effectsFixture.events);
 assert.ok(portal[0].age>0,'authored tower motion starts Show');assert.ok(portal.some(p=>p.rays.length===5));assert.equal(portal.at(-1).active,false);
 assert.ok(portal.every(p=>p.scriptError===null));
 await page.evaluate(async()=>{
  const f=window.__effectsFixture,{w,g,h}=await f.start(2),cover=g.find('graf4_deksel')[0];
  w.player.position=[2604,-63.95,220];w.camera.position.set(2440,85,550);w.camera.lookAt(2246,-70,201);
  Object.assign(f,{w,g,h,cover});g.switchButton(g.find('dknopa')[0]);
 });
 const debris=[];
 for(const time of [.2,.8,1.5,3,4.5,6,8]){
  debris.push(await page.evaluate(time=>{
   const f=window.__effectsFixture,{w,g,cover}=f;let maxUpdate=0;
   while(g.time<time){const t=performance.now();w.update(1/60,f.input);maxUpdate=Math.max(maxUpdate,performance.now()-t);}
   w.render();const particles=w.effects.destructibles.particles;
   return {time,coverHealth:cover.health,count:particles.length,maxUpdate,positions:particles.map(p=>p.position),opacity:particles.map(p=>p.materials[0].opacity),lifetimes:particles.map(p=>({age:p.age,life:p.life,contacts:p.contacts,settled:p.settled})),draws:w.renderer.info.render.calls,scriptError:g.scripts.vm.lastError};
  },time));
  if([1.5,3,4.5].includes(time))await page.screenshot({path:`artifacts/debris-${label}-${time}.png`});
 }
 assert.ok(debris.some(frame=>frame.coverHealth===0&&frame.count>0),'original grave script creates debris');assert.equal(debris.at(-1).count,0,'expired fragments retire');
 assert.ok(debris.every(frame=>frame.positions.flat().every(Number.isFinite)));assert.ok(debris.every(frame=>frame.scriptError===null));assert.deepEqual(errors,[]);
 await writeFile(`artifacts/portal-debris-${label}.json`,JSON.stringify({portal,sounds,debris,errors},null,2)+'\n');
 console.log(JSON.stringify({portal:portal.map(({rays,discs,...p})=>({...p,rays:rays.length,discs:discs.length})),debris:debris.map(({positions,opacity,...p})=>p),errors},null,2));
}finally{await browser?.close();server.kill();}
