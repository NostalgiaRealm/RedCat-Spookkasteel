import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {ActorRenderResidency} from '../src/actor-render-residency.js';

function fixture({position=[0,0,3000],parent,extra}={}) {
  const scene=new THREE.Scene(),ancestor=new THREE.Group();ancestor.add(scene);
  const camera=new THREE.PerspectiveCamera(60,1,1,20000);camera.lookAt(0,0,-1);
  const geometry=new THREE.BoxGeometry(20,40,20);geometry.computeBoundingBox();
  const mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial());
  mesh.userData.actorLighting={bounds:geometry.boundingBox.clone()};
  const root=new THREE.Group();root.position.fromArray(position);root.add(mesh);if(extra)root.add(extra);
  if(parent){scene.add(parent);parent.add(root);}else scene.add(root);
  const residency=new ActorRenderResidency({scene});return {scene,ancestor,camera,mesh,root,residency};
}

test('offscreen actor parking skips scene traversal and restores on camera turns without gameplay visibility changes',()=>{
  const {scene,camera,mesh,root,residency}=fixture();
  residency.update([root],camera,0);assert.equal(root.parent,residency.parking);
  assert.equal(root.visible,true);assert.equal(mesh.visible,true);assert.equal(mesh.layers.mask,0);
  let updates=0;const update=root.updateMatrixWorld;
  root.updateMatrixWorld=function(...args){updates++;return update.apply(this,args);};
  scene.updateMatrixWorld(true);assert.equal(updates,0);
  const visible=[];scene.traverseVisible(object=>visible.push(object));assert.ok(!visible.includes(mesh));
  camera.lookAt(0,0,1);residency.update([root],camera,.01);
  assert.equal(root.parent,scene);assert.equal(mesh.layers.mask,1);assert.equal(residency.isRendered(root),true);
  root.visible=false;residency.update([root],camera,.02);assert.equal(root.parent,residency.parking);assert.equal(root.visible,false);
  root.visible=true;mesh.visible=false;residency.update([root],camera,.03);assert.equal(residency.isRendered(root),false);
  mesh.visible=true;residency.update([root],camera,.04);assert.equal(root.parent,scene);
  scene.visible=false;residency.update([root],camera,.05);assert.equal(residency.isRendered(root),false,'authored ancestors remain authoritative');
  residency.dispose();
});

test('parked actor direct queries and same-frame reveal preserve transformed scene ancestry',()=>{
  const {scene,ancestor,camera,mesh,root,residency}=fixture();residency.update([root],camera,0);
  ancestor.position.set(11,22,33);ancestor.rotation.y=.2;ancestor.scale.set(1.1,.9,1.3);
  scene.position.set(4,5,6);scene.rotation.z=.3;root.position.set(17,18,3000);root.rotation.y=-.7;mesh.position.y=9;
  mesh.matrixAutoUpdate=false;mesh.updateMatrix();
  mesh.updateWorldMatrix(true,false,true);
  const expected=new THREE.Matrix4().multiplyMatrices(ancestor.matrix,scene.matrix).multiply(root.matrix).multiply(mesh.matrix);
  assert.deepEqual(mesh.matrixWorld.elements,expected.elements,'a collision/query can refresh an actor without renderer traversal');
  const center=new THREE.Vector3().setFromMatrixPosition(mesh.matrixWorld);camera.position.copy(center).add(new THREE.Vector3(0,0,200));camera.lookAt(center);
  residency.update([root],camera,.01);assert.equal(root.parent,scene);assert.equal(residency.isRendered(root),true);
  assert.deepEqual(mesh.matrixWorld.elements,expected.elements);
  assert.ok(residency.records.get(root).bounds.containsPoint(center));
  residency.dispose();
});

test('nested roots and externally reparented or removed actors keep their owner hierarchy',()=>{
  const nested=new THREE.Group(),a=fixture({parent:nested});a.residency.update([a.root],a.camera,0);
  assert.equal(a.root.parent,nested);assert.equal(a.mesh.layers.mask,0);
  nested.visible=false;a.camera.lookAt(0,0,1);a.residency.update([a.root],a.camera,1);assert.equal(a.residency.isRendered(a.root),false);
  a.residency.dispose();assert.equal(a.root.parent,nested);
  const b=fixture();b.residency.update([b.root],b.camera,0);const external=new THREE.Group();b.scene.add(external);external.add(b.root);
  b.residency.update([b.root],b.camera,1);assert.equal(b.root.parent,external);
  b.residency.update([],b.camera,2);assert.equal(b.root.parent,external);assert.equal(b.mesh.layers.mask,1);
  const c=fixture();c.residency.update([c.root],c.camera,0);c.root.removeFromParent();c.residency.update([],c.camera,1);assert.equal(c.root.parent,null);
  b.residency.dispose();c.residency.dispose();
});

test('unmanaged child lights and presentation effects never enter the actor parking branch',()=>{
  for(const extra of [new THREE.PointLight(),new THREE.Sprite(),new THREE.Points(),new THREE.Line(),new THREE.Mesh()]) {
    const {scene,camera,root,residency}=fixture({extra});residency.update([root],camera,0);
    assert.equal(root.parent,scene,extra.type);residency.dispose();
  }
});

test('removal and disposal restore owned roots and their original layers',()=>{
  const {scene,camera,mesh,root,residency}=fixture();mesh.layers.enable(3);
  residency.update([root],camera,0);assert.equal(root.parent,residency.parking);residency.update([],camera,1);
  assert.equal(root.parent,scene);assert.equal(mesh.layers.mask,9);
  residency.update([root],camera,2);assert.equal(root.parent,residency.parking);residency.dispose();
  assert.equal(root.parent,scene);assert.equal(mesh.layers.mask,9);assert.equal(residency.parking.parent,null);
  assert.deepEqual(scene.children,[root]);
});
