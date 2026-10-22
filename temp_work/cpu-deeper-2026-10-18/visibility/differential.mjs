import {readFileSync,writeFileSync} from 'node:fs';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldGeometryStream as BeforeStream} from '../before/src/world-streaming.js';
import {WorldGeometryStream as AfterStream} from '../../../src/world-streaming.js';
import {ActorRenderResidency as BeforeActors} from '../before/src/actor-render-residency.js';
import {ActorRenderResidency as AfterActors} from '../../../src/actor-render-residency.js';
const read=name=>JSON.parse(readFileSync(name)),result={levels:[],actorFrames:0};
function fixture(Stream,level,visibility,pvs,vertices){
  const camera=new THREE.PerspectiveCamera(65,16/9,1,15000),scene=new THREE.Scene();scene.matrixAutoUpdate=false;
  const world={camera,scene,level,resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]};
  const stream=new Stream(world,{vertices,groups:level.groups,visibility,pvs,materialFor:group=>new THREE.MeshBasicMaterial({colorWrite:!(group.flags&4)}),textureFor:async()=>new THREE.Texture()});
  let matrixCompositions=0;
  for(const chunk of stream.chunks)if(chunk.group.model===0){const original=chunk.mesh.updateMatrix;chunk.mesh.updateMatrix=function(){matrixCompositions++;original.call(this);};}
  return {world,stream,compositions:()=>matrixCompositions};
}
const classification=stream=>stream.chunks.map(chunk=>[chunk.inView,chunk.resident,chunk.mesh.layers.mask,chunk.bounds.min.toArray(),chunk.bounds.max.toArray()]);
for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']){
  const level=read(`data/levels/${id}/level.json`),visibility=read(`data/visibility/${id}.json`),pvs=new Uint8Array(readFileSync(`data/visibility/${id}.bin`));
  const bytes=readFileSync(`data/levels/${id}/mesh.bin`),vertices=new Float32Array(bytes.buffer,bytes.byteOffset,bytes.byteLength/4);
  const before=fixture(BeforeStream,level,visibility,pvs,vertices),after=fixture(AfterStream,level,visibility,pvs,vertices);
  const points=[level.spawn.position,...level.entities.filter(e=>(e.Origin||e.origin)&&e.classname!=='%Model%').filter((e,i)=>i%17===0).slice(0,27).map(e=>(e.Origin||e.origin).trim().split(/\s+/).map(Number)),[1000000,1000000,1000000]];
  let classifications=0;
  for(let i=0;i<points.length;i++)for(let turn=0;turn<4;turn++){
    const time=(i*4+turn)/60,angle=(turn*1.31+i*.17),point=points[i];
    for(const {world,stream}of [before,after]){
      world.camera.position.fromArray(point);world.camera.lookAt(point[0]+Math.sin(angle),point[1]+Math.sin(i*.4)*.7,point[2]-Math.cos(angle));
      world.camera.fov=i%3===0?110:65;world.camera.updateProjectionMatrix();
      let modelCount=0;for(const [model,meshes]of world.modelMeshes)if(model&&modelCount++<4)for(const mesh of meshes){mesh.position.set(Math.sin(time)*50,Math.cos(time)*3,0);mesh.rotation.y=time*.7;mesh.visible=(i+model)%5!==0;}
      stream.update(time);while(stream.pending.size||stream.ready.length){await Promise.all([...stream.pending]);stream.update(time);}
      world.scene.updateMatrixWorld();
    }
    assert.deepEqual(classification(after.stream),classification(before.stream),`${id} position ${i} turn ${turn}`);
    assert.equal(after.stream.readyForView,before.stream.readyForView);assert.deepEqual(after.stream.stats,before.stream.stats);
    classifications+=after.stream.chunks.length;
  }
  result.levels.push({id,positions:points.length,frames:points.length*4,chunkClassifications:classifications,staticMatrixCompositionsBefore:before.compositions(),staticMatrixCompositionsAfter:after.compositions()});
  before.stream.dispose();after.stream.dispose();
}
function actors(Controller){
 const texture=new THREE.Texture(),geometry=new THREE.BoxGeometry(20,40,20);geometry.computeBoundingBox();
 const roots=Array.from({length:400},(_,i)=>{const root=new THREE.Group(),middle=new THREE.Group(),mesh=new THREE.Mesh(geometry,new THREE.MeshBasicMaterial({map:texture}));root.add(middle);middle.add(mesh);root.position.set((i%20-10)*200,Math.floor(i/20)*10,-Math.floor(i/20)*200-100);mesh.userData.actorLighting={bounds:geometry.boundingBox.clone()};return root;});
 const camera=new THREE.PerspectiveCamera(65,16/9,1,20000),controller=new Controller({boundsVisible:box=>box.min.x<1900});let reads=0,disposals=0;
 texture.addEventListener('dispose',()=>disposals++);geometry.addEventListener('dispose',()=>disposals++);
 const nativeGet=controller.resources.get.bind(controller.resources);controller.resources.get=key=>{reads++;return nativeGet(key);};
 return {roots,camera,controller,reads:()=>reads,disposals:()=>disposals};
}
const before=actors(BeforeActors),after=actors(AfterActors);
for(let frame=0;frame<600;frame++){
 for(const f of [before,after]){
  for(let i=0;i<f.roots.length;i++)if(i%37===0){f.roots[i].position.x=Math.sin(frame*.03+i)*700;f.roots[i].rotation.y=frame*.01;f.roots[i].children[0].position.y=Math.sin(frame*.1)*50;f.roots[i].visible=(Math.floor(frame/40)+i)%3!==0;}
  f.camera.position.set(Math.sin(frame*.03)*500,20,Math.cos(frame*.02)*300);f.camera.lookAt(Math.sin(frame*.01)*300,0,-1500);if(frame%71===0)f.camera.lookAt(0,0,5000);
  const roots=f.roots.filter((_,i)=>i%23!==0||frame%100<50);f.controller.update(roots,f.camera,frame/60);
 }
 assert.deepEqual(after.controller.stats,before.controller.stats,`actor stats frame ${frame}`);
 assert.deepEqual(after.roots.map(r=>[after.controller.isResident(r),after.controller.isRendered(r),r.children[0].children[0].layers.mask]),before.roots.map(r=>[before.controller.isResident(r),before.controller.isRendered(r),r.children[0].children[0].layers.mask]));
 assert.deepEqual([...after.controller.resources.values()],[...before.controller.resources.values()]);assert.equal(after.disposals(),before.disposals());result.actorFrames++;
}
result.actors={count:400,resourceLookupsBefore:before.reads(),resourceLookupsAfter:after.reads()};
writeFileSync(new URL('differential-results.json',import.meta.url),JSON.stringify(result,null,2)+'\n');console.log(JSON.stringify(result,null,2));
