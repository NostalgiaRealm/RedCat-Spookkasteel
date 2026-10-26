import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator,ActorStateAnimator} from '../source/animation.js';
import {Gameplay} from '../source/gameplay.js';
import {CastleWorld} from '../source/world.js';

const close=(actual,expected,message='values agree',epsilon=1e-8)=>
  assert.ok(Math.abs(actual-expected)<epsilon,`${message}: ${actual} != ${expected}`);
const versions=geometry=>[geometry.attributes.position.version,geometry.attributes.normal.version];
const positions=geometry=>Array.from(geometry.attributes.position.array);
const boneMatrix=m=>new THREE.Matrix4().set(m[0],m[1],m[2],m[9],m[3],m[4],m[5],m[10],m[6],m[7],m[8],m[11],0,0,0,1);

function actor(t,stem,stats={}) {
  const data=JSON.parse(readFileSync(new URL(`../assets/actors/${stem}.json`,import.meta.url)));
  const geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
  const material=new THREE.MeshBasicMaterial(),mesh=new THREE.Mesh(geometry,material),root=new THREE.Group();
  root.add(mesh);mesh.rotation.x=-Math.PI/2;mesh.scale.setScalar(data.settings?.scale||1);
  const animator=new ActorAnimator(data,geometry),states=new ActorStateAnimator(animator,stats);
  root.userData={mesh,animator,stateAnimator:states};
  t.after(()=>{geometry.dispose();material.dispose();});
  return {data,geometry,animator,states,root};
}

function rawPose(t,stem,name,time) {
  const result=actor(t,stem);
  result.animator.transitionDuration=0;result.animator.play(name,false);result.animator.time=time;result.animator.update(0);
  return result;
}

function assertPose(actual,expected,message) {
  actual.animator.transforms.forEach((matrix,i)=>matrix.forEach((value,j)=>
    close(value,expected.animator.transforms[i][j],`${message}, bone ${i}, component ${j}`,1e-7)));
  assert.deepEqual(positions(actual.geometry),positions(expected.geometry),message);
}

// Recover local keys from independently sampled whole poses, then let Three.js
// compose and SLERP them. This also checks attachment and parent application.
function assertBlendedPose(actual,incoming,outgoing,weight) {
  const blend=weight*weight*(3-2*weight),expected=[];
  const localKey=(pose,index)=>{
    const bone=pose.data.bones[index],matrix=boneMatrix(pose.animator.transforms[index]);
    if(bone.parent>=0)matrix.premultiply(boneMatrix(pose.animator.transforms[bone.parent]).invert());
    return matrix.premultiply(boneMatrix(bone.attachment).invert());
  };
  actual.data.bones.forEach((bone,i)=>{
    const position=new THREE.Vector3(),rotation=new THREE.Quaternion(),scale=new THREE.Vector3();
    const oldPosition=new THREE.Vector3(),oldRotation=new THREE.Quaternion();
    localKey(incoming,i).decompose(position,rotation,scale);
    localKey(outgoing,i).decompose(oldPosition,oldRotation,scale);
    const matrix=new THREE.Matrix4().compose(position.lerp(oldPosition,blend),rotation.slerp(oldRotation,blend),new THREE.Vector3(1,1,1));
    matrix.premultiply(boneMatrix(bone.attachment));
    if(bone.parent>=0)matrix.premultiply(expected[bone.parent]);
    expected.push(matrix);
    boneMatrix(actual.animator.transforms[i]).elements.forEach((value,j)=>close(value,matrix.elements[j],`Hermite blend, bone ${i}, component ${j}`,2e-5));
  });
}

function gameplay(type=7,classname='MovingEnemy') {
  return new Gameplay({id:'native-animation-fixture',spawn:{position:[5000,0,0],orientation:0},entities:[
    {classname,'%name%':'enemy',Type:String(type),Origin:'0 0 0',StartPoint:'',StartOrientation:'6'}
  ]});
}

function bind(world,game,fixture,object=game.objects[0]) {
  world.gameplay=game;world.actorInstances.set(object.id,fixture.root);
  object.animationSnapshot=()=>fixture.states.snapshot();
  object.projectileOrigins=()=>world.enemyProjectileOrigins(object,fixture.root);
  return object;
}

test('enemy transitions freeze the outgoing pose and use a 250 ms Hermite bone blend at any playback rate',t=>{
  const current=actor(t,'brutusm',{WalkMotionFactor:1.5}),{animator,states,geometry}=current;
  const object={animationState:'idle',animationSerial:0,animationRate:1.4};
  states.update(object,.2,false,1);
  const outgoing=rawPose(t,'brutusm','idle',animator.time),oldTime=animator.time;
  object.animationState='walk';object.animationSerial++;
  states.update(object,0,false,1);
  assert.equal(animator.transitionDuration,.25);
  assertPose(current,outgoing,'switch begins at the frozen outgoing pose');
  states.update(object,.05,false,1.05);
  close(animator.transition.weight,.8);close(animator.transition.sampleWeight,1);
  assertPose(current,outgoing,'the first frame samples the weight before decrement');
  states.update(object,.05,false,1.1);
  close(animator.time,.21,'motion factors advance only the incoming clip');
  close(animator.transition.time,oldTime,'outgoing time is frozen');
  close(animator.transition.sampleWeight,.8);close(animator.transition.weight,.6);
  assertBlendedPose(current,rawPose(t,'brutusm','walkfw',animator.time),outgoing,.8);
  assert.notDeepEqual(positions(geometry),positions(outgoing.geometry));
  for(let frame=3;frame<=6;frame++)states.update(object,.05,false,1+frame*.05);
  close(animator.transition.weight,0);close(animator.transition.sampleWeight,0);
  assertPose(current,rawPose(t,'brutusm','walkfw',animator.time),'the completed transition is the unblended incoming motion');
});

test('rapid enemy state changes retain an outgoing pose above half weight and replace it below half',t=>{
  const {animator,states}=actor(t,'brutusm');
  const object={animationState:'idle',animationSerial:0,animationRate:1};
  states.update(object,.17,false,0);
  object.animationState='walk';object.animationSerial++;states.update(object,.05,false,.05);
  const original=animator.transition;
  object.animationState='attack';object.animationSerial++;states.update(object,.05,false,.1);
  assert.equal(animator.transition,original,'a quick second action retains the original outgoing clip');
  assert.equal(animator.transition.entry.clip.name,'idle');close(animator.transition.time,.17);
  states.update(object,.05,false,.15);assert.ok(animator.transition.weight<.5);
  const previousTime=animator.time;
  object.animationState='hurt';object.animationSerial++;states.update(object,0,false,.15);
  assert.notEqual(animator.transition,original);
  assert.equal(animator.transition.entry.clip.name,'shoot1');close(animator.transition.time,previousTime);
  close(animator.transition.weight,1);
});

test('initial gameplay poses and dormant skeletons skip preview blends and retain geometry caches',t=>{
  const fixture=actor(t,'skeleton'),{animator,states,geometry}=fixture;
  animator.play('idle');animator.update(.2);
  const object={animationState:'walk',animationSerial:0,animationRate:1};
  states.update(object,0,false,0);
  assert.equal(animator.transition,null,'template preview idle is not an outgoing gameplay pose');
  assertPose(fixture,rawPose(t,'skeleton','walkbw',0),'the first gameplay state starts immediately');
  states.update(object,.1,false,.1);
  object.animationState='dormant';object.animationSerial++;states.update(object,.05,false,.15);
  assert.equal(animator.transition,null,'dormancy immediately returns to the bone pile');
  assertPose(fixture,rawPose(t,'skeleton','start',0),'dormant skeleton uses its first start frame');
  const before=versions(geometry),pose=positions(geometry);
  for(let frame=0;frame<5;frame++)states.update(object,.05,false,.2+frame*.05);
  assert.deepEqual(versions(geometry),before);assert.deepEqual(positions(geometry),pose);assert.equal(animator.time,0);
});

test('paused transitions and completed one-shots leave position and normal uploads unchanged',t=>{
  const {animator,states,geometry}=actor(t,'brutusm');
  const object={animationState:'walk',animationSerial:0,animationRate:1.25};
  states.update(object,.2,false,0);
  object.animationState='attack';object.animationSerial++;states.update(object,.05,false,.05);states.update(object,.05,false,.1);
  const paused=states.snapshot(),before=versions(geometry);
  for(let frame=1;frame<=4;frame++)states.update(object,.05,true,.1+frame*.05);
  assert.deepEqual(states.snapshot(),paused);assert.deepEqual(versions(geometry),before);
  states.update(object,.05,false,.35);
  close(animator.transition.weight,paused.pose.transition.weight-.2,'unpausing advances one frame, not the paused interval');
  for(let frame=1;frame<=50;frame++)states.update(object,.05,false,.35+frame*.05);
  assert.equal(animator.finished,true);close(animator.transition.sampleWeight,0);
  const completed=versions(geometry),end=animator.time;
  states.update(object,.05,false,2.9);states.update(object,0,false,2.9);
  assert.deepEqual(versions(geometry),completed);assert.equal(animator.time,end);
});

test('gameplay snapshots restore the exact in-progress enemy blend and its next frame',t=>{
  const game=gameplay(),object=game.objects[0],fixture=actor(t,'brutusm',{ShootMotionFactor:1.4});
  Object.assign(object,{animationState:'walk',animationSerial:1,animationRate:1.25});
  object.animationSnapshot=()=>fixture.states.snapshot();
  game.time=4;fixture.states.update(object,.2,false,game.time);
  object.animationState='attack';object.animationSerial++;object.animationUntil=6;
  for(let frame=1;frame<=2;frame++){game.time=4+frame*.05;fixture.states.update(object,.05,false,game.time);}
  const saved=JSON.parse(JSON.stringify(game.snapshot())),expected=fixture.states.snapshot();
  assert.deepEqual(saved.objects[0].animationPose,expected,'snapshot reads the live pose hook');
  const restoredGame=new Gameplay(game.level,{save:saved}),restored=restoredGame.objects[0];
  const resumed=actor(t,'brutusm',{ShootMotionFactor:1.4});
  assert.deepEqual(restored.animationPose,expected);
  assert.notEqual(restored.animationPose,saved.objects[0].animationPose,'restored save data is not shared');
  resumed.states.update(restored,0,false,restoredGame.time);
  assert.equal(restored.animationPose,undefined,'the restored pose is consumed once');
  assert.deepEqual(resumed.states.snapshot(),expected);assertPose(resumed,fixture,'restoration retains the displayed blend weight');
  fixture.states.update(object,.05,false,game.time+.05);
  resumed.states.update(restored,.05,false,restoredGame.time+.05);
  assert.deepEqual(resumed.states.snapshot(),fixture.states.snapshot());assertPose(resumed,fixture,'the next frame continues identically');
});

test('same-frame projectile queries and actor synchronization advance an enemy transition only once',t=>{
  const game=gameplay(),world=new CastleWorld({},{}),fixture=actor(t,'brutusm');
  const object=bind(world,game,fixture),{animator,geometry,states}=fixture;
  Object.assign(object,{animationState:'idle',animationSerial:1,animationRate:1.25});
  game.time=4;states.update(object,.2,false,game.time);
  object.animationState='attack';object.animationSerial++;
  game.time=4.05;object.animationUntil=game.time+states.durations.attack/object.animationRate;
  const first=world.enemyProjectileOrigins(object,fixture.root),snapshot=states.snapshot(),before=versions(geometry);
  close(snapshot.pose.transition.weight,.8);
  assert.deepEqual(world.enemyProjectileOrigins(object,fixture.root),first);
  world.syncActors(.05);
  assert.deepEqual(states.snapshot(),snapshot);assert.deepEqual(versions(geometry),before);
  game.time+=.05;world.enemyProjectileOrigins(object,fixture.root);
  close(animator.transition.weight,.6);close(animator.time,.05*object.animationRate);
  const next=states.snapshot(),nextVersions=versions(geometry);
  world.syncActors(.05);
  assert.deepEqual(states.snapshot(),next);assert.deepEqual(versions(geometry),nextVersions);
});

test('cutscenes freeze living enemy poses while visible corpses continue their death motion',t=>{
  const game=gameplay(),world=new CastleWorld({},{}),living=actor(t,'brutusm'),dead=actor(t,'brutusm');
  const object=bind(world,game,living);
  Object.assign(object,{animationState:'walk',animationSerial:1,animationRate:1.1});
  const corpse={...object,id:'corpse',enabled:false,health:0,animationState:'death',animationSerial:2,animationRate:1.2,
    animationUntil:dead.states.durations.death/1.2,corpseUntil:5};
  game.objects.push(corpse);world.actorInstances.set(corpse.id,dead.root);
  world.syncActors(0);game.time=.1;world.syncActors(.1);
  const before=living.states.snapshot(),beforeVersions=versions(living.geometry),deathTime=dead.animator.time;
  game.scripts={cutscene:true};game.time+=.05;world.syncActors(.05);
  assert.deepEqual(living.states.snapshot(),before);assert.deepEqual(versions(living.geometry),beforeVersions);
  close(dead.animator.time,deathTime+.05*corpse.animationRate);assert.equal(dead.root.visible,true);
});

test('Dungeon Max machine snapshots restore both barrel poses and deduplicate release-frame blending',t=>{
  const game=gameplay(5,'StandingEnemy'),world=new CastleWorld({},{}),body=actor(t,'maxd'),top=actor(t,'turtop');
  const object=bind(world,game,body);object.animationRate=1;
  const root=new THREE.Group();root.add(top.root);
  const machine={root,top:top.root,shields:[],serial:-1};world.bossMachines.set(object.id,machine);
  object.machineAnimationSnapshot=()=>({serial:machine.serial,pose:top.animator.snapshot()});
  world.registerActorCollision=()=>{};
  game.time=10;object.boss.machineMotion='still';object.boss.machineElapsed=.2;world.syncBossMachine(object,machine);
  assert.equal(top.animator.transition,null,'initial machine attachment skips the template preview');
  object.boss.machineMotion='shoot1';object.boss.machineSerial++;
  for(let frame=1;frame<=2;frame++) {
    game.time=10+frame*.05;object.boss.machineElapsed=frame*.05;
    world.enemyProjectileOrigins(object,body.root);
    const pose=top.animator.snapshot(),before=versions(top.geometry);
    world.syncActors(.05);
    assert.deepEqual(top.animator.snapshot(),pose);assert.deepEqual(versions(top.geometry),before);
  }
  close(top.animator.transition.weight,.6);close(top.animator.transition.sampleWeight,.8);
  const saved=JSON.parse(JSON.stringify(game.snapshot()));
  assert.deepEqual(saved.objects[0].machinePose,object.machineAnimationSnapshot());
  const restoredGame=new Gameplay(game.level,{save:saved}),restoredObject=restoredGame.objects[0];
  const restoredWorld=new CastleWorld({},{}),restoredBody=actor(t,'maxd'),restoredTop=actor(t,'turtop');
  bind(restoredWorld,restoredGame,restoredBody,restoredObject);
  const restoredRoot=new THREE.Group();restoredRoot.add(restoredTop.root);
  const restoredMachine={root:restoredRoot,top:restoredTop.root,shields:[],serial:-1};
  restoredWorld.bossMachines.set(restoredObject.id,restoredMachine);
  const expected=world.enemyProjectileOrigins(object,body.root);
  const origins=restoredWorld.enemyProjectileOrigins(restoredObject,restoredBody.root);
  assert.equal(restoredObject.machinePose,undefined);assert.equal(origins.length,2);
  assertPose(restoredTop,top,'the turret resumes its exact saved blended pose');
  origins.forEach((point,i)=>point.forEach((value,j)=>close(value,expected[i][j],`restored barrel ${i}, axis ${j}`)));
  const paused=restoredTop.animator.snapshot(),before=versions(restoredTop.geometry);
  restoredGame.scripts={cutscene:true};restoredGame.time+=.05;
  restoredWorld.syncBossMachine(restoredObject,restoredMachine,false);
  assert.deepEqual(restoredTop.animator.snapshot(),paused);assert.deepEqual(versions(restoredTop.geometry),before);
});
