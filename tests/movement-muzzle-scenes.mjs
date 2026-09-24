import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4293'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4293/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(()=>document.getElementById('cheat-unlock-levels').click());
  const result=await page.evaluate(async()=>{
    const app=window.__redcat,idle={forward:0,right:0,jump:false};
    await app.startLevel(0);app.pause();
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const player of h.players.values())player.stop();h.cutscene=false;h.camera=null;
    for(const object of g.objects)if(['enemy','trigger','fairy'].includes(object.kind))object.enabled=false;
    const p=w.player;
    for(let i=0;i<30;i++)p.update(.02,idle,w.yaw);
    p.update(.02,{...idle,forward:1,jump:true},w.yaw);
    for(let i=0;i<6;i++)p.update(.02,idle,w.yaw);
    const position=[...p.position],motion=p.snapshotMotion();app.saveGame(true);
    const saved=JSON.parse(localStorage.getItem('redcat.save.v1'));
    // Derive the next tick independently on the old live controller, then
    // restore using the actual game-menu load path and compare that tick.
    p.update(.02,idle,w.yaw);const expected=[...p.position];
    await app.loadSave();app.pause();
    const restored={position:[...app.world.player.position],motion:app.world.player.snapshotMotion()};
    app.world.player.update(.02,idle,app.world.yaw);restored.next=[...app.world.player.position];
    const sample=(world,object)=>{
      const game=world.gameplay,actor=world.actorInstances.get(object.id);
      object.enabled=true;object.visible=true;object.yaw=.6;
      game.enemyAnimation(object,'attack',game.enemyDuration(object,'attack'));
      if(object.enemyType==='maxd')Object.assign(object.boss,{machineMotion:'shoot1',machineElapsed:.3,machineSerial:object.boss.machineSerial+1});
      world.syncActors(0);game.time+=game.enemyDuration(object,'attack')*.5;
      const start=game.projectiles.length;
      game.enemyProjectile(object,object.position.map((v,i)=>v+(i===2?200:0)));
      const shots=game.projectiles.slice(start),time=actor.userData.animator.time;
      world.syncActors(.04);world.syncProjectiles();
      return {type:object.enemyType,callback:typeof object.projectileOrigins,actorPosition:[...object.position],
        time,renderedTime:actor.userData.animator.time,points:shots.map(s=>[...s.position]),
        rendered:shots.map(s=>({position:world.projectileMeshes.get(s.id)?.position.toArray(),visible:world.projectileMeshes.get(s.id)?.visible}))};
    };
    const forest=app.world,brutus=sample(forest,app.gameplay.objects.find(o=>o.enemyType==='brutusm'));
    await app.startLevel(3);app.pause();
    const caves=app.world,max=app.gameplay.objects.find(o=>o.enemyType==='maxd');
    // Max's character is deliberately recessed; neither barrel should follow it.
    max.position[1]-=300;
    const turret=sample(caves,max),spider=sample(caves,app.gameplay.objects.find(o=>o.actorFile==='spiderr'));
    const home=max.boss.home;
    caves.camera.position.set(home[0]+170,home[1]+145,home[2]+210);caves.camera.lookAt(home[0],home[1]+40,home[2]);
    caves.render();document.getElementById('pause').hidden=true;
    return {save:{position,motion,serialized:saved.playerMotion,expected,restored},brutus,turret,spider};
  });
  assert.deepEqual(result.save.motion,result.save.serialized);
  assert.deepEqual(result.save.restored.position,result.save.position);
  assert.deepEqual(result.save.restored.motion,result.save.motion);
  assert.deepEqual(result.save.restored.next,result.save.expected);
  for(const report of [result.brutus,result.turret,result.spider]) {
    assert.equal(report.callback,'function');assert.equal(report.points.length,report.type==='maxd'?2:1);
    assert.equal(report.renderedTime,report.time,'release sampling cannot advance the rendered animation twice');
    report.points.forEach((point,i)=>{
      assert.ok(point.every(Number.isFinite));assert.deepEqual(report.rendered[i].position,point);assert.equal(report.rendered[i].visible,true);
      assert.ok(Math.hypot(...point.map((v,j)=>v-report.actorPosition[j]-(j===1?25:0)))>1);
    });
  }
  assert.ok(result.turret.points.every(p=>p[1]>result.turret.actorPosition[1]+300));
  assert.notDeepEqual(result.turret.points[0],result.turret.points[1]);assert.deepEqual(errors,[]);
  await mkdir('artifacts',{recursive:true});await writeFile('artifacts/movement-muzzle-scenes.json',JSON.stringify(result,null,2)+'\n');
  await page.screenshot({path:'artifacts/movement-muzzle-turret.png'});
  console.log('PASS real menu save/load preserves airborne movement; Brutus, spider and both turret-barrel origins match their rendered release poses; no browser/HTTP errors.');
} finally {await browser?.close();server.kill();}
