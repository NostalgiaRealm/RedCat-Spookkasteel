import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { Gameplay } from '../src/gameplay.js';
import { ScriptHost } from '../src/script-host.js';

const json = path => JSON.parse(readFileSync(new URL(path, import.meta.url)));
const dialogue = json('../data/dialogue/nl.json');
const levels = Array.from({ length: 5 }, (_, i) => {
  const id = `lvl0${i}a`;
  return { level: json(`../data/levels/${id}/level.json`), program: json(`../data/davi/${id}.json`), motions: json(`../data/motions/${id}.json`) };
});
function boot(index, save = null) {
  const { level, program, motions } = levels[index], events = [];
  const game = new Gameplay(level, { deferInit: true, save, onEvent: event => events.push(event) });
  const host = new ScriptHost(game, program, { motions, dialogue });
  host.initialize(save?.scripts ?? null);
  return { game, host, events, object: name => { const object = game.find(name)[0]; assert.ok(object, `Original object ${name}`); return object; } };
}

test('all original levels bind scripts and motion assets without initialization faults', () => {
  for (let i = 0; i < 5; i++) {
    const { game, host } = boot(i);
    assert.ok(host.players.size > 20);
    for (let tick = 0; tick < 100; tick++) host.update(.1);
    assert.equal(host.vm.lastError, null);
    assert.equal(game.unsupportedCommands.size, 0);
  }
});

test('original forest potion branch checks the configured threshold and grants only the correct skill', () => {
  const insufficient = boot(0);
  insufficient.game.state.potions = 9;
  insufficient.game.trigger(insufficient.object('csmc06_tr'));
  assert.equal(insufficient.object('csmc06').enabled, false);
  assert.equal(insufficient.object('csmc11').enabled, true);
  assert.equal(insufficient.game.state.skill, 0);
  const sufficient = boot(0);
  sufficient.game.state.potions = 10;
  sufficient.game.trigger(sufficient.object('csmc06_tr'));
  assert.equal(sufficient.object('csmc06').enabled, true);
  assert.equal(sufficient.object('csmc11').enabled, false);
  assert.equal(sufficient.game.state.skill & 1, 1);
  assert.ok(sufficient.host.players.get(sufficient.object('csmc06').id).playing);
});

test('graveyard original pillar callbacks open the mausoleum only when the conjunction succeeds', () => {
  const { game, host, object } = boot(2);
  game.runEvent(object('puzstuk3_mc'), 'MotionCommand', ['paal3b', 2.01]);
  for (const i of [1, 2, 4, 5]) game.runEvent(object(`puzstuk${i}_mc`), 'MotionCommand', [`paal${i}e`, 8.01]);
  assert.equal(object('mausomodel_mc').enabled, false);
  game.runEvent(object('puzstuk3_mc'), 'MotionCommand', ['paal3e', 8.01]);
  assert.equal(object('mausomodel_mc').enabled, true);
  assert.equal(host.players.get(object('mausomodel_mc').id).playing, true);
  assert.deepEqual(Object.values(host.vm.snapshot().globals).map(v => v.value), [1, 1, 1, 1, 1]);
});

test('graveyard looping motion wraps to the correct first marker within its geometric path endpoint', () => {
  const { game, host, object } = boot(2), pillar = object('puzstuk1_mc');
  const player = host.players.get(pillar.id);
  assert.equal(player.motion.endTime, 8);
  assert.equal(player.motion.playbackEndTime, 8.01);
  host.callMethod(host.resolveObject('puzstuk1_mc'), 'SetTo', [7.5]);
  game.command(pillar, 'enable');
  host.update(1);
  assert.equal(host.vm.snapshot().globals['37:0'].value, 1);
  assert.ok(player.time<.02);
  assert.equal(player.loopTo,8);
  assert.equal(pillar.enabled, false);
  assert.equal(player.playing, false);
});

test('witch defeat drives the original motion callback, freezes enemies and teleports RedCat', () => {
  const { game, host, events, object } = boot(4), witch = object('The_Witch');
  game.destroy(witch);
  assert.equal(witch.health, 0);
  assert.equal(game.state.kills, 1);
  assert.equal(object('beam_sequence01').enabled, true);
  assert.equal(object('beam_sequence02').enabled, true);
  for (let i = 0; i < 5; i++) host.update(.1);
  assert.equal(host.cutscene, true);
  assert.equal(host.enemiesFrozen, true);
  assert.equal(host.camera.id, object('cam_witch11').id);
  assert.deepEqual(game.playerPosition, object('RC_cuts04').position);
  assert.ok(events.some(e => e.type === 'teleport'));
  game.destroy(witch); assert.equal(game.state.kills, 1);
});

test('tower last-mirror pickup unlocks the fifth placement without prematurely completing the level', () => {
  const { game, host, object } = boot(4);
  for (let i = 1; i <= 4; i++) game.trigger(object(`trigger_sokkel0${i}`));
  assert.equal(host.vm.snapshot().globals['37:1'].value, 4);
  game.runEvent(object('trigger_sokkel05'), 'CommandOnEnter');
  assert.equal(object('move_standaard05').enabled, false);
  game.pickup(object('laatste'));
  assert.equal(game.completed, false);
  assert.equal(game.state.mirror, 1);
  assert.equal(host.vm.snapshot().globals['37:0'].value, 1);
  game.runEvent(object('trigger_sokkel05'), 'CommandOnEnter');
  assert.equal(object('move_standaard05').enabled, true);
  assert.equal(object('trigger_sokkel05').enabled, false);
  assert.equal(host.vm.snapshot().globals['37:1'].value, 5);
});

test('save/load retains pickup, script globals and partially completed puzzle state', () => {
  const original = boot(4);
  original.game.pickup(original.object('laatste'));
  original.game.trigger(original.object('trigger_sokkel01'));
  original.host.update(.125);
  const save = JSON.parse(JSON.stringify(original.game.snapshot())), restored = boot(4, save);
  assert.deepEqual(restored.host.vm.snapshot(), original.host.vm.snapshot());
  assert.equal(restored.object('laatste').collected, true);
  const before = restored.game.state.score;
  restored.game.pickup(restored.object('laatste'));
  assert.equal(restored.game.state.score, before);
  assert.equal(restored.object('trigger_sokkel01').enabled, false);
  const originalMotion = original.host.players.get(original.object('move_standaard01').id), restoredMotion = restored.host.players.get(restored.object('move_standaard01').id);
  assert.equal(restoredMotion.time, originalMotion.time);
  assert.equal(restoredMotion.playing, originalMotion.playing);
  restored.game.trigger(restored.object('trigger_sokkel02'));
  assert.equal(restored.host.vm.snapshot().globals['37:1'].value, 2);
});

test('restoring paused motions stops current playback and does not replay an emitted event marker', () => {
  const scene = boot(4), paused = JSON.parse(JSON.stringify(scene.game.snapshot()));
  scene.game.destroy(scene.object('The_Witch'));
  assert.equal(scene.host.players.get(scene.object('beam_sequence02').id).playing, true);
  scene.game.restore(paused);
  assert.equal(scene.host.players.get(scene.object('beam_sequence02').id).playing, false);
  scene.game.destroy(scene.object('The_Witch'));
  scene.host.update(.1); // Exactly on the already emitted StartCutScene marker.
  const save = JSON.parse(JSON.stringify(scene.game.snapshot()));
  const restored = boot(4, save); restored.events.length = 0;
  restored.host.update(.01);
  assert.equal(restored.events.filter(e => e.type === 'cutscene').length, 0);
});

test('original castle boss door self-open callback does not recurse and paired doors open once', () => {
  const { game, host, events, object } = boot(1);
  game.command(object('doorendboss01'), 'enable');
  game.command(object('doorendboss02'), 'enable');
  events.length = 0;
  game.command(object('doorendboss01'), 'open');
  assert.equal(object('doorendboss01').open, true);
  assert.equal(object('doorendboss02').open, true);
  assert.equal(object('MCcamera06').enabled, true);
  assert.equal(host.vm.lastError, null);
  assert.equal(events.filter(e => e.type === 'door' && e.open).length, 2);
  game.command(object('doorendboss01'), 'open');
  assert.equal(events.filter(e => e.type === 'door' && e.open).length, 2);
});

test('later level initial weapon skills follow the original StandardSkill settings', () => {
  assert.deepEqual(levels.map((_, i) => boot(i).game.state.skill), [0, 1, 3, 7, 15]);
});

test('tower witch trigger waits for all five mirrors and persists its counter', () => {
  const scene=boot(4), gate=scene.object('witch_enable');
  for(let i=1;i<=4;i++)scene.game.trigger(scene.object(`trigger_sokkel0${i}`));
  assert.equal(gate.triggerCount,4);
  assert.equal(scene.object('trigger_witchmodel').enabled,false);
  const restored=boot(4,JSON.parse(JSON.stringify(scene.game.snapshot())));
  restored.game.pickup(restored.object('laatste'));
  restored.game.trigger(restored.object('trigger_sokkel05'));
  assert.equal(restored.object('witch_enable').triggerCount,5);
  assert.equal(restored.object('trigger_witchmodel').enabled,true);
});

test('cave boss doors stay locked until all four elemental puzzle signals arrive', () => {
  const {game,object}=boot(3),gate=object('unlock_max');
  game.command(object('door_left_to_end'),'lock');game.command(object('door_right_to_end'),'lock');
  for(let i=0;i<3;i++)game.trigger(gate);
  assert.equal(object('door_left_to_end').locked,true);
  assert.equal(object('door_right_to_end').locked,true);
  game.trigger(gate);
  assert.equal(object('door_left_to_end').locked,false);
  assert.equal(object('door_right_to_end').locked,false);
});


test('an inactive controller sharing a brush cannot overwrite an opening crypt door', () => {
  const {game,host,object}=boot(2),door=object('crypt_right');
  game.command(door,'open');host.update(.05);
  const expected=host.players.get(door.id).sample();
  assert.deepEqual(host.modelTransforms.get(door.modelIndex).translation,expected.translation);
  assert.deepEqual(host.modelTransforms.get(door.modelIndex).rotation,expected.rotation);
  const restored=boot(2,JSON.parse(JSON.stringify(game.snapshot())));
  assert.deepEqual(restored.host.modelTransforms.get(door.modelIndex),host.modelTransforms.get(door.modelIndex));
});

test('touching an initially paused cave platform starts its original motion handler',()=>{
  const {game,host,object}=boot(3),platform=object('fire_stone01');
  assert.equal(platform.enabled,false);
  game.update(.016,[-10000,0,-10000],{touchedModels:[platform.modelIndex]});
  assert.equal(platform.enabled,true);
  assert.equal(host.players.get(platform.id).playing,true);
});

test('shooting the inactive graveyard plank brush invokes its original destruction script',()=>{
  const {game,object}=boot(2),planks=object('planken1_mc');
  assert.equal(planks.enabled,false);
  game.attack([10000,0,10000],[0,0,-1]);
  game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();
  game.updateProjectiles(.01,[10000,0,10000],()=>({fraction:.001,modelIndex:planks.modelIndex}));
  assert.equal(planks.visible,false);
  assert.equal(game.modelState(planks.modelIndex).solid,false);
  assert.equal(object('plankdum1').health,0);
});

test('an original shootable button is selected by the first brush hit',()=>{
  const {game,object}=boot(0),button=object('schietknop_mc');
  game.state.skill=1;
  game.attack([10000,0,10000],[0,0,-1]);
  game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();
  game.updateProjectiles(.01,[10000,0,10000],()=>({fraction:.001,modelIndex:button.modelIndex}),()=>false);
  assert.equal(button.switchedOn,true);
});

test('forest boss music selection and scripted volume survive saving and loading',()=>{
  const original=boot(0),controller=original.object('csmc10'),music=original.object('muziek');
  original.game.runEvent(controller,'MotionCommand',['startmusic',0]);
  original.game.runEvent(controller,'MotionCommand',['volumedown',0]);
  assert.deepEqual(original.host.musicState,{id:music.id,sound:'Endbosses.wav',mode:'special'});
  assert.equal(music.volume,.5);
  const restored=boot(0,JSON.parse(JSON.stringify(original.game.snapshot())));
  assert.deepEqual(restored.events.filter(e=>e.type==='scriptMusic'),[
    {type:'scriptMusic',id:music.id,sound:'Endbosses.wav',mode:'special',volume:.5}
  ]);
  restored.game.runEvent(restored.object('csmc10'),'MotionCommand',['volumeup',0]);
  assert.equal(restored.object('muziek').volume,1);
  assert.deepEqual(restored.events.at(-1),{type:'scriptVolume',id:music.id,volume:1});
});

test('stopped music remains stopped after loading and can be selected again',()=>{
  const original=boot(0),binding=original.host.resolveObject('muziek'),music=original.object('muziek');
  original.host.callMethod(binding,'PlaySpecial');
  original.host.callMethod(binding,'StopPlaying');
  assert.deepEqual(original.events.at(-1),{type:'scriptMusic',id:music.id,stop:true});
  const restored=boot(0,JSON.parse(JSON.stringify(original.game.snapshot())));
  assert.deepEqual(restored.events.filter(e=>e.type==='scriptMusic'),[
    {type:'scriptMusic',id:music.id,stop:true,volume:1}
  ]);
  restored.host.callMethod(restored.host.resolveObject('muziek'),'PlayAmbient');
  assert.deepEqual(restored.host.musicState,{id:music.id,sound:'Level 1 - The Forest.wav',mode:'ambient'});
  assert.equal(restored.events.at(-1).stop,undefined);
});

test('forest opening and older saves keep the default ambient music selection',()=>{
  const original=boot(0);
  assert.equal(original.host.musicState,null);
  assert.ok(!original.events.some(e=>e.type==='scriptMusic'));
  const save=JSON.parse(JSON.stringify(original.game.snapshot()));
  for(const legacy of [false,true]) {
    if(legacy)delete save.scripts.musicState;
    const restored=boot(0,save);
    assert.equal(restored.host.musicState,null);
    assert.ok(!restored.events.some(e=>e.type==='scriptMusic'));
  }
});
