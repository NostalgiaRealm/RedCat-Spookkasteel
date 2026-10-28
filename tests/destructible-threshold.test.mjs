import test from 'node:test';
import assert from 'node:assert/strict';
import {Group,Mesh,BoxGeometry,MeshBasicMaterial} from 'three';
import {Gameplay} from '../source/gameplay.js';
import {CastleWorld,actorVisible} from '../source/world.js';
import {targetableObject} from '../source/targeting.js';
import {damageDestructible,restorePropDamage} from '../source/destructible-damage.js';
import {advanceExplosionDamage} from '../source/explosion-damage.js';

const entity=(classname,name,extra={})=>({classname,'%name%':name,DaviName:name,Origin:'0 0 0',...extra});
const level={id:'prop-threshold',entities:[
  entity('AdamAnyActor','crate',{ActorFileName:'brcrate.act',Targetable:'1',AfterDestroyCommand:'door.open'}),
  entity('DoorModel','door'),entity('MovingEnemy','frog',{Type:'5',Origin:'1000 0 0'})
]};
function configure(game,limit=1) {
  const crate=game.find('crate')[0],actor=new Group();
  actor.userData.template={data:{settings:{destroyable:true,canBeShot:true,damageThreshold:[limit,limit]}}};
  CastleWorld.prototype.configureDestructible.call({},crate,actor);
  return crate;
}
function fixture(limit=1,save=null) {
  const events=[],game=new Gameplay(level,{save,onEvent:event=>events.push(event)});
  return {game,crate:configure(game,limit),events};
}
const hit=(game,crate,damage)=>game.playerProjectileHit(crate,{damage,type:1});

test('a prop survives exact projectile equality, remains targetable/collidable, and breaks on the next positive hit',()=>{
  const {game,crate,events}=fixture();
  const actor=new Group(),mesh=new Mesh(new BoxGeometry(10,10,10),new MeshBasicMaterial());
  actor.add(mesh);actor.userData.mesh=mesh;
  const world={gameplay:game};CastleWorld.prototype.configureExplosionTarget.call(world,crate,actor);
  const collision=CastleWorld.prototype.actorCollisionRecord.call(world,crate,actor,{blocksPlayer:true,canBeShot:true});
  hit(game,crate,1);
  assert.equal(crate.propDamage,1);assert.equal(crate.health,1);assert.equal(crate.enabled,true);
  assert.equal(actorVisible(crate,game.time),true);assert.equal(targetableObject(crate),true);
  assert.equal(crate.explosionActive(),true);assert.equal(collision.active(),true);assert.equal(game.find('door')[0].open,false);
  assert.equal(game.explosions.length,0);
  hit(game,crate,.125);
  assert.equal(crate.health,0);assert.equal(crate.enabled,false);assert.equal(actorVisible(crate,game.time),false);
  assert.equal(collision.active(),false);
  assert.equal(targetableObject(crate),false);assert.equal(game.find('door')[0].open,true);
  hit(game,crate,1);game.destroy(crate);
  assert.equal(game.explosions.length,1);assert.equal(events.filter(e=>e.type==='enemyDefeated'&&e.id==='crate').length,1);
  mesh.geometry.dispose();mesh.material.dispose();
});

test('all projectile strengths and partial hits use the same strict accumulated limit',()=>{
  for(const limit of [1,2,4,100]) {
    const {game,crate}=fixture(limit);
    hit(game,crate,limit*.25);hit(game,crate,limit*.75);
    assert.equal(crate.propDamage,limit);assert.equal(crate.health,limit);
    hit(game,crate,.25);assert.equal(crate.health,0);
  }
});

test('blast and projectile damage share one accumulator without suppressing later blast ticks at equality',()=>{
  const {game,crate}=fixture(2);
  hit(game,crate,1);
  crate.explosionBounds=()=>({origin:[0,0,0],min:[0,0,0],max:[0,0,0]});
  game.explosionDamage=[{sourceId:'other',birth:0,position:[0,0,0],radius:100,rate:10}];
  game.time=.1;advanceExplosionDamage(game,.1,[1000,0,0]);
  assert.equal(crate.propDamage,2);assert.equal(crate.health,2);assert.equal(game.explosions.length,0);
  game.time=.2;advanceExplosionDamage(game,.1,[1000,0,0]);
  assert.equal(crate.health,0);assert.equal(game.explosions.length,1);
});

test('saving at exact equality preserves an intact prop and its next-hit destruction across actor loading',()=>{
  const {game,crate}=fixture(100);hit(game,crate,100);
  const save=JSON.parse(JSON.stringify(game.snapshot()));
  assert.equal(save.objects.find(o=>o.id==='crate').propDamage,100);
  const restored=fixture(100,save);
  assert.equal(restored.crate.health,100);assert.equal(restored.crate.propDamage,100);
  assert.equal(actorVisible(restored.crate,0),true);
  hit(restored.game,restored.crate,.125);assert.equal(restored.crate.health,0);
  const destroyed=fixture(100,JSON.parse(JSON.stringify(restored.game.snapshot())));
  assert.equal(destroyed.crate.health,0);assert.equal(destroyed.crate.propDamage,undefined);
  // Saves deliberately keep the active explosion record (explosion-damage-native.md).
  assert.equal(actorVisible(destroyed.crate,0),false);
});

test('legacy saves keep their remaining budget and same-world restoration clears newer accumulated damage',()=>{
  const {game,crate}=fixture(100),legacy=JSON.parse(JSON.stringify(game.snapshot()));
  const entry=legacy.objects.find(o=>o.id==='crate');entry.health=25;delete entry.propDamage;
  hit(game,crate,99);assert.equal(crate.propDamage,99);
  assert.equal(game.restore(legacy),true);configure(game,100);
  assert.equal(crate.health,25);assert.equal(crate.propDamage,undefined);
  hit(game,crate,25);assert.equal(crate.health,25);hit(game,crate,1);assert.equal(crate.health,0);
  const fresh=fixture(100,legacy);hit(fresh.game,fresh.crate,25);
  assert.equal(fresh.crate.health,25);assert.equal(fresh.crate.propDamage,25);
});

test('explicit script destruction still bypasses the threshold, including an equality-state prop',()=>{
  const {game,crate}=fixture();hit(game,crate,1);
  game.execute('crate.destroy');assert.equal(crate.health,0);assert.equal(game.find('door')[0].open,true);
  game.execute('crate.destroy');assert.equal(game.explosions.length,1);
});

test('indestructible actors still run OnHit commands while ignoring damage, and enemy equality still defeats',()=>{
  const {game,crate}=fixture();crate.actorSettings.destroyable=false;crate.entity.OnHitCommand='door.open';
  hit(game,crate,100);assert.equal(crate.health,1);assert.equal(crate.propDamage,undefined);
  assert.equal(game.find('door')[0].open,true);
  const frog=game.find('frog')[0];game.hurtEnemy(frog,frog.health);assert.equal(frog.health,0);
  assert.equal(frog.propDamage,undefined);assert.equal(game.state.kills,1);
});

test('invalid damage and accumulator state cannot revive destroyed props or poison future damage',()=>{
  const {game,crate}=fixture();
  for(const damage of [0,-1,NaN,Infinity])assert.equal(damageDestructible(game,crate,damage),false);
  assert.equal(crate.propDamage,undefined);
  for(const value of [-1,NaN,Infinity,2,undefined]){crate.propDamage=.5;restorePropDamage(crate,value);assert.equal(crate.propDamage,undefined);}
  restorePropDamage(crate,1);assert.equal(crate.propDamage,1);
  game.destroy(crate);restorePropDamage(crate,0);assert.equal(crate.propDamage,undefined);
  assert.equal(damageDestructible(game,crate,1),false);assert.equal(game.explosions.length,1);
});
