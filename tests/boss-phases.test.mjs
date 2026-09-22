import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { Gameplay } from '../src/gameplay.js';
import { initializeBoss,updateBoss,bossCanTakeDamage,bossHitResult,bossWasHit,snapshotBossState,restoreBossState } from '../src/boss-ai.js';
import { ActorAnimator, ActorStateAnimator } from '../src/animation.js';
import * as THREE from 'three';

const data=async file=>JSON.parse(await readFile(new URL('../'+file,import.meta.url),'utf8'));
const levels=await Promise.all(['lvl01a','lvl03a','lvl04a'].map(id=>data('data/levels/'+id+'/level.json')));
const clips={};
for(const name of ['maxd','maxj','witch'])clips[name]=(await data('assets/actors/'+name+'.json')).animations;
function fixture(type,{difficulty='Normal',points=null}={}) {
  const source=levels[{maxd:1,maxj:0,witch:2}[type]];
  const entity=source.entities.find(e=>e.classname===(type==='witch'?'MovingEnemy':'StandingEnemy')&&e.Type===({maxd:'5',maxj:'4',witch:'9'})[type]);
  const level={...source,entities:[{...entity,IsInitiallyEnabled:'1'},...source.entities.filter(e=>e.classname==='GrobberPathPoint'),...(points||source.entities.filter(e=>e.classname==='JesterMaxPoint'))]};
  const events=[],game=new Gameplay(level,{difficulty,deferInit:true,onEvent:e=>events.push(e)}),o=game.objects[0];
  o.animationDurations=Object.fromEntries(clips[type].map(c=>[({shoot1:'attack',hit:'hurt'})[c.name]||c.name,c.duration/(c.name==='hit'?(o.stats.HitMotionFactor||1):1)]));
  initializeBoss(game,o);const player=o.position.map((v,i)=>v+(i===2?100:0));
  const context={playerPosition:player,visible:true,distance:100,lineOfSight:()=>true,face:()=>{},walk:target=>{
    const d=Math.hypot(...target.map((v,i)=>v-o.position[i])),step=Math.min(d,o.stats.Speed*.05);
    o.position=o.position.map((v,i)=>v+(target[i]-v)/(d||1)*step);game.enemyAnimation(o,'walk');return step>0;
  }};
  const tick=(dt=.05)=>{game.time+=dt;updateBoss(game,o,dt,context);};
  const until=(predicate,limit=60)=>{for(let t=0;t<limit&&!predicate();t+=.05)tick();assert.ok(predicate(),'phase did not arrive: '+o.boss.phase);};
  return {game,o,events,context,tick,until};
}

test('original castle and cave StandingEnemy enums create their respective bosses',()=>{
  for(const [index,type,actor] of [[0,'4','maxj'],[1,'5','maxd']]) {
    const game=new Gameplay(levels[index],{deferInit:true});
    const boss=game.objects.find(o=>o.entity.classname==='StandingEnemy'&&o.entity.Type===type);
    assert.ok(boss);assert.equal(boss.actorFile,actor);assert.equal(boss.enemyType,actor);
    assert.equal(boss.stats,game.settings[actor==='maxd'?'dungeonmax':'jestermax'].Normal);
  }
});

test('0.2.5 swapped Max saves retain progress while discarding incompatible phases and ammunition',()=>{
  for(const type of ['maxd','maxj']) {
    const {game,o}=fixture(type),oldType=type==='maxd'?'maxj':'maxd';
    const oldStats=game.settings[oldType==='maxd'?'dungeonmax':'jestermax'].Normal;
    const save=game.snapshot(),saved=save.objects.find(v=>v.id===o.id);
    saved.health=oldStats.Health/2;saved.boss.type=oldType;saved.boss.phase='invisible';saved.boss.hidden=true;
    saved.position=[99,500,99];saved.animationState='teleport';saved.pendingAttack={at:900};
    save.projectiles=[{id:'old-shot',sourceId:o.id,position:[0,0,0],velocity:[0,0,10],radius:2,life:5,damage:1,gravity:0,age:0},
      {id:'player-shot',sourceId:'redcat',owner:'player',position:[0,0,0],velocity:[0,0,10],radius:2,life:5,damage:1,gravity:0,age:0}];
    game.restore(save);
    assert.equal(o.health,o.maxHealth/2);assert.equal(o.enabled,true);
    assert.equal(o.boss.type,type);assert.equal(o.boss.phase,'idle');assert.equal(o.boss.hidden,false);
    assert.deepEqual(o.position,o.boss.home);assert.equal(o.animationState,'idle');assert.equal(o.pendingAttack,null);
    assert.deepEqual(game.projectiles.map(p=>p.id),['player-shot']);
    saved.health=0;game.restore(save);assert.equal(o.health,0);assert.equal(o.animationState,'death');
  }
});

test('Dungeon Max completes native turret salvo, rise, look, lower and second salvo',()=>{
  const f=fixture('maxd'),{o,game,until}=f,home=o.position[1];
  until(()=>o.boss.phase==='rise');
  assert.equal(game.projectiles.length,3);assert.ok(game.projectiles.every(p=>p.kind==='magma'));
  assert.equal(o.boss.machineMotion,'litopen');
  until(()=>o.boss.phase==='look');assert.equal(o.position[1],home+40);
  const lookAt=game.time;until(()=>o.boss.phase==='lower');assert.ok(game.time-lookAt>=2-1e-8);
  assert.equal(o.boss.machineMotion,'litclose');until(()=>o.boss.phase==='idle');assert.equal(o.position[1],home);
  until(()=>game.projectiles.length===4);assert.equal(o.boss.phase,'shoot');
});

test('Dungeon Max uses difficulty salvo counts and original rise time',()=>{
  for(const [difficulty,count,rise] of [['Easy',1,1],['Normal',3,2],['Hard',4,1]]) {
    const {o,game,until}=fixture('maxd',{difficulty});until(()=>o.boss.phase==='rise');
    assert.equal(game.projectiles.length,count);assert.equal(o.boss.duration,rise);
  }
});

test('Boss freeze and save/load preserve a partially raised turret',()=>{
  const f=fixture('maxd');f.until(()=>f.o.boss.phase==='rise');for(let i=0;i<13;i++)f.tick();
  const state=snapshotBossState(f.o),position=[...f.o.position];f.game.scripts={enemiesFrozen:true};
  for(let i=0;i<30;i++)f.tick();assert.deepEqual(f.o.boss,state);assert.deepEqual(f.o.position,position);
  f.game.scripts=null;const other=fixture('maxd');restoreBossState(other.game,other.o,state);other.o.position=[...position];
  for(let i=0;i<100;i++){f.tick();other.tick();assert.deepEqual(f.o.boss,other.o.boss);assert.deepEqual(f.o.position,other.o.position);}
});

test('Jester follows disappearance, InvisibleTime, reappearance, salvo, protected teleport',()=>{
  const f=fixture('maxj');f.tick();assert.equal(f.o.boss.phase,'teleportOut');assert.equal(bossCanTakeDamage(f.o),false);
  f.until(()=>f.o.boss.phase==='invisible');assert.equal(f.o.boss.hidden,true);
  const t=f.game.time;f.until(()=>f.o.boss.phase==='teleportIn');assert.ok(f.game.time-t>=1-1e-8);
  assert.equal(f.o.boss.hidden,false);assert.equal(bossCanTakeDamage(f.o),false);
  f.until(()=>f.o.boss.phase==='shoot');assert.equal(bossCanTakeDamage(f.o),true);
  f.until(()=>f.o.boss.phase==='teleportOut');assert.equal(f.game.projectiles.length,2);
  assert.ok(f.game.projectiles.every(p=>p.kind==='jesterBall'));
});

test('Jester teleport chooses authored locations, respects player spacing, and preserves in-place native fallback',()=>{
  const points=[{classname:'JesterMaxPoint',Origin:'500 1 -2183','%name%':'JesterMaxPoint1'}, {classname:'JesterMaxPoint',Origin:'-500 1 -2183','%name%':'JesterMaxPoint2'}];
  const f=fixture('maxj',{points});f.until(()=>f.o.boss.phase==='teleportIn');
  assert.ok([...points.map(p=>p.Origin.split(' ').map(Number)),f.o.boss.home].some(p=>JSON.stringify(p)===JSON.stringify(f.o.position)));
  const g=fixture('maxj',{points:[]});g.until(()=>g.o.boss.phase==='teleportIn');assert.deepEqual(g.o.position,g.o.boss.home);
});

test('Invisible Jester rejects damage without restarting animation or consuming RNG',()=>{
  const {o,game,tick}=fixture('maxj');tick();const random=o.aiRandomState,state=snapshotBossState(o);
  assert.deepEqual(bossHitResult(game,o,10),{damage:0,defeated:false,reaction:false});
  assert.equal(o.aiRandomState,random);assert.deepEqual(snapshotBossState(o),state);
});

test('Witch plays takeoff, then follows original tower waypoints in 3D and fires magic salvos',()=>{
  const f=fixture('witch');f.tick();assert.equal(f.o.boss.phase,'start');const position=[...f.o.position];
  for(let i=0;i<30;i++)f.tick();assert.deepEqual(f.o.position,position);assert.equal(f.game.projectiles.length,0);
  f.until(()=>f.o.boss.phase==='fly');f.until(()=>f.o.boss.phase==='shoot');
  assert.equal(f.o.patrol.current,'GrobberPathPoint128');
  f.until(()=>f.game.projectiles.length>=3);assert.ok(f.game.projectiles.every(p=>p.kind==='magicBall'));
});

test('Witch enters the scripted defeat at native health threshold two',()=>{
  const {game,o}=fixture('witch');o.health=4;
  const accepted=bossHitResult(game,o,1);assert.equal(accepted.damage,1);assert.equal(accepted.defeated,false);
  o.health=3;const final=bossHitResult(game,o,2);assert.equal(final.damage,1);assert.equal(final.defeated,true);
});

test('A boss hit interrupts its pending shot only when native reaction chooses a new state',()=>{
  const f=fixture('maxj');f.until(()=>f.o.boss.phase==='shoot');
  bossWasHit(f.game,f.o,{reaction:false});assert.equal(f.o.boss.phase,'shoot');
  bossWasHit(f.game,f.o,{reaction:true});assert.equal(f.o.boss.phase,'teleportOut');assert.equal(f.o.pendingAttack,null);
});

test('Gameplay routes bosses through specialized phases and restores a moving turret without a phase reset',()=>{
  const f=fixture('maxd'),{game,o,context}=f;
  const tick=()=>game.update(.05,context.playerPosition);
  for(let i=0;i<500&&o.boss.phase!=='rise';i++)tick();
  assert.equal(o.boss.phase,'rise');for(let i=0;i<9;i++)tick();
  const snapshot=game.snapshot(),other=new Gameplay(game.level,{save:snapshot,deferInit:true}),copy=other.objects[0];
  copy.animationDurations={...o.animationDurations};
  assert.deepEqual(copy.position,o.position);assert.deepEqual(copy.boss,o.boss);
  for(let i=0;i<120;i++){
    tick();other.update(.05,context.playerPosition);
    assert.deepEqual(copy.boss,o.boss);assert.deepEqual(copy.position,o.position);
  }
});

test('Gameplay freeze pauses every specialized boss phase and disabled bosses retain their initial pose',()=>{
  for(const type of ['maxd','maxj','witch']){
    const f=fixture(type),{game,o,context}=f;o.enabled=false;
    const before=snapshotBossState(o);game.update(.1,context.playerPosition);assert.deepEqual(o.boss,before);
    o.enabled=true;game.update(.1,context.playerPosition);
    game.scripts={enemiesFrozen:true,weaponsEnabled:true};const state=snapshotBossState(o),position=[...o.position];
    for(let i=0;i<10;i++)game.update(.1,context.playerPosition);
    assert.deepEqual(o.boss,state);assert.deepEqual(o.position,position);
  }
});

test('Jester actually plays and restarts the original teleport clip for disappearing and reappearing',async()=>{
  const data=await dataActor('maxj'),geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  const animator=new ActorAnimator(data,geometry),states=new ActorStateAnimator(animator),f=fixture('maxj');
  f.tick();states.update(f.o,.1,false,f.game.time);assert.equal(animator.name,'teleport');assert.equal(animator.loop,false);
  const serial=f.o.animationSerial;f.until(()=>f.o.boss.phase==='teleportIn');
  assert.ok(f.o.animationSerial>serial);states.update(f.o,.1,false,f.game.time);assert.equal(animator.time,.1);
  const health=f.o.health;f.game.hurtEnemy(f.o,100);assert.equal(f.o.health,health);
  f.until(()=>f.o.boss.phase==='shoot');f.game.hurtEnemy(f.o,100);assert.equal(f.o.health,0);
  geometry.dispose();
});
async function dataActor(name){return data('assets/actors/'+name+'.json');}

test('Hidden Jester does not absorb a player pellet at its previous location',()=>{
  const {game,o,context,until}=fixture('maxj');until(()=>o.boss.phase==='invisible');
  const before=o.health;
  game.projectiles=[{id:'player-test',owner:'player',kind:'shot',position:[o.position[0],o.position[1]+25,o.position[2]-10],velocity:[0,0,200],radius:1,damage:1,age:0,life:1,gravity:0}];
  game.updateProjectiles(.1,context.playerPosition);
  assert.equal(o.health,before);assert.equal(game.projectiles.length,1);
  assert.equal(game.projectiles[0].position[2],o.position[2]+10);
});

test('Witch threshold defeat dispatches the existing end-scene hook exactly once',()=>{
  const {game,o}=fixture('witch');let defeated=0;
  game.scripts={enemyDefeated:()=>defeated++,dispatch:()=>{}};o.health=3;
  game.hurtEnemy(o,1);assert.equal(o.health,0);assert.equal(o.enabled,false);assert.equal(defeated,1);
  game.hurtEnemy(o,100);assert.equal(defeated,1);assert.equal(game.state.kills,1);
});

test('Interrupting Dungeon Max during a rise lowers from the actual height without teleporting upward',()=>{
  const f=fixture('maxd');f.until(()=>f.o.boss.phase==='rise');for(let i=0;i<10;i++)f.tick();
  const height=f.o.position[1];f.o.aiRandomState=1;f.game.hurtEnemy(f.o,1);assert.equal(f.o.boss.phase,'recover');
  f.until(()=>f.o.boss.phase==='lower');f.tick();assert.ok(f.o.position[1]<=height);
  f.until(()=>f.o.boss.phase==='idle');assert.equal(f.o.position[1],f.o.boss.home[1]);
});

test('Dungeon Max accepts every exposed-body hit but reacts on the native half of hits',()=>{
  const {game,o}=fixture('maxd');o.aiRandomState=1;
  const first=bossHitResult(game,o,1);assert.equal(first.damage,1);assert.equal(first.reaction,true);
  let reaction=false,quiet=false;
  for(let i=0;i<100;i++){const hit=bossHitResult(game,o,1);assert.equal(hit.damage,1);reaction||=hit.reaction;quiet||=!hit.reaction;}
  assert.ok(reaction&&quiet);
});
