import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4263'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1100,height:700}}),errors=[];
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4263/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const result=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();
    const w=app.world,g=app.gameplay,h=g.scripts,THREE=await import('three'),{DEATH_SMOKE_TEXTURE}=await import('./src/enemy-death-effects.js');
    for(const p of h.players.values())p.stop();h.cutscene=false;h.enemiesFrozen=false;h.camera=null;
    const boss=g.objects.find(o=>o.enemyType==='maxj');boss.enabled=true;boss.position=[0,0,0];boss.yaw=0;boss.boss.hidden=false;g.time=100;
    const actor=w.actorInstances.get(boss.id),scene=new THREE.Scene();scene.background=new THREE.Color(0x183448);scene.add(actor,new THREE.AmbientLight(0xffffff,2));
    const smoke=w.effects.batches.get(DEATH_SMOKE_TEXTURE);scene.add(smoke.mesh);
    w.camera.position.set(0,80,340);w.camera.lookAt(0,45,0);w.camera.updateMatrixWorld();
    const screenshots=[],report=[];
    function capture(name) {
      w.syncActors(0);w.effects.update(0);w.renderer.render(scene,w.camera);
      screenshots.push({name,png:w.renderer.domElement.toDataURL('image/png').split(',')[1]});
      report.push({name,particles:smoke.count});
    }
    for(const phase of ['departure','arrival']) {
      // Render the native particles in a clean inspection scene at its floor.
      boss.boss.teleportEffects=[{phase,age:.5,position:[0,0,0]}];
      const original=w.collider.trace;w.collider.trace=()=>({fraction:1});capture('jester-'+phase);w.collider.trace=original;
    }
    boss.boss.teleportEffects=[];
    const kinds=['bone','goo','poison','jesterBall','magma','magicBall','skull'];
    g.projectiles=kinds.map((kind,i)=>({id:'audit-'+kind,kind,age:.13,position:[(i-3)*42,95,0],radius:3}));w.syncProjectiles();
    for(const mesh of w.projectileMeshes.values())scene.add(mesh);
    capture('enemy-projectiles');
    const projectiles=[...w.projectileMeshes.values()].map(m=>({id:m.userData.projectileId,sprite:m.isSprite,map:m.material.map?.image.src}));
    await app.startLevel(3);app.pause();const cave=app.gameplay,ch=cave.scripts,cw=app.world;
    for(let t=0;t<60;t+=.1)ch.update(.1);
    cave.trigger(cave.find('trigger_cuts05')[0]);for(let t=0;t<20;t+=.1)ch.update(.1);
    cave.destroy(cave.find('Max')[0]);cw.syncActors(0);
    const double=cw.actorInstances.get(cave.find('max_actor')[0].id),max=cave.find('Max')[0];
    ch.cutscene=true;ch.enemiesFrozen=true;
    for(let t=0;t<8;t+=.1){cave.update(.1,cw.player.position);cw.syncActors(.1);cw.syncPlayer(.1,{});cw.effects.update(.1);}
    const corpse=cw.actorInstances.get(max.id),caveState={doubleVisible:double.visible,corpseVisible:corpse.visible,playerMotion:cw.redcat.userData.animator.clip?.name,smoke:cw.effects.batches.get(DEATH_SMOKE_TEXTURE).count};
    return {report,projectiles,caveState,screenshots};
  });
  for(const shot of result.screenshots)await writeFile('artifacts/'+shot.name+'.png',Buffer.from(shot.png,'base64'));
  delete result.screenshots;await writeFile('artifacts/enemy-combat-scenes.json',JSON.stringify({result,errors},null,2)+'\n');
  assert.equal(result.report[0].particles,15);assert.equal(result.report[1].particles,15);
  assert.ok(result.projectiles.every(p=>p.sprite&&p.map.includes('/assets/projectiles/')));
  assert.deepEqual(result.caveState,{doubleVisible:false,corpseVisible:false,playerMotion:'idle',smoke:0});assert.deepEqual(errors,[]);
  console.log('PASS native Jester departure/arrival smoke, seven original projectile sprite types, cave duplicate retirement and cutscene death/idle integration; no browser errors.');
} finally {await browser?.close();server.kill();}
