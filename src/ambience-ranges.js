// Deliberate departure from the native 50 m full-volume radius in the caves.
// Keep all repeating spatial ambience audible in its section, including lava,
// machinery, torches and the intermittent corridor noises. A filename list
// misses authored emitters using other sounds (and delayed replay loops).
export const CAVE_AMBIENCE_RANGE = Object.freeze({nearMeters:5, farMeters:30});

export function ambienceRange(level, record) {
  return level === 'lvl03a' && record.channel === 'effects' && record.spatial &&
    record.loop ? CAVE_AMBIENCE_RANGE : null;
}

// Smooth endpoints avoid a pop when walking across the audible boundary. This
// is a mixer control gain, so authored/channel/script gains still combine in
// the existing native logarithmic conversion.
export function nearbyAmbienceGain(listener, source, {nearMeters, farMeters}) {
  const distance = Math.hypot(...source.map((v, i) => v - listener[i])) / 32;
  const t = Math.max(0, Math.min(1, (distance - nearMeters) / (farMeters - nearMeters)));
  return 1 - t * t * (3 - 2 * t);
}
