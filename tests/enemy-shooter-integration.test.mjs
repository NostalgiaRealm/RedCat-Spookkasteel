import test from 'node:test';
import assert from 'node:assert/strict';
import {readFile} from 'node:fs/promises';
import {Gameplay} from '../src/gameplay.js';

const near=[0,0,50],far=[0,0,5000];
const waypoint=(id,z,other)=>({classname:'GrobberPathPoint','%name%':id,Origin:`0 0 ${z}`,SubSystemId:'0',...(other?{WayPoint1:other}:{})});

function fixture(type=5,save=null,level=null) {
  level??={id:'lvl00a',spawn:{position:far,orientation:0},entities:[waypoint('a',0,'b'),waypoint('b',80),
    {classname:'MovingEnemy','%name%':'shooter',Type:String(type),SubType:'3',Origin:'0 0 0',StartPoint:'a',StartOrientation:'6'}]};
  const shots=[],events=[];
  const game=new Gameplay(level,{save,onEvent:event=>{events.push(event);if(event.type==='enemyProjectile')shots.push({time:game.time,kind:event.kind});}});
  const enemy=game.objects.find(object=>object.kind==='enemy');
  // Keep the real motion-rate RNG, projectile factory, navigation, perception,
  // hit handling, update ordering and persistence. Only fixture tuning changes.
  enemy.stats={...enemy.stats,AttackRange:100,MinPlayerDistance:0,Speed:40,SenseRange:1000,VisualRange:1000,
    TimeToRememberVisual:.02,DrawMotionPart:.5,WaitTimeBetweenShots:.25,WaitTimeAfterSalvo:10,ChanceToMoveAfterSalvo:0};
  enemy.animationDurations={attack:.5,hurt:2,idle:2,start:.5};
  if(!save){
    enemy.health=100;enemy.maxHealth=100;enemy.salvoSize=2;enemy.yaw=0;
    if(enemy.ambush){
      enemy.ambush.phase='awake';enemy.animationState='idle';
      if(enemy.enemyType==='spider')Object.assign(enemy.ambush,{lower:[0,0,0],upper:[0,100,0],anchor:[0,124,0]});
    }
  }
  return {game,enemy,shots,events,level,type};
}

function tick(f,seconds,player=far,visible=false) {
  for(let elapsed=0;elapsed<seconds-1e-9;){const dt=Math.min(.01,seconds-elapsed);f.game.update(dt,player,{lineOfSight:()=>visible});elapsed+=dt;}
}
function until(f,predicate,{player=far,visible=false,limit=5}={}) {
  for(let elapsed=0;!predicate()&&elapsed<limit;elapsed+=.01)tick(f,.01,player,visible);
  assert.ok(predicate(),`condition was not reached: ${f.enemy.enemyType} ${f.enemy.nativeShooter?.phase}`);
}
function begin(f) {tick(f,.01,near,true);assert.equal(f.enemy.nativeShooter?.phase,'shoot');assert.ok(f.enemy.pendingAttack);}
const savedEnemy=save=>save.objects.find(object=>object.id==='shooter');
const copyOf=(f,save=JSON.parse(JSON.stringify(f.game.snapshot())))=>fixture(f.type,save,f.level);

test('Gameplay uses native adjacent approach, reserves before strict range completion, and stops mid-edge',()=>{
  const f=fixture();let searches=0;
  const search=f.game.navigation.pursuitTarget.bind(f.game.navigation);
  f.game.navigation.pursuitTarget=(...args)=>{searches++;return search(...args);};
  tick(f,.01,[0,0,100],true);
  assert.equal(f.enemy.nativeShooter.phase,'approach');assert.equal(f.enemy.patrol.target,'b');
  assert.ok(f.enemy.position[2]>0&&f.enemy.position[2]<80);assert.equal(f.enemy.pendingAttack,undefined);
  const position=[...f.enemy.position];tick(f,.01,[0,0,100],true);
  assert.equal(f.enemy.nativeShooter.phase,'shoot');assert.ok(f.enemy.pendingAttack);
  assert.deepEqual(f.enemy.position,position);assert.equal(f.enemy.patrol.target,'b');assert.equal(searches,0);
});

test('all ordinary shooter families release the whole committed salvo after LOS, range and memory are lost',()=>{
  for(const type of [1,2,3,5,6,7]) {
    const f=fixture(type);begin(f);const release=f.enemy.pendingAttack.at;
    tick(f,.05);assert.equal(f.enemy.alerted,false,`${f.enemy.enemyType} memory expired before release`);
    assert.equal(f.shots.length,0);assert.ok(f.enemy.pendingAttack);
    until(f,()=>f.shots.length===1);
    assert.ok(f.shots[0].time>=release&&f.shots[0].time<release+.011);assert.equal(f.enemy.pendingAttack,null);
    until(f,()=>f.enemy.nativeShooter?.phase==='betweenWait');
    assert.equal(f.shots.length,1);assert.equal(f.enemy.salvoRemaining,1);
    if(f.enemy.ambush)assert.equal(f.enemy.ambush.phase,'awake','ambush return cannot replace the committed child');
    until(f,()=>f.shots.length===2);tick(f,.2);
    assert.equal(f.shots.length,2);assert.equal(f.enemy.salvoRemaining,0);
    assert.ok(f.events.filter(event=>event.type==='enemyAttack').every(event=>event.ranged===true));
  }
});

test('an unarmed inter-shot wait survives save and freeze without consuming its duration before first update',()=>{
  const f=fixture();begin(f);until(f,()=>f.enemy.nativeShooter?.phase==='betweenWait');
  assert.equal(f.enemy.nativeShooter.waitUntil,null);
  const restored=copyOf(f);restored.game.scripts={enemiesFrozen:true};tick(restored,4);
  assert.equal(restored.enemy.nativeShooter.waitUntil,null);assert.equal(restored.shots.length,0);
  restored.game.scripts=null;tick(restored,.01);
  const deadline=restored.enemy.nativeShooter.waitUntil;
  assert.ok(deadline-restored.game.time>.249&&deadline-restored.game.time<=.251);
  tick(restored,.24);assert.equal(restored.shots.length,0);
  until(restored,()=>restored.shots.length===1);assert.equal(restored.enemy.salvoRemaining,0);
});

test('imported Forest Mushroom Brutus uses native closer and retains its committed mushroom salvo',async()=>{
  const imported=JSON.parse(await readFile(new URL('../data/levels/lvl00a/level.json',import.meta.url),'utf8'));
  const entity=imported.entities.find(value=>value.classname==='MovingEnemy'&&value.Type==='7');
  const level={id:imported.id,spawn:imported.spawn,entities:[...imported.entities.filter(value=>value.classname==='GrobberPathPoint'),entity]};
  const shots=[];const game=new Gameplay(level,{onEvent:event=>{if(event.type==='enemyProjectile')shots.push(event);}});
  const enemy=game.objects.find(object=>object.enemyType==='brutusm');enemy.enabled=true;
  const player=enemy.position.map((value,index)=>value+(index===2?80:0));
  const f={game,enemy,shots};
  until(f,()=>enemy.nativeShooter?.phase==='shoot',{player,visible:true,limit:20});
  const salvo=enemy.salvoSize;
  until(f,()=>shots.length>=salvo,{player:far,visible:false,limit:20});
  assert.equal(shots.length,salvo);assert.ok(shots.every(shot=>shot.kind==='mushRoom'));
  assert.equal(enemy.salvoRemaining,0);assert.ok(game.navigation.find(enemy.patrol?.start));
});

test('Bone Brutus save/freeze keeps charge, ammo and committed shots without a duplicate charge entry',()=>{
  const f=fixture(8);f.enemy.salvoSize=1;begin(f);
  until(f,()=>f.enemy.nativeShooter?.phase==='charge');
  assert.equal(f.shots.length,1);assert.equal(f.shots[0].kind,'bone');assert.equal(f.enemy.boneSkullPhase,true);
  const restored=copyOf(f),remaining=restored.enemy.animationUntil-restored.game.time;
  assert.equal(restored.enemy.nativeShooter.phase,'charge');assert.equal(restored.enemy.boneSkullPhase,true);
  restored.game.scripts={enemiesFrozen:true};tick(restored,1);
  assert.ok(Math.abs(restored.enemy.animationUntil-restored.game.time-remaining)<1e-9);
  restored.game.scripts=null;until(restored,()=>restored.shots.length===1);
  assert.equal(restored.shots[0].kind,'skull');assert.equal(restored.enemy.boneSkullPhase,true);
  until(restored,()=>restored.enemy.nativeShooter?.phase==='charge');assert.equal(restored.enemy.boneSkullPhase,false);
});

test('legacy Bone Brutus charge restores once and pending charge waits for the final shot pose',()=>{
  for(const charging of [false,true]){
    const f=fixture(8);f.enemy.salvoSize=1;begin(f);
    if(charging)until(f,()=>f.enemy.nativeShooter?.phase==='charge');
    const save=JSON.parse(JSON.stringify(f.game.snapshot())),entry=savedEnemy(save);
    delete entry.nativeShooter;
    if(!charging)entry.boneChargePending=true;
    const restored=copyOf(f,save);
    assert.equal(restored.enemy.nativeShooter.phase,charging?'charge':'shoot');
    assert.equal(restored.enemy.boneSkullPhase,charging?true:undefined);
    if(!charging){until(restored,()=>restored.enemy.nativeShooter?.phase==='charge');assert.equal(restored.enemy.boneSkullPhase,true);}
    until(restored,()=>restored.shots.some(shot=>shot.kind==='skull'));
    assert.equal(restored.enemy.boneSkullPhase,true);
  }
});

test('a native no-destination result starts and releases a shot outside attack range',()=>{
  const f=fixture();tick(f,.01,[0,0,-300],true);
  assert.equal(f.enemy.nativeShooter.phase,'shoot');assert.equal(f.enemy.patrol.target,null);
  assert.ok(f.enemy.pendingAttack);assert.deepEqual(f.enemy.position,[0,0,0]);
  until(f,()=>f.shots.length===1);assert.equal(f.shots[0].kind,'poison');
});

test('snapshot and fresh Gameplay restore preserve an active release and remaining native salvo',()=>{
  const f=fixture();begin(f);tick(f,.05);
  const restored=copyOf(f);
  assert.deepEqual(restored.enemy.nativeShooter,f.enemy.nativeShooter);
  assert.deepEqual(restored.enemy.pendingAttack,f.enemy.pendingAttack);
  assert.equal(restored.enemy.salvoSize,2);assert.equal(restored.enemy.aiRandomState,f.enemy.aiRandomState);
  until(f,()=>f.enemy.nativeShooter?.phase==='wait');
  until(restored,()=>restored.enemy.nativeShooter?.phase==='wait');
  assert.equal(f.shots.length,2);assert.deepEqual(restored.shots,f.shots);
  assert.deepEqual(restored.enemy.nativeShooter,f.enemy.nativeShooter);
  assert.equal(restored.enemy.aiRandomState,f.enemy.aiRandomState);
});

test('snapshot restores an inter-shot wait without replaying the already released shot',()=>{
  const f=fixture();begin(f);until(f,()=>f.enemy.nativeShooter?.phase==='betweenWait');tick(f,.08);
  assert.equal(f.shots.length,1);const restored=copyOf(f);
  assert.deepEqual(restored.enemy.nativeShooter,f.enemy.nativeShooter);assert.equal(restored.enemy.pendingAttack,null);
  until(f,()=>f.enemy.nativeShooter?.phase==='wait');
  until(restored,()=>restored.enemy.nativeShooter?.phase==='wait');
  assert.deepEqual(restored.shots,f.shots.slice(1));assert.equal(restored.shots.length,1);
  assert.deepEqual(restored.enemy.nativeShooter,f.enemy.nativeShooter);
});

test('legacy saves adopt the outstanding shot or inter-shot wait without starting a second full salvo',()=>{
  for(const waiting of [false,true]) {
    const f=fixture();begin(f);
    if(waiting)until(f,()=>f.enemy.nativeShooter?.phase==='betweenWait');
    const save=JSON.parse(JSON.stringify(f.game.snapshot())),entry=savedEnemy(save);
    delete entry.nativeShooter;
    if(waiting){entry.animationState='idle';entry.pendingAttack=null;entry.attackTimer=.25;}
    const restored=copyOf(f,save);
    assert.equal(restored.enemy.nativeShooter.phase,waiting?'betweenWait':'shoot');
    assert.equal(restored.enemy.nativeShooter.remaining,1);
    if(waiting)assert.equal(restored.enemy.nativeShooter.waitUntil,restored.game.time+.25);
    until(restored,()=>restored.enemy.nativeShooter?.phase==='wait');
    assert.equal(restored.shots.length,waiting?1:2);assert.equal(restored.enemy.salvoRemaining,0);
  }
});

test('script freeze and cutscene shift native wait deadlines without consuming the committed child',()=>{
  for(const freeze of ['enemiesFrozen','cutscene']) {
    const f=fixture();begin(f);until(f,()=>f.enemy.nativeShooter?.phase==='betweenWait');tick(f,.05);
    const remaining=f.enemy.nativeShooter.waitUntil-f.game.time,animationUntil=f.enemy.animationUntil;
    f.game.scripts={[freeze]:true};tick(f,.5);
    assert.equal(f.shots.length,1);assert.equal(f.enemy.nativeShooter.phase,'betweenWait');
    assert.ok(Math.abs(f.enemy.nativeShooter.waitUntil-f.game.time-remaining)<1e-10);
    assert.ok(Math.abs(f.enemy.animationUntil-animationUntil-.5)<1e-10);
    f.game.scripts=null;tick(f,Math.max(0,remaining-.002));assert.equal(f.shots.length,1);
    until(f,()=>f.shots.length===2);assert.equal(f.enemy.salvoRemaining,0);
  }
});

test('actual selected hit cancels the native child and pending release, while sound-only hit preserves both',()=>{
  for(const [seed,react] of [[1,true],[16,false]]) {
    const f=fixture();begin(f);const state=f.enemy.nativeShooter,pending=f.enemy.pendingAttack,release=pending.at;
    f.enemy.aiRandomState=seed;f.game.hurtEnemy(f.enemy,1);
    assert.equal(f.enemy.health,99);assert.equal(f.enemy.alerted,true);
    assert.equal(f.events.filter(event=>event.type==='enemyAction'&&event.action==='hurt').length,1);
    if(react){
      assert.equal(f.enemy.nativeShooter,null);assert.equal(f.enemy.pendingAttack,null);
      assert.equal(f.enemy.salvoRemaining,0);assert.equal(f.enemy.attackTimer,0);assert.equal(f.enemy.animationState,'hurt');
      tick(f,release-f.game.time+.02);assert.equal(f.shots.length,0);
    }else{
      assert.equal(f.enemy.nativeShooter,state);assert.equal(f.enemy.pendingAttack,pending);assert.equal(f.enemy.animationState,'attack');
      until(f,()=>f.shots.length===2);assert.equal(f.enemy.salvoRemaining,0);
    }
  }
});
