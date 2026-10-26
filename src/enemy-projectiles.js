// RcProjectile's Gravity is multiplied by 32 in native flight update 0x44cb5f.
// Keep stored velocity/acceleration in world units, including across save/load.
export const ENEMY_PROJECTILE_GRAVITY_SCALE = 32;
export const ENEMY_PROJECTILE_STEP = 1 / 60;
export const ENEMY_PROJECTILE_MAX_CATCHUP = .1;
const FLIGHT_EPSILON = 1e-10;
const number = (value, fallback = 0) => Number.isFinite(Number(value)) ? Number(value) : fallback;
const KEYS = {bone:'RcBone',enemyShot:'RcEnemyShot',goo:'RcGoo',poison:'RcPoison',
  jesterBall:'RcJesterBall',magicBall:'RcMagicBall',magma:'RcMagma',mushRoom:'RcMushRoom',skull:'RcSkull'};

// The shipped rand (0x60a4a0) returns 0..32767, then these callers take
// %10000. This is intentionally not a uniform 0..9999 draw: 0..2767 have
// four possible inputs and the rest three. Preserve the saved per-enemy
// generator, but apply the native distribution and its exclusive upper end.
export function enemyProjectileSample(random) {
  return Math.min(32767, Math.max(0, Math.floor(number(random) * 32768))) % 10000;
}

export function enemyProjectileDeviation(spread, random) {
  const extent = Math.fround(number(spread));
  return -extent + enemyProjectileSample(random) * (2 * extent) * Math.fround(.0001);
}

export function enemyProjectileLifetime(stats, random) {
  const maximum = Math.max(0, number(stats.MaximumLifeTimeInSeconds, number(stats.MaximumLifeTime, 5)));
  const minimum = Math.min(maximum, Math.max(0, number(stats.MinimumLifeTimeInSeconds, number(stats.MinimumLifeTime, maximum))));
  // 0x442e30 samples rand()%10000; 0x4432e0 truncates the float duration to ms.
  // Retain the remake's per-enemy deterministic random source for saved salvos.
  const sample = enemyProjectileSample(random);
  const seconds = Math.fround(Math.fround(minimum) + sample * Math.fround(.0001) * (Math.fround(maximum) - Math.fround(minimum)));
  return Math.trunc(seconds * 1000) / 1000;
}

export function restoreEnemyProjectileFlight(projectile, settings = {}) {
  // Only old generated enemy ammunition stored the unscaled INI gravity.
  // Custom projectiles and player shots already use world units. Mark converted
  // records so re-saving and reloading cannot multiply gravity a second time.
  if (projectile.owner === 'player') return projectile;
  restoreEnemyFlightClock(projectile);
  if (!KEYS[projectile.kind] || !/^enemy-projectile-\d+$/.test(projectile.id)) return projectile;
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

function restoreEnemyFlightClock(projectile) {
  const phase = projectile.enemyFlightPhase, debt = projectile.enemyFlightDebt;
  projectile.enemyFlightPhase = Number.isFinite(phase) && phase >= 0 && phase < ENEMY_PROJECTILE_STEP ? phase : 0;
  projectile.enemyFlightDebt = Number.isFinite(debt) && debt >= 0 ? Math.min(debt, Math.max(0, number(projectile.life) - number(projectile.age))) : 0;
}

export function enemyProjectileFlightBudget(projectile, dt) {
  restoreEnemyFlightClock(projectile);
  const lifeRemaining = Math.max(0, number(projectile.life) - number(projectile.age));
  const pending = Math.min(lifeRemaining, Math.max(0, number(dt)) + projectile.enemyFlightDebt);
  const step = Math.min(pending, ENEMY_PROJECTILE_MAX_CATCHUP);
  // Runtime frames are already <=100 ms. Exceptional direct calls retain their
  // excess instead of running an unbounded series of collision queries.
  projectile.enemyFlightDebt = pending - step > FLIGHT_EPSILON ? pending - step : 0;
  return step;
}

export function advanceEnemyProjectileFlight(projectile, remaining) {
  const phase = projectile.enemyFlightPhase || 0;
  const homing = projectile.kind === 'magicBall' && Number.isFinite(projectile.homingSpeed) && projectile.homingSpeed >= 0;
  if (phase === 0) {
    // Native 0x44cb33 caps speed before applying gravity at 0x44cb5f.
    const speed = Math.hypot(...projectile.velocity), maximum = Math.max(0, number(projectile.maximumSpeed, 1000));
    if (speed > maximum) projectile.velocity = projectile.velocity.map(value => value * maximum / speed);
    projectile.velocity[1] -= number(projectile.gravity) * ENEMY_PROJECTILE_STEP;
  }
  // Straight, gravity-free ammunition has no state change at a tick boundary;
  // its collinear sweeps can safely remain one trace per display update.
  const step = !projectile.gravity && !homing ? remaining : Math.min(remaining, ENEMY_PROJECTILE_STEP - phase);
  const elapsed = phase + step;
  const complete = elapsed >= ENEMY_PROJECTILE_STEP - FLIGHT_EPSILON;
  const nextPhase = complete ? elapsed % ENEMY_PROJECTILE_STEP : elapsed;
  projectile.enemyFlightPhase = nextPhase < FLIGHT_EPSILON || ENEMY_PROJECTILE_STEP - nextPhase < FLIGHT_EPSILON ? 0 : nextPhase;
  return {step, complete, end: projectile.position.map((value, index) => value + projectile.velocity[index] * step)};
}
