#!/usr/bin/env node
// The game's heap over a whole adventure (tools/memory-plugin.mjs in the Node runner): worlds 1 to 5 in one game and
// on to the witch's door, against a game started in world 5. Fails when a change of world leaves more behind than a
// small bound, when the heap's top comes near the end of the address space, or when a state and the game it was
// taken from part ways. Why this exists: the original never frees a sound before it ends, 15 to 18 MB per change of
// world, which ended a session at the witch's door with "out of game memory (heap 158 MB in use)"
// (source/host/fixes.js soundRelease, docs/research/original-fixes.md 11).
//   node tools/memory-check.mjs [--only chain,restarts,original,state,old]
import fs from 'node:fs';
import path from 'node:path';
import { spawn } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const OUT = path.join(ROOT, 'tools/out/memory-check');
fs.mkdirSync(OUT, { recursive: true });
const args = process.argv.slice(2);
const only = args.includes('--only') ? args[args.indexOf('--only') + 1].split(',') : null;
const wants = (n) => !only || only.includes(n);
let failed = 0, n = 0;
const check = (ok, what, detail = '') => { n++; if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); };
const node = (name, a) => new Promise((resolve) => { const p = spawn('node', ['tools/run-headless.mjs', '--fresh', '--out', path.join(OUT, name), ...a], { cwd: ROOT }); let log = ''; p.stdout.on('data', (d) => { log += d; }); p.stderr.on('data', (d) => { log += d; }); p.on('close', () => { fs.writeFileSync(path.join(OUT, name + '.log'), log); resolve(log); }); });
/** One run of the plugin: its rows, and the run's error if it had one. */
const run = async (name, a) => { const file = path.join(OUT, name + '.json'); fs.rmSync(file, { force: true }); const log = await node(name, ['--seconds', '900', '--plugin', 'tools/memory-plugin.mjs', '--mem-out', file, ...a]); const error = (/^ERROR: (.*)$/m.exec(log) || [])[1] || null; return { rows: fs.existsSync(file) ? JSON.parse(fs.readFileSync(file)).rows : [], error, log }; };
const row = (r, label) => r.rows.find((q) => q.label === label);
const played = (r) => r.rows.filter((q) => / played$/.test(q.label));
const J = JSON.stringify;

// The bounds, in MB. Measured 2026-11-22 (docs/research/original-fixes.md 11): a change of world leaves 0.6 to 1.5 MB
// behind (bitmaps of the Adam layer and of the engine that the original does not free either), a restart of the Tower 0.8.
const CARRY_PER_CHANGE = 3, RESTART = 1.5, PEAK = 80, APART = 12, ROOM = 64;

const jobs = [];
if (wants('chain')) jobs.push(Promise.all([run('chain', ['--world', '1', '--mem-boss']), run('fresh5', ['--world', '5', '--mem-boss'])]).then(([c, f]) => {
  const p = played(c), last = c.rows[c.rows.length - 1], lastF = f.rows[f.rows.length - 1];
  console.log('   world       in use   carried   peak so far   heap top   (MB; one game from world 1)');
  for (const q of c.rows) console.log('   ' + q.label.padEnd(34) + String(q.inUse).padStart(7) + String(q.carried).padStart(9) + String(q.peak).padStart(9) + String(q.bump).padStart(9));
  console.log('   a game started in world 5: ' + f.rows.map((q) => q.label + ' ' + q.inUse).join(', '));
  check(!c.error && !f.error && p.length === 5 && !!row(c, 'witch: after trigger_witchmodel') && !!row(f, 'witch: after trigger_witchmodel') && !c.missing, 'worlds 1 to 5 in one game and on to the witch\'s door, and the same place in a game started in world 5: no error', c.error || f.error || '');
  if (p.length !== 5 || !last || !lastF) return;
  const carried = p.map((q) => q.carried), steps = carried.slice(2).map((v, k) => +(v - carried[k + 1]).toFixed(2));
  check(steps.every((v) => v <= CARRY_PER_CHANGE), `what a world still holds of the worlds before it grows by at most ${CARRY_PER_CHANGE} MB per change of world`, `carried ${J(carried)}, growth ${J(steps)}`);
  check(c.rows.every((q) => !q.sounds || q.sounds.loose === 0), 'after every change every channel of the sound manager has its definition', J(c.rows.map((q) => q.sounds && q.sounds.loose)));
  check(last.peak <= PEAK && last.room >= ROOM, `the heap never held more than ${PEAK} MB, and at least ${ROOM} MB of the address space is left at the witch`, `peak ${last.peak}, heap top at most ${last.peakBump}, room ${last.room}`);
  check(last.inUse - lastF.inUse <= APART, `at the witch the game that came through all five worlds holds at most ${APART} MB more than the one started in world 5`, `${last.inUse} against ${lastF.inUse}`);
}));
if (wants('restarts')) jobs.push(run('restarts', ['--world', '5', '--mem-restarts', '5']).then((r) => {
  const p = played(r).map((q) => q.inUse), steps = p.slice(2).map((v, k) => +(v - p[k + 1]).toFixed(2));
  check(!r.error && p.length === 6 && steps.every((v) => v <= RESTART), `the Tower started again five times (the game's command "restart", what "Ja" on the retry screen gives): at most ${RESTART} MB more per time`, r.error || `in use ${J(p)}`);
}));
if (wants('original')) jobs.push(run('original', ['--world', '1', '--mem-until', '3', '--fixes', 'soundRelease=0']).then((r) => {
  const p = played(r), carried = p.map((q) => q.carried);
  check(!r.error && p.length === 3 && carried[2] - carried[1] > 10 && r.rows[r.rows.length - 1].sounds.loose > 10, 'with soundRelease off (the original) the check sees the fault: over 10 MB more carried per change of world, and channels without a definition', r.error || `carried ${J(carried)}, loose ${J(r.rows.map((q) => q.sounds && q.sounds.loose))}`);
}));
if (wants('state')) jobs.push((async () => {
  // the state the game thread takes by itself: the one of the pass that changed the world (pass 301 here), and one inside the new world
  const hash = (log, k) => (new RegExp('hash ' + k + ' passes later: (\\w+)').exec(log) || [])[1];
  const st = path.join(OUT, 'change.bin'), st2 = path.join(OUT, 'inside.bin');
  const [a, c] = await Promise.all([node('state-a', ['--world', '1', '--plugin', 'tools/memory-plugin.mjs', '--mem-until', '2', '--save-at', '301', '--state', st, '--hash-after', '200']), node('state-c', ['--world', '1', '--plugin', 'tools/memory-plugin.mjs', '--mem-until', '2', '--save-at', '400', '--state', st2, '--hash-after', '150'])]);
  const [b, d] = await Promise.all([node('state-b', ['--world', '4', '--restore', st, '--hash-after', '200']), node('state-d', ['--world', '4', '--restore', st2, '--hash-after', '150'])]);
  check(!!hash(a, 200) && hash(a, 200) === hash(b, 200) && !!hash(c, 150) && hash(c, 150) === hash(d, 150), 'a state of the pass that changed the world, and one taken 100 passes into the new world: the restored game equals the game that went on', `${hash(a, 200)} ${hash(b, 200)}; ${hash(c, 150)} ${hash(d, 150)}`);
})());
if (wants('old')) jobs.push((async () => {
  // A state as a build before the fix left it: five worlds and five restarts with soundRelease off, over 127 MB in use.
  // Continued with the fix it is in need (less than 32 MB of the heap left) and is relieved before its first pass.
  const st = path.join(OUT, 'old.bin'), use = (log) => Number((/heap in use ([\d.]+) MB/.exec(log) || [])[1]);
  const a = await node('old-a', ['--seconds', '900', '--world', '1', '--fixes', 'soundRelease=0', '--plugin', 'tools/memory-plugin.mjs', '--mem-restarts', '5', '--save-at', '2900', '--state', st, '--hash-after', '20']);
  const [b, c] = await Promise.all([node('old-b', ['--seconds', '300', '--world', '5', '--restore', st, '--hash-after', '900', '--check-sound']), node('old-c', ['--seconds', '300', '--world', '5', '--restore', st, '--hash-after', '900', '--fixes', 'soundRelease=0'])]);
  check(use(a) > 127 && use(c) > 127 && use(b) < 60 && /hash 900 passes later/.test(b) && !/^ERROR/m.test(b) && /sound check: \d+ plays, 0 with/.test(b), 'a state that carries the sounds of five worlds and five restarts (the fix off, as a build before it): continued with the fix it holds under 60 MB and plays on, 900 passes, the mixer as the game has it', `saved with ${use(a)} MB in use; continued with the fix ${use(b)}, without ${use(c)}`);
})());
await Promise.all(jobs);
console.log(`\n${n - failed} of ${n} checks passed`);
process.exit(failed ? 1 : 0);
