#!/usr/bin/env node
// The phone profile and what the port lets go of while a game runs, in headless Chromium with
// software WebGL. The server must be running (node tools/serve.mjs).
//   node tools/phone-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit]
// 1. Settings on a phone-shaped browser (touch, device pixel ratio 3) and on a desktop: MSAA off
//    once on a phone and a chosen value kept, "Volle schermresolutie" only there, what is taken
//    over from the JavaScript port.
// 2. Drawing sizes: the phone budget (landscape and portrait), a chosen resolution, the desktop
//    window filled to its last line.
// 3. The step-down: twice every pixel of a phone screen with 8 samples is too much for software
//    WebGL; the render scale must go down and MSAA off, on a desktop as well (since 2026-11-14). A
//    display that gives few ticks while the graphics chip has little to do (ten a second here)
//    must change nothing either.
// 4. The frame limit: with a display that ticks 120 times a second a phone draws 60 frames, a
//    desktop all of them. The save state by itself: every three minutes on a phone, every minute
//    on a desktop (run here with both times divided by twenty). A browser without full screen
//    (Safari on an iPhone) with the full-screen setting on: the game starts.
// 5. Original files: held at the start, let go, read again with the same bytes (one fetch), kept
//    after that. Sound: duplicates share their original's samples, nothing is kept both raw and decoded.
// Needs Playwright, taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { launch, engine, isChromium, notRun, notRunSummary, DEV_URL } from './browsers.mjs';
const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (n, d) => { const k = process.argv.indexOf('--' + n); return k < 0 ? d : process.argv[k + 1]; };
const url = opt('url', DEV_URL);
const KEY = 'rcspook-recomp.settings.v1';
const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', '--use-angle=swiftshader', '--enable-unsafe-swiftshader'] });
let failed = 0;
const check = (ok, what, detail = '') => { console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}  [${detail}]`); if (!ok) failed++; };
const open = async (opts, stored, legacy, init) => {
  const context = await browser.newContext(opts);
  if (init) await context.addInitScript(init[0], init[1]);
  // when the game began to run, for the cases that look at how long something takes
  await context.addInitScript(() => { window.addEventListener('recomp-running', () => { window.__runAt = performance.now(); }); });
  await context.addInitScript(([k, v, old]) => { if (location.origin === 'null' || sessionStorage.getItem('__once')) return; sessionStorage.setItem('__once', '1'); if (v !== null) localStorage.setItem(k, v); if (old) localStorage.setItem('redcat.settings.v1', old); }, [KEY, stored === undefined ? null : JSON.stringify(stored), legacy ? JSON.stringify(legacy) : null]);
  const page = await context.newPage();
  page.on('pageerror', (e) => console.log('[pageerror]', e.message));
  return { context, page };
};
const PHONE = { viewport: { width: 915, height: 412 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true };
const PORTRAIT = { viewport: { width: 412, height: 915 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true };
const DESK = { viewport: { width: 1920, height: 1080 } };
const settingsOf = async (opts, stored, legacy) => {
  const t = await open(opts, stored, legacy);
  await t.page.goto(url + '?skipintro=1&nothing=1');
  // (the Hoofdmenu too: the menu takes "Volle schermresolutie" out of the list on a desktop when it is put together,
  // and in WebKit that is after RecompGame.ready resolved for this page)
  await t.page.waitForFunction(() => window.RecompGame && window.__menu && window.__menu.mode === 'menu', null, { timeout: 60000 });
  const r = await t.page.evaluate(async () => { const g = window.RecompGame; await g.ready; const s = g.settings; const out = { msaa: s.get('msaa'), res: s.get('resolution'), flag: s.get('phoneMsaaChecked'), options: [...document.querySelectorAll('#resolution option')].map((o) => o.value).slice(0, 3) }; s.set('msaa', 4); out.after4 = s.get('msaa'); out.stored = JSON.parse(localStorage.getItem('rcspook-recomp.settings.v1') || '{}'); s.reset(); out.reset = { msaa: s.get('msaa'), flag: s.get('phoneMsaaChecked'), res: s.get('resolution') }; return out; });
  await t.context.close();
  return r;
};
let r = await settingsOf(PHONE);
check(r.msaa === 0 && r.flag === true && r.options.includes('full') && r.after4 === 4 && r.stored.msaa === 4 && r.stored.phoneMsaaChecked === true && r.reset.msaa === 0 && r.reset.flag === true, 'phone, first visit: MSAA off, a chosen 4 is kept, reset gives 0, "full" offered', JSON.stringify(r));
r = await settingsOf(PHONE, { msaa: 4, phoneMsaaChecked: true });
check(r.msaa === 4, 'phone, 4 chosen earlier (mark set): stays 4', JSON.stringify(r.msaa));
r = await settingsOf(PHONE, { msaa: 4, showFps: true });
check(r.msaa === 0 && r.flag === true, 'phone, stored 4 without the mark: off once', JSON.stringify([r.msaa, r.flag]));
r = await settingsOf(PHONE, { msaa: 8 });
check(r.msaa === 8, 'phone, stored 8 without the mark: kept', String(r.msaa));
r = await settingsOf(DESK);
check(r.msaa === 4 && r.flag === false && !r.options.includes('full') && r.reset.msaa === 4 && r.reset.flag === false, 'desktop: MSAA 4 as before, no "full" option', JSON.stringify(r));
r = await settingsOf(PHONE, undefined, { resolution: 'full', msaa: 4, phoneMsaaChecked: true, renderScale: 100 });
check(r.msaa === 4 && r.res === 'full', 'phone, taken over from the JavaScript port with its mark: 4 and "full" kept', JSON.stringify([r.msaa, r.res, r.flag]));
r = await settingsOf(PHONE, undefined, { resolution: 'native', msaa: 4, renderScale: 100 });
check(r.msaa === 0 && r.res === 'auto', 'phone, taken over without the mark: 4 goes off once, native is auto', JSON.stringify([r.msaa, r.res, r.flag]));
r = await settingsOf(DESK, undefined, { resolution: 'full', msaa: 4, phoneMsaaChecked: true });
check(r.msaa === 4 && r.res === 'full', 'desktop, taken over "full": kept as a value (drawn as auto)', JSON.stringify([r.msaa, r.res]));

const run = async (opts, stored, seconds, each, init, prepare) => {
  const t = await open(opts, stored, undefined, init);
  if (prepare) await prepare(t);
  await t.page.goto(url + '?autostart=1&world=1');
  await t.page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.stats && window.RecompGame.framesDrawn > 30, null, { timeout: 120000, polling: 250 });
  const rows = [];
  for (let s = 0; s < seconds; s++) {
    rows.push(await t.page.evaluate(() => { const g = window.RecompGame, st = g.stats, c = document.getElementById('screen').getBoundingClientRect(); return { at: +((performance.now() - (window.__runAt || performance.now())) / 1000).toFixed(1), fps: st.fps, wait: st.idle, busy: st.busy, saved: window.__saved || 0, fullscreen: g.settings.get('fullscreen'), size: `${st.width}x${st.height}x${st.samples}`, scale: g.settings.get('renderScale'), msaa: g.settings.get('msaa'), css: `${c.width}x${c.height}`, touch: !document.querySelector('.touch-controls').hidden }; }));
    if (each) await each(t.page, s);
    await t.page.waitForTimeout(1000);
  }
  await t.context.close();
  return rows;
};
const last = (rows) => rows[rows.length - 1];
// What needs a browser that can be a phone (a device pixel ratio of 3; Playwright's Firefox has none), and what
// needs software WebGL to be too slow (a flag of Chromium): left out elsewhere, and said.
const hasPhone = engine !== 'firefox', software = isChromium;
const part = (can, what) => can || notRun(what);
// Headless Firefox's full screen is 1366x768 whatever the viewport (Chromium and WebKit keep the viewport's size),
// so a case that looks at how a window of a given size is filled runs in the window there, and says so.
let windowedSaid = false;
const windowSize = (stored) => { if (engine !== 'firefox') return stored; if (!windowedSaid) { windowedSaid = true; notRun('the desktop sizes in full screen (headless Firefox\'s full screen is 1366x768 whatever the viewport): run in the window, full screen off'); } return { ...stored, fullscreen: false }; };
let rows;
if (part(hasPhone, 'phone landscape and portrait: the drawing budget (needs a device pixel ratio of 3)')) {
rows = await run(PHONE, undefined, 5);
check(last(rows).size === '1073x483x0' && last(rows).css === '915x412' && last(rows).touch, 'phone landscape, auto: the budget, the picture fills the window, touch controls shown', JSON.stringify(last(rows)));
rows = await run(PORTRAIT, undefined, 5);
// held upright the picture fills the screen (the game's screen is 640 x 1422): the same budget, 960x540 pixels in all, the short side within 540 (until 2026-11-15 a 4:3 band, 720x540)
check(last(rows).size === '483x1073x0', 'phone portrait, auto: the picture fills the screen within the budget of 960x540 pixels (483x1073)', JSON.stringify(last(rows)));
}
rows = await run(PHONE, { resolution: '1280x720', phoneMsaaChecked: true, msaa: 2 }, 5);
check(last(rows).size === '1280x720x2', 'phone, a chosen resolution and sample count are taken as given', JSON.stringify(last(rows)));
// (two seconds: on software WebGL a desktop at this size is under 30 frames a second, and after five seconds the step-down below would act)
rows = await run(DESK, windowSize(undefined), 2);
check(last(rows).size === '1920x1080x4' && last(rows).css === '1920x1080' && !last(rows).touch, 'desktop 1920x1080: the whole window, 4 samples, no touch controls', JSON.stringify(last(rows)));
rows = await run({ viewport: { width: 1600, height: 1200 } }, windowSize({ widescreen: false }), 2);
check(last(rows).size === '1600x1200x4', 'desktop 4:3', JSON.stringify(last(rows)));
rows = await run({ viewport: { width: 1920, height: 1080 } }, windowSize({ resolution: '1280x960' }), 2);
check(last(rows).size === '1280x960x4' && last(rows).css === '1440x1080', 'desktop, fixed 4:3 resolution in a 16:9 window', JSON.stringify(last(rows)));
// step-down: twice every pixel of the screen with 8 samples is far too much for software WebGL
if (part(software && hasPhone, 'the step-down of render scale and MSAA, phone and desktop (needs software WebGL, a Chromium flag, to be too slow)')) {
rows = await run(PHONE, { resolution: 'full', renderScale: 200, msaa: 8, phoneMsaaChecked: true }, 24);
console.log('  ' + rows.map((x) => `${x.fps} fps ${x.size} ${x.scale}%`).join(' | '));
// "Not in the first seconds": two seconds of statistics do not count and three low ones are needed, and the
// statistics come once a second from the first second on, so nothing can change before the game has run for
// five seconds. Judged by the time since the game began to run, not by the number of the row: the first row
// is taken when thirty frames were drawn, which takes one second or three on software WebGL (counting rows
// made this case fail now and then).
const early = rows.filter((x) => x.at < 4.5), first = rows.find((x) => x.scale < 200);
check(rows[0].size.startsWith('5490x2472x') && rows[0].msaa === 8 && early.length >= 1 && early.every((x) => x.scale === 200 && x.msaa === 8) && !!first && first.at >= 4.5 && last(rows).msaa === 0 && last(rows).scale <= 175 && last(rows).scale % 25 === 0, 'phone, "full" at 200% with 8 samples on software WebGL: not in the first seconds, then the render scale steps down by 25 and MSAA goes off', JSON.stringify([rows[0], first, last(rows)]));
// the same on a desktop, as in the JavaScript port (until 2026-11-14 nothing was changed there)
rows = await run({ viewport: { width: 1920, height: 1080 }, deviceScaleFactor: 2 }, { renderScale: 200, msaa: 8 }, 24);
console.log('  ' + rows.map((x) => `${x.fps} fps ${x.size} ${x.scale}%`).join(' | '));
{ const early = rows.filter((x) => x.at < 4.5), first = rows.find((x) => x.scale < 200);
  check(rows[0].msaa === 8 && early.every((x) => x.scale === 200 && x.msaa === 8) && !!first && first.at >= 4.5 && last(rows).msaa === 0 && last(rows).scale <= 175 && last(rows).scale % 25 === 0, 'desktop, far too much for software WebGL (twice 3840x2160 with 8 samples): the render scale steps down by 25 and MSAA goes off there too', JSON.stringify([rows[0], first, last(rows)])); }
}
// A display that gives the page a tick only every sixth time (ten a second): few frames, but the
// graphics chip has little to do, and a smaller picture would not give one frame more.
// Every request counts its own frames: the page has more than one frame loop (game.js tick, gamepad.js
// poll, touch and hint code), and one counter for all of them made the share each loop got depend on
// the order the loops happened to be in (the game's loop got anything between none and all of the
// ticks, so this case failed now and then). Each request is answered at the n-th real frame after it,
// so every loop gets a sixth of the frames, whatever the others do.
const everyNth = [(n) => {
  const raf = window.requestAnimationFrame.bind(window), caf = window.cancelAnimationFrame.bind(window);
  const live = new Map(); let ids = 0;
  window.requestAnimationFrame = (f) => { const id = ++ids; let left = n; const g = (t) => { if (--left <= 0) { live.delete(id); f(t); } else live.set(id, raf(g)); }; live.set(id, raf(g)); return id; };
  window.cancelAnimationFrame = (id) => { if (live.has(id)) { caf(live.get(id)); live.delete(id); } };
}, 6];
if (part(hasPhone, 'a phone display that gives ten ticks a second (the drawing size checked needs a device pixel ratio of 3)')) {
rows = await run(PHONE, undefined, 14, null, everyNth);
console.log('  ' + rows.map((x) => `${x.fps} fps, chip at work ${x.busy}%`).join(' | '));
check(rows.slice(4).every((x) => x.fps >= 7 && x.fps <= 13) && last(rows).scale === 100 && last(rows).size === '1073x483x0', 'phone, a display that gives ten ticks a second: under 30 frames, and nothing is changed', JSON.stringify(last(rows)));
}

// --- frame limit, save cadence, full screen ---------------------------------------------------------
// a display of 120 Hz: the page's frame callback comes every 8 ms
const fast = [() => { window.requestAnimationFrame = (f) => setTimeout(() => f(performance.now()), 8); window.cancelAnimationFrame = (id) => clearTimeout(id); }, null];
const small = { resolution: '640x480', msaa: 0, phoneMsaaChecked: true };          // little to draw: software WebGL must reach 120 a second
if (part(software, 'a 120 Hz display: 60 frames on a phone, all on a desktop (measured with Chromium\'s software WebGL and phone emulation)')) {
rows = await run(PHONE, small, 7, null, fast);
const phoneFps = rows.slice(3).map((x) => x.fps);
rows = await run({ viewport: { width: 800, height: 600 } }, small, 7, null, fast);
const deskFps = rows.slice(3).map((x) => x.fps);
check(phoneFps.every((f) => f >= 55 && f <= 63) && deskFps.every((f) => f >= 90), 'a 120 Hz display: 60 frames a second on a phone, all of them on a desktop', `phone ${phoneFps.join(' ')}, desktop ${deskFps.join(' ')}`);
}
// the save state by itself: the two times as the page has them, divided by twenty for this run (9 s and 3 s)
const cadence = async (t) => {
  await t.context.route('**/source/web/game.js', async (route) => {
    const r = await route.fetch(); const body = await r.text(), at = 'const SAVE_EVERY = phone ? 180000 : 60000;';
    check(body.includes(at), 'the page saves by itself every three minutes on a phone and every minute on a desktop', at);
    await route.fulfill({ response: r, body: body.replace(at, 'const SAVE_EVERY = phone ? 9000 : 3000;') });
  });
  await t.context.addInitScript(() => { window.__saved = 0; window.addEventListener('recomp-saved', () => window.__saved++); });
};
rows = await run(PHONE, undefined, 24, null, null, cadence);
const phoneSaves = last(rows).saved;
rows = await run(DESK, { resolution: '640x480', msaa: 0 }, 24, null, null, cadence);
const deskSaves = last(rows).saved;
check(phoneSaves >= 1 && phoneSaves <= 3 && deskSaves >= 4 && deskSaves <= 8, 'and does so: in 24 s with the times divided by twenty, 2 states on a phone and 6 on a desktop, give or take', `phone ${phoneSaves}, desktop ${deskSaves}`);
// a browser without full screen for a page, with the setting on (taken over from the JavaScript port, where it was on by default)
rows = await run(PHONE, { fullscreen: true }, 3, null, [() => { delete Element.prototype.requestFullscreen; delete Document.prototype.exitFullscreen; }, null]);
check(rows.length === 3 && last(rows).fps > 0 && last(rows).fullscreen === true, 'a browser without requestFullscreen and the full-screen setting on: the game starts', JSON.stringify(last(rows)));

// --- files and sound -------------------------------------------------------------------------------
const context = await browser.newContext(PHONE);
const patch = async (file, edits) => context.route('**/source/' + file, async (route) => { const r = await route.fetch(); let body = await r.text(); for (const [a, b] of edits) { if (!body.includes(a)) throw new Error('patch: ' + a); body = body.replace(a, b); } await route.fulfill({ response: r, body }); });
// at pass 100 and again at pass 900 (the files are gone by then) the level file is read whole; then once more
await patch('web/worker.js', [["      if ((++passes & 255) === 0) sweep();", `      if ((++passes & 255) === 0) sweep();
      if (passes === 100 || passes === 900 || passes === 910 || passes === 1500) { const before = stats.fetches, held = stats.held; const b = game.vfs.readAll('C:\\\\REDCAT\\\\LEVELS\\\\LVL00A.BSP'); let h = 2166136261; for (let k = 0; k < b.length; k++) { h ^= b[k]; h = Math.imul(h, 16777619); } log('READ ' + JSON.stringify({ pass: passes, bytes: b.length, hash: h >>> 0, fetched: stats.fetches - before, heldBefore: Math.round(held / 1024), heldAfter: Math.round(stats.held / 1024) })); }`]]);
await patch('web/audio.js', [["    alias: (msg) => {", "    alias: (msg) => { window.__alias = (window.__alias || 0) + 1; window.__aliasOk = (window.__aliasOk || 0) + (bufs.get(msg.of) && bufs.get(msg.of).pcm ? 1 : 0);"], ["  return {\n    handle:", "  window.__bufs = bufs;\n  return {\n    handle:"]]);
const page = await context.newPage();
const reads = [];
page.on('console', (m) => { const t = m.text(); if (t.includes('READ ')) reads.push(JSON.parse(t.slice(t.indexOf('READ ') + 5))); if (m.type() === 'error') console.log('[error]', t.slice(0, 300)); });
page.on('pageerror', (e) => console.log('[pageerror]', e.message));
await page.goto(url + '?autostart=1&world=1');          // (the patches below are made to the scripts as the browser gets them, not to the files)
await page.waitForFunction(() => window.RecompGame && window.RecompGame.running, null, { timeout: 120000 });
for (let k = 0; k < 120 && reads.length < 4; k++) await page.waitForTimeout(1000);
check(reads.length === 4 && reads.every((r) => r.bytes === reads[0].bytes && r.hash === reads[0].hash), 'the level file reads the same bytes every time', reads.map((r) => r.hash).join(' '));
check(reads[0].fetched === 0 && reads[1].heldBefore < 100 && reads[1].fetched === 1 && reads[2].fetched === 0 && reads[3].fetched === 0 && reads[3].heldBefore > 3000, 'held at the start, let go, fetched once more when read again, and kept after that', JSON.stringify(reads.map((r) => [r.pass, r.fetched, r.heldBefore, r.heldAfter])));
const a = await page.evaluate(() => { const bufs = [...window.__bufs.values()]; const pcms = new Set(bufs.map((b) => b.pcm)); let raw = 0, dec = 0; for (const p of pcms) { if (!p) continue; if (p.bytes) raw += p.bytes.length; if (p.buffer) dec += p.buffer.length * p.buffer.numberOfChannels * 4; } return { alias: window.__alias || 0, aliasOk: window.__aliasOk || 0, buffers: bufs.length, samples: pcms.size, rawMb: +(raw / 1048576).toFixed(2), decodedMb: +(dec / 1048576).toFixed(2), both: [...pcms].filter((p) => p && p.bytes && p.buffer).length, playing: window.RecompGame.audioState().map((s) => s.name + ' ' + s.volume + ' ' + s.gain) }; });
check(a.alias > 0 && a.alias === a.aliasOk && a.samples < a.buffers && a.both === 0 && a.playing.length > 0, 'duplicates share their original\'s samples; no samples kept both raw and decoded; sound is playing', `${a.alias} duplicates, ${a.buffers} buffers on ${a.samples} sets of samples, ${a.rawMb} MB raw + ${a.decodedMb} MB decoded`);
await context.close();
await browser.close();
notRunSummary();
console.log(failed ? `${failed} check(s) FAILED` : 'all checks passed');
process.exit(failed ? 1 : 0);
