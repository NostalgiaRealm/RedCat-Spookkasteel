import test from 'node:test';
import assert from 'node:assert/strict';
import {GameAudio,nativeGainToAmplitude} from '../src/audio.js';

const settle=()=>new Promise(resolve=>setImmediate(resolve));
const duration=89836/44100;
const idle={sound:'IdleFee1.wav',key:'effect:fairy:Fairy1:idlefee1.wav',sourceId:'fairy:Fairy1:idlefee1.wav',loop:true,spatial:true,position:[0,0,0]};
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-8,`${a} != ${b}`);
function harness({available=true,pending=false}={}) {
  const sources=[],media=[],requests=[];let finish;
  const node=()=>({gain:{value:1},connect(){},disconnect(){this.disconnected=true;}});
  const context={currentTime:0,state:'running',destination:node(),createGain:node,
    createChannelSplitter:node,createChannelMerger:node,createMediaElementSource:node,
    decodeAudioData:async()=>({duration}),resume:async()=>{},
    createBufferSource(){const source={...node(),playbackRate:{value:1},start(time,offset){this.offset=offset;},stop(){this.stopped=true;}};sources.push(source);return source;}};
  const response={ok:true,arrayBuffer:async()=>new ArrayBuffer(8)};
  const audio=new GameAudio({master:1,createContext:()=>available?context:null,
    fetchAudio:url=>{requests.push(url);return pending?new Promise(resolve=>{finish=()=>resolve(response);}):Promise.resolve(response);},
    createAudio:url=>{const element={src:url,paused:true,currentTime:0,readyState:4,play(){this.paused=false;return Promise.resolve();},pause(){this.paused=true;},removeAttribute(){this.src=null;},load(){}};media.push(element);return element;}});
  audio.setLevel('lvl01a');audio.setPlayerListener([0,0,0]);
  return {audio,context,sources,media,requests,finish:()=>finish()};
}

test('fairy idle uses one complete original-rate PCM loop at native base volume',async()=>{
  const h=harness(),r=h.audio.play(idle);await settle();
  assert.equal(r.element.nativeBuffered,true);assert.deepEqual(h.requests,['assets/audio/idlefee1.wav']);assert.equal(h.media.length,0);
  assert.equal(h.sources.length,1);const source=h.sources[0];
  assert.equal(source.loop,true);assert.equal(source.playbackRate.value,1);assert.equal(source.loopStart,0);
  assert.ok(source.loopEnd<duration&&source.loopEnd>duration-1/44100);
  for(let i=0;i<12;i++){
    h.context.currentTime=i*duration+.5;h.audio.update(.1);
    near(r.element.currentTime,.5);near(r.element.volume,nativeGainToAmplitude(.4));
    assert.equal(r.wait,null);assert.equal(h.sources.length,1);
  }
  // The deliberate player-relative 3x hearing radius still survives a remote
  // authored overview camera; adjusting base gain must not shrink its range.
  h.audio.update(.1,[100000,100000,100000]);near(r.distanceGain,1);
  near(r.element.volume,nativeGainToAmplitude(.4));h.audio.reset();assert.equal(source.stopped,true);
});

test('legacy media save resumes the idle sample and gain once across pause and repeated reload',async()=>{
  const old=harness({available:false}),r=old.audio.play(idle);r.element.currentTime=.755573;
  const saved=JSON.parse(JSON.stringify(old.audio.saveState()));assert.equal(saved.sounds[0].volume,1);
  const h=harness();assert.equal(h.audio.restoreState(saved),true);await settle();
  let voice=h.audio.keyed.get(idle.key);assert.equal(h.sources.length,1);near(h.sources[0].offset,.755573);
  near(voice.element.volume,nativeGainToAmplitude(.4));
  h.context.currentTime=.25;h.audio.pause();const at=voice.element.currentTime;
  h.context.currentTime=10;near(voice.element.currentTime,at);h.audio.resume();await settle();near(h.sources.at(-1).offset,at);
  for(let i=0;i<3;i++){
    const state=JSON.parse(JSON.stringify(h.audio.saveState()));assert.equal(state.sounds[0].volume,1);
    h.audio.restoreState(state);await settle();voice=h.audio.keyed.get(idle.key);
    near(voice.element.volume,nativeGainToAmplitude(.4));assert.equal(h.audio.sounds.size,1);
  }
  h.audio.stop(idle.key);assert.equal(h.audio.sounds.size,0);assert.equal(h.sources.at(-1).stopped,true);
});

test('fairy deactivation before decode cannot start a late loop; other cues retain their gain and media path',async()=>{
  const h=harness({pending:true});h.audio.play(idle);h.audio.stop(idle.key);h.finish();await settle();
  assert.equal(h.sources.length,0);assert.equal(h.audio.sounds.size,0);
  for(const sound of ['gri5fx11.wav','magiev12.wav','idlefee1.wav']){
    const r=h.audio.play({sound});assert.equal(r.element.nativeBuffered,undefined);assert.equal(r.loop,false);near(r.element.volume,1);
  }
  h.audio.queueDialogue({voice:'flgen30.wav'});assert.equal(h.media.length,4);assert.equal(h.requests.length,1);h.audio.reset();
});

test('fairy loop retains a working media fallback without Web Audio',()=>{
  const h=harness({available:false}),r=h.audio.play(idle);
  assert.equal(h.requests.length,0);assert.equal(h.media.length,1);assert.equal(r.element.loop,true);assert.equal(r.element.paused,false);
  near(r.element.volume,nativeGainToAmplitude(.4));h.audio.pause();assert.equal(r.element.paused,true);
  h.audio.resume();assert.equal(r.element.paused,false);h.audio.reset();assert.equal(r.element.src,null);
});
