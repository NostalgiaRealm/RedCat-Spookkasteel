import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {PLAYER_REACTIONS,playerReactionMotion} from '../src/player-lifecycle.js';
const level={id:'lvl00a',entities:[],spawn:{position:[100,20,300],orientation:3}};
const boot=save=>{const events=[],game=new Gameplay(level,{save,onEvent:e=>events.push(e)});return {game,events};};
const advance=(game,seconds)=>{while(seconds>1e-8){const dt=Math.min(.02,seconds);game.update(dt,[0,0,0]);seconds-=dt;}};

test('native player hit, death and respawn clocks match actual imported motions',()=>{
  const actor=JSON.parse(readFileSync(new URL('../assets/actors/redcat.json',import.meta.url)));
  for(const [phase,spec] of Object.entries(PLAYER_REACTIONS)) {
    const clip=actor.animations.find(clip=>clip.name===spec.motion);
    assert.equal(spec.duration*spec.speed,clip.duration);
    assert.deepEqual(playerReactionMotion({phase,age:spec.duration/2}),{name:clip.name,speed:spec.speed,loop:false,time:clip.duration/2});
  }
});

test('nonfatal damage interrupts a pending shot and hurt finishes without losing another life',()=>{
  const {game,events}=boot();game.state.skill=1;
  game.attack([0,0,0],[0,0,-1]);assert.ok(game.pendingPlayerAttack);
  game.damage(1);assert.equal(game.playerReaction.phase,'hit');assert.equal(game.pendingPlayerAttack,null);
  assert.equal(game.attack([0,0,0],[0,0,-1]),false);
  advance(game,PLAYER_REACTIONS.hit.duration-.03);assert.equal(game.playerReaction.phase,'hit');
  advance(game,.04);assert.equal(game.playerReaction,null);assert.equal(game.state.lives,3);
  assert.equal(events.filter(e=>e.type==='death').length,0);
});

test('death waits for the native clip, respawns once, protects recovery and persists both phases',()=>{
  const {game,events}=boot();game.damage(100);
  assert.equal(game.state.health,0);assert.equal(game.state.lives,2);assert.equal(events.filter(e=>e.type==='respawn').length,0);
  advance(game,.7);const resumed=boot(JSON.parse(JSON.stringify(game.snapshot())));
  assert.equal(resumed.game.playerReaction.phase,'death');assert.ok(Math.abs(resumed.game.playerReaction.age-.7)<1e-8);
  advance(resumed.game,PLAYER_REACTIONS.death.duration-.72);assert.equal(resumed.game.state.health,0);
  advance(resumed.game,.03);assert.equal(resumed.game.state.health,10);assert.equal(resumed.game.playerReaction.phase,'respawn');
  assert.deepEqual(resumed.events.find(e=>e.type==='respawn').position,[100,20,300]);
  advance(resumed.game,2.1);resumed.game.damage(999,null,{continuous:true});assert.equal(resumed.game.state.health,10);
  const respawnSave=boot(JSON.parse(JSON.stringify(resumed.game.snapshot())));
  assert.equal(respawnSave.game.playerReaction.phase,'respawn');
  advance(respawnSave.game,1.2);assert.equal(respawnSave.game.playerReaction,null);
  respawnSave.game.damage(1);assert.equal(respawnSave.game.state.health,9);
  assert.equal(resumed.events.filter(e=>e.type==='respawn').length,1);
});

test('last-life game over waits for death and holds its final pose without repeated events',()=>{
  const {game,events}=boot();game.state.lives=1;game.damage(10);
  advance(game,PLAYER_REACTIONS.death.duration-.03);assert.equal(events.filter(e=>e.type==='gameOver').length,0);
  advance(game,.05);assert.equal(events.filter(e=>e.type==='gameOver').length,1);
  assert.equal(playerReactionMotion(game.playerReaction).name,'death');
  advance(game,2);assert.equal(events.filter(e=>e.type==='gameOver').length,1);assert.equal(game.state.health,0);
});

test('cutscene immunity and no-clip never start a hurt reaction; paused simulation keeps the same pose',()=>{
  const {game}=boot();game.isPlayerInvulnerable=()=>true;game.damage(100);assert.equal(game.playerReaction,undefined);
  game.isPlayerInvulnerable=()=>false;game.scripts={cutscene:true};game.damage(100);assert.equal(game.playerReaction,undefined);
  game.scripts=null;game.damage(1);advance(game,.2);
  const before=playerReactionMotion(game.playerReaction);game.update(0,[0,0,0]);assert.deepEqual(playerReactionMotion(game.playerReaction),before);
  game.scripts={cutscene:true};game.update(.01,[0,0,0]);assert.equal(game.playerReaction,null);
});
