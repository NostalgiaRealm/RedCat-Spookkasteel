import test from 'node:test';
import assert from 'node:assert/strict';
import {Group,Mesh,BoxGeometry,MeshBasicMaterial,Texture} from 'three';
import {Gameplay} from '../src/gameplay.js';
import {ghostMaterials} from '../src/ghost-materials.js';
import {enemyDeathOpacity,applyEnemyDeathOpacity,EnemyDeathEffects,initializeDeathSmoke,deathSmokeParticle,DEATH_SMOKE_TEXTURE,DEATH_SMOKE_COLOR} from '../src/enemy-death-effects.js';
import {CastleWorld} from '../src/world.js';

const level={id:'death-fixture',spawn:{position:[0,0,0],orientation:0},entities:[{classname:'MovingEnemy','%name%':'zombie',DaviName:'zombie',Type:'4',SubType:'1',Origin:'0 0 0'}]};
function fixture(){const game=new Gameplay(level),object=game.objects[0];object.animationDurations={death:1.6};return {game,object};}
function actor(materials){const actor=new Group(),mesh=new Mesh(new BoxGeometry(20,40,20),materials);actor.add(mesh);actor.userData.mesh=mesh;return actor;}

test('native death motion is followed by five seconds of fade; clocks freeze and saves resume without replay',()=>{
  const {game,object}=fixture();game.time=12;game.destroy(object);
  assert.equal(object.deathStartedAt,12);assert.equal(object.animationUntil,13.6);assert.equal(object.corpseUntil,18.6);
  assert.equal(enemyDeathOpacity(object,13),1);assert.ok(Math.abs(enemyDeathOpacity(object,16.1)-.5)<1e-10);assert.equal(enemyDeathOpacity(object,18.7),0);
  game.time=16.1;const before=enemyDeathOpacity(object,game.time),age=game.time-object.deathStartedAt;
  game.scripts={enemiesFrozen:true};game.update(.05,[10000,0,0]);
  assert.ok(Math.abs(enemyDeathOpacity(object,game.time)-before)<1e-10);assert.ok(Math.abs(game.time-object.deathStartedAt-age)<1e-10);
  game.scripts=null;object.deathSmokeAnchors=Array.from({length:15},(_,i)=>[i,2*i,3*i]);
  const save=game.snapshot(),restored=fixture();assert.equal(restored.game.restore(save),true);
  assert.equal(restored.object.deathStartedAt,object.deathStartedAt);assert.deepEqual(restored.object.deathSmokeAnchors,object.deathSmokeAnchors);assert.notEqual(restored.object.deathSmokeAnchors[0],object.deathSmokeAnchors[0]);
  assert.equal(enemyDeathOpacity(restored.object,restored.game.time),before);
  restored.game.time=25;const expired=fixture();expired.game.restore(restored.game.snapshot());assert.equal(enemyDeathOpacity(expired.object,expired.game.time),0);
  delete save.objects[0].deathStartedAt;delete save.objects[0].deathSmokeAnchors;save.time=30;save.objects[0].corpseUntil=15.6;
  restored.game.restore(save);assert.equal(restored.object.deathStartedAt,undefined);assert.equal(restored.object.deathSmokeAnchors,undefined);assert.equal(restored.object.corpseUntil,15.6);assert.equal(enemyDeathOpacity(restored.object,30),0,'old expired corpses remain expired');
});

test('fading clones materials and multiplies native ghost alpha, restoring original materials when living',()=>{
  const base=new MeshBasicMaterial({opacity:.8,alphaTest:.3}),map=new Texture(),materials=ghostMaterials([base],map,2),a=actor(materials),other=actor(materials),tracked=[];
  applyEnemyDeathOpacity(a,.5,m=>(tracked.push(m),m));const fade=a.userData.mesh.material[0];
  assert.equal(fade.opacity,.4);assert.equal(fade.map,map);assert.equal(fade.transparent,true);assert.equal(fade.depthWrite,false);assert.ok(fade.alphaTest<=.003);assert.equal(fade.side,materials[0].side);
  assert.equal(other.userData.mesh.material[0].opacity,.8);assert.equal(base.opacity,.8);assert.equal(base.transparent,false);
  applyEnemyDeathOpacity(a,.25,m=>(tracked.push(m),m));assert.equal(tracked.length,1);assert.equal(fade.opacity,.2);
  applyEnemyDeathOpacity(a,1);assert.equal(a.userData.mesh.material,materials);assert.equal(materials[0].transparent,true);
});

test('purple smoke emits once per death, is stable on redraw and restores original bone anchors',()=>{
  const {game,object}=fixture();game.destroy(object);
  const a=actor(new MeshBasicMaterial()),world={actorInstances:new Map([[object.id,a]])},effect=new EnemyDeathEffects(world,game),draws=[],batches=new Map([[DEATH_SMOKE_TEXTURE,{add:(...p)=>draws.push(p)}]]);
  game.time=.4;effect.update(batches);assert.equal(draws.length,15);assert.deepEqual(draws[0][3],DEATH_SMOKE_COLOR);
  const first=structuredClone(draws);draws.length=0;effect.update(batches);assert.deepEqual(draws,first,'redraw has no particle emission or random advancement');
  game.time=3;draws.length=0;effect.update(batches);const mid=structuredClone(draws),save=game.snapshot();
  const restored=fixture();restored.game.restore(save);a.position.set(500,500,500);draws.length=0;
  new EnemyDeathEffects(world,restored.game).update(batches);assert.deepEqual(draws,mid,'restored smoke uses saved anchors and age');
  game.time=8;draws.length=0;effect.update(batches);assert.equal(draws.length,0);assert.equal(effect.states.size,0);
  assert.equal(deathSmokeParticle(1,7,[0,0,0]),null);assert.equal(deathSmokeParticle(1,-1,[0,0,0]),null);
  assert.equal(deathSmokeParticle(0,0,[0,0,0]).size,40);assert.equal(deathSmokeParticle(0,0,[0,0,0]).opacity,.5);
});

test('script-retired witch does not receive generic death smoke',()=>{
  const {game,object}=fixture();object.enemyType='witch';game.destroy(object);
  assert.equal(object.visible,false);assert.equal(object.corpseUntil,game.time);
  const draws=[],world={actorInstances:new Map([[object.id,actor(new MeshBasicMaterial())]])};
  new EnemyDeathEffects(world,game).update(new Map([[DEATH_SMOKE_TEXTURE,{add:(...p)=>draws.push(p)}]]));assert.equal(draws.length,0);
});

test('smoke follows native bind-bone offsets, outward velocity and positive acceleration',()=>{
  const bones=[[0,3,4],[7,8,9],[0,0,-2],[0,5,0]].map(p=>({attachment:[1,0,0,0,1,0,0,0,1,...p]})),particles=initializeDeathSmoke([10,20,30],bones);
  assert.deepEqual(particles[0],{position:[10,32,46],velocity:[0,0,0]});
  assert.deepEqual(particles[1],{position:[10,20,10],velocity:[0,0,-.5]});
  assert.deepEqual(particles[2],{position:[10,32,46],velocity:[0,.6,.8]},'native indexing wraps before the final bone');
  const p=deathSmokeParticle(2,2,particles[2].position,particles[2].velocity);
  assert.deepEqual(p.position,[10,36.400000000000006,47.6]);
});

test('knight breakup resumes its age after load and does not restart at its expiry',()=>{
  const object={id:'knight',health:0,position:[0,0,0],yaw:0,deathStartedAt:10,animationSerial:3,collisionMaxs:[20,80,20]},a=actor(new MeshBasicMaterial()),scene=new Group();
  const world=Object.assign(Object.create(CastleWorld.prototype),{scene,gameplay:{time:12.5},actorInstances:new Map([['knight',a]]),enemyDebris:new Map(),knightParts:Array.from({length:9},()=>({})),instantiateActor:()=>actor(new MeshBasicMaterial()),track:v=>v});
  world.createKnightDebris(object,a);world.updateEnemyDebris(0);
  const parts=world.enemyDebris.get('knight');assert.ok(Math.abs(parts.age-2.5)<1e-8);assert.ok(parts.parts.every(p=>p.actor.userData.mesh.material.opacity<1));
  const positions=parts.parts.map(p=>p.actor.position.toArray());world.updateEnemyDebris(0);assert.deepEqual(parts.parts.map(p=>p.actor.position.toArray()),positions,'redraw leaves breakup motion unchanged');
  world.gameplay.time=11;world.updateEnemyDebris(0);assert.ok(Math.abs(world.enemyDebris.get('knight').age-1)<1e-8,'loading an earlier death pose rewinds existing debris');
  world.gameplay.time=13.5;world.updateEnemyDebris(0);assert.equal(world.enemyDebris.size,0);
});
