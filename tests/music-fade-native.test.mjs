import test from 'node:test';
import assert from 'node:assert/strict';
import {advanceMusicFade} from '../source/music-fade.js';
import {GameAudio, nativeGainToAmplitude} from '../source/audio.js';

const near=(actual,expected)=>assert.ok(Math.abs(actual-expected)<1e-10, `${actual} != ${expected}`);
test('native fade ramps control volume at constant rate and clamps overshoot',()=>{
  const fade={from:0,to:1,duration:2,elapsed:0};
  near(advanceMusicFade(fade,.5).gain,.25);
  near(advanceMusicFade(fade,.5).gain,.5);
  assert.deepEqual(advanceMusicFade(fade,2),{gain:1,done:true});
  assert.deepEqual(advanceMusicFade({from:1,to:0,duration:0},0),{gain:0,done:true});
});
test('reversing a partly faded track uses the same native rate',()=>{
  const fade={from:.75,to:1,duration:2,elapsed:0};
  assert.deepEqual(advanceMusicFade(fade,.25),{gain:.875,done:false});
  assert.deepEqual(advanceMusicFade(fade,.25),{gain:1,done:true});
  assert.deepEqual(advanceMusicFade({from:.25,to:0,duration:2},.5),{gain:0,done:true});
});
test('saved fade progress produces the same remaining envelope',()=>{
  const fade={from:1,to:0,duration:2,elapsed:0};
  advanceMusicFade(fade,.7);
  const restored=JSON.parse(JSON.stringify(fade));
  assert.deepEqual(advanceMusicFade(restored,.2),advanceMusicFade(fade,.2));
  assert.deepEqual(advanceMusicFade(restored,2),advanceMusicFade(fade,2));
});
test('music fade is converted with native control gain, not final amplitude',()=>{
  const audio=new GameAudio();audio.master=1;audio.channels={music:1};
  const record={element:{},channel:'music',authoredGain:1,volume:1,fadeGain:.5};
  audio.applyGain(record);
  near(record.element.volume,10**(-.5));
  record.fadeGain=.25;audio.applyGain(record);near(record.element.volume,.1);
  record.volume=.5;audio.applyGain(record);near(record.element.volume,nativeGainToAmplitude(.125));
  record.fadeGain=0;audio.applyGain(record);assert.equal(record.element.volume,0);
});
