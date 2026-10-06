import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {GameAudio,nativeGainToAmplitude} from '../src/audio.js';

class Media {
  constructor(src){this.src=src;this.paused=true;this.currentTime=0;}
  play(){this.paused=false;return Promise.resolve();}
  pause(){this.paused=true;}
}
const actorSettings=name=>JSON.parse(readFileSync(new URL(`../assets/actors/${name}.json`,import.meta.url))).settings;
function setup(names=['brcrate'],save=null){
  const events=[],audio=new GameAudio({master:1,createAudio:src=>new Media(src)});
  const level={id:'destruction-audio',entities:names.map((name,i)=>({classname:'AdamAnyActor','%name%':`prop${i}`,ActorFileName:`${name}.act`,Origin:`${i*10} 0 0`}))};
  const game=new Gameplay(level,{save,onEvent:event=>{
    events.push(event);
    if(event.type==='scriptSound')audio.play(event);
  }});
  game.objects.forEach((object,i)=>{object.actorSettings=actorSettings(names[i]);});
  return {game,audio,events};
}

for(const [name,volume]of [['brcrate',.98],['wkcrate',.4],['glaslood',.4],['grafdek',.4],['grafdum',.4],['hekdoor',.4]]){
  test(`${name}: destruction uses the native explosion WAV and authored-size gain once`,()=>{
    const {game,audio,events}=setup([name]),prop=game.objects[0];
    prop.effectPosition=()=>[5,24,8];game.destroy(prop);
    const sounds=events.filter(e=>e.type==='scriptSound');
    assert.equal(sounds.length,1);assert.equal(sounds[0].sound,'expl6.wav');
    assert.equal(sounds[0].volume,volume);assert.equal(sounds[0].spatial,true);
    assert.deepEqual(sounds[0].position,[5,24,8]);
    const record=[...audio.sounds][0];
    assert.equal(record.element.src,'assets/audio/expl6.wav');assert.equal(record.loop,false);
    // Volume.ini's 1.5 is clamped before the explosion's instance gain.
    assert.ok(Math.abs(record.element.volume-nativeGainToAmplitude(volume))<1e-9);
    game.destroy(prop);assert.equal(events.filter(e=>e.type==='scriptSound').length,1);
    assert.equal(game.explosions.length,1);
  });
}

test('explosion tails overlap, pause/resume intact, and do not replay when loading destroyed props',()=>{
  const {game,audio}=setup(['brcrate','wkcrate']);game.destroy(game.objects[0]);
  const first=[...audio.sounds][0];first.element.currentTime=.2;
  game.destroy(game.objects[1]);const second=[...audio.sounds][1];
  assert.equal(audio.sounds.size,2);assert.equal(first.element.paused,false);
  assert.equal(first.element.currentTime,.2);assert.equal(first.key,null);assert.equal(second.key,null);
  audio.pause();assert.ok([...audio.sounds].every(r=>r.element.paused));
  audio.resume();assert.ok([...audio.sounds].every(r=>!r.element.paused));
  assert.equal(first.element.currentTime,.2);
  first.element.onended();assert.equal(audio.sounds.size,1);assert.equal(second.element.paused,false);
  second.element.onended();assert.equal(audio.sounds.size,0);
  const restored=setup(['brcrate','wkcrate'],JSON.parse(JSON.stringify(game.snapshot())));
  for(const prop of restored.game.objects)restored.game.destroy(prop);
  assert.equal(restored.audio.sounds.size,0);
});

test('an explicitly disabled explosion does not add an unrelated destruction sound',()=>{
  const {game,audio}=setup();game.objects[0].actorSettings.explosion.NrExplosions=0;
  game.destroy(game.objects[0]);assert.equal(audio.sounds.size,0);
});
