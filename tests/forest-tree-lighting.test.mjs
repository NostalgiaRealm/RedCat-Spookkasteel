import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import * as THREE from 'three';
import {createActorFloorLighting} from '../src/actor-floor-lighting.js';

// A decorative prop overlaps the wall at X >= 0; the exposed side has a
// lightmapped floor. Recovery must stay inside the supplied prop bounds.
const collision={models:[{root:0}],nodes:[[1,-2,0],[-2,-1,1]],planes:[[0,1,0,0],[1,0,0,0]],leaves:[{contents:0},{contents:1}]};
const face=[-32,0,-32,0,0,32,1,0,0,0,0,1,0,0,-32,-32,3,5,0,0,0,0];
const fixture=(value=60)=>createActorFloorLighting(collision,
  {nodeFaces:[[0,1],[1,0]],faces:[face]},new Uint8Array(1+3*5*3).fill(value));
const root=[4,8,0],bounds=[-8,0,-8,8,16,8];

test('buried tree lighting recovers inside its bounds only when explicitly enabled',()=>{
  const sampler=fixture();
  assert.equal(sampler.sample(root),null,'ordinary solid-origin actors retain native behavior');
  assert.deepEqual(sampler.sample(root,[],null,bounds),[60/255,60/255,60/255]);
  const surface=sampler.locate(root,null,bounds);
  assert.deepEqual(surface.probePosition,[-8,4,0]);
  assert.deepEqual(surface.point,[-8,0,0]);
  assert.equal(sampler.sample(root,[],null,[1,0,-8,8,16,8]),null,'no probing outside the tree to find a brighter floor');
});

test('tree recovery preserves native samples, black floors, and the ambient cap',()=>{
  const sampler=fixture();
  const native=sampler.locate([-4,8,0]),unchanged=sampler.locate([-4,8,0],null,bounds);
  assert.deepEqual(unchanged,native);assert.equal(unchanged.probePosition,undefined);
  assert.deepEqual(fixture(0).sample(root,[],null,bounds),[0,0,0]);
  assert.deepEqual(fixture(255).sample(root,[],null,bounds),[.3,.3,.3]);
  assert.equal(sampler.sample([-4,30001,0],[],null,bounds),null,'missing floor is not a buried-root case');
});

test('embedded tree samples stay cached and update when bounds or position change',()=>{
  const sampler=fixture(),actor={},box=[...bounds];
  sampler.sample(root,[],actor,box);const queries=sampler.stats.queries,visits=sampler.stats.nodeVisits;
  for(let frame=0;frame<60;frame++)sampler.sample(root,[],actor,[...box]);
  assert.equal(sampler.stats.queries,queries);assert.equal(sampler.stats.nodeVisits,visits);
  box[0]=-16;
  assert.deepEqual(sampler.locate(root,actor,box).probePosition,[-4,4,0]);
  assert.ok(sampler.stats.queries>queries);
  assert.equal(sampler.locate([-4,8,0],actor,box).probePosition,undefined);
  assert.equal(sampler.sample(root,[],actor),null,'disabling recovery invalidates its cache');
});

test('all 60 embedded forest trees recover while the three standalone trees keep native lighting',()=>{
  const base=new URL('../data/levels/lvl00a/',import.meta.url);
  const level=JSON.parse(fs.readFileSync(new URL('level.json',base)));
  const metadata=JSON.parse(fs.readFileSync(new URL(level.mesh.lightmap.actorFloorFile,base)));
  const sampler=createActorFloorLighting(level.collision,metadata,fs.readFileSync(new URL('lightmaps.bin',base)));
  const tree=JSON.parse(fs.readFileSync(new URL('../assets/actors/tree.json',import.meta.url)));
  const trees=level.entities.filter(e=>e.ActorFileName==='tree.act'),records=[];
  assert.equal(trees.length,60);
  for(const entity of trees){
    const position=entity.Origin.split(/\s+/).map(Number);
    assert.equal(sampler.sample(position),null,'fixture reproduces the buried origin');
    const rotation=new THREE.Quaternion().setFromEuler(new THREE.Euler(...['RotateX','RotateY','RotateZ'].map(k=>Number(entity[k]||0)*Math.PI/180),'ZYX'));
    const transform=new THREE.Matrix4().compose(new THREE.Vector3(...position),rotation,new THREE.Vector3(1,1,1));
    transform.multiply(new THREE.Matrix4().makeRotationX(-Math.PI/2));
    const box=new THREE.Box3(new THREE.Vector3(...tree.bounds.min),new THREE.Vector3(...tree.bounds.max)).applyMatrix4(transform);
    const bounds=[...box.min.toArray(),...box.max.toArray()],ambient=sampler.sample(position,[],entity,bounds);
    assert.ok(ambient?.some(v=>v>0),entity['%name%']);assert.ok(ambient.every(v=>v>=0&&v<=.3));
    const surface=sampler.locate(position,entity,bounds);
    assert.ok(box.containsPoint(new THREE.Vector3(...surface.probePosition)));
    records.push({position,entity,bounds});
  }
  const queries=sampler.stats.queries;
  for(let frame=0;frame<20;frame++)for(const r of records)sampler.sample(r.position,[],r.entity,r.bounds);
  assert.equal(sampler.stats.queries,queries);
  const standalone=level.entities.filter(e=>e.ActorFileName==='tree2.act');assert.equal(standalone.length,3);
  for(const entity of standalone){
    const position=entity.Origin.split(/\s+/).map(Number);
    assert.ok(sampler.sample(position)?.some(v=>v>0));
    assert.equal(sampler.locate(position).probePosition,undefined);
  }
});
