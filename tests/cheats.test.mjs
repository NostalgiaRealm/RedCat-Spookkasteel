import test from 'node:test';
import assert from 'node:assert/strict';
import {grantCheatSupplies,safeFlightExit,setNoClip} from '../src/cheats.js';
import {PlayerController,BspCollider} from '../src/collision.js';
import {CastleWorld} from '../src/world.js';
import {Gameplay} from '../src/gameplay.js';

const level={id:'lvl00a',spawn:{position:[50,0,0]},bounds:{min:[-100,-100,-100],max:[100,100,100]},entities:[
  {classname:'ItemMirror','%name%':'exit',Origin:'80 0 0',PickupCommand:'RcEndLevel()'}
]};
const box={planes:[[1,0,0,10],[-1,0,0,10],[0,1,0,10],[0,-1,0,10],[0,0,1,10],[0,0,-1,10]],nodes:[],
  leaves:[{contents:1,firstSide:0,numSides:6,min:[-10,-10,-10],max:[10,10,10]}],leafSides:Array.from({length:6},(_,i)=>[i,0]),models:[{root:-1}]};
const close=(a,b)=>assert.ok(Math.abs(a-b)<1e-8,`${a} versus ${b}`);
const makeWorld=()=>{
  const world=new CastleWorld({}, {camera:'third'});world.level=level;world.physicalModels=[0];world.collider=new BspCollider(box);
  world.player=new PlayerController(world.collider,[50,0,0]);world.gameplay=new Gameplay(level);return world;
};

test('supplies fill native maxima, add score repeatedly and preserve level gateway scripts',()=>{
  const events=[],game=new Gameplay(level,{onEvent:e=>events.push(e)});game.state.score=42;
  const objects=JSON.stringify(game.snapshot().objects);
  assert.deepEqual(grantCheatSupplies(game),{mirror:5,potions:100,score:9042});
  assert.deepEqual(grantCheatSupplies(game),{mirror:5,potions:100,score:18042});
  assert.equal(game.completed,false);assert.deepEqual(events,[]);
  assert.equal(JSON.stringify(game.snapshot().objects),objects,'the exit mirror remains available and its PickupCommand does not run');
  const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  assert.equal(restored.state.mirror,5);assert.equal(restored.state.potions,100);assert.equal(restored.state.score,18042);
  game.state.score=999000;assert.equal(grantCheatSupplies(game).score,999999);
});

test('supply grants use configured mirror/score limits, native potion cap, and tolerate absent state',()=>{
  const game={state:{score:23},settings:{game:{Player:{LimitMaxParts:7,LimitMaxPotions:40,LimitMaxScore:10000}}}};
  assert.deepEqual(grantCheatSupplies(game),{mirror:7,potions:100,score:9023});
  assert.equal(grantCheatSupplies(game).score,10000);assert.equal(grantCheatSupplies(null),null);
});

test('original potion pickups pass the 30-potion skill threshold and saturate at 100 after cheating',()=>{
  const game=new Gameplay({...level,entities:[{classname:'ItemPotion','%name%':'potion',Origin:'0 0 0'}]});
  const potion=game.objects[0];game.state.potions=29;game.pickup(potion);assert.equal(game.state.potions,30);
  grantCheatSupplies(game);potion.collected=false;game.pickup(potion);
  assert.equal(game.state.potions,100);assert.equal(potion.collected,true);
});

test('collecting a real mirror after the cheat keeps the cap and still opens its gateway',()=>{
  const game=new Gameplay(level);grantCheatSupplies(game);game.state.score=999998;
  const mirror=game.objects.find(o=>o.subtype==='mirror');let callback=false;
  game.runEvent=(object,name)=>{assert.equal(object,mirror);assert.equal(name,'PickupCommand');callback=true;game.complete();};
  game.pickup(mirror);
  assert.equal(game.state.mirror,5);assert.equal(game.state.score,999999);
  assert.equal(mirror.collected,true);assert.equal(callback,true);assert.equal(game.completed,true);
});

test('free flight bypasses all geometry and gravity, follows pitch, and normalizes diagonal input',()=>{
  const rejecting={trace(){throw new Error('Flight must not sweep');},slide(){throw new Error('Flight must not slide');}};
  const p=new PlayerController(rejecting,[0,0,0]);p.noClip=true;p.grounded=true;p.velocityY=-200;p.contacts=new Set([4]);
  p.update(.05,{forward:1,right:0},0,-Math.PI/6);
  close(p.position[1],6);close(p.position[2],-Math.sqrt(108));assert.equal(p.velocityY,0);assert.equal(p.grounded,false);assert.equal(p.contacts.size,0);
  const before=[...p.position];p.update(.05,{forward:0,right:0},0);
  assert.deepEqual(p.position,before,'no-input flight remains suspended');
  p.update(.05,{forward:1,right:1,jump:true},0);
  close(Math.hypot(...p.position.map((v,i)=>v-before[i])),12);
  const height=p.position[1];p.update(.05,{forward:0,right:0,descend:true,walk:true},0);
  close(p.position[1],height-12,'Shift descends at flight speed');
  assert.deepEqual(p.lastSafe,[0,0,0],'free flight never overwrites the safe return point');
});

test('no-clip crosses a solid wall and disabling it restores ordinary collision',()=>{
  const world=makeWorld(),p=world.player;
  setNoClip(world,true);
  for(let i=0;i<9;i++)p.update(.05,{forward:1,right:0},Math.PI/2);
  assert.ok(p.position[0]<-50);assert.equal(p.position[1],0);
  assert.deepEqual(setNoClip(world,false),{enabled:false,returned:false,blocked:false});
  for(let i=0;i<6;i++)p.update(.05,{forward:-1,right:0},Math.PI/2);
  assert.ok(p.position[0]<-20,'movement stops against the expanded wall');assert.ok(p.position[1]<0,'gravity resumes');world.dispose();
});

test('disabling inside a wall or beyond any world bound returns to a verified safe point',()=>{
  for(const position of [[0,0,0],[101,0,0],[0,-500,0],[0,0,101]]) {
    const world=makeWorld();setNoClip(world,true);world.player.position=[...position];
    assert.equal(safeFlightExit(world,position),false);
    assert.deepEqual(setNoClip(world,false),{enabled:false,returned:true,blocked:false});
    assert.deepEqual(world.player.position,[50,0,0]);assert.equal(world.player.velocityY,0);world.dispose();
  }
});

test('safe exit revalidates stale lastSafe after doors move and refuses to strand the player',()=>{
  const world=makeWorld();setNoClip(world,true);world.player.position=[500,0,0];world.player.lastSafe=[0,0,0];
  setNoClip(world,false);assert.deepEqual(world.player.position,[50,0,0],'checkpoint replaces an obstructed saved return point');
  world.player.noClip=true;world.player.position=[500,0,0];world.collider.trace=()=>({startSolid:true});
  assert.deepEqual(setNoClip(world,false),{enabled:true,returned:false,blocked:true});assert.equal(world.player.noClip,true);world.dispose();
});

test('world flight bypasses platform carry, lower-world recovery and third-person camera clipping',()=>{
  const world=makeWorld();let traces=0,damage=0;
  world.player.noClip=true;world.player.position=[0,-1000,0];world.player.grounded=true;
  world.collider.trace=()=>{traces++;throw new Error('Unexpected world flight collision');};
  world.collider.contents=()=>0;
  world.gameplay={objects:[],projectiles:[],update(){},damage(){damage++;},scripts:{modelTransforms:new Map(),update(){}}};
  world.update(.05,{forward:0,right:0,jump:true});
  assert.equal(traces,0);assert.equal(damage,0);assert.deepEqual(world.player.position,[0,-988,0]);
  world.pitch=0;world.yaw=0;world.updateCamera(1,true);
  assert.deepEqual(world.camera.position.toArray(),[0,-932,145]);world.dispose();
});
