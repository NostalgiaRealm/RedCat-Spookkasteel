import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {GameAudio, distanceGain, nativeGainToAmplitude} from '../src/audio.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';

class FakeAudio {
  constructor() { this.paused=true; this.volume=1; }
  play() { this.paused=false; return Promise.resolve(); }
  pause() { this.paused=true; }
}
const makeAudio=()=>new GameAudio({createAudio:()=>new FakeAudio()});
const json=path=>JSON.parse(readFileSync(new URL(path,import.meta.url)));
const level=json('../data/levels/lvl03a/level.json');
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-10,`${a} != ${b}`);

test('all cave environmental loops fade smoothly within their section and are silent at 30 metres',()=>{
  const audio=makeAudio();audio.setLevel('lvl03a');
  for(const sound of [...new Set(level.entities.filter(e=>e.classname==='EffectSound'&&e.Replay==='1'&&e.Use3DSound==='1').map(e=>e.SoundFileName))]){
    const r=audio.play({sound,loop:true,spatial:true,position:[0,0,0]});
    const gains=[];
    for(const metres of [0,5,10,15,20,25,29.9,30,100]){
      audio.update(0,[32*metres,0,0]);gains.push(r.element.volume);
    }
    near(gains[0],.6*nativeGainToAmplitude(r.authoredGain));near(gains[1],gains[0]);
    for(let i=2;i<7;i++)assert.ok(gains[i]>0&&gains[i]<gains[i-1]);
    assert.ok(gains[3]>gains[0]*.4,'audible within the nearby section');
    assert.ok(gains[6]<.00001,'approaches silence before the boundary');
    assert.equal(gains[7],0);assert.equal(gains[8],0);
  }
});

test('shorter range preserves script/master volume and leaves unrelated sounds and other levels native',()=>{
  const audio=makeAudio();audio.setLevel('lvl03a');
  let position=[0,0,0];
  const wind=audio.play({sound:'gravey3.wav',sourceId:'wind',spatial:true,loop:true,position:()=>position});
  audio.update(0,[480,0,0]);const full=wind.element.volume;
  audio.setScriptVolume('wind',.5);near(wind.element.volume,full*nativeGainToAmplitude(.5));
  audio.setMaster(.3);near(wind.element.volume,full*nativeGainToAmplitude(.5)/2);
  position=[-1000,0,0];audio.update(0);assert.equal(wind.element.volume,0);
  for(const options of [{sound:'gravey3.wav',loop:false},{sound:'gravey3.wav',loop:true,channel:'voices'},{sound:'gravey3.wav',loop:true,channel:'music'}]){
    const r=audio.play({spatial:true,position:[0,0,0],...options});
    near(r.distanceGain,distanceGain(audio.listener,[0,0,0],audio.spatial));
  }
  const flat=audio.play({sound:'gravey3.wav',loop:true,spatial:false,position:[-5000,0,0]});near(flat.distanceGain,1);
  audio.setLevel('lvl02a');audio.update(0);near(wind.distanceGain,distanceGain(audio.listener,position,audio.spatial));
});

test('authored cave sound activation and save restoration retain the shorter range',()=>{
  function boot(save){
    const audio=makeAudio();audio.setLevel(level.id);
    const game=new Gameplay(level,{deferInit:true,save,onEvent:e=>{
      if(e.type==='scriptSound'){if(e.stop)audio.stop(e.id);else audio.play({...e,key:e.id,sourceId:e.id});}
      if(e.type==='scriptVolume')audio.setScriptVolume(e.id,e.volume);
    }});
    const host=new ScriptHost(game,json('../data/davi/lvl03a.json'),{motions:json('../data/motions/lvl03a.json'),dialogue:json('../data/dialogue/nl.json')});
    host.initialize(save?.scripts);return {audio,game,host};
  }
  const first=boot(),names=level.entities.filter(e=>e.classname==='EffectSound'&&e.Replay==='1'&&e.Use3DSound==='1').map(e=>e.DaviName);
  for(const name of names){const o=first.game.find(name)[0];assert.ok(o,name);first.game.command(o,'enable');}
  const restored=boot(first.game.snapshot());
  for(const name of names){
    const o=restored.game.find(name)[0],r=restored.audio.keyed.get(o.id);assert.ok(r,`${name} restored`);
    restored.audio.update(0,o.position);assert.ok(r.element.volume>0,`${name} remains audible nearby with its authored gain`);
    restored.audio.update(0,o.position.map((v,i)=>v+(i===0?960:0)));assert.equal(r.element.volume,0);
    restored.game.command(o,'disable');assert.equal(restored.audio.keyed.has(o.id),false);
  }
  assert.deepEqual(restored.host.errors,[]);
});
