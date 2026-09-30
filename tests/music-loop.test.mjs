import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {GameAudio, soundName} from '../src/audio.js';

const tracks=[
  'level 1 - the forest.wav',
  'level 2- -the castle.wav',
  'level 3 - the graveyard.wav',
  'level 4 - the caves.wav',
  'level 5 - the castletowerr.wav',
];
const combat='endbosses.wav';
const fade={crossFade:true,fadeInTimeSeconds:2,fadeOutTimeSeconds:2};
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-9,`${a} != ${b}`);

class Media {
  constructor(src){this.src=src;this.currentTime=0;this.duration=120;this.volume=1;this.paused=true;this.starts=[];}
  play(){this.paused=false;this.starts.push(this.currentTime);return Promise.resolve();}
  pause(){this.paused=true;}
  advance(dt){if(!this.paused)this.currentTime+=dt;}
  end(){this.currentTime=this.duration;this.paused=true;this.onended?.();}
}
function mixer(){
  const media=[];
  const audio=new GameAudio({createContext:()=>null,createAudio:src=>{const item=new Media(src);media.push(item);return item;}});
  return {audio,media,tick(dt){for(const item of media)item.advance(dt);audio.update(dt);}};
}

test('each level selects its complete original background WAV as an indefinite loop',()=>{
  for(let index=0;index<tracks.length;index++){
    const level=JSON.parse(readFileSync(new URL(`../data/levels/lvl0${index}a/level.json`,import.meta.url)));
    const music=level.entities.filter(e=>e.classname==='EffectMusic');
    assert.equal(music.length,1);
    assert.equal(soundName(music[0].MusicAmbient),tracks[index]);
    const wav=readFileSync(new URL(`../assets/audio/${encodeURIComponent(tracks[index])}`,import.meta.url));
    assert.equal(wav.toString('ascii',0,4),'RIFF');assert.equal(wav.toString('ascii',8,12),'WAVE');
    let dataSize=0,byteRate=0;
    for(let offset=12;offset+8<=wav.length;){
      const name=wav.toString('ascii',offset,offset+4),size=wav.readUInt32LE(offset+4);
      assert.ok(offset+8+size<=wav.length,`${tracks[index]} has a complete ${name} chunk`);
      if(name==='data')dataSize+=size;
      if(name==='fmt '&&size>=16)byteRate=wav.readUInt32LE(offset+16);
      offset+=8+size+(size&1);
    }
    assert.ok(dataSize>0&&byteRate>0&&dataSize/byteRate>30,`${tracks[index]} contains a full music track`);
    const {audio}=mixer(),record=audio.playMusic({sound:music[0].MusicAmbient});
    assert.equal(record.name,tracks[index]);assert.equal(record.loop,true);assert.equal(record.element.loop,true);
    assert.equal(record.element.starts[0],0);assert.equal(record.minDelay,0);assert.equal(record.maxDelay,0);
  }
});

test('returning after combat has faded out restores the background playhead before playback begins',()=>{
  const {audio,tick}=mixer(),first=audio.playMusic({sound:tracks[0]});
  first.element.currentTime=53;
  const battle=audio.playMusic({sound:combat,...fade});tick(2);
  assert.equal(audio.sounds.has(first),false);assert.equal(first.element.paused,true);
  const stoppedAt=first.element.currentTime;
  tick(17);
  const returned=audio.playMusic({sound:tracks[0],...fade});
  assert.notEqual(returned,first);near(returned.element.currentTime,stoppedAt);
  near(returned.element.starts[0],stoppedAt);
  assert.equal(returned.element.loop,true);assert.equal(battle.fade.release,true);
  tick(2);assert.equal(audio.sounds.size,1);assert.equal(audio.keyed.get('music'),returned);
});

test('returning during a crossfade reverses the existing layer without duplicate music or a position reset',()=>{
  const {audio,tick}=mixer(),ambient=audio.playMusic({sound:tracks[2]});
  ambient.element.currentTime=80;
  audio.playMusic({sound:combat,...fade});tick(.75);
  const position=ambient.element.currentTime,gain=ambient.fadeGain;
  const returned=audio.playMusic({sound:tracks[2],...fade});
  assert.equal(returned,ambient);near(returned.element.currentTime,position);near(returned.fadeGain,gain);
  assert.equal(returned.fade.to,1);assert.notEqual(returned.fade.release,true);
  assert.equal(audio.sounds.size,2);assert.equal([...audio.sounds].filter(r=>r.name===tracks[2]).length,1);
  for(let i=0;i<12;i++){
    tick(.1);audio.playMusic({sound:i%2?tracks[2]:combat,...fade});
    assert.equal(audio.sounds.size,2,'rapid combat transitions reuse their two existing voices');
  }
  tick(2);assert.equal(audio.sounds.size,1);assert.equal(audio.keyed.get('music'),ambient);
});

test('pause freezes both music layers, positions and crossfade clocks then resumes from the same positions',()=>{
  const {audio,tick}=mixer(),ambient=audio.playMusic({sound:tracks[1]});
  ambient.element.currentTime=41;
  const battle=audio.playMusic({sound:combat,...fade});tick(.5);
  const records=[ambient,battle],positions=records.map(r=>r.element.currentTime),gains=records.map(r=>r.fadeGain);
  audio.pause();tick(30);
  assert.deepEqual(records.map(r=>r.element.currentTime),positions);
  assert.deepEqual(records.map(r=>r.fadeGain),gains);assert.ok(records.every(r=>r.element.paused));
  audio.resume();assert.deepEqual(records.map(r=>r.element.currentTime),positions);
  assert.ok(records.every(r=>!r.element.paused));tick(1.5);
  assert.equal(audio.sounds.size,1);near(battle.element.currentTime,positions[1]+1.5);
});

test('explicit music stop and level reset discard remembered positions and all fading layers',()=>{
  for(const finish of [audio=>audio.playMusic({stop:true}),audio=>audio.reset()]){
    const {audio,tick}=mixer();audio.playMusic({sound:tracks[3]}).element.currentTime=34;
    audio.playMusic({sound:combat,...fade});tick(2);
    assert.ok(audio.musicPositions.size>0);
    audio.playMusic({sound:tracks[3],...fade});assert.equal(audio.sounds.size,2);
    finish(audio);assert.equal(audio.sounds.size,0);assert.equal(audio.musicPositions.size,0);
    const fresh=audio.playMusic({sound:tracks[3]});assert.equal(fresh.element.currentTime,0);assert.equal(fresh.element.starts[0],0);
  }
});

test('fallback EOF events repeat complete tracks indefinitely without a replay delay or early restart',()=>{
  const {audio,tick}=mixer(),record=audio.playMusic({sound:tracks[4]});
  for(let cycle=0;cycle<5;cycle++){
    const starts=record.element.starts.length;
    tick(record.element.duration-.25);
    near(record.element.currentTime,record.element.duration-.25);
    assert.equal(record.element.starts.length,starts,'elapsed game time does not restart music before EOF');
    record.element.end();assert.equal(record.wait,0);audio.update(0);
    assert.equal(record.element.currentTime,0);assert.equal(record.element.starts.length,starts+1);
    assert.equal(record.element.paused,false);assert.equal(record.wait,null);assert.equal(audio.sounds.size,1);
  }
});

test('an EOF delivered while paused remains silent until resume and restarts at the beginning',()=>{
  const {audio}=mixer(),record=audio.playMusic({sound:tracks[0]});
  audio.pause();record.element.end();audio.update(50);
  assert.equal(record.element.paused,true);assert.equal(record.element.starts.length,1);assert.equal(record.wait,0);
  audio.resume();audio.update(0);
  assert.equal(record.element.currentTime,0);assert.equal(record.element.starts.length,2);assert.equal(record.element.paused,false);
});

test('selecting the same filename preserves playback while updating authored volume and owner',()=>{
  const {audio}=mixer(),record=audio.playMusic({sound:tracks[0],id:'first'});
  record.element.currentTime=19.5;
  const selected=audio.playMusic({sound:'C:\\Sounds\\Level 1 - The Forest.WAV',id:'second',volume:.4,...fade});
  assert.equal(selected,record);assert.equal(record.element.currentTime,19.5);assert.equal(record.element.starts.length,1);
  assert.equal(record.sourceId,'second');assert.equal(record.volume,.4);assert.equal(audio.sounds.size,1);
});

test('a track stopped exactly at EOF resumes at zero instead of trying to seek past its duration',()=>{
  const {audio}=mixer(),record=audio.playMusic({sound:tracks[0]});
  record.element.currentTime=record.element.duration;
  audio.playMusic({sound:combat});const resumed=audio.playMusic({sound:tracks[0]});
  assert.equal(resumed.element.currentTime,0);assert.equal(resumed.element.starts[0],0);
});

const settle=()=>new Promise(resolve=>setImmediate(resolve));
function bufferedMixer({pendingDecode=false,duration=123.125}={}){
  const sources=[],media=[],requests=[],decodes=[];
  const node=()=>({gain:{value:1},connect(){},disconnect(){this.disconnected=true;}});
  const buffer={duration,length:duration*32000,sampleRate:32000};
  const context={state:'running',currentTime:0,destination:node(),createGain:node,
    resume:async()=>{},
    decodeAudioData:()=>pendingDecode?new Promise(resolve=>decodes.push(()=>resolve(buffer))):Promise.resolve(buffer),
    createBufferSource(){
      const source={...node(),playbackRate:{value:1},starts:[],
        start(time,offset){this.starts.push({time,offset});},stop(){this.stopped=true;}};
      sources.push(source);return source;
    },
  };
  const audio=new GameAudio({createContext:()=>context,
    fetchAudio:async url=>{requests.push(url);return {ok:true,arrayBuffer:async()=>new ArrayBuffer(8)};},
    createAudio:src=>{const item=new Media(src);media.push(item);return item;}});
  return {audio,context,buffer,sources,media,requests,finishDecodes(){for(const finish of decodes.splice(0))finish();}};
}

test('Web Audio loops the full decoded sample range repeatedly without media seeking or a new source',async()=>{
  const {audio,context,buffer,sources,media,requests}=bufferedMixer();
  const record=audio.playMusic({sound:tracks[0]});await settle();
  assert.equal(media.length,0);assert.equal(sources.length,1);assert.equal(requests.length,1);
  const source=sources[0];assert.equal(record.element.duration,buffer.duration);
  assert.equal(source.buffer,buffer);assert.equal(source.loop,true);
  assert.equal(source.loopStart,0);
  assert.ok(source.loopEnd<buffer.duration&&source.loopEnd>buffer.duration-1/32000,
    'loop end stays infinitesimally inside the boundary while including the last sample');
  assert.equal(source.playbackRate.value,1);assert.deepEqual(source.starts,[{time:0,offset:0}]);
  for(let cycle=0;cycle<6;cycle++){
    context.currentTime=buffer.duration*(cycle+1)-1/32000;audio.update(.1);
    near(record.element.currentTime,buffer.duration-1/32000);
    context.currentTime=buffer.duration*(cycle+1)+.125;audio.update(.1);
    near(record.element.currentTime,.125);
    assert.equal(record.wait,null);assert.equal(record.element.source,source);assert.equal(record.element.paused,false);
    assert.equal(audio.sounds.size,1);assert.equal(sources.length,1);assert.equal(source.starts.length,1);
  }
  audio.reset();assert.equal(source.stopped,true);
});

test('buffered music preserves its sample offset across combat and pause with no introduction replay',async()=>{
  const {audio,context,sources}=bufferedMixer();
  const ambient=audio.playMusic({sound:tracks[1]});await settle();
  context.currentTime=10.5;
  const battle=audio.playMusic({sound:combat,...fade});await settle();
  context.currentTime=12.5;audio.update(2);
  assert.equal(audio.sounds.has(ambient),false);near(audio.musicPositions.get(tracks[1]),12.5);
  near(battle.element.currentTime,2);audio.pause();
  context.currentTime=100;audio.update(50);near(battle.element.currentTime,2);
  assert.equal(battle.element.paused,true);audio.resume();await settle();
  near(battle.element.source.starts[0].offset,2);
  const returned=audio.playMusic({sound:tracks[1],...fade});await settle();
  near(returned.element.source.starts[0].offset,12.5);near(returned.element.currentTime,12.5);
  context.currentTime=102;audio.update(2);
  near(returned.element.currentTime,14.5);assert.equal(audio.sounds.size,1);
  assert.ok(sources.slice(0,-1).every(source=>source.stopped));audio.reset();
});

test('reset during a pending music decode cannot resurrect the released source or refill its cache',async()=>{
  const h=bufferedMixer({pendingDecode:true});
  const abandoned=h.audio.playMusic({sound:tracks[2]});await settle();
  assert.equal(h.requests.length,1);assert.equal(h.sources.length,0);assert.equal(h.audio.musicBufferCache.size,1);
  h.audio.reset();h.finishDecodes();await settle();
  assert.equal(h.sources.length,0);assert.equal(h.audio.sounds.size,0);assert.equal(h.audio.musicBufferCache.size,0);
  assert.equal(abandoned.element.paused,true);assert.equal(abandoned.element.output.disconnected,true);
  const fresh=h.audio.playMusic({sound:tracks[2]});await settle();
  h.finishDecodes();await settle();
  assert.equal(h.requests.length,2);assert.equal(h.sources.length,1);assert.equal(fresh.element.source,h.sources[0]);
  assert.equal(h.sources[0].starts[0].offset,0);h.audio.reset();
});

test('music decoded while paused remains silent and starts exactly once when resumed',async()=>{
  const h=bufferedMixer({pendingDecode:true});
  const record=h.audio.playMusic({sound:tracks[3]});await settle();h.audio.pause();
  h.finishDecodes();await settle();assert.equal(h.sources.length,0);assert.equal(record.element.paused,true);
  h.audio.resume();await settle();assert.equal(h.sources.length,1);assert.equal(h.sources[0].starts[0].offset,0);
  h.audio.resume();await settle();assert.equal(h.sources.length,1);h.audio.reset();
});

test('music retains at most two decoded tracks independently of the eight short-effect buffers',async()=>{
  const h=bufferedMixer();
  for(let i=0;i<9;i++){
    const effect=h.audio.play({sound:`portal-${i}.wav`,nativeFrequency:true,playbackRate:.075});await settle();h.audio.release(effect);
    assert.ok(h.audio.bufferCache.size<=8);
  }
  assert.equal(h.audio.bufferCache.size,8);assert.equal(h.audio.musicBufferCache.size,0);
  for(const sound of tracks){
    h.audio.playMusic({sound});await settle();
    assert.ok(h.audio.musicBufferCache.size<=2);assert.equal(h.audio.bufferCache.size,8);
  }
  assert.equal(h.audio.musicBufferCache.size,2);const requests=h.requests.length;
  h.audio.playMusic({sound:tracks[3]});await settle();assert.equal(h.requests.length,requests,'the other retained track is reused');
  h.audio.playMusic({sound:tracks[0]});await settle();assert.equal(h.requests.length,requests+1,'evicted music can be loaded again');
  h.audio.reset();assert.equal(h.audio.musicBufferCache.size,0);assert.equal(h.audio.bufferCache.size,0);
});
