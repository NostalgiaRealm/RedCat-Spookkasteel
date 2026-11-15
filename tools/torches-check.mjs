#!/usr/bin/env node
// Picture check of the hand torches (flag handTorches, source/host/torches.js) in a browser: the
// Castle's hall of hands (no flames in the original) and the Graveyard's entrance (two hands with
// an authored flame), each with the flag off and on. Three screenshots per run, half a second
// apart. Passes when, with the flag on, the picture from the same place is lighter around the
// hands (their light, and in the Castle their flames) and not darker anywhere, the game thread
// reports hands, lights and (Castle) flame polygons, and every run's picture shows the game and moves. LOOK at the pictures too: the numbers do not
// say that a flame sits on its hand. The server must be running (node tools/serve.mjs).
//   node tools/torches-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--angle gl|swiftshader]
//        [--only castle,yard] [--out tools/out/torches/pictures] [--size 1280x720] [--phone]
// --phone: a phone-shaped window (915x412, device pixel ratio 3, touch), for the cost at a torch place: tools/phone-check.mjs
// stands at a world's start, where no hand is in reach. Still a desktop's processor and graphics chip.
// RedCat is put in place by the tool, not by the port: the game thread's script (source/web/worker.js)
// is changed on its way to the browser so that, once the player has the controls and the follow
// camera, the host switches collision off (the original's own no-clip byte), calls the game's
// SetPosition 0x4DBE20 and turns the view; the same calls as the scenario `torch` of
// tools/fixes-plugin.mjs. Nothing of the port's files is changed.
// --browser webkit is Playwright's Linux build of WebKit, not Safari: it needs
// --features=+AllowWebGLInWorkers (on in Safari) and gets a retry around the render worker's
// getContext, as tools/out/browsers-webkit/wk.mjs found necessary for that build.
// Needs Playwright, taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { decodePng, pictureStats, pictureDiff } from './picture.mjs';
import { PLACES as BASE, routeTorchPlace } from './torch-place.mjs';
import { launch, engine, isChromium, notRun, notRunSummary, DEV_URL } from './browsers.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (n, d) => { const k = process.argv.indexOf('--' + n); return k < 0 ? d : process.argv[k + 1]; };
const url = opt('url', DEV_URL), kind = engine, angle = opt('angle', 'gl');
if (!isChromium && process.argv.includes('--angle')) notRun('--angle (a Chromium flag for its GL backend)');
const phone = process.argv.includes('--phone');          // a phone-shaped window: 915x412, device pixel ratio 3, touch (as tools/phone-check.mjs)
const [vw, vh] = opt('size', phone ? '915x412' : '1280x720').split('x').map(Number);
const outDir = path.resolve(opt('out', path.join(ROOT, 'tools/out/torches/pictures')));
const only = opt('only', '').split(',').filter(Boolean);
fs.mkdirSync(outDir, { recursive: true });
let failed = 0, n = 0;
const check = (ok, what, detail = '') => { n++; if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); };

const PLACES = { ...BASE, castle: { ...BASE.castle, turn: Number(opt('castle-turn', BASE.castle.turn)) } };
/** A browser of its own per run (tools/browsers.mjs: Chromium, Firefox, or WebKit with WebGL in workers switched on). */
async function open(place) {
  const ctxOpts = { viewport: { width: vw, height: vh }, ...(phone ? { deviceScaleFactor: 3, hasTouch: true, isMobile: true } : {}) };
  const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...(angle === 'swiftshader' ? ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'] : ['--use-angle=' + angle])] });
  const ctx = await browser.newContext(ctxOpts);
  const patched = await routeTorchPlace(ctx, place);
  const page = await ctx.newPage();
  await page.addInitScript(() => { try { const k = 'rcspook-recomp.settings.v1'; localStorage.setItem(k, JSON.stringify({ ...JSON.parse(localStorage.getItem(k) || '{}'), fullscreen: false, msaa: 0 })); } catch (e) { /* the defaults then */ } });
  return { page, patched, close: async () => { try { await ctx.close(); } catch (e) { /* gone */ } await browser.close(); } };
}

/** Flame-coloured pixels (bright, red over green over blue) in percent, and the mean of the three channels. */
function look(png) {
  const { width, height, channels: c, data } = png, px = width * height;
  let flame = 0, sum = 0;
  for (let k = 0; k < px; k++) { const r = data[k * c], g = data[k * c + 1], b = data[k * c + 2]; sum += r + g + b; if (r > 200 && g > 110 && g < r - 20 && b < g - 30) flame++; }
  return { flame: +(flame * 100 / px).toFixed(3), mean: +(sum / (px * 3)).toFixed(2) };
}

async function run(name, place, on) {
  const errors = [], tag = `${kind}-${name}-${on ? 'on' : 'off'}`;
  const t = await open(place);
  let done = null;
  const placed = new Promise((resolve) => { done = resolve; });
  t.page.on('console', (m) => { const s = m.text(); if (/torch-place done/.test(s)) done(s.slice(s.indexOf('{'))); if (m.type() === 'error') errors.push(s.slice(0, 300)); });
  t.page.on('pageerror', (e) => errors.push(e.message));
  const r = { tag, errors, shots: [] };
  try {
    await t.page.goto(`${url}?autostart=1&world=${place.world}${on ? '' : '&fixes=handTorches=0'}`);
    r.module = await Promise.race([placed, new Promise((resolve) => setTimeout(() => resolve(null), place.wait))]);
    r.crash = await t.page.evaluate(() => window.__crash || null);
    r.patched = t.patched();
    for (let k = 1; k <= 3 && r.module; k++) {
      const file = path.join(outDir, `${tag}-${k}.png`);
      await t.page.locator('#screen').screenshot({ path: file });
      r.shots.push(decodePng(fs.readFileSync(file)));
      await t.page.waitForTimeout(500);
    }
    // eight seconds at the place: frames per second, the game thread's wait and the graphics chip's load in percent (the page's own counters)
    r.perf = [];
    for (let q = 0; q < 8 && r.module; q++) { await t.page.waitForTimeout(1000); r.perf.push(await t.page.evaluate(() => { const s = window.RecompGame.stats || {}; return [s.fps || 0, s.idle, s.busy]; })); }
    const mid = (j) => { const v = r.perf.map((x) => x[j]).filter((x) => typeof x === 'number').sort((a, b) => a - b); return v.length ? v[v.length >> 1] : null; };
    r.fps = mid(0); r.wait = mid(1); r.chip = mid(2);
  } catch (e) { errors.push(String(e.message || e).slice(0, 300)); }
  await t.close();
  if (r.shots.length === 3) {
    r.picture = pictureStats(r.shots[0]); r.moved = pictureDiff(r.shots[0], r.shots[2]);
    const L = r.shots.map(look); r.flame = +(L.reduce((a, b) => a + b.flame, 0) / 3).toFixed(3); r.mean = +(L.reduce((a, b) => a + b.mean, 0) / 3).toFixed(2);
  }
  return r;
}

console.log(`${kind}${kind === 'chromium' ? ' (ANGLE ' + angle + ')' : ''}, ${vw}x${vh}, ${url}`);
for (const [name, place] of Object.entries(PLACES)) {
  if (only.length && !only.includes(name)) continue;
  const off = await run(name, place, false), on = await run(name, place, true);
  const brief = (r) => JSON.stringify({ module: r.module, picture: r.picture, moved: r.moved, flame: r.flame, mean: r.mean, fps: r.fps, wait: r.wait, chip: r.chip, errors: r.errors.slice(0, 3), crash: r.crash || undefined });
  const fine = (r) => r.patched && !!r.module && !r.crash && r.shots.length === 3 && r.picture.lit > 30 && r.picture.colours > 40 && r.moved > 0.05;
  check(fine(off) && fine(on), `${place.what}: RedCat was put in place with the flag off and on, the picture shows the game and moves`, `off ${brief(off)}; on ${brief(on)}`);
  if (!fine(off) || !fine(on)) continue;
  const mOff = JSON.parse(off.module), mOn = JSON.parse(on.module);
  check(!mOff.hands && !mOff.lights && mOn.hands > 0 && mOn.lights >= 1, 'the game thread: nothing of the hand torches with the flag off; hands found and lights in the scene with it on', `off ${off.module}; on ${on.module}`);
  // the camera stands at the same place in both runs: the share of pixels that are lighter with the flag on (red by more than 12, green by more than 6),
  // against the other direction and against two pictures of the same run (hands, RedCat and flames move)
  const lighter = (a, b) => { let q = 0; const c = a.channels, px = a.width * a.height; for (let k = 0; k < px; k++) if (b.data[k * c] - a.data[k * c] > 12 && b.data[k * c + 1] - a.data[k * c + 1] > 6) q++; return +(q * 100 / px).toFixed(2); };
  const up = lighter(off.shots[0], on.shots[0]), down = lighter(on.shots[0], off.shots[0]), noise = Math.max(lighter(off.shots[0], off.shots[2]), lighter(on.shots[0], on.shots[2]));
  check(up > 2 && up > 5 * down && up > 3 * noise && on.mean > off.mean + 0.5, 'flag on: the picture is lighter around the hands (their light on walls, pillars and the hands themselves, and the flames)', `lighter with the flag on ${up}% of the pixels, darker ${down}%, between two pictures of one run ${noise}%; mean ${off.mean} -> ${on.mean}`);
  // the cost where the hands are: not below nine tenths of the frame rate without them (a desktop here; a real phone is not measured by this)
  check(on.fps >= 0.9 * off.fps - 1, 'flag on: the frame rate at this place is that of the flag off', `median of 8 s: off ${off.fps} fps, game thread waits ${off.wait}%, chip load ${off.chip}%; on ${on.fps} fps, waits ${on.wait}%, chip load ${on.chip}%`);
  if (name === 'castle') check(mOn.polys > 8 && mOff.polys === 0, 'flag on: the Castle\'s hands have flames (polygons handed to the engine in the frame of the report); LOOK at the picture for where they are', `${mOn.polys} polygons`);
  console.log(`pictures: ${path.relative(ROOT, outDir)}/${kind}${phone ? '-phone' : ''}-${name}-{off,on}-{1,2,3}.png`);
}
notRunSummary();
console.log(`\n${n - failed} of ${n} checks passed`);
process.exit(failed ? 1 : 0);
