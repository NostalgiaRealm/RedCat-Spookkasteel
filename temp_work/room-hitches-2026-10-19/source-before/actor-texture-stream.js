import * as THREE from 'three';

function rootTextures(root) {
  const textures=new Set();
  root?.traverse(node=>{
    for(const material of Array.isArray(node.material)?node.material:[node.material])if(material) {
      for(const key of Object.keys(material)){const value=material[key];if(value?.isTexture)textures.add(value);}
      for(const uniform of Object.values(material.uniforms||{}))if(uniform?.value?.isTexture)textures.add(uniform.value);
    }
  });
  return textures;
}

// Geometry, script metadata and collision stay available for the whole level.
// Stable map handles let cloned materials keep their shaders while only nearby
// artwork is fetched/decoded. The tiny empty image is used by load-only shader
// preparation; readiness gates prevent it from reaching a playable frame.
export class ActorTextureStream {
  constructor({load,track=texture=>texture,release=texture=>texture.dispose(),configure=()=>{},concurrency=4,placeholder,idleSeconds=12,clock=()=>performance.now()/1000}={}) {
    this.load=load;this.track=track;this.release=release;this.configure=configure;this.concurrency=concurrency;
    this.entries=new Map();this.byTexture=new WeakMap();this.queue=[];this.pending=new Set();this.running=0;
    this.disposed=false;this.error=null;this.watchers=new Map();this.prepared=new WeakMap();this.pinned=new Set();this.readyForView=true;
    this.idleSeconds=idleSeconds;this.clock=clock;this.nextRelease=Infinity;
    if(placeholder===undefined&&typeof document!=='undefined'){placeholder=document.createElement('canvas');placeholder.width=placeholder.height=1;}
    this.placeholder=placeholder||null;this.sphere=new THREE.Sphere();this.cameraPosition=new THREE.Vector3();
    this.projection=new THREE.Matrix4();this.frustum=new THREE.Frustum();
  }
  texture(url) {
    let entry=this.entries.get(url);if(entry)return entry.texture;
    const texture=this.track(new THREE.Texture(this.placeholder));this.configure(texture);texture.needsUpdate=true;
    entry={url,texture,ready:false,promise:null,lastWanted:-Infinity};this.entries.set(url,entry);this.byTexture.set(texture,entry);return texture;
  }
  request(resources,time=this.clock()) {
    let ready=true;
    for(const texture of resources) {
      const entry=this.byTexture.get(texture);if(!entry)continue;entry.lastWanted=time;if(entry.ready)continue;ready=false;
      if(!entry.promise&&!this.disposed&&!entry.error) {
        entry.promise=new Promise(resolve=>this.queue.push({entry,resolve}));this.pending.add(entry.promise);this.pump();
      }
    }
    return ready;
  }
  ready(resources) {for(const texture of resources){const entry=this.byTexture.get(texture);if(entry&&!entry.ready)return false;}return true;}
  requestRoot(root){return this.request(rootTextures(root));}
  pinRoot(root){for(const texture of rootTextures(root))this.pinned.add(texture);this.request(this.pinned);}
  async loadRoot(root){this.requestRoot(root);await this.settle();}
  pump() {
    while(!this.disposed&&this.running<this.concurrency&&this.queue.length) {
      const {entry,resolve}=this.queue.shift();this.running++;
      Promise.resolve().then(()=>this.load(entry.url)).then(texture=>{
        try{if(!this.disposed){
          // Replacing a Source or resizing its image needs fresh WebGL texture
          // storage. The material/map identity and compiled shader stay stable.
          entry.texture.dispose();entry.texture.copy(texture);this.configure(entry.texture);entry.texture.needsUpdate=true;entry.ready=true;
          this.nextRelease=Math.min(this.nextRelease,entry.lastWanted+this.idleSeconds);
        }}finally{this.release(texture);}
      }).catch(error=>{entry.error=error;this.error??=error;}).finally(()=>{
        this.running--;this.pending.delete(entry.promise);resolve();this.pump();
      });
    }
  }
  async settle() {
    while(this.pending.size&&!this.disposed)await Promise.all([...this.pending]);
    if(this.error)throw this.error;
  }
  prepareRoot(root) {
    let record=this.prepared.get(root);if(record)return record;
    const meshes=[],sphere=new THREE.Sphere();let radius=0;
    root.traverse(mesh=>{
      if(!mesh.isMesh)return;
      if(!mesh.geometry.boundingSphere)mesh.geometry.computeBoundingSphere();mesh.updateMatrix();
      sphere.copy(mesh.geometry.boundingSphere).applyMatrix4(mesh.matrix);radius=Math.max(radius,sphere.center.length()+sphere.radius);
      meshes.push({mesh,layerMask:mesh.layers.mask,matrix:mesh.matrix.clone()});
    });
    record={root,meshes,radius,resources:rootTextures(root)};this.prepared.set(root,record);return record;
  }
  watch(root){
    if(this.watchers.has(root))return;const record=this.prepareRoot(root);
    if(record.meshes.some(entry=>!entry.matrix.equals(entry.mesh.matrix))) {
      const sphere=new THREE.Sphere();record.radius=0;
      for(const entry of record.meshes){sphere.copy(entry.mesh.geometry.boundingSphere).applyMatrix4(entry.mesh.matrix);record.radius=Math.max(record.radius,sphere.center.length()+sphere.radius);entry.matrix.copy(entry.mesh.matrix);}
    }
    this.watchers.set(root,record);
  }
  unwatch(root) {
    const record=this.watchers.get(root);if(!record)return;
    for(const {mesh,layerMask}of record.meshes)mesh.layers.mask=layerMask;this.watchers.delete(root);
  }
  update(camera,{nearDistance=576,viewDistance=2048,boundsAllowed=null}={}) {
    const time=this.clock();this.request(this.pinned,time);this.readyForView=true;
    if(!camera||!this.watchers.size){this.trim(time);return;}
    camera.updateWorldMatrix(true,false);this.cameraPosition.setFromMatrixPosition(camera.matrixWorld);
    this.frustum.setFromProjectionMatrix(this.projection.multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
    for(const record of this.watchers.values()) {
      const {root}=record;root.updateWorldMatrix(true,false);
      this.sphere.center.setFromMatrixPosition(root.matrixWorld);this.sphere.radius=record.radius*root.matrixWorld.getMaxScaleOnAxis();
      const distance=Math.max(0,this.sphere.center.distanceTo(this.cameraPosition)-this.sphere.radius),near=distance<=nearDistance;
      const allowed=!boundsAllowed||boundsAllowed(this.sphere.center.toArray(),this.sphere.radius);
      const inView=allowed&&root.visible&&distance<=viewDistance&&this.frustum.intersectsSphere(this.sphere);
      if(allowed&&root.visible&&(near||inView))this.request(record.resources,time);
      const ready=this.ready(record.resources);if(inView&&!ready)this.readyForView=false;
      for(const entry of record.meshes) {
        if(entry.mesh.layers.mask!==0)entry.layerMask=entry.mesh.layers.mask;
        entry.mesh.layers.mask=allowed&&ready&&distance<=viewDistance?entry.layerMask:0;
      }
    }
    this.trim(time);
  }
  trim(time=this.clock()) {
    if(time<this.nextRelease)return;this.nextRelease=Infinity;
    for(const entry of this.entries.values())if(entry.ready) {
      const expires=entry.lastWanted+this.idleSeconds;
      if(time<expires){this.nextRelease=Math.min(this.nextRelease,expires);continue;}
      entry.texture.dispose();entry.texture.source=new THREE.TextureSource(this.placeholder);entry.texture.needsUpdate=true;
      entry.ready=false;entry.promise=null;
    }
  }
  dispose() {
    if(this.disposed)return;this.disposed=true;
    for(const root of [...this.watchers.keys()])this.unwatch(root);
    for(const entry of this.entries.values()){this.release(entry.texture);entry.texture.source=new THREE.TextureSource(null);}
    this.entries.clear();this.pinned.clear();for(const job of this.queue){this.pending.delete(job.entry.promise);job.resolve();}this.queue=[];
  }
}
