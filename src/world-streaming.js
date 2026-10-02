import * as THREE from 'three';
import { BspVisibility } from './bsp-visibility.js';

export const WORLD_STREAMING={cellSize:768,preloadRadius:1024,retainRadius:1536,retainSeconds:12,textureConcurrency:4};

// Keep whole authored faces together: a long wall or courtyard must not be
// clipped at an arbitrary viewing distance or at a spatial cell boundary.
export function partitionWorld(groups,spans,vertices,cellSize=WORLD_STREAMING.cellSize) {
  const chunks=[];let cursor=0;
  for(const group of groups) {
    const buckets=new Map(),end=group.start+group.count;
    while(cursor<spans.length&&spans[cursor][1]<group.start)cursor++;
    for(let i=cursor;i<spans.length&&spans[i][1]<end;i++) {
      const [face,start,count]=spans[i];
      if(start+count>end)throw new Error('World face crosses a material group');
      const min=[Infinity,Infinity,Infinity],max=[-Infinity,-Infinity,-Infinity];
      for(let v=start;v<start+count;v++)for(let axis=0;axis<3;axis++) {
        const value=vertices[v*11+axis];min[axis]=Math.min(min[axis],value);max[axis]=Math.max(max[axis],value);
      }
      // Moving brushes stay whole, and are never culled using static face PVS.
      const key=group.model?'model':min.map((v,a)=>Math.floor((v+max[a])*.5/cellSize)).join(',');
      let chunk=buckets.get(key);
      if(!chunk){chunk={group,spans:[],count:0,min:[...min],max:[...max]};buckets.set(key,chunk);}
      chunk.spans.push([face,start,count]);chunk.count+=count;
      for(let a=0;a<3;a++){chunk.min[a]=Math.min(chunk.min[a],min[a]);chunk.max[a]=Math.max(chunk.max[a],max[a]);}
    }
    if([...buckets.values()].reduce((n,c)=>n+c.count,0)!==group.count)throw new Error('Incomplete world streaming face spans');
    chunks.push(...buckets.values());
  }
  return chunks;
}

function geometryFor(chunk,source,empty=false) {
  const count=empty?0:chunk.count,vertices=new Float32Array(count*11);
  const uv=source.uv?new Float32Array(count*2):null,frames=source.frames?new Float32Array(count*8):null;
  if(!empty) {
    let offset=0;
    for(const [,start,size]of chunk.spans) {
      vertices.set(source.vertices.subarray(start*11,(start+size)*11),offset*11);
      if(uv)uv.set(source.uv.subarray(start*2,(start+size)*2),offset*2);
      if(frames)frames.set(source.frames.subarray(start*8,(start+size)*8),offset*8);
      offset+=size;
    }
  }
  const geometry=new THREE.BufferGeometry(),buffer=new THREE.InterleavedBuffer(vertices,11);
  for(const [name,size,offset]of [['position',3,0],['normal',3,3],['uv',2,6],['color',3,8]])geometry.setAttribute(name,new THREE.InterleavedBufferAttribute(buffer,size,offset));
  if(uv)geometry.setAttribute('uv1',new THREE.BufferAttribute(uv,2));
  if(frames) {
    const light=new THREE.InterleavedBuffer(frames,8);
    for(const [name,size,offset]of [['nativeLightU',3,0],['nativeLightV',3,3],['nativeLightMinUV',2,6]])geometry.setAttribute(name,new THREE.InterleavedBufferAttribute(light,size,offset));
  }
  geometry.setDrawRange(0,count);
  geometry.boundingBox=new THREE.Box3(new THREE.Vector3(...chunk.min),new THREE.Vector3(...chunk.max));
  geometry.boundingSphere=geometry.boundingBox.getBoundingSphere(new THREE.Sphere());
  return geometry;
}

// Texture references belong to resident chunks, not to the level as a whole.
// This drops decoded images as well as GPU allocations after their last user.
class StreamTextures {
  constructor(load,release){this.load=load;this.release=release;this.entries=new Map();this.queue=[];this.running=0;this.disposed=false;}
  acquire(key) {
    let entry=this.entries.get(key);
    if(!entry) {
      entry={refs:0,texture:null};this.entries.set(key,entry);
      entry.promise=new Promise((resolve,reject)=>this.queue.push({key,entry,resolve,reject}));
    }
    entry.refs++;this.pump();return entry.promise;
  }
  pump() {
    while(!this.disposed&&this.running<WORLD_STREAMING.textureConcurrency&&this.queue.length) {
      const {key,entry,resolve,reject}=this.queue.shift();
      if(!entry.refs){this.entries.delete(key);resolve(null);continue;}
      this.running++;
      Promise.resolve().then(()=>this.load(key)).then(texture=>{
        entry.texture=texture;
        if(this.disposed||!entry.refs){this.release(texture);this.entries.delete(key);}
        resolve(texture);
      },error=>{this.entries.delete(key);reject(error);}).finally(()=>{this.running--;this.pump();});
    }
  }
  drop(key) {
    const entry=this.entries.get(key);if(!entry)return;
    entry.refs--;
    if(entry.refs===0&&entry.texture){this.release(entry.texture);this.entries.delete(key);}
  }
  dispose() {
    this.disposed=true;
    for(const entry of this.entries.values())if(entry.texture)this.release(entry.texture);
    this.entries.clear();for(const job of this.queue)job.resolve(null);this.queue=[];
  }
}

export class WorldGeometryStream {
  constructor(world,{vertices,uv,frames,visibility,pvs,groups,materialFor,textureFor}) {
    this.world=world;this.source={vertices,uv,frames};this.disposed=false;this.error=null;
    this.visibility=new BspVisibility(world.level.collision,visibility,pvs);
    this.referencedFaces=new Uint8Array(visibility.faceCount);
    for(const face of visibility.leafFaces)this.referencedFaces[face]=1;
    this.frustum=new THREE.Frustum();this.preloadFrustum=new THREE.Frustum();this.projection=new THREE.Matrix4();this.boundVisibility=new WeakMap();
    this.textures=new StreamTextures(textureFor,texture=>{texture.dispose();world.resources.delete(texture);});
    this.chunks=partitionWorld(groups,visibility.faceSpans,vertices);
    this.materials=new Map();this.pending=new Set();this.ready=[];this.readyForView=false;
    this.stats={totalVertices:this.chunks.reduce((n,c)=>n+c.count,0),residentVertices:0,residentChunks:0,totalChunks:this.chunks.length,loadedTextures:0};
    for(const chunk of this.chunks) {
      const group=chunk.group;
      if(!this.materials.has(group))this.materials.set(group,{material:materialFor(group),users:0});
      chunk.material=this.materials.get(group);chunk.sky=chunk.material.material.colorWrite===false;
      chunk.empty=geometryFor(chunk,this.source,true);
      chunk.mesh=new THREE.Mesh(chunk.empty,chunk.material.material);
      chunk.mesh.layers.set(1);chunk.mesh.userData.model=group.model;
      chunk.mesh.userData.worldChunk=chunk;chunk.bounds=chunk.empty.boundingBox.clone();
      chunk.boundsMatrix=null;chunk.visibilityRevision=-1;
      if(chunk.sky){chunk.mesh.renderOrder=-100;world.skyBoundaryMeshes.push(chunk.mesh);}
      world.scene.add(chunk.mesh);
      if(!world.modelMeshes.has(group.model))world.modelMeshes.set(group.model,[]);
      world.modelMeshes.get(group.model).push(chunk.mesh);
      chunk.lastNeeded=-Infinity;chunk.resident=false;chunk.request=null;
    }
    // CPU-only ray surfaces preserve distant decal placement, independent of
    // which sections happen to be on the GPU during level initialization.
    const attribute=new THREE.InterleavedBufferAttribute(new THREE.InterleavedBuffer(vertices,11),3,0);
    this.traceMeshes=[];
    for(const [group,entry]of this.materials) {
      if(entry.material.colorWrite===false)continue;
      const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',attribute);geometry.setDrawRange(group.start,group.count);
      const chunks=this.chunks.filter(c=>c.group===group),bounds=new THREE.Box3();
      for(const c of chunks)bounds.union(c.bounds);
      geometry.boundingBox=bounds;geometry.boundingSphere=bounds.getBoundingSphere(new THREE.Sphere());
      const mesh=new THREE.Mesh(geometry,entry.material);mesh.userData.representative=chunks[0].mesh;this.traceMeshes.push(mesh);
    }
  }
  request(chunk) {
    if(chunk.resident||chunk.request)return;
    const request={};chunk.request=request;
    const texture=chunk.sky?Promise.resolve(null):this.textures.acquire(chunk.group.texture);
    const job=texture.then(map=>{
      if(this.disposed||chunk.request!==request)return;
      this.ready.push({chunk,request,map});
    }).catch(error=>{this.error=error;}).finally(()=>this.pending.delete(job));
    this.pending.add(job);
  }
  activate({chunk,request,map}) {
    if(this.disposed||chunk.request!==request)return;
    chunk.mesh.geometry=geometryFor(chunk,this.source);chunk.resident=true;
    chunk.material.users++;
    if(!chunk.sky&&chunk.material.material.map!==map){chunk.material.material.map=map;chunk.material.material.needsUpdate=true;}
    this.stats.residentVertices+=chunk.count;this.stats.residentChunks++;
  }
  unload(chunk) {
    if(!chunk.request)return;
    if(chunk.resident) {
      chunk.mesh.geometry.dispose();chunk.mesh.geometry=chunk.empty;chunk.resident=false;
      this.stats.residentVertices-=chunk.count;this.stats.residentChunks--;
      if(--chunk.material.users===0)chunk.material.material.map=null;
    }
    chunk.mesh.layers.set(1);chunk.request=null;
    if(!chunk.sky)this.textures.drop(chunk.group.texture);
  }
  update(now=performance.now()/1000) {
    if(this.disposed)return;
    const {camera}=this.world;camera.updateMatrixWorld();
    this.frustum.setFromProjectionMatrix(this.projection.multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
    // Prepare the sides of the view before a turn exposes them. The render
    // frustum stays unchanged: prefetching does not increase draw calls or
    // reveal scenery outside the authored PVS.
    this.projection.copy(camera.projectionMatrix);
    this.projection.elements[0]*=.5;this.projection.elements[5]*=.5;
    this.preloadFrustum.setFromProjectionMatrix(this.projection.multiply(camera.matrixWorldInverse));
    const eye=camera.position.toArray(),leaf=this.visibility.findLeaf(eye);
    // Never borrow the player's old room for a remote cutscene/teleport or
    // no-clip camera. Without a valid camera leaf use conservative frustum only.
    if(this.visibility.usable(leaf))this.visibility.update(eye,eye,()=>true);
    else this.visibility.active=false;
    const wanted=[];
    for(const chunk of this.chunks) {
      chunk.mesh.updateMatrixWorld();
      if(!chunk.boundsMatrix||!chunk.boundsMatrix.equals(chunk.mesh.matrixWorld)) {
        chunk.bounds.copy(chunk.empty.boundingBox).applyMatrix4(chunk.mesh.matrixWorld);
        if(!chunk.boundsMatrix)chunk.boundsMatrix=new THREE.Matrix4();
        chunk.boundsMatrix.copy(chunk.mesh.matrixWorld);
      }
      const distance=chunk.bounds.distanceToPoint(camera.position);
      if(chunk.visibilityRevision!==this.visibility.revision) {
        chunk.pvsVisible=chunk.spans.some(([face])=>!this.referencedFaces[face]||this.visibility.faces[face]);
        chunk.visibilityRevision=this.visibility.revision;
      }
      const potentiallyVisible=chunk.sky||chunk.group.model!==0||!this.visibility.active||chunk.pvsVisible;
      chunk.inView=chunk.mesh.visible&&potentiallyVisible&&this.frustum.intersectsBox(chunk.bounds);
      const near=distance<=WORLD_STREAMING.preloadRadius;
      const ahead=chunk.mesh.visible&&potentiallyVisible&&this.preloadFrustum.intersectsBox(chunk.bounds);
      if(near||ahead){chunk.lastNeeded=now;if(!chunk.request)wanted.push({chunk,distance});}
      else if(chunk.request&&distance>WORLD_STREAMING.retainRadius&&now-chunk.lastNeeded>WORLD_STREAMING.retainSeconds)this.unload(chunk);
    }
    // Visible surfaces take priority over the surrounding preload margin.
    wanted.sort((a,b)=>Number(b.chunk.inView)-Number(a.chunk.inView)||a.distance-b.distance);
    for(const {chunk}of wanted)this.request(chunk);
    let budget=12000;
    this.ready.sort((a,b)=>Number(b.chunk.inView)-Number(a.chunk.inView));
    this.ready=this.ready.filter(entry=>{
      if(entry.chunk.request!==entry.request)return false;
      if(!entry.chunk.inView&&budget<=0)return true;
      this.activate(entry);budget-=entry.chunk.count;return false;
    });
    this.readyForView=true;
    for(const chunk of this.chunks) {
      chunk.mesh.layers.set(chunk.resident&&chunk.inView?0:1);
      if(chunk.inView&&!chunk.resident)this.readyForView=false;
    }
    this.stats.loadedTextures=[...this.textures.entries.values()].filter(e=>e.texture).length;
  }
  async settle() {
    this.update();
    while(this.pending.size||this.ready.length){await Promise.all([...this.pending]);this.update();if(this.error)throw this.error;}
    if(this.error)throw this.error;
  }
  boundsVisible(box) {
    if(!this.visibility.active)return true;
    const {min,max}=box,old=this.boundVisibility.get(box),revision=this.visibility.revision;
    if(old&&old.revision===revision&&old.minX===min.x&&old.minY===min.y&&old.minZ===min.z&&old.maxX===max.x&&old.maxY===max.y&&old.maxZ===max.z)return old.visible;
    const visible=this.visibility.boundsVisible(min.toArray(),max.toArray());
    this.boundVisibility.set(box,{revision,minX:min.x,minY:min.y,minZ:min.z,maxX:max.x,maxY:max.y,maxZ:max.z,visible});return visible;
  }
  traceSurface(start,end) {
    const a=new THREE.Vector3(...start),direction=new THREE.Vector3(...end).sub(a),length=direction.length();
    const ray=new THREE.Raycaster(a,direction.normalize(),0,length),surfaces=[];
    for(const mesh of this.traceMeshes) {
      const source=mesh.userData.representative;if(!source.visible)continue;
      source.updateWorldMatrix(true,false);mesh.matrixWorld.copy(source.matrixWorld);surfaces.push(mesh);
    }
    const hit=ray.intersectObjects(surfaces,false)[0];if(!hit)return null;
    const normal=hit.face.normal.clone().applyNormalMatrix(new THREE.Matrix3().getNormalMatrix(hit.object.matrixWorld));
    if(normal.dot(direction)>0)normal.negate();
    return {end:hit.point.toArray(),normal:normal.toArray(),fraction:hit.distance/length};
  }
  dispose() {
    this.disposed=true;
    for(const chunk of this.chunks){this.unload(chunk);chunk.empty.dispose();chunk.mesh.removeFromParent();}
    for(const mesh of this.traceMeshes)mesh.geometry.dispose();
    this.textures.dispose();this.ready=[];this.source=null;
  }
}
