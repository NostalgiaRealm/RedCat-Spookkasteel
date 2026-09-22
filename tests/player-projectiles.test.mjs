import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {PLAYER_SHOOT_MOTION,advancePlayerProjectile} from '../src/player-projectiles.js';

const clear=(start,end)=>({fraction:1,end});
const make=()=>{const events=[];const game=new Gameplay({id:'lvl00a',spawn:{position:[0,0,0]},entities:[]},{onEvent:e=>events.push({...e,time:game.time})});return {game,events};};
const tick=(game,seconds,options={})=>{for(let t=0;t<seconds-1e-8;t+=.01)game.update(Math.min(.01,seconds-t),[0,0,0],{forward:[0,0,-1],traceProjectile:clear,...options});};

test('held shooting uses original shoot motion release and approximately one-second cadence',()=>{
  const {game,events}=make(),duration=PLAYER_SHOOT_MOTION.duration/PLAYER_SHOOT_MOTION.rate;
  game.attack([0,0,0],[0,0,-1]);
  tick(game,duration*.46-.001,{attack:true});assert.equal(game.projectiles.length,0);
  tick(game,.002,{attack:true});assert.equal(game.projectiles.length,1);
  assert.equal(game.projectiles[0].kind,'shot');assert.equal(game.projectiles[0].damage,1);
  tick(game,2.7,{attack:true});
  const shots=events.filter(e=>e.type==='attack');assert.equal(shots.length,3);
  for(let i=1;i<shots.length;i++)assert.ok(shots[i].time-shots[i-1].time>=1&&shots[i].time-shots[i-1].time<1.04);
});

test('player pellets accelerate at the authored rate, cap their speed, and have finite lifetime',()=>{
  const {game}=make();game.attack([0,0,0],[0,0,-1]);game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();
  const pellet=game.projectiles[0];assert.equal(Math.hypot(...pellet.velocity),300);
  for(let i=0;i<10;i++)game.updateProjectiles(.1,[0,0,0],clear);
  assert.ok(Math.abs(pellet.position[2]+380)<1e-8);assert.ok(Math.abs(Math.hypot(...pellet.velocity)-460)<1e-8);
  for(let i=0;i<41;i++)game.updateProjectiles(.1,[0,0,0],clear);
  assert.equal(game.projectiles.length,0);
  const fast={position:[0,0,0],velocity:[990,0,0],acceleration:160,maximumSpeed:1000};
  assert.ok(Math.abs(advancePlayerProjectile(fast,.1)[0]-99.6875)<1e-8);assert.equal(fast.velocity[0],1000);
});

test('skill upgrades retain native projectile kinds, damage and speed',()=>{
  for(const [skill,kind,damage,speed] of [[1,'shot',1,300],[3,'powerShot',2,300],[7,'superShot',4,240]]) {
    const {game}=make();game.state.skill=skill;game.attack([0,0,0],[0,0,-1]);
    game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();const pellet=game.projectiles[0];
    assert.equal(pellet.kind,kind);assert.equal(pellet.damage,damage);assert.equal(Math.hypot(...pellet.velocity),speed);
  }
});

test('the renderer supplies the animated right-hand origin only at pellet release',()=>{
  const {game}=make();let calls=0;
  const releaseOrigin=({kind,serial})=>{calls++;assert.equal(kind,'shot');assert.equal(serial,1);return [12,29,-15];};
  game.attack([0,0,0],[0,0,-1]);tick(game,.45,{releaseOrigin});assert.equal(calls,0);
  tick(game,.02,{releaseOrigin});assert.equal(calls,1);assert.deepEqual(game.projectiles[0].position,[12,29,-15]);
});

test('cutscenes pause queued release and save/load preserves cadence and in-flight pellets',()=>{
  const {game}=make();game.attack([0,0,0],[0,0,-1]);tick(game,.2);
  game.scripts={cutscene:true,weaponsEnabled:true,modelTransforms:new Map()};
  tick(game,2);assert.equal(game.projectiles.length,0);
  game.scripts=null;
  const saved=JSON.parse(JSON.stringify(game.snapshot())),restored=new Gameplay(game.level,{save:saved});
  tick(restored,.3);assert.equal(restored.projectiles.length,1);
  assert.equal(restored.playerAttackSerial,1);
  tick(restored,.1);
  const airborne=JSON.parse(JSON.stringify(restored.snapshot())),again=new Gameplay(game.level,{save:airborne});
  assert.deepEqual(again.projectiles,restored.projectiles);
  tick(restored,.1);tick(again,.1);assert.deepEqual(again.projectiles,restored.projectiles);
});

test('freezing enemies leaves player pellets active for shootable puzzles',()=>{
  const {game}=make();game.state.skill=1;game.scripts={enemiesFrozen:true,weaponsEnabled:true};
  game.attack([0,0,0],[0,0,-1]);tick(game,.6);assert.equal(game.projectiles.length,1);
  assert.ok(game.projectiles[0].position[2]<-20);
});

test('death cancels an unreleased pellet so it cannot fire after checkpoint respawn',()=>{
  const {game,events}=make();game.attack([0,0,0],[0,0,-1]);tick(game,.2);game.damage(10);
  assert.equal(game.pendingPlayerAttack,null);assert.equal(game.playerAttackUntil,0);assert.equal(game.attackCooldown,0);
  game.respawn();tick(game,1);
  assert.equal(game.projectiles.length,0);assert.equal(events.filter(e=>e.type==='attack').length,0);
  assert.equal(game.attack([0,0,0],[0,0,-1]),true,'Respawning does not leave the weapon locked');
});

test('all three original animated player pellet sequences are packaged with alpha',()=>{
  const manifest=JSON.parse(readFileSync(new URL('../assets/projectiles/manifest.json',import.meta.url)));
  for(const [kind,count] of [['shot',4],['powerShot',6],['superShot',6]]) {
    assert.equal(manifest[kind].frames.length,count);assert.equal(manifest[kind].framesPerSecond,20);
    for(const name of manifest[kind].frames)assert.equal(readFileSync(new URL(`../assets/projectiles/${name}`,import.meta.url)).readUInt32BE(0),0x89504e47);
  }
});
