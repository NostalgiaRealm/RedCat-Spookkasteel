import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Group,Mesh,BufferGeometry,MeshBasicMaterial} from 'three';
import {pickupBounds,pickupPlacement,PICKUP_HEIGHT,PICKUP_FLOOR_DEPTH} from '../src/pickup-placement.js';
import {BspCollider} from '../src/collision.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {CastleWorld,triggerOnlyModels} from '../src/world.js';
import {transformMotionPoint} from '../src/motions.js';
const json=p=>JSON.parse(readFileSync(new URL('../'+p,import.meta.url)));
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-6,`${a} != ${b}`);
const origin=o=>o.entity.Origin.split(/\s+/).map(Number);
function setup(level) {
 const game=new Gameplay(level,{deferInit:true}),collider=new BspCollider(level.collision);
 const names=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)]));
 const triggers=triggerOnlyModels(level.entities,names),models=level.collision.models.map((_,i)=>i).filter(i=>!triggers.has(i));
 for(const o of game.objects.filter(o=>o.kind==='pickup'))o.pickupPlacement=pickupPlacement(origin(o),pickupBounds(json(`assets/actors/${o.actorFile}.json`),o.entity),
  (a,b,lo,hi)=>collider.trace(a,b,lo,hi,models,null));
 return {game,collider};
}

test('native item sweep uses its scaled actor box, Y+1 start, 100 meters down and an 18 unit offset',()=>{
 const data=json('assets/actors/ihealthl.json'),bounds=pickupBounds(data),p=[10,60,20];
 near(bounds.min[1],data.bounds.min[2]*5);
 near(bounds.max[1],data.bounds.max[2]*5);
 const result=pickupPlacement(p,bounds,(start,end,mins,maxs)=>{
  assert.deepEqual(start,[10,61,20]);assert.deepEqual(end,[10,60-3200,20]);
  assert.deepEqual(mins,bounds.min);assert.deepEqual(maxs,bounds.max);
  return {startSolid:false,fraction:.02,end:[10,4,20],modelIndex:7};
 });
 assert.equal(PICKUP_FLOOR_DEPTH,3200);assert.equal(PICKUP_HEIGHT,18);
 assert.equal(result.offsetY,-38);assert.equal(result.supported,true);
 assert.deepEqual(p,[10,60,20]);
});

test('no floor and embedded sweeps retain the authored height plus the native offset',()=>{
 const bounds={min:[-5,0,-5],max:[5,20,5]};
 for(const hit of [{fraction:1,startSolid:false},{fraction:0,startSolid:true},{fraction:.5,startSolid:true}]){
  const result=pickupPlacement([0,-208,0],bounds,()=>({...hit,end:[0,-3408,0]}));
  assert.equal(result.supported,false);assert.equal(result.floorY,-208);assert.equal(result.offsetY,18);
 }
});

test('the reported castle potion and all five levels use supporting geometry, preserving authored X/Z',()=>{
 const counts=[],supported=[];
 for(let i=0;i<5;i++){
  const {game}=setup(json(`data/levels/lvl0${i}a/level.json`)),items=game.objects.filter(o=>o.kind==='pickup');
  counts.push(items.length);supported.push(items.filter(o=>o.pickupPlacement.supported).length);
  for(const o of items){const p=game.objectPosition(o);assert.ok(p.every(Number.isFinite));assert.equal(p[0],origin(o)[0]);assert.equal(p[2],origin(o)[2]);}
  if(i===1){const potion=items.find(o=>o.id==='ItemPotion27');near(game.objectPosition(potion)[1],-30.06936900019646);assert.deepEqual(potion.position,[391,29,1855]);}
 }
 assert.deepEqual(counts,[40,78,123,154,42]);assert.deepEqual(supported,[39,68,122,154,42]);
});

test('all nine authored model attachments move from their settled anchor and survive repeated saves without drift',()=>{
 let count=0;
 for(let i=0;i<5;i++){
  const level=json(`data/levels/lvl0${i}a/level.json`),{game}=setup(level);
  const host=new ScriptHost(game,{version:27},{motions:{motions:[]}});
  for(const o of game.objects.filter(o=>o.kind==='pickup'&&o.modelIndex!==undefined)){
   count++;const settled=game.objectPosition(o),p=[...o.position];
   const pose={origin:level.collision.models[o.modelIndex].origin,translation:[40,125,-60],rotation:[0,Math.SQRT1_2,0,Math.SQRT1_2]};
   host.modelTransforms.set(o.modelIndex,pose);
   const expected=transformMotionPoint(settled,pose.origin,pose);
   assert.deepEqual(game.objectPosition(o),expected);
   for(let j=0;j<3;j++){
    const saved=JSON.parse(JSON.stringify(game.snapshot())),{game:restored}=setup(level);
    restored.restore(saved);const other=restored.objects.find(x=>x.id===o.id);
    const otherHost=new ScriptHost(restored,{version:27},{motions:{motions:[]}});otherHost.modelTransforms.set(o.modelIndex,pose);
    assert.deepEqual(other.position,p);assert.deepEqual(restored.objectPosition(other),expected);
    game.restore(JSON.parse(JSON.stringify(restored.snapshot())));
   }
   // A collected mirror or potion remains collected after restoring.
   game.pickup(o);const saved=game.snapshot(),{game:restored}=setup(level);restored.restore(saved);
   assert.equal(restored.objects.find(x=>x.id===o.id).collected,true);
  }
 }
 assert.equal(count,9);
});

test('rendered pickups do not bob and the score effect uses the settled pickup position',()=>{
 const {game}=setup(json('data/levels/lvl01a/level.json')),potion=game.objects.find(o=>o.id==='ItemPotion27');
 const world=new CastleWorld({},{}),actor=new Group(),mesh=new Mesh(new BufferGeometry(),new MeshBasicMaterial());actor.add(mesh);
 actor.userData.mesh=mesh;actor.userData.template={data:{settings:{rotationDegreesPerSecond:[0,100,0]}}};
 world.gameplay=game;world.actorInstances.set(potion.id,actor);world.scene.add(actor);
 const expected=game.objectPosition(potion);
 for(const dt of [0,.1,1,2,10]){world.syncActors(dt);assert.deepEqual(actor.position.toArray(),expected);}
 game.pickup(potion);assert.equal(potion.collected,true);assert.deepEqual(game.rewardEffects.at(-1).position,expected);
 world.syncActors(0);assert.equal(actor.visible,false);
});
