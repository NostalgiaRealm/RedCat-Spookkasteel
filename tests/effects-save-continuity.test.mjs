import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {NativeSpoutEffect,restoreSpoutSnapshots} from '../source/spout-effects.js';
import {KNIGHT_PARTS,restoreKnightDebrisState,snapshotKnightDebrisState} from '../source/knight-debris.js';
import {stepNativeDebris} from '../source/debris-native.js';
import {CastleWorld} from '../source/world.js';
import {WorldEffects} from '../source/world-effects.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const roundtrip=value=>JSON.parse(JSON.stringify(value));
const entity={classname:'EffectSpoutEntity',DelaySecondsMin:.02,DelaySecondsMax:.08,LifeSecondsMin:.5,LifeSecondsMax:2,
  SpeedMin:4,SpeedMax:12,AngleMin:0,AngleMax:30,Gravity:2,StartRadius:5,Scale:1,AlphaPercentageStart:100,AlphaPercentageEnd:25,
  ColourFrom:'20 40 60',ColourTo:'100 90 80',ColourCycling:1,BitmapFileName:'smoke.bmp',BitmapAlphaFileName:'smoke_a.bmp'};

test('smoke/flame saves retain every live slot, fractional tick, timers, colour and future births',()=>{
  const original=new NativeSpoutEffect(entity,{seed:713});
  for(let i=0;i<95;i++)original.update(1/120,[i,20,30],[0,1,0],true,3);
  assert.ok(original.particles.length>0);assert.ok(original.remainder>0);
  const saved=roundtrip(original.snapshot()),restored=NativeSpoutEffect.restore(entity,saved);
  assert.ok(restored);assert.deepEqual(restored.snapshot(),saved);
  restored.update(0,[200,0,0],[1,0,0],false);assert.deepEqual(restored.snapshot(),saved,'paused rendering does not reset saved timers');
  for(let i=0;i<350;i++){
    const dt=[.011,.027,.008][i%3],enabled=i<120||i>200,serial=i>250?4:3;
    for(const effect of [original,restored])effect.update(dt,[i,10,30],[1,2,0],enabled,serial);
    assert.deepEqual(restored.snapshot(),original.snapshot(),`continued simulation frame ${i}`);
  }
  restored.pool[0].position[0]++;assert.notDeepEqual(restored.snapshot(),original.snapshot(),'save values do not alias live state');
});

test('every shipped spout supports bounded save state including expired flash tails',()=>{
  let count=0,totalBytes=0;
  for(let level=0;level<5;level++)for(const e of json(`data/levels/lvl0${level}a/level.json`).entities.filter(e=>e.classname==='EffectSpoutEntity')){
    const effect=new NativeSpoutEffect(e,{seed:count++});
    for(let i=0;i<180;i++)effect.update(1/60,[0,0,0],[0,1,0]);
    const saved=roundtrip(effect.snapshot()),restored=NativeSpoutEffect.restore(e,saved);
    assert.ok(restored,e['%name%']);assert.deepEqual(restored.snapshot(),saved);
    totalBytes+=JSON.stringify(saved).length;
  }
  assert.equal(count,139);assert.ok(totalBytes<1_500_000,`all five levels combined: ${totalBytes} bytes`);
});

test('invalid save pools, nonfinite numbers and duplicate emitter ids are rejected',()=>{
  const effect=new NativeSpoutEffect(entity);effect.update(.1,[0,0,0],[0,1,0]);
  const saved=effect.snapshot();
  for(const mutate of [s=>s.pool.push(s.pool[0]),s=>s.pool[0][11]=Infinity,s=>s.remainder=1,s=>s.pool[0][0]='true']){
    const copy=structuredClone(saved);mutate(copy);assert.equal(NativeSpoutEffect.restore(entity,copy),null);
  }
  const entry={id:'smoke',age:1,enableSerial:0,state:saved};
  assert.equal(restoreSpoutSnapshots({version:1,entries:[entry,entry]}),undefined);
  assert.equal(restoreSpoutSnapshots({version:1,entries:Array(4097).fill(entry)}),undefined);
});

test('world renderer hooks preserve saved smoke immediately without warm-up or catch-up',()=>{
  const make=spoutStates=>{
    const object={id:'smoke',entity,enabled:true,visible:true,position:[10,20,30]};
    const game={objects:[object],spoutStates,find:()=>[],state:{},time:0};
    const world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),actorInstances:new Map(),modelMeshes:new Map(),physicalModels:[],collider:{trace:(_a,b)=>({fraction:1,end:b})}};
    const effects=new WorldEffects(world,game,{textures:{}});effects.attachLights();
    const draws=[],batch={count:0,add(...values){draws.push(roundtrip(values));},flush(){},mesh:new THREE.Object3D()};
    effects.batches.set('smoke.bmp|smoke_a.bmp',batch);return {game,effects,draws};
  };
  const before=make();for(let i=0;i<80;i++)before.effects.update(1/60);
  before.draws.length=0;before.effects.update(0);
  const saved=roundtrip(before.game.spoutSnapshot()),after=make(saved);after.effects.update(0);
  assert.deepEqual(after.game.spoutSnapshot(),saved);assert.deepEqual(after.draws,before.draws);
  after.game.objects[0].enabled=false;after.effects.update(0);
  assert.deepEqual(after.game.spoutSnapshot(),saved,'temporary load-camera visibility cannot reset saved age on a zero-time draw');
  assert.equal(after.game.spoutStates,undefined);
  after.effects.dispose();assert.equal(after.game.spoutSnapshot,undefined);before.effects.dispose();
});

function knightFixture(){
  const templates=KNIGHT_PARTS.map(name=>({data:json(`assets/actors/${name}.json`)}));
  const actor={userData:{mesh:{scale:{x:1}},template:{data:json('assets/actors/knight.json')}}};
  const object={id:'knight-test',position:[10,100,20],health:0,deathStartedAt:0,animationSerial:3};
  const world=Object.create(CastleWorld.prototype);world.scene=new THREE.Scene();world.knightParts=templates;world.enemyDebris=new Map();world.gameplay={time:0};world.actorInstances=new Map([[object.id,actor]]);
  world.instantiateActor=template=>{
    const piece=new THREE.Group(),mesh=new THREE.Mesh(new THREE.BufferGeometry(),new THREE.MeshBasicMaterial());piece.add(mesh);
    piece.userData={mesh,template:{...template,geometry:mesh.geometry}};return piece;
  };
  world.physicalModels=[];world.collider={trace:(_a,end)=>({fraction:1,end})};
  world.createKnightDebris(object,actor);return {world,object,actor};
}

test('knight fragments restore actual positions, spin, contact history and fade without retracing history',()=>{
  const {world,object,actor}=knightFixture();world.gameplay.time=.8;world.updateEnemyDebris(.8);
  const original=world.enemyDebris.get(object.id);
  const axe=original.parts.find(p=>p.particle.actor==='knax').particle;
  axe.settled=true;axe.contacts=12;axe.fadeStartedAt=.4;axe.opacity=.8;axe.velocity=[0,0,0];
  const saved=roundtrip(object.knightDebrisSnapshot());assert.equal(saved.particles.length,9);
  const expected=restoreKnightDebrisState(saved);assert.ok(expected);
  for(const part of original.parts)world.removeKnightDebrisPart(part);
  let traces=0;world.collider.trace=(_a,end)=>{traces++;return{fraction:1,end};};
  object.knightDebrisState=saved;world.createKnightDebris(object,actor);world.updateEnemyDebris(0);
  assert.equal(traces,0,'no prior collisions replay against current doors or platforms');
  assert.deepEqual(object.knightDebrisSnapshot(),saved);
  world.gameplay.time+=.04;world.updateEnemyDebris(.04);
  const step=world.gameplay.time-expected.age;
  expected.age+=step;for(const p of expected.particles)stepNativeDebris(p,step,(_a,end)=>({fraction:1,end}));
  assert.deepEqual(object.knightDebrisSnapshot(),expected);
  for(const part of world.enemyDebris.get(object.id).parts)assert.deepEqual(part.actor.position.toArray(),part.particle.position);
  const snapshot=object.knightDebrisSnapshot();snapshot.particles[0].position[0]+=5;
  assert.notDeepEqual(snapshot,object.knightDebrisSnapshot());
  world.gameplay.time=7;world.updateEnemyDebris(.05);assert.equal(object.knightDebrisSnapshot(),undefined);
});

test('legacy knight saves still replay once and malformed snapshots never create unbounded fragments',()=>{
  const {world,object}=knightFixture();world.gameplay.time=.6;let traces=0;
  world.collider.trace=(_a,end)=>{traces++;return{fraction:1,end};};world.updateEnemyDebris(0);
  assert.ok(traces>0);const state=snapshotKnightDebrisState(world.enemyDebris.get(object.id));
  for(const mutate of [s=>s.particles=Array(65).fill(s.particles[0]),s=>s.particles[0].actor='unknown',s=>s.particles[0].velocity[0]=Infinity,s=>s.life=1e6]){
    const copy=structuredClone(state);mutate(copy);assert.equal(restoreKnightDebrisState(copy),undefined);
  }
});
