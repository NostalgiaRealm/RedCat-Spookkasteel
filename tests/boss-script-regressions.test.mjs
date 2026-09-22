import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';

const json=path=>JSON.parse(readFileSync(new URL(path,import.meta.url)));
function boot(index,save=null) {
  const id=`lvl0${index}a`,events=[];
  const game=new Gameplay(json(`../data/levels/${id}/level.json`),{deferInit:true,save,onEvent:event=>events.push(event)});
  const host=new ScriptHost(game,json(`../data/davi/${id}.json`),{motions:json(`../data/motions/${id}.json`),dialogue:json('../data/dialogue/nl.json')});
  host.initialize(save?.scripts);
  return {game,host,events,object:name=>{const object=game.find(name)[0];assert.ok(object,name);return object;}};
}
function advance(host,seconds) {for(let elapsed=0;elapsed<seconds;elapsed+=.1)host.update(.1);}

test('original cave intro moves its Max double away before the turret battle handoff',()=>{
  const {game,host,object}=boot(3);advance(host,60);
  const double=object('max_actor'),boss=object('Max'),start=game.objectPosition(double);
  assert.equal(boss.enemyType,'maxd');assert.equal(boss.actorFile,'maxd');
  assert.equal(boss.enabled,false);assert.deepEqual(start,[2,36,-2143]);
  game.trigger(object('trigger_cuts05'));advance(host,15.5);
  assert.equal(host.cutscene,true);assert.deepEqual(game.objectPosition(double),start);
  advance(host,1.7);
  assert.deepEqual(game.objectPosition(double),[2,-37,-2143]);
  assert.equal(host.players.get(object('max_model').id).finished,true);
  advance(host,2);
  assert.equal(host.cutscene,false);assert.equal(host.enemiesFrozen,false);
  game.setDoor(object('door_left_endbattle'),true);
  game.setDoor(object('door_left_endbattle'),false);
  assert.equal(boss.enabled,true);assert.equal(host.musicState.sound,'Endbosses.wav');
  const restored=boot(3,JSON.parse(JSON.stringify(game.snapshot())));
  assert.deepEqual(restored.game.objectPosition(restored.object('max_actor')),[2,-37,-2143]);
  assert.equal(restored.object('Max').enemyType,'maxd');assert.equal(restored.object('Max').enabled,true);
  game.destroy(boss);
  assert.deepEqual(['door_left_to_tower','door_right_to_tower'].map(name=>object(name).locked),[false,false]);
  assert.equal(host.vm.lastError,null);
});

test('castle WhizKitty scene uses the inside endpoint despite its duplicate PlayerStart name',()=>{
  const {game,host,events,object}=boot(1);
  advance(host,30);
  const matches=game.find('rcpoint1'),outside=matches.find(o=>o.entity.classname==='PlayerStart');
  const inside=matches.find(o=>o.entity.classname==='EffectEndPoint');
  assert.deepEqual(outside.position,[-416,-40,2648]);
  assert.deepEqual(inside.position,[-84,-18,458]);
  game.playerPosition=[...object('TRcamera02').position];
  events.length=0;
  game.trigger(object('TRcamera02'));
  advance(host,1.2);
  assert.equal(host.cutscene,true);
  assert.equal(host.subtitle.text,'Help, RedCat, hellup!');
  assert.deepEqual(game.playerPosition,inside.position);
  assert.deepEqual(events.filter(e=>e.type==='teleport').map(e=>e.position),[inside.position]);
  advance(host,30);
  assert.equal(host.cutscene,false);
  assert.deepEqual(game.playerPosition,inside.position);
});

test('Brutus defeat restores ambient music and raises the mirror through the original ending motion',()=>{
  const scene=boot(0),{game,host,events,object}=scene;
  advance(host,60);
  const boss=object('brutus'),mirror=object('mirror'),music=object('muziek');
  const before=structuredClone(host.modelTransforms.get(mirror.modelIndex));
  game.trigger(object('csmc10_tr'));
  advance(host,25.1);
  assert.equal(boss.enabled,true);
  assert.equal(host.musicState.sound,'Endbosses.wav');
  game.destroy(boss);
  assert.equal(object('csmc12').enabled,true);
  assert.deepEqual(host.musicState,{id:music.id,sound:'Level 1 - The Forest.wav'});
  advance(host,24.1);
  const raised=host.modelTransforms.get(mirror.modelIndex);
  assert.ok(raised.translation[1]>before.translation[1]+50);
  assert.equal(host.players.get(object('mirrormodel_mc').id).finished,true);
  assert.equal(host.cutscene,false);
  assert.equal(game.completed,false);
  const restored=boot(0,JSON.parse(JSON.stringify(game.snapshot())));
  assert.deepEqual(restored.host.modelTransforms.get(mirror.modelIndex),raised);
  assert.equal(restored.host.musicState.sound,'Level 1 - The Forest.wav');
  restored.game.pickup(restored.object('mirror'));
  restored.game.pickup(restored.object('mirror'));
  assert.equal(restored.game.state.mirror,1);
  assert.deepEqual(restored.events.filter(e=>e.type==='levelComplete').map(e=>e.target),['lvl01a']);
  assert.equal(events.filter(e=>e.type==='levelComplete').length,0);
});

test('native boss activation selects special music in each original arena',()=>{
  for(const [index,name] of ['brutus','Max','bonecollector','Max','The_Witch'].entries()) {
    const {game,host,object}=boot(index);
    game.command(object(name),'enable');
    assert.equal(host.musicState.sound.toLowerCase(),'endbosses.wav');
  }
});

test('boss defeat chooses action music while another living enemy remains engaged',()=>{
  const {game,host,object}=boot(3),boss=object('Max');
  game.command(boss,'enable');
  const other=game.objects.find(o=>o.kind==='enemy'&&o!==boss);
  other.enabled=true;other.alerted=true;
  game.destroy(boss);
  assert.equal(host.musicState.sound,'spookkort3.wav');
  const restored=boot(3,JSON.parse(JSON.stringify(game.snapshot())));
  assert.equal(restored.host.musicState.sound,'spookkort3.wav');
  restored.game.objects.find(o=>o.id===other.id).alerted=false;
  restored.host.update(.1);
  assert.equal(restored.host.musicState.sound,'Level 4 - The Caves.wav');
});

test('older saves with a defeated Brutus no longer restart the stranded boss track',()=>{
  const {game,host,object}=boot(0);
  game.command(object('brutus'),'enable');
  game.destroy(object('brutus'));
  const save=JSON.parse(JSON.stringify(game.snapshot()));
  save.scripts.musicState={id:object('muziek').id,sound:'Endbosses.wav'};
  delete save.scripts.afterBossMusicId;
  const restored=boot(0,save);
  assert.equal(restored.host.musicState.sound,'Level 1 - The Forest.wav');
  assert.equal(restored.events.filter(e=>e.type==='scriptMusic').at(-1).sound,'Level 1 - The Forest.wav');
});

test('an empty authored music selection stops the previous track and remains stopped after loading',()=>{
  const scene=boot(0),binding=scene.host.resolveObject('muziek');
  scene.host.callMethod(binding,'PlaySpecial');
  scene.host.callMethod(binding,'PlayVictory');
  assert.equal(scene.host.musicState.stop,true);
  assert.equal(scene.events.at(-1).stop,true);
  const restored=boot(0,JSON.parse(JSON.stringify(scene.game.snapshot())));
  assert.equal(restored.host.musicState.stop,true);
  assert.equal(restored.events.filter(e=>e.type==='scriptMusic').at(-1).stop,true);
});

test('all four exit mirrors execute their authored route to the following level exactly once',()=>{
  for(let index=0;index<4;index++) {
    const {game,host,events,object}=boot(index);
    advance(host,60);
    const mirror=game.objects.find(o=>o.subtype==='mirror');
    game.pickup(mirror);
    if(index===3) {
      advance(host,8.2);
      assert.equal(object('enter').motionStarted,true);
      assert.equal(game.completed,false); // The mirror opens the cave exit doorway.
      game.trigger(object('end_level'));
    } else advance(host,60);
    game.pickup(mirror);
    assert.equal(game.state.mirror,1);
    assert.deepEqual(events.filter(e=>e.type==='levelComplete').map(e=>e.target),[`lvl0${index+1}a`]);
    assert.equal(host.vm.lastError,null);
  }
});
