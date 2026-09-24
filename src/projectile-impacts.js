// RcWeaponShot/PowerShot/SuperShot's live RcExplosion factories and cells.
// Enemy factories return null. See docs/projectile-impacts-native.md.
const PROFILES = Object.freeze({
  shot: {suffix: '_yel', size: 50, light: [255, 192, 0]},
  powerShot: {suffix: '_red', size: 35, light: [80, 245, 220]},
  superShot: {suffix: '', size: 75, light: [34, 218, 40]},
});
export const PROJECTILE_IMPACT_SECONDS = 1;
export const IMPACT_WAVE_TEXTURE = 'electricwave.bmp|electricwave_a.bmp';
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
  return impacts.filter(effect => time - effect.birth < PROJECTILE_IMPACT_SECONDS).slice(-MAX_IMPACTS);
}

export function restoreProjectileImpacts(saved, time) {
  return (Array.isArray(saved) ? saved : []).slice(-MAX_IMPACTS).filter(effect =>
    effect && typeof effect.id === 'string' && Object.hasOwn(PROFILES, effect.kind) && vector(effect.position) &&
    Number.isFinite(effect.birth) && effect.birth <= time && time - effect.birth < PROJECTILE_IMPACT_SECONDS
  ).map(effect => ({id: effect.id, kind: effect.kind, birth: effect.birth, position: [...effect.position]}));
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
  const profile = Object.hasOwn(PROFILES, effect.kind) && PROFILES[effect.kind], age = time - effect.birth;
  if (!profile || age < 0 || age >= PROJECTILE_IMPACT_SECONDS) return null;
  const pattern = 'pszzzspmea', index = Math.min(pattern.length - 1, Math.floor(age * pattern.length));
  return {position: effect.position, radius: Math.trunc(profile.size * .01 * 360) * (pattern.charCodeAt(index) - 97) / 25,
    color: profile.light.map(value => value / 255), intensity: 1};
}

// CAdamShockwaveCell::Render, 0x4b4cc0. This is an upright camera-facing
// quad, with its submerged portion folded onto the floor by 0x4b5260.
export function projectileImpactWave(effect, time, camera, trace) {
  const age = time - effect.birth;
  if (effect.kind !== 'superShot' || age < .4 || age > .699 + 1e-10 || !vector(camera)) return null;
  const progress = (age - .4) / .6, radius = 50 * Math.sqrt(.01 * (1 - progress) + .04 * progress);
  const origin = effect.position, dx = origin[0] - camera[0], dz = origin[2] - camera[2], horizontal = Math.hypot(dx, dz);
  // Looking straight down makes the native cross product degenerate. Keep a
  // stable upright plane for that camera singularity instead of NaN vertices.
  const direction = horizontal > 1e-8 ? [dx / horizontal, 0, dz / horizontal] : [0, 0, 1];
  const right = [direction[2] * radius, 0, -direction[0] * radius];
  const point = (centre, side, vertical = 0) => centre.map((value, axis) => value + right[axis] * side + (axis === 1 ? vertical : 0));
  const quads = [{points: [point(origin,-1,radius),point(origin,1,radius),point(origin,1,-radius),point(origin,-1,-radius)], uvs: [[0,0],[1,0],[1,1],[0,1]]}];
  const down = [origin[0], origin[1] - radius, origin[2]], hit = trace?.(origin, down);
  if (hit && hit.fraction < 1 && vector(hit.end)) {
    const distance = Math.hypot(...hit.end.map((value,axis) => value - origin[axis]));
    if (distance < radius) {
      const folded = 1 - distance / radius, depth = folded * radius * .85;
      const rear = hit.end.map((value,axis) => value - direction[axis] * depth);
      quads.push({points:[point(hit.end,-1),point(hit.end,1),point(rear,.85),point(rear,-.85)],
        uvs:[[0,1-folded*.5],[1,1-folded*.5],[1,1],[0,1]]});
    }
  }
  return {quads, radius, opacity:1-progress};
}
