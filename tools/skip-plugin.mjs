// Plugin for tools/run-headless.mjs (--plugin), used by tools/skip-check.mjs: one run per mode
// (--sk mode) around the first scene of a world, or around scene number --scene N (counted from 1).
//
//   play     the scene is played to its end as always (--step ms: at another frame rate)
//   skip     --after S seconds into the scene (default 2, the time the key is held) the skip of
//            source/host/skip.js is asked for
//            --draw 1         host.skip.draw: the skip runs RenderScene as an ordinary pass does
//            --skip-step ms   host.skip.step: that step for every pass of the skip
//            --steps-out file every pass's step, for the paired 'paced' run
//   refuse   as play, and half a second after the scene a skip is asked for (there is nothing to skip)
//   paced    no skip: from the pass the skip would start in, the runner's clock goes on by the
//            steps of --steps-in file (the steps the paired skip took, half a second each unless
//            RedCat was being moved), one per frame, and then at the run's own rate again: the
//            game played at the skip's rate over the same passes, everything drawn, without the
//            skip module doing anything
//   --after S        seconds into the scene at which the skip is asked for (0: its very first pass)
//   --length L       the scene's length in seconds as the run at 60 frames a second measured it:
//                    the game times at which the state is written down are then the same in every
//                    run of a case, `near` at L + 1 s and `settled` at L + --settle s after the
//                    scene began (without it: this run's own length)
//   --enable name    as --trigger, but the named object is enabled (SetEnabled 0x502350), as a script's
//                    Enable does: a motion that no trigger starts (the scene that ends the Castle)
//   --sink 1         a run of its own (with a sink, mute() reads every buffer's position, and each read
//                    moves the runner's clock by a thousandth of a millisecond): what would be started
//                    on the page's mixer during the skip and in the call that ends it
//   --bin file       the memory the hash covers, written at the `settled` moment (file.bin, file.json)
//
// Each run prints one line "[sk] {json}": when the scene began and ended, a hash of the game's
// memory at the pass in which the cutscene state came back to 0, at the pass after the skip (or
// after the paced frames; `hashAfter`) and at the settled moment (`hashSettled`), and what the game
// is at the two moments (`near`, `settled`): RedCat, what he has, the camera, every object of the
// sublevel's list (class and the words of its own state; those the level's script names by name),
// and the sounds DirectSound has playing. Reads only, apart from the game's own lookup by name
// (0x4F4C30) and what --trigger does (below).
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const IR = process.env.RC_SCRIPTS || input('RC_ORIGINAL_DECOMPILED/recovered-scripts/ir');
const APP = 0x6B915C;
const LEVELS = ['lvl00a', 'lvl01a', 'lvl02a', 'lvl03a', 'lvl04a'];
// the part of a game object that is compared word by word: from the enabled byte to the end of the smallest class that has state of its own
const WINDOW = [0x74, 0x1A0];
// wider parts, by name: RedCat (to the cutscene object's end), what he has, and the camera controller's mode and timers
const WIDE = { player: [0x74, 0x310], props: [0x10, 0x70], camera: [0x440, 0x520] };

export default function ({ m, host, opt, stop, time, setStep, memHash }) {
  const { u8, u32, i32 } = m, f32 = new Float32Array(m.u8.buffer);
  const mode = opt('sk', 'play'), after = Number(opt('after', 2)), settle = Number(opt('settle', 7)), scene = Number(opt('scene', 1));
  const baseStep = Number(opt('step', 1000 / 60));
  const given = opt('length', null) === null ? null : Number(opt('length'));
  const names = JSON.parse(fs.readFileSync(path.join(IR, LEVELS[Number(opt('world', 1)) - 1] + '.json'), 'utf8')).objects.map((o) => o.name);
  const chain = () => {
    const app = u32[APP >> 2], g = app ? u32[(app + 0x3A4) >> 2] : 0, sub = g ? u32[(g + 0x60) >> 2] : 0, pl = sub ? u32[(sub + 0x360) >> 2] : 0;
    if (!pl || u32[pl >> 2] !== 0x64C430) return null;
    let props = u32[(pl + 0x1F0) >> 2];
    if (props && u32[props >> 2] !== 0x64C5FC) props = 0;
    return { g, sub, pl, props, state: i32[(g + 0x98) >> 2], cut: i32[(pl + 0x300) >> 2] };
  };
  const r3 = (x) => Math.round(x * 1000) / 1000;
  const wordsOf = (o, [lo, hi]) => { const w = []; for (let a = lo; a < hi; a += 4) w.push(u32[(o + a) >> 2]); return w; };
  const dump = (esp, k) => {
    const input = u32[(k.pl + 0xF8) >> 2], cam = host.look && host.look.sample ? host.look.sample() : null;
    // the sublevel's list (sub+0x34, node { object, next }), in its order, and which of them the script names
    const list = [], at = new Map();
    for (let q = u32[(k.sub + 0x34) >> 2], n = 0; q && n < 20000; q = u32[(q + 4) >> 2], n++) { const o = u32[q >> 2]; if (!o) continue; at.set(o, list.length); list.push([u32[o >> 2], ...wordsOf(o, WINDOW)]); }
    const named = {};
    for (const name of names) { const o = host.fixes.find(esp, name); named[name] = o ? (at.has(o) ? at.get(o) : [u32[o >> 2], ...wordsOf(o, WINDOW)]) : null; }
    const c = u32[(k.pl + 0x250) >> 2];
    return {
      t: r3(time() / 1000), passes: host.mainLoop.passes, state: k.state, cut: k.cut, control: u8[k.pl + 0x104],
      pos: [0, 1, 2].map((j) => r3(f32[(k.pl + 0x198 + j * 4) >> 2])), vel: [0, 1, 2].map((j) => r3(f32[(k.pl + 0x180 + j * 4) >> 2])),
      heading: input ? r3(f32[(input + 0x18) >> 2]) : null,
      props: k.props ? { health: f32[(k.props + 0x3C) >> 2], maxHealth: f32[(k.props + 0x40) >> 2], lives: i32[(k.props + 0x44) >> 2], score: i32[(k.props + 0x48) >> 2], totalScore: i32[(k.props + 0x54) >> 2], potions: i32[(k.props + 0x58) >> 2], mirror: i32[(k.props + 0x60) >> 2], skill: u32[(k.props + 0x68) >> 2], god: u8[k.props + 0x14] } : null,
      camera: cam ? { mode: cam.mode } : null,
      text: (() => { const cs = k.pl + 0x258, p = u32[(cs + 0x1C) >> 2], n = u32[(cs + 0x20) >> 2]; let s = ''; for (let j = 0; p && j < n && j < 200; j++) s += String.fromCharCode(u8[p + j]); return s; })(),
      sounds: [...host.dsound.buffers].filter((b) => !b.primary && (host.dsound.position(b), b.playing)).map((b) => `${(b.file || '').split('\\').pop().toLowerCase()}${b.loop ? ' loop' : ''} ${b.volume}`).sort(),
      list, named,
      wide: { player: wordsOf(k.pl, WIDE.player), props: k.props ? wordsOf(k.props, WIDE.props) : [], camera: c && u32[c >> 2] === 0x64D5F4 ? wordsOf(c, WIDE.camera) : [] },
      fairies: fairyState(k.sub), timedCamera: cameraState(k.pl),
      // where a word that is an address of the game's heaps points (the check does not compare such words between two runs whose allocations differ)
      heaps: [[m.layout.HEAP_BASE, host.heap.highWater], [host.heap.pageBump, m.layout.MEM_PAGES * 65536]], heapInUse: host.heap.bytesInUse,
    };
  };
  // reads for the report: what every fairy of the world has switched on, and the camera's mode and timer (source/host/skip.js)
  const fairyState = (sub) => { const list = []; for (let q = u32[(sub + 0x34) >> 2], n = 0; q && n < 20000; q = u32[(q + 4) >> 2], n++) { const o = u32[q >> 2]; if (!o || u32[o >> 2] !== 0x64E294) continue; let parts = 0; for (let j = 0; j < 55; j++) if (u8[o + 0x548 + j * 0x144 + 0x6C]) parts++; list.push(`${u8[o + 0x7C]}${u8[o + 0x4BE8]}${u8[o + 0x38C + 0x6C]}${u8[o + 0x4B54]}/${parts}`); } return list.join(' '); };
  const cameraState = (pl) => { const c = u32[(pl + 0x250) >> 2]; return c && u32[c >> 2] === 0x64D5F4 ? [i32[(c + 0x450) >> 2], i32[(c + 0x508) >> 2], i32[(c + 0x50C) >> 2]] : null; };
  const out = { mode, world: Number(opt('world', 1)), scene, after };
  // --trigger name [--potions N]: one second after the first scene, RedCat is given N potions (the game's own
  // add function 0x439E60) and "enters" that trigger (the trigger's own "somebody triggers me" 0x4D4310, as
  // tools/fixes-plugin.mjs does): the scene that starts is the one measured.
  const enable = opt('enable', ''), trigger = opt('trigger', '') || enable, potions = Number(opt('potions', 0));
  const steps = opt('steps-in', null) ? JSON.parse(fs.readFileSync(opt('steps-in'), 'utf8')) : [];
  let fired = false, firstEnd = null, fastCount = 0, wasActive = false, afterDone = false;
  let asked2 = false, seen = 0, inScene = false, began = null, asked = false, armed = false, fast = false, ended = null, startAt = null, skipEnd = null;
  if (opt('draw', '') === '1') host.skip.draw = true;
  if (opt('skip-step', null)) host.skip.step = Number(opt('skip-step'));
  if (mode === 'skip') host.skip.steps = [];
  // what the page's mixer would be asked to start: while the skip runs (must be nothing) and in the call that ends it
  const heard = { during: [], atEnd: [], silentOnce: [], kept: [] };
  const fileOf = (b) => (b.file || '').split('\\').pop().toLowerCase() + (b.loop ? ' loop' : '');
  const byId = (id) => { const b = [...host.dsound.buffers].find((q) => q.id === id); return b ? fileOf(b) : '#' + id; };
  let ending = false;
  const sinkRun = opt('sink', '') === '1';
  if (sinkRun && !host.audio) host.audio = { data() {}, alias() {}, stop() {}, volume() {}, pan() {}, frequency() {}, free() {}, play: (id) => { if (ending) heard.atEnd.push(byId(id)); else if (host.skip.active) heard.during.push(byId(id)); } };
  if (sinkRun) { const mute = host.dsound.mute; host.dsound.mute = (on, ...more) => {
    if (!on) { ending = true; heard.silentOnce = [...host.dsound.buffers].filter((b) => !b.primary && (host.dsound.position(b), b.playing) && !b.loop).map(fileOf).sort(); }
    try { mute(on, ...more); } finally { ending = false; }
    if (on) heard.kept = [...host.dsound.buffers].filter((b) => b.kept).map(fileOf).sort();
  }; }
  host.skip.onEnd = (result, info) => {
    skipEnd = { result, ...info, t: r3(time() / 1000), pass: host.mainLoop.passes };
    if (sinkRun) out.heard = heard;
    if (opt('steps-out', null)) fs.writeFileSync(opt('steps-out'), JSON.stringify(host.skip.steps));
  };
  // every presented frame, also those of a loop inside a pass (the results screen after a scene that ends a world):
  // 'paced' sets its steps here, and the moment the game leaves the world is taken here (no pass comes then)
  const skipFrame = host.skip.frame;
  let leftFrames = -1;
  host.skip.frame = () => {
    const step = skipFrame();
    if (mode === 'paced' && fast) { if (fastCount >= steps.length) { fast = false; setStep(baseStep); } else { setStep(steps[fastCount]); if (++fastCount === steps.length) out.to = host.mainLoop.passes; } }
    const k = chain();
    if (asked && !out.left && (!k || k.state !== 3)) {
      const app = u32[APP >> 2], g = app ? u32[(app + 0x3A4) >> 2] : 0;
      out.left = { state: g ? i32[(g + 0x98) >> 2] : 0, pass: host.mainLoop.passes, t: r3((time() - startAt) / 1000), hash: memHash(), props: k && k.props ? { health: f32[(k.props + 0x3C) >> 2], lives: i32[(k.props + 0x44) >> 2], score: i32[(k.props + 0x48) >> 2], totalScore: i32[(k.props + 0x54) >> 2], potions: i32[(k.props + 0x58) >> 2], mirror: i32[(k.props + 0x60) >> 2], skill: u32[(k.props + 0x68) >> 2] } : null };
      leftFrames = 0;
    } else if (leftFrames >= 0 && ++leftFrames === 90) {
      // a second and a half of the screen that follows, and the run is over
      out.left.hashLater = memHash(); out.skip = skipEnd; out.skips = host.skip.count;
      console.log('[sk] ' + JSON.stringify(out));
      stop();
    }
    return step;
  };
  if (opt('limit', null)) host.skip.limit = Number(opt('limit'));
  const writeBin = (file) => {
    const L = m.layout, R = [[L.POP_TABLE, m.lowBump], ...m.meta.modules.map((q) => [q.base, q.base + q.size]), [L.HEAP_BASE, host.heap.highWater], [host.heap.pageBump, L.MEM_PAGES * 65536]];
    fs.writeFileSync(file + '.json', JSON.stringify({ ranges: R, pass: host.mainLoop.passes, t: time() }));
    const fd = fs.openSync(file + '.bin', 'w'); for (const [a, b] of R) fs.writeSync(fd, u8.subarray(a, b)); fs.closeSync(fd);
  };
  host.mainLoop.beforePass.push((esp) => {
    const k = chain();
    if (!k || k.state !== 3) return;
    const now = time();
    if (startAt === null) startAt = now;
    // paced: the step changes in the pass after the one that asked (as the skip does), and back after its frames (above)
    if (mode === 'paced' && armed && !fast) { fast = true; armed = false; fastCount = 0; if (steps.length) setStep(steps[0]); out.from = host.mainLoop.passes; }
    if (mode === 'paced' && fast && fastCount >= steps.length) { fast = false; setStep(baseStep); }
    // the pass after the skip (after the paced frames): the first one the player sees again
    if (host.skip.active) wasActive = true;
    if (!afterDone && asked && (mode === 'paced' ? out.to !== undefined : mode === 'skip' && wasActive && !host.skip.active)) { afterDone = true; out.hashAfter = memHash(); out.afterPass = host.mainLoop.passes; out.afterState = { t: r3((now - startAt) / 1000), cut: k.cut, control: u8[k.pl + 0x104], fairies: fairyState(k.sub), camera: cameraState(k.pl) }; }
    if (trigger && !fired) {
      if (firstEnd === null) { if (seen >= 1 && k.cut === 0 && u8[k.pl + 0x104]) firstEnd = now; else if (k.cut !== 0) seen = Math.max(seen, 1); }
      else if (now - firstEnd >= 1000) {
        fired = true;
        if (potions && k.props) m.call(0x439E60, [potions], k.props);
        const t = host.fixes.find(esp, trigger);
        out.trigger = { name: trigger, found: !!t, potions, skillBefore: k.props ? u32[(k.props + 0x68) >> 2] : null };
        if (t) host.fixes.scratch(esp, () => (enable ? m.call(0x502350, [1], t) : m.call(0x4D4310, [k.pl], t)));
      }
      if (!fired) return;
      out.firedAt = now;
    }
    // the trigger or the motion started no scene (it wants something the run does not have): said, and the run is over
    if (trigger && began === null && out.firedAt !== undefined && now - out.firedAt > 20000) { out.error = 'no scene began within 20 s of ' + trigger; console.log('[sk] ' + JSON.stringify(out)); stop(); return; }
    if (!inScene && k.cut !== 0 && ended === null) {
      seen++;
      if (seen === (trigger ? 2 : scene)) { inScene = true; began = now; out.began = r3((now - startAt) / 1000); out.beganPass = host.mainLoop.passes; }
    }
    if (inScene && !asked && now - began >= after * 1000 && (k.cut === 1 || k.cut === 2)) {
      asked = true; out.askedPass = host.mainLoop.passes;
      if (mode === 'skip') host.skip.request();
      else if (mode === 'paced') armed = true;
    }
    if (inScene && k.cut === 3 && out.bars === undefined) out.bars = r3((now - began) / 1000);
    if (inScene && k.cut === 0) {
      inScene = false; ended = now;
      out.ended = r3((now - startAt) / 1000); out.length = r3((now - began) / 1000); out.endPass = host.mainLoop.passes;
      out.hash = memHash();
      out.endFairies = fairyState(k.sub); out.endCamera = cameraState(k.pl);
    }
    // refuse: a skip asked for while no scene runs must change nothing
    if (mode === 'refuse' && ended !== null && !asked2 && now - ended >= 500) { asked2 = true; host.skip.request(); }
    // the two moments, at the same game time in every run of a case
    const L = given !== null ? given : ended !== null ? out.length : null;
    if (began !== null && L !== null && !out.near && now - began >= (L + 1) * 1000) out.near = dump(esp, k);
    if (began !== null && L !== null && ended !== null && !inScene && now - began >= (L + settle) * 1000) {
      out.settled = dump(esp, k); out.hashSettled = memHash(); out.settledPass = host.mainLoop.passes;
      if (opt('bin', null)) writeBin(opt('bin'));
      out.skip = skipEnd; out.skips = host.skip.count;
      console.log('[sk] ' + JSON.stringify(out));
      stop();
    }
  });
}
