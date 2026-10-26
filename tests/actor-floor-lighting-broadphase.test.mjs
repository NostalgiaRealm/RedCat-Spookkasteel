import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {BspCollider} from '../source/collision.js';
import {ModelTransformMap} from '../source/model-transforms.js';
import {createActorFloorLighting,inverseModelTransform} from '../source/actor-floor-lighting.js';

function pair(collision,metadata,bytes,tracked=true) {
  const optimized=new BspCollider(collision),reference=new BspCollider(collision);
  optimized.modelTransforms=tracked?new ModelTransformMap():new Map();
  reference.modelTransforms=tracked?new ModelTransformMap():new Map();
  // Keep the original ordered full-brush fallback as the comparison oracle.
  reference.traceModelIndices=undefined;
  const counts={queries:0,candidates:0,fullCandidates:0};
  const query=optimized.traceModelIndices.bind(optimized);
  optimized.traceModelIndices=(indices,min,max)=>{
    assert.ok(Object.isFrozen(indices));
    assert.deepEqual(indices,Array.from({length:collision.models.length-1},(_,i)=>i+1));
    const result=query(indices,min,max);
    counts.queries++;counts.candidates+=result.length;counts.fullCandidates+=indices.length;
    return result;
  };
  const samplers=[optimized,reference].map(collider=>createActorFloorLighting(collision,metadata,bytes,collider));
  return {optimized,reference,samplers,counts};
}

const synthetic=()=>{
  const models=[{root:-1}],nodes=[],planes=[],faces=[],nodeFaces=[];
  for(let index=1;index<=24;index++) {
    const x=index<=2?0:index*256,y=index===2?100:0;
    models.push({root:index-1,min:[x-32,y-8,-32],max:[x+32,y,32]});
    nodes.push([-1,-2,index-1]);planes.push([0,1,0,y]);
    faces.push([x-32,y,-32,x+32,y,32,1,0,0,0,0,1,32-x,32,0,0,5,5,(index-1)*76,0,index-1,0]);
    nodeFaces.push([index-1,1]);
  }
  return {collision:{models,nodes,planes,leaves:[{contents:0},{contents:1}]},metadata:{faces,nodeFaces},bytes:new Uint8Array(24*76).fill(50)};
};

test('floor broad phase keeps authored order and every nonphysical brush, rather than nearest floor',()=>{
  const {collision,metadata,bytes}=synthetic(),{samplers,counts}=pair(collision,metadata,bytes);
  const results=samplers.map(s=>s.locate([0,150,0]));
  assert.deepEqual(results[0],results[1]);assert.equal(results[0].model,1);assert.equal(results[0].point[1],0);
  assert.equal(counts.candidates,2);assert.equal(counts.fullCandidates,24);
});

test('floor query plans can be prepared during loading without adding lighting samples',()=>{
  const {collision,metadata,bytes}=synthetic(),{samplers,counts}=pair(collision,metadata,bytes);
  const stats={...samplers[0].stats};
  samplers[0].prepare();
  assert.equal(counts.queries,1);assert.deepEqual(samplers[0].stats,stats);
  assert.deepEqual(samplers[0].locate([0,150,0]),samplers[1].locate([0,150,0]));
});

for(const tracked of [true,false])test(`floor broad phase follows translated/rotated, disabled and restored brushes with ${tracked?'tracked':'ordinary'} poses`,()=>{
  const {collision,metadata,bytes}=synthetic(),{optimized,reference,samplers}=pair(collision,metadata,bytes,tracked),key={};
  const check=position=>assert.deepEqual(...samplers.map(s=>s.locate(position,key)));
  check([0,150,0]);
  for(const collider of [optimized,reference])collider.modelTransforms.set(1,{origin:[0,0,0],translation:[120,20,0],rotation:[0,0,Math.sin(.2),Math.cos(.2)]});
  for(const s of samplers)s.beginFrame();
  check([120,150,0]);check([0,150,0]);
  for(const collider of [optimized,reference])collider.disabledModels.add(1);
  for(const s of samplers)s.beginFrame();
  check([120,150,0]);check([0,150,0]);
  for(const collider of [optimized,reference]){collider.disabledModels.clear();collider.modelTransforms.clear();}
  for(const s of samplers)s.beginFrame();
  check([0,150,0]);
  // A second brush enters the old query range; the broad phase must refit.
  for(const collider of [optimized,reference])collider.modelTransforms.set(3,{translation:[-768,0,0]});
  for(const s of samplers)s.beginFrame();
  check([0,50,0]);
});

let seed=0x9287f13;
const random=()=>((seed=(Math.imul(seed,1664525)+1013904223)>>>0)/4294967296);
test('allocation-free inverse segment bounds exactly match the original converted endpoints',()=>{
  for(let i=0;i<10000;i++) {
    const vector=scale=>Array.from({length:3},()=>scale*(random()-.5));
    const inverse=inverseModelTransform({origin:vector(200),translation:vector(400),rotation:[...vector(2),random()]});
    const a=vector(600),b=vector(600),min=vector(200),max=min.map(v=>v+random()*100);
    const x=inverse(a),y=inverse(b);
    for(const padding of [0,1]) {
      const expected=!min.some((v,axis)=>v>Math.max(x[axis],y[axis])+padding||max[axis]<Math.min(x[axis],y[axis])-padding);
      assert.equal(inverse.intersectsBounds(a,b,min,max,padding),expected);
      const endpoint=x.map(v=>v-padding);
      assert.equal(inverse.intersectsBounds(a,a,endpoint,x,padding),true,'inclusive endpoint bounds');
    }
  }
});
for(let index=0;index<5;index++)test(`level ${index+1} moving-fragment floor samples match the full brush scan through pose changes`,()=>{
  const base=new URL(`../data/levels/lvl0${index}a/`,import.meta.url);
  const level=JSON.parse(fs.readFileSync(new URL('level.json',base)));
  const metadata=JSON.parse(fs.readFileSync(new URL(level.mesh.lightmap.actorFloorFile,base)));
  const bytes=fs.readFileSync(new URL('lightmaps.bin',base));
  const models=level.collision.models;
  const points=[level.spawn.position,...level.entities.filter(e=>e.Origin).slice(0,150).map(e=>e.Origin.trim().split(/\s+/).map(Number))];
  for(const model of models.slice(1))if(model.min&&model.max) {
    const center=model.min.map((v,i)=>(v+model.max[i])/2);
    for(let i=0;i<4;i++)points.push(center.map((v,axis)=>v+(axis===1?50+random()*250:(random()-.5)*180)));
  }
  // First compare the real world BSP. Then hold only its empty world leaf in
  // the fixture: authored floors normally win immediately, so this second
  // pass exercises each level's actual fallback-brush geometry and transforms.
  const complete=pair(level.collision,metadata,bytes);
  for(const position of points)assert.deepEqual(...complete.samplers.map(s=>s.locate(position)));
  const emptyLeaf=level.collision.leaves.findIndex(leaf=>!(leaf.contents&67));
  assert.ok(emptyLeaf>=0);
  const brushCollision={...level.collision,models:[{...models[0],root:-emptyLeaf-1},...models.slice(1)]};
  const {optimized,reference,samplers,counts}=pair(brushCollision,metadata,bytes);
  const keys=points.map(()=>({}));
  for(let phase=0;phase<3;phase++) {
    for(const collider of [optimized,reference]) {
      collider.disabledModels.clear();
      for(let model=1;model<models.length;model+=11) {
        const data=models[model],origin=(data.min||[0,0,0]).map((v,i)=>(v+(data.max?.[i]||0))/2);
        if(phase===0)collider.modelTransforms.delete(model);
        else collider.modelTransforms.set(model,{origin,translation:[phase*40,-phase*10,phase*15],rotation:[0,Math.sin(phase*.13),0,Math.cos(phase*.13)]});
        if(phase===2&&model%2)collider.disabledModels.add(model);
      }
    }
    for(const sampler of samplers)sampler.beginFrame();
    for(let i=0;i<points.length;i++) {
      const position=points[i].map((v,axis)=>v+(axis===1?phase*2:phase*.125));
      assert.deepEqual(samplers[0].locate(position,keys[i]),samplers[1].locate(position,keys[i]),`phase ${phase}, point ${i}: ${position}`);
      assert.deepEqual(samplers[0].sample(position,[],keys[i]),samplers[1].sample(position,[],keys[i]));
    }
  }
  assert.ok(counts.queries>0,'exercise brush fallback queries');
  assert.ok(counts.candidates<counts.fullCandidates*.25,`local candidates ${counts.candidates}/${counts.fullCandidates}`);
});
