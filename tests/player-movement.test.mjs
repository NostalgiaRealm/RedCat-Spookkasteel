import test from 'node:test';
import assert from 'node:assert/strict';
import {PlayerController} from '../src/collision.js';
import {playerInputVelocity} from '../src/player-movement.js';

const idle={forward:0,right:0,jump:false};
const close=(a,b)=>assert.ok(Math.abs(a-b)<1e-7,`${a} != ${b}`);
const clear={slide:(p,d)=>({position:p.map((v,i)=>v+d[i]),hits:[],models:[]}),
  trace:(a,b)=>({fraction:1,end:[...b],normal:[0,1,0],modelIndex:null})};
const floor={...clear,trace(a,b){
  if(b[1]>=0)return clear.trace(a,b);
  const fraction=a[1]/(a[1]-b[1]);
  return {fraction,end:[a[0]+(b[0]-a[0])*fraction,0,a[2]+(b[2]-a[2])*fraction],normal:[0,1,0],modelIndex:0};
}};
const player=(collider=floor)=>{const p=new PlayerController(collider,[0,0,0]);p.grounded=true;return p;};

test('original ground direction speeds and instantaneous stop are independent of frame rate',()=>{
  for(const hz of [20,60,120])for(const [input,expected] of [
    [{forward:1},[0,-219.52]],[{forward:-1},[0,201.6]],[{right:1},[201.6,0]],
    [{forward:1,walk:true},[0,-134.4]],[{forward:-1,walk:true},[0,219.52]],
    [{right:-1,walk:true},[-219.52,0]],
    [{forward:1,right:1},[201.6/Math.SQRT2,-219.52/Math.SQRT2]]
  ]) {
    const p=player();for(let i=0;i<hz;i++)p.update(1/hz,{...idle,...input},0);
    close(p.position[0],expected[0]);close(p.position[2],expected[1]);assert.equal(p.grounded,true);
    const stopped=[...p.position];p.update(1/hz,idle,0);assert.deepEqual(p.position,stopped);
  }
});

test('analog input keeps its magnitude, normalizes diagonals before speeds, and turns with yaw',()=>{
  assert.deepEqual(playerInputVelocity({forward:.5},0,true),[0,0,-78.4]);
  const v=playerInputVelocity({forward:1,right:1},Math.PI/2,true);
  close(v[0],-156.8/Math.SQRT2);close(v[2],-144/Math.SQRT2);
  playerInputVelocity({},0,true).forEach(v=>close(v,0));
});

test('jump carries takeoff momentum after release and yaw changes only the small airborne steering',()=>{
  const p=player();p.update(.02,{...idle,forward:1,jump:true},0);
  assert.deepEqual(p.launchVelocityXZ,[0,-156.8]);close(p.position[1],0);
  const launch=[...p.position],speed=p.velocityY;
  p.update(.02,idle,Math.PI/2);
  close(p.position[2]-launch[2],-156.8*.02);close(p.position[0],0);
  close(p.position[1],speed*.02-400*.02**2);
  const before=[...p.position];p.update(.02,{...idle,forward:1,walk:true},Math.PI/2);
  close(p.position[0]-before[0],-32*.02);close(p.position[2]-before[2],-156.8*.02);
  // Turning backwards in flight cannot instantly reverse a running leap.
  const z=p.position[2];p.update(.02,{...idle,forward:1},Math.PI);
  close(p.position[2]-z,(-156.8+32)*.02);
});

test('walking off an edge carries launch velocity, then landing clears it before the next step',()=>{
  const p=player({...floor,trace:(a,b)=>a[2]<-5?clear.trace(a,b):floor.trace(a,b)});
  p.update(.05,{...idle,forward:1},0);
  assert.equal(p.grounded,false);assert.deepEqual(p.launchVelocityXZ,[0,-156.8]);close(p.velocityY,-156.8);
  const z=p.position[2];p.update(.02,idle,0);close(p.position[2]-z,-156.8*.02);
  p.collider=floor;p.position[1]=1;
  p.update(.02,idle,0);assert.equal(p.grounded,true);assert.deepEqual(p.launchVelocityXZ,[0,0]);
  const landed=[...p.position];p.update(.02,idle,0);assert.deepEqual(p.position,landed);
});

test('SuperSkippie slows horizontal displacement only on the boost trigger frame',()=>{
  const p=player();p.skill=8;p.update(.02,{...idle,forward:1,jump:true},0);
  for(let i=0;i<9;i++)p.update(.02,{...idle,forward:1},0);
  let z=p.position[2];p.update(.02,{...idle,forward:1,jump:true},0);
  assert.equal(p.didJump,'super');close(p.position[2]-z,(-156.8-32)*.4*.02);
  z=p.position[2];p.update(.02,{...idle,forward:1},0);
  close(p.position[2]-z,(-156.8-32)*.02);assert.equal(p.jumpKind,'super');
});

test('environment velocity uses the ground multiplier; fan launches and noclip retain their own rules',()=>{
  const p=player();p.environmentVelocity=[20,0,0];p.update(.02,idle,0);close(p.position[0],20*1.4*.02);
  p.environmentVelocity=[20,160,-32];const before=[...p.position];p.update(.02,idle,0);
  close(p.position[0]-before[0],40*.02);close(p.position[2]-before[2],-64*.02);
  close(p.position[1]-before[1],(320-400*.02)*.02);
  p.noClip=true;const flight=[...p.position];p.update(.02,idle,0);
  assert.deepEqual(p.position,flight);assert.deepEqual(p.launchVelocityXZ,[0,0]);assert.equal(p.velocityY,0);
});

test('jump inherits moving support velocity once, then flight retains it after leaving the support',()=>{
  const p=player();p.platformVelocity=[40,20,-10];p.update(.02,{...idle,jump:true},0);
  assert.deepEqual(p.launchVelocityXZ,[40,-10]);close(p.velocityY,Math.sqrt(2*800*41.6)+20);
  const start=[...p.position];p.platformVelocity=[0,0,0];p.update(.02,idle,0);
  close(p.position[0]-start[0],40*.02);close(p.position[2]-start[2],-10*.02);
  p.platformVelocity=[40,20,-10];p.resetVelocity();assert.deepEqual(p.platformVelocity,[0,0,0]);
});

test('midair saves resume the same trajectory and legacy or invalid saves safely start at rest',()=>{
  const p=player();p.skill=8;p.update(.02,{...idle,right:1,jump:true},0);
  for(let i=0;i<9;i++)p.update(.02,idle,0);
  p.update(.02,{...idle,jump:true},0);p.update(.02,idle,0);
  const saved=JSON.parse(JSON.stringify(p.snapshotMotion())),restored=player();
  restored.position=[...p.position];restored.skill=p.skill;restored.restoreMotion(saved);
  for(let i=0;i<12;i++) {
    p.update(.02,{...idle,forward:.7},.5);restored.update(.02,{...idle,forward:.7},.5);
    assert.deepEqual(restored.position,p.position);assert.deepEqual(restored.snapshotMotion(),p.snapshotMotion());
  }
  for(const state of [undefined,{velocityY:20,launchVelocityXZ:[0,NaN]}]) {
    restored.restoreMotion(state);assert.equal(restored.velocityY,0);assert.deepEqual(restored.launchVelocityXZ,[0,0]);
  }
  p.resetVelocity();assert.equal(p.jumpKind,null);assert.deepEqual(p.launchVelocityXZ,[0,0]);
});
