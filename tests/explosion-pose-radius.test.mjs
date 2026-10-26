import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator} from '../source/animation.js';
import {CastleWorld} from '../source/world.js';
import {Gameplay} from '../source/gameplay.js';
import {explosionBoxDamage} from '../source/explosion-damage.js';

const actors=new URL('../assets/actors/',import.meta.url);
const load=name=>JSON.parse(fs.readFileSync(new URL(name+'.json',actors)));
function makeAnimator(data) {
  const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  if(data.normals)geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
  const animator=new ActorAnimator(data,geometry);animator.deferGeometry=true;
  return {animator,geometry};
}
function verifyCurrentRadius(animator,geometry) {
  const snapshot=animator.snapshot(),version=geometry.attributes.position.version,pending=animator.geometryPending;
  const radius=animator.conservativePoseRadius();
  assert.ok(Number.isFinite(radius));assert.equal(animator.geometryPending,pending);assert.equal(geometry.attributes.position.version,version);
  assert.deepEqual(animator.snapshot(),snapshot);assert.equal(animator.conservativePoseRadius(),radius);
  animator.flushGeometry();
  const points=geometry.attributes.position.array;
  for(let i=0;i<points.length;i+=3)assert.ok(Math.hypot(points[i],points[i+1],points[i+2])<=radius);
  const box=geometry.boundingBox;
  const oldRadius=Math.sqrt(3)*Math.hypot(Math.max(Math.abs(box.min.x),Math.abs(box.max.x)),Math.max(Math.abs(box.min.y),Math.abs(box.max.y)),Math.max(Math.abs(box.min.z),Math.abs(box.max.z)));
  assert.ok(3*radius>=oldRadius,'the fast radius encloses the existing box-based rejection sphere');
}

test('current-pose radii enclose all original actor clips and transition poses without skinning vertices',()=>{
  let actorCount=0,clipCount=0;
  for(const file of fs.readdirSync(actors).filter(name=>name.endsWith('.json'))) {
    const data=JSON.parse(fs.readFileSync(new URL(file,actors)));if(!data.animations?.length)continue;
    const {animator,geometry}=makeAnimator(data);animator.transitionDuration=.25;actorCount++;
    const second=makeAnimator(data);assert.equal(animator.localBoneRadii,second.animator.localBoneRadii,'instances share immutable local radii');second.geometry.dispose();
    for(const clip of data.animations) {
      clipCount++;animator.play(clip.name,false,true);
      for(const fraction of [0,.125,.5,.875,1]) {
        animator.time=clip.duration*fraction;animator.update(0,.06);verifyCurrentRadius(animator,geometry);
      }
    }
    geometry.dispose();
  }
  assert.ok(actorCount>=40);assert.ok(clipCount>=170);
});

test('unbound vertices, scaled/sheared bones and unsupported geometry retain conservative behavior',()=>{
  const data={bones:[{name:'root',parent:-1,attachment:[2,1,0,0,3,.5,1,0,.1,100,-20,3]}],
    localPositions:[500,0,0,10,20,30],positions:[500,0,0,10,20,30],joints:[-1,0],animations:[{name:'idle',duration:1,tracks:[]}]};
  const {animator,geometry}=makeAnimator(data);animator.play('idle');verifyCurrentRadius(animator,geometry);
  geometry.morphAttributes.position=[geometry.attributes.position.clone()];assert.equal(animator.conservativePoseRadius(),Infinity);
  delete geometry.morphAttributes.position;
  geometry.setAttribute('position',new THREE.BufferAttribute(new Float64Array(data.positions),3));assert.equal(animator.conservativePoseRadius(),Infinity);
  geometry.dispose();
});

function target() {
  const data=load('frog'),{animator,geometry}=makeAnimator(data),actor=new THREE.Group(),mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial());
  actor.add(mesh);actor.userData.mesh=mesh;actor.userData.animator=animator;actor.userData.template={data};mesh.scale.set(1.2,.9,1.1);mesh.rotation.x=-Math.PI/2;mesh.position.set(5,3,-2);
  const game=new Gameplay({id:'radius-test',entities:[{classname:'MovingEnemy','%name%':'target',Origin:'50 0 80',Type:'5'}]},{deferInit:true}),object=game.objects[0];
  actor.position.fromArray(object.position);CastleWorld.prototype.configureExplosionTarget.call({gameplay:game},object,actor);
  animator.play(data.animations[0].name,false);animator.update(.1);
  return {actor,animator,geometry,game,object,data};
}

test('distant pending actors are rejected without skinning, while nearby targets retain exact geometry',()=>{
  const {animator,geometry,object}=target(),original=animator.flushGeometry.bind(animator);let flushes=0;
  animator.flushGeometry=()=>{flushes++;return original();};
  assert.equal(object.explosionMayReach({position:[1e7,1e7,1e7],radius:175}),false);assert.equal(flushes,0);assert.equal(animator.geometryPending,true);
  assert.equal(object.explosionMayReach({position:[50,0,80],radius:175}),true);assert.equal(flushes,1);assert.equal(animator.geometryPending,false);
  geometry.dispose();
});

test('several blast cells reuse one current-pose radius until bones are actually resampled',()=>{
  const {animator,geometry}=target(),hypot=Math.hypot;let calls=0;
  Math.hypot=(...args)=>{calls++;return hypot(...args);};
  try {
    const first=animator.conservativePoseRadius(),initialCalls=calls;assert.ok(initialCalls>0);
    for(let i=0;i<14;i++)assert.equal(animator.conservativePoseRadius(),first);
    assert.equal(calls,initialCalls);assert.equal(animator.geometryPending,true);
    animator.update(.1);animator.flushPose();
    const second=animator.conservativePoseRadius(),afterNewPose=calls;assert.ok(afterNewPose>initialCalls);
    for(let i=0;i<14;i++)assert.equal(animator.conservativePoseRadius(),second);
    assert.equal(calls,afterNewPose);assert.equal(animator.geometryPending,true);
  } finally {Math.hypot=hypot;geometry.dispose();}
});

test('moving explosion targets keep identical reach decisions and exact damage through all current poses',()=>{
  const optimized=target(),reference=target();reference.animator.conservativePoseRadius=()=>Infinity;
  let seed=0x17a6934;
  const random=()=>((seed=(Math.imul(seed,1664525)+1013904223)>>>0)/4294967296);
  for(const clip of optimized.data.animations)for(let i=0;i<40;i++) {
    const time=clip.duration*random(),position=[(random()-.5)*2000,(random()-.5)*1000,(random()-.5)*2000],cell={position,radius:175,rate:46.875};
    const yaw=random()*Math.PI*2;
    for(const scene of [optimized,reference]) {
      scene.game.time+=.01;scene.object.yaw=yaw;scene.animator.play(clip.name,false);scene.animator.time=time;scene.animator.update(0);
    }
    const reach=optimized.object.explosionMayReach(cell),oldReach=reference.object.explosionMayReach(cell);
    assert.equal(reach,oldReach);
    if(reach)assert.equal(explosionBoxDamage(cell,optimized.object.explosionBounds(),.01,()=>true),explosionBoxDamage(cell,reference.object.explosionBounds(),.01,()=>true));
  }
  optimized.geometry.dispose();reference.geometry.dispose();
});
