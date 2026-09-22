import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Vector3,BufferGeometry,Float32BufferAttribute,MeshLambertMaterial,Texture} from 'three';
import {CastleWorld} from '../src/world.js';
import {WorldEffects} from '../src/world-effects.js';
import {actorOverrideKey} from '../src/actor-materials.js';
import {NativeFairyEffect,fairyGeometry,FAIRY_TEXTURES} from '../src/fairy-effects.js';
const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));

test('authored cobweb masks apply to every graveyard web without mutating actor templates',()=>{
  const level=json('data/levels/lvl02a/level.json'),manifest=json('assets/actor-overrides/manifest.json');
  const webs=level.entities.filter(e=>/spiderweb/i.test(e.ActorFileName||''));assert.equal(webs.length,2);
  const geometry=new BufferGeometry().setAttribute('position',new Float32BufferAttribute([0,0,0],3));
  const original=new MeshLambertMaterial(),template={geometry,materials:[original],data:{}};
  const world={track:r=>r},map=new Texture();
  for(const entity of webs) {
    assert.ok(manifest.textures[actorOverrideKey(entity)]);
    const actor=CastleWorld.prototype.instantiateActor.call(world,template,{entity,overrideMap:map});
    const material=actor.userData.mesh.material[0];assert.equal(material.map,map);assert.equal(material.transparent,true);assert.equal(material.depthWrite,false);assert.notEqual(material,original);
  }
  assert.equal(original.map,null);assert.equal(original.transparent,false);
});

test('native fairy square halo, diagonal pulses, color cycle and departure survive central lifetime',()=>{
  const options={origin:[0,0,0],waypoints:[[0,0,0]],lifeTime:5};
  assert.deepEqual(new NativeFairyEffect(options).color,[20,255,20]);
  const during=fairyGeometry({...options,age:4});
  const halo=during.sprites.find(s=>s.texture===FAIRY_TEXTURES.halo);assert.equal(halo.width,halo.height);
  assert.equal(during.sprites.filter(s=>s.diagonalScale).length,2);
  const departing=fairyGeometry({...options,age:5.2});
  assert.equal(departing.light,null);assert.ok(departing.sprites.length>20&&departing.sprites.length<=50);assert.ok(departing.rays.length>0);
  assert.ok(departing.sprites.every(s=>s.texture===FAIRY_TEXTURES.star));
  assert.deepEqual(fairyGeometry({...options,age:9}),{sprites:[],rays:[],light:null});
});

test('native fairy lifecycle emits one departure burst and audio then supports subsequent dialogue',()=>{
  const object={id:'fairy',enabled:true,position:[0,0,0],entity:{classname:'Fairy',LifeTime:'.1',NumberOfWayPoints:'1',FairyWP0:'wp'}},events=[];
  const game={objects:[object],find:()=>[{position:[0,0,0],entity:{}}],emit:(type,e)=>events.push({type,...e})};
  const effects=new WorldEffects({camera:{position:new Vector3()}},game,{});effects.pointLights=[];
  effects.update(.05);effects.update(.1);assert.equal(object.enabled,false);assert.equal(effects.entries.get('fairy').fairyGeometry.sprites.length,50);
  for(let i=0;i<3;i++)effects.update(.1);
  assert.equal(events.filter(e=>e.sound==='Magiev12.wav').length,1);
  assert.ok(events.some(e=>e.sound==='idlefee1.wav'&&e.stop));
  object.enabled=true;effects.update(.02);assert.equal(object.effectAge,.02);assert.ok(effects.entries.get('fairy').fairyGeometry.light);
});
