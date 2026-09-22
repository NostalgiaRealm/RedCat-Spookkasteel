import test from 'node:test';
import assert from 'node:assert/strict';
import {Vector3} from 'three';
import {NativeFairyEffect,FAIRY_STEP,stepFairyCentre,FAIRY_TEXTURES} from '../src/fairy-effects.js';
import {WorldEffects} from '../src/world-effects.js';
const options={origin:[0,0,0],waypoints:[[0,0,0]],lifeTime:20,seed:1};
const close=(actual,expected)=>assert.ok(Math.abs(actual-expected)<1e-8,`${actual} != ${expected}`);
const centre=(position=[0,0,0],velocity=[0,0,0])=>({position,velocity,waypoint:0,seeking:true});

test('native fairy seek integrates before speed cap and advances only one authored waypoint per tick',()=>{
  const state=centre();stepFairyCentre(state,[[100,0,0],[200,0,0]],.1,()=>{throw Error('no seek jitter');});
  close(state.position[0],19.2);close(state.velocity[0],75);
  const near=centre();stepFairyCentre(near,[[10,0,0],[10,0,0],[100,0,0]],.1,()=>0);
  assert.equal(near.waypoint,1);close(near.position[0],.192);
  const last=centre([0,0,0],[10,0,0]);stepFairyCentre(last,[[0,0,0]],.1,()=>0);
  close(last.velocity[0],9.5);close(last.position[0],.95);assert.equal(last.seeking,true);
  const stopped=centre([0,0,0],[.1,0,0]);stepFairyCentre(stopped,[[0,0,0]],.1,()=>{throw Error('hover starts next tick');});
  assert.equal(stopped.seeking,false);close(stopped.position[0],.0095);
});

test('native fairy hover applies conditional14-unit offset and Z-then-X jitter; missing waypoints stop centre',()=>{
  const far={...centre(),seeking:false};stepFairyCentre(far,[[100,0,0]],.1,()=>5000);
  close(far.position[0],19.2);close(far.position[1],0);close(far.position[2],0);
  const near={...centre(),seeking:false};stepFairyCentre(near,[[0,0,0]],.1,()=>5000);
  close(near.position[0],.006*392/Math.sqrt(2)*.32);close(near.position[1],near.position[0]);
  const jitter={...centre(),seeking:false},random=[0,9999];stepFairyCentre(jitter,[[100,0,0]],.1,()=>random.shift());
  close(jitter.position[0],(60+1.4997)*.32);close(jitter.position[2],-.8);
  const invalid=new NativeFairyEffect({...options,waypoints:[]});assert.deepEqual(invalid.advance(FAIRY_STEP),['departure']);assert.equal(invalid.active,false);
});

test('native fairy timer priority emits one slow per250ms then a five-star burst on the following tick',()=>{
  const effect=new NativeFairyEffect(options);assert.deepEqual(effect.advance(2.5),[]);
  assert.equal(effect.pool.filter(p=>p.active).length,10);
  assert.deepEqual(effect.advance(FAIRY_STEP),['sprinkle']);assert.equal(effect.pool.filter(p=>p.active).length,16);
  assert.equal(effect.pool.filter(p=>p.kind==='burst').length,5);
  effect.burst();const deadline=effect.nextSlow;effect.advance(.25);
  assert.equal(effect.pool.filter(p=>p.active).length,50);close(effect.nextSlow,deadline);
});

test('native fairy shared pool retains living particles and slot oscillator phase across departure/re-enable',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(1);
  const existing=effect.pool.filter(p=>p.active).map(p=>p.serial),colors=[...effect.color],pulse=effect.pulse;
  effect.requestStop();assert.deepEqual(effect.advance(FAIRY_STEP),['departure']);
  assert.equal(effect.pool.filter(p=>p.active).length,50);assert.deepEqual(effect.pool.filter(p=>existing.includes(p.serial)).map(p=>p.serial),existing);
  assert.deepEqual(effect.advance(FAIRY_STEP),[]);assert.deepEqual(effect.color,colors);
  effect.activate(options);assert.equal(effect.pool.filter(p=>p.active).length,50);assert.deepEqual(effect.color,colors);assert.equal(effect.pulse,pulse);
  const slot=effect.pool[0],wiggle=slot.wiggle,up=slot.wiggleUp;slot.active=false;effect.spawn(0,30);
  assert.equal(slot.wiggle,wiggle);assert.equal(slot.wiggleUp,up);
});

test('native fairy particle random generator, opposite slot Y biases, gravity and delayed fade use recovered constants',()=>{
  const slow=new NativeFairyEffect(options);slow.spawn(0,30);
  close(slow.pool[0].velocity[0],(41*.0002-1)*30);close(slow.pool[0].velocity[1],8467*.0001*30);
  const fast=new NativeFairyEffect(options);fast.spawn(0,110,true);assert.ok(fast.pool[0].velocity[1]<0);
  fast.spawn(1,110,true);assert.ok(fast.pool[1].velocity[1]>0);
  slow.active=false;slow.pool[0].velocity=[0,0,0];slow.advance(.5);
  close(slow.pool[0].velocity[1],-24);close(slow.pool[0].position[1],-6.2);
  let sprite=slow.geometry().sprites[0];assert.equal(sprite.width,6);assert.equal(sprite.opacity,1);
  slow.advance(1.5);sprite=slow.geometry().sprites[0];close(sprite.opacity,2/3);assert.equal(sprite.width,6);
  slow.advance(2);assert.equal(slow.geometry().sprites.length,0);
});

function harness(effectAge=0,lifeTime=20) {
  const object={id:'fairy',enabled:true,effectAge,position:[0,0,0],entity:{classname:'Fairy',LifeTime:String(lifeTime),NumberOfWayPoints:'1',FairyWP0:'wp'}},events=[];
  const gameplay={objects:[object],find:()=>[{position:[0,0,0],entity:{}}],emit:(type,event)=>events.push({type,...event})};
  const effects=new WorldEffects({camera:{position:new Vector3()}},gameplay,{});effects.pointLights=[];
  return {effects,object,events,state:effects.entries.get('fairy')};
}

test('native fairy saved active age replays once; render-only refresh preserves state and emits no duplicate audio',()=>{
  const live=harness();for(let i=0;i<240;i++)live.effects.update(FAIRY_STEP);
  const restored=harness(live.object.effectAge);restored.effects.update(FAIRY_STEP);live.effects.update(FAIRY_STEP);
  assert.deepEqual(restored.state.fairy.geometry(),live.state.fairy.geometry());
  const before=JSON.stringify(restored.state.fairy),count=restored.events.length;
  restored.effects.update(0);restored.effects.update(0);
  assert.equal(JSON.stringify(restored.state.fairy),before);assert.equal(restored.events.length,count);
  assert.equal(restored.events.filter(e=>e.sound==='gri5fx11.wav').length,0);
  assert.equal(restored.events.filter(e=>e.sound==='idlefee1.wav'&&e.loop).length,1);
  assert.equal(live.events.filter(e=>e.sound==='idlefee1.wav'&&!e.stop).length,1);
  assert.equal(live.events.filter(e=>e.sound==='FairySprinkle1.wav'&&!e.stop).length,0);
  const expired=harness(10,5);expired.effects.update(FAIRY_STEP);expired.effects.update(FAIRY_STEP);
  assert.equal(expired.object.enabled,false);assert.equal(expired.state.active,false);assert.equal(expired.events.length,0);
});

test('native fairy fixed-step trajectory and cached trail geometry do not depend on rendering frame size',()=>{
  const a=new NativeFairyEffect(options),b=new NativeFairyEffect(options);
  for(let i=0;i<8;i++)a.advance(.25);for(let i=0;i<120;i++)b.advance(FAIRY_STEP);
  assert.deepEqual(a.geometry(),b.geometry());assert.deepEqual(a.pool,b.pool);
  assert.ok(a.trails.length<=5*48);assert.ok(a.geometry().sprites.filter(s=>s.texture===FAIRY_TEXTURES.star).length>5);
  const before=JSON.stringify(a);a.geometry();a.geometry();a.advance(0);assert.equal(JSON.stringify(a),before);
});
