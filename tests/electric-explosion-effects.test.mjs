import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {DestructibleEffects} from '../source/destructible-effects.js';
import {nativeBlastsForEffect,restoreNativeExplosions} from '../source/explosion-native.js';
import {ELECTRIC_PATH_TEXTURES,ELECTRIC_SPARK_TEXTURE} from '../source/electric-explosion-native.js';
import {explosionTextureFilter} from '../source/explosion-variants.js';
import {GameplayAudio} from '../source/gameplay-audio.js';

const fixture=(extra={})=>({id:'electric-fixture',sourceId:'unused-actor',birth:0,position:[0,2,0],settings:{explosion:{NrExplosions:1,SizePercentage:25,Electric:true,...extra}}});
function harness(effect=fixture(),quality=3,time=0) {
  const calls={sprites:[],sparks:[],audio:[]},game={time,explosions:[effect],emit:(type,event)=>calls.audio.push({type,...structuredClone(event)})};
  const world={settings:{effectsQuality:quality}},renderer=new DestructibleEffects(world,game);
  const batches=new Map(ELECTRIC_PATH_TEXTURES.map(key=>[key,{mesh:{material:{uniforms:{map:{value:{image:{width:32,height:32}}}}}},
    add:(...args)=>calls.sprites.push(structuredClone([key,...args]))}]));
  const beams=new Map([[ELECTRIC_SPARK_TEXTURE,{addPoints:(points,color,opacity,a,b,uvs)=>
    calls.sparks.push({points:points.map(point=>point.toArray()),color:[...color],opacity,uvs:structuredClone(uvs)})}]]);
  const update=(time,dt=1/60)=>{game.time=time;renderer.update(dt,batches,beams);};
  return {game,world,renderer,calls,update,effect};
}
const visual=state=>({tick:state.tick,rng:state.rng,paths:state.paths,sparks:state.sparks,spawned:state.spawned,active:state.active});

test('ordinary and lower-quality explosions allocate no electric cohorts or new texture uploads',()=>{
  for(const [effect,quality]of [[fixture({Electric:false}),3],[fixture(),2]]) {
    const h=harness(effect,quality);h.update(0);h.update(.1);assert.equal(h.renderer.electric,undefined);
    assert.equal(h.calls.sprites.length+h.calls.sparks.length+h.calls.audio.length,0);
    const wanted=explosionTextureFilter(h.game,quality);
    for(const key of [...ELECTRIC_PATH_TEXTURES,ELECTRIC_SPARK_TEXTURE])assert.equal(wanted(key),false);
  }
});

test('each staggered blast owns independent spark paths and original textures with tapered native quad UVs',()=>{
  const h=harness(fixture({NrExplosions:3}));
  const blasts=nativeBlastsForEffect(h.effect);assert.equal(new Set(blasts.map(blast=>blast.id)).size,3);
  for(let tick=0;tick<=30;tick++)h.update(tick/60);
  const states=h.renderer.electric.cohorts.get(h.effect.id).states;assert.equal(states.length,3);
  states.forEach((state,i)=>{assert.equal(state.birth,blasts[i].birth);assert.deepEqual(state.position,blasts[i].position);});
  assert.ok(h.calls.sprites.length>0&&h.calls.sparks.length>0);
  assert.ok(h.calls.sprites.every(([key,position,width,height,color,alpha])=>ELECTRIC_PATH_TEXTURES.includes(key)&&
    position.every(Number.isFinite)&&width>0&&width===height&&alpha>=0&&alpha<=1&&color.every(c=>c===1)));
  assert.deepEqual(h.calls.sparks[0].uvs,[[1,1],[1,0],[0,0],[1,1],[0,0],[0,1]]);
  assert.ok(h.calls.sparks.every(spark=>spark.points.flat().every(Number.isFinite)&&spark.opacity>=0&&spark.opacity<=1));
});

test('electric live state survives save/load without restarting spark paths or replaying previous crackles',()=>{
  const a=harness();for(let tick=0;tick<=30;tick++)a.update(tick/60);
  const before=a.effect.electricSnapshot(),saved=restoreNativeExplosions([a.effect],a.game.time);
  assert.equal(saved[0].electricState.length,1);
  assert.deepEqual(visual(saved[0].electricState[0]),visual(before[0]));
  assert.deepEqual(saved[0].electricState[0].sounds,[]);
  const b=harness(saved[0],3,a.game.time);b.update(a.game.time,0);
  assert.deepEqual(visual(b.effect.electricSnapshot()[0]),visual(before[0]));
  assert.equal(b.calls.audio.length,0);
  for(let tick=31;tick<=60;tick++){a.update(tick/60);b.update(tick/60);}
  assert.deepEqual(visual(a.effect.electricSnapshot()[0]),visual(b.effect.electricSnapshot()[0]));
  assert.deepEqual(b.calls.audio,a.calls.audio.filter(event=>event.time>.5));
  const callback=a.effect.electricSnapshot;a.renderer.dispose();assert.equal(a.effect.electricSnapshot,undefined);assert.equal(typeof callback,'function');
});

test('legacy reconstruction, zero-time redraws and expired cohorts remain silent and bounded',()=>{
  const h=harness(fixture(),3,.75);h.update(.75,0);
  assert.ok(h.calls.sparks.length>0);assert.equal(h.calls.audio.length,0);
  const state=h.effect.electricSnapshot()[0],tick=state.tick;
  for(let i=0;i<30;i++)h.update(.75,0);
  assert.equal(h.effect.electricSnapshot()[0].tick,tick);assert.equal(h.calls.audio.length,0);
  for(let frame=46;frame<=150;frame++)h.update(frame/60);
  const expired=h.effect.electricSnapshot()[0];assert.equal(expired.active,false);assert.equal(expired.paths.length+expired.sparks.length,0);
  h.game.explosions=[];h.update(7);assert.equal(h.renderer.electric.cohorts.size,0);assert.equal(h.effect.electricSnapshot,undefined);
});

test('the dedicated crackle handler uses guarded independent spatial one-shots without a replacement key',()=>{
  const calls=[],audio={play:options=>calls.push(options)},player=new GameplayAudio(audio);
  for(let i=1;i<=6;i++)player.handle({type:'electricExplosionSpark',sound:`spark${i}.wav`,position:[1,2,3],volume:1});
  assert.equal(calls.length,6);assert.ok(calls.every(call=>call.spatial===true&&call.volume===1&&!('key'in call)&&!('loop'in call)));
  for(const event of [{sound:'spark0.wav',position:[1,2,3]},{sound:'other.wav',position:[1,2,3]},
    {sound:'spark1.wav',position:[NaN,0,0]},{sound:'spark1.wav',position:[1,2]}])player.handle({type:'electricExplosionSpark',...event});
  assert.equal(calls.length,6);
});
