import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {readFileSync} from 'node:fs';
import {nativeExplosionLight,advanceNativeLight,tickNativeLight,restoreNativeLightState,snapshotNativeLight} from '../source/explosion-light-native.js';
import {createNativeBlasts,nativeBlastsForEffect,restoreNativeExplosions} from '../source/explosion-native.js';
import {WorldEffects} from '../source/world-effects.js';

const effect=(extra={})=>({id:'crate:blast',sourceId:'crate',birth:10,position:[12,34,56],
  settings:{explosion:{NrExplosions:1,SizePercentage:25,...extra}}});

const radius=(maximum,char)=>Math.fround(maximum*Math.fround((char.charCodeAt(0)-97)*Math.fround(.04)));

test('normal and green explosion lights use original radius, colour and one-second pattern',()=>{
  for(const Green of [0,1]){
    const blast=createNativeBlasts(effect({Green}))[0];
    for(const [i,char] of [...'pszzzspmea'].entries()){
      const light=nativeExplosionLight(blast,blast.birth+(i+.5)/10);
      assert.equal(light.radius,radius(200,char));
      assert.deepEqual(light.color,Green?[34/255,218/255,40/255]:[1,192/255,0]);
      assert.equal(light.position,blast.position);
      assert.notEqual(light.castShadow,true);
    }
    assert.equal(nativeExplosionLight(blast,blast.birth-.001),null);
    assert.equal(nativeExplosionLight(blast,blast.birth+1).radius,0);
    assert.equal(nativeExplosionLight(blast,blast.birth+62/60),null);
  }
});

test('smoke-only and zero-size blasts add no light, delayed blasts start independently and reuse records',()=>{
  assert.equal(nativeExplosionLight(createNativeBlasts(effect({SmokeOnly:1}))[0],10.1),null);
  assert.deepEqual(createNativeBlasts(effect({SizePercentage:0})),[]);
  const blasts=createNativeBlasts(effect({NrExplosions:3,SizePercentage:12.4}));
  for(const blast of blasts){
    assert.equal(nativeExplosionLight(blast,blast.birth-.001),null);
    const light=nativeExplosionLight(blast,blast.birth+.01);
    assert.equal(light.radius,99,'the constructor starts at the authored maximum before the first child tick');
    assert.equal(nativeExplosionLight(blast,blast.birth+.2),light);
    const restored=createNativeBlasts(JSON.parse(JSON.stringify(effect({NrExplosions:3,SizePercentage:12.4}))))[blasts.indexOf(blast)];
    assert.deepEqual(nativeExplosionLight(restored,blast.birth+.2),light);
  }
});

test('world update passes blast lights to actors while retaining the existing eight world-light slots',()=>{
  const world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),physicalModels:[0],
    collider:{trace(start,end){return {fraction:1,end};}},syncActorLighting(lights){this.actorLights=[...lights];}};
  const game={objects:[],find(){return [];},time:10.25};
  const effects=new WorldEffects(world,game,{textures:{}});effects.attachLights();
  const blasts=Array.from({length:12},(_,i)=>createNativeBlasts({...effect(),id:`crate${i}`,position:[i,0,0]})[0]);
  effects.destructibles={blasts,update(){},dispose(){}};
  try{
    effects.update(0);
    assert.equal(world.actorLights.length,12);
    assert.equal(effects.pointLights.length,8);
    assert.ok(effects.pointLights.every(light=>light.intensity===1&&light.distance===200));
    game.time=12;effects.update(0);
    assert.equal(world.actorLights.length,0);
    assert.ok(effects.pointLights.every(light=>light.intensity===0));
  }finally{effects.dispose();}
});

test('light constructors, pre-step pattern boundaries and inclusive lazy expiry match native ordering',()=>{
  const blast=createNativeBlasts(effect())[0];
  for(const [tick,value] of [[0,200],[1,radius(200,'p')],[6,radius(200,'p')],
    [7,radius(200,'s')],[12,radius(200,'s')],[13,200],[60,0],[61,radius(200,'p')]])
    assert.equal(nativeExplosionLight(blast,blast.birth+tick/60).radius,value,`tick ${tick}`);
  assert.equal(nativeExplosionLight(blast,blast.birth+62/60),null);
  assert.equal(nativeExplosionLight(blast,blast.birth+2),null);
});

test('original-byte light/interpolator trace agrees with timer and float radius for all retained tick samples',()=>{
  const data=JSON.parse(readFileSync(new URL('../temp_work/native-behavior-followup-2026-10-26/world/light-review/native-light-clock-probe.json',import.meta.url)));
  let count=0;
  for(const scenario of data.scenarios){
    const state=restoreNativeLightState(null,0,0);
    for(const row of scenario.ticks){
      assert.equal(state.phaseMs,row.phaseBefore);
      tickNativeLight(state,row.nowMs,row.dtMs);
      assert.equal(Math.fround(scenario.maximum*state.sample),row.radius);
      assert.equal(state.phaseMs,row.phaseAfter);assert.equal(state.lifeEndMs,row.lifeEndMs);
      assert.equal(state.active,row.alive);count++;
    }
  }
  assert.equal(count,74);
});

test('fixed light clock is independent of display frequency and catches up in at most62 tiny steps',()=>{
  for(const hz of [30,60,120,240]){
    const state=restoreNativeLightState(null,0,0);
    for(let frame=0;frame<=hz;frame++)advanceNativeLight(state,frame/hz);
    assert.equal(state.tick,60);assert.equal(state.sample,0);assert.equal(state.lifeEndMs,1016);
    advanceNativeLight(state,100000);assert.equal(state.tick,62);assert.equal(state.active,false);
  }
});

test('explosion light save roundtrips current phase and continues with the same cached cohort',()=>{
  const original=effect({NrExplosions:3}),blasts=nativeBlastsForEffect(original),time=10.43;
  for(const blast of blasts)nativeExplosionLight(blast,time);
  const saved=JSON.parse(JSON.stringify(restoreNativeExplosions([original],time)));
  assert.equal(saved[0].lightState.length,3);
  const restored=restoreNativeExplosions(saved,time)[0],copies=nativeBlastsForEffect(restored);
  for(let tick=26;tick<=90;tick++)for(let i=0;i<blasts.length;i++)
    assert.deepEqual(nativeExplosionLight(copies[i],10+tick/60),nativeExplosionLight(blasts[i],10+tick/60));
  assert.equal(nativeBlastsForEffect(restored),copies);
});

test('light snapshots reject future, malformed and stale-birth clock state without changing legacy appearance',()=>{
  const blast=createNativeBlasts(effect())[0],time=10.45;
  nativeExplosionLight(blast,time);const good=snapshotNativeLight(blast,time);
  for(const saved of [undefined,null,{...good,birth:9},{...good,tick:60},{...good,phaseMs:NaN},
    {...good,lifeEndMs:999999},{...good,active:false},{...good,sample:1}]){
    const legacy=createNativeBlasts(effect())[0],copy={...legacy,lightState:saved};
    assert.deepEqual(nativeExplosionLight(copy,time),nativeExplosionLight(legacy,time));
  }
  assert.deepEqual(restoreNativeLightState(good,blast.birth,time),good);
  assert.notEqual(restoreNativeLightState(good,blast.birth,time),good);
});
