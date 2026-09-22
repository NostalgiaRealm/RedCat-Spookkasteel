import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Group} from 'three';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {actorVisible,CastleWorld} from '../src/world.js';
import {targetableEnemy} from '../src/targeting.js';
import {BspCollider} from '../src/collision.js';
import {resolveZombieSpawn} from '../src/enemies.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const level=json('data/levels/lvl02a/level.json');
const dormantNames=['zombie1','zombie2','zombie3','zombie4','zombie5','frogzom1','frogzom2','frogzom3','frogzom4','ghost1'].sort();
const boot=save=>new Gameplay(level,{deferInit:true,save});

test('all ten authored inactive zombies stay hidden while the two mausoleum zombies remain visible',()=>{
  const game=boot(),world=new CastleWorld({},{}),zombies=game.objects.filter(o=>o.enemyType==='zombie');
  world.gameplay=game;
  try {
    assert.equal(zombies.length,12);
    for(const zombie of zombies)world.actorInstances.set(zombie.id,new Group());
    world.syncActors(0);
    assert.deepEqual(zombies.filter(o=>!world.actorInstances.get(o.id).visible).map(o=>o.entity.DaviName).sort(),dormantNames);
    assert.deepEqual(zombies.filter(o=>world.actorInstances.get(o.id).visible).map(o=>o.entity.DaviName).sort(),['mausozom1','mausozom2']);
    for(const name of dormantNames){const zombie=game.find(name)[0];assert.equal(targetableEnemy(zombie),false);}
    // Names do not determine the native factory type.
    assert.equal(game.find('ghost1')[0].enemyType,'zombie');
    assert.equal(game.find('zombie6')[0].enemyType,'ghost');
  } finally {world.dispose();}
});

test('original grave triggers and button motion callbacks destroy the cover before revealing their zombie',()=>{
  for(const [action,name,zombieName,coverName,modelName] of [
    ['trigger','graf1_trigger','zombie1','graf1_deksel','grafdek1_mc'],
    ['trigger','graf2_trigger','zombie2','graf2_deksel','grafdek2_mc'],
    ['button','dknopa','zombie3','graf4_deksel','grafdek4_mc'],
    ['button','dknopb','zombie4','graf3_deksel','grafdek3_mc'],
    ['trigger','zombie5tr_tr','zombie5','plankdum1','planken1_mc'],
  ]) {
    const game=boot(),events=[],host=new ScriptHost(game,json('data/davi/lvl02a.json'),{motions:json('data/motions/lvl02a.json')});
    // Bind the original handlers without playing the unrelated level intro.
    host.vm.initialize();
    const zombie=game.find(zombieName)[0],cover=game.find(coverName)[0],control=game.find(name)[0];
    game.onEvent=event=>events.push({...event,zombieVisible:actorVisible(zombie,game.time)});
    assert.equal(actorVisible(zombie,game.time),false);
    if(action==='button')game.switchButton(control);else game.trigger(control);
    for(let i=0;i<60&&!zombie.enabled;i++){game.time+=.05;host.update(.05);}
    assert.equal(cover.health,0,name);assert.equal(game.find(modelName)[0].visible,false,name);
    assert.ok(game.explosions.some(effect=>effect.sourceId===cover.id),`${name}: destruction creates the cover effect`);
    const destroyed=events.findIndex(e=>e.type==='enemyDefeated'&&e.id===cover.id);
    const enabled=events.findIndex(e=>e.type==='enable'&&e.id===zombie.id&&e.enabled);
    assert.ok(destroyed>=0&&enabled>destroyed,name);
    assert.equal(events[destroyed].zombieVisible,false,name);
    assert.equal(events[enabled].zombieVisible,true,name);
    assert.equal(actorVisible(zombie,game.time),true);assert.equal(targetableEnemy(zombie),true);
    assert.equal(host.vm.lastError,null,name);
  }
});

test('old and new saves honor zombie activation without reviving defeated zombies or hiding death animations',()=>{
  const game=boot(),waiting=game.find('zombie3')[0],active=game.find('zombie4')[0];
  game.command(active,'enable');active.position[0]+=40;
  const saved=game.snapshot();
  // Older versions saved visible=true even for a disabled zombie.
  assert.equal(saved.objects.find(o=>o.id===waiting.id).visible,true);
  const restored=boot(saved),hidden=restored.find('zombie3')[0],shown=restored.find('zombie4')[0];
  assert.equal(actorVisible(hidden,restored.time),false);
  assert.equal(actorVisible(shown,restored.time),true);assert.deepEqual(shown.position,active.position);
  restored.destroy(shown);assert.equal(shown.enabled,false);assert.equal(actorVisible(shown,restored.time),true);
  const deadRestore=boot(restored.snapshot()),dead=deadRestore.find('zombie4')[0];
  assert.equal(dead.health,0);assert.equal(actorVisible(dead,deadRestore.time),true);
  assert.equal(actorVisible(dead,dead.corpseUntil+.01),false);
});

test('zombie activation respects explicit hiding and does not hide inactive gargoyles or Brutus',()=>{
  const game=boot(),zombie=game.find('zombie3')[0];
  game.command(zombie,'hide');game.command(zombie,'enable');assert.equal(actorVisible(zombie,0),false);
  game.command(zombie,'show');assert.equal(actorVisible(zombie,0),true);
  for(const enemyType of ['gargoyle','brutusm','skeleton','bat'])
    assert.equal(actorVisible({kind:'enemy',enemyType,enabled:false,visible:true,health:1},0),true,enemyType);
});

test('the first zombie clears its shallow original grave overlap and follows its authored escape path',()=>{
  const game=boot(),zombie=game.find('zombie1')[0],collider=new BspCollider(level.collision);
  zombie.collisionMins=[-24,0,-24];zombie.collisionMaxs=[24,41.19783347069465,24];
  const models=()=>[...new Set(level.groups.map(g=>g.model))].filter(i=>i===0||game.modelState(i).solid);
  const trace=(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,models());
  const home=[...zombie.position];
  resolveZombieSpawn(zombie,trace);assert.deepEqual(zombie.position,home,'disabled zombie stays at its authored origin');
  game.trigger(game.find('graf1_trigger')[0]);
  assert.equal(trace(home,home,zombie.collisionMins,zombie.collisionMaxs).startSolid,true);
  resolveZombieSpawn(zombie,trace);
  assert.equal(trace(zombie.position,zombie.position,zombie.collisionMins,zombie.collisionMaxs).startSolid,false);
  assert.ok(Math.hypot(...zombie.position.map((v,i)=>v-home[i]))<16,'repair stays within one step height');
  for(let i=0;i<120;i++){game.time+=.025;game.updateEnemy(zombie,.025,[3568,-63.95,1407],()=>false,trace);}
  assert.ok(zombie.position[0]<home[0]-100,'zombie leaves the grave along its original westward path');
  assert.equal(zombie.animationState,'walk');
  assert.equal(trace(zombie.position,zombie.position,zombie.collisionMins,zombie.collisionMaxs).startSolid,false);
  // A failed local repair must never leave a partially moved actor in a wall.
  zombie.position=[...home];zombie.patrol.leftStart=false;
  resolveZombieSpawn(zombie,()=>({startSolid:true,penetrations:[{normal:[1,0,0],distance:20}]}));
  assert.deepEqual(zombie.position,home);
  zombie.position=[home[0]+15,home[1],home[2]];
  const displaced=[...zombie.position];
  resolveZombieSpawn(zombie,position=>position[0]===displaced[0]
    ?{startSolid:true,penetrations:[{normal:[1,0,0],distance:2}]}
    :{startSolid:false});
  assert.deepEqual(zombie.position,displaced,'repair cannot move beyond the original spawn neighborhood');
});
