import AUDIO_SETTINGS from './audio-settings.js';
import {ambienceRange, nearbyAmbienceGain} from './ambience-ranges.js';

export const soundName = value => String(value || '').replace(/^.*[\\/]/, '').toLowerCase();
const nonnegative = (value, fallback = 1) => Number.isFinite(Number(value)) ? Math.max(0, Number(value)) : fallback;
const clamp = value => Math.min(1, Math.max(0, value));

// Adam's LinToLog followed by Genesis3D's DirectSound centibel conversion.
// An authored volume of .25 is -20 dB (amplitude .1), not amplitude .25.
export const nativeGainToAmplitude = gain => gain <= 0 ? 0 : 10 ** (.5 * Math.log2(clamp(gain)));

/** Portable sound mixing; all gains are kept separately so changing the master
 * volume never discards an authored gain or a Davi-Script MultiplyVolume. */
export class GameAudio {
  constructor({settings = AUDIO_SETTINGS, master = .6, channels = {effects:1, music:1, voices:1}, createAudio = url => new Audio(url), random = Math.random} = {}) {
    this.settings = settings; this.master = clamp(master); this.createAudio = createAudio; this.random = random;
    this.channels = channels;
    this.sounds = new Set(); this.keyed = new Map(); this.listener = [0, 0, 0]; this.paused = false;
    this.spatial = settings.spatial; this.levelId = null;
  }
  play({sound, key = null, sourceId = null, channel = 'effects', volume = 1, position = null,
    spatial = false, loop = false, minReplayDelay = 0, maxReplayDelay = 0, pauseWithGame = true, playbackRate = 1} = {}) {
    if (key) this.stop(key);
    const name = soundName(sound); if (!name) return null;
    const element = this.createAudio(`assets/${channel === 'voices' ? 'voices' : 'audio'}/${encodeURIComponent(name)}`);
    element.playbackRate = Math.max(.25, Math.min(4, nonnegative(playbackRate)));
    element.preservesPitch = false;
    const minDelay = nonnegative(minReplayDelay, 0), maxDelay = Math.max(minDelay, nonnegative(maxReplayDelay, 0));
    const record = {key, sourceId, channel, name, element, volume: nonnegative(volume),
      authoredGain: this.settings.gains[name] ?? 1, position, spatial, loop, minDelay, maxDelay, pauseWithGame, wait: null};
    element.loop = loop && maxDelay === 0;
    this.sounds.add(record); if (key) this.keyed.set(key, record);
    this.applyGain(record);
    element.onended = () => {
      if (!this.sounds.has(record)) return;
      if (loop) record.wait = minDelay + this.random() * (maxDelay - minDelay);
      else this.release(record);
    };
    element.onerror = () => this.release(record);
    if (!this.paused || !pauseWithGame) this.start(record);
    return record;
  }
  playMusic({sound,id=null,volume=1,stop=false,crossFade=false,fadeInTimeSeconds=0,fadeOutTimeSeconds=0}={}) {
    const current=this.keyed.get('music'),name=soundName(sound);
    if(stop||!name){for(const record of this.sounds)if(record.channel==='music')this.release(record);return null;}
    if(current?.name===name){current.volume=nonnegative(volume);current.sourceId=id;this.applyGain(current);return current;}
    const fadeIn=Math.max(0,Number(fadeInTimeSeconds)||0),fadeOut=Math.max(0,Number(fadeOutTimeSeconds)||0);
    if(current&&crossFade&&fadeOut>0){this.keyed.delete('music');current.key=null;current.fade={from:current.fadeGain??1,to:0,duration:fadeOut,elapsed:0,release:true};}
    else this.stop('music');
    const record=this.play({key:'music',sourceId:id,channel:'music',sound,volume,loop:true});
    if(record&&fadeIn>0){record.fadeGain=0;record.fade={from:0,to:1,duration:fadeIn,elapsed:0};this.applyGain(record);}
    return record;
  }
  start(record) {
    const attempt = record.element.play();
    attempt?.catch(error => {
      // A gesture can resume a browser-blocked sound; pause can abort a pending play.
      if (!['NotAllowedError', 'AbortError'].includes(error?.name)) this.release(record);
    });
  }
  release(record) {
    record.element.onended = null; record.element.onerror = null; record.element.pause();
    this.sounds.delete(record);
    if (record.key && this.keyed.get(record.key) === record) this.keyed.delete(record.key);
  }
  stop(key) { const record = this.keyed.get(key); if (record) this.release(record); }
  reset() { for (const record of this.sounds) this.release(record); this.paused = false; }
  pause() { this.paused = true; for (const {element,pauseWithGame} of this.sounds) if(pauseWithGame)element.pause(); }
  resume() {
    this.paused = false;
    for (const record of this.sounds) if (record.wait === null) this.start(record);
  }
  setMaster(value) { this.master = clamp(value); for (const record of this.sounds) this.applyGain(record); }
  setLevel(id) { this.levelId = id; this.spatial = this.settings.levels?.[id] ?? this.settings.spatial; }
  setScriptVolume(sourceId, value) {
    for (const record of this.sounds) if (record.sourceId === sourceId) {
      record.volume = nonnegative(value); this.applyGain(record);
    }
  }
  applyGain(record) {
    record.currentPosition = typeof record.position==='function' ? record.position() : record.position;
    const range = ambienceRange(this.levelId, record);
    record.distanceGain = record.spatial && record.currentPosition ?
      (range ? nearbyAmbienceGain(this.listener, record.currentPosition, range) : distanceGain(this.listener, record.currentPosition, this.spatial)) : 1;
    record.element.volume = clamp(this.master * nativeGainToAmplitude((this.channels[record.channel] ?? 1) * clamp(record.authoredGain) * record.volume * record.distanceGain)*(record.fadeGain??1));
  }
  update(dt, listener = this.listener) {
    this.listener = [...listener];
    for (const record of this.sounds) {
      if(!this.paused&&record.fade){const fade=record.fade;fade.elapsed+=Math.max(0,dt);const t=Math.min(1,fade.elapsed/fade.duration);record.fadeGain=fade.from+(fade.to-fade.from)*t;if(t>=1){record.fade=null;if(fade.release){this.release(record);continue;}}}
      this.applyGain(record);
      if (!this.paused && record.wait !== null) {
        record.wait -= Math.max(0, dt);
        if (record.wait <= 0) { record.wait = null; record.element.currentTime = 0; this.start(record); }
      }
    }
  }
  snapshot() {
    return [...this.sounds].map(r => ({key:r.key, sourceId:r.sourceId, channel:r.channel, sound:r.name,
      authoredGain:r.authoredGain, scriptVolume:r.volume, distanceGain:r.distanceGain, volume:r.element.volume,
      spatial:r.spatial, position:r.currentPosition, loop:r.loop, paused:r.element.paused, waiting:r.wait,
      readyState:r.element.readyState, currentTime:r.element.currentTime}));
  }
}

// World-unit conversion and native distance model are documented in docs/audio.md.
export function distanceGain(listener, source, {minDistanceMeters = 5, maxDistanceFactor = 25} = {}) {
  const distance = Math.hypot(...source.map((v, i) => v - listener[i]));
  const minimum = minDistanceMeters * 32;
  const maximum = minimum * maxDistanceFactor;
  if (distance <= minimum) return 1;
  // geSound3D produces a logarithmic control value; Adam's LogToLin converts
  // that value to amplitude before the per-WAV and script gains are applied.
  const fraction = Math.log(Math.min(maximum, distance) / minimum) / Math.log(maxDistanceFactor);
  return 2 ** (-10 * fraction);
}
