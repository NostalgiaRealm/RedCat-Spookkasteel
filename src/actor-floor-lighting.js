import { worldLightFrame, worldLightLuxelStrength, worldLightmapLuxel } from './world-lighting.js';

const dot=(a,b)=>a[0]*b[0]+a[1]*b[1]+a[2]*b[2];
const ZERO=[0,0,0];
const CONTENTS_SOLID=67;

export function inverseModelTransform(value) {
  if(!value)return null;
  const origin=value.origin||ZERO,translation=value.translation||ZERO,rotation=value.rotation||[0,0,0,1];
  const length=Math.hypot(...rotation),[x,y,z,w]=rotation.map((v,i)=>v/length*(i<3?-1:1));
  const rotate=p=>{
    const tx=2*(y*p[2]-z*p[1]),ty=2*(z*p[0]-x*p[2]),tz=2*(x*p[1]-y*p[0]);
    return [p[0]+w*tx+y*tz-z*ty,p[1]+w*ty+z*tx-x*tz,p[2]+w*tz+x*ty-y*tx];
  };
  return p=>rotate(p.map((v,i)=>v-origin[i]-translation[i])).map((v,i)=>v+origin[i]);
}

/** Native floor lighting traces points, not the actor collision hull. Keep the
 * hit BSP node: its ordered face range is part of gePuppet's sampling rule. */
export function traceActorFloorBsp(collision,start,end,root=collision.models[0].root,stats=null) {
  const {nodes,planes,leaves}=collision;
  const visit=(node,a,b,depth=0)=>{
    if(stats)stats.nodeVisits++;
    if(node<0)return leaves[-node-1]?.contents&CONTENTS_SOLID?{solid:true}:null;
    if(depth>512)throw new Error('Invalid actor lighting BSP depth');
    const record=nodes[node],plane=planes[record[2]];
    const da=dot(plane,a)-plane[3],db=dot(plane,b)-plane[3];
    if(da>=0&&db>=0)return visit(record[0],a,b,depth+1);
    if(da<0&&db<0)return visit(record[1],a,b,depth+1);
    const side=da<0?1:0,t=da/(da-db),mid=a.map((value,i)=>value+(b[i]-value)*t);
    const near=visit(record[side],a,mid,depth+1);
    if(near)return near;
    const far=visit(record[1-side],mid,b,depth+1);
    if(!far)return null;
    return far.node===undefined?{solid:true,node,point:mid,plane:record[2]}:far;
  };
  return visit(root,start,end);
}

/** Light_GetLightmapRGB uses integer truncation at one luxel, never filtered
 * atlas UVs. The optional native shifts intentionally precede that truncation. */
export function actorFloorLuxel(face,point,includeTextureShift=true) {
  if(!face||face[19]&32768||face[16]<=0||face[17]<=0)return null;
  const u=point[0]*face[6]+point[1]*face[7]+point[2]*face[8]+(includeTextureShift?face[12]:0)-face[14];
  const v=point[0]*face[9]+point[1]*face[10]+point[2]*face[11]+(includeTextureShift?face[13]:0)-face[15];
  if(u<0||v<0||u>face[16]*16||v>face[17]*16)return null;
  // Native accepts the upper bound itself and can read the following map.
  // Keep valid authored samples exact while safely pinning that invalid edge.
  return [Math.min(face[16]-1,Math.trunc(u/16)),Math.min(face[17]-1,Math.trunc(v/16))];
}

/** CalcSurfVectors (0x5d4f50) builds the actual shadow-ray endpoint from the
 * raw face texture frame, displaced one unit above its oriented plane.
 * The original uses the Z components below, not authored texture shifts. */
export function actorFloorShadowPoint(face,plane,luxel) {
  const u=face.slice(6,9),v=face.slice(9,12),sign=face[21]?-1:1;
  const normal=plane.slice(0,3).map(value=>value*sign),distance=plane[3]*sign;
  let textureNormal=[u[1]*v[2]-u[2]*v[1],u[2]*v[0]-u[0]*v[2],u[0]*v[1]-u[1]*v[0]];
  const length=Math.hypot(...textureNormal);if(length<1e-10)return null;
  textureNormal=textureNormal.map(value=>value/length);
  let alignment=dot(textureNormal,normal);
  if(alignment<0){alignment=-alignment;textureNormal=textureNormal.map(value=>-value);}
  if(alignment<1e-10)return null;
  const scale=1/alignment;
  const axes=[u,v].map(axis=>{
    const along=dot(axis,normal)*scale,squaredLength=dot(axis,axis);
    return axis.map((value,i)=>(value-along*textureNormal[i])/squaredLength);
  });
  let origin=axes[0].map((value,i)=>-u[2]*value-v[2]*axes[1][i]);
  const correction=(dot(origin,normal)-distance-1)*scale;
  origin=origin.map((value,i)=>value-correction*textureNormal[i]);
  return origin.map((value,i)=>value+axes[0][i]*(face[14]+luxel[0]*16)+axes[1][i]*(face[15]+luxel[1]*16));
}

/** Raw lightmap bytes are already imported; metadata preserves only the
 * original node→face association and texture frame that collision omits.
 * World BSP queries are logarithmic. An optional actor-owned cache key avoids
 * repeated traversal for stationary actors without caching moving lights. */
export function createActorFloorLighting(collision,metadata,bytes,collider=null) {
  if(metadata.nodeFaces.length!==collision.nodes.length)throw new Error('Actor floor BSP node count differs');
  const cache=new WeakMap(),frames=new Map(),transforms=new Map(),transformValues=new Map(),shadowCache=new Map();
  let modelRevision=0,disabled=new Set();
  // Call once per rendered update. Comparing authored model numbers avoids a
  // revision bump merely because the host allocated a new transform object.
  function beginFrame() {
    if(!collider)return;
    let changed=false;
    const current=collider.modelTransforms||new Map();
    for(const [index,value] of current) {
      const values=[...(value.origin||ZERO),...(value.translation||ZERO),...(value.rotation||[0,0,0,1])];
      const old=transformValues.get(index);
      if(!old||values.some((v,i)=>v!==old[i])) {
        changed=true;transformValues.set(index,values);transforms.set(index,inverseModelTransform(value));
      }
    }
    for(const index of transformValues.keys())if(!current.has(index)){changed=true;transformValues.delete(index);transforms.delete(index);}
    const currentDisabled=collider.disabledModels||new Set();
    if(disabled.size!==currentDisabled.size||[...disabled].some(index=>!currentDisabled.has(index))) {
      changed=true;disabled=new Set(currentDisabled);
    }
    if(changed)modelRevision++;
  }
  beginFrame();
  // Large coplanar nodes (the forest floor contains >700 faces) otherwise
  // scan hundreds of bounds per moving actor. Index their expanded bounds
  // once at level load, while retaining exact native face ordering.
  const faceGrids=metadata.nodeFaces.map(([first,count])=>{
    if(count<=16)return null;
    const cells=new Map(),wide=[];
    for(let index=first;index<first+count;index++) {
      const face=metadata.faces[index];
      const x0=Math.floor((face[0]-20)/256),x1=Math.floor((face[3]+20)/256);
      const z0=Math.floor((face[2]-20)/256),z1=Math.floor((face[5]+20)/256);
      if((x1-x0+1)*(z1-z0+1)>256){wide.push(index);continue;}
      for(let x=x0;x<=x1;x++)for(let z=z0;z<=z1;z++) {
        const key=`${x},${z}`;let bucket=cells.get(key);
        if(!bucket){bucket=[];cells.set(key,bucket);}bucket.push(index);
      }
    }
    return {cells,wide};
  });
  function* candidates(node,point) {
    const grid=faceGrids[node];
    if(!grid){const [first,count]=metadata.nodeFaces[node];for(let i=first;i<first+count;i++)yield i;return;}
    const local=grid.cells.get(`${Math.floor(point[0]/256)},${Math.floor(point[2]/256)}`)||[],wide=grid.wide;
    let a=0,b=0;
    while(a<local.length||b<wide.length) {
      if(b===wide.length||(a<local.length&&local[a]<wide[b]))yield local[a++];else yield wide[b++];
    }
  }
  const stats={queries:0,cacheHits:0,nodeVisits:0,faceChecks:0,shadowTraces:0,shadowCacheHits:0};
  function locate(position,cacheKey,recoveryBounds=null) {
    const old=cacheKey&&cache.get(cacheKey);
    const sameBounds=old&&(recoveryBounds?old.recoveryBounds?.every((value,i)=>value===recoveryBounds[i]):!old.recoveryBounds);
    if(old&&sameBounds&&(old.worldHit||old.revision===modelRevision)&&old.position.every((value,i)=>value===position[i])){stats.cacheHits++;return old.surface;}
    stats.queries++;
    const end=[position[0],position[1]-30000,position[2]];
    let hit=traceActorFloorBsp(collision,position,end,undefined,stats),model=0;
    const worldHit=Boolean(hit);
    // Exact3 visits authored models in order and returns the first hit, not
    // the closest hit across all models. A valid world floor thus wins even
    // when an animated platform is physically closer to the actor.
    if(!hit&&collider)for(model=1;model<collision.models.length;model++) {
      if(disabled.has(model))continue;
      const inverse=transforms.get(model),a=inverse?inverse(position):position,b=inverse?inverse(end):end;
      const bounds=collider.modelBounds?.[model];
      if(bounds&&bounds[0].some((v,i)=>v>Math.max(a[i],b[i])||bounds[1][i]<Math.min(a[i],b[i])))continue;
      hit=traceActorFloorBsp(collision,a,b,collision.models[model].root,stats);
      if(hit)break;
    }
    let surface=null;
    // Entering a solid starts without a crossed plane, so has no floor face.
    // The caller retains the actor's authored ambient in that case/no hit.
    if(hit?.node!==undefined) {
      // The native shifted lookup can miss every lightmap on an otherwise
      // valid floor (notably beneath the graveyard's hand torches). Its failed
      // face loop then leaves another actor's global ambient behind. Replacing
      // that undefined value with zero made these props black. Only after all
      // native candidates fail, recover the hit floor's physical lightmap UVs,
      // which omit texture-art shifts. This stays local, capped and cacheable;
      // it never replaces a valid dark sample or lights through missing floors.
      for(let pass=0;pass<2&&!surface;pass++) {
        for(const index of candidates(hit.node,hit.point)) {
          stats.faceChecks++;
          const face=metadata.faces[index];
          const tolerance=pass===0?20:.001;
          if(!face||hit.point.some((value,i)=>value+tolerance<face[i]||value-tolerance>face[i+3]))continue;
          if(pass===1&&face[12]===0&&face[13]===0)continue;
          const luxel=actorFloorLuxel(face,hit.point,pass===0);if(!luxel)continue;
          const offset=face[18]+1+(luxel[1]*face[16]+luxel[0])*3;
          const base=face[18]<0?ZERO:[bytes[offset]/255,bytes[offset+1]/255,bytes[offset+2]/255];
          if(base.some(value=>!Number.isFinite(value)))throw new Error('Actor floor sample exceeds imported lightmap');
          let frame=frames.get(index);
          if(!frame){
            const plane=collision.planes[face[20]];
            frame=worldLightFrame(face.slice(6,9),face.slice(9,12),face.slice(14,16),plane.slice(0,3),plane[3]);
            frames.set(index,frame);
          }
          surface={index,model,face,point:hit.point,luxel,base,frame,recoveredTextureShift:pass===1,
            shadowPoint:actorFloorShadowPoint(face,collision.planes[face[20]],luxel)};break;
        }
      }
    }
    // Some authored actor origins lie inside walls, plinths or floors.
    // Only explicitly opted-in actors may recover within their own world
    // bounds; ordinary actors retain the native solid-origin result. Probe
    // the lower quarter of the bounds, never an arbitrary distant floor.
    if(!surface&&hit&&hit.node===undefined&&recoveryBounds) {
      const [x0,y0,z0,x1,y1,z1]=recoveryBounds;
      const x=(x0+x1)/2,y=y0+(y1-y0)*.25,z=(z0+z1)/2;
      for(const probe of [[x,y,z],[x0,y,z],[x1,y,z],[x,y,z0],[x,y,z1]]) {
        const candidate=locate(probe);
        if(candidate){surface={...candidate,probePosition:probe};break;}
      }
    }
    // A recovered brush sample must still be invalidated when that brush
    // moves, even though the original buried origin hit the static world.
    const stableWorldHit=worldHit&&(!recoveryBounds||surface?.model===0);
    if(cacheKey)cache.set(cacheKey,{position:[...position],surface,worldHit:stableWorldHit,revision:modelRevision,
      recoveryBounds:recoveryBounds?[...recoveryBounds]:null});
    return surface;
  }
  function sample(position,lights=[],cacheKey,recoveryBounds=null) {
    const surface=locate(position,cacheKey,recoveryBounds);if(!surface)return null;
    let dynamic=surface.face[19]&2?[]:lights;
    const inverse=surface.model&&transforms.get(surface.model);
    if(inverse&&dynamic.length)dynamic=dynamic.map(light=>({...light,position:inverse(light.position)}));
    if(dynamic.some(light=>light.castShadow))dynamic=dynamic.filter(light=>{
      if(!light.castShadow)return true;
      // Native only traces luxels inside the reduced light radius. Cache
      // visibility by exact point/face/luxel: colour and pulse radius changes
      // cannot change world-only occlusion. Never raycast scene geometry.
      if(!surface.shadowPoint||worldLightLuxelStrength(light,surface.frame,surface.luxel)<=0)return false;
      const key=`${surface.index}:${surface.luxel}:${light.position}`;
      if(shadowCache.has(key)){stats.shadowCacheHits++;return shadowCache.get(key);}
      stats.shadowTraces++;
      const visible=!traceActorFloorBsp(collision,light.position,surface.shadowPoint,0);
      if(shadowCache.size>=4096)shadowCache.delete(shadowCache.keys().next().value);
      shadowCache.set(key,visible);return visible;
    });
    return worldLightmapLuxel(surface.base,dynamic,surface.frame,surface.luxel).map(value=>Math.min(.3,value));
  }
  return {sample,locate,beginFrame,stats};
}
