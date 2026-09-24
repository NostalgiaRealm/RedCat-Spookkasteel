// Rc projectile constructors call 0x44c1b0 with RGBA (250,175,20,225)
// and radius 200. The light setter forces alpha to 255 (0x4e30b1).
// Mushrooms reuse their difficulty's TrailRed/Green/Blue instead.
const NATIVE_LIT_PROJECTILES=new Set(['shot','powerShot','superShot','enemyShot','bone','goo','poison','jesterBall','magma','magicBall','skull','mushRoom']);
export function projectileLight(projectile,settings={},difficulty='Normal') {
  if(!NATIVE_LIT_PROJECTILES.has(projectile.kind)||!projectile.position?.every(Number.isFinite))return null;
  const stats=settings['projectile'+difficulty.toLowerCase()]?.RcMushRoom||{};
  const rgb=projectile.kind==='mushRoom'?['TrailRed','TrailGreen','TrailBlue'].map((key,i)=>Number(stats[key]??[255,255,127][i])):[250,175,20];
  return {position:[...projectile.position],color:rgb.map(value=>Math.max(0,Math.min(255,value))/255),radius:200,projectileId:projectile.id};
}
