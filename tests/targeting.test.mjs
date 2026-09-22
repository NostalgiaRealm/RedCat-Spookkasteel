import test from 'node:test';
import assert from 'node:assert/strict';
import {EnemyTargeting,targetAimPoint,targetableEnemy,targetMarkerPose} from '../src/targeting.js';
import {Gameplay} from '../src/gameplay.js';
const enemy=(id,position)=>({id,position,kind:'enemy',health:6,enabled:true});
const tick=(system,objects,extra={})=>system.update({time:0,position:[0,0,0],yaw:0,objects,...extra});
test('original front hemisphere/range/nearest visibility selects the ring target',()=>{
  const system=new EnemyTargeting(),behind=enemy('behind',[0,0,30]),far=enemy('far',[0,0,-481]),wall=enemy('wall',[0,0,-50]),near=enemy('near',[50,0,-60]),other=enemy('other',[0,0,-200]);
  assert.equal(tick(system,[behind,far,wall,other,near],{lineOfSight:(a,b,e)=>e.id!=='wall'}),near);
  assert.equal(system.locked,false);
  tick(system,[near],{time:.1,attack:true});assert.equal(system.locked,true);
  tick(system,[near],{time:.2,attack:false});assert.equal(system.locked,false);
});
test('500 ms selection cache, stable firing lock and immediate dead/hidden invalidation',()=>{
  const system=new EnemyTargeting(),a=enemy('a',[0,0,-200]),b=enemy('b',[0,0,-300]);
  assert.equal(tick(system,[a,b]),a);b.position[2]=-80;
  assert.equal(tick(system,[a,b],{time:.3}),a);
  assert.equal(tick(system,[a,b],{time:.5}),b);
  tick(system,[a,b],{time:.6,attack:true});a.position[2]=-30;
  assert.equal(tick(system,[a,b],{time:1.1,attack:true}),b);
  b.health=0;assert.equal(tick(system,[a,b],{time:1.2,attack:true}),a);
  a.visible=false;assert.equal(tick(system,[a,b],{time:1.21}),null);
});
test('dormant ambush enemies are not revealed by targeting, waking ones are targetable',()=>{
  const a=enemy('skeleton',[0,0,-60]);a.ambush={phase:'dormant'};assert.equal(targetableEnemy(a),false);
  a.ambush.phase='waking';assert.equal(targetableEnemy(a),true);
  const system=new EnemyTargeting();tick(system,[a],{attack:true});tick(system,[a],{enabled:false});assert.equal(system.target,null);assert.equal(system.locked,false);
});
test('locked pellet aims at the original 80% actor height from actual animated hand',()=>{
  const game=new Gameplay({entities:[],spawn:{position:[0,0,0]}});
  game.state.skill=1;game.attack([0,0,0],[0,0,-1]);game.time=2;
  const target=enemy('bat',[80,120,-200]),point=targetAimPoint(target),hand=[20,30,-10];
  game.releasePlayerAttack([0,0,0],[0,0,-1],()=>hand,()=>point);
  const shot=game.projectiles[0],distance=Math.hypot(...point.map((v,i)=>v-hand[i]));
  assert.deepEqual(shot.position,hand);
  shot.velocity.forEach((v,i)=>assert.ok(Math.abs(v/Math.hypot(...shot.velocity)-(point[i]-hand[i])/distance)<1e-10));
});

test('original target ring pulses, rotates, cycles colours and sits in front of actor hull',()=>{
 const a=enemy('knight',[0,0,0]),camera=[0,28,200],start=targetMarkerPose(a,camera,0),middle=targetMarkerPose(a,camera,1);
 assert.equal(start.width,25);assert.equal(middle.width,50);assert.equal(targetMarkerPose(a,camera,2).width,25);
 assert.equal(middle.rotation,-3.5);assert.deepEqual(start.color,[20/255,1,20/255]);
 assert.ok(start.position[2]>18);assert.ok(Math.abs(start.position[2]-28)<1e-8);
});
