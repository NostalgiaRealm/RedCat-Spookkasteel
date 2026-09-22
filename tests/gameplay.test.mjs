import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { Gameplay } from '../src/gameplay.js';

const entity=(classname,name,extra={})=>({classname,'%name%':name,DaviName:name,Origin:'0 0 0',...extra});
const fixture=(entities=[])=>({id:'lvl00a',spawn:{position:[0,0,0],orientation:0},entities,
  collision:{models:[{min:[-100,-100,-100],max:[100,100,100]},{min:[-12,0,-12],max:[12,50,12]}]}});

test('original forest imports correct entities and normal-difficulty frog attributes',()=>{
  const level=JSON.parse(readFileSync(new URL('../data/levels/lvl00a/level.json',import.meta.url),'utf8'));
  const game=new Gameplay(level);
  assert.equal(game.totalPotions,15);
  assert.equal(game.objects.filter(o=>o.kind==='enemy').length,4);
  const frog=game.find('froga')[0];
  assert.equal(frog.actorFile,'frog');assert.equal(frog.health,3);assert.equal(frog.stats.Speed,75);
  assert.equal(game.find('deur1_mc')[0].open,true);
  assert.equal(game.modelState(game.find('triggerbrush1_mc')[0].modelIndex).solid,false);
});

test('safe commands honor escaped newlines, comments, named doors and unsupported branches',()=>{
  const game=new Gameplay(fixture([entity('DoorModel','door',{IsInitiallyOpen:'0'}),entity('DoorModel','other',{IsInitiallyOpen:'0'})]));
  game.execute('// other.open;\\r\\ndoor.open;\\r\\nother.close');
  assert.equal(game.find('door')[0].open,true);assert.equal(game.find('other')[0].open,false);
  game.execute('If (x == 1) Then other.open; Else door.close; End If');
  assert.equal(game.find('door')[0].open,true);assert.equal(game.find('other')[0].open,false);
  game.execute('globalThis.exit(); door.constructor()');
  assert.ok(game.unsupportedCommands.size>=3);
});

test('enter trigger fires once, leaving runs its own command, max trigger count persists',()=>{
  const game=new Gameplay(fixture([
    entity('%Model%','volume',{Model:'1'}),entity('DoorModel','door',{Origin:'200 0 0'}),
    entity('Trigger','trigger',{Model:'volume',CommandOnEnter:'door.open',CommandOnLeave:'door.close',MaxTriggerTimes:'1'})
  ]));
  game.update(.02,[0,0,0]);assert.equal(game.find('door')[0].open,true);
  game.update(.02,[50,0,0]);assert.equal(game.find('door')[0].open,false);
  game.update(.02,[0,0,0]);assert.equal(game.find('door')[0].open,false);
  assert.equal(game.find('trigger')[0].triggerCount,1);
});

test('touch and shot switches respect maximum count and trigger original named commands',()=>{
  const game=new Gameplay(fixture([
    entity('DoorModel','door',{Origin:'400 0 0'}),
    entity('ButtonModel','button',{TouchToSwitch:'1',MaxSwitchTimes:'1',AfterSwitchOnCommand:'door.open',AfterSwitchOffCommand:'door.close'})
  ]));
  game.update(.01,[0,0,0]);game.update(.01,[0,0,0]);
  assert.equal(game.find('door')[0].open,true);assert.equal(game.find('button')[0].switchCount,1);
});

test('pickups score exactly once, health caps and blocked line of sight prevents pickup',()=>{
  const events=[];
  const game=new Gameplay(fixture([entity('ItemCoin','coin',{Type:'3'}),entity('ItemHealth','health',{Type:'2'}),entity('ItemPotion','potion')]),{onEvent:e=>events.push(e)});
  game.update(.02,[0,0,0],{lineOfSight:()=>false});assert.equal(game.state.score,0);
  game.update(.02,[0,0,0]);assert.equal(game.state.score,75);assert.equal(game.state.coins,10);assert.equal(game.state.potions,1);
  assert.equal(game.find('health')[0].collected,false);
  game.state.health=9;game.update(.02,[0,0,0]);assert.equal(game.state.health,10);assert.equal(game.state.score,90);
  game.update(.02,[0,0,0]);assert.equal(events.filter(e=>e.type==='pickup').length,3);
});

test('repeatable touch switch changes on entry rather than oscillating every frame',()=>{
  const game=new Gameplay(fixture([entity('ButtonModel','button',{TouchToSwitch:'1',MaxSwitchTimes:'-1'})]));
  game.update(.01,[0,0,0]);game.update(.01,[0,0,0]);assert.equal(game.find('button')[0].switchedOn,true);
  game.update(.01,[100,0,0]);game.update(.01,[0,0,0]);assert.equal(game.find('button')[0].switchedOn,false);
});

test('attack requires aim and line of sight, defeats enemy, runs destruction command',()=>{
  const game=new Gameplay(fixture([
    entity('MovingEnemy','frog',{Type:'5',Origin:'0 0 -100',AfterDestroyCommand:'door.open'}),
    entity('DoorModel','door',{Origin:'200 0 0'})
  ]));
  const shoot=lineOfSight=>{
    game.attackCooldown=0;game.attack([0,0,0],[0,0,-1]);
    assert.equal(game.projectiles.length,0,'The pellet is released during the original shoot motion');
    game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();
    for(let i=0;i<50;i++)game.updateProjectiles(.1,[0,0,0],null,lineOfSight);
  };
  shoot(()=>false);assert.equal(game.find('frog')[0].health,3);
  for(let i=0;i<3;i++)shoot(()=>true);
  assert.equal(game.find('frog')[0].health,0);assert.equal(game.find('frog')[0].enabled,false);assert.equal(game.state.kills,1);assert.equal(game.state.score,15);
  assert.equal(game.find('door')[0].open,true);
});

test('snapshot restores mutable state and prevents item farming after load',()=>{
  const level=fixture([entity('ItemCoin','coin',{Type:'2'}),entity('DoorModel','door',{Origin:'200 0 0'})]);
  const game=new Gameplay(level);game.update(.02,[0,0,0]);game.execute('door.open');game.setCheckpoint([20,0,30],6);
  const save=JSON.parse(JSON.stringify(game.snapshot()));const restored=new Gameplay(level,{save});
  assert.equal(restored.state.score,25);assert.equal(restored.find('coin')[0].collected,true);assert.equal(restored.find('door')[0].open,true);
  assert.deepEqual(restored.checkpoint,{position:[20,0,30],orientation:6});restored.update(.02,[0,0,0]);assert.equal(restored.state.score,25);
  assert.equal(restored.restore({...save,level:'different'}),false);
});

test('damage cooldown, death and checkpoint respawn are deterministic',()=>{
  const events=[];const game=new Gameplay(fixture(),{onEvent:e=>events.push(e)});
  game.setCheckpoint([1,2,3],6);game.damage(3);game.damage(3);assert.equal(game.state.health,7);
  game.hitCooldown=0;game.damage(10);assert.equal(game.state.lives,2);assert.equal(events.filter(e=>e.type==='death').length,1);
  assert.deepEqual(game.respawn(),[1,2,3]);assert.equal(game.state.health,10);assert.ok(game.hitCooldown>0);
});

test('original level transition target is normalized and emitted once',()=>{
  const events=[];const game=new Gameplay(fixture([entity('Trigger','exit',{TargetSubLevel:'lvl01a.bsp',MaxTriggerTimes:'1'})]),{onEvent:e=>events.push(e)});
  game.execute('exit.trigger');game.execute('exit.trigger');
  assert.deepEqual(events.filter(e=>e.type==='levelComplete').map(e=>e.target),['lvl01a']);
});

test('timer and script closes wait until the player leaves the doorway',()=>{
 const level=fixture([entity('%Model%','doorbrush',{Model:'1'}),entity('DoorModel','door',{Model:'doorbrush',IsInitiallyOpen:'1',TimeToStayOpen:'2'})]);
 const game=new Gameplay(level),door=game.find('door')[0];
 game.update(.01,[0,0,0]);game.execute('door.close');assert.equal(door.open,true);assert.ok(door.closeAt>game.time);
 for(let i=0;i<30;i++)game.update(.02,[0,0,0]);assert.equal(door.open,true);
 for(let i=0;i<20;i++)game.update(.02,[100,0,0]);assert.equal(door.open,false);assert.equal(game.modelState(1).solid,true);
});
