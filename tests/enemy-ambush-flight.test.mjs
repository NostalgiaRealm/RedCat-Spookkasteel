import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {BspCollider} from '../src/collision.js';
import {ActorAnimator,ActorStateAnimator} from '../src/animation.js';
import {placeSpider,enemyDormant} from '../src/enemy-ambush.js';
import {batFlightTarget,batSeparationTarget} from '../src/enemy-flight.js';
import {moveEnemy} from '../src/enemies.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const level=id=>json('data/levels/'+id+'/level.json');
const clear=(a,b)=>({fraction:1,end:[...b],normal:[0,0,0],startSolid:false});

test('original cave skeletons stay as bones until the enabled room and nearby player wake them',()=>{
  const game=new Gameplay(level('lvl03a'),{deferInit:true}),skeleton=game.find('skelet01')[0],home=[...skeleton.position];
  const data=json('assets/actors/skeleton.json'),geometry=new THREE.BufferGeometry();
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  const animator=new ActorAnimator(data,geometry),states=new ActorStateAnimator(animator,skeleton.stats);
  skeleton.animationDurations=states.durations;
  states.update(skeleton,10,false,0);assert.equal(animator.name,'start');assert.equal(animator.time,0);
  game.update(.1,home);assert.equal(skeleton.ambush.phase,'dormant');assert.equal(skeleton.enabled,false);
  game.command(skeleton,'enable');
  for(let i=0;i<30;i++){game.time+=.1;game.updateEnemy(skeleton,.1,[home[0]+500,home[1],home[2]],()=>true,clear);states.update(skeleton,.1,false,game.time);}
  assert.deepEqual(skeleton.position,home);assert.equal(animator.time,0);assert.equal(game.projectiles.length,0);
  game.time+=.1;game.updateEnemy(skeleton,.1,[home[0]+100,home[1],home[2]],()=>true,clear);
  assert.equal(skeleton.ambush.phase,'waking');assert.equal(skeleton.animationState,'start');
  for(let i=0;i<10;i++){game.time+=.1;game.updateEnemy(skeleton,.1,home,()=>true,clear);}
  assert.equal(skeleton.ambush.phase,'waking');assert.deepEqual(skeleton.position,home);assert.equal(game.projectiles.length,0);
  for(let i=0;i<12;i++){game.time+=.1;game.updateEnemy(skeleton,.1,home,()=>true,clear);}
  assert.equal(skeleton.ambush.phase,'awake');geometry.dispose();
});

test('real castle and cave spiders start at BSP ceilings and descend at original FallSpeed',()=>{
  for(const id of ['lvl01a','lvl02a','lvl03a']){
    const game=new Gameplay(level(id),{deferInit:true}),spider=game.objects.find(o=>o.enemyType==='spider'),collider=new BspCollider(game.level.collision);
    const trace=(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,[0],null);
    placeSpider(game,spider,trace);assert.equal(spider.ambush.phase,'dormant');assert.equal(enemyDormant(spider),true);
    const upper=[...spider.position],lower=spider.ambush.lower;
    assert.ok(upper[1]>lower[1]+50);assert.ok(spider.ambush.anchor[1]>upper[1]);
    spider.enabled=true;game.time+=.1;game.updateEnemy(spider,.1,[lower[0]+30,lower[1],lower[2]],()=>true,trace);
    assert.equal(spider.ambush.phase,'descending');assert.equal(enemyDormant(spider),false);
    assert.ok(Math.abs(spider.position[1]-(upper[1]-spider.stats.FallSpeed*.1))<1e-6);
    while(spider.ambush.phase==='descending'){game.time+=.1;game.updateEnemy(spider,.1,lower,()=>true,trace);}
    assert.deepEqual(spider.position,lower);assert.equal(spider.grounded,true);assert.equal(game.projectiles.length,0);
  }
});

test('spider stringing and skeleton wake progress survive saves and script freezes',()=>{
  for(const type of ['spider','skeleton']){
    const game=new Gameplay(level('lvl03a'),{deferInit:true}),enemy=game.objects.find(o=>o.enemyType===type);enemy.enabled=true;
    if(type==='spider')placeSpider(game,enemy,(a,b,mins,maxs)=>new BspCollider(game.level.collision).trace(a,b,mins,maxs,[0],null));
    const feet=[...(enemy.ambush.lower||enemy.position)];
    game.update(.1,feet);const state=structuredClone(enemy.ambush),position=[...enemy.position];
    game.scripts={enemiesFrozen:true,weaponsEnabled:true,effectState:new Map(),modelTransforms:new Map()};game.update(.1,feet);assert.deepEqual(enemy.ambush,state);assert.deepEqual(enemy.position,position);
    game.scripts=null;const restored=new Gameplay(game.level,{deferInit:true,save:game.snapshot()}),copy=restored.objects.find(o=>o.id===enemy.id);
    assert.deepEqual(copy.ambush,state);assert.deepEqual(copy.position,position);
  }
});

test('Witch leaves the actual cauldron after the original intro and keeps firing at a stationary ground player',()=>{
  const game=new Gameplay(level('lvl04a'),{deferInit:true}),events=[];
  const host=new ScriptHost(game,json('data/davi/lvl04a.json'),{motions:json('data/motions/lvl04a.json'),dialogue:json('data/dialogue/nl.json')});
  host.initialize();for(let i=0;i<100;i++)host.update(.1);
  game.command(game.find('trigger_witchmodel')[0],'enable');for(let i=0;i<450;i++)host.update(.1);
  const witch=game.find('The_Witch')[0];assert.equal(witch.enabled,true);assert.equal(host.cutscene,false);assert.equal(host.enemiesFrozen,false);
  const collider=new BspCollider(game.level.collision);collider.modelTransforms=host.modelTransforms;
  const models=[...new Set(game.level.groups.map(group=>group.model))].filter(index=>index===0||game.modelState(index).solid);
  witch.collisionMins=[-24,0,-24];witch.collisionMaxs=[24,96,24];
  for(const object of game.triggers)object.enabled=false;
  game.onEvent=e=>events.push(e);const positions=new Set();
  for(let i=0;i<1800;i++){
    game.state.health=10;
    game.update(.05,[332,2373,276],{traceEnemy:(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,models),lineOfSight:(a,b)=>collider.trace(a,b,[0,0,0],[0,0,0],models,'blocksLOS').fraction>.98});
    if(i>1200)positions.add(witch.position.map(v=>Math.round(v)).join(','));
  }
  assert.ok(witch.position[1]>2400);assert.ok(positions.size>30,'flight continues after the first salvo');
  assert.ok(events.filter(e=>e.type==='enemyProjectile'&&e.kind==='magicBall').length>=6);
  assert.equal(host.vm.lastError,null);
});

test('Witch recovers a pre-fix save with a cauldron-crossing flight target',()=>{
  const game=new Gameplay(level('lvl04a'),{deferInit:true}),witch=game.find('The_Witch')[0];
  witch.enabled=true;witch.position=[151.7524,2497,111.0922];witch.collisionMins=[-24,0,-24];witch.collisionMaxs=[24,96,24];
  Object.assign(witch.boss,{started:true,phase:'fly',target:'GrobberPathPoint98'});
  Object.assign(witch.patrol,{current:'GrobberPathPoint100',target:'GrobberPathPoint98',leftStart:true});
  const restored=new Gameplay(game.level,{deferInit:true,save:game.snapshot()}),copy=restored.find('The_Witch')[0],initial=[...copy.position];
  copy.collisionMins=witch.collisionMins;copy.collisionMaxs=witch.collisionMaxs;
  const collider=new BspCollider(game.level.collision),models=[...new Set(game.level.groups.map(g=>g.model))].filter(i=>i===0||game.modelState(i).solid);
  for(let i=0;i<100;i++){restored.time+=.05;restored.updateEnemy(copy,.05,[332,2373,276],(a,b)=>collider.trace(a,b,[0,0,0],[0,0,0],models).fraction>.98,(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,models));}
  assert.ok(Math.hypot(...copy.position.map((v,i)=>v-initial[i]))>50);assert.notEqual(copy.boss.target,'GrobberPathPoint98');
});

test('bats select body-clear authored detours, separate overlapping bodies, and slide along fences',()=>{
  const entities=[{classname:'MovingEnemy','%name%':'batA',Type:'2',SubType:'2',StartPoint:'start',Origin:'0 0 0'},
    {classname:'MovingEnemy','%name%':'batB',Type:'2',SubType:'2',StartPoint:'start',Origin:'0 0 0'},
    {classname:'GrobberPathPoint','%name%':'start',Origin:'0 0 0'},
    {classname:'GrobberPathPoint','%name%':'around',Origin:'0 60 80'}];
  const game=new Gameplay({id:'test',entities},{deferInit:true}),bat=game.find('batA')[0],other=game.find('batB')[0];
  const wall=(a,b)=>b[0]>20?{fraction:0,end:[...a],normal:[-1,0,0],startSolid:false}:clear(a,b);
  assert.deepEqual(batFlightTarget(game,bat,[100,0,0],wall),[0,60,80]);assert.equal(bat.flightDetour.target,'around');
  const away=batSeparationTarget(game,bat),opposite=batSeparationTarget(game,other);assert.ok(away[0]*opposite[0]<0);
  for(const [enemy,target] of [[bat,away],[other,opposite]])moveEnemy(enemy,target.map((v,i)=>v-enemy.position[i]),.1,clear);
  assert.ok(Math.hypot(...bat.position.map((v,i)=>v-other.position[i]))>=26);
  const flyer={position:[0,0,0],flying:true},fence=(a,b)=>b[0]>10?{fraction:(10-a[0])/(b[0]-a[0]),end:[10,a[1]+(b[1]-a[1])*.5,a[2]+(b[2]-a[2])*.5],normal:[-1,0,0],startSolid:false}:clear(a,b);
  moveEnemy(flyer,[20,0,20],.1,fence);assert.equal(flyer.position[0],10);assert.equal(flyer.position[2],20);
});

test('Brutus and knights keep facing a moving RedCat during their locked attack motion',()=>{
  for(const [id,type] of [['lvl00a','brutusm'],['lvl01a','knight']]){
    const game=new Gameplay(level(id),{deferInit:true}),enemy=game.objects.find(o=>o.enemyType===type);enemy.enabled=true;enemy.yaw=0;
    game.enemyAnimation(enemy,'attack',2);const before=enemy.yaw;
    game.time+=.1;game.updateEnemy(enemy,.1,[enemy.position[0]+10,enemy.position[1],enemy.position[2]+15],()=>true,clear);
    assert.ok(enemy.yaw>before);assert.equal(enemy.animationState,'attack');
  }
});
