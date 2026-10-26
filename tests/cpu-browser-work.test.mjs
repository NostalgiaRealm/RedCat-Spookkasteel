import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {CastleWorld} from '../source/world.js';
import {ActorAnimator} from '../source/animation.js';
import {triangleCollider,traceActors} from '../source/actor-collision.js';
import {BeamBatch,BillboardBatch} from '../source/world-effects.js';
import {actorOrientation} from '../source/actor-placement.js';

function eagerRecord(mesh){
  mesh.updateWorldMatrix(true,false);
  const positions=mesh.geometry.attributes.position,index=mesh.geometry.index,vertices=[],triangles=[];
  for(let i=0;i<positions.count;i++)vertices.push(new THREE.Vector3().fromBufferAttribute(positions,i).applyMatrix4(mesh.matrixWorld).toArray());
  for(let i=0;i<(index?.count||positions.count);i+=3){const triangle=triangleCollider([0,1,2].map(j=>vertices[index?index.getX(i+j):i+j]));if(triangle)triangles.push(triangle);}
  return {id:'prop',blocksPlayer:true,canBeShot:true,blocksLOS:false,triangles,min:[0,1,2].map(i=>Math.min(...vertices.map(p=>p[i]))),max:[0,1,2].map(i=>Math.max(...vertices.map(p=>p[i])))};
}
const trace=(actors,a,b,mask='blocksPlayer')=>traceActors(actors,a,b,[-2,-3,-4],[2,3,4],{fraction:1,startSolid:false,normal:[0,1,0],modelIndex:null},mask);
test('lazy actor triangles match eager sweeps through rotated, moving and newly animated props',()=>{
  const geometry=new THREE.BoxGeometry(14,30,9),mesh=new THREE.Mesh(geometry),actor=new THREE.Group();actor.add(mesh);actor.userData.mesh=mesh;
  const object={id:'prop',kind:'actor',health:1,enabled:true},world={gameplay:{time:0}},flags={blocksPlayer:true,canBeShot:true,blocksLOS:false};
  try{
    for(let frame=0;frame<30;frame++){
      actor.position.set(frame*2,5,10);actor.rotation.set(frame*.03,frame*.11,frame*.07);mesh.scale.set(.7+frame*.02,1.3,.8);
      const position=geometry.attributes.position;position.setX(0,position.getX(0)+.1);position.needsUpdate=true;geometry.computeBoundingBox();
      const record=CastleWorld.prototype.actorCollisionRecord.call(world,object,actor,flags),reference=eagerRecord(mesh);
      assert.equal(record.dirty,true);
      assert.equal(trace([record],[10000,0,0],[10010,0,0]).fraction,1);assert.equal(record.dirty,true,'distant sweeps must not prepare triangles');
      assert.equal(trace([record],[0,0,0],[100,0,0],'blocksLOS').fraction,1);assert.equal(record.dirty,true,'irrelevant masks must not prepare triangles');
      for(let i=0;i<12;i++){
        const a=[frame*2-40,i*4-20,10],b=[frame*2+40,20-i*2,10+i];
        assert.deepEqual(trace([record],a,b),trace([reference],a,b));
      }
      assert.deepEqual(record.triangles,reference.triangles);assert.deepEqual(record.min,reference.min);assert.deepEqual(record.max,reference.max);
      const same=record.triangles;CastleWorld.prototype.actorCollisionRecord.call(world,object,actor,flags);assert.equal(record.triangles,same);
      object.visible=false;assert.equal(trace([record],[frame*2-40,5,10],[frame*2+40,5,10]).fraction,1);object.visible=true;
    }
  }finally{geometry.dispose();mesh.material.dispose();}
});

test('effect batches upload only live vertices/instances through growth, shrinking and empty frames',()=>{
  const world={scene:new THREE.Scene(),track:r=>r},beams=new BeamBatch(world,null,512),sprites=new BillboardBatch(world,null,false,8192);
  try{
    for(const count of [1,20,3,0,7]){
      beams.count=0;sprites.count=0;
      for(let i=0;i<count;i++){beams.addDisc([i,0,0],5,[1,.2,.3],.8);sprites.add([i,0,0],5,7,[1,1,1],1);}
      for(const [batch,multiplier,names] of [[beams,6,['positions','colors','uvs']],[sprites,1,['positions','sizes','colors','rotations','diagonalScales','nativeSpouts']]]){
        const versions=names.map(name=>batch[name].version);batch.flush();assert.equal(batch.mesh.visible,count>0);
        for(let i=0;i<names.length;i++){
          const attribute=batch[names[i]];assert.equal(attribute.version,versions[i]+Number(count>0));
          if(count)assert.deepEqual(attribute.updateRanges,[{start:0,count:count*multiplier*attribute.itemSize}]);
        }
      }
    }
  }finally{for(const b of [beams,sprites]){b.mesh.geometry.dispose();b.mesh.material.dispose();}}
});

test('sprite culling rejects distant artwork while retaining large, rotated, expanded and native spout edges',()=>{
  const value=new BillboardBatch({scene:new THREE.Scene(),track:r=>r},null),camera=new THREE.OrthographicCamera(-1,1,1,-1,1,10);
  camera.updateMatrixWorld();value.frustum=new THREE.Frustum().setFromProjectionMatrix(new THREE.Matrix4().multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
  try{
    value.add([100,0,-5],1,1,[1,1,1],1);value.add([0,0,50],1,1,[1,1,1],1);assert.equal(value.count,0);
    value.add([0,0,-5],1,1,[1,1,1],1);assert.equal(value.count,1);
    value.add([100,0,-5],300,300,[1,1,1],1,.7);assert.equal(value.count,2,'large distant sprites can remain visible');
    value.add([3,0,-5],1,1,[1,1,1],1,.4,[4,4]);assert.equal(value.count,3,'diagonal scale expands the bounds');
    value.add([1.5,0,-5],0,0,[1,1,1],1);assert.equal(value.count,3);
    value.add([1.5,0,-5],0,0,[1,1,1],1,0,null,1);assert.equal(value.count,4,'native half-unit corner offset remains visible');
  }finally{value.mesh.geometry.dispose();value.mesh.material.dispose();}
});

test('deferred skinning preserves live bone transforms, transitions, save state and exact later vertices',()=>{
  for(const file of ['zombie','spider','knight','maxj','witch','redcat']){
    const data=JSON.parse(readFileSync(new URL(`../assets/actors/${file}.json`,import.meta.url)));
    const make=()=>{const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));return new ActorAnimator(data,geometry);};
    const eager=make(),deferred=make();deferred.deferGeometry=true;eager.transitionDuration=deferred.transitionDuration=.25;
    try{
      for(let frame=0;frame<90;frame++){
        if(frame%13===0){const clip=data.animations[Math.floor(frame/13)%data.animations.length];eager.play(clip.name,true,true);deferred.play(clip.name,true,true);}
        eager.update(1/60);deferred.update(1/60);
        assert.deepEqual(deferred.transforms,eager.transforms);assert.deepEqual(deferred.snapshot(),eager.snapshot());
        if(frame%17===0||frame===89){
          deferred.flushGeometry();assert.deepEqual(deferred.geometry.attributes.position.array,eager.geometry.attributes.position.array);assert.deepEqual(deferred.geometry.attributes.normal.array,eager.geometry.attributes.normal.array);
          assert.deepEqual(deferred.geometry.boundingBox,eager.geometry.boundingBox);assert.deepEqual(deferred.geometry.boundingSphere,eager.geometry.boundingSphere);
        }
      }
      assert.ok(deferred.geometry.attributes.position.version<eager.geometry.attributes.position.version/5);
    }finally{eager.geometry.dispose();deferred.geometry.dispose();}
  }
});

test('camera re-entry and hidden collision queries resolve the current pose without advancing its clock',()=>{
  const data=JSON.parse(readFileSync(new URL('../assets/actors/zombie.json',import.meta.url)));
  const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));geometry.setIndex(data.indices);
  const animator=new ActorAnimator(data,geometry),mesh=new THREE.Mesh(geometry),actor=new THREE.Group();actor.add(mesh);actor.userData={mesh,animator,template:{data}};
  animator.deferGeometry=true;animator.play('walkfw');animator.update(.37);
  const clock=animator.snapshot();assert.equal(animator.posePending,true);assert.equal(animator.geometryPending,true);
  let rendered=false;
  const world={actorInstances:new Map([['zombie',actor]]),bossMachines:new Map(),camera:new THREE.PerspectiveCamera(),geometryStream:{update(){}},actorResidency:{update(){rendered=true;},isRendered:()=>rendered},gameplay:{time:1}};
  try{
    CastleWorld.prototype.updateRenderResidency.call(world);assert.equal(animator.geometryPending,false);assert.deepEqual(animator.snapshot(),clock);
    const version=geometry.attributes.position.version;animator.update(.17);assert.equal(animator.geometryPending,true);
    CastleWorld.prototype.actorCollisionRecord.call(world,{id:'zombie',kind:'enemy',health:6,enabled:true},actor,{canBeShot:true});
    assert.equal(animator.geometryPending,false);assert.equal(geometry.attributes.position.version,version+1);assert.ok(geometry.boundingBox.isBox3);
  }finally{geometry.dispose();mesh.material.dispose();}
});

test('a disabled animator retains its last evaluated pose even if a new clip is selected before skinning',()=>{
  const data=JSON.parse(readFileSync(new URL('../assets/actors/zombie.json',import.meta.url)));
  const make=()=>{const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));return new ActorAnimator(data,geometry);};
  const eager=make(),deferred=make();deferred.deferGeometry=true;
  try{
    for(const a of [eager,deferred]){a.play('walkfw');a.update(.4);a.enabled=false;a.play('idle');}
    deferred.flushGeometry();assert.deepEqual(deferred.geometry.attributes.position.array,eager.geometry.attributes.position.array);assert.deepEqual(deferred.transforms,eager.transforms);
  }finally{eager.geometry.dispose();deferred.geometry.dispose();}
});

test('orientation cache follows authored/runtime turns, rotating pickups, moving supports and independent callers',()=>{
  const object={entity:{RotateX:'20',RotateY:'-40',RotateZ:'7'},actorAge:0},settings={rotationDegreesPerSecond:[0,0,0]},pose={rotation:[0,0,0,1]};
  const reference=()=>{
    const {entity,actorAge:age=0}=object,radians=Math.PI/180,q=new THREE.Quaternion().setFromEuler(new THREE.Euler(...['X','Y','Z'].map(axis=>Number(entity['Rotate'+axis]||0)*radians),'ZYX'));
    if(object.rotation)q.premultiply(new THREE.Quaternion().setFromEuler(new THREE.Euler(...object.rotation,'ZYX')));
    q.premultiply(new THREE.Quaternion().setFromEuler(new THREE.Euler(...settings.rotationDegreesPerSecond.map(v=>v*radians*age),'ZYX')));
    return q.premultiply(new THREE.Quaternion(...pose.rotation));
  };
  for(let i=0;i<35;i++){
    object.actorAge=i;if(i===4)object.entity.RotateX='45';if(i===8)object.rotation=[.2,.4,.1];if(i===12)settings.rotationDegreesPerSecond[1]=60;if(i===16)object.rotation[0]=.7;
    if(i===22)pose.rotation=new THREE.Quaternion().setFromAxisAngle(new THREE.Vector3(0,1,0),.7).toArray();
    const a=actorOrientation(object,settings,pose);assert.deepEqual(a,reference());a.set(0,0,0,1);assert.deepEqual(actorOrientation(object,settings,pose),reference());
  }
});
