import test from 'node:test';
import assert from 'node:assert/strict';
import {BspCollider} from '../source/collision.js';
import {liftCameraOverPlayer,cameraInsidePlayer} from '../source/third-person-camera.js';
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
// The native camera's unobstructed spot behind RedCat (1.5xH up, 1.7xH back).
const fixture=(trace=identity,position=[0,86.88,98.46])=>({anchor:[0,43,0],desired:[0,86.88,98.46],position,playerPosition:[0,0,0],trace});
test('with room behind RedCat the native camera position is left untouched',()=>{
  const f=fixture(),pose=liftCameraOverPlayer(f);assert.deepEqual(pose.position,f.position);assert.equal(pose.lift,0);
  // A native pull-in that keeps the fix's 80-unit comfort distance stays native.
  const pulled=fixture(identity,[0,86.88,80]);assert.deepEqual(liftCameraOverPlayer(pulled).position,pulled.position);
});
test('backing into a rear wall lifts the camera over RedCat instead of leaving it inside his model',()=>{
  const trace=collider([[[-500,-100,11],[500,500,100]]]);
  // The native pull-in leaves the camera just in front of the wall, inside the body.
  const f=fixture(trace,[0,86.88,6.99]);assert.equal(cameraInsidePlayer([0,60,6.99],f.playerPosition),true);
  const pose=liftCameraOverPlayer({...f,position:[0,60,6.99]});
  assert.equal(cameraInsidePlayer(pose.position,f.playerPosition),false);
  assert.ok(pose.position[1]>90);assert.ok(pose.lift>.8);assert.ok(pose.position[2]<7.01);
  assert.ok(pose.position[2]>.1,'overhead view retains a stable horizontal heading');
  const hit=trace(f.anchor,pose.position);assert.equal(hit.startSolid,false);assert.ok(hit.fraction>.99999);
});
test('corner walls still allow an overhead pose',()=>{
  const trace=collider([[[-500,-100,11],[500,500,100]],[[11,-100,-500],[100,500,500]]]);
  const pose=liftCameraOverPlayer({...fixture(trace),position:[0,40,5]});
  assert.ok(pose.position[1]>90);assert.equal(cameraInsidePlayer(pose.position,[0,0,0]),false);
});
test('a low ceiling that blocks the arc falls back to a clear side view looking at RedCat',()=>{
  const trace=collider([[[-500,-100,11],[500,500,100]],[[-500,72,-500],[500,100,500]]]);
  const pose=liftCameraOverPlayer({...fixture(trace),position:[0,40,5]});
  assert.equal(pose.hidePlayer,false);assert.equal(cameraInsidePlayer(pose.position,[0,0,0]),false);
  assert.ok(pose.position[1]<68);assert.ok(Math.abs(pose.position[0])>28);assert.equal(pose.focus,1);
  const hit=trace(fixture().anchor,pose.position);assert.equal(hit.startSolid,false);assert.ok(hit.fraction>.99999);
});
test('with no external viewpoint at all only the obstructing model is hidden',()=>{
  const boxes=[[[11,-100,-500],[100,500,500]],[[-100,-100,-500],[-11,500,500]],[[-500,-100,11],[500,500,100]],[[-500,-100,-100],[500,500,-11]],[[-500,64,-500],[500,100,500]]];
  const native=[0,40,5],pose=liftCameraOverPlayer({...fixture(collider(boxes)),position:native});
  assert.equal(pose.hidePlayer,true);assert.deepEqual(pose.position,native);
  // Room behind him again: the native position is used and the model shows.
  assert.equal(liftCameraOverPlayer(fixture()).hidePlayer,false);
});

test('backing into a wall frame by frame lifts the camera smoothly and never into RedCat',async()=>{
  const {NativeFollowCamera,CAMERA_HULL_HALF_SIZE}=await import('../source/native-camera.js');
  const {CameraWallLift}=await import('../source/third-person-camera.js');
  // A wall behind RedCat at z=220; he backs up from z=0 to touch it, waits, then walks away.
  const wall=[[[-500,-100,220],[500,500,400]]],small=collider(wall);
  const boxes=(()=>{const planes=[],leaves=[],leafSides=[],models=[];for(const [min,max] of wall){const firstSide=leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){const n=[0,0,0];n[axis]=sign;leafSides.push([planes.length,0]);planes.push([...n,sign>0?max[axis]:-min[axis]]);}
    models.push({root:-leaves.length-1,min,max});leaves.push({contents:1,firstSide,numSides:6,min,max});}
    const world=new BspCollider({planes,nodes:[],leaves,leafSides,models});
    return size=>(a,b)=>world.trace(a,b,[-size,-size,-size],[size,size,size],[0],null);})();
  const camera=new NativeFollowCamera(),lift=new CameraWallLift(),dt=1/60;
  const path=[...Array.from({length:150},(_,i)=>i*1.4),...Array.from({length:60},()=>209),...Array.from({length:150},(_,i)=>209-i*1.4)];
  let previous=null,maxStep=0,sawLift=false,dips=0;
  for(const z of path){
    const feet=[0,0,z],eye=[0,54.08,z],chest=[0,43,z],backing=z<209&&previous&&previous.feet<z;
    const view=camera.update(dt,{feet,eye,height:57.92,heading:0,hasInput:!!backing,backpedal:!!backing,ray:boxes(0),sweep:boxes(CAMERA_HULL_HALF_SIZE)});
    const pose=lift.update(dt,{anchor:chest,desired:view.desired,position:view.position,playerPosition:feet,trace:small});
    assert.equal(cameraInsidePlayer(pose.position,feet),false,`z=${z}: camera outside RedCat`);
    sawLift||=pose.lift>.5;
    if(previous)maxStep=Math.max(maxStep,Math.abs((pose.position[1]-feet[1])-previous.height));
    // While backing in with the lift engaged, the camera only rises.
    if(previous&&backing&&pose.lift>.05&&pose.position[1]-feet[1]<previous.height-.05)dips++;
    previous={feet:z,height:pose.position[1]-feet[1]};
  }
  assert.equal(sawLift,true,'the camera rises over RedCat at the wall');
  // The former fixed-step arc jumped by up to ~12 units in a frame here.
  assert.ok(maxStep<4,`largest per-frame height change ${maxStep.toFixed(2)} units`);
  assert.equal(dips,0,'no downward jitter while backing into the wall');
});
test('standing still at a wall reuses the lift with two checks, rescans when the geometry changes, and every half second',async()=>{
  const {CameraWallLift}=await import('../source/third-person-camera.js');
  const wall=collider([[[-500,-100,11],[500,500,100]]]);
  let world=wall,traces=0;
  const trace=(a,b)=>{traces++;return world(a,b);};
  const f={...fixture(trace,[0,60,6.99])},lift=new CameraWallLift(),dt=1/60;
  const frame=()=>{traces=0;const pose=lift.update(dt,f);return {pose,traces};};
  const first=frame();
  assert.ok(first.traces>10,`the first frame scans the arc (${first.traces})`);
  const still=frame();
  assert.ok(still.traces<=3,`an unchanged frame needs at most three traces (${still.traces})`);
  assert.ok(Math.abs(still.pose.lift-first.pose.lift)<.2);
  // A slab closes in above RedCat: the reused sample now fails and the arc is rescanned.
  world=collider([[[-500,-100,11],[500,500,100]],[[-500,100,-500],[500,300,500]]]);
  const closed=frame();
  assert.ok(closed.traces>10,`changed geometry rescans (${closed.traces})`);
  assert.equal(cameraInsidePlayer(closed.pose.position,f.playerPosition),false);
  // Unchanged frames rescan at least every 0.5 s.
  let rescans=0;for(let i=0;i<60;i++)if(frame().traces>10)rescans++;
  assert.ok(rescans>=1&&rescans<=3,`rescans in one second: ${rescans}`);
});
