import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {actorBspRayBlocked,traceActorFloorBsp,inverseModelTransform} from '../src/actor-floor-lighting.js';

function compare(collision,start,end,root=collision.models[0].root) {
  const before={nodeVisits:0},after={nodeVisits:0};
  assert.equal(actorBspRayBlocked(collision,start,end,root,after),Boolean(traceActorFloorBsp(collision,start,end,root,before)));
  assert.deepEqual(after,before,'near/far traversal order and early exits stay exact');
}

test('boolean light rays retain exact plane endpoints, contents masks and typed midpoint rounding',()=>{
  const collision={models:[{root:0}],nodes:[[-1,-2,0]],planes:[[1,0,0,0]],leaves:[{contents:0},{contents:1}]};
  const points=[[0,0,0],[-0,0,0],[1e-12,0,0],[-1e-12,0,0],[3,4,5],[-3,4,5]];
  for(const contents of [0,1,2,4,8,32,64,67]) {
    collision.leaves[1].contents=contents;
    for(const from of points)for(const to of points)for(const type of [Array,Float32Array,Float64Array]) {
      compare(collision,type.from(from),type.from(to));
    }
  }
});

test('boolean light rays retain the exact invalid-depth guard',()=>{
  const collision={models:[{root:0}],nodes:Array.from({length:515},(_,i)=>[i+1,-1,0]),planes:[[1,0,0,0]],leaves:[{contents:0}]};
  for(const trace of [actorBspRayBlocked,traceActorFloorBsp])assert.throws(()=>trace(collision,[1,0,0],[2,0,0]),/Invalid actor lighting BSP depth/);
});

let seed=0xe1f4a89;
const random=()=>((seed=(Math.imul(seed,1664525)+1013904223)>>>0)/4294967296);
for(let index=0;index<5;index++)test(`level ${index+1}: 18,000 world and rotated-brush boolean rays exactly match detailed floor traversal`,()=>{
  const level=JSON.parse(fs.readFileSync(new URL(`../data/levels/lvl0${index}a/level.json`,import.meta.url))),collision=level.collision;
  const origins=level.entities.filter(e=>e.Origin).map(e=>e.Origin.trim().split(/\s+/).map(Number));
  for(let i=0;i<18000;i++) {
    const origin=origins[Math.floor(random()*origins.length)];
    const start=origin.map(value=>value+(random()-.5)*300),end=start.map(value=>value+(random()-.5)*2000);
    if(i%3===0)compare(collision,start,end);
    else {
      const model=1+Math.floor(random()*(collision.models.length-1)),data=collision.models[model];
      const pivot=(data.min||[0,0,0]).map((v,axis)=>(v+(data.max?.[axis]||0))/2);
      const inverse=inverseModelTransform({origin:pivot,translation:[i%71,i%13,-i%91],rotation:[random()-.5,random()-.5,random()-.5,random()]});
      compare(collision,inverse(start),inverse(end),data.root);
    }
  }
});
