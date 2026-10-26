import {nativePatternLight,snapshotNativeLight,NATIVE_LIGHT_RETAIN_SECONDS} from './explosion-light-native.js';
import {nativeShockwave} from './shockwave-native.js';
// RcWeaponShot/PowerShot/SuperShot's live RcExplosion factories and cells.
// Enemy factories return null. See docs/projectile-impacts-native.md.
const PROFILES = Object.freeze({
  shot: {suffix: '_yel', size: 50, light: [255, 192, 0]},
  powerShot: {suffix: '_red', size: 35, light: [80, 245, 220]},
  superShot: {suffix: '', size: 75, light: [34, 218, 40]},
});
// Authored light duration; its lazy next-tick start and inclusive expiry
// extend the record tail to NATIVE_LIGHT_RETAIN_SECONDS on the visual clock.
export const PROJECTILE_IMPACT_SECONDS = 1;
export const IMPACT_WAVE_TEXTURE = 'electricwave.bmp|electricwave_a.bmp';
const LIGHT_COLORS=Object.fromEntries(Object.entries(PROFILES).map(([kind,profile])=>[kind,Object.freeze(profile.light.map(value=>value/255))]));
const MAX_IMPACTS = 128;
const vector = value => Array.isArray(value) && value.length === 3 && value.every(Number.isFinite);

export function createProjectileImpact(projectile, time) {
  if (projectile.owner !== 'player' || !Object.hasOwn(PROFILES, projectile.kind) || !vector(projectile.position) || !Number.isFinite(time)) return null;
  const velocity = vector(projectile.velocity) ? projectile.velocity : [0, 0, 0];
  const speed = Math.hypot(...velocity);
  // The shared factory backs the visual effect five units away from the
  // collision along normalized flight velocity, not the surface normal.
  return {id: String(projectile.id), kind: projectile.kind, birth: time,
    position: projectile.position.map((value, axis) => value - (speed ? velocity[axis] / speed * 5 : 0))};
}

export function retainProjectileImpacts(impacts, time) {
  return impacts.filter(effect => time - effect.birth < NATIVE_LIGHT_RETAIN_SECONDS - 1e-10).slice(-MAX_IMPACTS);
}

export function restoreProjectileImpacts(saved, time) {
  return (Array.isArray(saved) ? saved : []).slice(-MAX_IMPACTS).filter(effect =>
    effect && typeof effect.id === 'string' && Object.hasOwn(PROFILES, effect.kind) && vector(effect.position) &&
    Number.isFinite(effect.birth) && effect.birth <= time && time - effect.birth < NATIVE_LIGHT_RETAIN_SECONDS - 1e-10
  ).map(effect => ({id: effect.id, kind: effect.kind, birth: effect.birth, position: [...effect.position],
    lightState:snapshotNativeLight(effect,time)}));
}

export function projectileImpactSprite(effect, time) {
  const profile = Object.hasOwn(PROFILES, effect.kind) && PROFILES[effect.kind], age = time - effect.birth;
  // The last cell fires at 699 ms; the MultiEffect retires once that last
  // one-shot cell has run. Its independently spawned light lasts longer.
  if (!profile || age < 0 || age > .699 + 1e-10) return null;
  const frame = age >= .699 ? 8 : Math.min(6, Math.floor((age + 1e-10) * 10)) + 1;
  const ordinal = String(frame).padStart(2, '0');
  // This is the executable's player-hit sequence, not the larger exploding
  // crate sequence: the final two sprite cells deliberately collapse.
  const scale = profile.size * .01 * 5 * (frame <= 6 ? .4 : .0001);
  return {texture: `expl_gen${ordinal}${profile.suffix}.bmp|expl_gen_a_${ordinal}.bmp`,
    position: effect.position, size: 64 * scale, opacity: 1};
}

export function impactLight(effect, time) {
  const profile = Object.hasOwn(PROFILES, effect.kind) && PROFILES[effect.kind];
  return profile?nativePatternLight(effect,time,Math.trunc(Math.fround(profile.size*.01*360)),LIGHT_COLORS[effect.kind]):null;
}

// CAdamShockwaveCell::Render, 0x4b4cc0. This is an upright camera-facing
// quad, with its submerged portion folded onto the floor by 0x4b5260.
export function projectileImpactWave(effect, time, camera, trace) {
  const age = time - effect.birth;
  if (effect.kind !== 'superShot' || age < .4 || age > .699 + 1e-10 || !vector(camera)) return null;
  const progress = (age - .4) / .6, radius = 50 * Math.sqrt(.01 * (1 - progress) + .04 * progress);
  return nativeShockwave(effect.position,camera,radius,1-progress,trace);
}
