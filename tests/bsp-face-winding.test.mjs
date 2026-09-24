import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
const json=p=>JSON.parse(readFileSync(new URL('../'+p,import.meta.url)));
for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a'])test(`${id} BSP triangles face their imported normals for native backface culling`,()=>{
 const level=json(`data/levels/${id}/level.json`),bytes=readFileSync(new URL(`../data/levels/${id}/${level.mesh.file}`,import.meta.url));
 const vertices=new Float32Array(bytes.buffer,bytes.byteOffset,bytes.byteLength/4);let checked=0;
 for(const group of level.groups)for(let i=group.start;i<group.start+group.count;i+=3){
   const a=vertices.subarray(i*11,i*11+3),b=vertices.subarray((i+1)*11,(i+1)*11+3),c=vertices.subarray((i+2)*11,(i+2)*11+3),n=vertices.subarray(i*11+3,i*11+6);
   const u=Array.from(b,(v,k)=>v-a[k]),v=Array.from(c,(v,k)=>v-a[k]);
   const dot=(u[1]*v[2]-u[2]*v[1])*n[0]+(u[2]*v[0]-u[0]*v[2])*n[1]+(u[0]*v[1]-u[1]*v[0])*n[2];
   assert.ok(dot>=-.001,`reversed model ${group.model} triangle ${i}: ${dot}`);if(dot>.001)checked++;
 }
 assert.ok(checked>1000);
});
