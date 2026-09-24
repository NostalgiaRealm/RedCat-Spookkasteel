import test from 'node:test';
import assert from 'node:assert/strict';
import {sampleActorDynamicLights,actorDynamicLightLimit,shadeActorVertexRaw} from '../src/actor-light-sampling.js';

const lamp=(position,radius=100,color=[1,1,1])=>({position,radius,color});
const close=(actual,expected)=>actual.forEach((value,i)=>assert.ok(Math.abs(value-expected[i])<1e-10,`${actual} != ${expected}`));

test('actor root chooses nearest in-range lights and retains ties in input order',()=>{
  const lights=[lamp([0,0,75]),lamp([0,0,10]),lamp([0,0,-10]),lamp([0,0,100]),lamp([0,0,0],0)];
  const selected=sampleActorDynamicLights([0,0,0],lights);
  assert.deepEqual(selected.map(sample=>sample.light),[lights[1],lights[2]]);
  assert.deepEqual(selected[0].direction,[0,0,1]);
  assert.deepEqual(selected[0].color,[.9,.9,.9]);
  assert.deepEqual(sampleActorDynamicLights([0,0,0],lights,0),[]);
  assert.equal(sampleActorDynamicLights([0,0,0],lights,32).length,3);
});

test('native one-unit distance floor changes direction and falloff without changing eligibility',()=>{
  const lights=sampleActorDynamicLights([0,0,0],[lamp([.25,0,0],10),lamp([0,0,0],10)]);
  assert.deepEqual(lights[0].direction,[0,0,0]);
  assert.deepEqual(lights[1].direction,[.25,0,0]);
  assert.deepEqual(lights[1].color,[.9,.9,.9]);
  assert.equal(lights[1].distance,1);
  close(shadeActorVertexRaw({normal:[1,0,0],lights:[lights[1]]}),[57.375,57.375,57.375]);
  assert.deepEqual(shadeActorVertexRaw({normal:[1,0,0],lights:[lights[0]]}),[0,0,0]);
});

test('prepared lighting is shared across an actor; only transformed vertex normals change',()=>{
  const lights=sampleActorDynamicLights([0,0,0],[lamp([30,40,0],100,[200/255,100/255,50/255])]);
  close(lights[0].direction,[.6,.8,0]);
  close(lights[0].color,[100/255,50/255,25/255]);
  close(shadeActorVertexRaw({normal:[1,0,0],lights}),[60,30,15]);
  close(shadeActorVertexRaw({normal:[0,1,0],lights}),[80,40,20]);
  close(shadeActorVertexRaw({normal:[-1,0,0],lights,ambient:[.1,.2,.3]}),[25.5,51,76.5]);
});

test('material multiplies the raw sum before saturation, without gamma decoding',()=>{
  const light={direction:[0,1,0],color:[.6,.4,.2]};
  const actual=shadeActorVertexRaw({normal:[0,1,0],material:[128,200,255],ambient:[.3,.4,.5],fill:light,lights:[light]});
  close(actual,[192,240,229.5]);
  close(shadeActorVertexRaw({normal:[0,1,0],ambient:[1,1,1],lights:[light]}),[255,255,255]);
  close(shadeActorVertexRaw({normal:[0,1,0],ambient:[.4,.4,.4],intensity:.5}),[51,51,51]);
  close(shadeActorVertexRaw({normal:[0,1,0],ambient:[-.1,0,.1]}),[0,0,25.5]);
});

test('light count honors authored settings up to the native capacity and ignores invalid records',()=>{
  assert.equal(actorDynamicLightLimit(3),3);
  assert.equal(actorDynamicLightLimit(50),32);
  assert.equal(actorDynamicLightLimit(-5),0);
  const valid=lamp([1,2,3]);
  assert.equal(sampleActorDynamicLights([0,0,0],Array.from({length:40},()=>valid),40).length,32);
  const invalid=[{...valid,active:false},{...valid,radius:NaN},{...valid,position:[NaN,1,2]},{...valid,color:[1,2]}];
  assert.deepEqual(sampleActorDynamicLights([0,0,0],invalid),[]);
  assert.deepEqual(sampleActorDynamicLights([Infinity,0,0],[valid]),[]);
  const saved=JSON.stringify(valid);sampleActorDynamicLights([0,0,0],[valid]);assert.equal(JSON.stringify(valid),saved);
});
