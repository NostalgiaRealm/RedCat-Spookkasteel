import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator} from '../src/animation.js';
import {triangleCollider,traceActors} from '../src/actor-collision.js';

// Keep the former allocating algorithm as an independent compatibility oracle:
// changing SAT axis order or deduplication can change which contact wins a tie.
function referenceTriangle(vertices) {
  const dot=(a,b)=>a[0]*b[0]+a[1]*b[1]+a[2]*b[2];
  const cross=(a,b)=>[a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0]];
  const axes=[[1,0,0],[0,1,0],[0,0,1]],edges=vertices.map((p,i)=>vertices[(i+1)%3].map((v,j)=>v-p[j]));
  const normal=cross(edges[0],edges[1]);if(Math.hypot(...normal)<1e-8)return null;
  const separating=[...axes,normal,...edges.flatMap(edge=>axes.map(axis=>cross(edge,axis)))],projections=[];
  for(const axis of separating) {
    const length=Math.hypot(...axis);if(length<1e-8)continue;
    const n=axis.map(v=>v/length);
    if(projections.some(p=>Math.abs(dot(p.normal,n))>1-1e-7))continue;
    const values=vertices.map(p=>dot(n,p));projections.push({normal:n,min:Math.min(...values),max:Math.max(...values)});
  }
  return {min:axes.map((_,i)=>Math.min(...vertices.map(p=>p[i]))),max:axes.map((_,i)=>Math.max(...vertices.map(p=>p[i]))),projections};
}
function random(seed=4317) {return ()=>((seed=Math.imul(seed,1664525)+1013904223>>>0)/4294967296);}
function equivalent(actual,expected) {
  if(expected===null){assert.equal(actual,null);return;}
  assert.equal(actual.projections.length,expected.projections.length);
  assert.deepEqual(actual.min,expected.min);assert.deepEqual(actual.max,expected.max);
  actual.projections.forEach((p,i)=>{
    const q=expected.projections[i];
    assert.ok(Math.abs(p.min-q.min)<1e-10);assert.ok(Math.abs(p.max-q.max)<1e-10);
    p.normal.forEach((v,j)=>assert.ok(Math.abs(v-q.normal[j])<1e-14));
  });
}

test('scalar actor SAT preserves degenerate, axis-aligned and near-parallel triangle contacts',()=>{
  const cases=[[[0,0,0],[0,0,0],[0,0,0]],[[0,0,0],[1,1,1],[2,2,2]],
    [[0,0,0],[1,0,0],[0,1e-9,0]],[[0,0,0],[100,0,0],[0,100,0]],
    [[0,0,0],[1,1e-8,0],[0,1,1e-8]],[[0,0,0],[1,0,0],[0,0,1]],
    [[0,0,0],[0,1,0],[0,0,1]],[[0,0,0],[-100,0,0],[0,-100,0]]];
  const rng=random();
  for(let i=0;i<1000;i++)cases.push(Array.from({length:3},()=>Array.from({length:3},()=>rng()*4000-2000)));
  for(const vertices of cases)equivalent(triangleCollider(vertices),referenceTriangle(vertices));
});

test('original animated torch, skull, cobweb and turret surfaces keep identical player and pellet sweeps',()=>{
  const rng=random(912),matrix=new THREE.Matrix4().compose(new THREE.Vector3(17,-12,40),
    new THREE.Quaternion().setFromEuler(new THREE.Euler(-Math.PI/2,.37,.13)),new THREE.Vector3(1.4,1.4,1.4));
  for(const stem of ['htorch','graveskl','spiderweb','turtop']) {
    const data=JSON.parse(readFileSync(new URL(`../assets/actors/${stem}.json`,import.meta.url)));
    const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
    const animator=new ActorAnimator(data,geometry);animator.play(data.animations[0].name);
    for(let pose=0;pose<4;pose++) {
      animator.update(animator.clip.duration/4);
      const actual=[],expected=[];
      for(let i=0;i<data.indices.length;i+=3) {
        const vertices=[0,1,2].map(j=>new THREE.Vector3().fromBufferAttribute(geometry.attributes.position,data.indices[i+j]).applyMatrix4(matrix).toArray());
        const got=triangleCollider(vertices),want=referenceTriangle(vertices);equivalent(got,want);
        if(got)actual.push(got);if(want)expected.push(want);
      }
      const bounds=new THREE.Box3().setFromBufferAttribute(geometry.attributes.position).applyMatrix4(matrix);
      const source={id:'prop',blocksPlayer:true,canBeShot:true,min:bounds.min.toArray(),max:bounds.max.toArray()};
      for(let i=0;i<50;i++) {
        const start=Array.from({length:3},()=>rng()*400-180),end=Array.from({length:3},()=>rng()*400-180);
        const mins=i%2?[-11,0,-11]:[-2,-2,-2],maxs=i%2?[11,56,11]:[2,2,2],mask=i%2?'blocksPlayer':'canBeShot';
        const sweep=triangles=>traceActors([{...source,triangles}],start,end,mins,maxs,{fraction:1,startSolid:false},mask);
        assert.deepEqual(sweep(actual),sweep(expected),`${stem}, pose ${pose}, sweep ${i}`);
      }
    }
    geometry.dispose();
  }
});
