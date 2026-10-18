// RcProjectile's Gravity is multiplied by 32 in native flight update 0x44cb5f.
// Keep stored velocity/acceleration in world units, including across save/load.
export const ENEMY_PROJECTILE_GRAVITY_SCALE = 32;
const number = (value, fallback = 0) => Number.isFinite(Number(value)) ? Number(value) : fallback;
const KEYS = {bone:'RcBone',enemyShot:'RcEnemyShot',goo:'RcGoo',poison:'RcPoison',
  jesterBall:'RcJesterBall',magicBall:'RcMagicBall',magma:'RcMagma',mushRoom:'RcMushRoom',skull:'RcSkull'};

export function enemyProjectileLifetime(stats, random) {
  const maximum = Math.max(0, number(stats.MaximumLifeTimeInSeconds, number(stats.MaximumLifeTime, 5)));
  const minimum = Math.min(maximum, Math.max(0, number(stats.MinimumLifeTimeInSeconds, number(stats.MinimumLifeTime, maximum))));
  // 0x442e30 samples rand()%10000; 0x4432e0 truncates the float duration to ms.
  // Retain the remake's per-enemy deterministic random source for saved salvos.
  const sample = Math.min(9999, Math.max(0, Math.floor(number(random) * 10000)));
  const seconds = Math.fround(Math.fround(minimum) + sample * Math.fround(.0001) * (Math.fround(maximum) - Math.fround(minimum)));
  return Math.trunc(seconds * 1000) / 1000;
}

export function restoreEnemyProjectileFlight(projectile, settings = {}) {
  // Only old generated enemy ammunition stored the unscaled INI gravity.
  // Custom projectiles and player shots already use world units. Mark converted
  // records so re-saving and reloading cannot multiply gravity a second time.
  if (projectile.owner === 'player' || !KEYS[projectile.kind] || !/^enemy-projectile-\d+$/.test(projectile.id)) return projectile;
  if (projectile.gravityUnits === undefined) {
    projectile.gravity *= ENEMY_PROJECTILE_GRAVITY_SCALE;
    projectile.gravityUnits = 'world';
  }
  if (projectile.kind === 'magicBall' && !(Number.isFinite(projectile.homingSpeed) && projectile.homingSpeed >= 0)) {
    projectile.homingSpeed = number(settings.RcMagicBall?.InitialSpeed, 80);
  }
  return projectile;
}

export function retargetMagicProjectile(projectile, playerPosition) {
  if (projectile.kind !== 'magicBall' || !(Number.isFinite(projectile.homingSpeed) && projectile.homingSpeed >= 0)) return;
  // 0x446690 runs shared movement first, then aims next tick's velocity at the
  // target's body center (0x49bc80), restoring authored InitialSpeed each time.
  const delta = playerPosition.map((value, index) => value + (index === 1 ? 28 : 0) - projectile.position[index]);
  const length = Math.hypot(...delta);
  projectile.velocity = delta.map(value => length ? value / length * projectile.homingSpeed : 0);
}
