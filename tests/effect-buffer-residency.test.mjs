import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {BillboardBatch,BeamBatch} from '../source/world-effects.js';

const billboardNames=['positions','sizes','colors','rotations','diagonalScales','nativeSpouts'];
const beamNames=['positions','colors','uvs'];
function world(){return {scene:new THREE.Scene(),resources:new Set(),track(resource){this.resources.add(resource);return resource;}};}
function discard(batch){batch.mesh.geometry.dispose();batch.mesh.material.dispose();}
const billboard=(batch,i)=>batch.add([i/7,-i,i*3],3+i/50,9,[.3,.5,1],.7,i/11,[.8,1.2],i%2);
const beam=(batch,i)=>batch.addPoints(Array.from({length:6},(_,j)=>new THREE.Vector3(i+j/7,-i,j)),[.3,.5,1],.7,-i,i+.1,
  Array.from({length:6},(_,j)=>[j/7,i/11]),Array.from({length:6},(_,j)=>[j/11,.2,.9]));
const prefix=(batch,names)=>names.map(name=>batch[name].array.slice());

test('small initial effect storage grows without changing live Float32 data or geometry ownership',()=>{
  for(const [Type,names,initial,add] of [[BillboardBatch,billboardNames,64,billboard],[BeamBatch,beamNames,32,beam]]){
    const owner=world(),batch=new Type(owner,null),geometry=batch.mesh.geometry;
    try{
      assert.equal(batch.bufferCapacity,initial);assert.equal(batch.capacity,Type===BillboardBatch?8192:512);
      for(let i=0;i<initial;i++)add(batch,i);
      const written=prefix(batch,names),oldAttributes=names.map(name=>batch[name]);let disposed=0;
      const onDispose=()=>{disposed++;assert.ok(names.every((name,i)=>batch[name]===oldAttributes[i]),'old attributes must still be attached during GPU disposal');};
      geometry.addEventListener('dispose',onDispose);
      add(batch,initial);assert.equal(disposed,1);assert.equal(batch.bufferCapacity,initial*2);
      for(let i=0;i<names.length;i++)assert.deepEqual(batch[names[i]].array.subarray(0,written[i].length),written[i]);
      assert.equal(batch.mesh.geometry,geometry);assert.equal(owner.resources.size,2);
      // Detach the ordering assertion before ordinary cleanup/next changes.
      geometry.removeEventListener('dispose',onDispose);
      batch.flush(0);assert.equal(batch.mesh.visible,true);
      for(const name of names)assert.equal(batch[name].updateRanges[0].count,batch.count*(Type===BillboardBatch?1:6)*batch[name].itemSize);
    }finally{discard(batch);}
  }
});

test('effect batches keep their original maximums, custom limits, material states and culling',()=>{
  for(const capacity of [0,1,17,65,129])for(const Type of [BillboardBatch,BeamBatch]){
    const batch=Type===BillboardBatch?new Type(world(),null,true,capacity,false):new Type(world(),null,capacity),add=Type===BillboardBatch?billboard:beam;
    try{
      for(let i=0;i<capacity+3;i++)add(batch,i);
      assert.equal(batch.capacity,capacity);assert.equal(batch.count,capacity);assert.ok(batch.bufferCapacity<=capacity);
      batch.flush(1);assert.equal(batch.mesh.visible,capacity>0);assert.equal(batch.mesh.frustumCulled,false);
      assert.equal(batch.mesh.material.depthWrite,false);
      if(Type===BillboardBatch){assert.equal(batch.mesh.material.blending,THREE.AdditiveBlending);assert.equal(batch.mesh.material.depthTest,false);assert.equal(batch.geometry.instanceCount,capacity);}
      else{assert.equal(batch.mesh.material.side,THREE.DoubleSide);assert.equal(batch.geometry.drawRange.count,capacity*6);}
    }finally{discard(batch);}
  }
});

test('idle effect buffers release once after ten seconds, shrink, then resume in the same flush',()=>{
  for(const [Type,names,initial,add] of [[BillboardBatch,billboardNames,64,billboard],[BeamBatch,beamNames,32,beam]]){
    const owner=world(),batch=new Type(owner,null),geometry=batch.geometry;
    try{
      let disposals=0;geometry.addEventListener('dispose',()=>disposals++);
      for(let i=0;i<initial+1;i++)add(batch,i);
      batch.flush(5);const grownDisposals=disposals;
      batch.count=0;batch.flush(14.999);assert.equal(disposals,grownDisposals);assert.equal(batch.bufferCapacity,initial*2);
      geometry._maxInstanceCount=initial*2;
      batch.flush(15);assert.equal(disposals,grownDisposals+1);assert.equal(batch.bufferCapacity,initial);assert.equal(geometry._maxInstanceCount,undefined);
      assert.equal(batch.mesh.visible,false);assert.equal(batch.gpuReleased,true);assert.equal(owner.resources.size,2);
      batch.flush(25);batch.flush(50);assert.equal(disposals,grownDisposals+1,'empty frames must not repeatedly allocate/dispose');
      add(batch,11);batch.flush(51);assert.equal(batch.mesh.visible,true);assert.equal(batch.count,1);assert.equal(batch.gpuReleased,false);
      assert.ok(names.every(name=>batch[name].version>0));
      const resumed=prefix(batch,names);
      // Context restoration is an external GPU disposal; retained attributes
      // remain usable and a subsequent update still submits their live range.
      geometry.dispose();batch.count=0;add(batch,11);batch.flush(52);assert.deepEqual(prefix(batch,names),resumed);
      batch.count=0;const before=disposals;batch.flush(61.999);assert.equal(disposals,before);batch.flush(62);assert.equal(disposals,before+1);
    }finally{discard(batch);}
  }
});

test('empty or frustum-rejected billboard submissions never grow storage',()=>{
  const batch=new BillboardBatch(world(),null),camera=new THREE.OrthographicCamera(-1,1,1,-1,1,10);
  camera.updateMatrixWorld();batch.frustum=new THREE.Frustum().setFromProjectionMatrix(new THREE.Matrix4().multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
  try{
    for(let i=0;i<1000;i++){batch.add([100,0,-5],1,1,[1,1,1],1);batch.add([0,0,-5],1,1,[1,1,1],0);}
    batch.flush(1);batch.flush(100);assert.equal(batch.count,0);assert.equal(batch.bufferCapacity,64);assert.equal(batch.gpuReleased,true);
  }finally{discard(batch);}
});

test('beam bounds reject only complete quads outside each frustum plane and retain crossing vertices',()=>{
  const batch=new BeamBatch(world(),null),camera=new THREE.OrthographicCamera(-1,1,1,-1,1,10);
  camera.updateMatrixWorld();batch.frustum=new THREE.Frustum().setFromProjectionMatrix(new THREE.Matrix4().multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
  const planes=[[0,-1,-1],[0,1,1],[1,-1,-1],[1,1,1],[2,-1,1],[2,-10,-1]];
  try{
    for(const [axis,boundary,sign] of planes){
      const point=new THREE.Vector3(0,0,-5);point.setComponent(axis,boundary+sign*.01);
      let points=Array.from({length:6},()=>point.clone());
      const before=batch.count;batch.addPoints(points,[1,1,1],1);assert.equal(batch.count,before);
      point.setComponent(axis,boundary);points=Array.from({length:6},()=>point.clone());
      batch.addPoints(points,[1,1,1],1);assert.equal(batch.count,before+1,'exact plane contact remains visible');
      point.setComponent(axis,boundary+sign*.2);points=Array.from({length:6},()=>point.clone());
      // The last vertex can be the sole visible part of a stretched/ribbon quad.
      points[5].setComponent(axis,boundary-sign*.2);
      batch.addPoints(points,[1,1,1],1);assert.equal(batch.count,before+2);
      point.setComponent(axis,boundary+sign*5e-6);points=Array.from({length:6},()=>point.clone());
      batch.addPoints(points,[1,1,1],1);assert.equal(batch.count,before+3,'rounding margin is conservative');
    }
    assert.equal(batch.bufferCapacity,32);
  }finally{discard(batch);}
});

test('accepted broad beam, ribbon and Gargoyle quads retain every coordinate, UV and vertex color',()=>{
  const visible=new BeamBatch(world(),null),reference=new BeamBatch(world(),null),camera=new THREE.OrthographicCamera(-1,1,1,-1,1,10);
  camera.updateMatrixWorld();visible.frustum=new THREE.Frustum().setFromProjectionMatrix(new THREE.Matrix4().multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
  try{
    const points=[[-100,-100,-5],[100,-100,-5],[-100,100,-5],[100,-100,-5],[100,100,-5],[-100,100,-5]].map(values=>new THREE.Vector3(...values));
    const colors=Array.from({length:6},(_,i)=>[i/7,.3,1-i/7]),uvs=[[0,1],[0,0],[1,1],[0,0],[1,0],[1,1]];
    for(const batch of [visible,reference]){
      batch.addPoints(points,[1,1,1],.8,-1,4,uvs,colors);
      // Both endpoints lie outside the screen, but its wide middle is visible.
      batch.add({start:[-10,0,-5],end:[10,0,-5],width:3,color:[1,.2,.1],opacity:.6},camera.position,new THREE.Vector3(0,0,-1),uvs);
      batch.flush(0);
    }
    assert.equal(visible.count,2);assert.equal(visible.count,reference.count);
    assert.deepEqual(prefix(visible,beamNames),prefix(reference,beamNames));
    visible.count=0;
    for(let i=0;i<100;i++)visible.addDisc([100,0,-5],1,[1,1,1],1);
    visible.flush(10);assert.equal(visible.count,0);assert.equal(visible.gpuReleased,true,'off-screen active beams can become GPU idle');
  }finally{discard(visible);discard(reference);}
});
