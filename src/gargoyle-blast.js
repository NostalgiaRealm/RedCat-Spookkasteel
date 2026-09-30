// CRcGargoyle::Shoot (0x40c100) hides RcEnemyShot and launches CRcBlastEffect.
// Its independent one-second effect survives a projectile impact. See
// docs/gargoyle-attacks-native.md and the retained native disassembly.
export const GARGOYLE_BLAST_TEXTURE='kaboom.bmp|kaboom_a.bmp';
const clamp=v=>Math.max(0,Math.min(1,v));
const vector=v=>Array.isArray(v)&&v.length===3&&v.every(Number.isFinite);
const subtract=(a,b)=>a.map((v,i)=>v-b[i]);
const normalize=v=>{const length=Math.hypot(...v);return length>1e-8?v.map(x=>x/length):[0,0,0];};
const cross=(a,b)=>[a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0]];

export function createGargoyleBlast(sourceId,origin,velocity,target,seed=1) {
  // Start computes target - (mouth - projectileVelocity * oneSecond),
  // so the visual head sweeps beyond the target during its one-second life.
  const travel=target.map((v,i)=>v-origin[i]+velocity[i]);
  return {sourceId,origin:[...origin],head:[...origin],velocity:travel,direction:normalize(subtract(target,origin)),
    age:0,started:false,nextEmission:null,slot:0,randomState:seed>>>0,particles:[]};
}

export function advanceGargoyleBlasts(effects,dt) {
  if(!(dt>0))return effects;
  return effects.filter(effect=>{
    // Native timers arm on their first tick and expire strictly AFTER their
    // deadline. A newly reset emission timer rearms on the following tick;
    // low frame rates must not create a catch-up burst of overlapping ribbons.
    if(effect.started)effect.age+=dt;else effect.started=true;
    const now=Math.round(effect.age*1000);
    if(now>1000)return false;
    effect.head=effect.origin.map((v,i)=>v+effect.velocity[i]*Math.min(1,effect.age));
    let spawned=null;
    if(effect.nextEmission===null)effect.nextEmission=now+50;
    else if(now>effect.nextEmission) {
      effect.randomState=(Math.imul(effect.randomState,214013)+2531011)>>>0;
      const jitter=((effect.randomState>>>16)&32767)%10000*.003-15;
      const velocity=effect.direction.map(v=>v*20);velocity[0]-=jitter;velocity[1]+=15;velocity[2]+=jitter;
      spawned={position:[...effect.head],velocity,age:0};
      effect.particles[effect.slot]=spawned;effect.slot=(effect.slot+1)%15;effect.nextEmission=null;
    }
    for(const particle of effect.particles) {
      if(particle!==spawned)particle.age+=dt;
      // Native mode 1 accelerates by (0,.05,0)*32 and integrates velocity.
      particle.velocity[1]+=1.6*dt;
      particle.position=particle.position.map((v,i)=>v+particle.velocity[i]*dt);
    }
    return true;
  });
}

export function restoreGargoyleBlasts(values) {
  if(!Array.isArray(values))return [];
  return values.filter(e=>e&&typeof e.sourceId==='string'&&['origin','head','velocity','direction'].every(k=>vector(e[k]))&&
    Number.isFinite(e.age)&&e.age>=0&&e.age<=1.001&&typeof e.started==='boolean'&&
    (e.nextEmission===null||Number.isFinite(e.nextEmission))&&Number.isInteger(e.slot)&&e.slot>=0&&e.slot<15&&
    Number.isInteger(e.randomState)&&Array.isArray(e.particles)&&e.particles.length<=15&&e.particles.every(p=>p&&vector(p.position)&&vector(p.velocity)&&Number.isFinite(p.age)&&p.age>=0))
    .slice(0,64).map(e=>structuredClone(e));
}

// 0x45e4ad..0x45e873 draws kaboom ribbons from each drifting particle to
// the moving head: tail half-width 10->20 over 3 seconds; tip is 1/4 as
// wide. Tail RGB=(255,25,25), tip=(255,251,50), alpha 100%->0% over 3s
// after a .1s delay. This is not a small billboard or an additive fire dot.
export function gargoyleBlastQuads(effect,camera) {
  if(effect.age>1.001)return [];
  const quads=[];
  for(const particle of effect.particles) {
    const axis=normalize(subtract(effect.head,particle.position));
    if(Math.hypot(...axis)<.5)continue;
    let side=normalize(cross(axis,subtract(camera,effect.head)));
    if(Math.hypot(...side)<.5)side=normalize(cross(axis,Math.abs(axis[1])<.9?[0,1,0]:[1,0,0]));
    const width=10+10*clamp(particle.age/3),point=(origin,scale)=>origin.map((v,i)=>v+side[i]*scale);
    const a=point(particle.position,-width),b=point(particle.position,width),c=point(effect.head,width*.25),d=point(effect.head,-width*.25);
    const red=[1,25/255,25/255],yellow=[1,251/255,50/255];
    quads.push({points:[a,b,d,b,c,d],colors:[red,red,yellow,red,yellow,yellow],
      uvs:[[0,1],[1,1],[0,0],[1,1],[1,0],[0,0]],opacity:1-clamp((particle.age-.1)/3)});
  }
  return quads;
}
