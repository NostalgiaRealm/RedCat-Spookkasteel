import * as THREE from 'three';
import {BspVisibility,doorPortalOpen} from './bsp-visibility.js';

const FULL=[-1,-1,1,1];
const overlaps=(a,b)=>[Math.max(a[0],b[0]),Math.max(a[1],b[1]),Math.min(a[2],b[2]),Math.min(a[3],b[3])];

// Graphics ownership follows authored BSP areas, not the distance through a
// wall or floor. Gameplay objects, collision and script clocks are never owned
// by this selector. Adjacent rooms stay ready before a door starts moving.
export class RoomVisibility {
  constructor(world,metadata,vertices) {
    this.world=world;this.metadata=metadata;
    this.bsp=new BspVisibility(world.level.collision,metadata,new Uint8Array());
    const sets=Array.from({length:metadata.faceCount},()=>new Set());
    const model=world.level.collision.models[0],firstLeaf=model.firstLeaf??0,lastLeaf=firstLeaf+(model.numLeaves??metadata.leaves.length);
    for(const [cluster,area,first,count]of metadata.leaves.slice(firstLeaf,lastLeaf))if(cluster>=0&&area>=0)
      for(let i=first;i<first+count;i++)sets[metadata.leafFaces[i]]?.add(area);
    // Faces absent from leaf references are uncommon, but not global scenery.
    // Probe both sides of their authored surface before falling back safely.
    if(vertices)for(const [face,start,count]of metadata.faceSpans)if(!sets[face].size) {
      const point=[0,0,0];for(let i=start;i<start+count;i++)for(let a=0;a<3;a++)point[a]+=vertices[i*11+a]/count;
      for(const sign of [1,-1]) {
        const probe=point.map((v,a)=>v+sign*vertices[start*11+3+a]*2),area=this.areaAt(probe);
        if(area>=0)sets[face].add(area);
      }
    }
    this.faceAreas=sets.map(set=>[...set].sort((a,b)=>a-b));
    this.allowed=new Uint8Array(metadata.areas?.length||0);
    this.active=false;this.area=-1;this.lastArea=-1;this.lastPlayerArea=-1;this.revision=0;
    this.doors=new Map();this.objects=null;this.projection=new THREE.Matrix4();this.corner=new THREE.Vector4();
    this.edges=(metadata.areas||[]).map(([count,first])=>metadata.areaPortals.slice(first,first+count).map(([model,area])=>({model,area})));
    this.portalBounds=new Map();
    for(const [model]of metadata.areaPortals||[]) {
      const bounds=world.level.collision.models[model];
      if(bounds?.min&&bounds?.max)this.portalBounds.set(model,{min:bounds.min,max:bounds.max});
    }
    this.queryMin=[0,0,0];this.queryMax=[0,0,0];this.grid=new Map();this.stats={area:-1,allowedAreas:[],active:false};
  }
  areaAt(point) {
    const leaf=this.bsp.findLeaf(point),entry=this.metadata.leaves[leaf];
    return entry&&entry[0]>=0&&entry[1]>=0&&entry[1]<this.allowedLength()?entry[1]:-1;
  }
  allowedLength(){return this.metadata.areas?.length||0;}
  portalOpen(model) {
    const door=this.doors.get(model),motion=this.world.gameplay?.scripts?.players?.get(door?.id),meshes=this.world.modelMeshes?.get(model);
    return doorPortalOpen(door,motion,meshes?meshes.some(mesh=>mesh.material?.opacity!==0):true);
  }
  portalRect(model) {
    const bounds=this.portalBounds.get(model);if(!bounds)return FULL;
    let left=Infinity,bottom=Infinity,right=-Infinity,top=-Infinity,behind=false,front=false;
    for(let i=0;i<8;i++) {
      const p=this.corner.set(i&1?bounds.max[0]:bounds.min[0],i&2?bounds.max[1]:bounds.min[1],i&4?bounds.max[2]:bounds.min[2],1).applyMatrix4(this.projection);
      if(p.w<=.001){behind=true;continue;}front=true;
      left=Math.min(left,p.x/p.w);right=Math.max(right,p.x/p.w);bottom=Math.min(bottom,p.y/p.w);top=Math.max(top,p.y/p.w);
    }
    if(!front)return null;if(behind)return FULL;
    // Conservative aperture margin, including thin edge-on model bounds.
    const rect=overlaps(FULL,[left-.02,bottom-.02,right+.02,top+.02]);
    return rect[0]<=rect[2]&&rect[1]<=rect[3]?rect:null;
  }
  update(camera,{playerOnly=false}={}) {
    const objects=this.world.gameplay?.objects;
    if(objects!==this.objects){this.objects=objects;this.doors=new Map((objects||[]).filter(o=>o.kind==='door').map(o=>[o.modelIndex,o]));}
    const player=this.world.player,position=player?.position,eye=camera.position.toArray();
    const body=position?[position[0],position[1]+32,position[2]]:null;
    const cameraArea=this.areaAt(eye),playerArea=body?this.areaAt(body):-1,scripted=this.world.gameplay?.scripts?.camera;
    if(playerArea>=0){this.lastPlayerArea=playerArea;this.lastPlayerOrigin=body;}
    // Ordinary third-person cameras stay about 145 units from RedCat. A
    // remote authored view or a camera still travelling after a teleport
    // must keep the scenery it is actually showing until it reaches him.
    const remote=!playerOnly&&(scripted&&scripted.mode!==0&&scripted.mode!==1||
      body&&!player.noClip&&Math.hypot(eye[0]-body[0],eye[1]-body[1],eye[2]-body[2])>512);
    // A scripted overview can sit inside solid/outside BSP space. Preserve
    // its established distance/frustum fallback instead of showing a blank
    // remote scene using RedCat's unrelated room. Ordinary no-clip exterior
    // views keep the last valid room until another real room is entered.
    const unknownRemote=remote&&cameraArea<0;
    let area=remote&&cameraArea>=0?cameraArea:playerArea>=0?playerArea:cameraArea;
    if(!remote&&body&&playerArea<0&&this.lastPlayerArea>=0){area=this.lastPlayerArea;this.lastOrigin=this.lastPlayerOrigin;}
    if(unknownRemote)area=-1;else if(area<0)area=this.lastArea;
    const active=area>=0&&this.allowed.length>0,next=new Uint8Array(this.allowed.length);
    if(active) {
      if(area===playerArea)this.lastOrigin=body;
      else if(area===cameraArea)this.lastOrigin=eye;
      this.lastArea=area;next[area]=1;
      for(const edge of this.edges[area]||[])next[edge.area]=1;
      // More distant rooms may remain visibly connected through several open
      // doors. Intersect their projected apertures, rather than flooding every
      // open room or hiding an unobstructed view after one graph edge.
      if(cameraArea>=0) {
        this.projection.multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse);
        const coverage=new Map([[area,FULL]]),pending=[{area,rect:FULL}],rects=new Map(),open=new Map();
        while(pending.length) {
          const current=pending.shift();
          for(const edge of this.edges[current.area]||[]) {
            if(!open.has(edge.model))open.set(edge.model,this.portalOpen(edge.model));
            if(!open.get(edge.model))continue;
            if(!rects.has(edge.model))rects.set(edge.model,this.portalRect(edge.model));
            const aperture=rects.get(edge.model);if(!aperture)continue;
            const rect=overlaps(current.rect,aperture);if(rect[0]>rect[2]||rect[1]>rect[3])continue;
            next[edge.area]=1;
            const old=coverage.get(edge.area);
            if(old&&old[0]<=rect[0]&&old[1]<=rect[1]&&old[2]>=rect[2]&&old[3]>=rect[3])continue;
            const union=old?[Math.min(old[0],rect[0]),Math.min(old[1],rect[1]),Math.max(old[2],rect[2]),Math.max(old[3],rect[3])]:rect;
            coverage.set(edge.area,union);pending.push({area:edge.area,rect:union});
          }
        }
      }
    }
    if(active!==this.active||next.some((v,i)=>v!==this.allowed[i])){this.revision++;this.grid.clear();}
    this.area=area;this.active=active;this.allowed=next;
    // During an ordinary/no-clip inspection the camera can enter unrelated
    // rooms or solid space. Keep the selected player's room PVS in that case;
    // its real geometry must not disappear just because a ceiling lies
    // between the inspection camera and the room. Authored views stay camera-led.
    this.visibilityPosition=active&&!remote&&!next[cameraArea]?this.lastOrigin:null;
    this.stats={area,active,allowedAreas:[...next.keys()].filter(i=>next[i])};
  }
  areasAllowed(areas){return !this.active||!areas?.length||areas.some(area=>this.allowed[area]);}
  originAllowed(position) {
    if(!this.active)return true;
    const area=this.areaAt(position);
    return area>=0?Boolean(this.allowed[area]):this.sphereAllowed(position,16);
  }
  boundsAllowed(min,max) {
    if(!this.active)return true;
    const {nodes,planes,models}=this.world.level.collision;let found=false;
    const visit=id=>{
      if(id<0) {
        const leaf=this.metadata.leaves[-id-1];if(!leaf||leaf[0]<0)return false;
        found=true;return Boolean(this.allowed[leaf[1]]);
      }
      const node=nodes[id],p=planes[node[2]];let near=-p[3],far=-p[3];
      for(let i=0;i<3;i++){near+=p[i]*(p[i]>=0?min[i]:max[i]);far+=p[i]*(p[i]>=0?max[i]:min[i]);}
      return far>=0&&visit(node[0])||near<0&&visit(node[1]);
    };
    // A fully buried decorative fixture must not vanish because its origin
    // lies in solid space. Missing ownership remains conservative.
    return visit(models[0].root)||!found;
  }
  sphereAllowed(center,radius) {
    if(!this.active)return true;
    // Quantized enclosing boxes share room classifications across particle
    // clouds. This avoids a new BSP trace per particle per display frame.
    return this.gridAllowed(Math.floor((center[0]-radius)/64),Math.floor((center[1]-radius)/64),Math.floor((center[2]-radius)/64),
      Math.floor((center[0]+radius)/64),Math.floor((center[1]+radius)/64),Math.floor((center[2]+radius)/64));
  }
  boxAllowed(min,max) {
    if(!this.active)return true;
    return this.gridAllowed(Math.floor(min.x/64),Math.floor(min.y/64),Math.floor(min.z/64),Math.floor(max.x/64),Math.floor(max.y/64),Math.floor(max.z/64));
  }
  gridAllowed(x,y,z,u,v,w) {
    // Numeric keys avoid transient arrays/strings for every smoke particle.
    // Verify all six coordinates: hash collisions may cost a query, never
    // select the wrong room. Only cache misses allocate a retained record.
    let key=Math.imul(2166136261^x,16777619);key=Math.imul(key^y,16777619);key=Math.imul(key^z,16777619);
    key=Math.imul(key^u,16777619);key=Math.imul(key^v,16777619);key=Math.imul(key^w,16777619);
    const old=this.grid.get(key);if(old&&old.x===x&&old.y===y&&old.z===z&&old.u===u&&old.v===v&&old.w===w)return old.allowed;
    const min=this.queryMin,max=this.queryMax;
    min[0]=x*64;min[1]=y*64;min[2]=z*64;max[0]=(u+1)*64;max[1]=(v+1)*64;max[2]=(w+1)*64;
    const allowed=this.boundsAllowed(min,max);
    if(this.grid.size>=4096)this.grid.clear();this.grid.set(key,{x,y,z,u,v,w,allowed});return allowed;
  }
}
