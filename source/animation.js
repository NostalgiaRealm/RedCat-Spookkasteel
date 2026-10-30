// Rigid skeletal animation for Genesis3D actors. Each instance owns its pose;
// immutable clip preparation and geometry UV/index arrays can be shared.
// Original vertex coordinates are local to one bone; pose = parent * attachment * key.
import { Box3, Sphere } from 'three';

const identity = new Float64Array([1,0,0,0,1,0,0,0,1,0,0,0]);
const localBoneRadii=new WeakMap(),animationRadii=new WeakMap(),preparedClips=new WeakMap();
function actorLocalBoneRadii(data) {
  let cached=localBoneRadii.get(data);if(cached)return cached;
  const {localPositions,joints,bones}=data;
  if(!localPositions||!joints||!bones||localPositions.length!==joints.length*3)return {valid:false};
  const radii=new Float64Array(bones.length);let unbound=0,valid=true;
  for(let i=0;i<joints.length;i++) {
    const joint=joints[i],radius=Math.hypot(localPositions[i*3],localPositions[i*3+1],localPositions[i*3+2]);
    if(!Number.isInteger(joint)||joint< -1||joint>=bones.length||!Number.isFinite(radius)){valid=false;break;}
    if(joint<0)unbound=Math.max(unbound,radius);else radii[joint]=Math.max(radii[joint],radius);
  }
  cached={valid,radii,unbound};localBoneRadii.set(data,cached);return cached;
}

// A broad-phase envelope for every clip and native transition. This is a
// mathematical bound, not sampled animation bounds: Hermite's endpoint terms
// are convex and both tangent basis functions have magnitude <= 4/27. Keys
// and transition quaternions are normalized, so their linear norm is one.
// Only exact, current-pose triangles decide a collision after this test.
function actorAnimationRadius(data,prepared,radii) {
  if(animationRadii.has(data))return animationRadii.get(data);
  let radius=radii.unbound;
  if(!radii.valid){animationRadii.set(data,Infinity);return Infinity;}
  const norms=new Float64Array(data.bones.length),translations=new Float64Array(data.bones.length);
  const margin=1+1e-12;
  for(let i=0;i<data.bones.length;i++) {
    const bone=data.bones[i],a=bone.attachment;
    if(!a||a.length!==12||!Array.from(a).every(Number.isFinite)||!Number.isInteger(bone.parent)||bone.parent>=i||bone.parent< -1){radius=Infinity;break;}
    let translationRadius=0;
    for(const entry of prepared.values()) {
      const track=entry.tracks[i],channel=track?.translation;
      if(track?.rotation&&!track.rotation.values.every(Number.isFinite)){translationRadius=Infinity;break;}
      if(!channel?.times.length)continue;
      const maxima=[0,0,0],incoming=[0,0,0],outgoing=[0,0,0];
      for(let j=0;j<channel.values.length;j++)maxima[j%3]=Math.max(maxima[j%3],Math.abs(channel.values[j]));
      if(channel.interpolation!==0) {
        for(let j=0;j<track.tangents.incoming.length;j++)incoming[j%3]=Math.max(incoming[j%3],Math.abs(track.tangents.incoming[j]));
        for(let j=0;j<track.tangents.outgoing.length;j++)outgoing[j%3]=Math.max(outgoing[j%3],Math.abs(track.tangents.outgoing[j]));
      }
      translationRadius=Math.max(translationRadius,Math.hypot(...maxima.map((v,c)=>v+4/27*(incoming[c]+outgoing[c])))*margin);
    }
    // sqrt(max absolute row sum of A^T A) bounds the spectral norm without
    // compounding the much looser Frobenius norm down a long bone hierarchy.
    let normSquared=0;
    for(let row=0;row<3;row++) {
      let sum=0;
      for(let column=0;column<3;column++)sum+=Math.abs(a[row]*a[column]+a[3+row]*a[3+column]+a[6+row]*a[6+column]);
      normSquared=Math.max(normSquared,sum);
    }
    const attachmentNorm=Math.sqrt(normSquared)*margin,parentNorm=bone.parent<0?1:norms[bone.parent];
    norms[i]=parentNorm*attachmentNorm*margin;
    translations[i]=((bone.parent<0?0:translations[bone.parent])+parentNorm*(Math.hypot(a[9],a[10],a[11])+attachmentNorm*translationRadius))*margin;
    radius=Math.max(radius,translations[i]+norms[i]*radii.radii[i]);
  }
  radius=Number.isFinite(radius)&&radius<3.4e38?radius*(1+2**-23)+1e-6:Infinity;
  animationRadii.set(data,radius);return radius;
}

function multiply(out, a, b) {
  for (let row=0;row<3;row++) {
    for (let col=0;col<3;col++) out[row*3+col]=a[row*3]*b[col]+a[row*3+1]*b[3+col]+a[row*3+2]*b[6+col];
    out[9+row]=a[row*3]*b[9]+a[row*3+1]*b[10]+a[row*3+2]*b[11]+a[9+row];
  }
}

function interval(channel, time) {
  const t=channel.times, last=t.length-1;
  if(time<=t[0] || last<1)return 0;
  if(time>=t[last])return last;
  let low=0,high=last;
  while(high-low>1){const mid=(low+high)>>1;if(t[mid]>time)high=mid;else low=mid;}
  return low;
}

function hermiteTangents(channel) {
  const {times,values}=channel,n=times.length;
  const incoming=new Float64Array(n*3),outgoing=new Float64Array(n*3);
  if(channel.interpolation===2 || n<2)return {incoming,outgoing};
  const loop=channel.loop && n>=3;
  for(let i=0;i<n;i++) {
    const prev=i===0?(loop?n-2:0):i-1,next=i===n-1?(loop?1:n-1):i+1;
    const before=i===0&&loop?times[0]-(times[n-1]-times[n-2]):times[prev];
    const after=i===n-1&&loop?times[n-1]+times[1]-times[0]:times[next];
    const n0=times[i]-before,n1=after-times[i],sum=n0+n1;
    for(let c=0;c<3;c++) {
      const delta=values[next*3+c]-values[prev*3+c];
      if(!loop&&(i===0 || i===n-1))incoming[i*3+c]=outgoing[i*3+c]=delta;
      else if(sum>0){incoming[i*3+c]=delta*n0/sum;outgoing[i*3+c]=delta*n1/sum;}
    }
  }
  return {incoming,outgoing};
}

function prepareActorClips(data) {
  let prepared=preparedClips.get(data);if(prepared)return prepared;
  // Imported actor definitions are immutable for their level lifetime. Build
  // track lookup and Hermite tangents once, rather than once per enemy/torch.
  prepared=new Map((data.animations||[]).map(clip=>{
    const byName=new Map(clip.tracks.map(track=>[track.bone,track]));
    return [clip.name.toLowerCase(),{clip,tracks:data.bones.map(bone=>{
      const track=byName.get(bone.name);
      return track?{...track,tangents:track.translation?hermiteTangents(track.translation):null}:null;
    })}];
  }));
  preparedClips.set(data,prepared);return prepared;
}

function translation(out, channel, tangents, time) {
  if(!channel || !channel.times.length){out.fill(0);return;}
  const i=interval(channel,time),j=Math.min(i+1,channel.times.length-1);
  const duration=channel.times[j]-channel.times[i];
  const t=duration>0?Math.max(0,Math.min(1,(time-channel.times[i])/duration)):0;
  for(let c=0;c<3;c++) {
    const a=channel.values[i*3+c],b=channel.values[j*3+c];
    if(channel.interpolation===0)out[c]=a+(b-a)*t;
    else {
      const t2=t*t,t3=t2*t,h2=-2*t3+3*t2;
      out[c]=(1-h2)*a+h2*b+(t3-2*t2+t)*tangents.outgoing[i*3+c]+(t3-t2)*tangents.incoming[j*3+c];
    }
  }
}

function rotation(out, channel, time) {
  if(!channel || !channel.times.length){out.set([0,0,0,1]);return;}
  const i=interval(channel,time),j=Math.min(i+1,channel.times.length-1);
  const duration=channel.times[j]-channel.times[i];
  const t=duration>0?Math.max(0,Math.min(1,(time-channel.times[i])/duration)):0;
  let dot=0;for(let c=0;c<4;c++)dot+=channel.values[i*4+c]*channel.values[j*4+c];
  const sign=dot<0?-1:1;dot=Math.min(1,Math.abs(dot));
  let a=1-t,b=t;
  if(channel.interpolation!==0 && dot<0.9995) {
    const theta=Math.acos(dot),sine=Math.sin(theta);
    a=Math.sin((1-t)*theta)/sine;b=Math.sin(t*theta)/sine;
  }
  let length=0;
  for(let c=0;c<4;c++){out[c]=a*channel.values[i*4+c]+sign*b*channel.values[j*4+c];length+=out[c]*out[c];}
  length=Math.sqrt(length);
  if(length>0)for(let c=0;c<4;c++)out[c]/=length;
  else out.set([0,0,0,1]);
}

function compose(out, p, q) {
  const x=q[0],y=q[1],z=q[2],w=q[3],xx=2*x*x,yy=2*y*y,zz=2*z*z,xy=2*x*y,xz=2*x*z,yz=2*y*z,wx=2*w*x,wy=2*w*y,wz=2*w*z;
  out[0]=1-yy-zz;out[1]=xy-wz;out[2]=xz+wy;out[3]=xy+wz;out[4]=1-xx-zz;out[5]=yz-wx;out[6]=xz-wy;out[7]=yz+wx;out[8]=1-xx-yy;out[9]=p[0];out[10]=p[1];out[11]=p[2];
}

// Blend local bone keys, not skinned vertices: bone lengths and normals must
// remain intact. Genesis gePose_BlendMotion uses Hermite-weighted SLERP.
function blendRotation(out, other, weight) {
  let dot=0;for(let c=0;c<4;c++)dot+=out[c]*other[c];
  const sign=dot<0?-1:1;dot=Math.min(1,Math.abs(dot));
  let a=1-weight,b=weight;
  if(dot<.9995){const angle=Math.acos(dot),sine=Math.sin(angle);a=Math.sin((1-weight)*angle)/sine;b=Math.sin(weight*angle)/sine;}
  let length=0;
  for(let c=0;c<4;c++){out[c]=a*out[c]+sign*b*other[c];length+=out[c]*out[c];}
  length=Math.sqrt(length)||1;for(let c=0;c<4;c++)out[c]/=length;
}

export class ActorAnimator {
  constructor(data, geometry) {
    this.data=data;this.geometry=geometry;this.time=0;this.timeScale=1;this.loop=true;this.finished=false;this.enabled=true;
    this.clip=null;this.name=null;this.sampledClip=null;this.sampledTime=NaN;
    // State controllers opt in to the native transition; fixed authored poses
    // need no outgoing-pose cache.
    this.transitionDuration=0;this.transition=null;this.sampledTransition=null;this.sampledWeight=0;
    this.boneTransforms=data.bones.map(()=>new Float64Array(12));
    this.localBoneRadii=actorLocalBoneRadii(data);this.conservativeRadius=undefined;
    this.prepared=prepareActorClips(data);
    this.animationRadius=actorAnimationRadius(data,this.prepared,this.localBoneRadii);
    this.p=new Float64Array(3);this.q=new Float64Array(4);this.key=new Float64Array(12);this.local=new Float64Array(12);
  }

  get transforms(){this.flushPose();return this.boneTransforms;}

  play(name, loop=true, restart=false) {
    const entry=this.prepared.get(String(name).toLowerCase());
    if(!entry)return false;
    // A completed one-shot holds its last pose. Only a new gameplay action
    // explicitly restarts it; selecting a state every frame must not replay it.
    if(this.clip===entry.clip && !restart){this.loop=loop;return true;}
    // 0x4a0700: freeze the outgoing clip/time and blend over 250ms. Rapid
    // switches keep the older transition while its remaining weight >= .5.
    if(this.clip!==entry.clip&&this.clip&&this.transitionDuration>0&&(!this.transition||this.transition.weight<.5)) {
      this.beginTransition(this.prepared.get(this.name.toLowerCase()),this.time,1,1);
    }
    this.clip=entry.clip;this.tracks=entry.tracks;this.name=entry.clip.name;
    this.sampledClip=null;
    this.loop=loop;this.time=this.timeScale<0?entry.clip.duration:0;this.finished=false;this.update(0);return true;
  }

  beginTransition(entry,time,weight,sampleWeight) {
    // Outgoing time is frozen by native, so sample it only once per switch.
    const positions=new Float64Array(this.data.bones.length*3),rotations=new Float64Array(this.data.bones.length*4);
    for(let i=0;i<entry.tracks.length;i++) {
      const track=entry.tracks[i];
      translation(this.p,track?.translation,track?.tangents,time);rotation(this.q,track?.rotation,time);
      positions.set(this.p,i*3);rotations.set(this.q,i*4);
    }
    this.transition={entry,time,weight,sampleWeight,positions,rotations};
    this.blendQ||=new Float64Array(4);
  }

  snapshot() {
    const t=this.transition;
    return {name:this.name,time:this.time,rate:this.timeScale,loop:this.loop,
      transition:t?{name:t.entry.clip.name,time:t.time,weight:t.weight,sampleWeight:t.sampleWeight}:null};
  }

  restore(saved) {
    const entry=this.prepared.get(String(saved?.name).toLowerCase());
    if(!entry||!Number.isFinite(saved?.time)||saved.time<0)return false;
    this.transition=null;this.clip=entry.clip;this.tracks=entry.tracks;this.name=entry.clip.name;
    this.time=saved.time;this.loop=saved.loop===true;
    this.timeScale=Number.isFinite(saved.rate)?saved.rate:1;this.finished=false;
    const t=saved.transition,old=this.prepared.get(String(t?.name).toLowerCase());
    if(this.transitionDuration>0&&old&&Number.isFinite(t.time)&&t.time>=0&&
      Number.isFinite(t.weight)&&Number.isFinite(t.sampleWeight)&&t.weight>=0&&t.weight<=1&&t.sampleWeight>=0&&t.sampleWeight<=1) {
      this.beginTransition(old,Math.min(t.time,old.clip.duration),t.weight,t.sampleWeight);
    }
    this.sampledClip=null;this.update(0);return true;
  }

  update(dt,transitionDt=dt) {
    if(!this.enabled || !this.clip)return;
    const advance=Number.isFinite(dt)?Math.max(0,dt)*this.timeScale:0;
    const duration=this.clip.duration;
    this.time+=advance;
    if(duration>0 && this.loop)this.time=((this.time%duration)+duration)%duration;
    else {this.time=Math.max(0,Math.min(this.time,duration));this.finished=this.timeScale<0?this.time<=0:this.time>=duration;}
    // Frozen, dormant and completed motions retain exactly the same pose.
    // Keep their geometry version stable so GPU uploads and triangle collision
    // caches are only invalidated by an actual pose change. Direct time seeks
    // (saved poses and projectile origins) still sample their requested pose.
    // Pose seeks (shoot/charge/hit clocks) can advance the transition without
    // advancing the clip twice. Zero-time bone queries and pause do neither.
    const transition=this.transition;
    if(transition&&Number.isFinite(transitionDt)&&transitionDt>0) {
      transition.sampleWeight=transition.weight;
      transition.weight=Math.max(0,transition.weight-transitionDt/this.transitionDuration);
    }
    const weight=transition?.sampleWeight||0;
    if(this.sampledClip===this.clip&&this.sampledTime===this.time&&this.sampledTransition===transition&&this.sampledWeight===weight)return;
    this.posePending=this.geometryPending=true;
    this.sampledClip=this.clip;this.sampledTime=this.time;this.sampledTransition=transition;this.sampledWeight=weight;
    this.sampledTracks=this.tracks;
    if(!this.deferGeometry)this.flushGeometry();
  }

  flushPose() {
    if(!this.posePending)return;
    this.conservativeRadius=undefined;
    const transition=this.sampledTransition,weight=this.sampledWeight,blend=weight*weight*(3-2*weight);
    for(let i=0;i<this.data.bones.length;i++) {
      const bone=this.data.bones[i],track=this.sampledTracks[i];
      translation(this.p,track?.translation,track?.tangents,this.sampledTime);
      rotation(this.q,track?.rotation,this.sampledTime);
      if(blend>0) {
        for(let c=0;c<3;c++)this.p[c]+=(transition.positions[i*3+c]-this.p[c])*blend;
        for(let c=0;c<4;c++)this.blendQ[c]=transition.rotations[i*4+c];
        blendRotation(this.q,this.blendQ,blend);
      }
      compose(this.key,this.p,this.q);
      multiply(this.local,bone.attachment,this.key);
      multiply(this.boneTransforms[i],bone.parent>=0?this.boneTransforms[bone.parent]:identity,this.local);
    }
    this.posePending=false;
  }

  // Bound the exact current skeletal pose without skinning its vertices. A
  // bone's linear transform is bounded by its Frobenius norm; translation
  // and the largest local vertex radius then enclose every attached vertex.
  // This only rejects distant explosion targets. Nearby actors still flush
  // their original geometry and use its exact posed box before taking damage.
  conservativePoseRadius() {
    const position=this.geometry.getAttribute('position'),radii=this.localBoneRadii;
    if(!this.sampledClip||!radii?.valid||!position||position.itemSize!==3||position.normalized||
      position.isInterleavedBufferAttribute||!(position.array instanceof Float32Array)||position.count!==this.data.joints.length||
      this.geometry.morphAttributes.position)return Infinity;
    this.flushPose();
    if(this.conservativeRadius!==undefined)return this.conservativeRadius;
    let radius=radii.unbound;
    for(let i=0;i<radii.radii.length;i++) {
      const matrix=this.boneTransforms[i];
      const norm=Math.hypot(matrix[0],matrix[1],matrix[2],matrix[3],matrix[4],matrix[5],matrix[6],matrix[7],matrix[8]);
      radius=Math.max(radius,Math.hypot(matrix[9],matrix[10],matrix[11])+norm*radii.radii[i]);
    }
    // Skinning writes Float32 positions. Enclose their rounding, including
    // subnormal values; overflowing/nonfinite data keeps the original path.
    this.conservativeRadius=Number.isFinite(radius)&&radius<3.4e38?radius*(1+2**-23)+1e-6:Infinity;
    return this.conservativeRadius;
  }

  conservativeAnimationRadius() {
    const position=this.geometry.getAttribute('position');
    if(!this.sampledClip||!position||position.itemSize!==3||position.normalized||position.isInterleavedBufferAttribute||
      !(position.array instanceof Float32Array)||position.count!==this.data.joints.length||this.geometry.morphAttributes.position||
      this.sampledWeight<0||this.sampledWeight>1)return Infinity;
    return this.animationRadius;
  }

  // Off-camera actors keep their clocks and transition state current. Bone
  // queries and rendering/collision materialize that exact current pose.
  flushGeometry() {
    if(!this.geometryPending)return;
    this.flushPose();
    const position=this.geometry.getAttribute('position'),normal=this.geometry.getAttribute('normal');
    const {localPositions,localNormals,joints,normalJoints}=this.data;
    // Imported rigid actors have packed, unnormalized XYZ positions and no
    // morph targets. Gather their exact bounds while skinning instead of
    // scanning every vertex twice more for the box and sphere's center.
    const packedBounds=position.itemSize===3&&!position.normalized&&!position.isInterleavedBufferAttribute&&
      position.count===joints.length&&!this.geometry.morphAttributes.position;
    let minX=Infinity,minY=Infinity,minZ=Infinity,maxX=-Infinity,maxY=-Infinity,maxZ=-Infinity;
    for(let i=0;i<joints.length;i++) {
      const offset=i*3,m=joints[i]>=0?this.boneTransforms[joints[i]]:identity;
      const x=localPositions[offset],y=localPositions[offset+1],z=localPositions[offset+2];
      position.array[offset]=m[0]*x+m[1]*y+m[2]*z+m[9];
      position.array[offset+1]=m[3]*x+m[4]*y+m[5]*z+m[10];
      position.array[offset+2]=m[6]*x+m[7]*y+m[8]*z+m[11];
      if(packedBounds) {
        // Read back Float32 values so collision/culling bounds agree exactly
        // with Three.js, including rounding at animation extremes.
        const px=position.array[offset],py=position.array[offset+1],pz=position.array[offset+2];
        minX=Math.min(minX,px);minY=Math.min(minY,py);minZ=Math.min(minZ,pz);
        maxX=Math.max(maxX,px);maxY=Math.max(maxY,py);maxZ=Math.max(maxZ,pz);
      }
      if(normal && localNormals) {
        const n=normalJoints[i]>=0?this.boneTransforms[normalJoints[i]]:identity;
        const nx=localNormals[offset],ny=localNormals[offset+1],nz=localNormals[offset+2];
        const a=n[0]*nx+n[1]*ny+n[2]*nz,b=n[3]*nx+n[4]*ny+n[5]*nz,c=n[6]*nx+n[7]*ny+n[8]*nz;
        // Actor normals and rigid bone rotations are bounded; the direct
        // length avoids the general-purpose hypot scaling on every vertex.
        const length=Math.sqrt(a*a+b*b+c*c)||1;
        normal.array[offset]=a/length;normal.array[offset+1]=b/length;normal.array[offset+2]=c/length;
      }
    }
    position.needsUpdate=true;if(normal)normal.needsUpdate=true;
    if(packedBounds) {
      const box=this.geometry.boundingBox||=new Box3(),sphere=this.geometry.boundingSphere||=new Sphere();
      box.min.set(minX,minY,minZ);box.max.set(maxX,maxY,maxZ);box.getCenter(sphere.center);
      const {x:cx,y:cy,z:cz}=sphere.center,vertices=position.array;
      let radiusSquared=0;
      for(let i=0;i<vertices.length;i+=3) {
        const dx=cx-vertices[i],dy=cy-vertices[i+1],dz=cz-vertices[i+2];
        radiusSquared=Math.max(radiusSquared,dx*dx+dy*dy+dz*dz);
      }
      sphere.radius=Math.sqrt(radiusSquared);
    } else {
      this.geometry.computeBoundingBox();this.geometry.computeBoundingSphere();
    }
    this.geometryPending=false;
  }
}

const STATE_CLIPS={
  idle:['idle','idle1','idle0','idle2','static'],
  walk:['walkfw','walkbw','fly','idle','idle1'],
  walkback:['walkbw','walkfw','idle'],
  attack:['shoot1','shoot','attack'],
  hurt:['hit','hurt'],
  death:['death','die'],
  charge:['charge'],
  start:['start'],
  retract:['start'],
  dormant:['start'],
  teleport:['teleport']
};

/** Match gameplay states to the original actor's case-insensitive motion names. */
export class ActorStateAnimator {
  constructor(animator,stats={}) {
    this.animator=animator;this.key=null;this.lastTime=null;
    animator.transitionDuration=.25;
    this.clips={};this.durations={};this.speeds={};
    for(const [state,names] of Object.entries(STATE_CLIPS)) {
      const entry=names.map(name=>animator.prepared.get(name)).find(Boolean);
      const factor=Number(stats[{walk:'WalkMotionFactor',walkback:'WalkMotionFactor',hurt:'HitMotionFactor',attack:'ShootMotionFactor'}[state]]);
      this.speeds[state]=Number.isFinite(factor)&&factor>0?factor:1;
      if(entry){this.clips[state]=entry.clip.name;this.durations[state]=entry.clip.duration/this.speeds[state];}
    }
    const flyingIdle=animator.prepared.get('idle2');
    if(flyingIdle)this.durations.idleFlying=flyingIdle.clip.duration;
    this.durations.idleClips=Object.fromEntries(['idle0','idle1','idle2','idle3','static'].flatMap(name=>{
      const entry=animator.prepared.get(name);return entry?[[name,entry.clip.duration]]:[];
    }));
  }
  snapshot() {return {key:this.key,pose:this.animator.snapshot()};}
  update(object,dt,frozen=false,time=null) {
    // Bone queries can occur before the normal frame update. Advance the blend
    // exactly once at that simulation time, independently of a clip seek.
    const elapsed=Number.isFinite(time)&&Number.isFinite(this.lastTime)?Math.max(0,time-this.lastTime):dt;
    if(Number.isFinite(time))this.lastTime=time;
    const state=object.animationState||'idle';
    // CRcTouchBat/CRcShootBat map the active idle motion to airborne idle2.
    // Disabled bats and explicitly scripted idle1 poses retain hanging idle.
    const flyingIdle=state==='idle'&&object.enemyType==='bat'&&object.enabled===true?this.animator.prepared.get('idle2'):null;
    const variant=state==='idle'&&['plant','gargoyle'].includes(object.enemyType)?this.animator.prepared.get(object.animationIdleClip):null;
    const stoneRest=state==='dormant'&&object.enemyType==='gargoyle'?this.animator.prepared.get('static'):null;
    const clip=stoneRest?.clip.name||variant?.clip.name||flyingIdle?.clip.name||this.clips[state]||this.clips.idle;
    const key=`${state}:${object.animationSerial||0}:${clip}`;
    const oneShot=['attack','hurt','death','start','retract','charge','teleport','walkback'].includes(state);
    if(key!==this.key) {
      const initial=this.key===null;
      this.key=key;
      this.animator.timeScale=(this.speeds[state]||1)*(object.animationRate||1);
      const saved=object.animationPose;
      if(initial&&saved?.key===key&&String(saved.pose?.name).toLowerCase()===String(clip).toLowerCase()&&this.animator.restore(saved.pose)) {
        delete object.animationPose;return;
      }
      // The template's preview idle is not an outgoing gameplay pose. Nor is
      // the dormant skeleton allowed to blend away from its pile of bones.
      const blendDuration=this.animator.transitionDuration;
      if(initial||state==='dormant'){this.animator.transition=null;this.animator.transitionDuration=0;}
      if(clip)this.animator.play(clip,object.animationLoop??!oneShot,true);
      this.animator.transitionDuration=blendDuration;
      if(initial)delete object.animationPose;
      // Saved gameplay deadlines retain the remaining attack/hurt/death time.
      // A newly loaded actor must resume that pose before its next strike.
      if(initial&&oneShot&&Number.isFinite(time)&&Number.isFinite(object.animationUntil)&&this.durations[state]) {
        this.animator.update(Math.max(0,this.durations[state]/Math.abs(object.animationRate||1)-(object.animationUntil-time)),0);return;
      }
    }
    if(state==='dormant'){this.animator.time=0;this.animator.update(0);return;}
    const stoneSleeping=['knight','gargoyle'].includes(object.enemyType)&&object.ambush?.phase==='dormant';
    if(stoneSleeping)this.animator.loop=false;
    this.animator.update(frozen?0:dt,frozen?0:elapsed);
  }
}

export default ActorAnimator;
