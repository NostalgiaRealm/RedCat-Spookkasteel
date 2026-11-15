#!/usr/bin/env node
// Level per second of two 16-bit WAV files side by side, to compare the port's rendered mix
// (run-headless.mjs --sound-wav) with a recording of the original (tools/reference-wine).
//   node tools/sound-levels.mjs port.wav original.wav [--skip-a seconds] [--skip-b seconds] [--seconds 38]
import fs from 'node:fs';
const [fa, fb] = process.argv.slice(2);
const opt = (name, def) => { const k = process.argv.indexOf('--' + name); return k < 0 ? def : Number(process.argv[k + 1]); };
const read = (file) => {
  const b = fs.readFileSync(file);
  let p = 12, fmt = null, data = null;
  while (p + 8 <= b.length) { const id = b.toString('latin1', p, p + 4), n = b.readUInt32LE(p + 4); if (id === 'fmt ') fmt = { channels: b.readUInt16LE(p + 10), rate: b.readUInt32LE(p + 12), bits: b.readUInt16LE(p + 22) }; if (id === 'data') { data = b.subarray(p + 8, Math.min(b.length, p + 8 + n)); break; } p += 8 + n + (n & 1); }
  if (!fmt || !data || fmt.bits !== 16) throw new Error(file + ': need 16-bit PCM');
  return { ...fmt, data };
};
const levels = (w, skip, seconds) => {
  const out = [], step = w.channels * 2;
  for (let s = 0; s < seconds; s++) {
    const lo = Math.round((skip + s) * w.rate) * step, hi = Math.round((skip + s + 1) * w.rate) * step;
    if (hi > w.data.length) break;
    let sum = 0, peak = 0;
    for (let k = lo; k < hi; k += 2) { const x = w.data.readInt16LE(k) / 32768; sum += x * x; if (Math.abs(x) > peak) peak = Math.abs(x); }
    out.push({ rms: 10 * Math.log10(sum / ((hi - lo) / 2) || 1e-12), peak });
  }
  return out;
};
const seconds = opt('seconds', 38);
const A = levels(read(fa), opt('skip-a', 0), seconds), B = levels(read(fb), opt('skip-b', 0), seconds);
const n = Math.min(A.length, B.length);
let sum = 0, worst = 0, ea = 0, eb = 0;
console.log('second   port   original   difference (dB)');
for (let s = 0; s < n; s++) {
  const d = A[s].rms - B[s].rms; sum += d; if (Math.abs(d) > Math.abs(worst)) worst = d;
  ea += Math.pow(10, A[s].rms / 10); eb += Math.pow(10, B[s].rms / 10);
  console.log(`${String(s).padStart(4)}   ${A[s].rms.toFixed(1).padStart(6)}   ${B[s].rms.toFixed(1).padStart(6)}   ${d >= 0 ? '+' : ''}${d.toFixed(1)}`);
}
console.log(`whole window: port ${(10 * Math.log10(ea / n)).toFixed(2)} dBFS, original ${(10 * Math.log10(eb / n)).toFixed(2)} dBFS, difference ${(10 * Math.log10(ea / eb)).toFixed(2)} dB; mean of the per-second differences ${(sum / n).toFixed(2)} dB, largest ${worst.toFixed(1)} dB; peaks ${Math.max(...A.slice(0, n).map((x) => x.peak)).toFixed(3)} and ${Math.max(...B.slice(0, n).map((x) => x.peak)).toFixed(3)}`);
