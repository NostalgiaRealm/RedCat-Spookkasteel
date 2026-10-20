import * as THREE from 'three';

// Prepare buffers in a tiny private target, never on the displayed game frame.
// A zero-count draw still uploads attributes/index data in WebGLRenderer; it
// draws no triangles and never calls an actor's lighting/animation callbacks.
export class StreamingGpuPreparation {
  constructor(renderer,work) {
    this.renderer=renderer;this.work=work;this.prepared=new WeakSet();this.requests=new WeakMap();this.pending=new Set();this.disposed=false;
    this.scene=new THREE.Scene();this.camera=new THREE.PerspectiveCamera();
    this.material=new THREE.MeshBasicMaterial();this.mesh=new THREE.Mesh(new THREE.BufferGeometry(),this.material);
    this.mesh.frustumCulled=false;this.scene.add(this.mesh);this.empty=this.mesh.geometry;
    this.target=null;
    this.viewport=new THREE.Vector4();this.scissor=new THREE.Vector4();
    this.onContextRestored=()=>{this.prepared=new WeakSet();};
    renderer.domElement?.addEventListener('webglcontextrestored',this.onContextRestored);
  }
  ready(geometry){return this.prepared.has(geometry);}
  request(geometry,valid=()=>true,priority=()=>0) {
    if(this.ready(geometry)||this.requests.has(geometry)||this.disposed)return;
    const job=this.work.enqueue(()=>{this.warmGeometry(geometry);return true;},{valid,priority});
    this.requests.set(geometry,job);this.pending.add(job);
    job.catch(()=>{}).finally(()=>{if(this.requests.get(geometry)===job)this.requests.delete(geometry);this.pending.delete(job);});
  }
  warmGeometry(geometry) {
    if(this.ready(geometry)||this.disposed)return;
    const renderer=this.renderer;
    if(!renderer?.setRenderTarget||!renderer?.render)return;
    this.target??=new THREE.WebGLRenderTarget(1,1,{depthBuffer:false,stencilBuffer:false});
    const target=renderer.getRenderTarget(),face=renderer.getActiveCubeFace(),mip=renderer.getActiveMipmapLevel();
    const autoClear=renderer.autoClear,range={...geometry.drawRange},xr=renderer.xr.enabled,shadows=renderer.shadowMap.autoUpdate;
    const viewport=renderer.getViewport?.(this.viewport),scissor=renderer.getScissor?.(this.scissor),scissorTest=renderer.getScissorTest?.();
    const info=renderer.info?.render,counts=info?{calls:info.calls,triangles:info.triangles,points:info.points,lines:info.lines}:null;
    const onDispose=()=>{this.prepared.delete(geometry);geometry.removeEventListener('dispose',onDispose);};
    try {
      renderer.xr.enabled=false;renderer.shadowMap.autoUpdate=false;renderer.autoClear=false;
      this.mesh.geometry=geometry;geometry.setDrawRange(0,0);
      renderer.setRenderTarget(this.target);renderer.render(this.scene,this.camera);
      this.prepared.add(geometry);geometry.addEventListener('dispose',onDispose);
    }finally {
      geometry.setDrawRange(range.start,range.count);this.mesh.geometry=this.empty;
      if(viewport)renderer.setViewport(viewport);if(scissor)renderer.setScissor(scissor);if(scissorTest!==undefined)renderer.setScissorTest(scissorTest);
      renderer.setRenderTarget(target,face,mip);renderer.autoClear=autoClear;renderer.xr.enabled=xr;renderer.shadowMap.autoUpdate=shadows;
      // Keep Three's monotonically increasing internal frame stamp; resetting
      // it would skip subsequent animated-attribute uploads in the real draw.
      if(counts)Object.assign(info,counts);
    }
  }
  async settle(){await this.work.waitFor(Promise.all([...this.pending]));}
  dispose(){this.disposed=true;this.renderer.domElement?.removeEventListener('webglcontextrestored',this.onContextRestored);this.target?.dispose();this.empty.dispose();this.material.dispose();this.scene.clear();}
}
