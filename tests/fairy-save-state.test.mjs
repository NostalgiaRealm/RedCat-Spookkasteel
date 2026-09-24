import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Vector3} from 'three';
import {NativeFairyEffect,FAIRY_STEP} from '../src/fairy-effects.js';
import {WorldEffects} from '../src/world-effects.js';
import {Gameplay} from '../src/gameplay.js';

const options={origin:[10,20,30],waypoints:[[20,45,30],[60,40,20]],lifeTime:0,seed:921};
const json=value=>JSON.parse(JSON.stringify(value));
function roundTrip(effect) {
  const saved=json(effect.snapshot()),restored=NativeFairyEffect.restore(saved);
  assert.ok(restored);assert.deepEqual(restored.geometry(),effect.geometry());assert.deepEqual(restored.snapshot(),effect.snapshot());
  for(const dt of [.007,.1,.013,.25,.5,2.8,1.1]) {
    assert.deepEqual(restored.advance(dt),effect.advance(dt));
    assert.deepEqual(restored.geometry(),effect.geometry());assert.deepEqual(restored.snapshot(),effect.snapshot());
  }
  return {saved,restored};
}

test('fairy save preserves current seek/hover, random stream, fractional tick and pulse history',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(3.107);
  assert.ok(effect.pool.some(p=>p.active&&p.kind==='burst'));assert.ok(effect.trails.length);assert.ok(effect.remainder>0);
  roundTrip(effect);
});

test('departure saves restore living particles without resurrecting the fairy or replaying the burst',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(3);effect.requestStop();effect.advance(.257);
  assert.equal(effect.active,false);assert.ok(effect.pool.some(p=>p.active));assert.equal(effect.geometry().light,null);
  const {saved}=roundTrip(effect);assert.equal(saved.active,false);assert.ok(saved.pool.some(p=>p?.active));
});

test('reused and dormant slots retain oscillator state across saves and later activations',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(2.7);effect.requestStop();effect.advance(5);
  const dormant=json(effect.snapshot());assert.ok(dormant.pool.some(Array.isArray));
  const restored=NativeFairyEffect.restore(dormant);assert.ok(restored);
  const next={...options,origin:[-50,20,10]};effect.activate(next);restored.activate(next);
  for(const dt of [.3,.7,2,1]){assert.deepEqual(restored.advance(dt),effect.advance(dt));assert.deepEqual(restored.geometry(),effect.geometry());}
  roundTrip(restored);
});

test('snapshot copies never share live state and malformed unbounded pools or paths are rejected',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(.3);const original=json(effect.snapshot());
  const snapshot=effect.snapshot();snapshot.centre.position[0]=999;snapshot.pool.find(p=>p?.active).position[0]=999;snapshot.trails[0].start[0]=999;
  assert.deepEqual(effect.snapshot(),original);
  for(const alter of [s=>s.pool.push(null),s=>s.waypoints=Array(11).fill([0,0,0]),s=>s.trails=Array(241).fill(s.trails[0]),
    s=>s.centre.velocity[0]=NaN,s=>s.randomState=-1,s=>s.remainder=FAIRY_STEP,s=>s.pool[0].position=null,s=>delete s.pulseUp]) {
    const invalid=json(original);alter(invalid);assert.equal(NativeFairyEffect.restore(invalid),null);
  }
});

const level=JSON.parse(readFileSync(new URL('../data/levels/lvl00a/level.json',import.meta.url)));
function boot(save) {
  const events=[],game=new Gameplay(level,{save,deferInit:true,onEvent:e=>events.push(e)});
  if(!save)for(const object of game.objects)if(object.kind==='fairy')object.enabled=false;
  const effects=new WorldEffects({camera:{position:new Vector3()}},game,{});effects.pointLights=[];
  effects.entries=new Map([...effects.entries].filter(([,s])=>s.object.kind==='fairy'));
  const state=effects.entries.values().next().value;
  return {game,effects,events,state};
}
const sounds=app=>app.events.filter(e=>e.type==='scriptSound'&&!e.stop);
function advance(app,seconds) {while(seconds>1e-9){const dt=Math.min(.05,seconds);app.effects.update(dt);seconds-=dt;}}

test('real gameplay saves restore fairy draw buffers before ticking and resume only one idle loop',()=>{
  const live=boot();live.state.object.enabled=true;advance(live,3.107);
  const save=json(live.game.snapshot()),restored=boot(save);
  assert.ok(save.objects.find(o=>o.id===live.state.object.id).fairyState);
  const initial=restored.state.fairy.snapshot();restored.effects.update(0);restored.effects.update(0);
  assert.deepEqual(restored.state.fairy.snapshot(),initial);assert.equal(sounds(restored).length,0);
  assert.deepEqual(restored.state.fairyGeometry,live.state.fairyGeometry);
  for(const dt of [.017,.04,.25]) {
    live.effects.update(dt);restored.effects.update(dt);
    assert.deepEqual(restored.state.fairy.snapshot(),live.state.fairy.snapshot());
  }
  assert.deepEqual(sounds(restored).map(e=>[e.sound,e.loop]),[['idlefee1.wav',true]]);
  const departed=boot(json(restored.game.snapshot()));departed.state.object.enabled=false;
  departed.effects.update(.05);
  assert.deepEqual(sounds(departed).map(e=>e.sound),['Magiev12.wav']);
  const tail=boot(json(departed.game.snapshot()));tail.effects.update(0);
  assert.equal(tail.state.fairy.active,false);assert.deepEqual(tail.state.fairyGeometry,departed.state.fairyGeometry);
  advance(tail,1);assert.deepEqual(sounds(tail),[]);assert.ok(tail.state.fairyGeometry.sprites.length>0);
});

test('skip after restore clears the saved tail and does not resume an idle sound on the next tick',()=>{
  const live=boot();live.state.object.enabled=true;advance(live,2);
  const restored=boot(json(live.game.snapshot()));restored.effects.finishSkippedFairies(new Set([live.state.object.id]));
  restored.effects.update(.05);assert.deepEqual(sounds(restored),[]);
  const skipped=boot(json(restored.game.snapshot()));skipped.effects.update(0);skipped.effects.update(.05);
  assert.deepEqual(skipped.state.fairyGeometry,{sprites:[],rays:[],light:null});assert.deepEqual(sounds(skipped),[]);
});

test('legacy age-only fairy saves remain supported without replaying their appearance cue',()=>{
  const live=boot();live.state.object.enabled=true;advance(live,2);
  const save=json(live.game.snapshot());for(const object of save.objects)delete object.fairyState;
  const restored=boot(save);restored.effects.update(.05);live.effects.update(.05);
  assert.deepEqual(restored.state.fairyGeometry,live.state.fairyGeometry);
  assert.deepEqual(sounds(restored).map(e=>e.sound),['idlefee1.wav']);
});
