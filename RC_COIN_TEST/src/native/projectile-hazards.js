// Mushroom ribbon artwork, width and fade come from the original executable.
// TrailDamage is loaded but never consumed by the shipped executable.
// The ribbon is visual only; the projectile body supplies contact damage.
const vector = value => Array.isArray(value) && value.length === 3 && value.every(Number.isFinite);
const number = (value, fallback) => Number.isFinite(Number(value)) ? Number(value) : fallback;
const clamp = (value, min, max) => Math.max(min, Math.min(max, value));
const MAX_SEGMENTS = 2048;

export const MUSHROOM_TRAIL_WIDTH = 6.4;
export const MUSHROOM_TRAIL_DISTANCE = 9.6; // GeneralWorldScale (32) * .3.
export const MUSHROOM_TRAIL_INTERVAL_MS = 100;
export const MUSHROOM_TRAIL_ALPHA_CUTOFF = 5 / 255;

export function mushroomTrailDefinition(settings = {}, difficulty = 'Normal') {
  const stats = settings['projectile' + difficulty.toLowerCase()]?.RcMushRoom || {};
  return {
    kind: 'mushroomTrail', width: MUSHROOM_TRAIL_WIDTH,
    damage: 0, // Unused native TrailDamage must not create a second attack.
    life: clamp(number(stats.TrailFadeTime, 1.5), .01, 30),
    color: ['TrailRed', 'TrailGreen', 'TrailBlue'].map((key, index) => clamp(number(stats[key], [255, 255, 127][index]), 0, 255)),
    // AdamEffectTexturedTrail uses the owner sprite alpha (+0x60), not
    // the copied INI TrailAlpha (+0x4c). Its infinite-life owner uses
    // the authored 80 percent start alpha (0x4492ab, 0x56ea4f).
    opacity: .8,
  };
}

export function trailOpacity(segment) {
  return segment.opacity * clamp(1 - segment.age / segment.life, 0, 1);
}

export class ProjectileHazards {
  constructor(settings = {}, difficulty = 'Normal') {
    this.definition = mushroomTrailDefinition(settings, difficulty);
    this.segments = [];
    this.trails = new Map();
    this.time = 0;
    this.nextId = 1;
  }

  point(position, time) {
    return {id: `mushroom-trail-${this.nextId++}`, position: [...position], time};
  }

  // Advance the clock once per simulation tick before tracing projectiles.
  // Native 0x5871f0 keeps a moving endpoint, committing at most one point per
  // tick when >100 ms OR >9.6 world units from the preceding committed point.
  trace(projectile, start, end, {dt = 0} = {}) {
    if (projectile?.kind !== 'mushRoom' || !vector(start) || !vector(end)) return;
    const id = String(projectile.id || '');
    let trail = this.trails.get(id);
    const now = Math.floor(this.time * 1000 + 1e-6);
    if (!trail) {
      trail = {projectileId: id, sourceId: String(projectile.sourceId || ''),
        points: [this.point(end, now), this.point(end, now)]};
      this.trails.set(id, trail);
      this.rebuild();
      return;
    }
    const points = trail.points, anchor = points.at(-2), head = points.at(-1);
    head.position = [...end]; head.time = now;
    if (now - anchor.time > MUSHROOM_TRAIL_INTERVAL_MS ||
      Math.hypot(...end.map((value, index) => value - anchor.position[index])) > MUSHROOM_TRAIL_DISTANCE) {
      points.push(this.point(end, now));
    }
    if (points.length > MAX_SEGMENTS + 1) points.splice(0, points.length - MAX_SEGMENTS - 1);
    this.rebuild();
  }

  rebuild() {
    const now = Math.floor(this.time * 1000 + 1e-6), segments = [];
    for (const trail of this.trails.values()) {
      let firstVisible = -1;
      for (let index = 1; index < trail.points.length; index++) {
        const from = trail.points[index - 1], to = trail.points[index];
        // The native first quad uses its second point's stamp; later quads
        // use the earlier point (0x587a3e–0x587a53), with one alpha per quad.
        const age = Math.max(0, now - (index === 1 ? to.time : from.time)) / 1000;
        const segment = {...this.definition, color: [...this.definition.color],
          id: from.id, sourceId: trail.sourceId, projectileId: trail.projectileId,
          from: [...from.position], to: [...to.position], age};
        if (trailOpacity(segment) <= MUSHROOM_TRAIL_ALPHA_CUTOFF) continue;
        if (firstVisible === -1) firstVisible = index - 1;
        if (Math.hypot(...to.position.map((value, axis) => value - from.position[axis])) > 1e-7) segments.push(segment);
      }
      // Native renderer retains one preceding point and at least two points.
      if (firstVisible > 0 && trail.points.length - firstVisible > 2) trail.points.splice(0, firstVisible - 1);
    }
    this.segments = segments.slice(-MAX_SEGMENTS);
  }

  advance(dt, {frozen = false} = {}) {
    if (frozen) return;
    this.time += Math.max(0, number(dt, 0));
    this.rebuild();
  }

  // The native mushroom owns a SpriteProjectileParticle, which owns and
  // destroys its ribbon; no independently surviving ribbon is spawned.
  retainProjectiles(projectiles) {
    const active = new Set(projectiles.filter(projectile => projectile.kind === 'mushRoom').map(projectile => String(projectile.id || '')));
    for (const id of this.trails.keys()) if (!active.has(id)) this.trails.delete(id);
    this.rebuild();
  }

  clear() { this.segments = []; this.trails.clear(); this.time = 0; }

  snapshot() {
    return {version: 2, time: this.time, nextId: this.nextId, trails: [...this.trails.values()].map(trail => ({
      ...trail, points: trail.points.map(point => ({...point, position: [...point.position]})),
    }))};
  }

  restore(save) {
    this.clear();
    if (!save || ![1, 2].includes(save.version)) return;
    this.nextId = Math.max(1, Math.floor(number(save.nextId, 1)));
    this.time = Math.max(0, number(save.time, 0));
    const now = Math.floor(this.time * 1000 + 1e-6);
    if (save.version === 1) {
      // Old saves stored arbitrary 10-unit subsegments. Preserve their recent
      // flight path once, then continue with the native live endpoint sampler.
      for (const segment of (Array.isArray(save.segments) ? save.segments : []).slice(-MAX_SEGMENTS)) {
        if (!segment || !vector(segment.from) || !vector(segment.to) ||
          !Number.isFinite(segment.age) || segment.age < 0 || segment.age >= this.definition.life) continue;
        const id = String(segment.projectileId || '');
        let trail = this.trails.get(id);
        const stamp = now - Math.floor(segment.age * 1000);
        if (!trail) { trail = {projectileId: id, sourceId: String(segment.sourceId || ''), points: [this.point(segment.from, stamp)]}; this.trails.set(id, trail); }
        trail.points.push(this.point(segment.to, stamp));
      }
    } else {
      let remaining = MAX_SEGMENTS + 1;
      for (const source of Array.isArray(save.trails) ? save.trails : []) {
        if (!source || typeof source.projectileId !== 'string' || !Array.isArray(source.points) || remaining < 2) continue;
        const points = [];
        for (const point of source.points.slice(-remaining)) {
          if (!point || typeof point.id !== 'string' || !vector(point.position) || !Number.isFinite(point.time) || point.time > now ||
            (points.length && point.time < points.at(-1).time)) continue;
          points.push({id: point.id, position: [...point.position], time: point.time});
          const serial = Number(point.id.match(/^mushroom-trail-(\d+)$/)?.[1]);
          if (Number.isSafeInteger(serial)) this.nextId = Math.max(this.nextId, serial + 1);
        }
        if (points.length >= 2) { this.trails.set(source.projectileId, {projectileId: source.projectileId, sourceId: String(source.sourceId || ''), points}); remaining -= points.length; }
      }
    }
    this.rebuild();
  }
}
