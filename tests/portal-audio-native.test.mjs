import test from 'node:test';
import assert from 'node:assert/strict';
import {GameAudio} from '../src/audio.js';

const settle=()=>new Promise(resolve=>setImmediate(resolve));
function harness({pending=false}={}) {
  const nodes=[],sources=[];let finish,fetches=0;
  const node=()=>{const n={gain:{value:1},connect(){},disconnect(){this.disconnected=true;}};nodes.push(n);return n;};
  const context={state:'running',currentTime:0,destination:node(),createGain:node,createChannelSplitter:node,createChannelMerger:node,
    resume:async()=>{},decodeAudioData:async()=>({duration:2}),createBufferSource(){const source={...node(),playbackRate:{value:1},
      start(time,offset){this.offset=offset;this.started=true;},stop(){this.stopped=true;}};sources.push(source);return source;}};
  const response={ok:true,arrayBuffer:async()=>new ArrayBuffer(8)};
  const audio=new GameAudio({createContext:()=>context,fetchAudio:()=>{fetches++;return pending?new Promise(resolve=>{finish=()=>resolve(response);}):Promise.resolve(response);},
    createAudio:url=>({src:url,paused:true,play(){this.paused=false;return Promise.resolve();},pause(){this.paused=true;}})});
  return {audio,context,sources,nodes,finish:()=>finish(),fetches:()=>fetches};
}

test('native portal frequency remains .075 with shared decoding and positional stereo gain',async()=>{
  const h=harness();
  const a=h.audio.play({sound:'LV2snd7.wav',nativeFrequency:true,playbackRate:.075,spatial:true,position:[100,0,0],loop:true});
  const b=h.audio.play({sound:'LV2snd7.wav',nativeFrequency:true,playbackRate:.075,loop:true});
  await settle();
  assert.equal(h.fetches(),1);assert.equal(h.sources.length,2);
  assert.equal(a.element.nativeBuffered,true);assert.equal(a.element.playbackRate,.075);
  assert.equal(h.sources[0].playbackRate.value,.075);assert.equal(h.sources[0].loop,true);
  assert.equal(a.stereo.right.gain.value,1);assert.ok(a.stereo.left.gain.value<.32);
  h.audio.setMaster(.2);assert.equal(a.element.output.gain.value,a.element.volume);
  assert.equal(b.element.output.gain.value,.2);
  h.audio.reset();assert.ok(h.sources.every(s=>s.stopped));assert.equal(h.audio.bufferCache.size,0);
});

test('slow native sounds preserve sample position across pause/resume and stop pending decodes',async()=>{
  const h=harness();const r=h.audio.play({sound:'LV2snd7.wav',key:'portal',nativeFrequency:true,playbackRate:.075,loop:true});
  await settle();h.context.currentTime=4;assert.equal(r.element.currentTime,.3);
  h.audio.pause();assert.equal(r.element.currentTime,.3);h.context.currentTime=10;assert.equal(r.element.currentTime,.3);
  h.audio.resume();await settle();assert.equal(h.sources[1].offset,.3);h.context.currentTime=12;assert.ok(Math.abs(r.element.currentTime-.45)<1e-9);
  h.audio.stop('portal');assert.ok(h.sources[1].stopped);assert.ok(r.element.output.disconnected);
  const pending=harness({pending:true});const abandoned=pending.audio.play({sound:'LV2snd7.wav',nativeFrequency:true,playbackRate:.075});
  pending.audio.reset();pending.finish();await settle();assert.equal(pending.sources.length,0);assert.equal(abandoned.element.paused,true);
});

test('native terminal zero frequency uses original rate and ordinary audio keeps its media behavior',()=>{
  const h=harness();
  const end=h.audio.play({sound:'Magiev1.wav',nativeFrequency:true,playbackRate:0});
  assert.equal(end.element.playbackRate,1);assert.equal(end.element.nativeBuffered,undefined);
  const ordinary=h.audio.play({sound:'other.wav',playbackRate:.075});assert.equal(ordinary.element.playbackRate,.25);
  assert.equal(h.fetches(),0);h.audio.reset();
});

test('slow native one-shot completion releases once and delayed loops restart without duplicate sources',async()=>{
  const h=harness();let ended=0;
  const r=h.audio.play({sound:'once.wav',nativeFrequency:true,playbackRate:.075,onEnded:()=>ended++});await settle();
  h.sources[0].onended();assert.equal(ended,1);assert.equal(h.audio.sounds.has(r),false);
  const loop=h.audio.play({sound:'delayed.wav',nativeFrequency:true,playbackRate:.075,loop:true,minReplayDelay:1,maxReplayDelay:1});await settle();
  assert.equal(h.sources[1].loop,false);h.sources[1].onended();assert.equal(loop.wait,1);
  h.audio.update(.5);assert.equal(h.sources.length,2);h.audio.update(.5);await settle();assert.equal(h.sources.length,3);assert.equal(h.sources[2].offset,0);
  h.audio.reset();
});
