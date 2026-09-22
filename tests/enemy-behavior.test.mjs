import test from 'node:test';
import assert from 'node:assert/strict';
import { Gameplay } from '../src/gameplay.js';
import { GAMEPLAY_SETTINGS } from '../src/gameplay-settings.js';
import { sweepPlayer } from '../src/enemies.js';

const enemy=(subtype=1,extra={})=>({classname:'MovingEnemy','%name%':'spider',DaviName:'spider',Type:'1',SubType:String(subtype),Origin:'0 0 0',...extra});
const level=(entities=[])=>({id:'lvl01a',spawn:{position:[0,0,0],orientation:0},entities});
function fixture(entities=[enemy()],options={}) {
  const events=[],game=new Gameplay(level(entities),{onEvent:e=>events.push(e),...options});
  for(const object of game.objects)object.animationDurations={attack:1.6,hurt:.8,death:1.6};
  return {game,events,spider:game.objects[0]};
}
function advance(game,seconds,position=[0,0,170],options={}) {
  for(let time=0;time<seconds-1e-8;time+=.05)game.update(Math.min(.05,seconds-time),position,options);
}
const clearTrace=(a,b)=>({fraction:1,end:[...b],normal:[0,1,0],startSolid:false});
const groundTrace=(a,b)=>{
  if(b[1]<0&&a[1]>=0) {
    const fraction=a[1]/(a[1]-b[1]);
    return {fraction,end:a.map((v,i)=>v+(b[i]-v)*fraction),normal:[0,1,0],startSolid:false};
  }
  return clearTrace(a,b);
};

test('spider variants use original melee damage versus red-spider projectile settings',()=>{
  for(const subtype of [1,2]) {
    const {game,spider,events}=fixture([enemy(subtype)]);
    game.update(.05,[0,0,80]);
    assert.equal(spider.animationState,'attack');assert.equal(game.state.health,10,'melee waits for its strike pose');
    assert.equal(events.filter(e=>e.type==='enemyAction'&&e.action==='attack').length,0,'attack audio waits for the strike');
    advance(game,.9,[0,0,80]);
    assert.equal(game.state.health,10-GAMEPLAY_SETTINGS['spider'+subtype].Normal.Damage);
    assert.equal(game.projectiles.length,0);
    assert.equal(events.filter(e=>e.type==='enemyAction'&&e.action==='attack').length,1);
  }
  const {game,spider,events}=fixture([enemy(3)]);
  game.update(.05,[0,0,170]);
  assert.equal(events.filter(e=>e.type==='enemyAction'&&e.action==='attack').length,0);
  advance(game,.85);assert.equal(events.filter(e=>e.type==='enemyAction'&&e.action==='attack').length,1);
  assert.equal(spider.ranged,true);assert.equal(game.projectiles.length,1);
  const shot=game.projectiles[0];
  assert.equal(shot.kind,'enemyShot');assert.equal(shot.damage,2);assert.equal(shot.gravity,0);
  assert.ok(Math.abs(Math.hypot(...shot.velocity)-400)<1e-6);
  assert.equal(game.state.health,10,'ranged attacks cause no immediate damage');
  advance(game,.5);assert.equal(game.state.health,8);assert.equal(game.projectiles.length,0);
});

test('red spider shots stop at BSP walls and can be dodged',()=>{
  const {game}=fixture([enemy(3)]);game.update(.05,[0,0,170]);advance(game,.8);
  const wall=(a,b)=>b[2]>70?{fraction:(70-a[2])/(b[2]-a[2]),end:[b[0],b[1],70],normal:[0,0,-1]}:clearTrace(a,b);
  advance(game,.5,[0,0,170],{traceProjectile:wall});
  assert.equal(game.state.health,10);assert.equal(game.projectiles.length,0);
  game.objects[0].attackTimer=0;game.objects[0].animationUntil=0;
  game.update(.05,[0,0,170]);advance(game,.85);
  assert.equal(game.projectiles.length,1);
  advance(game,.6,[100,0,170]);assert.equal(game.state.health,10);assert.equal(game.projectiles.length,1);
});

test('swept collision catches a player crossed entirely within one frame',()=>{
  assert.ok(sweepPlayer([0,28,-100],[0,28,100],[0,0,0],2)>0);
  assert.equal(sweepPlayer([30,28,-100],[30,28,100],[0,0,0],2),null);
  const {game}=fixture([]);
  game.projectiles=[{id:'fast',sourceId:'spider',kind:'enemyShot',position:[0,28,-100],velocity:[0,0,2000],radius:2,life:5,age:0,gravity:0,damage:2}];
  game.update(.1,[0,0,0]);assert.equal(game.state.health,8);assert.equal(game.projectiles.length,0);
});

test('enemy movement walks along terrain, falls to floor and respects blocking walls',()=>{
  const {game,spider}=fixture([enemy(1,{Origin:'0 30 0'})]);
  advance(game,1,[0,0,300],{traceEnemy:groundTrace});
  assert.equal(spider.position[1],0);assert.equal(spider.grounded,true);
  assert.equal(spider.animationState,'walk');assert.ok(spider.position[2]>40);
  const before=[...spider.position],blocked=(a,b)=>Math.abs(b[2]-a[2])>.01?{fraction:0,end:[...a],normal:[0,0,-1],startSolid:false}:groundTrace(a,b);
  advance(game,.1,[0,0,300],{traceEnemy:blocked});
  assert.deepEqual(spider.position,before);assert.equal(spider.animationState,'idle');
  const flying=fixture([enemy(1,{Type:'2',Origin:'0 30 0'})]);
  advance(flying.game,.1,[0,30,300],{traceEnemy:groundTrace});assert.equal(flying.spider.position[1],30);
});

test('hurt and death react once, cancel attacks and retain a timed death state',()=>{
  const {game,spider,events}=fixture([enemy(3)]);
  game.update(.05,[0,0,170]);game.hurtEnemy(spider,1);
  assert.equal(spider.animationState,'hurt');assert.equal(spider.pendingAttack,null);
  advance(game,.9);assert.equal(game.projectiles.length,0);
  game.destroy(spider);game.destroy(spider);
  assert.equal(spider.animationState,'death');assert.equal(spider.health,0);assert.ok(spider.corpseUntil>spider.animationUntil);
  assert.equal(events.filter(e=>e.type==='enemyAction'&&e.action==='death').length,1);
  assert.equal(events.filter(e=>e.type==='enemyAction'&&e.action==='hurt').length,1);
});

test('enemy audio actions are staggered, audible-nearby only, and attacks respect cadence',()=>{
  const {game,events}=fixture([enemy(3)]);
  advance(game,2,[0,0,5000]);assert.equal(events.length,0);
  advance(game,8,[0,0,170]);
  const attacks=events.filter(e=>e.type==='enemyAction'&&e.action==='attack');
  assert.ok(attacks.length>=2&&attacks.length<=4);
  assert.equal(events.filter(e=>e.type==='enemyAction'&&e.action==='alert').length,1);
  assert.ok(events.filter(e=>e.type==='enemyAction'&&e.action==='idle').length<=2);
});

test('cutscenes and enemy freeze pause pending attacks, projectiles and animation deadlines',()=>{
  const {game,spider}=fixture([enemy(3)]);
  game.update(.05,[0,0,170]);const until=spider.animationUntil;
  game.scripts={cutscene:true,enemiesFrozen:false};advance(game,2);
  assert.equal(game.projectiles.length,0);assert.ok(Math.abs(spider.animationUntil-until-2)<1e-6);
  game.scripts.cutscene=false;advance(game,.8);assert.equal(game.projectiles.length,1);
  const position=[...game.projectiles[0].position];game.scripts.enemiesFrozen=true;advance(game,1);
  assert.deepEqual(game.projectiles[0].position,position);assert.equal(game.state.health,10);
});

test('saved enemy animation, salvo cooldown and projectile flight resume without refiring',()=>{
  const {game,spider}=fixture([enemy(3)]);game.update(.05,[0,0,170]);advance(game,.9);
  const snapshot=JSON.parse(JSON.stringify(game.snapshot())),restored=new Gameplay(game.level,{save:snapshot});
  assert.equal(restored.objects[0].animationState,spider.animationState);
  assert.equal(restored.objects[0].attackTimer,spider.attackTimer);
  assert.deepEqual(restored.projectiles,game.projectiles);
  advance(restored,.5);assert.equal(restored.state.health,8);assert.equal(restored.projectiles.length,0);
});

test('player pellets hit the nearest brush and emit enemy hurt only on arrival',()=>{
  const {game,events}=fixture([enemy(1,{Origin:'0 0 -200'})]);
  const fire=()=>{game.attackCooldown=0;game.attack([0,0,0],[0,0,-1]);game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();};
  const wall=(start,end)=>end[2]<=-100?{fraction:(-100-start[2])/(end[2]-start[2]),modelIndex:0}:{fraction:1,end};
  fire();assert.equal(events.filter(e=>e.type==='playerProjectileImpact').length,0);
  for(let i=0;i<10;i++)game.updateProjectiles(.1,[0,0,0],wall);
  let hit=events.find(e=>e.type==='playerProjectileImpact');assert.equal(hit.target,null);assert.deepEqual(hit.position,[0,38,-100]);
  assert.equal(game.objects[0].health,5);
  fire();assert.equal(game.objects[0].health,5);
  for(let i=0;i<10;i++)game.updateProjectiles(.1,[0,0,0],clearTrace);
  assert.equal(game.objects[0].health,4);assert.equal(game.objects[0].animationState,'hurt');
  assert.equal(events.filter(e=>e.type==='enemyAction'&&e.action==='hurt').length,1);
});
