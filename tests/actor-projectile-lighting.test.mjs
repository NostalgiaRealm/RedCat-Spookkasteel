import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import * as THREE from 'three';
import {actorAmbientColor,actorDynamicLights,createActorLighting,updateActorLighting,applyActorLighting} from '../src/actor-lighting.js';
import {projectileLight} from '../src/projectile-lighting.js';
import {WorldEffects} from '../src/world-effects.js';

const actor=name=>JSON.parse(fs.readFileSync(new URL(`../assets/actors/${name}.json`,import.meta.url))).settings;

test('original heart ambient interpolates red to white and wraps over two seconds',()=>{
  const settings=actor('heart');assert.equal(settings.lightAnimation.enabled,true);
  assert.deepEqual(actorAmbientColor(settings,0),[200,90,90]);
  assert.deepEqual(actorAmbientColor(settings,.5),[227.5,172.5,172.5]);
  assert.deepEqual(actorAmbientColor(settings,1),[255,255,255]);
  assert.deepEqual(actorAmbientColor(settings,2),[200,90,90]);
  const state=createActorLighting(settings);updateActorLighting(state,[0,0,0],1);
  assert.equal(state.uniforms.actorAmbientMode.value,2);assert.equal(state.uniforms.actorSunFactor.value,0);
  assert.equal(state.uniforms.actorAmbient.value.getHex(),0xffffff);
});

test('stained glass uses original fullbright ambient and ordinary actors retain world lighting',()=>{
  const glass=createActorLighting(actor('glaslood'));updateActorLighting(glass,[0,0,0],0);
  assert.equal(glass.uniforms.actorAmbientMode.value,2);assert.equal(glass.uniforms.actorSunFactor.value,0);
  assert.equal(glass.uniforms.actorAmbient.value.getHex(),0xffffff);
  const knight=createActorLighting(actor('knight'));updateActorLighting(knight,[0,0,0],0,[],{sun:{color:[128,64,32],normal:[0,1,0]},ambient:[.1,.2,.3]});
  assert.equal(knight.uniforms.actorAmbientMode.value,0);assert.equal(knight.uniforms.actorSunFactor.value,1);
  assert.deepEqual(knight.uniforms.actorAmbient.value.toArray(),[.1,.2,.3]);
  assert.deepEqual(knight.uniforms.actorFillColor.value.toArray(),[128/255,64/255,32/255]);
  updateActorLighting(knight,[0,0,0],0);
  assert.deepEqual(knight.uniforms.actorFillColor.value.toArray(),[0,0,0],'no visible Sun clears the old fill');
});

test('actors choose their own closest two in-range lights, never the camera selection',()=>{
  const lights=[100,30,10,500].map(x=>({position:[x,0,0],color:[1,0,0],radius:200}));
  assert.deepEqual(actorDynamicLights([0,0,0],lights),[lights[2],lights[1]]);
  assert.deepEqual(actorDynamicLights([500,0,0],lights),[lights[3]]);
  assert.deepEqual(actorDynamicLights([0,0,0],lights,0),[]);
  const a=createActorLighting({}),b=createActorLighting({});updateActorLighting(a,[0,0,0],0,lights);updateActorLighting(b,[500,0,0],0,lights);
  assert.deepEqual(a.uniforms.actorLightDirections.value[0].toArray(),[1,0,0]);
  assert.deepEqual(b.uniforms.actorLightDirections.value[0].toArray(),[0,0,0]);
  assert.deepEqual(a.uniforms.actorLightColors.value[0].toArray(),[.95,0,0]);
});

test('material clones used for ghosts and death fade retain isolated lighting state when repatched',()=>{
  const material=new THREE.MeshLambertMaterial(),state=createActorLighting({});applyActorLighting(material,state);
  const clone=material.clone();applyActorLighting(clone,state);
  const shader={uniforms:{},vertexShader:THREE.ShaderLib.lambert.vertexShader,fragmentShader:THREE.ShaderLib.lambert.fragmentShader};clone.onBeforeCompile(shader);
  assert.equal(shader.uniforms.actorAmbient,state.uniforms.actorAmbient);
  assert.match(shader.vertexShader,/actorVertexColor=clamp/);
  assert.match(shader.fragmentShader,/actorDecode\(actorEncode\(actorTexel.rgb\)\*actorVertexColor\)/);
  assert.ok(!shader.fragmentShader.includes('#include <lights_fragment_begin>'));
});

test('default Sun and animated ambient use native fallback settings independently of actual Sun intensity',()=>{
  const state=createActorLighting({lighting:{useSun:false,useAmbient:true,useDefaultSun:true,sunIntensityFactor:0,sunColor:[80,100,120],sunNormal:[0,4,0]},
    lightAnimation:{enabled:true,start:[10,20,30],end:[30,40,50],duration:2,pattern:'az'}});
  updateActorLighting(state,[0,0,0],.5);
  assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),[20/255,30/255,40/255]);
  assert.deepEqual(state.uniforms.actorFillColor.value.toArray(),[80/255,100/255,120/255]);
  assert.deepEqual(state.uniforms.actorFillNormal.value.toArray(),[0,1,0]);
  updateActorLighting(state,[0,0,0],.5,[],{ambient:[0,0,0]});
  assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),[0,0,0],'unlit floor overrides configured ambient; missing floor does not');
});

test('native projectile light colours and radius are independent of sprite size and disappear with owner',()=>{
  const player={kind:'superShot',id:'shot',position:[1,2,3],spriteScale:99};
  assert.deepEqual(projectileLight(player),{position:[1,2,3],color:[250/255,175/255,20/255],radius:200,projectileId:'shot'});
  const stats={projectilehard:{RcMushRoom:{TrailRed:40,TrailGreen:80,TrailBlue:120}}};
  assert.deepEqual(projectileLight({...player,kind:'mushRoom'},stats,'Hard').color,[40/255,80/255,120/255]);
  assert.equal(projectileLight({...player,kind:'non-native'}),null);
  const world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),modelMeshes:new Map(),syncActorLighting(lights){this.actorLights=[...lights];}};
  const game={objects:[],projectiles:[player],settings:{},difficulty:'Normal'};
  const effects=new WorldEffects(world,game,{});effects.attachLights();effects.update(0);
  assert.equal(effects.lights.length,1);assert.equal(world.actorLights.length,1);assert.equal(effects.lightRadii[0],200);
  game.projectiles=[];effects.update(0);assert.equal(effects.lights.length,0);assert.equal(effects.lightRadii[0],0);effects.dispose();
});

test('authored dynamic shadow flags reach actor floor lighting without changing actor direct-light eligibility',()=>{
  const level=JSON.parse(fs.readFileSync(new URL('../data/levels/lvl04a/level.json',import.meta.url)));
  const entities=level.entities.filter(e=>e.classname==='DynamicLightEntity');
  const objects=entities.map((entity,i)=>({id:`lamp${i}`,kind:'effect',entity,position:(entity.Origin||entity.origin).split(/\s+/).map(Number),enabled:true,visible:true}));
  const world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),modelMeshes:new Map(),syncActorLighting(lights){this.actorLights=[...lights];}};
  const effects=new WorldEffects(world,{objects,projectiles:[],settings:{},time:0},{});effects.attachLights();effects.update(0);
  assert.equal(effects.lights.length,entities.length);
  for(let i=0;i<entities.length;i++)assert.equal(world.actorLights[i].castShadow,entities[i].CastShadow==='1');
  assert.ok(world.actorLights.some(light=>light.castShadow),'original tower has shadow-casting lamps');
  const lamp=world.actorLights.find(light=>light.castShadow);
  assert.ok(actorDynamicLights(lamp.position,[lamp]).includes(lamp),'shadow flag belongs to floor luxels, not puppet direct lighting');
  effects.dispose();
});
