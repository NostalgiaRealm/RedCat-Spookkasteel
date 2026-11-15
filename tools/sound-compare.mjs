#!/usr/bin/env node
// Compares the port's sound trace with the reference trace of the original under Wine.
//   node tools/sound-compare.mjs tools/out/sound-w1.json evidence/reference-wine/dsound-world1.json [--window 38] [--tolerance 0.25] [--all]
// The port trace comes from run-headless.mjs --sound-log, the reference from tools/reference-wine.
// Times are seconds after the first Play. Buffers are matched in creation order (originals), copies
// in creation order per original. Volumes are DirectSound values (hundredths of a decibel).
import fs from 'node:fs';
const [portFile, refFile] = process.argv.slice(2);
const opt = (name, def) => { const k = process.argv.indexOf('--' + name); return k < 0 ? def : process.argv[k + 1]; };
const WINDOW = Number(opt('window', 38)), TOL = Number(opt('tolerance', 0.25)), all = process.argv.includes('--all');
const base = (p) => (p || '').split(/[\\/]/).pop().toLowerCase();

// --- port trace -> buffers with plays --------------------------------------------------------
const E = JSON.parse(fs.readFileSync(portFile, 'utf8'));
const first = E.find((e) => e.what === 'play');
const t0 = first ? first.t : 0;
const P = new Map();
for (const e of E) {
  let b = P.get(e.id);
  if (!b) P.set(e.id, b = { id: e.id, file: base(e.file), bytes: 0, of: null, plays: [], volume: 0, pan: 0, refused: 0 });
  const t = (e.t - t0) / 1000;
  const cur = b.plays[b.plays.length - 1];
  if (e.what === 'create') { b.bytes = e.size; b.primary = e.primary; }
  else if (e.what === 'duplicate') { b.of = e.of; const s = P.get(e.of); b.bytes = s.bytes; b.volume = s.volume; b.pan = s.pan; }
  else if (e.refused) b.refused++;
  else if (e.what === 'volume') { b.volume = e.v; if (cur && cur.open && t <= WINDOW) { cur.max = Math.max(cur.max, e.v); cur.min = Math.min(cur.min, e.v); } }
  else if (e.what === 'pan') b.pan = e.v;
  else if (e.what === 'play') { if (cur) cur.open = false; b.plays.push({ start: t, loop: e.loop, at: e.volume, max: e.volume, min: e.volume, open: true }); }
  else if (e.what === 'stop' || e.what === 'release') { if (cur) cur.open = false; }
}
const port = [...P.values()].filter((b) => !b.primary);

// --- reference -> the same shape ---------------------------------------------------------------
const R = JSON.parse(fs.readFileSync(refFile, 'utf8'));
// Built from the raw events, in the same way as the port's trace above (the reference's own per-play
// summary stops at 40 s).
const ref = R.buffers.map((b) => {
  const plays = [];
  for (const e of b.events || []) {
    const cur = plays[plays.length - 1];
    if (e.op === 'Play') { if (cur) cur.open = false; plays.push({ start: e.t, loop: !!e.args.looping, at: e.args.volume, max: e.args.volume, min: e.args.volume, open: true }); }
    else if (e.op === 'SetVolume' && e.result === 'ok') { if (cur && cur.open && e.t <= WINDOW) { cur.max = Math.max(cur.max, e.args.volume); cur.min = Math.min(cur.min, e.args.volume); } }
    else if (e.op === 'Stop' || (e.op === 'Release' && e.result && e.result.ref === 0)) { if (cur) cur.open = false; }
  }
  return { id: b.id, file: base(b.wav), bytes: b.bytes, of: b.duplicateOf, plays };
});

// --- match -----------------------------------------------------------------------------------
const inWindow = (b) => b.plays.filter((p) => p.start <= WINDOW);
const originals = (list) => list.filter((b) => b.of == null);
const po = originals(port), ro = originals(ref);
const problems = [];
let matched = 0;
const pairs = [];
// originals: same order of creation; the reference loads a few files later in the run, so match by (order among equal sizes)
const takeBySize = (list) => { const m = new Map(); for (const b of list) { const k = b.bytes; if (!m.has(k)) m.set(k, []); m.get(k).push(b); } return m; };
const pm = takeBySize(po), rm = takeBySize(ro);
for (const [size, rs] of rm) {
  const ps = pm.get(size) || [];
  for (let k = 0; k < Math.max(rs.length, ps.length); k++) {
    if (rs[k] && ps[k]) pairs.push([ps[k], rs[k]]);
    else if (rs[k] && inWindow(rs[k]).length) problems.push(`only in the original: ${rs[k].file} (${size} bytes), played ${inWindow(rs[k]).length}x`);
    else if (ps[k] && inWindow(ps[k]).length) problems.push(`only in the port: ${ps[k].file} (${size} bytes), played ${inWindow(ps[k]).length}x`);
  }
}
for (const [size, ps] of pm) if (!rm.has(size)) for (const b of ps) if (inWindow(b).length) problems.push(`only in the port: ${b.file} (${size} bytes), played ${inWindow(b).length}x`);

const summary = (list) => {      // per file: what a listener gets
  const m = new Map();
  for (const b of list) for (const p of inWindow(b)) {
    let f = m.get(b.file); if (!f) m.set(b.file, f = { plays: 0, audible: 0, loudest: -10000, loops: 0, firstAudible: null, starts: [] });
    f.plays++; if (p.loop) f.loops++;
    if (p.max > -10000) { f.audible++; f.loudest = Math.max(f.loudest, p.max); f.starts.push(p.start); if (f.firstAudible === null || p.start < f.firstAudible) f.firstAudible = p.start; }
  }
  return m;
};
const sp = summary(port), sr = summary(ref);
const files = [...new Set([...sr.keys(), ...sp.keys()])];
const rows = [];
let same = 0;
for (const f of files) {
  const a = sp.get(f) || { plays: 0, audible: 0, loudest: -10000, loops: 0, firstAudible: null, starts: [] };
  const b = sr.get(f) || { plays: 0, audible: 0, loudest: -10000, loops: 0, firstAudible: null, starts: [] };
  const notes = [];
  if (a.audible !== b.audible) notes.push(`audible plays ${a.audible} vs ${b.audible}`);
  if (a.loudest !== b.loudest) notes.push(`loudest ${a.loudest} vs ${b.loudest}`);
  if (a.loops !== b.loops) notes.push(`looping plays ${a.loops} vs ${b.loops}`);
  if (a.firstAudible !== null && b.firstAudible !== null && Math.abs(a.firstAudible - b.firstAudible) > TOL) notes.push(`first audible start ${a.firstAudible.toFixed(2)} s vs ${b.firstAudible.toFixed(2)} s`);
  if ((a.audible === 0) !== (b.audible === 0)) notes.unshift(a.audible ? 'HEARD ONLY IN THE PORT' : 'HEARD ONLY IN THE ORIGINAL');
  if (!notes.length) same++;
  rows.push({ f, a, b, notes });
}
const fmt = (x) => `${String(x.plays).padStart(3)} plays, ${String(x.audible).padStart(3)} audible, loudest ${String(x.loudest).padStart(6)}, first ${x.firstAudible === null ? '   -' : x.firstAudible.toFixed(2).padStart(6)}`;
console.log(`port ${portFile}: ${po.length} buffers + ${port.length - po.length} copies; original ${refFile}: ${ro.length} buffers + ${ref.length - ro.length} copies; window ${WINDOW} s after the first Play`);
for (const r of rows) if (all || r.notes.length) console.log(`${r.f.padEnd(30)} port: ${fmt(r.a)} | original: ${fmt(r.b)}${r.notes.length ? '  <-- ' + r.notes.join('; ') : ''}`);
for (const p of problems) console.log(p);
// per buffer, for sounds that are placed in the world: which of the copies is the audible one
let bufSame = 0, bufDiff = 0;
for (const [a, b] of pairs) {
  const pa = inWindow(a), pb = inWindow(b);
  const key = (ps) => ps.map((p) => `${p.loop ? 'L' : 'O'}${p.max}`).join(',');
  if (key(pa) === key(pb)) bufSame++; else bufDiff++;
}
console.log(`files: ${same} of ${rows.length} the same (plays that are audible, loudest volume, loop flag, first start within ${TOL} s); original buffers matched by size: ${pairs.length}, of which ${bufSame} with the same plays and peak volumes, ${bufDiff} different`);
const heardOnly = rows.filter((r) => /HEARD ONLY/.test(r.notes[0] || ''));
process.exitCode = heardOnly.length ? 1 : 0;
