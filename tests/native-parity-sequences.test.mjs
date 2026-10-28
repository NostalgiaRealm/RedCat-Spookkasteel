// Campaign defeat sequences for parity review item 11, run through the shipped
// level data and compiled Davi-Scripts. Enemies are defeated through the
// normal hit path (Gameplay.hurtEnemy), never by destroying them directly.
import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../source/gameplay.js';
import {ScriptHost} from '../source/script-host.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
// RedCat stays far away so enemy attacks cannot reach him during the fight.
const away=[100000,0,100000];
function boot(id) {
  const game=new Gameplay(json(`data/levels/${id}/level.json`),{deferInit:true});
  const host=new ScriptHost(game,json(`data/davi/${id}.json`),{motions:json(`data/motions/${id}.json`),dialogue:json('data/dialogue/nl.json')});
  host.initialize();
  for(let i=0;i<600;i++)host.update(.1);if(host.cutscene)host.skipCutscene();
  const object=name=>{const found=game.find(name)[0];assert.ok(found,name);return found;};
  // Record when each object's AfterDestroyCommand is actually dispatched.
  const fired=new Map(),runEvent=game.runEvent.bind(game);
  game.runEvent=(target,event,...rest)=>{if(event==='AfterDestroyCommand')fired.set(target.id,game.time);return runEvent(target,event,...rest);};
  const step=(dt=.05)=>{game.state.health=game.state.maxHealth;game.update(dt,away);host.update(dt);};
  return {game,host,object,fired,step};
}
/** Hit the enemy once per step until it is defeated; returns the defeat time. */
function defeat(scene,enemy,limit=4000) {
  for(let i=0;i<limit&&enemy.health>0;i++){scene.game.hurtEnemy(enemy,1);if(enemy.health>0)scene.step();}
  assert.equal(enemy.health,0,`${enemy.entity.DaviName} defeated through hits`);
  return scene.game.time;
}

test('Jester Max, Dungeon Max and Bone Brutus run their defeat scripts when the death clip ends',()=>{
  for(const [id,name,effect] of [
    ['lvl01a','Max',scene=>scene.object('MCcamera05').enabled],
    ['lvl02a','bonecollector',scene=>scene.object('csmc07').enabled],
    // The shipped Tower doors start unlocked, so only the dispatch is observable.
    ['lvl03a','Max',()=>null],
  ]) {
    const scene=boot(id),boss=scene.object(name);
    scene.game.command(boss,'enable');
    const before=effect(scene);
    const defeatedAt=defeat(scene,boss);
    assert.equal(boss.afterDestroyPending,true,`${id} ${name}: pending after the killing hit`);
    assert.ok(boss.animationUntil>defeatedAt+.5,`${id} ${name}: a death clip is playing`);
    while(scene.game.time<boss.animationUntil-.06)scene.step();
    assert.equal(scene.fired.has(boss.id),false,`${id} ${name}: not dispatched during the death clip`);
    if(before!==null)assert.equal(effect(scene),before,`${id} ${name}: no scripted effect yet`);
    for(let i=0;i<4;i++)scene.step();
    assert.ok(scene.fired.get(boss.id)>=boss.animationUntil-1e-9,`${id} ${name}: dispatched at the clip end`);
    if(before!==null)assert.equal(effect(scene),true,`${id} ${name}: scripted effect after the clip`);
    assert.equal(scene.host.vm.lastError,null,`${id} ${name}`);
  }
});

test('the Witch still runs her defeat script at once',()=>{
  const scene=boot('lvl04a'),witch=scene.object('The_Witch');
  scene.game.command(witch,'enable');
  defeat(scene,witch);
  assert.ok(scene.fired.has(witch.id));assert.equal(scene.object('beam_sequence01').enabled,true);
});

test('the graveyard bridge chain opens through the authored trigger, delayed for zombies and at once for ghosts',()=>{
  const scene=boot('lvl02a'),{game,object,fired}=scene;
  // RedCat enters the authored trigger that raises zombie5 from the moat.
  game.trigger(object('zombie5tr_tr'));
  const zombie5=object('zombie5');
  for(let i=0;i<200&&!zombie5.enabled;i++)scene.step();
  assert.equal(zombie5.enabled,true,'the authored trigger enables zombie5');
  const chain=[
    // [enemy, plank model hidden by its defeat, next enemy or null]
    ['zombie5','planken2_mc','ghost1'],
    ['ghost1','planken5_mc','ghost2'],     // zombie-type actor named ghost1
    ['ghost2','planken4_mc','zombie6'],    // ghost-type actor
    ['zombie6','planken_exit_mc',null],    // ghost-type actor named zombie6
  ];
  for(const [name,plank,next] of chain) {
    const enemy=object(name),model=object(plank);
    if(!enemy.enabled)game.command(enemy,'enable');
    assert.equal(model.visible,true,`${plank} still in place before ${name} falls`);
    defeat(scene,enemy);
    if(enemy.enemyType==='zombie') {
      assert.equal(model.visible,true,`${name} (zombie): plank waits for the death clip`);
      while(game.time<enemy.animationUntil+.1)scene.step();
    } else {
      assert.ok(fired.has(enemy.id),`${name} (ghost): defeat script runs at once`);
      assert.ok(enemy.dropDead,`${name} (ghost): sinks while fading`);
    }
    assert.equal(model.visible,false,`${name}: ${plank} hidden`);
    if(next)assert.equal(object(next).enabled,true,`${name}: ${next} released`);
  }
  assert.equal(scene.host.vm.lastError,null);
});
