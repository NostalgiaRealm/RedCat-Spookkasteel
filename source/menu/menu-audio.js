// Menu music and button voices. Same interface as ../RCSPOOK_NEW/source/menu-audio.js, but
// without that project's game audio engine: the music is one looping Web Audio buffer, a voice
// is an <audio> element. Sequencing follows media completion, never estimated WAV durations.
// Browsers only let a page make sound after a click or key press: unlock() is called from the
// first one and starts whatever was asked for before it.
//
// Levels as in the original menu (docs/research/menu-audio.md): the music plays at the player's
// music volume, every clip at the player's effects volume, both 0..100 and both through one
// curve to a DirectSound volume. A clip gets its level when it starts; the music follows the
// value at once. Nothing else changes loudness there: no fade, no ducking. The port's own master
// volume (0..1) is one more factor on both.
export const LEVEL_MENU_VOICES = Array.from({ length: 5 }, (_, i) => [`rcmn${33 + i}.wav`, `rcmn${38 + i}.wav`]);
export const DEFAULT_VOLUME = 80;       // TSettings.Create 0x56AB14 and Settings\static.ini [DEFAULTSETTINGS]

/** Slider value 0..100 -> DirectSound volume in 1/100 dB, -4000..-100 (RcHcMenu.dat 0x4B01EC). */
export function directSoundVolume(p) {
  const v = -Math.round(10 ** (2 + (100 - p) / 100 * (Math.log10(4000) - 2)));
  return Math.max(-4000, Math.min(-100, v));
}
/** Slider value 0..100 -> amplitude: 0 is 0.01 (not silence), 80 is 0.786, 100 is 0.891. */
export const sliderGain = (p) => 10 ** (directSoundVolume(p) / 2000);

export class MenuAudio {
  constructor({ volume = 1, base = document.baseURI, createAudio = (url) => new Audio(url) } = {}) {
    this.volume = volume; this.base = base; this.createAudio = createAudio;     // volume: the port's master, 0..1
    this.musicVolume = DEFAULT_VOLUME; this.effectsVolume = DEFAULT_VOLUME;     // the player's two sliders, 0..100
    this.voiceGain = 1; this.lastClipVolume = null;
    this.musicStarts = 0; this.musicStartedAt = 0;
    this.generation = 0; this.voice = null; this.cancelVoice = null; this.playVoice = null;
    this.musicWanted = false; this.paused = false; this.unlocked = false;
    this.ctx = null; this.gain = null; this.buffer = null; this.loading = null; this.source = null;
  }
  url(path) { return new URL(path, this.base).href; }

  /** Call from every click, tap or key press: the first one that the browser accepts lets the sound start. */
  unlock() {
    this.unlocked = true;
    if (this.musicWanted) this.startMusic();
    if (this.voice && this.playVoice && this.voice.paused && !this.paused) this.playVoice();
  }
  showMenu() {
    this.stopVoice(); this.resume(); this.startMusic();
    return this.say(['rcmn9.wav'], { retryOnGesture: true });
  }

  // --- music ---
  startMusic() {
    this.musicWanted = true;
    if (!this.unlocked) return;
    const AC = window.AudioContext || window.webkitAudioContext;
    if (!AC) return;
    if (!this.ctx) { this.ctx = new AC(); this.gain = this.ctx.createGain(); this.gain.gain.value = this.musicGain; this.gain.connect(this.ctx.destination); }
    if (this.ctx.state === 'suspended' && !this.paused) this.ctx.resume().catch(() => {});
    if (this.source) return;
    if (!this.loading) {
      this.loading = fetch(this.url('assets/audio/menumuz.wav'))
        .then((r) => { if (!r.ok) throw new Error('menumuz.wav: HTTP ' + r.status); return r.arrayBuffer(); })
        .then((bytes) => this.ctx.decodeAudioData(bytes))
        .then((buffer) => { this.buffer = buffer; })
        .catch((e) => { console.warn('[menu] muziek niet geladen:', e.message); this.loading = null; });
    }
    this.loading.then(() => {
      if (!this.buffer || !this.musicWanted || this.source) return;
      const src = this.ctx.createBufferSource();
      src.buffer = this.buffer; src.loop = true; src.connect(this.gain); src.start();
      this.source = src; this.musicStarts++; this.musicStartedAt = this.ctx.currentTime;
    });
  }
  stopMusic() {
    this.musicWanted = false;
    if (this.source) { try { this.source.stop(); } catch (e) { /* not started */ } this.source.disconnect(); this.source = null; }
  }
  get musicPlaying() { return !!this.source && this.ctx.state === 'running'; }
  /** Seconds since the music was started from its beginning (it loops). */
  get musicTime() { return this.source ? this.ctx.currentTime - this.musicStartedAt : 0; }
  get musicGain() { return Math.max(0, Math.min(1, this.volume)) * sliderGain(this.musicVolume); }
  /** The port's master volume, 0..1. */
  setVolume(volume) {
    this.volume = volume;
    if (this.gain) this.gain.gain.value = this.musicGain;
    if (this.voice) this.voice.volume = Math.max(0, Math.min(1, volume * this.voiceGain));
  }
  /** The Muziek slider, 0..100: one SetVolume on the running music, no ramp (0x54FEB0). */
  setMusicVolume(p) {
    this.musicVolume = Math.max(0, Math.min(100, Math.round(Number(p))));
    if (this.gain) this.gain.gain.value = this.musicGain;
  }
  /** The Geluidseffecten slider, 0..100: the level of every clip that starts from now on (0x54F857). */
  setEffectsVolume(p) { this.effectsVolume = Math.max(0, Math.min(100, Math.round(Number(p)))); }

  // --- voices ---
  stopVoice() { this.generation++; if (this.cancelVoice) this.cancelVoice(); this.cancelVoice = null; this.voice = null; }
  stop() { this.stopVoice(); this.stopMusic(); }
  /** Plays the clips one after another. Resolves true when all were played to the end. */
  async say(files, { retryOnGesture = false } = {}) {
    this.stopVoice(); const generation = this.generation;
    // Preload both halves of a level announcement while the first is speaking.
    const clips = files.map((name) => { const clip = this.createAudio(this.url(`assets/voices/${name}`)); clip.preload = 'auto'; if (clip.load) clip.load(); return clip; });
    for (const clip of clips) {
      if (generation !== this.generation) return false;
      const completed = await new Promise((resolve) => {
        // the level is set once, when the clip starts
        this.voice = clip; this.voiceGain = sliderGain(this.effectsVolume);
        clip.volume = Math.max(0, Math.min(1, this.volume * this.voiceGain)); this.lastClipVolume = clip.volume;
        const finish = (result) => { clip.onended = null; clip.onerror = null; clip.pause(); if (this.voice === clip) { this.voice = null; this.cancelVoice = null; } resolve(result); };
        this.cancelVoice = () => finish(false); clip.onended = () => finish(true); clip.onerror = () => finish(false);
        // Autoplay denial must not leave a start operation waiting forever.
        // A start can also be interrupted from outside the page: Firefox with the Plasma Integration
        // add-on rejects the first play() of a clip with AbortError (seen in the Kao port, PD156 there).
        // The clip is then still wanted and stands paused: it is started once more. A second
        // interruption gives the clip up, as before.
        let interrupted = false;
        this.playVoice = () => {
          try {
            const p = clip.play();
            if (p && p.catch) p.catch((error) => {
              if (error && error.name === 'AbortError' && this.paused) return;
              if (error && error.name === 'NotAllowedError' && retryOnGesture) return;
              if (error && error.name === 'AbortError' && !interrupted && this.voice === clip && generation === this.generation && clip.paused) { interrupted = true; this.playVoice(); return; }
              finish(false);
            });
          } catch (e) { finish(false); }
        };
        if (!this.paused) this.playVoice();
      });
      if (!completed) return false;
    }
    return true;
  }
  selectLevel(index) { return this.say(LEVEL_MENU_VOICES[index] || []); }

  /** The page was hidden or shown again. */
  pause() { this.paused = true; if (this.ctx && this.ctx.state === 'running') this.ctx.suspend().catch(() => {}); if (this.voice) this.voice.pause(); }
  resume() { this.paused = false; if (this.ctx && this.ctx.state === 'suspended' && this.unlocked) this.ctx.resume().catch(() => {}); if (this.voice && this.playVoice) this.playVoice(); }
}
