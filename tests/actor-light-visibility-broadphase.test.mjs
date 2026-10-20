import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {BspCollider} from '../src/collision.js';
import {ModelTransformMap} from '../src/model-transforms.js';
import {ActorLightVisibility} from '../src/actor-light-visibility.js';

function pair(collision,tracked=true) {
  const physicalModels=Object.freeze(collision.models.map((_,i)=>i));
  const colliders=[new BspCollider(collision),new BspCollider(collision)];
  const counts={queries:0,candidates:0,fullCandidates:0};
  for(const collider of colliders)collider.modelTransforms=tracked?new ModelTransformMap():new Map();
  const query=colliders[0].traceModelIndices.bind(colliders[0]);
  colliders[0].traceModelIndices=(indices,min,max)=>{
    assert.ok(Object.isFrozen(indices));assert.deepEqual(indices,physicalModels);
    const result=query(indices,min,max);
    counts.queries++;counts.candidates+=result.length;counts.fullCandidates+=indices.length;
    return result;
  };
  // The reference retains the original ordered inverse/local-bounds/BSP loop.
  colliders[1].traceModelIndices=undefined;
  const lights=colliders.map(collider=>new ActorLightVisibility({level:{collision},collider,physicalModels},{areaPortals:[]},new Uint8Array()));
  return {colliders,lights,counts};
}

test('Sun spatial plans can be prepared during loading without adding visibility rays',()=>{
  const collision={models:Array.from({length:20},()=>({root:-1,min:[-1,-1,-1],max:[1,1,1]})),nodes:[],planes:[],leaves:[{contents:0}]};
  const {colliders,lights,counts}=pair(collision);
  const stats={...lights[0].stats};
  lights[0].prepare();
  assert.equal(counts.queries,1);assert.deepEqual(lights[0].stats,stats);
  assert.equal(colliders[0].modelQueryPlans.has(lights[0].physical),true);
});

for(const tracked of [true,false])test(`Sun ray candidates preserve rotated local bounds tolerance with ${tracked?'tracked':'ordinary'} brush poses`,()=>{
  const models=[{root:-1}],nodes=[],planes=[];
  for(let i=1;i<25;i++) {
    models.push({root:i-1,min:[i===1?-1:i*100,-1,-1],max:[i===1?1:i*100+2,0,1]});
    nodes.push([-1,-2,i-1]);planes.push([0,1,0,0]);
  }
  const {colliders,lights,counts}=pair({models,nodes,planes,leaves:[{contents:0},{contents:1}]},tracked);
  for(const collider of colliders)collider.modelTransforms.set(1,{rotation:[0,0,Math.sin(Math.PI/8),Math.cos(Math.PI/8)]});
  for(const light of lights)light.beginFrame();
  for(let x=-3;x<=3;x+=.125)for(let z=-3;z<=3;z+=.5) {
    const from=[x,3,z],to=[x,-3,z];
    assert.equal(lights[0].blocked(from,to),lights[1].blocked(from,to),`${from} → ${to}`);
  }
  assert.equal(lights[0].blocked([-1.3,3,0],[-1.3,-3,0]),true,'local tolerance extends beyond the rotated authored box');
  for(const collider of colliders)collider.disabledModels.add(1);
  for(const light of lights)light.beginFrame();
  assert.equal(lights[0].blocked([-1.3,3,0],[-1.3,-3,0]),false);
  assert.ok(counts.candidates<counts.fullCandidates*.1);
});

let seed=0xfad1b93;
const random=()=>((seed=(Math.imul(seed,1664525)+1013904223)>>>0)/4294967296);
for(let index=0;index<5;index++)test(`level ${index+1} Sun/debris obstruction matches all-brush rays through moving and disabled poses`,()=>{
  const level=JSON.parse(fs.readFileSync(new URL(`../data/levels/lvl0${index}a/level.json`,import.meta.url)));
  const {colliders,lights,counts}=pair(level.collision),models=level.collision.models;
  const positions=level.entities.filter(e=>e.Origin).map(e=>e.Origin.trim().split(/\s+/).map(Number));
  const suns=level.entities.filter(e=>e.classname==='Sun'&&e.Origin).map(e=>e.Origin.trim().split(/\s+/).map(Number));
  assert.ok(suns.length>0);
  const segments=[];
  for(let i=0;i<1000;i++) {
    const source=positions[Math.floor(random()*positions.length)],from=source.map(v=>v+(random()-.5)*100);
    segments.push([from,i%2?suns[Math.floor(random()*suns.length)]:from.map(v=>v+(random()-.5)*800)]);
  }
  for(const model of models.slice(1))if(model.min&&model.max) {
    const center=model.min.map((v,i)=>(v+model.max[i])/2);
    segments.push([center.map((v,i)=>v+(i===1?200:0)),center.map((v,i)=>v-(i===1?200:0))]);
  }
  for(let phase=0;phase<3;phase++) {
    for(const collider of colliders) {
      collider.disabledModels.clear();
      for(let i=1;i<models.length;i+=7) {
        const model=models[i],origin=(model.min||[0,0,0]).map((v,axis)=>(v+(model.max?.[axis]||0))/2);
        if(phase===0)collider.modelTransforms.delete(i);
        else collider.modelTransforms.set(i,{origin,translation:[phase*13,phase*7,-phase*20],rotation:[Math.sin(phase*.1),0,0,Math.cos(phase*.1)]});
        if(phase===2&&i%3)collider.disabledModels.add(i);
      }
    }
    for(const light of lights)light.beginFrame();
    for(const [from,to] of segments)assert.equal(lights[0].blocked(from,to),lights[1].blocked(from,to),`phase ${phase}: ${from} → ${to}`);
  }
  assert.ok(counts.candidates<counts.fullCandidates*.35,`nearby models ${counts.candidates}/${counts.fullCandidates}`);
});
