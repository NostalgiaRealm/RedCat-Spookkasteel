// CRcParticleSystem / CParticle (RcHcGame.dat). See docs/spout-effects-native.md.
// A fixed simulation clock preserves the recovered integration on both slow
// devices and high-refresh displays, without making bursts depend on rendering.
export const SPOUT_POOL_SIZE=15;
export const SPOUT_STEP=1/60;
const clamp=x=>Math.max(0,Math.min(1,x));
const number=(e,key,fallback=0)=>e[key]!==''&&Number.isFinite(Number(e[key]))?Number(e[key]):fallback;
const mix=(a,b,t)=>a+(b-a)*t;
const rgb=value=>String(value||'255 255 255').trim().split(/\s+/).map(Number);
const cross=(a,b,out)=>{out[0]=a[1]*b[2]-a[2]*b[1];out[1]=a[2]*b[0]-a[0]*b[2];out[2]=a[0]*b[1]-a[1]*b[0];};

export class NativeSpoutEffect {
  constructor(entity,{seed=1,age=0}={}) {
    this.randomState=seed>>>0;this.ticks=0;this.remainder=0;this.serial=0;
    this.enabled=null;this.enableSerial=0;this.finished=false;this.restoredAge=Math.max(0,age)*1000;
    this.duration=Math.max(0,Math.trunc(number(entity,'LifeTimeSecs')*1000));
    this.gravity=24*number(entity,'Gravity');this.scale=20*number(entity,'Scale',1);
    this.sizeStart=number(entity,'SizePercentageStart',100)/100;this.sizeEnd=number(entity,'SizePercentageEnd',100)/100;
    this.alphaStart=number(entity,'AlphaPercentageStart',100);this.alphaEnd=number(entity,'AlphaPercentageEnd');
    this.from=rgb(entity.ColourFrom);this.to=rgb(entity.ColourTo);this.color=[...this.from];
    this.low=this.to[0]-this.from[0]>=1?this.from:this.to;this.high=this.low===this.from?this.to:this.from;
    this.tint=this.color.map(v=>clamp(v/255));this.cycling=number(entity,'ColourCycling')!==0;this.colorUp=true;
    // Native constructor swaps G/B deltas; shipped endpoints are all white.
    this.colorStep=[(this.to[0]-this.from[0])*2,(this.to[2]-this.from[2])*2,(this.to[1]-this.from[1])*2];
    this.axis=[0,1,0];this.reference=[0,0,1];this.tangent1=[0,0,0];this.tangent2=[0,0,0];
    const pick=(a,b)=>mix(number(entity,a),number(entity,b),this.random());
    // The native constructor initializes all lifetimes before launch templates.
    this.pool=Array.from({length:SPOUT_POOL_SIZE},()=>({active:false,
      life:Math.max(1,Math.trunc(pick('LifeSecondsMin','LifeSecondsMax')*1000)),
      position:[0,0,0],birthPosition:[0,0,0],velocity:[0,0,0],offset:[0,0,0],launch:[0,0,0]}));
    const radius=number(entity,'StartRadius');
    for(const p of this.pool) {
      const angle=pick('AngleMin','AngleMax')*Math.PI/180,speed=3*pick('SpeedMin','SpeedMax'),azimuth=this.random()*2*Math.PI;
      const axial=speed*Math.cos(angle),radial=axial*Math.tan(angle);
      p.launch[0]=axial;p.launch[1]=radial*Math.sin(azimuth);p.launch[2]=radial*Math.cos(azimuth);
      p.offset[0]=mix(-radius,radius,this.random());p.offset[2]=mix(-radius,radius,this.random());
      p.delay=Math.max(0,Math.trunc(pick('DelaySecondsMin','DelaySecondsMax')*1000));
    }
    this.particles=[];this.delay=this.pool[0].delay;this.delayEnd=null;this.lifeEnd=null;
  }
  get time(){return this.ticks*SPOUT_STEP;}
  random(){this.randomState=(Math.imul(this.randomState,214013)+2531011)>>>0;return ((this.randomState>>>16)&32767)%10000/10000;}
  basis(direction) {
    const d=this.axis,r=this.reference,length=Math.hypot(...direction);
    for(let i=0;i<3;i++)d[i]=length>1e-9?direction[i]/length:(i===1?1:0);
    r[0]=0;r[1]=d[1]<0?-1:1;r[2]=0;
    if(Math.abs(d[0])<=.1&&Math.abs(d[1]-r[1])<=.1&&Math.abs(d[2])<=.1){r[1]=0;r[2]=d[2]<0?-1:1;}
    // Deliberately not normalized: native off-axis cones are narrower.
    cross(r,d,this.tangent1);cross(this.tangent1,d,this.tangent2);
  }
  spawn(p,origin,direction,now) {
    this.basis(direction);p.active=true;p.birth=this.time;p.serial=++this.serial;
    p.lifeEnd=now+p.life;p.fadeStage=0;p.fadeEnd=now+1;p.fadeStart=0;
    p.opacity=Math.trunc(this.alphaStart*Math.fround(2.55))/255;
    for(let i=0;i<3;i++) {
      p.birthPosition[i]=p.position[i]=origin[i]+p.offset[i];
      p.velocity[i]=this.axis[i]*p.launch[0]+this.tangent1[i]*p.launch[1]+this.tangent2[i]*p.launch[2];
    }
    this.delay=p.delay;this.delayEnd=null;
  }
  step(origin,direction) {
    const now=Math.floor(this.ticks*1000/60+1e-7),dt=SPOUT_STEP;
    if(this.enabled&&!this.finished) {
      if(this.delayEnd===null)this.delayEnd=now+this.delay;
      else if(now>this.delayEnd) {
        for(const p of this.pool)if(!p.active){this.spawn(p,origin,direction,now);break;}
      }
    }
    if(this.enabled&&this.cycling) {
      for(let i=0;i<3;i++)this.color[i]+=this.colorStep[i]*dt*(this.colorUp?1:-1);
      if(this.color[0]>this.high[0]){for(let i=0;i<3;i++)this.color[i]=this.high[i];this.colorUp=!this.colorUp;}
      else if(this.color[0]<this.low[0]){for(let i=0;i<3;i++)this.color[i]=this.low[i];this.colorUp=!this.colorUp;}
      for(let i=0;i<3;i++)this.tint[i]=clamp(this.color[i]/255);
    }
    this.particles.length=0;
    for(const p of this.pool)if(p.active) {
      if(now>p.lifeEnd){p.active=false;continue;}
      // Separate native timers: 1ms wait, arm fade, start fade on next tick.
      if(p.fadeStage===0&&now>p.fadeEnd)p.fadeStage=1;
      else if(p.fadeStage===1){p.fadeStage=2;p.fadeStart=now;}
      if(p.fadeStage===2)p.opacity=Math.trunc(2.5500000000000003*mix(this.alphaStart,this.alphaEnd,clamp((now-p.fadeStart)/p.life)))/255;
      const age=1-clamp((p.lifeEnd-now)/p.life);
      p.size=this.scale*(this.sizeStart===this.sizeEnd?1:mix(this.sizeStart,this.sizeEnd,age));
      p.velocity[1]-=this.gravity*dt;
      for(let i=0;i<3;i++)p.position[i]+=p.velocity[i]*dt;
      this.particles.push(p);
    }
    // Native checks emitter lifetime after births: tails finish naturally.
    if(this.enabled&&!this.finished&&this.duration) {
      if(this.lifeEnd===null)this.lifeEnd=now+Math.max(0,this.duration-this.restoredAge);
      else if(now>this.lifeEnd)this.finished=true;
    }
  }
  update(dt,origin,direction,enabled=true,enableSerial=0) {
    if(!(dt>0))return; // A render while paused must not advance or reset timers.
    if(enabled!==this.enabled||enabled&&enableSerial!==this.enableSerial) {
      const first=this.enabled===null;this.enabled=enabled;
      if(enabled){this.delay=this.pool[0].delay;this.delayEnd=null;this.lifeEnd=null;
        if(!first)this.restoredAge=0;
        this.finished=this.duration>0&&this.restoredAge>=this.duration;}
    }
    this.enableSerial=enableSerial;
    this.remainder+=Math.min(dt,.25);
    while(this.remainder+1e-10>=SPOUT_STEP){this.remainder=Math.max(0,this.remainder-SPOUT_STEP);this.ticks++;this.step(origin,direction);}
  }
}
