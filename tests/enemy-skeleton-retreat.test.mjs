import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {Gameplay} from '../source/gameplay.js';
import {ActorAnimator,ActorStateAnimator} from '../source/animation.js';
import {thinkingEnemy} from './support/enemy-thinking.mjs';

const data=JSON.parse(readFileSync(new URL('../assets/actors/skeleton.json',import.meta.url)));
const close=(actual,expected,message='values agree')=>assert.ok(Math.abs(actual-expected)<1e-8,`${message}: ${actual} != ${expected}`);
const waypoint=(id,z,next)=>({classname:'GrobberPathPoint','%name%':id,Origin:`0 0 ${z}`,...(next?{WayPoint1:next}:{})});
const level={id:'skeleton-retreat',spawn:{position:[5000,0,0]},entities:[waypoint('a',0,'b'),waypoint('b',-160,'c'),waypoint('c',-320),
  {classname:'MovingEnemy','%name%':'skeleton',Type:'6',Origin:'0 0 0',StartPoint:'a',StartOrientation:'6'}]};
const blockedProjectile=(from)=>({fraction:0,end:[...from],startSolid:false,normal:[0,0,-1]});

function fixture(t,factor=1,save=null) {
  const game=new Gameplay(level,{save}),object=game.objects.find(value=>value.kind==='enemy');
  object.stats={...object.stats,WalkMotionFactor:factor,AttackRange:100,MinPlayerDistance:30,Speed:40,
    SenseRange:1000,VisualRange:1000,TimeToRememberVisual:.02,WaitTimeAfterSalvo:.25};
  if(!save){object.salvoSize=1;object.ambush.phase='awake';object.animationState='idle';object.yaw=0;
    // Mid-encounter: already thinking, with a sight test of RedCat at the default tick position.
    thinkingEnemy(game,object,[0,0,10],()=>true);}
  const geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
  const animator=new ActorAnimator(data,geometry),states=new ActorStateAnimator(animator,object.stats);
  object.animationDurations=states.durations;object.animationSnapshot=()=>states.snapshot();
  t.after(()=>geometry.dispose());states.update(object,0,false,game.time);
  const tick=(seconds,player=[0,0,10],visible=true)=>{
    for(let elapsed=0;elapsed<seconds-1e-9;){
      const dt=Math.min(.01,seconds-elapsed);
      game.update(dt,player,{lineOfSight:()=>visible,traceProjectile:blockedProjectile});
      states.update(object,dt,!!(game.scripts?.cutscene||game.scripts?.enemiesFrozen),game.time);elapsed+=dt;
    }
  };
  return {game,object,animator,states,geometry,tick,factor};
}

function beginRetreat(f) {
  f.tick(.01);assert.equal(f.object.nativeShooter.phase,'shoot');
  for(let seconds=0;f.object.nativeShooter.phase!=='retreat'&&seconds<5;seconds+=.01)f.tick(.01);
  assert.equal(f.object.nativeShooter.phase,'retreat');assert.equal(f.object.nativeShooter.retreatStarted,true);
  return f.object.animationUntil-f.game.time;
}

for(const factor of [1,2])test(`imported skeleton backward clip and Gameplay deadline use WalkMotionFactor squared (${factor})`,t=>{
  const f=fixture(t,factor),duration=beginRetreat(f),raw=f.animator.prepared.get('walkbw').clip.duration;
  close(raw,1.333340048789978,'original clip duration');close(duration,raw/(factor*factor),'simulation duration');
  assert.equal(f.object.animationState,'walkback');assert.equal(f.object.animationLoop,false);
  assert.equal(f.animator.name,'walkbw');assert.equal(f.animator.loop,false);assert.equal(f.animator.timeScale,factor*factor);
  close(f.object.animationRate,factor,'explicit native motion factor');
  const before=f.animator.time,position=[...f.object.position],serial=f.object.animationSerial;
  f.tick(.05);close(f.animator.time-before,.05*factor*factor,'rendered playback rate');
  assert.ok(f.object.position[2]<position[2],'physical movement follows the retreat node');
  close(f.object.yaw,0,'the body faces RedCat while moving backward');assert.equal(f.object.animationSerial,serial);
  assert.ok(f.geometry.attributes.position.array.every(Number.isFinite));
});

test('retreat can stop and resume on range while its original clip, edge, and refreshed memory remain active',t=>{
  const f=fixture(t);beginRetreat(f);
  const position=[...f.object.position],serial=f.object.animationSerial,deadline=f.object.animationUntil,target=f.object.patrol.target;
  f.tick(.1,[0,0,300],false);
  assert.deepEqual(f.object.position,position);assert.equal(f.object.nativeShooter.phase,'retreat');
  assert.equal(f.object.animationState,'walkback');assert.equal(f.object.animationSerial,serial);assert.equal(f.object.animationUntil,deadline);
  assert.equal(f.object.patrol.target,target);assert.equal(f.object.alerted,true);close(f.object.lastSeenAt,f.game.time);
  assert.deepEqual(f.object.lastSeenPosition,[0,0,300]);assert.equal(f.object.ambush.phase,'awake');
  // A clear local walking ray allows movement while the perception rays stay
  // occluded. This exercises renewed cursor movement independently of sight.
  for(let index=0;index<5;index++){
    const player=[0,0,f.object.position[2]+50];
    f.game.update(.01,player,{lineOfSight:(from,to)=>Math.abs(to[2]-from[2])<2,traceProjectile:blockedProjectile});
    f.states.update(f.object,.01,false,f.game.time);
  }
  assert.ok(f.object.position[2]<position[2]);assert.equal(f.object.animationSerial,serial);
  assert.equal(f.object.animationUntil,deadline);assert.equal(f.object.nativeShooter.phase,'retreat');close(f.object.yaw,0);
});

test('motion completion while RedCat is still too close holds the last imported pose without replaying retreat',t=>{
  const f=fixture(t);f.object.stats.Speed=0;beginRetreat(f);
  const serial=f.object.animationSerial,deadline=f.object.animationUntil;
  f.tick(deadline-f.game.time+.05);
  assert.equal(f.object.nativeShooter.phase,'retreat');assert.equal(f.object.animationState,'walkback');assert.equal(f.animator.finished,true);
  close(f.animator.time,f.animator.clip.duration);const pose=f.animator.snapshot(),rng=f.object.aiRandomState;
  f.tick(.2,[0,0,10],false);
  assert.deepEqual(f.animator.snapshot(),pose);assert.equal(f.object.animationSerial,serial);assert.equal(f.object.animationUntil,deadline);
  assert.equal(f.object.aiRandomState,rng);assert.equal(f.object.alerted,true);close(f.object.lastSeenAt,f.game.time);
  f.tick(.01,[0,0,30],false);
  assert.equal(f.object.nativeShooter.phase,'wait');assert.equal(f.object.animationState,'idle');
});

for(const factor of [1,2])test(`mid-retreat fresh save restores the exact backward pose and remaining child (${factor})`,t=>{
  const original=fixture(t,factor);beginRetreat(original);original.tick(.05);
  const save=JSON.parse(JSON.stringify(original.game.snapshot())),restored=fixture(t,factor,save);
  assert.deepEqual(restored.object.nativeShooter,original.object.nativeShooter);
  assert.equal(restored.object.animationState,'walkback');assert.equal(restored.object.animationUntil,original.object.animationUntil);
  assert.deepEqual(restored.animator.snapshot(),original.animator.snapshot());assert.equal(restored.animator.timeScale,factor*factor);
  original.tick(.08);restored.tick(.08);
  assert.deepEqual(restored.object.position,original.object.position);assert.deepEqual(restored.animator.snapshot(),original.animator.snapshot());
  assert.deepEqual(restored.object.nativeShooter,original.object.nativeShooter);
});

test('freeze and cutscene preserve the retreat pose and shift its single animation deadline',t=>{
  for(const kind of ['enemiesFrozen','cutscene']){
    const f=fixture(t,2);beginRetreat(f);f.tick(.04);
    const pose=f.animator.snapshot(),position=[...f.object.position],serial=f.object.animationSerial,remaining=f.object.animationUntil-f.game.time;
    f.game.scripts={[kind]:true};f.tick(.4,[0,0,5000],false);
    assert.deepEqual(f.animator.snapshot(),pose);assert.deepEqual(f.object.position,position);assert.equal(f.object.animationSerial,serial);
    close(f.object.animationUntil-f.game.time,remaining);assert.equal(f.object.nativeShooter.retreatStarted,true);
    f.game.scripts=null;f.tick(.02);
    assert.ok(f.animator.time>pose.time);assert.equal(f.object.animationSerial,serial);
    close(f.object.animationUntil-f.game.time,remaining-.02);
  }
});
