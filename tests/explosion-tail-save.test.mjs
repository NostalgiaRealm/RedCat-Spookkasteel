import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {Gameplay} from '../src/gameplay.js';
import {DestructibleEffects} from '../src/destructible-effects.js';
import {createNativeExplosionDamage,advanceExplosionDamage} from '../src/explosion-damage.js';
import {createNativeDebris,stepNativeDebris} from '../src/debris-native.js';

test('saving after damage expires retains the visible smoke tail without restarting damage or sound',()=>{
  const level={id:'explosion-tail-save',entities:[]},game=new Gameplay(level),events=[];
  const effect={id:'crate:0',sourceId:'crate',birth:0,position:[0,54.08,0],
    settings:{explosion:{NrExplosions:1,SizePercentage:25,DamagePercentage:25,SmokeOnly:true}}};
  game.explosions=[effect];game.explosionDamage=createNativeExplosionDamage(effect);
  for(const time of [.1,.2,.3,.4,.5,.6,1]){
    game.time=time;advanceExplosionDamage(game,.1,[1000,0,0]);
  }
  assert.equal(game.explosionDamage.length,0);
  const draw=g=>{
    const sprites=[],renderer=new DestructibleEffects({},g);
    renderer.update(0,new Map([['smoke_05.bmp|smoke_green_a.bmp',{add:(...args)=>sprites.push(structuredClone(args))}]]));
    return sprites;
  };
  const before=draw(game);assert.ok(before.length>0,'the original smoke tail is still visible');
  const save=JSON.parse(JSON.stringify(game.snapshot()));
  assert.equal(save.explosions.length,1);assert.equal(save.explosionDamage.length,0);
  const restored=new Gameplay(level,{save,onEvent:event=>events.push(event)});
  assert.deepEqual(draw(restored),before,'restored smoke resumes at its saved age');
  assert.equal(restored.explosionDamage.length,0);assert.equal(events.length,0);
  const health=restored.state.health;
  restored.update(.1,[0,0,0]);assert.equal(restored.state.health,health,'standing in the old blast cannot renew its damage');
  assert.equal(restored.explosionDamage.length,0);
  restored.time=6.1;assert.deepEqual(restored.snapshot().explosions,[],'finished effect records still expire');
});

test('restored prop fragments resume their saved age instead of relaunching with the smoke tail',()=>{
  const effect={id:'crate:0',sourceId:'crate',birth:0,position:[0,50,0],settings:{debris:{types:[
    {actor:'chunk.act',MinNr:1,MaxNr:1,MinVelocity:10,MaxVelocity:10}
  ]}}};
  const conf={MinLifeTimeSeconds:1,MaxLifeTimeSeconds:1,Gravity:1,TestCollision:1,MustRotate:1,RotationSpeed:100,AirFriction:1};
  const settings={debris:conf},trace=(_a,end)=>({fraction:1,end});
  const make=time=>{
    const game={time,explosions:[effect]},world={scene:new THREE.Scene(),physicalModels:[],collider:{trace}};
    const renderer=new DestructibleEffects(world,game),mesh=new THREE.Mesh(new THREE.BufferGeometry(),new THREE.MeshBasicMaterial());
    const prototype=new THREE.Group();prototype.userData={mesh,template:{data:{settings}}};
    renderer.prototypes.set('chunk',prototype);return{game,world,renderer,mesh};
  };
  const expected=createNativeDebris(effect,()=>settings)[0];
  while(expected.age<.6-1e-8)stepNativeDebris(expected,Math.min(.05,.6-expected.age),trace);
  const loaded=make(.6);loaded.renderer.update(.02,new Map());
  assert.equal(loaded.renderer.particles.length,1);
  const particle=loaded.renderer.particles[0];
  assert.equal(particle.age,.6,'first rendering does not add the frame delta twice');
  assert.deepEqual(particle.position,expected.position);assert.deepEqual(particle.orientation,expected.orientation);
  loaded.game.time=.62;loaded.renderer.update(.02,new Map());assert.equal(particle.age,.62);
  const expired=make(2);expired.renderer.update(0,new Map());
  assert.equal(expired.renderer.particles.length,0);assert.equal(expired.world.scene.children.length,0,'expired fragments never reappear');
  const fresh=make(0);fresh.renderer.update(.02,new Map());assert.equal(fresh.renderer.particles[0].age,.02,'fresh launches retain their existing integration');
  for(const fixture of [loaded,expired,fresh]){fixture.renderer.dispose();fixture.mesh.geometry.dispose();fixture.mesh.material.dispose();}
});
