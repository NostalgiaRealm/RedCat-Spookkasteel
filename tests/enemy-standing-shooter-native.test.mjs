import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../source/gameplay.js';
import {restoreNativeStandingShooter,updateNativeStandingShooter} from '../source/enemy-standing-shooter-native.js';
import {thinkingOnFirstUpdate} from './support/enemy-thinking.mjs';

function controller(wait=.25){
  const object={enemyType:'plant',stats:{AttackRange:100,DrawMotionPart:.5,WaitTimeAfterSalvo:wait},salvoSize:2,alerted:true};
  const clips=[],game={time:0,enemyDuration:()=>1,enemyAnimation:(_o,clip)=>{clips.push(clip);return 1;}};
  const context={visible:true,distance:50,moveIdle:()=>{}};
  const update=()=>updateNativeStandingShooter(game,object,context);
  return {object,game,context,clips,update};
}

test('standing wait begins after the complete salvo, arms on a later check and expires strictly after the deadline',()=>{
  const f=controller();f.update();assert.equal(f.object.nativeStandingShooter.phase,'shoot');
  f.game.time=1;f.update();assert.equal(f.object.nativeStandingShooter.remaining,0);
  f.game.time=2;f.update();assert.deepEqual(f.object.nativeStandingShooter,{version:1,phase:'wait',remaining:0,waitUntil:null});
  f.game.time=2.1;f.update();assert.equal(f.object.nativeStandingShooter.waitUntil,2.35);
  f.game.time=2.35;f.update();assert.equal(f.object.nativeStandingShooter.phase,'wait');
  f.game.time=2.351;f.update();assert.equal(f.object.nativeStandingShooter.phase,'shoot');
});

test('standing waits with zero duration still arm and require a later millisecond',()=>{
  const f=controller(0);f.update();f.game.time=1;f.update();f.game.time=2;f.update();
  f.update();assert.equal(f.object.nativeStandingShooter.waitUntil,2);
  f.update();assert.equal(f.object.nativeStandingShooter.phase,'wait');
  f.game.time=2.001;f.update();assert.equal(f.object.nativeStandingShooter.phase,'shoot');
});

test('standing parent retains the wait through memory loss and uses remembered target rather than a fresh range gate',()=>{
  const f=controller();f.update();f.game.time=1;f.update();f.game.time=2;f.update();
  f.context.visible=false;f.context.distance=1000;f.game.time=2.1;f.update();
  f.object.alerted=false;f.game.time=2.2;f.update();assert.equal(f.object.nativeStandingShooter.phase,'wait');
  f.object.alerted=true;f.game.time=2.351;f.update();assert.equal(f.object.nativeStandingShooter.phase,'shoot');
  f.object.alerted=false;f.game.time=3.351;f.update();assert.equal(f.object.nativeStandingShooter.remaining,0,'second committed shot still starts');
  f.game.time=4.351;f.update();assert.equal(f.object.nativeStandingShooter,null,'unremembered completed salvo exits without another wait');
});

// `far` is out of sight range but inside the native 1600-unit think radius
// (0x422fb0), so the enemy keeps thinking while RedCat is away.
const near=[0,0,100],far=[0,0,1500];
function world(type=1,save){
  const level={id:'lvl00a',spawn:{position:near,orientation:0},entities:[{classname:'StandingEnemy','%name%':'enemy',Type:String(type),Origin:'0 0 0',StartOrientation:'6'}]};
  // Mid-encounter fixture: enemies are already thinking (gameplay.js updateEnemy).
  const g=thinkingOnFirstUpdate(new Gameplay(level,{save})),o=g.objects[0];
  o.animationDurations={attack:.2,hurt:.3,idle:1};o.salvoSize=1;
  o.stats={...o.stats,WaitTimeAfterSalvo:.5,TimeToRememberVisual:1};
  return {g,o};
}
function tick(f,dt=.01,player=near,visible=true){f.g.update(dt,player,{lineOfSight:()=>visible});}
function enterWait(f){for(let i=0;i<500&&f.o.nativeStandingShooter?.phase!=='wait';i++)tick(f);assert.equal(f.o.nativeStandingShooter?.phase,'wait');}
const copy=f=>world(f.o.enemyType==='gargoyle'?3:1,JSON.parse(JSON.stringify(f.g.snapshot())));

test('standing save restoration and script freeze preserve both unarmed and armed waits',()=>{
  const f=world();enterWait(f);assert.equal(f.o.nativeStandingShooter.waitUntil,null);
  let saved=copy(f);assert.deepEqual(saved.o.nativeStandingShooter,f.o.nativeStandingShooter);
  f.g.scripts={enemiesFrozen:true};tick(f,.1);assert.equal(f.o.nativeStandingShooter.waitUntil,null);f.g.scripts=null;
  tick(f);const deadline=f.o.nativeStandingShooter.waitUntil;assert.ok(Number.isFinite(deadline));
  f.g.scripts={enemiesFrozen:true};tick(f,.1);assert.ok(Math.abs(f.o.nativeStandingShooter.waitUntil-deadline-.1)<1e-8);f.g.scripts=null;
  saved=copy(f);assert.deepEqual(saved.o.nativeStandingShooter,f.o.nativeStandingShooter);
  for(let i=0;i<80;i++){tick(f);tick(saved);assert.deepEqual(saved.o.nativeStandingShooter,f.o.nativeStandingShooter);assert.equal(saved.o.animationState,f.o.animationState);}
});

test('gargoyle keeps its wait child until expiry, then returns to stone if its target was forgotten',()=>{
  const f=world(3);f.o.stats.TimeToRememberVisual=.001;enterWait(f);tick(f,.01,far,false);
  const deadline=f.o.nativeStandingShooter.waitUntil;assert.ok(Number.isFinite(deadline));
  while(f.g.time+.02<deadline)tick(f,.01,far,false);
  assert.equal(f.o.ambush.phase,'awake');assert.equal(f.o.nativeStandingShooter.phase,'wait');
  for(let i=0;i<6;i++)tick(f,.01,far,false);
  assert.equal(f.o.nativeStandingShooter,null);assert.equal(f.o.ambush.phase,'dormant');
});

test('selected hits cancel standing waits and ordinary saved legacy cooldowns retain remaining duration',()=>{
  const f=world();enterWait(f);f.o.aiRandomState=1;f.g.hurtEnemy(f.o,.1);
  assert.equal(f.o.nativeStandingShooter,null);assert.equal(f.o.animationState,'hurt');
  const old=world(),save=old.g.snapshot(),entry=save.objects[0];delete entry.nativeStandingShooter;
  entry.attackTimer=.4;entry.animationState='idle';entry.pendingAttack=null;entry.salvoRemaining=0;
  const restored=world(1,save);assert.equal(restored.o.nativeStandingShooter.phase,'wait');
  assert.equal(restored.o.nativeStandingShooter.waitUntil,save.time+.4);
});

test('invalid standing state cannot inject an invalid phase, count or timer into a save',()=>{
  const valid={version:1,phase:'wait',remaining:0,waitUntil:null};assert.deepEqual(restoreNativeStandingShooter(valid),valid);
  for(const change of [{phase:'teleport'},{remaining:-1},{remaining:1025},{waitUntil:NaN},{version:2}])
    assert.equal(restoreNativeStandingShooter({...valid,...change}),null);
});
