import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldGeometryStream} from '../source/world-streaming.js';
import {ActorRenderResidency} from '../source/actor-render-residency.js';
import {ActorTextureStream} from '../source/actor-texture-stream.js';
import {StreamingWorkQueue} from '../source/streaming-work.js';
import {StreamingGpuPreparation} from '../source/streaming-gpu-preparation.js';

// Four ground-floor leaves include two PVS cells of the present room, a
// doorway neighbor and a distant piece of the present room. A fifth leaf is
// an unrelated floor. This separates room ownership from distance and PVS.
function fixture({hidden=false,work=null}={}) {
  const collision={models:[{root:0,firstLeaf:0,numLeaves:5,min:[-400,-100,-4000],max:[400,200,4000]},
    {min:[-2,-8,-1020],max:[2,60,-980]}],
    nodes:[[-5,1,0],[2,-3,1],[-1,3,2],[-2,-4,3]],
    planes:[[0,1,0,64],[1,0,0,0],[0,0,1,-800],[0,0,1,-2000]]};
  const metadata={faceCount:5,faceSpans:Array.from({length:5},(_,i)=>[i,i*3,3]),leafFaces:[0,1,2,3,4],
    leaves:[[0,0,0,1],[1,0,1,1],[2,1,2,1],[3,0,3,1],[4,2,4,1]],clusters:[0,1,2,3,4],
    areas:[[1,0],[1,1],[0,2]],areaPortals:[[1,1],[1,0]]};
  const vertices=new Float32Array(5*3*11),positions=[[50,20,100],[50,20,-1200],[-100,20,-1000],[50,20,-3000],[50,120,-1000]];
  for(const [i,[x,y,z]]of positions.entries())for(const [j,p]of [[x-10,y,z],[x+10,y,z],[x,y+20,z]].entries())vertices.set(p,(i*3+j)*11);
  const camera=new THREE.PerspectiveCamera(65,1,1,10000);camera.position.set(50,32,0);camera.lookAt(50,32,100);camera.updateMatrixWorld();
  const world={camera,scene:new THREE.Scene(),level:{collision},player:{position:[50,0,0]},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[],streamingWork:work,
    gameplay:{objects:[{id:'door',kind:'door',modelIndex:1,open:false,openFraction:0}],scripts:{players:new Map(),camera:null}}};
  const loads=[],uploads=[],buffers=[];
  world.renderer={initTexture:map=>uploads.push(map)};world.streamingGpu={warmGeometry:geometry=>buffers.push(geometry)};
  const stream=new WorldGeometryStream(world,{vertices,groups:positions.map((_,i)=>({model:0,start:i*3,count:3,texture:i})),visibility:metadata,
    pvs:new Uint8Array([hidden?1:3,31,4,8,16]),materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async i=>{
      loads.push(i);return new THREE.Texture({width:16,height:16});
    }});
  world.geometryStream=stream;
  return {world,stream,loads,uploads,buffers,chunk:index=>stream.chunks.find(chunk=>chunk.group.texture===index)};
}

test('a cold turn within the present room reuses fully prepared geometry and maps behind the camera',async()=>{
  const {world,stream,loads,uploads,buffers,chunk}=fixture();
  try {
    await stream.settle();assert.deepEqual(loads,[0,1]);
    assert.equal(chunk(1).resident,true);assert.equal(chunk(1).mesh.layers.mask,2,'background preparation must not draw behind the camera');
    assert.equal(chunk(1).preloadPriority,0,'whole-room work remains below near and visible artwork');
    const geometry=chunk(1).mesh.geometry,map=chunk(1).material.material.map,counts=[loads.length,uploads.length,buffers.length];
    world.camera.lookAt(50,32,-1200);stream.update();
    assert.equal(stream.readyForView,true);assert.equal(chunk(1).mesh.layers.mask,1);
    assert.equal(chunk(1).mesh.geometry,geometry);assert.equal(chunk(1).material.material.map,map);
    assert.deepEqual([loads.length,uploads.length,buffers.length],counts,'the first reverse view must cause no decode/upload/activation');
    assert.equal(chunk(1).mesh.geometry.drawRange.count,3);
  }finally{stream.dispose();}
});

test('same-room PVS-hidden surfaces prepare without drawing and survive a camera-leaf visibility change',async()=>{
  const {world,stream,loads,chunk}=fixture({hidden:true});
  try {
    await stream.settle();assert.equal(chunk(1).resident,true);assert.equal(chunk(1).mesh.geometry.drawRange.count,0);
    const geometry=chunk(1).mesh.geometry,map=chunk(1).material.material.map;
    world.camera.lookAt(50,32,-1200);stream.update();
    assert.equal(chunk(1).inView,false,'turning alone must not bypass the native PVS');
    assert.equal(chunk(1).mesh.layers.mask,2);assert.equal(chunk(1).mesh.geometry.drawRange.count,0);
    world.camera.position.z=-801;world.player.position[2]=-801;world.camera.lookAt(50,32,-1200);stream.update();
    assert.equal(chunk(1).inView,true);assert.equal(chunk(1).mesh.layers.mask,1);
    assert.equal(chunk(1).mesh.geometry,geometry);assert.equal(chunk(1).material.material.map,map);
    assert.equal(chunk(1).mesh.geometry.drawRange.count,3);assert.equal(loads.filter(i=>i===1).length,1);
  }finally{stream.dispose();}
});

test('whole-room preparation does not fetch another floor, a hidden doorway neighbor, or beyond the existing range',async()=>{
  const {stream,loads,chunk}=fixture();
  try {
    await stream.settle();assert.deepEqual(stream.rooms.stats.allowedAreas,[0,1]);
    assert.equal(chunk(2).request,null,'admitted doorway neighbors behind the camera retain the shorter near preload distance');
    assert.equal(chunk(3).request,null,'even the present room must respect the 2048-unit limit');
    assert.equal(chunk(4).request,null,'an unrelated floor remains excluded even when spatially close');
    assert.deepEqual(loads,[0,1]);
    assert.equal(stream.roomBoundsCurrent(new THREE.Box3(new THREE.Vector3(40,10,-1210),new THREE.Vector3(60,40,-1190))),true);
    assert.equal(stream.roomBoundsCurrent(new THREE.Box3(new THREE.Vector3(-110,10,-1010),new THREE.Vector3(-90,40,-990))),false);
    assert.equal(stream.rooms.boundsCurrent([40,100,-1010],[60,140,-990]),false);
  }finally{stream.dispose();}
});

test('new background room work shares the existing three-job frame budget with visible uploads',async()=>{
  const work=new StreamingWorkQueue({clock:()=>0,maxJobs:3}),{stream,loads,uploads,buffers,chunk}=fixture({work});
  const yieldTurn=()=>new Promise(resolve=>setTimeout(resolve,0));
  try {
    stream.update();await yieldTurn();assert.equal(uploads.length,0);
    for(let frame=0;frame<20&&!chunk(1).resident;frame++) {
      const previous=uploads.length+buffers.length;work.pump(frame);await yieldTurn();stream.update();
      assert.ok(uploads.length+buffers.length-previous<=3,'camera-turn prewarming must not bypass the shared per-frame budget');
    }
    assert.equal(chunk(1).resident,true);assert.deepEqual(loads,[0,1]);
    assert.equal(stream.readyForView,true);assert.ok(work.stats.maxJobs<=3);assert.equal(uploads.length,2);assert.equal(buffers.length,2);
  }finally{stream.dispose();work.dispose();}
});

function actor(position,map) {
  const root=new THREE.Group(),geometry=new THREE.BoxGeometry(10,20,10);geometry.computeBoundingBox();
  const mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial({map}));mesh.userData.actorLighting={bounds:geometry.boundingBox};root.add(mesh);root.position.fromArray(position);return root;
}

test('hidden current-room actors prepare real textures and buffers before a turn while unrelated and distant actors stay unloaded',async()=>{
  const {world,stream}=fixture(),work=new StreamingWorkQueue({clock:()=>0,maxJobs:3}),loaded=[],uploaded=[],warmed=[];
  const textures=new ActorTextureStream({clock:()=>0,placeholder:{width:1,height:1},work,
    load:async url=>{loaded.push(url);return new THREE.Texture({width:16,height:16});},upload:map=>uploaded.push(map)});
  const preparation=new StreamingGpuPreparation({},work);preparation.warmGeometry=geometry=>{preparation.prepared.add(geometry);warmed.push(geometry);};
  const roots=[actor([50,20,-1200],textures.texture('lantern.png')),actor([-100,20,-1000],textures.texture('neighbor.png')),
    actor([50,120,-1000],textures.texture('upstairs.png')),actor([50,20,-3000],textures.texture('far.png'))];world.scene.add(...roots);
  const residency=new ActorRenderResidency({scene:world.scene,textures,preparation,nearDistance:576,viewDistance:2048,
    boundsAllowed:box=>stream.roomBoundsAllowed(box),boundsCurrent:box=>stream.roomBoundsCurrent(box),boundsVisible:box=>stream.boundsVisible(box)});
  try {
    await stream.settle();residency.update(roots,world.camera,0);await residency.settle();
    assert.deepEqual(loaded,['lantern.png']);assert.equal(uploaded.length,1);assert.equal(warmed.length,1);
    assert.equal(textures.entries.get('lantern.png').priority,0);assert.equal(residency.isResident(roots[0]),true);
    assert.equal(residency.isRendered(roots[0]),false);assert.ok(roots.slice(1).every(root=>!residency.isResident(root)));
    const counts=[loaded.length,uploaded.length,warmed.length];world.camera.lookAt(50,32,-1200);stream.update();residency.update(roots,world.camera,1);
    assert.equal(residency.readyForView,true);assert.equal(residency.isRendered(roots[0]),true);
    assert.deepEqual([loaded.length,uploaded.length,warmed.length],counts);
  }finally{residency.dispose();preparation.dispose();textures.dispose();stream.dispose();work.dispose();for(const root of roots)root.traverse(mesh=>{mesh.geometry?.dispose();mesh.material?.dispose();});}
});

test('background actor preparation does not bypass native hidden-leaf rejection',async()=>{
  const {world,stream}=fixture({hidden:true}),requests=[];
  const root=actor([50,20,-1200],new THREE.Texture());world.scene.add(root);
  const textures={request:(_resources,_time,priority)=>requests.push(priority),ready:()=>true};
  const residency=new ActorRenderResidency({scene:world.scene,textures,nearDistance:576,viewDistance:2048,
    boundsAllowed:box=>stream.roomBoundsAllowed(box),boundsCurrent:box=>stream.roomBoundsCurrent(box),boundsVisible:box=>stream.boundsVisible(box)});
  try {
    await stream.settle();world.camera.lookAt(50,32,-1200);stream.update();residency.update([root],world.camera,0);
    assert.equal(residency.isResident(root),true);assert.equal(residency.isRendered(root),false);assert.deepEqual(requests,[1]);
    world.camera.position.z=-801;world.player.position[2]=-801;world.camera.lookAt(50,32,-1200);stream.update();residency.update([root],world.camera,1);
    assert.equal(residency.isRendered(root),true);
  }finally{residency.dispose();stream.dispose();root.traverse(mesh=>{mesh.geometry?.dispose();mesh.material?.dispose();});}
});

test('current-area queries invalidate when the player crosses a doorway, without treating all admitted rooms as current',async()=>{
  const {world,stream}=fixture(),present=new THREE.Box3(new THREE.Vector3(40,10,-1210),new THREE.Vector3(60,40,-1190)),neighbor=new THREE.Box3(new THREE.Vector3(-110,10,-1010),new THREE.Vector3(-90,40,-990));
  try {
    await stream.settle();assert.equal(stream.roomBoundsCurrent(present),true);assert.equal(stream.roomBoundsCurrent(neighbor),false);
    world.player.position=[-100,0,-1000];world.camera.position.set(-100,32,-1000);world.camera.lookAt(-100,32,-1100);stream.update();
    assert.deepEqual(stream.rooms.stats.allowedAreas,[0,1]);assert.equal(stream.rooms.area,1);
    assert.equal(stream.roomBoundsCurrent(present),false);assert.equal(stream.roomBoundsCurrent(neighbor),true);
  }finally{stream.dispose();}
});

function connectedFixture() {
  const collision={models:[{root:0,firstLeaf:0,numLeaves:4,min:[-2200,-100,-1000],max:[200,200,1000]},
    {min:[-2,-8,-120],max:[2,60,-80]},
    {min:[-102,-8,-120],max:[-98,60,-80]},
    {min:[-1602,-8,500],max:[-1598,60,540]}],
    nodes:[[-1,1,0],[-2,2,1],[-3,-4,2]],planes:[[1,0,0,0],[1,0,0,-100],[1,0,0,-1600]]};
  const metadata={faceCount:4,faceSpans:Array.from({length:4},(_,i)=>[i,i*3,3]),leafFaces:[0,1,2,3],
    leaves:[[0,0,0,1],[1,1,1,1],[2,2,2,1],[3,3,3,1]],clusters:[0,1,2,3],
    areas:[[1,0],[2,1],[2,3],[1,5]],areaPortals:[[1,1],[1,0],[2,2],[2,1],[3,3],[3,2]]};
  const vertices=new Float32Array(4*3*11),groups=[];
  for(const [i,x]of [40,-50,-1200,-1800].entries()) {
    for(const [j,p]of [[x,0,-110],[x,0,-90],[x,40,-100]].entries())vertices.set(p,(i*3+j)*11);
    groups.push({model:0,start:i*3,count:3,texture:i});
  }
  const camera=new THREE.PerspectiveCamera(65,1,1,10000);camera.position.set(50,32,-100);camera.lookAt(-1800,32,-100);camera.updateMatrixWorld();
  const doors=[1,2,3].map(modelIndex=>({id:'door'+modelIndex,kind:'door',modelIndex,open:true,openFraction:1}));
  const world={camera,scene:new THREE.Scene(),level:{collision},player:{position:[50,0,-100]},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[],
    gameplay:{objects:doors,scripts:{players:new Map(),camera:null}}};
  const loads=[],stream=new WorldGeometryStream(world,{vertices,groups,visibility:metadata,pvs:new Uint8Array([15,15,15,15]),
    materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async i=>{loads.push(i);return new THREE.Texture({width:16,height:16});}});
  return {world,stream,doors,loads,chunk:index=>stream.chunks.find(chunk=>chunk.group.texture===index)};
}

test('a briefly lost open doorway retains preparation without enlarging the draw mask or flooding never-admitted rooms',async()=>{
  const {world,stream,loads,chunk}=connectedFixture();
  try {
    await stream.settle();assert.deepEqual(stream.rooms.stats.allowedAreas,[0,1,2]);assert.equal(chunk(2).resident,true);
    assert.equal(chunk(3).request,null,'an open graph connection alone cannot admit a never-seen far room');
    const geometry=chunk(2).mesh.geometry,map=chunk(2).material.material.map,now=performance.now()/1000;
    world.camera.lookAt(200,32,-100);stream.update(now+1);
    assert.deepEqual(stream.rooms.stats.allowedAreas,[0,1]);assert.deepEqual(stream.rooms.stats.viewAreas,[0]);
    assert.deepEqual(stream.rooms.stats.preloadAreas,[0,1,2]);assert.equal(chunk(2).resident,true);
    assert.equal(chunk(2).inView,false);assert.equal(chunk(2).mesh.layers.mask,2);assert.equal(chunk(2).preloadPriority,0);
    assert.equal(chunk(3).request,null);assert.equal(loads.includes(3),false);
    world.camera.lookAt(-1800,32,-100);stream.update(now+2);
    assert.equal(chunk(2).mesh.geometry,geometry);assert.equal(chunk(2).material.material.map,map);assert.equal(chunk(2).mesh.layers.mask,1);
    assert.equal(stream.readyForView,true);assert.equal(loads.filter(i=>i===2).length,1);
    world.camera.lookAt(200,32,-100);stream.update(now+15);
    assert.deepEqual(stream.rooms.stats.preloadAreas,[0,1]);assert.equal(chunk(2).resident,false,'unused room preparation expires after twelve seconds');
    assert.equal(chunk(2).request,null);
  }finally{stream.dispose();}
});

test('closing an open connection or changing the anchor promptly drops preparation held only by a previous view',async()=>{
  const {world,stream,doors,chunk}=connectedFixture();
  try {
    await stream.settle();const now=performance.now()/1000;world.camera.lookAt(200,32,-100);stream.update(now+1);
    assert.equal(chunk(2).resident,true);doors[1].open=false;doors[1].openFraction=0;stream.update(now+2);
    assert.deepEqual(stream.rooms.stats.preloadAreas,[0,1]);assert.equal(chunk(2).request,null,'a closed portal overrides its remaining preparation grace');
    doors[1].open=true;doors[1].openFraction=1;world.camera.lookAt(-1800,32,-100);await stream.settle();
    assert.equal(chunk(0).resident,true);world.camera.lookAt(200,32,-100);stream.update(now+3);
    world.player.position=[-1800,0,-100];world.camera.position.set(-1800,32,-100);world.camera.lookAt(-2100,32,-100);stream.update(now+4);
    assert.equal(stream.rooms.area,3);assert.deepEqual(stream.rooms.stats.allowedAreas,[2,3]);
    assert.equal(stream.rooms.stats.preloadAreas.includes(0),false,'a different anchor must not retain the previous room history');
    assert.equal(chunk(0).request,null);
  }finally{stream.dispose();}
});

test('actors in a retained open-connected room warm in the background without drawing through its lost aperture',async()=>{
  const {world,stream}=connectedFixture(),priorities=[];
  const kept=actor([-1200,20,-100],new THREE.Texture()),unseen=actor([-1800,20,-100],new THREE.Texture());world.scene.add(kept,unseen);
  const textures={request:(_resources,_time,priority)=>priorities.push(priority),ready:()=>true};
  const residency=new ActorRenderResidency({scene:world.scene,textures,nearDistance:576,viewDistance:2048,
    boundsAllowed:box=>stream.roomBoundsAllowed(box),boundsCurrent:box=>stream.roomBoundsCurrent(box),boundsPreload:box=>stream.roomBoundsPreload(box),boundsVisible:box=>stream.boundsVisible(box)});
  try {
    await stream.settle();const now=performance.now()/1000;world.camera.lookAt(200,32,-100);stream.update(now+1);
    residency.update([kept,unseen],world.camera,now+1);
    assert.equal(stream.roomBoundsAllowed(residency.records.get(kept).roomBounds),false);
    assert.equal(residency.isResident(kept),true);assert.equal(residency.isRendered(kept),false);
    assert.equal(residency.isResident(unseen),false);assert.deepEqual(priorities,[0]);
    world.camera.lookAt(-1800,32,-100);stream.update(now+2);residency.update([kept,unseen],world.camera,now+2);
    assert.equal(residency.isRendered(kept),true);assert.equal(residency.isResident(unseen),false);
  }finally{residency.dispose();stream.dispose();for(const root of [kept,unseen])root.traverse(mesh=>{mesh.geometry?.dispose();mesh.material?.dispose();});}
});
