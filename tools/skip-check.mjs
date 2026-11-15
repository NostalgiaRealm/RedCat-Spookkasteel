#!/usr/bin/env node
// Skipping a scene (source/host/skip.js) leaves the game in a state the original reaches by
// playing the scene. Node runner, virtual clock, no browser.
//   node tools/skip-check.mjs [case ...] [--sweep] [--keep] [--fixes off] [--ranges]
//
// The standard (docs/research/cutscenes.md 2). A skip is not asked to leave the memory of the game
// played at one particular frame rate: runs of the original code at 60, 50 and 40 frames a second
// already differ from each other in what depends on the frame rate. It is asked to leave
//   - every value of the game itself as the watched scene leaves it: RedCat's place, heading and
//     velocity, the controls, what he has, the cutscene's state and line, which objects exist,
//     their classes, and every word of an object's state on which the watched runs agree;
//   - differences only where runs of the original at different frame rates differ too, each kind
//     shown by such a run and listed by name below (RATE);
//   - and, for what the skip leaves out of a pass (the engine's RenderScene), differences only in
//     what the renderer keeps for itself (SCRATCH, and where allocations land).
//
// Per case eight runs of tools/skip-plugin.mjs:
//   play     the scene played at 60 frames a second, as the port plays it; its length sets the two
//            game times at which every run of the case is written down: one second after the
//            scene (`near`) and seven seconds after it (`settled`, past the longest tail)
//   ctl50, ctl40   the scene played at 50 and at 40 frames a second
//   skipdraw the skip asked for two seconds into the scene (the time the key is held), with
//            RenderScene run as in any pass (host.skip.draw)
//   paced    no skip: the game played from the pass the skip started in with the clock steps that
//            skip took (half a second each: two passes a second, the slowest rate at which the
//            original loses no game time, CAdamSubLevel::Update 0x4F5170), everything drawn
//   skip     the skip as the player gets it
//   sound    the skip again with a recording sink: what the page's mixer is asked to start
// and these checks:
//   1. The step alone. skipdraw and paced leave the same memory, byte for byte (one hash over the
//      host's low memory, the image, the heap and the pages), at three moments: the pass in which
//      the cutscene's state is back at 0, the pass after the skip, and the settled moment. So a
//      skip that draws is the original game at two passes a second, and nothing else.
//   2. The draw left out. skip against skipdraw: the same passes, frames, tail and end; at both
//      moments the same RedCat (exactly), the same list of objects with the same classes, and
//      every word of every object's state, of RedCat, of what he has and of the camera the same,
//      but for words that are addresses in the game's heaps in both runs (an actor's arrays are
//      made at its first draw, so later allocations land elsewhere). Of the module's own data
//      (the image) only the renderer's working tables differ (SCRATCH), and such addresses.
//   3. Against the scene watched at 60 frames a second, at both moments: RedCat's place (0.01),
//      heading, velocity, controls, what he has, the cutscene's state and line. Every object the
//      level's script names (133 to 737 per world): the same class, and every word on which the
//      three watched runs agree has that value after the skip, or it is of a kind in RATE and the
//      paced run, the original at two passes a second, has the skip's value.
//   4. The sounds DirectSound has playing at the settled moment, under the same rule.
//   5. After the skip nothing of the scene is left: no fairy has anything switched on that she
//      had during the skip (or the tail reached its limit and says so), no timed camera runs.
//   6. Sound: nothing is started on the page while the skip runs; the level's music is left
//      playing there; at the skip's end only loops are started.
// One more case, 'castleend': the scene that ends the Castle (its motion endlevel_mc enabled, as
// picking up the boss's mirror part does). The game leaves the world inside a pass, so its memory
// is compared in the frame in which the game's state is no longer 3 and 90 frames later: skipdraw
// = paced byte for byte, and the same state, points and mirror parts as after the watched scene.
// Also: a skip asked for while no scene runs is refused and changes nothing; a skip that does not
// end within its limit stops, and the scene plays on to the same end.
import fs from 'node:fs';
import path from 'node:path';
import { spawn } from 'node:child_process';
import { fileURLToPath } from 'node:url';
const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const OUT = path.join(ROOT, 'tools/out/skip');
fs.mkdirSync(OUT, { recursive: true });
const args = process.argv.slice(2), only = args.filter((a, k) => !a.startsWith('--') && args[k - 1] !== '--fixes');
const CASES = [
  { name: 'forest', world: 1, what: 'the Forest\'s opening scene' },
  { name: 'castle', world: 2, what: 'the Castle\'s opening scene' },
  { name: 'graveyard', world: 3, what: 'the Graveyard\'s opening scene' },
  { name: 'caves', world: 4, what: 'the Caves\' opening scene' },
  { name: 'tower', world: 5, what: 'the Tower\'s first scene (the guards)', extra: ['--script', 'wait:8;hold:Up,for=4'] },
  { name: 'lesson', world: 1, what: 'Forest, the fairy\'s first lesson (csmc01_tr: RedCat is put at another place)', extra: ['--trigger', 'csmc01_tr'] },
  { name: 'gift', world: 1, what: 'Forest, the fairy\'s gift with all potions (csmc06_tr: a skill)', extra: ['--trigger', 'csmc06_tr', '--potions', '100'] },
  { name: 'cavegift', world: 4, what: 'Caves, the fairy\'s gift with all potions (trigger_cuts04: a skill)', extra: ['--trigger', 'trigger_cuts04', '--potions', '100'] },
  { name: 'castlegift', world: 2, what: 'Castle, the fairy\'s gift with all potions (choice_tr: a skill)', extra: ['--trigger', 'choice_tr', '--potions', '100'] },
  { name: 'castlestart', world: 2, what: 'the Castle\'s opening scene, skipped in its first pass', extra: ['--after', '0'] },
  { name: 'caveslate', world: 4, what: 'the Caves\' opening scene, skipped one second before its bars go', late: 1 },
  { name: 'castleend', world: 2, what: 'Castle, the scene that ends the world (endlevel_mc enabled)', extra: ['--enable', 'endlevel_mc'], leaves: true },
];
// --sweep: every other scene the levels' scripts name a trigger or a motion for, started the same way (the trigger's
// "somebody triggers me", or the motion enabled where the script names no trigger), with 100 potions so that the
// fairy's gifts are given. RedCat stands where the world put him, not where the scene expects him. A trigger that
// starts no scene from there says so and is not counted.
const SWEEP = [
  ...['02', '03', '04', '05', '07', '08', '09', '10'].map((n) => ({ world: 1, tr: `csmc${n}_tr` })), { world: 1, mc: 'csmc11' }, { world: 1, mc: 'csmc12' },
  ...['01', '02', '03', '04', '05'].map((n) => ({ world: 3, tr: `csmc${n}_tr` })), ...['06', '07', '08', '09'].map((n) => ({ world: 3, mc: `csmc${n}` })),
  ...['02', '03', '05', '06'].map((n) => ({ world: 4, tr: `trigger_cuts${n}` })), { world: 4, mc: 'cutscene07' },
  { world: 5, tr: 'trigger_cuts02', more: ['--script', 'wait:8;hold:Up,for=4'] },          // (the Tower's first scene needs the walk)
].map((q) => ({ name: `w${q.world}-${q.tr || q.mc}`, world: q.world, what: `world ${q.world}, the scene of ${q.tr ? 'trigger ' + q.tr : 'motion ' + q.mc + ' (enabled)'}`, extra: [q.tr ? '--trigger' : '--enable', q.tr || q.mc, '--potions', '100', ...(q.more || [])], sweep: true }));
CASES.push(...SWEEP);
{ const all = CASES.splice(0); CASES.push(...all.filter((c) => (only.length ? only.includes(c.name) : !c.sweep || args.includes('--sweep')))); }
const MODES = ['play', 'ctl50', 'ctl40', 'skipdraw', 'paced', 'skip', 'sound'];
const SETTLE = 7;          // seconds after the scene; more than the longest tail a skip may run (SKIP_TAIL_MS, 6 s, and a pass)
const FIXES = args.includes('--fixes') ? ['--fixes', args[args.indexOf('--fixes') + 1]] : [];
// Words that run all the time and can be the same in three runs by chance: every object's own clock (+0xC8 the
// time of its last update in milliseconds, +0xE0 what is left of a frame's time, 0 to 16), and the three colour
// values of the fairy's light (class 0x64E294, +0x118 to +0x120), which go up and down between 20 and 255, and
// the name of the footstep a Tower guard last played (class 0x64ABC0, +0x114: a pointer to "Wachter1.wav" or
// "Wachter2.wav", which changes at every step he takes, several times a second while he walks).
// Added 2026-11-15 from the sweep, each with whole runs of the scene at 60, 50, 40, 30, 25 and 20 frames a second
// that differ among themselves in it (tools/out/skip3-impl/honest.sh): the same three colour values of a
// teleporter's light (CRcTeleporterFX 0x64E040; Graveyard teleport1_fx: six runs, five different triples), and
// an item's turning matrix and place (+0x160 to +0x19C of CRcItemHealth 0x64C758, the coin 0x64C638 and
// 0x64C908; Graveyard endhart_1 +0x17C is 0x3F800000 in some of the six runs and 0x3F800001 in the others).
const span = (lo, hi) => { const r = []; for (let a = lo; a < hi; a += 4) r.push(a); return r; };
const FREE = { all: [0xC8, 0xE0], [0x64E294]: [0x118, 0x11C, 0x120], [0x64E040]: [0x118, 0x11C, 0x120], [0x64ABC0]: [0x114], [0x64C758]: span(0x160, 0x1A0), [0x64C638]: span(0x160, 0x1A0), [0x64C908]: span(0x160, 0x1A0) };
// What the three watched runs agree on and the skip does not have: accepted only for the kinds listed here, each
// with what was run for it (docs/research/cutscenes.md 2, "What half-second passes change"), and only when the
// paced run, the original at two passes a second without the skip, has the skip's value. Class (vtable) ->
// offsets. `near` holds for the first moment only: a skip is still in its tail there, so its state is written
// down at the end of a half-second pass, up to half a second of game time later than the watched runs' (which
// are within a frame of the moment); at the settled moment every run is back at 60 frames a second.
const RATE = {
  // CRcMushroomBrutus (the Forest's csmc10): whether he has taken RedCat as his target by then (+0xF8 the
  // reference, +0x15C, +0x160, +0x170, +0x180). Whole runs of the scene at 60, 50 and 40 frames a second have
  // him with a target seven seconds after it, whole runs at 30, 25 and 20 frames a second without one: the
  // skip's values word for word.
  [0x64B96C]: [0xF8, 0x15C, 0x160, 0x170, 0x180],
  near: {
    // every object: the byte +0xDE, "near enough to be updated", which the original works out again at every
    // 14th update (0x440290 -> 0x421560, counter +0xE0): a count of updates, so half-second passes renew it
    // every 1.75 s instead of every quarter of a second. The same again at the settled moment in every run.
    any: [0xDC],
    // CAdamEffectSound (the Caves' altaar2b, ganggeluid03): +0x10C "waiting for its next random play", and
    // +0x160, a float that keeps moving while the sound object lives. Whole runs of the scene at 60 to 20
    // frames a second have one value at the first moment, the skip and the paced run another, and all have
    // the same again at the settled moment.
    [0x64FCE8]: [0x10C, 0x160],
  },
};
// Short-lived objects made while a run goes (CAdamActorParticle 0x64F8F8: the pieces of the Graveyard's
// exploding chest): their bytes sit in words whose other three bytes nobody sets, so those hold what the
// allocation had there before. Between two runs whose allocations differ only their number and class are compared.
const EPHEMERAL = [0x64F8F8];
// What of the module's own data (the image) may differ between a skip and a skip that draws. The first two
// ranges are the renderer's working tables: every instruction of the module that names an address in them
// (assembly.tsv of the decompilation: 175 functions, and five instructions without one at 0x5DE740 to 0x5DF372)
// is engine code, 0x5B3B90 to 0x5E2000 (Genesis3D). The third is the C runtime's heap words (named only by eleven
// of its functions, 0x60B25D to 0x6173D5): where the next allocation lands. `--ranges` prints what differed.
const SCRATCH = [[0x6CB000, 0x6CF000], [0x720000, 0x747B50], [0x747E88, 0x747EA4]];
let failed = 0;
const check = (ok, what, detail = '') => { console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); if (!ok) failed++; };

const run = (name, world, sk, extra) => new Promise((resolve) => {
  const dir = path.join(OUT, `run-${name}-${sk}`);
  const mode = sk.startsWith('ctl') ? 'play' : sk === 'limit' || sk === 'sound' || sk === 'skipdraw' ? 'skip' : sk;
  const p = spawn('node', ['tools/run-headless.mjs', '--seconds', '900', '--fresh', '--world', String(world), '--out', dir, '--plugin', 'tools/skip-plugin.mjs', '--sk', mode, '--settle', String(SETTLE), ...FIXES, ...extra], { cwd: ROOT });
  let log = '';
  p.stdout.on('data', (d) => { log += d; }); p.stderr.on('data', (d) => { log += d; });
  p.on('close', () => {
    fs.writeFileSync(path.join(OUT, `${name}-${sk}.log`), log);
    if (!args.includes('--keep')) fs.rmSync(dir, { recursive: true, force: true });
    const line = log.split('\n').find((l) => l.startsWith('[sk] '));
    resolve(line ? JSON.parse(line.slice(5)) : { error: (/ERROR[^\n]*/.exec(log) || ['no result'])[0] });
  });
});
// at most `n` runs at a time
const pool = async (jobs, n) => { const out = new Array(jobs.length); let k = 0; await Promise.all(Array.from({ length: n }, async () => { while (k < jobs.length) { const j = k++; out[j] = await jobs[j](); } })); return out; };

const jobs = [];
// A case's runs depend on each other: every run needs the watched scene's length (the moments), 'late' asks for
// the skip c.late seconds before the bars go, and paced needs the steps its skip took.
for (const c of CASES) {
  let played = null, drawn = null;
  const base = c.extra || [];
  const play = () => (played = played || run(c.name, c.world, 'play', base));
  const extra = async () => { const p = await play(); return [...base, ...(c.late ? ['--after', String(Math.max(0, p.bars - c.late))] : []), ...(p.length !== undefined ? ['--length', String(p.length)] : [])]; };
  const stepsFile = path.join(OUT, `${c.name}-steps.json`), bin = (sk) => path.join(OUT, `${c.name}-${sk}`);
  const skipdraw = () => (drawn = drawn || extra().then((x) => run(c.name, c.world, 'skipdraw', [...x, '--draw', '1', '--steps-out', stepsFile, '--bin', bin('skipdraw')])));
  for (const sk of MODES) jobs.push(sk === 'play' ? play : sk === 'skipdraw' ? skipdraw
    : sk === 'paced' ? async () => { await skipdraw(); return run(c.name, c.world, sk, [...await extra(), '--steps-in', stepsFile]); }
      : sk === 'skip' ? async () => run(c.name, c.world, sk, [...await extra(), '--bin', bin('skip')])
        : sk === 'sound' ? async () => run(c.name, c.world, sk, [...await extra(), '--sink', '1'])
          : async () => run(c.name, c.world, sk, [...await extra(), '--step', sk === 'ctl50' ? '20' : '25']));
}
const extraCases = !only.length || only.includes('refuse') || only.includes('limit');
if (extraCases) { jobs.push(() => run('refuse', 1, 'refuse', [])); jobs.push(() => run('refuse', 1, 'play', [])); jobs.push(() => run('limit', 2, 'limit', ['--limit', '3000'])); jobs.push(() => run('limit', 2, 'play', [])); }
const results = await pool(jobs, 8);

const near = (a, b, tol) => a.length === b.length && a.every((x, k) => Math.abs(x - b[k]) <= tol);
const facts = (d) => JSON.stringify([d.state, d.cut, d.control, d.props, d.text]);
const multiset = (list) => JSON.stringify([...list].sort());
// the camera controller's mode (player+0x250, +0x450): 5 the follow camera, 7, 8, 10 a scene's
const mode = (d) => (d.timedCamera ? d.timedCamera[0] : null);
const hex = (v) => v.toString(16);
// the object a name stands for in a run's state: [class, ...words]
const named = (d, name) => { const v = d.named[name]; return v === null || v === undefined ? null : Array.isArray(v) ? v : d.list[v]; };
// an address of the game's heaps in that run
const inHeaps = (d, v) => d.heaps.some(([lo, hi]) => v >= lo && v < hi);
// where two --bin files differ inside the image, as [first, last, words] runs
const imageDiff = (fa, fb) => {
  const ja = JSON.parse(fs.readFileSync(fa + '.json', 'utf8')), jb = JSON.parse(fs.readFileSync(fb + '.json', 'utf8'));
  const A = fs.readFileSync(fa + '.bin'), B = fs.readFileSync(fb + '.bin');
  const out = { low: 0, image: [], moved: 0, heap: 0, pages: 0 };
  const N = ja.ranges.length, heapOf = (j, v) => j.ranges.slice(N - 2).some(([lo, hi]) => v >= lo && v < hi);
  let oa = 0, ob = 0;
  ja.ranges.forEach(([lo, hi], k) => {
    const [lo2, hi2] = jb.ranges[k], n = Math.min(hi, hi2) - lo;
    for (let x = 0; x + 4 <= n; x += 4) {
      const va = A.readUInt32LE(oa + x), vb = B.readUInt32LE(ob + x);
      if (va === vb) continue;
      if (k === 0) out.low++; else if (k === N - 2) out.heap++; else if (k === N - 1) out.pages++;
      else if (heapOf(ja, va) && heapOf(jb, vb)) out.moved++;          // an address of the heaps in both: the thing it points at was allocated elsewhere
      else { const ad = lo + x, r = out.image; if (r.length && ad - r[r.length - 1][1] <= 0x400) { r[r.length - 1][1] = ad; r[r.length - 1][2]++; } else r.push([ad, ad, 1]); }
    }
    oa += hi - lo; ob += hi2 - lo2;
  });
  if (!args.includes('--keep')) for (const f of [fa, fb]) for (const e of ['.bin', '.json']) fs.rmSync(f + e, { force: true });
  return out;
};
let at = 0;
for (const c of CASES) {
  const [play, c50, c40, skipdraw, paced, skip, sound] = results.slice(at, at + MODES.length); at += MODES.length;
  const watched = [play, c50, c40];
  console.log(`\n=== ${c.name}: ${c.what}`);
  const soundOk = () => check(sound.heard && !sound.heard.during.length && sound.heard.atEnd.every((n) => n.endsWith(' loop')) && !sound.heard.atEnd.some((n) => sound.heard.kept.includes(n) && /^level \d/.test(n)), `6. sound: nothing started on the page during the skip; at its end only loops`, sound.heard ? `left playing through the skip: ${sound.heard.kept.join(', ') || 'nothing'}; started at the end: ${sound.heard.atEnd.length} loops; playing once in DirectSound and left silent: ${sound.heard.silentOnce.join(', ') || 'none'}` : 'no record');
  if (c.leaves || (c.sweep && play.left)) {
    // the scene ends the world: no pass comes after it, the memory is taken in the frame the game's state leaves 3
    const bad = [...watched, skipdraw, paced, skip].find((r) => r.error || !r.left);
    if (bad) { check(false, 'all runs left the world', bad.error || 'the game stayed in the world'); continue; }
    check(skip.skip && skip.skip.result === 'done' && skip.skips === 1, 'the skip ran and ended by itself', JSON.stringify(skip.skip));
    check(skipdraw.left.hash === paced.left.hash && skipdraw.left.pass === paced.left.pass && skipdraw.left.hashLater === paced.left.hashLater, '1. a skip that draws = the game played at the skip\'s rate: the same memory when the game leaves the world, and 90 frames later', `hash ${skipdraw.left.hash} and ${paced.left.hash}, later ${skipdraw.left.hashLater} and ${paced.left.hashLater}, pass ${skipdraw.left.pass} and ${paced.left.pass}`);
    check(skip.left.pass === skipdraw.left.pass && skip.left.state === skipdraw.left.state && JSON.stringify(skip.left.props) === JSON.stringify(skipdraw.left.props) && skip.skip.frames === skipdraw.skip.frames, '2. the draw left out: the world is left in the same pass, with the same state and the same things', `pass ${skip.left.pass} and ${skipdraw.left.pass}, ${skip.skip.frames} frames`);
    soundOk();
    check(skip.left.state === play.left.state && JSON.stringify(skip.left.props) === JSON.stringify(play.left.props), '3. against the watched scene: the game\'s state and what RedCat has when the world is left', `state ${skip.left.state}, ${JSON.stringify(skip.left.props)}${JSON.stringify(skip.left.props) === JSON.stringify(play.left.props) ? '' : ' | watched: ' + JSON.stringify(play.left.props)}; watched: left ${play.left.t} s into the run, skipped: ${skip.left.t} s; the skip took ${skip.skip.frames} frames`);
    continue;
  }
  if (c.sweep && play.error && /no scene began/.test(play.error)) { console.log(`     no scene: ${play.error}`); continue; }
  const bad = [...watched, skipdraw, paced, skip].find((r) => r.error || !r.settled || !r.near);
  if (bad) { check(false, 'all runs reached the end of the scene', bad.error || 'no end'); continue; }
  check(skip.skip && skip.skip.result === 'done' && skip.skips === 1, 'the skip ran and ended by itself', JSON.stringify(skip.skip));
  const passesPlay = play.endPass - play.askedPass, passesSkip = skip.skip.frames;
  // 1. the step alone
  check(skipdraw.hash === paced.hash && skipdraw.endPass === paced.endPass, `1. a skip that draws = the game played at the skip's rate (two passes a second): the same memory at the scene's end`, `hash ${skipdraw.hash} and ${paced.hash}, pass ${skipdraw.endPass} and ${paced.endPass}`);
  check(skipdraw.hashAfter === paced.hashAfter && skipdraw.afterPass === paced.afterPass && skipdraw.afterPass >= skipdraw.endPass, `1a. and in the pass after the skip`, `hash ${skipdraw.hashAfter} and ${paced.hashAfter}, pass ${skipdraw.afterPass} and ${paced.afterPass}`);
  check(skipdraw.hashSettled === paced.hashSettled && skipdraw.settledPass === paced.settledPass && skipdraw.settledPass > skipdraw.afterPass, `1b. and ${SETTLE} seconds after the scene`, `hash ${skipdraw.hashSettled} and ${paced.hashSettled}, pass ${skipdraw.settledPass} and ${paced.settledPass}`);
  // 2. the draw left out
  check(skip.endPass === skipdraw.endPass && skip.afterPass === skipdraw.afterPass && skip.settledPass === skipdraw.settledPass && JSON.stringify({ ...skip.skip }) === JSON.stringify({ ...skipdraw.skip }), '2. the draw left out: the same passes, frames, tail and end as the skip that draws', `${skip.skip.frames} frames (${skip.skip.fineFrames} at the fine step), ${Math.round(skip.skip.ms)} ms of game time, tail ${Math.round(skip.skip.tailMs)} ms (${skip.skip.tailWhy})`);
  for (const part of ['near', 'settled']) {
    const a = skipdraw[part], b = skip[part];
    let words = 0, moved = 0, short = 0; const wrong = [];
    const cmp = (label, x, y, base) => { if (x.length !== y.length) { wrong.push(label + ': another size'); return; } for (let k = 0; k < x.length; k++) { words++; if (x[k] === y[k]) continue; if (inHeaps(a, x[k]) && inHeaps(b, y[k])) { moved++; continue; } wrong.push(`${label} +0x${hex(base + k * 4)}: ${hex(x[k])} drawn, ${hex(y[k])} not`); } };
    if (a.list.length !== b.list.length) wrong.push(`${a.list.length} objects drawn, ${b.list.length} not`);
    else a.list.forEach((o, k) => { if (o[0] !== b.list[k][0]) wrong.push(`object ${k}: another class`); else if (EPHEMERAL.includes(o[0])) short++; else cmp(`object ${k} (class ${hex(o[0])})`, o.slice(1), b.list[k].slice(1), 0x74); });
    for (const [w, base] of [['player', 0x74], ['props', 0x10], ['camera', 0x440]]) cmp(w, a.wide[w], b.wide[w], base);
    const same = facts(a) === facts(b) && JSON.stringify([a.pos, a.vel, a.heading, a.camera, a.fairies, a.timedCamera, a.t, a.passes]) === JSON.stringify([b.pos, b.vel, b.heading, b.camera, b.fairies, b.timedCamera, b.t, b.passes]) && multiset(a.sounds) === multiset(b.sounds);
    check(same && !wrong.length, `2${part === 'near' ? 'a' : 'b'}. ${part === 'near' ? 'one second after the scene' : SETTLE + ' seconds after it'}: RedCat, the fairies, the camera, the sounds playing and every object's state as after the skip that draws`, `${a.list.length} objects, ${words} words, ${moved} of them addresses of the heaps that moved${short ? ', ' + short + ' short-lived particles compared by number and class only' : ''}${same ? '' : '; RedCat or the sounds differ'}${wrong.length ? '; WRONG: ' + wrong.slice(0, 6).join('; ') : ''}`);
  }
  { const d = imageDiff(path.join(OUT, `${c.name}-skipdraw`), path.join(OUT, `${c.name}-skip`));
    const outside = d.image.filter(([lo, hi]) => !SCRATCH.some(([a, b]) => lo >= a && hi < b));
    check(!d.low && !outside.length, `2c. the module's own data ${SETTLE} seconds after the scene: only the renderer's working tables differ`, `${d.image.reduce((n, r) => n + r[2], 0)} words of the image in ${d.image.length} places, and ${d.moved} addresses of the heaps that moved${outside.length ? '; OUTSIDE: ' + outside.map((r) => hex(r[0]) + '-' + hex(r[1])).join(' ') : ''}; low memory ${d.low}; not judged: ${d.heap} words of the host's heap, ${d.pages} of the game's pages (allocations that landed elsewhere)`);
    if (args.includes('--ranges')) console.log('     image: ' + d.image.map((r) => `${hex(r[0])}-${hex(r[1])} (${r[2]})`).join(' ')); }
  // 5. nothing left
  { const a = skip.afterState, busy = a.fairies.split(' ').filter((f) => /^.(1|.1|..1)|\/[1-9]/.test(f)).length, cam = a.camera && [7, 8, 10].includes(a.camera[0]) && a.camera[2] > 0 && a.camera[1] <= a.camera[2];
    const cutShort = ['another scene', 'hurt', 'limit'].includes(skip.skip.tailWhy);          // the tail was given up, and says why
    check(cutShort ? skip.skip.tailWhy !== 'another scene' || a.cut !== 0 : a.cut === 0 && a.control === 1 && !busy && !cam, cutShort ? `5. the tail was given up (${skip.skip.tailWhy}): the game goes on at its own speed from there` : '5. after the skip nothing of the scene is left: bars gone, controls back, no fairy busy, no timed camera', `cutscene state ${a.cut}, control ${a.control}, fairies (enabled, runs, centre, ribbon / particles) ${a.fairies || 'none'}, camera mode ${a.camera ? a.camera[0] : '?'}; at the scene's own end: ${skip.endFairies || 'none'}, camera mode ${skip.endCamera ? skip.endCamera[0] + ' time ' + skip.endCamera[1] + ' of ' + skip.endCamera[2] : '?'}`); }
  check(passesSkip < passesPlay * 0.1, 'the skip needs less than a tenth of the passes of the watched scene, and waits for no display', `scene ${play.length.toFixed(1)} s: ${passesPlay} passes watched from where the skip was asked for, ${passesSkip} skipped`);
  soundOk();
  // 3. against the watched scene
  for (const part of ['near', 'settled']) {
    const a = play[part], b = skip[part], p = paced[part];
    // The cutscene's line of text. The original empties it in its draw (0x481670), in state 2, once the line's voice is
    // over, and the draw runs once per pass: when a half-second pass holds both the voice's end and the scene's, the
    // last line stays in memory, at two passes a second without the skip as well. It is never drawn: the draw only
    // draws a line in state 2, after that same test has emptied it.
    const lineLeft = a.text === '' && b.text !== '' && b.text === p.text;
    const same = facts(lineLeft ? { ...a, text: b.text } : a) === facts(b);
    // His place is compared where the three watched runs agree on it. Just after a scene they may not: with the
    // controls back he sinks onto the ground over some frames (Forest csmc02: -100.59, -97.92 and -101.84 at 60,
    // 50 and 40 frames a second one second after the scene, -105.82 in all of them at the settled moment).
    const placed = watched.every((d) => near(d[part].pos, a.pos, 0.01));
    // The camera's mode at the first moment: a skip is still in its tail there and is written down at the end of a
    // half-second pass, so a scene camera on its own timer (mode 7, 8 or 10) may still have its last part of a
    // second to run where the watched scene is back at the follow camera (Forest csmc02). Accepted there when the
    // paced run has it too; at the settled moment the modes must be the same.
    const cameraLate = part === 'near' && mode(a) === 5 && [7, 8, 10].includes(mode(b)) && mode(p) === mode(b);
    check(same && (!placed || near(a.pos, b.pos, 0.01)) && Math.abs(a.heading - b.heading) <= 0.001 && near(a.vel, b.vel, 0.01) && (mode(a) === mode(b) || cameraLate) && mode(b) !== null && (placed || part === 'near'),
      `3. ${part === 'near' ? 'one second after the scene' : SETTLE + ' seconds after it'}, against the watched scene: RedCat, what he has, the controls, the cutscene, the camera`, `at ${b.pos.join(', ')}, heading ${b.heading}, skills ${b.props.skill}, potions ${b.props.potions}, health ${b.props.health}, control ${b.control}, camera mode ${mode(b)}${mode(a) === mode(b) ? '' : ' (watched: ' + mode(a) + (cameraLate ? '; the scene camera\'s own timer has not run out yet, as at two passes a second' : '') + ')'}${lineLeft ? '; the scene\'s last line is still in memory, as at two passes a second (not drawn)' : ''}${same ? '' : ' | watched: ' + facts(a) + ' skipped: ' + facts(b)}${placed ? (near(a.pos, b.pos, 0.01) ? '' : ' | watched at ' + a.pos.join(', ')) : ' | his place is not compared here: the watched runs have him at heights ' + watched.map((d) => d[part].pos[1]).join(', ')}`);
    let objects = 0, words = 0, stable = 0, moved = 0; const wrong = [], rate = [];
    for (const name of Object.keys(a.named)) {
      const o = [...watched.map((d) => named(d[part], name)), named(b, name)], q = named(p, name);
      const N = watched.length;
      if (o.some((x) => !x)) { if (o.some((x) => !!x)) wrong.push(name + ' exists in some runs only'); continue; }
      objects++;
      if (o[N][0] !== o[0][0]) { wrong.push(`${name}: another class`); continue; }
      const vt = o[0][0];
      for (let k = 1; k < o[0].length; k++) {
        const off = 0x74 + (k - 1) * 4;
        words++;
        if (FREE.all.includes(off) || (FREE[vt] || []).includes(off)) continue;
        if (o.slice(1, N).some((x) => x[k] !== o[0][k])) continue;
        stable++;
        if (o[N][k] === o[0][k]) continue;
        // an address of the heaps in every run: the thing it points at was allocated at another moment
        if (watched.every((d, j) => inHeaps(d[part], o[j][k])) && inHeaps(b, o[N][k])) { moved++; continue; }
        const known = (RATE[vt] || []).includes(off) || (part === 'near' && ((RATE.near[vt] || []).includes(off) || RATE.near.any.includes(off)));
        const asPaced = q && (q[k] === o[N][k] || (inHeaps(p, q[k]) && inHeaps(b, o[N][k])));
        if (known && asPaced) rate.push(`${name} +0x${hex(off)}`);
        else wrong.push(`${name} (class ${hex(vt)}) +0x${hex(off)}: ${hex(o[0][k])} watched, ${hex(o[N][k])} skipped${q ? ', ' + hex(q[k]) + ' at two passes a second' : ''}`);
      }
    }
    check(!wrong.length && objects > 100, `3. ${part === 'near' ? 'one second after the scene' : SETTLE + ' seconds after it'}: the script's objects`, `${objects} objects, ${stable} of ${words} words the same in the three watched runs; after the skip ${stable - rate.length - wrong.length - moved} of those the same${moved ? ', ' + moved + ' addresses of the heaps' : ''}${rate.length ? ', ' + rate.length + ' as the original has them at two passes a second (' + rate.slice(0, 8).join(', ') + (rate.length > 8 ? ', …' : '') + ')' : ''}${wrong.length ? '; WRONG: ' + wrong.slice(0, 6).join('; ') : ''}`);
  }
  const s = [...watched, skip].map((d) => multiset(d.settled.sounds));
  const judged = s.slice(1, watched.length).every((x) => x === s[0]);
  const asPaced = multiset(paced.settled.sounds) === s[watched.length];
  check(!judged || s[watched.length] === s[0] || asPaced, `4. the sounds DirectSound has playing ${SETTLE} seconds after the scene`, judged ? (s[watched.length] === s[0] ? `${play.settled.sounds.length} buffers, the same` : `${skip.settled.sounds.length} buffers, as the original has them at two passes a second; against the watched scene: ${JSON.stringify([...skip.settled.sounds.filter((x) => !play.settled.sounds.includes(x)).map((x) => '+' + x), ...play.settled.sounds.filter((x) => !skip.settled.sounds.includes(x)).map((x) => '-' + x)])}`) : `${play.settled.sounds.length} buffers; the watched runs differ among themselves (silent random sounds), not compared`);
}
if (extraCases) {
  const [refuse, plain, limit, castle] = results.slice(at, at + 4);
  console.log('\n=== requests that are not carried out');
  if ([refuse, plain, limit, castle].some((r) => r.error || !r.settled)) check(false, 'the four runs ended', JSON.stringify([refuse, plain, limit, castle].map((r) => r.error || 'ok')));
  else {
    check(refuse.skip && refuse.skip.result === 'refused' && refuse.skips === 0 && refuse.settled.passes === plain.settled.passes && JSON.stringify(refuse.settled.list) === JSON.stringify(plain.settled.list) && refuse.settled.t === plain.settled.t, 'a skip asked for while no scene runs is refused, and the game is what it is without the request', JSON.stringify(refuse.skip));
    check(limit.skip && limit.skip.result === 'failed' && Math.abs(limit.skip.ms - 3000) <= 500 && facts(limit.settled) === facts(castle.settled) && near(limit.settled.pos, castle.settled.pos, 0.01), 'a skip that reaches its limit (3 s here, 5 minutes in the game) stops; the scene plays on to the same end', JSON.stringify(limit.skip) + ` scene ${limit.length} s`);
  }
}
console.log(failed ? `\n${failed} check(s) FAILED` : '\nall checks passed');
process.exit(failed ? 1 : 0);
