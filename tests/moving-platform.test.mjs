import test from 'node:test';
import assert from 'node:assert/strict';
import {CastleWorld} from '../src/world.js';
import {BspCollider,PlayerController} from '../src/collision.js';
import {ScriptHost} from '../src/script-host.js';
function platform(teleport=false) {
  const data={planes:[[1,0,0,100],[-1,0,0,100],[0,1,0,10],[0,-1,0,10],[0,0,1,100],[0,0,-1,100]],nodes:[],
    leaves:[{contents:1,firstSide:0,numSides:6,min:[-100,-10,-100],max:[100,10,100]}],leafSides:Array.from({length:6},(_,i)=>[i,0]),models:[null,{root:-1}]};
  const collider=new BspCollider(data),player=new PlayerController(collider,[0,10.05,0],[1]);player.grounded=true;
  const world=Object.create(CastleWorld.prototype);
  Object.assign(world,{elapsed:0,collider,player,physicalModels:[1],modelMeshes:new Map(),actorInstances:new Map(),yaw:0,pitch:0,level:{bounds:{min:[-100,-100,-100]}},updateCamera(){},cameraControl:{sync(){}},updateTargeting(){},syncTargetMarker(){},syncActors(){},syncProjectiles(){}});
  const object={id:'floor',kind:'controller',enabled:true,modelIndex:1,entity:{InitialPosition:0,RepeatMode:0}};
  const clip={model:1,origin:[0,0,0],startTime:0,endTime:.05,
    paths:[{translation:{times:[0,.05],values:[0,0,0,3,5,0],interpolation:0}}],events:teleport?[{time:.05,label:'teleport'}]:[]};
  const game={objects:[object],state:{health:1,skill:0},environmentVelocity:()=>[0,0,0],update(){},runEvent(object,event,args){
    if(event==='MotionCommand'&&args[0]==='teleport'){player.position=[500,100,500];host.cutscene=true;}
  }};
  const host=new ScriptHost(game,{version:27},{motions:{motions:[clip]}});host.startMotion(object);
  world.gameplay=game;collider.modelTransforms=host.modelTransforms;
  return world;
}
test('player rides a translated floor while collision remains solid at its new position',()=>{
  const world=platform();world.update(.05,{forward:0,right:0});
  assert.ok(Math.abs(world.player.position[0]-3)<.001);
  assert.ok(Math.abs(world.player.position[1]-15.05)<.001);
  assert.equal(world.player.grounded,true);
});
test('script teleport supersedes floor carry during the same frame',()=>{
  const world=platform(true);world.update(.05,{forward:0,right:0});
  assert.deepEqual(world.player.position,[500,100,500]);
});
