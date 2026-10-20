import * as THREE from 'three';
import { BspVisibility } from './bsp-visibility.js';
import { RoomVisibility } from './room-visibility.js';

export const WORLD_STREAMING={cellSize:768,preloadRadius:576,retainRadius:1152,viewRadius:2048,retainSeconds:12,textureConcurrency:4};

// Keep the real scene ancestry for direct brush/ray queries, but let normal
// renderer matrix traversal skip the complete non-drawable branch. Streaming
// explicitly refreshes a chunk before using its transformed bounds or surface.
class ParkedWorldChunks extends THREE.Group {
  constructor(){super();this.visible=false;this.matrixAutoUpdate=false;this.name='Parked world chunks';}
  updateMatrixWorld(){super.updateWorldMatrix(false,false,true);}
  // Direct geometry queries can request their ancestors between stream
  // updates. An identity wrapper must still inherit a newly moved scene.
  updateWorldMatrix(updateParents,updateChildren){super.updateWorldMatrix(updateParents,updateChildren,true);}
}

// Keep whole authored faces together: a long wall or courtyard must not be
// clipped at an arbitrary viewing distance or at a spatial cell boundary.
export function partitionWorld(groups,spans,vertices,cellSize=WORLD_STREAMING.cellSize,faceAreas=null) {
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
      // Moving brushes stay whole; visibility uses their transformed model
      // bounds, never the static PVS of the faces at their original position.
      const areas=faceAreas?.[face]||[];
      const key=group.model?'model':areas.join(',')+':'+min.map((v,a)=>Math.floor((v+max[a])*.5/cellSize)).join(',');
      let chunk=buckets.get(key);
      if(!chunk){chunk={group,areas,spans:[],count:0,min:[...min],max:[...max]};buckets.set(key,chunk);}
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
  constructor(load,release,work=null,upload=()=>{}){this.load=load;this.release=release;this.work=work;this.upload=upload;this.entries=new Map();this.queue=[];this.running=0;this.disposed=false;}
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
      this.queue.sort((a,b)=>(b.entry.priority?.()??1)-(a.entry.priority?.()??1));
      const {key,entry,resolve,reject}=this.queue.shift();
      if(!entry.refs){if(this.entries.get(key)===entry)this.entries.delete(key);resolve(null);continue;}
      this.running++;let decoded=null;
      Promise.resolve().then(()=>this.load(key)).then(async texture=>{
        decoded=texture;
        if(this.work) {
          const prepared=await this.work.enqueue(()=>{this.upload(texture);return true;},{valid:()=>!this.disposed&&entry.refs>0,priority:()=>entry.priority?.()??1});
          if(!prepared){this.release(texture);decoded=null;if(this.entries.get(key)===entry)this.entries.delete(key);resolve(null);return;}
        }
        entry.texture=texture;
        if(this.disposed||!entry.refs){this.release(texture);if(this.entries.get(key)===entry)this.entries.delete(key);}
        decoded=null;
        resolve(texture);
      }).catch(error=>{if(decoded)this.release(decoded);if(this.entries.get(key)===entry)this.entries.delete(key);reject(error);}).finally(()=>{this.running--;this.pump();});
    }
  }
  drop(key) {
    const entry=this.entries.get(key);if(!entry)return;
    entry.refs--;
    // Remove cancelled identities synchronously. A return in the same frame
    // must acquire a fresh promise, never an upload already resolved as stale.
    if(entry.refs===0){if(entry.texture)this.release(entry.texture);this.entries.delete(key);}
  }
  dispose() {
    this.disposed=true;
    for(const entry of this.entries.values())if(entry.texture)this.release(entry.texture);
    this.entries.clear();for(const job of this.queue)job.resolve(null);this.queue=[];
  }
}

export class WorldGeometryStream {
  constructor(world,{vertices,uv,frames,visibility,pvs,groups,materialFor,textureFor,viewRadius=WORLD_STREAMING.viewRadius}) {
    this.world=world;this.source={vertices,uv,frames};this.disposed=false;this.error=null;
    this.viewRadius=Math.max(WORLD_STREAMING.preloadRadius,viewRadius);
    this.visibility=new BspVisibility(world.level.collision,visibility,pvs);
    this.rooms=new RoomVisibility(world,visibility,vertices);
    this.referencedFaces=new Uint8Array(visibility.faceCount);
    for(const face of visibility.leafFaces)this.referencedFaces[face]=1;
    this.frustum=new THREE.Frustum();this.preloadFrustum=new THREE.Frustum();this.projection=new THREE.Matrix4();this.boundVisibility=new WeakMap();
    this.preloadPosition=new THREE.Vector3();this.previousCamera=new THREE.Vector3();this.cameraStep=new THREE.Vector3();this.previousCameraAt=null;
    this.work=world.streamingWork;
    this.textures=new StreamTextures(textureFor,texture=>{texture.dispose();world.resources.delete(texture);},this.work,texture=>world.renderer?.initTexture?.(texture));
    this.chunks=partitionWorld(groups,visibility.faceSpans,vertices,WORLD_STREAMING.cellSize,this.rooms.faceAreas);
    this.materials=new Map();this.movingModels=new Map();this.pending=new Set();this.activations=new Set();this.ready=[];this.readyForView=false;
    this.parking=new ParkedWorldChunks();world.scene.add(this.parking);
    this.sceneMatrix=new THREE.Matrix4();this.sceneMatrixInitialized=false;this.matrixFrame=0;this.meshMatrixFrames=new WeakMap();
    this.stats={totalVertices:this.chunks.reduce((n,c)=>n+c.count,0),residentVertices:0,residentChunks:0,totalChunks:this.chunks.length,loadedTextures:0};
    for(const chunk of this.chunks) {
      const group=chunk.group;
      if(!this.materials.has(group))this.materials.set(group,{material:materialFor(group),users:0});
      chunk.material=this.materials.get(group);chunk.sky=chunk.material.material.colorWrite===false;
      chunk.empty=geometryFor(chunk,this.source,true);
      chunk.mesh=new THREE.Mesh(chunk.empty,chunk.material.material);
      // Model zero is authored world geometry, never a scripted brush. Its
      // local transform stays identity; leave world-matrix propagation active
      // so a changed scene ancestor still reaches it normally.
      if(group.model===0){chunk.mesh.updateMatrix();chunk.mesh.matrixAutoUpdate=false;}
      chunk.mesh.layers.set(1);chunk.mesh.userData.model=group.model;
      chunk.mesh.userData.worldChunk=chunk;chunk.bounds=chunk.empty.boundingBox.clone();
      chunk.boundsMatrix=null;chunk.visibilityRevision=-1;
      const nativeBounds=visibility.modelBounds?.[group.model];
      if(group.model&&nativeBounds&&!this.movingModels.has(group.model)) {
        const localBounds=new THREE.Box3(new THREE.Vector3(...nativeBounds.slice(0,3)),new THREE.Vector3(...nativeBounds.slice(3,6)));
        this.movingModels.set(group.model,{mesh:chunk.mesh,localBounds,bounds:localBounds.clone(),matrix:null,pvsVisible:true});
      }
      chunk.movingModel=this.movingModels.get(group.model);
      if(chunk.sky){chunk.mesh.renderOrder=-100;world.skyBoundaryMeshes.push(chunk.mesh);}
      this.parking.add(chunk.mesh);
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
    const textureEntry=this.textures.entries.get(chunk.group.texture);
    if(!chunk.sky&&textureEntry) {
      (textureEntry.chunks??=new Set()).add(chunk);
      textureEntry.priority=()=>{let priority=0;for(const c of textureEntry.chunks)if(c.request)priority=Math.max(priority,c.preloadPriority??1);return priority;};
    }
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
    this.syncFaceVisibility(chunk);
    this.world.streamingGpu?.warmGeometry(chunk.mesh.geometry);
  }
  syncFaceVisibility(chunk) {
    // Native Vis_VisWorld marks each surface (0x5d5719); the static BSP
    // renderer rejects unstamped faces at 0x5b8f0b–0x5b8f14. A spatial chunk
    // can contain faces from several rooms: one visible face must not draw
    // every other face in that chunk. Keep all vertices resident and select
    // whole faces through a reusable index buffer only when the PVS changes.
    // Moving brushes use their current whole-model visibility, and depth-only
    // sky boundaries keep the port's deliberate conservative coverage.
    if(!chunk.resident||chunk.sky||chunk.group.model!==0)return;
    const geometry=chunk.mesh.geometry,active=this.visibility.active,revision=this.visibility.revision;
    if(chunk.drawGeometry===geometry&&chunk.drawVisibilityRevision===revision&&chunk.drawVisibilityActive===active)return;
    let index=geometry.index;
    if(!index) {
      const ArrayType=chunk.count>65535?Uint32Array:Uint16Array;
      index=new THREE.BufferAttribute(new ArrayType(chunk.count),1).setUsage(THREE.DynamicDrawUsage);
      geometry.setIndex(index);
    }
    let count=0,offset=0,changed=false;
    for(const [face,,size]of chunk.spans) {
      if(!active||!this.referencedFaces[face]||this.visibility.faces[face])for(let i=offset;i<offset+size;i++) {
        if(index.array[count]!==i){index.array[count]=i;changed=true;}count++;
      }
      offset+=size;
    }
    // Several camera/visibility updates can precede a render during loading.
    // Keep pending dirty ranges until WebGL uploads them, including a prefix
    // that a temporary shorter draw would otherwise leave stale on the GPU.
    if(changed){if(count)index.addUpdateRange(0,count);index.needsUpdate=true;}
    geometry.setDrawRange(0,count);
    chunk.drawGeometry=geometry;chunk.drawVisibilityRevision=revision;chunk.drawVisibilityActive=active;
  }
  unload(chunk) {
    if(!chunk.request)return;
    if(chunk.resident) {
      chunk.mesh.geometry.dispose();chunk.mesh.geometry=chunk.empty;chunk.resident=false;
      chunk.drawGeometry=null;chunk.drawVisibilityRevision=-1;chunk.drawVisibilityActive=null;
      this.stats.residentVertices-=chunk.count;this.stats.residentChunks--;
      if(--chunk.material.users===0)chunk.material.material.map=null;
    }
    chunk.mesh.layers.set(1);this.attachChunk(chunk,false);chunk.request=null;
    if(!chunk.sky){this.textures.entries.get(chunk.group.texture)?.chunks?.delete(chunk);this.textures.drop(chunk.group.texture);}
  }
  update(now=performance.now()/1000) {
    if(this.disposed)return;
    const {camera}=this.world;camera.updateMatrixWorld();
    // Prepare a short way along smooth camera travel, before a doorway/turn
    // exposes that artwork. The same lead covers the outer view boundary:
    // preparing only when a chunk is already inside it costs a held frame
    // even with decoded maps. Drawing and room admission remain unchanged.
    // Teleports and long frame gaps never project a huge preload.
    this.preloadPosition.copy(camera.position);
    const elapsed=this.previousCameraAt===null?0:now-this.previousCameraAt;
    this.cameraStep.subVectors(camera.position,this.previousCamera);const step=this.cameraStep.length();
    if(elapsed>0&&elapsed<.2&&step>0&&step<128)this.preloadPosition.addScaledVector(this.cameraStep,Math.min(.4/Math.max(elapsed,1/240),192/step));
    this.previousCamera.copy(camera.position);this.previousCameraAt=now;
    const parentChanged=this.refreshSceneMatrices();this.matrixFrame++;
    this.frustum.setFromProjectionMatrix(this.projection.multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
    // Prepare the sides of the view before a turn exposes them. The render
    // frustum stays unchanged: prefetching does not increase draw calls or
    // reveal scenery outside the authored PVS.
    this.projection.copy(camera.projectionMatrix);
    this.projection.elements[0]*=.5;this.projection.elements[5]*=.5;
    this.preloadFrustum.setFromProjectionMatrix(this.projection.multiply(camera.matrixWorldInverse));
    this.rooms.update(camera,{now});
    const eye=this.rooms.visibilityPosition||camera.position.toArray(),leaf=this.visibility.findLeaf(eye);
    // Authored cameras keep their own PVS. Ordinary exterior inspections may
    // use the selector's current/last valid player room. Without a valid PVS
    // origin preserve conservative frustum drawing inside the room mask.
    if(this.visibility.usable(leaf))this.visibility.update(eye,eye,()=>true);
    else this.visibility.active=false;
    // Native ModelVisible tests the whole root-node box against visible BSP
    // leaves. Bypassing this lets distant gates show through transparent sky
    // seams. Share one conservative result across every material of a model;
    // boundsVisible caches it until the pose or camera PVS actually changes.
    for(const model of this.movingModels.values()) {
      this.refreshChunkMatrix(model.mesh,parentChanged);
      if(!model.matrix||!model.matrix.equals(model.mesh.matrixWorld)) {
        model.bounds.copy(model.localBounds).applyMatrix4(model.mesh.matrixWorld).expandByScalar(1);
        if(!model.matrix)model.matrix=new THREE.Matrix4();
        model.matrix.copy(model.mesh.matrixWorld);
      }
      model.pvsVisible=this.boundsVisible(model.bounds);
    }
    const wanted=[],departed=[];
    for(const chunk of this.chunks) {
      this.refreshChunkMatrix(chunk.mesh,parentChanged);
      if(!chunk.boundsMatrix||!chunk.boundsMatrix.equals(chunk.mesh.matrixWorld)) {
        chunk.bounds.copy(chunk.empty.boundingBox).applyMatrix4(chunk.mesh.matrixWorld);
        if(!chunk.boundsMatrix)chunk.boundsMatrix=new THREE.Matrix4();
        chunk.boundsMatrix.copy(chunk.mesh.matrixWorld);
      }
      const distance=chunk.bounds.distanceToPoint(camera.position);
      const prepareDistance=Math.min(distance,chunk.bounds.distanceToPoint(this.preloadPosition));
      const roomAllowed=chunk.group.model===0?this.rooms.areasAllowed(chunk.areas):this.roomBoundsAllowed(chunk.bounds);
      if(chunk.visibilityRevision!==this.visibility.revision) {
        chunk.pvsVisible=chunk.spans.some(([face])=>!this.referencedFaces[face]||this.visibility.faces[face]);
        chunk.visibilityRevision=this.visibility.revision;
      }
      const potentiallyVisible=chunk.sky||!this.visibility.active||
        (chunk.group.model!==0?(chunk.movingModel?.pvsVisible??true):chunk.pvsVisible);
      // The widened view used to request any visible section, however far
      // away. Keep a camera-local neighborhood instead, measuring the nearest
      // face bounds so a long wall or nearby open courtyard stays whole.
      const inRange=distance<=this.viewRadius;
      const inPrepareRange=prepareDistance<=this.viewRadius;
      chunk.inView=roomAllowed&&inRange&&chunk.mesh.visible&&potentiallyVisible&&this.frustum.intersectsBox(chunk.bounds);
      chunk.requiredForView=chunk.inView&&(chunk.group.model===0?this.rooms.areasRequired(chunk.areas):this.roomBoundsRequired(chunk.bounds));
      const near=roomAllowed&&inPrepareRange&&prepareDistance<=WORLD_STREAMING.preloadRadius;
      // The present camera leaf's PVS is a drawing test, not a prediction of
      // what a nearby leaf will reveal. Room admission still bounds prefetch.
      const ahead=roomAllowed&&inPrepareRange&&chunk.mesh.visible&&this.preloadFrustum.intersectsBox(chunk.bounds);
      // Finish admitted open-connected rooms in the background, including
      // surfaces behind the camera/current PVS. A briefly lost portal view
      // keeps this preparation through a turn without adding any draws.
      // Closed neighbors still use only the near/ahead preload margin.
      const preparedRoom=inPrepareRange&&chunk.mesh.visible&&
        (chunk.group.model===0?this.rooms.areasPreload(chunk.areas):this.roomBoundsPreload(chunk.bounds));
      chunk.preloadPriority=chunk.requiredForView?2:near||ahead?1:0;
      if(!roomAllowed&&!preparedRoom){if(chunk.request)departed.push(chunk);continue;}
      if(near||ahead||preparedRoom){chunk.lastNeeded=now;if(!chunk.request)wanted.push({chunk,distance});}
      else if(chunk.request&&distance>WORLD_STREAMING.retainRadius&&now-chunk.lastNeeded>WORLD_STREAMING.retainSeconds)departed.push(chunk);
    }
    // Visible surfaces take priority over the surrounding preload margin.
    wanted.sort((a,b)=>b.chunk.preloadPriority-a.chunk.preloadPriority||a.distance-b.distance);
    for(const {chunk}of wanted)this.request(chunk);
    // A newly entered room may need the same pending/decoded map as the one
    // being left. Transfer references before dropping old owners, avoiding
    // an unnecessary last-user disposal and duplicate fetch/upload.
    for(const chunk of departed)this.unload(chunk);
    let budget=12000;
    this.ready.sort((a,b)=>Number(b.chunk.requiredForView)-Number(a.chunk.requiredForView));
    this.ready=this.ready.filter(entry=>{
      if(entry.chunk.request!==entry.request)return false;
      if(this.work) {
        const activation=this.work.enqueue(()=>this.activate(entry),{valid:()=>!this.disposed&&entry.chunk.request===entry.request,
          priority:()=>entry.chunk.preloadPriority??1});
        this.activations.add(activation);
        activation.catch(error=>{this.error??=error;}).finally(()=>this.activations.delete(activation));
        return false;
      }
      if(!entry.chunk.inView&&budget<=0)return true;
      this.activate(entry);budget-=entry.chunk.count;return false;
    });
    this.readyForView=true;
    for(const chunk of this.chunks) {
      const drawable=chunk.resident&&chunk.inView;
      if(drawable)this.syncFaceVisibility(chunk);
      chunk.mesh.layers.set(drawable?0:1);this.attachChunk(chunk,drawable);
      if(chunk.requiredForView&&!chunk.resident)this.readyForView=false;
    }
    this.stats.loadedTextures=[...this.textures.entries.values()].filter(e=>e.texture).length;
  }
  refreshSceneMatrices() {
    // A scene can itself have a transformed parent. The forced world product
    // is one operation here, rather than a multiplication for every static
    // chunk on every frame. Parking has an identity local transform.
    this.world.scene.updateWorldMatrix(true,false,true);this.parking.updateWorldMatrix(false,false,true);
    const changed=!this.sceneMatrixInitialized||!this.sceneMatrix.equals(this.world.scene.matrixWorld);
    if(changed){this.sceneMatrix.copy(this.world.scene.matrixWorld);this.sceneMatrixInitialized=true;}
    return changed;
  }
  refreshChunkMatrix(mesh,parentChanged) {
    if(this.meshMatrixFrames.get(mesh)===this.matrixFrame)return;
    mesh.updateMatrixWorld(parentChanged);this.meshMatrixFrames.set(mesh,this.matrixFrame);
  }
  attachChunk(chunk,drawable) {
    const parent=drawable?this.world.scene:this.parking;
    if(chunk.mesh.parent!==parent){parent.add(chunk.mesh);chunk.mesh.matrixWorldNeedsUpdate=true;}
  }
  async settle() {
    this.update();
    while(this.pending.size||this.ready.length||this.activations.size) {
      const pending=Promise.all([...this.pending,...this.activations]);
      if(this.work)await this.work.waitFor(pending);else await pending;
      this.update();
      if(this.error)throw this.error;
    }
    if(this.error)throw this.error;
  }
  boundsVisible(box) {
    if(!this.roomBoundsAllowed(box))return false;
    if(!this.visibility.active)return true;
    const {min,max}=box,old=this.boundVisibility.get(box),revision=this.visibility.revision;
    if(old&&old.revision===revision&&old.minX===min.x&&old.minY===min.y&&old.minZ===min.z&&old.maxX===max.x&&old.maxY===max.y&&old.maxZ===max.z)return old.visible;
    const visible=this.visibility.boundsVisible(min.toArray(),max.toArray());
    this.boundVisibility.set(box,{revision,minX:min.x,minY:min.y,minZ:min.z,maxX:max.x,maxY:max.y,maxZ:max.z,visible});return visible;
  }
  roomBoundsAllowed(box) {
    if(!this.rooms.active)return true;
    const {min,max}=box,old=this.roomBoundVisibility?.get(box),revision=this.rooms.revision;
    if(old&&old.revision===revision&&old.minX===min.x&&old.minY===min.y&&old.minZ===min.z&&old.maxX===max.x&&old.maxY===max.y&&old.maxZ===max.z)return old.allowed;
    const allowed=this.rooms.boundsAllowed(min.toArray(),max.toArray());
    (this.roomBoundVisibility??=new WeakMap()).set(box,{revision,minX:min.x,minY:min.y,minZ:min.z,maxX:max.x,maxY:max.y,maxZ:max.z,allowed});return allowed;
  }
  roomBoundsRequired(box) {
    if(!this.rooms.active)return true;
    const {min,max}=box,old=this.roomViewVisibility?.get(box),revision=this.rooms.viewRevision;
    if(old&&old.revision===revision&&old.minX===min.x&&old.minY===min.y&&old.minZ===min.z&&old.maxX===max.x&&old.maxY===max.y&&old.maxZ===max.z)return old.required;
    const required=this.rooms.boundsRequired(min.toArray(),max.toArray());
    (this.roomViewVisibility??=new WeakMap()).set(box,{revision,minX:min.x,minY:min.y,minZ:min.z,maxX:max.x,maxY:max.y,maxZ:max.z,required});return required;
  }
  roomBoundsCurrent(box) {
    if(!this.rooms.active)return false;
    const {min,max}=box,old=this.roomCurrentVisibility?.get(box),area=this.rooms.area;
    if(old&&old.area===area&&old.minX===min.x&&old.minY===min.y&&old.minZ===min.z&&old.maxX===max.x&&old.maxY===max.y&&old.maxZ===max.z)return old.current;
    const current=this.rooms.boundsCurrent(min.toArray(),max.toArray());
    (this.roomCurrentVisibility??=new WeakMap()).set(box,{area,minX:min.x,minY:min.y,minZ:min.z,maxX:max.x,maxY:max.y,maxZ:max.z,current});return current;
  }
  roomBoundsPreload(box) {
    if(!this.rooms.active)return false;
    const {min,max}=box,old=this.roomPreloadVisibility?.get(box),revision=this.rooms.preloadRevision;
    if(old&&old.revision===revision&&old.minX===min.x&&old.minY===min.y&&old.minZ===min.z&&old.maxX===max.x&&old.maxY===max.y&&old.maxZ===max.z)return old.preload;
    const preload=this.rooms.boundsPreload(min.toArray(),max.toArray());
    (this.roomPreloadVisibility??=new WeakMap()).set(box,{revision,minX:min.x,minY:min.y,minZ:min.z,maxX:max.x,maxY:max.y,maxZ:max.z,preload});return preload;
  }
  traceSurface(start,end) {
    this.refreshSceneMatrices();
    const a=new THREE.Vector3(...start),direction=new THREE.Vector3(...end).sub(a),length=direction.length();
    const ray=new THREE.Raycaster(a,direction.normalize(),0,length),surfaces=[];
    for(const mesh of this.traceMeshes) {
      const source=mesh.userData.representative;if(!source.visible)continue;
      source.updateWorldMatrix(true,false,true);mesh.matrixWorld.copy(source.matrixWorld);surfaces.push(mesh);
    }
    const hit=ray.intersectObjects(surfaces,false)[0];if(!hit)return null;
    const normal=hit.face.normal.clone().applyNormalMatrix(new THREE.Matrix3().getNormalMatrix(hit.object.matrixWorld));
    if(normal.dot(direction)>0)normal.negate();
    return {end:hit.point.toArray(),normal:normal.toArray(),fraction:hit.distance/length};
  }
  dispose() {
    this.disposed=true;
    for(const chunk of this.chunks){this.unload(chunk);chunk.empty.dispose();chunk.mesh.removeFromParent();}
    this.parking.removeFromParent();
    for(const mesh of this.traceMeshes)mesh.geometry.dispose();
    this.textures.dispose();this.ready=[];this.source=null;
  }
}
