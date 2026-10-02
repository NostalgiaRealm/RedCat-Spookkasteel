import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {EnemyTargeting,targetableObject,targetAimPoint,transformedTargetBounds,targetMarkerPose} from '../src/targeting.js';
import {CastleWorld} from '../src/world.js';
const button=(extra={})=>({id:'bridge',kind:'button',position:[0,0,-100],health:1,entity:{ShootToSwitch:'1',MaxSwitchTimes:'1'},switchCount:0,...extra});
test('only enemies, shootable buttons and explicitly targetable shootable props participate',()=>{
 const b=button();assert.ok(targetableObject(b));b.switchCount=1;assert.equal(targetableObject(b),false);
 assert.equal(targetableObject(button({entity:{ShootToSwitch:1,MaxSwitchTimes:0}})),false);
 assert.equal(targetableObject(button({entity:{TouchToSwitch:1}})),false);
 const box={kind:'actor',health:2,entity:{Targetable:'1'},actorSettings:{destroyable:true,canBeShot:true}};
 assert.ok(targetableObject(box));box.actorSettings.canBeShot=false;assert.equal(targetableObject(box),false);
 assert.equal(targetableObject({kind:'actor',health:1,actorSettings:{}}),false);
 for(const Targetable of ['0',undefined])assert.equal(targetableObject({...box,entity:{Targetable},actorSettings:{destroyable:true,canBeShot:true}}),false);
 for(const kind of ['controller','door'])assert.equal(targetableObject({kind,health:1,entity:{OnHitCommand:'door.open'}}),false);
 assert.ok(targetableObject({kind:'enemy',health:2}));
 assert.equal(targetableObject(button({targetAvailable:false})),false);
});
test('selection and animated ring use the transformed brush instead of its displaced editor origin',()=>{
 const model={min:[-362,-16.899435,1069],max:[-338,3.100586,1077]},b=button({position:[-351,-8,1086],targetBounds:transformedTargetBounds(model)});
 const center=targetAimPoint(b);assert.deepEqual(center,[-350,-6.8994245,1073]);
 const pose={origin:[-350,-6.8994245,1073],translation:[10,20,30],rotation:[0,Math.SQRT1_2,0,Math.SQRT1_2]};
 b.targetBounds=transformedTargetBounds(model,pose);
 const moved=targetAimPoint(b);moved.forEach((v,i)=>assert.ok(Math.abs(v-(center[i]+pose.translation[i]))<1e-8));
 assert.ok(Math.abs(b.targetBounds.max[0]-b.targetBounds.min[0]-8)<1e-8);
 const selector=new EnemyTargeting(),position=[moved[0],moved[1]-45,moved[2]+200];
 let checked;
 assert.equal(selector.update({time:0,objects:[b],position,yaw:0,attack:true,lineOfSight:(a,end)=>{checked=end;return true;}}),b);
 assert.deepEqual(checked,moved);assert.equal(selector.locked,true);
 const ring=targetMarkerPose(b,[moved[0],moved[1],moved[2]+200],1);
 assert.ok(ring.position[2]>b.targetBounds.max[2]);assert.equal(ring.width,50);
 b.switchCount=1;assert.equal(selector.update({time:.01,objects:[b],position,yaw:0,attack:true}),null);
});
test('actors take priority over button fallback, with occlusion and a stable firing lock',()=>{
 const selector=new EnemyTargeting(),b=button(),box={id:'crate',kind:'actor',position:[0,0,-200],health:2,entity:{Targetable:'1'},actorSettings:{destroyable:true,canBeShot:true}};
 const lamp={...box,id:'lamp',position:[0,0,-10],entity:{Targetable:'0'}};
 const tick=(extra={})=>selector.update({time:0,objects:[lamp,b,box],position:[0,0,0],yaw:0,...extra});
 assert.equal(tick({lineOfSight:(a,end,o)=>o!==box}),b);
 assert.equal(tick({time:.6,attack:true}),box);box.position[2]=-400;
 assert.equal(tick({time:1.2,attack:true}),box);
 box.targetAvailable=false;assert.equal(tick({time:1.3,attack:true}),b);
 b.targetAvailable=false;box.targetAvailable=true;box.position[2]=200;assert.equal(tick({time:1.4}),null);
 box.position[2]=-500;assert.equal(tick({time:2}),null);
});

test('native button fallback reaches nine times the actor range while retaining cone and visibility checks',()=>{
 const selector=new EnemyTargeting(),b=button({position:[0,0,-1500],targetBounds:{min:[-10,35,-1505],max:[10,55,-1495]}});
 const tick=(extra={})=>{selector.clear();return selector.update({time:0,objects:[b],position:[0,0,0],yaw:0,range:480,...extra});};
 assert.equal(tick(),b);assert.equal(tick({lineOfSight:()=>false}),null);assert.equal(tick({yaw:Math.PI}),null);
 b.targetBounds={min:[-10,0,-4315],max:[10,20,-4305]};assert.equal(tick(),b);
 b.targetBounds={min:[-10,0,-4335],max:[10,20,-4325]};assert.equal(tick(),null);
});

test('world targeting rejects walls near distant buttons and accepts only a clear ray or the selected hull',()=>{
 const b=button({position:[0,0,-1500],modelIndex:47}),models=[];
 models[47]={min:[-10,35,-1505],max:[10,55,-1495]};
 let hit={fraction:.99,modelIndex:0};
 const world={gameplay:{objects:[b],time:0,settings:{},state:{health:10,skill:1},modelState:()=>({visible:true})},
  level:{collision:{models}},player:{position:[0,0,0]},yaw:0,targeting:new EnemyTargeting(),
  collider:{trace:()=>hit},physicalModels:[0,47]};
 const tick=()=>{world.targeting.clear();CastleWorld.prototype.updateTargeting.call(world,0,{attack:false});return world.targeting.target;};
 assert.equal(tick(),null,'a wall 15 units before the button still occludes it');
 hit={fraction:.95,modelIndex:47};assert.equal(tick(),b,'the target button hull is a valid end hit');
 hit={fraction:1};assert.equal(tick(),b);
});

test('original level target flags select the twelve crates and reject decorative actors throughout the campaign',()=>{
 const read=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
 const counts=[];let rejectedLights=0;
 for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']){
  const level=read(`data/levels/${id}/level.json`),selected=[];
  for(const entity of level.entities.filter(e=>e.classname==='AdamAnyActor')){
   const actor=entity.ActorFileName.toLowerCase().replace(/\.act$/,''),settings=read(`assets/actors/${actor}.json`).settings;
   const object={kind:'actor',health:1,entity,actorSettings:settings};
   if(targetableObject(object))selected.push(actor);
   if(/torch|lamp|kandela|krnlchtr/.test(actor)&&settings.canBeShot&&settings.destroyable){assert.equal(targetableObject(object),false);rejectedLights++;}
  }
  assert.ok(selected.every(actor=>['brcrate','wkcrate'].includes(actor)));counts.push(selected.length);
 }
 assert.deepEqual(counts,[2,0,4,6,0]);assert.ok(rejectedLights>100);
 const castle=read('data/levels/lvl01a/level.json'),entity=castle.entities.find(e=>e.DaviName==='knopbridge');
 assert.equal(entity.ShootToSwitch,'1');assert.equal(entity.OnHitCommand,'');
 assert.ok(targetableObject({kind:'button',health:1,switchCount:0,entity}));
});

test('world aiming updates shootable bounds without sampling decorative models and recovers hidden buttons',()=>{
 const shoot=button({modelIndex:1}),door={kind:'door',modelIndex:2},touch=button({id:'touch',modelIndex:3,entity:{TouchToSwitch:'1'}});
 const lamp={id:'lamp',kind:'actor',entity:{Targetable:'0'},actorSettings:{canBeShot:true}};
 const crate={id:'crate',kind:'actor',health:2,position:[0,0,-200],entity:{Targetable:'1'},actorSettings:{canBeShot:true}};
 const bounds={min:[-10,0,-210],max:[10,30,-190]},models=[];models[1]={min:[-10,35,-105],max:[10,55,-95]};
 let visible=false;const queried=[];
 const world={gameplay:{objects:[door,touch,lamp,shoot,crate],time:0,settings:{},state:{health:10,skill:1},
   modelState:index=>{queried.push(index);assert.equal(index,1);return {visible};}},
  actorInstances:new Map([['crate',{userData:{collisionRecord:bounds}}]]),
  level:{collision:{models}},player:{position:[0,0,0]},yaw:0,targeting:new EnemyTargeting(),
  collider:{trace:()=>({fraction:1})},physicalModels:[0,1]};
 const tick=()=>{world.targeting.clear();CastleWorld.prototype.updateTargeting.call(world,0,{attack:false});};
 tick();assert.equal(shoot.targetAvailable,false);assert.deepEqual(crate.targetBounds,bounds);assert.equal(world.targeting.target,crate);
 visible=true;crate.health=0;tick();assert.equal(shoot.targetAvailable,true);assert.equal(world.targeting.target,shoot);
 assert.deepEqual(queried,[1,1]);
 for(const object of [door,touch,lamp])assert.equal(object.targetBounds,undefined);
});
