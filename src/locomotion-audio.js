import {playerLandingImpact} from './player-landing.js';
// RcAdamPlayer 0x4d9d40: Wobble.RunLoopSpeed, sqrt(speed/reference),
// four quarter-cycle footfalls. Only the shipped normal/liquid sound slots
// are selected; unused Rcwalk3..20 files are not a material lookup table.
export function footstepSound(side,contents=0,running=false) {
  if(contents&0x20000)return 'rcwalk1.wav';
  if(contents&0x10000)return running?(side?'rcrwater.wav':'rclwater.wav'):'rcwalk1.wav';
  return side?'rcwalk2.wav':'rcwalk1.wav';
}
// RcAdamPlayer's liquid jump/landing slots (0x4dc6b3–0x4dc846)
// resolve to Rcwalk1, not the running-water recordings.
export const jumpSound=(contents=0)=>contents&0x30000?'rcwalk1.wav':'rcjump1.wav';
export function landingSound(speed,contents=0,settings={}) {
  const impact=playerLandingImpact(speed,settings);
  return impact?{sound:contents&0x30000?'rcwalk1.wav':'rcland1.wav',volume:impact.volume}:null;
}
export class FootstepClock {
  constructor(saved){this.phase=Number.isFinite(saved?.phase)&&saved.phase>=0&&saved.phase<1?saved.phase:0;this.side=saved?.side===1?1:0;}
  snapshot(){return {phase:this.phase,side:this.side};}
  update(dt,{speed=0,grounded=false,enabled=true,contents=0,settings={}}={}) {
    if(!enabled||!grounded||speed<=.01)return [];
    const player=settings.Player||{},reference=(Number(player.RunForwardSpeed||4.9)+Number(player.WalkForwardSpeed||3))/2;
    const rate=Math.sqrt(speed/reference)*Number(settings.Wobble?.RunLoopSpeed??.5)*4;
    this.phase+=Math.max(0,Number.isFinite(dt)?dt:0)*rate;
    const sounds=[];
    while(this.phase>=1){this.phase--;sounds.push(footstepSound(this.side,contents,speed>reference));this.side^=1;}
    return sounds;
  }
}
