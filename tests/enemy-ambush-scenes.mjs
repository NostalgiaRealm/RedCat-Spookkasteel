import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4197'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4197/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await mkdir('artifacts',{recursive:true});
  const ambush=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(3);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts;
    for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
    // Withdraw the authored jester stand-in before testing the actual turret.
    game.trigger(game.find('trigger_cuts05')[0]);for(let i=0;i<400;i++)host.update(.05);
    host.update=()=>{};host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
    for(const object of game.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
    world.syncActors(0);
    const skeleton=game.find('skelet01')[0],bones=world.actorInstances.get(skeleton.id);
    const dormant={clip:bones.userData.animator.name,time:bones.userData.animator.time,visible:bones.visible};
    bones.userData.mesh.geometry.computeBoundingBox();dormant.height=bones.userData.mesh.geometry.boundingBox.max.z-bones.userData.mesh.geometry.boundingBox.min.z;
    const spider=game.objects.find(o=>o.enemyType==='spider'&&o.ambush.phase==='dormant'),actor=world.actorInstances.get(spider.id);spider.enabled=true;
    game.time+=.2;game.updateEnemy(spider,.2,[...spider.ambush.lower],()=>true,(a,b,mins,maxs)=>world.collider.trace(a,b,mins,maxs,world.physicalModels,null));world.syncActors(.2);
    const web=world.spiderWebs.get(spider.id);
    world.redcat.visible=false;const [x,y,z]=spider.position,focus=[x,y+12,z];
    const eyes=[];
    for(let angle=0;angle<Math.PI*2;angle+=Math.PI/8){const eye=[x+Math.sin(angle)*65,y-15,z+Math.cos(angle)*65];if(world.collider.trace(focus,eye,[0,0,0],[0,0,0],world.physicalModels).fraction>.99)eyes.push(eye);}
    if(!eyes.length)throw new Error('No unobstructed spider inspection camera');
    world.camera.position.set(...eyes[0]);world.camera.lookAt(...focus);world.render();
    window.__ambushScene={spider};
    return {dormant,spider:{phase:spider.ambush.phase,position:[...spider.position],lower:spider.ambush.lower,upper:spider.ambush.upper,actor:actor.position.toArray(),lineVisible:web?.visible,vertices:web?[...web.geometry.attributes.position.array]:null}};
  });
  assert.equal(ambush.dormant.clip,'start');assert.equal(ambush.dormant.time,0);assert.equal(ambush.dormant.visible,true);
  assert.equal(ambush.spider.phase,'descending');assert.equal(ambush.spider.lineVisible,true);assert.deepEqual(ambush.spider.actor,ambush.spider.position);
  assert.ok(ambush.spider.vertices[1]>ambush.spider.vertices[4]);
  await page.screenshot({path:'artifacts/caves-spider-descent.png'});
  const turret=await page.evaluate(()=>{
    const {world,gameplay:game}=window.__redcat,host=game.scripts,boss=game.objects.find(o=>o.enemyType==='maxd'),events=[];
    boss.enabled=true;boss.boss.hidden=false;boss.boss.invulnerable=false;boss.yaw=0;host.enemiesFrozen=true;
    const original=game.onEvent;game.onEvent=e=>{events.push(e);original(e);};
    const [x,y,z]=boss.boss.home;boss.position=[x,y,z];world.player.position=[x+300,y,z+200];world.player.velocityY=0;world.syncActors(0);
    const health=boss.health,hits=[];
    for(const height of [30,48,78]){
      game.projectiles=[{id:'turret-regression',sourceId:'redcat',owner:'player',kind:'shot',position:[x,y+height,z+120],velocity:[0,0,-1500],radius:3,age:0,life:1,gravity:0,damage:1}];
      world.update(.1,{forward:0,right:0,turn:0,jump:false,attack:false,use:false});
      hits.push({health:boss.health,target:events.filter(e=>e.type==='playerProjectileImpact').at(-1)?.target});
    }
    return {health,hits,id:boss.id};
  });
  assert.deepEqual(turret.hits,[1,2,3].map(n=>({health:turret.health-n,target:turret.id})));
  const landed=await page.evaluate(()=>{
    const {world,gameplay:game}=window.__redcat,{spider}=window.__ambushScene;
    for(let i=0;i<100&&spider.ambush.phase!=='awake';i++){game.time+=.1;game.updateEnemy(spider,.1,[...spider.ambush.lower],()=>true,(a,b,mins,maxs)=>world.collider.trace(a,b,mins,maxs,world.physicalModels,null));}
    world.syncActors(0);return {phase:spider.ambush.phase,lineVisible:world.spiderWebs.get(spider.id).visible};
  });
  assert.equal(landed.phase,'awake');assert.equal(landed.lineVisible,false);assert.deepEqual(errors,[]);
  await writeFile('artifacts/enemy-ambush-scenes.json',JSON.stringify({ambush,turret,landed},null,2)+'\n');
  console.log('PASS imported cave bones hold their original first frame; spider descends on rendered web and releases it on landing; body, crate and lid shots all damage Max.');
} finally {await browser?.close();server.kill();}
