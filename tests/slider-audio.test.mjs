import test from 'node:test';
import assert from 'node:assert/strict';
import {SliderAudio,SLIDER_VOICES} from '../src/slider-audio.js';
const tick=()=>new Promise(r=>setImmediate(r));
function setup(values){const calls=[],ends=[];const feedback=new SliderAudio({say(files){calls.push(files[0]);return new Promise(r=>ends.push(r));}});feedback.reset(values);return {feedback,calls,ends};}
test('all settings sliders choose the requested original WAV by direction',async()=>{
 for(const [id,voices] of Object.entries(SLIDER_VOICES)){
  const {feedback,calls,ends}=setup({[id]:50});feedback.input(id,40);assert.deepEqual(calls,[voices.lower]);
  ends.shift()(true);await tick();feedback.input(id,60);assert.deepEqual(calls,[voices.lower,voices.higher]);
 }
});
test('both original sound sliders use softer and louder announcements',()=>{
 assert.deepEqual(SLIDER_VOICES['volume-effects'],{lower:'rcmn15.wav',higher:'rcmn16.wav'});
 assert.deepEqual(SLIDER_VOICES['volume-music'],SLIDER_VOICES['volume-effects']);
});
test('rapid drag keeps full words and coalesces direction reversals',async()=>{
 const {feedback,calls,ends}=setup({fov:65});feedback.input('fov',66);feedback.input('fov',67);feedback.input('fov',64);feedback.input('fov',63);
 assert.deepEqual(calls,['rcmn22.wav']);ends.shift()(true);await tick();assert.deepEqual(calls,['rcmn22.wav','rcmn23.wav']);
});
test('closing or repopulating settings prevents delayed slider voices',async()=>{
 const {feedback,calls,ends}=setup({volume:.6});feedback.input('volume',.5);feedback.input('volume',.7);feedback.cancel();ends.shift()(true);await tick();
 assert.deepEqual(calls,['rcmn15.wav']);feedback.reset({volume:.6});feedback.input('volume',.6);assert.equal(calls.length,1);
});
test('same value, invalid input, and playback cancellation do not produce extra cues',async()=>{
 const {feedback,calls,ends}=setup({sensitivity:1});feedback.input('sensitivity',1);feedback.input('sensitivity',NaN);assert.equal(calls.length,0);
 feedback.input('sensitivity',.9);feedback.input('sensitivity',1.1);ends.shift()(false);await tick();assert.deepEqual(calls,['rcmn23.wav']);
});
