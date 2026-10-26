import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';
import {ENEMY_PROJECTILE_STEP,restoreEnemyProjectileFlight} from '../src/enemy-projectiles.js';
const level={id:'enemy-flight-native',entities:[]},target=[0,97,1000],far=[10000,97,0];
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-8,`${a} != ${b}`);
const gameWith=type=>{
  const game=new Gameplay(level);
  game.enemyProjectile({id:type,enemyType:type,position:[0,100,0],stats:{},aiRandomState:1},far);
  return game;
};
const advance=(game,seconds,hz)=>{for(let t=0;t<seconds-1e-12;){const dt=Math.min(1/hz,seconds-t);game.updateProjectiles(dt,target);t+=dt;}};

test('ballistic and homing enemy flight use identical canonical ticks at low and high display rates',()=>{
  for(const type of ['brutusb','witch','frog','maxj']){
    const reference=gameWith(type);advance(reference,1.003,60);
    for(const hz of [10,30,120,144,240]){
      const game=gameWith(type);advance(game,1.003,hz);
      const a=game.projectiles[0],b=reference.projectiles[0];assert.ok(a&&b);
      a.position.forEach((v,i)=>near(v,b.position[i]));a.velocity.forEach((v,i)=>near(v,b.velocity[i]));
      near(a.enemyFlightPhase,b.enemyFlightPhase);near(a.age,b.age);assert.equal(a.enemyFlightDebt,0);
    }
  }
});

test('partial steps move smoothly but witch steering waits until the native tick completes',()=>{
  const game=gameWith('witch'),p=game.projectiles[0];
  game.updateProjectiles(1/240,target);
  near(p.position[0],80/240);near(p.position[1],125-96/60/240);near(p.position[2],0);
  assert.deepEqual(p.velocity,[80,-96/60,0]);near(p.enemyFlightPhase,1/240);
  for(let i=0;i<3;i++)game.updateProjectiles(1/240,target);
  assert.ok(p.velocity[2]>79);assert.equal(p.enemyFlightPhase,0);
});

test('enemy collision sweeps follow every curved segment and stop at the first wall',()=>{
  const events=[],game=gameWith('witch'),p=game.projectiles[0],segments=[];
  game.onEvent=e=>events.push(e);
  game.updateProjectiles(.1,target,(a,b)=>{
    segments.push([[...a],[...b]]);
    return segments.length===2?{fraction:.5,end:a.map((v,i)=>v+(b[i]-v)*.5)}:{fraction:1,end:b};
  });
  assert.equal(segments.length,2);near(segments[0][1][2],0);assert.ok(segments[1][1][2]>0);
  assert.equal(game.projectiles.length,0);assert.equal(events.filter(e=>e.type==='enemyProjectileImpact').length,1);
  near(p.age,2/60);
});

test('large direct updates defer flight within a bounded trace budget and persist the debt',()=>{
  const game=gameWith('brutusb'),p=game.projectiles[0];game.updateProjectiles(.007,far);
  let traces=0;game.updateProjectiles(1e6,far,(a,b)=>{traces++;return {fraction:1,end:b};});
  assert.ok(traces<=7,`bounded traces: ${traces}`);near(p.age,.107);
  near(p.enemyFlightDebt,p.life-p.age);
  const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  assert.deepEqual(restored.projectiles,game.projectiles);
  for(let tick=0;tick<70&&game.projectiles.length;tick++){
    for(const g of [game,restored])g.updateProjectiles(0,far);
    assert.deepEqual(restored.projectiles,game.projectiles);
  }
  assert.equal(game.projectiles.length,0,'expiry follows consumed flight, not the deferred time');
});

test('fractional enemy flight saves continue exactly and invalid or legacy phases reset safely',()=>{
  for(const type of ['brutusb','witch']){
    const game=gameWith(type);game.updateProjectiles(.007,target);
    const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
    assert.deepEqual(restored.projectiles,game.projectiles);
    for(const dt of [.01,.02,.007,.1]){game.updateProjectiles(dt,target);restored.updateProjectiles(dt,target);assert.deepEqual(restored.projectiles,game.projectiles);}
  }
  for(const invalid of [undefined,NaN,Infinity,-1,ENEMY_PROJECTILE_STEP,999]){
    const p={id:'custom',life:5,age:1,enemyFlightPhase:invalid,enemyFlightDebt:invalid};restoreEnemyProjectileFlight(p);
    assert.equal(p.enemyFlightPhase,0);assert.ok(p.enemyFlightDebt>=0&&p.enemyFlightDebt<=4);
  }
  const game=gameWith('witch');game.updateProjectiles(.007,target);game.updateProjectiles(1,target);
  game.scripts={enemiesFrozen:true};const before=structuredClone(game.projectiles);
  game.updateProjectiles(.1,target);assert.deepEqual(game.projectiles,before);
});

test('gravity-free non-homing shots retain a single collinear sweep per display update',()=>{
  const game=gameWith('brutusm');let traces=0;
  game.updateProjectiles(.1,far,(a,b)=>{traces++;return {fraction:1,end:b};});
  assert.equal(traces,1);near(game.projectiles[0].position[0],25);assert.equal(game.projectiles[0].enemyFlightDebt,0);
});
