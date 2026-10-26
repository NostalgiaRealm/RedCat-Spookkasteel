import {nativeEffectRandom} from './debris-native.js';
import {snapshotNativeLight} from './explosion-light-native.js';
import {restorePropDebrisState} from './prop-debris-state.js';
import {restoreElectricExplosion,snapshotElectricExplosion} from './electric-explosion-native.js';

const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const mix=(a,b,t)=>a+(b-a)*t;
// Production explosion records are immutable spawn descriptions. Damage and
// rendering need the same seeded cohort, but only rendering mutates smoke's
// transient render fields. A private cache avoids constructing it twice and
// only serializes explicitly validated effect clocks; the public factory stays fresh.
const blastCohorts=new WeakMap();
export function nativeBlastsForEffect(effect) {
  const conf=effect.settings?.explosion||{},min=effect.bounds?.min,max=effect.bounds?.max;
  const values=[effect.id,effect.birth,...effect.position,min?.[0],min?.[1],min?.[2],max?.[0],max?.[1],max?.[2],
    conf.NrExplosions,conf.SizePercentage,conf.SmokeOnly,conf.Green,conf.Electric];
  let cached=blastCohorts.get(effect);
  if(!cached||values.some((value,i)=>value!==cached.values[i])) {
    cached={values,blasts:createNativeBlasts(effect)};blastCohorts.set(effect,cached);
  }
  return cached.blasts;
}

// RcExplosion 0x58d904 selects expl6; 0x58d92f..0x58d988 sets its
// instance gain from SizePercentage (also for zero-size, debris-only blasts).
export function nativeExplosionSound(settings={}) {
  const conf=settings.explosion||{};
  if(number(conf.NrExplosions,1)<=0)return null;
  return {sound:'expl6.wav',volume:number(conf.SmokeOnly)!==0?.4:Math.max(.4,Math.min(.98,number(conf.SizePercentage,25)*.04))};
}

// 0x4a7bfd..0x4a7cfa; the executable indexes rows with count % 6,
// including its slightly off-centre first blast when count is one.
const SPREAD=[
  [.5,0,0,0,0,0],[.3,.6,0,0,0,0],[.5,.2,.8,0,0,0],
  [.5,.1,.7,.3,0,0],[.5,.7,.3,.9,.1,0],[.5,.6,.4,.8,.1,.95],
];

export function createNativeBlasts(effect) {
  const conf=effect.settings?.explosion||{},authoredCount=Math.max(0,number(conf.NrExplosions,1));
  const count=Math.min(16,Math.ceil(authoredCount)),rand=nativeEffectRandom(effect.id+':blasts'),fraction=()=>rand()%10000*.0001;
  const percentage=Math.max(0,number(conf.SizePercentage,25))*.01,diameter=percentage*20*32;
  // The optional ring and Electric generator are independent of flash size
  // in 0x58d710. Zero-size dormant variants must still reach those branches.
  if(!diameter&&!conf.Green&&!conf.Electric)return[];
  const min=effect.bounds?.min||[0,0,0],max=effect.bounds?.max||[0,0,0];
  const centre=effect.position.map((v,i)=>v+(number(min[i])+number(max[i]))*.5),extent=max.map((v,i)=>Math.max(0,number(v)-number(min[i])));
  const longest=extent[0]>=extent[1]&&extent[0]>=extent[2]?0:extent[1]>=extent[2]?1:2,blasts=[];
  let delay=0;
  for(let i=0;i<count;i++) {
    const spread=SPREAD[Math.trunc(authoredCount)%6][i%6]-.5;
    const position=centre.map((v,axis)=>v+extent[axis]*(axis===longest?spread+fraction()*.1-.05:fraction()*.4-.2));
    const blast={birth:number(effect.birth)+Math.trunc(delay*1000)/1000,position,diameter,smokeOnly:!!conf.SmokeOnly,green:!!conf.Green,smoke:[]};
    if(effect.lightState?.[i])blast.lightState=effect.lightState[i];
    if(conf.Electric){blast.electric=true;blast.id=`${effect.id}:electric:${i}`;}
    // 0x58e917 / 0x58eb7b: start 200 ms, repeat 400 ms. The cell's
    // native expiry calculation (0x4ada4e/0x4adb04) includes its start
    // offset twice, allowing a fourth puff on the 1400 ms boundary.
    // Precompute this finite cohort once, not a new emitter every frame.
    for(let puff=0;puff<4;puff++) {
      const signed=()=>((rand()%2)?-1:1)*(2+rand()%15);
      const direction=[signed(),signed()*1.5,signed()],length=Math.hypot(...direction),speed=25+fraction()*15;
      const velocity=direction.map(v=>v/length*speed*(direction[1]<0?-1:1));
      // Smoke births use SizePercentage*.01*32, NOT the blast's 20x
      // sprite size (0x58d731..0x58d77b, 0x58e87a..0x58eb72).
      const radius=percentage*32,origin=position.map((v,axis)=>v+(axis===1?fraction():fraction()*2-1)*radius);
      const life=Math.trunc(1200+fraction()*599)/1000,size=diameter*(.4+fraction()*.4);
      const render={position:[...origin],size:0,opacity:0};
      blast.smoke.push({birth:blast.birth+(200+puff*400)/1000,origin,velocity,life,size,render});
    }
    blast.expires=blast.smoke.reduce((end,p)=>Math.max(end,p.birth+p.life),blast.birth+.8);
    blasts.push(blast);
    delay+=.15+fraction()*.05; // 0x4a83ea..0x4a8413
  }
  return blasts;
}

export function nativeSmokeState(particle,time) {
  const age=time-particle.birth;
  if(age<0||age>=particle.life)return null;
  const t=age/particle.life;
  for(let axis=0;axis<3;axis++)particle.render.position[axis]=particle.origin[axis]+particle.velocity[axis]*age;
  // Adam3DSpriteX 0x56e970: size goes from 50% to 100%; alpha from
  // 80% to 10%, each interpolated over this particle's own lifetime.
  particle.render.size=particle.size*mix(.5,1,t);particle.render.opacity=mix(.8,.1,t);
  return particle.render;
}

// Preserve an in-progress blast on load without replaying destruction or
// sound. Its original birth keeps fire/smoke synchronized with hurt cells.
export function restoreNativeExplosions(values,time) {
  const vector=value=>Array.isArray(value)&&value.length===3&&value.every(Number.isFinite);
  return (Array.isArray(values)?values:[]).filter(effect=>effect&&typeof effect.id==='string'&&typeof effect.sourceId==='string'&&
    vector(effect.position)&&Number.isFinite(effect.birth)&&effect.birth<=time&&time-effect.birth<6&&
    effect.settings&&typeof effect.settings==='object'&&!Array.isArray(effect.settings)&&
    (!effect.bounds||vector(effect.bounds.min)&&vector(effect.bounds.max)))
    .slice(0,256).map(effect=>{const restored={id:effect.id,sourceId:effect.sourceId,birth:effect.birth,position:[...effect.position],
      bounds:effect.bounds?{min:[...effect.bounds.min],max:[...effect.bounds.max]}:undefined,
      scale:vector(effect.scale)?[...effect.scale]:undefined,settings:structuredClone(effect.settings),
      debrisState:restorePropDebrisState(typeof effect.debrisSnapshot==='function'?effect.debrisSnapshot():effect.debrisState,effect,time)};
      const sourceBlasts=nativeBlastsForEffect(effect);
      restored.lightState=sourceBlasts.map(blast=>snapshotNativeLight(blast,time));
      const saved=typeof effect.electricSnapshot==='function'?effect.electricSnapshot():effect.electricState;
      if(restored.settings.explosion?.Electric&&Array.isArray(saved)&&saved.length<=16)
        restored.electricState=nativeBlastsForEffect(restored).map((blast,index)=>
          snapshotElectricExplosion(restoreElectricExplosion(saved[index],blast,time)));
      return restored;
    });
}
