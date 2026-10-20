import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {DestructibleEffects} from '../src/destructible-effects.js';

function prototype() {
  const mesh=new THREE.Mesh(new THREE.BoxGeometry(1,1,1),new THREE.MeshLambertMaterial({side:THREE.DoubleSide}));
  return {userData:{mesh,template:{data:{settings:{}}}}};
}
const source=(id,position,types)=>({id,position,enabled:true,visible:true,health:1,actorSettings:{debris:{types}}});

test('nearby cohorts reserve the sum of original fragment maxima without changing native spawn limits',()=>{
  const game={time:20,objectPosition:object=>object.position},world={gameplay:game,player:{position:[0,0,0]}};
  const effect=new DestructibleEffects(world,game),a=prototype(),b=prototype();effect.prototypes.set('wood',a);effect.prototypes.set('stone',b);
  effect.sources=[source('wood1',[0,0,100],[{actor:'wood.act',MinNr:5,MaxNr:8}]),source('wood2',[100,0,0],[{actor:'wood.act',MinNr:5,MaxNr:8}]),
    source('stone',[0,0,200],[{actor:'stone.act',MinNr:2,MaxNr:3}]),source('far',[0,0,513],[{actor:'wood.act',MinNr:20,MaxNr:30}])];
  effect.prepareNearby(undefined,Infinity,true);assert.equal(effect.renderPool.owned.get(a),16);assert.equal(effect.renderPool.owned.get(b),3);
  const count=effect.renderPool.ownedTotal;effect.prepareNearby(undefined,Infinity,true);assert.equal(effect.renderPool.ownedTotal,count,'reserving again reuses existing entries');
  game.time=40;effect.prepareNearby(undefined,Infinity,true);effect.renderPool.trim(40);assert.equal(effect.renderPool.ownedTotal,count,'the nearby cohort stays warm after an idle wait');
  effect.sources.forEach(object=>object.enabled=false);game.time=41;effect.prepareNearby(undefined,Infinity,true);effect.renderPool.trim(51);
  assert.equal(effect.renderPool.ownedTotal,2,'only one shader owner remains for each departed artwork');effect.dispose();
});

test('preparation work stays bounded for large groups while a real native spawn remains unrestricted',()=>{
  const game={time:0,objectPosition:object=>object.position},world={player:{position:[0,0,0]}},effect=new DestructibleEffects(world,game),p=prototype();effect.prototypes.set('piece',p);
  effect.sources=[source('large',[0,0,0],[{actor:'piece.act',MinNr:200,MaxNr:250}])];
  effect.prepareNearby();assert.equal(effect.renderPool.ownedTotal,8);
  for(let i=0;i<30;i++)effect.prepareNearby();assert.equal(effect.renderPool.ownedTotal,128);
  const entries=Array.from({length:200},()=>effect.renderPool.acquire(p));assert.equal(effect.renderPool.active.size,200,'native fragmentation is never capped by warm-up budget');
  entries.forEach(entry=>effect.renderPool.release(entry,0));effect.dispose();
});
