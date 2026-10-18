// RcHcGame's projectile timer is a 50 ms countdown, not an age * 20 fps
// animation. See docs/native-projectile-animation.md for the recovered update.
export const PROJECTILE_FRAME_INTERVAL_MS=50;
export const PROJECTILE_FRAME_COUNTS=Object.freeze({
  shot:4,powerShot:6,superShot:6,enemyShot:4,
  bone:4,mushRoom:4,goo:6,poison:6,jesterBall:4,magma:4,magicBall:6,skull:4,
});

export function projectileAnimationFrame(projectile,frameCount=PROJECTILE_FRAME_COUNTS[projectile.kind]||1) {
  return Number.isInteger(projectile.spriteFrame)&&projectile.spriteFrame>=0?
    projectile.spriteFrame%Math.max(1,frameCount):0;
}

export function advanceProjectileAnimation(projectile,dt) {
  // Flat fields are part of the existing projectile snapshot. Old saves start
  // at frame zero rather than inventing a phase from their accumulated age.
  if(!Number.isFinite(projectile.spriteClockMs)||projectile.spriteClockMs<0||
     !Number.isInteger(projectile.spriteFrame)||projectile.spriteFrame<0||
     !(projectile.spriteDeadlineMs===null||Number.isInteger(projectile.spriteDeadlineMs)&&projectile.spriteDeadlineMs>=0)) {
    projectile.spriteClockMs=0;projectile.spriteFrame=0;projectile.spriteDeadlineMs=null;
  }
  if(!(dt>0)||!Number.isFinite(dt))return projectileAnimationFrame(projectile);
  projectile.spriteClockMs+=dt*1000;
  // Native currentTime is an integer in milliseconds. The small tolerance
  // only removes floating-point summation noise at an exact millisecond.
  const now=Math.floor(projectile.spriteClockMs+1e-7);
  if(projectile.spriteDeadlineMs===null)projectile.spriteDeadlineMs=now+PROJECTILE_FRAME_INTERVAL_MS;
  else if(now>projectile.spriteDeadlineMs) {
    projectile.spriteFrame=(projectileAnimationFrame(projectile)+1)%(PROJECTILE_FRAME_COUNTS[projectile.kind]||1);
    // The original copies an unstarted timer here; it rearms next update.
    // It advances once even when a long update spans several frame intervals.
    projectile.spriteDeadlineMs=null;
  }
  return projectileAnimationFrame(projectile);
}
