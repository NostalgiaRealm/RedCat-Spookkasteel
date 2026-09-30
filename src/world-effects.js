import * as THREE from 'three';
import { projectileLight } from './projectile-lighting.js';
import { transformMotionPoint } from './motions.js';
import { NativeTeleporterEffect, TELEPORT_EFFECT_SECONDS, TELEPORT_FLIGHT_SECONDS } from './teleporter-effects.js';
import { beamEndpoints } from './beam-contacts.js';
import { DestructibleEffects } from './destructible-effects.js';
import { NativeFairyEffect, FAIRY_TEXTURES } from './fairy-effects.js';
import { EnemyDeathEffects } from './enemy-death-effects.js';
import {GARGOYLE_BLAST_TEXTURE,gargoyleBlastQuads} from './gargoyle-blast.js';
import { EnemyCombatEffects } from './enemy-combat-effects.js';
import {SCORE_TEXTURES,PICKUP_TEXTURE,rewardScoreQuad,pickupTrailQuads} from './reward-effects.js';
import { DecalEffects, decalTextureKey } from './decal-effects.js';
import { nativeCoronaRadius, saveBeaconUv, CoronaVisibilityCache } from './presentation-native.js';
import { impactLight } from './projectile-impacts.js';
import { patchWorldLightShader } from './world-lighting-material.js';

const clamp=(v,a=0,b=1)=>Math.max(a,Math.min(b,v));
const number=(e,key,fallback=0)=>Number.isFinite(Number(e[key]))&&e[key]!==''?Number(e[key]):fallback;
const vec=(value,fallback=[0,0,0])=>value?String(value).trim().split(/\s+/).map(Number):[...fallback];
const color=value=>vec(value,[255,255,255]).map(v=>clamp(v/255));
const mix=(a,b,t)=>a+(b-a)*t;
const textureKey=(bitmap,alpha)=>`${bitmap}|${alpha}`.toLowerCase();
const EFFECT_CLASSES=new Set(['EffectSpoutEntity','EffectCoronaEntity','EffectBeamEntity','DynamicLightEntity','SavePoint','TeleporterFX','Fairy']);
const BEAM=textureKey('beam.bmp','beam_a.bmp');
const ENERGY=textureKey('energybeam.bmp','energybeam_a.bmp');
const SPARK=textureKey('spark8.bmp','spark8_a.bmp');
const BLAST=textureKey('blast.bmp','blast_a.bmp');
const FLEURI=textureKey('fleuri.bmp','fleuri_a.bmp');
const CORONA=textureKey('Coreff.bmp','Coreff_a.bmp');

// Genesis light function strings encode normalized values a=0 ... z=1.
export function lightFunction(pattern,time,duration,interpolate=false,fallback=0) {
  if(!pattern||duration<=0)return fallback;
  const phase=((time/duration)%1+1)%1*pattern.length,index=Math.floor(phase);
  const value=i=>clamp((pattern.charCodeAt(i%pattern.length)-97)/25);
  return interpolate?mix(value(index),value(index+1),phase-index):value(index);
}

export function coronaRadius(entity,distance) {
  const low=number(entity,'RadiusDistanceMin',100),high=number(entity,'RadiusDistanceMax',1000);
  return mix(number(entity,'RadiusMin',1),number(entity,'RadiusMax',10),clamp((distance-low)/Math.max(.001,high-low)));
}

// CRcSavePoint 0x46c090/0x46bd00: six 60-degree spokes, then one upward
// ray. Native timers are 600 ms between starts and 400 ms for extension.
export function saveBeaconGeometry(origin,age,ceilingY=origin[1]+200) {
  const crystal=[origin[0],origin[1]-.5,origin[2]],rays=[];
  for(let i=0;i<7;i++) {
    const progress=clamp((age-(i+1)*.6)/.4);if(progress<=0)continue;
    const angle=(i+1)*Math.PI/3;
    const start=i<6?[origin[0]+Math.sin(angle)*11,origin[1]-23.5,origin[2]+Math.cos(angle)*11]:crystal;
    const target=i<6?crystal:[origin[0],ceilingY,origin[2]];
    rays.push({start,end:start.map((v,j)=>mix(v,target[j],progress)),width:5,color:[1,1,1],opacity:150/255,...saveBeaconUv(age,i)});
  }
  const flashAge=age-4;
  const glowRadius=flashAge<0?0:flashAge<=.2?mix(.8,50,flashAge/.2):25;
  return {rays,glowRadius,crystal};
}

function random(seed) {let s=seed>>>0;return ()=>{s=(Math.imul(s,1664525)+1013904223)>>>0;return s/4294967296;};}
function hash(name) {let h=2166136261;for(const c of name)h=Math.imul(h^c.charCodeAt(0),16777619);return h>>>0;}

export function spoutParticle(entity,origin,direction,seed,birth=0) {
  const rnd=random(seed),pick=(a,b)=>mix(number(entity,a),number(entity,b),rnd());
  const axis=new THREE.Vector3(...direction).normalize();if(axis.lengthSq()<.1)axis.set(0,1,0);
  const tangent=new THREE.Vector3(Math.abs(axis.y)<.95?0:1,Math.abs(axis.y)<.95?1:0,0).cross(axis).normalize();
  const side=new THREE.Vector3().crossVectors(axis,tangent),angle=pick('AngleMin','AngleMax')*Math.PI/180,azimuth=rnd()*Math.PI*2;
  const radius=Math.sqrt(rnd())*number(entity,'StartRadius'),offsetAngle=rnd()*Math.PI*2;
  const velocity=axis.clone().multiplyScalar(Math.cos(angle)).addScaledVector(tangent,Math.sin(angle)*Math.cos(azimuth)).addScaledVector(side,Math.sin(angle)*Math.sin(azimuth)).multiplyScalar(pick('SpeedMin','SpeedMax'));
  const position=new THREE.Vector3(...origin).addScaledVector(tangent,radius*Math.cos(offsetAngle)).addScaledVector(side,radius*Math.sin(offsetAngle));
  return {position:position.toArray(),velocity:velocity.toArray(),life:Math.max(.01,pick('LifeSecondsMin','LifeSecondsMax')),birth,gravity:number(entity,'Gravity'),seed};
}

export function sampleParticle(entity,particle,time) {
  const age=Math.max(0,time-particle.birth),t=clamp(age/particle.life);
  const from=color(entity.ColourFrom),to=color(entity.ColourTo);
  return {position:particle.position.map((v,i)=>v+particle.velocity[i]*age-(i===1?.5*particle.gravity*age*age:0)),
    size:number(entity,'Scale',1)*mix(number(entity,'SizePercentageStart',100),number(entity,'SizePercentageEnd',100),t)/100,
    opacity:mix(number(entity,'AlphaPercentageStart',100),number(entity,'AlphaPercentageEnd',0),t)/100,
    color:from.map((v,i)=>mix(v,to[i],entity.ColourCycling==='1'?t:0)),alive:age<particle.life};
}

// All flames with the same artwork share one draw call; no per-particle lights.
class BillboardBatch {
  constructor(world,map,additive=false,capacity=8192,depthTest=true) {
    this.world=world;this.capacity=capacity;this.count=0;
    const source=new THREE.PlaneGeometry(1,1),geometry=world.track(new THREE.InstancedBufferGeometry());
    geometry.index=source.index;geometry.attributes.position=source.attributes.position;geometry.attributes.uv=source.attributes.uv;
    this.positions=new THREE.InstancedBufferAttribute(new Float32Array(capacity*3),3).setUsage(THREE.DynamicDrawUsage);
    this.sizes=new THREE.InstancedBufferAttribute(new Float32Array(capacity*2),2).setUsage(THREE.DynamicDrawUsage);
    this.colors=new THREE.InstancedBufferAttribute(new Float32Array(capacity*4),4).setUsage(THREE.DynamicDrawUsage);
    this.rotations=new THREE.InstancedBufferAttribute(new Float32Array(capacity),1).setUsage(THREE.DynamicDrawUsage);
    this.diagonalScales=new THREE.InstancedBufferAttribute(new Float32Array(capacity*2),2).setUsage(THREE.DynamicDrawUsage);
    geometry.setAttribute('effectDiagonal',this.diagonalScales);geometry.setAttribute('effectRotation',this.rotations);
    geometry.setAttribute('effectPosition',this.positions);geometry.setAttribute('effectSize',this.sizes);geometry.setAttribute('effectColor',this.colors);geometry.instanceCount=0;
    const material=world.track(new THREE.ShaderMaterial({uniforms:{map:{value:map}},transparent:true,depthWrite:false,depthTest,blending:additive?THREE.AdditiveBlending:THREE.NormalBlending,
      vertexShader:`attribute vec3 effectPosition;attribute vec2 effectSize;attribute vec4 effectColor;attribute float effectRotation;attribute vec2 effectDiagonal;varying vec2 effectUv;varying vec4 effectTint;void main(){effectUv=uv;effectTint=effectColor;vec4 p=modelViewMatrix*vec4(effectPosition,1.);float c=cos(effectRotation),s=sin(effectRotation);p.xy+=mat2(c,s,-s,c)*(position.xy*effectSize*(position.x*position.y<0.?effectDiagonal.x:effectDiagonal.y));gl_Position=projectionMatrix*p;}`,
      fragmentShader:`uniform sampler2D map;varying vec2 effectUv;varying vec4 effectTint;void main(){gl_FragColor=texture2D(map,effectUv)*effectTint;if(gl_FragColor.a<.003)discard;
#include <tonemapping_fragment>
#include <colorspace_fragment>
}` }));
    this.mesh=new THREE.Mesh(geometry,material);this.mesh.frustumCulled=false;this.mesh.renderOrder=2;world.scene.add(this.mesh);
  }
  add(position,width,height,tint,opacity,rotation=0,diagonalScale=[1,1]) {if(this.count>=this.capacity||opacity<=0)return;const i=this.count++;this.positions.setXYZ(i,...position);this.sizes.setXY(i,width,height);this.colors.setXYZW(i,...tint,clamp(opacity));this.rotations.setX(i,rotation);this.diagonalScales.setXY(i,...diagonalScale);}
  flush(){this.mesh.geometry.instanceCount=this.count;this.mesh.visible=this.count>0;for(const a of [this.positions,this.sizes,this.colors,this.rotations,this.diagonalScales])a.needsUpdate=true;}
}

class BeamBatch {
  constructor(world,map,capacity=512) {
    this.world=world;this.count=0;this.capacity=capacity;
    const geometry=world.track(new THREE.BufferGeometry());
    this.positions=new THREE.BufferAttribute(new Float32Array(capacity*18),3).setUsage(THREE.DynamicDrawUsage);
    this.colors=new THREE.BufferAttribute(new Float32Array(capacity*24),4).setUsage(THREE.DynamicDrawUsage);
    const uv=new Float32Array(capacity*12);for(let i=0;i<capacity;i++)uv.set([0,0,1,0,0,1,1,0,1,1,0,1],i*12);
    this.uvs=new THREE.BufferAttribute(uv,2).setUsage(THREE.DynamicDrawUsage);
    geometry.setAttribute('position',this.positions);geometry.setAttribute('color',this.colors);geometry.setAttribute('uv',this.uvs);geometry.setDrawRange(0,0);
    this.mesh=new THREE.Mesh(geometry,world.track(new THREE.MeshBasicMaterial({map,vertexColors:true,transparent:true,depthWrite:false,side:THREE.DoubleSide})));
    this.mesh.frustumCulled=false;this.mesh.renderOrder=1;world.scene.add(this.mesh);
  }
  add(ray,camera) {
    if(this.count>=this.capacity)return;
    const start=new THREE.Vector3(...ray.start),end=new THREE.Vector3(...ray.end),side=new THREE.Vector3().crossVectors(end.clone().sub(start),camera.clone().sub(start));
    if(side.lengthSq()<1e-10)side.set(1,0,0);side.normalize().multiplyScalar(ray.width/2);
    const points=[start.clone().sub(side),start.clone().add(side),end.clone().sub(side),start.clone().add(side),end.clone().add(side),end.clone().sub(side)];
    this.addPoints(points,ray.color,ray.opacity,ray.uvStart,ray.uvEnd);
  }
  addDisc(position,radius,color,opacity) {
    const [x,y,z]=position,points=[[-1,-1],[1,-1],[-1,1],[1,-1],[1,1],[-1,1]].map(([a,b])=>new THREE.Vector3(x+a*radius,y,z+b*radius));
    this.addPoints(points,color,opacity);
  }
  addPoints(points,color,opacity,uvStart=0,uvEnd=1,uvs=null,colors=null) {
    if(this.count>=this.capacity)return;
    for(let i=0;i<6;i++){const index=this.count*6+i;this.positions.setXYZ(index,...points[i].toArray());this.colors.setXYZW(index,...(colors?.[i]||color),opacity);this.uvs.setXY(index,uvs?.[i][0]??[0,1,0,1,1,0][i],uvs?.[i][1]??[uvStart,uvStart,uvEnd,uvStart,uvEnd,uvEnd][i]);}
    this.count++;
  }
  flush(){this.mesh.geometry.setDrawRange(0,this.count*6);this.mesh.visible=this.count>0;this.positions.needsUpdate=this.colors.needsUpdate=this.uvs.needsUpdate=true;}
}

export class WorldEffects {
  static async create(world,gameplay) {
    const response=await fetch('assets/effects/manifest.json');if(!response.ok)throw new Error('Ontbrekende originele effecten');
    const manifest=await response.json(),effects=new WorldEffects(world,gameplay,manifest);
    const textures=await Promise.all(Object.entries(manifest.textures).map(async([key,entry])=>{
      const map=await world.texture('assets/effects/'+entry.file);
      // Blast UVs are copied from Genesis: V=1 is the translucent bottom
      // of kaboom_a at the red tail, V=0 the bright yellow head. Billboard
      // effects use the opposite convention; flipping this map hides its fade.
      map.flipY=key!==GARGOYLE_BLAST_TEXTURE;map.wrapS=map.wrapT=THREE.ClampToEdgeWrapping;
      if(key===ENERGY)map.wrapT=THREE.RepeatWrapping;
      return [key,map];
    }));
    const decals=new Set(gameplay.objects.filter(o=>o.entity.classname==='EffectDecalEntity').map(o=>decalTextureKey(o.entity)));
    for(const [key,map]of textures) {
      if(decals.has(key))continue;
      if(SCORE_TEXTURES.includes(key)||key===PICKUP_TEXTURE||key===GARGOYLE_BLAST_TEXTURE){effects.beamBatches.set(key,new BeamBatch(world,map,key===PICKUP_TEXTURE?640:128));continue;}
      if([BEAM,ENERGY,BLAST,FLEURI].includes(key))effects.beamBatches.set(key,new BeamBatch(world,map));
      if(![BEAM,ENERGY,BLAST].includes(key))effects.batches.set(key,new BillboardBatch(world,map,key===CORONA||key===SPARK));
      // Native coronas trace visibility and fade their radius; they bypass
      // the depth test so an occluded halo can finish fading. Beacons retain
      // their separate depth-tested CORONA batch.
      if(key===CORONA)effects.coronaBatch=new BillboardBatch(world,map,true,512,false);
    }
    // CFairy draws L7 twice, then L8, then its white core. Keeping manifest
    // alphabetical order covered the white centre with the coloured rays.
    [FAIRY_TEXTURES.rays,FAIRY_TEXTURES.halo,FAIRY_TEXTURES.core,FAIRY_TEXTURES.star].forEach((key,i)=>{const batch=effects.batches.get(key);if(batch)batch.mesh.renderOrder=3+i;});
    effects.destructibles=await DestructibleEffects.create(world,gameplay);
    effects.enemyDeaths=new EnemyDeathEffects(world,gameplay);
    effects.enemyCombat=new EnemyCombatEffects(world,gameplay);
    effects.decals=new DecalEffects(world,gameplay,new Map(textures));
    effects.attachLights();effects.update(0);return effects;
  }
  constructor(world,gameplay,manifest) {
    this.world=world;this.gameplay=gameplay;this.manifest=manifest;this.entries=new Map();this.batches=new Map();this.beamBatches=new Map();this.beams=[];this.lights=[];
    this.coronaVisibility=new CoronaVisibilityCache();this.cameraForward=new THREE.Vector3();
    for(const object of gameplay.objects)if(EFFECT_CLASSES.has(object.entity.classname)) {
      const state={object,active:false,age:Math.max(0,object.effectAge||0),particles:[],nextSpawn:0,serial:0,opacity:0};
      if(object.entity.classname==='Fairy') {
        state.fairy=NativeFairyEffect.restore(object.fairyState);
        if(state.fairy){state.active=state.fairy.active;state.age=state.fairy.age;state.resumeFairyAudio=state.active;}
        object.fairySnapshot=()=>state.fairy?.snapshot();
      }
      this.entries.set(object.id,state);
    }
  }
  position(object) {const pose=this.gameplay.scripts?.modelTransforms.get(object.modelIndex);return pose?transformMotionPoint(object.position,pose.origin,pose):object.position;}
  endpoint(name,fallback) {const object=this.gameplay.find(name)[0];return object?this.position(object):fallback;}
  attachLights() {
    // Fixed slots avoid shader recompiles as Davi-Script switches lamps on/off.
    this.lightPositions=Array.from({length:8},()=>new THREE.Vector3());this.lightColors=Array.from({length:8},()=>new THREE.Color(0));this.lightRadii=new Float32Array(8);
    const atlas=this.world.level?.mesh.lightmap;
    this.lightCount={value:0};this.lightUniforms={effectLightPosition:{value:this.lightPositions},effectLightColor:{value:this.lightColors},
      effectLightRadius:{value:this.lightRadii},effectLightCount:this.lightCount,effectAtlasSize:{value:new THREE.Vector2(atlas?.width||1,atlas?.height||1)}};
    this.pointLights=Array.from({length:8},()=>{const light=new THREE.PointLight(0,0,1,1);this.world.scene.add(light);return light;});
    this.patchedMaterials=[];
    for(const meshes of this.world.modelMeshes?.values()||[])for(const mesh of meshes) {
      const material=mesh.material;if(!material?.isMeshBasicMaterial||!material.lightMap||!mesh.geometry.attributes.nativeLightU||this.patchedMaterials.some(p=>p.material===material))continue;
      const previous=material.onBeforeCompile,cacheKey=material.customProgramCacheKey;
      this.patchedMaterials.push({material,previous,cacheKey});
      material.onBeforeCompile=(shader,renderer)=>{
        previous.call(material,shader,renderer);
        patchWorldLightShader(shader,this.lightUniforms);
      };
      material.customProgramCacheKey=()=>cacheKey.call(material)+'-original-bsp-lightmaps-v2';material.needsUpdate=true;
    }
  }
  update(dt) {
    dt=Math.max(0,Math.min(.25,dt));this.beams=[];this.lights=[];
    for(const batch of [...this.batches.values(),...this.beamBatches.values()])batch.count=0;
    if(this.coronaBatch)this.coronaBatch.count=0;
    const eye=this.world.camera.position.toArray(),direction=(this.world.camera.getWorldDirection?.(this.cameraForward)||this.cameraForward.set(0,0,-1)).toArray(),coronas=[];
    for(const state of this.entries.values())if(state.object.entity.classname==='EffectCoronaEntity') {
      const {object}=state,origin=this.position(object);
      coronas.push({id:object.id,origin,enabled:object.enabled!==false&&object.visible!==false,
        inFront:origin.reduce((sum,value,i)=>sum+(value-eye[i])*direction[i],0)>=0});
    }
    this.coronaVisibility.update(dt,coronas,candidate=>
      this.world.collider.trace(eye,candidate.origin,[0,0,0],[0,0,0],this.world.physicalModels,null).fraction>=1);
    for(const state of this.entries.values()) {
      const {object}=state,e=object.entity;
      if(e.classname==='Fairy'){this.updateFairy(state,dt);continue;}
      const enabled=object.enabled!==false&&object.visible!==false,previousAge=state.age;
      if(enabled&&!state.active){state.nextSpawn=state.clock||0;state.serial=0;}
      if(!enabled&&state.active){state.age=0;state.nextSpawn=0;object.effectAge=0;if(e.classname==='SavePoint')this.beaconSound(object,true);}
      if(!enabled&&e.classname==='TeleporterFX')this.teleporterLoop(state,false);
      state.active=enabled;if(enabled){state.age+=dt;object.effectAge=state.age;}
      const origin=this.position(object);
      if(e.classname==='EffectSpoutEntity')this.updateSpout(state,origin,dt);
      else if(e.classname==='EffectCoronaEntity') {
        if(dt>0)state.radius=nativeCoronaRadius(state.radius||0,e,Math.hypot(...origin.map((value,i)=>value-eye[i])),
          enabled&&this.coronaVisibility.visible(object.id),dt);
        const radius=state.radius||0;
        // 0x57add3 submits radius * .25 as a Genesis textured-point SCALE.
        // Its full extent is bitmap dimensions * scale, not radius * 2.
        // Coreff is 64x64: button/candle halos were eight times too small.
        const artwork=this.manifest.textures[CORONA],scale=radius*.25;
        if(radius>0&&artwork)this.coronaBatch?.add(origin,artwork.width*scale,artwork.height*scale,color(e.Color),1);
      } else if(enabled&&e.classname==='EffectBeamEntity') {
        const endpoints=beamEndpoints(this.gameplay,object,(a,b)=>this.world.collider.trace(a,b,[0,0,0],[0,0,0],this.world.physicalModels,null));
        if(endpoints)this.addBeam({...endpoints,width:number(e,'Width',5),color:color(e.Color),opacity:number(e,'ColorAlpha',255)/255},BEAM);
      } else if(enabled&&e.classname==='TeleporterFX') {
        this.updateTeleporter(state,origin,dt);
      } else if(enabled&&e.classname==='SavePoint') {
        for(let i=0;i<7;i++) {
          const start=(i+1)*.6,end=start+.4;
          if(previousAge<start&&state.age>=start)this.beaconSound(object,false,i===6?1.5:1);
          if(i<6&&previousAge<end&&state.age>=end)this.beaconSound(object,true);
        }
        if(!Number.isFinite(state.ceilingY)){const top=[origin[0],origin[1]+10000,origin[2]],hit=this.world.collider.trace(origin,top,[0,0,0],[0,0,0],this.world.physicalModels);state.ceilingY=hit.fraction<1?hit.end[1]:origin[1]+200;}
        const beacon=saveBeaconGeometry(origin,state.age,state.ceilingY);
        for(const ray of beacon.rays)this.addBeam(ray,ENERGY);
        if(beacon.glowRadius)this.batches.get(CORONA)?.add(beacon.crystal,beacon.glowRadius*2,beacon.glowRadius*2,[173/255,235/255,1],180/255);
      } else if(enabled&&e.classname==='DynamicLightEntity') {
        const f=lightFunction(e.ColorFunction,state.age,number(e,'ColorTime'),e.ColorInterpolateValues==='1',e.StartZValues==='1'?1:0);
        const r=lightFunction(e.RadiusFunction,state.age,number(e,'RadiusTime'),e.RadiusInterpolateValues==='1',e.StartZValues==='1'?1:0);
        const a=color(e.ColorA),z=color(e.ColorZ);
        this.lights.push({position:origin,color:a.map((v,i)=>mix(v,z[i],f)),radius:mix(number(e,'RadiusA'),number(e,'RadiusZ'),r),castShadow:number(e,'CastShadow')!==0});
      }
    }
    this.destructibles?.update(dt,this.batches);
    this.enemyDeaths?.update(this.batches);
    this.enemyCombat?.update(this.batches);
    const blastBatch=this.beamBatches.get(GARGOYLE_BLAST_TEXTURE);
    if(blastBatch)for(const effect of this.gameplay.gargoyleBlasts||[])for(const quad of gargoyleBlastQuads(effect,this.world.camera.position.toArray()))
      blastBatch.addPoints(quad.points.map(p=>new THREE.Vector3(...p)),[1,1,1],quad.opacity,0,1,quad.uvs,quad.colors);
    this.updateRewards(eye);
    this.decals?.update();
    for(const projectile of this.gameplay.projectiles||[]) {
      const light=projectileLight(projectile,this.gameplay.settings,this.gameplay.difficulty);
      if(light)this.lights.push(light);
    }
    for(const impact of this.gameplay.projectileImpacts||[]) {
      const light=impactLight(impact,this.gameplay.time);if(light)this.lights.push(light);
    }
    this.world.syncActorLighting?.(this.lights);
    for(const batch of [...this.batches.values(),...this.beamBatches.values()])batch.flush();
    this.coronaBatch?.flush();
    const camera=this.world.camera.position,nearest=this.lights.filter(lamp=>lamp.radius>0).sort((a,b)=>camera.distanceToSquared(new THREE.Vector3(...a.position))-camera.distanceToSquared(new THREE.Vector3(...b.position))).slice(0,8);
    if(this.lightCount)this.lightCount.value=nearest.length;
    for(let i=0;i<8;i++){const lamp=nearest[i],light=this.pointLights[i];if(!light)continue;this.lightRadii[i]=lamp?.radius||0;light.intensity=lamp?1:0;if(lamp){this.lightPositions[i].fromArray(lamp.position);this.lightColors[i].fromArray(lamp.color);light.position.copy(this.lightPositions[i]);light.color.copy(this.lightColors[i]).convertSRGBToLinear();light.distance=lamp.radius;}}
  }
  updateRewards(camera) {
    // Gameplay owns the clock and records: redraws cannot emit twice, pause
    // freezes the effect and a saved game resumes its remaining lifetime.
    for(const effect of this.gameplay.rewardEffects||[]) {
      const score=rewardScoreQuad(effect,this.gameplay.time,camera);
      if(score)this.beamBatches.get(score.texture)?.addPoints(score.points.map(p=>new THREE.Vector3(...p)),[1,1,1],score.opacity);
      for(const trail of pickupTrailQuads(effect,this.gameplay.time))
        this.beamBatches.get(trail.texture)?.addPoints(trail.points.map(p=>new THREE.Vector3(...p)),trail.color,trail.opacity,0,1,trail.uvs);
    }
  }
  updateSpout(state,origin,dt) {
    const e=state.object.entity,key=textureKey(e.BitmapFileName,e.BitmapAlphaFileName),batch=this.batches.get(key),entry=this.manifest.textures[key];if(!batch||!entry)return;
    const duration=number(e,'LifeTimeSecs'),spawning=state.active&&(!duration||state.age<=duration);
    const clock=state.clock=(state.clock||0)+dt;
    // Capped by time and authored particle lifetime, rather than frame rate.
    let guard=0;
    while(spawning&&state.nextSpawn<=clock&&guard++<128) {
      const seed=hash(state.object.id)+state.serial++,rnd=random(seed),delay=mix(number(e,'DelaySecondsMin',.1),number(e,'DelaySecondsMax',.3),rnd());
      const target=this.endpoint(e.SpoutDirection,[origin[0],origin[1]+1,origin[2]]),direction=target.map((v,i)=>v-origin[i]);
      state.particles.push(spoutParticle(e,origin,direction,seed,state.nextSpawn));state.nextSpawn+=Math.max(.01,delay);
    }
    state.particles=state.particles.filter(p=>{const sample=sampleParticle(e,p,clock);if(sample.alive)batch.add(sample.position,entry.width*sample.size,entry.height*sample.size,sample.color,sample.opacity);return sample.alive;});
  }
  updateTeleporter(state,origin,dt) {
    const {object}=state,e=object.entity;
    if(!state.teleporterBounds) {
      const trace=y=>this.world.collider.trace(origin,[origin[0],y,origin[2]],[0,0,0],[0,0,0],this.world.physicalModels,null);
      const floor=trace(origin[1]-10000),ceiling=trace(origin[1]+10000);
      state.teleporterBounds={floorY:floor.fraction<1?floor.end[1]:origin[1]-30,ceilingY:ceiling.fraction<1?ceiling.end[1]:origin[1]+200};
    }
    const before=object.teleportEffectAge;
    let startup=false;
    if(!state.teleporter) {
      const waypoints=Array.from({length:4},(_,i)=>this.gameplay.find(e['TeleporterFXWP'+i])[0]).filter(Boolean).map(o=>this.position(o));
      state.teleporter=NativeTeleporterEffect.restore(object.teleporterState);
      if(!state.teleporter) {
        state.teleporter=new NativeTeleporterEffect({origin,...state.teleporterBounds,waypoints,seed:hash(object.id)});
        // Legacy saves lack the bounded particle pool. Warm at most two
        // lifetimes, never replay an entire level's elapsed time on load.
        state.teleporter.advance(clamp(state.age-dt-(before||0),0,6));
        if(Number.isFinite(before)) {
          // The previous renderer clamped completed sequences to exactly7.
          // Loading one must not revive the newly recovered closing flash.
          const legacyAge=before===7?TELEPORT_EFFECT_SECONDS:before;
          state.teleporter.show();state.teleporter.advance(clamp(legacyAge,0,TELEPORT_EFFECT_SECONDS+3));
          startup=before===0;
          if(before>=TELEPORT_FLIGHT_SECONDS)object.teleportTerminalSoundSerial=object.teleportEffectSerial;
        }
      }
      state.teleportSerial=object.teleportEffectSerial;
      object.teleporterSnapshot=()=>state.teleporter.snapshot();
      delete object.teleporterState;
    } else if(state.teleportSerial!==object.teleportEffectSerial) {
      state.teleportSerial=object.teleportEffectSerial;startup=state.teleporter.show();
    }
    state.teleporter.advance(dt);
    if(state.teleporter.showAge!==null)object.teleportEffectAge=Math.min(TELEPORT_EFFECT_SECONDS,state.teleporter.showAge);
    const geometry=state.teleporter.geometry(this.world.camera.position.toArray());
    state.teleporterGeometry=geometry;
    for(const spark of geometry.sparks)this.batches.get(SPARK)?.add(spark.position,spark.size,spark.size,spark.color,spark.opacity);
    for(const ray of geometry.rays)this.addBeam(ray,ENERGY);
    for(const disc of geometry.discs) {
      const texture=disc.texture==='blast'?BLAST:FLEURI;
      if(disc.billboard)this.batches.get(texture)?.add(disc.position,disc.radius*2,disc.radius*2,[1,1,1],disc.opacity);
      else this.beamBatches.get(texture)?.addDisc(disc.position,disc.radius,[1,1,1],disc.opacity);
    }
    if(geometry.light)this.lights.push(geometry.light);
    if(startup)this.gameplay.emit?.('scriptSound',{id:`teleporter:${object.id}`,sound:'Magiev18.wav',volume:1,playbackRate:.5,nativeFrequency:true,spatial:true,position:[...origin]});
    if(geometry.stage==='terminal'&&object.teleportTerminalSoundSerial!==object.teleportEffectSerial) {
      object.teleportTerminalSoundSerial=object.teleportEffectSerial;
      this.gameplay.emit?.('scriptSound',{id:`portal-player:${object.id}:${object.teleportEffectSerial}`,sound:'Magiev1.wav',volume:1,playbackRate:1,nativeFrequency:true,spatial:true,position:[...origin],portalPhase:'terminal'});
    }
    this.teleporterLoop(state,geometry.active);
  }
  teleporterLoop(state,active) {
    if(!!state.teleporterLoopActive===active)return;
    state.teleporterLoopActive=active;
    // Native Show starts sound slot 2 alongside slot 0 at 0x4758d8;
    // sequence completion stops slot 2 at 0x475c94. Resume only the loop
    // after loading, without replaying its already-heard startup one-shot.
    this.gameplay.emit?.('scriptSound',{id:`teleporter-loop:${state.object.id}`,sound:'LV2snd7.wav',stop:!active,loop:true,volume:1.9,playbackRate:.075,nativeFrequency:true,spatial:true,position:[...this.position(state.object)]});
  }
  updateFairy(state,dt) {
    const {object}=state,e=object.entity,enabled=object.enabled!==false&&object.visible!==false,origin=this.position(object);
    const sound=(file,options={})=>this.gameplay.emit?.('scriptSound',{id:`fairy:${object.id}:${file}`,sound:file,volume:1,spatial:true,position:[...origin],...options});
    if(dt>0) {
      if(state.resumeFairyAudio) {
        state.resumeFairyAudio=false;
        if(enabled&&state.fairy?.active&&!state.fairy.stopRequested)sound('idlefee1.wav',{loop:true});
      }
      if(enabled&&!state.active) {
        const count=Math.max(0,Math.min(10,number(e,'NumberOfWayPoints')));
        const waypoints=Array.from({length:10},(_,i)=>e['FairyWP'+i]?this.gameplay.find(e['FairyWP'+i])[0]:null).filter(Boolean).slice(0,count).map(o=>this.position(o));
        const options={origin,waypoints,lifeTime:number(e,'LifeTime'),seed:hash(object.id)},savedAge=state.fairy?0:state.age;
        if(state.fairy)state.fairy.activate(options);
        else {state.fairy=new NativeFairyEffect(options);if(savedAge>0)state.fairy.advance(savedAge);}
        if(state.fairy.active) {
          // User-confirmed original cues: appearance once, then the idle
          // recording for this activation. Particle pulses stay silent.
          if(!savedAge)sound('gri5fx11.wav',{loop:false});
          sound('idlefee1.wav',{loop:true});
        } else object.enabled=false; // An expired legacy saved age cannot re-enable itself.
      }
      if(!state.fairy)return;
      if(!enabled)state.fairy.requestStop();
      // Let buffered dialogue finish with its fairy still present. A script
      // Disable remains immediate; only the automatic lifetime is held.
      state.fairy.lifeTime=this.gameplay.scripts?.cutscene&&this.gameplay.scripts.isDialoguePlaying?.()?0:number(e,'LifeTime');
      for(const event of state.fairy.advance(dt)) {
        if(event==='departure') {
          object.enabled=false;
          for(const file of ['gri5fx11.wav','ihealthl.wav','idlefee1.wav','Gri5fx11.wav','FairySprinkle1.wav'])sound(file,{stop:true});
          sound('Magiev12.wav');
        }
      }
      state.active=state.fairy.active;state.age=state.fairy.age;
      object.effectAge=state.active?state.age:0;
    }
    // update(0) refreshes draw buffers only: no timers, RNG, audio or
    // lifecycle transitions are advanced by rendering.
    if(!state.fairy)return;
    const geometry=state.fairy.geometry();
    state.fairyGeometry=geometry;
    for(const sprite of geometry.sprites)this.batches.get(sprite.texture)?.add(sprite.position,sprite.width,sprite.height,sprite.color,sprite.opacity,sprite.rotation,sprite.diagonalScale);
    for(const ray of geometry.rays)this.addBeam(ray,ENERGY);
    if(geometry.light)this.lights.push(geometry.light);
  }
  collectCutsceneFairies(ids=new Set()) {
    for(const [id,state] of this.entries)if(state.object.entity.classname==='Fairy'&&
      ((state.object.enabled!==false&&state.object.visible!==false)||state.fairy?.active||
        state.fairy?.pool.some(particle=>particle.active)||state.fairy?.trails.length))ids.add(id);
    return ids;
  }
  finishSkippedFairies(ids) {
    for(const id of ids) {
      const state=this.entries.get(id);if(!state||state.object.entity.classname!=='Fairy')continue;
      const {object}=state;object.enabled=false;object.effectAge=0;state.active=false;state.age=0;state.resumeFairyAudio=false;
      if(state.fairy) {
        state.fairy.active=false;state.fairy.stopRequested=false;state.fairy.trails=[];
        for(const particle of state.fairy.pool)particle.active=false;
      }
      state.fairyGeometry={sprites:[],rays:[],light:null};
      // Also stop voices left by an earlier source version. Skipping consumes
      // transient effects silently rather than starting a new departure cue.
      for(const file of ['gri5fx11.wav','ihealthl.wav','idlefee1.wav','Gri5fx11.wav','FairySprinkle1.wav','Magiev12.wav'])
        this.gameplay.emit?.('scriptSound',{id:`fairy:${id}:${file}`,sound:file,stop:true});
    }
  }
  addBeam(ray,key) {this.beams.push(ray);this.beamBatches.get(key)?.add(ray,this.world.camera.position);}
  beaconSound(object,stop=false,playbackRate=1) {this.gameplay.emit?.('scriptSound',{id:`beacon:${object.id}`,sound:'Magiev10.wav',stop,volume:.75,playbackRate,spatial:true,position:[...this.position(object)]});}
  dispose() {
    for(const state of this.entries.values()) {
      if(state.object.entity.classname==='TeleporterFX')this.teleporterLoop(state,false);
      if(state.object.entity.classname==='Fairy')delete state.object.fairySnapshot;
    }
    this.destructibles?.dispose();
    this.decals?.dispose();
    for(const {material,previous,cacheKey}of this.patchedMaterials||[]){material.onBeforeCompile=previous;material.customProgramCacheKey=cacheKey;material.needsUpdate=true;}
    for(const batch of [...this.batches.values(),...this.beamBatches.values()])batch.mesh.removeFromParent();
    this.coronaBatch?.mesh.removeFromParent();
    for(const light of this.pointLights||[])light.removeFromParent();
    this.entries.clear();this.batches.clear();this.beamBatches.clear();this.beams=[];this.lights=[];
  }
}
