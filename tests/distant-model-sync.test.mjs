import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {CastleWorld} from '../source/world.js';
import {ModelTransformMap} from '../source/model-transforms.js';
import {Gameplay} from '../source/gameplay.js';

const pose=(x=0)=>({origin:[10,20,30],translation:[x,2,3],rotation:new THREE.Quaternion().setFromEuler(new THREE.Euler(.2,.4,.1)).toArray()});
function fixture(poses=new ModelTransformMap([[1,pose()],[2,pose(50)]])) {
  const world=new CastleWorld({},{});world.collider={};world.gameplay={scripts:{modelTransforms:poses}};
  let writes=0,states=0;
  world.syncModelStates=()=>states++;
  for(const index of [1,2]) {
    const mesh=new THREE.Mesh(),copy=mesh.position.copy;
    mesh.position.copy=function(value){writes++;return copy.call(this,value);};world.modelMeshes.set(index,[mesh]);
  }
  return {world,poses,get writes(){return writes;},get states(){return states;}};
}
function expected(t) {
  const origin=new THREE.Vector3().fromArray(t.origin),q=new THREE.Quaternion().fromArray(t.rotation);
  return origin.clone().add(new THREE.Vector3(...t.translation)).sub(origin.clone().applyQuaternion(q));
}

test('stationary managed brush poses stop mesh writes while live brush states remain checked',()=>{
  const f=fixture();
  try {
    f.world.syncModels();assert.equal(f.writes,2);
    for(let i=0;i<50;i++){f.poses.set(1,pose());f.world.syncModels();}
    assert.equal(f.writes,2);assert.equal(f.states,51);
    f.poses.set(2,pose(72));f.world.syncModels();assert.equal(f.writes,3);
    assert.deepEqual(f.world.modelMeshes.get(2)[0].position.toArray(),expected(f.poses.get(2)).toArray());
    assert.deepEqual(f.world.modelMeshes.get(2)[0].quaternion.toArray(),f.poses.get(2).rotation);
    f.poses.delete(2);f.world.syncModels();assert.equal(f.writes,3,'removing a pose retains the previous mesh pose, as before');
    assert.equal(f.world.collider.modelTransforms,f.poses);
  } finally {f.world.dispose();}
  assert.equal(f.poses.listeners.size,0);
});

test('pose map replacement, clears and new model collections do not leave stale subscriptions or transforms',()=>{
  const f=fixture();
  try {
    f.world.syncModels();const replacement=new ModelTransformMap([[1,pose(88)]]);
    f.world.gameplay.scripts.modelTransforms=replacement;f.world.syncModels();assert.equal(f.poses.listeners.size,0);
    assert.equal(replacement.listeners.size,1);assert.deepEqual(f.world.modelMeshes.get(1)[0].position.toArray(),expected(replacement.get(1)).toArray());
    f.world.modelMeshes=new Map([[1,[new THREE.Mesh()]]]);f.world.syncModels();
    assert.deepEqual(f.world.modelMeshes.get(1)[0].position.toArray(),expected(replacement.get(1)).toArray());
    replacement.clear();f.world.syncModels();replacement.set(1,pose(99));f.world.syncModels();
    assert.deepEqual(f.world.modelMeshes.get(1)[0].position.toArray(),expected(replacement.get(1)).toArray());
  } finally {f.world.dispose();}
});

test('ordinary mutable pose maps retain immediate numeric in-place updates',()=>{
  const f=fixture(new Map([[1,pose()]]));
  try {
    f.world.syncModels();f.poses.get(1).translation[0]=200;f.world.syncModels();
    assert.deepEqual(f.world.modelMeshes.get(1)[0].position.toArray(),expected(f.poses.get(1)).toArray());assert.equal(f.writes,2);
  } finally {f.world.dispose();}
});

// Original model-state contract, independent of rendering/residency. Probe
// live edits and replaced membership rather than caching an initial state.
function previousState(index) {
  const objects=(this.modelObjects.get(index)||[]).filter(o=>!['pickup','actor'].includes(o.kind));
  const onlyTriggers=objects.length>0&&objects.every(o=>o.kind==='trigger'),door=objects.find(o=>o.kind==='door');
  return {visible:(!onlyTriggers||this.liquidModels.has(index))&&objects.every(o=>o.visible&&!o.collected&&o.health>0)&&!(door?.open&&!door.hasMotion),
    solid:!onlyTriggers&&!(door?.open&&!door.hasMotion)&&objects.every(o=>o.visible&&!o.collected&&o.health>0&&o.entity.PlayerCollision!=='0'),
    open:door?.open||false,openFraction:door?.openFraction||0};
}
test('one-pass brush state preserves triggers, liquids, pickups, doors and live controller changes',()=>{
  const kinds=['actor','pickup','trigger','controller','door'];
  let seed=12345;const rand=()=>((seed=Math.imul(seed,1664525)+1013904223>>>0)/4294967296);
  const game={modelObjects:new Map(),liquidModels:new Set()};
  for(let i=0;i<10000;i++) {
    const objects=Array.from({length:i%8},()=>({kind:kinds[Math.floor(rand()*kinds.length)],visible:rand()>.2,collected:rand()<.2,
      health:rand()>.2?3:0,entity:{PlayerCollision:rand()>.2?'1':'0'},open:rand()>.5,hasMotion:rand()>.5,openFraction:rand()}));
    game.modelObjects.set(1,objects);if(i%3===0)game.liquidModels.add(1);else game.liquidModels.delete(1);
    assert.deepEqual(Gameplay.prototype.modelState.call(game,1),previousState.call(game,1));
    objects.reverse();if(objects[0])objects[0].health=0;
    assert.deepEqual(Gameplay.prototype.modelState.call(game,1),previousState.call(game,1));
  }
  assert.deepEqual(Gameplay.prototype.modelState.call(game,999),previousState.call(game,999));
});
