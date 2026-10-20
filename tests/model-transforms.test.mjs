import test from 'node:test';
import assert from 'node:assert/strict';
import {ModelTransformMap} from '../src/model-transforms.js';
const pose=(x=0)=>({origin:[1,2,3],translation:[x,0,0],rotation:[0,0,0,1]});
test('pose maps publish immutable snapshots and retain ordinary Map serialization and chaining',()=>{
  const source=pose(8),map=new ModelTransformMap([[4,source]]);
  assert.ok(map instanceof Map);assert.deepEqual(JSON.parse(JSON.stringify([...map])),[[4,source]]);
  assert.notEqual(map.get(4),source);source.origin[0]=90;assert.equal(map.get(4).origin[0],1);
  assert.throws(()=>{map.get(4).translation[0]=25;},TypeError);
  assert.equal(map.set(5,pose()),map);assert.deepEqual([...map.keys()],[4,5]);
});
test('pose notifications reflect exact numeric changes, deletes and clear including immediate away-and-back writes',()=>{
  const map=new ModelTransformMap([[4,pose(8)]]),changes=[],stop=map.subscribe(id=>changes.push(id));
  map.set(4,pose(8));assert.deepEqual(changes,[]);
  map.set(4,pose(9));map.set(4,pose(8));assert.deepEqual(changes,[4,4]);
  assert.equal(map.delete(80),false);assert.equal(map.delete(4),true);assert.deepEqual(changes,[4,4,4]);
  map.set(5,pose());map.set(6,pose());map.clear();assert.deepEqual(changes,[4,4,4,5,6,5,6]);
  map.clear();stop();map.set(7,pose());assert.deepEqual(changes,[4,4,4,5,6,5,6]);
});
