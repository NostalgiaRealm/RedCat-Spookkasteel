import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {actorFloorLuxel,actorFloorShadowPoint,createActorFloorLighting,traceActorFloorBsp} from '../src/actor-floor-lighting.js';

const collision={models:[{root:0}],nodes:[[-1,-2,0]],planes:[[0,1,0,0]],leaves:[{contents:0},{contents:1}]};
// bounds, raw U/V, shifts, minUV, dimensions, light offset, flags, plane, side
const face=[0,0,0,64,0,64,1,0,0,0,0,1,0,0,0,0,5,5,0,0,0,0];
const fixture=(faces=[face],bytes)=>createActorFloorLighting(collision,{nodeFaces:[[0,faces.length]],faces},
  bytes||Uint8Array.from({length:1+25*3},(_,i)=>i===0?1:(Math.floor((i-1)/3)+1)*3+(i-1)%3));

test('exact downward point trace retains the native floor node and no hull epsilon',()=>{
  const hit=traceActorFloorBsp(collision,[3,12,7],[3,-30000,7]);
  assert.equal(hit.node,0);assert.deepEqual(hit.point,[3,0,7]);
  assert.equal(traceActorFloorBsp(collision,[3,-1,7],[3,-2,7]).node,undefined);
  assert.equal(traceActorFloorBsp(collision,[3,12,7],[3,1,7]),null);
});

test('floor uses one truncated native texel with authored shifts, not bilinear atlas samples',()=>{
  assert.deepEqual(actorFloorLuxel(face,[15.99,0,31.99]),[0,1]);
  assert.deepEqual(actorFloorLuxel(face,[16,0,32]),[1,2]);
  const shifted=[...face];shifted[12]=16;shifted[13]=-16;
  assert.deepEqual(actorFloorLuxel(shifted,[1,0,17]),[1,0]);
  assert.equal(actorFloorLuxel(shifted,[1,0,0]),null);
  const sampler=fixture();
  assert.deepEqual(sampler.sample([15.99,56,31.99]),[18/255,19/255,20/255]);
});

test('ordered native face bounding boxes allow twenty units around a face',()=>{
  const shifted=[...face];shifted[0]=20;
  assert.ok(fixture([shifted]).locate([0,10,10]));
  shifted[0]=20.01;assert.equal(fixture([shifted]).locate([0,10,10]),null);
  const invalid=[...face];invalid[19]=32768;
  assert.equal(fixture([invalid]).sample([1,10,1]),null);
  assert.equal(fixture().sample([1,-1,1]),null);
  assert.equal(fixture().sample([1,30001,1]),null);
});

test('ambient RGB caps each channel at native .3 after raw dynamic lightmap addition',()=>{
  const bytes=new Uint8Array(1+25*3).fill(0);bytes.set([1,5,40,200],0);
  const sampler=fixture([face],bytes),key={};
  assert.deepEqual(sampler.sample([0,10,0],[],key),[5/255,40/255,.3]);
  const light={position:[0,20,0],radius:30,color:[195/255,195/255,0]};
  assert.deepEqual(sampler.sample([0,10,0],[light],key),[15/255,50/255,.3]);
  assert.equal(sampler.stats.queries,1);assert.equal(sampler.stats.cacheHits,1);
  assert.equal(sampler.stats.nodeVisits,3);
  const fullbright=[...face];fullbright[19]=2;
  assert.deepEqual(fixture([fullbright],bytes).sample([0,10,0],[light]),[5/255,40/255,.3]);
});

test('stationary actor cache retains surfaces and invalid results without retaining light state',()=>{
  const sampler=fixture(),key={};
  sampler.sample([10,10,10],[],key);const visits=sampler.stats.nodeVisits;
  for(let i=0;i<100;i++)sampler.sample([10,10,10],[],key);
  assert.equal(sampler.stats.nodeVisits,visits);
  sampler.sample([12,10,10],[],key);assert.ok(sampler.stats.nodeVisits>visits);
  sampler.sample([12,-10,10],[],key);const invalidVisits=sampler.stats.nodeVisits;
  sampler.sample([12,-10,10],[],key);assert.equal(sampler.stats.nodeVisits,invalidVisits);
});

test('native model fallback samples transformed brush space and invalidates only on actual changes',()=>{
  const data={...collision,models:[{root:-1},{root:0}]};
  const collider={modelTransforms:new Map([[1,{translation:[32,20,0]}]]),disabledModels:new Set()};
  const bytes=new Uint8Array(1+25*3).fill(0);bytes.set([15,30,45],1+(1*5+1)*3);
  const sampler=createActorFloorLighting(data,{nodeFaces:[[0,1]],faces:[face]},bytes,collider),key={};
  assert.deepEqual(sampler.sample([48,40,16],[],key),[15/255,30/255,45/255]);
  assert.equal(sampler.locate([48,40,16],key).model,1);
  const queries=sampler.stats.queries;
  collider.modelTransforms.set(1,{translation:[32,20,0]});sampler.beginFrame();
  sampler.sample([48,40,16],[],key);assert.equal(sampler.stats.queries,queries);
  collider.modelTransforms.set(1,{translation:[32,60,0]});sampler.beginFrame();
  assert.equal(sampler.sample([48,40,16],[],key),null,'actor is now inside the raised model');
  collider.modelTransforms.set(1,{translation:[32,20,0]});sampler.beginFrame();
  assert.deepEqual(sampler.sample([48,40,16],[],key),[15/255,30/255,45/255]);
  collider.disabledModels.add(1);sampler.beginFrame();assert.equal(sampler.sample([48,40,16],[],key),null);
});

test('first authored world hit wins over a closer brush floor, matching Exact3 order',()=>{
  const data={...collision,models:[{root:0},{root:1}],nodes:[[-1,-2,0],[-1,-2,1]],planes:[[0,1,0,-100],[0,1,0,0]]};
  const lower=[...face];lower[1]=lower[4]=-100;
  const upper=[...face];upper[20]=1;
  const sampler=createActorFloorLighting(data,{nodeFaces:[[0,1],[1,1]],faces:[lower,upper]},new Uint8Array(1+25*3),
    {modelTransforms:new Map(),disabledModels:new Set()});
  assert.equal(sampler.locate([16,40,16]).model,0);
  assert.equal(sampler.locate([16,40,16]).point[1],-100);
});

test('rotated brush fallback samples the local BSP plane while the ray remains world vertical',()=>{
  const data={...collision,models:[{root:-1},{root:0}]};
  const collider={modelTransforms:new Map([[1,{rotation:[0,0,Math.sin(Math.PI/8),Math.cos(Math.PI/8)]}]]),disabledModels:new Set()};
  const sampler=createActorFloorLighting(data,{nodeFaces:[[0,1]],faces:[face]},new Uint8Array(1+25*3),collider);
  const surface=sampler.locate([4,20,16]);
  assert.equal(surface.model,1);assert.deepEqual(surface.luxel,[0,1]);
  assert.ok(Math.abs(surface.point[0]-4*Math.SQRT2)<1e-9);
  assert.ok(Math.abs(surface.point[1])<1e-9);
});

test('shadow endpoints use native texture-to-world vectors and oriented plane offset',()=>{
  assert.deepEqual(actorFloorShadowPoint(face,[0,1,0,0],[1,2]),[16,1,31]);
  const reverse=[...face];reverse[21]=1;
  assert.deepEqual(actorFloorShadowPoint(reverse,[0,1,0,0],[1,2]),[16,-1,31]);
  const oblique=[...face];oblique[7]=1;oblique[11]=2;
  assert.deepEqual(actorFloorShadowPoint(oblique,[0,1,0,0],[1,2]),[15,1,15]);
});

test('shadowed floor lights test the sampled luxel against world BSP and cache stable visibility',()=>{
  // World solid to the right of X=8. Floor sampling at X=0 remains valid;
  // a light across that wall contributes only when CastShadow is disabled.
  const data={...collision,nodes:[[1,-2,0],[-2,-1,1]],planes:[[0,1,0,0],[1,0,0,8]]};
  const sampler=createActorFloorLighting(data,{nodeFaces:[[0,1],[1,0]],faces:[face]},new Uint8Array(1+25*3));
  const light={position:[16,20,16],radius:60,color:[195/255,195/255,195/255]},key={};
  assert.deepEqual(sampler.sample([0,10,16],[light],key),[24/255,24/255,24/255]);
  assert.deepEqual(sampler.sample([0,10,16],[{...light,castShadow:true}],key),[0,0,0]);
  assert.equal(sampler.stats.shadowTraces,1);
  const clear={...light,position:[-16,20,16],castShadow:true};
  assert.deepEqual(sampler.sample([0,10,16],[clear],key),[24/255,24/255,24/255]);
  assert.equal(sampler.stats.shadowTraces,2);
  assert.deepEqual(sampler.sample([0,10,16],[{...clear,radius:70}],key),[34/255,34/255,34/255]);
  assert.equal(sampler.stats.shadowTraces,2);assert.equal(sampler.stats.shadowCacheHits,1);
  sampler.sample([0,10,16],[{...clear,radius:1}],key);
  assert.equal(sampler.stats.shadowTraces,2,'out-of-range lights do not spend a BSP shadow query');
});

for(let i=0;i<5;i++)test(`imported level ${i+1} has bounded native floor samples at authored actor positions`,()=>{
  const base=new URL(`../data/levels/lvl0${i}a/`,import.meta.url);
  const level=JSON.parse(fs.readFileSync(new URL('level.json',base)));
  const metadata=JSON.parse(fs.readFileSync(new URL(level.mesh.lightmap.actorFloorFile,base)));
  assert.equal(metadata.sourceSha256,level.source.sha256);
  const sampler=createActorFloorLighting(level.collision,metadata,fs.readFileSync(new URL('lightmaps.bin',base)));
  const positions=[level.spawn.position,...level.entities.filter(e=>e.Origin).map(e=>e.Origin.trim().split(/\s+/).map(Number)).slice(0,200)];
  let samples=0;
  for(const p of positions) {
    const sample=sampler.sample(p);
    if(sample){samples++;assert.equal(sample.length,3);assert.ok(sample.every(v=>Number.isFinite(v)&&v>=0&&v<=.3));}
  }
  assert.ok(samples>10,`expected grounded authored actors, got ${samples}`);
  assert.ok(sampler.stats.nodeVisits<positions.length*500,'point queries must follow BSP branches, never all faces');
  assert.ok(sampler.stats.faceChecks<positions.length*50,'face lookup remains local to hit BSP node');
});
