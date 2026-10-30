import {renderProfile} from './render-quality.js';
import * as THREE from 'three';
import { projectileLight } from './projectile-lighting.js';
import { transformMotionPoint } from './motions.js';
import { NativeTeleporterEffect, TELEPORT_EFFECT_SECONDS, TELEPORT_FLIGHT_SECONDS } from './teleporter-effects.js';
import { beamEndpoints } from './beam-contacts.js';
import { DestructibleEffects } from './destructible-effects.js';
import { NativeFairyEffect, FAIRY_TEXTURES, FAIRY_RIBBON_TEXTURE } from './fairy-effects.js';
import { EnemyDeathEffects } from './enemy-death-effects.js';
import {GARGOYLE_BLAST_TEXTURE,gargoyleBlastQuads} from './gargoyle-blast.js';
import { EnemyCombatEffects } from './enemy-combat-effects.js';
import {SCORE_TEXTURES,PICKUP_TEXTURE,rewardScoreQuad,pickupTrailQuads} from './reward-effects.js';
import { DecalEffects, decalTextureKey } from './decal-effects.js';
import { nativeCoronaRadius, saveBeaconUv, CoronaVisibilityCache } from './presentation-native.js';
import { impactLight } from './projectile-impacts.js';
import {nativeExplosionLight} from './explosion-light-native.js';
import { patchWorldLightShader } from './world-lighting-material.js';
import { PlayerWorldLight } from './player-world-light.js';
import {TorchFlames} from './torch-flames.js';
import {WorldLightShadows} from './world-light-shadows.js';
import {NativeSpoutEffect,restoreSpoutSnapshots} from './spout-effects.js';
import {explosionTextureFilter} from './explosion-variants.js';
import {FLASH_TEXTURE,FLASH_TRIANGLE,FLASH_UVS,flashRays} from './flash-effect-native.js';
import {ELECTRIC_SPARK_TEXTURE} from './electric-explosion-native.js';

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
// AdamEffectTexturedTrail: U follows the segment, V crosses its width.
const FAIRY_RIBBON_UVS=[[0,1],[0,0],[1,1],[0,0],[1,0],[1,1]];

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

function hash(name) {let h=2166136261;for(const c of name)h=Math.imul(h^c.charCodeAt(0),16777619);return h>>>0;}

const EFFECT_BUFFER_IDLE_SECONDS=10;

function effectAttribute(geometry,name,previous,count,itemSize,instanced,preserve) {
  const array=new Float32Array(count*itemSize);
  if(preserve&&previous)array.set(previous.array.subarray(0,Math.min(array.length,previous.array.length)));
  const Type=instanced?THREE.InstancedBufferAttribute:THREE.BufferAttribute;
  const attribute=new Type(array,itemSize).setUsage(THREE.DynamicDrawUsage);
  geometry.setAttribute(name,attribute);return attribute;
}

function disposeEffectBuffer(batch) {
  // WebGLAttributes cannot resize an uploaded attribute. Dispose while the
  // old attributes are still attached, then replace them on this same owned
  // geometry. Three also releases the VAO/instance-count limit at this point.
  batch.geometry.dispose();delete batch.geometry._maxInstanceCount;
  batch.gpuReleased=true;
}

function growEffectBuffer(batch,needed) {
  if(needed<=batch.bufferCapacity)return;
  let size=Math.max(1,batch.bufferCapacity);
  while(size<needed&&size<batch.capacity)size=Math.min(batch.capacity,size*2);
  batch.resizeBuffer(size);
}

function effectBufferActivity(batch,now) {
  if(batch.count>0){batch.lastActive=now;batch.gpuReleased=false;return;}
  if(batch.gpuReleased||now-batch.lastActive<EFFECT_BUFFER_IDLE_SECONDS)return;
  if(batch.bufferCapacity!==batch.initialBufferCapacity)batch.resizeBuffer(batch.initialBufferCapacity,false);
  else disposeEffectBuffer(batch);
}

function beginEffectView(batch,frustum) {
  // Match the camera-local world/actor artwork range without changing any
  // emitter clock, save state or audio scheduling. Whole primitive bounds
  // below keep a nearby edge of a large flame, halo or ribbon visible.
  batch.frustum=frustum;
  batch.rooms=batch.world.geometryStream?.rooms;
  const camera=batch.world.camera,range=batch.world.geometryStream?.viewRadius;
  batch.viewRange=camera&&Number.isFinite(range)&&range>=0?range:Infinity;
  if(batch.viewRange!==Infinity) {
    if(camera.matrixWorld)batch.viewPosition.setFromMatrixPosition(camera.matrixWorld);
    else batch.viewPosition.copy(camera.position);
  }
}

// 0: outside; 1: intersects; 2: entirely inside the view. Reuse the
// fixed-tick cloud bounds across high-refresh redraws without pausing its
// simulation. Only a fully enclosed cloud may bypass per-particle tests.
function spoutCloudVisibility(state,frustum) {
  const bounds=state.spoutDrawBounds||(state.spoutDrawBounds={box:new THREE.Box3()});
  // A cloud crossing a view edge still needs the original individual tests.
  // Delay this optional broad-phase probe briefly in that case, rather than
  // repeating both tests on every high-refresh frame. No draw is omitted.
  if(bounds.nextProbe>state.spout.ticks&&bounds.spout===state.spout&&bounds.particles===state.particles&&bounds.count===state.particles.length)return 1;
  if(bounds.spout!==state.spout||bounds.ticks!==state.spout.ticks||bounds.particles!==state.particles||bounds.count!==state.particles.length||!Number.isSafeInteger(state.spout.ticks)) {
    bounds.box.makeEmpty();let size=0,finite=true;
    const min=bounds.box.min,max=bounds.box.max;
    for(const p of state.particles)if(!(p.opacity<=0)) {
      const [x,y,z]=p.position;
      if(!Number.isFinite(x+y+z+p.size)){finite=false;break;}
      min.x=Math.min(min.x,x);min.y=Math.min(min.y,y);min.z=Math.min(min.z,z);
      max.x=Math.max(max.x,x);max.y=Math.max(max.y,y);max.z=Math.max(max.z,z);
      size=Math.max(size,Math.abs(p.size));
    }
    // BillboardBatch's sphere includes the native spout shader's extra
    // half-unit XY quad. The small rounding margin also makes full-cloud
    // acceptance conservative at large world coordinates.
    if(finite&&!bounds.box.isEmpty()) {
      const extent=Math.max(Math.abs(min.x),Math.abs(min.y),Math.abs(min.z),Math.abs(max.x),Math.abs(max.y),Math.abs(max.z));
      bounds.box.expandByScalar(Math.hypot(size,size)*.5+Math.SQRT1_2+(extent+size+1)*1e-10);
      if(!Number.isFinite(min.x+min.y+min.z+max.x+max.y+max.z))finite=false;
    }
    bounds.finite=finite;bounds.spout=state.spout;bounds.ticks=state.spout.ticks;bounds.particles=state.particles;bounds.count=state.particles.length;
  }
  if(!bounds.finite)return 1;
  if(bounds.box.isEmpty())return 0;
  const min=bounds.box.min,max=bounds.box.max;let inside=true;
  for(const plane of frustum.planes) {
    const n=plane.normal;
    if(n.x*(n.x>=0?max.x:min.x)+n.y*(n.y>=0?max.y:min.y)+n.z*(n.z>=0?max.z:min.z)+plane.constant<0)return 0;
    if(n.x*(n.x>=0?min.x:max.x)+n.y*(n.y>=0?min.y:max.y)+n.z*(n.z>=0?min.z:max.z)+plane.constant<0)inside=false;
  }
  bounds.nextProbe=inside?0:state.spout.ticks+15;
  return inside?2:1;
}

// All flames with the same artwork share one draw call; no per-particle lights.
export class BillboardBatch {
  constructor(world,map,additive=false,capacity=8192,depthTest=true) {
    this.world=world;this.capacity=capacity;this.count=0;
    this.bufferCapacity=0;this.initialBufferCapacity=Math.min(capacity,64);this.lastActive=-Infinity;this.gpuReleased=true;
    this.sphere=new THREE.Sphere();this.frustum=null;this.viewPosition=new THREE.Vector3();this.viewRange=Infinity;
    const source=new THREE.PlaneGeometry(1,1),geometry=world.track(new THREE.InstancedBufferGeometry());
    this.geometry=geometry;
    geometry.index=source.index;geometry.attributes.position=source.attributes.position;geometry.attributes.uv=source.attributes.uv;
    this.resizeBuffer(this.initialBufferCapacity);geometry.instanceCount=0;
    const material=world.track(new THREE.ShaderMaterial({uniforms:{map:{value:map}},transparent:true,depthWrite:false,depthTest,blending:additive?THREE.AdditiveBlending:THREE.NormalBlending,
      vertexShader:`attribute vec3 effectPosition;attribute vec2 effectSize;attribute vec4 effectColor;attribute float effectRotation;attribute vec2 effectDiagonal;attribute float effectNativeSpout;varying vec2 effectUv;varying vec4 effectTint;
void main(){
  effectUv=uv;effectTint=effectColor;vec4 p;
  if(effectNativeSpout>.5){
    // CRcParticleSystem 0x468123 and death smoke 0x46e4b0 share the
    // 0x477d50 basis: each particle faces the
    // camera position, independently of camera roll or its view direction.
    vec3 toward=cameraPosition-effectPosition;
    if(dot(toward,toward)<1.e-12)toward=vec3(0.,0.,1.);
    vec3 reference=vec3(0.,toward.y<0.?-1.:1.,0.);
    if(all(lessThanEqual(abs(toward-reference),vec3(.1))))reference=vec3(0.,0.,toward.z<0.?-1.:1.);
    vec3 right=cross(toward,reference);
    // Native's raw-vector parallel check misses a camera exactly above
    // the emitter at other distances; keep that edge case finite.
    if(dot(right,right)<1.e-12)right=cross(toward,vec3(0.,0.,1.));
    right=normalize(right);vec3 up=normalize(cross(toward,right));
    if(toward.y>0.){right=-right;up=-up;}
    vec3 worldPosition=effectPosition+right*(position.x*effectSize.x)+up*(position.y*effectSize.y)+vec3(position.xy,0.);
    p=viewMatrix*vec4(worldPosition,1.);
    // Spout top-left UV is (1,0); death-smoke UV is (0,1).
    // These original maps upload with flipY=true.
    effectUv=effectNativeSpout>1.5?vec2(uv.x,1.-uv.y):vec2(1.-uv.x,uv.y);
  }else{
    p=modelViewMatrix*vec4(effectPosition,1.);float c=cos(effectRotation),s=sin(effectRotation);
    p.xy+=mat2(c,s,-s,c)*(position.xy*effectSize*(position.x*position.y<0.?effectDiagonal.x:effectDiagonal.y));
  }
  gl_Position=projectionMatrix*p;
}`,
      fragmentShader:`uniform sampler2D map;varying vec2 effectUv;varying vec4 effectTint;void main(){gl_FragColor=texture2D(map,effectUv)*effectTint;if(gl_FragColor.a<.003)discard;
#include <tonemapping_fragment>
#include <colorspace_fragment>
}` }));
    this.mesh=new THREE.Mesh(geometry,material);this.mesh.frustumCulled=false;this.mesh.renderOrder=2;world.scene.add(this.mesh);
  }
  resizeBuffer(size,preserve=true) {
    if(this.bufferCapacity)disposeEffectBuffer(this);
    const geometry=this.geometry;
    this.positions=effectAttribute(geometry,'effectPosition',this.positions,size,3,true,preserve);
    this.sizes=effectAttribute(geometry,'effectSize',this.sizes,size,2,true,preserve);
    this.colors=effectAttribute(geometry,'effectColor',this.colors,size,4,true,preserve);
    this.rotations=effectAttribute(geometry,'effectRotation',this.rotations,size,1,true,preserve);
    this.diagonalScales=effectAttribute(geometry,'effectDiagonal',this.diagonalScales,size,2,true,preserve);
    this.nativeSpouts=effectAttribute(geometry,'effectNativeSpout',this.nativeSpouts,size,1,true,preserve);
    this.bufferCapacity=size;
  }
  beginView(frustum=null){beginEffectView(this,frustum);}
  add(position,width,height,tint,opacity,rotation=0,diagonalScale=null,nativeSpout=0,skipFrustum=false) {
    if(this.count>=this.capacity||opacity<=0)return;
    let radius;
    if(this.viewRange!==Infinity) {
      const dx=position[0]-this.viewPosition.x,dy=position[1]-this.viewPosition.y,dz=position[2]-this.viewPosition.z,distance2=dx*dx+dy*dy+dz*dz;
      if(distance2>this.viewRange*this.viewRange) {
        radius=Math.hypot(width,height)*.5*Math.max(Math.abs(diagonalScale?.[0]??1),Math.abs(diagonalScale?.[1]??1))+(nativeSpout?Math.SQRT1_2:0);
        if(distance2>(this.viewRange+radius)**2)return;
      }
    }
    if(this.frustum&&!skipFrustum) {
      this.sphere.center.fromArray(position);
      this.sphere.radius=radius??(Math.hypot(width,height)*.5*Math.max(Math.abs(diagonalScale?.[0]??1),Math.abs(diagonalScale?.[1]??1))+(nativeSpout?Math.SQRT1_2:0));
      if(!this.frustum.intersectsSphere(this.sphere))return;
    }
    if(this.rooms?.active&&!this.rooms.sphereAllowed(position,radius??(Math.hypot(width,height)*.5*Math.max(Math.abs(diagonalScale?.[0]??1),Math.abs(diagonalScale?.[1]??1))+(nativeSpout?Math.SQRT1_2:0))))return;
    growEffectBuffer(this,this.count+1);
    const i=this.count++;this.positions.setXYZ(i,...position);this.sizes.setXY(i,width,height);this.colors.setXYZW(i,...tint,clamp(opacity));this.rotations.setX(i,rotation);this.diagonalScales.setXY(i,diagonalScale?.[0]??1,diagonalScale?.[1]??1);this.nativeSpouts.setX(i,nativeSpout);
  }
  flush(now=performance.now()/1000){growEffectBuffer(this,this.count);this.mesh.geometry.instanceCount=this.count;this.mesh.visible=this.count>0;for(const a of [this.positions,this.sizes,this.colors,this.rotations,this.diagonalScales,this.nativeSpouts])uploadEffectRange(a,this.count);effectBufferActivity(this,now);}
}

// Capacity is reserved for busy fights, not the amount of live artwork in
// every frame. Upload only the prefix used by the current draw, avoiding
// multi-megabyte transfers for a handful of flames on integrated graphics.
function uploadEffectRange(attribute,count) {
  if(count<=0)return;
  attribute.clearUpdateRanges();attribute.addUpdateRange(0,count*attribute.itemSize);attribute.needsUpdate=true;
}

const BEAM_U=[0,1,0,1,1,0],BEAM_V_END=[false,false,true,false,true,true];

/**
 * FlashEffect rays as the original draws them (0x465220): per ray one
 * kaboom2 triangle with per-vertex colour and alpha, in a plane facing the
 * camera. Ten triangles per FlashEffect; the buffers change only while a
 * flash runs.
 */
export class FlashRays {
  constructor(world,map,flashes) {
    const vertices=Math.max(1,flashes)*30;
    this.geometry=world.track(new THREE.BufferGeometry());
    this.positions=new THREE.BufferAttribute(new Float32Array(vertices*3),3).setUsage(THREE.DynamicDrawUsage);
    this.colors=new THREE.BufferAttribute(new Float32Array(vertices*4),4).setUsage(THREE.DynamicDrawUsage);
    this.uvs=new THREE.BufferAttribute(new Float32Array(vertices*2),2).setUsage(THREE.DynamicDrawUsage);
    this.geometry.setAttribute('position',this.positions);this.geometry.setAttribute('color',this.colors);this.geometry.setAttribute('uv',this.uvs);
    this.geometry.setDrawRange(0,0);this.count=0;this.capacity=vertices;
    this.right=new THREE.Vector3();this.up=new THREE.Vector3();
    this.mesh=new THREE.Mesh(this.geometry,world.track(new THREE.MeshBasicMaterial({map,vertexColors:true,transparent:true,depthWrite:false,side:THREE.DoubleSide})));
    this.mesh.frustumCulled=false;this.mesh.renderOrder=2;this.mesh.visible=false;world.scene.add(this.mesh);
  }
  begin(camera) {
    this.count=0;camera.updateMatrixWorld?.();
    this.right.setFromMatrixColumn(camera.matrixWorld,0).normalize();this.up.setFromMatrixColumn(camera.matrixWorld,1).normalize();
  }
  add(origin,ray) {
    if(this.count+3>this.capacity||!(ray.size>0))return;
    const c=Math.cos(ray.rotation),s=Math.sin(ray.rotation);
    FLASH_TRIANGLE.forEach(([tx,ty],corner)=>{
      const x=(c*tx-s*ty)*ray.size,y=(s*tx+c*ty)*ray.size,i=this.count++,colour=corner===2?ray.tip:ray.outer;
      this.positions.setXYZ(i,origin[0]+this.right.x*x+this.up.x*y,origin[1]+this.right.y*x+this.up.y*y,origin[2]+this.right.z*x+this.up.z*y);
      // The map uploads with flipY, so Genesis's top-left v becomes 1 - v.
      this.uvs.setXY(i,FLASH_UVS[corner][0],1-FLASH_UVS[corner][1]);this.colors.setXYZW(i,...colour);
    });
  }
  flush() {
    const drawn=this.count>0;this.mesh.visible=drawn;this.geometry.setDrawRange(0,this.count);
    if(!drawn)return;
    for(const attribute of [this.positions,this.colors,this.uvs]){attribute.clearUpdateRanges?.();attribute.needsUpdate=true;}
  }
}

export class BeamBatch {
  constructor(world,map,capacity=512) {
    this.world=world;this.count=0;this.capacity=capacity;
    this.bufferCapacity=0;this.initialBufferCapacity=Math.min(capacity,32);this.lastActive=-Infinity;this.gpuReleased=true;
    this.frustum=null;this.bounds=new THREE.Box3();this.viewPosition=new THREE.Vector3();this.viewRange=Infinity;
    this.start=new THREE.Vector3();this.end=new THREE.Vector3();this.side=new THREE.Vector3();
    this.direction=new THREE.Vector3();this.toward=new THREE.Vector3();
    this.points=Array.from({length:6},()=>new THREE.Vector3());
    const geometry=world.track(new THREE.BufferGeometry());
    this.geometry=geometry;this.resizeBuffer(this.initialBufferCapacity);geometry.setDrawRange(0,0);
    this.mesh=new THREE.Mesh(geometry,world.track(new THREE.MeshBasicMaterial({map,vertexColors:true,transparent:true,depthWrite:false,side:THREE.DoubleSide})));
    this.mesh.frustumCulled=false;this.mesh.renderOrder=1;world.scene.add(this.mesh);
  }
  resizeBuffer(size,preserve=true) {
    if(this.bufferCapacity)disposeEffectBuffer(this);
    const geometry=this.geometry;
    this.positions=effectAttribute(geometry,'position',this.positions,size*6,3,false,preserve);
    this.colors=effectAttribute(geometry,'color',this.colors,size*6,4,false,preserve);
    const previous=this.uvs;
    this.uvs=effectAttribute(geometry,'uv',null,size*6,2,false,false);
    for(let i=0;i<size;i++)this.uvs.array.set([0,0,1,0,0,1,1,0,1,1,0,1],i*12);
    if(preserve&&previous)this.uvs.array.set(previous.array.subarray(0,Math.min(this.uvs.array.length,previous.array.length)));
    this.bufferCapacity=size;
  }
  beginView(frustum=null){beginEffectView(this,frustum);}
  add(ray,camera,cameraDirection=null,uvs=null) {
    if(this.count>=this.capacity)return;
    const start=this.start.fromArray(ray.start),end=this.end.fromArray(ray.end),side=this.side;
    this.direction.subVectors(end,start);
    if(cameraDirection)this.toward.copy(cameraDirection);else this.toward.subVectors(camera,start);
    side.crossVectors(this.direction,this.toward);
    if(side.lengthSq()<1e-10)side.set(1,0,0);side.normalize().multiplyScalar(ray.width/2);
    const points=this.points;
    points[0].copy(start).sub(side);points[1].copy(start).add(side);points[2].copy(end).sub(side);
    points[3].copy(start).add(side);points[4].copy(end).add(side);points[5].copy(end).sub(side);
    this.addPoints(points,ray.color,ray.opacity,ray.uvStart,ray.uvEnd,uvs);
  }
  addDisc(position,radius,color,opacity) {
    if(this.count>=this.capacity)return;
    const [x,y,z]=position,points=this.points;
    for(let i=0;i<6;i++)points[i].set(x+(BEAM_U[i]?radius:-radius),y,z+(BEAM_V_END[i]?radius:-radius));
    this.addPoints(points,color,opacity);
  }
  addPoints(points,color,opacity,uvStart=0,uvEnd=1,uvs=null,colors=null) {
    if(this.count>=this.capacity)return;
    if(this.frustum||this.viewRange!==Infinity||this.rooms?.active) {
      // All six vertices are already in world space, including the final
      // ribbon width and Gargoyle artwork expansion. Enclose the complete
      // quad rather than culling its centre or either endpoint. Padding also
      // encloses Float32 upload rounding at the authored world coordinates.
      const box=this.bounds;box.makeEmpty();for(let i=0;i<6;i++)box.expandByPoint(points[i]);
      const magnitude=Math.max(Math.abs(box.min.x),Math.abs(box.min.y),Math.abs(box.min.z),Math.abs(box.max.x),Math.abs(box.max.y),Math.abs(box.max.z));
      box.expandByScalar(1e-5+magnitude*2**-22);
      if(this.viewRange!==Infinity&&box.distanceToPoint(this.viewPosition)>this.viewRange)return;
      if(this.frustum&&!this.frustum.intersectsBox(box))return;
      if(this.rooms?.active&&!this.rooms.boxAllowed(box.min,box.max))return;
    }
    growEffectBuffer(this,this.count+1);
    for(let i=0;i<6;i++) {
      const point=points[i],tint=colors?.[i]||color,p=(this.count*6+i)*3,c=(this.count*6+i)*4,u=(this.count*6+i)*2;
      this.positions.array[p]=point.x;this.positions.array[p+1]=point.y;this.positions.array[p+2]=point.z;
      this.colors.array[c]=tint[0];this.colors.array[c+1]=tint[1];this.colors.array[c+2]=tint[2];this.colors.array[c+3]=opacity;
      this.uvs.array[u]=uvs?.[i][0]??BEAM_U[i];this.uvs.array[u+1]=uvs?.[i][1]??(BEAM_V_END[i]?uvEnd:uvStart);
    }
    this.count++;
  }
  flush(now=performance.now()/1000){growEffectBuffer(this,this.count);this.mesh.geometry.setDrawRange(0,this.count*6);this.mesh.visible=this.count>0;for(const a of [this.positions,this.colors,this.uvs])uploadEffectRange(a,this.count*6);effectBufferActivity(this,now);}
}

export function nearestWorldLights(lights,camera,playerLight=null,maximum=8) {
  const candidates=[];
  for(const light of lights)if(light.radius>0) {
    const dx=camera.x-light.position[0],dy=camera.y-light.position[1],dz=camera.z-light.position[2];
    candidates.push({light,distance:dx*dx+dy*dy+dz*dz});
  }
  // Stable ties retain the original light order; player light keeps priority.
  candidates.sort((a,b)=>Number(b.light===playerLight)-Number(a.light===playerLight)||a.distance-b.distance);
  return candidates.slice(0,maximum).map(candidate=>candidate.light);
}

export class WorldEffects {
  static async create(world,gameplay) {
    const response=await fetch('assets/effects/manifest.json');if(!response.ok)throw new Error('Ontbrekende originele effecten');
    const manifest=await response.json(),effects=new WorldEffects(world,gameplay,manifest);
    // RedCat's projected ground shadow owns its texture and quad separately.
    const explosionTextureNeeded=explosionTextureFilter(gameplay,world.settings?.effectsQuality??3);
    const textures=await Promise.all(Object.entries(manifest.textures).filter(([key])=>key!=='rcsdw.bmp|rcsdw_a.bmp'&&explosionTextureNeeded(key)).map(async([key,entry])=>{
      const map=await world.texture('assets/effects/'+entry.file);
      // Blast UVs are copied from Genesis: V=1 is the translucent bottom
      // of kaboom_a at the red tail, V=0 the bright yellow head. Billboard
      // effects use the opposite convention; flipping this map hides its fade.
      // PTrail also uses literal Genesis UVs (its mask is vertically symmetric).
      map.flipY=key!==GARGOYLE_BLAST_TEXTURE&&key!==FAIRY_RIBBON_TEXTURE&&key!==ELECTRIC_SPARK_TEXTURE;map.wrapS=map.wrapT=THREE.ClampToEdgeWrapping;
      if(key===ENERGY)map.wrapT=THREE.RepeatWrapping;
      return [key,map];
    }));
    const decals=new Set(gameplay.objects.filter(o=>o.entity.classname==='EffectDecalEntity').map(o=>decalTextureKey(o.entity)));
    for(const [key,map]of textures) {
      if(decals.has(key))continue;
      if(key===ELECTRIC_SPARK_TEXTURE){effects.beamBatches.set(key,new BeamBatch(world,map,4096));continue;}
      if(SCORE_TEXTURES.includes(key)||key===PICKUP_TEXTURE||key===GARGOYLE_BLAST_TEXTURE){effects.beamBatches.set(key,new BeamBatch(world,map,key===PICKUP_TEXTURE?640:128));continue;}
      if([BEAM,ENERGY,BLAST,FLEURI,FAIRY_RIBBON_TEXTURE].includes(key))effects.beamBatches.set(key,new BeamBatch(world,map));
      if(![BEAM,ENERGY,BLAST,FAIRY_RIBBON_TEXTURE].includes(key))effects.batches.set(key,new BillboardBatch(world,map,key===CORONA||key===SPARK));
      // Native coronas trace visibility and fade their radius; they bypass
      // the depth test so an occluded halo can finish fading. Beacons retain
      // their separate depth-tested CORONA batch.
      if(key===CORONA)effects.coronaBatch=new BillboardBatch(world,map,true,512,false);
    }
    const flashCount=gameplay.objects.filter(object=>object.entity.classname==='FlashEffect').length,flashMap=flashCount&&textures.find(([key])=>key===FLASH_TEXTURE)?.[1];
    if(flashMap)effects.flashRays=new FlashRays(world,flashMap,flashCount);
    // CFairy draws L7 twice, then L8, then its white core. Keeping manifest
    // alphabetical order covered the white centre with the coloured rays.
    [FAIRY_TEXTURES.rays,FAIRY_TEXTURES.halo,FAIRY_TEXTURES.core,FAIRY_TEXTURES.star].forEach((key,i)=>{const batch=effects.batches.get(key);if(batch)batch.mesh.renderOrder=3+i;});
    effects.destructibles=await DestructibleEffects.create(world,gameplay);
    effects.enemyDeaths=new EnemyDeathEffects(world,gameplay);
    effects.enemyCombat=new EnemyCombatEffects(world,gameplay);
    effects.decals=new DecalEffects(world,gameplay,new Map(textures));
    effects.attachLights();
    effects.destructibles.prepareNearby(undefined,Infinity,true);
    await world.actorTextures?.settle();
    const impactWaves=effects.destructibles.prepareImpactWaves(effects.batches);
    // Compile fragment variants against the final scene light layout while
    // loading, rather than stalling on the first crate or armour breakup.
    await effects.destructibles.renderPool.compile();
    await world.knightRenderPool?.compile();
    effects.destructibles.renderPool.warmDraw(impactWaves?[impactWaves]:[]);
    world.knightRenderPool?.warmDraw();
    effects.update(0);return effects;
  }
  constructor(world,gameplay,manifest) {
    this.world=world;this.gameplay=gameplay;this.manifest=manifest;this.entries=new Map();this.batches=new Map();this.beamBatches=new Map();this.beams=[];this.lights=[];
    this.spriteFrustum=new THREE.Frustum();this.spriteProjection=new THREE.Matrix4();
    this.playerLight=new PlayerWorldLight(world);
    this.coronaVisibility=new CoronaVisibilityCache({budget:renderProfile.coronaRaysPerFrame});this.cameraForward=new THREE.Vector3();
    for(const object of gameplay.objects)if(EFFECT_CLASSES.has(object.entity.classname)) {
      const state={object,active:false,age:Math.max(0,object.effectAge||0),particles:[],nextSpawn:0,serial:0,opacity:0};
      if(object.entity.classname==='Fairy') {
        state.fairy=NativeFairyEffect.restore(object.fairyState);
        if(state.fairy){state.active=state.fairy.active;state.age=state.fairy.age;state.resumeFairyAudio=state.active;}
        object.fairySnapshot=()=>state.fairy?.snapshot();
      }
      this.entries.set(object.id,state);
    }
    this.flashes=gameplay.objects.filter(object=>object.entity.classname==='FlashEffect');
    this.torches=new TorchFlames(world,gameplay);
    for(const object of this.torches.synthetic)this.entries.set(object.id,{object,active:false,age:0,particles:[],nextSpawn:0,serial:0,opacity:0});
    for(const saved of restoreSpoutSnapshots(gameplay.spoutStates)?.entries||[]) {
      const state=this.entries.get(saved.id);if(state?.object.entity.classname!=='EffectSpoutEntity')continue;
      state.spout=NativeSpoutEffect.restore(state.object.entity,saved.state);if(!state.spout)continue;
      state.age=state.object.effectAge=saved.age;state.active=state.spout.enabled===true;
      state.spoutEnableSerial=state.object.spoutEnableSerial=saved.enableSerial;
    }
    this.spoutSnapshot=()=>({version:1,entries:[...this.entries.values()].filter(state=>state.spout).map(state=>({
      id:state.object.id,age:state.age,enableSerial:state.object.spoutEnableSerial||0,state:state.spout.snapshot()}))});
    gameplay.spoutSnapshot=this.spoutSnapshot;delete gameplay.spoutStates;
  }
  position(object) {const torch=this.torches.position(object);if(torch)return torch;const pose=this.gameplay.scripts?.modelTransforms.get(object.modelIndex);return pose?transformMotionPoint(object.position,pose.origin,pose):object.position;}
  endpoint(name,fallback) {const object=this.gameplay.find(name)[0];return object?this.position(object):fallback;}
  attachLights() {
    // Fixed slots avoid shader recompiles as Davi-Script switches lamps on/off.
    this.lightPositions=Array.from({length:8},()=>new THREE.Vector3());this.lightColors=Array.from({length:8},()=>new THREE.Color(0));this.lightRadii=new Float32Array(8);
    const atlas=this.world.level?.mesh.lightmap;
    this.lightCount={value:0};this.lightUniforms={effectLightPosition:{value:this.lightPositions},effectLightColor:{value:this.lightColors},
      effectLightRadius:{value:this.lightRadii},effectLightCount:this.lightCount,effectAtlasSize:{value:new THREE.Vector2(atlas?.width||1,atlas?.height||1)}};
    const shadowSources=[...this.entries.values()].filter(({object})=>object.entity.classname==='DynamicLightEntity'&&number(object.entity,'CastShadow')!==0);
    if(shadowSources.length&&this.world.worldLightmapMetadata&&atlas) {
      this.worldShadows=new WorldLightShadows(this.world.level.collision,this.world.worldLightmapMetadata,atlas.width,atlas.height);
      this.shadowTexture=new THREE.DataTexture(this.worldShadows.data,atlas.width,atlas.height,THREE.RedFormat,THREE.UnsignedByteType);
      this.shadowTexture.name='native-world-light-obstruction';
      this.shadowTexture.minFilter=this.shadowTexture.magFilter=THREE.NearestFilter;
      this.shadowTexture.generateMipmaps=false;this.shadowTexture.flipY=false;
      this.lightShadowBits=new Float32Array(8);this.shadowCount={value:0};
      Object.assign(this.lightUniforms,{effectShadowAtlas:{value:this.shadowTexture},effectLightShadowBit:{value:this.lightShadowBits},effectShadowCount:this.shadowCount});
      // Prime the authored static lamps while loading, not on first approach.
      this.worldShadows.update(shadowSources.slice(0,8).map(({object})=>({castShadow:true,shadowKey:object.id,
        position:this.position(object),radius:Math.max(number(object.entity,'RadiusA'),number(object.entity,'RadiusZ'))})));
      this.shadowTexture.needsUpdate=true;
    }
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
      material.customProgramCacheKey=()=>cacheKey.call(material)+'-original-bsp-lightmaps-v5'+(this.worldShadows?'-shadows':'');material.needsUpdate=true;
    }
  }
  update(dt) {
    dt=Math.max(0,Math.min(.25,dt));this.beams=[];this.lights=[];
    for(const batch of this.batches.values())batch.count=0;
    for(const batch of this.beamBatches.values())batch.count=0;
    if(this.coronaBatch)this.coronaBatch.count=0;
    const eye=this.world.camera.position.toArray(),direction=(this.world.camera.getWorldDirection?.(this.cameraForward)||this.cameraForward.set(0,0,-1)).toArray(),coronas=[];
    const cullSprites=this.world.camera.projectionMatrix&&this.world.camera.matrixWorldInverse;
    if(cullSprites)this.spriteFrustum.setFromProjectionMatrix(this.spriteProjection.multiplyMatrices(this.world.camera.projectionMatrix,this.world.camera.matrixWorldInverse));
    for(const batch of this.batches.values())if(batch.beginView)batch.beginView(cullSprites?this.spriteFrustum:null);else batch.frustum=cullSprites?this.spriteFrustum:null;
    for(const batch of this.beamBatches.values())if(batch.beginView)batch.beginView(cullSprites?this.spriteFrustum:null);else batch.frustum=cullSprites?this.spriteFrustum:null;
    if(this.coronaBatch)if(this.coronaBatch.beginView)this.coronaBatch.beginView(cullSprites?this.spriteFrustum:null);else this.coronaBatch.frustum=cullSprites?this.spriteFrustum:null;
    this.torches.update(eye);
    if(this.flashRays) {
      this.flashRays.begin(this.world.camera);
      for(const object of this.flashes) {
        if(!Number.isFinite(object.flashStartedAt))continue;
        const origin=this.position(object);
        for(const ray of flashRays(this.gameplay.time-object.flashStartedAt))this.flashRays.add(origin,ray);
      }
      this.flashRays.flush();
    }
    for(const state of this.entries.values())if(state.object.entity.classname==='EffectCoronaEntity') {
      const {object}=state,origin=this.position(object);
      // A halo in a room that cannot be drawn needs no long visibility ray.
      coronas.push({id:object.id,origin,enabled:object.enabled!==false&&object.visible!==false,
        inFront:(origin[0]-eye[0])*direction[0]+(origin[1]-eye[1])*direction[1]+(origin[2]-eye[2])*direction[2]>=0&&this.world.geometryStream?.rooms?.originAllowed(origin)!==false});
    }
    this.coronaVisibility.update(dt,coronas,candidate=>
      this.world.collider.trace(eye,candidate.origin,[0,0,0],[0,0,0],this.world.physicalModels,null).fraction>=1);
    for(const state of this.entries.values()) {
      const {object}=state,e=object.entity;
      if(e.classname==='Fairy'){this.updateFairy(state,dt);continue;}
      // Loading draws once before the restored camera and torch residency
      // have settled. A zero-time redraw must preserve saved activation age
      // and timers, even if that temporary camera cannot yet see the hand.
      if(e.classname==='EffectSpoutEntity'&&dt===0){this.updateSpout(state,this.position(object),0);continue;}
      const enabled=object.enabled!==false&&object.visible!==false&&this.torches.enabled(object),previousAge=state.age;
      if(enabled&&!state.active){state.nextSpawn=state.clock||0;state.serial=0;}
      if(!enabled&&state.active){state.age=0;state.nextSpawn=0;object.effectAge=0;if(e.classname==='SavePoint')this.beaconSound(object,true);}
      if(!enabled&&e.classname==='TeleporterFX')this.teleporterLoop(state,false);
      state.active=enabled;if(enabled){state.age+=dt;object.effectAge=state.age;}
      const origin=this.position(object);
      if(e.classname==='EffectSpoutEntity')this.updateSpout(state,origin,dt);
      else if(e.classname==='EffectCoronaEntity') {
        if(dt>0)state.radius=nativeCoronaRadius(state.radius||0,e,Math.hypot(origin[0]-eye[0],origin[1]-eye[1],origin[2]-eye[2]),
          enabled&&this.coronaVisibility.visible(object.id),dt);
        const radius=state.radius||0;
        // 0x57add3 submits radius * .25 as a Genesis textured-point SCALE.
        // Its full extent is bitmap dimensions * scale, not radius * 2.
        // Coreff is 64x64: button/candle halos were eight times too small.
        const artwork=this.manifest.textures[CORONA],scale=radius*.25;
        if(radius>0&&artwork&&this.world.geometryStream?.rooms?.originAllowed(origin)!==false)this.coronaBatch?.add(origin,artwork.width*scale,artwork.height*scale,color(e.Color),1);
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
        const lamp={position:origin,color:a.map((v,i)=>mix(v,z[i],f)),radius:mix(number(e,'RadiusA'),number(e,'RadiusZ'),r),castShadow:number(e,'CastShadow')!==0};
        if(lamp.castShadow){lamp.shadowKey=object.id;lamp.shadowRadius=Math.max(number(e,'RadiusA'),number(e,'RadiusZ'));}
        this.lights.push(lamp);
      }
    }
    this.lights.push(...this.torches.lights);
    this.destructibles?.update(dt,this.batches,this.beamBatches);
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
    // Both kinds share the saved native light clock. Their cached records
    // advance from gameplay time, independently of render/display frequency.
    for(const impact of this.gameplay.projectileImpacts||[]) {
      const light=impactLight(impact,this.gameplay.time);if(light)this.lights.push(light);
    }
    for(const blast of this.destructibles?.blasts||[]) {
      const light=nativeExplosionLight(blast,this.gameplay.time);if(light)this.lights.push(light);
    }
    const playerLight=this.playerLight.update();if(playerLight)this.lights.push(playerLight);
    this.world.syncActorLighting?.(this.lights);
    const bufferTime=performance.now()/1000;
    for(const batch of [...this.batches.values(),...this.beamBatches.values()])batch.flush(bufferTime);
    this.coronaBatch?.flush(bufferTime);
    // Keep the player's small pool of light stable in busy rooms, using one
    // of the existing eight slots rather than increasing shader/light cost.
    const nearest=nearestWorldLights(this.lights,this.world.camera.position,playerLight);
    if(this.lightCount)this.lightCount.value=nearest.length;
    if(this.worldShadows) {
      if(this.worldShadows.update(nearest))this.shadowTexture.needsUpdate=true;
      let count=0;
      for(let i=0;i<8;i++){const bit=this.worldShadows.bit(nearest[i]);this.lightShadowBits[i]=bit;if(bit)count++;}
      this.shadowCount.value=count;
    }
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
    const e=state.object.entity,key=textureKey(e.BitmapFileName,e.BitmapAlphaFileName),batch=this.batches.get(key);
    if(!batch)return;
    const enableSerial=state.object.spoutEnableSerial||0;
    if(dt>0&&enableSerial!==(state.spoutEnableSerial||0)){state.age=dt;state.object.effectAge=dt;state.spoutEnableSerial=enableSerial;}
    if(!state.spout)state.spout=new NativeSpoutEffect(e,{seed:hash(state.object.id),age:Math.max(0,state.age-(state.active?dt:0))});
    const target=this.endpoint(e.SpoutDirection,[origin[0],origin[1]+1,origin[2]]);
    const direction=this.torches.direction(state.object)||target.map((v,i)=>v-origin[i]);
    state.spout.update(dt,origin,direction,state.active,enableSerial);
    state.clock=state.spout.time;state.particles=state.spout.particles;
    if(!state.particles.length) {
      if(dt>0&&state.active&&state.spout.finished)state.object.enabled=state.active=false;
      return;
    }
    // Large torch sprites can overlap a floor in their conservative bounds.
    // Keep an unrelated room's emitter out of the draw, while its particles,
    // lifetime, activation and sound clocks continue normally above.
    if(this.world?.geometryStream?.rooms?.originAllowed(origin)===false)return;
    const visibility=batch.frustum&&state.particles.length>1?spoutCloudVisibility(state,batch.frustum):1;
    if(visibility===2)for(const p of state.particles)batch.add(p.position,p.size,p.size,state.spout.tint,p.opacity,0,null,1,true);
    else if(visibility)for(const p of state.particles)batch.add(p.position,p.size,p.size,state.spout.tint,p.opacity,0,null,1);
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
    for(const ray of geometry.rays)this.addBeam(ray,FAIRY_RIBBON_TEXTURE);
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
  addBeam(ray,key) {this.beams.push(ray);const ribbon=key===FAIRY_RIBBON_TEXTURE;this.beamBatches.get(key)?.add(ray,this.world.camera.position,ribbon?this.cameraForward:null,ribbon?FAIRY_RIBBON_UVS:null);}
  beaconSound(object,stop=false,playbackRate=1) {this.gameplay.emit?.('scriptSound',{id:`beacon:${object.id}`,sound:'Magiev10.wav',stop,volume:.75,playbackRate,spatial:true,position:[...this.position(object)]});}
  dispose() {
    if(this.gameplay.spoutSnapshot===this.spoutSnapshot)delete this.gameplay.spoutSnapshot;
    for(const state of this.entries.values()) {
      if(state.object.entity.classname==='TeleporterFX')this.teleporterLoop(state,false);
      if(state.object.entity.classname==='Fairy')delete state.object.fairySnapshot;
    }
    this.destructibles?.dispose();
    this.decals?.dispose();
    this.shadowTexture?.dispose();
    for(const {material,previous,cacheKey}of this.patchedMaterials||[]){material.onBeforeCompile=previous;material.customProgramCacheKey=cacheKey;material.needsUpdate=true;}
    for(const batch of [...this.batches.values(),...this.beamBatches.values()])batch.mesh.removeFromParent();
    this.flashRays?.mesh.removeFromParent();
    this.coronaBatch?.mesh.removeFromParent();
    for(const light of this.pointLights||[])light.removeFromParent();
    this.entries.clear();this.batches.clear();this.beamBatches.clear();this.beams=[];this.lights=[];
  }
}
