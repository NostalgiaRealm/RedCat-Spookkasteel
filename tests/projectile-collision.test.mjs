import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';
import {NATIVE_PROJECTILE_RADIUS,restoreProjectileCollision} from '../src/projectile-collision.js';
import {sweepActor} from '../src/player-projectiles.js';
const level={id:'lvl00a',entities:[],spawn:{position:[0,0,0]}};

test('native thin projectile sweep hits the body but no longer catches empty space next to it',()=>{
  const actor={position:[0,0,0],collisionMins:[-18,0,-18],collisionMaxs:[18,56,18]};
  assert.ok(sweepActor([17.99,28,-100],[17.99,28,100],actor,NATIVE_PROJECTILE_RADIUS)!==null);
  assert.equal(sweepActor([18.1,28,-100],[18.1,28,100],actor,NATIVE_PROJECTILE_RADIUS),null);
  assert.ok(sweepActor([18.1,28,-100],[18.1,28,100],actor,3)!==null,'the old visual-size hull produces the false hit');
});

test('all generated shots use the recovered collision extent regardless of visual sprite size',()=>{
  const game=new Gameplay(level);game.attack([0,0,0],[0,0,-1]);game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();
  for(const enemyType of ['brutusm','brutusb','witch','maxj','spider','frog','plant'])game.enemyProjectile({id:enemyType,position:[0,0,-100],enemyType,stats:{},aiRandomState:1},[0,0,0]);
  assert.equal(game.projectiles.length,8);
  for(const shot of game.projectiles)assert.equal(shot.radius,NATIVE_PROJECTILE_RADIUS);
  assert.ok(new Set(game.projectiles.map(shot=>shot.spriteScale)).size>1);
  const save=game.snapshot();save.projectiles.forEach(shot=>{shot.radius=4.8;delete shot.collisionProfile;});
  const restored=new Gameplay(level,{save});
  for(const shot of restored.projectiles)assert.equal(shot.radius,NATIVE_PROJECTILE_RADIUS);
  const custom={id:'custom',radius:8};restoreProjectileCollision(custom);assert.equal(custom.radius,8);
});

test('projectile sweep resolves the earliest impact without tunnelling or applying hits through a wall',()=>{
  const events=[],game=new Gameplay(level,{onEvent:e=>events.push(e)});
  const enemy={id:'target',kind:'enemy',enabled:true,visible:true,health:5,position:[0,0,-50],collisionMins:[-10,0,-10],collisionMaxs:[10,56,10],stats:{},entity:{}};
  game.objects.push(enemy);
  const shoot=()=>{game.attackCooldown=0;game.attack([0,0,0],[0,0,-1]);game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();};
  shoot();game.updateProjectiles(.5,[0,0,0],(a,b)=>({fraction:.1,end:a.map((v,i)=>v+(b[i]-v)*.1)}));
  assert.equal(enemy.health,5);assert.equal(game.projectiles.length,0);assert.equal(events.findLast(e=>e.type==='playerProjectileImpact').target,null);
  shoot();game.updateProjectiles(.5,[0,0,0],(a,b)=>({fraction:1,end:b}));
  assert.equal(enemy.health,4);assert.equal(game.projectiles.length,0);assert.equal(events.findLast(e=>e.type==='playerProjectileImpact').target,'target');
});
