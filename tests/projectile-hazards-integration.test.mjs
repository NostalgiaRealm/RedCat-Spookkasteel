import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';

const level={id:'lvl00a',spawn:{position:[1000,0,1000],orientation:0},entities:[]};
const mushroom=(id='mushroom')=>({id,kind:'mushRoom',sourceId:'brutus',position:[0,25,0],velocity:[250,0,0],radius:2,life:5,damage:2,gravity:0,age:0});

test('mushroom wall impacts retire the body and its harmless ribbon immediately',()=>{
  const game=new Gameplay(level),events=[];game.onEvent=event=>events.push(event);
  game.projectiles=[mushroom()];
  game.update(.1,[100,0,0],{traceProjectile:()=>({fraction:.2,end:[5,25,0]})});
  assert.equal(game.projectiles.length,0);assert.equal(game.hazards.segments.length,0);
  assert.equal(events.filter(event=>event.type==='enemyProjectileImpact').length,1);
  game.update(.05,[4,0,0]);assert.equal(game.state.health,10);
});

test('lethal projectile impact cannot reintroduce a trail or another projectile after respawn',()=>{
  const game=new Gameplay(level),events=[];
  game.onEvent=event=>{events.push(event);if(event.type==='death')game.respawn();};
  game.state.health=2;
  game.projectiles=[mushroom('a'),mushroom('b'),mushroom('c')];
  game.update(.1,[20,0,0]);
  assert.equal(game.state.lives,2);assert.equal(game.state.health,10);
  assert.equal(events.filter(event=>event.type==='death').length,1);
  assert.equal(game.hazards.segments.length,0);assert.equal(game.projectiles.length,0);
});

test('lethal melee respawn stops later liquid triggers from damaging the old player location',()=>{
  const game=new Gameplay({...level,entities:[
    {classname:'StandingEnemy','%name%':'knight',Origin:'0 0 0',Type:'2'},
    {classname:'Trigger','%name%':'lava',Origin:'0 0 10',DamagePerSecond:'100',TriggerRadius:'25'},
  ]}),events=[];
  game.onEvent=event=>{events.push(event);if(event.type==='death')game.respawn();};
  const knight=game.objects[0];knight.pendingAttack={at:0};knight.stats={...knight.stats,Damage:2};knight.ranged=false;
  game.state.health=2;game.update(.1,[0,0,10]);
  assert.equal(game.state.lives,2);assert.equal(game.state.health,10);
  assert.equal(events.filter(event=>event.type==='death').length,1);
});

test('gameplay saves owned ribbons and pauses them with cutscenes and enemy freezes',()=>{
  const game=new Gameplay(level);game.projectiles=[mushroom()];
  game.update(.05,[1000,0,0]);game.update(.05,[1000,0,0]);
  const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  assert.deepEqual(restored.hazards.snapshot(),game.hazards.snapshot());
  const before=restored.hazards.snapshot();restored.scripts={cutscene:true};
  restored.update(.1,[0,0,0]);assert.equal(restored.state.health,10);assert.deepEqual(restored.hazards.snapshot(),before);
  restored.scripts={enemiesFrozen:true};restored.update(.1,[0,0,0]);
  assert.equal(restored.state.health,10);assert.deepEqual(restored.hazards.snapshot(),before);
  restored.scripts=null;restored.update(.1,[0,0,0]);assert.equal(restored.state.health,10);
});
