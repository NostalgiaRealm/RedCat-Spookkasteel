import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {BspCollider,PlayerController} from '../src/collision.js';
import {triangleCollider} from '../src/actor-collision.js';
import {CastleWorld} from '../src/world.js';
import {ActorAnimator,ActorStateAnimator} from '../src/animation.js';
const empty=()=>new BspCollider({planes:[],nodes:[],leaves:[],leafSides:[],models:[]});
function plane(collider) {
  collider.actors.push({id:'wall',blocksPlayer:true,canBeShot:true,blocksLOS:false,min:[0,-100,-100],max:[0,100,100],triangles:[
    triangleCollider([[0,-100,-100],[0,100,-100],[0,100,100]]),triangleCollider([[0,-100,-100],[0,100,100],[0,-100,100]])]});
}
test('actor surfaces block a swept player and projectiles but respect native LOS flags',()=>{
  const c=empty();plane(c);
  const hit=c.trace([-50,0,0],[50,0,0],[-11,0,-11],[11,56,11]);
  assert.ok(Math.abs(hit.end[0]+11.05)<1e-6);assert.deepEqual(hit.normal,[-1,0,0]);assert.equal(hit.actorId,'wall');
  assert.ok(c.trace([-50,20,0],[50,20,0],[0,0,0],[0,0,0],[],'canBeShot').fraction<1);
  assert.equal(c.trace([-50,20,0],[50,20,0],[0,0,0],[0,0,0],[],'blocksLOS').fraction,1);
  c.actors[0].active=()=>false;assert.equal(c.trace([-50,0,0],[50,0,0],[-11,0,-11],[11,56,11]).fraction,1);
});
test('actor collision allows sliding, moving away, and passing empty portions of a triangle bounding box',()=>{
  const c=empty();plane(c);
  const slide=c.slide([-30,0,0],[60,0,50],[-11,0,-11],[11,56,11],[]);
  assert.ok(slide.position[0]< -11);assert.ok(slide.position[2]>49);
  assert.equal(c.trace(slide.position,[-50,0,50],[-11,0,-11],[11,56,11]).fraction,1);
  c.actors[0].triangles=[triangleCollider([[0,0,0],[0,100,0],[0,0,100]])];
  assert.equal(c.trace([-30,80,80],[30,80,80],[-1,-1,-1],[1,1,1]).fraction,1);
});
test('standing on an actor surface remains stable and is not mistaken for starting inside it',()=>{
  const c=empty(),triangles=[triangleCollider([[-100,0,-100],[100,0,100],[100,0,-100]]),triangleCollider([[-100,0,-100],[-100,0,100],[100,0,100]])];
  c.actors.push({id:'floor',blocksPlayer:true,min:[-100,0,-100],max:[100,0,100],triangles});
  const p=new PlayerController(c,[0,10,0],[]);
  for(let i=0;i<120;i++)p.update(1/60,{forward:0,right:0},0);
  assert.equal(p.grounded,true);assert.ok(Math.abs(p.position[1]-.05)<1e-6);
});
test('original rotated graveyard statue blocks its pedestal while a disabled blocker disappears',()=>{
  const data=JSON.parse(readFileSync(new URL('../assets/actors/statue.json',import.meta.url)));
  assert.equal(data.settings.blocksPlayer,true);assert.equal(data.settings.canBeShot,true);assert.equal(data.settings.blocksLOS,false);
  const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setIndex(data.indices);
  const mesh=new THREE.Mesh(geometry);mesh.rotation.x=-Math.PI/2;
  const actor=new THREE.Group();actor.add(mesh);actor.rotation.y=-20*Math.PI/180;actor.position.set(1824,-64,3368);actor.userData={mesh,template:{data}};
  const c=empty(),world=new CastleWorld({},{});world.collider=c;world.gameplay={time:0};
  const object={id:'statue',kind:'actor',enabled:true,visible:true,health:1};world.registerActorCollision(object,actor);
  const start=[1824,-63.95,3510],end=[1824,-63.95,3300];
  const hit=c.trace(start,end,[-11,0,-11],[11,56,11]);assert.ok(hit.fraction<1);assert.equal(hit.actorId,'statue');
  object.visible=false;assert.equal(c.trace(start,end,[-11,0,-11],[11,56,11]).fraction,1);world.dispose();geometry.dispose();
});

test('a dormant graveyard zombie reuses its triangle collision until its pose or placement changes',()=>{
  const data=JSON.parse(readFileSync(new URL('../assets/actors/zombie.json',import.meta.url)));
  const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setIndex(data.indices);
  const mesh=new THREE.Mesh(geometry),actor=new THREE.Group();actor.add(mesh);actor.userData={mesh,template:{data}};
  const animator=new ActorAnimator(data,geometry),states=new ActorStateAnimator(animator),world=new CastleWorld({},{});
  world.gameplay={time:0};const object={id:'zombie',kind:'enemy',health:6,animationState:'dormant'};
  try {
    states.update(object,0);
    const first=world.actorCollisionRecord(object,actor,{canBeShot:true}).triangles;
    for(let i=0;i<120;i++){
      states.update(object,1/120);
      assert.equal(world.actorCollisionRecord(object,actor,{canBeShot:true}).triangles,first);
    }
    actor.position.x=100;
    const moved=world.actorCollisionRecord(object,actor,{canBeShot:true}).triangles;assert.notEqual(moved,first);
    object.animationState='walk';states.update(object,.3);
    const walking=world.actorCollisionRecord(object,actor,{canBeShot:true}).triangles;assert.notEqual(walking,moved);
    assert.notDeepEqual(walking,moved);
  } finally {world.dispose();geometry.dispose();}
});

const dungeon=JSON.parse(readFileSync(new URL('../data/levels/lvl03a/level.json',import.meta.url)));
async function dungeonMachine() {
  const {Gameplay}=await import('../src/gameplay.js');
  const entity=dungeon.entities.find(e=>e.classname==='StandingEnemy'&&e.Type==='5');
  const game=new Gameplay({...dungeon,entities:[{...entity,IsInitiallyEnabled:'1'}]},{deferInit:true});
  game.objects[0].yaw=0;
  const world=new CastleWorld({},{});world.collider=empty();
  // Use the real assembly setup and original geometry without requiring WebGL
  // or loading unrelated level textures in a collision regression.
  world.makeActor=async(name,options)=>{
    const data=JSON.parse(readFileSync(new URL('../assets/actors/'+name.replace(/\.act$/i,'')+'.json',import.meta.url)));
    const geometry=world.track(new THREE.BufferGeometry());geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setIndex(data.indices);
    for(const group of data.groups)geometry.addGroup(group.start,group.count,group.materialIndex);
    return world.instantiateActor({data,geometry,materials:[world.track(new THREE.MeshBasicMaterial({side:THREE.DoubleSide}))]},options);
  };
  await world.attachGameplay(game);world.syncActors(0);
  return {world,game,boss:game.objects[0],machine:world.bossMachines.get(game.objects[0].id)};
}

test('Dungeon machine retains original geometry and exposes every turret part to player shots',async()=>{
  const {world,boss,machine}=await dungeonMachine();
  try {
    assert.deepEqual(machine.shields.map(p=>p.userData.template.data.source).sort(),['brcrate.act','turbot.act']);
    assert.equal(world.collider.actors.length,3);
    const crate=machine.shields.find(p=>p.userData.template.data.source==='brcrate.act'),record=crate.userData.collisionRecord;
    assert.deepEqual(crate.userData.mesh.scale.toArray(),[.84,.84,2.38]);
    assert.ok(Math.abs(record.max[1]-record.min[1]-76.16)<.001);
    assert.ok(Math.abs(record.min[1]-boss.boss.home[1])<.001);
    assert.equal(machine.top.userData.collisionRecord.canBeShot,true);
    assert.equal(machine.top.userData.collisionRecord.blocksPlayer,true);
    for(const shield of machine.shields)assert.equal(shield.userData.collisionRecord.blocksPlayer,true);
    const [x,y,z]=boss.boss.home;
    // The requested turret damage includes the closed lid above the crate.
    const top=machine.top.userData.mesh;top.updateWorldMatrix(true,false);
    const ray=new THREE.Raycaster(new THREE.Vector3(x,y+78,z+140),new THREE.Vector3(0,0,-1),0,280);
    assert.ok(ray.intersectObject(top).length>0,'test ray must cross the original lid mesh');
    assert.ok(world.collider.trace([x,y+78,z+140],[x,y+78,z-140],[0,0,0],[0,0,0],[],'canBeShot').fraction<1);
    assert.ok(world.collider.trace([x,y+78,z+140],[x,y+78,z-140],[0,0,0],[0,0,0],[],'blocksPlayer').fraction<1);
  } finally {world.dispose();}
});

test('Dungeon turret, crate, lid and exposed body all forward pellet damage to Max',async()=>{
  const {world,game,boss}=await dungeonMachine();
  try {
    const [x,y,z]=boss.boss.home,health=boss.health,events=[];game.onEvent=e=>events.push(e);
    const trace=(a,b,r,p)=>world.collider.trace(a,b,[-r,-r,-r],[r,r,r],[],{mask:'canBeShot',ignoreId:p.sourceId});
    const shoot=height=>{
      game.projectiles=[{id:'test-pellet',sourceId:'redcat',owner:'player',kind:'shot',position:[x,y+height,z+120],velocity:[0,0,-1000],radius:3,age:0,life:1,gravity:0,damage:1}];
      game.updateProjectiles(.15,[x,y,z+200],trace);
    };
    shoot(30);assert.equal(boss.health,health-1);assert.equal(game.projectiles.length,0);
    assert.equal(events.find(e=>e.type==='playerProjectileImpact').target,boss.id);
    const body=world.actorInstances.get(boss.id).userData.mesh;body.updateWorldMatrix(true,false);
    const bodyHit=new THREE.Raycaster(new THREE.Vector3(x,y+48,z+120),new THREE.Vector3(0,0,-1),0,150).intersectObject(body)[0];
    assert.ok(bodyHit,'the lowered-head ray crosses the rendered body');
    assert.ok(trace([x,y+48,z+120],[x,y+48,z-30],0,{sourceId:'redcat'}).fraction<bodyHit.distance/150,'visible crate is in front of the head');
    // Max's original nose protrudes slightly past the narrow crate. Aim at
    // the covered top of the head, rather than adding fake phase immunity.
    shoot(48);assert.equal(boss.health,health-2,'the crate hit routes to the boss health');
    shoot(78);assert.equal(boss.health,health-3,'the closed lid hit routes to the boss health');
    // This height crosses the crate above the low turret, proving that the
    // crate itself (not a phase immunity flag) is present in the query.
    const crateHit=trace([x,y+60,z+120],[x,y+60,z-30],3,{sourceId:'redcat'});
    assert.equal(crateHit.actorId,boss.id);assert.ok(crateHit.fraction<1);
    boss.position[1]=y+40;boss.boss.phase='look';world.syncActors(0);
    shoot(88);assert.equal(boss.health,health-4);assert.equal(game.projectiles.length,0);
    assert.equal(events.filter(e=>e.type==='playerProjectileImpact').at(-1).target,boss.id);
  } finally {world.dispose();}
});

test('Dungeon ammunition exits its own shields but other enemies still collide, and defeated shields disappear',async()=>{
  const {world,game,boss}=await dungeonMachine();
  try {
    const [x,y,z]=boss.boss.home;
    const trace=(a,b,r,p)=>world.collider.trace(a,b,[-r,-r,-r],[r,r,r],[],{mask:'canBeShot',ignoreId:p.sourceId});
    assert.ok(trace([x,y+30,z],[x,y+30,z+100],2,{sourceId:'other-enemy'}).fraction<1);
    assert.equal(trace([x,y+30,z],[x,y+30,z+100],2,{sourceId:boss.id}).fraction,1);
    game.projectiles=[{id:'magma-test',sourceId:boss.id,owner:'enemy',kind:'magma',position:[x,y+30,z],velocity:[0,0,1000],radius:2,age:0,life:1,gravity:0,damage:1}];
    game.updateProjectiles(.1,[x+1000,y,z],trace);
    assert.equal(game.projectiles.length,1);assert.deepEqual(game.projectiles[0].position,[x,y+30,z+100]);
    // Re-synchronization updates the cached mesh records without duplicates.
    for(let i=0;i<4;i++){boss.yaw+=.1;world.syncActors(0);}assert.equal(world.collider.actors.length,3);
    boss.health=0;
    assert.equal(trace([x,y+30,z-100],[x,y+30,z+100],2,{sourceId:'redcat'}).fraction,1);
  } finally {world.dispose();}
});
