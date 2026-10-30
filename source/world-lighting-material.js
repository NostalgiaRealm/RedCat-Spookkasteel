import {WORLD_LIGHTING_GLSL} from './world-lighting.js';

// Everything except the luxel position is constant on a BSP face.
const VARYINGS=`
flat varying vec2 effectStep;
varying vec2 effectLuxel;
flat varying int effectLightMask;
flat varying float effectReducedRadius[8];
flat varying vec2 effectFixedLight[8];
`;
const VERTEX_UNIFORMS=`
uniform vec3 effectLightPosition[8];
uniform float effectLightRadius[8];
uniform int effectLightCount;
`;

// Model transforms are rigid. Rotate the original texinfo vectors and include
// the translation in their fourth component; lights then project into the
// original local texture frame even while a door or platform is moving.
// Each light's plane distance and projection are constant on a face, so they
// are computed here once per vertex rather than for every fragment.
const VERTEX=`
vec3 effectWorld=(modelMatrix*vec4(transformed,1.)).xyz;
vec3 effectU=mat3(modelMatrix)*nativeLightU;
vec3 effectV=mat3(modelMatrix)*nativeLightV;
vec4 effectTextureU=vec4(effectU,-dot(modelMatrix[3].xyz,effectU));
vec4 effectTextureV=vec4(effectV,-dot(modelMatrix[3].xyz,effectV));
vec3 effectNormal=normalize(mat3(modelMatrix)*normal);
vec4 effectPlane=vec4(effectNormal,-dot(effectWorld,effectNormal));
vec2 effectAxisLength=vec2(length(nativeLightU),length(nativeLightV));
vec2 effectScale=floor(1024./effectAxisLength);
effectStep=floor(16384./effectAxisLength);
effectLuxel=(vec2(dot(transformed,nativeLightU),dot(transformed,nativeLightV))-nativeLightMinUV)/16.;
effectLightMask=0;
for(int i=0;i<8;i++) {
  effectReducedRadius[i]=0.;effectFixedLight[i]=vec2(0.);
  if(i>=effectLightCount)continue;
  vec4 light=vec4(effectLightPosition[i],1.);
  float reduced=floor(max(0.,effectLightRadius[i]-abs(dot(light,effectPlane))));
  if(reduced<=0.)continue;
  vec2 projected=vec2(dot(light,effectTextureU),dot(light,effectTextureV));
  effectReducedRadius[i]=reduced;
  effectFixedLight[i]=(sign(projected)*floor(abs(projected))-nativeLightMinUV)*effectScale;
  effectLightMask|=1<<i;
}
`;

// The native renderer adds and clamps light at each integer lightmap sample,
// then filters that lightmap. Clamping a continuous per-fragment estimate
// instead would visibly change the edges of bright projectile light pools.
const FRAGMENT=`
uniform vec3 effectLightPosition[8];
uniform vec3 effectLightColor[8];
uniform float effectLightRadius[8];
uniform int effectLightCount;
uniform vec2 effectAtlasSize;
${WORLD_LIGHTING_GLSL}
vec3 nativeLitLightmap(sampler2D atlas,vec2 atlasUv) {
  if(effectLightMask==0)return texture2D(atlas,atlasUv).rgb;
  vec2 corner=floor(effectLuxel),fraction=fract(effectLuxel);
  vec2 uv=atlasUv+(corner-effectLuxel)/effectAtlasSize;
  vec3 add00=vec3(0.),add10=vec3(0.),add01=vec3(0.),add11=vec3(0.);
  bool lit=false;
  /* shadow samples */
  for(int i=0;i<8;i++) {
    if((effectLightMask&(1<<i))==0)continue;
    // nativeWorldLightStrength at the four corners, which share two X and two
    // Y values. The same arithmetic, with far fewer floors per light.
    float reduced=effectReducedRadius[i];
    vec2 near=abs(floor((effectFixedLight[i]-corner*effectStep)/1024.));
    vec2 far=abs(floor((effectFixedLight[i]-(corner+1.)*effectStep)/1024.));
    // A corner's distance is at least the larger of its axes.
    if(max(min(near.x,far.x),min(near.y,far.y))>=reduced)continue;
    vec4 xs=vec4(near.x,far.x,near.x,far.x),ys=vec4(near.y,near.y,far.y,far.y);
    vec4 strength=max(vec4(0.),reduced-(max(xs,ys)+floor(min(xs,ys)*.5)));
    /* shadow visibility */
    vec3 rgb=nativeWorldLightFixedColor(effectLightColor[i]);
    add00+=rgb*strength.x;add10+=rgb*strength.y;add01+=rgb*strength.z;add11+=rgb*strength.w;
    lit=true;
  }
  // No light reached this fragment: one filtered read equals the corners below.
  if(!lit)return texture2D(atlas,atlasUv).rgb;
  vec3 c00=floor(texture2D(atlas,uv).rgb*255.+.5)*256.+add00;
  vec3 c10=floor(texture2D(atlas,uv+vec2(1.,0.)/effectAtlasSize).rgb*255.+.5)*256.+add10;
  vec3 c01=floor(texture2D(atlas,uv+vec2(0.,1.)/effectAtlasSize).rgb*255.+.5)*256.+add01;
  vec3 c11=floor(texture2D(atlas,uv+vec2(1.,1.)/effectAtlasSize).rgb*255.+.5)*256.+add11;
  return mix(mix(nativeWorldLightmapClamp(c00),nativeWorldLightmapClamp(c10),fraction.x),
    mix(nativeWorldLightmapClamp(c01),nativeWorldLightmapClamp(c11),fraction.x),fraction.y);
}
`;

export function patchWorldLightShader(shader,uniforms) {
  Object.assign(shader.uniforms,uniforms);
  shader.vertexShader=`attribute vec3 nativeLightU;attribute vec3 nativeLightV;attribute vec2 nativeLightMinUV;\n${VERTEX_UNIFORMS}${VARYINGS}`+shader.vertexShader;
  shader.vertexShader=shader.vertexShader.replace('#include <project_vertex>',`#include <project_vertex>\n${VERTEX}`);
  let fragment=FRAGMENT;
  // Levels without authored CastShadow lamps keep the original shader and
  // allocate no shadow texture. Four byte reads serve all selected lamps.
  if(uniforms.effectShadowAtlas) {
    fragment='uniform sampler2D effectShadowAtlas;\nuniform float effectLightShadowBit[8];\nuniform int effectShadowCount;\n'+fragment;
    fragment=fragment.replace('/* shadow samples */','vec4 shadowBytes=vec4(0.);bool shadowRead=false;');
    fragment=fragment.replace('/* shadow visibility */',`float shadowBit=effectLightShadowBit[i];
    if(shadowBit>0.) {
      if(!shadowRead) {
        shadowRead=true;
        shadowBytes=floor(vec4(
          texture2D(effectShadowAtlas,uv).r,
          texture2D(effectShadowAtlas,uv+vec2(1.,0.)/effectAtlasSize).r,
          texture2D(effectShadowAtlas,uv+vec2(0.,1.)/effectAtlasSize).r,
          texture2D(effectShadowAtlas,uv+vec2(1.,1.)/effectAtlasSize).r)*255.+.5);
      }
      strength*=vec4(1.)-mod(floor(shadowBytes/shadowBit),2.);
    }`);
  }
  shader.fragmentShader=VARYINGS+fragment+shader.fragmentShader;
  shader.fragmentShader=shader.fragmentShader.replace('vec4 lightMapTexel = texture2D( lightMap, vLightMapUv );',
    'vec4 lightMapTexel = vec4(nativeLitLightmap(lightMap,vLightMapUv),1.);');
}
