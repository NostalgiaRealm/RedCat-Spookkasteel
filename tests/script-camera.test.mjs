import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {sampleCameraRoute,cameraFinalApproachSpeed} from '../src/script-camera.js';
test('scripted route follows authored points, skips zero-length edges and holds the final point',()=>{
  const route=[[0,0,0],[0,0,0],[150,0,0],[150,300,0]];
  assert.deepEqual(sampleCameraRoute(route,0),[0,0,0]);
  assert.deepEqual(sampleCameraRoute(route,.5),[75,0,0]);
  assert.deepEqual(sampleCameraRoute(route,1),[150,0,0]);
  assert.deepEqual(sampleCameraRoute(route,1.25),[150,117.5,0]);
  assert.deepEqual(sampleCameraRoute(route,2),[150,300,0]);
  assert.deepEqual(sampleCameraRoute(route,99),[150,300,0]);
});

test('final approach uses the original truncated distance lookup and speed clamps',()=>{
  // Independently decoded float32 table entries at native VA 0x64d460.
  for(const [distance,speed] of [[5,150],[50,150],[58.99,150],
    [59,163.78399658203125],[59.99,163.78399658203125],
    [60,182.0819854736328],[70.5,354.0619812011719],
    [77,462.5480041503906],[78,470],[149,470],[10000,470]]) {
    assert.equal(cameraFinalApproachSpeed(distance),speed,`distance ${distance}`);
  }
});

test('last leg slows near its endpoint and snaps the native five-unit arrival distance',()=>{
  const route=[[10,20,30],[210,20,30]];
  assert.deepEqual(sampleCameraRoute(route,.2),[104,20,30]);
  const far=sampleCameraRoute(route,.05)[0]-sampleCameraRoute(route,0)[0];
  const near=sampleCameraRoute(route,.55)[0]-sampleCameraRoute(route,.5)[0];
  assert.ok(near<far/2,'camera slows from 470 to 150 units/s as it arrives');
  assert.deepEqual(sampleCameraRoute([[0,0,0],[4,0,0]],0),[0,0,0]);
  assert.deepEqual(sampleCameraRoute([[0,0,0],[4,0,0]],.001),[4,0,0]);
  assert.deepEqual(sampleCameraRoute([[0,0,0],[35,0,0]],.19),[28.5,0,0]);
  assert.deepEqual(sampleCameraRoute([[0,0,0],[35,0,0]],.2),[35,0,0]);
  assert.deepEqual(sampleCameraRoute(route,100),route[1]);
});

test('all five authored routes preserve intermediate waypoints and resume the final approach from save time',()=>{
  let count=0;
  for(const levelId of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const level=JSON.parse(fs.readFileSync(new URL(`../data/levels/${levelId}/level.json`,import.meta.url)));
    for(const camera of level.entities.filter(e=>Number(e.CameraMode)===4)) {
      const points=Array.from({length:Number(camera.CamScriptPosTotal)},(_,i)=>{
        const entity=level.entities.find(e=>e['%name%']===camera['CamScriptPos'+i]||e.DaviName===camera['CamScriptPos'+i]);
        return entity.Origin.trim().split(/\s+/).map(Number);
      });
      let elapsed=0;
      for(let i=1;i<points.length-1;i++) {
        elapsed+=Math.hypot(...points[i].map((v,j)=>v-points[i-1][j]))/150;
        const position=sampleCameraRoute(points,elapsed);
        assert.ok(Math.hypot(...position.map((v,j)=>v-points[i][j]))<1e-8);
      }
      const lastLength=Math.hypot(...points.at(-1).map((v,j)=>v-points.at(-2)[j]));
      const finalTime=elapsed+Math.min(.15,lastLength/1000);
      const state={points,start:10,time:10+finalTime};
      const save=JSON.parse(JSON.stringify(state));
      assert.deepEqual(sampleCameraRoute(save.points,save.time-save.start),sampleCameraRoute(state.points,state.time-state.start));
      assert.deepEqual(sampleCameraRoute(points,elapsed+lastLength/150+1),points.at(-1));
      count++;
    }
  }
  assert.equal(count,5);
});

test('empty, singleton and duplicate routes remain safe without changing authored points',()=>{
  assert.equal(sampleCameraRoute([],3),null);
  const route=[[2,3,4],[2,3,4]],copy=structuredClone(route);
  assert.deepEqual(sampleCameraRoute(route,Infinity),[2,3,4]);
  assert.deepEqual(sampleCameraRoute([route[0]],100),[2,3,4]);
  assert.deepEqual(sampleCameraRoute(route,-5),[2,3,4]);
  assert.deepEqual(route,copy);
});
