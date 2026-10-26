import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldGeometryStream,WORLD_STREAMING} from '../source/world-streaming.js';
import {ActorRenderResidency} from '../source/actor-render-residency.js';

function fixture(triangles) {
  const vertices=new Float32Array(triangles.length*33),groups=[],faceSpans=[];
  triangles.forEach((triangle,i)=>{triangle.forEach((p,j)=>vertices.set(p,(i*3+j)*11));groups.push({model:0,start:i*3,count:3,texture:i});faceSpans.push([i,i*3,3]);});
  const camera=new THREE.PerspectiveCamera(65,1,1,30000);camera.lookAt(0,0,-1);
  const collision={models:[{root:-1,min:[-30000,-30000,-30000],max:[30000,30000,30000]}],nodes:[],planes:[]};
  const visibility={clusters:[],leaves:[[-1,0,0,0]],faceSpans,faceCount:triangles.length,leafFaces:[],areas:[],areaPortals:[]};
  const world={camera,scene:new THREE.Scene(),level:{collision},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]},loads=[];
  const stream=new WorldGeometryStream(world,{vertices,groups,visibility,pvs:new Uint8Array(),materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async index=>{loads.push(index);const map=new THREE.Texture();world.resources.add(map);return map;}});
  return {world,stream,loads};
}

test('distant sections in the camera direction make no geometry or texture requests until approached',async()=>{
  const {world,stream,loads}=fixture([[[-30,-30,-100],[30,-30,-100],[0,30,-100]],[[-30,-30,-6000],[30,-30,-6000],[0,30,-6000]]]);
  try {
    await stream.settle();const far=stream.chunks[1];
    assert.equal(far.request,null);assert.equal(far.resident,false);assert.equal(far.mesh.geometry.attributes.position.count,0);assert.deepEqual(loads,[0]);
    assert.equal(far.mesh.visible,true,'distance is graphics policy, not scripted visibility');
    world.camera.position.z=-5500;world.camera.lookAt(0,0,-6000);await stream.settle();
    assert.equal(far.resident,true);assert.equal(far.mesh.geometry.attributes.position.count,3);assert.deepEqual(loads,[0,1]);
    world.camera.position.z=0;world.camera.lookAt(0,0,-1);stream.update(performance.now()/1000+WORLD_STREAMING.retainSeconds+1);
    assert.equal(far.resident,false);assert.equal(far.request,null);assert.equal(far.mesh.geometry.attributes.position.count,0);
    assert.ok(stream.traceSurface([0,0,-5900],[0,0,-6100]),'remote geometry remains available to physics/decal queries without loading its artwork');
    assert.equal(far.request,null);
  } finally {stream.dispose();}
});

test('camera-local loading keeps long nearby faces whole even when their centre extends beyond the view radius',async()=>{
  const {stream}=fixture([[[-3000,-10,-50],[3000,-10,-50],[3000,10,-50]]]);
  try {
    await stream.settle();const chunk=stream.chunks[0];assert.equal(chunk.resident,true);
    assert.equal(chunk.mesh.geometry.attributes.position.count,3);
    assert.deepEqual(Array.from(chunk.mesh.geometry.attributes.position.data.array),Array.from(stream.source.vertices));
  } finally {stream.dispose();}
});

test('camera-local actor graphics return immediately while retaining live visibility, bounds and geometry',()=>{
  const scene=new THREE.Scene(),camera=new THREE.PerspectiveCamera(65,1,1,30000);camera.lookAt(0,0,-1);
  const geometry=new THREE.BoxGeometry(20,40,20),texture=new THREE.Texture(),material=new THREE.MeshBasicMaterial({map:texture});geometry.computeBoundingBox();
  const root=new THREE.Group(),mesh=new THREE.Mesh(geometry,material);root.add(mesh);root.position.z=-6000;scene.add(root);mesh.userData.actorLighting={bounds:geometry.boundingBox.clone()};
  const controller=new ActorRenderResidency({scene,nearDistance:WORLD_STREAMING.preloadRadius,retainDistance:WORLD_STREAMING.retainRadius,viewDistance:WORLD_STREAMING.viewRadius});
  try {
    controller.update([root],camera,0);assert.equal(controller.isRendered(root),false);assert.equal(controller.isResident(root),false);assert.equal(root.visible,true);assert.equal(root.parent,controller.parking);
    const positions=geometry.attributes.position.array;camera.position.z=-5500;camera.lookAt(0,0,-6000);controller.update([root],camera,.1);
    assert.equal(controller.isRendered(root),true);assert.equal(controller.isResident(root),true);assert.equal(root.parent,scene);assert.equal(geometry.attributes.position.array,positions);
    root.visible=false;controller.update([root],camera,.2);assert.equal(controller.isRendered(root),false);assert.equal(root.visible,false);
  } finally {controller.dispose();geometry.dispose();texture.dispose();material.dispose();}
});
