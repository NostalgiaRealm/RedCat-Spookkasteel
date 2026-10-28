import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator,ActorStateAnimator} from '../source/animation.js';
import {Gameplay} from '../source/gameplay.js';
import {CastleWorld} from '../source/world.js';
import {enemyRandom} from '../source/enemy-navigation.js';
import {enemyMotionRate} from '../source/enemy-animation-rules.js';
import {thinkingOnFirstUpdate} from './support/enemy-thinking.mjs';
const json=file=>JSON.parse(readFileSync(new URL('../'+file,import.meta.url)));
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-8,`${a} != ${b}`);
function fixture(type,classname='StandingEnemy',stem) {
  // Mid-encounter fixture: enemies are already thinking (gameplay.js updateEnemy).
  const game=thinkingOnFirstUpdate(new Gameplay({id:'animation-rules',spawn:{position:[0,0,60]},entities:[{classname,'%name%':'enemy',Type:String(type),Origin:'0 0 0',IsInitiallyEnabled:'1'}]}));
  const object=game.objects[0],data=json(`assets/actors/${stem||object.actorFile}.json`),geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  const animator=new ActorAnimator(data,geometry),states=new ActorStateAnimator(animator,object.stats);
  object.animationDurations=states.durations;object.animationSnapshot=()=>states.snapshot();
  return {game,object,data,geometry,animator,states};
}

test('native common motion samples retain the CRT modulo shape, with fixed knight and separate boss rates',()=>{
  for(const type of ['spider','bat','ghost','zombie','frog','skeleton','plant','gargoyle','guardian','brutusm','brutusb','maxj','witch']) {
    const object={id:type,enemyType:type,aiRandomState:1234},reference={...object};
    const expected=.8+(Math.floor(enemyRandom(reference)*32768)%10000)*.00004;
    near(enemyMotionRate(object,'attack'),expected);assert.equal(object.aiRandomState,reference.aiRandomState);
  }
  assert.equal(enemyMotionRate({enemyType:'maxd'},'attack'),1);
  assert.equal(enemyMotionRate({enemyType:'knight'},'attack'),1.8);
  const skeleton={id:'skeleton',enemyType:'skeleton',aiRandomState:1234},reference={...skeleton};
  near(enemyMotionRate(skeleton,'start'),.8+(Math.floor(enemyRandom(reference)*32768)%10000)*.00004);
});

test('knight swing, damage window and rendering use the same native 1.8 speed',()=>{
  const {game,object,states,animator}=fixture(2);
  object.yaw=0;object.stats={...object.stats,SenseRange:200,AttackRange:100,MinPlayerDistance:0};
  game.time=5;game.updateEnemy(object,0,[0,0,60],()=>true);
  assert.equal(object.animationState,'start');assert.equal(object.animationRate,1.7);
  game.time=object.animationUntil;game.updateEnemy(object,0,[0,0,60],()=>true);
  const attackStart=game.time;
  assert.equal(object.animationState,'attack');assert.equal(object.animationRate,1.8);
  const duration=2.5999739170074463/1.8;
  near(object.animationUntil,attackStart+duration);
  near(object.pendingAttack.at,attackStart+duration*.65);near(object.pendingAttack.until,attackStart+duration*.70);
  states.update(object,0,false,attackStart+duration*.65);
  near(animator.time,2.5999739170074463*.65);assert.equal(animator.timeScale,1.8);
});

test('randomized attack, hurt and death durations stay aligned with the selected motion and corpse fade',()=>{
  const {game,object,states,animator}=fixture(7,'MovingEnemy','brutusm');
  for(const action of ['attack','hurt']) {
    const duration=game.enemyAnimation(object,action,game.enemyDuration(object,action));
    near(duration,game.enemyDuration(object,action)/object.animationRate);
    near(object.animationUntil-game.time,duration);
    // A fresh renderer reconstructs the halfway phase from legacy deadlines.
    const a=new ActorAnimator(animator.data,animator.geometry),s=new ActorStateAnimator(a,object.stats);
    s.update(object,0,false,game.time+duration/2);
    near(a.time,a.clip.duration/2);
  }
  game.destroy(object);near(object.corpseUntil-object.animationUntil,5);
  assert.equal(object.animationState,'death');assert.ok(object.animationRate>=.8&&object.animationRate<1.2);
});

test('plant idle chooses all four original nonlooping clips and resamples only on completion',()=>{
  const {game,object,states,animator}=fixture(1),seen=new Set();
  for(let i=0;i<160;i++) {
    game.enemyAnimation(object,'idle');states.update(object,0,false,game.time);
    seen.add(animator.name);assert.equal(animator.loop,false);
    assert.ok(object.animationRate>=.9&&object.animationRate<1);
    near(object.animationUntil-game.time,animator.clip.duration/object.animationRate);
    const serial=object.animationSerial,rng=object.aiRandomState;
    game.time+=.01;game.enemyAnimation(object,'idle');
    assert.equal(object.animationSerial,serial);assert.equal(object.aiRandomState,rng);
    game.time=object.animationUntil+.00001;
  }
  assert.deepEqual([...seen].sort(),['idle0','idle1','idle2','idle3']);
});

test('gargoyle idle variants and selected speeds persist with their exact pose through a game save',()=>{
  const {game,object,states,animator}=fixture(3),seen=new Set();
  object.ambush.phase='awake';
  for(let i=0;i<100;i++) {
    object.animationState='attack';game.enemyAnimation(object,'idle');states.update(object,.02,false,game.time);
    seen.add(animator.name);assert.equal(animator.loop,true,'stone fallback idle remains looping');game.time+=.02;
  }
  assert.deepEqual([...seen].sort(),['idle0','idle1','static']);
  const save=JSON.parse(JSON.stringify(game.snapshot())),copy=fixture(3);copy.game.restore(save);
  copy.states.update(copy.object,0,false,game.time);
  assert.equal(copy.object.animationIdleClip,object.animationIdleClip);assert.equal(copy.object.animationRate,object.animationRate);
  assert.deepEqual(copy.animator.snapshot(),animator.snapshot());
});

test('walking keeps its sampled rate and old saved walks do not restart during grave emergence',()=>{
  const {game,object}=fixture(4,'MovingEnemy','zombie');
  game.enemyAnimation(object,'walk');const serial=object.animationSerial,rate=object.animationRate,rng=object.aiRandomState;
  for(let i=0;i<100;i++)game.enemyAnimation(object,'walk');
  assert.equal(object.animationSerial,serial);assert.equal(object.animationRate,rate);assert.equal(object.aiRandomState,rng);
  delete object.animationRate;game.enemyAnimation(object,'walk');assert.equal(object.animationSerial,serial);
});

test('blank scenery motion stays in bind pose while authored clips and all moving hands remain animated',()=>{
  const world=new CastleWorld({},{});let blanks=0,hands=0,explicit=0;
  for(const level of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a'])for(const e of json(`data/levels/${level}/level.json`).entities) {
    if(e.classname!=='AdamAnyActor')continue;
    const stem=e.ActorFileName.toLowerCase().replace(/\.act$/,'').split(/[\\/]/).pop(),data=json(`assets/actors/${stem}.json`);
    if(!data.animations.length)continue;
    const geometry=world.track(new THREE.BufferGeometry());geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
    const root=world.instantiateActor({data,geometry,materials:[world.track(new THREE.MeshBasicMaterial())]},{entity:e});
    const a=root.userData.animator;
    if(!e.MotionName&&stem!=='htorch') {
      blanks++;assert.equal(a.clip,null);const version=a.geometry.attributes.position.version;
      a.update(10);assert.equal(a.geometry.attributes.position.version,version);
      assert.deepEqual([...a.geometry.attributes.position.array],[...new Float32Array(data.positions)]);
    } else {
      if(stem==='htorch')hands++;if(e.MotionName)explicit++;
      assert.ok(a.clip);assert.equal(a.name.toLowerCase(),(e.MotionName||data.animations[0].name).toLowerCase());
    }
  }
  assert.equal(blanks,4);assert.equal(hands,32);assert.equal(explicit,56);world.dispose();
});
