import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldGeometryStream} from '../src/world-streaming.js';
import {ActorRenderResidency} from '../src/actor-render-residency.js';
import {ActorTextureStream} from '../src/actor-texture-stream.js';
import {StreamingWorkQueue} from '../src/streaming-work.js';
import {StreamingGpuPreparation} from '../src/streaming-gpu-preparation.js';

const yieldTurn=()=>new Promise(resolve=>setTimeout(resolve,0));

// Rooms 0 -> 1 -> 2 -> 4 lie along a ground-floor corridor. Room 3 is a
// spatially overlapping upstairs floor without a doorway from that corridor.
// Artwork is deliberately behind the initial view and beyond the near margin
// so the fixture measures preparation before entry, rather than wider drawing.
function fixture({work=null,shared=false,load=null}={}) {
  const collision={models:[{root:0,firstLeaf:0,numLeaves:5,min:[-3500,-100,-1000],max:[2000,400,1000]},
    {min:[-2,-8,-130],max:[2,80,-70]},
    {min:[-1002,-8,-130],max:[-998,80,-70]},
    {min:[-2002,-8,-130],max:[-1998,80,-70]}],
    nodes:[[-4,1,0],[-1,2,1],[-2,3,2],[-3,-5,3]],
    planes:[[0,1,0,128],[1,0,0,0],[1,0,0,-1000],[1,0,0,-2000]]};
  const metadata={faceCount:5,faceSpans:Array.from({length:5},(_,i)=>[i,i*3,3]),leafFaces:[0,1,2,3,4],
    leaves:[[0,0,0,1],[1,1,1,1],[2,2,2,1],[3,3,3,1],[4,4,4,1]],clusters:[0,1,2,3,4],
    areas:[[1,0],[2,1],[2,3],[0,5],[1,5]],areaPortals:[[1,1],[1,0],[2,2],[2,1],[3,4],[3,2]]};
  const positions=[[500,20,-100],[-800,20,-100],[-1700,20,-100],[100,220,-100],[-2800,20,-100]],vertices=new Float32Array(5*3*11);
  for(const [i,[x,y,z]]of positions.entries())for(const [j,p]of [[x,y,z-10],[x,y,z+10],[x,y+20,z]].entries())vertices.set(p,(i*3+j)*11);
  const camera=new THREE.PerspectiveCamera(65,1,1,10000);camera.position.set(900,32,-100);camera.lookAt(2000,32,-100);camera.updateMatrixWorld();
  const doors=[1,2,3].map(modelIndex=>({id:'door'+modelIndex,kind:'door',modelIndex,open:false,openFraction:0,locked:false,enabled:true,visible:true}));
  const world={camera,scene:new THREE.Scene(),level:{collision},player:{position:[900,0,-100],noClip:false},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[],streamingWork:work,
    gameplay:{objects:doors,scripts:{players:new Map(),camera:null}}};
  const loads=[],uploads=[],buffers=[],released=[];
  world.renderer={initTexture:map=>uploads.push(map)};world.streamingGpu={warmGeometry:geometry=>buffers.push(geometry)};
  const stream=new WorldGeometryStream(world,{vertices,groups:positions.map((_,i)=>({model:0,start:i*3,count:3,texture:shared&&(i===0||i===2)?7:i})),visibility:metadata,
    pvs:new Uint8Array([1,2,4,8,16]),materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async i=>{
      loads.push(i);const texture=load?await load(i):new THREE.Texture({width:16,height:16});texture.addEventListener('dispose',()=>released.push(i));return texture;
    }});
  world.geometryStream=stream;
  const chunk=i=>stream.chunks.find(chunk=>chunk.spans.some(([face])=>face===i));
  const move=x=>{world.player.position[0]=x;world.camera.position.x=x;world.camera.lookAt(x+100,32,-100);};
  return {world,stream,doors,loads,uploads,buffers,released,chunk,move};
}

test('a room transition preserves one outstanding shared image decode for the newly needed room',async()=>{
  const waiting=[],{stream,loads,released,chunk,move}=fixture({shared:true,load:i=>i===7?new Promise(resolve=>waiting.push(resolve)):Promise.resolve(new THREE.Texture({width:16,height:16}))});
  try {
    stream.update(1);await yieldTurn();assert.equal(loads.filter(i=>i===7).length,1);
    move(-1200);stream.update(1+1/60);await yieldTurn();
    const count=loads.filter(i=>i===7).length;
    for(const resolve of waiting)resolve(new THREE.Texture({width:16,height:16}));
    await stream.settle();assert.equal(count,1,'release of the old room must not cancel and restart the image required by its successor');
    assert.equal(chunk(2).resident,true);assert.ok(chunk(2).material.material.map?.isTexture);
    assert.equal(released.includes(7),false,'the last shared image user still owns its image');assert.equal(chunk(0).request,null);
  }finally{for(const resolve of waiting)resolve(new THREE.Texture());stream.dispose();}
});

test('rapid forward and reverse room changes transfer a shared pending image without repeated garbage churn',async()=>{
  const waiting=[],{stream,loads,released,chunk,move}=fixture({shared:true,load:i=>i===7?new Promise(resolve=>waiting.push(resolve)):Promise.resolve(new THREE.Texture({width:16,height:16}))});
  try {
    stream.update(1);await yieldTurn();const identity=stream.textures.entries.get(7);
    for(const [i,x]of [-1200,900,-1200,900].entries()) {
      move(x);stream.update(1+(i+1)/60);await yieldTurn();
      assert.equal(stream.textures.entries.get(7),identity,'the shared pending image identity must survive each ownership handover');
      assert.equal(identity.refs,1);assert.equal(loads.filter(texture=>texture===7).length,1);assert.equal(released.includes(7),false);
    }
    for(const resolve of waiting)resolve(new THREE.Texture({width:16,height:16}));
    await stream.settle();assert.equal(chunk(0).resident,true);assert.equal(chunk(2).request,null);assert.equal(released.includes(7),false);
  }finally{for(const resolve of waiting)resolve(new THREE.Texture());stream.dispose();}
});

function leadingFixture({work=null,far=2200,load=null}={}) {
  const collision={models:[{root:0,firstLeaf:0,numLeaves:2,min:[-1000,-100,-1000],max:[5000,400,1000]}],nodes:[[-2,-1,0]],planes:[[0,1,0,128]]};
  const metadata={faceCount:4,faceSpans:Array.from({length:4},(_,i)=>[i,i*3,3]),leafFaces:[0,1,2,3],
    leaves:[[0,0,0,3],[1,1,3,1]],clusters:[0,1],areas:[[0,0],[0,0]],areaPortals:[]};
  const vertices=new Float32Array(4*3*11),positions=[[200,20,-100],[far,20,-100],[far+240,20,-100],[far,220,-100]];
  for(const [i,[x,y,z]]of positions.entries())for(const [j,p]of [[x,y,z-10],[x,y,z+10],[x,y+20,z]].entries())vertices.set(p,(i*3+j)*11);
  const camera=new THREE.PerspectiveCamera(65,1,1,10000);camera.position.set(100,32,-100);camera.lookAt(5000,32,-100);camera.updateMatrixWorld();
  const world={camera,scene:new THREE.Scene(),level:{collision},player:{position:[100,0,-100],noClip:false},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[],streamingWork:work,
    gameplay:{objects:[],scripts:{players:new Map(),camera:null}}};
  const loads=[],uploads=[],buffers=[];world.renderer={initTexture:map=>uploads.push(map)};world.streamingGpu={warmGeometry:geometry=>buffers.push(geometry)};
  const stream=new WorldGeometryStream(world,{vertices,groups:positions.map((_,i)=>({model:0,start:i*3,count:3,texture:i})),visibility:metadata,pvs:new Uint8Array([1,2]),
    materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async i=>{loads.push(i);return load?load(i):new THREE.Texture({width:16,height:16});}});
  world.geometryStream=stream;const move=x=>{world.player.position[0]=x;world.camera.position.x=x;world.camera.lookAt(x+100,32,-100);};
  return {world,stream,loads,uploads,buffers,move,chunk:i=>stream.chunks.find(chunk=>chunk.group.texture===i)};
}

test('steady forward movement prepares the next range-edge image and buffer before either becomes drawable',async()=>{
  const {stream,loads,uploads,buffers,move,chunk}=leadingFixture();
  try {
    await stream.settle();assert.deepEqual(loads,[0]);const now=performance.now()/1000;stream.update(now);
    move(110);stream.update(now+1/60);await stream.settle();
    assert.equal(chunk(1).resident,true,'the directional lead must prepare artwork before the current camera reaches its range boundary');
    assert.equal(chunk(1).inView,false);assert.equal(chunk(1).requiredForView,false);assert.equal(chunk(1).mesh.layers.mask,2);
    assert.ok(stream.preloadPosition.distanceTo(stream.world.camera.position)<=192.001);
    assert.equal(chunk(2).request,null,'the leading strip must not add more than the existing capped motion lead');
    assert.equal(chunk(3).request,null,'spatially close upstairs artwork must remain excluded from the leading strip');
    const geometry=chunk(1).mesh.geometry,map=chunk(1).material.material.map,counts=[loads.length,uploads.length,buffers.length];
    move(160);stream.update(now+2/60);assert.equal(chunk(1).inView,true);assert.equal(stream.readyForView,true);
    assert.equal(chunk(1).mesh.geometry,geometry);assert.equal(chunk(1).material.material.map,map);
    assert.deepEqual([loads.length,uploads.length,buffers.length],counts,'crossing the visible range edge must reuse prepared data');
  }finally{stream.dispose();}
});

test('stationary, paused and teleporting cameras never project extra room-loading distance',async()=>{
  for(const mode of ['stationary','paused','teleport']) {
    const {stream,loads,move,chunk}=leadingFixture({far:mode==='teleport'?2800:2200});
    try {
      await stream.settle();const now=performance.now()/1000;stream.update(now);
      if(mode==='paused')move(110);else if(mode==='teleport')move(600);
      stream.update(now+(mode==='paused'?.5:1/60));await stream.settle();
      assert.equal(chunk(1).request,null,mode+' must not prefetch a distant range-edge section');
      assert.equal(stream.preloadPosition.distanceTo(stream.world.camera.position),0);assert.deepEqual(loads,[0]);
    }finally{stream.dispose();}
  }
});

test('an unknown authored-camera teleport uses its conservative fallback without projecting a remote loading strip',async()=>{
  const {world,stream,loads,chunk,move}=leadingFixture();
  try {
    await stream.settle();stream.update(1);world.gameplay.scripts.camera={mode:2};
    world.camera.position.set(7000,600,3000);world.camera.lookAt(8000,600,3000);stream.update(40);
    assert.equal(stream.rooms.active,false);assert.equal(stream.visibility.active,false);
    assert.equal(stream.preloadPosition.distanceTo(world.camera.position),0);assert.ok(stream.chunks.every(chunk=>!chunk.inView));
    assert.deepEqual(loads,[0]);assert.equal(chunk(1).request,null);
    world.gameplay.scripts.camera=null;world.camera.position.set(100,32,-100);move(100);stream.update(40+1/60);await stream.settle();
    assert.equal(stream.rooms.active,true);assert.equal(stream.rooms.area,0);assert.equal(stream.readyForView,true);
    assert.equal(chunk(1).request,null);
  }finally{stream.dispose();}
});

function actorAt(x,y,map) {
  const root=new THREE.Group(),geometry=new THREE.BoxGeometry(10,20,10);geometry.computeBoundingBox();
  const mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial({map}));mesh.userData.actorLighting={bounds:geometry.boundingBox};root.add(mesh);root.position.set(x,y,-100);return root;
}

test('actors use the same forward preparation strip while drawing retains its unchanged current-camera limit',async()=>{
  const {world,stream,move}=leadingFixture(),work=new StreamingWorkQueue({clock:()=>0,maxJobs:3}),loaded=[],uploaded=[],warmed=[];
  const textures=new ActorTextureStream({clock:()=>0,placeholder:{width:1,height:1},work,
    load:async url=>{loaded.push(url);return new THREE.Texture({width:16,height:16});},upload:map=>uploaded.push(map)});
  const preparation=new StreamingGpuPreparation({},work);preparation.warmGeometry=geometry=>{preparation.prepared.add(geometry);warmed.push(geometry);};
  const roots=[actorAt(2200,20,textures.texture('next-room.png')),actorAt(2440,20,textures.texture('too-far.png')),actorAt(2200,220,textures.texture('upstairs.png'))];world.scene.add(...roots);
  const residency=new ActorRenderResidency({scene:world.scene,textures,preparation,nearDistance:576,viewDistance:2048,
    boundsAllowed:box=>stream.roomBoundsAllowed(box),boundsCurrent:box=>stream.roomBoundsCurrent(box),boundsPreload:box=>stream.roomBoundsPreload(box),
    boundsVisible:box=>stream.boundsVisible(box),preloadPosition:()=>stream.preloadPosition});
  try {
    await stream.settle();const now=performance.now()/1000;stream.update(now);residency.update(roots,world.camera,now);assert.deepEqual(loaded,[]);
    move(110);stream.update(now+1/60);residency.update(roots,world.camera,now+1/60);await residency.settle();
    assert.deepEqual(loaded,['next-room.png']);assert.equal(uploaded.length,1);assert.equal(warmed.length,1);
    assert.equal(residency.isResident(roots[0]),true);assert.equal(residency.isRendered(roots[0]),false);
    assert.ok(roots.slice(1).every(root=>!residency.isResident(root)));
    const counts=[loaded.length,uploaded.length,warmed.length];move(160);stream.update(now+2/60);residency.update(roots,world.camera,now+2/60);
    assert.equal(residency.readyForView,true);assert.equal(residency.isRendered(roots[0]),true);assert.deepEqual([loaded.length,uploaded.length,warmed.length],counts);
  }finally{residency.dispose();preparation.dispose();textures.dispose();stream.dispose();work.dispose();for(const root of roots)root.traverse(mesh=>{mesh.geometry?.dispose();mesh.material?.dispose();});}
});

test('pooled-fragment map watchers prepare the forward strip before drawing and reject unrelated rooms',async()=>{
  const {world,stream,move}=leadingFixture(),work=new StreamingWorkQueue({clock:()=>0,maxJobs:3}),loaded=[],uploaded=[];
  const textures=new ActorTextureStream({clock:()=>0,placeholder:{width:1,height:1},work,
    load:async url=>{loaded.push(url);return new THREE.Texture({width:16,height:16});},upload:map=>uploaded.push(map)});
  const roots=[actorAt(2200,20,textures.texture('fragments.png')),actorAt(2440,20,textures.texture('too-far-fragments.png')),actorAt(2200,220,textures.texture('upstairs-fragments.png'))];
  world.scene.add(...roots);for(const root of roots)textures.watch(root);
  const update=()=>textures.update(world.camera,{nearDistance:576,viewDistance:2048,preloadPosition:stream.preloadPosition,
    boundsAllowed:(center,radius)=>stream.rooms.sphereAllowed(center,radius)});
  try {
    await stream.settle();const now=performance.now()/1000;stream.update(now);update();assert.deepEqual(loaded,[]);
    move(110);stream.update(now+1/60);update();await textures.settle();update();
    assert.deepEqual(loaded,['fragments.png']);assert.equal(uploaded.length,1);
    assert.equal(textures.entries.get('fragments.png').ready,true);assert.equal(textures.readyForView,true);
    assert.ok(roots.every(root=>root.children[0].layers.mask===0),'off-cap or unrelated watcher artwork must remain hidden even after preparation');
    const counts=[loaded.length,uploaded.length];move(160);stream.update(now+2/60);update();
    assert.equal(roots[0].children[0].layers.mask,1);assert.equal(roots[1].children[0].layers.mask,0);assert.equal(roots[2].children[0].layers.mask,0);
    assert.deepEqual([loaded.length,uploaded.length],counts);assert.ok(work.stats.maxJobs<=3);
  }finally{textures.dispose();stream.dispose();work.dispose();for(const root of roots)root.traverse(mesh=>{mesh.geometry?.dispose();mesh.material?.dispose();});}
});

test('forward-range preparation obeys the shared frame job and elapsed-time budgets',async()=>{
  let cpuTime=0;const starts=[],work=new StreamingWorkQueue({clock:()=>cpuTime,budgetMs:1.5,maxJobs:3}),{world,stream,move,uploads,buffers,chunk}=leadingFixture({work});
  world.renderer.initTexture=map=>{starts.push(cpuTime);uploads.push(map);cpuTime+=.8;};
  world.streamingGpu.warmGeometry=geometry=>{starts.push(cpuTime);buffers.push(geometry);cpuTime+=.8;};
  try {
    stream.update(1);await yieldTurn();move(110);stream.update(1+1/60);await yieldTurn();
    for(let frame=0;frame<20&&!chunk(1).resident;frame++) {
      const start=cpuTime,previous=starts.length;work.pump(frame);await yieldTurn();stream.update(1+(frame+2)/60);
      const added=starts.slice(previous);assert.ok(added.length<=3);
      assert.ok(added.every(time=>time-start<1.5),'no next upload may begin after this frame has spent its preparation budget');
    }
    assert.equal(chunk(1).resident,true);assert.equal(chunk(1).inView,false);assert.ok(work.stats.maxJobs<=3);
  }finally{stream.dispose();work.dispose();}
});
