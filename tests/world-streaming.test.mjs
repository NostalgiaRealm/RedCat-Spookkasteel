import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {partitionWorld,WorldGeometryStream,WORLD_STREAMING} from '../src/world-streaming.js';

const read=name=>JSON.parse(readFileSync(new URL('../'+name,import.meta.url)));
test('chunk partition preserves every authored face and material in all five levels',()=>{
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const level=read(`data/levels/${id}/level.json`),visibility=read(`data/visibility/${id}.json`);
    const bytes=readFileSync(new URL(`../data/levels/${id}/mesh.bin`,import.meta.url));
    const vertices=new Float32Array(bytes.buffer,bytes.byteOffset,bytes.byteLength/4);
    const chunks=partitionWorld(level.groups,visibility.faceSpans,vertices);
    assert.equal(chunks.reduce((n,c)=>n+c.count,0),level.mesh.vertexCount,id);
    assert.deepEqual(chunks.flatMap(c=>c.spans).sort((a,b)=>a[1]-b[1]),visibility.faceSpans,id);
    for(const chunk of chunks)for(const [,start,count]of chunk.spans)for(let v=start;v<start+count;v++)for(let axis=0;axis<3;axis++)assert.ok(vertices[v*11+axis]>=chunk.min[axis]&&vertices[v*11+axis]<=chunk.max[axis]);
    for(const group of level.groups.filter(g=>g.model))assert.equal(chunks.filter(c=>c.group===group).length,1,'moving brushes stay whole');
  }
});

function fixture({textureFor}={}) {
  const camera=new THREE.PerspectiveCamera(65,1,1,30000);camera.position.set(0,50,200);camera.lookAt(0,20,0);
  const positions=[[-40,0,0],[40,0,0],[0,80,0],[19960,0,0],[20040,0,0],[20000,80,0]];
  const vertices=new Float32Array(66);positions.forEach((p,i)=>vertices.set(p,i*11));
  const groups=[{model:0,start:0,count:3,texture:0},{model:1,start:3,count:3,texture:0}];
  const collision={models:[{root:-1,min:[-500,-500,-500],max:[20500,500,500]}],nodes:[],planes:[]};
  const visibility={clusters:[],leaves:[[-1,0,0,0]],faceSpans:[[0,0,3],[1,3,3]],faceCount:2,leafFaces:[],areas:[],areaPortals:[]};
  const world={camera,scene:new THREE.Scene(),level:{collision},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]};
  const loads=[],releases=[];
  const stream=new WorldGeometryStream(world,{vertices,groups,visibility,pvs:new Uint8Array(),materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:textureFor|| (async index=>{
    const map=new THREE.Texture();map.addEventListener('dispose',()=>releases.push(index));loads.push(index);world.resources.add(map);return map;
  })});
  return {world,stream,loads,releases};
}

test('distant chunks release independent buffers; shared textures stay until their last resident user leaves',async()=>{
  const {world,stream,loads,releases}=fixture();await stream.settle();
  assert.equal(stream.stats.residentChunks,1);assert.equal(stream.stats.residentVertices,3);
  const first=stream.chunks[0],second=stream.chunks[1],geometry=first.mesh.geometry;let disposed=0;geometry.addEventListener('dispose',()=>disposed++);
  // The second room reuses the same texture while the old room is retained.
  world.camera.position.set(20000,50,200);world.camera.lookAt(20000,20,0);await stream.settle();
  assert.equal(stream.stats.residentChunks,2);assert.equal(loads.length,1);
  stream.update(performance.now()/1000+WORLD_STREAMING.retainSeconds+1);
  assert.equal(first.resident,false);assert.equal(second.resident,true);assert.equal(disposed,1);assert.equal(releases.length,0);
  assert.equal(first.mesh.geometry.attributes.position.count,0);
  world.camera.position.set(40000,0,0);world.camera.lookAt(50000,0,0);stream.update(performance.now()/1000+WORLD_STREAMING.retainSeconds*2+2);
  assert.equal(stream.stats.residentChunks,0);assert.equal(releases.length,1);assert.equal(world.resources.size,0);
  world.camera.position.set(0,50,200);world.camera.lookAt(0,20,0);await stream.settle();
  assert.equal(first.resident,true);assert.equal(loads.length,2);assert.deepEqual(Array.from(first.mesh.geometry.attributes.position.data.array),Array.from(stream.source.vertices.subarray(0,33)));
  stream.dispose();assert.equal(releases.length,2);
});

test('visible distant surfaces and moved brushes stay complete; graphics never change authored visibility',async()=>{
  const {world,stream}=fixture();
  world.camera.lookAt(20000,20,0);await stream.settle();
  assert.equal(stream.chunks[1].resident,true,'no hard far-distance cutoff for visible rooms');
  const moving=stream.chunks[1].mesh;moving.position.x=-20000;
  world.camera.lookAt(0,20,0);await stream.settle();
  assert.equal(moving.layers.mask,1,'current transformed brush bounds are used');
  moving.visible=false;stream.update();assert.equal(moving.visible,false);
  assert.equal(moving.layers.mask,2);moving.visible=true;stream.update();assert.equal(moving.layers.mask,1);
  stream.dispose();
});

test('distant decal rays use CPU source faces even when their render chunks are unloaded',async()=>{
  const {stream}=fixture();await stream.settle();
  assert.equal(stream.chunks[1].resident,false);
  const hit=stream.traceSurface([20000,20,100],[20000,20,-100]);
  assert.ok(hit);assert.equal(hit.fraction,.5);assert.deepEqual(hit.end,[20000,20,0]);
  assert.equal(stream.chunks[1].resident,false,'raycasts do not allocate graphics');stream.dispose();
});

test('leaving a level during an outstanding texture request releases its late result',async()=>{
  let resolve,disposed=0;
  const {stream}=fixture({textureFor:()=>new Promise(done=>resolve=done)});
  stream.update();await Promise.resolve();stream.dispose();
  const map=new THREE.Texture();map.addEventListener('dispose',()=>disposed++);resolve(map);
  await Promise.all([...stream.pending]);assert.equal(disposed,1);assert.equal(stream.stats.residentChunks,0);
});

function circlingFixture(angles) {
  const camera=new THREE.PerspectiveCamera(65,1,1,30000);camera.lookAt(0,0,-1);
  const vertices=new Float32Array(angles.length*3*11),groups=[],faceSpans=[];
  for(let i=0;i<angles.length;i++) {
    const angle=angles[i]*Math.PI/180,x=Math.sin(angle)*5000,z=-Math.cos(angle)*5000;
    for(const [vertex,offset]of [[0,[-40,-40,0]],[1,[40,-40,0]],[2,[0,40,0]]])vertices.set([x+offset[0],offset[1],z],(i*3+vertex)*11);
    groups.push({model:0,start:i*3,count:3,texture:i});faceSpans.push([i,i*3,3]);
  }
  const collision={models:[{root:-1,min:[-30000,-30000,-30000],max:[30000,30000,30000]}],nodes:[],planes:[]};
  const visibility={clusters:[],leaves:[[-1,0,0,0]],faceSpans,faceCount:angles.length,leafFaces:[],areas:[],areaPortals:[]};
  const world={camera,scene:new THREE.Scene(),level:{collision},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]},loads=[],releases=[];
  const stream=new WorldGeometryStream(world,{vertices,groups,visibility,pvs:new Uint8Array(),materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async index=>{
    const map=new THREE.Texture();map.addEventListener('dispose',()=>releases.push(index));loads.push(index);world.resources.add(map);return map;
  }});
  const face=angle=>camera.lookAt(Math.sin(angle*Math.PI/180),0,-Math.cos(angle*Math.PI/180));
  const finishRequests=async time=>{await Promise.all([...stream.pending]);stream.update(time);};
  return {world,stream,loads,releases,face,finishRequests};
}

test('camera turns preload distant surfaces outside the rendered view before they become visible',async()=>{
  const {stream,loads,face,finishRequests}=circlingFixture([45]);
  try {
    stream.update(0);await finishRequests(0);
    const chunk=stream.chunks[0];
    assert.equal(chunk.inView,false,'the surface is outside the actual 65 degree view');
    assert.equal(chunk.mesh.layers.mask,2,'prefetch does not render outside the camera view');
    assert.equal(chunk.resident,true,'a distant surface inside the wider preload view is ready before turning');
    assert.deepEqual(loads,[0]);
    face(45);stream.update(.1);
    assert.equal(chunk.inView,true);assert.equal(chunk.mesh.layers.mask,1);
    assert.equal(stream.readyForView,true,'turning into the prefetched surface needs no loading hold');
    assert.equal(stream.pending.size,0);
  } finally {stream.dispose();}
});

test('repeated five second camera circles reuse resident buffers and textures, then evict after leaving',async()=>{
  const {world,stream,loads,releases,face,finishRequests}=circlingFixture(Array.from({length:8},(_,i)=>i*45));
  try {
    stream.update(0);await finishRequests(0);
    let warmedGeometry;
    for(let step=1;step<=24;step++) {
      const time=step*5/8;face((step%8)*45);stream.update(time);
      assert.equal(stream.readyForView,true,`turn ${step} should already have visible geometry`);
      await finishRequests(time);
      if(step===8)warmedGeometry=stream.chunks.map(chunk=>chunk.mesh.geometry);
      if(step>8)for(const [i,chunk]of stream.chunks.entries())assert.equal(chunk.mesh.geometry,warmedGeometry[i],'returning views reuse their geometry buffers');
    }
    assert.equal(stream.stats.residentChunks,8);
    assert.equal(loads.length,8,'each texture loads only once across three laps');
    assert.equal(releases.length,0,'turning away briefly never releases recently visible textures');
    world.camera.position.set(0,20000,0);world.camera.lookAt(0,30000,0);
    stream.update(16);assert.equal(stream.stats.residentChunks,8,'recent views survive a brief departure');
    stream.update(15+WORLD_STREAMING.retainSeconds+1);
    assert.equal(stream.stats.residentChunks,0,'distant data is eventually evicted after the grace period');
    assert.equal(releases.length,8);assert.equal(world.resources.size,0);
  } finally {stream.dispose();}
});
