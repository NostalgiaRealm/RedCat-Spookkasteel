import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Vector3,Quaternion} from 'three';
import {nativePlayerYaw,clockFaceActorYaw,actorOrientation} from '../src/actor-placement.js';
import {playerMotion} from '../src/player-animation.js';
import {fairyGeometry,FAIRY_TEXTURES} from '../src/fairy-effects.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {WorldEffects} from '../src/world-effects.js';
const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const near=(a,b)=>assert.ok(a.every((v,i)=>Math.abs(v-b[i])<1e-7),`${a} != ${b}`);

test('native clock-face heading agrees between player camera and +Z-front character assets',()=>{
  for(const [clock,expected] of [[0,[0,0,-1]],[3,[1,0,0]],[6,[0,0,1]],[9,[-1,0,0]]]) {
    const yaw=nativePlayerYaw(clock);near([-Math.sin(yaw),0,-Math.cos(yaw)],expected);
    near([Math.sin(clockFaceActorYaw(clock)),0,Math.cos(clockFaceActorYaw(clock))],expected);
  }
});
test('actual first Fleurifee rcshow script makes RedCat face her instead of empty space',()=>{
  const level=json('data/levels/lvl00a/level.json'),events=[];
  const game=new Gameplay(level,{deferInit:true,onEvent:e=>events.push(e)}),host=new ScriptHost(game,json('data/davi/lvl00a.json'),{motions:json('data/motions/lvl00a.json')});
  host.vm.invoke(host.vm.program.functions.find(f=>f.name==='CSL001_MotionCommand'),['rcshow',0]);
  const event=events.findLast(e=>e.type==='teleport'),fairy=game.find('fairy11')[0];assert.equal(event.orientation,8);
  const yaw=nativePlayerYaw(event.orientation),direction=[-Math.sin(yaw),0,-Math.cos(yaw)],delta=fairy.position.map((v,i)=>v-event.position[i]);
  assert.ok((direction[0]*delta[0]+direction[2]*delta[2])/Math.hypot(delta[0],delta[2])>.99);
  for(const enemy of game.objects.filter(o=>o.kind==='enemy'))assert.equal(enemy.yaw,clockFaceActorYaw(Number(enemy.entity.StartOrientation||0)));
});
test('UFO authored XYZ turns multiply about world axes in native order',()=>{
  const entity=json('data/levels/lvl00a/level.json').entities.find(e=>/ufo\.act/i.test(e.ActorFileName||''));
  assert.ok(entity);
  const native=new Vector3(.3,.6,.7),axes=[new Vector3(1,0,0),new Vector3(0,1,0),new Vector3(0,0,1)];
  ['X','Y','Z'].forEach((a,i)=>native.applyQuaternion(new Quaternion().setFromAxisAngle(axes[i],Number(entity['Rotate'+a])*Math.PI/180)));
  near(new Vector3(.3,.6,.7).applyQuaternion(actorOrientation({entity},{})).toArray(),native.toArray());
});
test('normal jump keeps the descending half of jump1 at native speed through the apex',()=>{
  const state={},p={position:[0,0,0],grounded:true,velocityY:0},input={};playerMotion(state,p,input,0);
  p.grounded=false;p.velocityY=230;let pose=playerMotion(state,p,input,.1,20);
  assert.equal(pose.name,'jump1');assert.equal(pose.speed,1.4);assert.equal(pose.loop,false);
  p.velocityY=-100;pose=playerMotion(state,p,input,.3,300);
  assert.equal(pose.name,'jump1');assert.ok(pose.time>.5,'Descending pose must continue beyond jump apex');
  p.grounded=true;assert.equal(playerMotion(state,p,input,.1).name,'idle');
  p.grounded=false;p.velocityY=230;assert.ok(playerMotion(state,p,input,.05,10).time<.1,'A second jump restarts its pose');
});
test('a slight ledge does not trigger the long-drop motion; native >80 floor-gap transition does',()=>{
  const state={},p={grounded:true,velocityY:0};playerMotion(state,p,{},0);
  p.grounded=false;p.velocityY=-12;assert.notEqual(playerMotion(state,p,{},.01,8).name,'fall1');
  p.grounded=true;playerMotion(state,p,{},.01);
  p.grounded=false;p.velocityY=-12;const fall=playerMotion(state,p,{},.01,120);assert.equal(fall.name,'fall1');assert.equal(fall.speed,1.5);
  p.noClip=true;assert.equal(playerMotion(state,p,{},.1,1000).name,'idle');
});
test('Fleurifee has original masked layers, orbit trails plus secondary stars, finite lifetime and radius110 light',()=>{
  const manifest=json('assets/effects/manifest.json');
  for(const texture of Object.values(FAIRY_TEXTURES))assert.ok(manifest.textures[texture]);
  const options={origin:[10,20,30],waypoints:[[20,30,40]],lifeTime:20};
  const first=fairyGeometry({...options,age:1}),later=fairyGeometry({...options,age:2});
  assert.ok(first.sprites.length>9);assert.ok(first.sprites.filter(s=>s.texture===FAIRY_TEXTURES.star).length>5);
  assert.ok(first.rays.length>0);assert.ok(first.light.radius>=110&&first.light.radius<=220);assert.notDeepEqual(first.sprites,later.sprites);
  assert.ok(first.light.position.every(Number.isFinite));assert.notDeepEqual(first.light.position,options.origin);
  assert.equal(fairyGeometry({...options,age:20}).sprites.length,50);
  assert.deepEqual(fairyGeometry({...options,age:24}),{sprites:[],rays:[],light:null});
  assert.deepEqual(fairyGeometry({...options,age:0}).light.position,options.origin);
});
test('a completed fairy lifetime can be enabled again by a later dialogue script',()=>{
  const object={id:'Fairy1',enabled:true,position:[0,0,0],entity:{classname:'Fairy',LifeTime:'.1',NumberOfWayPoints:'1',FairyWP0:'wp'}},game={objects:[object],find:()=>[{position:[0,0,0],entity:{}}]};
  const effects=new WorldEffects({camera:{position:new Vector3()}},game,{textures:{}});effects.pointLights=[];
  effects.update(.05);assert.equal(effects.entries.get(object.id).fairyGeometry.sprites.length,9);
  effects.update(.1);assert.equal(object.enabled,false);assert.equal(effects.lights.length,0);
  object.enabled=true;effects.update(.025);assert.equal(effects.entries.get(object.id).fairyGeometry.sprites.length,59);assert.equal(object.effectAge,.025);
});
