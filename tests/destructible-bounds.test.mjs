import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {CastleWorld} from '../src/world.js';
import {Gameplay} from '../src/gameplay.js';
import {debrisParticles} from '../src/destructible-effects.js';

test('destroying a rotated and scaled prop passes its rendered world bounds to fragment spawning',()=>{
  const game=new Gameplay({id:'bounds',entities:[{classname:'AdamAnyActor','%name%':'crate',Origin:'100 20 200',ActorFileName:'brcrate.act'}]},{deferInit:true});
  const object=game.objects[0],actor=new THREE.Group();
  const geometry=new THREE.BoxGeometry(10,20,30),material=new THREE.MeshBasicMaterial(),mesh=new THREE.Mesh(geometry,material);
  actor.add(mesh);actor.position.set(100,20,200);actor.rotation.y=Math.PI/2;mesh.scale.set(2,3,4);
  actor.userData.mesh=mesh;actor.userData.template={data:{settings:{damageThreshold:[1,1],debris:{types:[{actor:'brok1.act',MinNr:20,MaxNr:20,MinVelocity:100,MaxVelocity:100}]}}}};
  CastleWorld.prototype.configureDestructible.call({},object,actor);game.destroy(object);
  const effect=game.explosions[0];assert.deepEqual(effect.position,[100,20,200]);assert.deepEqual(effect.scale,[2,3,4]);
  for(let i=0;i<3;i++){assert.ok(Math.abs(effect.bounds.min[i]-[-60,-30,-10][i])<1e-8);assert.ok(Math.abs(effect.bounds.max[i]-[60,30,10][i])<1e-8);}
  const particles=debrisParticles(effect);assert.equal(particles.length,20);
  for(const p of particles)for(let i=0;i<3;i++)assert.ok(p.position[i]>=effect.position[i]+effect.bounds.min[i]&&p.position[i]<=effect.position[i]+effect.bounds.max[i]);
  geometry.dispose();material.dispose();
});
