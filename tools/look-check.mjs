#!/usr/bin/env node
// Checks source/host/look.js (direct look and first-person view) in the Node runner, with numbers.
// Nothing is drawn there: positions and angles are read from game memory (the chains are in
// docs/research/camera-and-look.md), and "RedCat is not drawn" is shown twice: by the Genesis3D world's
// actor flags and by the polygons that reach the render driver.
//
//   node tools/look-check.mjs [--only turn,pitch,wall,first,pitchfirst,driver,modes,cutscene,state,untouched] [--verbose] [--keep]
//   (--verbose: the samples of the cutscene run and RedCat's texture handles; --keep: keep the two save states, 47 MB each)
//
// The script starts tools/run-headless.mjs several times with itself as --plugin; the plugin half
// (the default export below) calls host.look, presses keys and samples between two passes.
//   turn       world 1: turn by several angles, then walk forward; many small turns while walking
//   pitch      world 1: looking up and down in third person: steps and limits, the camera against the same run without
//              look pitch, steering at three pitches, a fixed camera and the lock-on camera
//   wall       world 1: turning and looking up and down with a wall behind RedCat; the JavaScript port's BSP collider
//              (../RCSPOOK_NEW, read only) says independently whether the camera went through anything
//   first      world 1: first person on, walk, turn, keys 1/2/3, off
//   pitchfirst world 1: looking up and down in first person, steering at three pitches
//   driver     world 1: which polygons reach the driver with RedCat shown and hidden
//   modes      world 1: a fixed camera, a follow camera with a trigger offset and the lock-on camera while first person is on
//   cutscene   world 2: first person and a look pitch asked for before the opening cutscene, against a run with no call
//   state      world 1: a save state made in first person, continued in a second process
//   untouched  the README's save-state check: without a call the module changes nothing
// Exit code 1 when a check fails.
import fs from 'node:fs';
import path from 'node:path';
import { spawnSync } from 'node:child_process';
import { fileURLToPath, pathToFileURL } from 'node:url';

const SELF = fileURLToPath(import.meta.url);
const ROOT = path.resolve(path.dirname(SELF), '..');
const OUT = path.join(ROOT, 'tools/out/look-check');
const DEG = Math.PI / 180;
const VK = { Up: 38, Down: 40, Left: 37, Right: 39, Space: 32, 1: 0x31, 2: 0x32, 3: 0x33 };

// =====================================================================================================
// plugin half: runs inside tools/run-headless.mjs
// =====================================================================================================
export default function plugin({ m, host, opt, time, stop }) {
  const { u8, u32, i32, f32 } = m;
  const which = opt('look-case', '');
  const outFile = opt('look-out', null);
  const f = (a) => f32[a >> 2];
  const v3 = (a) => [f(a), f(a + 4), f(a + 8)];
  const wrap = (x) => { while (x <= -Math.PI) x += 2 * Math.PI; while (x > Math.PI) x -= 2 * Math.PI; return x; };
  const dist = (a, b) => Math.hypot(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
  const checks = [], data = {};
  const check = (name, ok, text) => { checks.push({ name, ok: !!ok, text }); };
  const finish = () => { if (outFile) fs.writeFileSync(outFile, JSON.stringify({ case: which, checks, data })); stop(); };

  // what the checks read: app 0x6B915C -> game +0x3A4 -> sublevel +0x60 -> player +0x360
  const read = () => {
    const app = u32[0x6B915C >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0, sub = game ? u32[(game + 0x60) >> 2] : 0, player = sub ? u32[(sub + 0x360) >> 2] : 0;
    if (!player || u32[player >> 2] !== 0x64C430) return null;
    const input = u32[(player + 0xF8) >> 2], dop = u32[(player + 0x250) >> 2], actor = u32[(player + 0x254) >> 2], engine = u32[(app + 0x3A0) >> 2], ecam = u32[(engine + 0xE0) >> 2];
    const r = {
      state: i32[(game + 0x98) >> 2], player, dop, actor, ecam,
      pos: v3(player + 0x198), minY: f(player + 0x1D8), maxY: f(player + 0x1E4), active: u8[player + 0x104], cutscene: i32[(player + 0x258 + 0xA8) >> 2],
      heading: wrap(f(input + 0x18) + Math.PI / 2),                 // the game's measure (0x4D6960); RedCat looks along (cos, 0, -sin)
      mode: i32[(dop + 0x450) >> 2], cut: u8[dop + 0x454], camYaw: f(dop + 0x378), camPitch: f(dop + 0x374), cam: v3(dop + 0x3B8), hold: u8[dop + 0x432], preset: i32[(dop + 0x528) >> 2], moving: u8[dop + 0x431], hit: u8[dop + 0x521],
      engineYaw: f(ecam + 0x38), enginePos: v3(ecam + 0x210), enginePitch: f(ecam + 0x34),
      orbit: f(dop + 0x420),                                       // look pitch - 0.16, kept by look.js in a field the original only clears
      own: u32[(actor + 0x14C) >> 2], scriptHidden: u8[actor + 0x2A8],
      table: Array.from({ length: 27 }, (_, q) => u32[(0x6B7118 + q * 4) >> 2]),
    };
    // "the player controls RedCat with the follow camera", the condition look.js uses for both features
    r.health = f(u32[(player + 0x1F0) >> 2] + 0x3C);
    r.control = r.state === 3 && r.active && r.cutscene === 0 && r.health > 0 && (r.mode === 5 || r.mode === 6);
    r.H = r.maxY - r.minY; r.feetY = r.pos[1] + r.minY;
    // RedCat's flags in the world's actor list (world = sublevel +0x5C; count +0x3B8, list +0x3BC, 12 bytes each)
    const world = u32[(u32[(actor + 0x18) >> 2] + 0x5C) >> 2], n = i32[(world + 0x3B8) >> 2], list = u32[(world + 0x3BC) >> 2], ge = u32[(actor + 0x114) >> 2];
    r.flags = -1;
    for (let q = 0; q < n; q++) if (u32[(list + q * 12) >> 2] === ge) { r.flags = u32[(list + q * 12 + 4) >> 2]; r.entry = list + q * 12; break; }
    r.drawn = (r.flags & 5) !== 0;                                 // the test of the actor loop 0x5B8A0B
    return r;
  };
  // the original's table, as the static initialiser 0x457CC0 builds it from the read-only data at 0x64D3A8
  const originalTable = () => { const t = []; for (let p = 0; p < 3; p++) for (let q = 0; q < 3; q++) for (let r = 0; r < 3; r++) t.push(u32[(0x64D3A8 + p * 0x24 + r * 12 + q * 4) >> 2]); return t; };
  const sameWords = (a, b) => a.length === b.length && a.every((x, k) => x === b[k]);
  // where the original puts the standing follow camera: feet + (height, distance behind the yaw) from the read-only rows
  const followPlace = (r) => {
    const row = 0x64D3A8 + r.preset * 0x24 + 2 * 12, h = f(row) * r.H, d = f(row + 4) * r.H;
    return { pos: [r.pos[0] + Math.cos(r.camYaw + Math.PI) * d, r.feetY + h, r.pos[2] - Math.sin(r.camYaw + Math.PI) * d], pitch: f(row + 8) * DEG };
  };
  const dirOf = (a, b) => Math.atan2(b[2] - a[2], b[0] - a[0]);   // the measure of host.look.state().heading
  const deg = (x) => (x / DEG).toFixed(2);
  // a point swung by the angle a about RedCat's chest (feet + 0.75 box heights) in the vertical plane through the
  // camera's "behind" direction: what the look pitch is to do to the original's camera place (r: a sample of read())
  const swing = (P, r, a) => {
    const bx = -Math.cos(r.camYaw), bz = Math.sin(r.camYaw), pivotY = r.feetY + 0.75 * r.H;
    const along = (P[0] - r.pos[0]) * bx + (P[2] - r.pos[2]) * bz, up = P[1] - pivotY, c = Math.cos(a), sn = Math.sin(a);
    const move = along * c - up * sn - along;
    return [P[0] + bx * move, pivotY + up * c + along * sn, P[2] + bz * move];
  };
  const lookPitch = () => host.look.state().pitch;

  // keys go in through the platform's input, like the runner's own script
  const pending = [];
  const prevPoll = host.input.poll;
  host.input.poll = () => { const a = prevPoll() || []; while (pending.length) a.push(pending.shift()); return a.length ? a : null; };
  const held = new Set();
  const key = (name, down) => { if (down === held.has(name)) return; if (down) held.add(name); else held.delete(name); pending.push(down ? { type: 'keydown', vk: VK[name], ch: 0 } : { type: 'keyup', vk: VK[name] }); };
  const releaseAll = () => { for (const k of [...held]) key(k, false); };

  // polygons per texture handle that reach the driver in one pass
  let polys = new Map();
  for (const slot of ['RenderMiscTexturePoly', 'RenderWorldPoly', 'RenderGouraudPoly']) {
    const orig = host.gdriver.impl[slot];
    host.gdriver.impl[slot] = (esp, a, b) => { const th = slot === 'RenderGouraudPoly' ? 0 : u32[(esp + 4) >> 2]; const id = slot[6] + ':' + th.toString(16); polys.set(id, (polys.get(id) || 0) + 1); return orig(esp, a, b); };
  }
  const memHash = () => {
    const fnv = (lo, hi, h) => { for (let k = lo; k < hi; k++) { h ^= u8[k]; h = Math.imul(h, 16777619); } return h >>> 0; };
    let h = 2166136261;
    for (const mod of m.meta.modules) h = fnv(mod.base, mod.base + mod.size, h);
    h = fnv(m.layout.HEAP_BASE, host.heap.highWater, h);
    return fnv(host.heap.pageBump, m.layout.MEM_PAGES * 65536, h).toString(16).padStart(8, '0');      // the pages hold the game's own heap (the player, the camera)
  };

  // The case is a generator: every yield lets one pass of the main loop run. `early` is called first in each
  // gap, before look.js applies anything: it sees the game as the last pass drew it.
  let esp = 0, script = null, lastPolys = new Map(), early = null;
  const passes = function* (n) { for (let k = 0; k < n; k++) yield; };
  const untilControl = function* () { for (;;) { const r = read(); if (r && r.control && r.mode === 5) return r; yield; } };
  const restore = function* (s) { releaseAll(); yield* passes(2); host.mainLoop.pendingRestore = s; yield; };
  if (which === 'cutscene') { host.look.setFirstPerson(true); host.look.turn(0, 0.5); }      // before the game exists
  if (which === 'cutscenepitch') host.look.turn(0, 0.5);
  const scratch = which === 'modes' || which === 'pitch' ? m.lowAlloc(24) : 0;        // two vectors in game memory for the fixed camera call
  // `seen`: the game as the last pass left it, read first in each gap, before look.js applies anything. (In a gap in
  // which look.js applies input, the fields it writes are already those for the next pass.)
  let seen = null;
  host.mainLoop.beforePass.unshift(() => { seen = read(); if (early) early(); });
  host.mainLoop.beforePass.push((e) => {
    esp = e; lastPolys = polys; polys = new Map();
    if (!script) script = cases[which] ? cases[which]() : null;
    if (!script) throw new Error('look-check: unknown case ' + which);
    if (script.next().done) finish();
  });
  // walks forward for n passes and returns the direction of the last two thirds, and the distance per pass
  // (the game's own step; its speed is 156.8 units/s, player +0x180)
  const walk = function* (n, each) {
    key('Up', true);
    let a = null, b = null, from = Math.floor(n / 3);
    for (let k = 0; k < n; k++) { yield; const r = read(); if (k === from) a = r.pos; b = r.pos; if (each) each(r, k); }
    key('Up', false);
    return { dir: dirOf(a, b), step: Math.hypot(b[0] - a[0], b[2] - a[2]) / (n - 1 - from) };
  };
  // World 1 starts in a corner of the courtyard, facing a direction (-90 degrees) at which the original's yaw
  // smoothing has a special case (0x458900). The checks use a place with room on all sides instead: 20 degrees
  // left, 60 passes forward, then facing the open side. Returns a save state of RedCat standing there.
  const openPlace = function* () {
    yield* untilControl();
    yield* passes(40);
    host.look.turn(-20 * DEG);
    yield* walk(60);
    host.look.turn(160 * DEG);
    yield* passes(150);
    const r = read();
    data.place = { pos: r.pos.map((x) => +x.toFixed(1)), heading: +(-r.heading / DEG).toFixed(2) };
    return host.snap.save(esp);
  };

  const cases = {
    // ---------------------------------------------------------------------------------------------------
    *turn() {
      // a turn asked for during the opening cutscene does nothing
      let r;
      for (;;) { r = read(); if (r && r.cutscene === 2) break; yield; }
      const h0 = r.heading;
      host.look.turn(1);
      yield* passes(3);
      r = read();
      check('no turn during a cutscene', r.heading === h0, `opening cutscene (camera mode ${r.mode}): turn(1 rad) changed the heading by ${deg(wrap(r.heading - h0))} degrees`);
      const S0 = yield* openPlace();
      const base = yield* walk(30);
      data.base = { dir: base.dir / DEG, step: base.step };
      check('walking forward', base.step > 3.5 && Math.abs(wrap(base.dir + read().heading)) < 0.2 * DEG, `at ${data.place.pos} facing ${data.place.heading} degrees: without a turn RedCat walks in direction ${deg(base.dir)} degrees, ${base.step.toFixed(3)} units per pass`);
      for (const angle of [90, -90, 45, -30, 135, 10, -170]) {
        yield* restore(S0);
        const before = read();
        host.look.turn(angle * DEG);
        yield;                                   // look.js applies it at the start of this gap, before this line continues
        const at = read();
        const dHead = wrap(before.heading - at.heading), dCam = wrap(before.camYaw - at.camYaw), dEngine = wrap(before.engineYaw - at.engineYaw);
        yield;                                   // one pass of original code with the new angles
        const after = read();
        const kept = Math.max(Math.abs(wrap(after.heading - at.heading)), Math.abs(wrap(after.camYaw - at.camYaw)));
        const place = followPlace(after);
        const w = yield* walk(30);
        const got = wrap(w.dir - base.dir) / DEG;
        const err = Math.abs(wrap((got - angle) * DEG)) / DEG;
        check(`turn ${angle}`, Math.abs(dHead / DEG - angle) < 0.01 && Math.abs(dCam / DEG - angle) < 0.01 && Math.abs(dEngine / DEG - angle) < 0.01 && kept < 1e-4 && dist(after.cam, place.pos) < 0.05 && err < 0.5 && w.step > 0.98 * base.step,
          `turn(${angle}): heading ${deg(dHead)}, camera yaw ${deg(dCam)}, engine camera ${deg(dEngine)} degrees to the right before any game code ran; one pass later they moved ${(kept / DEG).toFixed(4)} more and the camera is ${dist(after.cam, place.pos).toFixed(3)} units from the original's place behind him; walking forward then goes ${got.toFixed(2)} degrees to the right of the walk without a turn (${w.step.toFixed(3)} units per pass)`);
      }
      // many small turns while walking, as a mouse gives them (to the left: there is more room)
      yield* restore(S0);
      let worst = 0;
      key('Up', true);
      yield* passes(6);
      const start = read();
      let prev = start, last = null;
      // a turn asked for here is applied in the next gap, before the sample after the yield is taken
      for (let k = 0; k < 40; k++) { host.look.turn(-1.5 * DEG); yield; const r2 = read(); worst = Math.max(worst, Math.abs(wrap(r2.camYaw - r2.heading))); last = { from: prev, to: r2 }; prev = r2; }
      key('Up', false);
      const turned = wrap(start.heading - prev.heading) / DEG, along = wrap(dirOf(last.from.pos, last.to.pos) + last.from.heading) / DEG, stepLen = Math.hypot(last.to.pos[0] - last.from.pos[0], last.to.pos[2] - last.from.pos[2]);
      check('40 x -1.5 degrees while walking', Math.abs(turned + 60) < 0.05 && worst < 0.05 * DEG && Math.abs(along) < 0.2 && stepLen > 0.9 * base.step,
        `Up held, turn(-1.5) before each of 40 passes: heading turned ${turned.toFixed(2)} degrees, camera yaw never more than ${(worst / DEG).toFixed(4)} degrees from the heading, the last step (${stepLen.toFixed(3)} units) goes ${along.toFixed(3)} degrees beside the heading he had in that pass`);
      // standing: the turn stays
      yield* restore(S0);
      const s0 = read();
      host.look.turn(90 * DEG);
      yield* passes(90);
      const s1 = read();
      check('a turn while standing stays', Math.abs(wrap(s0.heading - s1.heading) / DEG - 90) < 0.01 && Math.abs(wrap(s1.camYaw - s1.heading)) < 1e-4 && dist(s1.cam, followPlace(s1).pos) < 0.05,
        `90 passes after turn(90) without input: heading turned ${deg(wrap(s0.heading - s1.heading))} degrees, camera yaw ${deg(wrap(s1.camYaw - s1.heading))} from it, camera ${dist(s1.cam, followPlace(s1).pos).toFixed(3)} units from the original's place behind him`);
      const st = host.look.state();
      check('state().heading', Math.abs(wrap(st.heading + s1.heading)) < 1e-6 && st.world === true && st.firstPerson === false, `state() = ${JSON.stringify({ ...st, heading: +st.heading.toFixed(4) })}; the game's own heading value is ${s1.heading.toFixed(4)}`);
    },

    // ---------------------------------------------------------------------------------------------------
    *pitch() {
      const S0 = yield* openPlace();
      const orig = originalTable();
      // steps and limits
      const p0 = lookPitch();
      host.look.turn(0, 0.3);
      yield;
      const p1 = lookPitch(), changed = !sameWords(read().table, orig);
      for (let k = 0; k < 5; k++) { host.look.turn(0, 0.3); yield; }
      const top = lookPitch();
      host.look.turn(0, -5);
      yield;
      const bottom = lookPitch();
      host.look.turn(0, 0.2); host.look.turn(0, 0.3);      // two calls before one pass add up
      yield;
      const added = lookPitch();
      check('steps and limits', p0 === 0.16 && Math.abs(p1 - 0.46) < 1e-6 && changed && Math.abs(top - 1.2) < 1e-6 && Math.abs(bottom + 1.2) < 1e-6 && Math.abs(added + 0.7) < 1e-6,
        `look pitch at the start of the world ${p0}; turn(0, 0.3) -> ${p1.toFixed(4)} (the table is no longer the original's: ${changed}); five more -> ${top.toFixed(4)}; turn(0, -5) -> ${bottom.toFixed(4)}; turn(0, 0.2) and turn(0, 0.3) in one gap -> ${added.toFixed(4)}`);

      // The same keys and turns from the same save state, without and with look pitch. A sample is the game as a pass
      // left it; `used` is the orbit (look pitch - 0.16) that was in force in that pass.
      const keep = (r) => ({ pos: r.pos, feetY: r.feetY, H: r.H, camYaw: r.camYaw, camPitch: r.camPitch, cam: r.cam, enginePos: r.enginePos, enginePitch: r.enginePitch, heading: r.heading, hold: r.hold, mode: r.mode });
      const record = function* (n, program, tilt) {
        yield* restore(S0);
        const out = [];
        for (let k = 0; k < n; k++) {
          for (const [at, what, a, b] of program) if (at === k) { if (what === 'key') key(a, b); else host.look.turn(a * DEG, 0); }
          if (tilt && tilt[k] !== undefined) host.look.turn(0, tilt[k]);
          yield;
          out.push({ ...keep(seen), used: seen.orbit });
        }
        releaseAll();
        return out;
      };
      // standing, walking, a turn while walking, standing, a turn, walking backwards, standing
      const program = [[8, 'key', 'Up', true], [20, 'yaw', 35], [48, 'key', 'Up', false], [60, 'yaw', -50], [85, 'key', 'Down', true], [110, 'key', 'Down', false]];
      const ref = yield* record(130, program, null);
      const against = (run) => {
        let place = 0, pitch = 0, yaw = 0, redcat = 0, first = null, held = 0;
        run.forEach((t, k) => {
          const r = ref[k], want = swing(r.enginePos, r, t.used);
          place = Math.max(place, dist(t.enginePos, want));
          pitch = Math.max(pitch, Math.abs(t.enginePitch - (r.enginePitch - t.used)));
          yaw = Math.max(yaw, Math.abs(wrap(t.camYaw - r.camYaw))); redcat = Math.max(redcat, dist(t.pos, r.pos)); held += t.hold + r.hold;
          if (first === null && t.used !== 0) first = { pass: k, place: dist(t.enginePos, want), moved: dist(t.enginePos, r.enginePos), pitch: (t.enginePitch - r.enginePitch) / DEG };
        });
        return { place, pitch: pitch / DEG, yaw: yaw / DEG, redcat, first, held };
      };
      const tell = (name, q, x) => check(name, x.place < 0.05 && x.pitch < 0.01 && x.yaw < 0.001 && x.redcat < 0.01 && x.held === 0 && x.first && x.first.place < 0.05,
        `${q}: in the first pass drawn with it (pass ${x.first.pass}) the camera is ${x.first.moved.toFixed(1)} units from where the run without look pitch has it and ${x.first.place.toFixed(4)} from that place swung about his chest, its pitch ${x.first.pitch.toFixed(2)} degrees from the other's; over all 130 passes (standing, walking, turn(35) while walking, standing, turn(-50), walking backwards): at most ${x.place.toFixed(4)} units from the swung place, pitch at most ${x.pitch.toFixed(4)} degrees from "the other run's pitch minus orbit", yaw ${x.yaw.toFixed(5)} degrees, RedCat himself ${x.redcat.toFixed(4)} units from the other run`);
      tell('looking down by 0.5', 'turn(0, 0.5) before the first pass', against(yield* record(130, program, { 0: 0.5 })));
      tell('looking up by 0.3', 'turn(0, -0.3) before the first pass', against(yield* record(130, program, { 0: -0.3 })));
      tell('look pitch changing on the way', 'turn(0, x) at passes 5, 15, 16, 17 (walking), 30, 62 (standing), 90 (walking backwards)', against(yield* record(130, program, { 5: 0.2, 15: 0.1, 16: 0.1, 17: 0.1, 30: -0.6, 62: 0.3, 90: 0.25 })));
      data.reference = ref.filter((x, k) => k % 10 === 0).map((x) => [x.cam.map((v) => +v.toFixed(2)), +(x.camPitch / DEG).toFixed(2)]);

      // the limits: the view pitch is the row's pitch minus orbit (not below -85 degrees), and the camera stays above the floor
      const samples = [];
      for (const target of [1.2, -1.2]) {
        const run = yield* record(130, program, { 0: target - 0.16 });
        let low = 1e9, pitch = 0, high = -1e9, lowest = 1e9, highest = -1e9;
        run.forEach((t, k) => {
          low = Math.min(low, t.enginePos[1] - t.feetY); high = Math.max(high, t.enginePos[1] - t.feetY);
          lowest = Math.min(lowest, t.enginePitch); highest = Math.max(highest, t.enginePitch);
          // where a row's pitch minus orbit would be below -85 degrees look.js stops at -85, and the smoothing to and from that row differs
          if (k > 0 && k < 85) pitch = Math.max(pitch, Math.abs(t.enginePitch - (ref[k].enginePitch - t.used)));
          samples.push({ prev: k ? run[k - 1].enginePos : t.enginePos, cam: t.enginePos, pos: t.pos });
        });
        const last = run[run.length - 1];
        check(`look pitch ${target}`, pitch < 0.05 * DEG && low > 7.5 && lowest > -85.01 * DEG && Math.abs(wrap(last.camYaw - ref[129].camYaw)) < 1e-5 && dist(last.pos, ref[129].pos) < 0.01,
          `look pitch ${target} (orbit ${(target - 0.16).toFixed(2)}), the same 130 passes: camera pitch between ${deg(lowest)} and ${deg(highest)} degrees, in the 85 passes before he walks backwards at most ${(pitch / DEG).toFixed(4)} from "the other run's pitch minus orbit" (the row for walking backwards minus orbit can be below -85; look.js stops there); the camera is between ${low.toFixed(1)} and ${high.toFixed(1)} units above the floor RedCat stands on; RedCat ends ${dist(last.pos, ref[129].pos).toFixed(4)} units from where he ends without look pitch`);
      }
      data.samples = samples;

      // steering: forward is where the camera looks, level, whatever the pitch
      yield* restore(S0);
      const base = yield* walk(30);
      const rows = [];
      for (const target of [-1.2, 0, 1.2]) {
        yield* restore(S0);
        host.look.turn(0, target - 0.16);
        yield* passes(3);
        const r = read();
        const w = yield* walk(30);
        const after = read();
        rows.push({ target, view: r.enginePitch / DEG, dir: wrap(w.dir - base.dir) / DEG, heading: wrap(after.heading - r.heading) / DEG, step: w.step, own: wrap(w.dir + r.heading) / DEG });
      }
      // the original's turn key with the camera looking up
      yield* restore(S0);
      host.look.turn(0, -1.36);
      yield* passes(3);
      const k0 = read();
      key('Right', true); yield* passes(20); key('Right', false); yield* passes(2);
      const k1 = read();
      check('steering at three pitches', rows.every((x) => Math.abs(x.dir) < 0.05 && Math.abs(x.heading) < 0.05 && x.step > 0.99 * base.step) && rows[0].view > 50 && rows[2].view < -60 && wrap(k0.heading - k1.heading) > 0.2,
        rows.map((x) => `look pitch ${x.target} (camera pitch ${x.view.toFixed(1)} degrees): 30 passes of MoveForward go ${x.dir.toFixed(3)} degrees beside the walk at the default pitch and ${x.own.toFixed(3)} beside his heading, which changes by ${x.heading.toFixed(3)}; ${x.step.toFixed(3)} units per pass`).join('; ') +
        `; TurnRight for 20 passes at look pitch -1.2 turns him ${deg(wrap(k0.heading - k1.heading))} degrees to the right`);

      // a fixed camera and the lock-on camera with a look pitch set: the original's, and look input is dropped
      const fb = new Float32Array(1), ub = new Uint32Array(fb.buffer), bits = (x) => { fb[0] = x; return ub[0]; };
      const other = function* (tilt) {
        yield* restore(S0);
        if (tilt) host.look.turn(0, tilt);
        yield* passes(4);
        let r = read();
        const out = { before: r.enginePos, pitch0: lookPitch() };
        const place = [r.pos[0] + 60, r.pos[1] + 120, r.pos[2] + 60];
        f32.set(place, scratch >> 2); f32.set(r.pos, (scratch + 12) >> 2);
        m.call(0x4590B0, [7, scratch, scratch + 12, bits(300), 0], r.dop);      // fixed camera for 300 ms, as a CameraTrigger sets it
        out.fixed = [];
        for (let k = 0; k < 6; k++) { host.look.turn(0.2, 0.2); yield; r = read(); out.fixed.push({ mode: r.mode, cam: r.enginePos, pitch: r.enginePitch, yaw: r.engineYaw, table: sameWords(r.table, orig), heading: r.heading }); }
        out.pitch1 = lookPitch(); out.place = place;
        let n = 0;
        while (read().mode === 7 && n++ < 100) yield;
        yield* passes(3);
        r = read();
        out.back = { cam: r.enginePos, table: sameWords(r.table, orig), want: swing(followPlace(r).pos, r, r.orbit) };
        m.call(0x459270, [9, r.player, 0], r.dop);                               // lock-on, as CRCPlayer 0x434900 starts it (the target is the player object)
        out.lock = [];
        for (let k = 0; k < 6; k++) { host.look.turn(0.2, 0.2); yield; r = read(); out.lock.push({ mode: r.mode, cam: r.enginePos, pitch: r.enginePitch, yaw: r.engineYaw, table: sameWords(r.table, orig), heading: r.heading }); }
        out.pitch2 = lookPitch();
        return out;
      };
      // a CameraTrigger offset (mode 6) in third person: the offset's place is swung like a row's, and the trigger's
      // numbers come back with the default pitch
      yield* restore(S0);
      host.look.turn(0, 0.5);
      yield* passes(3);
      let t6 = read();
      m.call(0x459010, [6, bits(2.5), bits(2), bits(-30)], t6.dop);
      yield* passes(3);
      t6 = read();
      const want6 = swing([t6.pos[0] + Math.cos(t6.camYaw + Math.PI) * 2 * t6.H, t6.feetY + 2.5 * t6.H, t6.pos[2] - Math.sin(t6.camYaw + Math.PI) * 2 * t6.H], t6, t6.orbit);
      const six = { place: dist(t6.cam, want6), pitch: t6.camPitch - (-30 * DEG - t6.orbit), fields: v3(t6.dop + 0x458) };
      host.look.turn(0, -0.5);
      yield* passes(2);
      t6 = read();
      const back6 = v3(t6.dop + 0x458), plain6 = [t6.pos[0] + Math.cos(t6.camYaw + Math.PI) * 2 * t6.H, t6.feetY + 2.5 * t6.H, t6.pos[2] - Math.sin(t6.camYaw + Math.PI) * 2 * t6.H];
      check('a trigger offset with a look pitch', six.place < 0.05 && Math.abs(six.pitch) < 1e-4 && back6.join() === '2.5,2,-30' && dist(t6.cam, plain6) < 0.05 && lookPitch() === 0.16 && sameWords(t6.table, orig),
        `look pitch 0.66, then mode 6 with the offset (2.5, 2, -30) set as a CameraTrigger does: the camera is ${six.place.toFixed(3)} units from that offset's place swung about his chest, its pitch ${(six.pitch / DEG).toFixed(4)} degrees from -30 minus orbit, the offset fields hold (${six.fields.map((x) => +x.toFixed(3)).join(', ')}); turn(0, -0.5): look pitch ${lookPitch()}, the fields are (${back6.join(', ')}) again, the table is the original's and the camera ${dist(t6.cam, plain6).toFixed(3)} units from the offset's own place`);

      const plain = yield* other(0), tilted = yield* other(0.5);
      let worst = 0, angles = 0;
      for (const part of ['fixed', 'lock']) tilted[part].forEach((t, k) => { const r = plain[part][k]; worst = Math.max(worst, dist(t.cam, r.cam)); angles = Math.max(angles, Math.abs(t.pitch - r.pitch), Math.abs(wrap(t.yaw - r.yaw))); });
      const dropped = tilted.pitch0 === tilted.pitch1 && tilted.pitch1 === tilted.pitch2 && tilted.fixed.every((x) => x.heading === tilted.fixed[0].heading) && tilted.lock.every((x) => x.heading === tilted.lock[0].heading);
      check('other cameras with a look pitch', worst < 1e-3 && angles < 1e-5 && dropped && tilted.fixed.every((x) => x.mode === 7 && x.table) && tilted.lock.every((x) => x.mode === 9 && x.table) && dist(tilted.before, plain.before) > 20 && dist(tilted.back.cam, tilted.back.want) < 0.05 && !tilted.back.table,
        `look pitch ${tilted.pitch0.toFixed(2)} (camera ${dist(tilted.before, plain.before).toFixed(1)} units from the default one), then the game's fixed camera and its lock-on camera, 6 passes each, compared with the same calls at the default pitch: camera position at most ${worst.toFixed(5)} units apart, angles ${(angles / DEG).toFixed(6)} degrees, table original in every gap; turn(0.2, 0.2) before each pass leaves heading and look pitch (${tilted.pitch2.toFixed(2)}) as they were; back in mode 5 the camera is ${dist(tilted.back.cam, tilted.back.want).toFixed(3)} units from the original's place swung by the look pitch`);
    },

    // ---------------------------------------------------------------------------------------------------
    // Turning and looking up and down with the west wall of the courtyard behind RedCat. He can walk up to a low
    // ledge at about x = -1470 (z = 2386); the wall itself is 69 units behind it, so the follow camera's place
    // (98 to 150 units behind him) is in or beyond the wall when he faces away from it. Three runs of the same
    // place: the original alone with its TurnRight key, look input, and look input with the camera's last place
    // moved by hand the way an earlier version of look.js did it. The samples are judged by the driver.
    *wall() {
      const S0 = yield* openPlace();
      const toWall = function* () {
        yield* restore(S0);
        const r = read();
        host.look.turn(wrap(-153.3 * DEG + r.heading), 0);
        key('Up', true);
        yield* passes(75);
        return read();
      };
      const sampler = () => {
        const out = [];
        let prev = read().enginePos;
        return { out, take() {
          const q = seen;
          // where the original's numbers alone put the camera (row of the preset in force, swung by the look pitch)
          const row = 0x64D3A8 + q.preset * 0x24 + (q.moving ? 0 : 24);
          const ideal = swing([q.pos[0] + Math.cos(q.camYaw + Math.PI) * f(row + 4) * q.H, q.feetY + f(row) * q.H, q.pos[2] - Math.sin(q.camYaw + Math.PI) * f(row + 4) * q.H], q, q.orbit);
          out.push({ prev, cam: q.enginePos, pos: q.pos, ideal, hit: q.hit, hold: q.hold });
          prev = q.enginePos;
        } };
      };
      // 1. the original alone: its own turn key at the wall
      let at = yield* toWall();
      data.atWall = at.pos.map((x) => +x.toFixed(1));
      key('Up', false);
      yield* passes(30);
      let s1 = sampler();
      key('Right', true);
      for (let k = 0; k < 200; k++) { yield; s1.take(); }
      key('Right', false);
      data.keys = s1.out;
      // 2. and 3. look input
      const withLook = function* (byHand) {
        yield* toWall();
        const s = sampler();
        const step = function* (n, plan) {
          for (let k = 0; k < n; k++) {
            if (plan[k]) host.look.turn(plan[k][0] * DEG, plan[k][1]);
            yield;
            if (byHand) {
              // what look.js put into the last player position goes into the last camera position instead
              const q = read(), d = q.dop;
              for (let c = 0; c < 3; c++) { const move = q.pos[c] - f(d + 0x424 + c * 4); f32[(d + 0x410 + c * 4) >> 2] += move; f32[(d + 0x424 + c * 4) >> 2] = q.pos[c]; }
            }
            s.take();
          }
        };
        // away from the wall with the camera wanting to be behind him; looking up swings it further back
        yield* step(26, { 0: [180, 0], 3: [0, -0.9], 9: [35, 0], 14: [0, 1.6], 18: [-60, -0.4] });
        key('Up', false);
        yield* passes(4);
        // back to the wall, then standing with his back to it
        const r = read();
        host.look.turn(wrap(-153.3 * DEG + r.heading), 0);
        key('Up', true);
        yield* step(50, {});
        key('Up', false);
        yield* step(130, { 2: [180, 0], 25: [0, -1.2], 45: [0, 2.4], 65: [60, -0.8], 85: [-120, 0], 105: [60, 0.5] });
        return s.out;
      };
      data.look = yield* withLook(false);
      data.byHand = yield* withLook(true);
      const hits = (list) => list.filter((q) => q.hit).length;
      const west = (list) => Math.min(...list.map((q) => q.cam[0]));
      check('at the wall', dist(at.pos, [-1470, at.pos[1], 2386]) < 25 && hits(data.keys) > 0 && hits(data.look) > 0,
        `RedCat at the west wall (${data.atWall}). The original alone, TurnRight held for 200 passes: its hull collision moved the camera in ${hits(data.keys)} passes, westmost camera x ${west(data.keys).toFixed(1)}. With look input (${data.look.length} passes: turn(180) and walking away, looking up and down, walking back, standing with his back to the wall and turning): in ${hits(data.look)} passes, westmost ${west(data.look).toFixed(1)}. With the last camera place moved by hand: in ${hits(data.byHand)} passes, westmost ${west(data.byHand).toFixed(1)}`);
    },

    // ---------------------------------------------------------------------------------------------------
    *first() {
      const S0 = yield* openPlace();
      const orig = originalTable();
      const r0 = read();
      check('before', sameWords(r0.table, orig) && r0.drawn && r0.flags === r0.own && dist(r0.cam, followPlace(r0).pos) < 0.05, `third person at ${data.place.pos}: camera ${dist(r0.cam, r0.pos).toFixed(1)} units from the eye point, RedCat's world flags ${r0.flags} (drawn), table as in the read-only data`);
      host.look.setFirstPerson(true);
      yield;
      const r1 = read();
      check('on: applied between two passes', !sameWords(r1.table, orig) && !r1.drawn && r1.own === r0.own && r1.cut === 1 && host.look.state().firstPerson === true,
        `after setFirstPerson(true), before game code ran: every table row is (height ${f(0x6B7118).toFixed(4)}, distance ${f(0x6B7124)}, pitch ${f(0x6B7130).toFixed(3)}), world flags ${r1.flags} (not drawn; the game's own copy stays ${r1.own}), cut flag ${r1.cut}`);
      yield;
      const r2 = read();
      check('on: camera at the eye point', dist(r2.cam, r2.pos) < 0.01 && dist(r2.enginePos, r2.pos) < 0.01 && Math.abs(r2.camPitch + 0.16) < 1e-4 && Math.abs(wrap(r2.camYaw - r2.heading)) < 1e-4,
        `one pass later: follow camera ${dist(r2.cam, r2.pos).toFixed(4)} units from the eye point (the player position: ${(-r2.minY).toFixed(2)} above his feet, box height ${r2.H.toFixed(2)}), engine camera ${dist(r2.enginePos, r2.pos).toFixed(4)}, pitch ${deg(r2.camPitch)} (the look pitch 0.16 rad, downwards), yaw ${deg(wrap(r2.camYaw - r2.heading))} from the heading`);
      // walking, turning, into a wall, the original's own turning, and back
      let worst = 0, drawn = 0, holds = 0, n = 0, path = 0, prev = r2.pos, blocked = 0, highest = 0;
      const each = (r) => { n++; worst = Math.max(worst, dist(r.cam, r.pos), dist(r.enginePos, r.pos)); if (r.drawn) drawn++; holds += r.hold; path += Math.hypot(r.pos[0] - prev[0], r.pos[2] - prev[2]); highest = Math.max(highest, r.pos[1] - r2.pos[1]); prev = r.pos; };
      const w1 = yield* walk(24, each);
      host.look.turn(-60 * DEG);
      const w2 = yield* walk(24, each);
      key('Up', true);
      for (let k = 0; k < 110; k++) {
        if (k < 30) host.look.turn(-3 * DEG);
        if (k === 34) key('Space', true); if (k === 38) key('Space', false);            // a jump on the way
        yield;
        const r = read();
        if (k > 60 && Math.hypot(r.pos[0] - prev[0], r.pos[2] - prev[2]) < 0.8 * w1.step) blocked++;      // slowed down: sliding along a wall
        each(r);
      }
      key('Up', false);
      for (let k = 0; k < 40; k++) { if (k === 5) key('Left', true); if (k === 30) key('Left', false); yield; each(read()); }
      const far = read();
      const home = data.place.pos;
      key('Up', true);
      for (let k = 0; k < 300; k++) {
        const r = read();
        if (Math.hypot(home[0] - r.pos[0], home[2] - r.pos[2]) < 10) break;
        host.look.turn(Math.max(-0.15, Math.min(0.15, wrap(Math.atan2(home[2] - r.pos[2], home[0] - r.pos[0]) + r.heading))));
        yield; each(read());
      }
      key('Up', false);
      yield* passes(3);
      const back0 = read();
      check('walking and turning in first person', worst < 0.01 && drawn === 0 && w1.step > 3.5 && Math.abs(wrap(w2.dir - w1.dir) / DEG + 60) < 0.5 && holds === 0 && blocked > 5 && highest > 20 && dist(back0.pos, home) < 12,
        `${n} passes: forward, turn(-60) (he then walks ${deg(wrap(w2.dir - w1.dir))} degrees to the right of before), 30 x turn(-3) while walking, a jump (${highest.toFixed(0)} units up), on into a wall (${blocked} passes sliding along it, at ${far.pos.map((x) => x.toFixed(0))}), the Left key, and back with turn() towards the first place; ${path.toFixed(0)} units walked: the follow camera and the engine camera were never more than ${worst.toFixed(4)} units from the eye point, RedCat's flags said "drawn" in ${drawn} gaps, the line-of-sight search held a place in ${holds}`);
      const presets = [];
      for (const k of ['2', '3', '1']) { key(k, true); yield* passes(4); key(k, false); yield* passes(4); const r = read(); presets.push(r.preset); each(r); }
      check('keys 1, 2, 3', presets.join() === '1,2,0' && worst < 0.01, `keys 2, 3, 1 set the original's preset number (CRcDop +0x528) to ${presets.join(', ')}; camera still within ${worst.toFixed(4)} units of the eye point`);
      yield* passes(120);
      const idle = read(); each(idle);
      host.look.turn(45 * DEG);
      yield* passes(30);
      const idle2 = read(); each(idle2);
      check('standing in first person', worst < 0.01 && idle.hold === 0 && idle2.hold === 0 && !idle2.drawn && Math.abs(wrap(idle.heading - idle2.heading) / DEG - 45) < 0.01 && Math.abs(wrap(idle2.camYaw - idle2.heading)) < 1e-4,
        `120 passes standing: camera ${dist(idle.cam, idle.pos).toFixed(4)} units from the eye point, the line-of-sight search holds no place; turn(45) and 30 passes: heading turned ${deg(wrap(idle.heading - idle2.heading))} degrees, camera yaw ${deg(wrap(idle2.camYaw - idle2.heading))} from it, camera ${dist(idle2.cam, idle2.pos).toFixed(4)} units from the eye point`);
      host.look.setFirstPerson(false);
      yield;
      const r3 = read();
      check('off: applied between two passes', sameWords(r3.table, orig) && r3.drawn && r3.flags === r3.own && host.look.state().firstPerson === false, `after setFirstPerson(false): the table is equal to the read-only data again (27 words), world flags ${r3.flags} (drawn)`);
      yield;
      const r4 = read(), place = followPlace(r4);
      check('off: the original follow position', dist(r4.cam, place.pos) < 0.05 && Math.abs(r4.camPitch - place.pitch) < 1e-3, `one pass later the camera is ${dist(r4.cam, place.pos).toFixed(3)} units from the original's standing place behind him (${dist(r4.cam, r4.pos).toFixed(1)} from the eye point), pitch ${deg(r4.camPitch)}`);
      // without moving: on and off gives exactly the camera of a game that was never touched
      yield* restore(S0);
      yield* passes(30);
      const ref = read();
      yield* restore(S0);
      host.look.setFirstPerson(true);
      yield* passes(20);
      host.look.setFirstPerson(false);
      yield* passes(10);
      const back = read();
      check('on and off while standing', dist(back.cam, ref.cam) < 1e-3 && back.camYaw === ref.camYaw && Math.abs(back.camPitch - ref.camPitch) < 1e-5 && sameWords(back.table, orig) && dist(back.pos, ref.pos) === 0,
        `first person for 20 passes, then off: camera ${dist(back.cam, ref.cam).toFixed(5)} units from where an untouched game has it, yaw equal, pitch ${((back.camPitch - ref.camPitch) / DEG).toFixed(5)} degrees from it`);
    },

    // ---------------------------------------------------------------------------------------------------
    *pitchfirst() {
      const S0 = yield* openPlace();
      const base = yield* walk(30);
      const rows = [];
      let worst = 0;
      for (const target of [0.16, -1.2, 0, 1.2]) {
        yield* restore(S0);
        host.look.setFirstPerson(true);
        yield* passes(3);
        const r0 = read();
        if (target !== 0.16) host.look.turn(0, target - 0.16);
        yield;                                   // look.js applies it here
        yield;                                   // one pass with it
        const r = read();
        const w = yield* walk(30, (q) => { worst = Math.max(worst, dist(q.enginePos, q.pos), dist(q.cam, q.pos)); });
        const after = read();
        rows.push({ target, was: r0.enginePitch, view: r.enginePitch, atEye: dist(r.enginePos, r.pos), dir: wrap(w.dir - base.dir) / DEG, heading: wrap(after.heading - r.heading) / DEG, step: w.step, hidden: !after.drawn, pitch: lookPitch() });
      }
      check('first person: the view pitch is the look pitch', rows.every((x) => Math.abs(x.view + x.target) < 1e-4 && x.atEye < 0.01 && x.hidden && Math.abs(x.pitch - x.target) < 1e-6) && worst < 0.01,
        rows.map((x) => `look pitch ${x.target}: one pass after the input the engine camera's pitch is ${(x.view / DEG).toFixed(2)} degrees (${(-x.target / DEG).toFixed(2)} wanted; ${(x.was / DEG).toFixed(2)} before)`).join('; ') + `; camera at the eye point throughout (at most ${worst.toFixed(4)} units), RedCat not drawn`);
      check('first person: steering at three pitches', rows.every((x) => Math.abs(x.dir) < 0.05 && Math.abs(x.heading) < 0.05 && x.step > 0.99 * base.step),
        rows.map((x) => `look pitch ${x.target}: 30 passes of MoveForward go ${x.dir.toFixed(3)} degrees beside the third-person walk at the default pitch, heading changes by ${x.heading.toFixed(3)}, ${x.step.toFixed(3)} units per pass`).join('; '));
      // looking up and down while walking and turning, then off: the third-person camera has the same look pitch
      yield* restore(S0);
      host.look.setFirstPerson(true);
      yield* passes(3);
      let far = 0, off = 0, n = 0;
      key('Up', true);
      for (let k = 0; k < 60; k++) {
        host.look.turn(k < 30 ? 2 * DEG : -2 * DEG, k < 20 ? -0.05 : 0.04);
        yield;
        const r = read();
        far = Math.max(far, dist(r.enginePos, r.pos));
        if (k > 0) off = Math.max(off, Math.abs(r.enginePitch + (r.orbit + 0.16 - (k < 20 ? -0.05 : 0.04))));      // the pass before this gap used the pitch before this gap's input
        n++;
      }
      key('Up', false);
      yield* passes(2);
      const fp = read(), pitch = lookPitch();
      host.look.setFirstPerson(false);
      yield* passes(2);
      const tp = read();
      const place = swing(followPlace(tp).pos, tp, tp.orbit);
      check('first person: looking around while walking, then off', far < 0.01 && off < 1e-4 && Math.abs(fp.enginePitch + pitch) < 1e-4 && dist(tp.cam, place) < 0.05 && Math.abs(lookPitch() - pitch) < 1e-9 && tp.drawn,
        `60 passes with turn(+-2 degrees, -0.05 or +0.04) before each: camera at most ${far.toFixed(4)} units from the eye point, its pitch at most ${(off / DEG).toFixed(4)} degrees from minus the look pitch of that pass; look pitch then ${pitch.toFixed(3)}; first person off: RedCat drawn, the camera ${dist(tp.cam, place).toFixed(3)} units from the original's standing place swung by the same look pitch`);
    },

    // ---------------------------------------------------------------------------------------------------
    *driver() {
      const S0 = yield* openPlace();
      const total = (mp) => { let t = 0; for (const v of mp.values()) t += v; return t; };
      const frame = function* (prepare) { yield* restore(S0); yield* passes(2); if (prepare) prepare(); yield; return lastPolys; };
      // third person, the same pass twice: as it is, and with the RENDER_NORMAL bit of RedCat's world entry cleared by hand
      const shown = yield* frame(null);
      const hidden = yield* frame(() => { const r = read(); u32[(r.entry + 4) >> 2] = r.flags & ~5; });
      const his = [], other = [];
      for (const [id, c] of shown) { const h = hidden.get(id) || 0; if (h !== c) (h === 0 ? his : other).push(id); }
      for (const id of hidden.keys()) if (!shown.has(id)) other.push(id);
      const hisPolys = his.reduce((t, id) => t + shown.get(id), 0);
      data.driver = { shown: total(shown), hidden: total(hidden), his, other };
      check('the world flag removes RedCat from the draw calls', his.length > 0 && other.length === 0 && total(shown) - total(hidden) === hisPolys,
        `third person, the same pass with and without bits 0 and 2 of his world flags: ${total(shown)} and ${total(hidden)} polygons reach the driver; the ${hisPolys} missing ones use ${his.length} texture(s) of which nothing is left, every other texture has the same count`);
      // first person through the module, walking and turning: none of his textures. The same passes with his flags written
      // back by hand in every gap (after look.js looked at them): what would be drawn of him from his own eyes.
      const count = function* (force) {
        yield* restore(S0);
        host.look.setFirstPerson(true);
        yield* passes(3);
        let c = 0, frames = 0;
        key('Up', true);
        for (let k = 0; k < 60; k++) {
          if (k === 20) host.look.turn(50 * DEG);
          if (k === 8 || k === 36) key('Space', true); if (k === 12 || k === 40) key('Space', false);
          if (force) { const r = read(); u32[(r.entry + 4) >> 2] = r.own; }
          yield;
          let here = 0;
          for (const id of his) here += lastPolys.get(id) || 0;
          c += here; if (here) frames++;
        }
        key('Up', false);
        yield;
        return { polys: c, frames, drawn: read().drawn };
      };
      const fp = yield* count(false), forced = yield* count(true);
      data.driver.firstPerson = fp; data.driver.forced = forced;
      check('first person: none of his polygons', fp.polys === 0 && !fp.drawn && !forced.drawn,
        `first person, 60 passes of walking with a turn and two jumps: ${fp.polys} polygons with his texture reach the driver. The same passes with his flags written back by hand before each: ${forced.polys} polygons of his model in ${forced.frames} passes (what the view from his eyes would show of him); look.js clears the flags again in the next gap`);
    },

    // ---------------------------------------------------------------------------------------------------
    *cutscene() {
      // first person was asked for before the game started (below); samples: [seconds, mode, cutscene, control, drawn before look.js, drawn after]
      const rows = [], track = [];
      let before = null;
      early = () => { const r = read(); before = r && r.flags !== -1 ? r.drawn : null; };
      const orig = originalTable();
      let eyeWorst = 0, lateShown = 0, lateHidden = 0, wrongAfter = 0, firstActive = -1, cutsceneAt = -1, controlAt = -1, tableWrong = 0, absent = 0, changes = 0, last = null;
      for (;;) {
        const r = read();
        if (r && r.flags === -1) absent++;             // the first gap of a world: his actor is not in the world's list yet
        else if (r) {
          const t = time() / 1000;
          rows.push([+t.toFixed(3), r.mode, r.cutscene, r.control ? 1 : 0, before === null ? '-' : before ? 1 : 0, r.drawn ? 1 : 0, +dist(r.cam, r.pos).toFixed(2)]);
          track.push([r.cutscene, r.mode, ...r.enginePos, r.enginePitch, r.engineYaw, r.orbit]);
          if (r.control && firstActive < 0) firstActive = t;
          if (r.cutscene && cutsceneAt < 0) cutsceneAt = t;
          if (cutsceneAt >= 0 && r.control && controlAt < 0) controlAt = t;
          // as the last pass drew him (before) against the game state that pass ended with
          if (before !== null) { if (!r.control && !before) lateShown++; if (r.control && before) lateHidden++; }
          if (last !== null && last !== r.control) changes++;
          last = r.control;
          // after look.js: drawn exactly when first person is not in force
          if (r.drawn === r.control) wrongAfter++;
          if (sameWords(r.table, orig) === r.control) tableWrong++;
          if (controlAt >= 0 && t > controlAt + 0.1) eyeWorst = Math.max(eyeWorst, dist(r.cam, r.pos));
          if (controlAt >= 0 && t > controlAt + 2) break;
        }
        yield;
      }
      data.rows = rows.filter((x, k) => k === 0 || x.slice(1, 6).join() !== rows[k - 1].slice(1, 6).join());
      const modes = [...new Set(rows.filter((x) => x[2] !== 0).map((x) => x[1]))];
      const shownInCutscene = rows.filter((x) => x[2] !== 0).every((x) => x[5] === 1);
      check('first person before the cutscene', firstActive >= 0 && firstActive < cutsceneAt, `world 2: RedCat is controllable from ${firstActive.toFixed(2)} s, first person applies; the opening cutscene starts at ${cutsceneAt.toFixed(2)} s`);
      check('RedCat is shown in the cutscene', shownInCutscene && wrongAfter === 0 && tableWrong === 0 && modes.includes(7) && modes.includes(5),
        `cutscene ${cutsceneAt.toFixed(2)} to ${controlAt.toFixed(2)} s with camera modes ${modes.join(' and ')}: after look.js ran, his world flags say "drawn" and the table is the original's in every gap of it (${rows.filter((x) => x[2] !== 0).length} passes; ${wrongAfter} wrong)`);
      check('one pass late per change', lateShown + lateHidden === changes, `first person started or stopped applying ${changes} times; passes drawn with the state of the pass before: ${lateShown} without RedCat although first person no longer applied (the pass in which the cutscene began), ${lateHidden} with RedCat although it applied again (one per change, because changes are made between passes)`);
      const end = read();
      data.track = track;
      check('first person again after the cutscene', eyeWorst < 0.01 && !end.drawn && Math.abs(lookPitch() - 0.66) < 1e-6 && Math.abs(end.enginePitch + 0.66) < 1e-4,
        `from ${controlAt.toFixed(2)} s the player has control: camera ${eyeWorst.toFixed(4)} units from the eye point, RedCat not drawn; the look pitch set before the cutscene is still ${lookPitch().toFixed(2)} and the camera's pitch ${deg(end.enginePitch)} degrees`);
    },
    // the same world with no call at all: the camera of the original, pass by pass
    *cutsceneref() {
      const track = [];
      let begun = false, after = 0;
      for (;;) {
        const r = read();
        if (r && r.flags !== -1) {
          track.push([r.cutscene, r.mode, ...r.enginePos, r.enginePitch, r.engineYaw, r.orbit]);
          if (r.cutscene) begun = true;
          if (begun && r.control && ++after > 130) break;
        }
        yield;
      }
      data.track = track;
    },
    // third person with a look pitch asked for before the game starts
    *cutscenepitch() {
      yield* cases.cutsceneref();
      const r = read();
      check('third person: the look pitch after the cutscene', Math.abs(lookPitch() - 0.66) < 1e-6 && dist(r.cam, swing(followPlace(r).pos, r, r.orbit)) < 0.05 && r.drawn,
        `third person with turn(0, 0.5) before the opening cutscene: with control back the look pitch is ${lookPitch().toFixed(2)} and the camera ${dist(r.cam, swing(followPlace(r).pos, r, r.orbit)).toFixed(3)} units from the original's standing place swung by it`);
    },

    // ---------------------------------------------------------------------------------------------------
    // Other cameras while first person is on. No CameraTrigger is near the start of world 1, so the camera modes are
    // set the way the game sets them: with the calls CRcCameraTriggerModel::ActivateCamera 0x45B500 makes (0x4590B0
    // fixed camera, 0x459010 follow camera with an offset, 0x458FD0 plain mode) and with 0x459270 / 0x458F90, by
    // which CRCPlayer 0x434900 starts and ends the lock-on camera. The lock-on target here is the player object itself.
    *modes() {
      yield* openPlace();
      const orig = originalTable();
      const fb = new Float32Array(1), ub = new Uint32Array(fb.buffer), bits = (x) => { fb[0] = x; return ub[0]; };
      const offset = (r) => v3(r.dop + 0x458);
      const atEye = (r) => dist(r.cam, r.pos) < 0.01 && dist(r.enginePos, r.pos) < 0.01 && !r.drawn;
      host.look.setFirstPerson(true);
      yield* passes(5);
      let r = read();
      const ok0 = atEye(r);
      // --- fixed camera (CameraMode 2 -> mode 7) for 600 ms
      const eye = r.pos, place = [eye[0] + 60, eye[1] + 120, eye[2] + 60];
      f32.set(place, scratch >> 2); f32.set(eye, (scratch + 12) >> 2);
      m.call(0x4590B0, [7, scratch, scratch + 12, bits(600), 0], r.dop);
      yield;
      r = read();
      const fixed = { mode: r.mode, drawn: r.drawn, table: sameWords(r.table, orig), camera: dist(r.enginePos, place) };
      const h0 = r.heading;
      host.look.turn(1);
      yield* passes(2);
      r = read();
      fixed.turned = wrap(r.heading - h0); fixed.camera2 = dist(r.enginePos, place); fixed.drawn2 = r.drawn;
      let n = 2;
      while (read().mode === 7 && n < 200) { yield; n++; }
      yield* passes(2);
      r = read();
      check('fixed camera', ok0 && fixed.mode === 7 && fixed.drawn && fixed.drawn2 && fixed.table && fixed.camera < 0.01 && fixed.camera2 < 0.01 && fixed.turned === 0 && r.mode === 5 && atEye(r),
        `first person on, then the game's fixed camera for 600 ms: camera mode ${fixed.mode}, engine camera ${fixed.camera.toFixed(3)} units from the given place, RedCat's flags "drawn", table original, turn(1) changes the heading by ${fixed.turned}; after ${n} passes the game returns to mode ${r.mode} and the camera is at the eye point again (${dist(r.cam, r.pos).toFixed(4)}), RedCat not drawn`);
      // --- follow camera with an offset (CameraMode 1 -> mode 6): first person stays, the trigger's numbers are kept
      m.call(0x459010, [6, bits(2.5), bits(2), bits(-30)], r.dop);
      yield;
      r = read();
      const o1 = offset(r), glitch = dist(r.cam, r.pos);
      yield;
      r = read();
      const in6 = atEye(r) && r.mode === 6;
      host.look.setFirstPerson(false);
      yield;
      r = read();
      const o2 = offset(r), drawn2 = r.drawn;
      yield;
      r = read();
      const want6 = [r.pos[0] + Math.cos(r.camYaw + Math.PI) * 2 * r.H, r.feetY + 2.5 * r.H, r.pos[2] - Math.sin(r.camYaw + Math.PI) * 2 * r.H];
      const off6 = dist(r.cam, want6), pitch6 = r.camPitch / DEG;
      host.look.setFirstPerson(true);
      yield* passes(2);
      const again6 = atEye(read());
      m.call(0x459010, [6, bits(3), bits(1.5), bits(-45)], r.dop);      // another trigger with other numbers
      yield* passes(2);
      r = read();
      const second = atEye(r) && r.mode === 6;
      m.call(0x458FD0, [5], r.dop);                                        // CameraMode 0: back to the plain follow camera
      yield* passes(2);
      r = read();
      const o3 = offset(r);
      check('follow camera with a trigger offset', o1[1] === 0 && Math.abs(o1[2] + 0.16 / DEG) < 1e-4 && in6 && o2.join() === '2.5,2,-30' && drawn2 && off6 < 0.05 && Math.abs(pitch6 + 30) < 0.01 && again6 && second && o3.join() === '3,1.5,-45' && r.mode === 5 && atEye(r),
        `mode 6 with the offset (2.5, 2, -30) set while first person is on: one pass is drawn from that offset (camera ${glitch.toFixed(0)} units from the eye point, RedCat hidden), then the offset fields hold (${o1.map((x) => +x.toFixed(4)).join(', ')}) and the camera is at the eye point; off: the fields are (${o2.join(', ')}) again, the camera ${off6.toFixed(3)} units from 2.5 box heights up and 2 behind, pitch ${pitch6.toFixed(2)}; on again, a second offset (3, 1.5, -45), then mode 5: at the eye point throughout, the fields end as (${o3.join(', ')})`);
      // --- lock-on camera (mode 9)
      m.call(0x459270, [9, r.player, 0], r.dop);
      yield;
      r = read();
      const lock = { mode: r.mode, drawn: r.drawn, table: sameWords(r.table, orig) };
      const h1 = r.heading;
      host.look.turn(1);
      yield* passes(3);
      r = read();
      lock.turned = wrap(r.heading - h1); lock.far = dist(r.cam, r.pos); lock.mode2 = r.mode; lock.drawn2 = r.drawn;
      m.call(0x458F90, [], r.dop);
      yield* passes(2);
      r = read();
      check('lock-on camera', lock.mode === 9 && lock.mode2 === 9 && lock.drawn && lock.drawn2 && lock.table && lock.turned === 0 && lock.far > 50 && r.mode === 5 && atEye(r),
        `mode 9 while first person is on: RedCat's flags "drawn", table original, the original's lock-on camera ${lock.far.toFixed(1)} units from the eye point, turn(1) changes the heading by ${lock.turned} (no turning while locked on); after the game's own return to mode ${r.mode} the camera is at the eye point (${dist(r.cam, r.pos).toFixed(4)}), RedCat not drawn`);
      // --- RedCat dies (the game's own Kill, CRCPlayer slot 8 0x4DD1A0) and starts again
      const lives = i32[(u32[(r.player + 0x1F0) >> 2] + 0x44) >> 2];
      m.call(0x4DD1A0, [], r.player);
      let wrong = 0, away = 0, count = 0, gotUp = 0;
      for (; count < 900; count++) {
        yield;
        r = read();
        if (r.control) break;
        if (!r.drawn || !sameWords(r.table, orig)) wrong++;
        if (dist(r.cam, r.pos) > 50) away++;
        if (!r.active) gotUp++;
      }
      yield* passes(2);
      r = read();
      const livesNow = i32[(u32[(r.player + 0x1F0) >> 2] + 0x44) >> 2];
      check('death and new start', wrong === 0 && away > 0.9 * count && gotUp > 0 && livesNow === lives - 1 && atEye(r),
        `killed in first person: for ${count} passes (dying, then ${gotUp} passes getting up at the start place, lives ${lives} -> ${livesNow}) RedCat's flags say "drawn" and the table is the original's, the camera is more than 50 units from his eyes in ${away} of them; with control back the camera is at the eye point (${dist(r.cam, r.pos).toFixed(4)}), RedCat not drawn`);
    },

    // ---------------------------------------------------------------------------------------------------
    // a save state made in first person; `state` writes it and goes on for 120 passes, `restored` starts from the file
    *state() {
      yield* untilControl();
      yield* passes(40);
      host.look.setFirstPerson(true);
      yield* walk(30);
      host.look.turn(40 * DEG, 0.3);
      yield* passes(5);
      const r = read();
      fs.writeFileSync(opt('look-state'), host.snap.pack(host.snap.save(esp)));
      data.saved = { pos: r.pos, heading: r.heading, cam: r.cam, flags: r.flags, firstPerson: host.look.state().firstPerson, pitch: lookPitch(), enginePitch: r.enginePitch };
      yield* cases.continue();
    },
    *restored() {
      let r = read();
      while (!r || !host.mainLoop.restored) { yield; r = read(); }
      const st = host.look.state();
      data.restored = { pos: r.pos, heading: r.heading, cam: r.cam, flags: r.flags, firstPerson: st.firstPerson, pitch: st.pitch, enginePitch: r.enginePitch };
      check('restored into first person', st.firstPerson === true && !r.drawn && !sameWords(r.table, originalTable()) && dist(r.cam, r.pos) < 0.01 && Math.abs(st.pitch - 0.46) < 1e-6 && Math.abs(r.enginePitch + 0.46) < 1e-4,
        `first gap after the restore: state().firstPerson ${st.firstPerson}, look pitch ${st.pitch.toFixed(4)} (0.46 was set), camera pitch ${deg(r.enginePitch)} degrees, world flags ${r.flags} (not drawn), camera ${dist(r.cam, r.pos).toFixed(4)} units from the eye point`);
      yield* cases.continue();
    },
    *continue() {
      let worst = 0;
      const w = yield* walk(60, (r) => { worst = Math.max(worst, dist(r.cam, r.pos)); });
      host.look.turn(-25 * DEG, -0.2);
      yield* passes(30);
      data.after = { hash: memHash(), worst, pos: read().pos, pitch: lookPitch() };
      host.look.setFirstPerson(false);
      yield* passes(30);
      const r = read();
      data.off = { hash: memHash(), drawn: r.drawn, camFromPlace: dist(r.cam, swing(followPlace(r).pos, r, r.orbit)), pitch: lookPitch() };
    },
  };
}

// =====================================================================================================
// driver half
// =====================================================================================================
if (process.argv[1] && path.resolve(process.argv[1]) === SELF) {
  const args = process.argv.slice(2);
  const only = args.includes('--only') ? args[args.indexOf('--only') + 1].split(',') : null;
  const verbose = args.includes('--verbose');
  fs.mkdirSync(OUT, { recursive: true });
  let failed = 0;
  const node = (list) => spawnSync(process.execPath, [path.join(ROOT, 'tools/run-headless.mjs'), ...list], { cwd: ROOT, encoding: 'utf8', maxBuffer: 1 << 26 });
  const run = (name, world, seconds, extra = []) => {
    const out = path.join(OUT, name + '.json');
    fs.rmSync(out, { force: true });
    const r = node(['--seconds', String(seconds), '--fresh', '--world', String(world), '--out', path.join(OUT, 'run'), '--plugin', SELF, '--look-case', name, '--look-out', out, ...extra]);
    if (!fs.existsSync(out)) { failed++; console.log(`FAIL  ${name}: the run gave no result\n${(r.stdout || '').split('\n').filter((l) => /ERROR|at |Error/.test(l)).slice(0, 12).join('\n')}${r.stderr || ''}`); return null; }
    const res = JSON.parse(fs.readFileSync(out, 'utf8'));
    for (const c of res.checks) { if (!c.ok) failed++; console.log(`${c.ok ? 'ok   ' : 'FAIL '} ${c.name}: ${c.text}`); }
    return res;
  };
  const say = (ok, text) => { if (!ok) failed++; console.log(`${ok ? 'ok   ' : 'FAIL '} ${text}`); };
  const want = (n) => !only || only.includes(n);
  const title = (s) => console.log('\n== ' + s);

  // An independent look at world 1's geometry: the BSP collider of the JavaScript port with the level as that port
  // imported it (world and brush models at rest; no actors). Read only. clear(a, b, h): a box of half size h gets
  // from a to b without touching anything.
  let oracle = null;
  const walls = async () => {
    if (oracle) return oracle;
    const port = process.env.RC_PORT || path.resolve(ROOT, '../RCSPOOK_NEW');
    try {
      const { BspCollider } = await import(pathToFileURL(path.join(port, 'source/collision.js')).href);
      const level = JSON.parse(fs.readFileSync(path.join(port, 'data/levels/lvl00a/level.json'), 'utf8'));
      const collider = new BspCollider(level.collision), all = level.collision.models.map((_, k) => k);
      // contents: solid and window (1 | 2). The port's default mask also has clip brushes (64), which stop RedCat
      // but not the original's camera.
      oracle = { clear: (a, b, h) => { const r = collider.trace(a, b, [-h, -h, -h], [h, h, h], all, null, 3); return r.fraction === 1 && !r.startSolid; } };
    } catch (e) { console.log('      (the collider of the JavaScript port could not be loaded: ' + e.message + ')'); }
    return oracle;
  };
  // The original's rule for the camera's hull (0x45AE30): a new place is taken when the 8-unit box gets there from the
  // last place or from RedCat. Judged here with a 7-unit box, so that touching a surface is not counted.
  const count = (o, samples) => {
    const n = { inside: 0, through: 0, wouldBe: 0 };
    for (const q of samples) {
      if (!o.clear(q.cam, q.cam, 6)) n.inside++;
      if (!o.clear(q.prev, q.cam, 7) && !o.clear(q.pos, q.cam, 7)) n.through++;
      if (q.ideal && !o.clear(q.prev, q.ideal, 7) && !o.clear(q.pos, q.ideal, 7)) n.wouldBe++;
    }
    return n;
  };
  const judge = async (what, samples, expectBad = false) => {
    const o = await walls();
    if (!o) { say(false, `${what}: not judged, the collider of the JavaScript port is not available`); return; }
    const n = count(o, samples), ideals = samples.some((q) => q.ideal);
    say(expectBad ? n.through > 0 || n.inside > 0 : n.through === 0 && n.inside === 0, `${what}, judged with the JavaScript port's collider: of ${samples.length} camera places ${n.inside} are in something solid and ${n.through} can be reached neither from the place before nor from RedCat` +
      (ideals ? ` (the places the original's numbers alone would give: ${n.wouldBe})` : '') + (expectBad ? ': the judge does see a camera that goes through the wall' : ''));
  };

  if (want('turn')) { title('turning (world 1)'); run('turn', 1, 60); }
  if (want('pitch')) {
    title('looking up and down in third person (world 1)');
    const r = run('pitch', 1, 90);
    if (r && r.data.samples) await judge('look pitch 1.2 and -1.2', r.data.samples);
  }
  if (want('wall')) {
    title('turning and looking up and down at a wall (world 1)');
    const r = run('wall', 1, 120);
    if (r && r.data.look) {
      await judge('the original alone with its turn key', r.data.keys);
      await judge('with look input', r.data.look);
      await judge('with the last camera place moved by hand', r.data.byHand, true);
    }
  }
  if (want('first')) { title('first person (world 1)'); run('first', 1, 60); }
  if (want('pitchfirst')) { title('looking up and down in first person (world 1)'); run('pitchfirst', 1, 60); }
  if (want('driver')) { title('what reaches the render driver (world 1)'); const r = run('driver', 1, 60); if (r && verbose) console.log('      his textures: ' + r.data.driver.his.join(' ')); }
  if (want('modes')) { title('other cameras while first person is on (world 1, modes set with the calls the game itself makes)'); run('modes', 1, 80); }
  if (want('cutscene')) {
    title('first person, a look pitch and the opening cutscene (world 2)');
    const ref = run('cutsceneref', 2, 60);
    const r = run('cutscene', 2, 60);
    if (r && verbose) { console.log('      seconds, camera mode, cutscene state, control, drawn in the last pass, drawn after look.js, camera to eye'); for (const x of r.data.rows) console.log('      ' + x.join('  ')); }
    const third = run('cutscenepitch', 2, 60);
    // track rows: cutscene state, camera mode, engine camera x y z, pitch, yaw, dop+0x420. Compared: the passes of
    // the cutscene, from the pass after `from` passes of it (and, with afterCut, from its first change of camera on).
    const compare = (a, b, from, afterCut) => {
      let place = 0, angle = 0, n = 0, since = 0, changed = false;
      for (let k = 0; k < Math.min(a.length, b.length); k++) {
        if (!a[k][0] || !b[k][0]) continue;
        if (a[k][1] !== 5) changed = true;
        if (since++ < from || (afterCut && !changed)) continue;
        n++;
        place = Math.max(place, Math.hypot(a[k][2] - b[k][2], a[k][3] - b[k][3], a[k][4] - b[k][4]));
        angle = Math.max(angle, Math.abs(a[k][5] - b[k][5]), Math.abs(Math.atan2(Math.sin(a[k][6] - b[k][6]), Math.cos(a[k][6] - b[k][6]))));
      }
      return { n, place, angle: angle / DEG };
    };
    if (ref && third) {
      const x = compare(ref.data.track, third.data.track, 1, false);
      say(x.n > 1000 && x.place < 0.01 && x.angle < 0.001, `third person with a look pitch: the cutscene's camera against the same world with no call, ${x.n} passes (all of the cutscene but the pass in which it began): position at most ${x.place.toFixed(5)} units apart, pitch and yaw ${x.angle.toFixed(6)} degrees`);
    }
    if (ref && r) {
      const x = compare(ref.data.track, r.data.track, 1, true), all = compare(ref.data.track, r.data.track, 2, false);
      say(x.n > 1000 && x.place < 0.01 && x.angle < 0.001, `first person with a look pitch: the cutscene's camera against the same world with no call, from the cutscene's first change of camera on (${x.n} passes): position at most ${x.place.toFixed(5)} units apart, pitch and yaw ${x.angle.toFixed(6)} degrees. In its opening follow shot the camera comes from RedCat's eyes by a cut and is up to ${all.place.toFixed(1)} units and ${all.angle.toFixed(1)} degrees from the original's, which is still settling there`);
    }
    if (ref) {
      const used = Math.max(...ref.data.track.map((x) => Math.abs(x[7])));
      say(used === 0, `without a call the field look.js keeps the look pitch in (CRcDop +0x420) is ${used} in all ${ref.data.track.length} gaps of that run`);
    }
  }
  if (want('state')) {
    title('a save state made in first person with a look pitch (world 1, two processes)');
    const file = path.join(OUT, 'first-person.state');
    const a = run('state', 1, 60, ['--look-state', file]);
    const b = a && run('restored', 5, 60, ['--restore', file]);
    if (a && b) {
      say(a.data.after.hash === b.data.after.hash && a.data.off.hash === b.data.off.hash && a.data.saved.pitch === b.data.restored.pitch && a.data.after.pitch === b.data.after.pitch,
        `the restored game continues like the first: look pitch ${a.data.saved.pitch.toFixed(4)} and ${b.data.restored.pitch.toFixed(4)}; 90 passes of walking and turn(-25 degrees, -0.2) later the memory hashes are ${a.data.after.hash} and ${b.data.after.hash} (look pitch ${a.data.after.pitch.toFixed(4)} / ${b.data.after.pitch.toFixed(4)}, camera at most ${a.data.after.worst.toFixed(4)} / ${b.data.after.worst.toFixed(4)} units from the eye point), after setFirstPerson(false) ${a.data.off.hash} and ${b.data.off.hash}`);
      say(b.data.off.drawn && b.data.off.camFromPlace < 0.05, `off after the restore: RedCat drawn ${b.data.off.drawn}, camera ${b.data.off.camFromPlace.toFixed(3)} units from the original's place swung by the look pitch ${b.data.off.pitch.toFixed(2)}`);
    }
    if (!args.includes('--keep')) fs.rmSync(file, { force: true });
  }
  if (want('untouched')) {
    title('without a call the module changes nothing (the README check)');
    const file = path.join(OUT, 'untouched.state');
    const grab = (r) => { const mm = /hash 300 passes later: ([0-9a-f]{8})/.exec(r.stdout || ''); return mm ? mm[1] : null; };
    const a = grab(node(['--seconds', '60', '--fresh', '--world', '1', '--out', path.join(OUT, 'run'), '--save-at', '900', '--state', file, '--hash-after', '300']));
    const b = grab(node(['--seconds', '60', '--fresh', '--world', '5', '--out', path.join(OUT, 'run'), '--restore', file, '--hash-after', '300']));
    say(a && a === b, `save at pass 900 and 300 passes on: ${a}; restored into a booted world 5 and 300 passes on: ${b}`);
    if (!args.includes('--keep')) fs.rmSync(file, { force: true });
  }
  console.log(failed ? `\n${failed} check(s) failed` : '\nall checks passed');
  process.exit(failed ? 1 : 0);
}
