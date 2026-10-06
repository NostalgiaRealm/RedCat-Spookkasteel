import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {PlayerWorldLight} from '../src/player-world-light.js';
import {WorldEffects} from '../src/world-effects.js';
import {worldLightFrame,worldLightmapLuxel} from '../src/world-lighting.js';

function fixture(){
  const geometry=new THREE.BoxGeometry(20,20,40);geometry.translate(0,0,20);geometry.computeBoundingBox();
  const mesh=new THREE.Mesh(geometry);mesh.rotation.x=-Math.PI/2;mesh.scale.setScalar(1.3);
  mesh.userData.actorLighting={bounds:geometry.boundingBox.clone()};
  return {player:{position:[100,5,200]},redcat:{visible:true,userData:{mesh}},
    scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),modelMeshes:new Map(),
    syncActorLighting(lights){this.actorLights=[...lights];}};
}

test('native rc glow uses fixed actor-box centre, original offset/radius/colour and follows movement',()=>{
  const world=fixture(),effect=new PlayerWorldLight(world),light=effect.update();
  assert.equal(light.radius,120);assert.deepEqual(light.color,[200/255,200/255,200/255]);assert.equal(light.castShadow,false);
  assert.ok(Math.abs(light.position[1]-51)<1e-8);assert.ok(Math.abs(light.position[2]-200)<1e-8);
  const original=[...light.position];
  world.redcat.userData.mesh.geometry.boundingBox.translate(new THREE.Vector3(100,100,100));
  world.player.position=[115,85,190];const moved=effect.update();
  assert.equal(moved,light,'one light record reused');
  moved.position.forEach((v,i)=>assert.ok(Math.abs(v-original[i]-[15,80,-10][i])<1e-8));
  world.redcat.visible=false;world.gameplay={scripts:{playerVisible:false}};
  assert.equal(effect.update(),light,'native owned light is independent of camera/script visibility');
  world.player=null;assert.equal(effect.update(),null);
});

test('native falloff lights only nearby world samples and never alters the baked lightmap',()=>{
  const light=new PlayerWorldLight(fixture()).update();
  const frame=worldLightFrame([1,0,0],[0,0,1],[0,0],[0,1,0],5),base=[.1,.1,.1];
  const nearby=worldLightmapLuxel(base,[light],frame,[6,12]);
  assert.ok(nearby.every(value=>value>.1&&value<.5),'small local pool, not fullbright');
  assert.deepEqual(worldLightmapLuxel(base,[light],frame,[30,30]),worldLightmapLuxel(base,[],frame,[30,30]));
  assert.deepEqual(base,[.1,.1,.1]);
});

test('player light reaches world and actor lighting while preserving the eight-slot budget',()=>{
  const world=fixture();
  const objects=Array.from({length:12},(_,i)=>({id:`lamp${i}`,position:[i,0,0],enabled:true,visible:true,
    entity:{classname:'DynamicLightEntity',ColorA:'20 20 20',ColorZ:'20 20 20',RadiusA:'100',RadiusZ:'100'}}));
  const effects=new WorldEffects(world,{objects,projectiles:[],settings:{},time:0},{});
  effects.attachLights();const slots=[...effects.pointLights];effects.update(0);
  assert.equal(effects.lights.length,13);assert.equal(world.actorLights.at(-1),effects.playerLight.light);
  assert.equal(effects.lightCount.value,8);assert.equal(effects.lightRadii[0],120);
  assert.deepEqual(effects.lightPositions[0].toArray(),effects.playerLight.light.position);
  world.player.position=[0,105,0];world.redcat.visible=false;effects.update(0);
  assert.ok(Math.abs(effects.lightPositions[0].y-151)<1e-8);
  assert.deepEqual(effects.pointLights,slots);assert.equal(world.scene.children.length,8);
  effects.dispose();assert.equal(world.scene.children.length,0);
});
