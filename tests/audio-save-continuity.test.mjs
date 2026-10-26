import test from 'node:test';
import assert from 'node:assert/strict';
import {GameAudio} from '../source/audio.js';

const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-10,`${a} != ${b}`);
const roundtrip=value=>JSON.parse(JSON.stringify(value));
const settle=()=>new Promise(resolve=>setImmediate(resolve));
class Media {
  constructor(src,{pending=false}={}){this.src=src;this.paused=true;this.time=0;this.duration=100;this.readyState=pending?0:4;this.starts=[];this.needsMetadata=pending;}
  set currentTime(time){if(this.needsMetadata)throw new Error('metadata pending');this.time=time;}
  get currentTime(){return this.time;}
  play(){this.paused=false;this.starts.push(this.time);return Promise.resolve();}
  pause(){this.paused=true;}
  ready(){this.needsMetadata=false;this.readyState=4;this.onloadedmetadata?.();}
  end(){this.paused=true;this.onended?.();}
}
function mixer(options={}) {
  const media=[];
  const audio=new GameAudio({createContext:()=>null,createAudio:src=>{const item=new Media(src,options);media.push(item);return item;},random:()=>.5});
  audio.setLevel('lvl02a');return {audio,media};
}

test('restores music layers, native fade phase and remembered tracks without changing scheduling',()=>{
  const {audio}=mixer();audio.playMusic({sound:'ambient.wav'}).element.currentTime=62;
  const fight=audio.playMusic({sound:'combat.wav',crossFade:true,fadeInTimeSeconds:2,fadeOutTimeSeconds:2});
  fight.element.currentTime=8;audio.update(.7);audio.musicPositions.set('earlier.wav',27);
  const saved=roundtrip(audio.saveState()),{audio:loaded}=mixer();
  loaded.pause();loaded.playMusic({sound:'combat.wav'});
  assert.equal(loaded.restoreState(saved),true);assert.equal(loaded.sounds.size,2);
  for(const name of ['ambient.wav','combat.wav']) {
    const before=[...audio.sounds].find(record=>record.name===name),after=[...loaded.sounds].find(record=>record.name===name);
    near(before.element.currentTime,after.element.currentTime);assert.deepEqual(before.fade,after.fade);near(before.fadeGain,after.fadeGain);
    assert.equal(after.element.paused,true);assert.equal(after.element.starts.length,0);
  }
  assert.equal(loaded.keyed.get('music').name,'combat.wav');assert.equal(loaded.musicPositions.get('earlier.wav'),27);
  loaded.resume();audio.update(.5);loaded.update(.5);
  near(audio.keyed.get('music').element.volume,loaded.keyed.get('music').element.volume);
  const returned=loaded.playMusic({sound:'ambient.wav',crossFade:true,fadeInTimeSeconds:2,fadeOutTimeSeconds:2});
  assert.equal(returned.element.currentTime,62);assert.equal(loaded.sounds.size,2);
  loaded.update(2);assert.equal(loaded.sounds.size,1);
});

test('restores overlapping pickup tails, keyed effects and delayed replay countdown without rerandomizing',()=>{
  const {audio}=mixer();
  audio.play({sound:'icoinl.wav',group:'pickup'}).element.currentTime=.31;
  audio.play({sound:'icoinl.wav',group:'pickup'}).element.currentTime=.11;
  const loop=audio.play({sound:'forest1.wav',key:'effect:birds',sourceId:'birds',loop:true,minReplayDelay:5,maxReplayDelay:11});
  loop.element.end();audio.update(2);assert.equal(loop.wait,6);
  const position=[1,2,3];audio.play({sound:'gargoyl5.wav',key:'enemy:one',sourceId:'one',position:()=>position,spatial:true}).element.currentTime=.21;
  const {audio:loaded}=mixer(),live=[3,4,5];loaded.pause();
  loaded.play({sound:'forest1.wav',key:'effect:birds',sourceId:'birds',loop:true});
  let resolverCalls=0;loaded.restoreState(roundtrip(audio.saveState()),{positionForSource:id=>{assert.equal(id,'one');resolverCalls++;return ()=>live;}});
  assert.equal(resolverCalls,1);assert.equal(loaded.pickupsPending,true);
  assert.deepEqual([...loaded.sounds].filter(record=>record.group==='pickup').map(record=>record.element.currentTime),[.31,.11]);
  assert.equal(loaded.keyed.get('effect:birds').wait,6);loaded.resume();
  assert.equal(loaded.keyed.get('effect:birds').element.starts.length,0);
  loaded.update(5.9);assert.equal(loaded.keyed.get('effect:birds').element.starts.length,0);
  loaded.update(.11);assert.equal(loaded.keyed.get('effect:birds').element.starts.length,1);
  assert.equal(loaded.keyed.get('effect:birds').element.currentTime,0);
  live[0]=55;loaded.update(0);assert.deepEqual(loaded.keyed.get('enemy:one').currentPosition,[55,4,5]);
});

test('restored dialogue keeps active offset and FIFO; reconstruction and stale callbacks never duplicate lines',()=>{
  const {audio}=mixer();for(const voice of ['one.wav','two.wav','three.wav'])audio.queueDialogue({voice,text:voice});
  audio.keyed.get('voice').element.currentTime=2.7;
  const {audio:loaded}=mixer(),starts=[],ends=[];loaded.pause();loaded.queueDialogue({voice:'three.wav'});
  const stale=loaded.keyed.get('voice').element.onended;
  loaded.restoreState(roundtrip(audio.saveState()),{onDialogueStart:event=>starts.push(event.voice),onDialogueEnd:(event,reason)=>{if(reason!=='restored')ends.push(event.voice);}});
  assert.deepEqual(starts,['one.wav']);assert.equal(loaded.keyed.get('voice').element.currentTime,2.7);
  assert.equal(loaded.dialogueQueue.length,2);stale();assert.equal(loaded.dialogueQueue.length,2);
  loaded.resume();assert.deepEqual(loaded.keyed.get('voice').element.starts,[2.7]);
  loaded.keyed.get('voice').element.end();loaded.keyed.get('voice').element.end();loaded.keyed.get('voice').element.end();
  assert.deepEqual(starts,['one.wav','two.wav','three.wav']);assert.deepEqual(ends,starts);assert.equal(loaded.dialoguePending,false);
  loaded.restoreState(roundtrip(audio.saveState()));loaded.stopDialogue();loaded.resume();assert.equal(loaded.dialoguePending,false);
});

test('metadata-delayed seeks never play an introduction and respect pause/reset while pending',()=>{
  const {audio}=mixer();audio.play({sound:'door.wav',key:'door'}).element.currentTime=1.8;
  const saved=roundtrip(audio.saveState()),{audio:loaded,media}=mixer({pending:true});
  loaded.restoreState(saved);const record=loaded.keyed.get('door');assert.equal(record.pendingStartTime,1.8);assert.equal(media[0].starts.length,0);
  loaded.pause();media[0].ready();assert.equal(media[0].starts.length,0);loaded.resume();assert.deepEqual(media[0].starts,[1.8]);
  const {audio:cancelled,media:pending}=mixer({pending:true});cancelled.restoreState(saved);const late=pending[0].onloadedmetadata;
  cancelled.reset();pending[0].needsMetadata=false;late();assert.equal(pending[0].starts.length,0);
});

test('immediate saves retain a pending seek even when HAVE_NOTHING accepts it but reports zero',()=>{
  const {audio}=mixer();audio.playMusic({sound:'ambient.wav'}).element.currentTime=47.5;
  const {audio:loaded,media}=mixer({pending:true});
  loaded.createAudio=src=>{
    const element=new Media(src,{pending:true});
    Object.defineProperty(element,'currentTime',{get(){return this.needsMetadata?0:this.time;},set(time){if(!this.needsMetadata)this.time=time;}});
    media.push(element);return element;
  };
  loaded.pause();loaded.restoreState(roundtrip(audio.saveState()));
  assert.equal(media[0].currentTime,0);assert.equal(loaded.saveState().sounds[0].currentTime,47.5);
  loaded.resume();assert.equal(media[0].starts.length,0);media[0].ready();assert.deepEqual(media[0].starts,[47.5]);
  loaded.restoreState(roundtrip(audio.saveState()));loaded.playMusic({sound:'combat.wav'});
  assert.equal(loaded.musicPositions.get('ambient.wav'),47.5);
});

test('a restored replay delay may expire before metadata without seeking errors or an early replay',()=>{
  const {audio}=mixer(),record=audio.play({sound:'forest1.wav',loop:true,minReplayDelay:1});
  record.element.currentTime=100;record.element.end();
  const {audio:loaded,media}=mixer({pending:true});loaded.restoreState(roundtrip(audio.saveState()));
  loaded.update(2);assert.equal(media[0].starts.length,0);assert.equal([...loaded.sounds][0].pendingStartTime,0);
  media[0].ready();assert.deepEqual(media[0].starts,[0]);
});

test('legacy/cross-level states leave reconstructed playback untouched; malformed entries are bounded',()=>{
  const {audio}=mixer(),original=audio.playMusic({sound:'ambient.wav'});
  assert.equal(audio.restoreState(undefined),false);assert.equal(audio.restoreState({version:1,level:'lvl00a',sounds:[],dialogue:[]}),false);
  assert.equal(audio.keyed.get('music'),original);
  const bad={version:1,level:'lvl02a',sounds:[null,{sound:'bad.wav',channel:'other'},...Array.from({length:600},()=>({sound:'forest1.wav',key:'single',channel:'effects',loop:true,currentTime:Infinity,fadeGain:-2,wait:-4}))],dialogue:[null,{event:{voice:14}}]};
  audio.restoreState(bad);assert.equal(audio.sounds.size,1);assert.equal(audio.dialoguePending,false);
  assert.equal(audio.keyed.get('single').element.currentTime,0);assert.equal(audio.keyed.get('single').wait,0);
  assert.ok(JSON.stringify(audio.saveState()).length<2000);
});

function bufferedMixer({pending=false}={}) {
  const sources=[],loads=[],node=()=>({gain:{value:1},connect(){},disconnect(){}});
  const context={state:'running',currentTime:0,destination:node(),createGain:node,resume:async()=>{},
    decodeAudioData:async()=>({duration:10}),createBufferSource(){const source={...node(),playbackRate:{value:1},start(time,offset){this.offset=offset;},stop(){this.stopped=true;}};sources.push(source);return source;}};
  const audio=new GameAudio({createContext:()=>context,fetchAudio:()=>{const response={ok:true,arrayBuffer:async()=>new ArrayBuffer(8)};return pending?new Promise(resolve=>loads.push(()=>resolve(response))):Promise.resolve(response);}});
  audio.setLevel('lvl02a');return {audio,context,sources,finish(){for(const load of loads.splice(0))load();}};
}
test('decoded WAV voices restore offsets across decode, pause and cancellation without stale playback',async()=>{
  const before=bufferedMixer();before.audio.play({sound:'icoinl.wav',group:'pickup'});await settle();before.context.currentTime=.2;
  before.audio.playMusic({sound:'combat.wav'});await settle();before.context.currentTime=3.7;
  const saved=roundtrip(before.audio.saveState()),after=bufferedMixer({pending:true});after.audio.restoreState(saved);
  assert.equal(after.sources.length,0);after.audio.pause();after.finish();await settle();assert.equal(after.sources.length,0);
  after.audio.resume();await settle();assert.equal(after.sources.length,2);
  near(after.sources[0].offset,3.7);near(after.sources[1].offset,3.5);
  const cancelled=bufferedMixer({pending:true});cancelled.audio.restoreState(saved);cancelled.audio.reset();cancelled.finish();await settle();assert.equal(cancelled.sources.length,0);
});

test('one-shots saved at EOF complete once without replaying the file on either audio backend',async()=>{
  const {audio}=mixer(),record=audio.play({sound:'icoinl.wav',group:'pickup'});record.element.currentTime=record.element.duration;
  const {audio:loaded,media}=mixer();loaded.restoreState(roundtrip(audio.saveState()));
  assert.equal(loaded.pickupsPending,false);assert.equal(media[0].starts.length,0);
  const before=bufferedMixer();before.audio.play({sound:'icoinl.wav',group:'pickup'});await settle();before.context.currentTime=10;
  const after=bufferedMixer();after.audio.restoreState(roundtrip(before.audio.saveState()));await settle();
  assert.equal(after.sources.length,0);assert.equal(after.audio.pickupsPending,false);
  audio.queueDialogue({voice:'ended.wav',text:'finished'});audio.keyed.get('voice').element.currentTime=100;
  const subtitles=[];loaded.restoreState(roundtrip(audio.saveState()),{onDialogueStart:()=>subtitles.push('show'),onDialogueEnd:(_event,reason)=>{if(reason!=='restored')subtitles.push('hide');}});
  assert.deepEqual(subtitles,['show','hide']);assert.equal(loaded.dialoguePending,false);
});

test('matching reconstructed moving emitter binding survives playback restoration',()=>{
  const {audio}=mixer();audio.play({sound:'idlefee1.wav',key:'effect:fairy:one',position:()=>[1,2,3],loop:true});
  const {audio:loaded}=mixer(),current=[8,9,10];loaded.pause();loaded.play({sound:'idlefee1.wav',key:'effect:fairy:one',position:()=>current,loop:true});
  loaded.restoreState(roundtrip(audio.saveState()));current[0]=15;loaded.update(0);
  assert.deepEqual(loaded.keyed.get('effect:fairy:one').currentPosition,[15,9,10]);
});
