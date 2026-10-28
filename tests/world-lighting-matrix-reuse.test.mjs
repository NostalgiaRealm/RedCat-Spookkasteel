import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {CastleWorld} from '../source/world.js';
import {ActorRenderResidency} from '../source/actor-render-residency.js';
import {createActorLighting} from '../source/actor-lighting.js';

function actor() {
  const root=new THREE.Group(),mount=new THREE.Group(),mesh=new THREE.Mesh(new THREE.BoxGeometry(2,4,6),new THREE.MeshLambertMaterial());
  root.add(mount);mount.add(mesh);mesh.userData.actorLighting=createActorLighting({});
  mesh.userData.actorLighting.floorRecoveryBounds=new Float64Array(6);
  return {root,mount,mesh};
}
function fixture() {
  const scene=new THREE.Scene();scene.matrixAutoUpdate=false;
  const camera=new THREE.PerspectiveCamera(90,1,1,1000);camera.lookAt(0,0,-1);
  const samples=[],residency=new ActorRenderResidency(),world={scene,actorResidency:residency,gameplay:{time:1},
    actorFloorLighting:{beginFrame(){},sample(position,lights,state,bounds){samples.push({position:[...position],state,bounds:[...bounds]});return [.2,.3,.4];}},
    actorLightVisibility:{beginFrame(){}}};
  return {world,camera,samples,residency};
}
function checkSample(samples,mesh) {
  const sample=samples.find(sample=>sample.state===mesh.userData.actorLighting);assert.ok(sample);
  const matrix=new THREE.Matrix4(),chain=[];for(let node=mesh;node;node=node.parent)chain.push(node);
  for(const node of chain.reverse())matrix.multiply(new THREE.Matrix4().compose(node.position,node.quaternion,node.scale));
  assert.deepEqual(sample.position,new THREE.Vector3().setFromMatrixPosition(matrix).toArray());
  const box=mesh.geometry.boundingBox.clone().applyMatrix4(matrix);
  assert.deepEqual(sample.bounds,[...box.min.toArray(),...box.max.toArray()]);
}
const dispose=values=>values.forEach(({mesh})=>{mesh.geometry.dispose();mesh.material.dispose();});

test('prepared lighting reuses fresh managed matrices and updates new player/debris ancestor chains',()=>{
  const {world,camera,samples,residency}=fixture(),managed=actor(),player=actor(),knight=actor(),fragment=actor(),all=[managed,player,knight,fragment];
  world.scene.add(managed.root,player.root,knight.root);
  managed.root.position.set(10,3,-50);managed.root.rotation.y=.5;managed.mount.position.y=4;managed.mount.rotation.x=.2;
  residency.update([managed.root],camera,0);
  // Effects move/create these after residency. They still need current light.
  player.root.position.set(-3,6,-10);knight.mount.position.set(2,3,4);
  fragment.root.position.set(20,8,-50);fragment.mount.rotation.z=.3;world.scene.add(fragment.root);
  let refreshes=0;const update=managed.mesh.updateMatrix;managed.mesh.updateMatrix=function(){refreshes++;return update.call(this);};
  world.actorLightingMatricesPrepared=true;
  try {
    CastleWorld.prototype.syncActorLighting.call(world);
    assert.equal(refreshes,0,'residency already prepared the managed mesh');assert.equal(samples.length,4);
    for(const value of all)checkSample(samples,value.mesh);
  } finally {residency.dispose();dispose(all);}
});

test('a direct lighting call after moving a managed actor refreshes its current pose',()=>{
  const {world,camera,samples,residency}=fixture(),value=actor();world.scene.add(value.root);value.root.position.z=-50;
  residency.update([value.root],camera,0);value.root.position.set(15,9,-70);value.mount.rotation.y=.4;
  try {CastleWorld.prototype.syncActorLighting.call(world);checkSample(samples,value.mesh);}finally{residency.dispose();dispose([value]);}
});

test('effect exceptions cannot leave matrix reuse enabled for a later frame or direct caller',()=>{
  const world={elapsed:0,player:{position:[0,0,0],noClip:true,update(){}},cameraControl:{sync(){}},targeting:{locked:false},
    effects:{update(){assert.equal(world.actorLightingMatricesPrepared,true);throw new Error('effect failed');}}};
  for(const method of ['syncModels','syncMountedActorCollisions','updateTargeting','steeredThirdPerson','syncPlayer','updateCamera','syncProjectiles','syncTargetMarker','syncHazards','updateRenderResidency'])world[method]=()=>{};
  assert.throws(()=>CastleWorld.prototype.update.call(world,1/60,{}),/effect failed/);
  assert.equal(world.actorLightingMatricesPrepared,false);
});
