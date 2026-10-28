import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {Gameplay} from '../source/gameplay.js';
import {CastleWorld} from '../source/world.js';
import {createNativeBlasts} from '../source/explosion-native.js';
import {DestructibleEffects} from '../source/destructible-effects.js';
import {createNativeExplosionDamage,explosionBoxDamage,advanceExplosionDamage,restoreExplosionDamage} from '../source/explosion-damage.js';

const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-8,`${a} != ${b}`);
const settings=name=>JSON.parse(readFileSync(new URL(`../assets/actors/${name}.json`,import.meta.url))).settings;
const entity=(classname,name,extra={})=>({classname,'%name%':name,DaviName:name,Origin:'0 0 0',...extra});
function fixture(extra=[],name='brcrate') {
  const events=[],level={id:'explosion-damage',entities:[entity('AdamAnyActor','crate',{ActorFileName:name+'.act',Targetable:'1'}),...extra]};
  const game=new Gameplay(level,{onEvent:event=>events.push(event)}),crate=game.objects[0];
  crate.actorSettings=settings(name);crate.health=1;crate.effectPosition=()=>[0,54.08,0];
  game.updateEnemy=()=>{};
  return {game,crate,events,level};
}
function advance(game,seconds,position=[1000,0,0],options={},step=.1) {
  const end=game.time+seconds;
  while(game.time<end-1e-9)game.update(Math.min(step,end-game.time),position,options);
}

test('authored crate damage rates/radii use the native percentages and the visual blast births',()=>{
  const effect={id:'crate:0',sourceId:'crate',birth:2,position:[10,20,30],bounds:{min:[-30,-10,-20],max:[30,10,20]},settings:settings('brcrate')};
  effect.settings.explosion.NrExplosions=3;
  const damage=createNativeExplosionDamage(effect),visual=createNativeBlasts(effect);
  assert.equal(damage.length,3);
  for(let i=0;i<3;i++){
    assert.equal(damage[i].radius,175);assert.equal(damage[i].rate,46.875);
    assert.deepEqual(damage[i].position,visual[i].position);assert.equal(damage[i].birth,visual[i].birth);
  }
  const weak=createNativeExplosionDamage({...effect,settings:settings('wkcrate')});
  assert.equal(weak[0].radius,3);assert.equal(weak[0].rate,.9375);
  for(const name of ['grafdum','plankdum'])assert.deepEqual(createNativeExplosionDamage({...effect,settings:settings(name)}),[]);
  effect.settings.explosion.NrExplosions=0;assert.deepEqual(createNativeExplosionDamage(effect),[]);
});

test('nearby RedCat receives whole frame doses through the inclusive first-activation deadline',()=>{
  for(const step of [.1,.07,1/60]) {
    const {game,crate,events}=fixture();game.state.health=game.state.maxHealth=20;game.hitCooldown=1;
    game.destroy(crate);game.destroy(crate);assert.equal(game.explosionDamage.length,1);
    advance(game,.7,[87.5,0,0],{},step);
    const damagingFrames=Math.floor((.4+1e-9)/step)+1;
    near(game.state.health,20-23.4375*step*damagingFrames);assert.equal(game.explosionDamage.length,0);
    assert.equal(events.filter(event=>event.type==='damage').length,1,'health continues draining without restarting feedback each frame');
  }
});

test('RedCat range and LOS use his native eye-height movement origin',()=>{
  const {game,crate}=fixture();game.destroy(crate);
  const rays=[];advance(game,.1,[0,175,0],{explosionLineOfSight:(a,b)=>{rays.push(b);return true;}});
  assert.equal(game.state.health,10,'point exactly on radius is unharmed');assert.equal(rays.length,0);
  advance(game,.1,[0,174,0],{explosionLineOfSight:(a,b)=>{rays.push(b);return false;}});
  assert.equal(game.state.health,10,'wall blocks damage');near(rays[0][1],228.08);
  advance(game,.1,[0,174,0]);near(game.state.health,10-46.875*.1/175);
});

test('moving out of range stops damage while moving into an expired blast never damages',()=>{
  const {game,crate}=fixture();game.destroy(crate);
  advance(game,.1,[87.5,0,0]);const hurt=game.state.health;
  advance(game,.5,[1000,0,0]);advance(game,.2,[0,0,0]);near(game.state.health,hurt);
});

test('enemy falloff uses the nearest posed box edge and tries native centre-relative corner rays',()=>{
  const cell={position:[0,0,0],radius:175,rate:46.875};
  const bounds={origin:[190,0,0],min:[170,0,-5],max:[210,100,5]},rays=[];
  const damage=explosionBoxDamage(cell,bounds,.1,(a,b)=>{rays.push(b);return rays.length===9;});
  near(damage,46.875*.1*(1-170/175));assert.equal(rays.length,9);
  assert.deepEqual(rays[0],[190,50,0]);
  assert.deepEqual(rays[1],[170,50,-5]);assert.deepEqual(rays.at(-1),[210,150,5]);
  assert.equal(explosionBoxDamage(cell,bounds,.1,()=>false),0);
});

test('exploding crates kill nearby enemies, preserve distant enemies, and award defeat once',()=>{
  const {game,crate,events}=fixture([
    entity('MovingEnemy','near',{Type:'5',Origin:'60 30 0',AfterDestroyCommand:'door.open'}),
    entity('MovingEnemy','far',{Type:'5',Origin:'400 30 0'}),entity('DoorModel','door')
  ]);
  game.destroy(crate);advance(game,.6);
  assert.equal(game.find('near')[0].health,0);assert.equal(game.find('far')[0].health,3);
  assert.equal(game.state.kills,1);assert.equal(game.state.score,15);assert.equal(game.find('door')[0].open,true);
  assert.equal(events.filter(event=>event.type==='enemyDefeated'&&event.id==='near').length,1);
});

test('hurt cells damage smoke-only crates and chain destructible actors without projectile OnHit hooks',()=>{
  const {game,crate}=fixture([
    entity('AdamAnyActor','second',{Origin:'20 54.08 0',OnHitCommand:'door.open'}),
    entity('AdamAnyActor','solid',{Origin:'30 54.08 0'}),entity('DoorModel','door',{OnHitCommand:'door.open'}),
    entity('ItemCoin','coin',{Origin:'30 54.08 0'})
  ],'rccrate');
  const second=game.find('second')[0],solid=game.find('solid')[0];
  second.actorSettings=settings('brcrate');second.actorSettings.canBeShot=false;
  solid.actorSettings={...settings('brcrate'),destroyable:false};
  game.destroy(crate);advance(game,.1);
  assert.equal(second.health,0);assert.equal(game.explosions.length,2);assert.equal(game.find('door')[0].open,false);
  assert.equal(solid.health,1);assert.equal(game.find('coin')[0].health,1);
  assert.equal(game.explosionDamage.find(cell=>cell.sourceId==='second').birth,.1);
  advance(game,1);assert.equal(game.explosions.length,2);assert.equal(game.explosionDamage.length,0);
});

test('hidden and inactive targets stay protected, and brush OnHit callbacks do not receive splash',()=>{
  const {game,crate}=fixture([entity('MovingEnemy','hidden',{Type:'5'}),entity('MovingEnemy','inactive',{Type:'5'}),entity('ModelController','brush',{OnHitCommand:'crate.show'})]);
  game.find('hidden')[0].visible=false;game.find('inactive')[0].enabled=false;
  game.destroy(crate);advance(game,.6);
  assert.equal(game.find('hidden')[0].health,3);assert.equal(game.find('inactive')[0].health,3);assert.equal(game.find('brush')[0].health,1);
});

test('player death fires once; noclip immunity and cutscene protection remain intact',()=>{
  const dead=fixture();dead.game.destroy(dead.crate);advance(dead.game,.4,[0,0,0]);
  // Still inside the two-second death hold: the life is deducted at respawn.
  assert.equal(dead.game.state.health,0);assert.equal(dead.game.state.lives,3);assert.equal(dead.events.filter(event=>event.type==='death').length,1);
  const immune=fixture();immune.game.isPlayerInvulnerable=()=>true;immune.game.destroy(immune.crate);advance(immune.game,.5,[0,0,0]);assert.equal(immune.game.state.health,10);
  const cutscene=fixture();cutscene.game.destroy(cutscene.crate);cutscene.game.scripts={cutscene:true};
  advance(cutscene.game,.5,[0,0,0]);cutscene.game.scripts.cutscene=false;advance(cutscene.game,.1,[0,0,0]);assert.equal(cutscene.game.state.health,10);
});

test('saving mid-blast resumes only remaining damage and respawn clears pending damage',()=>{
  const {game,crate,level}=fixture();game.state.health=game.state.maxHealth=20;game.destroy(crate);advance(game,.1,[87.5,0,0]);
  const save=JSON.parse(JSON.stringify(game.snapshot())),events=[],restored=new Gameplay(level,{save,onEvent:event=>events.push(event)});
  assert.equal(restored.explosions.length,1);assert.equal(restored.explosions[0].birth,save.explosions[0].birth);
  let sprites=0;
  new DestructibleEffects({},restored).update(0,new Map([['explosie02.bmp|explosie02_a.bmp',{add:()=>sprites++}]]));
  assert.equal(sprites,1,'the saved active blast is rendered at its original age');
  assert.equal(events.filter(event=>event.type==='scriptSound').length,0,'loading never replays the explosion sound');
  restored.updateEnemy=()=>{};restored.objects[0].actorSettings=settings('brcrate');restored.destroy(restored.objects[0]);
  assert.equal(restored.explosionDamage.length,1);assert.equal(restored.explosionDamage[0].activatedAt,.1);
  advance(game,.5,[87.5,0,0]);advance(restored,.5,[87.5,0,0]);
  near(restored.state.health,game.state.health);near(restored.state.health,8.28125);
  assert.equal(new Gameplay(level,{save:restored.snapshot()}).explosionDamage.length,0);
  assert.equal(new Gameplay(level,{save:restored.snapshot()}).explosions.length,1,'the longer visual tail remains saved without renewing damage');
  restored.explosionDamage=save.explosionDamage;restored.respawn();assert.equal(restored.explosionDamage.length,0);
});

test('a synchronous respawn during blast damage discards the old cell iteration immediately',()=>{
  const {game,crate}=fixture([entity('MovingEnemy','enemy',{Type:'5'})]);
  game.destroy(crate);game.explosionDamage.push({...game.explosionDamage[0],sourceId:'other-crate'});
  game.state.health=.1;let hits=0;
  game.onEvent=event=>{
    if(event.type==='damage')hits++;
    if(event.type==='death'){game.respawn();game.playerReaction=null;}
  };
  advance(game,.1,[0,0,0]);
  // Lives drop when the native death hold ends, not in this synchronous respawn.
  assert.equal(game.state.health,10);assert.equal(game.state.lives,3);assert.equal(hits,1);
  assert.equal(game.explosionDamage.length,0);assert.equal(game.find('enemy')[0].health,3);
});

test('delayed blasts arm on the first eligible frame and do not clip that frame or the inclusive end',()=>{
  const {game}=fixture();game.state.health=game.state.maxHealth=20;
  game.explosionDamage=[{sourceId:'gone',birth:.15,position:[0,54.08,0],radius:175,rate:2}];
  game.time=.1;advanceExplosionDamage(game,.1,[0,0,0]);assert.equal(game.state.health,20);
  game.time=.2;advanceExplosionDamage(game,.1,[0,0,0]);near(game.state.health,19.8);
  assert.equal(game.explosionDamage[0].activatedAt,.2);
  game.time=.6;advanceExplosionDamage(game,.4,[0,0,0]);near(game.state.health,19);
  assert.equal(game.explosionDamage.length,1,'the exact endpoint is still live');
  game.time=.601;advanceExplosionDamage(game,.001,[0,0,0]);near(game.state.health,19);assert.equal(game.explosionDamage.length,0);
});

test('the first frame beyond expiry does not receive a clipped remainder',()=>{
  const {game}=fixture();game.state.health=game.state.maxHealth=20;
  game.explosionDamage=[{sourceId:'gone',birth:0,activatedAt:.1,position:[0,54.08,0],radius:175,rate:2}];
  game.time=.48;advanceExplosionDamage(game,.08,[0,0,0]);near(game.state.health,19.84);
  game.time=.55;advanceExplosionDamage(game,.07,[0,0,0]);near(game.state.health,19.84);
  assert.equal(game.explosionDamage.length,0);
});

test('pending saves preserve first activation, old saves retain their original expiry, and bad clocks are rejected',()=>{
  const cell={sourceId:'gone',birth:2,position:[0,54.08,0],radius:175,rate:2};
  assert.equal(restoreExplosionDamage([{...cell,activatedAt:null}],2.1)[0].activatedAt,null);
  assert.equal(restoreExplosionDamage([cell],2.1)[0].activatedAt,2,'old active cells do not restart');
  assert.equal(restoreExplosionDamage([cell],1.9)[0].activatedAt,null,'old future cells still wait');
  assert.deepEqual(restoreExplosionDamage([cell],2.5),[],'old expired cells never resurrect');
  for(const activatedAt of [1,3,Infinity,'2.1'])assert.deepEqual(restoreExplosionDamage([{...cell,activatedAt}],2.2),[]);
  const {game}=fixture();game.state.health=game.state.maxHealth=20;
  game.explosionDamage=restoreExplosionDamage([{...cell,activatedAt:null}],2.1);
  game.time=2.2;advanceExplosionDamage(game,.1,[0,0,0]);near(game.state.health,19.8);
  assert.equal(game.explosionDamage[0].activatedAt,2.2);
});

test('world explosion targets expose rendered bounds for rotated, scaled moving actors',()=>{
  const {game,crate}=fixture(),actor=new THREE.Group(),geometry=new THREE.BoxGeometry(10,20,30),material=new THREE.MeshBasicMaterial(),mesh=new THREE.Mesh(geometry,material);
  actor.add(mesh);actor.userData.mesh=mesh;geometry.computeBoundingBox();mesh.scale.set(2,3,4);crate.kind='enemy';crate.yaw=Math.PI/2;crate.position=[100,20,200];
  CastleWorld.prototype.configureExplosionTarget.call({gameplay:game},crate,actor);
  const bounds=crate.explosionBounds();
  assert.deepEqual(bounds.origin,[100,20,200]);
  for(let axis=0;axis<3;axis++){near(bounds.min[axis],[40,-10,190][axis]);near(bounds.max[axis],[160,50,210][axis]);}
  crate.position[0]+=50;near(crate.explosionBounds().min[0],90,'same-tick relocation invalidates bounds');
  assert.equal(crate.explosionMayReach({position:[90,20,200],radius:1}),true,'broadphase retains a nearby edge even with distant actor origin');
  assert.equal(crate.explosionMayReach({position:[10000,20,200],radius:175}),false,'far actor does not need posed world bounds');
  geometry.dispose();material.dispose();
});
