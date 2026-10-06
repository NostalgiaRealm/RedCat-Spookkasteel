import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync,existsSync} from 'node:fs';
import {GameAudio} from '../src/audio.js';
import {GameplayAudio} from '../src/gameplay-audio.js';
import {FootstepClock,footstepSound} from '../src/locomotion-audio.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
function mixer(){return new GameAudio({createAudio:src=>({src,volume:1,currentTime:0,play(){this.paused=false;return Promise.resolve();},pause(){this.paused=true;}})});}
function boot(index){const id=`lvl0${index}a`,events=[],game=new Gameplay(json(`data/levels/${id}/level.json`),{deferInit:true,onEvent:e=>events.push(e)}),host=new ScriptHost(game,json(`data/davi/${id}.json`));for(const o of game.objects)if(o.kind==='enemy')o.enabled=false;return {game,host,events,music:game.objects.find(o=>o.entity.classname==='EffectMusic')};}

test('native door types play on actual open/close transitions, with scripted silent types respected',()=>{
  const audio=mixer(),router=new GameplayAudio(audio),game=new Gameplay({entities:[1,2,3,4,0].map(type=>({classname:'DoorModel','%name%':`door${type}`,DoorType:String(type),Origin:'0 0 0'}))},{onEvent:e=>router.handle(e,game)});
  for(const door of game.objects){game.setDoor(door,true);const expected={1:'opendoornormal.wav',2:'opendoorkey.wav',3:'opendoorsecret.wav'}[Number(door.entity.DoorType)];
    const record=audio.keyed.get(`door:${door.id}`);assert.equal(record?.name,expected);
    game.setDoor(door,true);assert.equal(audio.keyed.get(`door:${door.id}`),record);
    game.setDoor(door,false);if(expected){assert.notEqual(audio.keyed.get(`door:${door.id}`),record);assert.ok(existsSync(new URL('../assets/audio/'+expected,import.meta.url)));}
  }
});

test('both Brutus variants emit native localized attack, hurt and death voices',()=>{
  const audio=mixer(),router=new GameplayAudio(audio),game=new Gameplay({entities:[7,8].map(type=>({classname:'MovingEnemy',Type:String(type),'%name%':`brutus${type}`,Origin:'0 0 0'}))},{deferInit:true,onEvent:e=>router.handle(e,game)});
  for(const o of game.objects){for(const action of ['attack','hurt','death']){audio.reset();if(action==='attack')game.enemyAction(o,action);if(action==='hurt')game.hurtEnemy(o,.1);if(action==='death')game.destroy(o);
    const sounds=audio.snapshot();assert.equal(sounds.length,1);assert.equal(sounds[0].sound,{attack:'brin0011.wav',hurt:'brin0003.wav',death:'brin0004.wav'}[action]);assert.equal(sounds[0].channel,'voices');assert.equal(sounds[0].spatial,true);assert.ok(existsSync(new URL('../assets/voices/'+sounds[0].sound,import.meta.url)));}
  }
});

test('native footfall cadence scales with movement and preserves normal/liquid sound slots',()=>{
  const steps=new FootstepClock(),running=steps.update(1,{speed:4.9,grounded:true});assert.deepEqual(running,['rcwalk1.wav','rcwalk2.wav']);
  assert.deepEqual(steps.update(1,{speed:0,grounded:true}),[]);assert.deepEqual(steps.update(1,{speed:4.9,grounded:false}),[]);assert.deepEqual(steps.update(1,{speed:4.9,grounded:true,enabled:false}),[]);
  assert.equal(new FootstepClock().update(1,{speed:3,grounded:true}).length,1);
  assert.equal(footstepSound(1,0x10000),'rcwalk1.wav');assert.equal(footstepSound(1,0x20000),'rcwalk1.wav');assert.equal(footstepSound(0,0x10000,true),'rclwater.wav');assert.equal(footstepSound(1,0x10000,true),'rcrwater.wav');assert.equal(footstepSound(1,0x30000,true),'rcwalk1.wav');
});

test('footstep router uses actual ground movement and rejects walls, platforms, flight and teleport jumps',()=>{
  const audio=mixer(),router=new GameplayAudio(audio),game={state:{health:10},scripts:{cutscene:false},liquidModels:new Set(),settings:{game:{}}},world={player:{position:[0,0,0],grounded:true},collider:{contents:()=>0}};
  router.update(1,world,game,{forward:1});world.player.position[0]=156.8;router.update(1,world,game,{forward:1});assert.ok([...audio.sounds].some(record=>record.group==='player:step'));audio.reset();
  router.update(1,world,game,{forward:1});assert.equal(audio.sounds.size,0);
  world.player.position[0]+=156.8;router.update(1,world,game,{});assert.equal(audio.sounds.size,0);
  world.player.noClip=true;world.player.position[0]+=156.8;router.update(1,world,game,{forward:1});assert.equal(audio.sounds.size,0);
  world.player.noClip=false;world.player.position[0]+=3000;router.update(1,world,game,{forward:1});assert.equal(audio.sounds.size,0);
});

test('water footsteps overlap without clipping their tails and finish independently after pausing or stopping',()=>{
  const audio=mixer(),router=new GameplayAudio(audio);
  const game={state:{health:10},scripts:{cutscene:false},liquidModels:new Set(),settings:{game:{}}};
  const world={yaw:0,player:{position:[0,0,0],stepDisplacement:98.784,grounded:true},collider:{contents:()=>0x10000}};
  router.update(.45,world,game,{forward:1});
  const first=[...audio.sounds][0];assert.equal(first.name,'rclwater.wav');
  // Native water WAVs last 717/777ms, longer than the roughly 449ms stride.
  first.element.currentTime=.45;
  router.update(.45,world,game,{forward:1});
  assert.deepEqual(audio.snapshot().map(record=>record.sound),['rclwater.wav','rcrwater.wav']);
  const second=[...audio.sounds][1];
  assert.equal(first.element.paused,false);assert.equal(first.element.currentTime,.45);
  assert.equal(first.loop,false);assert.equal(second.loop,false);
  audio.pause();assert.ok([...audio.sounds].every(record=>record.element.paused));
  audio.resume();assert.ok([...audio.sounds].every(record=>!record.element.paused));
  assert.equal(first.element.currentTime,.45,'resuming preserves the unfinished splash');
  const phase={...game.footstepState};world.player.stepDisplacement=0;
  router.update(1,world,game,{});
  assert.deepEqual(game.footstepState,phase);assert.equal(audio.sounds.size,2);
  assert.equal(first.element.paused,false,'stopping movement does not stop a recording already playing');
  first.element.onended();assert.equal(audio.sounds.size,1);assert.equal(second.element.paused,false);
  second.element.onended();assert.equal(audio.sounds.size,0);
});

test('every level selects authored ambient/action/special slots and recovers after the final ordinary threat',()=>{
  for(let i=0;i<5;i++){const {game,host,music,events}=boot(i),enemy=game.objects.find(o=>o.kind==='enemy'&&!['brutusm','brutusb','maxd','maxj','witch'].includes(o.enemyType));host.selectMusic(music,'ambient');
    enemy.enabled=true;enemy.alerted=true;if(enemy.ambush)enemy.ambush.phase='awake';host.update(.05);assert.equal(host.musicState.mode,'action');assert.equal(host.musicState.sound,i<3?'Endbosses.wav':'spookkort3.wav');
    const boss={id:'test-boss',entity:{classname:'MovingEnemy'},kind:'enemy',enemyType:'brutusm',enabled:true,health:10};game.objects.push(boss);host.objectEnabled(boss,true,true);host.update(.05);assert.equal(host.musicState.mode,'special');assert.equal(host.musicState.sound.toLowerCase(),'endbosses.wav');
    boss.health=0;host.enemyDefeated(boss);assert.equal(host.musicState.mode,'action');enemy.alerted=false;host.update(.05);assert.equal(host.musicState.mode,'ambient');assert.equal(host.musicState.sound,music.entity.MusicAmbient);
    host.callMethod(host.resolveObject(music.entity.DaviName),'StopPlaying');const count=events.length;host.update(1);assert.equal(events.length,count);assert.equal(host.musicState.stop,true);
    assert.ok(events.some(e=>e.crossFade&&e.fadeInTimeSeconds===2&&e.fadeOutTimeSeconds===2));
  }
});

test('music crossfades preserve same-file playback, pause correctly and stop every fading layer',()=>{
  const audio=mixer();const first=audio.playMusic({sound:'endbosses.wav'});first.element.currentTime=12;
  assert.equal(audio.playMusic({sound:'Endbosses.wav',id:'muziek'}),first);assert.equal(first.element.currentTime,12);
  const next=audio.playMusic({sound:'spookkort3.wav',crossFade:true,fadeInTimeSeconds:2,fadeOutTimeSeconds:2});assert.equal(audio.sounds.size,2);assert.equal(next.element.volume,0);
  audio.update(1);const halfway=next.element.volume;assert.ok(halfway>0);audio.pause();audio.update(1);assert.equal(next.element.volume,halfway);audio.resume();audio.update(1);assert.equal(audio.sounds.size,1);assert.equal(first.element.paused,true);
  audio.playMusic({sound:'endbosses.wav',crossFade:true,fadeInTimeSeconds:2,fadeOutTimeSeconds:2});audio.playMusic({stop:true});assert.equal(audio.sounds.size,0);
});

test('saved Action and Special modes remain distinct when both use Endbosses.wav',()=>{
  for(const mode of ['action','special']){const {game,host,music}=boot(0);host.selectMusic(music,mode);const snapshot=host.snapshot();
    // The original forest boss is not dead in this pre-fight save.
    const restored=boot(0);restored.host.restore(snapshot);assert.equal(restored.host.musicState.mode,mode);assert.equal(restored.host.musicState.sound,'Endbosses.wav');
  }
});
