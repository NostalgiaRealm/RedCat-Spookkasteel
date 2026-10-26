import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator} from '../source/animation.js';
import {CastleWorld} from '../source/world.js';
import {traceActors} from '../source/actor-collision.js';
import {ActorRenderResidency} from '../source/actor-render-residency.js';

const flags={blocksPlayer:true,canBeShot:true,blocksLOS:false};
function fixture(file,deferred){
  const data=JSON.parse(readFileSync(new URL(`../assets/actors/${file}.json`,import.meta.url)));
  const geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
  geometry.setIndex(data.indices);
  const animator=new ActorAnimator(data,geometry);animator.deferGeometry=deferred;animator.transitionDuration=.25;
  const mesh=new THREE.Mesh(geometry),actor=new THREE.Group();actor.add(mesh);
  actor.userData={mesh,animator,template:{data}};
  const object={id:'prop',kind:'actor',health:1,enabled:true,visible:true,position:[0,0,0],entity:{},modelIndex:7};
  const world=Object.create(CastleWorld.prototype);
  Object.assign(world,{collider:{actors:[]},gameplay:{time:0,objects:[object],level:{id:'test'},modelObjects:new Map(),scripts:{modelTransforms:new Map()}},
    actorInstances:new Map([['prop',actor]]),bossMachines:new Map(),actorObjectPairs:[[object,actor]],updateEnemyDebris(){}});
  return {data,geometry,animator,mesh,actor,object,world,dispose(){geometry.dispose();mesh.material.dispose();}};
}
const trace=(world,a,b,mask='blocksPlayer',mins=[-2,-3,-4],maxs=[2,3,4])=>
  traceActors(world.collider.actors,a,b,mins,maxs,{fraction:1,startSolid:false,normal:[0,1,0],modelIndex:null},mask);

test('deferred native prop collision matches eager current-pose triangles through motion and transitions',()=>{
  for(const file of ['htorch','graveskl','spiderweb','wkkooi','maxd','witch','fleuribloem','redcat','stnwitch']){
    const a=fixture(file,true),b=fixture(file,false);
    try{
      for(let frame=0;frame<12;frame++){
        for(const f of [a,b]){
          if(frame%4===0)f.animator.play(f.data.animations[Math.floor(frame/4)%f.data.animations.length].name,true,true);
          f.animator.update(.037);
          f.actor.position.set(frame*150,45-frame*11,frame*37);
          f.actor.rotation.set(frame*.13,frame*.21,frame*.07);
          f.mesh.rotation.set(.4,-.2,.15);f.mesh.scale.set(.7+frame*.02,1.3,.8);
          f.world.registerActorCollision(f.object,f.actor,flags);
        }
        assert.equal(a.animator.geometryPending,true,`${file}: registration must not skin`);
        const version=a.geometry.attributes.position.version,clock=a.animator.snapshot();
        assert.equal(trace(a.world,[100000,0,0],[100001,0,0]).fraction,1);
        assert.equal(trace(a.world,[0,0,0],[2000,0,0],'blocksLOS').fraction,1);
        assert.equal(a.geometry.attributes.position.version,version);
        const p=a.actor.position.toArray();
        for(let i=0;i<8;i++){
          const start=[p[0]-400,p[1]+i*9-25,p[2]-30],end=[p[0]+400,p[1]+20-i*4,p[2]+30];
          assert.deepEqual(trace(a.world,start,end),trace(b.world,start,end),`${file} frame ${frame} sweep ${i}`);
        }
        // A long sight ray uses the complete candidate list when grid traversal
        // would be too large. It must still see the current posed triangles.
        assert.deepEqual(trace(a.world,[p[0]-100000,p[1],p[2]],[p[0]+100000,p[1],p[2]],'canBeShot',[0,0,0],[0,0,0]),
          trace(b.world,[p[0]-100000,p[1],p[2]],[p[0]+100000,p[1],p[2]],'canBeShot',[0,0,0],[0,0,0]));
        const lazy=a.actor.userData.collisionRecord,eager=b.actor.userData.collisionRecord;
        assert.deepEqual(lazy.triangles,eager.triangles);assert.deepEqual(lazy.min,eager.min);assert.deepEqual(lazy.max,eager.max);
        assert.equal(a.animator.geometryPending,false);assert.deepEqual(a.animator.snapshot(),clock);
      }
    }finally{a.dispose();b.dispose();}
  }
});

test('masked, ignored, hidden and carried props retain deferred geometry until an exact query needs it',()=>{
  const f=fixture('htorch',true);
  try{
    f.animator.play(f.data.animations[0].name);f.animator.update(.21);
    f.world.registerActorCollision(f.object,f.actor,flags);
    const a=[-10000,0,0],b=[10000,0,0],version=f.geometry.attributes.position.version;
    for(const mask of ['blocksLOS',{mask:'blocksPlayer',ignoreId:'prop'},{mask:'blocksPlayer',ignoreSupportModelIndex:7}]){
      assert.equal(trace(f.world,a,b,mask).fraction,1);assert.equal(f.animator.geometryPending,true);
    }
    f.object.visible=false;assert.equal(trace(f.world,a,b).fraction,1);assert.equal(f.animator.geometryPending,true);f.object.visible=true;
    f.world.gameplay.modelObjects.set(7,[{kind:'controller',visible:false,health:1}]);
    assert.equal(trace(f.world,a,b).fraction,1);assert.equal(f.animator.geometryPending,true);
    f.world.gameplay.modelObjects.clear();
    assert.equal(f.geometry.attributes.position.version,version);
    trace(f.world,a,b);assert.equal(f.animator.geometryPending,false);
  }finally{f.dispose();}
});

test('off-screen generic props retain current animation clocks and exact collision at any distance',()=>{
  const a=fixture('htorch',true),b=fixture('htorch',false);
  try{
    for(const f of [a,b]){f.animator.play(f.data.animations[0].name);f.world.registerActorCollision(f.object,f.actor,flags);}
    a.world.actorResidency={isRendered:()=>false};b.world.actorResidency={isRendered:()=>true};
    for(let i=0;i<25;i++){
      for(const f of [a,b]){f.object.position=[5000+i*300,0,0];f.world.gameplay.time=i*.1;f.world.syncActors(.1);}
      assert.equal(a.animator.geometryPending,true);assert.deepEqual(a.animator.snapshot(),b.animator.snapshot());
      assert.deepEqual(a.animator.transforms,b.animator.transforms);
      const p=a.object.position;
      assert.deepEqual(trace(a.world,[p[0]-200,p[1],p[2]],[p[0]+200,p[1],p[2]]),
        trace(b.world,[p[0]-200,p[1],p[2]],[p[0]+200,p[1],p[2]]));
    }
  }finally{a.dispose();b.dispose();}
});

test('parked and GPU-released mounted props remain exact remote collision surfaces after scripted motion',()=>{
  const a=fixture('htorch',true),b=fixture('htorch',false),camera=new THREE.PerspectiveCamera(60,1,1,15000);
  camera.lookAt(0,0,-1);
  try{
    for(const f of [a,b]){
      f.world.scene=new THREE.Scene();f.world.scene.position.set(15,-8,11);f.world.scene.rotation.y=.15;
      f.world.scene.add(f.actor);f.mesh.userData.actorLighting={bounds:new THREE.Box3().setFromBufferAttribute(f.geometry.attributes.position)};
      f.object.position=[10000,0,0];f.actor.position.fromArray(f.object.position);
      f.world.gameplay.objectPosition=object=>object.position;
      f.world.mountedActorPairs=[[f.object,f.actor]];
      f.animator.play(f.data.animations[0].name);f.world.registerActorCollision(f.object,f.actor,flags);
    }
    const residency=new ActorRenderResidency({scene:a.world.scene,nearDistance:768,retainDistance:1152,viewDistance:2048});
    a.world.actorResidency=residency;residency.update([a.actor],camera,0);
    assert.equal(a.actor.parent,residency.parking);assert.equal(residency.isResident(a.actor),false);
    assert.equal(a.geometry.attributes.position.count,a.data.positions.length/3,'GPU disposal retains exact CPU vertices');
    for(let frame=0;frame<6;frame++){
      for(const f of [a,b]){
        f.world.gameplay.time=frame*.13;f.world.syncActors(.13);
        f.object.position=[10000-frame*175,frame*23,frame*77];
        f.world.gameplay.scripts.modelTransforms.set(7,{rotation:new THREE.Quaternion().setFromEuler(new THREE.Euler(.1*frame,.3*frame,0)).toArray()});
        f.world.syncMountedActorCollisions();
      }
      assert.equal(a.animator.geometryPending,true);
      const center=new THREE.Vector3().setFromMatrixPosition(a.mesh.matrixWorld),p=center.toArray();
      assert.deepEqual(trace(a.world,[p[0]-500,p[1],p[2]],[p[0]+500,p[1],p[2]],'canBeShot'),
        trace(b.world,[p[0]-500,p[1],p[2]],[p[0]+500,p[1],p[2]],'canBeShot'));
      assert.deepEqual(a.actor.userData.collisionRecord.triangles,b.actor.userData.collisionRecord.triangles);
      assert.deepEqual(a.animator.snapshot(),b.animator.snapshot());
      assert.equal(a.actor.parent,residency.parking,'remote gameplay queries do not restore render residency');
    }
    residency.dispose();
  }finally{a.dispose();b.dispose();}
});

test('unchanged off-screen prop envelopes reuse collision bounds without evaluating bones or skinning vertices',()=>{
  const f=fixture('htorch',true);
  try{
    f.animator.play(f.data.animations[0].name);f.world.registerActorCollision(f.object,f.actor,flags);
    const record=f.actor.userData.collisionRecord,min=record.broadphaseMin,max=record.broadphaseMax,matrix=record.matrix;
    const version=f.geometry.attributes.position.version;
    for(let frame=0;frame<100;frame++){
      f.animator.update(.013);f.world.registerActorCollision(f.object,f.actor,flags);
      assert.equal(f.animator.posePending,true);assert.equal(f.animator.geometryPending,true);
      assert.equal(record.broadphaseMin,min);assert.equal(record.broadphaseMax,max);assert.equal(record.matrix,matrix);
      assert.equal(f.geometry.attributes.position.version,version);
    }
    assert.equal(trace(f.world,[-1000,0,0],[1000,0,0]).fraction<1,true);
    assert.equal(f.animator.geometryPending,false);
  }finally{f.dispose();}
});
