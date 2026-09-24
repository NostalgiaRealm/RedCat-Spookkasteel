// AdamActor 0x49d5f0 and AdamSunFinder 0x5654c0 select one authored Sun.
// These are local fill lights, not an infinitely distant scene hemisphere.
const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const vector=value=>{
  const result=Array.isArray(value)?value.map(Number):String(value||'').trim().split(/\s+/).map(Number);
  return result.length===3&&result.every(Number.isFinite)?result:[0,0,0];
};

export function actorSunReference(position,height=0) {
  return [position[0],position[1]+Math.max(0,height)*.75,position[2]];
}

export function nativeSunFalloff(type,radius,topRadius,distance) {
  if(type===0)return 1;
  if(distance>radius)return 0;
  if(type<2||distance<=topRadius)return 1;
  if(topRadius>0&&topRadius<radius)return 1-(distance-topRadius)/(radius-topRadius);
  return radius>0?1-distance/radius:0;
}

export class ActorWorldLighting {
  constructor(entities=[]) {
    this.cache=new WeakMap();
    this.suns=entities.filter(entity=>entity.classname==='Sun').map((entity,index)=>({
      entity,index,position:vector(entity.Origin??entity.origin),color:vector(entity.Color),
      intensity:Math.trunc(number(entity.Light)),type:Math.trunc(number(entity.FallOffType)),
      radius:number(entity.FallOffRadiusInTexels),topRadius:number(entity.FallOffRadiusTopIntensity),
    }));
  }

  // visible(from,to,entity) must test the world and brush models, excluding
  // actors. Score before tracing so an actor tests only brighter contenders.
  // An optional actor object caches the native dirty-driven Sun lookup. Bump
  // revision when moving models or other visibility inputs change; callback
  // identity is intentionally ignored so frame-local closures remain cheap.
  sample(position,height=0,visible=()=>true,cacheKey=null,revision=0) {
    const cacheable=cacheKey!==null&&(typeof cacheKey==='object'||typeof cacheKey==='function');
    const cached=cacheable?this.cache.get(cacheKey):null;
    if(cached&&cached.x===position[0]&&cached.y===position[1]&&cached.z===position[2]
      &&cached.height===height&&cached.revision===revision)return cached.value;
    const reference=actorSunReference(position,height),candidates=[];
    for(const sun of this.suns) {
      const dx=sun.position[0]-reference[0],dy=sun.position[1]-reference[1],dz=sun.position[2]-reference[2];
      const distance=Math.hypot(dx,dy,dz);
      const falloff=nativeSunFalloff(sun.type,sun.radius,sun.topRadius,distance);
      if(sun.type!==0&&distance>sun.radius)continue;
      const score=(sun.color[0]+sun.color[1]+sun.color[2])*sun.intensity*falloff;
      candidates.push({sun,dx,dy,dz,distance,falloff,score});
    }
    // Native only replaces the selected light when its score is greater.
    candidates.sort((a,b)=>b.score-a.score||a.sun.index-b.sun.index);
    let value=null;
    for(const {sun,dx,dy,dz,distance,falloff,score} of candidates) {
      if(!visible(reference,sun.position,sun.entity))continue;
      value={
        entity:sun.entity,reference,position:sun.position,
        normal:distance>0?[dx/distance,dy/distance,dz/distance]:[0,0,0],
        // Keep byte-domain channels, including overbright values. The actor
        // vertex pipeline clamps after material colour and summed lighting.
        color:sun.color.map(value=>value*sun.intensity*falloff*(2/255)),
        falloff,score,
      };
      break;
    }
    if(cacheable) {
      const entry=cached||{};
      entry.x=position[0];entry.y=position[1];entry.z=position[2];
      entry.height=height;entry.revision=revision;entry.value=value;
      if(!cached)this.cache.set(cacheKey,entry);
    }
    return value;
  }
}
