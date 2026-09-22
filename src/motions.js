// Original Genesis3D model paths and time-key events. No renderer or OS dependency.
// Interpolation indices are VKFrame/QKFrame indices, not gePath enum values.
const prepared = new WeakMap();
const clamp = (value, low, high) => Math.max(low, Math.min(high, value));

function tangents(channel) {
  const {times, values} = channel, count = times.length;
  const incoming = new Float64Array(count * 3), outgoing = new Float64Array(count * 3);
  if (channel.interpolation === 2 || count < 2) return {incoming, outgoing};
  const loop = channel.loop && count >= 3;
  for (let i = 0; i < count; i++) {
    const previous = i === 0 ? (loop ? count - 2 : 0) : i - 1;
    const next = i === count - 1 ? (loop ? 1 : count - 1) : i + 1;
    const before = i === 0 && loop ? times[0] - (times[count - 1] - times[count - 2]) : times[previous];
    const after = i === count - 1 && loop ? times[count - 1] + times[1] - times[0] : times[next];
    const left = times[i] - before, right = after - times[i], span = left + right;
    for (let c = 0; c < 3; c++) {
      const delta = values[next * 3 + c] - values[previous * 3 + c];
      if (!loop && (i === 0 || i === count - 1)) incoming[i * 3 + c] = outgoing[i * 3 + c] = delta;
      else if (span > 0) {
        incoming[i * 3 + c] = delta * left / span;
        outgoing[i * 3 + c] = delta * right / span;
      }
    }
  }
  return {incoming, outgoing};
}

function interval(channel, time) {
  const times = channel.times, last = times.length - 1;
  if (channel.loop && times[last] > times[0] && (time < times[0] || time > times[last])) {
    const span = times[last] - times[0];
    time = times[0] + ((time - times[0]) % span + span) % span;
  }
  if (time <= times[0] || last < 1) return [0, 0, 0];
  if (time >= times[last]) return [last, last, 0];
  let lo = 0, hi = last;
  while (hi - lo > 1) {
    const mid = (lo + hi) >> 1;
    if (times[mid] > time) hi = mid; else lo = mid;
  }
  return [lo, hi, (time - times[lo]) / (times[hi] - times[lo])];
}

function translation(channel, derivatives, time) {
  if (!channel?.times.length) return [0, 0, 0];
  const [i, j, t] = interval(channel, time), values = channel.values;
  if (channel.interpolation === 0) return [0, 1, 2].map(c => values[i * 3 + c] * (1 - t) + values[j * 3 + c] * t);
  const t2 = t * t, t3 = t2 * t, h2 = -2 * t3 + 3 * t2;
  return [0, 1, 2].map(c => (1 - h2) * values[i * 3 + c] + h2 * values[j * 3 + c]
    + (t3 - 2 * t2 + t) * derivatives.outgoing[i * 3 + c]
    + (t3 - t2) * derivatives.incoming[j * 3 + c]);
}

function normalize(q) {
  const length = Math.hypot(...q);
  return length > 0 ? q.map(v => v / length) : [0, 0, 0, 1];
}
function dot(a, b) { return a.reduce((sum, v, i) => sum + v * b[i], 0); }
function multiply(a, b) {
  return [a[3] * b[0] + a[0] * b[3] + a[1] * b[2] - a[2] * b[1],
    a[3] * b[1] - a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
    a[3] * b[2] + a[0] * b[1] - a[1] * b[0] + a[2] * b[3],
    a[3] * b[3] - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]];
}
function slerp(a, b, t) {
  const cosine = clamp(dot(a, b), -1, 1);
  if (cosine > .9995) return normalize(a.map((v, i) => v * (1 - t) + b[i] * t));
  const theta = Math.acos(cosine), sine = Math.sin(theta);
  if (Math.abs(sine) < 1e-8) return [...a];
  const left = Math.sin((1 - t) * theta) / sine, right = Math.sin(t * theta) / sine;
  return normalize(a.map((v, i) => left * v + right * b[i]));
}
function log(q) {
  const theta = Math.acos(clamp(q[3], -1, 1)), sine = Math.sin(theta);
  const scale = Math.abs(sine) > 1e-8 ? theta / sine : 1;
  return q.slice(0, 3).map(v => v * scale);
}
function exp(v) {
  const theta = Math.hypot(...v), scale = theta > 1e-8 ? Math.sin(theta) / theta : 1;
  return [...v.map(x => x * scale), Math.cos(theta)];
}
function prepareRotation(channel) {
  if (!channel) return null;
  const quaternions = channel.times.map((_, i) => normalize(channel.values.slice(i * 4, i * 4 + 4)));
  // Genesis Slerp/Squad recompute chooses successive quaternions in one hemisphere.
  if (channel.interpolation !== 0) {
    for (let i = 1; i < quaternions.length; i++) {
      if (dot(quaternions[i - 1], quaternions[i]) < 0) quaternions[i] = quaternions[i].map(v => -v);
    }
  }
  const count = quaternions.length, loop = channel.loop && count >= 3;
  const corners = channel.interpolation !== 2 ? null : quaternions.map((q, i) => {
    if (!loop && (i === 0 || i === count - 1)) return q;
    const previous = quaternions[i === 0 ? count - 2 : i - 1];
    const next = quaternions[i === count - 1 ? 1 : i + 1];
    const inverse = [-q[0], -q[1], -q[2], q[3]];
    const a = log(multiply(inverse, previous)), b = log(multiply(inverse, next));
    return normalize(multiply(q, exp(a.map((v, c) => -.25 * (v + b[c])))));
  });
  return {quaternions, corners};
}
function rotation(channel, cache, time) {
  if (!channel?.times.length) return [0, 0, 0, 1];
  const [i, j, t] = interval(channel, time), a = cache.quaternions[i], b = cache.quaternions[j];
  if (channel.interpolation === 0) return normalize(a.map((v, c) => v * (1 - t) + b[c] * t));
  const base = slerp(a, b, t);
  return channel.interpolation === 2 ? slerp(base, slerp(cache.corners[i], cache.corners[j], t), 2 * t * (1 - t)) : base;
}

/** Sample a decoded path. Translation is a displacement from its model origin. */
export function samplePath(path, time) {
  if (!path) return {translation: [0, 0, 0], rotation: [0, 0, 0, 1]};
  let cache = prepared.get(path);
  if (!cache) {
    for (const name of ['translation', 'rotation']) {
      if (path[name] && ![0, 1, 2].includes(path[name].interpolation)) throw new RangeError(`Unsupported ${name} interpolation`);
    }
    cache = {translation: path.translation ? tangents(path.translation) : null, rotation: prepareRotation(path.rotation)};
    prepared.set(path, cache);
  }
  return {translation: translation(path.translation, cache.translation, time), rotation: rotation(path.rotation, cache.rotation, time)};
}

/** Transform an original world-space brush point about its imported model pivot. */
export function transformMotionPoint(point, origin, pose) {
  const [x, y, z] = point.map((v, i) => v - origin[i]), [qx, qy, qz, qw] = pose.rotation;
  const tx = 2 * (qy * z - qz * y), ty = 2 * (qz * x - qx * z), tz = 2 * (qx * y - qy * x);
  return [x + qw * tx + qy * tz - qz * ty, y + qw * ty + qz * tx - qx * tz, z + qw * tz + qx * ty - qy * tx]
    .map((v, i) => v + origin[i] + pose.translation[i]);
}

/** A bounded original motion, including script event callbacks during playback.
 * Events are emitted once when crossed, in playback order, including the start
 * and final endpoint. seek() never fires events. Callbacks can stop/seek/play
 * this player; the superseded update then stops immediately.
 */
export class MotionPlayer {
  constructor(motion, {onEvent = null, onComplete = null, beforeAdvance = null} = {}) {
    this.motion = motion;
    this.onEvent = onEvent;
    this.onComplete = onComplete;
    this.beforeAdvance = beforeAdvance;
    this.time = motion.startTime ?? 0;
    this.from = this.time;
    this.to = motion.playbackEndTime ?? motion.endTime ?? motion.duration ?? 0;
    this.speed = 1;
    this.loop = false;
    this.loopFrom = this.from;
    this.loopTo = this.to;
    this.playing = false;
    this.finished = false;
    this.generation = 0;
    this.includeStart = false;
    this.events = [...(motion.events || [])].sort((a, b) => a.time - b.time);
  }

  play(options = {}) {
    const start = this.motion.startTime ?? 0, end = this.motion.playbackEndTime ?? this.motion.endTime ?? this.motion.duration ?? 0;
    const speed = options.speed ?? 1;
    if (!Number.isFinite(speed)) throw new RangeError('Motion speed must be finite');
    const from = options.from ?? (speed < 0 ? end : start), to = options.to ?? (speed < 0 ? start : end);
    if (!Number.isFinite(from) || !Number.isFinite(to)) throw new RangeError('Motion times must be finite');
    this.from = clamp(from, start, end);
    this.to = clamp(to, start, end);
    this.time = this.from;
    this.speed = Math.abs(speed);
    this.loop = options.loop === 'pingpong' ? 'pingpong' : !!options.loop;
    this.loopFrom = clamp(options.loopFrom ?? this.from, start, end);
    this.loopTo = clamp(options.loopTo ?? this.to, start, end);
    if (!Number.isFinite(this.loopFrom) || !Number.isFinite(this.loopTo)) throw new RangeError('Motion loop times must be finite');
    this.playing = true;
    this.finished = false;
    this.includeStart = true;
    this.generation++;
    return this;
  }

  stop() {
    this.playing = false;
    this.generation++;
    return this;
  }

  resume() {
    if (this.finished) return this.play({from: this.loopFrom, to: this.loopTo, speed: this.speed, loop: this.loop});
    this.playing = true;
    this.generation++;
    return this;
  }

  seek(time) {
    if (!Number.isFinite(time)) throw new RangeError('Motion time must be finite');
    this.time = clamp(time, this.motion.startTime ?? 0, this.motion.playbackEndTime ?? this.motion.endTime ?? this.motion.duration ?? 0);
    this.includeStart = false;
    this.finished = false;
    this.generation++;
    return this.sample();
  }

  sample(time = this.time, path = 0) {
    const selected = typeof path === 'string' ? this.motion.paths.find(p => p.name === path) : this.motion.paths[path];
    return samplePath(selected, time);
  }

  dispatch(from, to, generation) {
    const forward = this.to >= this.from;
    const ordered = forward ? this.events : [...this.events].reverse();
    const includeStart=this.includeStart;
    this.includeStart=false;
    for (const event of ordered) {
      const crossed = forward ? (event.time > from && event.time <= to) : (event.time < from && event.time >= to);
      if (!crossed && !(includeStart && event.time === from)) continue;
      if(event.time!==this.time&&this.beforeAdvance?.(this.time,event.time,this)===false)return false;
      this.time = event.time;
      this.onEvent?.(event, this);
      if (this.generation !== generation || !this.playing) return false;
    }
    if(to!==this.time&&this.beforeAdvance?.(this.time,to,this)===false)return false;
    this.time = to;
    return true;
  }

  update(dt) {
    if (!this.playing || !Number.isFinite(dt) || dt < 0) return this.sample();
    const generation = this.generation;
    let remaining = dt * this.speed;
    if (!Number.isFinite(remaining)) return this.sample();
    do {
      const direction = this.to >= this.from ? 1 : -1;
      const distance = Math.max(0, direction * (this.to - this.time));
      const advance = Math.min(remaining, distance), next = this.time + direction * advance;
      if (!this.dispatch(this.time, next, generation)) break;
      remaining = Math.max(0, remaining - advance);
      if (advance < distance) break;
      this.time = this.to;
      if (!this.loop || this.loopFrom === this.loopTo) {
        this.playing = false;
        this.finished = true;
        this.onComplete?.(this);
        break;
      }
      if (this.loop === 'pingpong') {
        const previous = this.to;
        this.to = this.to === this.loopTo ? this.loopFrom : this.loopTo;
        this.from = previous;
        this.includeStart = false;
      } else {
        this.from = this.loopFrom;
        this.to = this.loopTo;
        this.time = this.from;
        this.includeStart = true;
      }
      // Exactly at the wrap, fire the new cycle's starting event once, even
      // when this frame has no remaining time. The next frame excludes it.
      if (!this.dispatch(this.from, this.from, generation)) break;
    } while (remaining > 0);
    return this.sample();
  }
}

export default MotionPlayer;
