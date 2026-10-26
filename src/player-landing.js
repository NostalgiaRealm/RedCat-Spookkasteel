// RcAdamPlayer landing transition 0x4dc615–0x4dc76a (e30781fc reference).
// Impact thresholds scale ordinary takeoff speed, including on liquid ground.
// Defaults below are the shipped Game.ini values; native's generic fallback
// DamageAtDoubleImpact=100 is overridden by that file to 1 for RedCat.
export function playerLandingImpact(speed,settings={}) {
  if(!Number.isFinite(speed)||speed<=0)return null;
  const player=settings.Player||{};
  const jumpSpeed=Math.sqrt(2*(player.Gravitation??25)*(player.JumpHeight??1.3))*32;
  const minimum=jumpSpeed*(player.MinNoDamageImpactSpeedFactor??.05);
  const maximum=jumpSpeed*(player.MaxNoDamageImpactSpeedFactor??2);
  if(!Number.isFinite(maximum)||maximum<=0||speed<minimum)return null;
  const ratio=speed/maximum;
  return {volume:Math.min(1,ratio),damage:Math.max(0,ratio-1)*Math.max(0,player.DamageAtDoubleImpact??1)};
}
