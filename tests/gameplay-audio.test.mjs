import test from 'node:test';
import assert from 'node:assert/strict';
import {existsSync} from 'node:fs';
import {GameAudio} from '../src/audio.js';
import {GameplayAudio,PLAYER_SOUNDS,ENEMY_SOUND_PREFIXES} from '../src/gameplay-audio.js';

const setup = () => {
  const audio=new GameAudio({createAudio:src=>({src,volume:1,paused:true,play(){this.paused=false;return Promise.resolve();},pause(){this.paused=true;}})});
  audio.setLevel('lvl00a'); return {audio,router:new GameplayAudio(audio,{random:()=>0})};
};

test('shots use rcshoot1, and only actual impacts play rcshoot4',()=>{
  const {audio,router}=setup();
  router.handle({type:'attack',hit:false});
  assert.deepEqual(audio.snapshot().map(r=>r.sound),['rcshoot1.wav']);
  assert.equal(audio.snapshot()[0].volume,.6);
  audio.reset(); router.handle({type:'attack'});
  assert.deepEqual(audio.snapshot().map(r=>r.sound),['rcshoot1.wav']);
  router.handle({type:'playerProjectileImpact',position:[10,20,30]});
  assert.deepEqual(audio.snapshot().map(r=>r.sound),['rcshoot1.wav','rcshoot4.wav']);
  assert.deepEqual(audio.snapshot()[1].position,[10,20,30]);
  assert.ok(!audio.snapshot().some(r=>r.sound==='bullethitwall.wav'));
});

test('jump and pickups retain full authored gain rather than old placeholder reductions',()=>{
  const {audio,router}=setup(); router.handle({type:'jump'});router.handle({type:'pickup',sound:'ICoinM.wav'});
  assert.equal(audio.snapshot()[0].sound,'rcjump1.wav');
  for(const record of audio.snapshot())assert.equal(record.volume,.6);
});

test('health loss selects native reaction thresholds from VoiceNL and death replaces the reaction',()=>{
  const {audio,router}=setup();
  for(const [amount,sound] of [[1,'rcgen1.wav'],[10,'rcgen2.wav'],[40,'rcgen3.wav']]) {
    router.handle({type:'damage',amount,health:1});
    assert.equal(audio.snapshot().length,1);
    assert.equal(audio.snapshot()[0].sound,sound);assert.equal(audio.snapshot()[0].channel,'voices');
    assert.equal(audio.snapshot()[0].volume,.6);
  }
  audio.reset();router.handle({type:'damage',amount:1,health:0});assert.equal(audio.sounds.size,0);
  router.handle({type:'death'});assert.equal(audio.snapshot()[0].sound,'rcgen7.wav');
  assert.ok([...audio.sounds][0].element.src.startsWith('assets/voices/'));
  audio.pause();assert.equal(audio.snapshot()[0].paused,false,'The game-over menu must not suppress the death cue');
});

test('each enemy family uses native alert, attack, hurt and death samples with spatial playback',()=>{
  const {audio,router}=setup();
  for(const [actorFile,prefix] of Object.entries(ENEMY_SOUND_PREFIXES))for(const [action,suffix] of [['idle',1],['walk',1],['alert',3],['attack',4],['hurt',5],['death',6]]) {
    audio.reset();
    router.handle({type:'enemyAction',id:'enemy',actorFile,action,position:[10,20,30]});
    const records=audio.snapshot(); assert.equal(records.length,1);
    let expected=`${prefix}${suffix}.wav`;
    if(actorFile==='plant'&&action==='alert')expected='plant4.wav';
    if(actorFile==='plant'&&action==='attack')expected='plant3.wav';
    if(['idle','walk'].includes(action)&&actorFile.startsWith('bat'))expected={batg:'bafxi1.wav',baty:'baiifx1.wav',batr:'baiiifx1.wav'}[actorFile];
    assert.equal(records[0].sound,expected); assert.equal(records[0].spatial,true);
    assert.ok(existsSync(new URL(`../assets/audio/${expected}`,import.meta.url)));
  }
});

test('enemy vocal position follows its moving actor and old reactions stop',()=>{
  const {audio,router}=setup(),object={id:'spider',position:[0,0,0]},gameplay={objects:[object]};
  router.handle({type:'enemyAction',id:object.id,actorFile:'spiderg',action:'alert'},gameplay);
  const old=[...audio.sounds][0];assert.equal(old.element.volume,.6);
  object.position=[20000,0,0];audio.update(.1);
  assert.ok(old.element.volume<.01);assert.deepEqual(audio.snapshot()[0].position,object.position);
  router.handle({type:'enemyAction',id:object.id,actorFile:'spiderg',action:'hurt'},gameplay);
  assert.equal(old.element.paused,true);assert.equal(audio.sounds.size,1);
  router.handle({type:'enemyAction',id:object.id,actorFile:'spiderg',action:'walk'},gameplay);
  assert.equal(audio.snapshot()[0].sound,'spiderl5.wav','Walking must not interrupt the hurt cue');
});

test('all required player WAV files exist in the correct imported asset directory',()=>{
  for(const key of ['shot','impact','jump'])assert.ok(existsSync(new URL(`../assets/audio/${PLAYER_SOUNDS[key]}`,import.meta.url)));
  for(const sound of [...PLAYER_SOUNDS.hurt,PLAYER_SOUNDS.death])assert.ok(existsSync(new URL(`../assets/voices/${sound}`,import.meta.url)));
});
