import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyEnemyScenes(page) {
  await mkdir('artifacts',{recursive:true});
  const walking=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(3);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,enemy=game.objects.find(o=>o.actorFile==='spiderr');
    for(const object of game.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
    enemy.enabled=true;game.scripts.update=()=>{};game.scripts.cutscene=false;game.scripts.enemiesFrozen=false;game.scripts.camera=null;
    const floor=(position,mins,maxs)=>world.collider.trace([position[0],position[1]+64,position[2]],[position[0],position[1]-256,position[2]],mins,maxs,world.physicalModels);
    const ground=floor(enemy.position,enemy.collisionMins,enemy.collisionMaxs);
    if(ground.startSolid||ground.fraction===1)throw new Error('No original cave floor under test spider');
    enemy.position=ground.end;
    let player;
    for(let angle=0;angle<Math.PI*2;angle+=Math.PI/8) {
      const trial=[enemy.position[0]+Math.sin(angle)*270,enemy.position[1],enemy.position[2]+Math.cos(angle)*270];
      const hit=floor(trial,world.player.mins,world.player.maxs);
      const a=enemy.position.map((v,i)=>v+(i===1?25:0)),b=hit.end.map((v,i)=>v+(i===1?28:0));
      const line=world.collider.trace(a,b,[0,0,0],[0,0,0],world.physicalModels);
      const path=world.collider.trace(enemy.position,hit.end,enemy.collisionMins,enemy.collisionMaxs,world.physicalModels);
      if(!hit.startSolid&&hit.fraction<1&&Math.abs(hit.end[1]-enemy.position[1])<20&&line.fraction===1&&path.fraction>.8){player=hit.end;break;}
    }
    if(!player)throw new Error('No unobstructed approach across original cave floor');
    world.player.position=[...player];world.player.grounded=true;world.player.velocityY=0;game.hitCooldown=0;game.state.health=10;
    const cameraDirection=player.map((v,i)=>v-enemy.position[i]),cameraLength=Math.hypot(cameraDirection[0],cameraDirection[2]);
    world.updateCamera=function(){
      const focus=enemy.position.map((v,i)=>v+(i===1?18:0));
      const desired=[enemy.position[0]+cameraDirection[0]/cameraLength*115,enemy.position[1]+65,enemy.position[2]+cameraDirection[2]/cameraLength*115];
      const cameraHit=this.collider.trace(focus,desired,[-4,-4,-4],[4,4,4],this.physicalModels);
      this.camera.position.fromArray(cameraHit.end);this.camera.lookAt(...focus);
    };
    const actor=world.actorInstances.get(enemy.id),before=[...enemy.position];
    world.update(.025,{forward:0,right:0});const first=[...actor.userData.mesh.geometry.attributes.position.array];
    for(let i=0;i<16;i++)world.update(.025,{forward:0,right:0});world.render();
    const changed=actor.userData.mesh.geometry.attributes.position.array.filter((v,i)=>Math.abs(v-first[i])>.05).length;
    window.__enemyFixture={enemy,player,actor};
    return {id:enemy.id,state:enemy.animationState,clip:actor.userData.animator.name,changed,before,position:[...enemy.position],durations:enemy.animationDurations,groundGap:Math.abs(world.collider.trace(enemy.position,enemy.position.map((v,i)=>v-(i===1?3:0)),enemy.collisionMins,enemy.collisionMaxs,world.physicalModels).end[1]-enemy.position[1])};
  });
  assert.equal(walking.state,'walk');assert.equal(walking.clip,'walkfw');assert.ok(walking.changed>60);
  assert.ok(Math.hypot(walking.position[0]-walking.before[0],walking.position[2]-walking.before[2])>10);assert.ok(walking.groundGap<.2);
  await page.screenshot({path:'artifacts/enemy-spider-walk.png'});
  const shooting=await page.evaluate(()=>{
    const app=window.__redcat,world=app.world,game=app.gameplay,{enemy,actor}=window.__enemyFixture;
    const direction=world.player.position.map((v,i)=>v-enemy.position[i]),length=Math.hypot(direction[0],direction[2]);
    world.player.position=[enemy.position[0]+direction[0]/length*145,enemy.position[1],enemy.position[2]+direction[2]/length*145];
    for(let i=0;i<100&&game.projectiles.length===0;i++)world.update(.025,{forward:0,right:0});world.render();
    const projectile=game.projectiles[0],mesh=world.projectileMeshes.get(projectile?.id);
    return {state:enemy.animationState,clip:actor.userData.animator.name,projectile:projectile?{kind:projectile.kind,position:[...projectile.position],speed:Math.hypot(...projectile.velocity)}:null,visible:!!mesh?.visible,sprite:!!mesh?.isSprite,frames:world.enemyShotFrames.length,fps:world.enemyShotStyle.framesPerSecond};
  });
  assert.equal(shooting.state,'attack');assert.equal(shooting.clip,'shoot1');assert.equal(shooting.projectile?.kind,'enemyShot');
  assert.ok(Math.abs(shooting.projectile.speed-400)<1e-8);assert.equal(shooting.visible,true);assert.equal(shooting.sprite,true);assert.equal(shooting.frames,4);assert.equal(shooting.fps,20);
  await page.screenshot({path:'artifacts/enemy-spider-shot.png'});
  const outcome=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,{enemy,actor}=window.__enemyFixture;
    const initialHealth=game.state.health;
    for(let i=0;i<60&&game.state.health===initialHealth;i++)world.update(.025,{forward:0,right:0});
    const damage=initialHealth-game.state.health,remaining=world.projectileMeshes.size;
    game.hurtEnemy(enemy,1);world.syncActors(.15);const hurt={clip:actor.userData.animator.name,time:actor.userData.animator.time};
    game.destroy(enemy);world.syncActors(.1);const death={clip:actor.userData.animator.name,visible:actor.visible,time:actor.userData.animator.time};world.render();
    return {damage,remaining,hurt,death};
  });
  assert.ok(outcome.damage>0);assert.equal(outcome.remaining,0);assert.equal(outcome.hurt.clip,'hit');assert.ok(outcome.hurt.time>0);
  assert.equal(outcome.death.clip,'death');assert.equal(outcome.death.visible,true);assert.ok(outcome.death.time>0);
  await page.screenshot({path:'artifacts/enemy-spider-death.png'});
  const knight=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,enemy=game.objects.find(o=>o.actorFile==='knight');
    game.scripts.update=()=>{};game.scripts.cutscene=false;game.scripts.enemiesFrozen=false;game.scripts.camera=null;
    for(const object of game.objects)if(object.kind==='enemy'&&object!==enemy)object.enabled=false;
    enemy.enabled=true;const focus=enemy.position.map((v,i)=>v+(i===1?40:0));
    let camera;
    for(let angle=0;angle<Math.PI*2;angle+=Math.PI/8) {
      const desired=[focus[0]+Math.sin(angle)*140,focus[1]+25,focus[2]+Math.cos(angle)*140];
      const hit=world.collider.trace(focus,desired,[-4,-4,-4],[4,4,4],world.physicalModels);
      if(!hit.startSolid&&hit.fraction>.6){camera=hit.end;break;}
    }
    if(!camera)throw new Error('No clear camera position at original castle knight');
    world.camera.position.fromArray(camera);world.camera.lookAt(...focus);
    game.destroy(enemy);
    for(let i=0;i<8;i++){game.time+=.025;world.syncActors(.025);}world.render();
    const body=world.actorInstances.get(enemy.id),debris=world.enemyDebris.get(enemy.id);
    return {bodyVisible:body.visible,parts:debris.parts.map(p=>({source:p.actor.userData.template.data.source,position:p.actor.position.toArray(),visible:p.actor.visible})),age:debris.age};
  });
  assert.equal(knight.bodyVisible,false);assert.equal(knight.parts.length,9);assert.ok(knight.parts.every(p=>p.visible&&p.position.every(Number.isFinite)));
  await page.screenshot({path:'artifacts/enemy-knight-breakup.png'});
  await writeFile('artifacts/enemy-scenes.json',JSON.stringify({walking,shooting,outcome,knight},null,2)+'\n');
  console.log('PASS original cave spider walk/hit/death clips, grounded motion, original projectile sprites, live projectile damage and nine original knight breakup actors.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4179'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
    await page.goto('http://127.0.0.1:4179/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyEnemyScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
