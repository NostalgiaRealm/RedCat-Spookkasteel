// RcHcGame.dat 0x5cdff0 prepares dynamic lights once at the puppet's
// reference point. AdamActor retains the default root reference and disables
// per-bone lighting; neither wall nor actor shadow traces occur in this path.
// Input colours are encoded RGB / 255, as in WorldEffects, not linear RGB.
export const MAX_ACTOR_DYNAMIC_LIGHTS=32;

const vector=value=>value?.length===3&&Array.from(value).every(Number.isFinite);
const clamp=(value,low,high)=>Math.max(low,Math.min(high,value));

export function actorDynamicLightLimit(maximum=2) {
  return clamp(Math.trunc(Number.isFinite(maximum)?maximum:2),0,MAX_ACTOR_DYNAMIC_LIGHTS);
}

export function sampleActorDynamicLights(position,lights=[],maximum=2) {
  if(!vector(position))return [];
  const limit=actorDynamicLightLimit(maximum);
  if(!limit)return [];
  const candidates=[];
  for(const light of lights) {
    if(light.active===false||!Number.isFinite(light.radius)||light.radius<=0||!vector(light.position)||!vector(light.color))continue;
    const delta=light.position.map((value,i)=>value-position[i]);
    const distanceSquared=delta.reduce((sum,value)=>sum+value*value,0);
    // Membership is tested before applying the native one-unit distance floor.
    if(distanceSquared>=light.radius*light.radius)continue;
    candidates.push({light,delta,distanceSquared});
  }
  // Equal distances keep input order, matching the native strict-greater sort.
  candidates.sort((a,b)=>a.distanceSquared-b.distanceSquared);
  return candidates.slice(0,limit).map(({light,delta,distanceSquared})=>{
    const distance=Math.max(1,Math.sqrt(distanceSquared));
    const attenuation=1-distance/light.radius;
    return {light,position:[...light.position],direction:delta.map(value=>value/distance),
      color:light.color.map(value=>value*attenuation),radius:light.radius,distance};
  });
}

// CPU reference for gePuppet_SetVertexColor (0x5ce3b0). The returned raw
// 0..255 vertex colour is interpolated and modulates the encoded texture.
// Ambient/fill/prepared dynamic colours use normalized encoded RGB. Material
// channels are raw 0..255. Normals are the already transformed actor normals.
export function shadeActorVertexRaw({normal,material=[255,255,255],ambient=[0,0,0],fill=null,lights=[],intensity=-1}) {
  const illumination=[...ambient];
  for(const light of fill?[fill,...lights]:lights) {
    const dot=normal.reduce((sum,value,i)=>sum+value*light.direction[i],0);
    if(dot>0)for(let i=0;i<3;i++)illumination[i]+=dot*light.color[i];
  }
  const scale=intensity>0?intensity:1;
  return material.map((value,i)=>clamp(value*illumination[i]*scale,0,255));
}
