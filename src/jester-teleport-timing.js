import {createParticleClock,advanceParticleClock,particleMilliseconds} from './particle-clock-native.js';

// CRcJesterEffect: 0x477410 emits at most one slot per controller update.
// Its 19/29ms timer arms on the NEXT update after each birth. CParticle has
// independent 1000ms life, 100ms fade delay and 1000ms fade clocks; Rotate's
// radius clock is only 500ms (0x476800, 0x4775b0, 0x47ea90).
export const JESTER_EFFECT_STEP=1/60;
const f=Math.fround;
const tables=Object.fromEntries(['departure','arrival'].map(phase=>{
  const arrival=phase==='arrival',spacing=arrival?19:29,speed=arrival?18.5:12.5;
  const startRadius=arrival?f(.1):50,endRadius=arrival?30:f(.1);
  const startHeight=arrival?0:75,endHeight=arrival?50:0;
  const startSize=arrival?5:40,endSize=arrival?40:5;
  const startAlpha=arrival?100:25,endAlpha=arrival?35:100;
  const frames=[new Float64Array(0)],particles=[];
  let deadline=null,nextAngle=0;
  for(let tick=1;tick<180;tick++) {
    if(particles.length===15&&!particles[14].active)break;
    const now=particleMilliseconds(tick*JESTER_EFFECT_STEP);
    const dt=(now-particleMilliseconds((tick-1)*JESTER_EFFECT_STEP))/1000;
    if(particles.length<15) {
      if(deadline===null)deadline=now+spacing;
      else if(now>deadline) {
        particles.push({active:true,remaining:1,angle:nextAngle,radialEnd:null,
          clock:createParticleClock(1,.1,1,{start:startAlpha,end:endAlpha})});
        nextAngle=f(nextAngle+f(Math.PI*2/15));deadline=null;
      }
    }
    const values=[];
    for(const p of particles)if(p.active) {
      // Controller writes the centre from the PREVIOUS life fraction before
      // Tick updates the clock; Rotate then advances its angle before drawing.
      const height=f(startHeight*p.remaining+endHeight*(1-p.remaining));
      if(!advanceParticleClock(p.clock,now)){p.active=false;continue;}
      p.remaining=f((p.clock.lifeEnd-now)/p.clock.life);
      if(p.radialEnd===null)p.radialEnd=now+500;
      const radialRemaining=Math.max(0,f((p.radialEnd-now)/500));
      const radius=f(startRadius*radialRemaining+endRadius*(1-radialRemaining));
      p.angle=f(p.angle+speed*dt);
      // Genesis Y rotation (0x5b3130) maps +X to (cos,0,-sin).
      values.push(f(radius*f(Math.cos(p.angle))),height,f(-radius*f(Math.sin(p.angle))),
        2*f(startSize*p.remaining+endSize*(1-p.remaining)),p.clock.opacity);
    }
    frames.push(new Float64Array(values));
  }
  return [phase,frames];
}));

// Both finite 15-slot tables are shared across actors, redraws and restores.
// No historical replay, per-frame clock allocation or mutable saved pool.
export const JESTER_EFFECT_SECONDS=Math.max(...Object.values(tables).map(frames=>frames.length))*JESTER_EFFECT_STEP;
const empty=new Float64Array(0);
export function jesterTeleportFrame(phase,age) {
  if(!Number.isFinite(age)||age<0)return empty;
  return tables[phase]?.[Math.floor(age/JESTER_EFFECT_STEP+1e-9)]||empty;
}
