import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {CastleWorld} from '../source/world.js';

function fixture() {
  const actor=new THREE.Group(),geometry=new THREE.BoxGeometry(10,20,30),mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial());
  actor.position.set(100,20,200);actor.rotation.y=.4;mesh.scale.set(2,3,4);actor.add(mesh);
  actor.userData.mesh=mesh;actor.userData.template={data:{settings:{damageThreshold:[1,1]}}};
  const object={health:1};CastleWorld.prototype.configureDestructible.call({},object,actor);
  return {actor,mesh,object};
}
const expected=(actor,position)=>{
  const box=new THREE.Box3().setFromObject(actor),center=new THREE.Vector3().fromArray(position);
  return {min:box.min.sub(center).toArray(),max:box.max.sub(center).toArray()};
};
test('destruction centre and bounds reuse a single posed box for an unchanged simple actor',()=>{
  const {actor,object}=fixture(),original=THREE.Box3.prototype.setFromObject;let calls=0;
  THREE.Box3.prototype.setFromObject=function(...args){calls++;return original.apply(this,args);};
  let position,bounds;
  try {position=object.effectPosition();bounds=object.effectBounds(position);assert.equal(calls,1);}
  finally {THREE.Box3.prototype.setFromObject=original;}
  assert.deepEqual(bounds,expected(actor,position));
});

for(const [label,mutate] of [
  ['moved root',({actor})=>actor.position.x+=20],
  ['changed child pose',({mesh})=>mesh.rotation.z=.3],
  ['changed geometry bound',({mesh})=>mesh.geometry.boundingBox.max.x+=50],
  ['added compound child',({actor})=>{const child=new THREE.Mesh(new THREE.BoxGeometry(5,5,5));child.position.x=100;actor.add(child);}]
])test(`destruction bounds retain live geometry after ${label}`,()=>{
  const scene=fixture(),position=scene.object.effectPosition();mutate(scene);
  assert.deepEqual(scene.object.effectBounds(position),expected(scene.actor,position));
});
