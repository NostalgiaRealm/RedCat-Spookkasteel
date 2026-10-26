import * as THREE from 'three';
import {actorDynamicLightLimit,sampleActorDynamicLights} from './actor-light-sampling.js';

const clamp=(value,min,max)=>Math.max(min,Math.min(max,value));
const rawColor=value=>new THREE.Color().fromArray(value.map(v=>v/255));
const patched=new WeakMap();

// AdamActor's shared definition updates its ambient override once per frame
// (0x4a6c30), interpolating a..z samples including the final-to-first wrap.
export function actorAmbientColor(settings={},time=0) {
  const animation=settings.lightAnimation;
  if(!animation?.enabled)return settings.lighting?.ambientColor||[155,155,155];
  const pattern=String(animation.pattern||'a').toLowerCase(),duration=Number(animation.duration);
  const phase=duration>0?((Math.max(0,time)%duration)/duration)*pattern.length:0;
  const index=Math.floor(phase),sample=i=>clamp((pattern.charCodeAt(i%pattern.length)-97)/25,0,1);
  const factor=sample(index)+(sample(index+1)-sample(index))*(phase-index);
  return animation.start.map((value,i)=>value+(animation.end[i]-value)*factor);
}

export function actorDynamicLights(position,lights=[],maximum=2) {
  return sampleActorDynamicLights(position,lights,maximum).map(sample=>sample.light);
}

export function createActorLighting(settings={}) {
  const maximum=actorDynamicLightLimit(settings.lighting?.maxDynamicLights??2),capacity=Math.max(1,maximum);
  return {settings,maximum,capacity,uniforms:{
    actorAmbient:{value:rawColor([0,0,0])},actorAmbientMode:{value:0},actorSunFactor:{value:0},
    actorFillColor:{value:rawColor([0,0,0])},actorFillNormal:{value:new THREE.Vector3(0,1,0)},
    actorLightCount:{value:0},
    actorLightDirections:{value:Array.from({length:capacity},()=>new THREE.Vector3())},
    actorLightColors:{value:Array.from({length:capacity},()=>new THREE.Color(0))},
  }};
}

// World sampling supplies the selected local Sun and the floor's lightmap.
// Raw normalized RGB remains encoded until AFTER material/texture modulation.
export function updateActorLighting(state,position,time,lights=[],worldLighting={}) {
  const {settings,uniforms:u}=state,lighting=settings.lighting||{};
  const override=lighting.overrideAmbient||settings.lightAnimation?.enabled;
  const configured=override?actorAmbientColor(settings,time).map(v=>v/255):[0,0,0];
  const floor=lighting.useAmbient!==false?worldLighting?.ambient:null;
  u.actorAmbient.value.fromArray(floor||configured);
  u.actorAmbientMode.value=override?2:lighting.useAmbient===false?1:0;
  const useSun=lighting.useSun!==false,onlyDefault=lighting.useDefaultSunOnly===true;
  const sun=useSun&&!onlyDefault?worldLighting?.sun:null;
  const fallback=onlyDefault||lighting.useDefaultSun===true&&!sun;
  u.actorSunFactor.value=sun?Math.max(0,lighting.sunIntensityFactor??1):0;
  if(sun) {
    u.actorFillColor.value.fromArray(sun.color.map(v=>v*u.actorSunFactor.value/255));
    u.actorFillNormal.value.fromArray(sun.normal);
  }else if(fallback) {
    // The native fallback does not use ActorLightingSunIntensityFactor.
    u.actorFillColor.value.copy(rawColor(lighting.sunColor||[155,155,155]));
    u.actorFillNormal.value.fromArray(lighting.sunNormal||[0,1,0]).normalize();
  }else u.actorFillColor.value.setRGB(0,0,0);
  const nearest=sampleActorDynamicLights(position,lights,state.maximum);
  u.actorLightCount.value=nearest.length;
  for(let i=0;i<state.capacity;i++) {
    const light=nearest[i];
    u.actorLightDirections.value[i].fromArray(light?.direction||[0,0,0]);
    u.actorLightColors.value[i].fromArray(light?.color||[0,0,0]);
  }
}

// Textures and Three's material colours are stored as sRGB but sampled in
// linear space. Undo that decoding for the native byte-domain multiplication,
// then return to linear once for the renderer's normal output conversion.
const ENCODE=`vec3 actorEncode(vec3 c){return mix(1.055*pow(max(c,vec3(0.)),vec3(1./2.4))-.055,12.92*c,lessThanEqual(c,vec3(.0031308)));}`;
const DECODE=`vec3 actorDecode(vec3 c){return mix(pow((max(c,vec3(0.))+.055)/1.055,vec3(2.4)),c/12.92,lessThanEqual(c,vec3(.04045)));}`;

// The original puppet shades vertices, interpolates their clamped colours,
// then modulates the texture. Fragment lighting changes highlights and clips
// bright triangles differently. Each actor keeps independent live uniforms;
// cloned ghost/death materials are patched again because Three drops callbacks.
export function applyActorLighting(material,state) {
  if(!material?.isMeshLambertMaterial||patched.get(material)===state)return;
  patched.set(material,state);
  material.onBeforeCompile=shader=>{
    Object.assign(shader.uniforms,state.uniforms);
    shader.vertexShader=`uniform vec3 diffuse;
uniform vec3 actorAmbient;uniform vec3 actorFillColor;uniform vec3 actorFillNormal;
uniform vec3 actorLightDirections[${state.capacity}];uniform vec3 actorLightColors[${state.capacity}];uniform int actorLightCount;
varying vec3 actorVertexColor;
${ENCODE}\n`+shader.vertexShader;
    shader.vertexShader=shader.vertexShader.replace('#include <normal_vertex>',`#include <normal_vertex>
vec3 actorNormal=inverseTransformDirection(transformedNormal,viewMatrix);
vec3 actorIllumination=actorAmbient+actorFillColor*max(0.,dot(actorNormal,actorFillNormal));
for(int i=0;i<${state.capacity};i++){
  if(i>=actorLightCount)break;
  actorIllumination+=actorLightColors[i]*max(0.,dot(actorNormal,actorLightDirections[i]));
}
actorVertexColor=clamp(actorEncode(diffuse)*actorIllumination,0.,1.);`);
    shader.fragmentShader=`varying vec3 actorVertexColor;\n${ENCODE}\n${DECODE}\n`+shader.fragmentShader;
    shader.fragmentShader=shader.fragmentShader.replace('#include <map_fragment>',`vec4 actorTexel=vec4(1.);
#ifdef USE_MAP
actorTexel=texture2D(map,vMapUv);
#endif
diffuseColor=vec4(1.,1.,1.,opacity*actorTexel.a);`);
    // Scene hemisphere/point/directional lights must not be added a second time.
    for(const chunk of ['lights_lambert_fragment','lights_fragment_begin','lights_fragment_maps','lights_fragment_end','aomap_fragment'])
      shader.fragmentShader=shader.fragmentShader.replace('#include <'+chunk+'>','');
    shader.fragmentShader=shader.fragmentShader.replace(
      'vec3 outgoingLight = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse + totalEmissiveRadiance;',
      'vec3 outgoingLight = actorDecode(actorEncode(actorTexel.rgb)*actorVertexColor) + totalEmissiveRadiance;');
  };
  material.customProgramCacheKey=()=>`native-actor-lighting-2-${state.capacity}`;material.needsUpdate=true;
}
