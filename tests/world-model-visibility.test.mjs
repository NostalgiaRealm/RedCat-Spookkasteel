import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {BspVisibility} from '../src/bsp-visibility.js';
import {WorldGeometryStream} from '../src/world-streaming.js';

function fixture(withBounds=true) {
  const camera=new THREE.PerspectiveCamera(65,16/9,1,5000);
  camera.position.set(200,40,300);camera.lookAt(-400,40,0);
  const vertices=new Float32Array(9*11);
  [[0,0,0],[80,0,0],[40,80,0],[-420,0,0],[-400,0,0],[-410,80,0],[-400,0,0],[-380,0,0],[-390,80,0]].forEach((p,i)=>vertices.set(p,i*11));
  const groups=[{model:0,start:0,count:3,texture:0},{model:1,start:3,count:3,texture:1},{model:1,start:6,count:3,texture:2}];
  const collision={models:[{root:0,firstLeaf:0,numLeaves:2,min:[-2000,-2000,-2000],max:[2000,2000,2000]}],nodes:[[-1,-2,0]],planes:[[1,0,0,0]]};
  const visibility={clusters:[0,1],leaves:[[0,0,0,1],[1,0,1,2]],leafFaces:[0,1,2],faceSpans:[[0,0,3],[1,3,3],[2,6,3]],faceCount:3,areas:[[0,0]],areaPortals:[]};
  if(withBounds)visibility.modelBounds=[null,[-548,-128,-128,-252,208,128]];
  const world={camera,scene:new THREE.Scene(),level:{collision},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]};
  const stream=new WorldGeometryStream(world,{vertices,groups,visibility,pvs:new Uint8Array([1,2]),materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async()=>new THREE.Texture()});
  const model=stream.chunks.filter(c=>c.group.model===1);
  return {world,stream,model};
}

test('moving models use whole transformed native bounds, retain all materials, and cache unchanged queries',async()=>{
  const {world,stream,model}=fixture();
  try {
    let queries=0;const original=stream.visibility.boundsVisible.bind(stream.visibility);
    stream.visibility.boundsVisible=(...args)=>{queries++;return original(...args);};
    await stream.settle();
    assert.equal(stream.movingModels.size,1,'one shared result for both model materials');
    for(const c of model){assert.equal(c.resident,true);assert.equal(c.mesh.layers.mask,2);assert.equal(c.mesh.visible,true,'render culling does not change gameplay visibility');}
    const baseline=queries;
    for(let i=0;i<120;i++)stream.update();
    assert.equal(queries,baseline,'stationary models do not repeat BSP tree walks');
    // The tight geometry is still at x<0, but the authored loose root box now
    // straddles a visible leaf. Do not make door materials vanish at portals.
    for(const c of model)c.mesh.position.x=280;
    world.camera.lookAt(-120,40,0);stream.update();
    assert.equal(queries,baseline+1);
    for(const c of model){assert.ok(c.bounds.max.x<0);assert.equal(c.mesh.layers.mask,1);}
    // Rotation invalidates the box even if the camera stays in the same leaf.
    for(const c of model){c.mesh.position.x=0;c.mesh.rotation.y=Math.PI;}
    world.camera.lookAt(400,40,0);stream.update();
    for(const c of model)assert.equal(c.mesh.layers.mask,1);
    for(const c of model)c.mesh.rotation.y=0;
    world.camera.position.set(-200,40,300);world.camera.lookAt(-400,40,0);stream.update();
    for(const c of model)assert.equal(c.mesh.layers.mask,1,'camera leaf changes invalidate the PVS result');
    // No-clip / remote cameras outside the BSP use conservative frustum only.
    world.camera.position.set(2200,40,300);world.camera.lookAt(-400,40,0);stream.update();
    assert.equal(stream.visibility.active,false);
    for(const c of model)assert.equal(c.mesh.layers.mask,1);
  } finally {stream.dispose();}
});

test('older imported data without model bounds keeps conservative visibility',async()=>{
  const {stream,model}=fixture(false);
  try {await stream.settle();assert.equal(stream.movingModels.size,0);for(const c of model)assert.equal(c.mesh.layers.mask,1);}
  finally {stream.dispose();}
});

test('original graveyard PVS hides both remote fences at the reported gap, but reveals them from their own room',()=>{
  const read=name=>readFileSync(new URL('../data/'+name,import.meta.url));
  const level=JSON.parse(read('levels/lvl02a/level.json')),metadata=JSON.parse(read('visibility/lvl02a.json'));
  const visibility=new BspVisibility(level.collision,metadata,new Uint8Array(read('visibility/lvl02a.bin')));
  const camera=[2240.679048124565,105.26586600094487,528.412264482492];
  visibility.update(camera,camera);assert.equal(visibility.lastLeaf,3532);
  assert.deepEqual(metadata.modelBounds[50],[804,400,-976,1144,784,-712]);
  assert.deepEqual(metadata.modelBounds[51],[720,400,-976,1060,784,-712]);
  for(const id of [50,51])assert.equal(visibility.boundsVisible(metadata.modelBounds[id].slice(0,3),metadata.modelBounds[id].slice(3,6)),false);
  // These transparent faces really are authored and visible, not missing SKY.
  for(const id of [5984,5985,5986])assert.equal(visibility.faces[id],1);
  for(const camera of [[932,592,-1100],[932,592,-700]]){
    visibility.update(camera,camera);
    for(const id of [50,51])assert.equal(visibility.boundsVisible(metadata.modelBounds[id].slice(0,3),metadata.modelBounds[id].slice(3,6)),true);
  }
});
