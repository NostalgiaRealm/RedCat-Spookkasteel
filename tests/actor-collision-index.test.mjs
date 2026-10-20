import test from 'node:test';
import assert from 'node:assert/strict';
import {ActorCollisionIndex} from '../src/actor-collision-index.js';
import {traceActors,triangleCollider} from '../src/actor-collision.js';

const result=()=>({fraction:1,startSolid:false,normal:[0,1,0],modelIndex:null});
function place(record,x,y=0,z=0){record.min=[x,y-20,z-20];record.max=[x,y+20,z+20];record.triangles=[triangleCollider([[x,y-20,z-20],[x,y+20,z-20],[x,y+20,z+20]]),triangleCollider([[x,y-20,z-20],[x,y+20,z+20],[x,y-20,z+20]])];return record;}
const actor=(id,x,y,z)=>place({id,blocksPlayer:true,canBeShot:true,blocksLOS:false,supportModelIndex:id%9,active:()=>true},x,y,z);
const sweep=(actors,a,b,mins=[-1,-2,-1],maxs=[1,2,1],mask='blocksPlayer')=>traceActors(actors,a,b,mins,maxs,result(),mask);

test('managed candidate grid preserves exact ordered contacts for seeded actor sweeps and filters',()=>{
  let seed=7181;const random=()=>{seed=(Math.imul(seed,1664525)+1013904223)>>>0;return seed/4294967296;};
  const plain=Array.from({length:400},(_,i)=>actor(i,Math.floor(random()*64-32)*64,Math.floor(random()*8-4)*64,Math.floor(random()*64-32)*64));
  const managed=[...plain],index=new ActorCollisionIndex(managed);
  for(let i=0;i<2000;i++){
    const target=plain[i%plain.length],centre=target.min.map((v,j)=>(v+target.max[j])/2);
    const a=centre.map((v,j)=>v+(j===0?-80:(random()-.5)*80)),b=centre.map((v,j)=>v+(j===0?80:(random()-.5)*80));
    const mask=i%4===0?'blocksLOS':i%4===1?{mask:'canBeShot',ignoreId:i%400}:i%4===2?{mask:'blocksPlayer',ignoreSupportModelIndex:i%9}:'blocksPlayer';
    assert.deepEqual(sweep(managed,a,b,undefined,undefined,mask),sweep(plain,a,b,undefined,undefined,mask));
    if(i%7===0){const moved=plain[(i*13)%plain.length];place(moved,moved.min[0]+29,moved.min[1]+20,moved.min[2]+20);index.update(moved);}
  }
  assert.ok(index.stats.candidates<index.stats.queries*plain.length/10,'queries should test a small local subset');
});

test('same-cell motion and state changes reuse candidates while contacts remain current',()=>{
  const events=[],a=actor('a',20,0,0),b=actor('b',30,0,0),c=actor('c',900,0,0),plain=[a,b,c],managed=[...plain],index=new ActorCollisionIndex(managed);
  for(const record of plain)record.active=()=>{events.push(record.id);return !record.hidden;};
  for(const x of [20,25,255,256,257,-1,-256,-257,900]){
    place(a,x);index.update(a);b.hidden=x===25;
    events.length=0;const expected=sweep(plain,[-300,0,0],[300,0,0]),order=[...events];events.length=0;
    assert.deepEqual(sweep(managed,[-300,0,0],[300,0,0]),expected);assert.deepEqual(events,order);
  }
  assert.ok(index.stats.cacheHits>0);
});

test('cell boundaries retain the existing contact epsilon on every axis and sign',()=>{
  for(let axis=0;axis<3;axis++)for(const sign of [-1,1])for(const boundary of [-256,0,256])for(const gap of [0,5e-8,2e-7]){
    let calls=0;const point=[0,0,0];point[axis]=boundary;
    const min=[-1,-1,-1],max=[1,1,1];min[axis]=max[axis]=boundary+sign*gap;
    const record={id:'edge',blocksPlayer:true,min,max,triangles:[],active:()=>{calls++;return true;}};
    const managed=[record];new ActorCollisionIndex(managed);
    traceActors(managed,point,point,[0,0,0],[0,0,0],result());assert.equal(calls,Number(gap<=1e-7));
  }
});

test('oversized actors and long rays fall back conservatively with the authored tie order',()=>{
  const a=actor('first',0,0,0),b=actor('second',0,0,0),huge=actor('huge',20,0,0);huge.min=[-10000,-10000,-10000];huge.max=[10000,10000,10000];
  const plain=[a,b,huge],managed=[...plain],index=new ActorCollisionIndex(managed,{maxActorCells:8,maxQueryCells:8});
  assert.deepEqual(sweep(managed,[-30,0,0],[30,0,0]),sweep(plain,[-30,0,0],[30,0,0]));
  assert.equal(sweep(managed,[-30,0,0],[30,0,0]).actorId,'first','equal hits keep the original traversal order');
  assert.deepEqual(sweep(managed,[-100000,0,0],[100000,0,0]),sweep(plain,[-100000,0,0],[100000,0,0]));assert.ok(index.stats.fallbackQueries>0);
});

test('managed append, removal and conservative pose bounds stay synchronized',()=>{
  const a=actor('a',0,0,0),managed=[a],index=new ActorCollisionIndex(managed),b=actor('b',40,0,0);
  index.add(b);index.add(b);assert.equal(managed.length,2);
  const c=actor('c',80,0,0);managed.push(c);
  assert.deepEqual(sweep(managed,[60,0,0],[100,0,0]),sweep([...managed],[60,0,0],[100,0,0]));
  managed.splice(0,1);assert.deepEqual(sweep(managed,[-20,0,0],[20,0,0]),sweep([...managed],[-20,0,0],[20,0,0]));
  b.broadphaseMin=[-500,-500,-500];b.broadphaseMax=[500,500,500];index.update(b);
  assert.deepEqual(sweep(managed,[20,0,0],[60,0,0]),sweep([...managed],[20,0,0],[60,0,0]));
  assert.equal(Object.keys(managed).includes('queryBounds'),false);
});
