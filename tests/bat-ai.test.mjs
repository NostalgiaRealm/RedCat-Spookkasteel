import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import * as THREE from 'three';
import { Gameplay } from '../src/gameplay.js';
import {batOverlapsPlayer} from '../src/enemy-flight.js';
import { GAMEPLAY_SETTINGS } from '../src/gameplay-settings.js';
import { BspCollider } from '../src/collision.js';
import { CastleWorld } from '../src/world.js';

function fixture(variant=1,extra={}) {
  const level={id:'lvl01a',spawn:{position:[0,0,0],orientation:0},entities:[{
    classname:'MovingEnemy','%name%':'bat',Type:'2',SubType:String(variant),Origin:'0 60 0',StartOrientation:'6',...extra
  }]};
  const events=[],game=new Gameplay(level,{onEvent:event=>events.push(event)}),bat=game.objects[0];
  bat.animationDurations={attack:1.600008,hurt:1.866676,death:2.00001};
  bat.collisionMins=[-12,0,-12];bat.collisionMaxs=[12,20,12];
  return {game,bat,events};
}
const advance=(game,seconds,position,options={})=>{
  for(let time=0;time<seconds-1e-8;time+=.025)game.update(Math.min(.025,seconds-time),position,options);
};
const clearTrace=(a,b)=>({fraction:1,end:[...b],normal:[0,1,0],startSolid:false});

test('green bats pursue through the inherited attack radius and damage only on contact',()=>{
  const {game,bat,events}=fixture();
  game.update(.1,[0,0,80],{traceEnemy:clearTrace});
  assert.equal(bat.animationState,'walk');assert.equal(bat.pendingAttack,null);
  assert.ok(bat.position[1]<60&&bat.position[2]>0,'bat descends and closes on RedCat');
  assert.equal(game.state.health,10,'AttackRange100 cannot hurt RedCat from a distance');
  assert.equal(events.filter(e=>e.type==='enemyAttack').length,0);
  advance(game,.65,[0,0,80],{traceEnemy:clearTrace});
  assert.equal(game.state.health,9);assert.equal(game.projectiles.length,0);
  assert.ok(events.some(e=>e.type==='enemyAttack'&&e.contact===true));
  assert.equal(batOverlapsPlayer(bat,[0,0,80]),false);
  assert.ok(Math.hypot(bat.position[0],bat.position[2]-80)<24,'contact stops at RedCat hull, not his origin');
  assert.notEqual(bat.animationState,'attack','contact does not stop flight for shoot1');
});

test('green bat contact cooldown is one second, independent of inherited melee timing',()=>{
  const {game,bat,events}=fixture(1,{Origin:'0 0 0'}),player=[0,0,0];
  game.update(.025,player);assert.equal(game.state.health,9);
  advance(game,.9,player);assert.equal(game.state.health,9);
  advance(game,.125,player);assert.equal(game.state.health,8);
  assert.equal(events.filter(e=>e.type==='enemyAttack').length,2);
  assert.ok(bat.attackTimer>.9);
});

test('bat contact uses its asymmetric hull and the swept movement segment',()=>{
  const {game,bat}=fixture(1,{Origin:'0 0 0'});
  bat.collisionMins=[-3,10,-2];bat.collisionMaxs=[3,20,2];
  bat.stats={...bat.stats,Speed:1000};
  game.update(.1,[0,0,90],{traceEnemy:clearTrace});
  assert.equal(game.state.health,9,'a fast flight reaches contact during this frame');
  const narrow=fixture(1,{Origin:'0 0 0'});
  narrow.bat.collisionMins=[-3,60,-2];narrow.bat.collisionMaxs=[3,70,2];
  narrow.bat.stats={...narrow.bat.stats,Speed:0};
  narrow.game.update(.1,[0,0,0]);
  assert.equal(narrow.game.state.health,10,'a bat entirely above the player does not touch');
});

test('blocking geometry and obscured remembered positions cannot cause remote contact damage',()=>{
  const {game,bat}=fixture(1,{Origin:'0 0 0'}),player=[0,0,80];
  const blocked=(a,b)=>({fraction:0,end:[...a],normal:[0,0,-1],startSolid:false});
  advance(game,1.2,player,{traceEnemy:blocked});
  assert.deepEqual(bat.position,[0,0,0]);assert.equal(game.state.health,10);
  advance(game,.2,player,{traceEnemy:clearTrace,lineOfSight:()=>false});
  assert.ok(bat.position[2]>0,'recently seen position remains a pursuit target');
  assert.equal(game.state.health,10);
  bat.position=[...player];game.update(.1,player,{lineOfSight:()=>false});
  assert.equal(game.state.health,10,'overlapping hulls on opposite sides of a wall do not hurt');
});

test('green bat hurt, enemy freeze, and cutscenes pause pursuit and the saved contact cooldown',()=>{
  const {game,bat}=fixture(1,{Origin:'0 0 0'}),player=[0,0,0];
  game.update(.025,player);const initialCooldown=bat.attackTimer;
  game.scripts={enemiesFrozen:true};advance(game,2,player);
  assert.equal(bat.attackTimer,initialCooldown);assert.equal(game.state.health,9);
  game.scripts={cutscene:true};advance(game,2,player);
  assert.equal(bat.attackTimer,initialCooldown);assert.equal(game.state.health,9);
  game.scripts=null;game.hurtEnemy(bat,1);const before=[...bat.position];
  advance(game,.5,[0,0,90]);assert.deepEqual(bat.position,before);
  assert.equal(bat.animationState,'hurt');assert.equal(game.state.health,9);
  const restored=new Gameplay(game.level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  restored.objects[0].animationDurations={...bat.animationDurations};
  restored.objects[0].collisionMins=[...bat.collisionMins];restored.objects[0].collisionMaxs=[...bat.collisionMaxs];
  advance(game,1.75,[0,0,90]);advance(restored,1.75,[0,0,90]);
  assert.deepEqual(restored.objects[0].position,bat.position);
  assert.equal(restored.objects[0].attackTimer,bat.attackTimer);
  assert.equal(restored.state.health,game.state.health);
});

test('old saved green bat melee attacks convert to contact pursuit without a remote hit',()=>{
  const {game,bat}=fixture(1,{Origin:'0 0 0'});
  bat.animationState='attack';bat.animationUntil=10;bat.pendingAttack={at:0};bat.attackTimer=3;
  const restored=new Gameplay(game.level,{save:JSON.parse(JSON.stringify(game.snapshot()))}),copy=restored.objects[0];
  restored.update(.1,[0,0,80]);
  assert.equal(copy.pendingAttack,null);assert.equal(copy.animationState,'walk');
  assert.ok(copy.position[2]>0);assert.equal(restored.state.health,10);
});

test('yellow and red bats retain native flight speed, shoot motions and projectile release timing',()=>{
  for(const variant of [2,3]) {
    const {game,bat,events}=fixture(variant,{Origin:'0 0 0'});
    game.update(.1,[0,0,300],{traceEnemy:clearTrace});
    assert.equal(bat.animationState,'walk');
    assert.ok(Math.abs(bat.position[2]-GAMEPLAY_SETTINGS['bat'+variant].Normal.Speed*.1)<1e-8);
    const player=[0,0,bat.position[2]+150];
    game.update(.025,player);assert.equal(bat.animationState,'attack');
    advance(game,.7,player);assert.equal(events.filter(e=>e.type==='enemyProjectile').length,0);
    advance(game,.05,player);assert.equal(events.filter(e=>e.type==='enemyProjectile').length,1);
    assert.equal(game.projectiles[0].kind,'enemyShot');assert.equal(game.state.health,10);
  }
});

test('original castle bat variants resolve to contact and ranged behavior without map overrides',()=>{
  const original=JSON.parse(fs.readFileSync(new URL('../data/levels/lvl01a/level.json',import.meta.url)));
  const entities=original.entities.filter(e=>e.classname==='MovingEnemy'&&e.Type==='2');
  assert.equal(entities.length,4);
  for(const entity of entities) {
    const game=new Gameplay({...original,entities:[entity]}),bat=game.objects[0];
    assert.equal(bat.flying,true);
    assert.equal(bat.ranged,Number(entity.SubType)!==1);
    const player=[bat.position[0],bat.position[1],bat.position[2]+80];bat.yaw=0;
    game.update(.025,player);
    assert.equal(bat.animationState,bat.ranged?'attack':'walk');
    assert.equal(game.state.health,10);
  }
});

test('authored active bat spawns fit the stable imported body hull rather than spread wings',async()=>{
  let enabled=0;
  for(let index=1;index<5;index++) {
    const original=JSON.parse(fs.readFileSync(new URL(`../data/levels/lvl0${index}a/level.json`,import.meta.url)));
    const entities=original.entities.filter(e=>e.classname==='MovingEnemy'&&e.Type==='2');
    const game=new Gameplay({...original,entities}),world=new CastleWorld({},{});
    world.collider=new BspCollider(original.collision);world.physicalModels=[0];
    world.loadActor=async name=>{
      const data=JSON.parse(fs.readFileSync(new URL(`../assets/actors/${name}.json`,import.meta.url)));
      const geometry=world.track(new THREE.BufferGeometry());
      geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
      geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
      return {data,geometry,materials:[world.track(new THREE.MeshBasicMaterial())]};
    };
    try {
      await world.attachGameplay(game);
      for(const bat of game.objects) {
        if(!bat.enabled)continue;enabled++;
        assert.equal(world.collider.trace(bat.position,bat.position,bat.collisionMins,bat.collisionMaxs).startSolid,false,`${original.id} ${bat.entity.DaviName} must fit its authored location`);
        assert.ok(bat.collisionMaxs[0]<14&&bat.collisionMaxs[2]<14,'the wings cannot inflate a square movement hull');
        const before=[...bat.collisionMins,...bat.collisionMaxs],actor=world.actorInstances.get(bat.id);
        actor.userData.animator.play('walkfw');actor.userData.animator.update(.35);
        assert.deepEqual([...bat.collisionMins,...bat.collisionMaxs],before,'wing animation cannot change the body collision hull');
      }
      if(index===1) {
        const yellow=game.find('BAT03')[0];
        assert.equal(world.collider.trace(yellow.position,yellow.position,[-24,0,-24],[24,34.324,24]).startSolid,true,'regression fixture reproduces the former oversized hull');
        assert.ok(yellow.collisionMins[1]>6&&yellow.collisionMaxs[1]>44,'retain source body height and offset');
      }
    } finally {world.dispose();}
  }
  assert.equal(enabled,17,'all originally active castle, graveyard and tower bats were checked');
});
