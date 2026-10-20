import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {BillboardBatch,BeamBatch} from '../src/world-effects.js';

const makeWorld=range=>({scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(65,1,.1,15000),geometryStream:range===undefined?undefined:{viewRadius:range},track:x=>x});
const free=b=>{b.geometry.dispose();b.mesh.material.dispose();};
const sprite=(b,position,size=1,native=false)=>b.add(position,size,size,[1,.5,.25],.5,0,null,native?1:0);
const quad=(x,z=-10)=>[[-1,-1],[1,-1],[-1,1],[1,-1],[1,1],[-1,1]].map(([a,b])=>new THREE.Vector3(x+a,b,z));
const beam=(b,points)=>b.addPoints(points,[1,.5,.25],.5);

test('shared smoke, glow and beam batches never draw complete effects beyond the camera artwork range',()=>{
  const world=makeWorld(2048),billboard=new BillboardBatch(world,null),ribbon=new BeamBatch(world,null);
  try {
    world.camera.updateMatrixWorld();billboard.beginView();ribbon.beginView();
    for(let i=0;i<100;i++){sprite(billboard,[3000+i,0,-10]);beam(ribbon,quad(3000+i));}
    // A fully enclosed frustum cohort may bypass only its sphere test, never
    // the independent render-distance cutoff.
    billboard.add([3000,0,-10],1,1,[1,1,1],1,0,null,1,true);
    billboard.flush(1);ribbon.flush(1);
    assert.equal(billboard.count,0);assert.equal(ribbon.count,0);assert.equal(billboard.mesh.visible,false);assert.equal(ribbon.mesh.visible,false);
    assert.equal(billboard.bufferCapacity,64);assert.equal(ribbon.bufferCapacity,32);
  }finally{free(billboard);free(ribbon);}
});

test('large nearby particle tails, native half-unit quads and crossing beams retain their complete artwork',()=>{
  const world=makeWorld(2048),billboard=new BillboardBatch(world,null),ribbon=new BeamBatch(world,null);
  try {
    world.camera.updateMatrixWorld();billboard.beginView();ribbon.beginView();
    sprite(billboard,[2100,0,0],1);assert.equal(billboard.count,0);
    sprite(billboard,[2100,0,0],200);assert.equal(billboard.count,1,'a large billboard can cross into the visible neighborhood');
    sprite(billboard,[2048+.7,0,0],.00001,true);assert.equal(billboard.count,2);
    sprite(billboard,[2048+.8,0,0],.00001,true);assert.equal(billboard.count,2);
    const points=quad(2400);points[5].x=1800;beam(ribbon,points);
    assert.equal(ribbon.count,1,'one nearby corner preserves the entire wide beam');
    assert.deepEqual([...ribbon.positions.array.subarray(0,18)],points.flatMap(p=>[Math.fround(p.x),Math.fround(p.y),Math.fround(p.z)]));
    billboard.add([3000,0,0],100,100,[1,1,1],1,0,[20,20]);assert.equal(billboard.count,3,'expanded diagonal artwork keeps its original extent');
  }finally{free(billboard);free(ribbon);}
});

test('moving the main camera restores effects immediately, including cameras with a transformed parent',()=>{
  const world=makeWorld(2048),parent=new THREE.Group(),billboard=new BillboardBatch(world,null),ribbon=new BeamBatch(world,null);
  try {
    parent.add(world.camera);parent.updateMatrixWorld(true);billboard.beginView();ribbon.beginView();
    sprite(billboard,[3000,0,-10]);beam(ribbon,quad(3000));assert.equal(billboard.count+ribbon.count,0);
    parent.position.x=3000;parent.updateMatrixWorld(true);billboard.beginView();ribbon.beginView();
    sprite(billboard,[3000,0,-10]);beam(ribbon,quad(3000));assert.equal(billboard.count,1);assert.equal(ribbon.count,1);
    billboard.count=ribbon.count=0;
    world.geometryStream.viewRadius=4096;billboard.beginView();ribbon.beginView();
    sprite(billboard,[0,0,-10]);beam(ribbon,quad(0));assert.equal(billboard.count,1);assert.equal(ribbon.count,1,'range changes apply on the next frame');
  }finally{free(billboard);free(ribbon);}
});

test('fixtures without a geometry stream retain their original unlimited batch distance',()=>{
  for(const range of [undefined,Infinity,NaN,-1]) {
    const world=makeWorld(range),billboard=new BillboardBatch(world,null),ribbon=new BeamBatch(world,null);
    try {
      world.camera.updateMatrixWorld();billboard.beginView();ribbon.beginView();
      sprite(billboard,[9000,0,-10]);beam(ribbon,quad(9000));assert.equal(billboard.count,1);assert.equal(ribbon.count,1);
    }finally{free(billboard);free(ribbon);}
  }
});
