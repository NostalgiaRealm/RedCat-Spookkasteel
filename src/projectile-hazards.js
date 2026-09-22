// Mushroom ribbon artwork, width and fade come from the original executable.
// Trail contact uses the authored TrailDamage with the game's shared damage
// gate; the native executable's contact handler has not been recovered.
const vector = value => Array.isArray(value) && value.length === 3 && value.every(Number.isFinite);
const number = (value, fallback) => Number.isFinite(Number(value)) ? Number(value) : fallback;
const clamp = (value, min, max) => Math.max(min, Math.min(max, value));
const MAX_SEGMENTS = 2048;

export const MUSHROOM_TRAIL_WIDTH = 6.4;

export function mushroomTrailDefinition(settings = {}, difficulty = 'Normal') {
  const stats = settings['projectile' + difficulty.toLowerCase()]?.RcMushRoom || {};
  return {
    kind: 'mushroomTrail', width: MUSHROOM_TRAIL_WIDTH,
    damage: Math.max(0, number(stats.TrailDamage, 5)),
    life: clamp(number(stats.TrailFadeTime, 1.5), .01, 30),
    color: ['TrailRed', 'TrailGreen', 'TrailBlue'].map((key, index) => clamp(number(stats[key], [255, 255, 127][index]), 0, 255)),
    opacity: clamp(number(stats.TrailAlpha, 127) / 255, 0, 1),
  };
}

export function trailOpacity(segment) {
  return segment.opacity * clamp(1 - segment.age / segment.life, 0, 1);
}

// Clip the (trail position, player movement time) parameter square against the
// moving player bounds. This detects crossing a thin ribbon between frames,
// but does not treat the whole enclosing world-space rectangle as dangerous.
export function trailTouchesPlayer(segment, playerPosition, previousPlayerPosition = playerPosition) {
  if (!vector(playerPosition) || !vector(previousPlayerPosition)) return false;
  let polygon = [[0, 0], [1, 0], [1, 1], [0, 1]];
  const half = Math.max(0, segment.width) / 2;
  for (let axis = 0; axis < 3; axis++) {
    const a = segment.to[axis] - segment.from[axis];
    const b = previousPlayerPosition[axis] - playerPosition[axis];
    const c = segment.from[axis] - previousPlayerPosition[axis] - (axis === 1 ? 28 : 0);
    const extent = (axis === 1 ? 28 : 11) + half;
    for (const sign of [-1, 1]) {
      const clipped = [];
      for (let index = 0; index < polygon.length; index++) {
        const p = polygon[index], q = polygon[(index + 1) % polygon.length];
        const dp = sign * (a * p[0] + b * p[1] + c) - extent;
        const dq = sign * (a * q[0] + b * q[1] + c) - extent;
        if (dp <= 0) clipped.push(p);
        if ((dp <= 0) !== (dq <= 0)) {
          const fraction = dp / (dp - dq);
          clipped.push([p[0] + (q[0] - p[0]) * fraction, p[1] + (q[1] - p[1]) * fraction]);
        }
      }
      polygon = clipped;
      if (!polygon.length) return false;
    }
  }
  return true;
}

export class ProjectileHazards {
  constructor(settings = {}, difficulty = 'Normal') {
    this.definition = mushroomTrailDefinition(settings, difficulty);
    this.segments = [];
    this.nextId = 1;
  }

  // End must be the collision-clipped endpoint, never the unimpeded proposal.
  // No floor projection: the original trail is a camera-facing flight ribbon.
  trace(projectile, start, end, {dt = 0} = {}) {
    if (projectile?.kind !== 'mushRoom' || !vector(start) || !vector(end)) return;
    const distance = Math.hypot(...end.map((value, index) => value - start[index]));
    if (distance < 1e-7) return;
    // Keep fade/contact interpolation bounded even after a slow frame. This
    // sampling is an implementation choice, not a recovered native constant.
    const steps = Math.min(128, Math.max(1, Math.ceil(distance / 10)));
    const ageStep = Math.max(0, number(dt, 0));
    for (let step = 0; step < steps; step++) {
      const from = start.map((value, index) => value + (end[index] - value) * step / steps);
      const to = start.map((value, index) => value + (end[index] - value) * (step + 1) / steps);
      this.segments.push({
        ...this.definition, color: [...this.definition.color],
        id: `mushroom-trail-${this.nextId++}`, sourceId: String(projectile.sourceId || ''),
        projectileId: String(projectile.id || ''), from, to, age: ageStep * (1 - (step + 1) / steps),
      });
    }
    if (this.segments.length > MAX_SEGMENTS) this.segments.splice(0, this.segments.length - MAX_SEGMENTS);
  }

  advance(dt, {frozen = false, playerPosition, previousPlayerPosition = playerPosition, damage} = {}) {
    if (frozen) return;
    const elapsed = Math.max(0, number(dt, 0));
    for (const segment of this.segments) segment.age += elapsed;
    this.segments = this.segments.filter(segment => segment.age < segment.life);
    let contact = null;
    for (const segment of this.segments) {
      if (segment.damage > (contact?.damage || 0) && trailTouchesPlayer(segment, playerPosition, previousPlayerPosition)) contact = segment;
    }
    // One call per frame even at ribbon joints or overlapping salvos. Let the
    // shared player damage gate handle invulnerability, death and feedback.
    if (contact) damage?.(contact.damage, contact.sourceId);
  }

  clear() { this.segments = []; }

  snapshot() {
    return {version: 1, nextId: this.nextId, segments: this.segments.map(segment => ({...segment, from: [...segment.from], to: [...segment.to], color: [...segment.color]}))};
  }

  restore(save) {
    this.clear();
    if (!save || save.version !== 1) return;
    this.nextId = Math.max(1, Math.floor(number(save.nextId, 1)));
    for (const segment of (Array.isArray(save.segments) ? save.segments : []).slice(-MAX_SEGMENTS)) {
      if (!segment || typeof segment.id !== 'string' || !vector(segment.from) || !vector(segment.to)
        || !Number.isFinite(segment.age) || segment.age < 0 || segment.age >= this.definition.life) continue;
      this.segments.push({...this.definition, color: [...this.definition.color], id: segment.id,
        sourceId: String(segment.sourceId || ''), projectileId: String(segment.projectileId || ''),
        from: [...segment.from], to: [...segment.to], age: segment.age});
      const serial = Number(segment.id.match(/^mushroom-trail-(\d+)$/)?.[1]);
      if (Number.isSafeInteger(serial)) this.nextId = Math.max(this.nextId, serial + 1);
    }
  }
}
