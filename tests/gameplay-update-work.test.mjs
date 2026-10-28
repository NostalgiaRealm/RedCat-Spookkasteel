import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../source/gameplay.js';
import {ScriptHost} from '../source/script-host.js';

const entity=(classname,name,extra={})=>({classname,'%name%':name,DaviName:name,Origin:'0 0 0',...extra});
const level=entities=>({id:'update-work',entities});

test('pickup checks keep authored trigger order without querying unrelated object positions',()=>{
  const events=[],game=new Gameplay(level([
    entity('ItemPotion','before',{IsInitiallyEnabled:'0'}),
    ...Array.from({length:100},(_,i)=>entity('GrobberPathPoint',`point${i}`)),
    entity('Trigger','enable',{CommandOnEnter:'before.enable; after.enable',MaxTriggerTimes:'1'}),
    entity('ItemPotion','after',{IsInitiallyEnabled:'0'})
  ]),{onEvent:event=>events.push(event)});
  const positions=[],objectPosition=game.objectPosition.bind(game);
  game.objectPosition=object=>{positions.push(object.id);return objectPosition(object);};
  game.update(.02,[0,0,0]);
  assert.equal(game.find('before')[0].collected,false,'earlier objects wait for the next frame');
  assert.equal(game.find('after')[0].collected,true,'a later enabled pickup is collected this frame');
  game.update(.02,[0,0,0]);
  assert.deepEqual(events.filter(event=>event.type==='pickup').map(event=>event.id),['after','before']);
  assert.equal(game.state.potions,2);
  assert.deepEqual(positions.filter(id=>id!=='before'&&id!=='after'),[],
    'logic and trigger positions must not be queried for an unused pickup distance');
});

test('pickup checks retain settled anchors, current support transforms and line of sight',()=>{
  const game=new Gameplay(level([
    entity('%Model%','support',{Model:'1'}),
    entity('ItemPotion','mounted',{Origin:'1000 0 0',Model:'support'})
  ])),host=new ScriptHost(game,{version:27}),pickup=game.find('mounted')[0];
  pickup.pickupPlacement={offsetY:18};
  host.modelTransforms.set(1,{origin:[0,0,0],translation:[-1000,0,0],rotation:[0,0,0,1]});
  const rays=[];
  game.update(.02,[0,0,0],{lineOfSight:(from,to)=>{rays.push([from,to]);return false;}});
  assert.equal(pickup.collected,false);
  game.update(.02,[0,0,0],{lineOfSight:(from,to)=>{rays.push([from,to]);return true;}});
  assert.equal(pickup.collected,true);
  assert.deepEqual(rays,Array.from({length:2},()=>[[0,22,0],[0,36,0]]));
  assert.deepEqual(game.rewardEffects[0].position,[0,18,0]);
  assert.deepEqual(pickup.position,[1000,0,0],'the authored anchor must not accumulate its support transform');
});

function movingHost() {
  const game=new Gameplay(level([
    entity('%Model%','brush',{Model:'1'}),
    entity('ModelController','mover',{Model:'brush'})
  ]));
  const clip={model:1,origin:[12,0,4],startTime:0,endTime:1,paths:[{
    translation:{times:[0,1],values:[0,0,0,10,0,0],interpolation:0}
  }],events:[{time:0,label:'start'},{time:.5,label:'middle'},{time:1,label:'end'}]};
  const host=new ScriptHost(game,{version:27},{motions:{motions:[clip]}}),object=game.find('mover')[0],player=host.players.get(object.id);
  const events=[],samples=[],sample=player.sample.bind(player);
  player.sample=(...args)=>{const pose=sample(...args);samples.push(pose);return pose;};
  game.runEvent=(_object,event,args)=>{if(event==='MotionCommand')events.push(args[0]);};
  host.startMotion(object);
  return {game,host,object,player,events,samples};
}

function assertSingleFinalPose(scene,dt) {
  const before=scene.samples.length;
  scene.host.update(dt);
  assert.equal(scene.samples.length-before,1,'host must consume the final pose returned by the motion update');
  const actual=scene.host.modelTransforms.get(1),sample=scene.samples.at(-1);
  // ModelTransformMap stores frozen copies, so only value equality applies.
  assert.deepEqual(actual,{...sample,origin:scene.player.motion.origin});
}

test('brush host reuses the accepted final pose while blocked segments wait and resume',()=>{
  const scene=movingHost();let allowed=.4;
  scene.host.beforeMotionAdvance=(_object,_player,_from,to)=>to<=allowed;
  assertSingleFinalPose(scene,1);
  assert.equal(scene.player.time,0);assert.deepEqual(scene.events,['start']);
  allowed=.75;assertSingleFinalPose(scene,1);
  assert.equal(scene.player.time,.5);assert.deepEqual(scene.events,['start','middle']);
  allowed=1;assertSingleFinalPose(scene,1);
  assert.equal(scene.player.time,1);assert.deepEqual(scene.events,['start','middle','end']);
  assert.equal(scene.player.finished,true);assert.equal(scene.object.enabled,false);
});

test('brush host uses the final pose after a callback replaces playback',()=>{
  const scene=movingHost();
  scene.game.runEvent=(_object,event,args)=>{
    if(event!=='MotionCommand')return;
    scene.events.push(args[0]);
    if(args[0]==='middle')scene.player.play({from:.75,to:1});
  };
  assertSingleFinalPose(scene,1);
  assert.equal(scene.player.time,.75);assert.equal(scene.player.playing,true);
  assert.deepEqual(scene.events,['start','middle']);
  assert.deepEqual(scene.host.modelTransforms.get(1).translation,[7.5,0,0]);
  assertSingleFinalPose(scene,.25);
  assert.deepEqual(scene.events,['start','middle','end']);assert.equal(scene.player.finished,true);
});
