import assert from 'node:assert/strict';
import fs from 'node:fs';
import * as THREE from 'three';
import {BillboardBatch as OldBillboard,BeamBatch as OldBeam} from './before/src/world-effects.js';
import {BillboardBatch,BeamBatch} from '../../src/world-effects.js';

const owner=()=>({scene:new THREE.Scene(),resources:new Set(),track(resource){this.resources.add(resource);return resource;}});
const report={billboards:[],beams:[]};
for(const capacity of [1,17,65,128,512,8192]){
  const before=new OldBillboard(owner(),null,true,capacity,false),world=owner(),after=new BillboardBatch(world,null,true,capacity,false);
  const names=['positions','sizes','colors','rotations','diagonalScales','nativeSpouts'];
  let count=0;
  for(const particles of [1,Math.min(capacity,64),Math.min(capacity,65),capacity,0,1]){
    before.count=after.count=0;
    for(let i=0;i<particles+2;i++)for(const batch of [before,after])batch.add([i/7,-i,i*3],3+i/50,9,[.3,.5,1],.7,i/11,[.8,1.2],i%2);
    before.flush();after.flush(count);
    assert.equal(after.count,before.count);assert.equal(after.geometry.instanceCount,before.mesh.geometry.instanceCount);
    for(const name of names)assert.deepEqual(after[name].array.subarray(0,after.count*after[name].itemSize),before[name].array.subarray(0,before.count*before[name].itemSize));
    count+=after.count;
  }
  after.count=0;after.flush(count+11);assert.equal(after.bufferCapacity,after.initialBufferCapacity);
  report.billboards.push({capacity,identicalParticles:count,bufferCapacityAfterIdle:after.bufferCapacity,trackedResources:world.resources.size});
  for(const b of [before,after]){b.mesh.geometry.dispose();b.mesh.material.dispose();}
}

for(const capacity of [1,17,33,65,128,512,640]){
  const before=new OldBeam(owner(),null,capacity),world=owner(),after=new BeamBatch(world,null,capacity);
  const names=['positions','colors','uvs'];let count=0;
  for(const particles of [1,Math.min(capacity,32),Math.min(capacity,33),capacity,0,1]){
    before.count=after.count=0;
    for(let i=0;i<particles+2;i++){
      const points=Array.from({length:6},(_,j)=>new THREE.Vector3(i+j/7,-i,j));
      for(const batch of [before,after])batch.addPoints(points,[.3,.5,1],.7,-i,i+.1,Array.from({length:6},(_,j)=>[j/7,i/11]),Array.from({length:6},(_,j)=>[j/11,.2,.9]));
    }
    before.flush();after.flush(count);
    assert.equal(after.count,before.count);assert.deepEqual(after.geometry.drawRange,before.mesh.geometry.drawRange);
    for(const name of names)assert.deepEqual(after[name].array.subarray(0,after.count*6*after[name].itemSize),before[name].array.subarray(0,before.count*6*before[name].itemSize));
    count+=after.count;
  }
  after.count=0;after.flush(count+11);assert.equal(after.bufferCapacity,after.initialBufferCapacity);
  report.beams.push({capacity,identicalBeams:count,bufferCapacityAfterIdle:after.bufferCapacity,trackedResources:world.resources.size});
  for(const b of [before,after]){b.mesh.geometry.dispose();b.mesh.material.dispose();}
}
fs.writeFileSync(new URL('effect-buffers-differential.json',import.meta.url),JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report,null,2));
