// AdamActor 0x49d5f0 and AdamSunFinder 0x5654c0 select one authored Sun.
// These are local fill lights, not an infinitely distant scene hemisphere.
const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const vector=value=>{
  const result=Array.isArray(value)?value.map(Number):String(value||'').trim().split(/\s+/).map(Number);
  return result.length===3&&result.every(Number.isFinite)?result:[0,0,0];
};
const SUN_CELL=512;

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
    // Authored Suns are immutable level data. Index only their conservative
    // radius boxes, then retain the exact distance/falloff/visibility tests.
    // Unlimited or exceptionally large Suns stay in the always-tested list.
    this.sunCells=new Map();this.wideSuns=[];
    for(const sun of this.suns) {
      if(sun.type===0){this.wideSuns.push(sun);continue;}
      if(sun.radius<0)continue;
      const padding=Number.EPSILON*Math.max(1,sun.radius,...sun.position.map(Math.abs))*4;
      const x0=Math.floor((sun.position[0]-sun.radius-padding)/SUN_CELL),x1=Math.floor((sun.position[0]+sun.radius+padding)/SUN_CELL);
      const y0=Math.floor((sun.position[1]-sun.radius-padding)/SUN_CELL),y1=Math.floor((sun.position[1]+sun.radius+padding)/SUN_CELL);
      const z0=Math.floor((sun.position[2]-sun.radius-padding)/SUN_CELL),z1=Math.floor((sun.position[2]+sun.radius+padding)/SUN_CELL);
      if((x1-x0+1)*(y1-y0+1)*(z1-z0+1)>512||![x0,x1,y0,y1,z0,z1].every(Number.isSafeInteger)){this.wideSuns.push(sun);continue;}
      for(let x=x0;x<=x1;x++)for(let y=y0;y<=y1;y++)for(let z=z0;z<=z1;z++) {
        const key=`${x},${y},${z}`;
        let cell=this.sunCells.get(key);if(!cell){cell=[];this.sunCells.set(key,cell);}cell.push(sun);
      }
    }
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
    const local=this.sunCells.get(`${Math.floor(reference[0]/SUN_CELL)},${Math.floor(reference[1]/SUN_CELL)},${Math.floor(reference[2]/SUN_CELL)}`)||[];
    for(let i=0;i<local.length+this.wideSuns.length;i++) {
      const sun=i<local.length?local[i]:this.wideSuns[i-local.length];
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
