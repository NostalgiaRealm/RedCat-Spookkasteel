import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {WebGLGeometries} from '../node_modules/three/src/renderers/webgl/WebGLGeometries.js';
import {CastleWorld} from '../src/world.js';
import {cloneActorPoseGeometry} from '../src/actor-geometry.js';
import {ActorRenderResidency} from '../src/actor-render-residency.js';
import {updateActorLighting} from '../src/actor-lighting.js';

const load=stem=>JSON.parse(readFileSync(new URL('../assets/actors/'+stem+'.json',import.meta.url)));

function fixture(stem) {
  const data=load(stem),geometry=new THREE.BufferGeometry(),map=new THREE.Texture();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
  geometry.setAttribute('uv',new THREE.Float32BufferAttribute(data.uvs,2));geometry.setIndex(data.indices);
  for(const group of data.groups)geometry.addGroup(group.start,group.count,group.materialIndex);
  geometry.computeBoundingBox();geometry.computeBoundingSphere();
  const materials=data.materials.map(()=>new THREE.MeshLambertMaterial({map})),template={data,geometry,materials};
  const world={resources:new Set([geometry,map,...materials]),gameplay:{time:0},track(resource){this.resources.add(resource);return resource;},
    instantiateActor:CastleWorld.prototype.instantiateActor,actorCollisionRecord:CastleWorld.prototype.actorCollisionRecord};
  const make=options=>world.instantiateActor(template,options);
  return {world,template,map,make,dispose:()=>{for(const resource of world.resources)resource.dispose();}};
}

test('repeated real potions share one mesh resource and map but keep lighting, visibility and collision records independent',()=>{
  const {world,template,map,make,dispose}=fixture('ipotion'),first=make(),second=make();
  const a=first.userData.mesh,b=second.userData.mesh;
  try {
    assert.equal(template.data.animations?.length||0,0);assert.equal(a.geometry,template.geometry);assert.equal(b.geometry,template.geometry);
    assert.ok(a.material.every((material,i)=>material!==b.material[i]&&material.map===map&&b.material[i].map===map));
    assert.notEqual(a.userData.actorLighting,b.userData.actorLighting);
    updateActorLighting(a.userData.actorLighting,[0,0,0],0,[],{ambient:[.1,.2,.3]});
    updateActorLighting(b.userData.actorLighting,[500,0,0],0,[],{ambient:[.8,.7,.6]});
    assert.deepEqual(a.userData.actorLighting.uniforms.actorAmbient.value.toArray(),[1,1,1],'original potion settings deliberately override floor ambient');
    assert.deepEqual(b.userData.actorLighting.uniforms.actorAmbient.value.toArray(),[1,1,1]);
    a.userData.actorLighting.uniforms.actorLightColors.value[0].setRGB(.1,.2,.3);
    assert.deepEqual(b.userData.actorLighting.uniforms.actorLightColors.value[0].toArray(),[0,0,0],'per-instance live light samples must not share mutable colour objects');
    const shader=()=>({uniforms:{},vertexShader:'',fragmentShader:''}),left=shader(),right=shader();
    a.material[0].onBeforeCompile(left);b.material[0].onBeforeCompile(right);
    assert.equal(left.uniforms.actorAmbient,a.userData.actorLighting.uniforms.actorAmbient);
    assert.equal(right.uniforms.actorAmbient,b.userData.actorLighting.uniforms.actorAmbient);assert.notEqual(left.uniforms.actorAmbient,right.uniforms.actorAmbient);
    first.position.x=-250;second.position.x=250;
    const firstObject={id:'potion-a',kind:'pickup',health:1},secondObject={id:'potion-b',kind:'pickup',health:1};
    const firstCollision=world.actorCollisionRecord(firstObject,first,{blocksPlayer:true}),secondCollision=world.actorCollisionRecord(secondObject,second,{blocksPlayer:true});
    assert.notEqual(firstCollision,secondCollision);assert.notEqual(firstCollision.triangles,secondCollision.triangles);
    assert.ok(firstCollision.triangles.length>0&&secondCollision.triangles.length>0);
    assert.ok(Math.abs(secondCollision.min[0]-firstCollision.min[0]-500)<1e-5);
    const secondBounds=[...secondCollision.min,...secondCollision.max];firstObject.collected=true;first.visible=false;a.material[0].opacity=.25;
    assert.equal(firstCollision.active(),false);assert.equal(secondCollision.active(),true);assert.equal(second.visible,true);assert.equal(b.material[0].opacity,1);
    assert.deepEqual([...secondCollision.min,...secondCollision.max],secondBounds);
  }finally{dispose();}
});

test('animated real knights share immutable backing and prepared clips while keeping poses, collision and transitions private',()=>{
  const {world,template,make,dispose}=fixture('knight'),first=make(),second=make(),a=first.userData.mesh,b=second.userData.mesh,animator=first.userData.animator,other=second.userData.animator;
  try {
    assert.notEqual(a.geometry,b.geometry);assert.notEqual(a.geometry.attributes.position.array,b.geometry.attributes.position.array);
    assert.notEqual(a.geometry.attributes.normal.array,b.geometry.attributes.normal.array);
    for(const attribute of ['uv']) {
      assert.notEqual(a.geometry.attributes[attribute],b.geometry.attributes[attribute]);
      assert.equal(a.geometry.attributes[attribute].array,template.geometry.attributes[attribute].array);
      assert.equal(b.geometry.attributes[attribute].array,template.geometry.attributes[attribute].array);
    }
    assert.notEqual(a.geometry.index,b.geometry.index);assert.equal(a.geometry.index.array,template.geometry.index.array);assert.equal(b.geometry.index.array,template.geometry.index.array);
    assert.equal(animator.prepared,other.prepared);assert.equal(animator.prepared.get('shoot1').tracks,other.prepared.get('shoot1').tracks);
    const tangent=animator.prepared.get('shoot1').tracks.find(track=>track?.tangents)?.tangents;
    assert.ok(tangent);assert.equal(tangent,other.prepared.get('shoot1').tracks.find(track=>track?.tangents)?.tangents);
    assert.notEqual(animator.boneTransforms,other.boneTransforms);assert.ok(animator.boneTransforms.every((matrix,i)=>matrix!==other.boneTransforms[i]));
    updateActorLighting(a.userData.actorLighting,[0,0,0],0,[],{ambient:[.1,.2,.3]});
    updateActorLighting(b.userData.actorLighting,[500,0,0],0,[],{ambient:[.8,.7,.6]});
    assert.deepEqual(a.userData.actorLighting.uniforms.actorAmbient.value.toArray(),[.1,.2,.3]);
    assert.deepEqual(b.userData.actorLighting.uniforms.actorAmbient.value.toArray(),[.8,.7,.6]);
    const secondPose=[...b.geometry.attributes.position.array],secondNormals=[...b.geometry.attributes.normal.array],secondBox=b.geometry.boundingBox.clone(),sourcePose=[...template.geometry.attributes.position.array];
    const secondObject={id:'knight-b',kind:'enemy',enemyType:'knight',health:10},firstObject={id:'knight-a',kind:'enemy',enemyType:'knight',health:10};
    first.position.x=-100;second.position.x=100;
    const secondCollision=world.actorCollisionRecord(secondObject,second,{blocksPlayer:true}),secondTriangles=JSON.stringify(secondCollision.triangles);
    animator.transitionDuration=.25;animator.play('shoot1');animator.update(.2);animator.play('hit');animator.update(.05);
    assert.ok(animator.transition);assert.equal(other.transition,null);assert.notEqual(animator.time,other.time);
    assert.notDeepEqual([...a.geometry.attributes.position.array],secondPose);
    assert.deepEqual([...b.geometry.attributes.position.array],secondPose);assert.deepEqual([...b.geometry.attributes.normal.array],secondNormals);
    assert.ok(b.geometry.boundingBox.equals(secondBox));assert.deepEqual([...template.geometry.attributes.position.array],sourcePose);
    const firstCollision=world.actorCollisionRecord(firstObject,first,{blocksPlayer:true});assert.notEqual(firstCollision,secondCollision);
    assert.equal(JSON.stringify(secondCollision.triangles),secondTriangles);
    assert.equal(world.actorCollisionRecord(secondObject,second,{blocksPlayer:true}),secondCollision,'only the actor whose pose changed may invalidate its collision cache');
  }finally{dispose();}
});

test('a saved animated transition restores exactly without changing a sibling or shared source data',()=>{
  const {template,make,dispose}=fixture('knight'),first=make(),second=make(),animator=first.userData.animator;
  try {
    animator.transitionDuration=.25;animator.play('shoot1');animator.update(.18);animator.play('hit');animator.update(.06);
    const saved=animator.snapshot(),savedPose=[...first.userData.mesh.geometry.attributes.position.array],savedNormals=[...first.userData.mesh.geometry.attributes.normal.array];
    const sibling=second.userData.animator.snapshot(),siblingPose=[...second.userData.mesh.geometry.attributes.position.array],uv=[...template.geometry.attributes.uv.array],index=[...template.geometry.index.array];
    animator.play('start');animator.update(.3);assert.ok(animator.restore(saved));
    assert.deepEqual(animator.snapshot(),saved);assert.deepEqual([...first.userData.mesh.geometry.attributes.position.array],savedPose);
    assert.deepEqual([...first.userData.mesh.geometry.attributes.normal.array],savedNormals);
    assert.deepEqual(second.userData.animator.snapshot(),sibling);assert.deepEqual([...second.userData.mesh.geometry.attributes.position.array],siblingPose);
    assert.deepEqual([...template.geometry.attributes.uv.array],uv);assert.deepEqual([...template.geometry.index.array],index);
  }finally{dispose();}
});

function gpuFixture() {
  const removed=[],buffers=new Set(),released=[],attributes={remove:attribute=>{removed.push(attribute);buffers.delete(attribute);},update:attribute=>buffers.add(attribute)};
  const info={memory:{geometries:0}},manager=WebGLGeometries({ARRAY_BUFFER:34962},attributes,info,{releaseStatesOfGeometry:geometry=>released.push(geometry)});
  const upload=geometry=>{manager.get(null,geometry);manager.update(geometry);if(geometry.index)attributes.update(geometry.index);};
  return {removed,buffers,released,info,upload};
}

test('actual Three geometry disposal never removes sibling GPU handles that share immutable CPU arrays',()=>{
  const {make,dispose}=fixture('knight'),a=make().userData.mesh.geometry,b=make().userData.mesh.geometry,gpu=gpuFixture();
  try {
    gpu.upload(a);gpu.upload(b);assert.equal(gpu.info.memory.geometries,2);const sharedUV=b.attributes.uv.array,sharedIndex=b.index.array;
    a.dispose();assert.equal(gpu.info.memory.geometries,1);
    for(const attribute of [...Object.values(b.attributes),b.index])assert.ok(gpu.buffers.has(attribute));
    assert.ok(!gpu.removed.includes(b.attributes.uv)&&!gpu.removed.includes(b.index));assert.deepEqual(gpu.released,[a]);
    gpu.upload(a);assert.equal(gpu.info.memory.geometries,2);assert.equal(a.attributes.uv.array,sharedUV);assert.equal(a.index.array,sharedIndex);
    assert.ok(gpu.buffers.has(b.attributes.uv)&&gpu.buffers.has(b.index));
    a.dispose();b.dispose();assert.equal(gpu.buffers.size,0);assert.equal(gpu.info.memory.geometries,0);
  }finally{dispose();}
});

test('room residency eviction and re-entry preserve sibling buffers, shared maps and separate gameplay visibility',()=>{
  const {map,make,dispose}=fixture('knight'),first=make(),second=make(),a=first.userData.mesh,b=second.userData.mesh,gpu=gpuFixture(),scene=new THREE.Scene();
  first.position.set(-100,0,-200);second.position.set(100,0,-200);scene.add(first,second);
  const camera=new THREE.PerspectiveCamera(65,1,1,10000);camera.lookAt(0,0,-1);
  let both=false,mapDisposals=0;map.addEventListener('dispose',()=>mapDisposals++);
  const residency=new ActorRenderResidency({scene,nearDistance:576,viewDistance:2048,boundsAllowed:box=>both||box.min.x>0});
  try {
    gpu.upload(a.geometry);gpu.upload(b.geometry);const immutable=a.geometry.attributes.uv.array;
    residency.update([first,second],camera,0);assert.equal(residency.isResident(first),false);assert.equal(residency.isResident(second),true);
    assert.equal(first.visible,true);assert.equal(second.visible,true);assert.equal(first.userData.mesh.layers.mask,0);
    assert.equal(mapDisposals,0);assert.ok(gpu.buffers.has(b.geometry.attributes.uv)&&gpu.buffers.has(b.geometry.index));
    both=true;residency.update([first,second],camera,1);gpu.upload(a.geometry);
    assert.equal(residency.isResident(first),true);assert.equal(residency.isRendered(first),true);assert.equal(a.geometry.attributes.uv.array,immutable);
    assert.equal(mapDisposals,0);assert.equal(residency.resources.get(map).resident,2);assert.equal(residency.resources.get(map).owners,2);
    first.visible=false;residency.update([first,second],camera,2);assert.equal(residency.isRendered(second),true);assert.equal(mapDisposals,0);
  }finally{residency.dispose();dispose();}
});

test('pose cloning preserves groups and bounds, while unfamiliar or morph geometry keeps independent fallback arrays',()=>{
  const {template,dispose}=fixture('knight');let clone,morphClone,unfamiliarClone;
  try {
    template.geometry.setDrawRange(3,30);clone=cloneActorPoseGeometry(template.geometry);
    assert.deepEqual(clone.groups,template.geometry.groups);assert.ok(clone.groups.every((group,i)=>group!==template.geometry.groups[i]));
    assert.deepEqual(clone.drawRange,{start:3,count:30});assert.notEqual(clone.boundingBox,template.geometry.boundingBox);assert.ok(clone.boundingBox.equals(template.geometry.boundingBox));
    assert.notEqual(clone.boundingSphere,template.geometry.boundingSphere);clone.boundingBox.min.x-=100;assert.ok(!clone.boundingBox.equals(template.geometry.boundingBox));
    template.geometry.morphAttributes.position=[template.geometry.attributes.position.clone()];morphClone=cloneActorPoseGeometry(template.geometry);
    assert.notEqual(morphClone.attributes.uv.array,template.geometry.attributes.uv.array);assert.notEqual(morphClone.index.array,template.geometry.index.array);
    const unfamiliar=new THREE.BoxGeometry();unfamiliarClone=cloneActorPoseGeometry(unfamiliar);assert.notEqual(unfamiliarClone.attributes.uv.array,unfamiliar.attributes.uv.array);unfamiliar.dispose();
  }finally{clone?.dispose();morphClone?.dispose();unfamiliarClone?.dispose();dispose();}
});
