import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {DebrisRenderPool} from '../src/debris-render-pool.js';
import {CastleWorld} from '../src/world.js';

function prototype() {
  const geometry=new THREE.BoxGeometry(1,2,3);geometry.clearGroups();geometry.addGroup(0,18,0);geometry.addGroup(18,18,1);
  const materials=[new THREE.MeshLambertMaterial({side:THREE.DoubleSide,opacity:.75,alphaTest:.3}),new THREE.MeshLambertMaterial({side:THREE.FrontSide})];
  const root=new THREE.Group(),mesh=new THREE.Mesh(geometry,materials);root.add(mesh);mesh.rotation.x=-Math.PI/2;mesh.position.set(1,2,3);mesh.scale.set(2,3,4);
  root.userData={mesh,template:{data:{settings:{lighting:{maxDynamicLights:2}}}}};return root;
}
const free=pool=>[...pool.free.values()].flat();

test('transparent debris has stable back/front passes in the original material-group order',()=>{
  const source=prototype(),pool=new DebrisRenderPool({}),entry=pool.acquire(source);
  assert.deepEqual(entry.mesh.geometry.groups,[{start:0,count:18,materialIndex:0},{start:0,count:18,materialIndex:1},{start:18,count:18,materialIndex:2}]);
  assert.deepEqual(entry.materials.map(material=>material.side),[THREE.BackSide,THREE.FrontSide,THREE.FrontSide]);
  assert.ok(entry.materials.every(material=>material.transparent));assert.equal(entry.materials[0].alphaTest,.3);
  assert.deepEqual(entry.materialOpacity,[.75,.75,1]);assert.deepEqual(source.userData.mesh.geometry.groups,[{start:0,count:18,materialIndex:0},{start:18,count:18,materialIndex:1}]);
  assert.deepEqual(entry.mesh.geometry.attributes.position.array,source.userData.mesh.geometry.attributes.position.array);
  assert.deepEqual(entry.mesh.geometry.index.array,source.userData.mesh.geometry.index.array);
  assert.ok(entry.mesh.userData.actorLighting.bounds.equals(source.userData.mesh.geometry.boundingBox));
  assert.notEqual(entry.mesh.userData.actorLighting.bounds,source.userData.mesh.geometry.boundingBox);
  assert.deepEqual(entry.mesh.position.toArray(),[1,2,3]);assert.deepEqual(entry.mesh.scale.toArray(),[2,3,4]);
  assert.equal(entry.mesh.matrixAutoUpdate,false);assert.equal(entry.root.matrixAutoUpdate,true);
  const versions=entry.materials.map(material=>material.version);
  for(let i=0;i<30;i++)entry.materials.forEach(material=>{material.opacity=.5;});
  assert.deepEqual(entry.materials.map(material=>material.version),versions,'changing opacity never recompiles the fixed-side materials');
  pool.dispose();
});

test('reused fragment roots reset transforms, scale and opacity while lighting stays independent',()=>{
  const source=prototype(),world={scene:new THREE.Scene()},pool=new DebrisRenderPool(world),a=pool.acquire(source,{scale:[7,8,9]}),b=pool.acquire(source);
  assert.notEqual(a.mesh.userData.actorLighting,b.mesh.userData.actorLighting);
  assert.notEqual(a.materials[0],b.materials[0]);assert.equal(a.mesh.geometry,b.mesh.geometry,'one immutable group layout is shared for each artwork');
  a.root.position.set(100,200,300);a.root.rotation.y=.8;a.mesh.scale.setScalar(5);a.materials.forEach(material=>material.opacity=.2);world.scene.add(a.root);
  pool.release(a,20);assert.equal(world.scene.children.length,0);
  const reused=pool.acquire(source);assert.equal(reused,a);assert.deepEqual(reused.root.position.toArray(),[0,0,0]);assert.deepEqual(reused.root.quaternion.toArray(),[0,0,0,1]);
  assert.deepEqual(reused.mesh.scale.toArray(),[2,3,4]);assert.deepEqual(reused.materials.map(material=>material.opacity),[.75,.75,1]);
  assert.deepEqual(source.userData.mesh.scale.toArray(),[2,3,4]);pool.dispose();
});

test('cached fragment child matrices exactly match automatic TRS for moving roots, nonuniform scale and reuse',()=>{
  const source=prototype(),pool=new DebrisRenderPool({}),parent=new THREE.Group(),baselineRoot=new THREE.Group(),baselineMesh=new THREE.Mesh(source.userData.mesh.geometry,source.userData.mesh.material);
  baselineRoot.add(baselineMesh);parent.add(baselineRoot);
  let seed=38171,entry;
  const random=()=>{seed=(Math.imul(seed,1664525)+1013904223)>>>0;return seed/2**32;};
  for(let index=0;index<200;index++) {
    if(entry){pool.release(entry,index);parent.remove(entry.root);}
    const scale=Array.from({length:3},()=>random()*4-.5);
    source.userData.mesh.position.set(random()*3,random()*3,random()*3);source.userData.mesh.rotation.set(random(),random(),random());
    entry=pool.acquire(source,{scale});parent.add(entry.root);
    baselineMesh.position.copy(source.userData.mesh.position);baselineMesh.quaternion.copy(source.userData.mesh.quaternion);baselineMesh.scale.fromArray(scale);
    parent.position.set(random()*100,random()*100,random()*100);parent.rotation.set(random(),random(),random());
    for(let frame=0;frame<4;frame++) {
      entry.root.position.set(random()*1000,random()*1000,random()*1000);entry.root.rotation.set(random()*6,random()*6,random()*6);
      baselineRoot.position.copy(entry.root.position);baselineRoot.quaternion.copy(entry.root.quaternion);
      // Lighting runs before renderer traversal. Three's forced child update
      // must propagate the freshly changed parent into a static local mesh.
      entry.mesh.updateWorldMatrix(true,false,true);baselineMesh.updateWorldMatrix(true,false);
      assert.deepEqual(entry.mesh.matrixWorld.elements,baselineMesh.matrixWorld.elements);
      parent.updateMatrixWorld(true);
      assert.deepEqual(entry.mesh.matrix.elements,baselineMesh.matrix.elements);
      assert.deepEqual(entry.mesh.matrixWorld.elements,baselineMesh.matrixWorld.elements);
      // Match the separate ancestor refresh performed by actor lighting.
      entry.mesh.updateWorldMatrix(true,false);baselineMesh.updateWorldMatrix(true,false);
      assert.deepEqual(entry.mesh.matrixWorld.elements,baselineMesh.matrixWorld.elements);
    }
  }
  pool.dispose();
});

test('production actor lighting samples moving frozen-local fragments before any renderer matrix traversal',()=>{
  for(const prepared of [true,false]) {
    const world=new CastleWorld({}, {fov:62}),source=prototype(),pool=new DebrisRenderPool(world),entry=pool.acquire(source),samples=[];
    const parent=new THREE.Group();world.scene.add(parent);parent.add(entry.root);world.gameplay={time:0};world.actorLightingMatricesPrepared=prepared;
    world.actorFloorLighting={beginFrame(){},sample(position){samples.push([...position]);return[.1,.1,.1];}};
    world.syncActorLighting();assert.deepEqual(samples.at(-1),[1,2,3]);
    for(const position of [[100,200,300],[-150,80,900],[0,0,0]]) {
      entry.root.position.fromArray(position);world.syncActorLighting();
      assert.deepEqual(samples.at(-1),position.map((value,index)=>value+[1,2,3][index]));
    }
    const baselineParent=new THREE.Group(),baselineRoot=new THREE.Group(),baselineMesh=new THREE.Mesh(source.userData.mesh.geometry,source.userData.mesh.material);
    baselineParent.add(baselineRoot);baselineRoot.add(baselineMesh);baselineMesh.position.copy(entry.mesh.position);baselineMesh.quaternion.copy(entry.mesh.quaternion);baselineMesh.scale.copy(entry.mesh.scale);
    for(let frame=0;frame<6;frame++) {
      parent.position.set(frame*17,frame*-8,frame*2);parent.rotation.set(frame*.07,frame*.13,-frame*.11);parent.scale.set(.5+frame*.1,1.5,2);
      entry.root.position.set(frame*30,frame*10,-frame*50);entry.root.rotation.set(frame*.2,frame*.1,frame*-.3);entry.root.scale.set(1.2,.8,.7);
      for(const [reference,actual] of [[baselineParent,parent],[baselineRoot,entry.root]]){reference.position.copy(actual.position);reference.quaternion.copy(actual.quaternion);reference.scale.copy(actual.scale);}
      baselineMesh.updateWorldMatrix(true,false);world.syncActorLighting();
      assert.deepEqual(samples.at(-1),new THREE.Vector3().setFromMatrixPosition(baselineMesh.matrixWorld).toArray());
      assert.deepEqual(entry.mesh.matrixWorld.elements,baselineMesh.matrixWorld.elements);
    }
    pool.dispose();
  }
});

test('recycling a fragment begins a fresh native Sun lookup without clearing unrelated actors',()=>{
  const cache=new WeakMap(),source=prototype(),pool=new DebrisRenderPool({actorWorldLighting:{cache}}),entry=pool.acquire(source),other={};
  cache.set(entry.mesh.userData.actorLighting,{oldLifetime:true});cache.set(other,{keep:true});pool.release(entry,5);
  const recycled=pool.acquire(source);assert.equal(recycled,entry);
  assert.equal(cache.has(recycled.mesh.userData.actorLighting),false);assert.equal(cache.get(other).keep,true);pool.dispose();
});

test('load-time prewarming has a global budget and initializes the exact target-scene shaders and maps',async()=>{
  const a=prototype(),b=prototype(),scene=new THREE.Scene(),camera=new THREE.PerspectiveCamera(),maps=[];a.userData.mesh.material[0].map=new THREE.Texture();
  const world={scene,camera,gameplay:{time:750},renderer:{initTexture:map=>maps.push(map),compileAsync:async(staging,actualCamera,target)=>{
    assert.equal(actualCamera,camera);assert.equal(target,scene);assert.equal(staging.children.length,5);
    assert.ok(staging.children.every(root=>root.parent===staging));
  }}},pool=new DebrisRenderPool(world);
  pool.prewarm([{prototype:a,count:8},{prototype:b,count:7}],5);assert.equal(free(pool).length,5);
  assert.ok(free(pool).every(entry=>entry.releasedAt===750));await pool.compile();
  assert.ok(maps.includes(a.userData.mesh.material[0].map));assert.ok(free(pool).every(entry=>entry.root.parent===null));assert.equal(scene.children.length,0);
  pool.dispose();
});

test('idle burst capacity is released after ten seconds with one warm shader owner per artwork',()=>{
  const source=prototype(),pool=new DebrisRenderPool({}),entries=Array.from({length:8},()=>pool.acquire(source)),counts=new Map(entries.map(entry=>[entry,0]));
  for(const entry of entries)for(const material of entry.materials)material.addEventListener('dispose',()=>counts.set(entry,counts.get(entry)+1));
  entries.forEach(entry=>pool.release(entry,40));pool.trim(49.999);assert.equal(free(pool).length,8);
  pool.trim(50);assert.equal(free(pool).length,1);assert.equal([...counts.values()].filter(count=>count===3).length,7);
  const warm=free(pool)[0],again=pool.acquire(source);assert.equal(again,warm);pool.release(again,100);pool.trim(200);assert.equal(free(pool).length,1);
  pool.dispose();assert.ok([...counts.values()].every(count=>count===3));
});

test('opaque character fragments retain their original single pass and switch to stable transparent fade passes only when needed',async()=>{
  const source=prototype(),world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera()},pool=new DebrisRenderPool(world,{opaqueUntilFade:true});
  pool.prewarm([{prototype:source,count:1}]);world.renderer={compileAsync:async staging=>{
    assert.equal(staging.children.length,2,'both shader variants are initialized during loading');
    assert.equal(staging.children[0].children[0].material.length,2);
    assert.equal(staging.children[1].material.length,3);
  }};
  await pool.compile();const entry=pool.acquire(source);
  assert.equal(entry.mesh.geometry,source.userData.mesh.geometry);assert.equal(entry.materials.length,2);
  assert.deepEqual(entry.materials.map(material=>[material.transparent,material.side,material.depthWrite,material.alphaTest]),[
    [false,THREE.DoubleSide,true,.3],[false,THREE.FrontSide,true,0]
  ]);
  pool.setOpacity(entry,.5);assert.notEqual(entry.mesh.geometry,source.userData.mesh.geometry);assert.equal(entry.materials.length,3);
  assert.deepEqual(entry.materials.map(material=>material.opacity),[.375,.375,.5]);
  assert.ok(entry.materials.every(material=>material.transparent&&material.depthWrite===false&&material.alphaTest<=.003));
  assert.deepEqual(entry.materials.map(material=>material.side),[THREE.BackSide,THREE.FrontSide,THREE.FrontSide]);
  pool.release(entry,0);assert.equal(pool.acquire(source),entry);
  assert.equal(entry.mesh.geometry,source.userData.mesh.geometry);assert.equal(entry.materials.length,2);assert.deepEqual(entry.materials.map(material=>material.opacity),[.75,1]);
  let disposed=0;for(const material of entry.allMaterials)material.addEventListener('dispose',()=>disposed++);
  pool.dispose();assert.equal(disposed,5);
});

test('nearby reservations count airborne fragments and cap preparation work and total owned entries',()=>{
  const a=prototype(),b=prototype(),pool=new DebrisRenderPool({gameplay:{time:35}}),requests=[{prototype:a,count:10},{prototype:b,count:10}];
  pool.prewarm([{prototype:a,count:1},{prototype:b,count:1}]);const flying=pool.acquire(a);
  assert.deepEqual(pool.reserve(requests,12,3),{created:3,remaining:15,limited:false});assert.equal(pool.ownedTotal,5);
  assert.deepEqual(pool.reserve(requests,12,Infinity),{created:7,remaining:8,limited:true});assert.equal(pool.ownedTotal,12);
  assert.deepEqual(pool.reserve(requests,12,8),{created:0,remaining:8,limited:true});
  assert.equal(pool.active.size,1);assert.equal(free(pool).length,11);
  pool.release(flying,35);assert.equal(pool.ownedTotal,12);pool.trim(45);assert.equal(pool.ownedTotal,2);
  assert.deepEqual(pool.reserve(requests,12,2),{created:2,remaining:16,limited:false});pool.dispose();assert.equal(pool.ownedTotal,0);
});

test('nearby reservations retain their needed free cohort while unrelated burst overflow expires',()=>{
  const source=prototype(),pool=new DebrisRenderPool({});pool.prewarm([{prototype:source,count:8}],8,0);
  const flying=pool.acquire(source);
  pool.reserve([{prototype:source,count:5}],8,0,9);pool.trim(10);
  assert.equal(pool.ownedTotal,6,'one warm owner plus four requested free entries and one active fragment remain');
  assert.equal(free(pool).filter(entry=>entry.releasedAt===9).length,4);
  pool.reserve([{prototype:source,count:5}],8,0,18);pool.trim(20);
  assert.equal(pool.ownedTotal,6,'the player can wait beside the stack before firing');
  pool.release(flying,20);pool.trim(40);assert.equal(pool.ownedTotal,1);pool.dispose();
});

test('load-only warm draws prepare pooled lighting and restore scene state even if sampling or rendering fails',()=>{
  for(const fail of [null,'lighting','render']) {
    const source=prototype(),scene=new THREE.Scene(),camera=new THREE.PerspectiveCamera(),light=new THREE.PointLight(),existing=new THREE.Mesh(),hidden=new THREE.Group();
    hidden.visible=false;scene.add(light,existing,hidden);
    const geometry=new THREE.BufferGeometry().setAttribute('position',new THREE.Float32BufferAttribute(new Float32Array(18),3));geometry.setDrawRange(0,0);
    const impact=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial());impact.visible=false;impact.layers.mask=4;scene.add(impact);
    let sampled=0,rendered=0;
    const otherLighting={},sunCache=new WeakMap([[otherLighting,{keep:true}]]);
    const order=[...scene.children],world={scene,camera,actorWorldLighting:{cache:sunCache},syncActorLighting(){
      assert.equal(existing.visible,false);assert.equal(hidden.visible,false);
      scene.traverseVisible(mesh=>{if(mesh.userData.actorLighting){sampled++;assert.ok(mesh.userData.actorLighting.bounds);sunCache.set(mesh.userData.actorLighting,{prepared:true});}});
      if(fail==='lighting')throw new Error('lighting interrupted');
    },renderer:{render(actual,actualCamera){
      rendered++;assert.equal(sampled,2,'only reusable fragment lighting is prepared before drawing');
      scene.traverseVisible(mesh=>{if(mesh.isMesh&&mesh!==impact){const expected=new THREE.Matrix4().compose(mesh.position,mesh.quaternion,mesh.scale);assert.deepEqual(mesh.matrix.elements,expected.elements);assert.equal(mesh.matrixAutoUpdate,false);}});
      assert.equal(actual,scene);assert.equal(actualCamera,camera);assert.equal(light.visible,true);assert.equal(existing.visible,false);assert.equal(hidden.visible,false);
      assert.equal(impact.visible,true);assert.equal(impact.frustumCulled,false);assert.equal(impact.layers.mask,camera.layers.mask);assert.equal(impact.geometry.drawRange.count,6);
      if(fail==='render')throw new Error('warm draw interrupted');
    }}},pool=new DebrisRenderPool(world,{opaqueUntilFade:true});
    pool.prewarm([{prototype:source,count:2}]);const roots=free(pool).map(entry=>entry.root),shared=pool.definition(source).geometry;shared.setDrawRange(0,0);
    if(fail)assert.throws(()=>pool.warmDraw([impact]),fail==='lighting'?/lighting interrupted/:/warm draw interrupted/);else pool.warmDraw([impact]);
    assert.equal(sampled,2);assert.equal(rendered,fail==='lighting'?0:1);
    assert.deepEqual(scene.children,order);assert.equal(existing.visible,true);assert.equal(hidden.visible,false);
    assert.equal(impact.visible,false);assert.equal(impact.frustumCulled,true);assert.equal(impact.layers.mask,4);assert.deepEqual(geometry.drawRange,{start:0,count:0});
    assert.ok(roots.every(root=>root.parent===null&&root.children[0].frustumCulled===true));
    assert.ok(roots.every(root=>!sunCache.has(root.children[0].userData.actorLighting)),'real spawning must resample Sun visibility after script restore');
    assert.equal(sunCache.get(otherLighting).keep,true,'unrelated actors keep their native Sun cache');
    assert.deepEqual(shared.drawRange,{start:0,count:0},'multiple owners restore their shared geometry range exactly once');
    pool.dispose();
  }
});
