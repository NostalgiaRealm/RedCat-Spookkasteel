import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {RoomVisibility} from '../src/room-visibility.js';
import {WorldGeometryStream} from '../src/world-streaming.js';
import {ActorRenderResidency} from '../src/actor-render-residency.js';
import {ActorTextureStream} from '../src/actor-texture-stream.js';
import {BillboardBatch,BeamBatch,WorldEffects} from '../src/world-effects.js';
import {DestructibleEffects} from '../src/destructible-effects.js';

function fixture() {
  const box={min:[-400,-100,-300],max:[200,200,100]},collision={models:[{...box,root:0,firstLeaf:0,numLeaves:4},
    {min:[-2,-8,-120],max:[2,60,-80]},{min:[-102,-8,-120],max:[-98,60,-80]}],
    nodes:[[-4,1,0],[-1,2,1],[-2,-3,2]],planes:[[0,1,0,64],[1,0,0,0],[1,0,0,-100]]};
  const metadata={faceCount:4,faceSpans:[[0,0,3],[1,3,3],[2,6,3],[3,9,3]],leafFaces:[0,1,2,3],
    leaves:[[0,0,0,1],[1,1,1,1],[2,2,2,1],[3,3,3,1]],clusters:[0,1,2,3],
    areas:[[1,0],[2,1],[1,3],[0,4]],areaPortals:[[1,1],[1,0],[2,2],[2,1]]};
  const vertices=new Float32Array(12*11);
  for(const [i,[x,y]]of [[40,0],[-50,0],[-150,0],[40,100]].entries())
    for(const [j,p]of [[x-10,y,-100],[x+10,y,-100],[x,y+20,-100]].entries())vertices.set(p,(i*3+j)*11);
  const camera=new THREE.PerspectiveCamera(65,1,1,10000);camera.position.set(50,32,-100);camera.lookAt(-200,32,-100);camera.updateMatrixWorld();
  const doors=[{id:'door1',kind:'door',modelIndex:1,open:false,openFraction:0},{id:'door2',kind:'door',modelIndex:2,open:false,openFraction:0}];
  const world={camera,scene:new THREE.Scene(),level:{collision},player:{position:[50,0,-100],noClip:false},
    gameplay:{objects:doors,scripts:{players:new Map(),camera:null}},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[],track:r=>r};
  const loads=[],releases=[],stream=new WorldGeometryStream(world,{vertices,groups:[{model:0,start:0,count:12,texture:0}],visibility:metadata,pvs:new Uint8Array([15,15,15,15]),
    materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async index=>{loads.push(index);const texture=new THREE.Texture();texture.addEventListener('dispose',()=>releases.push(index));return texture;}});
  world.geometryStream=stream;return {world,stream,rooms:stream.rooms,metadata,vertices,doors,loads,releases};
}

test('nearby stacked and nonadjacent rooms never allocate artwork; spatial cells are split by room ownership',async()=>{
  const {stream,rooms}=fixture();
  try {
    await stream.settle();assert.deepEqual(rooms.stats.allowedAreas,[0,1]);
    assert.equal(stream.chunks.length,4,'same-cell unrelated rooms need independent buffers');
    for(const chunk of stream.chunks)assert.equal(chunk.resident,chunk.areas.some(a=>a===0||a===1));
    assert.equal(stream.stats.residentVertices,6);
    assert.ok(stream.traceSurface([40,105,-50],[40,105,-150]),'unloaded upstairs geometry still exists for surface queries');
  } finally {stream.dispose();}
});

test('the room beyond a closed doorway is prepared, and aligned open doorways preserve a farther visible room',()=>{
  const {rooms,world,doors,stream}=fixture();
  try {
    rooms.update(world.camera);assert.deepEqual(rooms.stats.allowedAreas,[0,1]);
    doors[0].open=true;doors[1].open=true;rooms.update(world.camera);assert.deepEqual(rooms.stats.allowedAreas,[0,1,2]);
    world.camera.lookAt(200,32,-100);world.camera.updateMatrixWorld();rooms.update(world.camera);assert.deepEqual(rooms.stats.allowedAreas,[0,1]);
    world.camera.lookAt(-200,32,-100);world.camera.updateMatrixWorld();doors[0].open=false;doors[0].openFraction=.1;
    rooms.update(world.camera);assert.deepEqual(rooms.stats.allowedAreas,[0,1,2],'a closing door remains an aperture until its motion ends');
  } finally {stream.dispose();}
});

test('crossing a doorway preloads the next room and promptly releases unrelated rooms even inside the distance grace radius',async()=>{
  const {stream,world,rooms}=fixture();
  try {
    await stream.settle();world.player.position[0]=-50;world.camera.position.x=-50;await stream.settle();
    assert.deepEqual(rooms.stats.allowedAreas,[0,1,2]);assert.equal(stream.stats.residentChunks,3);
    world.player.position[0]=-150;world.camera.position.x=-150;await stream.settle();
    assert.deepEqual(rooms.stats.allowedAreas,[1,2]);assert.equal(stream.chunks.find(c=>c.areas.includes(0)).resident,false);
    assert.equal(stream.chunks.find(c=>c.areas.includes(3)).request,null);
  } finally {stream.dispose();}
});

test('remote authored cameras select their own room and return safely; flying into solid exterior space retains the last valid room',async()=>{
  const {stream,world,rooms}=fixture();
  try {
    await stream.settle();world.gameplay.scripts.camera={mode:2};world.camera.position.set(40,120,-100);await stream.settle();
    assert.deepEqual(rooms.stats.allowedAreas,[3]);assert.equal(stream.stats.residentChunks,1);
    world.camera.position.set(1000,120,-100);stream.update();assert.equal(rooms.active,false,'an authored camera outside valid BSP space retains conservative view loading');
    world.gameplay.scripts.camera=null;world.camera.position.set(50,32,-100);await stream.settle();assert.deepEqual(rooms.stats.allowedAreas,[0,1]);
    world.player.noClip=true;world.player.position=[1000,1000,1000];world.camera.position.set(1000,1032,1000);stream.update();
    assert.deepEqual(rooms.stats.allowedAreas,[0,1]);
    world.camera.position.set(40,120,-100);stream.update();assert.deepEqual(rooms.stats.allowedAreas,[0,1],'an exterior player does not move rooms because the camera enters an upstairs room');
  } finally {stream.dispose();}
});

function actor(position,map=null) {
  const geometry=new THREE.BoxGeometry(10,10,10);geometry.computeBoundingBox();
  const root=new THREE.Group(),mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial({map}));root.position.fromArray(position);root.add(mesh);mesh.userData.actorLighting={bounds:geometry.boundingBox};root.userData.mesh=mesh;return root;
}

test('actors and pooled fragment textures in unrelated rooms do not request maps or enter residency',async()=>{
  const {stream,world}=fixture();let time=0;const loads=[];
  const textures=new ActorTextureStream({placeholder:{width:1,height:1},clock:()=>time,load:async url=>{loads.push(url);return new THREE.Texture({width:1,height:1});}});
  const downstairs=actor([30,20,-100],textures.texture('down.png')),upstairs=actor([30,120,-100],textures.texture('up.png'));
  world.scene.add(downstairs,upstairs);const residency=new ActorRenderResidency({scene:world.scene,textures,nearDistance:576,retainDistance:1152,
    boundsAllowed:box=>stream.roomBoundsAllowed(box)});
  try {
    await stream.settle();residency.update([downstairs,upstairs],world.camera,time);await textures.settle();
    assert.deepEqual(loads,['down.png']);assert.equal(residency.isResident(upstairs),false);
    textures.watch(upstairs);textures.update(world.camera,{boundsAllowed:(position,radius)=>stream.rooms.sphereAllowed(position,radius)});
    await textures.settle();assert.deepEqual(loads,['down.png']);assert.equal(upstairs.children[0].layers.mask,0);
  } finally {residency.dispose();textures.dispose();stream.dispose();}
});

test('flames and ribbons from excluded floors are omitted while large effects touching the selected room remain visible',async()=>{
  const {world,stream}=fixture();
  try {
    await stream.settle();const billboard=new BillboardBatch(world,null),beam=new BeamBatch(world,null);
    billboard.beginView();beam.beginView();billboard.add([40,120,-100],8,8,[1,1,1],1);assert.equal(billboard.count,0);
    billboard.add([40,20,-100],8,8,[1,1,1],1);assert.equal(billboard.count,1);
    beam.addPoints(Array.from({length:6},(_,i)=>new THREE.Vector3(30+i,120,-100)),[1,1,1],1);assert.equal(beam.count,0);
    beam.addPoints(Array.from({length:6},(_,i)=>new THREE.Vector3(30+i,i===0?20:120,-100)),[1,1,1],1);assert.equal(beam.count,1);
  } finally {stream.dispose();}
});

test('missing room metadata falls back conservatively, without inventing a closed room',()=>{
  const {world,metadata,stream}=fixture();
  try {
    const rooms=new RoomVisibility(world,{...metadata,areas:[],areaPortals:[]});rooms.update(world.camera);
    assert.equal(rooms.active,false);assert.equal(rooms.areasAllowed([99]),true);
    assert.equal(rooms.boundsAllowed([0,100,-100],[50,140,-60]),true);
  } finally {stream.dispose();}
});

test('animation padding cannot assign an upstairs actor to the basement and shared admitted textures remain protected',async()=>{
  const {stream,world}=fixture(),map=new THREE.Texture();let releases=0;map.addEventListener('dispose',()=>releases++);
  const down=actor([30,20,-100],map),up=actor([30,75,-100],map);world.scene.add(down,up);
  const residency=new ActorRenderResidency({scene:world.scene,nearDistance:576,boundsAllowed:box=>stream.roomBoundsAllowed(box)});
  try {
    await stream.settle();residency.update([down,up],world.camera,0);
    assert.equal(residency.isResident(down),true);assert.equal(residency.isResident(up),false);assert.equal(releases,0);
    assert.ok(residency.records.get(up).bounds.min.y<64,'the old padded box would touch the basement');
  } finally {residency.dispose();stream.dispose();map.dispose();}
});

test('a room change during an outstanding texture load cannot activate an obsolete room',async()=>{
  const {stream,world}=fixture();let resolve;
  stream.textures.load=()=>new Promise(done=>resolve=done);
  try {
    stream.update();await Promise.resolve();world.gameplay.scripts.camera={mode:2};world.camera.position.set(40,120,-100);stream.update();
    resolve(new THREE.Texture());await stream.settle();
    assert.equal(stream.stats.residentChunks,1);assert.deepEqual(stream.chunks.filter(c=>c.resident).map(c=>c.areas),[[3]]);
  } finally {stream.dispose();}
});

test('fragment preparation excludes destructibles across a floor without limiting a real explosion',async()=>{
  const {stream,world}=fixture(),requests=[];
  world.actorTextures={requestRoot:prototype=>requests.push(prototype),prepareRoot:()=>{},unwatch:()=>{}};
  const game={time:0,objectPosition:o=>o.position},effect=new DestructibleEffects(world,game),down=actor([0,0,0]),up=actor([0,0,0]);
  effect.prototypes.set('down',down);effect.prototypes.set('up',up);
  effect.sources=[{position:[40,20,-100],health:1,actorSettings:{debris:{types:[{actor:'down.act',MaxNr:8}]}}},
    {position:[40,120,-100],health:1,actorSettings:{debris:{types:[{actor:'up.act',MaxNr:8}]}}}];
  try {
    await stream.settle();effect.prepareNearby(undefined,Infinity,true);
    assert.deepEqual(requests,[down]);assert.equal(effect.renderPool.owned.get(down),8);assert.equal(effect.renderPool.owned.has(up),false);
  } finally {effect.dispose();stream.dispose();}
});

test('excluded flame emitters retain simulation clocks without submitting particles through a ceiling',async()=>{
  const {stream,world}=fixture();let updates=0,draws=0;
  const state={object:{id:'upstairs-torch',entity:{BitmapFileName:'f.bmp',BitmapAlphaFileName:'a.bmp'}},active:true,
    spout:{time:0,particles:[{position:[40,20,-100],size:10,opacity:1}],tint:[1,1,1],update(dt){this.time+=dt;updates++;}}};
  const effects={world,batches:new Map([['f.bmp|a.bmp',{add:()=>draws++}]]),torches:{direction:()=>[0,1,0]},endpoint:(_name,p)=>p};
  try {
    await stream.settle();WorldEffects.prototype.updateSpout.call(effects,state,[40,120,-100],.1);
    assert.equal(updates,1);assert.equal(state.clock,.1);assert.equal(draws,0);
    WorldEffects.prototype.updateSpout.call(effects,state,[40,20,-100],.1);assert.equal(draws,1);
  } finally {stream.dispose();}
});

test('all five chapters have exact static room ownership, including the complete Tower witch room',()=>{
  const read=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const level=read('data/levels/'+id+'/level.json'),metadata=read('data/visibility/'+id+'.json'),rooms=new RoomVisibility({level},metadata);
    const staticGroups=level.groups.filter(g=>g.model===0);
    for(const [face,start]of metadata.faceSpans)if(staticGroups.some(g=>start>=g.start&&start<g.start+g.count))assert.equal(rooms.faceAreas[face].length,1,id+': '+face);
    if(id==='lvl04a')assert.equal(rooms.areaAt([-2,2500,48]),1);
  }
});

test('a long camera transition retains its visible room while loading priming still uses restored player coordinates',()=>{
  const {world,rooms,stream}=fixture();
  try {
    world.player.position=[-380,0,-100];world.camera.position.set(190,120,80);world.camera.updateMatrixWorld();
    rooms.update(world.camera);assert.equal(rooms.area,3);
    rooms.update(world.camera,{playerOnly:true});assert.equal(rooms.area,2);assert.deepEqual(rooms.stats.allowedAreas,[1,2]);
  } finally {stream.dispose();}
});
