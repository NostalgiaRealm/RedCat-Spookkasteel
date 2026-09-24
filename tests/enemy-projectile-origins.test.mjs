import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator,ActorStateAnimator} from '../src/animation.js';
import {Gameplay} from '../src/gameplay.js';
import {CastleWorld} from '../src/world.js';
import {enemyMuzzleBones,posedEnemyProjectileOrigins,enemyProjectileOrigins} from '../src/enemy-projectile-origins.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const close=(a,b)=>assert.ok(a.every((v,i)=>Math.abs(v-b[i])<1e-8),`${a} != ${b}`);
function actor(name,scale) {
  const data=json(`assets/actors/${name}.json`),geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  const mesh=new THREE.Mesh(geometry),root=new THREE.Group();root.add(mesh);
  mesh.rotation.x=-Math.PI/2;mesh.scale.setScalar(scale||data.settings.scale||1);
  const animator=new ActorAnimator(data,geometry);animator.play('shoot1',false)||animator.play('idle',false);
  animator.time=animator.clip.duration*.5;animator.update(0);
  root.userData={mesh,animator};return root;
}

test('native enemy muzzle selectors exist in every original ranged actor and follow its pose',()=>{
  const names={spider:'spiderr',bat:'batr',ghost:'ghostr',frog:'frog',plant:'plant',skeleton:'skeleton',gargoyle:'gargoyle',brutusm:'brutusm',brutusb:'brutusb',maxj:'maxj',witch:'witch'};
  for(const [enemyType,name] of Object.entries(names)) {
    const root=actor(name);root.position.set(120,30,-40);root.rotation.y=.6;
    const object={enemyType},points=posedEnemyProjectileOrigins(object,root);
    assert.equal(points.length,1,enemyType);assert.ok(points[0].every(Number.isFinite));
    const {animator,mesh}=root.userData;
    const bone=animator.transforms[animator.data.bones.findIndex(b=>b.name===enemyMuzzleBones(enemyType)[0])];
    const local=new THREE.Vector3(bone[9]+bone[0]+bone[1]+bone[2],bone[10]+bone[3]+bone[4]+bone[5],bone[11]+bone[6]+bone[7]+bone[8]);
    close(points[0],mesh.localToWorld(local).toArray());
    assert.ok(Math.hypot(...points[0].map((v,i)=>v-[120,55,-40][i]))>1,`${enemyType} must not use the generic chest offset`);
    root.position.x+=55;root.rotation.y+=Math.PI;
    const moved=posedEnemyProjectileOrigins(object,root)[0];
    assert.notDeepEqual(moved,points[0],`${enemyType} follows its current actor transform`);
    animator.time=animator.clip.duration*.3;animator.update(0);
    assert.notDeepEqual(posedEnemyProjectileOrigins(object,root)[0],moved,`${enemyType} follows its animated attachment`);
    mesh.geometry.dispose();mesh.material.dispose();
  }
});

test('Dungeon Max uses the two animated turret barrels rather than his lowered body',()=>{
  const body=actor('maxd'),top=actor('turtop',1.4),root=new THREE.Group();root.add(top);
  root.position.set(200,40,150);root.rotation.y=.9;body.position.set(200,-600,150);
  const points=posedEnemyProjectileOrigins({enemyType:'maxd'},body,{root,top});
  assert.deepEqual(enemyMuzzleBones('maxd'),['BONE07','BONE13']);
  assert.equal(points.length,2);assert.ok(points.every(p=>p[1]>40));
  assert.ok(Math.hypot(...points[0].map((v,i)=>v-points[1][i]))>10);
  body.position.y-=1000;
  assert.deepEqual(posedEnemyProjectileOrigins({enemyType:'maxd'},body,{root,top}),points);
  const old=points.map(p=>[...p]);root.position.y+=80;
  posedEnemyProjectileOrigins({enemyType:'maxd'},body,{root,top}).forEach((p,i)=>close(p,[old[i][0],old[i][1]+80,old[i][2]]));
});

test('gameplay fires independently aimed native projectiles from each supplied release attachment',()=>{
  const game=new Gameplay({id:'fixture',entities:[],spawn:{position:[0,0,0]}});
  const positions=[[-15,60,40],[15,60,40]],target=[0,0,200];
  const object={id:'max',enemyType:'maxd',position:[0,-200,0],stats:{BulletDeviation:0},projectileOrigins:()=>positions};
  game.enemyProjectile(object,target);
  assert.equal(game.projectiles.length,2);
  game.projectiles.forEach((p,i)=>{
    close(p.position,positions[i]);assert.equal(p.kind,'magma');assert.equal(p.sourceId,'max');
    const delta=target.map((v,j)=>v+(j===1?28:0)-positions[i][j]),length=Math.hypot(...delta);
    close(p.velocity.map(v=>v/Math.hypot(...p.velocity)),delta.map(v=>v/length));
  });
  assert.notEqual(game.projectiles[0].id,game.projectiles[1].id);
  positions[0][0]=900;assert.notEqual(game.projectiles[0].position[0],900,'live attachment arrays are not shared with projectiles');
});

test('missing actor data keeps simulation finite and invalid callbacks cannot inject bad coordinates',()=>{
  const object={enemyType:'frog',position:[20,30,40]};
  assert.deepEqual(posedEnemyProjectileOrigins(object,null),[]);
  assert.deepEqual(enemyProjectileOrigins(object),[[20,55,40]]);
  object.projectileOrigins=()=>[[NaN,0,0],[0,Infinity,0]];
  assert.deepEqual(enemyProjectileOrigins(object),[[20,55,40]]);
  object.projectileOrigins=()=>[[1,2,3],[NaN,0,0]];
  assert.deepEqual(enemyProjectileOrigins(object),[[1,2,3]]);
});

test('world release sampling repairs stale and restored attack poses without advancing animation twice',()=>{
  for(const restored of [false,true]) {
    const world=new CastleWorld({},{fov:65}),root=actor('brutusm'),reference=actor('brutusm');
    const game=new Gameplay({id:'fixture',entities:[],spawn:{position:[0,0,0]}});world.gameplay=game;game.time=4;
    const object={id:'brutus',kind:'enemy',enemyType:'brutusm',position:[180,35,-90],yaw:1.2,health:20,enabled:true,
      actorFile:'brutusm',stats:{BulletDeviation:0,ShootMotionFactor:1.4},animationState:'attack',animationSerial:3,animationRate:1.25,animationUntil:4.6};
    const {animator}=root.userData,states=new ActorStateAnimator(animator,object.stats);
    root.userData.stateAnimator=states;
    if(!restored){states.update(object,0,false,0);animator.time=.03;animator.update(0);}
    root.position.set(-200,-50,100);root.rotation.y=-.4;
    world.actorInstances.set(object.id,root);game.objects.push(object);
    object.projectileOrigins=()=>world.enemyProjectileOrigins(object,root);
    const expectedTime=animator.prepared.get('shoot1').clip.duration-.6*1.4*1.25;
    reference.position.fromArray(object.position);reference.rotation.y=object.yaw;
    reference.userData.animator.time=expectedTime;reference.userData.animator.update(0);
    const expected=posedEnemyProjectileOrigins(object,reference)[0];
    game.enemyProjectile(object,[100,35,100]);
    close(game.projectiles[0].position,expected);
    assert.ok(Math.abs(animator.time-expectedTime)<1e-9);
    world.syncActors(.05);
    assert.ok(Math.abs(animator.time-expectedTime)<1e-9,`${restored?'restored':'stale'} release frame advances only once`);
    close(posedEnemyProjectileOrigins(object,root)[0],expected);
    game.time+=.05;world.syncActors(.05);
    assert.ok(Math.abs(animator.time-expectedTime-.05*1.4*1.25)<1e-9,'the next frame resumes normal animation');
  }
});

test('world machine release synchronizes both turret barrels to the saved machine pose',()=>{
  const world=new CastleWorld({},{fov:65}),body=actor('maxd'),top=actor('turtop',1.4),machineRoot=new THREE.Group();machineRoot.add(top);
  const game=new Gameplay({id:'fixture',entities:[],spawn:{position:[0,0,0]}});world.gameplay=game;game.time=12;
  const object={id:'max',kind:'enemy',enemyType:'maxd',actorFile:'maxd',position:[130,-300,250],yaw:1.5,health:20,enabled:true,
    stats:{BulletDeviation:0},animationState:'idle',animationSerial:1,
    boss:{home:[130,60,250],machineMotion:'shoot1',machineSerial:4,machineElapsed:.45}};
  body.userData.stateAnimator=new ActorStateAnimator(body.userData.animator,object.stats);
  machineRoot.position.set(-999,-999,-999);machineRoot.rotation.y=-2;
  top.userData.animator.play('still',true,true);top.userData.animator.update(.01);
  const machine={root:machineRoot,top,shields:[],serial:-1};
  world.actorInstances.set(object.id,body);world.bossMachines.set(object.id,machine);game.objects.push(object);
  let collisionUpdates=0;world.registerActorCollision=()=>collisionUpdates++;
  object.projectileOrigins=()=>world.enemyProjectileOrigins(object,body);
  game.enemyProjectile(object,[100,60,500]);
  assert.equal(game.projectiles.length,2);assert.equal(collisionUpdates,0,'pose sampling does not rebuild collision records');
  close(machineRoot.position.toArray(),object.boss.home);assert.equal(machineRoot.rotation.y,object.yaw);
  assert.equal(top.userData.animator.name,'shoot1');assert.equal(top.userData.animator.time,.45);
  const expected=posedEnemyProjectileOrigins(object,body,machine);
  game.projectiles.forEach((projectile,index)=>close(projectile.position,expected[index]));
  assert.ok(expected.every(point=>point[1]>60),'both shots leave the machine above its floor, not the lowered character');
  world.syncActors(.1);
  assert.equal(top.userData.animator.time,.45,'normal frame synchronization retains the authoritative machine clock');
  assert.equal(collisionUpdates,1);assert.equal(machine.serial,4);
});
