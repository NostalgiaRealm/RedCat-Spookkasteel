import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {Gameplay} from '../src/gameplay.js';
import {ActorAnimator,ActorStateAnimator} from '../src/animation.js';
const read=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-6,`${a} != ${b}`);
function setup(type) {
  const level={id:'lifecycle',entities:[{classname:type===6?'MovingEnemy':'StandingEnemy','%name%':'enemy',Type:String(type),SubType:'1',Origin:'0 0 0',IsInitiallyEnabled:'1'}]};
  const game=new Gameplay(level,{deferInit:true}),object=game.objects[0],data=read(`assets/actors/${object.actorFile}.json`),geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  const animator=new ActorAnimator(data,geometry),states=new ActorStateAnimator(animator,object.stats);
  object.animationDurations=states.durations;object.animationSnapshot=()=>states.snapshot();
  object.stats={...object.stats,SenseRange:100,VisualRange:200,AttackRange:40,TimeToRememberVisual:.5};object.yaw=0;
  const tick=(dt,player=[0,0,80],visible=true)=>{game.time+=dt;game.updateEnemy(object,dt,player,()=>visible);states.update(object,dt,false,game.time);};
  return {game,object,animator,states,geometry,tick,level};
}

test('knight wakes at 1.7, waits before attacking, and retracts at -1.7 after memory expires',()=>{
  const {game,object,animator,states,geometry,tick}=setup(2);
  states.update(object,0,false,game.time);assert.equal(animator.name,'start');near(animator.time,0);
  tick(0);assert.equal(object.ambush.phase,'waking');assert.ok(!object.pendingAttack);
  near(object.animationRate,1.7);const wake=object.ambush.duration;
  tick(wake/2);assert.equal(object.ambush.phase,'waking');near(animator.time,animator.clip.duration/2);
  tick(wake/2+.001);assert.equal(object.ambush.phase,'awake');assert.equal(animator.loop,true);
  tick(.6,[0,0,1000],false);assert.equal(object.ambush.phase,'retracting');assert.equal(object.animationRate,-1.7);
  // Entry starts at the final authored frame; subsequent updates move to zero.
  const start=animator.time;tick(.1,[0,0,1000],false);assert.ok(animator.time<start);
  tick(wake,[0,0,1000],false);assert.equal(object.ambush.phase,'dormant');near(animator.time,0);
  const version=geometry.attributes.position.version;tick(1,[0,0,1000],false);assert.equal(geometry.attributes.position.version,version);
  tick(0);assert.equal(object.ambush.phase,'waking');geometry.dispose();
});

test('reverse start pose and lifecycle deadline survive saves without losing playback direction',()=>{
  const original=setup(2);original.tick(0);original.tick(1);original.tick(.6,[0,0,1000],false);original.tick(.1,[0,0,1000],false);
  const saved=JSON.parse(JSON.stringify(original.game.snapshot())),copy=setup(2);copy.game.restore(saved);
  copy.states.update(copy.object,0,false,copy.game.time);
  assert.equal(copy.object.ambush.phase,'retracting');assert.equal(copy.object.animationRate,-1.7);
  assert.deepEqual(copy.animator.snapshot(),original.animator.snapshot());
  near(copy.object.animationUntil,original.object.animationUntil);
  // Reacquiring a target interrupts the reverse state with a fresh wake.
  copy.tick(.01);assert.equal(copy.object.ambush.phase,'waking');assert.equal(copy.animator.timeScale,1.7);
  original.geometry.dispose();copy.geometry.dispose();
});

test('gargoyles use the native no-start idle fallback and settle once their alert is lost',()=>{
  const {game,object,animator,states,geometry,tick}=setup(3);
  assert.equal(animator.prepared.has('start'),false);states.update(object,0,false,0);
  const version=geometry.attributes.position.version;tick(.5,[0,0,1000],false);assert.equal(geometry.attributes.position.version,version);
  tick(0);assert.equal(object.ambush.phase,'awake');assert.equal(object.animationState,'idle');assert.equal(animator.loop,true);
  tick(.6,[0,0,1000],false);assert.equal(object.ambush.phase,'dormant');
  assert.equal(animator.loop,false);tick(10,[0,0,1000],false);
  const snapshot=animator.snapshot();tick(1,[0,0,1000],false);assert.deepEqual(animator.snapshot(),snapshot);
  tick(0);assert.equal(object.ambush.phase,'awake');assert.equal(animator.loop,true);
  // An already-committed salvo is owned by the attack child, even offscreen.
  object.ambush.phase='awake';object.animationState='attack';object.animationUntil=game.time+1;object.salvoRemaining=1;
  tick(.1,[0,0,1000],false);assert.equal(object.ambush.phase,'awake');geometry.dispose();
});

test('skeleton wake uses the sampled native rate, then returns to a pile after losing the player',()=>{
  const {game,object,animator,states,geometry,tick}=setup(6);
  states.update(object,0,false,0);assert.equal(animator.time,0);tick(0);
  assert.equal(object.ambush.phase,'waking');assert.ok(object.animationRate>=.8&&object.animationRate<1.2);
  near(object.ambush.duration,animator.clip.duration/object.animationRate);
  tick(object.ambush.duration+.01);assert.equal(object.ambush.phase,'awake');
  object.alerted=false;object.lastSeenAt=game.time-1;object.animationUntil=game.time;
  tick(0,[0,0,1000],false);assert.equal(object.ambush.phase,'retracting');assert.equal(object.animationRate,-1);
  tick(.2,[0,0,1000],false);assert.ok(animator.time>0);assert.ok(animator.time<animator.clip.duration);
  tick(0);assert.equal(object.ambush.phase,'waking');assert.ok(object.animationRate>0);
  tick(object.ambush.duration+.01);object.alerted=false;object.lastSeenAt=game.time-1;object.animationUntil=game.time;
  tick(0,[0,0,1000],false);assert.equal(object.ambush.phase,'retracting');
  tick(object.ambush.duration,[0,0,1000],false);assert.equal(object.ambush.phase,'dormant');near(animator.time,0);
  geometry.dispose();
});
