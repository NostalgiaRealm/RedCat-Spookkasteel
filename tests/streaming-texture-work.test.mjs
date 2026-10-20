import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {ActorTextureStream} from '../src/actor-texture-stream.js';
import {StreamingWorkQueue} from '../src/streaming-work.js';

const flush=()=>new Promise(resolve=>setImmediate(resolve));
function fixture(options={}) {
  let time=0;const loaded=[],released=[],uploaded=[];
  const work=new StreamingWorkQueue({maxJobs:1,budgetMs:1.5,clock:()=>0,yieldFrame:flush});
  const stream=new ActorTextureStream({placeholder:{width:1,height:1},work,clock:()=>time,
    load:async url=>{loaded.push(url);return new THREE.Texture({width:64,height:64,url});},
    release:texture=>{released.push(texture);texture.dispose();},
    upload:texture=>uploaded.push(texture.image.url),...options});
  return {work,stream,loaded,released,uploaded,setTime:value=>time=value};
}

test('decoded actor maps upload through the frame queue before becoming render-ready',async()=>{
  const {stream,work,uploaded,released}=fixture(),a=stream.texture('a.png'),b=stream.texture('b.png'),clone=new THREE.MeshBasicMaterial({map:a}).clone();
  stream.request([a,b]);await flush();
  assert.equal(work.jobs.length,2);assert.deepEqual(uploaded,[]);assert.equal(stream.ready([a,b]),false);
  work.pump(1);await flush();assert.equal(stream.ready([a]),true);assert.equal(stream.ready([b]),false);
  assert.deepEqual(uploaded,['a.png']);assert.equal(clone.map,a);assert.equal(released.length,1);
  work.pump(1);assert.equal(work.jobs.length,1,'one display frame shares one preparation allowance');
  work.pump(2);await stream.settle();assert.equal(stream.ready([b]),true);assert.deepEqual(uploaded,['a.png','b.png']);
  stream.dispose();work.dispose();
});

test('explicit actor load settling pumps bounded work and yields rather than deadlocking before the first frame',async()=>{
  const {stream,work,uploaded}=fixture();const maps=['a','b','c','d'].map(url=>stream.texture(url));
  stream.request(maps);await stream.settle();assert.equal(stream.ready(maps),true);assert.equal(uploaded.length,4);
  assert.ok(work.stats.frames>=4);assert.equal(work.stats.maxJobs,1);assert.equal(stream.pending.size,0);
  stream.dispose();work.dispose();
});

test('visible and pinned maps outrank background requests without retaining old priority forever',async()=>{
  const {stream,work,uploaded,setTime}=fixture(),near=stream.texture('near'),visible=stream.texture('visible'),pinned=stream.texture('player');
  stream.request([near]);stream.request([visible],undefined,2);stream.pinned.add(pinned);stream.request([pinned]);await flush();
  work.pump(1);await flush();assert.deepEqual(uploaded,['player']);
  work.pump(2);await flush();assert.deepEqual(uploaded,['player','visible']);
  setTime(.2);stream.request([near],undefined,2);assert.equal(stream.entries.get('near').priority,2);
  setTime(.4);stream.request([near],undefined,1);assert.equal(stream.entries.get('near').priority,1,'an old visible owner does not stay urgent forever');
  await stream.settle();stream.dispose();work.dispose();
});

test('an expired decoded map skips graphics preparation and can be requested again',async()=>{
  const {stream,work,uploaded,released,loaded,setTime}=fixture(),map=stream.texture('expired');
  stream.request([map]);await flush();setTime(13);work.pump(1);await flush();
  assert.deepEqual(uploaded,[]);assert.equal(released.length,1);assert.equal(stream.entries.get('expired').promise,null);
  stream.request([map]);await stream.settle();assert.deepEqual(loaded,['expired','expired']);assert.deepEqual(uploaded,['expired']);
  stream.dispose();work.dispose();
});

test('a fresh owner of the same map keeps an already decoded request alive',async()=>{
  const {stream,work,uploaded,loaded,setTime}=fixture(),map=stream.texture('shared');
  stream.request([map]);await flush();setTime(13);stream.request([map],undefined,2);work.pump(1);await stream.settle();
  assert.equal(stream.ready([map]),true);assert.deepEqual(loaded,['shared']);assert.deepEqual(uploaded,['shared']);
  stream.dispose();work.dispose();
});

test('level disposal resolves staged actor work without a future frame or a disposed-handle upload',async()=>{
  const {stream,work,uploaded,released}=fixture(),map=stream.texture('dispose');stream.request([map]);await flush();
  const pending=Promise.all([...stream.pending]);assert.equal(work.jobs.length,1);stream.dispose();await pending;
  assert.equal(stream.pending.size,0);assert.equal(map.image,null);assert.deepEqual(uploaded,[]);assert.equal(released.length,2);
  work.pump(1);assert.equal(work.stats.cancelled,1);assert.deepEqual(uploaded,[]);work.dispose();
});

test('preparation failures propagate through settle and never expose a ready placeholder',async()=>{
  const failure=new Error('texture upload failed'),{stream,work,released}=fixture({upload:()=>{throw failure;}}),map=stream.texture('broken');
  stream.request([map]);await assert.rejects(stream.settle(),error=>error===failure);
  assert.equal(stream.ready([map]),false);assert.equal(stream.error,failure);assert.equal(released.length,1);
  stream.dispose();work.dispose();
});

test('without a shared work queue the standalone actor loader remains immediately usable',async()=>{
  const {stream,work,uploaded}=fixture({work:null}),map=stream.texture('standalone');stream.request([map]);await stream.settle();
  assert.deepEqual(uploaded,['standalone']);assert.equal(stream.ready([map]),true);assert.equal(work.jobs.length,0);stream.dispose();work.dispose();
});


test('GPU eviction invalidates readiness and re-entry budgets a retained decoded-image upload without fetching again',async()=>{
  const {stream,work,uploaded,loaded}=fixture(),map=stream.texture('reenter');stream.request([map]);await stream.settle();
  assert.equal(stream.ready([map]),true);const image=map.image;map.dispose();
  assert.equal(stream.ready([map]),false);assert.equal(map.image,image,'GPU eviction keeps the decoded-image grace');
  stream.request([map],undefined,2);await flush();assert.equal(work.jobs.length,1);assert.deepEqual(uploaded,['reenter']);
  work.pump(20);await stream.settle();assert.equal(stream.ready([map]),true);assert.deepEqual(loaded,['reenter']);assert.deepEqual(uploaded,['reenter','reenter']);
  stream.dispose();work.dispose();
});

test('GPU-evicted retained images still expire and a later owner fetches fresh artwork',async()=>{
  const {stream,work,loaded,setTime}=fixture(),map=stream.texture('evicted');stream.request([map]);await stream.settle();map.dispose();
  setTime(13);stream.trim();assert.equal(map.image,stream.placeholder);assert.equal(stream.entries.get('evicted').decoded,false);
  stream.request([map]);await stream.settle();assert.deepEqual(loaded,['evicted','evicted']);assert.equal(stream.ready([map]),true);
  stream.dispose();work.dispose();
});
