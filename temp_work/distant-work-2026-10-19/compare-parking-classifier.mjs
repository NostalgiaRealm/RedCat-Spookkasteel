import {readFileSync,writeFileSync} from 'node:fs';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {WorldGeometryStream as Before} from './before/src/world-streaming.js';
const parkingPath=new URL('./parking-world-streaming.mjs',import.meta.url);
writeFileSync(parkingPath,readFileSync(parkingPath,'utf8').replace("'./bsp-visibility.js'","'../../src/bsp-visibility.js'"));
const {WorldGeometryStream:After}=await import(parkingPath);
const read=path=>JSON.parse(readFileSync(new URL('../../'+path,import.meta.url)));
const bytes=path=>{const data=readFileSync(new URL('../../'+path,import.meta.url));return data;};
const report={levels:[],comparisons:0};
for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
  const level=read(`data/levels/${id}/level.json`),visibility=read(`data/visibility/${id}.json`);
  const mesh=bytes(`data/levels/${id}/mesh.bin`),vertices=new Float32Array(mesh.buffer,mesh.byteOffset,mesh.byteLength/4),pvs=bytes(`data/visibility/${id}.bin`);
  const create=Type=>{
    const camera=new THREE.PerspectiveCamera(65,16/9,1,30000),scene=new THREE.Scene(),ancestor=new THREE.Group();ancestor.add(scene);
    const world={camera,scene,level,resources:new Set(),modelMeshes:new Map(),skyBoundaryMeshes:[]};
    const stream=new Type(world,{vertices,groups:level.groups,visibility,pvs,materialFor:group=>new THREE.MeshBasicMaterial({side:THREE.DoubleSide,colorWrite:!(group.flags&4),opacity:group.alpha,transparent:group.alpha<1}),textureFor:async()=>new THREE.Texture()});
    return {stream,world,ancestor};
  };
  const before=create(Before),after=create(After),pair=[before,after],positions=[level.spawn.position||level.spawn.origin||Object.values(level.spawn)[0]];
  const spawn=level.entities.find(entity=>entity.classname==='PlayerStart')?.Origin.split(/\s+/).map(Number)||[0,0,0];
  positions[0]=spawn;
  for(let index=1;index<level.collision.models.length;index+=Math.max(1,Math.floor(level.collision.models.length/8))){const model=level.collision.models[index];positions.push(model.min.map((v,i)=>(v+model.max[i])*.5));}
  let checks=0;
  const compare=label=>{
    const a=before.stream,b=after.stream;assert.deepEqual(b.stats,a.stats,`${id}/${label}/stats`);assert.equal(b.readyForView,a.readyForView);
    for(let index=0;index<a.chunks.length;index++) {
      const x=a.chunks[index],y=b.chunks[index];
      assert.deepEqual([y.inView,y.resident,y.mesh.layers.mask,y.mesh.visible,!!y.request,y.mesh.geometry.attributes.position.count],[x.inView,x.resident,x.mesh.layers.mask,x.mesh.visible,!!x.request,x.mesh.geometry.attributes.position.count],`${id}/${label}/${index}/classification`);
      assert.deepEqual(y.bounds,x.bounds,`${id}/${label}/${index}/bounds`);assert.deepEqual(y.mesh.matrixWorld.elements,x.mesh.matrixWorld.elements,`${id}/${label}/${index}/matrix`);
      assert.equal(y.mesh.parent,b.parking&&!(y.resident&&y.inView)?b.parking:after.world.scene,`${id}/${label}/${index}/ownership`);
      report.comparisons++;
    }
    checks++;
  };
  for(let index=0;index<positions.length;index++)for(let turn=0;turn<3;turn++) {
    const time=index*20+turn;
    for(const item of pair) {
      const position=positions[index],angle=turn*Math.PI*.7;
      item.world.camera.position.fromArray(position).add(new THREE.Vector3(0,80,0));item.world.camera.lookAt(position[0]+Math.sin(angle)*100,position[1]+50,position[2]-Math.cos(angle)*100);
      for(const [model,meshes]of item.world.modelMeshes)if(model)for(const chunk of meshes) {
        chunk.position.set(model%3*17,index%2?model%7*4:0,-model%5*11);chunk.rotation.set(0,index%2?model%5*.17:0,0);chunk.visible=model%11!==turn;
      }
      item.ancestor.position.set(index%2?11:0,turn%2?7:0,-index);item.ancestor.rotation.y=index%2?.17:0;
      item.world.scene.updateWorldMatrix(true,true,true);item.stream.update(time);
    }
    compare(`position${index}/turn${turn}/pending`);
    while(pair.some(item=>item.stream.pending.size||item.stream.ready.length)) {
      await Promise.all(pair.flatMap(item=>[...item.stream.pending]));for(const item of pair)item.stream.update(time);compare(`position${index}/turn${turn}/settled`);
    }
  }
  report.levels.push({id,chunks:before.stream.chunks.length,cameraAndPoseChecks:checks});
  for(const item of pair)item.stream.dispose();
}
writeFileSync(new URL('./parking-classifier-comparison.json',import.meta.url),JSON.stringify(report,null,2));console.log(JSON.stringify(report,null,2));
