import test from 'node:test';
import assert from 'node:assert/strict';
import {MotionPlayer} from '../source/motions.js';
import {queueControllerTarget,restoreControllerTarget,updateControllerTarget} from '../source/model-controller-target.js';
const fixture=()=>{
  const object={enabled:true,motionSpeed:1},events=[],checks=[];
  const clip={startTime:0,endTime:2,paths:[],events:[{time:0,label:'start'},{time:.75,label:'a'},{time:1.25,label:'b'},{time:2,label:'end'}]};
  const player=new MotionPlayer(clip,{onEvent:e=>events.push([e.label,player.time]),onComplete:()=>{object.moving=false;},beforeAdvance:(from,to)=>{checks.push([from,to]);return true;}});
  return {object,player,events,checks,command:target=>queueControllerTarget(object,player,'move',target),tick:dt=>updateControllerTarget(object,player,dt)};
};

test('reverse target motion emits native ascending labels but collision travels toward the target',()=>{
  const f=fixture();f.player.seek(2);f.command(0);f.tick(2);
  assert.deepEqual(f.events,[['start',2],['a',2],['b',2]]);
  assert.deepEqual(f.checks,[[2,0]]);assert.equal(f.player.time,0);
  assert.equal(f.player.playing,true);assert.equal(f.player.finished,false,'exact equality does not clear target');
  f.tick(.01);assert.equal(f.player.playing,false);assert.equal(f.player.finished,true);assert.equal(f.object.enabled,true);
  assert.equal(f.events.length,3);assert.equal(f.checks.length,1);
});

test('forward target motion excludes its endpoint and includes it on a later interval only if moving beyond',()=>{
  const f=fixture();f.command(2);f.tick(.75);
  assert.deepEqual(f.events,[['start',0]]);f.tick(.5);
  assert.deepEqual(f.events,[['start',0],['a',.75]]);f.tick(.75);f.tick(.1);
  assert.deepEqual(f.events,[['start',0],['a',.75],['b',1.25]]);assert.equal(f.player.finished,true);
});

test('blocked target motion preserves native label-before-pose ordering without replaying labels on retry',()=>{
  const f=fixture();f.player.seek(2);f.command(.5);let blocked=true;
  f.player.beforeAdvance=()=>!blocked;f.tick(2);assert.equal(f.player.time,2);assert.deepEqual(f.events,[['a',2],['b',2]]);
  blocked=false;f.tick(2);assert.equal(f.player.time,.5);assert.deepEqual(f.events,[['a',2],['b',2]]);
  f.tick(2);assert.equal(f.events.length,2);
});

test('a native target label callback sees the old time and supersedes its pending position commit',()=>{
  const f=fixture();f.player.seek(2);f.command(.5);
  f.player.onEvent=e=>{f.events.push([e.label,f.player.time]);if(e.label==='a')f.command(0);};
  f.tick(2);assert.deepEqual(f.events,[['a',2]]);assert.equal(f.player.time,2);assert.deepEqual(f.checks,[],'replacement precedes any carrying collision guard');
  assert.equal(f.player.controllerTarget.target,0);assert.equal(f.player.controllerTarget.pending,true);
  f.player.onEvent=e=>f.events.push([e.label,f.player.time]);f.tick(.25);assert.equal(f.player.time,1.75);
});

test('exact-target pending completion persists through a motion snapshot and disabled update',()=>{
  const f=fixture();f.command(.75);f.tick(.75);
  const saved=JSON.parse(JSON.stringify({target:f.player.controllerTarget,time:f.player.time,from:f.player.from,to:f.player.to,playing:f.player.playing,finished:f.player.finished}));
  const g=fixture();g.player.play({from:saved.from,to:saved.to});g.player.seek(saved.time);g.player.playing=saved.playing;g.player.finished=saved.finished;restoreControllerTarget(g.player,saved.target);
  g.object.enabled=false;g.tick(.1);assert.equal(g.player.finished,false);assert.equal(g.player.time,.75);
  g.object.enabled=true;g.tick(0);assert.equal(g.player.finished,false);g.tick(.01);assert.equal(g.player.finished,true);assert.deepEqual(g.events,[]);
});


test('target label retry state survives save/load and a callback disabling midway',()=>{
  const f=fixture();f.player.seek(2);f.command(.5);
  f.player.onEvent=e=>{f.events.push([e.label,f.player.time]);if(e.label==='a'){f.object.enabled=false;f.player.stop();}};
  f.tick(2);assert.deepEqual(f.events,[['a',2]]);assert.equal(f.player.time,2);
  const save=JSON.parse(JSON.stringify(f.player.controllerTarget));
  const g=fixture();g.player.play({from:2,to:.5});g.player.stop();restoreControllerTarget(g.player,save);g.tick(2);
  assert.deepEqual(g.events,[['b',2]]);assert.equal(g.player.time,.5);assert.equal(g.player.finished,true);
  for(const mask of ['2','1'.repeat(99),null]){
    restoreControllerTarget(g.player,{kind:'move',target:1,eventMask:mask});assert.equal(g.player.controllerTarget.eventMask,undefined);
  }
});


test('SetTo keeps old time during callbacks and saves marker progress separately from a blocked pose',()=>{
  const f=fixture();let blocked=true;
  queueControllerTarget(f.object,f.player,'set',2);f.player.beforeAdvance=()=>!blocked;
  f.tick(.1);assert.deepEqual(f.events,[['start',0],['a',0],['b',0]]);assert.equal(f.player.time,0);
  const g=fixture();g.player.play({from:0,to:2});restoreControllerTarget(g.player,JSON.parse(JSON.stringify(f.player.controllerTarget)));
  g.tick(.1);assert.equal(g.player.time,2);assert.deepEqual(g.events,[]);assert.equal(g.player.finished,true);
  blocked=false;f.tick(.1);assert.equal(f.player.time,2);assert.equal(f.events.length,3);
  queueControllerTarget(g.object,g.player,'set',0);g.tick(.1);assert.equal(g.player.time,0);assert.deepEqual(g.events,[]);
});

test('SetTo replacement callbacks cannot carry the player using an obsolete final pose',()=>{
  const f=fixture();queueControllerTarget(f.object,f.player,'set',2);
  f.player.onEvent=e=>{f.events.push([e.label,f.player.time]);if(e.label==='a')f.command(1);};
  f.tick(.1);assert.deepEqual(f.events,[['start',0],['a',0]]);assert.equal(f.player.time,0);assert.deepEqual(f.checks,[]);
  assert.equal(f.player.controllerTarget.kind,'move');assert.equal(f.player.controllerTarget.target,1);
});
