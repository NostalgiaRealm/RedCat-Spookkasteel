import test from 'node:test';
import assert from 'node:assert/strict';
import {nativeCoronaRadius,saveBeaconUv,CoronaVisibilityCache} from '../src/presentation-native.js';
import {FootstepClock} from '../src/locomotion-audio.js';
import {GameplayAudio} from '../src/gameplay-audio.js';
import {playerMotion} from '../src/player-animation.js';

test('native corona fades radius with a fixed maximum-radius rate and clamps to distance target',()=>{
  const e={RadiusMin:'2',RadiusMax:'10',RadiusDistanceMin:'100',RadiusDistanceMax:'1000',FadeTime:'.5'};
  assert.equal(nativeCoronaRadius(0,e,100,true,.05),1);
  assert.equal(nativeCoronaRadius(1,e,100,true,.1),2);
  assert.equal(nativeCoronaRadius(10,e,100,true,.01),2);
  assert.equal(nativeCoronaRadius(10,e,1000,false,.1),8);
  assert.equal(nativeCoronaRadius(1,e,1000,false,.5),0);
  assert.equal(nativeCoronaRadius(0,{...e,FadeTime:'0'},550,true,.01),6);
  assert.equal(nativeCoronaRadius(4,e,1000,true,0),4);
});

test('beacon UV scrolls in authored ray order and resumes directly from activation age',()=>{
  assert.deepEqual(saveBeaconUv(.6,0),{uvStart:.98,uvEnd:.04});
  const first=saveBeaconUv(5,0),last=saveBeaconUv(5,6),later=saveBeaconUv(5+1/60,0);
  assert.ok(Math.abs((last.uvStart-first.uvStart)+.06)<1e-10);
  assert.ok(Math.abs((later.uvStart-first.uvStart)+.07)<1e-10);
  assert.ok(Math.abs(first.uvStart-first.uvEnd-.94)<1e-10);
  assert.deepEqual(saveBeaconUv(300,2),saveBeaconUv(JSON.parse(JSON.stringify({age:300})).age,2));
});

test('corona BSP checks are bounded, fair, and remain idle while paused',()=>{
  const cache=new CoronaVisibilityCache({budget:2,interval:.1});
  const candidates=Array.from({length:12},(_,i)=>({id:String(i),enabled:true,inFront:true})),calls=[];
  const trace=c=>{calls.push(c.id);return Number(c.id)%2===0;};
  for(let i=0;i<6;i++){const n=calls.length;cache.update(1/60,candidates,trace);assert.equal(calls.length-n,2);}
  assert.equal(new Set(calls).size,12);
  assert.equal(cache.visible('4'),true);assert.equal(cache.visible('5'),false);
  const n=calls.length;cache.update(0,candidates,trace);assert.equal(calls.length,n);
  candidates[4].inFront=false;cache.update(1/60,candidates,trace);assert.equal(cache.visible('4'),false);
});

test('saved footstep phase and side resume the next native cadence crossing without a replay',()=>{
  const clock=new FootstepClock();clock.update(.64,{speed:4.9,grounded:true});
  const saved=JSON.parse(JSON.stringify(clock.snapshot())),restored=new FootstepClock(saved);
  for(let i=0;i<20;i++)assert.deepEqual(restored.update(.05,{speed:4.9,grounded:true}),clock.update(.05,{speed:4.9,grounded:true}));
  assert.deepEqual(new FootstepClock({phase:Infinity,side:6}).snapshot(),{phase:0,side:0});
  assert.deepEqual(new FootstepClock({phase:-1,side:0}).snapshot(),{phase:0,side:0});
});

test('footsteps use native input speed rather than ground scaling or moving-platform carry',()=>{
  const events=[],audio={keyed:new Map(),setPlayerListener(){},play:e=>events.push(e)},router=new GameplayAudio(audio);
  const game={state:{health:10},scripts:{cutscene:false},liquidModels:[],settings:{game:{}}};
  const world={yaw:0,player:{position:[0,0,0],stepDisplacement:3.66,grounded:true},collider:{contents:()=>0}};
  for(let i=0;i<60;i++){world.player.position[0]+=10;router.update(1/60,world,game,{forward:1});}
  assert.equal(events.length,2);assert.equal(events[0].sound,'rcwalk1.wav');assert.equal(events[1].sound,'rcwalk2.wav');
  const phase={...game.footstepState};world.player.stepDisplacement=0;
  for(let i=0;i<30;i++){world.player.position[0]+=5;router.update(1/60,world,game,{forward:1});}
  assert.equal(events.length,2);assert.deepEqual(game.footstepState,phase);
  const reloaded={...world,player:{...world.player,stepDisplacement:3.66}};
  router.update(0,reloaded,game,{forward:1});assert.deepEqual(game.footstepState,phase);
});

test('native backwards clip runs at 2.2x while forward and no-clip preserve their own rates',()=>{
  const p={grounded:true,noClip:false};
  assert.deepEqual(playerMotion({},p,{forward:-1},.016),{name:'walkbw',speed:2.2,loop:true});
  assert.deepEqual(playerMotion({},p,{forward:1},.016),{name:'walkfw',speed:1,loop:true});
  assert.deepEqual(playerMotion({},{...p,noClip:true},{forward:-1},.016),{name:'idle',speed:1,loop:true});
});
