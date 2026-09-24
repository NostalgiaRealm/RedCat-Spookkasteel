import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {GameAudio,nativeGainToAmplitude,distanceGain} from '../src/audio.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const makeAudio=()=>new GameAudio({createAudio:()=>({volume:1,paused:true,play(){this.paused=false;return Promise.resolve();},pause(){this.paused=true;}})});
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-10,`${a} != ${b}`);

test('all positioned castle emitters including non-3D bridge/lift sounds fall silent at 25 metres',()=>{
  const audio=makeAudio();audio.setLevel('lvl01a');
  const game=new Gameplay(json('data/levels/lvl01a/level.json'),{deferInit:true,onEvent:e=>{
    if(e.type==='scriptSound')audio.play({...e,key:e.id});
  }}),host=new ScriptHost(game,{version:27});
  const emitters=game.objects.filter(o=>o.entity.classname==='EffectSound');assert.equal(emitters.length,14);
  for(const obj of emitters){
    host.sound(obj,true);const record=audio.keyed.get(obj.id);
    const gains=[];
    for(const metres of [0,5,10,15,20,24.9,25,100]){
      audio.update(0,obj.position.map((v,i)=>v+(i===0?metres*32:0)));gains.push(record.element.volume);
    }
    assert.ok(gains[0]>0,obj.entity.DaviName);near(gains[1],gains[0]);
    for(let i=2;i<=5;i++)assert.ok(gains[i]>0&&gains[i]<gains[i-1]);
    assert.equal(gains[6],0);assert.equal(gains[7],0);
  }
});
test('moving castle emitters use their current position and preserve channel/script/master gains',()=>{
  const audio=makeAudio();audio.setLevel('lvl01a');let position=[0,0,0];
  const r=audio.play({sound:'castle2.wav',sourceId:'rolling',loop:true,spatial:true,position:()=>position});
  const full=r.element.volume;audio.setScriptVolume('rolling',.5);near(r.element.volume,full*nativeGainToAmplitude(.5));
  audio.setMaster(.3);near(r.element.volume,full*nativeGainToAmplitude(.5)/2);
  position=[800,0,0];audio.update(0);assert.equal(r.element.volume,0);
  for(const options of [{channel:'voices',position:[0,0,0],spatial:true},{channel:'music',position:[0,0,0],spatial:true},{channel:'effects'}]){
    const other=audio.play({sound:'test.wav',...options});
    near(other.distanceGain,options.position?distanceGain(audio.listener,options.position,audio.spatial):1);
  }
});
test('tower torch and cauldron fire retain authored locations, are quieter nearby and silent beyond18m',()=>{
  const audio=makeAudio();audio.setLevel('lvl04a');
  const fire=json('data/levels/lvl04a/level.json').entities.filter(e=>e.classname==='EffectSound'&&/lv4snd16/i.test(e.SoundFileName));
  assert.equal(fire.length,10);assert.ok(fire.some(e=>e.DaviName==='vuur'));
  for(const e of fire){
    const position=e.Origin.split(' ').map(Number),r=audio.play({sound:e.SoundFileName,spatial:true,loop:true,position});
    audio.update(0,position);near(r.element.volume,.6*nativeGainToAmplitude(r.authoredGain*.65));
    audio.update(0,[position[0]+18*32,position[1],position[2]]);assert.equal(r.element.volume,0);
  }
  const bubbles=audio.play({sound:'lv4snd15.wav',spatial:true,loop:true,position:[0,0,0]});
  near(bubbles.distanceGain,distanceGain(audio.listener,[0,0,0],audio.spatial));
});
