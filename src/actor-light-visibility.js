import { doorPortalOpen } from './bsp-visibility.js';
import { inverseModelTransform, traceActorFloorBsp } from './actor-floor-lighting.js';

const ZERO=[0,0,0],IDENTITY=[0,0,0,1];
const samePosition=(record,point)=>record&&record.x===point[0]&&record.y===point[1]&&record.z===point[2];

/** AdamSunFinder's visibility gate (0x594df0) first checks the two world
 * leaves' PVS/connected areas (0x5b9c40), then traces solid world/brush models
 * (0x554ab0, contents 0x43). Actors do not occlude authored Sun lighting.
 * This deliberately does not use a render camera's fallback/last-valid leaf. */
export class ActorLightVisibility {
  constructor(world,metadata,pvs) {
    this.world=world;this.metadata=metadata;this.pvs=pvs;
    this.revision=0;this.sources=new WeakMap();this.origins=new WeakMap();
    this.transforms=new Map();this.inverseTransforms=new Map();this.disabled=new Set();this.physical=[];
    this.open=[];this.areas=new Map();this.doors=new Map();this.gameObjects=null;
    this.stats={queries:0,leafQueries:0,leafCacheHits:0,pvsRejected:0,areaRejected:0,traces:0};
    this.beginFrame();
  }

  beginFrame() {
    const {world}=this,collider=world.collider;
    let changed=false;
    const current=collider?.modelTransforms||new Map();
    for(const [model,value] of current) {
      const values=[...(value.origin||ZERO),...(value.translation||ZERO),...(value.rotation||IDENTITY)];
      const old=this.transforms.get(model);
      if(!old||values.some((value,i)=>value!==old[i])){changed=true;this.transforms.set(model,values);this.inverseTransforms.set(model,inverseModelTransform(value));}
    }
    for(const model of this.transforms.keys())if(!current.has(model)){changed=true;this.transforms.delete(model);this.inverseTransforms.delete(model);}
    const disabled=collider?.disabledModels||new Set();
    if(disabled.size!==this.disabled.size||[...disabled].some(model=>!this.disabled.has(model))) {
      changed=true;this.disabled=new Set(disabled);
    }
    const physical=world.physicalModels||[0];
    if(physical.length!==this.physical.length||physical.some((model,i)=>model!==this.physical[i])) {
      changed=true;this.physical=[...physical];
    }
    const objects=world.gameplay?.objects;
    if(objects!==this.gameObjects) {
      this.gameObjects=objects;this.doors=new Map((objects||[]).filter(object=>object.kind==='door').map(object=>[object.modelIndex,object]));
      changed=true;
    }
    const open=(this.metadata.areaPortals||[]).map(([model])=>{
      const door=this.doors.get(model),motion=world.gameplay?.scripts?.players?.get(door?.id);
      const surfaces=world.modelMeshes?.get(model);
      // Synthetic callers without rendering metadata retain authored doors.
      const hasSurface=surfaces?surfaces.some(mesh=>mesh.material?.opacity!==0):true;
      return doorPortalOpen(door,motion,hasSurface);
    });
    if(open.length!==this.open.length||open.some((value,i)=>value!==this.open[i])) {
      this.open=open;this.areas.clear();changed=true;
    }
    if(changed)this.revision++;
  }

  findLeaf(point) {
    this.stats.leafQueries++;
    if(!point||point.length!==3||!point.every(Number.isFinite))return -1;
    const collision=this.world.level?.collision||this.world.collider?.data;
    if(!collision)return -1;
    const {models,nodes,planes}=collision;
    let node=models[0]?.root;
    // Unlike render culling, the native point lookup has no finite model-bounds
    // rejection; exterior points still resolve to their authored solid leaf.
    for(let depth=0;node>=0&&depth<1024;depth++) {
      const record=nodes[node],plane=record&&planes[record[2]];if(!plane)return -1;
      node=record[plane[0]*point[0]+plane[1]*point[1]+plane[2]*point[2]>=plane[3]?0:1];
    }
    return node<0?-node-1:-1;
  }

  leaf(point,cache,key) {
    const cached=key&&cache.get(key);
    if(samePosition(cached,point)){this.stats.leafCacheHits++;return cached.leaf;}
    const leaf=this.findLeaf(point);
    if(key)cache.set(key,{x:point[0],y:point[1],z:point[2],leaf});
    return leaf;
  }

  connected(area,target) {
    if(!this.areas.has(area)) {
      const connected=new Set(),pending=[area],{areas=[],areaPortals=[]}=this.metadata;
      while(pending.length) {
        const current=pending.pop();if(connected.has(current))continue;connected.add(current);
        const [count,first]=areas[current]||[0,0];
        for(let i=first;i<first+count;i++)if(this.open[i]&&areaPortals[i])pending.push(areaPortals[i][1]);
      }
      this.areas.set(area,connected);
    }
    return this.areas.get(area).has(target);
  }

  blocked(from,to) {
    const collision=this.world.level?.collision||this.world.collider.data;
    // Sun visibility constructs a null hull (0x5545aa). geWorld_Collision's
    // point branch 0x5c9f70 -> 0x5ca030 -> 0x5ca810 splits exactly at BSP
    // planes, with no player-collider contact skin. Its Boolean recursion is
    // the same exact split used for floor sampling; actors are excluded.
    for(const index of this.physical) {
      const model=collision.models[index];if(!model||this.disabled.has(index))continue;
      const inverse=index?this.inverseTransforms.get(index):null;
      const a=inverse?inverse(from):from,b=inverse?inverse(to):to;
      if(index&&model.min&&model.max&&model.min.some((min,i)=>min>Math.max(a[i],b[i])+1||model.max[i]<Math.min(a[i],b[i])-1))continue;
      if(traceActorFloorBsp(collision,a,b,model.root))return true;
    }
    return false;
  }

  visible(from,to,entity=null) {
    this.stats.queries++;
    const fromKey=from&&typeof from==='object'?from:null;
    const toKey=entity&&typeof entity==='object'?entity:(to&&typeof to==='object'?to:null);
    const a=this.leaf(from,this.origins,fromKey),b=this.leaf(to,this.sources,toKey);
    const source=this.metadata.leaves[a],target=this.metadata.leaves[b];
    if(!source||!target||source[0]<0||target[0]<0){this.stats.pvsRejected++;return false;}
    const offset=this.metadata.clusters[source[0]];
    // A missing PVS row explicitly succeeds before even checking areas in
    // geWorld_LeafMightSeeLeaf. A solid (-1) cluster never reaches that branch.
    if(offset!==-1) {
      if(!Number.isInteger(offset)||offset<0||!(this.pvs[offset+(target[0]>>3)]&(1<<(target[0]&7)))) {
        this.stats.pvsRejected++;return false;
      }
      if(!this.connected(source[1],target[1])){this.stats.areaRejected++;return false;}
    }
    this.stats.traces++;
    return !this.blocked(from,to);
  }
}
