import test from 'node:test';
import assert from 'node:assert/strict';
import {ActorWorldLighting,actorSunReference,nativeSunFalloff} from '../src/actor-world-lighting.js';

const sun=(name,origin,color,light=100,extra={})=>({classname:'Sun','%name%':name,Origin:origin.join(' '),Color:color.join(' '),Light:String(light),FallOffType:'0',...extra});
const close=(a,b)=>assert.ok(Math.abs(a-b)<1e-9,`${a} != ${b}`);

test('Sun modes retain authored radius cutoff and full-intensity inner radius',()=>{
  assert.equal(nativeSunFalloff(0,10,0,1000),1);
  assert.equal(nativeSunFalloff(1,100,25,100),1);
  assert.equal(nativeSunFalloff(1,100,25,100.001),0);
  assert.equal(nativeSunFalloff(2,100,25,25),1);
  close(nativeSunFalloff(2,100,25,62.5),.5);
  assert.equal(nativeSunFalloff(2,100,25,100),0);
  close(nativeSunFalloff(2,100,0,40),.6);
  assert.equal(nativeSunFalloff(2,100,120,100),1);
});

test('strongest visible Sun wins rather than nearest Sun or sum of Suns',()=>{
  const lights=new ActorWorldLighting([
    sun('near',[1,0,0],[100,100,100]),sun('bright blocked',[0,100,0],[255,255,255],200),
    sun('bright clear',[0,0,100],[200,200,200]),
  ]),seen=[];
  const selected=lights.sample([0,0,0],0,(_from,_to,entity)=>{
    seen.push(entity['%name%']);return entity['%name%']!=='bright blocked';
  });
  assert.equal(selected.entity['%name%'],'bright clear');
  assert.deepEqual(seen,['bright blocked','bright clear']);
});

test('equal scores preserve native first-entity ordering',()=>{
  const lights=new ActorWorldLighting([sun('first',[10,0,0],[100,100,100]),sun('second',[5,0,0],[100,100,100])]);
  assert.equal(lights.sample([0,0,0]).entity['%name%'],'first');
});

test('Sun direction and visibility use three-quarter actor height',()=>{
  assert.deepEqual(actorSunReference([10,20,30],80),[10,80,30]);
  const lights=new ActorWorldLighting([sun('above',[10,100,30],[255,128,64],255)]);
  const selected=lights.sample([10,20,30],80,(from,to)=>{
    assert.deepEqual(from,[10,80,30]);assert.deepEqual(to,[10,100,30]);return true;
  });
  assert.deepEqual(selected.normal,[0,1,0]);
  assert.deepEqual(selected.color,[510,256,128]);
});

test('selection score includes authored attenuation and colour-channel sum',()=>{
  const lights=new ActorWorldLighting([
    sun('dim edge',[90,0,0],[255,255,255],255,{FallOffType:'2',FallOffRadiusInTexels:'100',FallOffRadiusTopIntensity:'0'}),
    sun('red',[30,0,0],[255,0,0],100),
  ]);
  assert.equal(lights.sample([0,0,0]).entity['%name%'],'red');
});

test('no eligible visible Sun returns null and excluded lights do not trace',()=>{
  const lights=new ActorWorldLighting([sun('far',[101,0,0],[255,255,255],100,{FallOffType:'1',FallOffRadiusInTexels:'100'})]);
  assert.equal(lights.sample([0,0,0],0,()=>{throw new Error('out of range');}),null);
  assert.equal(new ActorWorldLighting([sun('blocked',[0,0,0],[255,255,255])]).sample([0,0,0],0,()=>false),null);
});

test('zero-distance Sun produces a finite zero normal, and non-Sun entities are excluded',()=>{
  const lights=new ActorWorldLighting([{classname:'DynamicLight',Origin:'0 0 0',Color:'255 255 255'},sun('zero',[1,2,3],[10,20,30])]);
  const selected=lights.sample([1,2,3]);
  assert.equal(lights.suns.length,1);assert.deepEqual(selected.normal,[0,0,0]);
  assert.ok(selected.color.every(Number.isFinite));
});

test('stationary actor reuses Sun selection without repeating visibility traces',()=>{
  const lights=new ActorWorldLighting([sun('above',[0,100,0],[255,255,255])]),actor={};
  let traces=0;
  const visible=()=>{traces++;return true;};
  const first=lights.sample([0,0,0],80,visible,actor,0);
  const second=lights.sample([0,0,0],80,()=>{throw new Error('cached callback');},actor,0);
  assert.equal(second,first);assert.equal(traces,1);
});

test('position, actor height and world revision invalidate cached Sun selection',()=>{
  const lights=new ActorWorldLighting([sun('above',[0,100,0],[255,255,255])]),actor={},position=[0,0,0];
  let traces=0;
  const visible=()=>{traces++;return true;};
  const first=lights.sample(position,80,visible,actor,0);
  position[0]=1;
  const moved=lights.sample(position,80,visible,actor,0);
  const resized=lights.sample(position,81,visible,actor,0);
  const revised=lights.sample(position,81,visible,actor,1);
  assert.notEqual(moved,first);assert.notEqual(resized,moved);assert.notEqual(revised,resized);
  assert.deepEqual(revised.reference,[1,60.75,0]);assert.equal(traces,4);
});

test('cached occlusion clears on revision and actor caches remain independent',()=>{
  const lights=new ActorWorldLighting([sun('above',[0,100,0],[255,255,255])]),firstActor={},secondActor={};
  let visible=false,traces=0;
  const trace=()=>{traces++;return visible;};
  assert.equal(lights.sample([0,0,0],80,trace,firstActor,0),null);
  visible=true;
  assert.equal(lights.sample([0,0,0],80,trace,firstActor,0),null);
  assert.ok(lights.sample([0,0,0],80,trace,secondActor,0));
  assert.ok(lights.sample([0,0,0],80,trace,firstActor,1));
  assert.equal(traces,3);
});

test('calls without an actor cache key continue sampling current visibility',()=>{
  const lights=new ActorWorldLighting([sun('above',[0,100,0],[255,255,255])]);
  assert.ok(lights.sample([0,0,0],80,()=>true));
  assert.equal(lights.sample([0,0,0],80,()=>false),null);
});
