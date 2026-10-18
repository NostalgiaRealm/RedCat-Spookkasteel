import { stepFairyCentre } from './fairy-effects.js';

// CRTeleporterFx / CParticle in RcHcGame.dat. Address-by-address recovery is
// recorded in docs/portal-native-recovery.md. Time is seconds, positions are
// the original Genesis world units (no 32x conversion of positions).
export const TELEPORT_FLIGHT_SECONDS=6.8;
export const TELEPORT_FLASH_SECONDS=.3;
export const TELEPORT_EFFECT_SECONDS=TELEPORT_FLIGHT_SECONDS+TELEPORT_FLASH_SECONDS;
export const TELEPORT_STEP=1/60;
export const TELEPORT_POOL_SIZE=250;
const clamp=(x,a=0,b=1)=>Math.max(a,Math.min(b,x));
const mix=(a,b,t)=>a+(b-a)*t;
const clone=value=>JSON.parse(JSON.stringify(value));

export function showTeleporter(object) {
  if(!object.enabled||Number.isFinite(object.teleportEffectAge)&&object.teleportEffectAge<TELEPORT_EFFECT_SECONDS)return false;
  object.teleportEffectAge=0;object.teleportEffectSerial=(object.teleportEffectSerial||0)+1;return true;
}

// CParticle::Rotate (0x47ea90): the radial timer is 2.1 seconds, not the
// 6.8-second particle lifetime. Z rotation followed by X(pi/2) yields X/Z.
export function teleporterSpecialPosition(origin,index,age) {
  const radius=mix(100,10,clamp(age/2.1)),angle=index*Math.PI*2/5-age*7.5;
  return [origin[0]+Math.cos(angle)*radius,origin[1],origin[2]+Math.sin(angle)*radius];
}

// Renderer keeps one instance per portal. Snapshotting the bounded particle
// pool preserves reused-slot velocity/wiggle and avoids replaying level time
// after loading a save. Reading geometry never advances the simulation.
export class NativeTeleporterEffect {
  constructor({origin,floorY,ceilingY,waypoints=[],seed=1}) {
    this.origin=[...origin];this.floorY=floorY;this.ceilingY=ceilingY;
    this.waypoints=waypoints.slice(0,4).map(p=>[...p]);
    this.randomState=seed>>>0;this.ticks=0;this.remainder=0;this.showTick=null;this.active=false;
    this.nextSlow=.75;this.nextBurst=2.5;this.height=0;this.heightUp=true;
    this.color=[20,255,20];this.channel=0;this.colorUp=true;
    this.uvOffset=0;this.uvUp=true;
    this.pool=Array.from({length:TELEPORT_POOL_SIZE},()=>({active:false,wiggle:0,wiggleUp:true,velocity:[0,0,0]}));
  }
  get time(){return this.ticks*TELEPORT_STEP;}
  get showAge(){return this.showTick===null?null:(this.ticks-this.showTick)*TELEPORT_STEP;}
  snapshot(){
    // Only the wiggle oscillator survives inactive-slot reuse. Keeping dead
    // positions/centres in every rolling autosave wastes tens of KB per portal.
    const pool=this.pool.map(p=>p.active?p:(p.wiggle===0&&p.wiggleUp?null:[p.wiggle,p.wiggleUp]));
    return clone({...this,pool});
  }
  static restore(snapshot) {
    const vector=v=>Array.isArray(v)&&v.length===3&&v.every(Number.isFinite);
    if(!snapshot||!vector(snapshot.origin)||!Number.isFinite(snapshot.floorY)||!Number.isFinite(snapshot.ceilingY)||
      !Array.isArray(snapshot.waypoints)||snapshot.waypoints.length>4||!snapshot.waypoints.every(vector)||
      !Number.isSafeInteger(snapshot.ticks)||snapshot.ticks<0||!Number.isFinite(snapshot.remainder)||snapshot.remainder<0||snapshot.remainder>=TELEPORT_STEP||
      !(snapshot.showTick===null||Number.isSafeInteger(snapshot.showTick)&&snapshot.showTick>=0&&snapshot.showTick<=snapshot.ticks)||
      typeof snapshot.active!=='boolean'||snapshot.active&&snapshot.showTick===null||
      !Array.isArray(snapshot.pool)||snapshot.pool.length!==TELEPORT_POOL_SIZE||!vector(snapshot.color)||
      !Number.isInteger(snapshot.channel)||snapshot.channel<0||snapshot.channel>2||
      !['nextSlow','nextBurst','height','uvOffset','randomState'].every(k=>Number.isFinite(snapshot[k]))||
      !['heightUp','colorUp','uvUp'].every(k=>typeof snapshot[k]==='boolean'))return null;
    for(const p of snapshot.pool) {
      if(p===null)continue;
      if(Array.isArray(p)) {
        if(p.length!==2||!Number.isFinite(p[0])||typeof p[1]!=='boolean')return null;
        continue;
      }
      if(!p||typeof p.active!=='boolean'||!Number.isFinite(p.wiggle)||typeof p.wiggleUp!=='boolean'||!vector(p.velocity))return null;
      if(p.active&&(!['corner','seek','orbit','burst'].includes(p.kind)||!vector(p.position)||!vector(p.centre)||
        !['born','life','alpha','opacity','fadeDelay','fadeDuration','phase'].every(k=>Number.isFinite(p[k]))||p.life<=0||p.fadeDuration<=0))return null;
      if(p.active&&p.kind==='seek'&&(typeof p.seeking!=='boolean'||p.waypoint!==0))return null;
    }
    const effect=new NativeTeleporterEffect(snapshot);
    for(const key of Object.keys(effect))effect[key]=clone(snapshot[key]);
    effect.pool=effect.pool.map(p=>p===null?{active:false,wiggle:0,wiggleUp:true,velocity:[0,0,0]}:
      Array.isArray(p)?{active:false,wiggle:p[0],wiggleUp:p[1],velocity:[0,0,0]}:p);
    return effect;
  }
  show() {
    if(this.active)return false;
    this.active=true;this.showTick=this.ticks;this.height=0;this.heightUp=true;
    this.nextSlow=this.time;
    // Live corner particles switch to Seek, rather than being discarded or
    // analytically respawned. Their target is the first rotating energy beam.
    for(const p of this.pool)if(p.active) {
      p.kind='seek';p.born=this.time;p.life=.9;p.fadeDelay=.9;p.fadeDuration=.9;
      p.seeking=true;p.waypoint=0;
    }
    return true;
  }
  random() {
    this.randomState=(Math.imul(this.randomState,214013)+2531011)>>>0;
    return ((this.randomState>>>16)&32767)%10000;
  }
  orbitCentre(index) {
    return [this.origin[0],this.floorY+(index%2?this.height:75-this.height),this.origin[2]];
  }
  spawn(index,anchor=null) {
    const p=this.pool[index],orbit=this.active;
    delete p.seeking;delete p.waypoint;
    Object.assign(p,{active:true,kind:orbit?'orbit':'corner',born:this.time,life:orbit?50:3,
      alpha:1,opacity:1,fadeDelay:.9,fadeDuration:orbit?50:2.4,
      position:[...(anchor||this.origin)],velocity:[0,0,0],centre:this.orbitCentre(index),phase:1});
    // CParticle::Start resets velocity, but keeps the slot's wiggle oscillator.
  }
  end() {
    this.active=false;
    // 0x474f20: disperse every live particle away from the authored origin at
    // 110 units/second. Restart its lifetime/fade; preserve its oscillator.
    for(const p of this.pool)if(p.active) {
      const delta=p.position.map((v,i)=>v-this.origin[i]),length=Math.hypot(...delta);
      p.kind='burst';p.velocity=delta.map(v=>length?v/length*110:0);
      p.born=this.time;p.life=3;p.fadeDelay=.9;p.fadeDuration=2.4;
    }
  }
  updateParticle(p,index,dt) {
    const age=this.time-p.born;
    if(age>p.life+1e-9){p.active=false;return;}
    if(age>p.fadeDelay)p.opacity=p.alpha*clamp(1-(age-p.fadeDelay)/p.fadeDuration);
    if(p.kind==='orbit') {
      // Only every third orbit's centre follows the moving height. The other
      // centres retain their spawn height (0x474ea6–0x474ee8).
      if(index%3===0)p.centre=this.orbitCentre(index);
      p.phase+=5.5*dt;
      p.position=[p.centre[0]+30*Math.cos(p.phase),p.centre[1],p.centre[2]+30*Math.sin(p.phase)];
    } else if(p.kind==='seek') {
      stepFairyCentre(p,[teleporterSpecialPosition(this.origin,0,this.showAge)],dt,()=>this.random());
    } else {
      // 0x47e090: acceleration [0,1,0], eased ±.8 wiggle on X/Z, no
      // collisions. Native multiplies acceleration by32, then integrates.
      const q=Math.abs(p.wiggle)/.8,step=(2*(1-q)+(q>.7?.4:0))*dt;
      p.wiggle+=p.wiggleUp?step:-step;
      if(p.wiggle>.8){p.wiggle=.8;p.wiggleUp=false;}
      else if(p.wiggle<-.8){p.wiggle=-.8;p.wiggleUp=true;}
      for(let i=0;i<3;i++) {
        p.velocity[i]+=(i===1?1:p.wiggle)*32*dt;
        p.position[i]+=p.velocity[i]*dt;
      }
    }
  }
  tick() {
    this.ticks++;const dt=TELEPORT_STEP;
    // Native emission checks both timers, with the .75s timer taking priority.
    // In Show mode that delay becomes trunc(750*.01)=7ms; only one free slot
    // is filled per tick. The secondary delay becomes2500*.55=1375ms.
    const slowDue=this.time>this.nextSlow+1e-9,burstDue=this.time>this.nextBurst+1e-9;
    if(slowDue||burstDue) {
      const count=this.active?1:this.waypoints.length;
      let spawned=0;
      for(let i=0;i<this.pool.length&&spawned<count;i++)if(!this.pool[i].active) {
        this.spawn(i,this.active?null:this.waypoints[spawned]);spawned++;
        if(this.time>this.nextSlow+1e-9)this.nextSlow=this.time+(this.active?.007:.75);
        else this.nextBurst=this.time+(this.active?1.375:2.5);
      }
    }
    for(let i=0;i<this.pool.length;i++)if(this.pool[i].active)this.updateParticle(this.pool[i],i,dt);
    this.color[this.channel]+=(this.colorUp?1:-1)*500*dt;
    if(this.color[this.channel]>255||this.color[this.channel]<20) {
      this.color[this.channel]=this.colorUp?255:20;this.colorUp=!this.colorUp;this.channel=(this.channel+1)%3;
    }
    this.height+=(this.heightUp?1:-1)*25*dt;
    if(this.height>75){this.height=75;this.heightUp=false;}
    else if(this.height<0){this.height=0;this.heightUp=true;}
    if(this.active) {
      this.uvOffset+=(this.uvUp?1:-1)*.01;
      if(this.uvOffset>=.03)this.uvUp=false;
      if(this.showAge>=TELEPORT_EFFECT_SECONDS-1e-9)this.end();
    }
  }
  advance(dt) {
    if(!Number.isFinite(dt)||!(dt>0))return;
    this.remainder+=dt;
    while(this.remainder>=TELEPORT_STEP-1e-9){this.tick();this.remainder-=TELEPORT_STEP;}
    if(this.remainder<0)this.remainder=0;
  }
  geometry(cameraPosition=null) {
    const sparks=[],rays=[],discs=[],age=this.showAge;
    let color=[this.color[0],20,this.color[2]].map(v=>v/255);
    for(let i=0;i<this.pool.length;i++) {
      const p=this.pool[i];if(!p.active)continue;
      // Rendering changes tint at multiples of3 and retains that tint for
      // subsequent live slots (0x473ed2–0x473f51), not fixed RGB stars.
      if(i%3===0)color=(i%2?[20,this.color[2],this.color[1]]:[20,this.color[1],this.color[2]]).map(v=>v/255);
      const opacity=p.opacity;
      sparks.push({position:[...p.position],size:9,color:[...color],opacity});
    }
    if(this.active) {
      const headY=Math.max(this.floorY,this.ceilingY-age*200);
      if(age<TELEPORT_FLIGHT_SECONDS-1e-9)for(let i=0;i<5;i++) {
        const tip=teleporterSpecialPosition(this.origin,i,age);
        // Native submits exactly one straight quad per beam, from ceiling to
        // the descending front. Its rotation is in the orbit, not its strip.
        rays.push({start:[tip[0],this.ceilingY,tip[2]],end:[tip[0],headY,tip[2]],width:41,
          color:[210/255,210/255,1],opacity:1,uvStart:.03+this.uvOffset,uvEnd:.97+this.uvOffset});
      }
      if(headY<=this.floorY&&age<TELEPORT_FLIGHT_SECONDS-1e-9) {
        const remaining=clamp(1-age/TELEPORT_FLIGHT_SECONDS);
        discs.push({texture:'blast',position:[this.origin[0],this.floorY+1,this.origin[2]],radius:50*(.5*(1-remaining)+1.8*remaining),opacity:100/255});
      }
      if(age>=TELEPORT_FLIGHT_SECONDS-1e-9) {
        const t=clamp((age-TELEPORT_FLIGHT_SECONDS)/TELEPORT_FLASH_SECONDS),fraction=mix(.1,.95,t);
        const position=cameraPosition?this.origin.map((v,i)=>mix(v,cameraPosition[i],fraction)):[...this.origin];
        discs.push({texture:'fleuri',position,radius:mix(8,80,t),opacity:1,billboard:true,cameraFraction:fraction});
      }
    }
    return {sparks,rays,discs,light:this.active?{position:[...this.origin],color:[1,1,25/255],radius:110}:null,active:this.active,stage:this.active?(age<TELEPORT_FLIGHT_SECONDS-1e-9?'flight':'terminal'):'idle'};
  }
}

// Offline sampling for fixtures/legacy saves only. Live rendering restores a
// saved pool or advances its existing instance instead of replaying this helper.
// Legacy saves have no particle state: warm up at most two particle lifetimes,
// never replay hours of gameplay during a load (their old phase was approximate).
export function teleporterGeometry({age=0,showAge=null,cameraPosition=null,...options}) {
  const effect=new NativeTeleporterEffect(options);
  if(Number.isFinite(showAge)&&showAge>=0) {
    effect.advance(clamp(age-showAge,0,6));effect.show();effect.advance(clamp(showAge,0,TELEPORT_EFFECT_SECONDS+3));
  } else effect.advance(clamp(age,0,6));
  return effect.geometry(cameraPosition);
}
