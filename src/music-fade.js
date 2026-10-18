const unit = value => Math.max(0, Math.min(1, Number.isFinite(value) ? value : 0));

// AdamEffectMusic (57e050/57e0f3) changes control volume by dt / fadeTime,
// not by a fraction of the remaining distance. Reversing a partial fade thus
// reaches its endpoint sooner. Convert this gain through LinToLog with the
// other sound gains; applying it after conversion changes the audible curve.
export function advanceMusicFade(fade, seconds) {
  const from = unit(fade.from), to = unit(fade.to);
  fade.elapsed = Math.max(0, Number.isFinite(fade.elapsed) ? fade.elapsed : 0)
    + Math.max(0, Number.isFinite(seconds) ? seconds : 0);
  const duration = Number.isFinite(fade.duration) ? Math.max(0, fade.duration) : 0;
  const distance = Math.abs(to - from);
  const travelled = duration > 0 ? Math.min(distance, fade.elapsed / duration) : distance;
  return { gain: unit(from + Math.sign(to - from) * travelled), done: travelled >= distance };
}
