import test from 'node:test';
import assert from 'node:assert/strict';
import {rotateNativeDebris} from '../source/debris-native.js';

// Retained pre-optimization arithmetic. Compare bits, including signed zero
// and NaN, rather than tolerances that could hide a changed rotation order.
function original(orientation,angles) {
  let q=[...orientation];
  for(let axis=0;axis<3;axis++) {
    const [x,y,z,w]=q,c=Math.cos(angles[axis]/2),s=Math.sin(angles[axis]/2);
    q=axis===0?[c*x+s*w,c*y-s*z,c*z+s*y,c*w-s*x]:axis===1?[c*x+s*z,c*y+s*w,c*z-s*x,c*w-s*y]:[c*x-s*y,c*y+s*x,c*z+s*w,c*w-s*z];
  }
  const length=Math.hypot(...q);return q.map(value=>value/length);
}
function compare(orientation,angles) {
  const expected=original(orientation,angles),actual=rotateNativeDebris(orientation,angles);
  assert.notEqual(actual,orientation);
  for(let i=0;i<4;i++)assert.ok(Object.is(actual[i],expected[i]),`component ${i}: ${actual[i]} / ${expected[i]}`);
}

test('100,000 nonunit and extreme fragment rotations preserve every output component exactly',()=>{
  let seed=0x72b1a1;
  const random=()=>((seed=(Math.imul(seed,1664525)+1013904223)>>>0)/4294967296);
  const scales=[1e-308,1e-150,1e-30,1e-10,1,10,1e10,1e30,1e100,1e250,1e308];
  for(let i=0;i<100000;i++) {
    const scale=scales[i%scales.length],angleScale=scales[(i*7+2)%scales.length];
    const orientation=Array.from({length:4},()=>scale*(random()*2-1)),angles=Array.from({length:3},()=>angleScale*(random()*2-1));
    compare(orientation,angles);
  }
});

test('zero, nonfinite, typed and frozen inputs retain original values and fresh output arrays',()=>{
  const quaternions=[[0,0,0,1],[0,0,0,0],[-0,0,-0,1],[Number.MIN_VALUE,-Number.MIN_VALUE,Number.MIN_VALUE,Number.MIN_VALUE],
    [Number.MAX_VALUE,-Number.MAX_VALUE,Number.MAX_VALUE,Number.MAX_VALUE],[Infinity,0,0,1],[NaN,0,0,1]];
  const rotations=[[0,0,0],[-0,0,-0],[Math.PI,Math.PI/2,-Math.PI],[-Math.PI*2,Math.PI*4,Math.PI*8],
    [1e308,-1e308,1e308],[Number.MIN_VALUE,Number.MIN_VALUE,-Number.MIN_VALUE],[Infinity,0,0],[NaN,0,0]];
  for(const quaternion of quaternions)for(const angles of rotations)for(const type of [Array,Float32Array,Float64Array]) {
    const input=type.from(quaternion),rotation=type.from(angles),before=Array.from(input),beforeAngles=Array.from(rotation);
    compare(input,rotation);assert.deepEqual(Array.from(input),before);assert.deepEqual(Array.from(rotation),beforeAngles);
  }
  const frozen=Object.freeze([.1,.2,.3,.4]),angles=Object.freeze([.5,.6,.7]);
  compare(frozen,angles);assert.notEqual(rotateNativeDebris(frozen,angles),rotateNativeDebris(frozen,angles));
});
