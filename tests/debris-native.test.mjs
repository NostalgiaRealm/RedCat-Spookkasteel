import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {createNativeDebris,debrisCollisionBounds,reflectDebrisVelocity,stepNativeDebris,rotateNativeDebris} from '../src/debris-native.js';
import {DestructibleEffects} from '../src/destructible-effects.js';

const base={Gravity:9.8,MustFade:1,TestCollision:1,MustRotate:1,RotationSpeed:100,SizeX:15,SizeY:15,SizeZ:15,FloorOffset:5,MinLifeTimeSeconds:3,MaxLifeTimeSeconds:4,Elasticity:1.6,Friction:.8,AirFriction:1};
const effect={id:'native-fragments',position:[100,50,200],bounds:{min:[-20,-10,-30],max:[20,10,30]},settings:{debris:{...base,types:[{actor:'BROK1.ACT',MinNr:40,MaxNr:40,MinVelocity:200,MaxVelocity:250}]}}};
const close=(actual,expected)=>assert.ok(Math.abs(actual-expected)<1e-8,`${actual} != ${expected}`);
function particle(conf={}){return createNativeDebris({...effect,settings:{debris:{...effect.settings.debris,...conf}}})[0];}

test('native fragments originate throughout the source bounds and launch in its steep upward cone',()=>{
  const particles=createNativeDebris(effect);
  assert.equal(particles.length,40);assert.deepEqual(particles,createNativeDebris(effect));
  for(const p of particles){
    const speed=Math.hypot(...p.velocity);assert.ok(speed>=200&&speed<250);
    assert.ok(p.velocity[1]/speed>=50/Math.hypot(30,50,30));
    for(let axis=0;axis<3;axis++)assert.ok(p.position[axis]>=effect.position[axis]+effect.bounds.min[axis]&&p.position[axis]<effect.position[axis]+effect.bounds.max[axis]);
    assert.ok(p.angularVelocity.every(v=>Math.abs(v)>=2.5132741928100586*3&&Math.abs(v)<Math.PI*3));
    assert.ok(p.life>=3&&p.life<4);
  }
  assert.ok(new Set(particles.map(p=>p.position.join(','))).size>35);
});

test('fragment INI owns lifetime, collision dimensions and physics, independent of the destroyed parent',()=>{
  const own={...base,Gravity:2,FloorOffset:7,SizeX:20,SizeY:30,SizeZ:40,MinLifeTimeSeconds:5,MaxLifeTimeSeconds:5};
  const [p]=createNativeDebris(effect,name=>{assert.equal(name,'brok1');return{debris:own};});
  assert.equal(p.conf,own);assert.equal(p.life,5);
  assert.deepEqual(p.bounds,{min:[-3.2,-2.24,-6.4],max:[3.2,9.6,6.4]});
  for(const name of ['brok1','brcrate_s1']){
    const data=JSON.parse(readFileSync(new URL(`../assets/actors/${name}.json`,import.meta.url)));
    assert.deepEqual(debrisCollisionBounds(data.settings.debris),{min:[-2.4,-1.6,-2.4],max:[2.4,4.8,2.4]});
  }
});

test('semi-implicit gravity, linear air drag and velocity-scaled spin use recovered units',()=>{
  const p=particle({AirFriction:.5});p.position=[0,0,0];p.velocity=[100,100,0];p.rotation=[0,0,0];p.angularVelocity=[8,-9,7];
  stepNativeDebris(p,.1);
  close(p.velocity[0],95);close(p.velocity[1],(100-9.8*32*.1)*.95);
  close(p.position[1],p.velocity[1]*.1);
  close(p.rotation[0],8*Math.hypot(100,100)*.005*.1);
  assert.equal(p.opacity,1);
});

test('native normalized reflection applies friction and removes grazing components before restoring speed',()=>{
  const reflected=reflectDebrisVelocity([100,-100,0],[0,1,0],1.6,.8);
  close(reflected[0],80);close(reflected[1],48);
  const grazing=reflectDebrisVelocity([.5,-100,0],[0,1,0],1.6,.8);
  assert.equal(grazing[0],0);close(grazing[1],48);
});

test('spin composes world X/Y/Z rotations instead of accumulating Euler angles',()=>{
  const angles=[.3,-.7,.8],initial=new THREE.Quaternion().setFromAxisAngle(new THREE.Vector3(0,1,0),.5);
  const expected=new THREE.Matrix4().makeRotationFromQuaternion(initial);
  for(const rotation of [new THREE.Matrix4().makeRotationX(angles[0]),new THREE.Matrix4().makeRotationY(angles[1]),new THREE.Matrix4().makeRotationZ(angles[2])])expected.premultiply(rotation);
  const actual=new THREE.Matrix4().makeRotationFromQuaternion(new THREE.Quaternion().fromArray(rotateNativeDebris(initial.toArray(),angles)));
  for(let i=0;i<16;i++)close(actual.elements[i],expected.elements[i]);
});

test('fragments remain opaque while flying and begin a two-second fade only after settling',()=>{
  const p=particle({Gravity:0});p.age=p.life-.5;p.velocity=[0,1,0];
  assert.equal(stepNativeDebris(p,.1),true);assert.equal(p.opacity,1);assert.equal(p.settled,false);
  p.contacts=11;
  assert.equal(stepNativeDebris(p,.1),true);assert.equal(p.settled,true);assert.equal(p.opacity,1);
  close(p.life-p.age,2);assert.deepEqual(p.velocity,[0,0,0]);
  assert.deepEqual(p.rotation,[0,p.settledYaw,0]);
  stepNativeDebris(p,1);close(p.opacity,.5);
  assert.equal(stepNativeDebris(p,1),false);
  const flying=particle({Gravity:0});flying.age=flying.life-.1;
  assert.equal(stepNativeDebris(flying,.11),false,'unsettled particles expire at authored lifetime without a fake final fade');
});

test('collision work is bounded and settled fragments stop tracing',()=>{
  const p=particle({Gravity:0});p.velocity=[0,-20,0];let calls=0;
  const blocked=(start,end,min,max)=>{calls++;assert.deepEqual(min,p.bounds.min);assert.deepEqual(max,p.bounds.max);return{fraction:0,end:start,normal:[0,1,0]};};
  stepNativeDebris(p,.01,blocked);assert.equal(calls,10);
  stepNativeDebris(p,.01,blocked);assert.equal(p.settled,true);assert.equal(calls,20);
  stepNativeDebris(p,.1,blocked);assert.equal(calls,20);
});

test('embedded corner contacts reflect along the nearest separating plane',()=>{
  const p=particle({Gravity:0});p.position=[0,0,0];p.velocity=[0,-20,0];let calls=0;
  stepNativeDebris(p,.1,(start,end)=>++calls===1?{startSolid:true,fraction:0,end:start,normal:[1,0,0],penetrations:[{distance:5,normal:[1,0,0]},{distance:1,normal:[0,1,0]}]}:{fraction:1,end});
  assert.equal(calls,2);assert.equal(p.position[0],0);assert.ok(p.position[1]>1);assert.ok(p.velocity[1]>0);
});

test('a new explosion creates one bounded fragment cohort and disposes its cloned materials',()=>{
  const geometry=new THREE.BoxGeometry(1,1,1),material=new THREE.MeshLambertMaterial(),mesh=new THREE.Mesh(geometry,material);
  const prototype=new THREE.Group();prototype.userData={mesh,template:{data:{settings:{debris:{...base,MinLifeTimeSeconds:.1,MaxLifeTimeSeconds:.1}}}}};
  const world={scene:new THREE.Scene(),collider:{trace:(start,end)=>({fraction:1,end})},physicalModels:[0]};
  const game={time:0,explosions:[{...effect,birth:0,scale:[2,3,4]}]},effects=new DestructibleEffects(world,game);
  effects.prototypes.set('brok1',prototype);effects.update(0,new Map());assert.equal(effects.particles.length,40);assert.equal(world.scene.children.length,40);
  assert.deepEqual(effects.particles[0].mesh.children[0].scale.toArray(),[2,3,4]);
  const first=effects.particles[0].mesh.children[0],second=effects.particles[1].mesh.children[0];
  assert.notEqual(first.userData.actorLighting,second.userData.actorLighting);
  assert.equal(first.material[0].customProgramCacheKey(),'native-actor-lighting-2-2');
  let disposed=0;for(const p of effects.particles)for(const m of p.materials)m.addEventListener('dispose',()=>disposed++);
  effects.update(.2,new Map());assert.equal(effects.particles.length,0);assert.equal(world.scene.children.length,0);assert.equal(disposed,40);
  effects.update(.2,new Map());assert.equal(effects.particles.length,0);
  effects.dispose();geometry.dispose();material.dispose();
});
