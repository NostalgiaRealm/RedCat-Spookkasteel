// Deliberate departure from the native 50 m full-volume radius in the caves.
// Keep all repeating spatial ambience audible in its section, including lava,
// machinery, torches and the intermittent corridor noises. A filename list
// misses authored emitters using other sounds (and delayed replay loops).
export const CAVE_AMBIENCE_RANGE = Object.freeze({nearMeters:5, farMeters:30});
export const CASTLE_AMBIENCE_RANGE = Object.freeze({nearMeters:5, farMeters:25});
export const TOWER_FIRE_RANGE = Object.freeze({nearMeters:3, farMeters:18, gain:.65});
export const FAIRY_IDLE_DISTANCE_SCALE = 3;
export const isFairyIdle = record=>record.channel==='effects'&&record.loop&&record.name==='idlefee1.wav';

export function ambienceRange(level, record) {
  if(record.channel!=='effects')return null;
  if(isFairyIdle(record)) {
    const base=level==='lvl01a'?CASTLE_AMBIENCE_RANGE:level==='lvl03a'?CAVE_AMBIENCE_RANGE:null;
    return base?{nearMeters:base.nearMeters*FAIRY_IDLE_DISTANCE_SCALE,farMeters:base.farMeters*FAIRY_IDLE_DISTANCE_SCALE}:null;
  }
  // The bridge and several lifts have positioned EffectSounds with native 3D
  // sound disabled. Localize those too; leave unpositioned UI/pickup audio alone.
  if(level==='lvl01a'&&record.position)return CASTLE_AMBIENCE_RANGE;
  if(level==='lvl04a'&&record.spatial&&record.loop&&record.name==='lv4snd16.wav')return TOWER_FIRE_RANGE;
  return level==='lvl03a'&&record.spatial&&record.loop?CAVE_AMBIENCE_RANGE:null;
}

// Smooth endpoints avoid a pop when walking across the audible boundary. This
// is a mixer control gain, so authored/channel/script gains still combine in
// the existing native logarithmic conversion.
export function nearbyAmbienceGain(listener, source, {nearMeters, farMeters, gain=1}) {
  const distance = Math.hypot(...source.map((v, i) => v - listener[i])) / 32;
  const t = Math.max(0, Math.min(1, (distance - nearMeters) / (farMeters - nearMeters)));
  return gain * (1 - t * t * (3 - 2 * t));
}
