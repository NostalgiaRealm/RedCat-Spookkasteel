import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../source/gameplay.js';
import {ScriptHost} from '../source/script-host.js';

// Script integration scenarios, not a keyboard-controlled campaign run.
// Inputs call ordinary button/pickup/trigger entry points at each fixture;
// compiled puzzle callbacks and motion markers must produce the resulting
// gate state. No puzzle counters, global variables, or final doors are forced.
const read=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const clone=value=>JSON.parse(JSON.stringify(value));
const assets=new Map([2,3,4].map(index=>{
  const id=`lvl0${index}a`;
  return [index,{level:read(`data/levels/${id}/level.json`),program:read(`data/davi/${id}.json`),motions:read(`data/motions/${id}.json`)}];
}));
function boot(index,save=null) {
  const {level,program,motions}=assets.get(index),events=[];
  const game=new Gameplay(level,{deferInit:true,save,onEvent:event=>events.push(event)});
  const host=new ScriptHost(game,program,{motions,dialogue:read('data/dialogue/nl.json')});
  host.initialize(save?.scripts);
  const object=name=>{const result=game.find(name)[0];assert.ok(result,name);return result;};
  return {index,game,host,events,object};
}
function tick(scene,seconds) {
  for(let time=0;time<seconds-1e-9;time+=.025)scene.host.update(Math.min(.025,seconds-time));
  assert.equal(scene.host.vm.lastError,null);assert.deepEqual(scene.host.errors,[]);
  assert.equal(scene.game.unsupportedCommands.size,0);
}
function reload(scene,names=[]) {
  const save=clone(scene.game.snapshot()),restored=boot(scene.index,save);
  assert.deepEqual(restored.host.vm.snapshot(),scene.host.vm.snapshot());
  for(const name of names) {
    const before=scene.object(name),after=restored.object(name);
    assert.deepEqual(restored.game.modelState(after.modelIndex),scene.game.modelState(before.modelIndex),name+' render/collision state');
    assert.deepEqual(restored.host.modelTransforms.get(after.modelIndex),scene.host.modelTransforms.get(before.modelIndex),name+' pose');
  }
  return restored;
}

test('all four Caves altar puzzles open the boss route only after their own final motions, including saves between buttons',()=>{
  let scene=boot(3);tick(scene,90);
  scene.game.trigger(scene.object('trigger_hide_tralies'));
  const doors=['door_left_to_end','door_right_to_end'];
  assert.ok(doors.every(name=>scene.object(name).locked));
  const groups=[
    ['rots_altaar_but01','rots_altaar_but02','rots_altaar_but03'],
    ['fire_but01','fire_but02','fire_but03'],
    ['wat_but03','wat_but04','wat_but05'],
    ['air_but01','air_but02','air_but03'],
  ];
  for(const [index,buttons] of groups.entries()) {
    for(const name of buttons) {
      scene.game.switchButton(scene.object(name),true);
      tick(scene,.4);scene=reload(scene,[name,...doors]);tick(scene,.8);
      assert.equal(scene.object('unlock_max').triggerCount,index,'no early altar completion');
    }
    tick(scene,25);scene=reload(scene,doors);
    assert.equal(scene.object('unlock_max').triggerCount,index+1);
    assert.ok(doors.every(name=>scene.object(name).locked===(index<3)));
    for(const name of buttons)scene.game.switchButton(scene.object(name),true);
    tick(scene,25);assert.equal(scene.object('unlock_max').triggerCount,index+1,'completed buttons cannot recount');
  }
  assert.ok([1,2,3,4].every(i=>!scene.object(`beam_endboss0${i}`).enabled));
  scene.game.respawn();scene=reload(scene,doors);
  assert.ok(doors.every(name=>!scene.object(name).locked),'solved altars remain solved after death');
});

test('Caves fire bridges and rotating earth passage preserve their finished collision poses across reload and respawn',()=>{
  let scene=boot(3);tick(scene,90);
  const buttons=['fire_button01','fire_button02','fire_button03','fire_button04','draai_button01','draai_button02','draai_button03'];
  const models=['fire_bridge02','fire_bridge03','fire_bridge04','fire_bridge05','draai_opening','draai_opening01'];
  for(const name of buttons) {
    scene.game.switchButton(scene.object(name),true);tick(scene,.3);
    scene=reload(scene,models);tick(scene,12);scene=reload(scene,models);
  }
  for(const name of models.slice(0,5))assert.equal(scene.host.players.get(scene.object(name).id).finished,true,name);
  assert.equal(scene.object('draai_opening01').visible,false);
  const poses=clone([...scene.host.modelTransforms]);
  scene.game.respawn();scene=reload(scene,models);
  for(const name of models)assert.deepEqual(scene.host.modelTransforms.get(scene.object(name).modelIndex),new Map(poses).get(scene.object(name).modelIndex),name);
});

test('Tower five mirror placements survive reload, start one witch, and reach the authored ending',()=>{
  let scene=boot(4);tick(scene,90);
  for(let i=1;i<=4;i++) {
    const trigger=`trigger_sokkel0${i}`,model=`move_standaard0${i}`;
    scene.game.trigger(scene.object(trigger));tick(scene,.3);
    scene=reload(scene,[model]);tick(scene,3);
    assert.equal(scene.object(trigger).enabled,false);
    assert.equal(scene.object('witch_enable').triggerCount,i);
    assert.equal(scene.object('The_Witch').enabled,false);
  }
  scene.game.trigger(scene.object('trigger_sokkel05'));
  assert.equal(scene.object('witch_enable').triggerCount,4,'fifth placement needs the local last mirror');
  scene.game.pickup(scene.object('laatste'));assert.equal(scene.game.completed,false);
  scene.game.trigger(scene.object('trigger_sokkel05'));tick(scene,.3);
  scene=reload(scene,['move_standaard05']);tick(scene,45);
  assert.equal(scene.object('witch_enable').triggerCount,5);
  assert.equal(scene.object('The_Witch').enabled,true);
  assert.equal(scene.host.cutscene,false);
  // Combat feasibility is checked separately. Here ordinary destruction is
  // the fixture boundary for the original 65-second ending callback chain.
  scene.game.destroy(scene.object('The_Witch'));tick(scene,25);
  scene=reload(scene,['move_standaard01','move_standaard05']);tick(scene,45);
  assert.equal(scene.game.completed,true);
  assert.equal(scene.host.cutscene,false);
  assert.deepEqual(scene.events.filter(e=>e.type==='levelComplete').map(e=>e.target),[null]);
  tick(scene,90);assert.equal(scene.events.filter(e=>e.type==='levelComplete').length,1);
});

test('late-level fairy rewards can be earned from authored pickups and survive saves without spending potions',()=>{
  for(const [index,trigger,mask] of [[2,'csmc05_tr',8],[3,'trigger_cuts04',4]]) {
    let scene=boot(index);tick(scene,90);
    const potions=scene.game.objects.filter(o=>o.subtype==='potion');
    assert.ok(potions.length>=30);
    for(const potion of potions.slice(0,29))scene.game.pickup(potion);
    scene.game.trigger(scene.object(trigger));tick(scene,60);
    assert.equal(scene.game.state.skill&mask,0);
    scene=reload(scene);scene.game.pickup(scene.game.objects.find(o=>o.id===potions[29].id));
    scene.game.trigger(scene.object(trigger));tick(scene,.3);scene=reload(scene);tick(scene,60);
    assert.equal(scene.game.state.skill&mask,mask);assert.equal(scene.game.state.potions,30);
  }
});

test('all six Caves save pillars restore their authored respawn point without rewinding completed gates',()=>{
  let scene=boot(3);tick(scene,90);
  scene.game.switchButton(scene.object('fire_button01'),true);tick(scene,12);
  const bridge=scene.object('fire_bridge02'),pose=clone(scene.host.modelTransforms.get(bridge.modelIndex));
  for(let i=1;i<=6;i++) {
    scene.game.trigger(scene.object(`trigger_save${i}`));tick(scene,.1);
    const checkpoint=clone(scene.game.checkpoint);
    assert.deepEqual(checkpoint.position,scene.object(`save_pilaar${i}d`).position);
    scene=reload(scene,['fire_bridge02']);
    assert.deepEqual(scene.game.checkpoint,checkpoint);
    assert.deepEqual(scene.game.respawn(),checkpoint.position);
    assert.deepEqual(scene.host.modelTransforms.get(bridge.modelIndex),pose);
  }
});

test('all authored Graveyard and Caves secret triggers count once across death and reload',()=>{
  for(const index of [2,3]) {
    let scene=boot(index);tick(scene,90);
    const secrets=scene.game.objects.filter(o=>o.kind==='trigger'&&Number(o.entity.IsSecret));
    assert.equal(secrets.length,4);
    for(const [number,secret] of secrets.entries()) {
      scene.game.trigger(scene.game.objects.find(o=>o.id===secret.id));
      assert.equal(scene.game.state.secrets,number+1);
      scene=reload(scene);scene.game.respawn();
      scene.game.trigger(scene.game.objects.find(o=>o.id===secret.id));
      assert.equal(scene.game.state.secrets,number+1);
    }
  }
});
