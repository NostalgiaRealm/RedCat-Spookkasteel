// CParticle::Tick/Start/Restart, RcHcGame.dat 0x47dd60/0x47e710/0x47e780.
// The lifetime, fade delay and fade have separate lazily armed millisecond
// timers. Keep these visual clocks separate from emission and audio scheduling.
const duration=seconds=>seconds>0?Math.trunc(Math.fround(seconds)*1000):-1;
const initialAlpha=percent=>Math.trunc(percent*Math.fround(2.55))/255;
const fadeAlpha=(start,end,remaining)=>Math.trunc(2.5500000000000003*(start*remaining+end*(1-remaining)))/255;
export const particleMilliseconds=seconds=>Math.floor(seconds*1000+1e-6);

export function createParticleClock(life,delay,fade,{start=100,end=0,opacity=initialAlpha(start)}={}) {
  return {life:duration(life),delay:duration(delay),fade:duration(fade),start,end,
    lifeEnd:null,delayEnd:null,fadeEnd:null,fading:false,opacity};
}

export function validParticleClock(clock) {
  return !!clock&&['life','delay','fade'].every(key=>Number.isSafeInteger(clock[key])&&clock[key]>=-1)&&
    ['start','end','opacity'].every(key=>Number.isFinite(clock[key]))&&clock.opacity>=0&&clock.opacity<=1&&
    ['lifeEnd','delayEnd','fadeEnd'].every(key=>clock[key]===null||Number.isSafeInteger(clock[key])&&clock[key]>=0)&&
    typeof clock.fading==='boolean';
}

function remaining(clock,key,length,now) {
  if(length===-1)return 1;
  if(clock[key]===null){clock[key]=now+length;return 1;}
  if(now>clock[key])return -1;
  return length>0?Math.fround((clock[key]-now)/length):0;
}

export function advanceParticleClock(clock,now) {
  // Strict expiry comes first: a live particle at its deadline still moves;
  // the subsequent tick removes it without alpha or physics work.
  if(remaining(clock,'lifeEnd',clock.life,now)<0)return false;
  if(clock.fading) {
    const fraction=remaining(clock,'fadeEnd',clock.fade,now);
    clock.opacity=fadeAlpha(clock.start,clock.end,Math.max(0,fraction));
    if(fraction<0)clock.fading=false;
  } else if(remaining(clock,'delayEnd',clock.delay,now)<0) {
    clock.fading=true;clock.fadeEnd=null;
  }
  return true;
}

// Old port saves retained age/opacity, not the independent timer deadlines.
// Reconstruct only these tiny clocks on the existing fixed 60Hz timeline;
// positions, wiggle, velocities, RNG and emission history are never replayed.
export function legacyParticleClock(life,delay,fade,firstTick,time,opacity) {
  const clock=createParticleClock(life,delay,fade),now=particleMilliseconds(time);
  const first=particleMilliseconds(firstTick/60);
  if(now>=first) {
    clock.lifeEnd=clock.life<0?null:first+clock.life;
    clock.delayEnd=clock.delay<0?null:first+clock.delay;
    if(clock.delayEnd!==null&&now>clock.delayEnd) {
      clock.fading=true;
      const fadeTick=Math.ceil((clock.delayEnd+1)*60/1000)+1;
      const fadeStart=particleMilliseconds(fadeTick/60);
      if(now>=fadeStart)clock.fadeEnd=clock.fade<0?null:fadeStart+clock.fade;
    }
  }
  // Preserve the previously displayed alpha until the next native fade write.
  if(Number.isFinite(opacity))clock.opacity=Math.max(0,Math.min(1,opacity));
  return clock;
}
