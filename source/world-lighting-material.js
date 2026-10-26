import {WORLD_LIGHTING_GLSL} from './world-lighting.js';

const VARYINGS=`
varying vec4 effectTextureU;
varying vec4 effectTextureV;
varying vec4 effectPlane;
varying vec4 effectScaleStep;
varying vec2 effectMinUV;
varying vec2 effectLuxel;
`;

// Model transforms are rigid. Rotate the original texinfo vectors and include
// the translation in their fourth component; lights then project into the
// original local texture frame even while a door or platform is moving.
const VERTEX=`
vec3 effectWorld=(modelMatrix*vec4(transformed,1.)).xyz;
vec3 effectU=mat3(modelMatrix)*nativeLightU;
vec3 effectV=mat3(modelMatrix)*nativeLightV;
effectTextureU=vec4(effectU,-dot(modelMatrix[3].xyz,effectU));
effectTextureV=vec4(effectV,-dot(modelMatrix[3].xyz,effectV));
vec3 effectNormal=normalize(mat3(modelMatrix)*normal);
effectPlane=vec4(effectNormal,-dot(effectWorld,effectNormal));
vec2 effectAxisLength=vec2(length(nativeLightU),length(nativeLightV));
effectScaleStep=floor(vec4(1024./effectAxisLength,16384./effectAxisLength));
effectMinUV=nativeLightMinUV;
effectLuxel=(vec2(dot(transformed,nativeLightU),dot(transformed,nativeLightV))-nativeLightMinUV)/16.;
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
  if(effectLightCount==0)return texture2D(atlas,atlasUv).rgb;
  vec2 corner=floor(effectLuxel),fraction=fract(effectLuxel);
  vec2 uv=atlasUv+(corner-effectLuxel)/effectAtlasSize;
  vec3 c00=floor(texture2D(atlas,uv).rgb*255.+.5)*256.;
  vec3 c10=floor(texture2D(atlas,uv+vec2(1.,0.)/effectAtlasSize).rgb*255.+.5)*256.;
  vec3 c01=floor(texture2D(atlas,uv+vec2(0.,1.)/effectAtlasSize).rgb*255.+.5)*256.;
  vec3 c11=floor(texture2D(atlas,uv+vec2(1.,1.)/effectAtlasSize).rgb*255.+.5)*256.;
  /* shadow samples */
  for(int i=0;i<8;i++) {
    if(i>=effectLightCount)break;
    vec4 light=vec4(effectLightPosition[i],1.);
    float planeDistance=dot(light,effectPlane),radius=effectLightRadius[i];
    if(radius<=abs(planeDistance))continue;
    vec2 projectedLight=vec2(dot(light,effectTextureU),dot(light,effectTextureV));
    vec3 rgb=nativeWorldLightFixedColor(effectLightColor[i]);
    /* shadow visibility */
    c00+=rgb*/* visible00 */nativeWorldLightStrength(radius,planeDistance,projectedLight,corner,effectMinUV,effectScaleStep.xy,effectScaleStep.zw);
    c10+=rgb*/* visible10 */nativeWorldLightStrength(radius,planeDistance,projectedLight,corner+vec2(1.,0.),effectMinUV,effectScaleStep.xy,effectScaleStep.zw);
    c01+=rgb*/* visible01 */nativeWorldLightStrength(radius,planeDistance,projectedLight,corner+vec2(0.,1.),effectMinUV,effectScaleStep.xy,effectScaleStep.zw);
    c11+=rgb*/* visible11 */nativeWorldLightStrength(radius,planeDistance,projectedLight,corner+vec2(1.,1.),effectMinUV,effectScaleStep.xy,effectScaleStep.zw);
  }
  return mix(mix(nativeWorldLightmapClamp(c00),nativeWorldLightmapClamp(c10),fraction.x),
    mix(nativeWorldLightmapClamp(c01),nativeWorldLightmapClamp(c11),fraction.x),fraction.y);
}
`;

export function patchWorldLightShader(shader,uniforms) {
  Object.assign(shader.uniforms,uniforms);
  shader.vertexShader=`attribute vec3 nativeLightU;attribute vec3 nativeLightV;attribute vec2 nativeLightMinUV;\n${VARYINGS}`+shader.vertexShader;
  shader.vertexShader=shader.vertexShader.replace('#include <project_vertex>',`#include <project_vertex>\n${VERTEX}`);
  let fragment=FRAGMENT;
  // Levels without authored CastShadow lamps keep the original shader and
  // allocate no shadow texture. Four byte reads serve all selected lamps.
  if(uniforms.effectShadowAtlas) {
    fragment='uniform sampler2D effectShadowAtlas;\nuniform float effectLightShadowBit[8];\nuniform int effectShadowCount;\n'+fragment;
    fragment=fragment.replace('/* shadow samples */',`vec4 shadowBytes=vec4(0.);
    if(effectShadowCount>0)shadowBytes=floor(vec4(
      texture2D(effectShadowAtlas,uv).r,
      texture2D(effectShadowAtlas,uv+vec2(1.,0.)/effectAtlasSize).r,
      texture2D(effectShadowAtlas,uv+vec2(0.,1.)/effectAtlasSize).r,
      texture2D(effectShadowAtlas,uv+vec2(1.,1.)/effectAtlasSize).r)*255.+.5);`);
    fragment=fragment.replace('/* shadow visibility */',`vec4 lightVisible=vec4(1.);
    float shadowBit=effectLightShadowBit[i];
    if(shadowBit>0.)lightVisible-=mod(floor(shadowBytes/shadowBit),2.);`);
    ['00','10','01','11'].forEach((corner,i)=>{fragment=fragment.replace(`/* visible${corner} */`,`lightVisible.${'xyzw'[i]}*`);});
  }
  shader.fragmentShader=VARYINGS+fragment+shader.fragmentShader;
  shader.fragmentShader=shader.fragmentShader.replace('vec4 lightMapTexel = texture2D( lightMap, vLightMapUv );',
    'vec4 lightMapTexel = vec4(nativeLitLightmap(lightMap,vLightMapUv),1.);');
}
