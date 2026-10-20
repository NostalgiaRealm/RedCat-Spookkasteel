import test from 'node:test';
import assert from 'node:assert/strict';
import {normalizeMsaa, supportedMsaaSamples, effectiveMsaa, MsaaRenderer} from '../src/msaa-renderer.js';

test('MSAA uses valid preferences and safely adapts a saved choice to another GPU', () => {
  for (const value of [0,2,4,8]) assert.equal(normalizeMsaa(value),value);
  for (const value of [undefined,null,NaN,-2,3,16,'8']) assert.equal(normalizeMsaa(value),4);
  assert.equal(effectiveMsaa(8,[0,2,4]),4);
  assert.equal(effectiveMsaa(2,[0,4]),0);
  assert.equal(effectiveMsaa(0,[0,2,4,8]),0);
  assert.equal(effectiveMsaa(8,[0]),0);
});

test('only exact sample counts shared by color and depth are offered', () => {
  const gl={RENDERBUFFER:1,RGBA8:2,DEPTH_COMPONENT24:3,SAMPLES:4,
    getInternalformatParameter(target,format,pname) {
      assert.equal(target,1);assert.equal(pname,4);
      return new Int32Array(format===2?[8,4,2]:[4,2]);
    }};
  assert.deepEqual(supportedMsaaSamples(gl),[0,2,4]);
  gl.getInternalformatParameter=()=>new Int32Array([4]);
  assert.deepEqual(supportedMsaaSamples(gl),[0,4]);
  gl.getInternalformatParameter=()=>new Int32Array();
  assert.deepEqual(supportedMsaaSamples(gl),[0]);
});


test('frames during context loss cannot recreate attachments or compile shaders', async () => {
  let calls = 0;
  const renderer = {
    domElement: new EventTarget(),
    getContext: () => ({getInternalformatParameter: () => new Int32Array([4])}),
    getDrawingBufferSize: size => size.set(64, 64),
    render: () => calls++,
    compileAsync: () => { calls++; return Promise.resolve(); },
  };
  const msaa = new MsaaRenderer(renderer, 4);
  const oldTarget = msaa.prepareTarget();
  let released = false;
  oldTarget.addEventListener('dispose', () => { released = true; });
  renderer.domElement.dispatchEvent(new Event('webglcontextlost'));
  msaa.render({}, {});
  await msaa.compile({}, {});
  assert.equal(released, true);
  assert.equal(msaa.target, null);
  assert.equal(calls, 0);
  renderer.domElement.dispatchEvent(new Event('webglcontextrestored'));
  msaa.setSamples(0);
  msaa.render({}, {});
  assert.equal(calls, 1);
  msaa.dispose();
});
