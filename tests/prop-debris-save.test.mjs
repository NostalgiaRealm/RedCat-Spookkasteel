import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {DestructibleEffects} from '../src/destructible-effects.js';
import {restoreNativeExplosions} from '../src/explosion-native.js';
import {restorePropDebrisState} from '../src/prop-debris-state.js';

const copy=value=>JSON.parse(JSON.stringify(value));
const physics={MinLifeTimeSeconds:3,MaxLifeTimeSeconds:3,Gravity:2,TestCollision:1,MustRotate:1,MustFade:1};
const spawn={id:'save-crate',sourceId:'crate',birth:0,position:[10,20,30],scale:[1,2,3],
  settings:{debris:{...physics,types:[{actor:'brok1.act',MinNr:3,MaxNr:3,MinVelocity:30,MaxVelocity:40}]}}};

function fixture(explosions=[copy(spawn)],time=0){
  let traces=0;
  const world={scene:new THREE.Scene(),collider:{trace:(_start,end)=>{traces++;return{fraction:1,end};}},physicalModels:[]};
  const geometry=new THREE.BoxGeometry(),material=new THREE.MeshLambertMaterial(),mesh=new THREE.Mesh(geometry,material),prototype=new THREE.Group();
  prototype.userData={mesh,template:{data:{settings:{debris:physics}}}};
  const game={time,explosions:copy(explosions)},effects=new DestructibleEffects(world,game);
  effects.prototypes.set('brok1',prototype);
  return {game,effects,world,traces:()=>traces,dispose(){effects.dispose();geometry.dispose();material.dispose();}};
}
const save=f=>copy(restoreNativeExplosions(f.game.explosions,f.game.time));

test('prop fragments retain live poses, collisions and fade across JSON save/load without historical traces',()=>{
  const before=fixture();before.effects.update(0,new Map());
  for(let i=0;i<20;i++){before.game.time+=.02;before.effects.update(.02,new Map());}
  const settled=before.effects.particles[1];
  settled.settled=true;settled.contacts=13;settled.fadeStartedAt=.2;settled.life=2.2;settled.opacity=.9;settled.velocity=[0,0,0];
  const saved=save(before),after=fixture(saved,before.game.time);
  // Changed geometry would change a replayed trajectory. Restoring the live
  // state must never query it before another positive-time update.
  after.world.collider.trace=()=>{throw new Error('historical collision replay');};
  after.effects.update(0,new Map());
  assert.deepEqual(save(after),saved);assert.equal(after.traces(),0);
  for(const p of after.effects.particles){
    assert.deepEqual(p.mesh.position.toArray(),p.position);
    assert.deepEqual(p.mesh.quaternion.toArray(),p.orientation);
    assert.deepEqual(p.mesh.children[0].scale.toArray(),[1,2,3]);
  }
  after.world.collider.trace=(_a,end)=>({fraction:1,end});
  for(let i=0;i<10;i++){
    for(const f of [before,after]){f.game.time+=.025;f.effects.update(.025,new Map());}
    assert.deepEqual(save(after),save(before));
  }
  const separate=save(after);separate[0].debrisState.particles[0].position[0]++;
  assert.notDeepEqual(separate,save(after));
  before.dispose();after.dispose();
});

test('empty saved cohorts stay empty, preserve smoke records and release renderer hooks',()=>{
  const original=fixture();original.effects.update(0,new Map());
  original.game.time=3.1;original.effects.update(3.1,new Map());
  const saved=save(original);assert.deepEqual(saved[0].debrisState.particles,[]);
  const restored=fixture(saved,original.game.time);restored.effects.update(0,new Map());
  assert.equal(restored.effects.particles.length,0);assert.equal(restored.traces(),0);
  assert.deepEqual(save(restored),saved);
  const record=restored.game.explosions[0];assert.equal(typeof record.debrisSnapshot,'function');
  restored.game.explosions=[];restored.effects.update(0,new Map());
  assert.equal(record.debrisSnapshot,undefined);assert.equal(restored.effects.debrisCohorts.size,0);
  original.dispose();assert.equal(original.game.explosions[0].debrisSnapshot,undefined);restored.dispose();
});

test('legacy and invalid prop records use bounded replay while unknown or oversized saved cohorts are rejected',()=>{
  const original=fixture();original.effects.update(0,new Map());
  original.game.time=.2;original.effects.update(.2,new Map());
  const snapshot=save(original)[0];
  for(const mutate of [s=>s.particles[0].actor='unknown',s=>s.particles[0].velocity[1]=Infinity,
    s=>s.particles=Array(257).fill(s.particles[0]),s=>s.at=1e20,s=>s.particles[0].orientation[0]=5]){
    const state=structuredClone(snapshot.debrisState);mutate(state);
    assert.equal(restorePropDebrisState(state,snapshot,.2),undefined);
  }
  delete snapshot.debrisState;
  const legacy=fixture([snapshot],.2);legacy.effects.update(0,new Map());
  assert.ok(legacy.traces()>0&&legacy.traces()<=3*5);assert.equal(legacy.effects.particles.length,3);
  assert.ok(legacy.effects.particles.every(p=>Math.abs(p.age-.2)<1e-8));
  assert.ok(save(legacy)[0].debrisState,'the next save upgrades a legacy cohort');
  original.dispose();legacy.dispose();
});

test('synchronous gameplay saves retain the last integrated time and imported callback fields cannot execute',()=>{
  const before=fixture();before.effects.update(0,new Map());
  before.game.time=.1;before.effects.update(.1,new Map());
  before.game.time=.125;const saved=save(before);
  assert.equal(saved[0].debrisState.at,.1,'saving before the render update must not silently drop a physics step');
  saved[0].debrisSnapshot='not a callback';
  const safe=restoreNativeExplosions(saved,.125);assert.equal(safe[0].debrisState.at,.1);
  const after=fixture(safe,.125);after.effects.update(0,new Map());
  before.effects.update(.025,new Map());
  const actual=save(after)[0].debrisState.particles,expected=save(before)[0].debrisState.particles;
  assert.equal(actual.length,expected.length);
  for(let i=0;i<actual.length;i++)for(const key of ['position','velocity','orientation'])for(let axis=0;axis<actual[i][key].length;axis++)
    assert.ok(Math.abs(actual[i][key][axis]-expected[i][key][axis])<1e-12);
  before.dispose();after.dispose();
});
