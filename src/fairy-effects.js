const clamp=v=>Math.max(0,Math.min(1,v));
export const FAIRY_TEXTURES={core:'fleuri.bmp|fleuri_a.bmp',halo:'fleurl8.bmp|fleurl8_a.bmp',rays:'fleurl7.bmp|fleurl7_a.bmp',star:'star.bmp|star_a.bmp'};
export const FAIRY_DEPARTURE_SECONDS=4;
export const FAIRY_STEP=1/60;
export const FAIRY_RIBBON_TEXTURE='ptrail.bmp|ptrail_a.bmp';
export const FAIRY_RIBBON_WIDTH=1.92;
export const FAIRY_RIBBON_DISTANCE=1.6;
const RIBBON_LIFE_MS=800,RIBBON_SEGMENTS_PER_ORBITER=48;
const milliseconds=time=>Math.floor(time*1000+1e-6);

// CFairy sets owner alpha 100, not 255 (0x478f97). The shared trail
// renderer fades that alpha over 800ms, using one value for the whole quad,
// and does not submit a quad at alpha <=5 (0x587a2a–0x587b54).
export function fairyRibbonOpacity(ageMs) {
  const alpha=100*clamp(1-ageMs/RIBBON_LIFE_MS);
  return alpha>5?alpha/255:0;
}

function ribbonGroups(trails) {
  const groups=Array.from({length:5},()=>[]);
  for(const trail of trails)groups[trail.orbiter].push(trail);
  return groups;
}

function pruneRibbon(group) {
  if(!group.length)return group;
  const now=milliseconds(group.at(-1).born);
  const first=group.findIndex((t,i)=>fairyRibbonOpacity(now-milliseconds(i===0?t.born:t.fromBorn))>0);
  // Retain the preceding point, as the native renderer does. A fixed 60Hz
  // update can commit only one point per orbiter per tick; 48 segments cover
  // its visible history plus the preceding point and duplicate live head.
  const offset=first>0&&group.length-first>1?first-1:0;
  return group.slice(Math.max(offset,group.length-RIBBON_SEGMENTS_PER_ORBITER));
}

// CParticle::Seek / Hover, 0x47e850 / 0x47ece0. Position is integrated
// BEFORE the stored velocity is capped; reversing those operations changes
// the original waypoint arrival and the small orbit around the final point.
export function stepFairyCentre(state,waypoints,dt,random) {
  if(!waypoints.length)return false;
  const last=waypoints.length-1,hover=!state.seeking;
  if(!hover&&state.waypoint>=last) {
    const damping=Math.max(0,1-.5*dt);
    state.velocity=state.velocity.map(v=>v*damping);
    if(Math.hypot(...state.velocity)<.5)state.seeking=false;
  }
  let delta=waypoints[hover?last:state.waypoint].map((v,i)=>v-state.position[i]),distance=Math.hypot(...delta);
  if(hover&&distance<20) {
    delta=waypoints[last].map((v,i)=>v+(i<2?14:0)-state.position[i]);distance=Math.hypot(...delta);
  } else if(!hover&&distance<20&&state.waypoint<last)state.waypoint++;
  const magnitude=Math.min(.006*distance*distance,200);
  const acceleration=delta.map(v=>distance?v/distance*magnitude:0);
  if(hover) {
    acceleration[2]+=random()*.0005-2.5;
    acceleration[0]+=random()*.0003-1.5;
  }
  for(let i=0;i<3;i++) {
    state.velocity[i]+=acceleration[i]*32*dt;
    state.position[i]+=state.velocity[i]*dt;
  }
  const speed=Math.hypot(...state.velocity);
  if(speed>75)state.velocity=state.velocity.map(v=>v*75/speed);
  return true;
}

export function fairyOrbit(centre,index,age) {
  // 0x47caab + 0x47db60: Z orbit, radius30, speed5, phase .7*i,
  // followed by the two authored X rotations (.7*i each).
  const phase=.7*index+5*age,tilt=1.4*index,y=30*Math.sin(phase);
  return [centre[0]+30*Math.cos(phase),centre[1]+y*Math.cos(tilt),centre[2]+y*Math.sin(tilt)];
}

// One persistent state per effect. Native per-tick Euler operations run at a
// fixed60Hz to avoid changing motion/emission when the HD renderer's FPS varies.
// Geometry reads cached state/history only; visibility refreshes never simulate.
export class NativeFairyEffect {
  constructor({origin,waypoints=[],lifeTime=0,seed=1}) {
    this.randomState=seed>>>0;this.time=0;this.remainder=0;
    this.color=[20,255,20];this.channel=0;this.colorUp=true;
    this.pulse=1;this.otherPulse=1;this.pulseUp=true;
    this.pool=Array.from({length:50},()=>({active:false,wiggle:0,wiggleUp:true}));
    this.trails=[];this.trailFormat=2;this.serial=0;
    this.activate({origin,waypoints,lifeTime});
  }
  snapshot() {
    // Inactive slots retain only their oscillator; their old position/birth
    // never participates in reuse. Keep every live particle and trail segment,
    // plus the random stream and fractional tick, without replaying elapsed time.
    const pool=this.pool.map(p=>p.active?p:p.wiggle===0&&p.wiggleUp?null:[p.wiggle,p.wiggleUp]);
    return structuredClone({...this,pool});
  }
  static restore(saved) {
    const vector=v=>Array.isArray(v)&&v.length===3&&v.every(Number.isFinite);
    const number=k=>Number.isFinite(saved?.[k]);
    if(!saved||!vector(saved.origin)||!Array.isArray(saved.waypoints)||saved.waypoints.length>10||!saved.waypoints.every(vector)||
      !['time','remainder','lifeTime','age','startedAt','nextSlow','nextBurst','angle','pulse','otherPulse'].every(number)||
      saved.time<0||saved.age<0||saved.startedAt<0||saved.startedAt>saved.time||saved.lifeTime<0||
      saved.remainder<0||saved.remainder>=FAIRY_STEP||
      !Number.isInteger(saved.randomState)||saved.randomState<0||saved.randomState>0xffffffff||
      !Number.isSafeInteger(saved.serial)||saved.serial<0||!vector(saved.color)||
      !Number.isInteger(saved.channel)||saved.channel<0||saved.channel>2||
      !['colorUp','pulseUp','active','stopRequested'].every(k=>typeof saved[k]==='boolean')||
      !vector(saved.centre?.position)||!vector(saved.centre?.velocity)||typeof saved.centre.seeking!=='boolean'||
      !Number.isInteger(saved.centre.waypoint)||saved.centre.waypoint<0||saved.centre.waypoint>=Math.max(1,saved.waypoints.length)||
      !vector(saved.lastCentre)||!Array.isArray(saved.lastTips)||saved.lastTips.length!==5||!saved.lastTips.every(vector)||
      !Array.isArray(saved.pool)||saved.pool.length!==50||!Array.isArray(saved.trails)||saved.trails.length>240)return null;
    for(const p of saved.pool) {
      if(p===null)continue;
      if(Array.isArray(p)) {if(p.length!==2||!Number.isFinite(p[0])||typeof p[1]!=='boolean')return null;continue;}
      if(!p||p.active!==true||!vector(p.position)||!vector(p.velocity)||!Number.isFinite(p.wiggle)||typeof p.wiggleUp!=='boolean'||
        !Number.isFinite(p.born)||p.born<0||p.born>saved.time||!Number.isSafeInteger(p.serial)||p.serial<1||p.serial>saved.serial||
        !['slow','burst'].includes(p.kind))return null;
    }
    if(saved.trailFormat!==undefined&&saved.trailFormat!==2)return null;
    if(saved.trails.some(t=>!t||!vector(t.start)||!vector(t.end)||!Number.isFinite(t.born)||t.born<0||t.born>saved.time+1e-9))return null;
    if(saved.trailFormat===2) {
      if(saved.trails.some(t=>!Number.isInteger(t.orbiter)||t.orbiter<0||t.orbiter>4||
        !Number.isFinite(t.fromBorn)||t.fromBorn<0||t.fromBorn>t.born))return null;
      for(const group of ribbonGroups(saved.trails))if(group.length>RIBBON_SEGMENTS_PER_ORBITER||
        group.some((t,i)=>i>0&&(t.fromBorn!==group[i-1].born||t.end.some((v,axis)=>v!==group[i-1].start[axis]))))return null;
    }
    const effect=new NativeFairyEffect(saved);
    for(const key of Object.keys(effect))effect[key]=structuredClone(saved[key]);
    effect.pool=effect.pool.map(p=>p===null?{active:false,wiggle:0,wiggleUp:true}:
      Array.isArray(p)?{active:false,wiggle:p[0],wiggleUp:p[1]}:p);
    if(saved.trailFormat!==2) {
      // Older saves stored five independent segments per tick in orbiter
      // order. Preserve their path once, then continue with a moving endpoint.
      const groups=ribbonGroups(effect.trails.map((t,i)=>({...t,orbiter:i%5,
        born:milliseconds(t.born)/1000,fromBorn:milliseconds(Math.max(0,t.born-FAIRY_STEP))/1000})));
      for(const group of groups) {
        for(let i=1;i<group.length;i++){group[i].fromBorn=group[i-1].born;group[i].end=[...group[i-1].start];}
        const last=group.at(-1);
        if(last)group.push({start:[...last.start],end:[...last.start],born:last.born,fromBorn:last.born,orbiter:last.orbiter});
      }
      effect.trails=groups.flatMap(pruneRibbon);effect.trailFormat=2;
    }
    return effect;
  }
  random() {
    // Original MSVC CRT rand(), 0x60a4a0, including its modulo10000 bias.
    this.randomState=(Math.imul(this.randomState,214013)+2531011)>>>0;
    return ((this.randomState>>>16)&32767)%10000;
  }
  activate({origin,waypoints=[],lifeTime=0}) {
    this.origin=[...origin];this.waypoints=waypoints.slice(0,10).map(p=>[...p]);this.lifeTime=lifeTime;
    this.centre={position:[...origin],velocity:[0,0,0],waypoint:0,seeking:true};this.lastCentre=[...origin];
    this.active=true;this.stopRequested=false;this.age=0;this.startedAt=this.time;this.remainder=0;
    this.nextSlow=this.time+.25;this.nextBurst=this.time+2.5;this.angle=0;
    this.lastTips=Array.from({length:5},(_,i)=>fairyOrbit(origin,i,0));
    // CFairy::Enable resets the centre, orbiters and timers, but retains
    // colors/pulses and living secondary particles (0x47cdb0).
  }
  requestStop(){this.stopRequested=true;}
  spawn(slot,speed,burst=false) {
    const p=this.pool[slot],x=this.random()*.0002-1,y=this.random()*.0001,z=this.random()*.0002-1;
    const ySign=(slot%4===0?1:-1)*(burst?-1:1);
    Object.assign(p,{active:true,position:[...(burst?this.lastCentre:this.centre.position)],velocity:[x*speed,y*ySign*speed,z*speed],born:this.time,serial:++this.serial,kind:burst?'burst':'slow'});
    // Reused slots retain their oscillator phase, just like 0x47e710.
  }
  burst(count=-1) {
    let remaining=count;
    for(let i=0;i<this.pool.length&&remaining!==0;i++)if(!this.pool[i].active) {
      this.spawn(i,110,true);if(remaining>0)remaining--;
    }
  }
  updatePool(dt) {
    for(const p of this.pool)if(p.active) {
      if(this.time-p.born>=FAIRY_DEPARTURE_SECONDS-1e-9){p.active=false;continue;}
      // 0x47e090 / 0x47ef00: eased ±.8 wiggle on X/Z, gravity-1.5,
      // both multiplied by32 before semi-implicit integration. No collision.
      const q=Math.abs(p.wiggle)/.8,step=(2*(1-q)+(q>.7?.4:0))*dt;
      p.wiggle+=p.wiggleUp?step:-step;
      if(p.wiggle>.8){p.wiggle=.8;p.wiggleUp=false;}
      else if(p.wiggle<-.8){p.wiggle=-.8;p.wiggleUp=true;}
      for(let i=0;i<3;i++) {
        p.velocity[i]+=(i===1?-1.5:p.wiggle)*32*dt;
        p.position[i]+=p.velocity[i]*dt;
      }
    }
  }
  updateColorAndPulse(dt) {
    // 0x47b7c0 clamps at a channel endpoint; excess tick time is not
    // carried into the following channel.
    this.color[this.channel]+=(this.colorUp?1:-1)*500*dt;
    if(this.color[this.channel]>255||this.color[this.channel]<20) {
      this.color[this.channel]=this.colorUp?255:20;
      this.colorUp=!this.colorUp;this.channel=(this.channel+1)%3;
    }
    const normalized=Math.abs(2*(this.pulse-1)-1),delta=(.7*(1-normalized)+.07)*dt*(this.pulseUp?1:-1);
    this.pulse+=delta;this.otherPulse-=delta;
    if(this.pulse>2){this.pulse=2;this.otherPulse=1;this.pulseUp=false;}
    else if(this.pulse<1){this.pulse=1;this.otherPulse=2;this.pulseUp=true;}
    this.angle+=.9*dt;
  }
  updateRibbon(tips) {
    const now=milliseconds(this.time)/1000,groups=ribbonGroups(this.trails);
    for(let orbiter=0;orbiter<5;orbiter++) {
      const group=groups[orbiter],tip=tips[orbiter],head=group.at(-1);
      // 0x5871f0 creates two identical initial points, then replaces the live
      // endpoint each tick. Fairy disables time-based sampling and commits
      // only when its distance from the anchor is strictly greater than 1.6.
      if(!head)group.push({start:[...tip],end:[...tip],born:now,fromBorn:now,orbiter});
      else {
        head.start=[...tip];head.born=now;
        if(Math.hypot(...tip.map((v,axis)=>v-head.end[axis]))>FAIRY_RIBBON_DISTANCE)
          group.push({start:[...tip],end:[...tip],born:now,fromBorn:now,orbiter});
      }
    }
    this.trails=groups.flatMap(pruneRibbon);
  }
  tick(dt,events) {
    this.time+=dt;const wasActive=this.active,age=this.time-this.startedAt;
    if(this.active) {
      if(this.stopRequested||(this.lifeTime>0&&age>=this.lifeTime-1e-9))this.active=false;
      else this.active=stepFairyCentre(this.centre,this.waypoints,dt,()=>this.random());
    }
    this.updatePool(dt);
    if(this.active) {
      // TimerA has priority when both expire. TimerB's burst then occurs on
      // the next tick. A full pool resets neither timer (0x47c2b0).
      const slowDue=this.time>=this.nextSlow-1e-9,burstDue=this.time>=this.nextBurst-1e-9;
      if(slowDue||burstDue) {
        const slot=this.pool.findIndex(p=>!p.active);
        if(slot>=0) {
          this.spawn(slot,30);
          if(slowDue)this.nextSlow=this.time+.25;
          else {this.nextBurst=this.time+2.5;this.burst(5);events.push('sprinkle');}
        }
      }
      this.updateColorAndPulse(dt);
      // Fast bursts use the previous published centre; slow emissions use
      // this tick's centre (0x47c6c0 versus0x47c460, copy0x47961f).
      this.lastCentre=[...this.centre.position];
      const tips=Array.from({length:5},(_,i)=>fairyOrbit(this.centre.position,i,age));
      this.updateRibbon(tips);
      this.lastTips=tips;
    } else if(wasActive) {
      this.burst();events.push('departure');
    }
    // Stopped orbiters no longer draw their ribbons. Discard expired stored
    // history without retaining invisible native list nodes indefinitely.
    if(!this.active)this.trails=this.trails.filter(t=>this.time-t.born<RIBBON_LIFE_MS/1000-1e-9);
  }
  advance(dt) {
    const events=[];if(!(dt>0))return events;
    this.age+=dt;this.remainder+=dt;
    while(this.remainder>=FAIRY_STEP-1e-9) {
      this.tick(FAIRY_STEP,events);this.remainder-=FAIRY_STEP;
    }
    if(this.remainder<0)this.remainder=0;
    return events;
  }
  geometry() {
    const sprites=[],[r,g,b]=this.color.map(v=>v/255),centre=[...this.centre.position];
    if(this.active) {
      sprites.push(
        {texture:FAIRY_TEXTURES.core,position:centre,width:60,height:60,color:[1,1,1],opacity:200/255,rotation:0},
        {texture:FAIRY_TEXTURES.halo,position:centre,width:15*this.pulse,height:15*this.pulse,color:[r,1,b],opacity:180/255,rotation:-this.angle},
        {texture:FAIRY_TEXTURES.rays,position:centre,width:15,height:15,diagonalScale:[this.pulse,this.otherPulse],color:[r,g,b],opacity:100/255,rotation:this.angle},
        {texture:FAIRY_TEXTURES.rays,position:centre,width:15,height:15,diagonalScale:[this.otherPulse,this.pulse],color:[b,g,r],opacity:100/255,rotation:this.angle+Math.PI/4}
      );
      for(const position of this.lastTips)sprites.push({texture:FAIRY_TEXTURES.star,position:[...position],width:6,height:6,color:[r,1,b],opacity:1,rotation:0});
    }
    for(const p of this.pool)if(p.active)sprites.push({texture:FAIRY_TEXTURES.star,position:[...p.position],width:6,height:6,color:[r,1,b],opacity:clamp((4-(this.time-p.born))/3),rotation:0});
    const rays=[];
    if(this.active)for(const group of ribbonGroups(this.trails)) {
      if(!group.length)continue;
      // The original uses the live head's timestamp, not the render clock.
      // Its first quad uses the second point's stamp; subsequent quads use
      // their first point (0x587871 and 0x587a3e–0x587a53).
      const now=milliseconds(group.at(-1).born);
      group.forEach((t,i)=>{
        const opacity=fairyRibbonOpacity(now-milliseconds(i===0?t.born:t.fromBorn));
        if(opacity>0&&Math.hypot(...t.start.map((v,axis)=>v-t.end[axis]))>1e-7)
          rays.push({start:t.end,end:t.start,width:FAIRY_RIBBON_WIDTH,color:[1,1,25/255],opacity});
      });
    }
    return {sprites,rays,light:this.active?{position:centre,color:[1,1,25/255],radius:110*this.pulse}:null};
  }
}

// Offline sampling helper for fixtures. The live renderer holds one
// NativeFairyEffect and never reconstructs its trajectory to draw a frame.
export function fairyGeometry({age=0,departureAge=null,departureOrigin=null,...options}) {
  const effect=new NativeFairyEffect(options);
  if(Number.isFinite(departureAge)&&departureAge<=age) {
    effect.advance(Math.max(0,departureAge));
    if(departureOrigin)effect.centre.position=[...departureOrigin];
    effect.requestStop();effect.advance(Math.max(FAIRY_STEP,age-departureAge));
  } else effect.advance(age);
  return effect.geometry();
}
