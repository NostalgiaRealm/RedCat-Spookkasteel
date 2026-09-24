import test from 'node:test';
import assert from 'node:assert/strict';
import {ActorLightVisibility} from '../src/actor-light-visibility.js';

function fixture({clusters=[0,1],bits=[3,3],leafClusters=[0,1],separateAreas=false}={}) {
  const collision={models:[{root:0,min:[-10,-10,-10],max:[10,10,10]}],nodes:[[-1,-2,0]],planes:[[1,0,0,0]],leaves:[{contents:0},{contents:0}]};
  const calls=[],door={id:'door',kind:'door',modelIndex:1,open:false,openFraction:0};
  const world={level:{collision},physicalModels:[0,1],modelMeshes:new Map([[1,[{material:{opacity:1}}]]]),
    gameplay:{objects:[door],scripts:{players:new Map()}},collider:{data:collision,modelTransforms:new Map(),disabledModels:new Set(),
      trace(...args){calls.push(args);return {startSolid:false,fraction:1};}}};
  const metadata={clusters,leaves:[[leafClusters[0],0],[leafClusters[1],separateAreas?1:0]],
    areas:separateAreas?[[1,0],[1,1]]:[[0,0]],areaPortals:separateAreas?[[1,1],[1,0]]:[]};
  return {world,door,calls,metadata,pvs:Uint8Array.from(bits),visibility:new ActorLightVisibility(world,metadata,Uint8Array.from(bits))};
}

test('Sun visibility checks directed native PVS before tracing world and brush models',()=>{
  const {visibility,calls}=fixture({bits:[1,3]});
  assert.equal(visibility.visible([1,0,0],[-1,0,0]),false);assert.equal(calls.length,0);
  assert.equal(visibility.visible([-1,0,0],[1,0,0]),true);assert.equal(visibility.stats.traces,1);
  assert.equal(calls.length,0,'Sun rays bypass the player hull/actor collision path');
});

test('solid clusters are rejected but a missing PVS row bypasses connected-area filtering',()=>{
  const solid=fixture({clusters:[-1,1],leafClusters:[-1,1]});
  assert.equal(solid.visibility.visible([1,0,0],[-1,0,0]),false);assert.equal(solid.calls.length,0);
  const missing=fixture({clusters:[-1,1],separateAreas:true});
  assert.equal(missing.visibility.visible([1,0,0],[-1,0,0]),true);assert.equal(missing.visibility.stats.traces,1);
});

test('closed area portals reject Sun lighting and authored opening motion invalidates the cache',()=>{
  const {visibility,world,door,calls}=fixture({separateAreas:true}),start=visibility.revision;
  assert.equal(visibility.visible([1,0,0],[-1,0,0]),false);assert.equal(calls.length,0);
  world.gameplay.scripts.players.set(door.id,{time:.1,motion:{startTime:0}});visibility.beginFrame();
  assert.ok(visibility.revision>start);assert.equal(visibility.visible([1,0,0],[-1,0,0]),true);
  world.gameplay.scripts.players.clear();visibility.beginFrame();assert.equal(visibility.visible([1,0,0],[-1,0,0]),false);
});

test('actor/source leaf caches preserve exact point sides including bounds exterior and moved lights',()=>{
  const {visibility}=fixture(),from=[100,0,0],to=[-100,0,0],entity={};
  assert.equal(visibility.visible(from,to,entity),true);const count=visibility.stats.leafQueries;
  assert.equal(visibility.visible(from,[...to],entity),true);assert.equal(visibility.stats.leafQueries,count);
  from[0]=0;visibility.visible(from,to,entity);assert.equal(visibility.findLeaf(from),0);
  visibility.visible(from,[100,0,0],entity);assert.ok(visibility.stats.leafQueries>count);
});

test('moving/disabled brush changes bump revision only when values change',()=>{
  const {visibility,world}=fixture(),base=visibility.revision;
  visibility.beginFrame();assert.equal(visibility.revision,base);
  world.collider.modelTransforms.set(1,{translation:[0,1,0]});visibility.beginFrame();const moved=visibility.revision;
  assert.ok(moved>base);world.collider.modelTransforms.set(1,{translation:[0,1,0]});visibility.beginFrame();assert.equal(visibility.revision,moved);
  world.collider.modelTransforms.get(1).translation[1]=2;visibility.beginFrame();assert.ok(visibility.revision>moved);
  const before=visibility.revision;world.collider.disabledModels.add(1);visibility.beginFrame();assert.ok(visibility.revision>before);
});

test('native Sun point rays honor transformed brushes and exact wall edges without contact skin',()=>{
  const {visibility,world}=fixture(),data=world.level.collision;
  data.nodes.push([-1,-3,0]);data.leaves.push({contents:1});
  data.models.push({root:1,min:[-10,-10,-10],max:[0,10,10]});
  assert.equal(visibility.visible([1,0,0],[-1,0,0]),false);
  assert.equal(visibility.visible([.01,0,0],[0,0,0]),true,'plane endpoint stays in the front cell');
  assert.equal(visibility.visible([.01,0,0],[-.000001,0,0]),false,'crossing the actual plane blocks immediately');
  world.collider.modelTransforms.set(1,{translation:[-5,0,0]});visibility.beginFrame();
  assert.equal(visibility.visible([1,0,0],[-1,0,0]),true);
  assert.equal(visibility.visible([1,0,0],[-6,0,0]),false);
  world.collider.disabledModels.add(1);visibility.beginFrame();
  assert.equal(visibility.visible([1,0,0],[-6,0,0]),true);
});
