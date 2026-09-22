import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {Gameplay} from '../src/gameplay.js';
import {placeDecal,decalGeometry,DecalEffects,decalTextureKey} from '../src/decal-effects.js';

const level=JSON.parse(readFileSync(new URL('../data/levels/lvl00a/level.json',import.meta.url)));
const ufo=level.entities.find(e=>e.DaviName==='ufohole');

test('original UFO decal projects down 3200 units, uses 0.5 face offset and 128-unit square',()=>{
  const rays=[],placement=placeDecal(ufo,(a,b)=>{rays.push([a,b]);return {end:[a[0],-160,a[2]],normal:[0,1,0],fraction:12/3200};});
  assert.deepEqual(rays,[[[-1193,-148,2330],[-1193,-3348,2330]]]);
  assert.deepEqual(placement,{position:[-1193,-159.5,2330],normal:[0,1,0]});
  const geometry=decalGeometry(ufo,placement);
  assert.deepEqual(geometry.positions,[[-1129,-159.5,2266],[-1129,-159.5,2394],[-1257,-159.5,2394],[-1257,-159.5,2266]]);
  assert.deepEqual(geometry,decalGeometry({...ufo,Rotation:'0'},placement),'12 means the same full turn as the original clock-face zero');
});

test('native decal placement supports ceiling and nearest of eight wall directions',()=>{
  let count=0;
  const ceiling=placeDecal({...ufo,OriginPlacement:'2'},(a,b)=>{assert.equal(b[1],a[1]+3200);return {fraction:.1,end:[a[0],100,a[2]],normal:[0,-1,0]};});
  assert.deepEqual(ceiling.position,[-1193,99.5,2330]);
  const wall=placeDecal({...ufo,OriginPlacement:'3'},(a,b)=>{
    assert.ok(Math.abs(Math.hypot(...b.map((v,i)=>v-a[i]))-3200)<1e-8);assert.equal(b[1],a[1]);
    const i=count++;return i===3?{fraction:.1,end:[10,20,30],normal:[1,0,0]}:{fraction:.5,end:[99,99,99],normal:[0,0,1]};
  });
  assert.equal(count,8);assert.deepEqual(wall,{position:[10.5,20,30],normal:[1,0,0]});
  assert.equal(placeDecal(ufo,()=>null),null,'missing surfaces must not create a floating patch');
});

test('real forest decal entities produce fixed surface geometry and obey script enable/hide',()=>{
  const game=new Gameplay(level,{deferInit:true}),floor=new THREE.Mesh(new THREE.PlaneGeometry(10000,10000),new THREE.MeshBasicMaterial({side:THREE.DoubleSide}));
  floor.rotation.x=-Math.PI/2;floor.position.y=-160;
  const world={modelMeshes:new Map([[0,[floor]]]),scene:new THREE.Scene(),track:resource=>resource};
  const decals=game.objects.filter(o=>o.entity.classname==='EffectDecalEntity');
  const maps=new Map(decals.map(o=>[decalTextureKey(o.entity),new THREE.Texture()]));
  const effects=new DecalEffects(world,game,maps),object=game.find('ufohole')[0],entry=effects.entries.get(object.id);
  assert.equal(effects.entries.size,14);assert.ok(entry.mesh.visible);assert.ok(Math.abs(entry.placement.position[1]+159.5)<1e-6);
  assert.equal(entry.mesh.material.map,maps.get('ufohole.bmp|ufohole_a.bmp'));assert.equal(entry.mesh.material.depthWrite,false);
  const before=[...entry.mesh.geometry.attributes.position.array];
  game.command(object,'disable');effects.update();assert.equal(entry.mesh.visible,false);
  game.command(object,'enable');effects.update();assert.equal(entry.mesh.visible,true);
  game.command(object,'hide');effects.update();assert.equal(entry.mesh.visible,false);
  game.command(object,'show');effects.update();assert.equal(entry.mesh.visible,true);
  assert.deepEqual([...entry.mesh.geometry.attributes.position.array],before);
  effects.dispose();assert.equal(world.scene.children.length,0);
});
