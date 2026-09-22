// RcAdamPlayer 0x4d9d40: Wobble.RunLoopSpeed, sqrt(speed/reference),
// four quarter-cycle footfalls. Only the shipped normal/liquid sound slots
// are selected; unused Rcwalk3..20 files are not a material lookup table.
export function footstepSound(side,contents=0,running=false) {
  if(contents&0x20000)return 'rcwalk1.wav';
  if(contents&0x10000)return running?(side?'rcrwater.wav':'rclwater.wav'):'rcwalk1.wav';
  return side?'rcwalk2.wav':'rcwalk1.wav';
}
export class FootstepClock {
  constructor(){this.phase=0;this.side=0;}
  update(dt,{speed=0,grounded=false,enabled=true,contents=0,settings={}}={}) {
    if(!enabled||!grounded||speed<=.01)return [];
    const player=settings.Player||{},reference=(Number(player.RunForwardSpeed||4.9)+Number(player.WalkForwardSpeed||3))/2;
    const rate=Math.sqrt(speed/reference)*Number(settings.Wobble?.RunLoopSpeed??.5)*4;
    this.phase+=Math.max(0,dt)*rate;
    const sounds=[];
    while(this.phase>=1){this.phase--;sounds.push(footstepSound(this.side,contents,speed>reference));this.side^=1;}
    return sounds;
  }
}
