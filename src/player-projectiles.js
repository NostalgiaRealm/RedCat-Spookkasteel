// RcShot/RcPowerShot/RcSuperShot settings and shoot1 timing from the original
// executable and actor. See docs/player-projectiles-native.md.
export const PLAYER_SHOOT_MOTION = {duration:1.9333430528640747,rate:1.9,releaseFraction:.46,finishFraction:.8};
// Native 0x436720 fills the BIG BENG charge in 1500 ms. While held,
// 0x434bda freezes shoot1 at 26%; releasing resumes that same motion.
export const PLAYER_SUPER_CHARGE={duration:1.5,holdFraction:.26};
export const PLAYER_PROJECTILE_STEP=1/60;

export function playerShotDefinition(skill,settings,difficulty) {
  const key=skill&4?'RcSuperShot':skill&2?'RcPowerShot':'RcShot';
  const fallback={Damage:key==='RcSuperShot'?4:key==='RcPowerShot'?2:1,RechargeTime:1,
    InitialSpeed:key==='RcSuperShot'?240:300,SpeedIncreasePerSecond:key==='RcSuperShot'?60:160,
    MaximumSpeed:1000,MaximumLifeTimeInSeconds:5,Gravity:0};
  return {key,kind:key.slice(2).replace(/^./,s=>s.toLowerCase()),
    type:key==='RcSuperShot'?4:key==='RcPowerShot'?2:1,
    stats:{...fallback,...settings['projectile'+difficulty.toLowerCase()]?.[key]}};
}

// Swept projectile against the actor's collision hull, expanded by the pellet
// radius. The full segment is tested so low frame rates cannot skip a target.
export function sweepActor(start,end,object,radius=0) {
  const mins=object.collisionMins||[-18,0,-18],maxs=object.collisionMaxs||[18,56,18];
  let enter=0,leave=1;
  for(let i=0;i<3;i++) {
    const lo=object.position[i]+mins[i]-radius,hi=object.position[i]+maxs[i]+radius,delta=end[i]-start[i];
    if(Math.abs(delta)<1e-8){if(start[i]<lo||start[i]>hi)return null;continue;}
    let a=(lo-start[i])/delta,b=(hi-start[i])/delta;
    if(a>b)[a,b]=[b,a];enter=Math.max(enter,a);leave=Math.min(leave,b);
    if(enter>leave)return null;
  }
  return enter>=0&&enter<=1?enter:null;
}

export function restorePlayerProjectileFlight(projectile) {
  if(projectile.owner!=='player')return projectile;
  const phase=projectile.playerFlightPhase;
  projectile.playerFlightPhase=Number.isFinite(phase)&&phase>=0&&phase<PLAYER_PROJECTILE_STEP?phase:0;
  return projectile;
}

export function advancePlayerProjectile(projectile,dt) {
  if(!(dt>0)||!Number.isFinite(dt))return [...projectile.position];
  const initialSpeed=Math.hypot(...projectile.velocity);
  if(!initialSpeed)return [...projectile.position];
  const direction=projectile.velocity.map(v=>v/initialSpeed);
  const acceleration=Number.isFinite(projectile.acceleration)?Math.max(0,projectile.acceleration):0;
  const maximum=Number.isFinite(projectile.maximumSpeed)?Math.max(0,projectile.maximumSpeed):Infinity;
  const h=PLAYER_PROJECTILE_STEP,epsilon=1e-10;
  let phase=Number.isFinite(projectile.playerFlightPhase)&&projectile.playerFlightPhase>=0&&projectile.playerFlightPhase<h?projectile.playerFlightPhase:0;
  let speed=initialSpeed,remaining=dt,travel=0;
  // Native 0x44cb0b accelerates/caps first, then 0x44cba4 translates by
  // that new speed. Use a canonical 60 Hz clock instead of making travel
  // depend on display refresh. Partial steps interpolate the same path.
  if(phase>0){
    const part=Math.min(remaining,h-phase);travel+=speed*part;remaining-=part;phase+=part;
    if(phase>=h-epsilon)phase=0;
  }
  // All authored player pellets have zero gravity and a fixed direction.
  // Sum whole semi-implicit steps arithmetically, including the speed cap,
  // so a long update never causes an unbounded stepping/collision loop.
  const count=Math.floor((remaining+epsilon)/h);
  if(count>0){
    if(acceleration>0){
      const rising=Math.min(count,Math.max(0,Math.floor((maximum-speed)/(acceleration*h))));
      travel+=h*(rising*speed+acceleration*h*rising*(rising+1)/2);
      if(count>rising)travel+=(count-rising)*h*maximum;
      speed=Math.min(maximum,speed+count*acceleration*h);
    }else{speed=Math.min(maximum,speed);travel+=count*h*speed;}
    remaining=Math.max(0,remaining-count*h);
  }
  if(remaining>epsilon){
    speed=Math.min(maximum,speed+acceleration*h);travel+=speed*remaining;phase=remaining;
  }
  projectile.playerFlightPhase=phase;
  projectile.velocity=direction.map(v=>v*speed);
  return projectile.position.map((v,i)=>v+direction[i]*travel);
}
