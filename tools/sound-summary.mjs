#!/usr/bin/env node
// Summarises a sound trace written by run-headless.mjs --sound-log: what was started, how loud, and
// which calls real DirectSound would have refused.
//   node tools/sound-summary.mjs tools/out/sound-w1.json [--all]
import fs from 'node:fs';
const E = JSON.parse(fs.readFileSync(process.argv[2], 'utf8'));
const all = process.argv.includes('--all');
const name = (e) => (e.file || '').split('\\').pop() || '(primary)';
const B = new Map();
const get = (e) => { let b = B.get(e.id); if (!b) { b = { id: e.id, file: name(e), plays: [], volumes: [], pans: [0, 0], refused: 0, stops: 0, last: null }; B.set(e.id, b); } return b; };
const counts = {};
for (const e of E) {
  counts[e.what] = (counts[e.what] || 0) + 1;
  const b = get(e);
  if (e.what === 'create') Object.assign(b, { flags: e.flags, size: e.size, fmt: `${e.channels}ch ${e.bits}bit ${e.rate}Hz` });
  if (e.what === 'duplicate') b.of = e.of;
  if (e.what === 'play') b.plays.push(e);
  if (e.what === 'stop') b.stops++;
  if (e.what === 'volume') b.volumes.push([e.t, e.v]);
  if (e.what === 'pan') { b.pans[0] = Math.min(b.pans[0], e.v); b.pans[1] = Math.max(b.pans[1], e.v); }
  if (e.refused) b.refused++;
}
console.log(Object.entries(counts).map(([k, v]) => `${k} ${v}`).join(', '));
const heard = (b) => b.plays.length && (b.plays.some((p) => p.volume > -10000) || b.volumes.some(([t, v]) => v > -10000 && b.plays.length && t >= b.plays[0].t));
for (const b of B.values()) {
  if (!b.plays.length && !all) continue;
  if (!heard(b) && !all) continue;
  const p = b.plays[0];
  const after = b.volumes.filter(([t]) => p && t >= p.t).map(([, v]) => v);
  const range = after.length ? `${Math.min(...after)}..${Math.max(...after)}` : '';
  console.log(`#${String(b.id).padEnd(4)} ${b.file.padEnd(30)} plays ${String(b.plays.length).padEnd(3)} ${p ? `first ${(p.t / 1000).toFixed(2)}s ${p.loop ? 'loop' : 'once'} vol ${p.volume} pan ${p.pan} hz ${p.hz}` : ''}${range ? ` | set ${after.length}x ${range}` : ''}${b.of ? ` | copy of #${b.of}` : ''}${b.refused ? ` | refused ${b.refused}` : ''}`);
}
const silent = [...B.values()].filter((b) => b.plays.length && !heard(b));
console.log(`started but silent (volume -10000 throughout): ${silent.length}: ` + Object.entries(silent.reduce((a, b) => { a[b.file] = (a[b.file] || 0) + 1; return a; }, {})).map(([k, v]) => `${k}×${v}`).join(', '));
