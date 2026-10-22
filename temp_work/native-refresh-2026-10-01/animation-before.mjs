// Rigid skeletal animation for Genesis3D actors. Each instance owns its geometry.
// Original vertex coordinates are local to one bone; pose = parent * attachment * key.
const identity = new Float64Array([1,0,0,0,1,0,0,0,1,0,0,0]);

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
  const [x,y,z,w]=q,xx=2*x*x,yy=2*y*y,zz=2*z*z,xy=2*x*y,xz=2*x*z,yz=2*y*z,wx=2*w*x,wy=2*w*y,wz=2*w*z;
  out.set([1-yy-zz,xy-wz,xz+wy,xy+wz,1-xx-zz,yz-wx,xz-wy,yz+wx,1-xx-yy,p[0],p[1],p[2]]);
}

export class ActorAnimator {
  constructor(data, geometry) {
    this.data=data;this.geometry=geometry;this.time=0;this.timeScale=1;this.loop=true;this.finished=false;this.enabled=true;
    this.clip=null;this.name=null;
    this.transforms=data.bones.map(()=>new Float64Array(12));
    this.prepared=new Map((data.animations||[]).map(clip=>{
      const byName=new Map(clip.tracks.map(track=>[track.bone,track]));
      return [clip.name.toLowerCase(),{clip,tracks:data.bones.map(bone=>{
        const track=byName.get(bone.name);
        return track?{...track,tangents:track.translation?hermiteTangents(track.translation):null}:null;
      })}];
    }));
    this.p=new Float64Array(3);this.q=new Float64Array(4);this.key=new Float64Array(12);this.local=new Float64Array(12);
  }

  play(name, loop=true, restart=false) {
    const entry=this.prepared.get(String(name).toLowerCase());
    if(!entry)return false;
    // A completed one-shot holds its last pose. Only a new gameplay action
    // explicitly restarts it; selecting a state every frame must not replay it.
    if(this.clip===entry.clip && !restart){this.loop=loop;return true;}
    this.clip=entry.clip;this.tracks=entry.tracks;this.name=entry.clip.name;
    this.loop=loop;this.time=0;this.finished=false;this.update(0);return true;
  }

  update(dt) {
    if(!this.enabled || !this.clip)return;
    const advance=Number.isFinite(dt)?Math.max(0,dt)*this.timeScale:0;
    const duration=this.clip.duration;
    this.time+=advance;
    if(duration>0 && this.loop)this.time=((this.time%duration)+duration)%duration;
    else {this.time=Math.max(0,Math.min(this.time,duration));this.finished=this.time>=duration;}
    for(let i=0;i<this.data.bones.length;i++) {
      const bone=this.data.bones[i],track=this.tracks[i];
      translation(this.p,track?.translation,track?.tangents,this.time);
      rotation(this.q,track?.rotation,this.time);
      compose(this.key,this.p,this.q);
      multiply(this.local,bone.attachment,this.key);
      multiply(this.transforms[i],bone.parent>=0?this.transforms[bone.parent]:identity,this.local);
    }
    const position=this.geometry.getAttribute('position'),normal=this.geometry.getAttribute('normal');
    const {localPositions,localNormals,joints,normalJoints}=this.data;
    for(let i=0;i<joints.length;i++) {
      const offset=i*3,m=joints[i]>=0?this.transforms[joints[i]]:identity;
      const x=localPositions[offset],y=localPositions[offset+1],z=localPositions[offset+2];
      position.array[offset]=m[0]*x+m[1]*y+m[2]*z+m[9];
      position.array[offset+1]=m[3]*x+m[4]*y+m[5]*z+m[10];
      position.array[offset+2]=m[6]*x+m[7]*y+m[8]*z+m[11];
      if(normal && localNormals) {
        const n=normalJoints[i]>=0?this.transforms[normalJoints[i]]:identity;
        const nx=localNormals[offset],ny=localNormals[offset+1],nz=localNormals[offset+2];
        const a=n[0]*nx+n[1]*ny+n[2]*nz,b=n[3]*nx+n[4]*ny+n[5]*nz,c=n[6]*nx+n[7]*ny+n[8]*nz;
        const length=Math.hypot(a,b,c)||1;
        normal.array[offset]=a/length;normal.array[offset+1]=b/length;normal.array[offset+2]=c/length;
      }
    }
    position.needsUpdate=true;if(normal)normal.needsUpdate=true;
    this.geometry.computeBoundingBox();this.geometry.computeBoundingSphere();
  }
}

const STATE_CLIPS={
  idle:['idle','idle1','idle0','idle2','static'],
  walk:['walkfw','walkbw','fly','idle','idle1'],
  attack:['shoot1','shoot','attack'],
  hurt:['hit','hurt'],
  death:['death','die'],
  charge:['charge'],
  start:['start'],
  dormant:['start'],
  teleport:['teleport']
};

/** Match gameplay states to the original actor's case-insensitive motion names. */
export class ActorStateAnimator {
  constructor(animator,stats={}) {
    this.animator=animator;this.key=null;
    this.clips={};this.durations={};this.speeds={};
    for(const [state,names] of Object.entries(STATE_CLIPS)) {
      const entry=names.map(name=>animator.prepared.get(name)).find(Boolean);
      const factor=Number(stats[{walk:'WalkMotionFactor',hurt:'HitMotionFactor',attack:'ShootMotionFactor'}[state]]);
      this.speeds[state]=Number.isFinite(factor)&&factor>0?factor:1;
      if(entry){this.clips[state]=entry.clip.name;this.durations[state]=entry.clip.duration/this.speeds[state];}
    }
  }
  update(object,dt,frozen=false,time=null) {
    const state=object.animationState||'idle';
    // CRcTouchBat/CRcShootBat map the active idle motion to airborne idle2.
    // Disabled bats and explicitly scripted idle1 poses retain hanging idle.
    const flyingIdle=state==='idle'&&object.enemyType==='bat'&&object.enabled===true?this.animator.prepared.get('idle2'):null;
    const clip=flyingIdle?.clip.name||this.clips[state]||this.clips.idle;
    const key=`${state}:${object.animationSerial||0}:${clip}`;
    const oneShot=['attack','hurt','death','start','charge','teleport'].includes(state);
    if(key!==this.key) {
      const initial=this.key===null;
      this.key=key;
      this.animator.timeScale=(this.speeds[state]||1)*(object.animationRate||1);
      if(clip)this.animator.play(clip,!oneShot,true);
      // Saved gameplay deadlines retain the remaining attack/hurt/death time.
      // A newly loaded actor must resume that pose before its next strike.
      if(initial&&oneShot&&Number.isFinite(time)&&Number.isFinite(object.animationUntil)&&this.durations[state]) {
        this.animator.update(Math.max(0,this.durations[state]/(object.animationRate||1)-(object.animationUntil-time)));return;
      }
    }
    if(state==='dormant'){this.animator.time=0;this.animator.update(0);return;}
    this.animator.update(frozen?0:dt);
  }
}

export default ActorAnimator;
