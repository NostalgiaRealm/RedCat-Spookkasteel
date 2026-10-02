import test from 'node:test';
import assert from 'node:assert/strict';
import {traceActors,triangleCollider} from '../src/actor-collision.js';

const result=()=>({fraction:1,normal:[0,1,0],startSolid:false,modelIndex:null});
const wall=()=>({id:'wall',supportModelIndex:7,blocksPlayer:true,canBeShot:true,blocksLOS:false,
  min:[0,-20,-20],max:[0,20,20],triangles:[
    triangleCollider([[0,-20,-20],[0,20,-20],[0,20,20]]),
    triangleCollider([[0,-20,-20],[0,20,20],[0,-20,20]])]});
const sweep=(actors,mask='blocksPlayer')=>traceActors(actors,[-10,0,0],[10,0,0],[-1,-1,-1],[1,1,1],result(),mask);

test('actor broad phase skips distant state predicates but still checks nearby dormant and hidden actors',()=>{
  const actor=wall(),state={enabled:false,visible:true};let calls=0;
  actor.active=()=>{calls++;return state.enabled&&state.visible;};
  actor.min=[100,-20,-20];actor.max=[100,20,20];assert.equal(sweep([actor]).fraction,1);assert.equal(calls,0);
  actor.min=[0,-20,-20];actor.max=[0,20,20];assert.equal(sweep([actor]).fraction,1);assert.equal(calls,1);
  state.enabled=true;state.visible=false;assert.equal(sweep([actor]).fraction,1);assert.equal(calls,2);
  state.visible=true;const hit=sweep([actor]);assert.ok(hit.fraction<1);assert.equal(hit.actorId,actor.id);assert.equal(calls,3);
});

test('actor masks and ignored actor/support identities still bypass collision and state checks',()=>{
  const actor=wall();let calls=0;actor.active=()=>{calls++;return true;};
  for(const mask of ['blocksLOS',{mask:'canBeShot',ignoreId:'wall'},{mask:'blocksPlayer',ignoreSupportModelIndex:7}]) {
    assert.equal(sweep([actor],mask).fraction,1);assert.equal(calls,0);
  }
  assert.equal(sweep([actor],{mask:'canBeShot',ignoreId:'another-actor'}).actorId,'wall');assert.equal(calls,1);
  assert.equal(sweep([actor],{mask:'blocksPlayer',ignoreSupportModelIndex:8}).actorId,'wall');assert.equal(calls,2);
});

test('scalar actor bounds preserve touching and the original tolerance on every axis',()=>{
  for(let axis=0;axis<3;axis++)for(const sign of [-1,1])for(const gap of [0,5e-8,2e-7]) {
    let calls=0;const min=[-1,-1,-1],max=[1,1,1];min[axis]=max[axis]=sign*(1+gap);
    const actor={id:'boundary',blocksPlayer:true,min,max,triangles:[],active:()=>{calls++;return true;}};
    traceActors([actor],[0,0,0],[0,0,0],[-1,-1,-1],[1,1,1],result());
    assert.equal(calls,Number(gap<=1e-7),`axis ${axis}, sign ${sign}, gap ${gap}`);
  }
});

test('an exactly touching actor surface allows moving away and still blocks moving into it',()=>{
  const actor=wall(),away=traceActors([actor],[-1,0,0],[-20,0,0],[-1,-1,-1],[1,1,1],result());
  assert.equal(away.fraction,1);assert.equal(away.startSolid,false);
  const inward=traceActors([actor],[-1,0,0],[20,0,0],[-1,-1,-1],[1,1,1],result());
  assert.equal(inward.fraction,0);assert.equal(inward.actorId,'wall');assert.deepEqual(inward.normal,[-1,0,0]);
});
