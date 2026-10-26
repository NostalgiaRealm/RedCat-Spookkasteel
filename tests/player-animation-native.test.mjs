import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator} from '../source/animation.js';
import {playerMotion,snapshotPlayerAnimation,restorePlayerAnimation} from '../source/player-animation.js';
import {CastleWorld} from '../source/world.js';
import {PLAYER_SHOOT_MOTION,PLAYER_SUPER_CHARGE} from '../source/player-projectiles.js';
import {PLAYER_REACTIONS} from '../source/player-lifecycle.js';
import {Gameplay} from '../source/gameplay.js';
import {ScriptHost} from '../source/script-host.js';
const data=JSON.parse(readFileSync(new URL('../assets/actors/redcat.json',import.meta.url)));
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-7,`${a} != ${b}`);
function animator(asset=data,blend=true) {
  const geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(asset.positions,3));
  geometry.setAttribute('normal',new THREE.Float32BufferAttribute(asset.normals,3));
  const a=new ActorAnimator(asset,geometry);a.play('idle');a.transitionDuration=blend?.25:0;return a;
}
function world() {
  const redcat=new THREE.Group();redcat.userData.animator=animator();
  return {redcat,settings:{camera:'third'},yaw:0,physicalModels:[0],
    player:{position:[0,0,0],grounded:true,jumpKind:null,jumpSerial:0,noClip:false,velocityY:0},
    gameplay:{time:10,playerAttackUntil:0,scripts:{cutscene:false,playerVisible:true}},
    collider:{trace:(a,b)=>({end:[a[0],a[1]-40,a[2]]})}};
}
const sync=(w,dt=0,input={})=>CastleWorld.prototype.syncPlayer.call(w,dt,input);
const pose=a=>[...a.geometry.attributes.position.array];

test('RcHintMotion accepts the native range, ignores invalid values and survives legacy/new saves',()=>{
  const game=new Gameplay({id:'lvl00a',entities:[],spawn:{position:[0,0,0]}}),host=new ScriptHost(game,{version:27});
  assert.equal(host.hintMotion,0);
  for(let i=0;i<16;i++){host.callNative('RcHintMotion',[i]);assert.equal(host.hintMotion,i);}
  host.callNative('RcHintMotion',[12]);
  for(const value of [-1,16,Infinity,NaN]){host.callNative('RcHintMotion',[value]);assert.equal(host.hintMotion,12);}
  const saved=JSON.parse(JSON.stringify(host.snapshot()));
  host.callNative('RcHintMotion',[0]);host.restore(saved);assert.equal(host.hintMotion,12);
  delete saved.hintMotion;host.restore(saved);assert.equal(host.hintMotion,0);
});

test('dormant hint 12 repeatedly requests fall1 until cleared, then yields on a movement-state change',()=>{
  const w=world(),g=w.gameplay,a=w.redcat.userData.animator;g.scripts.hintMotion=12;
  sync(w,.1,{forward:1});assert.equal(a.name,'fall1');near(a.time,.15);assert.equal(a.loop,false);
  sync(w,.1,{forward:1});near(a.time,.15,'native repeated non-looping request restarts the clip');
  const before=snapshotPlayerAnimation(w.redcat),restored=world();restored.gameplay.scripts.hintMotion=12;
  restorePlayerAnimation(restored.redcat,JSON.parse(JSON.stringify(before)),restored.player);
  sync(restored,0,{forward:1});assert.deepEqual(pose(restored.redcat.userData.animator),pose(a));
  g.scripts.hintMotion=0;restored.gameplay.scripts.hintMotion=0;
  sync(w,.1,{forward:1});sync(restored,.1,{forward:1});near(a.time,.3);
  assert.deepEqual(pose(restored.redcat.userData.animator),pose(a));
  sync(w,.1);assert.equal(a.name,'idle','changing movement state releases the hinted motion');
  g.scripts.hintMotion=11;sync(w,.1,{forward:1});assert.equal(a.name,'walkfw');
});

test('hinted fall never overrides jumps or the deliberate protected player states',()=>{
  for(const jumpKind of ['normal','super']){
    const w=world();w.gameplay.scripts.hintMotion=12;
    Object.assign(w.player,{grounded:false,jumpKind,jumpSerial:1});sync(w,.1);
    assert.equal(w.redcat.userData.animator.name,jumpKind==='normal'?'jump1':'jump2');
  }
  const w=world(),g=w.gameplay,a=w.redcat.userData.animator;g.scripts.hintMotion=12;
  for(const [phase,spec] of Object.entries(PLAYER_REACTIONS)){
    g.playerReaction={phase,age:.1};sync(w,.01);assert.equal(a.name,spec.motion);
  }
  g.scripts.cutscene=true;sync(w,.01);assert.equal(a.name,'idle');
  g.scripts.cutscene=false;g.playerReaction=null;w.player.noClip=true;sync(w,.01);assert.equal(a.name,'idle');
});

test('RedCat locomotion uses recovered strafe rates without changing diagonal controls',()=>{
  const p={grounded:true,jumpKind:null};
  for(const [input,name,speed] of [[{},'idle',1],[{forward:1},'walkfw',1],[{forward:-1},'walkbw',2.2],
    [{right:1},'strafer',2.4],[{right:-1},'strafel',2.4],[{forward:1,right:1},'walkfw',1]]) {
    assert.deepEqual(playerMotion({},p,input,.02),{name,speed,loop:true});
  }
});

test('long jump and super-jump cycle their original motion; an upward fan is not a jump',()=>{
  for(const [jumpKind,name,rate] of [['normal','jump1',1.4],['super','jump2',1.3]]) {
    const w=world(),a=w.redcat.userData.animator;
    Object.assign(w.player,{grounded:false,velocityY:120,jumpKind,jumpSerial:1});
    sync(w,.4);w.player.velocityY=-100;sync(w,.5);
    assert.equal(a.name,name);assert.equal(a.loop,true);near(a.time,(.9*rate)%a.clip.duration);
    assert.equal(a.finished,false);
    const reference=animator(data,false);reference.play(name);reference.time=a.time;reference.update(0);
    assert.deepEqual(pose(a),pose(reference),'a long flight must not hold the last pose');
    w.player.grounded=true;w.player.jumpKind=null;sync(w,.02);assert.equal(a.name,'idle');
  }
  const w=world();Object.assign(w.player,{grounded:false,velocityY:100,jumpKind:null});sync(w,.1);
  assert.equal(w.redcat.userData.animator.name,'idle');
});

test('drop detection retains positive floor measurements and probes only the native 1000 units',()=>{
  const state={},p={grounded:false,jumpKind:null};
  playerMotion(state,p,{},.01,30);p.grounded=true;playerMotion(state,p,{},.01,0);
  assert.equal(state.groundDistance,30);p.grounded=false;
  assert.notEqual(playerMotion(state,p,{},.01,100).name,'fall1');
  assert.equal(playerMotion(state,p,{},.01,200).name,'fall1');
  const w=world();w.player.grounded=false;
  w.collider.trace=(from,to)=>{near(from[1]-to[1],1000);return {end:to};};
  sync(w,.02);assert.equal(w.redcat.userData.animator.name,'fall1');
  assert.equal(w.redcat.userData.animator.loop,false);
});

test('normal and charged shots yield to movement at native 80%, without altering the deadline',()=>{
  const {duration,rate,finishFraction}=PLAYER_SHOOT_MOTION;
  for(const start of [0,PLAYER_SUPER_CHARGE.holdFraction]) {
    const w=world(),g=w.gameplay,a=w.redcat.userData.animator,begin=g.time;
    g.playerAttackSerial=1;g.playerAttackUntil=begin+duration*(1-start)/rate;
    const deadline=g.playerAttackUntil;
    sync(w,0,{forward:1});assert.equal(a.name,'shoot1');near(a.time,duration*start);
    g.time=begin+duration*(finishFraction-start)/rate-.0001;sync(w,0,{forward:1});assert.equal(a.name,'shoot1');
    g.time+=.0002;sync(w,0,{forward:1});assert.equal(a.name,'walkfw');
    assert.equal(g.playerAttackUntil,deadline);
  }
});

test('reactions and cutscene idle retain priority, and respawn idle alone uses 1.7x',()=>{
  const w=world(),g=w.gameplay,a=w.redcat.userData.animator;
  for(const [phase,spec] of Object.entries(PLAYER_REACTIONS)) {
    g.playerReaction={phase,age:.2};g.playerAttackUntil=g.time+1;
    sync(w,.02,{forward:1});assert.equal(a.name,spec.motion);near(a.time,.2*spec.speed);assert.equal(a.loop,false);
  }
  g.playerReaction=null;g.playerAttackUntil=0;sync(w,.02);
  assert.equal(a.name,'idle');assert.equal(a.timeScale,1.7);
  sync(w,.02);assert.equal(a.timeScale,1.7);
  sync(w,.02,{right:1});assert.equal(a.timeScale,2.4);
  sync(w,.02);assert.equal(a.timeScale,1);
  g.playerReaction={phase:'hit',age:.1};g.scripts.cutscene=true;sync(w,.02,{attack:true,forward:1});
  assert.equal(a.name,'idle');assert.equal(a.timeScale,1);
  const paused=pose(a),time=a.time,version=a.geometry.attributes.position.version;
  for(let i=0;i<50;i++)sync(w,0);
  assert.equal(a.time,time);assert.deepEqual(pose(a),paused);assert.equal(a.geometry.attributes.position.version,version);
});

test('save restoration preserves descending jumps, outgoing blend and boost clocks exactly',()=>{
  for(const [jumpKind,age] of [['normal',.4],['super',.1]]) {
    const w=world();Object.assign(w.player,{grounded:false,velocityY:-50,jumpKind,jumpSerial:3});
    sync(w,age);const before=snapshotPlayerAnimation(w.redcat),a=w.redcat.userData.animator;
    const restored=world();Object.assign(restored.player,w.player);
    restorePlayerAnimation(restored.redcat,JSON.parse(JSON.stringify(before)),restored.player);
    const b=restored.redcat.userData.animator;
    assert.deepEqual(pose(b),pose(a));near(b.time,a.time);
    for(let i=0;i<40;i++){sync(w,.01);sync(restored,.01);assert.deepEqual(pose(b),pose(a));}
    assert.equal(b.name,jumpKind==='super'?'jump2':'jump1');
  }
  const w=world();Object.assign(w.player,{grounded:false,velocityY:-50,jumpKind:'normal',jumpSerial:2,jumpAge:.4});
  restorePlayerAnimation(w.redcat,null,w.player);sync(w,0);
  assert.equal(w.redcat.userData.animator.name,'jump1');near(w.redcat.userData.animator.time,.4*1.4);
});

const simple={bones:[{name:'root',parent:-1,attachment:[1,0,0,0,1,0,0,0,1,0,0,0]}],positions:[1,0,0],normals:[1,0,0],
  localPositions:[1,0,0],localNormals:[1,0,0],joints:[0],normalJoints:[0],
  animations:[['idle',[0,0,0],[0,0,0,1]],['walkfw',[10,0,0],[0,0,1,0]],['hit',[0,10,0],[0,0,0,1]]].map(([name,p,q])=>({name,duration:1,tracks:[{bone:'root',translation:{times:[0],values:p,interpolation:1},rotation:{times:[0],values:q,interpolation:1}}]}))};

test('native transition freezes the old pose and blends keys with Hermite/SLERP over 250ms',()=>{
  const a=animator(simple);a.time=.6;a.update(0);a.play('walkfw');
  assert.deepEqual(pose(a),[1,0,0]);near(a.transition.time,.6);
  a.update(.0625);near(a.transition.weight,.75);assert.deepEqual(pose(a),[1,0,0]);
  a.update(.0625);const f=1-(.75*.75*(3-2*.75));
  assert.ok(Math.abs(pose(a)[0]-(10*f+Math.cos(Math.PI*f)))<1e-6);
  assert.ok(Math.abs(pose(a)[1]-Math.sin(Math.PI*f))<1e-6);
  near(a.transition.time,.6); // The outgoing pose does not keep walking.
  a.update(.125);a.update(.001);assert.deepEqual(pose(a),[9,0,0]);
  a.timeScale=0;const version=a.geometry.attributes.position.version;
  for(let i=0;i<120;i++)a.update(0);
  assert.equal(a.geometry.attributes.position.version,version);
});

test('rapid switches retain the original native transition until its remaining weight drops below half',()=>{
  const a=animator(simple);a.play('walkfw');const first=a.transition;
  a.update(.1);a.play('hit');assert.equal(a.transition,first);
  a.update(.03);a.play('walkfw');assert.notEqual(a.transition,first);assert.equal(a.transition.entry.clip.name,'hit');
  a.update(.02);const saved=JSON.parse(JSON.stringify(a.snapshot())),b=animator(simple);b.restore(saved);
  assert.deepEqual(pose(a),pose(b));
  for(let i=0;i<35;i++){a.update(.01);b.update(.01);assert.deepEqual(pose(a),pose(b));}
  const standard=animator(simple,false);standard.play('walkfw');assert.equal(standard.transition,null);assert.deepEqual(pose(standard),[9,0,0]);
});
