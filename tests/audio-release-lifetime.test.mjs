import test from 'node:test';
import assert from 'node:assert/strict';
import {GameAudio} from '../src/audio.js';

class Media {
  constructor(src) { this.src=src;this.currentTime=0;this.duration=10;this.paused=true;this.calls=[]; }
  play() { this.calls.push('play');this.paused=false;return Promise.resolve(); }
  pause() { this.calls.push('pause');this.paused=true; }
  removeAttribute(name) { assert.equal(name,'src');this.calls.push('remove');delete this.src; }
  load() {
    assert.equal(this.onended,null);assert.equal(this.onerror,null);assert.equal(this.onloadedmetadata,null);
    this.calls.push('load');this.currentTime=0;this.duration=NaN;
  }
}
const make=options=>new GameAudio({createContext:()=>null,createAudio:url=>new Media(url),...options});
const settle=()=>new Promise(resolve=>setImmediate(resolve));

for(const event of ['ended','error'])test(`${event} releases the HTML player after handlers and spatial nodes`,()=>{
  const audio=make(),reasons=[];
  const r=audio.play({sound:'rcshoot1.wav',key:'shot',onEnded:reason=>reasons.push(reason)});
  r.stereo={disconnect(){r.element.calls.push('disconnect');}};
  r.element.onloadedmetadata=()=>assert.fail('Released metadata callback ran');
  r.element[`on${event}`]();
  assert.deepEqual(r.element.calls,['play','pause','disconnect','remove','load']);
  assert.deepEqual(reasons,[event]);assert.equal(r.element.src,undefined);
  assert.equal(r.stereo,null);assert.equal(audio.sounds.size,0);assert.equal(audio.keyed.size,0);
});

test('replacement, stop and reset unload released elements without unloading a remaining sound',()=>{
  const audio=make(),first=audio.play({sound:'first.wav',key:'voice'}),other=audio.play({sound:'other.wav',key:'other'});
  const replacement=audio.play({sound:'second.wav',key:'voice'});
  assert.equal(first.element.src,undefined);assert.ok(other.element.src);assert.ok(replacement.element.src);
  audio.stop('voice');assert.equal(replacement.element.src,undefined);assert.ok(other.element.src);
  audio.reset();assert.equal(other.element.src,undefined);assert.equal(audio.sounds.size,0);
  for(const r of [first,other,replacement])assert.equal(r.element.calls.filter(c=>c==='load').length,1);
});

test('pause/resume and a delayed loop keep their loaded resource and playback position',()=>{
  const audio=make(),r=audio.play({sound:'ambience.wav',key:'loop',loop:true,minReplayDelay:1,maxReplayDelay:1});
  const src=r.element.src;r.element.currentTime=3;
  audio.pause();assert.equal(r.element.currentTime,3);audio.resume();assert.equal(r.element.currentTime,3);
  r.element.currentTime=10;r.element.onended();assert.equal(r.wait,1);
  assert.equal(r.element.src,src);assert.ok(!r.element.calls.includes('load'));
  audio.update(1);assert.equal(r.wait,null);assert.equal(r.element.src,src);
  assert.equal(r.element.calls.filter(c=>c==='play').length,3);
  audio.reset();assert.equal(r.element.src,undefined);
});

test('HTML fallback music captures its cursor before unload and resumes that cursor on return',()=>{
  const audio=make(),first=audio.playMusic({sound:'ambient.wav'});first.element.currentTime=4;
  audio.playMusic({sound:'battle.wav'});
  assert.equal(first.element.currentTime,0);assert.equal(first.element.src,undefined);
  assert.equal(audio.musicPositions.get('ambient.wav'),4);
  const resumed=audio.playMusic({sound:'ambient.wav'});
  assert.equal(resumed.element.currentTime,4);assert.ok(resumed.element.src);
  audio.pause();audio.resume();assert.equal(resumed.element.currentTime,4);
  audio.reset();assert.equal(audio.musicPositions.size,0);
});

test('custom disposable voices retain their own cleanup path',()=>{
  const audio=make({createAudio:url=>Object.assign(new Media(url),{dispose(){this.calls.push('dispose');}})});
  const r=audio.play({sound:'custom.wav'});audio.reset();
  assert.deepEqual(r.element.calls,['play','pause','dispose']);
});

function buffered() {
  const nodes=[],sources=[];
  const node=()=>{const n={gain:{value:1},connect(){},disconnect(){this.disconnected=true;}};nodes.push(n);return n;};
  const context={state:'running',currentTime:0,destination:node(),createGain:node,
    decodeAudioData:async()=>({duration:10}),createBufferSource(){const s={...node(),playbackRate:{value:1},start(){},stop(){this.stopped=true;}};sources.push(s);return s;}};
  const audio=make({createContext:()=>context,fetchAudio:async()=>({ok:true,arrayBuffer:async()=>new ArrayBuffer(1)})});
  return {audio,context,sources};
}

test('a released buffered music source stops and disconnects without HTML media methods',async()=>{
  const {audio,context,sources}=buffered();
  const r=audio.playMusic({sound:'ambient.wav'});await settle();
  assert.equal(r.element.nativeBuffered,true);context.currentTime=4;
  audio.stop('music');assert.equal(audio.musicPositions.get('ambient.wav'),4);
  assert.equal(r.element.disposed,true);assert.equal(sources[0].stopped,true);
  assert.equal(sources[0].disconnected,true);assert.equal(r.element.output.disconnected,true);
});

test('the configured pickup group completes through buffered disposal without HTML tail cleanup',async()=>{
  const {audio,sources}=buffered();let completed=0;
  const r=audio.play({sound:'icoinl.wav',group:'pickup',onEnded:()=>completed++});await settle();
  assert.equal(r.element.nativeBuffered,true);
  r.element.removeAttribute=r.element.load=()=>assert.fail('Buffered pickup must not use HTML unload');
  sources[0].onended();
  assert.equal(completed,1);assert.equal(r.element.disposed,true);
  assert.equal(sources[0].stopped,undefined,'Natural buffer completion was not stopped early');
  assert.equal(sources[0].disconnected,true);assert.equal(r.element.output.disconnected,true);
  assert.equal(audio.sounds.size,0);
});

test('unloading a pending HTML play cannot notify completion or resurrect a released record',async()=>{
  let rejectPlay,completed=0;
  const audio=make({createAudio:url=>{
    const m=new Media(url);
    m.play=()=>new Promise((resolve,reject)=>{rejectPlay=reject;});
    m.load=function(){Media.prototype.load.call(this);rejectPlay(Object.assign(new Error('unloaded'),{name:'AbortError'}));};
    return m;
  }});
  const r=audio.play({sound:'pending.wav',onEnded:()=>completed++});audio.reset();await settle();audio.resume();
  assert.equal(completed,0);assert.equal(audio.sounds.size,0);assert.equal(r.element.src,undefined);
});
