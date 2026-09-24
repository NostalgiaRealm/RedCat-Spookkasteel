// Shared native RcProjectile collision (0x44cd67–0x44cda3) uses the
// same tiny swept hull for every bitmap size. The separate .16 value at
// trace offset +0x5c is a tolerance, not the projectile's half extent.
export const NATIVE_PROJECTILE_RADIUS=Math.fround(Math.fround(.32)*Math.fround(.1));

export function restoreProjectileCollision(projectile) {
  if(!/^(?:player|enemy)-projectile-\d+$/.test(projectile.id))return;
  projectile.radius=NATIVE_PROJECTILE_RADIUS;
  projectile.collisionProfile='native';
}
