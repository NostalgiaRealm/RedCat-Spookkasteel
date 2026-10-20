import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldGeometryStream} from '../src/world-streaming.js';
import {ActorRenderResidency} from '../src/actor-render-residency.js';

function actor(geometry,texture,z=-100) {
  geometry??=new THREE.BoxGeometry(8,10,8);texture??=new THREE.Texture();geometry.computeBoundingBox();
  const root=new THREE.Group(),mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial({map:texture}));
  root.add(mesh);root.position.z=z;mesh.userData.actorLighting={bounds:geometry.boundingBox.clone()};
  return {root,mesh,geometry,texture};
}
function camera() {const camera=new THREE.PerspectiveCamera(60,1,1,30000);camera.lookAt(0,0,-1);return camera;}

// The resources are externally shared: no geometry or texture may be released
// while any resident actor still owns it, including owner removal/re-addition.
test('resource ownership survives actor removal, re-addition and live visibility changes without per-frame recounts',()=>{
  const a=actor(),b=actor(a.geometry,a.texture,-200),controller=new ActorRenderResidency(),view=camera();
  let disposed=0;a.texture.addEventListener('dispose',()=>disposed++);
  const roots=[a.root,b.root];controller.update(roots,view,0);
  assert.equal(controller.resources.get(a.texture).resident,2);
  const nativeGet=controller.resources.get.bind(controller.resources);let reads=0;
  controller.resources.get=key=>{reads++;return nativeGet(key);};
  controller.update(roots,view,.1);assert.equal(reads,0,'unchanged owners need no resource lookups');
  roots.splice(0,1);controller.update(roots,view,.2);assert.equal(nativeGet(a.texture).resident,1);assert.equal(disposed,0);
  b.root.visible=false;controller.update(roots,view,.3);assert.equal(disposed,1);
  roots.push(a.root);controller.update(roots,view,.4);
  assert.equal(nativeGet(a.texture).resident,1);assert.equal(controller.isRendered(a.mesh),true);
  a.root.position.z=2000;controller.update(roots,view,3);assert.equal(disposed,2);
  b.root.visible=true;controller.update(roots,view,3.1);assert.equal(nativeGet(a.texture).resident,1);
  controller.dispose();a.geometry.dispose();a.texture.dispose();a.mesh.material.dispose();b.mesh.material.dispose();
});

test('camera world position needs one ancestor update and honors a moved camera parent immediately',()=>{
  const value=actor(),view=camera(),parent=new THREE.Group(),controller=new ActorRenderResidency();parent.add(view);
  let parentUpdates=0;const nativeUpdate=parent.updateWorldMatrix;
  parent.updateWorldMatrix=function(...args){parentUpdates++;return nativeUpdate.apply(this,args);};
  controller.update([value.root],view,0);assert.equal(parentUpdates,1);assert.equal(controller.isRendered(value.root),true);
  parent.position.z=-3000;controller.update([value.root],view,1);
  assert.equal(parentUpdates,2);assert.equal(controller.cameraPosition.z,-3000);assert.equal(controller.isRendered(value.root),false);
  controller.dispose();value.geometry.dispose();value.texture.dispose();value.mesh.material.dispose();
});

function streamFixture() {
  const vertices=new Float32Array(66);[[-10,0,-100],[10,0,-100],[0,10,-100],[-10,0,-150],[10,0,-150],[0,10,-150]].forEach((p,i)=>vertices.set(p,i*11));
  const groups=[{model:0,start:0,count:3,texture:0},{model:1,start:3,count:3,texture:0}];
  const collision={models:[{root:-1,min:[-30000,-30000,-30000],max:[30000,30000,30000]}],nodes:[],planes:[]};
  const visibility={clusters:[],leaves:[[-1,0,0,0]],faceSpans:[[0,0,3],[1,3,3]],faceCount:2,leafFaces:[],areas:[],areaPortals:[]};
  const scene=new THREE.Scene();scene.matrixAutoUpdate=false;
  const world={camera:camera(),scene,level:{collision},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]};
  const stream=new WorldGeometryStream(world,{vertices,groups,visibility,pvs:new Uint8Array(),materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async()=>new THREE.Texture()});
  return {world,stream};
}
test('immutable world faces reuse their local matrix while moved brushes and changed scene ancestors propagate immediately',async()=>{
  const {world,stream}=streamFixture();
  try {
    await stream.settle();world.scene.updateMatrixWorld();const [fixed,moving]=stream.chunks.map(chunk=>chunk.mesh);
    let fixedUpdates=0;const update=fixed.updateMatrix;
    fixed.updateMatrix=function(...args){fixedUpdates++;return update.apply(this,args);};
    for(let i=0;i<30;i++){moving.position.x=i;stream.update(i/60);world.scene.updateMatrixWorld();}
    assert.equal(fixedUpdates,0);assert.equal(moving.matrixWorld.elements[12],29);
    world.scene.position.set(10,20,30);world.scene.updateMatrix();world.scene.updateMatrixWorld();stream.update(1);
    assert.deepEqual(new THREE.Vector3().setFromMatrixPosition(fixed.matrixWorld).toArray(),[10,20,30]);
    assert.deepEqual(new THREE.Vector3().setFromMatrixPosition(moving.matrixWorld).toArray(),[39,20,30]);
    assert.deepEqual(stream.chunks[0].bounds.min.toArray(),[0,20,-70]);
    moving.visible=false;stream.update(1.1);assert.equal(moving.layers.mask,2);
    moving.visible=true;world.camera.lookAt(39,20,-120);stream.update(1.2);assert.equal(moving.layers.mask,1);
  } finally {stream.dispose();}
});
