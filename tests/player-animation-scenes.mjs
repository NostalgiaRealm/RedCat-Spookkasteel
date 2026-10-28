import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

import {sceneOutput} from './support/scene-output.mjs';
const out=path.resolve(sceneOutput(`temp_work/redcat-animation-native-2026-10-12/scenes-${Date.now()}`));
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:sceneOutput('temp_work')};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(m.text()))errors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false})));
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const report=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();
    let w=app.world,g=app.gameplay;
    const isolate=()=>{
      for(const player of g.scripts.players.values())player.stop();
      g.scripts.cutscene=false;g.scripts.camera=null;
      for(const o of g.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;
    };
    isolate();
    const a=w.redcat.userData.animator,origin=[...w.player.position],samples=[];
    const capture=()=>({name:a.name,time:a.time,rate:a.timeScale,loop:a.loop,
      vertices:[...a.geometry.attributes.position.array],transition:a.snapshot().transition});
    for(const input of [{},{forward:1},{forward:-1},{right:1},{right:-1}]) {
      w.player.grounded=true;w.player.jumpKind=null;w.syncPlayer(.3,input);samples.push({...capture(),vertices:undefined});
    }
    // Save during a descending normal jump, in the middle of a blend.
    w.player.position[1]+=60;Object.assign(w.player,{grounded:false,velocityY:-45,jumpKind:'normal',jumpSerial:4,jumpAge:.15});
    w.syncPlayer(.15,{});const before=capture();app.saveGame(true);
    const savedKeys=Object.keys(JSON.parse(localStorage.getItem(app.profiles.key('redcat.save.v1'))||'{}'));
    await app.loadSave();app.pause();w=app.world;g=app.gameplay;isolate();
    const b=w.redcat.userData.animator,after={name:b.name,time:b.time,vertices:[...b.geometry.attributes.position.array],transition:b.snapshot().transition};
    w.syncPlayer(.02,{});const resumed={name:b.name,time:b.time,jumpKind:w.player.jumpKind,velocityY:w.player.velocityY};
    // Cover the complete shoot1 selection interval, including charge, and
    // ensure sampling the hand origin at dt=0 never changes the blend clock.
    w.player.grounded=true;w.player.jumpKind=null;g.playerCharge={age:1};w.syncPlayer(.02,{});
    const charge={name:b.name,time:b.time,rate:b.timeScale};
    const {PLAYER_SHOOT_MOTION:s}=await import('./source/player-projectiles.js');
    g.playerCharge=null;g.playerAttackSerial++;g.playerAttackUntil=g.time+s.duration/s.rate;
    w.syncPlayer(.02,{forward:1});const beforeQuery=b.snapshot();
    for(let i=0;i<50;i++)w.syncPlayer(0,{forward:1});const afterQuery=b.snapshot();
    g.time+=s.duration*.81/s.rate;w.syncPlayer(.02,{forward:1});const handoff=b.name;
    g.playerAttackUntil=0;w.player.position=[...origin];w.player.resetVelocity();w.player.grounded=true;
    g.scripts.cutscene=true;w.syncPlayer(.3,{});const cutscene=b.name;
    g.scripts.cutscene=false;
    for(const phase of ['hit','death','respawn']){g.playerReaction={phase,age:.2};w.syncPlayer(.02,{});samples.push({phase,name:b.name,time:b.time,rate:b.timeScale});}
    g.playerReaction=null;w.syncPlayer(.02,{});const respawnIdle={name:b.name,rate:b.timeScale};
    w.syncPlayer(.3,{right:1});w.updateCamera(1,true);w.updateRenderResidency();await w.geometryStream.settle();
    for(const id of ['pause','hud','toast'])document.getElementById(id).hidden=true;
    w.render();
    return {samples,before,after,resumed,charge,beforeQuery,afterQuery,handoff,cutscene,respawnIdle,savedKeys};
  });
  assert.deepEqual(report.samples.slice(0,5).map(s=>[s.name,s.rate]),[['idle',1],['walkfw',1],['walkbw',2.2],['strafer',2.4],['strafel',2.4]]);
  assert.equal(report.after.name,'jump1');assert.equal(report.after.time,report.before.time);
  assert.deepEqual(report.after.vertices,report.before.vertices);assert.deepEqual(report.after.transition,report.before.transition);
  assert.equal(report.resumed.name,'jump1');assert.equal(report.resumed.jumpKind,'normal');assert.ok(report.resumed.time>report.after.time);
  assert.equal(report.charge.name,'shoot1');assert.equal(report.charge.rate,0);
  assert.deepEqual(report.beforeQuery,report.afterQuery);assert.equal(report.handoff,'walkfw');assert.equal(report.cutscene,'idle');
  assert.deepEqual(report.respawnIdle,{name:'idle',rate:1.7});assert.deepEqual(errors,[]);
  await page.screenshot({path:path.join(out,'redcat-strafe.png')});
  delete report.before.vertices;delete report.after.vertices;
  await writeFile(path.join(out,'report.json'),JSON.stringify({report,errors},null,2)+'\n');
  console.log(`PASS rendered RedCat animation states, save/reload, zero-time queries and shooting handoff. Evidence: ${out}`);
} finally {await context?.close();server.kill();}
