import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {StreamingWorkQueue} from '../source/streaming-work.js';
import {StreamingGpuPreparation} from '../source/streaming-gpu-preparation.js';

test('streaming preparation shares one frame budget, prioritizes visible work and cancels obsolete rooms',async()=>{
  let time=0,valid=true;const ran=[],work=new StreamingWorkQueue({clock:()=>time,budgetMs:1,maxJobs:3});
  const jobs=Array.from({length:8},(_,i)=>work.enqueue(()=>{ran.push(i);time+=.6;return i;},{valid:()=>i!==0||valid,priority:()=>i===7?2:0}));
  valid=false;work.pump(1);assert.deepEqual(ran,[7,1]);assert.equal(work.stats.cancelled,1);
  work.pump(1);assert.deepEqual(ran,[7,1],'polling again in the same frame cannot spend another budget');
  work.pump(2);assert.deepEqual(ran,[7,1,2,3]);
  await work.waitFor(Promise.all(jobs));assert.equal(ran.length,7);assert.equal(work.stats.maxJobs,2);
  assert.equal(work.stats.pending,0);work.dispose();
});

test('a burst of tiny jobs is capped even on a fast CPU and explicit loading yields between budgets',async()=>{
  let yields=0;const work=new StreamingWorkQueue({clock:()=>0,maxJobs:3,yieldFrame:async()=>{yields++;}});
  const done=Promise.all(Array.from({length:20},()=>work.enqueue(()=>1)));
  await work.waitFor(done);assert.equal(work.stats.maxJobs,3);assert.ok(yields>=7);
  assert.equal((await done).reduce((a,b)=>a+b),20);work.dispose();
});

test('preparation errors propagate, while disposing cancels all queued work without running it',async()=>{
  const work=new StreamingWorkQueue(),error=new Error('upload failed');
  const bad=work.enqueue(()=>{throw error;}),check=assert.rejects(bad,e=>e===error);work.pump();await check;assert.equal(work.error,error);
  let ran=0;const pending=work.enqueue(()=>ran++);work.dispose();assert.equal(await pending,null);assert.equal(ran,0);
  assert.equal(await work.enqueue(()=>ran++),null);assert.equal(ran,0);
});

function rendererFixture() {
  const target={name:'display target'},renderer={target,face:2,mip:1,autoClear:true,xr:{enabled:true},shadowMap:{autoUpdate:true},draws:[],
    getRenderTarget(){return this.target;},getActiveCubeFace(){return this.face;},getActiveMipmapLevel(){return this.mip;},
    setRenderTarget(target,face=0,mip=0){this.target=target;this.face=face;this.mip=mip;},
    render(scene){const mesh=scene.children[0];this.draws.push({target:this.target,geometry:mesh.geometry,range:{...mesh.geometry.drawRange}});}};
  return {renderer,target};
}

test('GPU preparation is deduplicated, draws zero triangles privately, restores state and rewarms after eviction',async()=>{
  const {renderer,target}=rendererFixture(),work=new StreamingWorkQueue(),prep=new StreamingGpuPreparation(renderer,work),geometry=new THREE.BoxGeometry();
  geometry.setDrawRange(3,12);prep.request(geometry);prep.request(geometry);assert.equal(work.jobs.length,1);
  await prep.settle();assert.equal(prep.ready(geometry),true);assert.equal(renderer.draws.length,1);
  assert.notEqual(renderer.draws[0].target,target);assert.equal(renderer.draws[0].range.count,0);
  assert.deepEqual(geometry.drawRange,{start:3,count:12});assert.equal(renderer.target,target);assert.equal(renderer.face,2);assert.equal(renderer.mip,1);
  assert.equal(renderer.autoClear,true);assert.equal(renderer.xr.enabled,true);assert.equal(renderer.shadowMap.autoUpdate,true);
  geometry.dispose();assert.equal(prep.ready(geometry),false);prep.request(geometry);await prep.settle();assert.equal(renderer.draws.length,2);
  prep.dispose();work.dispose();geometry.dispose();
});

test('obsolete actor buffer uploads are cancelled and GPU exceptions leave the displayed target unchanged',async()=>{
  const {renderer,target}=rendererFixture(),work=new StreamingWorkQueue(),prep=new StreamingGpuPreparation(renderer,work),geometry=new THREE.BoxGeometry();
  prep.request(geometry,()=>false);await prep.settle();assert.equal(renderer.draws.length,0);assert.equal(prep.ready(geometry),false);
  renderer.render=()=>{throw new Error('GPU upload failure');};prep.request(geometry);
  await assert.rejects(prep.settle(),/GPU upload failure/);assert.equal(renderer.target,target);assert.equal(prep.ready(geometry),false);
  assert.equal(geometry.drawRange.count,Infinity);prep.dispose();work.dispose();geometry.dispose();
});
