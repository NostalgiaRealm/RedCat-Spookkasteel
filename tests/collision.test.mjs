import test from 'node:test';import assert from 'node:assert/strict';import {readFileSync} from 'node:fs';
import {BspCollider,PlayerController} from '../src/collision.js';
const box={planes:[[1,0,0,10],[-1,0,0,10],[0,1,0,10],[0,-1,0,10],[0,0,1,10],[0,0,-1,10]],nodes:[],leaves:[{contents:1,firstSide:0,numSides:6,min:[-10,-10,-10],max:[10,10,10]}],leafSides:Array.from({length:6},(_,i)=>[i,0]),models:[{root:-1}]};
test('swept hull stops at an expanded solid wall, with outward normal',()=>{const c=new BspCollider(box);const h=c.trace([30,0,0],[-30,0,0],[-2,-2,-2],[2,2,2]);assert.ok(Math.abs(h.end[0]-12.05)<0.001);assert.deepEqual(h.normal,[1,0,0]);assert.equal(h.startSolid,false);});
test('parallel movement outside a solid leaves full motion available',()=>{const c=new BspCollider(box);assert.equal(c.trace([30,-30,0],[30,30,0],[-2,-2,-2],[2,2,2]).fraction,1);});
test('slide projects motion onto wall instead of passing through it',()=>{const c=new BspCollider(box);const hit=c.slide([20,0,0],[-20,6,0],[-2,-2,-2],[2,2,2]);assert.ok(hit.position[0]>=12);assert.ok(Math.abs(hit.position[1]-6)<0.001);});
test('disabled moving model does not block movement',()=>{const c=new BspCollider(box);c.disabledModels.add(0);assert.equal(c.trace([20,0,0],[0,0,0]).fraction,1);});
for(let index=0;index<5;index++)test(`original level ${index+1}: spawn settles and player can walk/jump`,()=>{
 const level=JSON.parse(readFileSync(new URL(`../data/levels/lvl0${index}a/level.json`,import.meta.url)));
 const c=new BspCollider(level.collision),spawn=level.spawn.position.map((v,i)=>i===1?v+1:v),p=new PlayerController(c,spawn);
 for(let i=0;i<120;i++)p.update(1/60,{forward:0,right:0},0);
 assert.ok(p.grounded);assert.ok(Math.abs(p.position[1]-spawn[1])<100);assert.equal(c.trace(p.position,p.position,p.mins,p.maxs).startSolid,false);
 const start=[...p.position];p.update(1/60,{forward:0,right:0,jump:true},0);assert.ok(p.velocityY>0);
 p.update(1/60,{forward:0,right:0},0);assert.ok(p.position[1]>start[1]);
 for(let i=0;i<100;i++)p.update(1/60,{forward:0,right:0},0);assert.ok(p.grounded);
 for(let i=0;i<20;i++)p.update(1/60,{forward:1,right:0},level.spawn.orientation*Math.PI/6);
 assert.ok(Math.hypot(p.position[0]-start[0],p.position[2]-start[2])>0.1);
});

const movingBox = () => new BspCollider({...box,models:[{root:-1},{root:-1}]});
const close = (actual,expected,epsilon=1e-9) => assert.ok(Math.abs(actual-expected)<epsilon,`${actual} differs from ${expected}`);

test('translated brush collision follows motion beyond the original leaf bounds',()=>{
  const c=movingBox();
  c.modelTransforms.set(1,{origin:[0,0,0],translation:[100,20,-15],rotation:[0,0,0,1]});
  const hit=c.trace([130,20,-15],[70,20,-15],[-2,-2,-2],[2,2,2],[1]);
  close(hit.end[0],112.05); assert.deepEqual(hit.normal,[1,0,0]); assert.equal(hit.modelIndex,1);
  assert.equal(c.trace([20,0,0],[0,0,0],undefined,undefined,[1]).fraction,1);
  c.disabledModels.add(1);
  assert.equal(c.trace([130,20,-15],[70,20,-15],undefined,undefined,[1]).fraction,1);
});

test('model zero stays fixed and shared BSP leaves are visited for each model instance',()=>{
  const c=movingBox();
  c.modelTransforms.set(0,{translation:[1000,0,0]});
  c.modelTransforms.set(1,{translation:[100,0,0]});
  const movingHit=c.trace([130,0,0],[70,0,0],undefined,undefined,[0,1]);
  close(movingHit.end[0],110.05); assert.equal(movingHit.modelIndex,1);
  const worldHit=c.trace([30,0,0],[-30,0,0],undefined,undefined,[0,1]);
  close(worldHit.end[0],10.05); assert.equal(worldHit.modelIndex,0);
  const inside=c.trace([100,0,0],[101,0,0],undefined,undefined,[1]);
  assert.equal(inside.startSolid,true); assert.equal(inside.fraction,0); assert.equal(inside.modelIndex,1);
});

test('rotated convex planes expand against the world AABB around an offset pivot',()=>{
  const rectangle={...box,planes:[[1,0,0,10],[-1,0,0,10],[0,1,0,2],[0,-1,0,2],[0,0,1,3],[0,0,-1,3]],
    leaves:[{...box.leaves[0],min:[-10,-2,-3],max:[10,2,3]}],models:[{root:-1},{root:-1}]};
  const c=new BspCollider(rectangle),angle=Math.PI/4,s=Math.sin(angle),co=Math.cos(angle);
  c.modelTransforms.set(1,{origin:[10,0,0],translation:[40,10,0],rotation:[0,0,Math.sin(angle/2),Math.cos(angle/2)]});
  const center=[50-10*co,10-10*s,0],normal=[-s,co,0];
  const start=center.map((v,i)=>v+normal[i]*30);
  const hit=c.trace(start,center,[-1,-5,-2],[3,4,2],[1]);
  const clearance=2+3*s+5*co+0.05;
  hit.end.forEach((v,i)=>close(v,center[i]+normal[i]*clearance));
  hit.normal.forEach((v,i)=>close(v,normal[i]));
  assert.equal(hit.modelIndex,1); assert.equal(hit.startSolid,false);
});

test('rotated BSP partition traversal uses the moved plane and world sweep extent',()=>{
  // Original solid occupies 0<=x<=10, and its root partitions at x=0.
  const partitioned={...box,planes:[[1,0,0,10],[-1,0,0,0],...box.planes.slice(2),[1,0,0,0]],
    nodes:[[-1,-2,6]],leaves:[{...box.leaves[0],min:[0,-10,-10]}, {contents:0,numSides:0}],models:[{root:-2},{root:0}]};
  const c=new BspCollider(partitioned);
  c.modelTransforms.set(1,{origin:[0,0,0],translation:[100,0,0],rotation:[0,1,0,0]});
  const hit=c.trace([80,0,0],[95,0,0],[-2,-2,-2],[2,2,2],[1]);
  close(hit.end[0],87.95); assert.deepEqual(hit.normal,[-1,0,0]); assert.equal(hit.modelIndex,1);
  assert.equal(c.trace([110,-20,0],[110,20,0],[-2,-2,-2],[2,2,2],[1]).fraction,1);
});

test('rotated collision honors inverted leaf sides and the nearest model hit',()=>{
  const inverted={...box,planes:box.planes.map(p=>p.map(v=>-v)),leafSides:box.leafSides.map(([index])=>[index,1]),models:[{root:-1},{root:-1},{root:-1}]};
  const c=new BspCollider(inverted);
  c.modelTransforms.set(1,{translation:[100,0,0],rotation:[0,0,Math.SQRT1_2,Math.SQRT1_2]});
  c.modelTransforms.set(2,{translation:[150,0,0]});
  const hit=c.trace([200,0,0],[50,0,0],undefined,undefined,[1,2]);
  close(hit.end[0],160.05); assert.equal(hit.modelIndex,2);
  c.disabledModels.add(2);
  const second=c.trace([200,0,0],[50,0,0],undefined,undefined,[1,2]);
  close(second.end[0],110.05); assert.equal(second.modelIndex,1);
});
