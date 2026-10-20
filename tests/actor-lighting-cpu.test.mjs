import test from 'node:test';
import assert from 'node:assert/strict';
import {ActorWorldLighting} from '../src/actor-world-lighting.js';
import {sampleActorDynamicLights} from '../src/actor-light-sampling.js';

const sun=(name,position,radius,type=2,light=100)=>({classname:'Sun','%name%':name,Origin:position.join(' '),Color:'255 255 255',Light:String(light),FallOffType:String(type),FallOffRadiusInTexels:String(radius)});

test('Sun spatial selection retains inclusive radius and cell boundaries in all directions',()=>{
  for(const center of [[0,0,0],[-512,-512,-512],[512,512,512],[1e9,1e9,1e9]]) {
    const entity=sun('edge',center,512,1),lighting=new ActorWorldLighting([entity]);
    for(let axis=0;axis<3;axis++)for(const sign of [-1,1]) {
      const point=[...center];point[axis]+=512*sign;
      assert.equal(lighting.sample(point)?.entity,entity);
      point[axis]+=sign*.001;
      assert.equal(lighting.sample(point),null);
    }
  }
});

test('unlimited and wide Suns retain authored tie order among local Suns',()=>{
  const entities=[sun('unlimited first',[100000,0,0],0,0),sun('wide second',[0,0,0],1e7,1),sun('local third',[0,0,0],512,1)];
  const lighting=new ActorWorldLighting(entities),traced=[];
  const selected=lighting.sample([1,0,0],0,(_from,_to,entity)=>{
    traced.push(entity['%name%']);return entity!==entities[0];
  });
  assert.equal(selected.entity,entities[1]);
  assert.deepEqual(traced,['unlimited first','wide second']);
  assert.equal(lighting.sample([2e7,0,0]).entity,entities[0]);
});

test('zero-radius and negative-radius Suns preserve native eligibility',()=>{
  const entity=sun('zero',[512,0,0],0,1),lighting=new ActorWorldLighting([sun('negative',[0,0,0],-1,1),entity]);
  assert.equal(lighting.sample([512,0,0]).entity,entity);
  assert.equal(lighting.sample([512.000001,0,0]),null);
});

test('bounded dynamic selection preserves input ties at every authored maximum',()=>{
  const lights=Array.from({length:40},(_,i)=>({position:[i%2?1:-1,0,0],radius:100,color:[1,.5,.25]}));
  for(let maximum=0;maximum<=32;maximum++) {
    const selected=sampleActorDynamicLights([0,0,0],lights,maximum);
    assert.deepEqual(selected.map(value=>value.light),lights.slice(0,maximum));
  }
});

test('typed dynamic positions retain intermediate Float32 rounding',()=>{
  const position=[1/3,2/3,1/7],light={position:new Float32Array([12.123456,23.654321,3.987654]),radius:100,color:new Float32Array([1,.5,.25])};
  const delta=light.position.map((value,i)=>value-position[i]);
  const distance=Math.max(1,Math.sqrt(delta.reduce((sum,value)=>sum+value*value,0)));
  const result=sampleActorDynamicLights(position,[light])[0];
  assert.equal(result.distance,distance);
  assert.deepEqual(result.direction,delta.map(value=>value/distance));
  assert.deepEqual(result.color,light.color.map(value=>value*(1-distance/light.radius)));
});
