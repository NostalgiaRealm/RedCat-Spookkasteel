import test from 'node:test';
import assert from 'node:assert/strict';
import {sampleCameraRoute} from '../src/script-camera.js';
test('scripted route follows authored points, skips zero-length edges and holds the final point',()=>{
  const route=[[0,0,0],[0,0,0],[150,0,0],[150,300,0]];
  assert.deepEqual(sampleCameraRoute(route,0),[0,0,0]);
  assert.deepEqual(sampleCameraRoute(route,.5),[75,0,0]);
  assert.deepEqual(sampleCameraRoute(route,2),[150,150,0]);
  assert.deepEqual(sampleCameraRoute(route,99),[150,300,0]);
});
