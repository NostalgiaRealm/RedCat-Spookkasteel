// Web Audio sink for dsound.js, on the page. The game side sends plain messages:
//   { t: 'data', id, bytes, fmt: { channels, rate, bits } }, { t: 'play', id, loop, offset },
//   { t: 'stop', id }, { t: 'volume', id, v }, { t: 'pan', id, v }, { t: 'frequency', id, hz }, { t: 'free', id },
//   { t: 'alias', id, of }: buffer `id` has the samples of buffer `of` (a DirectSound duplicate)
// Volumes and pans are DirectSound values: hundredths of a decibel of attenuation.
// Samples are kept once: the bytes as sent until the first play, the decoded buffer after it (the
// bytes are then let go: the music of a world alone is 5 MB of them, 11 MB decoded), and a
// duplicate shares its original's instead of holding a copy.
export function createAudioSink() {
  const AC = window.AudioContext || window.webkitAudioContext;
  let ctx = null;
  const bufs = new Map();      // id -> { pcm: { bytes, fmt, buffer }, fmt, gain, panL, panR, src, volume, pan, hz, loop }; pcm may be shared
  let master = null;
  let masterVolume = 1;
  const ensure = () => {
    if (!ctx) { ctx = new AC(); master = ctx.createGain(); master.gain.value = masterVolume; master.connect(ctx.destination); }
    return ctx;
  };
  const dbGain = (hundredths) => (hundredths <= -10000 ? 0 : Math.pow(10, hundredths / 2000));
  /** The samples as a buffer Web Audio can play, made at the first play; the bytes it was made from are not kept. */
  const decoded = (pcm) => {
    if (pcm.buffer || !pcm.bytes) return pcm.buffer;
    const { channels, rate, bits } = pcm.fmt, bytes = pcm.bytes;
    pcm.bytes = null;
    const frames = Math.floor(bytes.length / (channels * (bits >> 3)));
    if (!frames) return null;
    const buf = ensure().createBuffer(channels, frames, Math.max(3000, Math.min(rate, 192000)));
    const dv = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
    for (let c = 0; c < channels; c++) {
      const out = buf.getChannelData(c);
      if (bits === 16) for (let k = 0; k < frames; k++) out[k] = dv.getInt16((k * channels + c) * 2, true) / 32768;
      else for (let k = 0; k < frames; k++) out[k] = (bytes[k * channels + c] - 128) / 128;
    }
    return (pcm.buffer = buf);
  };
  const get = (id) => { let b = bufs.get(id); if (!b) { b = { volume: 0, pan: 0, hz: 0 }; bufs.set(id, b); } return b; };
  const applyPan = (b) => {
    if (!b.panL) return;
    b.panL.gain.value = b.pan > 0 ? dbGain(-b.pan) : 1;
    b.panR.gain.value = b.pan < 0 ? dbGain(b.pan) : 1;
  };
  // While a scene is being skipped (game.js sceneCover): what sounds at that moment, and what is started until the
  // skip is over, is silent, except the level's music (a loop of "Level N - ....wav", which the game side leaves
  // playing through a skip, dsound.js). Only the gain is held at nothing: when the request is not taken after all,
  // everything is heard again where it is.
  let hushing = false;
  const music = (b) => !!(b.src && b.src.loop && /(^|\\)LEVEL \d[^\\]*\.WAV$/i.test((b.fmt && b.fmt.name) || ''));
  const level = (b) => (b.hushed ? 0 : dbGain(b.volume));
  const stop = (b) => { if (b.src) { try { b.src.stop(); } catch (e) { /* already stopped */ } b.src.disconnect(); b.src = null; } };
  const handlers = {
    data: (msg) => { const b = get(msg.id); b.fmt = msg.fmt; b.pcm = { bytes: msg.bytes, fmt: msg.fmt, buffer: null }; },
    // the samples its original has at this moment; new data for either of them later is that one's alone
    alias: (msg) => { const of = bufs.get(msg.of); if (!of || !of.pcm) return; const b = get(msg.id); b.fmt = of.fmt; b.pcm = of.pcm; },
    play: (msg) => {
      const b = get(msg.id);
      if (!b.pcm) return;
      ensure();
      const buffer = decoded(b.pcm);
      if (!buffer) return;
      stop(b);
      if (!b.gain) {
        b.gain = ctx.createGain();
        const split = ctx.createChannelSplitter(2), merge = ctx.createChannelMerger(2);
        b.panL = ctx.createGain(); b.panR = ctx.createGain();
        b.gain.connect(split);
        split.connect(b.panL, 0); split.connect(b.panR, b.fmt.channels > 1 ? 1 : 0);
        b.panL.connect(merge, 0, 0); b.panR.connect(merge, 0, 1);
        merge.connect(master);
      }
      applyPan(b);
      const src = ctx.createBufferSource();
      src.buffer = buffer;
      src.loop = !!msg.loop;
      src.playbackRate.value = b.hz ? b.hz / b.fmt.rate : 1;
      src.connect(b.gain);
      const frame = b.fmt.channels * (b.fmt.bits >> 3);
      src.start(0, (msg.offset || 0) / frame / b.fmt.rate);
      src.onended = () => { if (b.src === src) b.src = null; };
      b.src = src;
      b.hushed = hushing && !music(b);
      b.gain.gain.value = level(b);
    },
    stop: (msg) => stop(get(msg.id)),
    volume: (msg) => { const b = get(msg.id); b.volume = msg.v; if (b.gain) b.gain.gain.value = level(b); },
    pan: (msg) => { const b = get(msg.id); b.pan = msg.v; applyPan(b); },
    frequency: (msg) => { const b = get(msg.id); b.hz = msg.hz; if (b.src) b.src.playbackRate.value = msg.hz / b.fmt.rate; },
    free: (msg) => { const b = bufs.get(msg.id); if (b) { stop(b); bufs.delete(msg.id); } },
  };
  return {
    handle: (msg) => { const h = handlers[msg.t]; if (h) h(msg); },
    resume: () => { ensure(); if (ctx.state === 'suspended') ctx.resume().catch(() => {}); },
    suspend: () => { if (ctx && ctx.state === 'running') ctx.suspend().catch(() => {}); },          // (Firefox rejects a suspend that is still pending when the page is left)
    setMasterVolume: (v) => { masterVolume = v; if (master) master.gain.value = v; },
    hush: (on) => {
      hushing = !!on;
      for (const b of bufs.values()) { const h = hushing && !!b.src && !music(b); if (h !== !!b.hushed) { b.hushed = h; if (b.gain) b.gain.gain.value = level(b); } }
    },
    stopAll: () => { for (const b of bufs.values()) stop(b); },
    // A new game numbers its buffers from 1 again: nothing of the last one may be left.
    // What is sounding now, for checks: one entry per running source.
    state: () => [...bufs].filter(([, b]) => b.src).map(([id, b]) => ({ id, name: (b.fmt.name || '').split('\\').pop(), volume: b.volume, pan: b.pan, loop: b.src.loop, gain: +b.gain.gain.value.toFixed(4), left: +b.panL.gain.value.toFixed(4), right: +b.panR.gain.value.toFixed(4), rate: +b.src.playbackRate.value.toFixed(4) })),
    reset: () => { for (const b of bufs.values()) { stop(b); if (b.gain) b.gain.disconnect(); } bufs.clear(); },
  };
}
