import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {hudCommands} from '../src/hud.js';
const manifest=JSON.parse(readFileSync(new URL('../assets/hud/manifest.json',import.meta.url)));
const entity=(classname,name,Type='1')=>({classname,'%name%':name,Origin:'0 0 0',Type});
const level={id:'lvl00a',spawn:{position:[0,0,0]},entities:[entity('ItemHart','container'),entity('ItemHealth','small'),entity('ItemHealth','medium','2'),entity('ItemHealth','large','3')]};
const hearts=game=>hudCommands(manifest,game.state,0).filter(c=>c.name==='HealthContainer').map(c=>c.frame);
test('capacity pickups use the original golden heart actor in every authored level and restored saves',()=>{
  const actors=JSON.parse(readFileSync(new URL('../assets/actors/manifest.json',import.meta.url))).actors;
  const asset=JSON.parse(readFileSync(new URL('../assets/actors/'+actors.hartcontainer.file,import.meta.url)));
  assert.equal(asset.source,'hartcontainer.act');
  assert.equal(asset.materials[0].texture,'textures/hartcontainer-0.png');
  assert.equal(asset.settings.scale,3);assert.deepEqual(asset.settings.rotationDegreesPerSecond,[0,100,0]);
  assert.equal(asset.settings.lighting.overrideAmbient,true);assert.deepEqual(asset.settings.lighting.ambientColor,[255,255,255]);
  let count=0;
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']){
    const data=JSON.parse(readFileSync(new URL(`../data/levels/${id}/level.json`,import.meta.url)));
    const game=new Gameplay(data,{deferInit:true}),restored=new Gameplay(data,{save:game.snapshot()});
    for(const item of restored.objects.filter(o=>o.subtype==='hart')){
      count++;assert.equal(item.actorFile,'hartcontainer',`${id}: ${item.id}`);
    }
    for(const item of restored.objects.filter(o=>o.subtype==='health'))
      assert.equal(item.actorFile,['ihealths','ihealthm','ihealthl'][Number(item.entity.Type||1)-1]);
  }
  assert.equal(count,4);
  const alias=new Gameplay({...level,entities:[entity('ItemHartContainer','alias')]});
  assert.equal(alias.find('alias')[0].actorFile,'hartcontainer');
});
test('native container adds two max HP without healing; a lost half-heart can be refilled',()=>{
  const g=new Gameplay(level);g.pickup(g.find('container')[0]);
  assert.equal(g.state.maxHealth,12);assert.equal(g.state.health,10);assert.deepEqual(hearts(g),[0,0,0,0,0,2]);
  g.pickup(g.find('medium')[0]);assert.equal(g.state.health,12);assert.deepEqual(hearts(g),[0,0,0,0,0,0]);
  g.damage(1);assert.deepEqual(hearts(g),[0,0,0,0,0,1]);
  g.pickup(g.find('small')[0]);assert.equal(g.state.health,12);assert.deepEqual(hearts(g),[0,0,0,0,0,0]);
  const wounded=new Gameplay(level);wounded.state.health=6;wounded.pickup(wounded.find('container')[0]);
  assert.equal(wounded.state.health,6);assert.equal(wounded.state.maxHealth,12);
});
test('native small/medium/large heal 1/2/20 HP, partial damage is healable and full health leaves pickup',()=>{
  const g=new Gameplay(level);g.pickup(g.find('small')[0]);assert.equal(g.find('small')[0].collected,false);
  g.state.health=9.8;g.pickup(g.find('small')[0]);assert.equal(g.state.health,10);
  g.state.health=7;g.pickup(g.find('medium')[0]);assert.equal(g.state.health,9);
  g.state.health=.2;g.pickup(g.find('large')[0]);assert.equal(g.state.health,10);
});
test('legacy half-capacity saves migrate once without removing wounds or reviving a dead player',()=>{
  for(const max of [10,11,12,15,20])for(const wound of [0,1,max]){
    const g=new Gameplay(level),save=g.snapshot();delete save.healthVersion;
    save.state.maxHealth=max;save.state.health=max-wound;
    const fixed=new Gameplay(level,{save}),capacity=Math.min(20,10+(max-10)*2);
    assert.equal(fixed.state.maxHealth,capacity);assert.equal(fixed.state.health,wound===max?0:capacity-wound);
    assert.deepEqual(new Gameplay(level,{save:fixed.snapshot()}).state,fixed.state);
  }
});
test('cutscenes prevent enemy, continuous and lethal damage; normal damage resumes afterwards',()=>{
  const g=new Gameplay(level);g.scripts={cutscene:true};
  g.damage(2);g.damage(.5,'water',{continuous:true});g.damage(999,'fall');
  assert.equal(g.state.health,10);assert.equal(g.state.lives,3);assert.equal(g.hitCooldown,0);
  g.scripts.cutscene=false;g.damage(1);assert.equal(g.state.health,9);
});
