import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Vector3} from 'three';
import {GameAudio} from '../src/audio.js';
import {GameplayAudio} from '../src/gameplay-audio.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {WorldEffects} from '../src/world-effects.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
class Media {
  constructor(url){this.src=url;this.paused=true;this.currentTime=0;this.plays=0;}
  play(){this.paused=false;this.plays++;return Promise.resolve();}
  pause(){this.paused=true;}
  end(){this.paused=true;this.onended?.();}
}
const mixer=()=>new GameAudio({createAudio:url=>new Media(url)});
function boot(id='lvl00a',audio=mixer()) {
  const events=[],game=new Gameplay(json(`data/levels/${id}/level.json`),{deferInit:true,onEvent:event=>{
    events.push(event);
    if(event.type==='scriptSound'&&event.id?.startsWith('fairy:')) {
      if(event.stop)audio.stop('effect:'+event.id);else audio.play({...event,key:'effect:'+event.id,sourceId:event.id});
    }
  }});
  const host=new ScriptHost(game,json(`data/davi/${id}.json`),{motions:json(`data/motions/${id}.json`),dialogue:json('data/dialogue/nl.json'),isDialoguePlaying:()=>audio.dialoguePending});
  const effects=new WorldEffects({camera:{position:new Vector3()}},game,{});effects.pointLights=[];
  effects.entries=new Map([...effects.entries].filter(([,s])=>s.object.kind==='fairy'));
  host.initialize();return {game,host,effects,audio,events};
}

test('dialogue FIFO preserves every WAV through delayed loading, pause, expiry and final completion',()=>{
  const audio=mixer(),starts=[],ends=[];
  for(const voice of ['flgen1.wav','flgen2.wav','rcgen44.wav'])audio.queueDialogue({voice},{onStart:e=>starts.push(e.voice),onEnd:e=>ends.push(e.voice)});
  const first=audio.keyed.get('voice');first.element.currentTime=1.25;
  audio.update(300);assert.equal(first.element.paused,false);assert.equal(audio.dialogueQueue.length,2);
  audio.pause();audio.update(100);assert.equal(first.element.currentTime,1.25);assert.equal(first.element.paused,true);
  audio.resume();assert.equal(first.element.currentTime,1.25);assert.deepEqual(starts,['flgen1.wav']);
  first.element.end();assert.deepEqual(ends,['flgen1.wav']);assert.deepEqual(starts,['flgen1.wav','flgen2.wav']);
  audio.keyed.get('voice').element.end();audio.keyed.get('voice').element.end();
  assert.deepEqual(ends,['flgen1.wav','flgen2.wav','rcgen44.wav']);assert.equal(audio.dialoguePending,false);
});

test('pause covers every playing channel and pending sound, preserving delayed-loop countdowns',()=>{
  const audio=mixer();
  const records=[audio.play({sound:'ipotion.wav'}),audio.play({sound:'rcgen7.wav',channel:'voices',pauseWithGame:false}),audio.play({sound:'level.wav',channel:'music',loop:true})];
  const delayed=audio.play({sound:'forest1.wav',loop:true,minReplayDelay:3,maxReplayDelay:3});delayed.element.end();
  records.forEach((r,i)=>r.element.currentTime=.2+i);audio.pause();
  const pending=audio.play({sound:'idlefee1.wav',loop:true});audio.update(20);
  assert.ok([...audio.sounds].every(r=>r.element.paused));assert.equal(delayed.wait,3);assert.equal(pending.element.plays,0);
  audio.resume();assert.deepEqual(records.map(r=>r.element.currentTime),[.2,1.2,2.2]);assert.equal(pending.element.plays,1);assert.equal(delayed.element.plays,1);
});

test('explicit dialogue skip and reset remove queued tails; playback errors cannot stall a sequence',async()=>{
  const audio=mixer();audio.queueDialogue({voice:'flgen1.wav'});audio.queueDialogue({voice:'flgen2.wav'});
  const late=audio.keyed.get('voice').element.onended;audio.stopDialogue();late();audio.resume();assert.equal(audio.sounds.size,0);assert.equal(audio.dialoguePending,false);
  audio.queueDialogue({voice:'flgen1.wav'});audio.queueDialogue({voice:'flgen2.wav'});audio.keyed.get('voice').element.onerror();assert.equal(audio.keyed.get('voice').name,'flgen2.wav');
  audio.reset();assert.equal(audio.dialoguePending,false);
  const rejecting=new GameAudio({createAudio:url=>{const media=new Media(url);if(url.includes('bad'))media.play=()=>Promise.reject(new Error('decode'));return media;}});
  rejecting.queueDialogue({voice:'bad.wav'});rejecting.queueDialogue({voice:'flgen2.wav'});await Promise.resolve();
  assert.equal(rejecting.keyed.get('voice').name,'flgen2.wav');
});

test('all 31 authored fairy locations activate exactly their own Davi binding and stop their idle on deactivation',()=>{
  let count=0;
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const {game,host,effects,audio}=boot(id),fairies=game.objects.filter(o=>o.kind==='fairy');
    assert.ok(fairies.every(o=>!o.enabled),`${id}: later encounters are dormant at startup`);
    for(const object of fairies) {
      const binding=host.resolveObject(object.entity.DaviName);assert.deepEqual(host.targets(binding),[object]);
      host.callMethod(binding,'Enable');effects.update(.05);
      assert.deepEqual(fairies.filter(o=>o.enabled).map(o=>o.id),[object.id]);
      assert.deepEqual([...effects.entries.values()].filter(s=>s.fairyGeometry?.light).map(s=>s.object.id),[object.id]);
      assert.deepEqual(audio.snapshot().filter(s=>s.loop).map(s=>s.sourceId),[`fairy:${object.id}:idlefee1.wav`]);
      host.callMethod(binding,'Disable');effects.update(.05);
      assert.equal(audio.snapshot().filter(s=>s.loop).length,0);
      assert.equal(audio.snapshot().filter(s=>s.sound==='gri5fx11.wav').length,0);
      effects.finishSkippedFairies(new Set([object.id]));assert.equal(audio.sounds.size,0);count++;
    }
  }
  assert.equal(count,31);
});

test('native cutscene finish waits for the actual voice end and keeps its fairy present; skip stays immediate',()=>{
  const {game,host,effects,audio}=boot(),object=game.find('fairy2')[0];
  host.callNative('StartCutScene');host.callMethod(host.resolveObject('fairy2'),'Enable');
  audio.queueDialogue({voice:'flgen1.wav'});effects.update(.05);
  for(let i=0;i<45;i++)effects.update(.25);
  assert.equal(object.enabled,true);host.callNative('StopCutScene');assert.equal(host.cutscene,true);
  audio.keyed.get('voice').element.end();host.update(.05);effects.update(.05);
  assert.equal(host.cutscene,false);assert.equal(object.enabled,false);
  host.callNative('StartCutScene');audio.queueDialogue({voice:'flgen2.wav'});host.callNative('StopCutScene');assert.equal(host.skipCutscene(),true);
});

test('a second fairy encounter replaces the first and legacy saves keep only the fairy at the saved player',()=>{
  const {game,host,effects,audio}=boot(),first=game.find('fairy11')[0],next=game.find('fairy2')[0];
  host.callMethod(host.resolveObject('fairy11'),'Enable');effects.update(.05);
  host.callMethod(host.resolveObject('fairy2'),'Enable');effects.update(.05);
  assert.equal(first.enabled,false);assert.equal(next.enabled,true);
  assert.deepEqual(audio.snapshot().filter(s=>s.loop).map(s=>s.sourceId),[`fairy:${next.id}:idlefee1.wav`]);
  assert.deepEqual([...effects.entries.values()].filter(s=>s.fairyGeometry?.light).map(s=>s.object.id),[next.id]);
  first.enabled=true;host.normalizeFairies(undefined);assert.equal(first.enabled,true,'never guess from a missing saved position');
  host.normalizeFairies([...next.position]);assert.equal(first.enabled,false);assert.equal(next.enabled,true);assert.equal(first.effectAge,0);
});

test('pickup router selects complete native S/M/L recordings and overlapping pickups keep separate tails',()=>{
  const audio=mixer(),router=new GameplayAudio(audio),game={objects:[]};
  for(const subtype of ['coin','health'])for(let type=1;type<=3;type++) {
    const object={id:`${subtype}${type}`,subtype,entity:{Type:String(type)}};game.objects.push(object);
    router.handle({type:'pickup',id:object.id,sound:subtype==='coin'?'ICoinM.wav':'IHealthM.wav'},game);
  }
  assert.deepEqual(audio.snapshot().map(s=>s.sound),['icoins.wav','icoinm.wav','icoinl.wav','ihealths.wav','ihealthm.wav','ihealthl.wav']);
  assert.equal(audio.sounds.size,6);assert.ok([...audio.sounds].every(r=>!r.element.paused));
  [...audio.sounds][0].element.end();assert.equal(audio.sounds.size,5);
});

test('BIG BENG charge sound follows its native hold, pause and release lifetime',()=>{
  const audio=mixer(),router=new GameplayAudio(audio);
  router.handle({type:'player-charge',active:true});const record=audio.keyed.get('player:charge');
  assert.equal(record.name,'rcshoot3.wav');assert.equal(record.loop,true);
  record.element.currentTime=.4;audio.pause();assert.equal(record.element.paused,true);
  audio.resume();assert.equal(record.element.currentTime,.4);router.handle({type:'player-charge',active:false});
  assert.equal(audio.sounds.size,0);audio.resume();assert.equal(record.element.paused,true);
  const game={playerCharge:{age:.7},state:{health:10},settings:{game:{}}},world={player:{position:[0,0,0]}};
  router.update(.05,world,game);assert.equal(audio.keyed.get('player:charge').name,'rcshoot3.wav');
  router.update(.05,world,game);assert.equal(audio.sounds.size,1);
  game.playerCharge=null;router.update(.05,world,game);assert.equal(audio.sounds.size,0);
});

test('level-transition pickup guard waits for every ending, freezes with pause, and clears on failure or reset',()=>{
  const audio=mixer(),router=new GameplayAudio(audio);
  audio.play({sound:'forest1.wav',loop:true});assert.equal(audio.pickupsPending,false);
  router.handle({type:'pickup',sound:'IMirror.wav'});router.handle({type:'pickup',sound:'IPotion.wav'});
  const pickups=[...audio.sounds].filter(record=>record.group==='pickup');
  assert.equal(pickups.length,2);assert.equal(audio.pickupsPending,true);
  audio.pause();audio.update(30);assert.equal(audio.pickupsPending,true);assert.ok(pickups.every(record=>record.element.paused));
  audio.resume();pickups[0].element.end();assert.equal(audio.pickupsPending,true);
  pickups[1].element.onerror();assert.equal(audio.pickupsPending,false);
  router.handle({type:'pickup',sound:'IMirror.wav'});assert.equal(audio.pickupsPending,true);
  audio.reset();assert.equal(audio.pickupsPending,false);
});
