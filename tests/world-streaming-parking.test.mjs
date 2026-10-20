import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldGeometryStream} from '../src/world-streaming.js';

function fixture() {
  const camera=new THREE.PerspectiveCamera(65,1,1,30000);camera.position.set(0,50,200);camera.lookAt(0,20,0);
  const positions=[[-40,0,0],[40,0,0],[0,80,0],[19960,0,0],[20040,0,0],[20000,80,0]];
  const vertices=new Float32Array(66);positions.forEach((p,i)=>vertices.set(p,i*11));
  const groups=[{model:0,start:0,count:3,texture:0},{model:1,start:3,count:3,texture:0}];
  const collision={models:[{root:-1,min:[-500,-500,-500],max:[20500,500,500]}],nodes:[],planes:[]};
  const visibility={clusters:[],leaves:[[-1,0,0,0]],faceSpans:[[0,0,3],[1,3,3]],faceCount:2,leafFaces:[],areas:[],areaPortals:[],modelBounds:[null,[19960,0,0,20040,80,0]]};
  const scene=new THREE.Scene(),ancestor=new THREE.Group();ancestor.add(scene);
  const world={camera,scene,level:{collision},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]};
  const stream=new WorldGeometryStream(world,{vertices,groups,visibility,pvs:new Uint8Array(),materialFor:()=>new THREE.MeshBasicMaterial({side:THREE.DoubleSide}),textureFor:async()=>{
    const map=new THREE.Texture();world.resources.add(map);return map;
  }});
  return {world,stream,ancestor};
}

test('only drawable chunks join normal scene traversal; camera turns restore them immediately',async()=>{
  const {world,stream}=fixture();
  try {
    await stream.settle();const [near,far]=stream.chunks;
    assert.equal(near.mesh.parent,world.scene);assert.equal(far.mesh.parent,stream.parking);
    assert.equal(stream.parking.visible,false);assert.equal(far.mesh.visible,true);
    assert.equal(world.modelMeshes.get(1)[0],far.mesh,'script/model references are unchanged');
    world.camera.position.set(20000,50,200);world.camera.lookAt(20000,20,0);await stream.settle();
    assert.equal(far.mesh.parent,world.scene,'approaching a remote section makes it drawable');
    world.camera.position.set(0,50,200);world.camera.lookAt(0,20,0);stream.update();assert.equal(far.resident,true);
    assert.equal(far.mesh.parent,stream.parking,'retained but offscreen geometry is parked');
    far.mesh.position.x=-20000;stream.update();
    assert.equal(far.inView,true);assert.equal(far.mesh.parent,world.scene,'moving brushes attach before this frame is drawn');
    far.mesh.visible=false;stream.update();assert.equal(far.mesh.visible,false);assert.equal(far.mesh.parent,stream.parking);
    far.mesh.visible=true;stream.update();assert.equal(far.mesh.parent,world.scene);
  } finally {stream.dispose();}
});

test('normal scene matrix and visible traversals skip parked children, but direct geometry queries remain current',async()=>{
  const {world,stream,ancestor}=fixture();
  try {
    await stream.settle();const far=stream.chunks[1];let updates=0;
    const update=far.mesh.updateMatrixWorld;
    far.mesh.updateMatrixWorld=function(...args){updates++;return update.apply(this,args);};
    world.scene.updateMatrixWorld(true);assert.equal(updates,0,'forced renderer propagation also skips the parked branch');
    const visible=[];world.scene.traverseVisible(node=>visible.push(node));assert.ok(!visible.includes(far.mesh));
    ancestor.position.set(37,11,-20);ancestor.rotation.y=.31;ancestor.scale.set(1.2,.8,1.4);
    far.mesh.position.set(-30,12,17);far.mesh.rotation.y=-.21;
    const matrix=new THREE.Matrix4().multiplyMatrices(ancestor.matrix.compose(ancestor.position,ancestor.quaternion,ancestor.scale),far.mesh.matrix.compose(far.mesh.position,far.mesh.quaternion,far.mesh.scale));
    const start=new THREE.Vector3(20000,20,100).applyMatrix4(matrix),end=new THREE.Vector3(20000,20,-100).applyMatrix4(matrix);
    const hit=stream.traceSurface(start.toArray(),end.toArray());assert.ok(hit,'CPU faces remain queryable while GPU geometry is absent');
    const expected=new THREE.Vector3(20000,20,0).applyMatrix4(matrix);
    assert.ok(new THREE.Vector3(...hit.end).distanceTo(expected)<1e-8);
    assert.deepEqual(far.mesh.matrixWorld.elements,matrix.elements);
    assert.equal(far.resident,false,'a ray never allocates distant rendering resources');
  } finally {stream.dispose();}
});

test('unchanged static chunk matrices are not multiplied each frame and moving representatives update once',async()=>{
  const {world,stream,ancestor}=fixture();
  try {
    await stream.settle();stream.update();world.scene.updateMatrixWorld();
    const [near,far]=stream.chunks;let staticProducts=0,movingUpdates=0;
    const multiply=near.mesh.matrixWorld.multiplyMatrices;
    near.mesh.matrixWorld.multiplyMatrices=function(...args){staticProducts++;return multiply.apply(this,args);};
    const update=far.mesh.updateMatrixWorld;
    far.mesh.updateMatrixWorld=function(...args){movingUpdates++;return update.apply(this,args);};
    stream.update();assert.equal(staticProducts,0);assert.equal(movingUpdates,1,'model bounds and chunk bounds share one pose refresh');
    ancestor.position.x=10;stream.update();assert.equal(staticProducts,1);
    assert.equal(near.bounds.min.x,-30);assert.equal(near.mesh.matrixWorld.elements[12],10);
    far.mesh.position.x=-20000;stream.update();assert.equal(far.bounds.min.x,-30);
  } finally {stream.dispose();}
});

test('stream disposal removes its hidden branch and every chunk without changing authored visibility',async()=>{
  const {world,stream}=fixture();await stream.settle();const chunks=stream.chunks;
  stream.dispose();assert.equal(stream.parking.parent,null);assert.equal(world.scene.children.length,0);
  for(const chunk of chunks){assert.equal(chunk.mesh.parent,null);assert.equal(chunk.mesh.visible,true);}
});
