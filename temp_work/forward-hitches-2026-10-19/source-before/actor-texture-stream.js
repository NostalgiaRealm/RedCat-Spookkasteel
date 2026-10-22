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
  constructor({load,track=texture=>texture,release=texture=>texture.dispose(),configure=()=>{},concurrency=4,placeholder,idleSeconds=12,clock=()=>performance.now()/1000,work=null,upload=()=>{}}={}) {
    this.load=load;this.track=track;this.release=release;this.configure=configure;this.concurrency=concurrency;this.work=work;this.upload=upload;this.stagedCancels=new Set();
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
    entry={url,texture,ready:false,decoded:false,promise:null,lastWanted:-Infinity,priority:1,priorityAt:-Infinity};
    // Actor residency can release GPU storage before the decoded-image grace
    // expires. Re-entry must queue its upload again instead of trusting a stale
    // decoded-ready flag and stalling on the first visible draw.
    entry.onDispose=()=>{entry.ready=false;};texture.addEventListener('dispose',entry.onDispose);
    this.entries.set(url,entry);this.byTexture.set(texture,entry);return texture;
  }
  request(resources,time=this.clock(),priority=1) {
    let ready=true;
    for(const texture of resources) {
      const entry=this.byTexture.get(texture);if(!entry)continue;entry.lastWanted=time;
      // Several nearby actors can share a map. Keep the highest recent owner
      // priority, but allow last frame's visible map to become background work.
      if(time-entry.priorityAt>=.1){entry.priority=priority;entry.priorityAt=time;}else entry.priority=Math.max(entry.priority,priority);
      if(entry.ready)continue;ready=false;
      if(!entry.promise&&!this.disposed&&!entry.error) {
        entry.promise=new Promise(resolve=>this.queue.push({entry,resolve}));this.pending.add(entry.promise);this.pump();
      }
    }
    return ready;
  }
  ready(resources) {for(const texture of resources){const entry=this.byTexture.get(texture);if(entry&&!entry.ready)return false;}return true;}
  requestRoot(root){return this.request(rootTextures(root));}
  pinRoot(root){for(const texture of rootTextures(root))this.pinned.add(texture);this.request(this.pinned,undefined,3);}
  async loadRoot(root){this.requestRoot(root);await this.settle();}
  pump() {
    while(!this.disposed&&this.running<this.concurrency&&this.queue.length) {
      this.queue.sort((a,b)=>b.entry.priority-a.entry.priority);
      const {entry,resolve}=this.queue.shift(),pending=entry.promise;this.running++;
      const wanted=()=>!this.disposed&&(this.pinned.has(entry.texture)||this.clock()-entry.lastWanted<this.idleSeconds);
      Promise.resolve().then(async()=>{
        if(!wanted())return;
        const texture=entry.decoded?null:await this.load(entry.url);
        try {
          if(!wanted())return;
          const prepare=()=>{
            if(!wanted())return null;
            // The real image upload belongs to the same frame budget as BSP
            // buffers. Do not report ready and expose a first-draw upload spike.
            // Map identity remains stable for every cloned/shared material.
            if(texture){entry.texture.dispose();entry.texture.copy(texture);this.configure(entry.texture);entry.decoded=true;}
            entry.texture.needsUpdate=true;this.upload(entry.texture);entry.ready=true;
            this.nextRelease=Math.min(this.nextRelease,entry.lastWanted+this.idleSeconds);return true;
          };
          if(this.work) {
            let cancel;const cancelled=new Promise(resolve=>cancel=()=>resolve(null));this.stagedCancels.add(cancel);
            try{await Promise.race([this.work.enqueue(prepare,{valid:wanted,priority:()=>this.pinned.has(entry.texture)?3:entry.priority}),cancelled]);}
            finally{this.stagedCancels.delete(cancel);}
          }else prepare();
        }finally{if(texture)this.release(texture);}
      }).catch(error=>{if(!this.disposed){entry.error=error;this.error??=error;}}).finally(()=>{
        this.running--;this.pending.delete(pending);if(entry.promise===pending)entry.promise=null;resolve();this.pump();
      });
    }
  }
  async settle() {
    while(this.pending.size&&!this.disposed){const pending=Promise.all([...this.pending]);if(this.work)await this.work.waitFor(pending);else await pending;}
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
  update(camera,{nearDistance=576,viewDistance=2048,boundsAllowed=null,boundsRequired=null}={}) {
    const time=this.clock();this.request(this.pinned,time,3);this.readyForView=true;
    if(!camera||!this.watchers.size){this.trim(time);return;}
    camera.updateWorldMatrix(true,false);this.cameraPosition.setFromMatrixPosition(camera.matrixWorld);
    this.frustum.setFromProjectionMatrix(this.projection.multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
    for(const record of this.watchers.values()) {
      const {root}=record;root.updateWorldMatrix(true,false);
      this.sphere.center.setFromMatrixPosition(root.matrixWorld);this.sphere.radius=record.radius*root.matrixWorld.getMaxScaleOnAxis();
      const distance=Math.max(0,this.sphere.center.distanceTo(this.cameraPosition)-this.sphere.radius),near=distance<=nearDistance;
      const allowed=!boundsAllowed||boundsAllowed(this.sphere.center.toArray(),this.sphere.radius);
      const inView=allowed&&root.visible&&distance<=viewDistance&&this.frustum.intersectsSphere(this.sphere);
      const requiredForView=inView&&(!boundsRequired||boundsRequired(this.sphere.center.toArray(),this.sphere.radius));
      if(allowed&&root.visible&&(near||inView))this.request(record.resources,time,requiredForView?2:1);
      const ready=this.ready(record.resources);if(requiredForView&&!ready)this.readyForView=false;
      for(const entry of record.meshes) {
        if(entry.mesh.layers.mask!==0)entry.layerMask=entry.mesh.layers.mask;
        entry.mesh.layers.mask=allowed&&ready&&distance<=viewDistance?entry.layerMask:0;
      }
    }
    this.trim(time);
  }
  trim(time=this.clock()) {
    if(time<this.nextRelease)return;this.nextRelease=Infinity;
    for(const entry of this.entries.values())if(entry.decoded) {
      const expires=entry.lastWanted+this.idleSeconds;
      if(time<expires){this.nextRelease=Math.min(this.nextRelease,expires);continue;}
      entry.texture.dispose();entry.texture.source=new THREE.TextureSource(this.placeholder);entry.texture.needsUpdate=true;
      entry.ready=false;entry.decoded=false;
    }
  }
  dispose() {
    if(this.disposed)return;this.disposed=true;for(const cancel of this.stagedCancels)cancel();this.stagedCancels.clear();
    for(const root of [...this.watchers.keys()])this.unwatch(root);
    for(const entry of this.entries.values()){entry.texture.removeEventListener('dispose',entry.onDispose);this.release(entry.texture);entry.texture.source=new THREE.TextureSource(null);entry.ready=false;entry.decoded=false;}
    this.entries.clear();this.pinned.clear();for(const job of this.queue){this.pending.delete(job.entry.promise);job.resolve();}this.queue=[];
  }
}
