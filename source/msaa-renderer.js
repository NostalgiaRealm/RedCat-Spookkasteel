import * as THREE from 'three';

export const MSAA_OPTIONS = [0, 2, 4, 8];
export function normalizeMsaa(value) {
  return MSAA_OPTIONS.includes(value) ? value : 4;
}

// Color and depth must use the same supported sample count. MAX_SAMPLES alone
// does not describe individual attachment formats (or guarantee 2x support).
export function supportedMsaaSamples(gl) {
  const color = gl.getInternalformatParameter(gl.RENDERBUFFER, gl.RGBA8, gl.SAMPLES);
  const depth = gl.getInternalformatParameter(gl.RENDERBUFFER, gl.DEPTH_COMPONENT24, gl.SAMPLES);
  return MSAA_OPTIONS.filter(samples => samples === 0 || color?.includes(samples) && depth?.includes(samples));
}
export function effectiveMsaa(requested, supported) {
  return supported.reduce((best, samples) => samples <= normalizeMsaa(requested) ? Math.max(best, samples) : best, 0);
}

// Only the completed world draw passes through this target. Asset preparation
// retains its tiny private targets, and the HTML HUD/menu remain at native size.
export class MsaaRenderer {
  constructor(renderer, samples = 4) {
    this.renderer = renderer;
    this.supported = supportedMsaaSamples(renderer.getContext());
    this.requested = normalizeMsaa(samples);
    this.samples = effectiveMsaa(this.requested, this.supported);
    this.target = null;
    this.contextLost = false;
    this.size = renderer.getDrawingBufferSize(new THREE.Vector2());
    this.geometry = new THREE.BufferGeometry();
    this.geometry.setAttribute('position', new THREE.Float32BufferAttribute([-1,-1,0, 3,-1,0, -1,3,0], 3));
    this.geometry.setAttribute('uv', new THREE.Float32BufferAttribute([0,0, 2,0, 0,2], 2));
    this.material = new THREE.RawShaderMaterial({
      uniforms: {map: {value: null}}, depthTest: false, depthWrite: false, toneMapped: false,
      vertexShader: 'precision highp float; attribute vec3 position; attribute vec2 uv; varying vec2 vUv; void main(){vUv=uv;gl_Position=vec4(position,1.);}',
      fragmentShader: 'precision highp float; uniform sampler2D map; varying vec2 vUv; void main(){gl_FragColor=texture2D(map,vUv);}',
    });
    this.screen = new THREE.Mesh(this.geometry, this.material);
    this.screen.frustumCulled = false;
    this.camera = new THREE.OrthographicCamera(-1, 1, 1, -1, 0, 1);
    this.render = this.render.bind(this);
    this.onContextLost = () => { this.contextLost = true; this.releaseTarget(); };
    this.onContextRestored = () => {
      this.contextLost = false;
      this.supported = supportedMsaaSamples(renderer.getContext());
      this.samples = effectiveMsaa(this.requested, this.supported);
    };
    renderer.domElement.addEventListener('webglcontextlost', this.onContextLost);
    renderer.domElement.addEventListener('webglcontextrestored', this.onContextRestored);
  }
  setSamples(samples) {
    this.requested = normalizeMsaa(samples);
    const effective = effectiveMsaa(this.requested, this.supported);
    if (effective === this.samples) return;
    this.releaseTarget();
    this.samples = effective;
  }
  setSize(width, height) {
    this.size.set(width, height);
    this.target?.setSize(width, height);
  }
  releaseTarget() {
    this.target?.dispose();
    this.target = null;
    this.material.uniforms.map.value = null;
  }
  prepareTarget() {
    if (!this.samples) return null;
    if (!this.target) {
      this.target = new THREE.WebGLRenderTarget(this.size.x, this.size.y, {
        samples: this.samples, colorSpace: this.renderer.outputColorSpace, internalFormat: 'RGBA8',
        minFilter: THREE.NearestFilter, magFilter: THREE.NearestFilter,
        depthBuffer: true, stencilBuffer: false,
        resolveDepthBuffer: false, resolveStencilBuffer: false,
        storeMultisampledDepthBuffer: false, storeMultisampledStencilBuffer: false,
      });
      // Three r186 uses this flag for display-target color/tone mapping. It
      // enables the same output encoding as the canvas without starting XR.
      // Ordinary linear/sRGB targets change the game's alpha/additive blending
      // (half-opacity red on black becomes 188 instead of 127). Keep RGBA8
      // display bytes throughout the resolve and copy them without conversion.
      this.target.isXRRenderTarget = true;
      this.target.texture.name = 'World MSAA resolved display color';
      this.material.uniforms.map.value = this.target.texture;
    }
    return this.target;
  }
  async compile(scene, camera) {
    const renderer = this.renderer;
    if (this.contextLost || !renderer.compileAsync || !this.samples) return;
    const previous = renderer.getRenderTarget();
    try {
      renderer.setRenderTarget(this.prepareTarget());
      // compileAsync chooses program variants synchronously, before its promise
      // waits for the driver. Restore the target before yielding to streaming.
      const compiling = renderer.compileAsync(scene, camera);
      renderer.setRenderTarget(previous);
      await compiling;
      await renderer.compileAsync(this.screen, this.camera);
    } finally { renderer.setRenderTarget(previous); }
  }
  render(scene, camera) {
    if (this.contextLost) return;
    const renderer = this.renderer;
    if (!this.samples) { renderer.render(scene, camera); return; }
    const previous = renderer.getRenderTarget();
    const autoReset = renderer.info.autoReset;
    try {
      renderer.setRenderTarget(this.prepareTarget());
      renderer.render(scene, camera);
      renderer.setRenderTarget(previous);
      // Present the already-encoded display bytes without changing colors or
      // alpha/additive blends. Only multisample edge coverage differs.
      renderer.info.autoReset = false;
      renderer.render(this.screen, this.camera);
    } finally {
      renderer.info.autoReset = autoReset;
      renderer.setRenderTarget(previous);
    }
  }
  dispose() {
    this.renderer.domElement.removeEventListener('webglcontextlost', this.onContextLost);
    this.renderer.domElement.removeEventListener('webglcontextrestored', this.onContextRestored);
    this.releaseTarget();
    this.geometry.dispose();
    this.material.dispose();
  }
}
