import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
const out=path.resolve(`temp_work/enemy-parity-2026-10-13/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
// Keep Chromium's Unix socket path below sun_path's limit, inside temp_work.
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(m.text()))errors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false})));
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const knight=await page.evaluate(async()=>{
    const app=window.__redcat;document.getElementById('cheat-unlock-levels').click();
    if(!await app.startLevel(1))throw new Error('Castle could not start');app.pause();
    const w=app.world,g=app.gameplay,h=g.scripts,THREE=await import('three');
    for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    const o=g.objects.find(o=>o.enemyType==='knight'),a=w.actorInstances.get(o.id);
    o.enabled=true;o.visible=true;o.health=o.maxHealth;
    g.time=100;g.destroy(o);w.syncActors(0);
    const capture=()=>{
      const d=w.enemyDebris.get(o.id);
      return d?{age:d.age,life:d.life,parts:d.parts.map(p=>({position:p.actor.position.toArray(),rotation:p.actor.quaternion.toArray(),particle:structuredClone(p.particle),visible:p.actor.visible}))}:null;
    };
    const initial=capture();g.time=101;w.syncActors(1);const moving=capture(),save=g.snapshot();
    w.syncActors(0);const redraw=capture();
    const scene=new THREE.Scene();scene.background=new THREE.Color(0x263744);
    const camera=new THREE.PerspectiveCamera(42,1280/720,.1,2000),origin=o.position;
    camera.position.set(origin[0]+80,origin[1]+100,origin[2]+260);camera.lookAt(origin[0],origin[1]+30,origin[2]);camera.updateProjectionMatrix();
    w.syncActorLighting();
    const parts=w.enemyDebris.get(o.id)?.parts||[];for(const p of parts)scene.add(p.actor);
    w.renderer.setRenderTarget(null);w.renderer.render(scene,camera);const png=w.renderer.domElement.toDataURL('image/png').split(',')[1];
    for(const p of parts)w.scene.add(p.actor);
    g.time=100.5;w.syncActors(0);g.restore(save);w.syncActors(0);const restored=capture();
    return {initial,moving,redraw,restored,png,originalHidden:!a.visible};
  });
  await writeFile(path.join(out,'knight-armour.png'),Buffer.from(knight.png,'base64'));delete knight.png;
  assert.equal(knight.initial.parts.length,9);assert.ok(knight.originalHidden);
  assert.deepEqual(knight.moving,knight.redraw,'redraw must not advance armour physics');
  assert.deepEqual(knight.moving,knight.restored,'save/rewind must resume the same armour trajectory');
  assert.ok(knight.moving.parts.every(p=>p.position.every(Number.isFinite)));
  assert.notDeepEqual(knight.initial.parts.map(p=>p.position),knight.moving.parts.map(p=>p.position));
  assert.deepEqual(errors,[]);
  await writeFile(path.join(out,'report.json'),JSON.stringify({knight,errors},null,2)+'\n');
  console.log(`PASS imported knight breakup, redraw stability and save/rewind. ${out}`);
}finally{await context?.close();server.kill();}
