import test from 'node:test';
import assert from 'node:assert/strict';
import {updateNativeShooter,usesNativeShooter,restoreNativeShooterState,nativeShooterWaitComplete} from '../source/enemy-shooter-native.js';

function fixture(type='frog',stats={}) {
  const calls={approach:0,retreat:0,walk:[],idle:0,shots:0,released:0,animations:[]};
  const object={id:'shooter',enemyType:type,ranged:true,position:[0,0,0],entity:{StartPoint:'a'},
    patrol:{start:'a',current:'a',target:'b'},stats:{AttackRange:100,MinPlayerDistance:20,DrawMotionPart:.4,WaitTimeBetweenShots:.25,WaitTimeAfterSalvo:.5,ChanceToMoveAfterSalvo:0,...stats},
    salvoSize:2,aiRandomState:1,alerted:true,animationState:'idle',animationUntil:0};
  let next={id:'b',position:[100,0,0]};
  const game={time:0,navigation:{find:()=>({id:'a'}),approachTarget(){calls.approach++;return next;},retreatTarget(){calls.retreat++;return next;}},
    enemyDuration:()=>1,enemyAnimation(o,action,duration=0,rate=null){calls.animations.push({action,duration,rate});o.animationState=action;o.animationUntil=this.time+duration;if(action==='attack')calls.shots++;return duration;}};
  const context={playerPosition:[50,0,0],visible:true,distance:50,lineOfSight:()=>true,
    walk:(point,options)=>calls.walk.push({point,options}),moveIdle:()=>calls.idle++};
  function step(time,extra={}) {
    game.time=time;Object.assign(context,extra);
    // Same caller contract as Gameplay.updateEnemy: committed pose release
    // first, then a lock covering the complete shoot motion, then this child.
    if(object.pendingAttack&&time>=object.pendingAttack.at){calls.released++;object.pendingAttack=null;}
    if(['attack','charge'].includes(object.animationState)&&time<object.animationUntil)return true;
    return updateNativeShooter(game,object,.01,context);
  }
  return {game,object,calls,step,context,setTarget:value=>next=value};
}

test('ordinary closer selects before strict range completion and preserves its selected mid-edge target',()=>{
  const f=fixture();f.step(0,{distance:100});
  assert.equal(f.calls.approach,1);assert.equal(f.calls.shots,0);assert.equal(f.calls.walk.length,1);
  f.step(.01,{distance:99.999});assert.equal(f.calls.approach,2);assert.equal(f.calls.shots,1);
  assert.equal(f.object.patrol.target,'b');assert.ok(Math.abs(f.object.pendingAttack.at-.41)<1e-12);
});

test('a no-destination closer enters shoot outside attack range instead of inventing another endpoint',()=>{
  const f=fixture();f.setTarget(null);f.step(0,{distance:1000});
  assert.equal(f.calls.shots,1);assert.equal(f.calls.walk.length,0);assert.equal(f.object.nativeShooter.phase,'shoot');
});

test('whole salvo remains committed and inter-shot wait begins only after complete shoot motion',()=>{
  const f=fixture();f.step(0);f.object.alerted=false;
  f.step(.4,{visible:false,distance:1000});assert.equal(f.calls.released,1);assert.equal(f.object.nativeShooter.phase,'shoot');
  f.step(.8);assert.equal(f.object.nativeShooter.waitUntil,null);
  f.step(1);assert.equal(f.object.nativeShooter.phase,'betweenWait');assert.equal(f.object.nativeShooter.waitUntil,null);
  f.step(1.01);assert.equal(f.object.nativeShooter.waitUntil,1.26);
  f.step(1.26);assert.equal(f.calls.shots,1,'wait deadline is strict');
  f.step(1.261);assert.equal(f.calls.shots,2);assert.equal(f.object.salvoRemaining,0);
  f.step(1.661);assert.equal(f.calls.released,2,'hiding or moving out of range cannot cancel the next shot');
  f.step(2.261);assert.equal(f.object.nativeShooter.phase,'wait');assert.equal(f.object.nativeShooter.waitUntil,null);
  f.step(2.271);assert.equal(f.object.nativeShooter.waitUntil,2.771);
  f.step(2.771);assert.equal(f.object.nativeShooter.phase,'wait');
  f.step(2.772,{distance:50});assert.equal(f.object.nativeShooter,null,'completed closer may retire after memory expires');
});

test('after-salvo chance chooses another closer without an unconditional extra wait or memory gate',()=>{
  const f=fixture('frog',{ChanceToMoveAfterSalvo:1});f.object.salvoSize=1;
  f.step(0);f.object.alerted=false;f.step(1,{visible:false,distance:500});
  assert.equal(f.object.nativeShooter.phase,'approach');assert.equal(f.calls.approach,2);assert.equal(f.calls.walk.length,1);
  assert.equal(f.object.nativeShooter.waitUntil,null);
});

test('a completed parent wait shoots at inclusive attack range and otherwise re-enters closer',()=>{
  const f=fixture();f.object.salvoSize=1;f.step(0);f.step(1);f.step(1.01);
  f.step(1.511,{distance:100});assert.equal(f.calls.shots,2);assert.equal(f.calls.approach,1);
  const other=fixture();other.object.salvoSize=1;other.step(0);other.step(1);other.step(1.01);other.step(1.511,{distance:100.001});
  assert.equal(other.calls.shots,1);assert.equal(other.object.nativeShooter.phase,'approach');assert.equal(other.calls.walk.length,1);
});

test('skeleton retreat range stops movement but its one-shot child completes only at the animation deadline',()=>{
  const f=fixture('skeleton');f.object.salvoSize=1;
  f.step(0,{distance:500});assert.equal(f.calls.shots,1);assert.equal(f.calls.approach,0);
  f.step(1,{distance:10});assert.equal(f.object.nativeShooter.phase,'retreat');assert.equal(f.calls.retreat,1);assert.equal(f.calls.walk.length,1);
  assert.equal(f.object.animationState,'walkback');assert.equal(f.object.animationUntil,2);assert.equal(f.object.nativeShooter.retreatStarted,true);
  assert.deepEqual(f.calls.walk[0].options,{authoredRoute:true,destinationId:'b',backward:true});
  f.step(1.1,{distance:100});assert.equal(f.object.nativeShooter.phase,'retreat');assert.equal(f.calls.walk.length,2);
  f.step(1.2,{distance:100.001});assert.equal(f.object.nativeShooter.phase,'retreat');assert.equal(f.object.patrol.target,'b');assert.equal(f.calls.walk.length,2);
  f.step(1.3,{distance:100});assert.equal(f.calls.walk.length,3,'the same cursor resumes if range completion becomes false');
  assert.equal(f.calls.animations.filter(value=>value.action==='walkback').length,1);
  f.step(2,{distance:100.001});assert.equal(f.object.nativeShooter.phase,'wait');assert.equal(f.object.nativeShooter.waitUntil,null);
  f.step(2.01);assert.equal(f.object.nativeShooter.waitUntil,2.51);
  f.step(2.51);assert.equal(f.calls.shots,1);f.step(2.511);assert.equal(f.calls.shots,2);
});

test('completed retreat holds its last motion while too close, refreshes memory, and never replays the same child',()=>{
  const f=fixture('skeleton');f.object.salvoSize=1;f.step(0);f.step(1,{distance:10});
  f.object.alerted=false;f.step(2.1,{visible:false,distance:10,playerPosition:[0,0,10]});
  assert.equal(f.object.nativeShooter.phase,'retreat');assert.equal(f.object.alerted,true);assert.equal(f.object.lastSeenAt,2.1);
  assert.deepEqual(f.object.lastSeenPosition,[0,0,10]);assert.equal(f.object.animationUntil,2);
  f.setTarget(null);f.step(2.2);
  assert.equal(f.calls.shots,1,'a completed child is checked before no-destination traversal');
  assert.equal(f.calls.animations.filter(value=>value.action==='walkback').length,1);
  f.step(2.3,{distance:20});assert.equal(f.object.nativeShooter.phase,'wait');
});

test('an active retreat without a destination still shortcuts to a new shot before its clip ends',()=>{
  const f=fixture('skeleton');f.object.salvoSize=1;f.step(0);f.step(1,{distance:10});
  f.setTarget(null);f.step(1.1,{distance:200,visible:false});
  assert.equal(f.calls.shots,2);assert.equal(f.object.nativeShooter.phase,'shoot');assert.equal(f.object.nativeShooter.retreatStarted,undefined);
});

test('skeleton retreat failure shoots immediately; expired memory ends its completed child first',()=>{
  const f=fixture('skeleton');f.object.salvoSize=1;f.step(0);f.setTarget(null);f.step(1,{distance:10});
  assert.equal(f.calls.shots,2);assert.equal(f.object.nativeShooter.phase,'shoot');
  const forgotten=fixture('skeleton');forgotten.object.salvoSize=1;forgotten.step(0);forgotten.object.alerted=false;
  assert.equal(forgotten.step(1,{visible:false,distance:10}),false);assert.equal(forgotten.object.nativeShooter,null);assert.equal(forgotten.calls.retreat,0);
});

test('safe waypoint reacquisition forwards its explicit destination and native edges bypass search',()=>{
  const f=fixture();f.object.patrol.reacquiring=true;f.step(0,{distance:500});
  assert.deepEqual(f.calls.walk[0].options,{authoredRoute:false,destinationId:'b'});
  f.object.patrol.reacquiring=false;f.step(.1);
  assert.deepEqual(f.calls.walk[1].options,{authoredRoute:true,destinationId:'b'});
});

test('phase state remains plain save data and wait deadlines can be shifted across a freeze',()=>{
  const f=fixture();f.step(0);f.step(1);f.step(1.01);
  const saved=JSON.parse(JSON.stringify(f.object.nativeShooter)),restored=restoreNativeShooterState(saved);
  assert.deepEqual(restored,saved);restored.waitUntil+=5;f.object.nativeShooter=restored;
  f.step(6.26);assert.equal(f.calls.shots,1);f.step(6.261);assert.equal(f.calls.shots,2);
  assert.equal(restoreNativeShooterState({...saved,phase:'unknown'}),null);
  assert.equal(restoreNativeShooterState({...saved,remaining:-1}),null);
  assert.deepEqual(restoreNativeShooterState({...saved,waitUntil:null}),{...saved,waitUntil:null});
  const retreat={version:1,phase:'retreat',remaining:0,waitUntil:null,retreatStarted:true};
  assert.deepEqual(restoreNativeShooterState(retreat),retreat);
});

test('bosses and non-ranged touch variants retain separate states, and missing paths retain the portable fallback',()=>{
  for(const enemyType of ['plant','gargoyle','guardian','zombie','maxd','maxj','witch'])assert.equal(usesNativeShooter({enemyType,ranged:true}),false);
  for(const enemyType of ['spider','bat','ghost']){
    assert.equal(usesNativeShooter({enemyType,ranged:true}),true);assert.equal(usesNativeShooter({enemyType,ranged:false}),false);
  }
  const f=fixture();f.game.navigation.find=()=>null;
  assert.equal(f.step(0),false);assert.equal(f.object.nativeShooter,undefined);assert.equal(f.calls.shots,0);
});

test('wait first-check arms once, uses strict integer milliseconds and survives a saved unarmed handoff',()=>{
  for(const seconds of [0,.25]) {
    const state={version:1,phase:'betweenWait',remaining:1,waitUntil:null};
    const restored=restoreNativeShooterState(JSON.parse(JSON.stringify(state)));
    assert.equal(nativeShooterWaitComplete(restored,10.0004,seconds),false);
    assert.equal(restored.waitUntil,10+seconds);
    assert.equal(nativeShooterWaitComplete(restored,10+seconds+.0009,seconds),false);
    assert.equal(nativeShooterWaitComplete(restored,10+seconds+.001,seconds),true);
  }
});

test('Bone Brutus charges after a full salvo, changes ammo once on entry and shoots without an after-salvo wait',()=>{
  const f=fixture('brutusb',{ChanceToMoveAfterSalvo:0,WaitTimeAfterSalvo:999});f.object.salvoSize=1;
  f.step(0);f.object.alerted=false;f.step(.4,{visible:false,distance:1000});
  assert.equal(f.calls.released,1);
  f.step(1);assert.equal(f.object.nativeShooter.phase,'charge');assert.equal(f.object.boneSkullPhase,true);
  assert.equal(f.object.salvoRemaining,0);assert.equal(f.object.boneChargePending,false);
  const charge=f.calls.animations.find(value=>value.action==='charge');
  assert.ok(charge.rate>=.9&&charge.rate<1.1);assert.ok(Math.abs((charge.rate-.9)/.00002-Math.round((charge.rate-.9)/.00002))<1e-8);
  const end=f.object.animationUntil;
  f.step(end-.001);assert.equal(f.object.nativeShooter.phase,'charge');assert.equal(f.calls.shots,1);
  f.step(end);assert.equal(f.object.nativeShooter.phase,'shoot');assert.equal(f.calls.shots,2);
  assert.equal(f.object.boneSkullPhase,true);assert.equal(f.object.nativeShooter.waitUntil,null);
  f.step(end+1);assert.equal(f.object.nativeShooter.phase,'charge');assert.equal(f.object.boneSkullPhase,false);
});

test('Bone Brutus chooses closer only after charge completion and retains its authored cursor',()=>{
  const f=fixture('brutusb',{ChanceToMoveAfterSalvo:1});f.object.salvoSize=1;
  f.step(0);f.step(1,{distance:500});assert.equal(f.calls.walk.length,0);
  f.step(f.object.animationUntil);assert.equal(f.object.nativeShooter.phase,'approach');
  assert.equal(f.calls.walk.length,1);assert.equal(f.object.patrol.target,'b');
  assert.equal(f.calls.animations.filter(value=>value.action==='charge').length,1);
});
