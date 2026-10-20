import * as THREE from 'three';
import {createActorLighting,applyActorLighting} from './actor-lighting.js';

const IDLE_SECONDS=10;

/** Temporary actors retain their independent native lighting and draw order.
 * Stable back/front material groups produce Three's transparent double-sided
 * passes without changing the material/program version twice every frame. */
export class DebrisRenderPool {
  constructor(world,{idleSeconds=IDLE_SECONDS,opaqueUntilFade=false,fadeDepthWrite=false,fadeAlphaTest=.003}={}) {
    this.world=world;this.idleSeconds=idleSeconds;this.opaqueUntilFade=opaqueUntilFade;this.fadeDepthWrite=fadeDepthWrite;this.fadeAlphaTest=fadeAlphaTest;
    this.definitions=new Map();this.free=new Map();this.active=new Set();this.nextTrim=Infinity;this.owned=new Map();this.ownedTotal=0;
  }
  definition(prototype) {
    let definition=this.definitions.get(prototype);if(definition)return definition;
    const original=prototype.userData.mesh,sources=Array.isArray(original.material)?original.material:[original.material];
    if(!original.geometry.boundingBox)original.geometry.computeBoundingBox();
    const passes=[],slots=[];
    for(const material of sources) {
      const indices=[];
      if(material?.side===THREE.DoubleSide&&!material.forceSinglePass)for(const side of [THREE.BackSide,THREE.FrontSide]){indices.push(passes.length);passes.push({material,side});}
      else {indices.push(passes.length);passes.push({material,side:material?.side});}
      slots.push(indices);
    }
    const geometry=original.geometry.clone();geometry.clearGroups();
    for(const group of original.geometry.groups)for(const materialIndex of slots[group.materialIndex]||[])geometry.addGroup(group.start,group.count,materialIndex);
    definition={prototype,original,geometry,passes,sources};this.definitions.set(prototype,definition);return definition;
  }
  create(prototype) {
    const definition=this.definition(prototype),{original,geometry,passes,sources}=definition;
    const lighting=createActorLighting(prototype.userData.template?.data.settings||{});
    lighting.bounds=original.geometry.boundingBox.clone();
    const transparentMaterials=passes.map(({material,side})=>{
      const copy=material.clone();copy.transparent=true;copy.side=side;
      if(this.opaqueUntilFade){copy.depthWrite=this.fadeDepthWrite;copy.alphaTest=Math.min(copy.alphaTest,this.fadeAlphaTest);}
      applyActorLighting(copy,lighting);return copy;
    });
    const opaqueMaterials=this.opaqueUntilFade?sources.map(material=>{const copy=material.clone();applyActorLighting(copy,lighting);return copy;}):null;
    const materials=opaqueMaterials||transparentMaterials;
    const root=new THREE.Group(),mesh=new THREE.Mesh(geometry,materials);root.add(mesh);
    if(opaqueMaterials)mesh.geometry=original.geometry;
    mesh.position.copy(original.position);mesh.quaternion.copy(original.quaternion);mesh.scale.copy(original.scale);mesh.userData.actorLighting=lighting;
    // Fragment meshes have no animation or local movement. Physics changes
    // only their parent root; compose this authored local pose once per use.
    mesh.updateMatrix();mesh.matrixAutoUpdate=false;
    root.userData.template=prototype.userData.template;root.userData.mesh=mesh;
    this.world.actorTextures?.prepareRoot(root);
    this.owned.set(prototype,(this.owned.get(prototype)||0)+1);this.ownedTotal++;
    return {prototype,root,mesh,materials,materialOpacity:materials.map(material=>material.opacity),releasedAt:0,
      transparentMaterials,transparentOpacity:transparentMaterials.map(material=>material.opacity),
      opaqueMaterials,opaqueOpacity:opaqueMaterials?.map(material=>material.opacity),allMaterials:opaqueMaterials?[...opaqueMaterials,...transparentMaterials]:transparentMaterials};
  }
  acquire(prototype,{scale}={}) {
    const entries=this.free.get(prototype),entry=entries?.pop()||this.create(prototype),original=prototype.userData.mesh;
    entry.root.visible=true;entry.root.position.set(0,0,0);entry.root.quaternion.identity();entry.root.scale.set(1,1,1);
    entry.mesh.position.copy(original.position);entry.mesh.quaternion.copy(original.quaternion);entry.mesh.scale.copy(original.scale);
    if(Array.isArray(scale))entry.mesh.scale.fromArray(scale);else if(Number.isFinite(scale))entry.mesh.scale.setScalar(scale);
    entry.mesh.updateMatrix();
    this.setOpacity(entry,1);
    // Reuse is a fresh actor lifetime even at an identical world position.
    // A door or brush may have changed since this fragment last existed.
    this.world.actorWorldLighting?.cache?.delete(entry.mesh.userData.actorLighting);
    this.active.add(entry);this.world.actorTextures?.watch(entry.root);return entry;
  }
  setOpacity(entry,opacity) {
    const opaque=entry.opaqueMaterials&&opacity>=1,definition=this.definition(entry.prototype);
    entry.materials=opaque?entry.opaqueMaterials:entry.transparentMaterials;
    entry.materialOpacity=opaque?entry.opaqueOpacity:entry.transparentOpacity;
    entry.mesh.geometry=opaque?definition.original.geometry:definition.geometry;entry.mesh.material=entry.materials;
    for(let i=0;i<entry.materials.length;i++)entry.materials[i].opacity=entry.materialOpacity[i]*opacity;
  }
  release(entry,time=0) {
    if(!entry||!this.active.delete(entry))return;
    this.world.actorTextures?.unwatch(entry.root);
    entry.root.removeFromParent();entry.releasedAt=time;
    let entries=this.free.get(entry.prototype);if(!entries){entries=[];this.free.set(entry.prototype,entries);}entries.push(entry);
    this.nextTrim=Math.min(this.nextTrim,time+this.idleSeconds);
  }
  prewarm(requests,budget=64,time=this.world.gameplay?.time||0) {
    return this.reserve(requests,budget,Infinity,time);
  }
  reserve(requests,budget=128,creationBudget=8,time=this.world.gameplay?.time||0) {
    let allowance=Math.min(Math.max(0,Math.floor(creationBudget)),Math.max(0,Math.floor(budget)-this.ownedTotal)),created=0;
    const counts=requests.map(request=>({prototype:request.prototype,count:Math.max(0,Math.floor(request.count||0))}));
    // Include live fragments in each target. Repeated approach updates must
    // never reserve a second cohort while the first is already airborne.
    while(allowance&&counts.some(request=>(this.owned.get(request.prototype)||0)<request.count))for(const request of counts) {
      if(!allowance)break;if((this.owned.get(request.prototype)||0)>=request.count)continue;
      const entry=this.create(request.prototype);entry.releasedAt=time;let entries=this.free.get(request.prototype);
      if(!entries){entries=[];this.free.set(request.prototype,entries);}entries.push(entry);allowance--;created++;
    }
    for(const request of counts) {
      const entries=this.free.get(request.prototype);if(!entries)continue;
      const active=(this.owned.get(request.prototype)||0)-entries.length,needed=Math.min(entries.length,Math.max(0,request.count-active));
      // Waiting near an intact stack still actively reserves its cohort.
      // Refresh only those free owners needed beyond airborne fragments.
      for(let index=entries.length-needed;index<entries.length;index++)entries[index].releasedAt=time;
    }
    this.nextTrim=Math.min(this.nextTrim,time+this.idleSeconds);
    return {created,remaining:counts.reduce((sum,request)=>sum+Math.max(0,request.count-(this.owned.get(request.prototype)||0)),0),limited:this.ownedTotal>=budget};
  }
  async compile() {
    const {renderer,camera,scene}=this.world;if(!renderer?.compileAsync||!camera||!scene)return;
    const staging=new THREE.Group();
    for(const entries of this.free.values())for(const entry of entries) {
      staging.add(entry.root);
      if(entry.opaqueMaterials)staging.add(new THREE.Mesh(this.definition(entry.prototype).geometry,entry.transparentMaterials));
    }
    try {
      for(const definition of this.definitions.values())for(const {material} of definition.passes)if(material.map)renderer.initTexture?.(material.map);
      await renderer.compileAsync(staging,camera,scene);
    }
    finally {staging.clear();}
  }
  warmDraw(extraMeshes=[]) {
    const {renderer,camera,scene}=this.world;if(!renderer?.render||!camera||!scene)return;
    const staging=new THREE.Group(),visibility=scene.children.map(object=>[object,object.visible]),restore=[],drawRanges=new Map();
    for(const entries of this.free.values())for(const entry of entries) {
      staging.add(entry.root);
      if(entry.opaqueMaterials) {
        const proxy=new THREE.Mesh(this.definition(entry.prototype).geometry,entry.transparentMaterials);
        proxy.position.copy(entry.mesh.position);proxy.quaternion.copy(entry.mesh.quaternion);proxy.scale.copy(entry.mesh.scale);
        proxy.updateMatrix();proxy.matrixAutoUpdate=false;staging.add(proxy);
      }
    }
    const extraParents=extraMeshes.filter(Boolean).map(mesh=>({mesh,parent:mesh.parent,index:mesh.parent?.children.indexOf(mesh)}));
    for(const {mesh} of extraParents)staging.add(mesh);
    staging.traverse(mesh=>{
      if(!mesh.isMesh)return;
      restore.push({mesh,visible:mesh.visible,frustumCulled:mesh.frustumCulled,layers:mesh.layers.mask});
      if(!drawRanges.has(mesh.geometry))drawRanges.set(mesh.geometry,{...mesh.geometry.drawRange});
      mesh.visible=true;mesh.frustumCulled=false;mesh.layers.mask=camera.layers.mask;
      if(mesh.geometry.drawRange.count===0)mesh.geometry.setDrawRange(0,Math.min(6,mesh.geometry.index?.count||mesh.geometry.attributes.position?.count||0));
    });
    try {
      // Called only while the opaque loading screen is present. Existing
      // actors/chunks stay hidden: warm only fragment VBOs and both material
      // passes against the actual canvas, lights, MSAA and colour output.
      for(const [object] of visibility)if(object.parent===scene&&!object.isLight)object.visible=false;
      scene.add(staging);
      // Sample these reusable actor states under the loading screen too.
      // Actual spawn positions invalidate the position-dependent caches;
      // preparing bounds/uniforms here never advances physics or game time.
      this.world.syncActorLighting?.();renderer.render(scene,camera);renderer.getContext?.().flush();
    }finally {
      staging.removeFromParent();staging.clear();
      for(const state of restore){state.mesh.visible=state.visible;state.mesh.frustumCulled=state.frustumCulled;state.mesh.layers.mask=state.layers;}
      for(const [geometry,range] of drawRanges)geometry.setDrawRange(range.start,range.count);
      for(const {mesh,parent,index} of extraParents.sort((a,b)=>(a.index??0)-(b.index??0)))if(parent){parent.add(mesh);parent.children.splice(index,0,parent.children.pop());}
      for(const [object,visible] of visibility)object.visible=visible;
      // Scripts can restore/move brushes after this load-only preparation.
      // Native Sun caching is actor-dirty: even a later spawn at this same
      // origin must perform its real first visibility lookup after restore.
      for(const entries of this.free.values())for(const entry of entries)this.world.actorWorldLighting?.cache?.delete(entry.mesh.userData.actorLighting);
    }
  }
  disposeEntry(entry) {
    this.world.actorTextures?.unwatch(entry.root);
    entry.allMaterials.forEach(material=>material.dispose());this.ownedTotal--;this.owned.set(entry.prototype,this.owned.get(entry.prototype)-1);
  }
  trim(time=0) {
    if(time<this.nextTrim)return;this.nextTrim=Infinity;
    for(const [prototype,entries] of this.free) {
      const keep=[];
      // One small warm instance retains the shader programs. Discard only
      // burst overflow: a later, distant crate must not compile them again.
      for(const entry of entries)if(keep.length&&time-entry.releasedAt>=this.idleSeconds)this.disposeEntry(entry);else {
        keep.push(entry);
        if(keep.length>1)this.nextTrim=Math.min(this.nextTrim,entry.releasedAt+this.idleSeconds);
      }
      if(keep.length)this.free.set(prototype,keep);else this.free.delete(prototype);
    }
  }
  dispose() {
    for(const entry of this.active){entry.root.removeFromParent();this.disposeEntry(entry);}
    for(const entries of this.free.values())for(const entry of entries)this.disposeEntry(entry);
    for(const definition of this.definitions.values())definition.geometry.dispose();
    this.active.clear();this.free.clear();this.definitions.clear();this.owned.clear();this.ownedTotal=0;
  }
}
