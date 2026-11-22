#!/usr/bin/env node
// A save state must not be felt (source/web/worker.js onPass, source/host/snapshot.js capture(),
// source/web/save-worker.js, source/web/game.js storeState). Starts world 1 in a headless browser,
// takes a number of states with game.save() and holds each against bounds:
//
//   - the game thread stands still for a state no longer than --bound milliseconds (default 16, one
//     frame at 60 Hz) in the median and twice that at worst, and copied into memory it had made
//     ready, in the time its frame would have waited for the display (`timing.stop`, `.prepared`,
//     `.inWait` of the event 'recomp-saved'; the game thread measures it itself). Before
//     2026-11-22 this was 22 to 28 ms, on top of the frame;
//   - the page's display tick, which paces the game thread, is never later than --tick milliseconds
//     (default 34) in the second after the request, in the median of the saves: nothing of a save
//     runs on the page's thread. Before, with compression there: 50 to 58 ms on a desktop, 140 ms
//     with the page's thread four times slower;
//   - the frames drawn in that second are not fewer than in the second before by more than --lost
//     (default 4), in the median;
//   - the state is stored, with the pages of zeros left out (stored raw size below the copy's).
//
// Twice: a desktop window, and a phone's shape with the page's thread made four times slower
// (Chromium only, CDP Emulation.setCPUThrottlingRate). That slows the page, NOT the game thread or
// the save worker: Chromium refuses the rate for workers ("only supported for pages"), so how long
// a real phone's game thread stands still is not measured here.
//
//   node tools/save-hitch-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit]
//        [--saves 5] [--bound 16] [--tick 34] [--lost 4] [--only desktop|phone] [--world 1]
// Needs the server running (node tools/serve.mjs). Frame times depend on what else the machine
// does: run it alone.
import { launch, isChromium, notRun, notRunSummary, DEV_URL } from './browsers.mjs';

const opt = (n, d) => { const k = process.argv.indexOf('--' + n); return k < 0 ? d : process.argv[k + 1]; };
const url = opt('url', DEV_URL), only = opt('only', ''), world = opt('world', '1');
const SAVES = Number(opt('saves', 5)), BOUND = Number(opt('bound', 16)), TICK = Number(opt('tick', 34)), LOST = Number(opt('lost', 4));
let failed = 0;
const check = (ok, what, detail = '') => { console.log(`${ok ? '  ok  ' : ' FAIL '} ${what}${detail ? '  [' + detail + ']' : ''}`); if (!ok) failed++; };
const median = (list) => { const s = [...list].sort((a, b) => a - b); return s.length ? s[s.length >> 1] : NaN; };
const r1 = (x) => Math.round(x * 10) / 10;

const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist'] });

async function run(name, options, rate) {
  console.log(`${name}${rate > 1 ? `, the page's thread ${rate} times slower` : ''}`);
  const context = await browser.newContext(options);
  await context.addInitScript(() => {
    window.__raf = []; window.__saved = []; window.__failed = [];
    const loop = () => { const g = window.RecompGame; window.__raf.push([performance.now(), g ? g.framesDrawn : 0]); if (window.__raf.length > 8000) window.__raf.splice(0, 4000); requestAnimationFrame(loop); };
    requestAnimationFrame(loop);
    window.addEventListener('recomp-saved', (e) => window.__saved.push({ at: performance.now(), ...e.detail }));
    window.addEventListener('recomp-save-failed', (e) => window.__failed.push(e.detail.message));
  });
  const page = await context.newPage();
  page.on('pageerror', (e) => console.log('     [pageerror]', e.message));
  if (rate > 1) { const cdp = await context.newCDPSession(page); await cdp.send('Emulation.setCPUThrottlingRate', { rate }); }
  await page.goto(`${url}?autostart=1&world=${world}`);
  await page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.stats && window.RecompGame.stats.world && window.RecompGame.framesDrawn > 200, null, { timeout: 240000 });
  await page.waitForTimeout(5000);
  const rows = [];
  for (let k = 0; k < SAVES; k++) {
    const n0 = await page.evaluate(() => window.__saved.length);
    const t0 = await page.evaluate(() => { const t = performance.now(); window.RecompGame.save(); return t; });
    const stored = await page.waitForFunction((n) => window.__saved.length > n || window.__failed.length > 0, n0, { timeout: 60000 }).then(() => true, () => false);
    if (!stored || await page.evaluate((n) => window.__saved.length <= n, n0)) { check(false, `${name}: state ${k + 1} is stored`, JSON.stringify(await page.evaluate(() => window.__failed))); break; }
    await page.waitForTimeout(2200);
    rows.push(await page.evaluate((t0) => {
      // ticks and frames drawn in a stretch of time around the request; the longest time between two ticks, and between two ticks that saw a new frame
      const win = (a, b) => {
        const w = window.__raf.filter((x) => x[0] >= t0 + a && x[0] <= t0 + b);
        let tick = 0, frame = 0, last = w[0], shown = w[0];
        for (const x of w) { tick = Math.max(tick, x[0] - last[0]); last = x; if (x[1] !== shown[1]) { frame = Math.max(frame, x[0] - shown[0]); shown = x; } }
        return { ticks: w.length, frames: w.length ? w[w.length - 1][1] - w[0][1] : 0, tick, frame };
      };
      const s = window.__saved[window.__saved.length - 1];
      return { before: win(-1000, 0), after: win(0, 1000), ms: s.at - t0, raw: s.raw, packed: s.packed, timing: s.timing || {} };
    }, t0));
  }
  for (const [k, r] of rows.entries()) {
    const t = r.timing;
    console.log(`     state ${k + 1}: game thread stood still ${r1(t.stop)} ms (copy ${r1(t.copy)}, parts ${r1(t.parts)}, their text ${r1(t.text)}, handing over ${r1(t.post)}; made ready in ${t.passes} passes, ${r1(t.prepare)} ms${t.inWait ? ', copied in the time its frame would wait for the display' : ''})`
      + `; save worker: zero pages ${r1(t.scan)}, blob ${r1(t.blob)}, gzip ${Math.round(t.gzip)} ms; page: store ${r1(t.store)} ms; stored ${Math.round(r.ms)} ms after the request, ${(r.raw / 1048576).toFixed(1)} MB as ${(r.packed / 1048576).toFixed(1)} MB`);
    console.log(`              second before: ${r.before.ticks} ticks, ${r.before.frames} frames, longest tick ${r1(r.before.tick)} ms, longest frame ${r1(r.before.frame)} ms; second after: ${r.after.ticks} ticks, ${r.after.frames} frames, longest tick ${r1(r.after.tick)} ms, longest frame ${r1(r.after.frame)} ms`);
  }
  if (rows.length === SAVES) {
    const stops = rows.map((r) => r.timing.stop);
    check(stops.every(Number.isFinite) && median(stops) <= BOUND && Math.max(...stops) <= 2 * BOUND, `${name}: the game thread stands still for a state at most ${BOUND} ms (median; ${2 * BOUND} ms at worst)`, `median ${r1(median(stops))}, worst ${r1(Math.max(...stops))} ms`);
    check(rows.every((r) => r.timing.prepared === true && r.timing.inWait === true), `${name}: every state was copied into memory made ready in the passes before, in the time its frame would have waited for the display`, rows.map((r) => r.timing.passes).join(' '));
    const ticks = rows.map((r) => r.after.tick);
    check(median(ticks) <= TICK, `${name}: the page's tick is at most ${TICK} ms late in the second after a request (median)`, `median ${r1(median(ticks))}, worst ${r1(Math.max(...ticks))} ms; before the requests ${r1(median(rows.map((r) => r.before.tick)))} ms`);
    const lost = rows.map((r) => r.before.frames - r.after.frames);
    check(median(lost) <= LOST, `${name}: at most ${LOST} frames fewer in the second after a request than in the second before (median)`, `lost ${lost.join(' ')}; longest frame after ${rows.map((r) => r1(r.after.frame)).join(' ')} ms, before ${rows.map((r) => r1(r.before.frame)).join(' ')} ms`);
    check(rows.every((r) => r.raw > 20 * 1048576 && r.packed > 1048576 && r.packed < r.raw), `${name}: every state is stored, compressed`, rows.map((r) => `${(r.raw / 1048576).toFixed(1)}>${(r.packed / 1048576).toFixed(1)}`).join(' '));
    const still = await page.evaluate(() => ({ running: window.RecompGame.running, failed: window.__failed.length }));
    check(still.running && still.failed === 0, `${name}: the game runs on and no save failed`, JSON.stringify(still));
  }
  await context.close();
}

if (!only || only === 'desktop') await run('desktop 1280x720', { viewport: { width: 1280, height: 720 } }, 1);
if (!only || only === 'phone') {
  if (isChromium) await run('phone shape 915x412', { viewport: { width: 915, height: 412 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true }, 4);
  else notRun('the phone shape with the page\'s thread four times slower (CDP Emulation.setCPUThrottlingRate)');
}
await browser.close();
notRunSummary();
console.log(failed ? `${failed} check(s) FAILED` : 'all checks passed');
process.exit(failed ? 1 : 0);
