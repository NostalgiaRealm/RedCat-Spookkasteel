import fs from 'node:fs';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {CastleWorld} from '../../../src/world.js';
import {DebrisRenderPool} from '../../../src/debris-render-pool.js';
const states=JSON.parse(fs.readFileSync('temp_work/crate-performance-2026-10-18/verified-visual-after/states.json'));
const pools=new Map();let comparisons=0;
function fixture(name){
 let pair=pools.get(name);if(pair)return pair;
 const data=JSON.parse(fs.readFileSync(`assets/actors/${name}.json`)),geometry=new THREE.BufferGeometry();
 geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));geometry.setIndex(data.indices);for(const g of data.groups)geometry.addGroup(g.start,g.count,g.materialIndex);
 const materials=data.materials.map(()=>new THREE.MeshLambertMaterial({side:THREE.DoubleSide})),prototype=CastleWorld.prototype.instantiateActor.call({track:v=>v},{data,geometry,materials});
 const original=prototype.userData.mesh,oldRoot=new THREE.Group(),oldMesh=new THREE.Mesh(original.geometry,original.material.map(m=>m.clone()));
 oldMesh.position.copy(original.position);oldMesh.rotation.copy(original.rotation);oldMesh.scale.copy(original.scale);oldRoot.add(oldMesh);
 const pool=new DebrisRenderPool({}),entry=pool.acquire(prototype,{scale:[1,1,1]});
 // The old renderer lazily cloned this local box at its first visible sample.
 const oldBounds=oldMesh.geometry.boundingBox.clone(),newBounds=entry.mesh.userData.actorLighting.bounds;
 assert.deepEqual(oldBounds,newBounds);
 pair={oldRoot,oldMesh,oldBounds,entry,newBounds};pools.set(name,pair);return pair;
}
for(const frame of states.frames)for(const particle of frame.particles){
 const p=fixture(particle.actor);
 p.oldRoot.position.fromArray(particle.position);p.oldRoot.quaternion.fromArray(particle.orientation);p.oldRoot.updateWorldMatrix(true,true);
 p.entry.root.position.fromArray(particle.position);p.entry.root.quaternion.fromArray(particle.orientation);p.entry.root.updateWorldMatrix(true,true);
 assert.deepEqual(p.oldMesh.matrixWorld.elements,p.entry.mesh.matrixWorld.elements);
 const oldWorld=p.oldBounds.clone().applyMatrix4(p.oldMesh.matrixWorld),newWorld=p.newBounds.clone().applyMatrix4(p.entry.mesh.matrixWorld);
 assert.deepEqual(oldWorld,newWorld);assert.equal(oldWorld.max.y-oldWorld.min.y,newWorld.max.y-newWorld.min.y);comparisons++;
}
console.log(JSON.stringify({exact:true,comparisons,artworks:[...pools.keys()]},null,2));
