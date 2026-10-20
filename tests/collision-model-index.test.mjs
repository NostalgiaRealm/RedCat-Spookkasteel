import test from 'node:test';
import assert from 'node:assert/strict';
import {BspCollider} from '../src/collision.js';

function fixture() {
  const data={planes:[],nodes:[],leaves:[{contents:0,numSides:0}],leafSides:[],models:[{root:-1}]};
  for(let i=0;i<48;i++) {
    const min=[i*100-10,-10,-10],max=[i*100+10,10,10],firstSide=data.leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]) {
      const n=[0,0,0];n[axis]=sign;data.leafSides.push([data.planes.length,0]);
      data.planes.push([...n,sign*(sign>0?max[axis]:min[axis])]);
    }
    data.leaves.push({contents:i%2?2:1,firstSide,numSides:6,min,max});
    data.models.push({root:-data.leaves.length,min:[...min],max:[...max]});
  }
  return data;
}
const frozen=data=>Object.freeze(data.models.map((_,i)=>i));
const compare=(collider,indices,...args)=>assert.deepEqual(collider.trace(...args,indices),collider.trace(...args,[...indices]));
const pose=x=>({translation:[x,0,0],origin:[0,0,0],rotation:[0,0,0,1]});

test('frozen physical lists visit only overlapping static brushes and preserve sweep results',()=>{
  const data=fixture(),c=new BspCollider(data),indices=frozen(data);let checked=0;
  const original=c.transformForModel;c.transformForModel=function(index){checked++;return original.call(this,index);};
  const expected=new BspCollider(data).trace([-30,0,0],[30,0,0],[-2,-2,-2],[2,2,2],[...indices]);
  assert.deepEqual(c.trace([-30,0,0],[30,0,0],[-2,-2,-2],[2,2,2],indices),expected);
  assert.equal(checked,2,'world plus one nearby brush; distant brushes do not enter pose validation');
  for(const [start,end] of [[[0,0,0],[0,0,0]],[[12,0,0],[12,0,0]],[[12,-30,0],[12,30,0]],[[5000,0,0],[-30,0,0]]])compare(c,indices,start,end,[-2,-2,-2],[2,2,2]);
});

test('moved, disabled, replaced and in-place mutated brush poses remain live in an indexed list',()=>{
  const data=fixture(),c=new BspCollider(data),indices=frozen(data);
  for(const value of [pose(-4700),pose(-4695),pose(300)]) {
    c.modelTransforms.set(48,value);compare(c,indices,[-30,0,0],[30,0,0],[-2,-2,-2],[2,2,2]);
    value.translation[0]-=100;compare(c,indices,[-30,0,0],[30,0,0],[-2,-2,-2],[2,2,2]);
    c.modelTransforms=new Map(c.modelTransforms);compare(c,indices,[-30,0,0],[30,0,0],[-2,-2,-2],[2,2,2]);
    c.disabledModels.add(48);compare(c,indices,[-30,0,0],[30,0,0],[-2,-2,-2],[2,2,2]);c.disabledModels.delete(48);
  }
  c.modelTransforms.delete(48);compare(c,indices,[4650,0,0],[4750,0,0],[-2,-2,-2],[2,2,2]);
  c.modelTransforms.set(48,{rotation:[0,0,0,0]});
  assert.throws(()=>c.trace([-30,0,0],[30,0,0],undefined,undefined,indices),RangeError,'invalid poses are still validated when their authored box is far away');
});

test('candidate ordering retains duplicate IDs, start-solid penetrations and the unbounded world',()=>{
  const data=fixture();data.models[0]={root:-2,min:[-1,-1,-1],max:[1,1,1]};
  const c=new BspCollider(data),indices=Object.freeze([48,...frozen(data).slice().reverse(),1,0,1]);
  c.modelTransforms.set(48,pose(-4700));c.modelTransforms.set(0,{rotation:[0,0,0,0]});
  for(const point of [[0,0,0],[12,0,0],[100,0,0]])compare(c,indices,point,point,[-2,-2,-2],[2,2,2]);
  for(const mask of [1,2,3,67])assert.deepEqual(c.trace([-30,0,0],[130,0,0],undefined,undefined,indices,false,mask),c.trace([-30,0,0],[130,0,0],undefined,undefined,[...indices],false,mask));
});

test('mutable lists retain immediate edits and non-finite hull queries use the original scan',()=>{
  const data=fixture(),c=new BspCollider(data),indices=frozen(data),mutable=[...indices];
  assert.equal(c.trace([-30,0,0],[30,0,0],undefined,undefined,mutable).modelIndex,1);
  mutable.splice(mutable.indexOf(1),1);assert.equal(c.trace([-30,0,0],[30,0,0],undefined,undefined,mutable).fraction,1);
  for(const start of [[NaN,0,0],[Infinity,0,0],[-Infinity,0,0]])compare(c,indices,start,[30,0,0]);
  assert.equal(c.traceModelIndices(indices,[3,0,0],[2,1,1]),indices);
});

test('tracked pose snapshots refit translated brushes immediately, including temporary and restored poses',async()=>{
  const {ModelTransformMap}=await import('../src/model-transforms.js');
  const data=fixture(),c=new BspCollider(data),indices=frozen(data);c.modelTransforms=new ModelTransformMap();
  const check=(start=[-30,0,0],end=[30,0,0])=>compare(c,indices,start,end,[-2,-2,-2],[2,2,2]);
  check();
  const initial=pose(-4700);c.modelTransforms.set(48,initial);check();
  const stored=c.modelTransforms.get(48);
  assert.ok(Object.isFrozen(stored)&&Object.isFrozen(stored.translation));
  initial.translation[0]=500;check();assert.equal(stored.translation[0],-4700,'caller mutation cannot change a published pose snapshot');
  c.modelTransforms.set(48,pose(500));check([5150,0,0],[5250,0,0]);
  c.modelTransforms.set(48,stored);check();
  c.modelTransforms.set(48,pose(-4500));c.modelTransforms.set(48,stored);check();
  c.modelTransforms.delete(48);check([4650,0,0],[4750,0,0]);
  c.modelTransforms.set(1,pose(300));c.modelTransforms.set(48,stored);check();
  c.modelTransforms.clear();check();
  c.modelTransforms=new ModelTransformMap([[48,stored]]);check();
  c.modelTransforms=new Map([[48,pose(500)]]);check([5150,0,0],[5250,0,0]);
  c.modelTransforms=new ModelTransformMap([[48,stored]]);check();
});

test('tracked refits preserve disabled invalid transforms and overlapping duplicate model ordering',async()=>{
  const {ModelTransformMap}=await import('../src/model-transforms.js');
  const data=fixture(),c=new BspCollider(data),indices=Object.freeze([...frozen(data),48,1]);c.modelTransforms=new ModelTransformMap();
  c.modelTransforms.set(48,pose(-4700));compare(c,indices,[0,0,0],[0,0,0],[-2,-2,-2],[2,2,2]);
  c.disabledModels.add(48);c.modelTransforms.set(48,{rotation:[0,0,0,0]});
  assert.doesNotThrow(()=>compare(c,indices,[-30,0,0],[30,0,0]));
  c.disabledModels.delete(48);assert.throws(()=>c.trace([-30,0,0],[30,0,0],undefined,undefined,indices),RangeError);
  c.modelTransforms.set(48,pose(-4700));compare(c,indices,[0,0,0],[0,0,0],[-2,-2,-2],[2,2,2]);
});

test('indexed contents retain liquid cells without collision sides through pose changes and disabling',async()=>{
  const {ModelTransformMap}=await import('../src/model-transforms.js');
  const data=fixture();data.leaves[1].contents=0x1000c;data.leaves[1].numSides=0;
  const c=new BspCollider(data),indices=frozen(data);c.modelTransforms=new ModelTransformMap();
  const check=point=>assert.equal(c.contents(point,[-2,-2,-2],[2,2,2],indices),c.contents(point,[-2,-2,-2],[2,2,2],[...indices]));
  check([0,0,0]);assert.ok(c.contents([0,0,0],[-2,-2,-2],[2,2,2],indices)&0x10000);
  c.modelTransforms.set(1,pose(280));check([280,0,0]);check([0,0,0]);
  assert.ok(c.contents([280,0,0],[-2,-2,-2],[2,2,2],indices)&0x10000);
  c.disabledModels.add(1);check([280,0,0]);assert.equal(c.contents([280,0,0],[-2,-2,-2],[2,2,2],indices)&0x10000,0);
  c.disabledModels.delete(1);c.modelTransforms.clear();check([0,0,0]);
});
