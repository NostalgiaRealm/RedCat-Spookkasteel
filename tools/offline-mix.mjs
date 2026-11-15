// Renders what the page's mixer (source/web/audio.js) would play, from the messages the game's
// DirectSound host sends, on the runner's virtual clock. Same rules as audio.js: amplitude
// 10^(v/2000) for a volume or pan of v hundredths of a decibel, 0 at -10000; pan lowers the opposite
// side only; a mono sample goes to both sides. Used by run-headless.mjs --sound-wav.
//   const rec = createRecorder(() => virtualMs);  platform.audio = rec.sink;  ...  rec.render(endMs) -> { wav, seconds, stats }
const dbGain = (h) => (h <= -10000 ? 0 : Math.pow(10, h / 2000));

export function createRecorder(now) {
  const events = [];
  const add = (e) => { e.t = now(); events.push(e); };
  const sink = {
    data: (id, bytes, fmt) => add({ k: 'data', id, bytes: bytes.slice(), fmt: { ...fmt } }),
    play: (id, loop, offset) => add({ k: 'play', id, loop: !!loop, offset: offset || 0 }),
    stop: (id) => add({ k: 'stop', id }),
    volume: (id, v) => add({ k: 'volume', id, v }),
    pan: (id, v) => add({ k: 'pan', id, v }),
    frequency: (id, hz) => add({ k: 'frequency', id, hz }),
    free: (id) => add({ k: 'free', id }),
    alias: (id, of) => add({ k: 'alias', id, of }),
  };
  const render = (endMs, rate = 44100) => {
    const total = Math.ceil(endMs / 1000 * rate);
    const L = new Float32Array(total), R = new Float32Array(total);
    const bufs = new Map();
    const get = (id) => { let b = bufs.get(id); if (!b) bufs.set(id, b = { volume: 0, pan: 0, hz: 0, playing: false, loop: false, pos: 0, pcm: null, frames: 0, channels: 1, rate: 22050 }); return b; };
    const decode = (b, bytes, fmt) => {
      const step = fmt.channels * (fmt.bits >> 3), frames = Math.floor(bytes.length / step);
      const pcm = [new Float32Array(frames), new Float32Array(frames)];
      const dv = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
      for (let k = 0; k < frames; k++) for (let c = 0; c < 2; c++) {
        const ch = Math.min(c, fmt.channels - 1);
        pcm[c][k] = fmt.bits === 16 ? dv.getInt16((k * fmt.channels + ch) * 2, true) / 32768 : (bytes[k * fmt.channels + ch] - 128) / 128;
      }
      Object.assign(b, { pcm, frames, channels: fmt.channels, rate: fmt.rate, step });
    };
    const mix = (from, to) => {
      for (const b of bufs.values()) {
        if (!b.playing || !b.pcm || !b.frames) continue;
        const g = dbGain(b.volume), gl = g * (b.pan > 0 ? dbGain(-b.pan) : 1), gr = g * (b.pan < 0 ? dbGain(b.pan) : 1);
        const inc = (b.hz || b.rate) / rate;
        let pos = b.pos;
        for (let n = from; n < to; n++) {
          if (pos >= b.frames) { if (b.loop) pos %= b.frames; else { b.playing = false; pos = 0; break; } }
          if (g > 0) {
            const i = Math.floor(pos), f = pos - i, j = i + 1 < b.frames ? i + 1 : (b.loop ? 0 : i);
            L[n] += (b.pcm[0][i] * (1 - f) + b.pcm[0][j] * f) * gl;
            R[n] += (b.pcm[1][i] * (1 - f) + b.pcm[1][j] * f) * gr;
          }
          pos += inc;
        }
        b.pos = pos;
      }
    };
    let at = 0;
    for (const e of events) {
      const n = Math.min(total, Math.max(at, Math.round(e.t / 1000 * rate)));
      if (n > at) { mix(at, n); at = n; }
      const b = get(e.id);
      if (e.k === 'data') decode(b, e.bytes, e.fmt);
      else if (e.k === 'alias') { const s = get(e.of); Object.assign(b, { pcm: s.pcm, frames: s.frames, channels: s.channels, rate: s.rate, step: s.step }); }
      else if (e.k === 'play') { b.playing = true; b.loop = e.loop; b.pos = b.step ? e.offset / b.step : 0; }
      else if (e.k === 'stop') b.playing = false;
      else if (e.k === 'volume') b.volume = e.v;
      else if (e.k === 'pan') b.pan = e.v;
      else if (e.k === 'frequency') b.hz = e.hz;
      else if (e.k === 'free') bufs.delete(e.id);
    }
    mix(at, total);
    // 16-bit stereo WAV, and levels per second
    const wav = Buffer.alloc(44 + total * 4);
    wav.write('RIFF', 0); wav.writeUInt32LE(36 + total * 4, 4); wav.write('WAVEfmt ', 8); wav.writeUInt32LE(16, 16);
    wav.writeUInt16LE(1, 20); wav.writeUInt16LE(2, 22); wav.writeUInt32LE(rate, 24); wav.writeUInt32LE(rate * 4, 28); wav.writeUInt16LE(4, 32); wav.writeUInt16LE(16, 34);
    wav.write('data', 36); wav.writeUInt32LE(total * 4, 40);
    let clipped = 0, peak = 0;
    const perSecond = [];
    for (let s = 0; s * rate < total; s++) {
      let sum = 0, cnt = 0;
      for (let n = s * rate; n < Math.min(total, (s + 1) * rate); n++) {
        for (const [x, off] of [[L[n], 0], [R[n], 2]]) {
          const a = Math.abs(x); if (a > peak) peak = a; if (a > 1) clipped++;
          wav.writeInt16LE(Math.max(-32768, Math.min(32767, Math.round(x * 32767))), 44 + n * 4 + off);
          sum += x * x; cnt++;
        }
      }
      perSecond.push(cnt ? 20 * Math.log10(Math.sqrt(sum / cnt) || 1e-9) : -180);
    }
    return { wav, seconds: total / rate, stats: { peak, clipped, perSecond } };
  };
  return { sink, events, render };
}
