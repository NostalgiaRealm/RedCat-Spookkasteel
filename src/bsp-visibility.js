// Genesis3D World/Vis.c: camera leaf -> cluster bitset -> connected areas ->
// leaf face references. Stored PVS is a byte bitset (not Quake RLE).
export class BspVisibility {
  constructor(collision,metadata,pvs) {
    this.collision=collision;this.metadata=metadata;this.pvs=pvs;
    this.faces=new Uint8Array(metadata.faceCount);this.leaves=new Uint8Array(metadata.leaves.length);
    this.lastLeaf=-1;this.key=null;this.revision=0;this.active=false;
  }
  findLeaf(point) {
    const {models,nodes,planes}=this.collision,bounds=models[0];
    if(!point||point.some((v,i)=>!Number.isFinite(v)||v<bounds.min[i]||v>bounds.max[i]))return -1;
    let id=bounds.root;
    while(id>=0){const n=nodes[id];if(!n)return -1;const p=planes[n[2]];id=n[p[0]*point[0]+p[1]*point[1]+p[2]*point[2]>=p[3]?0:1];}
    return -id-1;
  }
  usable(leaf) {const cluster=this.metadata.leaves[leaf]?.[0];return cluster>=0&&this.metadata.clusters[cluster]>=0;}
  update(camera,fallback,portalOpen=()=>true) {
    let leaf=this.findLeaf(camera);
    // A free-look camera can briefly enter a solid/outside leaf. Keep the
    // player's valid cell (or the last valid cell) instead of exposing a map.
    if(!this.usable(leaf))leaf=this.findLeaf(fallback);
    if(!this.usable(leaf))leaf=this.lastLeaf;
    if(!this.usable(leaf)){this.active=false;return false;}
    this.active=true;this.lastLeaf=leaf;
    const {clusters,leaves,areas,areaPortals,leafFaces}=this.metadata,[cluster,area]=leaves[leaf];
    const open=areaPortals.map(([model])=>portalOpen(model)),key=`${cluster}:${area}:${open.map(v=>v?1:0).join('')}`;
    if(key===this.key)return false;this.key=key;this.revision++;
    const visibleAreas=new Set(),pending=[area];
    while(pending.length) {
      const a=pending.pop();if(visibleAreas.has(a))continue;visibleAreas.add(a);
      const [count,first]=areas[a]||[0,0];
      for(let i=first;i<first+count;i++)if(open[i])pending.push(areaPortals[i][1]);
    }
    this.faces.fill(0);this.leaves.fill(0);const offset=clusters[cluster];
    const world=this.collision.models[0];
    for(let i=world.firstLeaf;i<world.firstLeaf+world.numLeaves;i++) {
      const [c,a,first,count]=leaves[i];
      if(c<0||!visibleAreas.has(a)||!(this.pvs[offset+(c>>3)]&(1<<(c&7))))continue;
      this.leaves[i]=1;for(let k=first;k<first+count;k++)this.faces[leafFaces[k]]=1;
    }
    return true;
  }
  boundsVisible(min,max) {
    if(!this.active)return true;
    const {nodes,planes,models}=this.collision;
    const visit=id=>{
      if(id<0)return Boolean(this.leaves[-id-1]);
      const n=nodes[id],p=planes[n[2]];
      let near=-p[3],far=-p[3];for(let i=0;i<3;i++){near+=p[i]*(p[i]>=0?min[i]:max[i]);far+=p[i]*(p[i]>=0?max[i]:min[i]);}
      return (far>=0&&visit(n[0]))||(near<0&&visit(n[1]));
    };
    return visit(models[0].root);
  }
  writeGroupIndices(group,target) {
    let count=0;
    for(const [face,start,size] of group.spans)if(!this.active||this.faces[face])for(let k=start;k<start+size;k++)target[count++]=k;
    return count;
  }
}

// The boolean intent can become closed before its authored door motion ends.
export function doorPortalOpen(door,motion,hasVisibleSurface=true) {
  // Forest DoorType4 models are invisible Air_Wtr01 controller volumes
  // (all faces alpha0). Their logical closed state cannot occlude scenery.
  if(!hasVisibleSurface||!door||door.visible===false||door.open||door.collected)return true;
  return motion?motion.time>motion.motion.startTime+.00001:door.openFraction>0;
}
