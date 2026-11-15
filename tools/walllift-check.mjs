#!/usr/bin/env node
// Checks the camera's wall lift (source/host/walllift.js) in the Node runner, pass by pass, against
// what the JavaScript port's own test of it guarantees (../RCSPOOK_NEW/tests/third-person-camera.test.mjs):
// RedCat backs into the wall behind the start of world 1, the view is turned there, he walks away.
//   node tools/walllift-check.mjs
import fs from 'node:fs';
import path from 'node:path';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { cameraInsidePlayer, CameraWallLift } from '../source/host/walllift.js';
// the JavaScript port's own lift, camera model and collider, for the side-by-side run (read only)
const OLD = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '../../RCSPOOK_NEW/source');
const old = { lift: await import(path.join(OLD, 'third-person-camera.js')), camera: await import(path.join(OLD, 'native-camera.js')), collision: await import(path.join(OLD, 'collision.js')) };

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const OUT = path.join(ROOT, 'tools/out/walllift');
fs.mkdirSync(OUT, { recursive: true });
let failed = 0;
const check = (ok, what, detail = '') => { if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); };
const run = (name, extra) => {
  const file = path.join(OUT, name + '.json');
  const r = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '40', '--fresh', '--out', path.join(OUT, 'run-' + name), '--world', '1', '--plugin', 'tools/walllift-plugin.mjs', '--wl-out', file, ...extra], { cwd: ROOT, encoding: 'utf8' });
  return { log: fs.existsSync(file) ? JSON.parse(fs.readFileSync(file, 'utf8')) : [], out: r.stdout + r.stderr };
};
const dist = (a, b) => Math.hypot(...a.map((v, i) => v - b[i]));

// ---- 1. the lift itself is the JavaScript port's: side by side on that port's own test cases ----------------
{
  const collider = (boxes) => {
    const planes = [], leaves = [], leafSides = [], models = [];
    for (const [min, max] of boxes) {
      const firstSide = leafSides.length;
      for (let axis = 0; axis < 3; axis++) for (const sign of [1, -1]) { const n = [0, 0, 0]; n[axis] = sign; leafSides.push([planes.length, 0]); planes.push([...n, sign > 0 ? max[axis] : -min[axis]]); }
      models.push({ root: -leaves.length - 1, min, max }); leaves.push({ contents: 1, firstSide, numSides: 6, min, max });
    }
    const world = new old.collision.BspCollider({ planes, nodes: [], leaves, leafSides, models });
    return (size) => (a, b) => world.trace(a, b, [-size, -size, -size], [size, size, size], models.map((_, i) => i), null);
  };
  const identity = (a, b) => ({ end: [...b], fraction: 1, startSolid: false });
  const fixture = (trace = identity, position = [0, 86.88, 98.46]) => ({ anchor: [0, 43, 0], desired: [0, 86.88, 98.46], position, playerPosition: [0, 0, 0], trace });
  const same = (a, b) => JSON.stringify([a.position, a.lift, a.focus, !!a.hidePlayer]) === JSON.stringify([b.position, b.lift, b.focus, !!b.hidePlayer]);
  const cases = {
    'room behind him': fixture(),
    'a rear wall': { ...fixture(collider([[[-500, -100, 11], [500, 500, 100]]])(4)), position: [0, 60, 6.99] },
    'a corner': { ...fixture(collider([[[-500, -100, 11], [500, 500, 100]], [[11, -100, -500], [100, 500, 500]]])(4)), position: [0, 40, 5] },
    'a low ceiling (side view)': { ...fixture(collider([[[-500, -100, 11], [500, 500, 100]], [[-500, 72, -500], [500, 100, 500]]])(4)), position: [0, 40, 5] },
    'enclosed (RedCat not drawn)': { ...fixture(collider([[[11, -100, -500], [100, 500, 500]], [[-100, -100, -500], [-11, 500, 500]], [[-500, -100, 11], [500, 500, 100]], [[-500, -100, -100], [500, 500, -11]], [[-500, 64, -500], [500, 100, 500]]])(4)), position: [0, 40, 5] },
  };
  const diff = [];
  for (const [name, f] of Object.entries(cases)) { const a = new CameraWallLift().update(0, { ...f, snap: true }), b = old.lift.liftCameraOverPlayer(f); if (!same(a, b)) diff.push(name); }
  const lc = new CameraWallLift().update(0, { ...cases['a low ceiling (side view)'], snap: true }), en = new CameraWallLift().update(0, { ...cases['enclosed (RedCat not drawn)'], snap: true });
  check(diff.length === 0, `single frames, ${Object.keys(cases).length} cases of the port's test (${Object.keys(cases).join('; ')}): the same result as the port's own code`, diff.join(', '));
  check(lc.hidePlayer === false && lc.focus === 1 && Math.abs(lc.position[0]) > 28 && en.hidePlayer === true, `low ceiling: a side view looking at him (x ${lc.position[0].toFixed(0)}); enclosed: his model is not drawn`);
  // the port's frame-by-frame test: a wall at z = 220, he backs up to it, waits, walks away
  const wall = [[[-500, -100, 220], [500, 500, 400]]], boxes = collider(wall), small = boxes(4);
  const camera = new old.camera.NativeFollowCamera(), mine = new CameraWallLift(), theirs = new old.lift.CameraWallLift(), dt = 1 / 60;
  const route = [...Array.from({ length: 150 }, (_, i) => i * 1.4), ...Array.from({ length: 60 }, () => 209), ...Array.from({ length: 150 }, (_, i) => 209 - i * 1.4)];
  let previous = null, maxStep = 0, sawLift = false, dips = 0, inside = 0, different = 0;
  for (const z of route) {
    const feet = [0, 0, z], eye = [0, 54.08, z], chest = [0, 43, z], backing = z < 209 && previous && previous.feet < z;
    const view = camera.update(dt, { feet, eye, height: 57.92, heading: 0, hasInput: !!backing, backpedal: !!backing, ray: boxes(0), sweep: boxes(old.camera.CAMERA_HULL_HALF_SIZE) });
    const input = { anchor: chest, desired: view.desired, position: view.position, playerPosition: feet, trace: small };
    const pose = mine.update(dt, input), ref = theirs.update(dt, input);
    if (!same(pose, ref)) different++;
    if (cameraInsidePlayer(pose.position, feet)) inside++;
    sawLift ||= pose.lift > 0.5;
    if (previous) maxStep = Math.max(maxStep, Math.abs((pose.position[1] - feet[1]) - previous.height));
    if (previous && backing && pose.lift > 0.05 && pose.position[1] - feet[1] < previous.height - 0.05) dips++;
    previous = { feet: z, height: pose.position[1] - feet[1] };
  }
  check(different === 0, `the port's frame-by-frame wall test (${route.length} frames): identical to the port's own code in every frame`, `${different} frames differ`);
  check(sawLift && inside === 0 && maxStep < 4 && dips === 0, `and it keeps that test's promises: rises over him, never inside him, largest height change per frame ${maxStep.toFixed(2)} units (under 4), ${dips} dips`);
}

// ---- 2. in the game ---------------------------------------------------------------------------------------
const on = run('on', []), off = run('off', ['--wl-off', '1']);
const L = on.log, O = off.log;
check(L.length > 600 && O.length === L.length, `the scenario ran: ${L.length} passes with the lift, ${O.length} without`, (/ERROR[^\n]*/.exec(on.out) || [''])[0]);
const phase = (log, p) => log.filter((e) => e.phase === p);

// standing free: the lift does nothing
check(phase(L, 'free').every((e) => !e.drawn || dist(e.drawn, e.original) === 0) && phase(L, 'free').every((e) => e.lift === 0), 'standing free: every frame is drawn from the original camera\'s place');

// backing in: the original ends up inside RedCat; the drawn camera never does
const backing = [...phase(L, 'backing'), ...phase(L, 'at the wall')];
const insideOriginal = backing.filter((e) => e.original && cameraInsidePlayer(e.original, e.feet)).length;
const insideDrawn = backing.filter((e) => e.drawn && cameraInsidePlayer(e.drawn, e.feet)).length;
check(insideOriginal > 0, `at the wall the original camera is inside RedCat's model in ${insideOriginal} of ${backing.length} passes`);
check(insideDrawn === 0, `the drawn camera is inside his model in ${insideDrawn} passes`);
const lifted = backing.filter((e) => e.lift > 0.01);
check(lifted.length > 0, `the lift engages: ${lifted.length} passes, highest ${Math.max(0, ...backing.map((e) => e.lift)).toFixed(3)} of the arc, the view turned towards him up to ${Math.max(0, ...backing.map((e) => e.focus)).toFixed(2)}`);
// the port's test: no frame moves the camera more than 4 units vertically, and it does not dip while backing in
let maxStep = 0, dip = 0;
const whole = L.filter((e) => e.drawn);
for (let k = 1; k < whole.length; k++) if (whole[k].pass === whole[k - 1].pass + 1 && whole[k].phase !== 'turned at the wall') maxStep = Math.max(maxStep, Math.abs(whole[k].drawn[1] - whole[k - 1].drawn[1] - (whole[k].feet[1] - whole[k - 1].feet[1])));
const bk = phase(L, 'backing').filter((e) => e.drawn);
// as the port's test counts it: only with the lift engaged (above 0.05 of the arc)
for (let k = 1; k < bk.length; k++) if (bk[k].lift > 0.05 && bk[k].pass === bk[k - 1].pass + 1) dip = Math.max(dip, (bk[k - 1].drawn[1] - bk[k - 1].feet[1]) - (bk[k].drawn[1] - bk[k].feet[1]));
// In the game he backs in at full speed and the original camera is pulled in at once (its own jump is larger),
// so the pass in which the lift takes over is one step; after that the eased steps stay under the port's 4 units.
let engage = 0, later = 0;
for (let k = 1; k < whole.length; k++) {
  if (whole[k].pass !== whole[k - 1].pass + 1 || whole[k].phase === 'turned at the wall') continue;
  const step = Math.abs(whole[k].drawn[1] - whole[k - 1].drawn[1] - (whole[k].feet[1] - whole[k - 1].feet[1]));
  if (whole[k - 1].lift === 0 && whole[k].lift > 0) engage = Math.max(engage, step); else later = Math.max(later, step);
}
let originalJump = 0;
for (let k = 1; k < backing.length; k++) if (backing[k].original && backing[k - 1].original) originalJump = Math.max(originalJump, Math.abs(backing[k].original[1] - backing[k - 1].original[1]));
check(later < 4, `after the lift has taken over no pass moves the camera more than 4 units up or down (largest ${later.toFixed(2)}); the pass in which it takes over: ${engage.toFixed(1)} units (the original camera's own largest jump there: ${originalJump.toFixed(1)})`, `overall ${maxStep.toFixed(2)}`);
check(dip <= 0.25, `with the lift engaged the camera does not sink while he backs in: largest drop ${dip.toFixed(2)} units in one pass (the port's test on its flat wall allows 0.05; this is the level's own wall)`);
const closest = Math.min(...backing.filter((e) => e.drawn).map((e) => dist(e.drawn, [e.feet[0], e.feet[1] + 43, e.feet[2]])));
check(closest > 20, `closest the drawn camera comes to his chest: ${closest.toFixed(1)} units (the original: ${Math.min(...backing.filter((e) => e.original).map((e) => dist(e.original, [e.feet[0], e.feet[1] + 43, e.feet[2]]))).toFixed(1)})`);

// a look turn while lifted: the drawn camera goes with it in the very next pass
const t = phase(L, 'turned at the wall'), before = phase(L, 'at the wall').slice(-1)[0];
if (t.length && before && before.drawn && t[1] && t[1].drawn) {
  const ang = (e) => Math.atan2(e.drawn[0] - e.feet[0], e.drawn[2] - e.feet[2]);
  let d = ang(t[1]) - ang(before); d = Math.atan2(Math.sin(d), Math.cos(d));
  check(Math.abs(Math.abs(d) - 0.6) < 0.08, `a look turn of 0.6 rad at the wall: the lifted camera is ${Math.abs(d).toFixed(3)} rad further round him one pass later`);
} else check(false, 'a look turn at the wall could be measured');

// walking away: back to the original's place
const away = phase(L, 'free again').slice(-30);
check(away.length > 0 && away.every((e) => e.lift < 0.001 && (!e.drawn || dist(e.drawn, e.original) < 0.5)), `after walking away the frame is drawn from the original's place again (lift ${away.length ? away[away.length - 1].lift.toFixed(4) : '-'})`);

// what RedCat does is the same with and without the lift: the steering sees the original camera
let worst = 0;
for (let k = 0; k < L.length; k++) if (L[k].pos && O[k] && O[k].pos) worst = Math.max(worst, dist(L[k].pos, O[k].pos), Math.abs(L[k].heading - O[k].heading));
check(worst === 0, `RedCat's position and heading are the same in every pass with and without the lift (largest difference ${worst})`);

// a save state made while lifted continues like the run it was made from
const state = path.join(OUT, 'lifted.bin');
const a = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '60', '--fresh', '--out', path.join(OUT, 'run-save'), '--world', '1', '--plugin', 'tools/walllift-plugin.mjs', '--wl-hold', '1', '--save-at', '1250', '--state', state, '--hash-after', '200'], { cwd: ROOT, encoding: 'utf8' });
const b = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '60', '--fresh', '--out', path.join(OUT, 'run-restore'), '--world', '5', '--restore', state, '--hash-after', '200', '--plugin', 'tools/walllift-plugin.mjs', '--wl-report', '1'], { cwd: ROOT, encoding: 'utf8' });
const hash = (s) => (/hash 200 passes later: ([0-9a-f]+)/.exec(s) || [])[1], liftAt = (s) => (/walllift at end: (\{.*\})/.exec(s) || [])[1];
check(!!hash(a.stdout) && hash(a.stdout) === hash(b.stdout), `a state saved while lifted and restored into a booted world 5 continues to the same memory: ${hash(a.stdout)} and ${hash(b.stdout)}`, `lift at the end ${liftAt(a.stdout)} / ${liftAt(b.stdout)}`);
check(!!liftAt(a.stdout) && JSON.parse(liftAt(a.stdout)).lift > 0.01 && liftAt(a.stdout) === liftAt(b.stdout), 'and the lift itself is in the same place in both');

console.log(failed ? `${failed} check(s) FAILED` : 'all checks passed');
process.exitCode = failed ? 1 : 0;
