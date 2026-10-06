import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {PlayerController} from '../src/collision.js';
import {buttonTouched} from '../src/environment-interactions.js';
import {debrisParticles,explosionFrame} from '../src/destructible-effects.js';
import {CastleWorld} from '../src/world.js';
import {Group} from 'three';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const graveyard=json('data/levels/lvl02a/level.json'),caves=json('data/levels/lvl03a/level.json');
function isolated(level) {
  const events=[],game=new Gameplay(level,{deferInit:true,onEvent:e=>events.push(e)});
  for(const object of game.objects)if(['enemy','trigger','pickup','door','button'].includes(object.kind))object.enabled=false;
  return {game,events};
}

test('the actual graveyard puzzle tile fires by solid contact, once until RedCat steps off',()=>{
  const {game}=isolated(graveyard),tile=game.find('puzbut1_mc')[0],piece=game.find('puzstuk1_mc')[0];tile.enabled=true;piece.enabled=false;
  const bounds=graveyard.collision.models[tile.modelIndex],feet=[(bounds.min[0]+bounds.max[0])/2,bounds.max[1]+.03125,(bounds.min[2]+bounds.max[2])/2];
  assert.equal(game.contains(tile,feet),false);assert.equal(buttonTouched(game,tile,feet,[tile.modelIndex]),true);
  game.update(.025,feet,{touchedModels:[tile.modelIndex]});assert.equal(piece.enabled,true);assert.equal(tile.switchCount,2);assert.equal(tile.switchedOn,false);
  game.update(.025,feet,{touchedModels:[]});assert.equal(tile.switchCount,2);
  game.update(.025,[feet[0]+200,feet[1],feet[2]]);game.update(.025,feet,{touchedModels:[tile.modelIndex]});assert.equal(tile.switchCount,4);
  tile.entity={...tile.entity,TouchToSwitch:'0'};game.update(.025,[feet[0]+200,feet[1],feet[2]]);game.update(.025,feet,{touchedModels:[tile.modelIndex]});assert.equal(tile.switchCount,4);
});

test('the original cave fan volumes supply their signed velocities and obey button group commands',()=>{
  const game=new Gameplay(caves,{deferInit:true});
  const wind=game.find('wind01')[0],p=[...wind.position];
  assert.deepEqual(game.environmentVelocity(p),[-320,-160,0]);
  game.switchButton(game.find('air_button01')[0],true);
  assert.equal(wind.enabled,false);assert.deepEqual(game.environmentVelocity(p),[0,-160,-320]);
  const other=game.find('wind02')[0];assert.equal(other.enabled,true);assert.deepEqual(game.environmentVelocity(other.position),[0,-160,-320]);
  assert.deepEqual(game.environmentVelocity([0,10000,0]),[0,0,0]);
});

test('a fan drives swept player motion without penetrating a wall and noclip ignores wind',()=>{
  const hits=[],collider={slide(start,move){hits.push(move);return {position:start.map((v,i)=>i===0?Math.min(v+move[i],5):v+move[i]),models:[],hits:[]};},trace(a,b){return {fraction:1,end:b};}};
  const player=new PlayerController(collider,[0,10,0]);player.environmentVelocity=[320,0,0];
  player.update(.05,{forward:0,right:0},0);assert.equal(player.position[0],5);assert.equal(hits[0][0],16);
  player.environmentVelocity=[0,0,0];player.update(.05,{forward:0,right:0},0);assert.equal(player.position[0],5);
  player.noClip=true;player.environmentVelocity=[320,320,320];player.update(.05,{forward:0,right:0},0);assert.equal(player.position[0],5);
});

test('original cave spring-box volumes launch a grounded player higher than the ordinary jump',()=>{
  const game=new Gameplay(caves,{deferInit:true}),box=game.find('jump01')[0];
  assert.deepEqual(game.environmentVelocity(box.position),[160,384,0]);
  const collider={slide:(start,move)=>({position:start.map((v,i)=>v+move[i]),models:[],hits:[]}),trace:(a,b)=>({fraction:1,end:b})};
  const ordinary=new PlayerController(collider,[0,0,0]),spring=new PlayerController(collider,[0,0,0]);ordinary.grounded=spring.grounded=true;
  spring.environmentVelocity=game.environmentVelocity(box.position);ordinary.update(.025,{forward:0,right:0,jump:true},0);spring.update(.025,{forward:0,right:0},0);
  assert.ok(spring.velocityY>ordinary.velocityY);assert.ok(spring.position[1]>ordinary.position[1]);
  spring.environmentVelocity=[0,0,0];let maximum=spring.position[1];for(let i=0;i<30;i++){spring.update(.025,{forward:0,right:0},0);maximum=Math.max(maximum,spring.position[1]);}
  assert.ok(maximum>90);
});

test('the original cave hidden-button room plays SecretFound on entry once, including across save/reload',()=>{
  const {game,events}=isolated(caves),secret=game.find('secret_trigger01')[0];secret.enabled=true;
  game.update(.025,secret.position);assert.equal(game.state.secrets,1);assert.equal(events.filter(e=>e.sound==='SecretFound.wav').length,1);
  game.update(.025,[0,10000,0]);game.update(.025,secret.position);assert.equal(game.state.secrets,1);
  const saved=game.snapshot(),restored=new Gameplay(caves,{save:saved,deferInit:true,onEvent:e=>events.push(e)});
  restored.find('secret_trigger01')[0].triggerCount=0;restored.find('secret_trigger01')[0].inside=false;
  restored.update(.025,secret.position);assert.equal(restored.state.secrets,1);assert.equal(events.filter(e=>e.sound==='SecretFound.wav').length,1);
});

test('a first-hit crate collider takes the pellet, emits original debris and an explosion only once',()=>{
  const settings=json('assets/actors/brcrate.json').settings,events=[];
  const game=new Gameplay({id:'prop-test',entities:[{classname:'AdamAnyActor','%name%':'crate',Origin:'0 0 100',ActorFileName:'brcrate.act',Targetable:'1'}]},{onEvent:e=>events.push(e)}),crate=game.find('crate')[0];
  const actor=new Group();actor.userData.template={data:{settings}};CastleWorld.prototype.configureDestructible.call({},crate,actor);crate.effectPosition=()=>[0,24,100];
  assert.equal(crate.health,1);
  game.projectiles=[{id:'shot',owner:'player',position:[0,25,0],velocity:[0,0,300],radius:3,life:5,age:0,damage:1,gravity:0,acceleration:0,maximumSpeed:1000}];
  game.updateProjectiles(.1,[0,0,0],()=>({fraction:.5,end:[0,25,15],actorId:crate.id,modelIndex:null}));
  assert.equal(crate.health,0);assert.equal(game.explosions.length,1);assert.deepEqual(game.explosions[0].position,[0,24,100]);
  game.destroy(crate);assert.equal(game.explosions.length,1);assert.equal(events.filter(e=>e.sound==='expl6.wav').length,1);
  const particles=debrisParticles(game.explosions[0]);assert.ok(particles.length>=10&&particles.length<=15);assert.deepEqual(new Set(particles.map(p=>p.actor)),new Set(['brcrate_s1','brcrate_s2']));
  assert.ok(particles.every(p=>p.life>=3&&p.life<=4));assert.equal(explosionFrame(0),1);assert.equal(explosionFrame(.698),7);assert.equal(explosionFrame(.699),8);assert.equal(explosionFrame(.81),null);
  const saved=game.snapshot(),restored=new Gameplay(game.level,{save:saved});CastleWorld.prototype.configureDestructible.call({},restored.objects[0],actor);assert.equal(restored.objects[0].health,0);
});
