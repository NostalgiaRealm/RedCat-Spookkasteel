import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator,ActorStateAnimator} from '../src/animation.js';
import {CastleWorld} from '../src/world.js';
import {BspCollider,PlayerController} from '../src/collision.js';

function actor(stem,stats={}) {
  const data=JSON.parse(readFileSync(new URL(`../assets/actors/${stem}.json`,import.meta.url)));
  const geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
  const animator=new ActorAnimator(data,geometry),states=new ActorStateAnimator(animator,stats);
  return {data,geometry,animator,states};
}

for(const name of ['spiderg','spidery','spiderr','zombie'])test(`${name}: walking uses original moving legs instead of its idle pose`,()=>{
  const {geometry,animator,states}=actor(name);
  const object={animationState:'idle',animationSerial:0};states.update(object,0);
  object.animationState='walk';object.animationSerial++;states.update(object,0);
  assert.equal(animator.name,'walkfw');
  const before=[...geometry.attributes.position.array];states.update(object,.3);
  const after=geometry.attributes.position.array;
  assert.ok(after.filter((v,i)=>Math.abs(v-before[i])>.05).length>60);
  assert.ok(after.every(Number.isFinite));assert.ok(geometry.boundingSphere.radius<150);
});

for(const name of ['batg','baty','batr'])test(`${name}: active idle keeps flying while dormant and scripted hanging poses remain available`,()=>{
  const {geometry,animator,states}=actor(name);
  const object={enemyType:'bat',enabled:false,animationState:'idle',animationSerial:0};
  states.update(object,0);assert.equal(animator.name,'idle1');
  object.enabled=true;states.update(object,0);
  assert.equal(animator.name,'idle2');assert.equal(animator.loop,true);
  const before=[...geometry.attributes.position.array];states.update(object,.2);
  assert.ok(geometry.attributes.position.array.filter((v,i)=>Math.abs(v-before[i])>.05).length>60,'airborne idle continues flapping');
  const time=animator.time;states.update(object,.5,true);assert.equal(animator.time,time,'cutscenes freeze the airborne pose');
  object.animationState='walk';object.animationSerial++;states.update(object,0);assert.equal(animator.name,'walkfw');
  object.animationState='idle';object.animationSerial++;states.update(object,0);assert.equal(animator.name,'idle2','stopping flight does not make the bat hang');
  object.enabled=false;states.update(object,0);assert.equal(animator.name,'idle1');
  animator.play('idle1',true,true);animator.update(.2);assert.equal(animator.name,'idle1','explicit authored motion stays available');
});

test('enemy attack runs once, holds its last pose, and restarts only for the next actual attack',()=>{
  const {animator,states}=actor('spiderr'),object={animationState:'attack',animationSerial:1};
  states.update(object,.2);assert.equal(animator.name,'shoot1');
  states.update(object,.2);assert.ok(Math.abs(animator.time-.4)<1e-9);
  states.update(object,10);assert.equal(animator.finished,true);const end=animator.time;
  states.update(object,.1);assert.equal(animator.time,end);
  object.animationSerial++;states.update(object,.1);assert.equal(animator.finished,false);assert.equal(animator.time,.1);
});

test('original knight hit factor controls both rendered speed and reported gameplay duration',()=>{
  const {animator,states}=actor('knight',{HitMotionFactor:1.8});
  assert.ok(Math.abs(states.durations.hurt-1.0666559934616089/1.8)<1e-9);
  states.update({animationState:'hurt',animationSerial:1},.2);
  assert.equal(animator.name,'hit');assert.ok(Math.abs(animator.time-.36)<1e-9);
});

test('Bone Brutus charge uses its original one-shot clip and saved playback rate',()=>{
  const {animator,states}=actor('brutusb'),time=20,rate=1.1,duration=states.durations.charge/rate;
  const object={animationState:'charge',animationSerial:2,animationRate:rate,animationUntil:time+duration/2};
  states.update(object,0,false,time);assert.equal(animator.name,'charge');assert.equal(animator.loop,false);
  assert.ok(Math.abs(animator.time-states.durations.charge/2)<1e-8);
  states.update(object,.1,false,time+.1);assert.ok(Math.abs(animator.time-states.durations.charge/2-.11)<1e-8);
});

test('cutscene freezing holds the current enemy animation pose',()=>{
  const {animator,states,geometry}=actor('spiderg'),object={animationState:'walk'};
  states.update(object,.3);const time=animator.time,pose=[...geometry.attributes.position.array];
  states.update(object,1,true);assert.equal(animator.time,time);assert.deepEqual([...geometry.attributes.position.array],pose);
});

for(const state of ['attack','hurt','death'])test(`restoring a ${state} one-shot resumes the saved phase`,()=>{
  const {animator,states}=actor('spiderr'),duration=states.durations[state],time=20;
  const object={animationState:state,animationSerial:4,animationUntil:time+duration/2};
  states.update(object,0,false,time);
  assert.ok(Math.abs(animator.time-duration/2)<1e-8);
  states.update(object,.1,false,time+.1);assert.ok(Math.abs(animator.time-duration/2-.1)<1e-8);
  states.update(object,1,true,time+.1);assert.ok(Math.abs(animator.time-duration/2-.1)<1e-8);
});

test('defeated spiders remain visible while their death clip plays instead of vanishing on health zero',()=>{
  const world=new CastleWorld({},{}),{animator,states}=actor('spiderg');
  const mesh=new THREE.Group();mesh.userData={animator,stateAnimator:states};
  const object={id:'spider',kind:'enemy',position:[0,0,0],enabled:false,health:0,animationState:'death',animationSerial:1,animationUntil:states.durations.death};
  world.gameplay={objects:[object],time:0};world.actorInstances.set(object.id,mesh);
  world.syncActors(.2);assert.equal(mesh.visible,true);assert.equal(animator.name,'death');assert.equal(animator.loop,false);
  world.gameplay.time=states.durations.death;world.syncActors(10);assert.equal(mesh.visible,true);assert.equal(animator.finished,true);
  world.gameplay.time=states.durations.death+3;world.syncActors(.1);assert.equal(mesh.visible,false);world.dispose();
});

test('visible enemy projectiles follow simulation positions and disappear at impact',()=>{
  const world=new CastleWorld({},{});world.gameplay={projectiles:[{id:'poison1',position:[10,20,30],radius:4,kind:'poison'}]};
  world.syncProjectiles();const mesh=world.projectileMeshes.get('poison1');
  assert.deepEqual(mesh.position.toArray(),[10,20,30]);assert.equal(mesh.scale.x,4);assert.equal(mesh.parent,world.scene);
  world.gameplay.projectiles[0].position=[40,20,30];world.syncProjectiles();assert.deepEqual(mesh.position.toArray(),[40,20,30]);
  world.gameplay.projectiles=[];world.syncProjectiles();assert.equal(world.projectileMeshes.size,0);assert.equal(mesh.parent,null);world.dispose();
});

test('knight death uses all nine original breakup actors, freezes with cutscenes and cleans up',()=>{
  const world=new CastleWorld({},{}),{data,geometry,animator,states}=actor('knight');
  const material=world.track(new THREE.MeshBasicMaterial());
  const body=world.instantiateActor({data,geometry,materials:[material]},{scale:1.8});body.userData.stateAnimator=states;
  world.knightParts=['knhd','knbrst','knhip','knllg','knrlg','knlrm','knrrm','knlns','knax'].map(name=>{
    const part=actor(name);return {data:part.data,geometry:world.track(part.geometry),materials:[material]};
  });
  const object={id:'knight',actorFile:'knight',kind:'enemy',position:[0,0,0],enabled:false,health:0,animationState:'death',animationUntil:1.5,corpseUntil:3.5,collisionMaxs:[20,95,20]};
  world.gameplay={objects:[object],time:0};world.actorInstances.set(object.id,body);
  world.syncActors(.016);const debris=world.enemyDebris.get('knight');
  assert.equal(body.visible,false);assert.equal(debris.parts.length,9);assert.ok(debris.parts.every(p=>p.actor.parent===world.scene));
  const before=debris.parts.map(p=>p.actor.position.toArray());world.gameplay.scripts={cutscene:true};world.syncActors(.05);
  assert.deepEqual(debris.parts.map(p=>p.actor.position.toArray()),before);
  world.gameplay.scripts.cutscene=false;
  for(let i=0;i<80;i++){world.gameplay.time+=.05;world.syncActors(.05);}
  assert.equal(world.enemyDebris.size,0);assert.ok(debris.parts.every(p=>p.actor.parent===null));
  assert.ok(debris.parts.every(p=>p.actor.position.toArray().every(Number.isFinite)));world.dispose();
});

test('jump feedback fires once on a grounded jump, never from a held airborne input or cutscene',()=>{
  const collider=new BspCollider({planes:[],nodes:[],leaves:[],leafSides:[],models:[]});
  const world=new CastleWorld({},{}),events=[];
  Object.assign(world,{collider,physicalModels:[],player:new PlayerController(collider,[0,100,0]),level:{bounds:{min:[-1000,-1000,-1000]}},updateCamera(){}});
  world.player.grounded=true;
  world.gameplay={objects:[],projectiles:[],time:0,update(){},emit(type){events.push(type);}};
  const input={forward:0,right:0,jump:true};
  world.update(.016,input);assert.deepEqual(events,['jump']);assert.ok(world.player.velocityY>0);
  world.update(.016,input);assert.deepEqual(events,['jump']);
  world.player.grounded=true;world.gameplay.scripts={cutscene:true,modelTransforms:new Map(),update(){}};
  world.update(.016,input);assert.deepEqual(events,['jump']);world.dispose();
});
