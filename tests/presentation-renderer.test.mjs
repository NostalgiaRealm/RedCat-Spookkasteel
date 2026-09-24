import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldEffects} from '../src/world-effects.js';
import {Gameplay} from '../src/gameplay.js';
import {FootstepClock} from '../src/locomotion-audio.js';

const CORONA='coreff.bmp|coreff_a.bmp',ENERGY='energybeam.bmp|energybeam_a.bmp';
const manifest={textures:{[CORONA]:{file:'core.png'},[ENERGY]:{file:'energy.png'}}};
const corona=(id,z=-300)=>({id,kind:'effect',entity:{classname:'EffectCoronaEntity',RadiusMin:'2',RadiusMax:'10',RadiusDistanceMin:'0',RadiusDistanceMax:'300',FadeTime:'.5',Color:'173 235 255'},position:[0,0,z],enabled:true,visible:true});
async function fixture(objects) {
  const queries=[],resources=new Set(),world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),physicalModels:[0,4],modelMeshes:new Map(),
    track:r=>{resources.add(r);return r;},texture:async()=>new THREE.Texture(),
    collider:{trace(...args){queries.push(args);return {fraction:world.blocked?.5:1,end:args[1]};}}};
  const game={objects,projectiles:[],time:0,find:()=>[],emit(){},scripts:{modelTransforms:new Map()}};
  const prior=globalThis.fetch;globalThis.fetch=async url=>{assert.equal(url,'assets/effects/manifest.json');return {ok:true,json:async()=>manifest};};
  let effects;
  try{effects=await WorldEffects.create(world,game);}finally{globalThis.fetch=prior;}
  return {world,game,effects,queries,dispose(){effects.dispose();for(const r of resources)r.dispose();}};
}

test('real corona batch fades size on world occlusion and keeps beacon glow depth testing separate',async()=>{
  const app=await fixture([corona('lamp')]);
  try{
    const {effects,world,queries}=app,state=effects.entries.get('lamp');
    assert.equal(effects.coronaBatch.mesh.material.depthTest,false);
    assert.equal(effects.batches.get(CORONA).mesh.material.depthTest,true);
    assert.equal(queries.length,0,'initial zero-time buffer refresh does not query visibility');
    effects.update(.1);assert.equal(state.radius,2);assert.equal(effects.coronaBatch.count,1);
    assert.equal(effects.coronaBatch.sizes.getX(0),4);assert.equal(effects.coronaBatch.colors.getW(0),1);
    assert.deepEqual(queries[0].slice(2),[[0,0,0],[0,0,0],[0,4],null],'visibility is a zero-hull world/model-only ray');
    effects.update(.2);assert.equal(state.radius,6);
    const saved={age:state.age,radius:state.radius,queries:queries.length,cacheTime:effects.coronaVisibility.time};
    effects.update(0);effects.update(0);assert.deepEqual({age:state.age,radius:state.radius,queries:queries.length,cacheTime:effects.coronaVisibility.time},saved);
    world.blocked=true;effects.update(.1);assert.equal(state.radius,4);assert.equal(effects.coronaBatch.count,1);
    effects.update(.2);assert.equal(state.radius,0);assert.equal(effects.coronaBatch.count,0);
    assert.equal(effects.coronaBatch.mesh.visible,false);
  }finally{app.dispose();}
});

test('real corona update excludes behind-camera lamps and bounds visibility work as the camera turns',async()=>{
  const lamps=Array.from({length:20},(_,i)=>corona(`front${i}`)),behind=corona('behind',300),app=await fixture([...lamps,behind]);
  try{
    const {effects,world,queries}=app;
    for(let i=0;i<3;i++){const before=queries.length;effects.update(1/60);assert.ok(queries.length-before<=8);}
    assert.ok(lamps.every(o=>effects.coronaVisibility.visible(o.id)));
    assert.equal(effects.entries.get('behind').radius,0);assert.ok(queries.every(q=>q[1][2]<0));
    world.camera.lookAt(0,0,300);effects.update(.1);
    assert.ok(effects.entries.get('behind').radius>0);
    assert.ok(lamps.every(o=>effects.entries.get(o.id).radius===0));
  }finally{app.dispose();}
});

test('native beacon texture coordinates reach the actual energy buffer and stay read-only on refresh',async()=>{
  const beacon={id:'beacon',kind:'effect',entity:{classname:'SavePoint'},position:[10,20,-30],enabled:true,visible:true,effectAge:5},app=await fixture([beacon]);
  try{
    const {effects}=app,batch=effects.beamBatches.get(ENERGY),state=effects.entries.get('beacon');
    assert.equal(batch.count,7);assert.equal(batch.mesh.material.map.wrapT,THREE.RepeatWrapping);
    const before=Array.from(batch.uvs.array.slice(0,84));effects.update(0);assert.deepEqual(Array.from(batch.uvs.array.slice(0,84)),before);
    effects.update(1/60);const after=Array.from(batch.uvs.array.slice(0,84));assert.notDeepEqual(after,before);
    for(let i=0;i<84;i+=2){assert.equal(after[i],before[i]);assert.ok(Math.abs(after[i+1]-before[i+1]+.07)<1e-5);}
    assert.equal(state.age,5+1/60);assert.equal(batch.mesh.geometry.drawRange.count,42);
  }finally{app.dispose();}
});

test('Gameplay snapshots preserve footstep phase across JSON save/load',()=>{
  const level={id:'footsteps',entities:[]},game=new Gameplay(level,{deferInit:true});
  const clock=new FootstepClock();clock.update(.713,{speed:4.9,grounded:true});game.footstepState=clock.snapshot();
  const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot())),deferInit:true});
  assert.deepEqual(restored.footstepState,game.footstepState);
  const resume=new FootstepClock(restored.footstepState);
  assert.deepEqual(resume.update(.6,{speed:4.9,grounded:true}),clock.update(.6,{speed:4.9,grounded:true}));
});
