import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync,readdirSync} from 'node:fs';
import * as THREE from 'three';
import {DestructibleEffects} from '../source/destructible-effects.js';
import {createNativeBlasts} from '../source/explosion-native.js';
import {NORMAL_EXPLOSION_TEXTURES,GREEN_EXPLOSION_TEXTURES,GREEN_EXPLOSION_WAVE_TEXTURE,
  explosionFlashTexture,explosionTextureFilter,greenExplosionWave} from '../source/explosion-variants.js';

const fixture={id:'variant',sourceId:'crate',birth:0,position:[0,2,0],settings:{explosion:{NrExplosions:1,SizePercentage:25,Green:true}}};
const camera=[0,40,-100];
const world=()=>({camera:{position:new THREE.Vector3(...camera)},scene:new THREE.Scene(),track:value=>value,physicalModels:[0],collider:{trace:()=>({fraction:.4,end:[0,0,0]})}});

test('green flashes use their own original eight alpha-paired frames with unchanged normal artwork',()=>{
  const manifest=JSON.parse(readFileSync(new URL('../assets/effects/manifest.json',import.meta.url)));
  for(let frame=1;frame<=8;frame++) {
    assert.equal(explosionFlashTexture({green:true},frame),GREEN_EXPLOSION_TEXTURES[frame-1]);
    assert.equal(explosionFlashTexture({green:false,electric:true},frame),NORMAL_EXPLOSION_TEXTURES[frame-1],
      'Electric adds sparks independently; it must not select the native visual-type3 branch');
    const original=manifest.textures[GREEN_EXPLOSION_TEXTURES[frame-1]];
    assert.ok(original&&original.width>0&&original.height>0);
    assert.match(original.file,/^expl_sup\d\d-expl_sup\d\d_a\.png$/);
  }
  const game={time:.25,explosions:[fixture]},renderer=new DestructibleEffects({},game),calls=[];
  renderer.update(0,new Map([['expl_sup03.bmp|expl_sup03_a.bmp',{add:(...args)=>calls.push(args)}]]));
  assert.deepEqual(calls,[[[0,2,0],128,128,[1,1,1],1]],'original artwork carries the color, without an extra green multiplier');
  renderer.dispose();
});

test('green native shockwave grows from radius5 to200 for600ms, folds onto floor and obeys smoke-only',()=>{
  const blast=createNativeBlasts(fixture)[0];
  const start=greenExplosionWave(blast,0,camera),middle=greenExplosionWave(blast,.3,camera),last=greenExplosionWave(blast,.6,camera);
  assert.equal(start.radius,5);assert.equal(start.opacity,1);
  assert.equal(middle.radius,50*Math.sqrt(8.005));assert.equal(middle.opacity,.5);
  assert.equal(last.radius,200);assert.equal(last.opacity,0);
  const folded=greenExplosionWave(blast,0,camera,()=>({fraction:.4,end:[0,0,0]}));
  assert.deepEqual(folded.quads[1].uvs,[[0,.7],[1,.7],[1,1],[0,1]]);
  for(const age of [-.001,.601])assert.equal(greenExplosionWave(blast,age,camera),null);
  assert.equal(greenExplosionWave({...blast,green:false},.2,camera),null);
  assert.equal(greenExplosionWave({...blast,smokeOnly:true},.2,camera),null);
  const noFlash=createNativeBlasts({...fixture,settings:{explosion:{...fixture.settings.explosion,SizePercentage:0}}})[0];
  assert.equal(noFlash.diameter,0);assert.equal(greenExplosionWave(noFlash,.3,camera).radius,middle.radius);
});

test('new variant textures stay unloaded for all authored campaign actors, but load for opt-in actors or saved blasts',()=>{
  const actors=readdirSync(new URL('../assets/actors/',import.meta.url)).filter(file=>file.endsWith('.json')).map(file=>JSON.parse(readFileSync(new URL('../assets/actors/'+file,import.meta.url))));
  assert.ok(actors.length>50);
  assert.ok(actors.every(actor=>!actor.settings?.explosion?.Green&&!actor.settings?.explosion?.Electric));
  const normal=explosionTextureFilter({objects:actors.map(actor=>({actorSettings:actor.settings}))});
  for(const key of [...GREEN_EXPLOSION_TEXTURES,GREEN_EXPLOSION_WAVE_TEXTURE])assert.equal(normal(key),false);
  assert.equal(normal(NORMAL_EXPLOSION_TEXTURES[0]),true);
  for(const game of [{objects:[{actorSettings:fixture.settings}]},{objects:[],explosions:[fixture]}]) {
    const needed=explosionTextureFilter(game);
    for(const key of [...GREEN_EXPLOSION_TEXTURES,GREEN_EXPLOSION_WAVE_TEXTURE])assert.equal(needed(key),true);
  }
});

test('green wave submits original alpha texture in a bounded reused mesh and cleans up after expiry',()=>{
  const scene=world(),game={time:0,explosions:[fixture]},renderer=new DestructibleEffects(scene,game),map=new THREE.Texture();
  const batches=new Map([[GREEN_EXPLOSION_WAVE_TEXTURE,{mesh:{material:{uniforms:{map:{value:map}}}}}]]);
  renderer.update(0,batches);
  const mesh=renderer.greenWaves.mesh;
  assert.equal(mesh.material.map,map);assert.equal(mesh.material.transparent,true);assert.equal(mesh.material.depthWrite,false);
  assert.equal(mesh.geometry.drawRange.count,12);assert.equal(renderer.greenWaves.capacity,64);
  renderer.update(0,batches);assert.equal(renderer.greenWaves.mesh,mesh);assert.equal(scene.scene.children.length,1);
  game.time=.61;renderer.update(0,batches);assert.equal(mesh.visible,false);assert.equal(mesh.geometry.drawRange.count,0);
  renderer.dispose();assert.equal(scene.scene.children.length,0);
});
