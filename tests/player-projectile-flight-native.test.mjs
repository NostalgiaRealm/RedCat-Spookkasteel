import test from 'node:test';
import assert from 'node:assert/strict';
import {advancePlayerProjectile,PLAYER_PROJECTILE_STEP,restorePlayerProjectileFlight} from '../source/player-projectiles.js';
import {Gameplay} from '../source/gameplay.js';
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-8,`${a} != ${b}`);
const projectile=()=>({owner:'player',position:[0,0,0],velocity:[0,0,300],acceleration:160,maximumSpeed:1000,playerFlightPhase:0});
const advance=(p,dt)=>{p.position=advancePlayerProjectile(p,dt);};

test('player flight matches native accelerate/cap-before-translation at canonical60Hz',()=>{
  const p=projectile();advance(p,1);
  near(p.position[2],381.3333333333333);near(p.velocity[2],460);assert.equal(p.playerFlightPhase,0);
  const reference=projectile();let speed=300,total=0;
  for(let i=0;i<300;i++){speed=Math.min(1000,speed+160/60);total+=speed/60;}
  advance(reference,5);near(reference.position[2],total);near(reference.velocity[2],1000);
  const bounded=projectile();advance(bounded,1e6);
  assert.ok(Number.isFinite(bounded.position[2]));assert.equal(bounded.velocity[2],1000,'large elapsed time uses an arithmetic sum, not a step loop');
});

test('player native flight keeps smooth partial movement and identical travel across display rates',()=>{
  const exact=projectile();advance(exact,1.003);
  for(const hz of [30,60,120,144,240]){
    const p=projectile();for(let t=0;t<1.003-1e-12;){const dt=Math.min(1/hz,1.003-t);advance(p,dt);t+=dt;}
    near(p.position[2],exact.position[2]);near(p.velocity[2],exact.velocity[2]);near(p.playerFlightPhase,exact.playerFlightPhase);
  }
  const p=projectile();advance(p,1/240);assert.ok(p.position[2]>0);near(p.position[2],(300+160/60)/240);
  const saved=JSON.parse(JSON.stringify(p));restorePlayerProjectileFlight(saved);
  for(const dt of [.007,.1,.005]){advance(p,dt);advance(saved,dt);assert.deepEqual(saved,p);}
});

test('saved player flight validates its partial step and preserves simulation roundtrips',()=>{
  for(const value of [undefined,NaN,Infinity,-1,PLAYER_PROJECTILE_STEP,999]){
    const p={...projectile(),playerFlightPhase:value};restorePlayerProjectileFlight(p);assert.equal(p.playerFlightPhase,0);
  }
  const level={id:'lvl00a',entities:[]},game=new Gameplay(level);game.attack([0,0,0],[0,0,-1]);
  game.time=game.pendingPlayerAttack.at+.001;game.releasePlayerAttack();game.updateProjectiles(.007,[1000,0,0]);
  const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  assert.deepEqual(restored.projectiles,game.projectiles);
  for(const dt of [.01,.02,.007]){game.updateProjectiles(dt,[1000,0,0]);restored.updateProjectiles(dt,[1000,0,0]);assert.deepEqual(restored.projectiles,game.projectiles);}
});
