import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {BspCollider} from '../src/collision.js';

const json=name=>JSON.parse(readFileSync(new URL('../'+name,import.meta.url)));
const level=json('data/levels/lvl02a/level.json'),program=json('data/davi/lvl02a.json'),motions=json('data/motions/lvl02a.json');
function boot(save=null) {
  const game=new Gameplay(level,{deferInit:true,save}),host=new ScriptHost(game,program,{motions});host.initialize(save?.scripts);
  return {game,host,object:name=>game.find(name)[0]};
}
function tick(host,seconds){for(let t=0;t<seconds-1e-8;t+=.025)host.update(Math.min(.025,seconds-t));}
function doorway(scene) {
  const collider=new BspCollider(level.collision);collider.modelTransforms=scene.host.modelTransforms;
  const models=['lastdoor_left','lastdoor_right'].map(name=>scene.object(name).modelIndex);
  return collider.trace([1660,-39,728],[1560,-39,728],[-11,0,-11],[11,56,11],models);
}

test('both original grave buttons open the disabled paired doors through the compiled Davi callbacks',()=>{
  const scene=boot(),{game,host,object}=scene;
  assert.equal(object('lastdoor_left').enabled,false);assert.equal(object('lastdoor_right').enabled,false);
  assert.ok(doorway(scene).fraction<1);
  game.switchButton(object('dknopa'),true);tick(host,1.1);
  assert.equal(object('dubbeltrigger').triggerCount,1);assert.equal(object('lastdoor_left').open,false);
  game.switchButton(object('dknopb'),true);tick(host,1.1);
  assert.equal(object('dubbeltrigger').triggerCount,2);
  for(const name of ['lastdoor_left','lastdoor_right']){
    assert.equal(object(name).open,true);assert.equal(object(name).enabled,false);
    assert.equal(host.players.get(object(name).id).playing,true);
  }
  tick(host,2.1);assert.equal(doorway(scene).fraction,1);
  assert.equal(object('bat1').enabled,true);assert.equal(object('bat2').enabled,true);assert.equal(host.vm.lastError,null);
  game.switchButton(object('dknopa'),false);game.switchButton(object('dknopa'),true);tick(host,1.1);
  assert.equal(object('dubbeltrigger').triggerCount,2);
});

test('grave-door progress survives saving after one button and during the paired opening motion',()=>{
  let scene=boot();scene.game.switchButton(scene.object('dknopa'),true);tick(scene.host,1.1);
  scene=boot(JSON.parse(JSON.stringify(scene.game.snapshot())));
  assert.equal(scene.object('dknopa').switchCount,1);assert.equal(scene.object('dubbeltrigger').triggerCount,1);
  scene.game.switchButton(scene.object('dknopb'),true);tick(scene.host,1.7);
  const before=scene.host.players.get(scene.object('lastdoor_left').id).time;
  assert.ok(before>0&&before<2);
  const restored=boot(JSON.parse(JSON.stringify(scene.game.snapshot())));
  assert.equal(restored.host.players.get(restored.object('lastdoor_left').id).time,before);
  tick(restored.host,2);assert.equal(doorway(restored).fraction,1);
  assert.equal(restored.object('lastdoor_left').open,true);assert.equal(restored.object('lastdoor_right').open,true);
});

test('disabled door still rejects direct player touch and use while explicit script Open works',()=>{
  const fixture={id:'lvl00a',spawn:{position:[0,0,0]},entities:[{
    classname:'DoorModel','%name%':'door',DaviName:'door',Origin:'0 0 0',IsInitiallyEnabled:'0',TouchToOpen:'1',
  }]};
  const game=new Gameplay(fixture),door=game.find('door')[0];
  game.update(.1,[0,0,0],{use:true});assert.equal(door.open,false);
  game.command(door,'open');assert.equal(door.open,true);assert.equal(door.enabled,false);
});
