import {nativeEffectRandom} from './debris-native.js';

const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const mix=(a,b,t)=>a+(b-a)*t;

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
  if(!diameter)return[];
  const min=effect.bounds?.min||[0,0,0],max=effect.bounds?.max||[0,0,0];
  const centre=effect.position.map((v,i)=>v+(number(min[i])+number(max[i]))*.5),extent=max.map((v,i)=>Math.max(0,number(v)-number(min[i])));
  const longest=extent[0]>=extent[1]&&extent[0]>=extent[2]?0:extent[1]>=extent[2]?1:2,blasts=[];
  let delay=0;
  for(let i=0;i<count;i++) {
    const spread=SPREAD[Math.trunc(authoredCount)%6][i%6]-.5;
    const position=centre.map((v,axis)=>v+extent[axis]*(axis===longest?spread+fraction()*.1-.05:fraction()*.4-.2));
    const blast={birth:number(effect.birth)+Math.trunc(delay*1000)/1000,position,diameter,smokeOnly:!!conf.SmokeOnly,green:!!conf.Green,smoke:[]};
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
