import test from 'node:test';
import assert from 'node:assert/strict';
import {BspCollider} from '../src/collision.js';
import {resolveThirdPersonCamera,cameraInsidePlayer} from '../src/third-person-camera.js';
// Real convex BSP sweeps, including start-solid and camera-hull clearance.
function collider(boxes){
  const planes=[],leaves=[],leafSides=[],models=[];
  for(const [min,max] of boxes){
    const firstSide=leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){
      const n=[0,0,0];n[axis]=sign;leafSides.push([planes.length,0]);planes.push([...n,sign>0?max[axis]:-min[axis]]);
    }
    models.push({root:-leaves.length-1,min,max});leaves.push({contents:1,firstSide,numSides:6,min,max});
  }
  const world=new BspCollider({planes,nodes:[],leaves,leafSides,models});
  return (a,b)=>world.trace(a,b,[-4,-4,-4],[4,4,4],models.map((_,i)=>i),null);
}
const identity=(a,b)=>({end:[...b],fraction:1,startSolid:false});
const fixture=(trace=identity)=>({anchor:[0,43,0],desired:[0,56,145],previous:[0,56,145],playerPosition:[0,0,0],dt:1/60,snap:false,trace});
const safe=(pose,f)=>{
  assert.equal(pose.hidePlayer,false);assert.equal(cameraInsidePlayer(pose.position,f.playerPosition),false);
  const hit=f.trace(f.anchor,pose.position);assert.equal(hit.startSolid,false);assert.ok(hit.fraction>.99999);
};
test('open-space chase position and normal smoothing remain unchanged',()=>{
  const f=fixture(),pose=resolveThirdPersonCamera(f);assert.deepEqual(pose.position,f.desired);assert.equal(pose.lift,0);safe(pose,f);
  f.previous=[0,56,165];const moving=resolveThirdPersonCamera(f);assert.ok(Math.abs(moving.position[2]-(145+20*Math.exp(-12/60)))<1e-9);
});
test('backing into a rear wall lifts the camera above the visible actor instead of inside it',()=>{
  const trace=collider([[[-500,-100,11],[500,500,100]]]),f=fixture(trace);
  for(const previous of [[0,43,7],[0,56,145]]){
    f.previous=previous;const pose=resolveThirdPersonCamera(f);safe(pose,f);assert.ok(pose.position[1]>90);assert.ok(pose.lift>.8);assert.ok(pose.position[2]<7.01);
    assert.ok(pose.position[2]>.1,'overhead view retains a stable horizontal heading');
  }
});
test('every frame of a backwards approach and retreat stays outside model and geometry',()=>{
  const trace=collider([[[-500,-100,220],[500,500,400]]]),f=fixture(trace);let position=f.previous,sawOverhead=false;
  for(const z of [...Array.from({length:210},(_,i)=>i),...Array.from({length:210},(_,i)=>209-i)]){
    f.playerPosition=[0,0,z];f.anchor=[0,43,z];f.desired=[0,56,z+145];f.previous=position;
    const pose=resolveThirdPersonCamera(f);safe(pose,f);position=pose.position;sawOverhead||=pose.lift>.8;
  }
  assert.equal(sawOverhead,true);
  for(let i=0;i<120;i++){f.previous=position;position=resolveThirdPersonCamera(f).position;}
  assert.ok(Math.hypot(...position.map((v,i)=>v-f.desired[i]))<.001,'camera returns to its normal trailing view');
});
test('corner walls still allow an overhead pose',()=>{
  const f=fixture(collider([[[-500,-100,11],[500,500,100]],[[11,-100,-500],[100,500,500]]]));
  const pose=resolveThirdPersonCamera(f);safe(pose,f);assert.ok(pose.position[1]>90);
});
test('low ceilings choose a clear external side view instead of entering the ceiling or actor',()=>{
  const f=fixture(collider([[[-500,-100,11],[500,500,100]],[[-500,72,-500],[500,100,500]]]));
  const pose=resolveThirdPersonCamera(f);safe(pose,f);assert.ok(pose.position[1]<68);assert.ok(Math.abs(pose.position[0])>28);
});
test('smoothing is collision-checked and cannot cut through the body between safe endpoints',()=>{
  const f=fixture();f.previous=[0,43,-40];f.dt=.015;
  const pose=resolveThirdPersonCamera(f);safe(pose,f);
  assert.ok(pose.position[2]>=28||pose.position[2]<=-28||pose.position[1]>=80);
});
test('a camera with no external clearance hides only the obstructing model until room returns',()=>{
  const boxes=[[[11,-100,-500],[100,500,500]],[[-100,-100,-500],[-11,500,500]],[[-500,-100,11],[500,500,100]],[[-500,-100,-100],[500,500,-11]],[[-500,64,-500],[500,100,500]]];
  const f=fixture(collider(boxes)),pose=resolveThirdPersonCamera(f);assert.equal(pose.hidePlayer,true);
  f.trace=identity;f.previous=pose.position;const recovered=resolveThirdPersonCamera(f);safe(recovered,f);
});
test('camera solution does not mutate actor position, intended boom or remembered view',()=>{
  const f=fixture(collider([[[-500,-100,11],[500,500,100]]]));const before=JSON.stringify({...f,trace:null});resolveThirdPersonCamera(f);assert.equal(JSON.stringify({...f,trace:null}),before);
});
