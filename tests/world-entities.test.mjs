import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {CastleWorld,actorVisible,triggerOnlyModels} from '../src/world.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';

const json=path=>JSON.parse(readFileSync(new URL(path,import.meta.url)));
function forest(save=null) {
  const level=json('../data/levels/lvl00a/level.json');
  const game=new Gameplay(level,{deferInit:true,save});
  const host=new ScriptHost(game,json('../data/davi/lvl00a.json'),{motions:json('../data/motions/lvl00a.json')});
  host.initialize(save?.scripts);return {level,game,host};
}

test('Brutus is visible while waiting for the intro, but disable does not activate his AI',()=>{
  const {game}=forest(),boss=game.find('brutus')[0],before=[...boss.position];
  assert.equal(boss.enabled,false);assert.equal(actorVisible(boss,0),true);
  game.update(.1,boss.position.map((v,i)=>v+(i===2?120:0)));
  assert.deepEqual(boss.position,before);assert.equal(boss.animationState,'idle');assert.equal(game.projectiles.length,0);
  game.command(boss,'hide');assert.equal(actorVisible(boss,0),false);
  game.command(boss,'show');game.destroy(boss);
  assert.equal(actorVisible(boss,game.time),true);assert.equal(actorVisible(boss,boss.corpseUntil+.01),false);
});

test('a camera reference does not remove the forest mirror platform from the world',()=>{
  const {level,game}=forest(),names=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)]));
  const hidden=triggerOnlyModels(level.entities,names),mirror=game.find('mirror')[0];
  assert.equal(mirror.modelIndex,64);assert.equal(hidden.has(mirror.modelIndex),false);
  const trigger=game.triggers.find(o=>game.modelObjects.get(o.modelIndex)?.every(other=>other.kind==='trigger'));
  assert.ok(trigger);assert.equal(hidden.has(trigger.modelIndex),true);
});

test('forest mirror rises with its platform for rendering, collection and save restoration',()=>{
  const {game,host}=forest(),mirror=game.find('mirror')[0],base=[...mirror.position];
  host.callMethod(host.resolveObject('mirrormodel_mc'),'SetTo',[.01]);
  const raised=game.objectPosition(mirror);
  assert.deepEqual(raised,[2340,-154,-1158]);assert.deepEqual(mirror.position,base);
  const restored=forest(JSON.parse(JSON.stringify(game.snapshot())));
  assert.deepEqual(restored.game.objectPosition(restored.game.find('mirror')[0]),raised);
  const world=new CastleWorld({},{}),actor=new THREE.Group();world.gameplay=game;world.actorInstances.set(mirror.id,actor);
  world.syncActors(0);assert.equal(actor.position.x,raised[0]);assert.equal(actor.position.z,raised[2]);assert.ok(actor.position.y>=raised[1]);world.dispose();
  // Freeze original timelines to isolate physical collection at the raised spot.
  host.cutscene=false;for(const player of host.players.values())player.stop();
  game.update(.01,raised,{lineOfSight:()=>true});
  assert.equal(mirror.collected,true);assert.equal(game.completed,true);assert.equal(game.state.mirror,1);
});

test('the last mirror never acts as a fallback level exit without a script host',()=>{
  const game=new Gameplay(json('../data/levels/lvl04a/level.json'),{deferInit:true});
  game.pickup(game.find('laatste')[0]);assert.equal(game.state.mirror,1);assert.equal(game.completed,false);
});

test('patrol topology ignores moving doors and remains identical after save/load',async()=>{
  const level={id:'lvl00a',spawn:{position:[0,0,0]},entities:[
    {classname:'GrobberPathPoint','%name%':'A',Origin:'0 0 0'},
    {classname:'GrobberPathPoint','%name%':'B',Origin:'100 0 0'}
  ]};
  const graph=async(closed,save=null)=>{
    const game=new Gameplay(level,{save,deferInit:true}),world=new CastleWorld({},{}),queries=[];
    world.collider={trace(a,b,mins,maxs,models){queries.push(models);return {fraction:closed&&models.includes(1)?0:1,end:b};}};
    await world.attachGameplay(game);
    const links=[...game.navigation.links].map(([id,next])=>[id,[...next]]),snapshot=game.snapshot();world.dispose();
    return {links,snapshot,queries};
  };
  const closed=await graph(true),restoredOpen=await graph(false,closed.snapshot);
  assert.deepEqual(closed.links,[['A',['B']],['B',['A']]]);assert.deepEqual(closed.links,restoredOpen.links);
  assert.ok(closed.queries.every(models=>models.length===1&&models[0]===0));
});

test('collecting a model-bound item leaves its supporting bridge visible and solid',()=>{
  const level=json('../data/levels/lvl03a/level.json'),game=new Gameplay(level,{deferInit:true});
  const potion=game.find('fire_potion05')[0];assert.ok(potion.modelIndex);
  assert.equal(game.modelState(potion.modelIndex).solid,true);
  game.pickup(potion);assert.equal(potion.collected,true);
  assert.equal(game.modelState(potion.modelIndex).visible,true);assert.equal(game.modelState(potion.modelIndex).solid,true);
});
