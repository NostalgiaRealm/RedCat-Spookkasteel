import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {PLAYER_REACTIONS} from '../src/player-lifecycle.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const clone=value=>JSON.parse(JSON.stringify(value));
const assets=new Map();
const progression=['heg1_mc','heg2_mc','heg3_mc','heg4_mc','heg5_mc'];
const triggers=['heg1_trigger_mc','heg2_closetrigger_mc','heg3_trigger1_mc','heg3_trigger2_mc','heg5_trigger_mc'];
const initialEnabled=[true,true,true,false,true];
function boot(save=null,id='lvl02a',position=null) {
  if(!assets.has(id))assets.set(id,{level:json(`data/levels/${id}/level.json`),program:json(`data/davi/${id}.json`),motions:json(`data/motions/${id}.json`)});
  const {level,program,motions}=assets.get(id),events=[];
  const game=new Gameplay(level,{deferInit:true,save,onEvent:event=>events.push(event)});
  if(position)game.playerPosition=[...position];
  const host=new ScriptHost(game,program,{motions});host.initialize(save?.scripts);
  // Reach ordinary play through the imported opening timeline before testing
  // death; its delayed StartCutScene would otherwise make damage a no-op.
  if(!save){host.update(.15);host.skipCutscene();events.length=0;}
  const object=name=>{const result=game.find(name)[0];assert.ok(result,`Original object ${name}`);return result;};
  return {game,host,events,object,player:name=>host.players.get(object(name).id)};
}
function tick(scene,seconds,gameplay=false) {
  while(seconds>1e-9){const dt=Math.min(.02,seconds);scene.host.update(dt);if(gameplay)scene.game.update(dt,scene.game.playerPosition||[-10000,0,-10000]);seconds-=dt;}
}
function advanceStages(scene,count,partial=false) {
  for(let i=0;i<count;i++){
    scene.game.trigger(scene.object(triggers[i]));
    tick(scene,partial&&i===count-1?.12:3.1);
  }
}
function assertInitialMaze(scene) {
  for(const [index,name] of triggers.entries()){
    const object=scene.object(name);
    assert.equal(object.triggerCount,0,`${name} can fire again`);
    assert.equal(object.enabled,initialEnabled[index],`${name} has its original activation prerequisite`);
    assert.equal(object.inside,false,`${name} can detect a fresh entry`);
  }
  for(const name of [...progression,'mazedeur1_knop']){
    const object=scene.object(name),player=scene.player(name);
    assert.equal(player.time,player.motion.startTime,`${name} has its initial pose`);
    assert.equal(player.playing,false,`${name} has no pending movement`);
    assert.equal(player.finished,false,`${name} can play from its start again`);
    assert.equal(!!object.moving,false,`${name} is not moving`);
    assert.deepEqual(scene.host.modelTransforms.get(object.modelIndex),{...player.sample(player.motion.startTime),origin:player.motion.origin},`${name} collision and rendering use the reset pose`);
    if(object.kind==='controller')assert.equal(object.enabled,false,`${name} awaits its original trigger`);
  }
  const door=scene.object('heg2_mc'),button=scene.object('mazedeur1_knop');
  assert.equal(door.open,false);assert.equal(door.openFraction,0);assert.equal(door.closeAt??null,null);
  assert.equal(button.switchedOn,false);assert.equal(button.switchCount,0);
  assert.equal(scene.object('mazedeur1_rood').enabled,true);
  assert.equal(scene.object('mazedeur1_groen').enabled,false);
  assert.equal(scene.object('mazedeur1_dm').open,false);
  assert.equal(scene.player('mazedoortrigger').playing,false);
  assert.equal(scene.host.cutscene,false);
}
function assertNativeReplay(scene) {
  scene.game.trigger(scene.object('heg3_trigger2_mc'));
  assert.equal(scene.player('heg3_mc').playing,false,'Later hedge still needs its arming trigger');
  scene.game.trigger(scene.object('heg1_trigger_mc'));tick(scene,1.1);
  assert.equal(scene.object('heg2_mc').open,true);
  assert.equal(scene.player('heg1_mc').time,.5);
  assert.equal(scene.player('heg2_mc').time,1);
  scene.game.trigger(scene.object('heg2_closetrigger_mc'));tick(scene,1.1);
  assert.equal(scene.object('heg2_mc').open,false);assert.equal(scene.player('heg2_mc').time,0);
  scene.game.trigger(scene.object('heg3_trigger1_mc'));
  assert.equal(scene.object('heg3_trigger2_mc').enabled,true);
  scene.game.trigger(scene.object('heg3_trigger2_mc'));tick(scene,3.1);
  assert.equal(scene.player('heg3_mc').time,3);
  scene.game.trigger(scene.object('heg5_trigger_mc'));tick(scene,2.1);
  assert.equal(scene.player('heg4_mc').time,2);assert.equal(scene.player('heg5_mc').time,.5);
  assert.ok(triggers.every(name=>scene.object(name).triggerCount===1));
  assert.equal(scene.host.vm.lastError,null);assert.equal(scene.game.unsupportedCommands.size,0);
}

test('death after every original maze stage and during moving hedges restores the replayable initial layout',()=>{
  for(let stage=1;stage<=triggers.length;stage++)for(const partial of [false,true]){
    const scene=boot();advanceStages(scene,stage,partial);
    for(const name of triggers)scene.object(name).inside=true;
    const calls=[],runEvent=scene.game.runEvent.bind(scene.game);
    scene.game.runEvent=(object,event,...args)=>{if([...progression,...triggers,'mazedeur1_knop'].includes(object.entity.DaviName))calls.push([object.entity.DaviName,event]);return runEvent(object,event,...args);};
    scene.game.respawn();
    assert.deepEqual(calls,[],'Reset must not dispatch native opening, closing or button callbacks');
    assertInitialMaze(scene);assertNativeReplay(scene);
    scene.game.respawn();assertInitialMaze(scene);assertNativeReplay(scene);
  }
});

test('the real death clip reaches one respawn and does not retrigger the maze at the old death position',()=>{
  const scene=boot();advanceStages(scene,5);
  scene.game.playerPosition=[...scene.object('heg1_trigger_mc').position];
  const checkpoint=clone(scene.game.checkpoint);
  scene.game.damage(100);
  assert.equal(scene.game.playerReaction.phase,'death');assert.equal(scene.game.state.lives,2);
  tick(scene,PLAYER_REACTIONS.death.duration-.025,true);
  assert.equal(scene.object('heg1_trigger_mc').triggerCount,1,'Maze reset waits for respawn');
  assert.equal(scene.events.filter(event=>event.type==='respawn').length,0);
  tick(scene,.025,true);
  assert.equal(scene.game.playerReaction.phase,'respawn');assert.equal(scene.game.state.health,scene.game.state.maxHealth);
  const respawns=scene.events.filter(event=>event.type==='respawn');assert.equal(respawns.length,1);
  assert.deepEqual(respawns[0].position,checkpoint.position);assert.equal(respawns[0].orientation,checkpoint.orientation);
  assertInitialMaze(scene);
});

test('fatal damage cancels an unfinished final button before it can start the maze exit cutscene',()=>{
  const scene=boot();advanceStages(scene,5);
  scene.game.switchButton(scene.object('mazedeur1_knop'),true);tick(scene,.4);
  assert.equal(scene.object('mazedeur1_knop').switchedOn,true);
  assert.equal(scene.object('mazedeur1_groen').enabled,false);
  scene.game.damage(100);
  assert.equal(scene.player('mazedeur1_knop').playing,false,'Pending AfterSwitchOnCommand is canceled at fatal damage');
  tick(scene,PLAYER_REACTIONS.death.duration,true);
  assert.equal(scene.events.filter(event=>event.type==='respawn').length,1);
  assert.equal(scene.events.filter(event=>event.type==='cutscene').length,0);
  assertInitialMaze(scene);
  tick(scene,14);
  assert.equal(scene.object('mazedeur1_dm').open,false,'Canceled button cannot open the exit later');
  assert.equal(scene.host.cutscene,false);
  assertNativeReplay(scene);
});

test('nonfatal damage leaves an unfinished final button able to commit its original completion callback',()=>{
  const scene=boot();advanceStages(scene,5);
  scene.game.switchButton(scene.object('mazedeur1_knop'),true);tick(scene,.4);
  scene.game.damage(1);
  assert.equal(scene.player('mazedeur1_knop').playing,true);
  tick(scene,.7);
  assert.equal(scene.object('mazedeur1_groen').enabled,true);
  assert.equal(scene.player('mazedoortrigger').playing,true);
});

test('committed final button and fully open maze stay solved across respawn and save/load',()=>{
  for(const elapsed of [1.02,14]){
    let scene=boot();advanceStages(scene,5);
    scene.game.switchButton(scene.object('mazedeur1_knop'),true);tick(scene,elapsed);
    assert.equal(scene.object('mazedeur1_groen').enabled,true);
    const before=progression.map(name=>clone(scene.host.modelTransforms.get(scene.object(name).modelIndex)));
    const sequenceTime=scene.player('mazedoortrigger').time;
    scene.game.respawn();
    assert.deepEqual(progression.map(name=>scene.host.modelTransforms.get(scene.object(name).modelIndex)),before);
    assert.equal(scene.player('mazedoortrigger').time,sequenceTime);
    assert.ok(triggers.every(name=>scene.object(name).triggerCount===1));
    scene=boot(clone(scene.game.snapshot()));tick(scene,14);
    assert.equal(scene.object('mazedeur1_dm').open,true);
    assert.equal(scene.player('mazedeur1_dm').time,scene.player('mazedeur1_dm').motion.endTime);
    assert.equal(scene.object('mazedeur1_groen').enabled,true);assert.equal(scene.object('mazedeur1_knop').switchCount,1);
    assert.equal(scene.host.vm.lastError,null);
  }
});

test('save/load during death or after reset retains reset transforms and permits the original route again',()=>{
  for(const saveDuringDeath of [false,true]){
    let scene=boot();advanceStages(scene,5,true);
    if(saveDuringDeath){scene.game.damage(100);tick(scene,.3,true);}
    else scene.game.respawn();
    const saved=clone(scene.game.snapshot());scene=boot(saved);
    if(saveDuringDeath)tick(scene,PLAYER_REACTIONS.death.duration-.3,true);
    assertInitialMaze(scene);
    const poses=progression.map(name=>clone(scene.host.modelTransforms.get(scene.object(name).modelIndex)));
    scene.game.restore(clone(scene.game.snapshot()));
    assert.deepEqual(progression.map(name=>scene.host.modelTransforms.get(scene.object(name).modelIndex)),poses);
    assertNativeReplay(scene);
  }
});

test('maze retry preserves loot, enemy defeats, the crate secret, painting globals and the independent moving hedge',()=>{
  const scene=boot();advanceStages(scene,5);
  scene.game.destroy(scene.object('mazeghost1'));
  scene.game.destroy(scene.object('heg_brcrate'));
  const coin=scene.game.objects.find(object=>object.entity.classname==='ItemCoin');scene.game.pickup(coin);
  for(const i of [1,2])scene.game.runEvent(scene.object(`puzstuk${i}_mc`),'MotionCommand',[`paal${i}e`,8.01]);
  const state=clone(scene.game.state),vm=scene.host.vm.snapshot(),checkpoint=clone(scene.game.checkpoint);
  const independent=clone(scene.host.snapshot().motions.find(motion=>motion.id===scene.object('heg6_mc').id));
  const otherDoor=scene.object('crypt_right');scene.game.command(otherDoor,'open');tick(scene,.2);
  const otherPose=clone(scene.host.modelTransforms.get(otherDoor.modelIndex));
  const oscillator=clone(scene.host.snapshot().motions.find(motion=>motion.id===independent.id));
  scene.game.respawn();assertInitialMaze(scene);
  for(const key of ['score','potions','mirror','lives','coins','kills','secrets','skill'])assert.equal(scene.game.state[key],state[key],key);
  assert.equal(scene.object('mazeghost1').health,0);assert.equal(coin.collected,true);
  assert.equal(scene.object('heg_brcrate').health,0);assert.equal(scene.object('heg8_mc').visible,false);
  assert.deepEqual(scene.host.vm.snapshot(),vm);assert.deepEqual(scene.game.checkpoint,checkpoint);
  assert.deepEqual(scene.host.snapshot().motions.find(motion=>motion.id===independent.id),oscillator);
  assert.equal(otherDoor.open,true);assert.deepEqual(scene.host.modelTransforms.get(otherDoor.modelIndex),otherPose);
  scene.game.pickup(coin);scene.game.destroy(scene.object('mazeghost1'));scene.game.destroy(scene.object('heg_brcrate'));
  assert.equal(scene.game.state.score,state.score);assert.equal(scene.game.state.kills,state.kills);assert.equal(scene.game.state.secrets,state.secrets);
});

test('respawn does not reset a different levels original puzzle progress or motion',()=>{
  const scene=boot(null,'lvl04a');scene.game.trigger(scene.object('trigger_sokkel01'));tick(scene,.125);
  const motion=clone(scene.host.snapshot().motions.find(value=>value.id===scene.object('move_standaard01').id));
  const globals=scene.host.vm.snapshot();scene.game.respawn();
  assert.equal(scene.object('trigger_sokkel01').enabled,false);
  assert.deepEqual(scene.host.snapshot().motions.find(value=>value.id===motion.id),motion);
  assert.deepEqual(scene.host.vm.snapshot(),globals);
});

test('older saves with no motion-started fields still reset an unfinished maze after death',()=>{
  const scene=boot();advanceStages(scene,5);
  const save=clone(scene.game.snapshot());
  for(const motion of save.scripts.motions)delete motion.started;
  const restored=boot(save);
  assert.equal(restored.object('mazedeur1_groen').enabled,false);
  restored.game.respawn();assertInitialMaze(restored);assertNativeReplay(restored);
});

test('loading an older death save cancels its pending final-button callback before timelines advance',()=>{
  const scene=boot();advanceStages(scene,5);
  scene.game.switchButton(scene.object('mazedeur1_knop'),true);tick(scene,.4);
  const save=clone(scene.game.snapshot());
  // Represent the pre-fix save written during death while the button was
  // still moving, before its AfterSwitchOn callback had run.
  save.state.health=0;save.state.lives=2;save.playerReaction={phase:'death',age:.3};
  const restored=boot(save);
  assert.equal(restored.player('mazedeur1_knop').playing,false);
  tick(restored,PLAYER_REACTIONS.death.duration-.3,true);
  assert.equal(restored.events.filter(event=>event.type==='respawn').length,1);
  assert.equal(restored.events.filter(event=>event.type==='cutscene'&&event.active).length,0);
  assertInitialMaze(restored);assertNativeReplay(restored);
});

test('loading the stranded entrance pattern repairs only the maze and retains the saved level progress',()=>{
  const original=boot();advanceStages(original,5);
  original.game.destroy(original.object('mazeghost1'));
  const coin=original.game.objects.find(object=>object.entity.classname==='ItemCoin');original.game.pickup(coin);
  const save=clone(original.game.snapshot());
  // The position from the reported autosave is inside the exhausted first
  // trigger, with heg1 raised and the consumed closing trigger behind it.
  const restored=boot(save,'lvl02a',[-922.2278975624878,512.05,-798.9451312953597]);
  assertInitialMaze(restored);
  assert.deepEqual(restored.game.state,save.state);
  assert.deepEqual(restored.game.checkpoint,save.checkpoint);
  assert.deepEqual(restored.host.vm.snapshot(),save.scripts.vm);
  assert.equal(restored.object('mazeghost1').health,0);
  assert.equal(restored.game.objects.find(object=>object.id===coin.id).collected,true);
  assertNativeReplay(restored);
});

test('loading viable intermediate, moving-door or committed maze saves does not rewind their progress',()=>{
  for(const scenario of ['inside maze','open entrance','closing door','committed exit']){
    const original=boot();advanceStages(original,scenario==='open entrance'?1:5);
    let position=[...original.object('heg1_trigger_mc').position];
    if(scenario==='inside maze')position=[-1404,512,-1252];
    if(scenario==='closing door'){
      original.game.command(original.object('heg2_mc'),'open');tick(original,1.1);
      original.game.command(original.object('heg2_mc'),'close');tick(original,.2);
    }
    if(scenario==='committed exit'){
      original.game.switchButton(original.object('mazedeur1_knop'),true);tick(original,1.02);
    }
    const save=clone(original.game.snapshot()),restored=boot(save,'lvl02a',position);
    for(const name of triggers)assert.equal(restored.object(name).triggerCount,original.object(name).triggerCount,scenario+' '+name);
    for(const name of [...progression,'mazedeur1_knop','mazedoortrigger']){
      assert.equal(restored.player(name).time,original.player(name).time,scenario+' '+name);
      assert.equal(restored.player(name).playing,original.player(name).playing,scenario+' '+name);
    }
  }
});
