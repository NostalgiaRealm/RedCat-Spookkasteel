import test from 'node:test';
import assert from 'node:assert/strict';
import {GameAudio} from '../source/audio.js';
import {GameplayAudio} from '../source/gameplay-audio.js';

const settle=()=>new Promise(resolve=>setImmediate(resolve));
function harness({pending=false,available=true}={}){
  const sources=[],media=[];let finish,fetches=0;
  const node=()=>({gain:{value:1},connect(){},disconnect(){this.disconnected=true;}});
  const context={currentTime:0,state:'running',destination:node(),createGain:node,resume:async()=>{},
    decodeAudioData:async()=>({duration:4089/11025}),
    createBufferSource(){const source={...node(),playbackRate:{value:1},start(time,offset){this.offset=offset;},stop(){this.stopped=true;}};sources.push(source);return source;}};
  const response={ok:true,arrayBuffer:async()=>new ArrayBuffer(8)};
  const audio=new GameAudio({createContext:()=>available?context:null,
    fetchAudio:()=>{fetches++;return pending?new Promise(resolve=>{finish=()=>resolve(response);}):Promise.resolve(response);},
    createAudio:url=>{const item={src:url,paused:true,play(){this.paused=false;return Promise.resolve();},pause(){this.paused=true;}};media.push(item);return item;}});
  const router=new GameplayAudio(audio),game={objects:[{id:'large-bag',subtype:'coin',entity:{Type:'3'}}]};
  return {audio,context,sources,media,finish:()=>finish(),fetches:()=>fetches,pickup(){router.handle({type:'pickup',id:'large-bag',sound:'ICoinM.wav'},game);return [...audio.sounds].at(-1);}};
}

test('large money bags share decoded PCM but retain independent complete pickup voices',async()=>{
  const h=harness(),a=h.pickup(),b=h.pickup();await settle();
  assert.equal(a.name,'icoinl.wav');assert.equal(a.element.nativeBuffered,true);assert.equal(h.media.length,0);
  assert.equal(h.fetches(),1);assert.equal(h.sources.length,2);assert.notEqual(h.sources[0],h.sources[1]);
  assert.equal(a.element.duration,4089/11025);assert.equal(h.sources[0].playbackRate.value,1);
  h.audio.update(10);assert.equal(h.audio.pickupsPending,true,'game-clock time must not release a pending recording');
  h.sources[0].onended();assert.equal(a.element.currentTime,4089/11025);assert.equal(h.audio.pickupsPending,true);
  assert.equal(h.sources[0].stopped,undefined,'natural completion does not prematurely stop the audio source');
  h.sources[1].onended();assert.equal(h.audio.pickupsPending,false);assert.equal(h.audio.sounds.size,0);
});

test('buffered pickup pause/resume preserves sample position and reset cancels outstanding loads',async()=>{
  const h=harness(),a=h.pickup();await settle();h.context.currentTime=.12;h.audio.pause();
  assert.equal(a.element.currentTime,.12);assert.equal(h.sources[0].stopped,true);assert.equal(h.audio.pickupsPending,true);
  h.context.currentTime=10;assert.equal(a.element.currentTime,.12);
  h.audio.resume();await settle();assert.equal(h.sources[1].offset,.12);h.sources[1].onended();assert.equal(h.audio.pickupsPending,false);
  const pending=harness({pending:true}),r=pending.pickup();pending.audio.pause();pending.finish();await settle();
  assert.equal(pending.sources.length,0);assert.equal(pending.audio.pickupsPending,true);
  pending.audio.resume();await settle();assert.equal(pending.sources.length,1);pending.audio.reset();assert.equal(pending.sources[0].stopped,true);
  assert.equal(pending.audio.pickupsPending,false);assert.equal(pending.audio.bufferCache.size,0);
  const cancelled=harness({pending:true});cancelled.pickup();cancelled.audio.reset();cancelled.finish();await settle();assert.equal(cancelled.sources.length,0);
});

test('pickup decode failure releases the transition guard and allows retry',async()=>{
  const h=harness();h.audio.fetchAudio=async()=>({ok:false});h.pickup();await settle();
  assert.equal(h.audio.pickupsPending,false);assert.equal(h.audio.bufferCache.size,0);
  h.audio.fetchAudio=async()=>({ok:true,arrayBuffer:async()=>new ArrayBuffer(8)});h.pickup();await settle();assert.equal(h.sources.length,1);h.audio.reset();
});

test('without Web Audio pickups retain media fallback; ordinary effects and dialogue keep their existing path',()=>{
  const h=harness({available:false}),r=h.pickup();assert.equal(h.media.length,1);assert.equal(r.element.paused,false);assert.equal(r.name,'icoinl.wav');
  r.element.onended();assert.equal(h.audio.pickupsPending,false);
  const ordinary=harness();ordinary.audio.play({sound:'rcshoot1.wav'});ordinary.audio.queueDialogue({voice:'flgen4.wav'});
  assert.equal(ordinary.media.length,2);assert.equal(ordinary.fetches(),0);ordinary.audio.reset();
});
