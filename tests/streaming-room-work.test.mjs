import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {WorldGeometryStream} from '../source/world-streaming.js';
import {ActorRenderResidency} from '../source/actor-render-residency.js';
import {StreamingWorkQueue} from '../source/streaming-work.js';
import {StreamingGpuPreparation} from '../source/streaming-gpu-preparation.js';

function fixture() {
  const camera=new THREE.PerspectiveCamera(65,1,1,30000);camera.position.set(0,40,200);camera.lookAt(0,20,0);
  const vertices=new Float32Array(20*3*11),groups=[],faceSpans=[];
  for(let i=0;i<20;i++) {
    for(const [j,p]of [[-10,0,-i],[10,0,-i],[0,20,-i]].entries())vertices.set(p,(i*3+j)*11);
    groups.push({model:0,start:i*3,count:3,texture:i});faceSpans.push([i,i*3,3]);
  }
  const collision={models:[{root:-1,min:[-500,-500,-500],max:[500,500,500]}],nodes:[],planes:[]};
  const visibility={clusters:[],leaves:[[-1,0,0,0]],faceSpans,faceCount:20,leafFaces:[],areas:[],areaPortals:[]};
  const work=new StreamingWorkQueue({clock:()=>0,maxJobs:3}),uploads=[],buffers=[],released=[];
  const world={camera,scene:new THREE.Scene(),level:{collision},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[],streamingWork:work,
    renderer:{initTexture:map=>uploads.push(map)},streamingGpu:{warmGeometry:geometry=>buffers.push(geometry)}};
  const stream=new WorldGeometryStream(world,{vertices,groups,visibility,pvs:new Uint8Array(),materialFor:()=>new THREE.MeshBasicMaterial(),textureFor:async i=>{
    const map=new THREE.Texture({width:16,height:16});map.addEventListener('dispose',()=>released.push(i));world.resources.add(map);return map;
  }});
  return {stream,world,work,uploads,buffers,released};
}
const turn=()=>new Promise(resolve=>setTimeout(resolve,0));

test('visible room geometry and textures no longer activate in an unbounded burst',async()=>{
  const {stream,work,uploads,buffers}=fixture();let maxUploads=0,maxBuffers=0;
  try {
    stream.update();await turn();assert.equal(uploads.length,0);assert.equal(buffers.length,0);assert.equal(stream.readyForView,false);
    for(let frame=0;frame<100&&!stream.readyForView;frame++) {
      const u=uploads.length,b=buffers.length;work.pump(frame);await turn();stream.update();
      const du=uploads.length-u,db=buffers.length-b;maxUploads=Math.max(maxUploads,du);maxBuffers=Math.max(maxBuffers,db);
      assert.ok(du+db<=3,'world and texture uploads must share the same budget even when all faces are visible');
    }
    assert.equal(stream.readyForView,true);assert.equal(uploads.length,20);assert.equal(buffers.length,20);
    assert.ok(maxUploads<=3&&maxBuffers<=3);assert.equal(stream.stats.residentChunks,20);
  }finally{stream.dispose();work.dispose();}
});

test('explicit load settling drains bounded preparation without needing the game frame loop',async()=>{
  const {stream,work,uploads,buffers}=fixture();
  try{await stream.settle();assert.equal(stream.readyForView,true);assert.equal(uploads.length,20);assert.equal(buffers.length,20);assert.equal(work.stats.maxJobs,3);}
  finally{stream.dispose();work.dispose();}
});

test('leaving a room cancels its queued geometry and image preparation',async()=>{
  const {stream,world,work,uploads,buffers}=fixture();
  try {
    stream.update();await turn();world.camera.position.set(20000,20000,20000);world.camera.lookAt(20000,30000,20000);stream.update(performance.now()/1000+30);
    await work.waitFor(Promise.all([...stream.pending]));stream.update();
    assert.equal(uploads.length,0);assert.equal(buffers.length,0);assert.equal(stream.stats.residentChunks,0);
    assert.equal(world.resources.size,0);assert.ok(work.stats.cancelled>0);
  }finally{stream.dispose();work.dispose();}
});

test('returning during a cancelled upload microtask reacquires real maps instead of activating null artwork',async()=>{
  const {stream,world,work}=fixture();
  try {
    stream.update();await turn();
    world.camera.position.set(20000,20000,20000);world.camera.lookAt(20000,30000,20000);stream.update(performance.now()/1000+30);
    work.pump(1); // Cancellation resolves its promises; continuations have not run yet.
    world.camera.position.set(0,40,200);world.camera.lookAt(0,20,0);stream.update();
    await stream.settle();assert.equal(stream.readyForView,true);assert.equal(stream.stats.residentChunks,20);
    assert.ok(stream.chunks.every(chunk=>chunk.material.material.map?.isTexture));
  }finally{stream.dispose();work.dispose();}
});

test('actors wait for warmed buffers, share preparation across owners and remain independent of gameplay visibility',async()=>{
  const {stream,world,work}=fixture(),geometry=new THREE.BoxGeometry(20,40,20);geometry.computeBoundingBox();
  // A renderer with no framebuffer interface is enough for the ownership test;
  // the preparation function below represents a completed private GPU upload.
  const prep=new StreamingGpuPreparation({},work);let warmed=0;
  prep.warmGeometry=g=>{warmed++;prep.prepared.add(g);};
  const actors=Array.from({length:2},()=>{const root=new THREE.Group(),mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial());mesh.userData.actorLighting={bounds:geometry.boundingBox};root.add(mesh);world.scene.add(root);return root;});
  const residency=new ActorRenderResidency({scene:world.scene,preparation:prep});
  try {
    residency.update(actors,world.camera,0);assert.equal(residency.readyForView,false);assert.equal(actors[0].visible,true);
    assert.equal(work.jobs.length,1,'shared geometry needs only one preparation job');await residency.settle();
    assert.equal(warmed,1);assert.equal(residency.readyForView,true);assert.ok(actors.every(root=>residency.isRendered(root)));
  }finally{residency.dispose();prep.dispose();stream.dispose();work.dispose();geometry.dispose();}
});

test('actors just outside the camera view prepare ahead of turns without drawing or admitting unrelated rooms',()=>{
  const {stream,world,work}=fixture(),requested=[];
  world.camera.position.set(0,0,0);world.camera.lookAt(0,0,-1);const camera=world.camera;
  const make=x=>{const root=new THREE.Group(),mesh=new THREE.Mesh(new THREE.BoxGeometry(20,40,20),new THREE.MeshBasicMaterial());mesh.geometry.computeBoundingBox();mesh.userData.actorLighting={bounds:mesh.geometry.boundingBox};root.add(mesh);root.position.set(x,0,-1000);world.scene.add(root);return root;};
  const ahead=make(1000),excluded=make(-1000),textures={request:resources=>requested.push(resources),ready:()=>true};
  const residency=new ActorRenderResidency({scene:world.scene,textures,nearDistance:576,viewDistance:2048,boundsAllowed:box=>box.min.x>0});
  try{residency.update([ahead,excluded],camera,0);assert.equal(residency.isResident(ahead),true);assert.equal(residency.isRendered(ahead),false);assert.equal(residency.isResident(excluded),false);assert.equal(requested.length,1);}
  finally{residency.dispose();stream.dispose();work.dispose();}
});

test('closed-door preloads do not hold the complete current room; opening the doorway makes its artwork required',async()=>{
  const camera=new THREE.PerspectiveCamera(65,1,1,10000);camera.position.set(50,32,-100);camera.lookAt(-200,20,-100);
  const collision={models:[{root:0,firstLeaf:0,numLeaves:2,min:[-200,-100,-300],max:[200,200,100]},
    {min:[-2,-8,-120],max:[2,60,-80]}],nodes:[[-1,-2,0]],planes:[[1,0,0,0]]};
  const metadata={faceCount:2,faceSpans:[[0,0,3],[1,3,3]],leafFaces:[0,1],leaves:[[0,0,0,1],[1,1,1,1]],clusters:[0,1],areas:[[1,0],[1,1]],areaPortals:[[1,1],[1,0]]};
  const vertices=new Float32Array(66);for(const [i,x]of [40,-40].entries())for(const [j,p]of [[x-10,0,-100],[x+10,0,-100],[x,20,-100]].entries())vertices.set(p,(i*3+j)*11);
  const work=new StreamingWorkQueue(),door={id:'door',kind:'door',modelIndex:1,open:false,openFraction:0};let releaseNeighbor;
  const world={camera,scene:new THREE.Scene(),level:{collision},player:{position:[50,0,-100]},gameplay:{objects:[door],scripts:{players:new Map()}},resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[],streamingWork:work};
  const stream=new WorldGeometryStream(world,{vertices,groups:[{model:0,start:0,count:3,texture:0},{model:0,start:3,count:3,texture:1}],visibility:metadata,pvs:new Uint8Array([3,3]),materialFor:()=>new THREE.MeshBasicMaterial(),
    textureFor:index=>index===0?Promise.resolve(new THREE.Texture()):new Promise(resolve=>releaseNeighbor=()=>resolve(new THREE.Texture()))});
  try {
    for(let i=0;i<8;i++){stream.update();work.pump(i);await turn();}
    assert.deepEqual(stream.rooms.stats.allowedAreas,[0,1]);assert.deepEqual(stream.rooms.stats.viewAreas,[0]);
    assert.equal(stream.readyForView,true,'unseen neighbor image must not pause the visible room');
    world.modelMeshes.set(1,[{material:{opacity:1,alphaTest:.5}}]);stream.update();
    assert.deepEqual(stream.rooms.stats.viewAreas,[0,1]);assert.equal(stream.readyForView,false,'a closed keyed grille still exposes the next room');
    world.modelMeshes.get(1)[0].userData={worldChunk:{group:{texture:0}}};world.textureTransparency=[false];stream.update();
    assert.equal(stream.readyForView,true,'a keyed texture with no transparent pixels is still an opaque door');
    world.modelMeshes.delete(1);stream.update();assert.equal(stream.readyForView,true);
    assert.equal(stream.chunks[1].resident,false);door.open=true;door.openFraction=1;stream.update();
    assert.deepEqual(stream.rooms.stats.viewAreas,[0,1]);assert.equal(stream.readyForView,false,'an open aperture must never reveal an incomplete room');
    releaseNeighbor();await stream.settle();assert.equal(stream.readyForView,true);
  }finally{stream.dispose();work.dispose();}
});

test('actual transparency metadata covers every original level texture and distinguishes Castle wood from Graveyard grilles',()=>{
  const read=name=>JSON.parse(readFileSync(new URL('../'+name,import.meta.url)));
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const level=read(`data/levels/${id}/level.json`),transparent=read(`data/levels/${id}/texture-transparency.json`);
    assert.equal(transparent.length,level.textures.length);assert.ok(transparent.every(v=>typeof v==='boolean'));
    for(const [i,texture]of level.textures.entries())if(!texture.colorKey)assert.equal(transparent[i],false);
    if(id==='lvl01a')assert.equal(transparent[level.textures.findIndex(t=>t.name==='drcstl0')],false);
    if(id==='lvl02a')assert.equal(transparent[level.textures.findIndex(t=>t.name==='hek_door')],true);
  }
});

test('camera travel prefetch is capped and teleports never project remote loading neighborhoods',()=>{
  const {stream,world,work}=fixture();
  try {
    stream.update(1);assert.ok(stream.preloadPosition.equals(world.camera.position));
    world.camera.position.x+=10;stream.update(1+1/60);
    assert.ok(stream.preloadPosition.x>world.camera.position.x);assert.ok(stream.preloadPosition.distanceTo(world.camera.position)<=192.001);
    world.camera.position.x+=5000;stream.update(1+2/60);assert.ok(stream.preloadPosition.equals(world.camera.position));
    world.camera.position.x+=10;stream.update(2);assert.ok(stream.preloadPosition.equals(world.camera.position),'a long pause never leaves stale velocity prediction');
  }finally{stream.dispose();work.dispose();}
});
