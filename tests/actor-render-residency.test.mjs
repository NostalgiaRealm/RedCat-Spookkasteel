import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {ActorRenderResidency} from '../src/actor-render-residency.js';

function actor({geometry=new THREE.BoxGeometry(20,40,20),texture=new THREE.Texture(),position=[0,0,-2000],transparent=false}={}) {
  geometry.computeBoundingBox();
  const material=new THREE.MeshBasicMaterial({map:texture,transparent,opacity:transparent?.55:1});
  const root=new THREE.Group(),mesh=new THREE.Mesh(geometry,material);root.add(mesh);root.position.fromArray(position);
  mesh.userData.actorLighting={bounds:geometry.boundingBox.clone()};root.userData.mesh=mesh;
  return {root,mesh,geometry,texture};
}
function camera() {const c=new THREE.PerspectiveCamera(60,1,1,20000);c.lookAt(0,0,-1);return c;}
function disposals(resource) {const events=[];resource.addEventListener('dispose',()=>events.push(true));return events;}

test('off-camera actors release only GPU resources after hysteresis and return immediately on camera turn',()=>{
  const a=actor(),c=camera(),residency=new ActorRenderResidency();
  const gd=disposals(a.geometry),td=disposals(a.texture),vertices=a.geometry.attributes.position.array;
  residency.update([a.root],c,0);assert.equal(residency.isResident(a.mesh),true);
  c.lookAt(0,0,1);residency.update([a.root],c,1);assert.equal(residency.isResident(a.root),true);
  assert.equal(residency.isRendered(a.mesh),false);assert.equal(a.mesh.layers.mask,0,'retained offscreen assets do not draw');
  residency.update([a.root],c,2.1);
  assert.equal(a.mesh.layers.mask,0);assert.equal(a.mesh.visible,true);assert.equal(a.root.visible,true);
  assert.equal(gd.length,1);assert.equal(td.length,1);assert.equal(a.geometry.attributes.position.array,vertices);
  residency.update([a.root],c,10);assert.equal(gd.length,1);assert.equal(td.length,1);
  const version=a.texture.version;c.lookAt(0,0,-1);residency.update([a.root],c,10.01);
  assert.equal(residency.isResident(a.mesh),true);assert.equal(a.mesh.layers.mask,1);assert.ok(a.texture.version>version);
});

test('shared actor geometry and textures are retained until the last resident owner leaves',()=>{
  const sharedGeometry=new THREE.BoxGeometry(20,40,20),sharedTexture=new THREE.Texture();
  const a=actor({geometry:sharedGeometry,texture:sharedTexture}),b=actor({geometry:sharedGeometry,texture:sharedTexture,position:[0,0,2500]});
  const gd=disposals(sharedGeometry),td=disposals(sharedTexture),c=camera(),residency=new ActorRenderResidency();
  residency.update([a.root,b.root],c,0);
  assert.equal(residency.isResident(b.mesh),false);assert.equal(gd.length,0);assert.equal(td.length,0);
  a.root.visible=false;residency.update([a.root,b.root],c,1);
  assert.equal(gd.length,1);assert.equal(td.length,1);assert.equal(residency.stats.residentTextures,0);
  b.root.position.z=-2500;residency.update([a.root,b.root],c,2);
  assert.equal(residency.isResident(b.mesh),true);assert.equal(residency.stats.residentTextures,1);
});

test('distant visible actors and large transformed assemblies stay complete',()=>{
  const a=actor({position:[0,0,-12000],transparent:true}),b=actor({position:[7000,0,-3000]});
  b.mesh.scale.set(600,2,2);b.mesh.rotation.y=.3;
  const assembly=new THREE.Group();assembly.add(a.root,b.root);
  const residency=new ActorRenderResidency(),c=camera();residency.update([assembly],c,0);
  assert.equal(residency.stats.residentActors,1);assert.equal(residency.isResident(a.mesh),true);assert.equal(residency.isResident(b.mesh),true);
  assert.equal(a.mesh.material.opacity,.55);assert.equal(a.mesh.material.transparent,true);
  const rest=a.mesh.userData.actorLighting.bounds.clone();a.geometry.boundingBox.setFromCenterAndSize(new THREE.Vector3(99999,0,0),new THREE.Vector3(1,1,1));
  residency.update([assembly],c,3);assert.equal(residency.isResident(a.mesh),true);assert.ok(a.mesh.userData.actorLighting.bounds.equals(rest));
});

test('near-camera preload and distance hysteresis avoid repeated uploads at the boundary',()=>{
  const a=actor({position:[0,0,900]}),residency=new ActorRenderResidency(),c=camera(),gd=disposals(a.geometry);
  residency.update([a.root],c,0);assert.equal(residency.isResident(a.root),true);
  a.root.position.z=1400;residency.update([a.root],c,10);assert.equal(residency.isResident(a.root),true);
  a.root.position.z=1800;residency.update([a.root],c,11);assert.equal(residency.isResident(a.root),false);assert.equal(gd.length,1);
  a.root.position.z=1000;residency.update([a.root],c,12);assert.equal(residency.isResident(a.root),true);
});

test('nearby actors behind PVS stay preloaded without drawing while distant visible bounds stay intact',()=>{
  const nearby=actor({position:[0,0,-300]}),distant=actor({position:[0,0,-12000]});
  const c=camera(),residency=new ActorRenderResidency({boundsVisible:bounds=>bounds.min.z<-10000});
  const td=disposals(nearby.texture);residency.update([nearby.root,distant.root],c,0);
  assert.equal(residency.isResident(nearby.mesh),true);assert.equal(residency.isRendered(nearby.mesh),false);
  assert.equal(nearby.mesh.layers.mask,0);assert.equal(td.length,0);
  assert.equal(residency.isRendered(distant.mesh),true);assert.equal(distant.mesh.layers.mask,1);
  assert.equal(residency.stats.residentActors,2);assert.equal(residency.stats.renderedActors,1);
  assert.equal(residency.stats.renderedMeshes,1);
  // Movement refreshes the queried world bounds every frame, so entering a
  // visible area turns rendering back on without waiting for a reload tick.
  nearby.root.position.z=-11000;residency.update([nearby.root,distant.root],c,.01);
  assert.equal(residency.isRendered(nearby.mesh),true);assert.equal(nearby.mesh.layers.mask,1);
  assert.equal(residency.stats.renderedActors,2);assert.equal(td.length,0);
});

test('player and nonmanaged scene consumers protect shared textures and geometry',()=>{
  const a=actor({position:[0,0,3000]}),player=actor({geometry:a.geometry,texture:a.texture,position:[0,0,0]});
  const scene=new THREE.Scene();scene.add(a.root,player.root);
  const residency=new ActorRenderResidency({scene,protectedRoots:[player.root]}),c=camera();
  const gd=disposals(a.geometry),td=disposals(a.texture);residency.update([a.root],c,0);
  assert.equal(residency.isResident(a.mesh),false);assert.equal(residency.isResident(player.mesh),true);
  assert.equal(gd.length,0);assert.equal(td.length,0);assert.equal(player.mesh.layers.mask,1);
  scene.remove(player.root);residency.protectedRoots=[];residency.update([a.root],c,1);
  assert.equal(gd.length,1);assert.equal(td.length,1);
});

test('removal and controller disposal restore original layers without changing gameplay visibility',()=>{
  const a=actor({position:[0,0,3000]}),b=actor({position:[0,0,3000]});a.mesh.layers.enable(3);b.root.visible=false;
  const residency=new ActorRenderResidency(),c=camera();residency.update([a.root,b.root],c,0);
  assert.equal(a.mesh.layers.mask,0);assert.equal(b.mesh.layers.mask,0);
  residency.update([b.root],c,1);assert.equal(a.mesh.layers.mask,9);
  residency.dispose();assert.equal(b.root.visible,false);assert.equal(b.mesh.visible,true);assert.equal(b.mesh.layers.mask,1);
  assert.equal(residency.records.size,0);assert.equal(residency.resources.size,0);
});
