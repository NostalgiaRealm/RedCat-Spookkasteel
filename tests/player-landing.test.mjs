import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../source/gameplay.js';
import {playerLandingImpact} from '../source/player-landing.js';
import {landingSound} from '../source/locomotion-audio.js';
import {GAMEPLAY_SETTINGS} from '../source/gameplay-settings.js';

const settings=GAMEPLAY_SETTINGS.game;
const jumpSpeed=Math.sqrt(2*settings.Player.Gravitation*settings.Player.JumpHeight)*32;
const fixture=()=>{
  const events=[];
  const game=new Gameplay({id:'lvl00a',entities:[],spawn:{position:[0,0,0]}},{deferInit:true,onEvent:event=>events.push(event)});
  return {game,events};
};

test('native impact thresholds retain equality and only damage above double jump speed',()=>{
  assert.equal(playerLandingImpact(jumpSpeed*.049,settings),null);
  assert.deepEqual(playerLandingImpact(jumpSpeed*.05,settings),{volume:.025,damage:0});
  assert.deepEqual(playerLandingImpact(jumpSpeed,settings),{volume:.5,damage:0});
  assert.deepEqual(playerLandingImpact(jumpSpeed*2,settings),{volume:1,damage:0});
  assert.deepEqual(playerLandingImpact(jumpSpeed*3,settings),{volume:1,damage:.5});
  assert.deepEqual(playerLandingImpact(jumpSpeed*4,settings),{volume:1,damage:1});
  for(const speed of [NaN,Infinity,0,-1])assert.equal(playerLandingImpact(speed,settings),null);
});

test('landing selects dry, water and ooze slots without truncating impact gain',()=>{
  assert.deepEqual(landingSound(jumpSpeed,0,settings),{sound:'rcland1.wav',volume:.5});
  for(const contents of [0x10000,0x20000,0x30000])
    assert.deepEqual(landingSound(jumpSpeed,contents,settings),{sound:'rcwalk1.wav',volume:.5});
  assert.equal(landingSound(jumpSpeed*.01,0,settings),null);
});

test('actual gameplay subtracts fractional fall damage once and ordinary jumps remain safe',()=>{
  const {game,events}=fixture(),position=[10,20,30];
  game.land(jumpSpeed,position);
  assert.equal(game.state.health,10);assert.equal(events.filter(event=>event.type==='damage').length,0);
  game.land(jumpSpeed*3,position);
  assert.equal(game.state.health,9.5);
  assert.deepEqual(events.filter(event=>event.type==='damage').map(event=>[event.amount,event.source]),[[.5,'fall']]);
  const landing=events.at(-1);assert.equal(landing.type,'land');assert.deepEqual(landing.position,position);
  position[0]=99;assert.equal(landing.position[0],10);
});

test('fall damage keeps existing no-clip, cutscene, respawn and completed-level protection',()=>{
  for(const protect of [game=>game.isPlayerInvulnerable=()=>true,
    game=>game.scripts={cutscene:true},game=>game.playerReaction={phase:'respawn'},game=>game.completed=true]) {
    const {game,events}=fixture();protect(game);game.land(jumpSpeed*4,[0,0,0]);
    assert.equal(game.state.health,10);assert.equal(events.some(event=>event.type==='damage'),false);
  }
});
