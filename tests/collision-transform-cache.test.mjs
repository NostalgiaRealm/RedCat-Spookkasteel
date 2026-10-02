import test from 'node:test';
import assert from 'node:assert/strict';
import {BspCollider} from '../src/collision.js';

function fixture() {
  const min=[-10,-4,-2],max=[10,4,2];
  const planes=[[1,0,0,10],[-1,0,0,10],[0,1,0,4],[0,-1,0,4],[0,0,1,2],[0,0,-1,2]];
  return new BspCollider({planes,nodes:planes.map((_,i)=>[-1,i===5?-2:i+1,i]),
    leaves:[{contents:0,numSides:0},{contents:1,firstSide:0,numSides:6,min,max}],
    leafSides:planes.map((_,i)=>[i,0]),models:[{root:-1},{root:0,min:[...min],max:[...max]}]});
}
const pose=(translation=[100,0,0],angle=0,origin=[0,0,0])=>({translation,origin,rotation:[0,Math.sin(angle/2),0,Math.cos(angle/2)]});
const trace=c=>c.trace([150,0,0],[50,0,0],[-1,-1,-1],[1,1,1],[1]);
const contents=c=>c.contents([100,0,0],[-1,-1,-1],[1,1,1],[1]);

test('stationary trace and contents queries reuse transformed planes and model/leaf bounds',()=>{
  const c=fixture();c.modelTransforms.set(1,pose());
  assert.ok(trace(c).fraction<1);assert.equal(contents(c),1);
  const transform=c.transformForModel(1),plane=transform.plane(c.data.planes[0]);
  const modelBounds=transform.bounds(...c.modelBounds[1]),leaf=c.data.leaves[1];
  const leafBounds=transform.bounds(leaf.min,leaf.max);
  for(let i=0;i<20;i++) {
    // Native script samples allocate fresh objects; a replacement Map is also
    // used while restoring saves. Neither means that the brush actually moved.
    c.modelTransforms=new Map([[1,pose()]]);
    assert.ok(trace(c).fraction<1);assert.equal(contents(c),1);
    assert.equal(c.transformForModel(1),transform);
    assert.equal(transform.plane(c.data.planes[0]),plane);
    assert.equal(transform.bounds(...c.modelBounds[1]),modelBounds);
    assert.equal(transform.bounds(leaf.min,leaf.max),leafBounds);
  }
});

function queryResults(c) {
  const centers=[[0,0,0],[100,0,0],[140,0,0],[100,15,0],[80,0,20]];
  const results=[];
  for(const point of centers) {
    for(let axis=0;axis<3;axis++) {
      const from=point.map((v,i)=>v+(i===axis?60:0)),to=point.map((v,i)=>v-(i===axis?60:0));
      results.push(c.trace(from,to,[-1,-2,-3],[2,3,4],[1]));
    }
    results.push(c.trace(point,point,[-1,-2,-3],[2,3,4],[1]));
    results.push(c.contents(point,[0,0,0],[0,0,0],[1]),c.contents(point,[-1,-2,-3],[2,3,4],[1]));
  }
  return results;
}
function matchesFresh(c) {
  const fresh=fixture();fresh.modelTransforms=new Map([...c.modelTransforms].map(([id,value])=>[id,structuredClone(value)]));
  assert.deepEqual(queryResults(c),queryResults(fresh),'cached collision must equal a newly constructed collider at the same pose');
}

test('in-place translation, rotation and pivot mutations immediately invalidate the pose',()=>{
  const c=fixture(),value=pose();c.modelTransforms.set(1,value);matchesFresh(c);
  let previous=c.transformForModel(1);
  for(const change of [()=>value.translation[0]=140,()=>value.translation[1]=15,
    ()=>{value.rotation[1]=Math.SQRT1_2;value.rotation[3]=Math.SQRT1_2;},()=>value.origin[0]=10,()=>value.origin[2]=7]) {
    change();matchesFresh(c);const next=c.transformForModel(1);assert.notEqual(next,previous);previous=next;
  }
});

test('temporary old and destination poses restore exact collision without retaining historical poses',()=>{
  const c=fixture(),original=pose([100,0,0],Math.PI/4,[8,0,0]);c.modelTransforms.set(1,original);
  const expected=queryResults(c);
  for(let i=0;i<80;i++) {
    c.modelTransforms.set(1,pose([140,i%16,0],i*.1,[5,0,2]));matchesFresh(c);
    c.modelTransforms.set(1,pose([80,0,20],-i*.1));matchesFresh(c);
    c.modelTransforms.set(1,original);assert.deepEqual(queryResults(c),expected);
    assert.equal(c.modelTransformCache.size,1,'only the current pose is retained for this model');
  }
});

test('deleting a pose restores stationary bounds and reinserting it moves collision again',()=>{
  const c=fixture();c.modelTransforms.set(1,pose());trace(c);
  c.modelTransforms.delete(1);assert.equal(trace(c).fraction,1);assert.equal(contents(c),0);matchesFresh(c);
  assert.equal(c.modelTransformCache.size,0);
  c.modelTransforms.set(1,pose());assert.ok(trace(c).fraction<1);assert.equal(contents(c),1);
  c.modelTransforms=new Map();matchesFresh(c);assert.equal(c.modelTransformCache.size,0);
});

test('invalid mutations still fail validation after a valid pose has been cached',()=>{
  for(const invalid of [{translation:[Infinity,0,0]},{origin:[NaN,0,0]},{translation:[100,0]},
    {rotation:[0,0,0,0]},{rotation:[0,0,0]},{rotation:[0,0,0,'1']}]) {
    const c=fixture(),value=pose();c.modelTransforms.set(1,value);trace(c);
    Object.assign(value,invalid);
    for(const query of [trace,contents])assert.throws(()=>query(c),{name:invalid.rotation?.length===4&&invalid.rotation.every(v=>v===0)?'RangeError':'TypeError'});
    Object.assign(value,pose());assert.ok(trace(c).fraction<1);assert.equal(contents(c),1);
  }
});

test('world model remains stationary and transform defaults and normalized quaternions stay valid',()=>{
  const c=fixture();c.modelTransforms.set(0,{rotation:[0,0,0,0]});
  assert.doesNotThrow(()=>c.trace([0,0,0],[1,0,0],undefined,undefined,[0]));
  assert.doesNotThrow(()=>c.contents([0,0,0],undefined,undefined,[0]));
  c.modelTransforms.set(1,{translation:[100,0,0]});const expected=trace(c);assert.equal(contents(c),1);
  c.modelTransforms.set(1,{translation:[100,0,0],rotation:[0,0,0,2]});assert.deepEqual(trace(c),expected);assert.equal(contents(c),1);
  c.modelTransforms.set(1,{});matchesFresh(c);
});
