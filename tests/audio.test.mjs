import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {GameAudio, distanceGain, nativeGainToAmplitude} from '../src/audio.js';
import settings from '../src/audio-settings.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';

class FakeAudio {
  constructor(url) { this.src=url; this.paused=true; this.volume=1; this.currentTime=0; this.plays=0; }
  play() { this.paused=false; this.plays++; return Promise.resolve(); }
  pause() { this.paused=true; }
  end() { this.paused=true; this.onended?.(); }
}
const makeAudio = options => new GameAudio({createAudio:url=>new FakeAudio(url),...options});
const near = (actual, expected) => assert.ok(Math.abs(actual-expected)<1e-10, `${actual} != ${expected}`);
const json = path => JSON.parse(readFileSync(new URL(path, import.meta.url)));
const level = json('../data/levels/lvl00a/level.json'), program=json('../data/davi/lvl00a.json');
const motions=json('../data/motions/lvl00a.json'), dialogue=json('../data/dialogue/nl.json');

test('original UFO and forest gains use case-insensitive basenames and leave dialogue at full gain', () => {
  const audio=makeAudio();
  near(audio.play({sound:'C:\\Sounds\\LV1snd1.WAV'}).element.volume,.06);
  near(audio.play({sound:'forest3.WAV'}).element.volume,.6*10**(.5*Math.log2(.45)));
  near(audio.play({sound:'rcgen44.wav',channel:'voices'}).element.volume,.6);
  near(audio.play({sound:'empty.WAV'}).element.volume,0);
  near(audio.play({sound:'expl6.wav'}).element.volume,.6);
  near(audio.play({sound:'unknown.wav'}).element.volume,.6);
});

test('native logarithmic driver volumes become waveform amplitude before the portable master', () => {
  near(nativeGainToAmplitude(1),1); near(nativeGainToAmplitude(.5),10**(-.5));
  near(nativeGainToAmplitude(.25),.1); near(nativeGainToAmplitude(1/1024),.00001);
  near(nativeGainToAmplitude(0),0); near(nativeGainToAmplitude(1.5),1);
});

test('native distance model uses 32 units/meter and logarithmic control-to-amplitude conversion', () => {
  const config={minDistanceMeters:5,maxDistanceFactor:25}, origin=[0,0,0];
  near(distanceGain(origin,[0,0,0],config),1);
  near(distanceGain(origin,[160,0,0],config),1);
  near(distanceGain(origin,[800,0,0],config),1/32);
  near(distanceGain(origin,[4000,0,0],config),1/1024);
  near(distanceGain(origin,[100000,0,0],config),1/1024);
  near(distanceGain([10,20,30],[170,20,30],config),1);
});

test('level override controls spatial effects while music and voices remain independent of camera distance', () => {
  const audio=makeAudio(); audio.setLevel('lvl00a');
  assert.deepEqual(audio.spatial,{minDistanceMeters:50,maxDistanceFactor:150});
  const sound=audio.play({sound:'forest3.WAV',spatial:true,position:[2000,0,0]});
  const voice=audio.play({sound:'rcgen44.wav',channel:'voices'});
  assert.ok(sound.element.volume<.16 && sound.element.volume>.05);
  audio.update(0,[2000,0,0]); near(sound.element.volume,.6*nativeGainToAmplitude(.45)); near(voice.element.volume,.6);
  audio.update(0,[-100000,0,0]); assert.ok(sound.element.volume<.001); near(voice.element.volume,.6);
  audio.setLevel('missing'); assert.deepEqual(audio.spatial,settings.spatial);
});

test('master changes preserve authored, channel, script and spatial gains on every live sound', () => {
  const audio=makeAudio();
  const ufo=audio.play({sound:'lv1snd1.wav',sourceId:'ufo',loop:true,volume:.5});
  const voice=audio.play({sound:'rcgen44.wav',channel:'voices'});
  const music=audio.play({sound:'Level 1 - The Forest.wav',sourceId:'music',channel:'music',volume:.5});
  audio.setMaster(.3); near(ufo.element.volume,.3*nativeGainToAmplitude(.25*.5)); near(voice.element.volume,.3);
  near(music.element.volume,.3*nativeGainToAmplitude(.7*.5));
  audio.setScriptVolume('ufo',.2); near(ufo.element.volume,.3*nativeGainToAmplitude(.25*.2));
  audio.setScriptVolume('music',.1); near(music.element.volume,.3*nativeGainToAmplitude(.7*.1));
  audio.setMaster(0); for(const item of audio.snapshot()) assert.equal(item.volume,0);
  audio.setMaster(.8); near(ufo.element.volume,.8*nativeGainToAmplitude(.25*.2)); near(music.element.volume,.8*nativeGainToAmplitude(.7*.1));
});

test('pause, keyed replacement and reset cannot resurrect a stopped voice or leave duplicate loops', () => {
  const audio=makeAudio(), first=audio.play({sound:'lv1snd1.wav',key:'ufo',loop:true});
  const second=audio.play({sound:'lv1snd1.wav',key:'ufo',loop:true});
  assert.equal(first.element.paused,true); assert.equal(audio.sounds.size,1);
  audio.pause(); assert.equal(second.element.paused,true);
  const voice=audio.play({sound:'rcgen44.wav',key:'voice',channel:'voices'});
  assert.equal(voice.element.plays,0);
  audio.stop('voice'); audio.resume(); assert.equal(voice.element.plays,0); assert.equal(second.element.paused,false);
  audio.reset(); assert.equal(second.element.paused,true); assert.equal(audio.sounds.size,0); assert.equal(audio.keyed.size,0);
});

test('replaying emitters honor authored delays and freeze their countdown while paused', () => {
  const audio=makeAudio({random:()=>.5});
  const record=audio.play({sound:'forest1.wav',loop:true,minReplayDelay:2,maxReplayDelay:4});
  assert.equal(record.element.loop,false); record.element.end(); near(record.wait,3);
  audio.update(2); assert.equal(record.element.plays,1);
  audio.pause(); audio.update(10); near(record.wait,1);
  audio.resume(); assert.equal(record.element.plays,1);
  audio.update(1); assert.equal(record.element.plays,2);
  audio.stop(record.key); audio.reset();
});

test('original forest host emits spatial metadata and restores only enabled repeating ambience', () => {
  function boot(save) {
    const events=[], audio=makeAudio(); audio.setLevel('lvl00a'); audio.update(0,level.spawn.position);
    const game=new Gameplay(level,{deferInit:true,save,onEvent:event=>{
      events.push(event);
      if(event.type==='scriptSound') {
        const key=`effect:${event.id}`;
        if(event.stop)audio.stop(key);else audio.play({...event,key,sourceId:event.id});
      }
      if(event.type==='scriptVolume')audio.setScriptVolume(event.id,event.volume);
    }});
    const host=new ScriptHost(game,program,{motions,dialogue}); host.initialize(save?.scripts);
    return {game,host,audio,events};
  }
  const before=boot(), ufo=before.game.find('UFO_sound')[0], sound=before.events.find(e=>e.id===ufo.id&&e.type==='scriptSound');
  assert.equal(sound.spatial,true); assert.equal(sound.loop,true); assert.deepEqual(sound.position,[-1211,-95,2245]);
  before.host.callMethod(before.host.resolveObject('UFO_sound'),'MultiplyVolume',[2]);
  assert.equal(ufo.volume,1,'Each original instance multiply is clamped before the next command');
  before.host.callMethod(before.host.resolveObject('UFO_sound'),'MultiplyVolume',[.5]);
  before.game.command(before.game.find('Blockrise')[0],'enable');
  const restored=boot(before.game.snapshot());
  const ufoSound=restored.audio.snapshot().find(e=>e.sourceId===ufo.id);
  near(ufoSound.scriptVolume,.5); near(ufoSound.volume,.6*nativeGainToAmplitude(.25*.5));
  assert.equal(restored.audio.snapshot().filter(e=>e.channel==='effects').length,17);
  assert.ok(!restored.events.some(e=>e.type==='scriptSound'&&e.sound==='OpenDoorSecret.wav'));
  const forest=restored.audio.snapshot().filter(e=>e.sound.startsWith('forest'));
  assert.equal(forest.length,16); assert.ok(forest.every(e=>e.volume<.16)); assert.ok(forest.some(e=>e.volume<.04));
});
