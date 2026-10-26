import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldGeometryStream,WORLD_STREAMING} from '../source/world-streaming.js';

function fixture({model=0,sky=false,unreferenced=false}={}) {
  const camera=new THREE.PerspectiveCamera(65,1,1,10000);
  camera.lookAt(24,0,-100);
  const positions=[[30,-4,-100],[38,-4,-100],[34,4,-100],[10,-4,-100],[18,-4,-100],[14,4,-100]];
  const vertices=new Float32Array(positions.length*11);positions.forEach((p,i)=>vertices.set(p,i*11));
  const bounds={root:0,min:[-100,-100,-500],max:[100,100,100],firstLeaf:0,numLeaves:2};
  const collision={models:[bounds,bounds],nodes:[[-1,-2,0]],planes:[[1,0,0,20]]};
  const visibility={faceCount:2,faceSpans:[[0,0,3],[1,3,3]],leafFaces:unreferenced?[0]:[0,1],
    leaves:[[0,1,0,1],[1,1,1,unreferenced?0:1]],clusters:[0,1],areas:[[0,0],[0,0]],areaPortals:[],
    modelBounds:[[-100,-100,-500,100,100,100],[-100,-100,-500,100,100,100]]};
  const world={camera,scene:new THREE.Scene(),level:{collision},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]};
  const stream=new WorldGeometryStream(world,{vertices,groups:[{model,start:0,count:6,texture:0}],visibility,pvs:new Uint8Array([1,2]),
    materialFor:()=>new THREE.MeshBasicMaterial({colorWrite:!sky,side:THREE.DoubleSide}),textureFor:async()=>new THREE.Texture()});
  const face=x=>{camera.position.x=x;camera.lookAt(24,0,-100);};
  const indices=()=>Array.from(stream.chunks[0].mesh.geometry.index.array.slice(0,stream.chunks[0].mesh.geometry.drawRange.count));
  return {world,stream,chunk:stream.chunks[0],face,indices};
}

test('a mixed-room static chunk submits individual PVS faces without rebuilding vertex or index storage',async()=>{
  const {stream,chunk,face,indices}=fixture();
  try {
    await stream.settle();assert.equal(stream.chunks.length,1);assert.deepEqual(indices(),[3,4,5]);
    const geometry=chunk.mesh.geometry,index=geometry.index,vertices=geometry.attributes.position.data.array,version=index.version;
    stream.update();stream.update();assert.equal(index.version,version,'a stable PVS does not upload indices');
    face(40);stream.update();assert.deepEqual(indices(),[0,1,2]);
    assert.equal(chunk.mesh.geometry,geometry);assert.equal(geometry.index,index);assert.equal(geometry.attributes.position.data.array,vertices);
    face(0);stream.update();assert.deepEqual(indices(),[3,4,5]);
    assert.equal(geometry.attributes.position.count,6,'whole packed faces remain resident for reuse');
  } finally {stream.dispose();}
});

test('invalid-camera visibility draws conservatively and returning to the same cached PVS restores filtering',async()=>{
  const {stream,face,indices}=fixture();
  try {
    await stream.settle();const revision=stream.visibility.revision;
    face(200);stream.update();assert.equal(stream.visibility.active,false);assert.deepEqual(indices(),[0,1,2,3,4,5]);
    face(0);stream.update();assert.equal(stream.visibility.revision,revision);assert.deepEqual(indices(),[3,4,5]);
  } finally {stream.dispose();}
});

test('PVS render filtering does not remove hidden faces from CPU surface queries',async()=>{
  const {stream,indices}=fixture();
  try {
    await stream.settle();assert.deepEqual(indices(),[3,4,5]);
    const hit=stream.traceSurface([34,0,50],[34,0,-150]);
    assert.ok(hit);assert.deepEqual(hit.end,[34,0,-100]);assert.equal(hit.fraction,.75);
  } finally {stream.dispose();}
});

test('unreferenced faces, moving brushes and depth-only sky retain conservative whole-face coverage',async()=>{
  for(const options of [{unreferenced:true},{model:1},{sky:true}]) {
    const {stream,chunk,face,indices}=fixture(options);
    try {
      face(40);await stream.settle();assert.equal(chunk.inView,true);
      assert.equal(chunk.mesh.geometry.drawRange.count,6);
      if(options.unreferenced)assert.deepEqual(indices(),[0,1,2,3,4,5]);
      else assert.equal(chunk.mesh.geometry.index,null,'moving models and sky do not use static-face PVS indices');
    } finally {stream.dispose();}
  }
});

test('eviction releases filtered geometry and reloading rebuilds indices for the current camera leaf',async()=>{
  const {stream,chunk,world,face,indices}=fixture();
  try {
    await stream.settle();const old=chunk.mesh.geometry;let disposed=0;old.addEventListener('dispose',()=>disposed++);
    world.camera.position.set(10000,0,0);world.camera.lookAt(20000,0,0);
    stream.update(performance.now()/1000+WORLD_STREAMING.retainSeconds+1);
    assert.equal(chunk.resident,false);assert.equal(chunk.drawGeometry,null);assert.equal(disposed,1);
    world.camera.position.set(40,0,0);face(40);await stream.settle();
    assert.notEqual(chunk.mesh.geometry,old);assert.deepEqual(indices(),[0,1,2]);
  } finally {stream.dispose();}
});

test('large packed chunks use 32-bit indices and preserve complete triangle spans',()=>{
  const {stream}=fixture();
  try {
    const geometry=new THREE.BufferGeometry(),chunk={resident:true,sky:false,group:{model:0},count:65538,spans:[[0,0,65538]],mesh:{geometry}};
    stream.visibility.active=false;stream.syncFaceVisibility(chunk);
    assert.ok(geometry.index.array instanceof Uint32Array);assert.equal(geometry.drawRange.count,65538);
    assert.equal(geometry.index.array[65537],65537);geometry.dispose();
  } finally {stream.dispose();}
});

test('visibility changes before a render preserve the dirty tail needed by a later larger draw',()=>{
  const {stream}=fixture();
  try {
    const geometry=new THREE.BufferGeometry(),chunk={resident:true,sky:false,group:{model:0},count:9,spans:[[0,0,3],[1,3,3],[2,6,3]],mesh:{geometry}};
    stream.visibility.active=true;stream.visibility.faces=new Uint8Array(3);stream.referencedFaces=new Uint8Array([1,1,1]);
    const select=mask=>{stream.visibility.faces.set(mask);stream.visibility.revision++;stream.syncFaceVisibility(chunk);};
    select([1,1,1]);const index=geometry.index,gpu=index.array.slice();index.clearUpdateRanges();
    select([0,1,1]);select([1,0,0]);
    for(const {start,count}of index.updateRanges)gpu.set(index.array.subarray(start,start+count),start);
    index.clearUpdateRanges();
    select([1,0,1]);
    assert.deepEqual(Array.from(gpu.slice(0,geometry.drawRange.count)),[0,1,2,6,7,8]);
    assert.equal(index.updateRanges.length,0,'an already uploaded prefix can grow without another upload');geometry.dispose();
  } finally {stream.dispose();}
});
