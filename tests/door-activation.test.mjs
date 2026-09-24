import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {BspCollider,PlayerController} from '../src/collision.js';
import {moveSolidPlayer} from '../src/moving-solids.js';
import {withinTriggerRadius} from '../src/environment-interactions.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
function boot(id,names) {
  const level=json(`data/levels/${id}/level.json`),events=[];
  const game=new Gameplay(level,{deferInit:true,onEvent:e=>events.push(e)});
  const host=new ScriptHost(game,json(`data/davi/${id}.json`),{motions:json(`data/motions/${id}.json`)});host.initialize();
  for(const player of host.players.values())player.stop();
  for(const object of game.objects)if(['enemy','trigger','pickup','button','door','controller'].includes(object.kind))object.enabled=names.includes(object.entity.DaviName);
  host.cutscene=false;host.enemiesFrozen=true;
  const object=name=>game.find(name)[0];
  const step=(seconds,position=[0,10000,0],options={})=>{
    for(let elapsed=0;elapsed<seconds-1e-8;elapsed+=.025){host.update(.025);game.update(.025,position,options);}
  };
  return {level,game,host,events,object,step};
}

test('native proximity is an origin-centered X/Z box with unexpanded height and full hull dimensions',()=>{
  const door={entity:{TriggerRadius:'30'},position:[460,0,118]};
  assert.equal(withinTriggerRadius(door,[408.01,-55.99,66.01]),true);
  assert.equal(withinTriggerRadius(door,[408,-24,118]),false);
  assert.equal(withinTriggerRadius(door,[460,-56,118]),false);
  assert.equal(withinTriggerRadius({...door,entity:{TriggerRadius:'0'}},door.position),false);
});

test('castle entrance preserves its left-first route and raises throne stairs only from the right corridor',()=>{
  const app=boot('lvl01a',['doorhallway01_01','doorhallway04_01','doorhallway04_02']),{game,object,step}=app;
  const right=object('doorhallway04_02'),outer=object('doorhallway04_01');
  // Entering the hall first runs the original stair-lowering introduction.
  object('TRcamera02').enabled=true;game.trigger(object('TRcamera02'));app.host.update(.1);app.host.skipCutscene();
  object('TRcamera02').enabled=false;app.host.enemiesFrozen=true;
  // This is in front of the brush at x=400 and inside the former E range105.
  step(.025,[380,-24,118],{use:true,touchedModels:[right.modelIndex]});
  assert.equal(right.open,false);assert.equal(object('trap01').open,false);
  step(.025,[720,-24,120],{use:false,touchedModels:[outer.modelIndex]});
  step(.025,[720,-24,120],{use:true,touchedModels:[outer.modelIndex]});assert.equal(outer.open,false);
  step(.025,[-520,-24,96]);assert.equal(object('doorhallway01_01').open,true);
  // The authored radius is offset into the return corridor, beyond the brush.
  step(.025,[430,-24,118]);assert.equal(right.open,true);assert.equal(object('trap01').open,false);
  step(2.1,[460,-24,118]);
  for(const name of ['vlakvoortrap','trap01','schuinvlaktrap'])assert.equal(object(name).open,true,name);
  step(3,[460,-24,118]);assert.equal(right.open,true,'native proximity prevents auto-close');
  step(.025,[0,10000,0]);assert.equal(right.open,false);
  assert.equal(app.host.vm.lastError,null);
});

for(const name of ['doorhallway05_01','doorhallway05_02','doorhallway05_03','secretdoor04'])test(`walking into original ${name} opens the knight-room passage at its brush, without E`,()=>{
  const {level,game,host,object}=boot('lvl01a',[name]),door=object(name),model=level.collision.models[door.modelIndex];
  const collider=new BspCollider(level.collision);collider.modelTransforms=host.modelTransforms;
  const axis=model.max[0]-model.min[0]<model.max[2]-model.min[2]?0:2;
  const center=model.min.map((v,i)=>(v+model.max[i])/2);center[1]=model.min[1]+.05;
  const start=[...center];start[axis]=model.min[axis]-45;
  const hit=collider.trace(start,center,[-11,0,-11],[11,56,11],[door.modelIndex]);
  assert.equal(hit.modelIndex,door.modelIndex);assert.equal(game.contains(door,hit.end),false);
  game.update(.025,hit.end,{touchedModels:[hit.modelIndex]});
  assert.equal(door.open,true);assert.equal(host.players.get(door.id).playing,true);
  assert.equal(host.vm.lastError,null);
});

test('chapel floor descends and carries RedCat after the original floor button raises it',()=>{
  const app=boot('lvl02a',['hek2_button_mc','kerklift_mc']),{game,host,object,step,level}=app;
  const button=object('hek2_button_mc'),lift=object('kerklift_mc');
  const collider=new BspCollider(level.collision);collider.modelTransforms=host.modelTransforms;
  const buttonBounds=level.collision.models[button.modelIndex];
  const p=buttonBounds.min.map((v,i)=>i===1?buttonBounds.max[i]+2:(v+buttonBounds.max[i])/2);
  const buttonHit=collider.trace(p,[p[0],p[1]-4,p[2]],[-11,0,-11],[11,56,11],[button.modelIndex]);
  assert.equal(buttonHit.modelIndex,button.modelIndex);
  game.update(.025,buttonHit.end,{touchedModels:[buttonHit.modelIndex]});step(8);
  assert.equal(button.switchedOn,true);assert.equal(lift.open,false);
  const motion=host.players.get(lift.id);assert.equal(motion.time,0);
  const player=new PlayerController(collider,[0,528.05,-216],[lift.modelIndex]);player.grounded=true;
  host.beforeMotionAdvance=(object,m,from,to)=>{
    const sample=time=>({...m.sample(time),origin:m.motion.origin});
    return moveSolidPlayer(collider,player,object.modelIndex,sample(from),sample(to),{sample,from,to});
  };
  player.update(.025,{forward:0,right:0},0);
  assert.ok(player.contacts.has(lift.modelIndex));
  game.update(.025,player.position,{touchedModels:player.contacts});assert.equal(lift.open,true);
  for(let frame=0;frame<245;frame++){
    host.update(.025);player.update(.025,{forward:0,right:0},0);game.update(.025,player.position,{touchedModels:player.contacts});
    assert.equal(collider.trace(player.position,player.position,player.mins,player.maxs,[lift.modelIndex]).startSolid,false);
  }
  assert.equal(motion.time,6);assert.ok(Math.abs(player.position[1]-224.05)<.1);
  assert.deepEqual(game.checkpoint.position,object('tunnelsave').position);assert.equal(host.vm.lastError,null);
});

test('Brutus double doors open through their original remote approach radii',()=>{
  const names=['endbossdeur_links_mc','endbossdeur_rechts_mc'],app=boot('lvl02a',names);
  app.step(.025,[-1720,190,1320]);assert.ok(names.every(name=>!app.object(name).open));
  app.step(.025,[-1720,190,1360]);assert.ok(names.every(name=>app.object(name).open));
  app.step(3);assert.ok(names.every(name=>!app.object(name).moving));
  assert.equal(app.host.vm.lastError,null);
});

test('automatic interaction retains authored locks, disable flags and shoot-only buttons',()=>{
  const entity=(classname,name,extra)=>({classname,'%name%':name,Origin:'0 0 0',...extra});
  const game=new Gameplay({entities:[
    entity('DoorModel','locked',{TouchToOpen:'1',TriggerRadius:'50',IsInitiallyLocked:'1'}),
    entity('DoorModel','disabled',{TouchToOpen:'1',TriggerRadius:'50',IsInitiallyEnabled:'0'}),
    entity('DoorModel','scripted',{TouchToOpen:'0',TriggerRadius:'0'}),
    entity('ButtonModel','shoot',{TouchToSwitch:'0',ShootToSwitch:'1',TriggerRadius:'0'}),
  ]});
  game.update(.025,[0,0,0],{use:true});
  assert.ok(game.objects.filter(o=>o.kind==='door').every(o=>!o.open));assert.equal(game.find('shoot')[0].switchCount,0);
  game.command(game.find('locked')[0],'unlock');game.update(.025,[0,0,0]);assert.equal(game.find('locked')[0].open,true);
  game.command(game.find('disabled')[0],'open');assert.equal(game.find('disabled')[0].open,true);
});
