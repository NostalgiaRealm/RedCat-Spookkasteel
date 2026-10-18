import * as THREE from 'three';

function texturesOf(mesh) {
  const textures=new Set();
  for(const material of Array.isArray(mesh.material)?mesh.material:[mesh.material]) {
    if(!material)continue;
    for(const value of Object.values(material))if(value?.isTexture)textures.add(value);
    for(const uniform of Object.values(material.uniforms||{}))if(uniform?.value?.isTexture)textures.add(uniform.value);
  }
  return textures;
}

function visibleInHierarchy(object) {
  for(let node=object;node;node=node.parent)if(!node.visible)return false;
  return true;
}

// Render residency never owns gameplay visibility, animation clocks, collision,
// or CPU asset data. A turned camera can immediately upload the retained data.
export class ActorRenderResidency {
  constructor({nearDistance=1024,retainDistance=1536,releaseDelay=2,scene=null,protectedRoots=[],boundsVisible=()=>true}={}) {
    this.nearDistance=nearDistance;this.retainDistance=Math.max(nearDistance,retainDistance);
    this.releaseDelay=releaseDelay;this.scene=scene;this.protectedRoots=protectedRoots;this.boundsVisible=boundsVisible;
    this.records=new Map();this.meshRecords=new Map();this.resources=new Map();
    this.frustum=new THREE.Frustum();this.projection=new THREE.Matrix4();this.cameraPosition=new THREE.Vector3();
    this.box=new THREE.Box3();
    this.stats={actors:0,residentActors:0,renderedActors:0,meshes:0,residentMeshes:0,renderedMeshes:0,geometries:0,residentGeometries:0,textures:0,residentTextures:0};
  }

  register(root) {
    const record={root,meshes:[],resources:new Set(),bounds:new THREE.Box3(),resident:false,rendered:false,lastWanted:-Infinity};
    root.traverse(mesh=>{
      if(!mesh.isMesh||!mesh.userData.actorLighting)return;
      if(!mesh.geometry.boundingBox)mesh.geometry.computeBoundingBox();
      const rest=mesh.userData.actorLighting.bounds||mesh.geometry.boundingBox;
      if(!rest||rest.isEmpty())return;
      // Rest bounds stay stable while the vertex animator changes poses.
      // Expand all axes for arms, wings and death poses before world transforms.
      const bounds=rest.clone(),size=bounds.getSize(new THREE.Vector3());
      bounds.expandByScalar(Math.max(16,size.length()*.35));
      const entry={mesh,bounds,layerMask:mesh.layers.mask};
      record.meshes.push(entry);this.meshRecords.set(mesh,record);
      record.resources.add(mesh.geometry);
      for(const texture of texturesOf(mesh))record.resources.add(texture);
    });
    for(const resource of record.resources)if(!this.resources.has(resource))this.resources.set(resource,{released:false,resident:0,owners:0,nextReleaseCheck:-Infinity});
    this.records.set(root,record);return record;
  }

  // Unmanaged scene consumers (the player, temporary debris and other effects)
  // may share an actor texture. Only scan them when a release is actually due.
  protectedResources(candidates) {
    const protectedSet=new Set(),inspect=node=>{
      if(this.meshRecords.has(node))return;
      if(node.geometry&&candidates.has(node.geometry))protectedSet.add(node.geometry);
      if(node.material)for(const texture of texturesOf(node))if(candidates.has(texture))protectedSet.add(texture);
    };
    this.scene?.traverse(inspect);
    for(const root of this.protectedRoots)root?.traverse(inspect);
    return protectedSet;
  }

  update(roots,camera,time=0) {
    if(!camera)return this.stats;
    const activeRoots=new Set(roots);
    for(const [root,record]of this.records)if(!activeRoots.has(root)) {
      for(const {mesh,layerMask}of record.meshes){mesh.layers.mask=layerMask;this.meshRecords.delete(mesh);}
      this.records.delete(root);
    }
    camera.updateWorldMatrix(true,false);camera.getWorldPosition(this.cameraPosition);
    this.projection.multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse);
    this.frustum.setFromProjectionMatrix(this.projection);
    const stats={actors:0,residentActors:0,renderedActors:0,meshes:0,residentMeshes:0,renderedMeshes:0,geometries:0,residentGeometries:0,textures:0,residentTextures:0};
    for(const state of this.resources.values()){state.resident=0;state.owners=0;}
    for(const root of activeRoots) {
      if(!root)continue;
      const record=this.records.get(root)||this.register(root);
      root.updateWorldMatrix(true,true);record.bounds.makeEmpty();
      for(const {mesh,bounds}of record.meshes)record.bounds.union(this.box.copy(bounds).applyMatrix4(mesh.matrixWorld));
      const visible=visibleInHierarchy(root)&&record.meshes.some(({mesh})=>visibleInHierarchy(mesh));
      const distance=record.bounds.isEmpty()?Infinity:record.bounds.distanceToPoint(this.cameraPosition);
      // PVS rejects actors in closed-off rooms even if their bounds lie in the
      // camera frustum. Nearby hidden actors can remain preloaded without draws.
      const rendered=visible&&this.frustum.intersectsBox(record.bounds)&&this.boundsVisible(record.bounds);
      const wanted=visible&&(distance<=this.nearDistance||rendered);
      if(wanted)record.lastWanted=time;
      const resident=wanted||(record.resident&&visible&&(distance<=this.retainDistance||time-record.lastWanted<this.releaseDelay));
      record.resident=resident;record.rendered=rendered;
      stats.actors++;stats.residentActors+=Number(resident);stats.renderedActors+=Number(rendered);
      for(const entry of record.meshes) {
        // Preserve the owner's original layer selection. Gameplay keeps full
        // control of .visible, including transparent ghosts and scripted actors.
        if(entry.mesh.layers.mask!==0)entry.layerMask=entry.mesh.layers.mask;
        entry.mesh.layers.mask=rendered?entry.layerMask:0;
        stats.meshes++;stats.residentMeshes+=Number(resident);stats.renderedMeshes+=Number(rendered&&visibleInHierarchy(entry.mesh));
      }
      for(const resource of record.resources) {
        const state=this.resources.get(resource);state.owners++;state.resident+=Number(resident);
        if(resident&&state.released){state.released=false;if(resource.isTexture)resource.needsUpdate=true;}
      }
    }
    const candidates=new Set();
    for(const [resource,state]of this.resources)if(!state.resident&&!state.released&&time>=state.nextReleaseCheck)candidates.add(resource);
    const protectedSet=candidates.size?this.protectedResources(candidates):new Set();
    for(const [resource,state]of this.resources) {
      if(candidates.has(resource)) {
        if(protectedSet.has(resource))state.nextReleaseCheck=time+1;
        else {resource.dispose();state.released=true;}
      }
      if(!state.owners){this.resources.delete(resource);continue;}
      const kind=resource.isTexture?'Textures':'Geometries';stats[kind.toLowerCase()]++;
      if(!state.released)stats['resident'+kind]++;
    }
    this.stats=stats;return stats;
  }

  isResident(object) {return (this.meshRecords.get(object)||this.records.get(object))?.resident??true;}
  isRendered(object) {return (this.meshRecords.get(object)||this.records.get(object))?.rendered??true;}

  dispose() {
    // The world owns resource lifetime. Restore layers before handing it back;
    // its ordinary disposal also includes any still-resident shared resources.
    for(const record of this.records.values())for(const {mesh,layerMask}of record.meshes)mesh.layers.mask=layerMask;
    this.records.clear();this.meshRecords.clear();this.resources.clear();
  }
}
