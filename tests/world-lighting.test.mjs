import test from 'node:test';
import assert from 'node:assert/strict';
import {worldLightFrame,worldLightLuxelStrength,worldLightmapLuxel} from '../src/world-lighting.js';

const frame=worldLightFrame([1,0,0],[0,0,1]);
const white={position:[0,20,0],radius:100,color:[195/255,195/255,195/255]};
test('BSP light radius shrinks by absolute plane distance, then uses native octagonal distance',()=>{
  assert.equal(worldLightLuxelStrength(white,frame,[0,0]),80);
  assert.equal(worldLightLuxelStrength(white,frame,[1,0]),64);
  assert.equal(worldLightLuxelStrength(white,frame,[1,1]),56);
  assert.equal(worldLightLuxelStrength({...white,position:[0,-20,0]},frame,[1,1]),56);
  assert.equal(worldLightLuxelStrength(white,frame,[5,0]),0);
  assert.equal(worldLightLuxelStrength({...white,position:[0,100,0]},frame,[0,0]),0);
});

test('native texinfo scaling and truncation survive fractional and oblique axes',()=>{
  assert.equal(worldLightLuxelStrength({...white,position:[-.9,20,0]},frame,[0,0]),80);
  const scaled=worldLightFrame([2,0,0],[0,0,2]);
  assert.deepEqual(scaled.scale,[512,512]);assert.deepEqual(scaled.step,[8192,8192]);
  assert.equal(worldLightLuxelStrength(white,scaled,[1,0]),72);
  const oblique=worldLightFrame([1,1,0],[0,0,1]);
  assert.equal(worldLightLuxelStrength(white,oblique,[0,0]),66,
    'raw UV axis normal component matters; tangent reconstruction would wrongly yield80');
  const shifted=worldLightFrame([1,0,0],[0,0,1],[-16,0]);
  assert.equal(worldLightLuxelStrength(white,shifted,[0,0]),64);
});

test('fixed8 light intensity uses absolute radius/195 gain and saturates before texture modulation',()=>{
  assert.deepEqual(worldLightmapLuxel([0,0,0],[white],frame,[0,0]),[80/255,80/255,80/255]);
  assert.deepEqual(worldLightmapLuxel([.2,.2,.2],[white],frame,[0,0]),[131/255,131/255,131/255]);
  assert.deepEqual(worldLightmapLuxel([0,0,0],[{...white,color:[195/255,0,0]}],frame,[1,1]),[56/255,0,0]);
  assert.deepEqual(worldLightmapLuxel([.2,.2,.2],[{...white,radius:300}],frame,[0,0]),[1,1,1]);
  assert.deepEqual(worldLightmapLuxel([.2,.2,.2],[white,white],frame,[0,0]),[211/255,211/255,211/255]);
});

test('missing lights preserve baked bytes and invalid axes are rejected',()=>{
  const base=[40/255,139/255,205/255];
  assert.deepEqual(worldLightmapLuxel(base,[],frame,[0,0]),base);
  assert.throws(()=>worldLightFrame([0,0,0],[0,1,0]),RangeError);
});
