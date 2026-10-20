import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {ActorTextureStream} from '../src/actor-texture-stream.js';
import {ActorRenderResidency} from '../src/actor-render-residency.js';
import {DebrisRenderPool} from '../src/debris-render-pool.js';
import {CastleWorld} from '../src/world.js';

const camera=()=>{const camera=new THREE.PerspectiveCamera(60,1,1,20000);camera.lookAt(0,0,-1);return camera;};
const actor=(map,position=[0,0,-100])=>{
  const geometry=new THREE.BoxGeometry(20,40,20);geometry.computeBoundingBox();
  const mesh=new THREE.Mesh(geometry,[new THREE.MeshLambertMaterial({map})]),root=new THREE.Group();root.add(mesh);root.position.fromArray(position);
  mesh.userData.actorLighting={bounds:geometry.boundingBox};root.userData={mesh,template:{data:{settings:{}}}};return root;
};
function fixture(options={}) {
  const loads=[],released=[],placeholder={width:1,height:1},images=[];let time=0;
  const stream=new ActorTextureStream({placeholder,clock:()=>time,
    load:async url=>{loads.push(url);const image={width:64,height:128,url};images.push(image);return new THREE.Texture(image);},
    release:texture=>{released.push(texture);texture.dispose();},...options});
  return {stream,loads,released,placeholder,images,setTime:value=>time=value};
}

test('actor handles defer decoding, stay shared across cloned materials and retain sampler/colour settings',async()=>{
  const {stream,loads,released,placeholder}=fixture({configure:texture=>{texture.flipY=true;texture.colorSpace=THREE.SRGBColorSpace;texture.wrapS=texture.wrapT=THREE.RepeatWrapping;texture.anisotropy=8;}});
  const map=stream.texture('unused.png'),material=new THREE.MeshLambertMaterial({map}),clone=material.clone();
  assert.equal(stream.texture('unused.png'),map);assert.equal(map.image,placeholder);assert.deepEqual(loads,[]);
  assert.equal(stream.request([map]),false);await stream.settle();assert.deepEqual(loads,['unused.png']);assert.equal(stream.ready([map]),true);
  assert.equal(clone.map,map);assert.equal(map.image.url,'unused.png');assert.equal(map.flipY,true);assert.equal(map.colorSpace,THREE.SRGBColorSpace);
  assert.equal(map.wrapS,THREE.RepeatWrapping);assert.equal(map.wrapT,THREE.RepeatWrapping);assert.equal(map.anisotropy,8);assert.equal(released.length,1,'the temporary loader texture is released after transferring its image');
  stream.dispose();assert.equal(map.image,null);assert.equal(released.length,2);
});

test('actor residency loads only wanted maps and holds a visible view until its real image is ready',async()=>{
  let resolve;const {stream,loads}=fixture({load:url=>{loads.push(url);return new Promise(done=>resolve=done);}}),scene=new THREE.Scene(),c=camera();
  const near=actor(stream.texture('near.png')),far=actor(stream.texture('far.png'),[0,0,-7000]);scene.add(near,far);
  const residency=new ActorRenderResidency({scene,textures:stream,nearDistance:768,retainDistance:1152,viewDistance:2048});
  residency.update([near,far],c,0);await Promise.resolve();assert.deepEqual(loads,['near.png']);assert.equal(residency.readyForView,false);
  assert.equal(residency.isRendered(near),false);assert.equal(near.visible,true);assert.equal(near.parent,residency.parking);
  resolve(new THREE.Texture({width:64,height:64}));await residency.settle();assert.equal(residency.readyForView,true);assert.equal(residency.isRendered(near),true);
  assert.equal(near.parent,scene);assert.equal(residency.isResident(far),false);assert.deepEqual(loads,['near.png']);residency.dispose();stream.dispose();
});

test('idle decoded images are dropped after grace, shared wanted maps and pinned player maps stay ready',async()=>{
  const {stream,setTime,placeholder,loads}=fixture(),shared=stream.texture('shared.png'),player=stream.texture('player.png'),unused=stream.texture('unused.png');
  stream.pinRoot(actor(player));stream.request([shared,unused]);await stream.settle();setTime(11);stream.request([shared]);stream.update(camera());
  assert.equal(stream.ready([unused]),true);setTime(12.01);stream.update(camera());assert.equal(stream.ready([unused]),false);assert.equal(unused.image,placeholder);
  assert.equal(stream.ready([shared,player]),true,'one wanted owner/pinned player preserves each shared image');
  const version=unused.version;stream.request([unused]);await stream.settle();assert.ok(unused.version>version);assert.equal(loads.filter(url=>url==='unused.png').length,2);
  setTime(30);stream.update(camera());assert.equal(stream.ready([shared]),false);assert.equal(stream.ready([player]),true);stream.dispose();
});

test('unstarted and late texture loads release cleanly when their level is disposed',async()=>{
  let resolve;const {stream,released,loads}=fixture({concurrency:1,load:url=>{loads.push(url);return new Promise(done=>resolve=done);}});
  const a=stream.texture('a.png'),b=stream.texture('b.png');stream.request([a,b]);await Promise.resolve();const pending=Promise.all([...stream.pending]);
  stream.dispose();assert.equal(a.image,null);assert.equal(b.image,null);resolve(new THREE.Texture({width:64,height:64}));await pending;
  assert.deepEqual(loads,['a.png']);assert.equal(released.length,3,'both handles and the late decoded result are released once');assert.equal(stream.pending.size,0);
});

test('missing actor artwork propagates through residency settle without drawing a placeholder',async()=>{
  const failure=new Error('missing actor PNG'),{stream}=fixture({load:async()=>{throw failure;}}),a=actor(stream.texture('missing.png')),c=camera();
  const residency=new ActorRenderResidency({textures:stream});residency.update([a],c,0);await assert.rejects(residency.settle(),error=>error===failure);
  assert.equal(residency.error,failure);assert.equal(residency.readyForView,false);assert.equal(residency.isRendered(a),false);residency.dispose();stream.dispose();
});

test('pooled fragment warmup does not fetch distant artwork; active visibility and changed scale request the right maps',async()=>{
  const {stream,loads}=fixture(),source=actor(stream.texture('fragment.png'),[0,0,0]),scene=new THREE.Scene(),c=camera(),pool=new DebrisRenderPool({scene,actorTextures:stream});
  pool.prewarm([{prototype:source,count:1}]);assert.deepEqual(loads,[]);
  const entry=pool.acquire(source,{scale:10});scene.add(entry.root);entry.root.position.set(2100,0,-100);stream.update(c,{nearDistance:768,viewDistance:2048});
  assert.ok(stream.watchers.get(entry.root).radius>200,'acquire scale changes enlarge the cached conservative bounds');
  entry.root.position.set(0,0,-7000);stream.update(c,{viewDistance:2048});await Promise.resolve();assert.deepEqual(loads,[]);assert.equal(entry.mesh.layers.mask,0);
  entry.root.position.set(0,0,-100);stream.update(c);assert.equal(stream.readyForView,false);await stream.settle();stream.update(c);
  assert.deepEqual(loads,['fragment.png']);assert.equal(stream.readyForView,true);assert.equal(entry.mesh.layers.mask,1);
  pool.release(entry,1);assert.equal(stream.watchers.size,0);assert.equal(entry.mesh.layers.mask,1);pool.dispose();stream.dispose();
});

test('world actor metadata remains eager while campaign textures opt into deferral and ad-hoc actors remain ready to render',async()=>{
  const world=new CastleWorld({capabilities:{getMaxAnisotropy:()=>8}},{fov:65}),previousFetch=globalThis.fetch,loads=[];
  world.actorManifest={actors:{fixture:{file:'fixture.json'}}};world.actorOverrideManifest={textures:{}};
  globalThis.fetch=async()=>({ok:true,json:async()=>({positions:[0,0,0,1,0,0,0,1,0],normals:[0,0,1,0,0,1,0,0,1],uvs:[0,0,1,0,0,1],indices:[0,1,2],groups:[{start:0,count:3,materialIndex:0}],materials:[{texture:'fixture.png',color:[1,1,1]}],settings:{initialRotationDegrees:[0,0,0]}})});
  world.texture=async url=>{loads.push(url);return world.track(new THREE.Texture({width:64,height:64}));};
  try {
    const deferred=await world.makeActor('fixture',{deferTextures:true});assert.equal(deferred.userData.mesh.geometry.attributes.position.count,3);assert.deepEqual(loads,[]);
    const ready=await world.makeActor('fixture');assert.deepEqual(loads,['assets/actors/fixture.png']);assert.equal(ready.userData.mesh.material[0].map,deferred.userData.mesh.material[0].map);
    assert.equal(world.actorTextures.ready([ready.userData.mesh.material[0].map]),true);
  }finally{globalThis.fetch=previousFetch;world.dispose();}
});
