// RcShot/RcPowerShot/RcSuperShot settings and shoot1 timing from the original
// executable and actor. See docs/player-projectiles-native.md.
export const PLAYER_SHOOT_MOTION = {duration:1.9333430528640747,rate:1.9,releaseFraction:.46};

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

export function advancePlayerProjectile(projectile,dt) {
  const speed=Math.hypot(...projectile.velocity),acceleration=Math.max(0,projectile.acceleration||0);
  if(!speed||!acceleration)return projectile.position.map((v,i)=>v+projectile.velocity[i]*dt);
  const maximum=Math.max(speed,projectile.maximumSpeed||speed),accelerating=Math.min(dt,(maximum-speed)/acceleration);
  const nextSpeed=Math.min(maximum,speed+acceleration*dt);
  const travel=speed*accelerating+.5*acceleration*accelerating**2+maximum*(dt-accelerating);
  const direction=projectile.velocity.map(v=>v/speed);
  projectile.velocity=direction.map(v=>v*nextSpeed);
  return projectile.position.map((v,i)=>v+direction[i]*travel);
}
