import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../source/gameplay.js';

const far=[0,0,5000];
const phases=['dormant','descending','returning','ascending'];

function fixture(type=1,variant=3,phase='dormant') {
  const level={id:'ambush-hit',entities:[{classname:'MovingEnemy','%name%':'enemy',Type:String(type),SubType:String(variant),Origin:'0 0 0'}]};
  const events=[],game=new Gameplay(level,{onEvent:event=>events.push(event)}),enemy=game.objects[0];
  game.time=10;game.playerPosition=[...far];enemy.health=100;enemy.animationDurations={hurt:1,start:1,death:1};
  if(type===1){
    enemy.ambush={version:1,type:'spider',phase,elapsed:.2,lower:[0,0,0],upper:[0,100,0],anchor:[0,124,0]};
    enemy.position=phase==='returning'?[100,0,0]:phase==='dormant'?[0,100,0]:[0,50,0];
  }
  return {game,enemy,events,level};
}
function tick(f,dt=.1) {f.game.time+=dt;f.game.updateEnemy(f.enemy,dt,far,()=>false);}
function copy(f) {
  const events=[],game=new Gameplay(f.level,{save:JSON.parse(JSON.stringify(f.game.snapshot())),onEvent:event=>events.push(event)});
  const enemy=game.objects[0];enemy.animationDurations={...f.enemy.animationDurations};game.playerPosition=[...far];
  return {game,enemy,events,level:f.level};
}
function selectedHit(f) {f.enemy.aiRandomState=1;f.game.hurtEnemy(f.enemy,1);}

for(const phase of phases)test(`selected spider hit interrupts ${phase} movement and survives reload`,()=>{
  for(const variant of [1,3]) {
    const f=fixture(1,variant,phase);selectedHit(f);
    const position=[...f.enemy.position],until=f.enemy.animationUntil,serial=f.enemy.animationSerial;
    assert.equal(f.enemy.animationState,'hurt');
    const restored=copy(f);
    for(const current of [f,restored]) {
      assert.equal(current.enemy.animationState,'hurt');
      tick(current);
      assert.equal(current.enemy.animationState,'hurt',`${phase} cannot replace the selected hit animation`);
      assert.equal(current.enemy.animationUntil,until);assert.equal(current.enemy.animationSerial,serial);
      assert.deepEqual(current.enemy.position,position,`${phase} cannot keep moving its destroyed child`);
      selectedHit(current);
      assert.equal(current.enemy.animationUntil,until);assert.equal(current.enemy.animationSerial,serial);
      assert.equal(current.enemy.health,98);
    }
  }
});

test('sound-only spider hits leave each active ambush movement intact',()=>{
  for(const variant of [1,3])for(const phase of phases) {
    const f=fixture(1,variant,phase),position=[...f.enemy.position];
    f.enemy.aiRandomState=16;f.game.hurtEnemy(f.enemy,1);
    assert.notEqual(f.enemy.animationState,'hurt');assert.equal(f.enemy.health,99);
    tick(f);
    assert.notDeepEqual(f.enemy.position,position,`${phase} still owns movement after a sound-only hit`);
    assert.equal(f.events.filter(event=>event.type==='enemyAction'&&event.action==='hurt').length,1);
  }
});

test('dormant skeleton hit replaces the pile and restores without an extra wake after hurt',()=>{
  const f=fixture(6);selectedHit(f);
  const restored=copy(f),until=f.enemy.animationUntil,serial=f.enemy.animationSerial;
  assert.equal(restored.enemy.animationState,'hurt');assert.equal(restored.enemy.ambush.phase,'awake');
  tick(restored);
  assert.equal(restored.enemy.animationState,'hurt');assert.equal(restored.enemy.animationUntil,until);
  assert.equal(restored.enemy.animationSerial,serial);assert.equal(restored.enemy.ambush.phase,'awake');
  restored.game.time=until+.01;restored.game.updateEnemy(restored.enemy,.01,far,()=>false);
  assert.equal(restored.enemy.ambush.phase,'awake');assert.notEqual(restored.enemy.animationState,'start');
  assert.equal(restored.events.filter(e=>e.type==='enemyAction'&&e.action==='start').length,0);
});

test('selected skeleton hits discard waking/retracting children without replaying them',()=>{
  for(const phase of ['waking','retracting','awake']){
    const f=fixture(6);
    Object.assign(f.enemy.ambush,{phase,elapsed:.2,duration:2});
    f.enemy.animationState=phase==='waking'?'start':phase==='retracting'?'retract':'attack';
    f.enemy.animationUntil=20;f.enemy.pendingAttack={at:11};f.enemy.salvoRemaining=3;
    selectedHit(f);
    assert.equal(f.enemy.ambush.phase,'awake');assert.equal(f.enemy.ambush.duration,undefined);
    assert.equal(f.enemy.pendingAttack,null);assert.equal(f.enemy.salvoRemaining,0);
    const until=f.enemy.animationUntil,serial=f.enemy.animationSerial;
    selectedHit(f);
    assert.equal(f.enemy.health,98,'hit does not grant damage immunity');
    assert.equal(f.enemy.animationUntil,until);assert.equal(f.enemy.animationSerial,serial);
    assert.equal(f.events.filter(e=>e.type==='enemyAction'&&e.action==='hurt').length,1);
    f.game.time=until+.01;f.game.updateEnemy(f.enemy,.01,far,()=>false);
    assert.equal(f.enemy.ambush.phase,'awake');assert.notEqual(f.enemy.animationState,'start');
    assert.notEqual(f.enemy.animationState,'retract');
  }
});

test('old skeleton snapshots with a dormant/wake child during hurt recover to fresh alert',()=>{
  for(const phase of ['dormant','waking','retracting']){
    const f=fixture(6);selectedHit(f);
    Object.assign(f.enemy.ambush,{phase,elapsed:.2,duration:2});
    const restored=copy(f);
    assert.equal(restored.enemy.ambush.phase,'awake');assert.equal(restored.enemy.ambush.duration,undefined);
    assert.equal(restored.enemy.animationState,'hurt');assert.equal(restored.enemy.animationUntil,f.enemy.animationUntil);
    restored.game.time=restored.enemy.animationUntil+.01;
    restored.game.updateEnemy(restored.enemy,.01,far,()=>false);
    assert.equal(restored.enemy.ambush.phase,'awake');assert.notEqual(restored.enemy.animationState,'start');
  }
});

test('sound-only skeleton damage keeps ordinary wake and does not cancel an active transition',()=>{
  const f=fixture(6);f.enemy.aiRandomState=16;f.game.hurtEnemy(f.enemy,1);
  assert.equal(f.enemy.health,99);assert.equal(f.enemy.ambush.phase,'dormant');
  tick(f);assert.equal(f.enemy.ambush.phase,'waking');assert.equal(f.enemy.animationState,'start');
  const until=f.enemy.animationUntil,serial=f.enemy.animationSerial;
  f.enemy.aiRandomState=16;f.game.hurtEnemy(f.enemy,1);
  assert.equal(f.enemy.ambush.phase,'waking');assert.equal(f.enemy.animationUntil,until);
  assert.equal(f.enemy.animationSerial,serial);assert.equal(f.enemy.health,98);
});

test('lethal damage to dormant skeleton preserves its death state on reload',()=>{
  const f=fixture(6);f.enemy.aiRandomState=1;f.game.hurtEnemy(f.enemy,100);
  assert.equal(f.enemy.health,0);assert.equal(f.enemy.animationState,'death');
  const restored=copy(f);
  assert.equal(restored.enemy.health,0);assert.equal(restored.enemy.animationState,'death');
  assert.equal(restored.enemy.animationUntil,f.enemy.animationUntil);
  assert.equal(restored.enemy.corpseUntil,f.enemy.corpseUntil);
});

test('a script freeze preserves a selected spider hit instead of resuming its old ascent',()=>{
  const f=fixture(1,3,'ascending');selectedHit(f);
  const position=[...f.enemy.position],remaining=f.enemy.animationUntil-f.game.time;
  f.game.scripts={enemiesFrozen:true};f.game.update(.1,far);
  assert.equal(f.enemy.animationState,'hurt');assert.deepEqual(f.enemy.position,position);
  assert.ok(Math.abs(f.enemy.animationUntil-f.game.time-remaining)<1e-10);
  f.game.scripts=null;tick(f);
  assert.equal(f.enemy.animationState,'hurt');assert.deepEqual(f.enemy.position,position);
});

test('fresh spider alert chooses descent near the ceiling and combat at the midpoint or below',()=>{
  for(const variant of [1,3])for(const [height,phase] of [[75,'descending'],[50,'awake'],[25,'awake']]) {
    const f=fixture(1,variant,'ascending');f.enemy.position=[0,height,0];selectedHit(f);
    f.game.time=f.enemy.animationUntil+.01;f.game.updateEnemy(f.enemy,.01,far,()=>false);
    assert.equal(f.enemy.ambush.phase,phase,`height ${height} selects a fresh alert instead of the old ascent`);
    assert.equal(f.enemy.ambush.resumeAlert,undefined);assert.equal(f.enemy.ambush.returnForDescent,undefined);
    assert.notEqual(f.enemy.animationState,'hurt');
    if(height===75){
      const before=f.enemy.position[1];tick(f);
      assert.ok(f.enemy.position[1]<before,'the fresh upper alert descends');
    }
  }
});

test('post-hit spider return-for-descent survives reload and never resumes the old ascent',()=>{
  for(const variant of [1,3]) {
    const f=fixture(1,variant,'ascending');f.enemy.position=[30,75,0];selectedHit(f);
    f.game.time=f.enemy.animationUntil+.01;f.game.updateEnemy(f.enemy,.01,far,()=>false);
    assert.equal(f.enemy.ambush.phase,'returning');assert.equal(f.enemy.ambush.returnForDescent,true);
    const restored=copy(f);
    assert.equal(restored.enemy.ambush.returnForDescent,true);
    for(const current of [f,restored]) {
      for(let i=0;i<100&&current.enemy.ambush.phase==='returning';i++)tick(current,.05);
      assert.equal(current.enemy.ambush.phase,'descending');assert.equal(current.enemy.ambush.returnForDescent,undefined);
      const before=current.enemy.position[1];tick(current,.05);
      assert.ok(current.enemy.position[1]<before);
      for(let i=0;i<100&&current.enemy.ambush.phase==='descending';i++)tick(current,.05);
      assert.equal(current.enemy.ambush.phase,'awake');assert.equal(current.enemy.position[1],0);
    }
  }
});
