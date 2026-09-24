import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';
import {GAMEPLAY_SETTINGS} from '../src/gameplay-settings.js';
import {enemyProjectileLifetime} from '../src/enemy-projectiles.js';

const level={id:'projectile-flight-fixture',entities:[]};
const farPlayer=[10000,97,0];
const make=()=>new Gameplay(level);
const enemy=(enemyType,extra={})=>({id:enemyType,enemyType,position:[0,100,0],stats:{},...extra});
const near=(actual,expected)=>assert.ok(Math.abs(actual-expected)<1e-8,`${actual} ~= ${expected}`);
const shoot=(game,type,extra={})=>{game.enemyProjectile(enemy(type,extra),farPlayer);return game.projectiles.at(-1);};

test('native enemy initial speed and gravity follow authored projectile classes, including both Brutus attacks',()=>{
  for(const [type,extra,key] of [
    ['brutusm',{},'RcMushRoom'],['brutusb',{},'RcBone'],['brutusb',{boneSkullPhase:true},'RcSkull'],
    ['maxj',{},'RcJesterBall'],['maxd',{},'RcMagma'],['witch',{},'RcMagicBall'],
    ['frog',{},'RcPoison'],['plant',{},'RcGoo'],['spider',{},'RcEnemyShot']]){
    const game=make(),p=shoot(game,type,extra),stats=GAMEPLAY_SETTINGS.projectilenormal[key];
    assert.deepEqual(p.velocity,[stats.InitialSpeed,0,0],key);
    assert.equal(p.gravity,stats.Gravity*32,key);assert.equal(p.gravityUnits,'world');
    assert.ok(p.life>=stats.MinimumLifeTimeInSeconds&&p.life<=stats.MaximumLifeTimeInSeconds,key);
    assert.equal(p.acceleration,undefined,'the native enemy constructors leave acceleration zero');
  }
});

test('Brutus bones use native gravity before each movement step and retain forward speed',()=>{
  const game=make(),p=shoot(game,'brutusb');
  for(let frame=1;frame<=60;frame++){
    game.updateProjectiles(1/60,farPlayer);
    near(p.position[0],500*frame/60);near(p.velocity[1],-16*frame/60);
    near(p.position[1],125-16*frame*(frame+1)/(2*60**2));
  }
  near(p.position[0],500);near(p.velocity[0],500);near(p.velocity[1],-16);
  near(p.position[1],125-16*61/120);
});

test('forest Brutus mushrooms fly at InitialSpeed, with no invented acceleration or fallback Speed override',()=>{
  const game=make(),p=shoot(game,'brutusm');
  for(let frame=0;frame<50;frame++)game.updateProjectiles(.02,farPlayer);
  near(p.position[0],250);near(p.position[1],125);assert.deepEqual(p.velocity,[250,0,0]);
});

test('native lifetimes sample the full authored range on 1/10000 steps and truncate to milliseconds',()=>{
  const bone=GAMEPLAY_SETTINGS.projectilenormal.RcBone;
  assert.equal(enemyProjectileLifetime(bone,0),4);
  assert.equal(enemyProjectileLifetime(bone,.5),5);
  assert.equal(enemyProjectileLifetime(bone,.99999),5.999);
  assert.equal(enemyProjectileLifetime(bone,.1234),enemyProjectileLifetime(bone,.1234999));
  assert.equal(enemyProjectileLifetime(GAMEPLAY_SETTINGS.projectilenormal.RcJesterBall,.5),6.5);
  assert.equal(enemyProjectileLifetime(GAMEPLAY_SETTINGS.projectilenormal.RcGoo,.5),15);
  for(const random of [0,.23,.99999])assert.equal(enemyProjectileLifetime(GAMEPLAY_SETTINGS.projectilenormal.RcMushRoom,random),5);
});

test('sampled lifetimes and the next salvo remain deterministic after save/load',()=>{
  const fixture={...level,entities:[{classname:'MovingEnemy','%name%':'bones',Type:'6',Origin:'0 100 0'}]};
  const original=new Gameplay(fixture);
  original.enemyProjectile(original.objects[0],farPlayer);
  const saved=JSON.parse(JSON.stringify(original.snapshot())),restored=new Gameplay(fixture,{save:saved});
  const lives=[];
  for(let shot=0;shot<8;shot++){
    for(const game of [original,restored])game.enemyProjectile(game.objects[0],farPlayer);
    assert.deepEqual(original.projectiles,restored.projectiles);
    lives.push(original.projectiles.at(-1).life);
  }
  assert.ok(new Set(lives).size>1,'variable native lifetimes must not always select the maximum');
});

test('witch magic applies native shared movement, then homes toward the moved player at authored speed',()=>{
  const game=make(),p=shoot(game,'witch'),movedPlayer=[0,97,1000];
  game.updateProjectiles(.1,movedPlayer);
  near(p.position[0],8);near(p.position[1],124.04);near(p.position[2],0);
  const toCenter=[-8,.96,1000],length=Math.hypot(...toCenter);
  p.velocity.forEach((value,index)=>near(value,toCenter[index]/length*80));
  near(Math.hypot(...p.velocity),80);
  game.updateProjectiles(.1,movedPlayer);
  assert.ok(p.position[0]<8&&p.position[2]>0,'the next step uses the new heading');
  near(Math.hypot(...p.velocity),80);
});

test('legacy generated enemy gravity migrates exactly once without altering player or custom units',()=>{
  const game=make();shoot(game,'brutusb');shoot(game,'witch');
  const saved=JSON.parse(JSON.stringify(game.snapshot()));
  for(const p of saved.projectiles){p.gravity/=32;delete p.gravityUnits;delete p.homingSpeed;}
  const custom={...saved.projectiles[0],id:'test-world-units',gravity:.5};
  const player={...custom,id:'enemy-projectile-99',owner:'player'};
  saved.projectiles.push(custom,player);
  const restored=new Gameplay(level,{save:saved});
  assert.deepEqual(restored.projectiles.map(p=>p.gravity),[16,96,.5,.5]);
  assert.equal(restored.projectiles[1].homingSpeed,80);
  assert.equal(restored.projectiles[0].life,saved.projectiles[0].life,'do not reroll in-flight lifetimes');
  const reloaded=new Gameplay(level,{save:JSON.parse(JSON.stringify(restored.snapshot()))});
  assert.deepEqual(reloaded.projectiles,restored.projectiles);
});

test('frozen enemy ammunition preserves the entire ballistic or homing flight state',()=>{
  const game=make();shoot(game,'brutusb');shoot(game,'witch');
  game.scripts={enemiesFrozen:true};const before=structuredClone(game.projectiles);
  game.updateProjectiles(.2,[0,0,1000]);assert.deepEqual(game.projectiles,before);
});
