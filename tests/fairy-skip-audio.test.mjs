import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {createHash} from 'node:crypto';
import {Vector3} from 'three';
import {WorldEffects} from '../src/world-effects.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
function simple(lifetime=20) {
  const object={id:'fairy',enabled:true,position:[0,0,0],entity:{classname:'Fairy',LifeTime:String(lifetime),NumberOfWayPoints:'1',FairyWP0:'wp'}},events=[];
  const game={objects:[object],find:()=>[{position:[0,0,0],entity:{}}],emit:(type,e)=>events.push({type,...e})};
  const effects=new WorldEffects({camera:{position:new Vector3()}},game,{});effects.pointLights=[];
  return {object,events,effects,state:effects.entries.get('fairy')};
}
function boot() {
  const events=[],game=new Gameplay(json('data/levels/lvl00a/level.json'),{deferInit:true,onEvent:e=>events.push(e)});
  const host=new ScriptHost(game,json('data/davi/lvl00a.json'),{motions:json('data/motions/lvl00a.json'),dialogue:json('data/dialogue/nl.json')});
  const effects=new WorldEffects({camera:{position:new Vector3()}},game,{});effects.pointLights=[];host.initialize();
  effects.entries=new Map([...effects.entries].filter(([,s])=>s.object.entity.classname==='Fairy'));
  return {game,host,effects,events};
}
function skip({host,effects}) {
  const fairies=effects.collectCutsceneFairies();
  const done=host.skipCutscene({onStep:()=>effects.collectCutsceneFairies(fairies)});
  if(done)effects.finishSkippedFairies(fairies);
  return {done,fairies};
}
function beginDialogue(app,trigger='csmc01_tr') {
  const {game,host}=app;for(let i=0;i<20&&!host.cutscene;i++)host.update(.05);skip(app);
  game.trigger(game.find(trigger)[0]);for(let i=0;i<40&&!host.cutscene;i++)host.update(.05);
  assert.equal(host.cutscene,true);
}

test('fairy appearance plays Gri5FX11 once and loops original idlefee1, with silent periodic particles',()=>{
  const manifest=json('assets/audio/manifest.json');assert.equal(manifest['idlefee1.wav'],'idlefee1.wav');assert.equal(manifest['gri5fx11.wav'],'gri5fx11.wav');
  assert.equal(createHash('sha256').update(readFileSync(new URL('../assets/audio/idlefee1.wav',import.meta.url))).digest('hex'),'6233f489d282ee24b4ab6f1173058c8487bb054f64bc36a9b3272f2e93fef6ad');
  assert.equal(createHash('sha256').update(readFileSync(new URL('../assets/audio/gri5fx11.wav',import.meta.url))).digest('hex'),'e230484df3e930bc3f335b2438643257d856f61565249598a8a46fd2c95bbba7');
  const app=simple();for(let i=0;i<32;i++)app.effects.update(.25);
  const plays=app.events.filter(e=>!e.stop);assert.deepEqual(plays.map(e=>[e.sound,e.loop]),[['gri5fx11.wav',false],['idlefee1.wav',true]]);
  assert.ok(app.state.fairy.pool.some(p=>p.active&&p.kind==='burst'),'periodic visual particles remain');
  app.effects.update(0);app.effects.update(0);assert.equal(app.events.length,2);
  app.effects.finishSkippedFairies(new Set(['fairy']));
  for(const file of ['gri5fx11.wav','ihealthl.wav','Gri5fx11.wav'])assert.ok(app.events.some(e=>e.id===`fairy:fairy:${file}`&&e.stop),`skip stops ${file}`);
});

test('ordinary fairy departure retains its separate visual burst and single departure cue',()=>{
  const app=simple(.1);app.effects.update(.05);app.effects.update(.1);
  assert.deepEqual(app.events.filter(e=>!e.stop).map(e=>e.sound),['gri5fx11.wav','idlefee1.wav','Magiev12.wav']);
  assert.ok(app.events.some(e=>e.sound==='idlefee1.wav'&&e.stop));
  assert.equal(app.state.fairyGeometry.light,null);assert.equal(app.state.fairyGeometry.sprites.length,50);
  for(let i=0;i<20;i++)app.effects.update(.25);
  assert.equal(app.events.filter(e=>e.sound==='Magiev12.wav'&&!e.stop).length,1);
});

test('skipping during fairy departure clears its surviving tail and sound without touching future encounters',()=>{
  const app=simple(.1),future={object:{id:'future',enabled:false,entity:{classname:'Fairy'}},active:false,age:0};
  app.effects.entries.set('future',future);app.effects.update(.05);app.effects.update(.1);
  assert.equal(app.object.enabled,false);assert.equal(app.state.fairy.active,false);
  assert.equal(app.state.fairyGeometry.sprites.length,50);assert.ok(app.state.fairy.trails.length);
  const ids=app.effects.collectCutsceneFairies();assert.deepEqual([...ids],['fairy']);
  app.effects.finishSkippedFairies(ids);
  assert.deepEqual(app.state.fairyGeometry,{sprites:[],rays:[],light:null});
  assert.equal(app.state.fairy.pool.some(p=>p.active),false);assert.equal(app.state.fairy.trails.length,0);
  assert.ok(app.events.some(e=>e.sound==='Magiev12.wav'&&e.stop));assert.equal(future.object.enabled,false);
  const count=app.events.length;app.effects.update(.05);assert.equal(app.events.length,count);
});

test('skipping before original fairy activation consumes that dialogue fairy and preserves future encounters',()=>{
  const app=boot();beginDialogue(app);const {game,host,effects,events}=app;
  const dialogue=game.find('fairy11')[0],future=game.find('fairy2')[0];assert.equal(dialogue.enabled,false);assert.equal(future.enabled,false);
  const before=events.length,{done,fairies}=skip(app);assert.equal(done,true);assert.ok(fairies.has(dialogue.id));assert.equal(host.vm.lastError,null);
  assert.equal(dialogue.enabled,false);assert.equal(dialogue.effectAge,0);assert.equal(future.enabled,false);assert.equal(fairies.has(future.id),false);
  assert.deepEqual(effects.entries.get(dialogue.id).fairyGeometry,{sprites:[],rays:[],light:null});
  assert.ok(events.slice(before).filter(e=>e.id?.startsWith(`fairy:${dialogue.id}:`)).every(e=>e.stop));
  game.trigger(game.find('csmc02_tr')[0]);for(let i=0;i<60&&!future.enabled;i++)host.update(.05);
  assert.equal(future.enabled,true);effects.update(.05);assert.ok(effects.entries.get(future.id).fairyGeometry.light);
  assert.ok(events.some(e=>e.id===`fairy:${future.id}:idlefee1.wav`&&!e.stop));
});

test('skipping an already visible skill fairy clears particles/audio and preserves the potion reward',()=>{
  const app=boot();app.game.state.potions=10;beginDialogue(app,'csmc06_tr');
  const {game,host,effects,events}=app;
  for(let i=0;i<60&&!effects.collectCutsceneFairies().size;i++){host.update(.05);effects.update(.05);}
  effects.update(.05);const active=effects.collectCutsceneFairies();assert.ok(active.size);
  const {done,fairies}=skip(app);assert.equal(done,true);assert.equal(game.state.skill&1,1);assert.equal(host.vm.lastError,null);
  for(const id of active) {
    assert.ok(fairies.has(id));const state=effects.entries.get(id);assert.equal(state.object.enabled,false);
    assert.deepEqual(state.fairyGeometry,{sprites:[],rays:[],light:null});assert.equal(state.fairy?.active,false);
    assert.ok(events.some(e=>e.id===`fairy:${id}:idlefee1.wav`&&e.stop));
    assert.ok(events.some(e=>e.id===`fairy:${id}:FairySprinkle1.wav`&&e.stop));
  }
  const count=events.length;effects.update(.05);effects.update(0);assert.equal(events.length,count,'no delayed departure or reactivation after skip');
});
