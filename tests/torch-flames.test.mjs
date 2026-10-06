import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator} from '../src/animation.js';
import {TorchFlames,handTorchTip} from '../src/torch-flames.js';
import {WorldEffects} from '../src/world-effects.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const data=json('assets/actors/htorch.json'),manifest=json('assets/effects/manifest.json');
const levels=Array.from({length:5},(_,i)=>json(`data/levels/lvl0${i}a/level.json`));
const vec=value=>String(value||'0 0 0').split(/\s+/).map(Number);
const close=(a,b)=>assert.ok(a.every((v,i)=>Math.abs(v-b[i])<.00001),`${a} != ${b}`);
function actor(entity){
  const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  const mesh=new THREE.Mesh(geometry),root=new THREE.Group();root.add(mesh);
  mesh.rotation.set(...data.settings.initialRotationDegrees.map(v=>v*Math.PI/180));mesh.scale.setScalar(Number(entity.Scale)>0?Number(entity.Scale):data.settings.scale);
  root.position.fromArray(vec(entity.Origin));root.rotation.set(...['X','Y','Z'].map(axis=>Number(entity['Rotate'+axis]||0)*Math.PI/180),'ZYX');
  const animator=new ActorAnimator(data,geometry);animator.play('anim');root.userData={mesh,animator,template:{data}};return root;
}
function fixture(level){
  const objects=level.entities.filter(e=>e.classname).map(entity=>({id:entity['%name%'],entity,position:vec(entity.Origin||entity.origin),
    enabled:entity.IsInitiallyEnabled!=='0',visible:true,health:1}));
  const game={objects,time:0,find:name=>objects.filter(o=>name&&(o.id===name||o.entity.DaviName===name))};
  const world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),actorInstances:new Map(),modelMeshes:new Map(),physicalModels:[0],
    collider:{trace:(_a,b)=>({fraction:1,end:b})}};
  for(const object of objects)if(object.entity.ActorFileName==='htorch.act')world.actorInstances.set(object.id,actor(object.entity));
  return {world,game};
}

test('all levels gain exactly sixteen missing hand flames without duplicating sixteen existing flames or touching static fixtures',()=>{
  let existing=0,added=0,staticTorches=0;
  const expected=[[0,0],[8,8],[24,8],[0,0],[0,0]];
  for(const [i,level]of levels.entries()){
    const {world,game}=fixture(level),before=JSON.stringify(game.objects),torches=new TorchFlames(world,game);
    assert.equal(torches.records.length,expected[i][0]);assert.equal(torches.synthetic.length,expected[i][1]);
    assert.equal(new Set(torches.records.map(r=>r.emitter.id)).size,torches.records.length,'each hand owns one emitter');
    existing+=torches.records.length-torches.synthetic.length;added+=torches.synthetic.length;
    for(const object of game.objects){
      if(/^(torch|trchstl)\.act$/i.test(object.entity.ActorFileName||''))staticTorches++;
      if(!torches.bindings.has(object.id)){assert.equal(torches.position(object),undefined);assert.equal(torches.enabled(object),true);}
    }
    assert.equal(JSON.stringify(game.objects),before,'authored entities, enabled flags and placement stay unchanged');
    // A saved animated pose must not rematch a flame to the neighboring hand.
    for(const root of world.actorInstances.values()){root.userData.animator.time=.7;root.userData.animator.update(0);}
    const restored=new TorchFlames(world,game);
    assert.deepEqual(restored.records.map(r=>r.emitter.id),torches.records.map(r=>r.emitter.id));
  }
  assert.equal(existing,16);assert.equal(added,16);assert.equal(staticTorches,95);
});

test('hand flames and their lights follow the rendered wick across animation, rotation and scale',()=>{
  const {world,game}=fixture(levels[2]),torches=new TorchFlames(world,game);
  for(const record of torches.records){
    const root=record.actor,mesh=root.userData.mesh,animator=root.userData.animator,positions=[];
    world.camera.position.copy(root.position).add(new THREE.Vector3(0,0,150));
    for(const t of [0,.333335,.66667,1.000005]){
      animator.time=t;animator.update(0);torches.update(world.camera.position.toArray());
      // Compare against actual CPU-skinned triangle vertices, not the helper's bone math.
      const cap=new THREE.Vector3(),attribute=mesh.geometry.attributes.position;
      for(const index of [51,52,53])cap.add(new THREE.Vector3().fromBufferAttribute(attribute,index));
      cap.divideScalar(3);mesh.localToWorld(cap);cap.y+=3;
      close(record.position,cap.toArray());close(record.light.position,cap.toArray());
      assert.ok(torches.lights.includes(record.light));positions.push([...record.position]);
    }
    assert.ok(Math.hypot(...positions[1].map((v,i)=>v-positions[3][i]))>15,'visible sideways sway');
    const current=handTorchTip(root).toArray();
    root.position.add(new THREE.Vector3(20,40,-30));close(handTorchTip(root).toArray(),current.map((v,i)=>v+[20,40,-30][i]));
  }
});

test('integration emits alpha-masked flames at the moving tip, uses eight light slots and respects disable, pause and distance',()=>{
  const fixtureData=fixture(levels[1]),{world,game}=fixtureData;
  // Keep one real castle hand and a separate real static torch emitter.
  const hand=game.objects.find(o=>o.entity.ActorFileName==='htorch.act');
  const staticFlame=game.objects.find(o=>o.entity.classname==='EffectSpoutEntity');
  const endpoint=game.find(staticFlame.entity.SpoutDirection)[0];
  game.objects=[hand,staticFlame,...(endpoint?[endpoint]:[])];
  const effects=new WorldEffects(world,game,manifest),record=effects.torches.records[0];effects.attachLights();
  const batch={count:0,add(){this.count++;},flush(){},mesh:new THREE.Object3D()};effects.batches.set('flame03.bmp|a_flame.bmp',batch);
  world.camera.position.copy(record.actor.position).add(new THREE.Vector3(0,0,100));
  for(let i=0;i<20;i++)effects.update(.05);
  const state=effects.entries.get(record.emitter.id),originalState=effects.entries.get(staticFlame.id);
  assert.ok(state.particles.length>0);assert.ok(originalState.particles.length>0);
  assert.ok(batch.count>0);assert.equal(effects.pointLights.length,8);
  close(effects.position(staticFlame),staticFlame.position,'static flame not moved');
  const before=JSON.stringify(state.particles),clock=state.clock,light=[...record.light.position];
  effects.update(0);assert.equal(state.clock,clock);assert.equal(JSON.stringify(state.particles),before);close(record.light.position,light);
  record.actor.userData.animator.time=.5;record.actor.userData.animator.update(0);effects.update(.1);
  assert.notDeepEqual(record.position,light);close(record.light.position,record.position);
  const serial=state.spout.serial;for(let i=0;i<30&&state.spout.serial===serial;i++)effects.update(1/60);
  const newborn=state.particles.find(p=>p.serial===state.spout.serial);
  assert.ok(Math.abs(newborn.birthPosition[0]-record.position[0])<=1.5+.0001);
  assert.ok(Math.abs(newborn.birthPosition[2]-record.position[2])<=1.5+.0001);
  close([newborn.birthPosition[1]],[record.position[1]]);
  assert.ok(state.particles.length<=15,'native fixed pool stays bounded');
  assert.equal(manifest.textures['flame03.bmp|a_flame.bmp'].file,'flame03-a_flame.png');
  hand.visible=false;for(let i=0;i<45;i++)effects.update(.05);
  assert.equal(state.particles.length,0);assert.equal(effects.torches.lights.length,0);
  hand.visible=true;for(let i=0;i<8;i++)effects.update(.05);assert.ok(state.particles.length>0);
  hand.enabled=false;effects.update(.05);assert.equal(effects.torches.lights.length,0);
  hand.enabled=true;effects.update(.05);assert.ok(effects.torches.lights.length>0);
  world.camera.position.x+=10000;for(let i=0;i<45;i++)effects.update(.05);
  assert.equal(state.particles.length,0);assert.equal(effects.torches.lights.length,0,'distant torches add no particle/light work');
  world.camera.position.copy(record.actor.position);for(let i=0;i<8;i++)effects.update(.05);assert.ok(state.particles.length>0);
  hand.health=0;effects.update(.05);assert.equal(effects.torches.lights.length,0,'destroyed hand cannot leave a light behind');
  effects.dispose();
});
