const dot=(a,b)=>a.reduce((sum,value,i)=>sum+value*b[i],0);
const clamp=(value,min,max)=>Math.max(min,Math.min(max,value));

// The BSP path uses texture axes, not actor-style Lambert/spherical falloff.
// RcHcGame.dat e30781fc…: 0x5d3030, 0x5d3730 and 0x5d22a5.
export function worldLightFrame(u,v,min=[0,0],normal=[0,1,0],distance=0) {
  const lengths=[Math.hypot(...u),Math.hypot(...v)];
  if(lengths.some(length=>!(length>0)))throw new RangeError('Invalid BSP light texture axis');
  return {u:[...u],v:[...v],min:[...min],normal:[...normal],distance,
    scale:lengths.map(length=>Math.trunc(1024/length)),
    step:lengths.map(length=>Math.trunc(16384/length))};
}

export function worldLightLuxelStrength(light,frame,luxel) {
  const radius=Math.trunc(light.radius-Math.abs(dot(light.position,frame.normal)-frame.distance));
  if(radius<=0)return 0;
  const xy=[frame.u,frame.v].map((axis,i)=>{
    const fixed=(Math.trunc(dot(light.position,axis))-frame.min[i])*frame.scale[i]-luxel[i]*frame.step[i];
    // Native SAR 10 rounds negative coordinates down before taking abs.
    return Math.abs(Math.floor(fixed/1024));
  });
  const distance=Math.max(...xy)+Math.floor(Math.min(...xy)/2);
  return Math.max(0,radius-distance);
}

/** One original lightmap sample. Base and light colours use normalized RGB
 * intensity (not sRGB decoding); results are clamped before texture modulation. */
export function worldLightmapLuxel(base,lights,frame,luxel) {
  const channels=base.map(value=>Math.round(value*255)*256);
  for(const light of lights) {
    const strength=worldLightLuxelStrength(light,frame,luxel);
    for(let i=0;i<3;i++)channels[i]+=strength*Math.trunc(light.color[i]*255/195*256);
  }
  return channels.map(value=>clamp(Math.floor(value/256),0,255)/255);
}

// GLSL ES 1 compatible; caller supplies the light projected onto the face's raw
// local texture axes, signed plane distance and integer luxel coordinates.
// Frame values come from the original texinfo vectors and lightmap extents.
export const WORLD_LIGHTING_GLSL=`
float nativeWorldLightStrength(float radius,float planeDistance,vec2 projectedLight,
  vec2 luxel,vec2 minUV,vec2 scaleUV,vec2 stepUV) {
  float reducedRadius=floor(max(0.,radius-abs(planeDistance)));
  vec2 truncatedProjection=sign(projectedLight)*floor(abs(projectedLight));
  vec2 xy=abs(floor(((truncatedProjection-minUV)*scaleUV-luxel*stepUV)/1024.));
  float distance=max(xy.x,xy.y)+floor(min(xy.x,xy.y)*.5);
  return max(0.,reducedRadius-distance);
}
vec3 nativeWorldLightFixedColor(vec3 color) {
  return floor(max(vec3(0.),color)*(255.*256./195.));
}
vec3 nativeWorldLightmapClamp(vec3 fixedColor) {
  return clamp(floor(fixedColor/256.),0.,255.)/255.;
}
`;
