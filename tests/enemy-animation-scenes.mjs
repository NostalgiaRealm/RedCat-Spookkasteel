import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
const out=path.resolve(`temp_work/enemy-actor-animations-2026-10-12/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'};
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
  const result=await page.evaluate(async()=>{
    const app=window.__redcat;document.getElementById('cheat-unlock-levels').click();
    if(!await app.startLevel(1))throw new Error('Castle could not start: '+document.getElementById('fatal').textContent);app.pause();
    let w=app.world,g=app.gameplay;
    const isolate=()=>{for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;};
    isolate();
    let object=g.objects.find(o=>o.enemyType==='knight'),actor=w.actorInstances.get(object.id);
    object.enabled=true;object.visible=true;object.health=object.maxHealth;
    g.enemyAnimation(object,'idle');w.syncActors(0);
    for(let i=0;i<12;i++){g.time+=1/60;w.syncActors(1/60);}
    g.enemyAnimation(object,'attack',g.enemyDuration(object,'attack'));
    for(let i=0;i<8;i++){g.time+=1/60;w.syncActors(1/60);}
    const capture=()=>({id:object.id,state:object.animationState,rate:object.animationRate,until:object.animationUntil,
      pose:actor.userData.animator.snapshot(),vertices:[...actor.userData.animator.geometry.attributes.position.array]});
    const before=capture();app.saveGame(true);await app.loadSave();app.pause();w=app.world;g=app.gameplay;isolate();
    object=g.objects.find(o=>o.id===before.id);actor=w.actorInstances.get(object.id);
    const after=capture();
    const a=actor.userData.animator,version=a.geometry.attributes.position.version;
    g.scripts.cutscene=true;
    for(let i=0;i<60;i++){g.time+=1/120;object.animationUntil+=1/120;w.syncActors(1/120);}
    const frozen={pose:a.snapshot(),version:a.geometry.attributes.position.version};g.scripts.cutscene=false;
    g.time+=1/60;w.syncActors(1/60);const resumed=a.snapshot();
    // Render the real selected knight, without changing user saves or levels.
    const p=object.position;w.camera.position.set(p[0]+100,p[1]+85,p[2]+160);w.camera.lookAt(p[0],p[1]+45,p[2]);
    w.camera.updateMatrixWorld(true);w.updateRenderResidency();await w.geometryStream.settle();
    for(const id of ['pause','hud','toast'])document.getElementById(id).hidden=true;
    w.render();
    return {before,after,frozen,version,resumed};
  });
  assert.equal(result.before.rate,1.8);assert.ok(result.before.pose.transition);
  assert.deepEqual(result.after,result.before);assert.deepEqual(result.frozen.pose,result.after.pose);
  assert.equal(result.frozen.version,result.version);assert.ok(result.resumed.time>result.after.pose.time);
  await page.screenshot({path:path.join(out,'castle-knight.png')});
  const scenery=await page.evaluate(async()=>{
    const app=window.__redcat,rows=[];
    for(const index of [2,4]) {
      await app.startLevel(index);app.pause();const w=app.world;
      for(const object of app.gameplay.objects) {
        const e=object.entity;if(e.classname!=='AdamAnyActor'||e.MotionName)continue;
        const actor=w.actorInstances.get(object.id),a=actor?.userData.animator;if(!a)continue;
        const before=a.geometry.attributes.position.version;a.update(.5);
        rows.push({level:w.id,id:object.id,asset:e.ActorFileName,name:a.name,changed:a.geometry.attributes.position.version!==before});
      }
    }
    return rows;
  });
  assert.equal(scenery.filter(r=>/htorch/i.test(r.asset)&&r.name==='anim'&&r.changed).length,1);
  assert.equal(scenery.filter(r=>!/htorch/i.test(r.asset)&&r.name===null&&!r.changed).length,4);
  assert.deepEqual(errors,[]);
  delete result.before.vertices;delete result.after.vertices;
  await writeFile(path.join(out,'report.json'),JSON.stringify({result,scenery,errors},null,2)+'\n');
  console.log(`PASS live Castle knight save/reload/pause, Graveyard/Tower static scenery and hand-torch exception. ${out}`);
} finally {await context?.close();server.kill();}
