#!/usr/bin/env node
// What the port puts over and around the game's picture, carried over from the JavaScript port
// (2026-11-14), in headless Chromium. The server must be running (node tools/serve.mjs).
//   node tools/screens-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--gpu] [--before tools/out/overlaps/before] [--only skip,touch,pad,subtitle,fps,fullscreen,pause,msaa,intro,help,results,gamemenu,overlaps,layout]
// skip        E held for two seconds in the Castle's opening scene: the circle fills, letting go
//             empties it, a complete hold skips the scene; while it runs the scene's last picture
//             stays (never black) under the full circle, which only turns when the skip takes long,
//             and nothing is heard on the page but the level's music, which plays on; afterwards the
//             game is on the picture with the controls; the same hold skips nothing more
// touch, pad  the same with a finger on "Overslaan" (a phone) and with X on a controller
// subtitle    the readable box shows the scene's lines; with the setting off there is no box
// fps         "NN FPS" at the right edge under the game's HUD with the setting, nothing without it or while the game waits
// fullscreen  on by default; entered at the first click in a running game; leaving it gives the
//             game an Esc and is not undone by the next click; a browser without it still plays
// pause       the mouse let go by the browser gives the game an Esc; a window that is not in
//             front makes the game wait
// msaa        a sample count the device does not have is marked and explained
// intro       "Bekijk de originele intro" plays the intro again and comes back to the menu
// help        the port's own page "Op avontuur" in the Help viewer, found by its search
// results     the results screen of a world: the line to click or tap, and a click on the picture
//             goes on to the next world
// gamemenu    a phone on its side, the game's own Esc menu open: the touch controls and the gear lie over
//             none of its text (counted in the picture's pixels), the arrow buttons that take the stick's
//             place move the selection, Menu is still there and closes it; the game's pause has no arrows;
//             the retry screen ("Opnieuw proberen?", Ja, Nee) with nothing over its text; and the menu and
//             its page Spelbesturing again in a window near 4:3 (560 x 420) and on a phone held upright
// overlaps    a phone on its side (915 x 412, 844 x 390, 740 x 360, 667 x 375) and upright (412 x 915) and a tablet
//             upright (768 x 1024) with the frame counter on, in every screen (loading, play with the first-time
//             hint, the game's menu, Spelbesturing, Weergave and Geluid, its pause, the retry screen, loading after
//             "Ja" there, the results screen, loading between two worlds): no page control (touch buttons, gear,
//             frame counter, hint, the results line) lies over another, none over the game's title (found in the
//             picture's pixels) or its other text, none on the picture's edge when the picture is a band (upright),
//             and the loading screen has no touch controls; a notice of the port upright lies over neither Menu nor
//             the counter; in the fade after loading no arrows show and the counter does not move twice
// layout      at a desktop's size, a phone on its side and a phone upright: the Help viewer's
//             footer can be read (contrast from its styles), the buttons of the settings' right
//             column have their label on one line clear of the artwork's ends, and the list of
//             Toetsen instellen ends under the wavy line of the page's header
// Screenshots in tools/out/screens-check/. Needs Playwright, taken from PLAYWRIGHT_DIR (default:
// the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { launch, engine, isChromium, chromiumOnly, canPatch, notRun, notRunSummary, DEV_URL } from './browsers.mjs';
const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (n, d) => { const k = process.argv.indexOf('--' + n); return k < 0 ? d : process.argv[k + 1]; };
const url = opt('url', DEV_URL);
const only = String(opt('only', '')).split(',').filter(Boolean), wants = (n) => !only.length || only.includes(n);
const OUT = path.join(ROOT, 'tools/out/screens-check');
fs.mkdirSync(OUT, { recursive: true });
const KEY = 'rcspook-recomp.settings.v1';
const BEFORE = opt('before', '') ? path.resolve(ROOT, opt('before', '')) : '';
if (BEFORE) console.log(`(the page's touch.js, touch.css and index.html are taken from ${path.relative(ROOT, BEFORE)}: an earlier layout, some checks are meant to fail)`);
const gpu = process.argv.includes('--gpu');
if (!isChromium && gpu) notRun('--gpu (a Chromium flag for its GL backend)');
const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...(gpu ? ['--use-angle=gl'] : ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'])] });
let failed = 0;
const check = (ok, what, detail = '') => { console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); if (!ok) failed++; };
// what a wait that may fail answers: false when the time ran out, and the error itself when the page is gone
// (a web process that died is not something the port failed at; the launcher says which it was)
const missed = (e) => { if (/crash|closed|destroyed/i.test(String(e && e.message))) throw e; return false; };
const DESK = { viewport: { width: 1280, height: 720 } };
const PHONE = { viewport: { width: 915, height: 412 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true };
// little to draw, so that software WebGL keeps up
const SMALL = { resolution: '640x480', msaa: 0, phoneMsaaChecked: true };
const open = async (opts, stored, init) => {
  const context = await browser.newContext(opts);
  if (init) await context.addInitScript(init);
  await context.addInitScript(([k, v]) => {
    if (location.origin === 'null') return;
    window.__ev = [];
    for (const name of ['recomp-skip', 'recomp-subtitle', 'recomp-escape', 'recomp-blur', 'recomp-exit', 'recomp-saved', 'recomp-running', 'recomp-hint']) window.addEventListener(name, (e) => window.__ev.push({ name, at: performance.now(), detail: e.detail || null }));
    if (sessionStorage.getItem('__once')) return;
    sessionStorage.setItem('__once', '1');
    if (v !== null) localStorage.setItem(k, v);
  }, [KEY, stored === undefined ? null : JSON.stringify(stored)]);
  // --before <folder>: the page's layout files as they are in that folder (source/web/touch.js, source/web/touch.css,
  // public/index.html under it), to see a check fail on an earlier layout; the headers stay the server's
  if (BEFORE) for (const [pattern, file] of [['**/source/web/touch.js', 'source/web/touch.js'], ['**/source/web/touch.css', 'source/web/touch.css'], [(u) => u.pathname === new URL(url).pathname, 'public/index.html']]) {
    const body = fs.readFileSync(path.join(BEFORE, file), 'utf8');
    await context.route(pattern, async (route) => { if (route.request().resourceType() === 'document' || typeof pattern === 'string') await route.fulfill({ response: await route.fetch(), body }); else await route.continue(); });
  }
  const page = await context.newPage();
  const problems = [];
  page.on('pageerror', (e) => { problems.push(e.message); console.log('[pageerror]', e.message); });
  page.on('console', (m) => { if (m.type() === 'error' && !/favicon|Failed to load resource/.test(m.text())) { problems.push(m.text()); console.log('[error]', m.text().slice(0, 300)); } });
  return { context, page, problems };
};
const running = (page) => page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 30, null, { timeout: 180000, polling: 100 });
const scene = (page) => page.evaluate(() => window.RecompGame.scene());
// (a scene runs, and the page has drawn a frame since: the line "Overslaan" is put up in the page's own frame loop)
const inScene = async (page) => { await page.waitForFunction(() => window.RecompGame.scene().cut === 2, null, { timeout: 60000, polling: 50 }); await page.waitForFunction(() => !document.getElementById('cutscene-skip').hidden, null, { timeout: 3000, polling: 20 }).catch(() => {}); };
const events = (page, name) => page.evaluate((n) => window.__ev.filter((e) => e.name === n), name);
const ring = (page) => page.evaluate(() => { const el = document.getElementById('cutscene-skip'); return { hidden: el.hidden, now: Number(el.getAttribute('aria-valuenow')), label: el.querySelector('b').textContent, aria: el.getAttribute('aria-label'), cls: el.className, box: (() => { const r = el.getBoundingClientRect(); return [Math.round(r.left), Math.round(r.top), Math.round(r.right), Math.round(r.bottom)]; })() }; });
const shot = (page, name) => page.screenshot({ path: path.join(OUT, name + '.png') });
const sounding = (page) => page.evaluate(() => window.RecompGame.audioState().length);

// --- skip: keyboard ----------------------------------------------------------------------------------
if (wants('skip')) {
  console.log('skip: E held for two seconds in the Castle\'s opening scene');
  const t = await open(DESK, { fullscreen: false, ...SMALL });
  await t.page.goto(url + '?autostart=1&world=2');
  await running(t.page); await inScene(t.page);
  let r = await ring(t.page);
  check(!r.hidden && r.now === 0 && r.label === 'E' && /Houd E twee seconden ingedrukt om over te slaan/.test(r.aria) && r.box[2] > 1280 - 60 && r.box[3] > 720 - 60, 'a scene runs: "Overslaan" with the key E at the bottom right, empty', JSON.stringify(r));
  await t.page.keyboard.down('KeyE');
  await t.page.waitForTimeout(1000);
  r = await ring(t.page);
  await shot(t.page, 'skip-hold');
  check(r.now >= 35 && r.now <= 70 && !(await scene(t.page)).skipping, 'after one second of holding: about half full, nothing skipped yet', `${r.now} percent`);
  await t.page.keyboard.up('KeyE');
  await t.page.waitForTimeout(200);
  r = await ring(t.page);
  check(r.now === 0 && (await events(t.page, 'recomp-skip')).length === 0 && (await scene(t.page)).cut === 2, 'letting go empties the circle and the scene plays on', `${r.now} percent`);
  // What the page shows and plays while the skip runs is written down on the page itself, every 4 ms and at every
  // frame of the display: a skip is over within a few of them (about a tenth of a second for this scene in Chromium).
  const before = await t.page.evaluate(() => {
    const G = window.RecompGame, el = document.getElementById('cutscene-skip'), at = performance.now();
    window.__skip = { t: at, started: 0, during: [], held: [] };
    const sample = () => {
      const s = G.scene(), now = performance.now();
      if (!s.skipping && !s.held) return;
      if (!window.__skip.started) window.__skip.started = now;
      (s.skipping ? window.__skip.during : window.__skip.held).push({ at: now, percent: Number(el.getAttribute('aria-valuenow')), ring: !el.hidden, busy: el.classList.contains('busy'), slow: s.slow, picture: getComputedStyle(document.getElementById('screen')).visibility, sub: document.getElementById('subtitle').hidden,
        heard: G.audioState().filter((q) => q.gain > 0.0001).map((q) => q.name.split('\\').pop().toLowerCase()) });
    };
    const loop = () => { sample(); requestAnimationFrame(loop); }; requestAnimationFrame(loop); setInterval(sample, 4);
    return { t: at };
  });
  await t.page.keyboard.down('KeyE');
  await t.page.waitForFunction(() => window.__ev.some((e) => e.name === 'recomp-skip'), null, { timeout: 60000, polling: 20 });
  await t.page.waitForTimeout(700);
  const ev = (await events(t.page, 'recomp-skip'))[0];
  const rec = await t.page.evaluate(() => window.__skip), started = rec.started, during = rec.during;
  check(started - before.t >= 1900 && started - before.t <= 2600, 'a hold of two seconds starts the skip', `${Math.round(started - before.t)} ms after the key went down`);
  // A skip plays the scene in passes of half a second of game time and waits for no display: the Castle's opening
  // scene is some 55 passes. Well within a tenth of the scene's own time in every engine tried.
  const tookMs = ev.at - started, took = `${Math.round(ev.detail.ms / 1000)} s of scene in ${Math.round(tookMs)} ms, ${ev.detail.frames} passes`;
  check(ev.detail.result === 'done' && ev.detail.ms > 5000 && tookMs < ev.detail.ms / 10, 'the scene is over well within a tenth of the time it would have taken', took);
  const bad = during.filter((d) => d.percent !== 100 || !d.ring || d.picture !== 'visible' || !d.sub || d.heard.length > 1 || !d.heard.every((n) => /^level \d/.test(n)));
  check(during.length > 0 && !bad.length, 'while it runs: the circle is full, the picture stays (the scene\'s last, not black), nothing is heard on the page but the level\'s music, no subtitle', `${during.length} samples over ${Math.round(during.length ? during[during.length - 1].at - during[0].at : 0)} ms${bad.length ? '; WRONG: ' + JSON.stringify(bad[0]) : ''}`);
  // the busy sign: only for a skip that takes long (the game thread's estimate, or 250 ms gone by)
  const early = during.filter((d) => d.busy && !d.slow), late = during.filter((d) => d.at - started > 300 && !d.busy);
  check(!early.length && !late.length, 'the circle turns only when the skip takes long on this device (250 ms, or the game thread says so)', `${during.filter((d) => d.busy).length} of ${during.length} samples with the busy sign; the skip took ${Math.round(tookMs)} ms`);
  check(rec.held.every((d) => d.ring && d.percent === 100 && d.picture === 'visible'), 'until the game after the scene is drawn the circle stays over the held picture', `${rec.held.length} samples`);
  await t.page.waitForFunction(() => window.RecompGame.scene().cut === 0 && window.RecompGame.stats && window.RecompGame.stats.control, null, { timeout: 30000, polling: 100 });
  await t.page.waitForTimeout(600);
  const after = await t.page.evaluate(() => ({ picture: getComputedStyle(document.getElementById('screen')).visibility, control: window.RecompGame.stats.control, playing: window.RecompGame.audioState().map((s) => s.name.split('\\').pop().toLowerCase() + ' ' + (s.gain > 0.0001 ? 'heard' : 'silent')), hidden: document.getElementById('cutscene-skip').hidden, running: window.RecompGame.running, crash: window.__crash || null }));
  await shot(t.page, 'skip-after');
  check(after.control && after.running && !after.crash && after.hidden && after.picture === 'visible' && after.playing.some((s) => /^level 2.*heard$/.test(s)) && !after.playing.some((s) => /^(idlefee|magiev|gri5fx|rcgen|flgen).*heard$/.test(s)), 'afterwards: RedCat has the controls, "Overslaan" is gone, the picture is back, the level\'s music plays and nothing of the scene (no voice, no fairy)', JSON.stringify(after.playing.filter((s) => /heard/.test(s))));
  // the key is still down: it must not skip, nor reach anything else, until it is let go
  await t.page.waitForTimeout(500);
  check((await events(t.page, 'recomp-skip')).length === 1 && t.problems.length === 0, 'the same hold skips nothing more; no error on the page', String(t.problems));
  await t.page.keyboard.up('KeyE');
  // a skip asked for with no scene running
  const none = await t.page.evaluate(() => window.RecompGame.skipScene());
  check(none === false, 'with no scene running there is nothing to skip', String(none));
  await t.context.close();
  // The game's own pause (P) over a scene: the game is inside its pause loop and takes no request. The request
  // is taken back, so that the keys reach the game again; when the pause is over the scene can be skipped.
  // (Esc does nothing during a scene in the original: its menu does not open there.)
  const m = await open(DESK, { fullscreen: false, ...SMALL });
  await m.page.goto(url + '?autostart=1&world=2');
  await running(m.page); await inScene(m.page);
  const tapP = async () => { await m.page.keyboard.down('KeyP'); await m.page.waitForTimeout(150); await m.page.keyboard.up('KeyP'); };
  await tapP();
  await m.page.waitForTimeout(1200);
  await shot(m.page, 'skip-game-pause');
  const inPause = await m.page.evaluate(() => ({ hidden: document.getElementById('cutscene-skip').hidden, nested: window.RecompGame.scene().nested, cls: document.documentElement.classList.contains('game-own-loop'), box: getComputedStyle(document.getElementById('subtitle')).visibility }));
  check(inPause.hidden && inPause.nested && inPause.cls && inPause.box === 'hidden', 'inside the game\'s own pause "Overslaan" is not offered (a hold does nothing there) and the subtitle box is out of the way', JSON.stringify(inPause));
  const asked = await m.page.evaluate(() => window.RecompGame.skipScene());
  await m.page.waitForTimeout(1300);
  const held = await m.page.evaluate(() => ({ scene: window.RecompGame.scene(), ended: window.__ev.filter((e) => e.name === 'recomp-skip').length }));
  await tapP();
  await m.page.waitForTimeout(1000);
  const afterPause = await m.page.evaluate(() => ({ hidden: document.getElementById('cutscene-skip').hidden, nested: window.RecompGame.scene().nested }));
  check(!afterPause.hidden && !afterPause.nested, 'and it is offered again when the pause is over', JSON.stringify(afterPause));
  const again = await m.page.evaluate(() => window.RecompGame.skipScene());
  const ok = await m.page.waitForFunction(() => window.__ev.some((e) => e.name === 'recomp-skip' && e.detail.result === 'done'), null, { timeout: 60000, polling: 50 }).then(() => true, missed);
  check(asked === true && held.scene.cut === 2 && held.scene.skipping === false && held.ended === 0 && again === true && ok && m.problems.length === 0, 'asked for while the game\'s own pause holds the scene: taken back after a moment (the keys reach the game again), and it works once the pause is over', JSON.stringify({ asked, held, again, ok }));
  await m.context.close();
}

// --- skip: touch and controller -----------------------------------------------------------------------
if (wants('touch')) {
  console.log('touch: a finger on "Overslaan"');
  const t = await open(PHONE, { fullscreen: false });
  await t.page.goto(url + '?autostart=1&world=2');
  await running(t.page); await inScene(t.page);
  const r = await ring(t.page);
  await shot(t.page, 'skip-touch');
  check(!r.hidden && /touch/.test(r.cls) && r.label === '2s' && /Houd Overslaan twee seconden ingedrukt/.test(r.aria) && r.box[0] < 60 && r.box[3] > 412 - 70, 'on a phone "Overslaan" is a button at the bottom left, where the stick is in play', JSON.stringify(r));
  const hit = await t.page.evaluate(() => { const b = document.getElementById('cutscene-skip').getBoundingClientRect(); const e = document.elementFromPoint(b.left + b.width / 2, b.top + b.height / 2); return e ? (e.closest('#cutscene-skip') ? 'skip' : e.className || e.id) : null; });
  check(hit === 'skip', 'nothing lies over it', String(hit));
  // a finger that is held and lifted is sent through Chromium's CDP
  if (chromiumOnly('touch: a finger held on "Overslaan" and lifted (CDP Input.dispatchTouchEvent)')) {
  const cdp = await t.context.newCDPSession(t.page);
  const x = (r.box[0] + r.box[2]) / 2, y = (r.box[1] + r.box[3]) / 2;
  await cdp.send('Input.dispatchTouchEvent', { type: 'touchStart', touchPoints: [{ x, y, id: 1 }] });
  await t.page.waitForTimeout(900);
  const half = await ring(t.page);
  await cdp.send('Input.dispatchTouchEvent', { type: 'touchEnd', touchPoints: [] });
  await t.page.waitForTimeout(200);
  const let0 = await ring(t.page);
  check(half.now >= 30 && half.now <= 70 && let0.now === 0 && (await events(t.page, 'recomp-skip')).length === 0, 'a finger fills the circle, lifting it empties it', `${half.now} then ${let0.now} percent`);
  await cdp.send('Input.dispatchTouchEvent', { type: 'touchStart', touchPoints: [{ x, y, id: 2 }] });
  const done = await t.page.waitForFunction(() => window.__ev.some((e) => e.name === 'recomp-skip'), null, { timeout: 60000, polling: 20 }).then(() => true, missed);
  await cdp.send('Input.dispatchTouchEvent', { type: 'touchEnd', touchPoints: [] });
  const ev = (await events(t.page, 'recomp-skip'))[0];
  check(done && ev && ev.detail.result === 'done' && t.problems.length === 0, 'held for two seconds it skips the scene', JSON.stringify(ev && ev.detail));
  }
  await t.context.close();
}
if (wants('pad')) {
  console.log('pad: X on a controller');
  // a standard controller, played to the page
  const pad = () => { window.__pad = { axes: [0, 0, 0, 0], buttons: Array.from({ length: 17 }, () => ({ pressed: false, value: 0 })), connected: true, id: 'Test controller (STANDARD GAMEPAD)', index: 0, mapping: 'standard', timestamp: 0 }; navigator.getGamepads = () => [window.__pad]; };
  const t = await open(DESK, { fullscreen: false, ...SMALL }, pad);
  await t.page.goto(url + '?autostart=1&world=2');
  await running(t.page); await inScene(t.page);
  const press = (b, on) => t.page.evaluate(([k, d]) => { window.__pad.buttons[k] = { pressed: d, value: d ? 1 : 0 }; window.__pad.timestamp++; }, [b, on]);
  // the game was started with the mouse: the circle names the key
  await t.page.mouse.click(400, 300); await t.page.waitForTimeout(200);
  const before = await ring(t.page);
  check(!before.hidden && !/controller/.test(before.cls) && before.label === 'E', 'after a mouse click the circle names the key', JSON.stringify(before));
  // a first press of something makes the controller the device in use (gamepad.inUse; nothing is set by hand here)
  await press(12, true); await t.page.waitForTimeout(150); await press(12, false);
  await t.page.waitForTimeout(150);
  const r = await ring(t.page);
  await shot(t.page, 'skip-pad');
  check(!r.hidden && /controller/.test(r.cls) && /^X \//.test(r.label) && /Houd X of vierkant twee seconden ingedrukt/.test(r.aria), 'with a controller in use the circle names X / square', JSON.stringify(r));
  await press(2, true);
  const done = await t.page.waitForFunction(() => window.__ev.some((e) => e.name === 'recomp-skip'), null, { timeout: 60000, polling: 20 }).then(() => true, missed);
  await press(2, false);
  const ev = (await events(t.page, 'recomp-skip'))[0];
  check(done && ev && ev.detail.result === 'done' && t.problems.length === 0, 'X held for two seconds skips the scene', JSON.stringify(ev && ev.detail));
  await t.context.close();
}

// --- the subtitle box ---------------------------------------------------------------------------------
if (wants('subtitle')) {
  console.log('subtitle: the readable box');
  const lines = async (stored) => {
    const t = await open(DESK, { fullscreen: false, ...SMALL, ...stored });
    await t.page.goto(url + '?autostart=1&world=2');
    await running(t.page);
    // the Castle's first two lines come 2.0 and 4.5 s into the world (Node runner, --subtitle-box)
    const got = await t.page.waitForFunction(() => { const s = document.getElementById('subtitle'); return !s.hidden && /RedCat/.test(s.textContent); }, null, { timeout: 12000, polling: 50 }).then(() => true, missed);
    const r = await t.page.evaluate(() => { const s = document.getElementById('subtitle'), b = s.getBoundingClientRect(), c = getComputedStyle(s); return { hidden: s.hidden, text: s.textContent, box: [Math.round(b.left), Math.round(b.top), Math.round(b.width), Math.round(b.height)], font: parseFloat(c.fontSize), background: c.backgroundColor, said: window.__ev.filter((e) => e.name === 'recomp-subtitle' && e.detail.text).map((e) => e.detail.text) }; });
    return { t, got, r };
  };
  let { t, got, r } = await lines({});
  await shot(t.page, 'subtitle-box');
  check(got && r.text === 'Dat was vroeger niet zo, hoor! Je bent toch niet bang, RedCat?' && r.said[0] === 'Het is hier wel donker!', 'the lines of the Castle\'s opening scene appear in the box, in the game\'s order', JSON.stringify(r.said));
  check(r.box[2] > 600 && r.box[2] <= 900 && Math.abs(r.box[0] + r.box[2] / 2 - 640) < 2 && r.box[1] > 720 * 0.6 && r.font >= 18 && /rgba\(10, 7, 19, 0\.88\)/.test(r.background), 'a dark box in the middle near the bottom, at most 900 wide, letters of 18 pixels or more', JSON.stringify(r.box) + ' ' + r.font + 'px ' + r.background);
  // switched off while the scene runs: the box goes, and the game draws its own letters again
  await t.page.evaluate(() => window.RecompGame.settings.set('subtitleBox', false));
  await t.page.waitForTimeout(400);
  const off = await t.page.evaluate(() => document.getElementById('subtitle').hidden);
  await shot(t.page, 'subtitle-original');
  check(off, 'the setting switched off during a scene: the box is gone at once', String(off));
  await t.context.close();
  ({ t, got, r } = await lines({ subtitleBox: false }));
  check(!got && r.hidden && r.said.length === 0 && t.problems.length === 0, 'with the setting off from the start nothing is ever put in the box', JSON.stringify(r.said));
  await t.context.close();
}

// --- the frame counter --------------------------------------------------------------------------------
if (wants('fps')) {
  console.log('fps: the frame counter');
  const read = (page) => page.evaluate(() => { const s = document.getElementById('stats'), b = s.getBoundingClientRect(); return { text: s.textContent, shown: getComputedStyle(s).display !== 'none', box: [Math.round(b.left), Math.round(b.top), Math.round(b.right), Math.round(b.bottom)] }; });
  let t = await open(DESK, { fullscreen: false, showFps: true, ...SMALL });
  await t.page.goto(url + '?autostart=1&world=1');
  await running(t.page);
  await t.page.waitForFunction(() => document.getElementById('stats').textContent !== '', null, { timeout: 10000 }).catch(() => {});
  let r = await read(t.page);
  await shot(t.page, 'fps');
  // The game draws its HUD into the picture: at the top right the potion count and the treasure, from 0.45 of the picture's
  // height left of its right edge and down to 20 percent. The counter was in that corner, over the "/15".
  const hud = await t.page.evaluate(() => { const c = document.getElementById('screen').getBoundingClientRect(); return [Math.round(c.right - 0.45 * c.height), Math.round(c.top), Math.round(c.right), Math.round(c.top + 0.2 * c.height)]; });
  const over = (a, b) => a[0] < b[2] && b[0] < a[2] && a[1] < b[3] && b[1] < a[3];
  check(/^\d+ FPS$/.test(r.text) && r.shown && r.box[2] > 1280 - 20 && !over(r.box, hud) && r.box[1] < 720 * 0.4, 'with "FPS weergeven": "NN FPS" at the right edge, under the game\'s own HUD', JSON.stringify(r) + ' HUD ' + JSON.stringify(hud));
  const notice = await t.page.evaluate(() => { window.RecompGame.hint('test', 2000); const n = document.getElementById('game-notice').getBoundingClientRect(), s = document.getElementById('stats').getBoundingClientRect(), g = document.getElementById('menu-gear').getBoundingClientRect(); const over = (a, b) => a.left < b.right && b.left < a.right && a.top < b.bottom && b.top < a.bottom; return { notice: over(n, s), gear: over(g, s) }; });
  check(!notice.notice && !notice.gear, 'it lies over neither a line of the game\'s notices nor the gear', JSON.stringify(notice));
  await t.page.evaluate(() => window.RecompGame.setPaused(true));
  await t.page.waitForTimeout(1200);
  r = await read(t.page);
  check(r.text === '' && !r.shown, 'a game that waits shows no number', JSON.stringify(r));
  await t.page.evaluate(() => { window.RecompGame.setPaused(false); });
  await t.page.waitForFunction(() => /FPS/.test(document.getElementById('stats').textContent), null, { timeout: 5000 }).catch(() => {});
  await t.page.evaluate(() => window.RecompGame.settings.set('showFps', false));
  await t.page.waitForTimeout(100);
  r = await read(t.page);
  check(r.text === '' && !r.shown, 'the setting switched off: gone at once', JSON.stringify(r));
  await t.context.close();
  t = await open(DESK, { fullscreen: false, ...SMALL });
  await t.page.goto(url + '?autostart=1&world=1&stats=1');
  await running(t.page);
  await t.page.waitForFunction(() => document.getElementById('stats').textContent !== '', null, { timeout: 10000 }).catch(() => {});
  r = await read(t.page);
  check(/fps · \d+ draws\/s · \d+ bestanden/.test(r.text), '?stats in the address shows the long line for development', r.text);
  await t.context.close();
}

// --- full screen ----------------------------------------------------------------------------------------
if (wants('fullscreen')) {
  console.log('fullscreen: on by default, entered at the first click');
  // A browser only enters full screen from a click or a key press; a browser that is driven by a test does not
  // ask for one. The rule is put back here: a request without one is refused, as a real browser does.
  const gestureRule = () => { const real = Element.prototype.requestFullscreen; window.__refused = 0; let gesture = -1e9; for (const type of ['pointerdown', 'mousedown', 'keydown', 'click']) window.addEventListener(type, (e) => { if (e.isTrusted) gesture = performance.now(); }, true); Element.prototype.requestFullscreen = function (...a) { if (performance.now() - gesture > 1000) { window.__refused++; return Promise.reject(new TypeError('Permissions check failed')); } return real.apply(this, a); }; };
  let t = await open(DESK, undefined, gestureRule);
  await t.page.goto(url + '?autostart=1&world=1');
  await running(t.page);
  let r = await t.page.evaluate(() => ({ setting: window.RecompGame.settings.get('fullscreen'), full: !!document.fullscreenElement, refused: window.__refused, running: window.RecompGame.running }));
  check(r.setting === true && r.full === false && r.refused >= 1 && r.running && t.problems.length === 0, 'a first visit has the setting on; a game started without a click asks, is refused, and runs in the window', JSON.stringify(r));
  await t.page.mouse.click(640, 360);
  await t.page.waitForFunction(() => !!document.fullscreenElement, null, { timeout: 5000 }).catch(() => {});
  r = await t.page.evaluate(() => ({ full: !!document.fullscreenElement, element: document.fullscreenElement && document.fullscreenElement.tagName, lock: !!document.pointerLockElement }));
  check(r.full && r.element === 'HTML', 'the first click in the game enters full screen', JSON.stringify(r));
  // the browser leaves full screen (Esc, which the page never sees)
  const before = (await events(t.page, 'recomp-escape')).length;
  const cdp = isChromium ? await t.context.newCDPSession(t.page) : null;          // (kept as it was; nothing is sent through it)
  await t.page.evaluate(() => { window.__left = document.exitFullscreen.bind(document); });
  // (not through the game's own exit: a call the page did not make itself)
  await t.page.evaluate(() => window.__left());
  await t.page.waitForFunction(() => !document.fullscreenElement, null, { timeout: 5000 }).catch(() => {});
  await t.page.waitForTimeout(400);
  r = await t.page.evaluate(() => ({ full: !!document.fullscreenElement, setting: window.RecompGame.settings.get('fullscreen'), stored: JSON.parse(localStorage.getItem('rcspook-recomp.settings.v1') || '{}').fullscreen }));
  const esc = (await events(t.page, 'recomp-escape')).length - before;
  check(!r.full && r.setting === true && r.stored !== false, 'leaving full screen leaves the setting on', JSON.stringify(r));
  check(esc === 1, 'and the game is given the Esc the browser kept (its own menu opens)', `${esc} Esc`);
  await t.page.waitForTimeout(1500);
  await shot(t.page, 'fullscreen-left');
  await t.page.mouse.click(640, 360);
  await t.page.waitForTimeout(600);
  r = await t.page.evaluate(() => ({ full: !!document.fullscreenElement }));
  check(!r.full, 'the next click does not put it back: the player left it', JSON.stringify(r));
  void cdp;
  await t.context.close();
  // the setting off: never asked for
  t = await open(DESK, { fullscreen: false, ...SMALL }, gestureRule);
  await t.page.goto(url + '?autostart=1&world=1');
  await running(t.page);
  await t.page.mouse.click(640, 360);
  await t.page.waitForTimeout(500);
  r = await t.page.evaluate(() => ({ full: !!document.fullscreenElement }));
  check(!r.full, 'with the setting off a click never enters full screen', JSON.stringify(r));
  await t.context.close();
  // a browser without full screen for a page
  t = await open(DESK, undefined, () => { delete Element.prototype.requestFullscreen; delete Document.prototype.exitFullscreen; Object.defineProperty(Document.prototype, 'fullscreenEnabled', { get: () => false }); });
  await t.page.goto(url + '?autostart=1&world=1');
  await running(t.page);
  await t.page.mouse.click(640, 360);
  await t.page.keyboard.press('KeyW');
  await t.page.waitForTimeout(500);
  r = await t.page.evaluate(() => ({ running: window.RecompGame.running, frames: window.RecompGame.framesDrawn, crash: window.__crash || null, setting: window.RecompGame.settings.get('fullscreen') }));
  check(r.running && !r.crash && r.setting === true && t.problems.length === 0, 'a browser without requestFullscreen: the game runs, clicks and keys raise no error', JSON.stringify(r) + ' ' + t.problems.join(' | '));
  await t.context.close();
}

// --- the Esc a browser keeps, and a window that is not in front -------------------------------------------
if (wants('pause')) {
  console.log('pause: the mouse let go, the window not in front');
  const t = await open(DESK, { fullscreen: false, ...SMALL });
  await t.page.goto(url + '?autostart=1&world=1');
  await running(t.page);
  await t.page.waitForFunction(() => window.RecompGame.stats && window.RecompGame.stats.control, null, { timeout: 60000 });
  await t.page.mouse.click(640, 360);
  const locked = await t.page.waitForFunction(() => !!document.pointerLockElement, null, { timeout: 5000 }).then(() => true, missed);
  check(locked, 'a click in the picture catches the mouse', String(locked));
  // the browser gives the mouse back (Esc, which the page never sees): not the game's own call
  await t.page.evaluate(() => document.exitPointerLock());
  await t.page.waitForFunction(() => !document.pointerLockElement, null, { timeout: 5000 }).catch(() => {});
  await t.page.waitForTimeout(500);
  let esc = (await events(t.page, 'recomp-escape')).length;
  check(esc === 1, 'the mouse let go by the browser: the game is given one Esc', `${esc} Esc`);
  await t.page.waitForTimeout(1500);
  await shot(t.page, 'pause-game-menu');
  const frames0 = await t.page.evaluate(() => window.RecompGame.framesDrawn);
  // an Esc the page did get (the mouse was not caught): the game gets that key itself, and no second one
  await t.page.keyboard.press('Escape');
  await t.page.waitForTimeout(500);
  esc = (await events(t.page, 'recomp-escape')).length;
  check(esc === 1, 'an Esc that does reach the page is not doubled', `${esc} made-up Esc in all`);
  // the window is not in front
  await t.page.evaluate(() => { window.__focus = document.hasFocus; document.hasFocus = () => false; window.dispatchEvent(new Event('blur')); });
  await t.page.waitForTimeout(700);
  const a = await t.page.evaluate(() => ({ paused: window.RecompGame.paused, by: window.RecompGame.pausedBy, frames: window.RecompGame.framesDrawn, status: document.getElementById('status').textContent }));
  await t.page.waitForTimeout(700);
  const b = await t.page.evaluate(() => ({ frames: window.RecompGame.framesDrawn }));
  check(a.paused && a.by === 'blur' && b.frames - a.frames <= 1 && /wacht tot dit venster/.test(a.status), 'a window that is not in front: the game waits, and a line says so', JSON.stringify({ a, later: b.frames }));
  await t.page.evaluate(() => { document.hasFocus = window.__focus; window.dispatchEvent(new Event('focus')); });
  await t.page.waitForTimeout(800);
  const c = await t.page.evaluate(() => ({ paused: window.RecompGame.paused, frames: window.RecompGame.framesDrawn, status: document.getElementById('status').textContent }));
  check(!c.paused && c.frames > b.frames + 5 && c.status === '' && c.frames > frames0, 'back in front: it goes on by itself', JSON.stringify(c));
  // a made-up blur event with the window in front (a test, a script) is not a reason to wait
  await t.page.evaluate(() => window.dispatchEvent(new Event('blur')));
  await t.page.waitForTimeout(300);
  const d = await t.page.evaluate(() => window.RecompGame.paused);
  check(d === false && t.problems.length === 0, 'a blur event while the window is in front changes nothing', String(d));
  await t.context.close();
}

// --- anti-aliasing the device does not have --------------------------------------------------------------
if (wants('msaa')) {
  console.log('msaa: a sample count the device does not have');
  const limit4 = () => { for (const C of [self.WebGL2RenderingContext]) { if (!C) continue; const get = C.prototype.getParameter; C.prototype.getParameter = function (p) { return p === 0x8D57 ? 4 : get.call(this, p); }; } };
  const t = await open(DESK, { fullscreen: false, msaa: 8 }, limit4);
  await t.page.goto(url + '?skipintro=1');
  await t.page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 30000 });
  await t.page.keyboard.press('Escape').catch(() => {});
  await t.page.evaluate(() => { for (const d of document.querySelectorAll('dialog[open]')) d.close(); });
  await t.page.click('#open-settings');
  await t.page.click('#open-advanced-settings');
  let r = await t.page.evaluate(() => ({ max: window.RecompGame.maxSamples(), options: [...document.getElementById('msaa').options].map((o) => `${o.textContent}${o.disabled ? ' (off)' : ''}`), value: document.getElementById('msaa').value, status: document.getElementById('msaa-status').textContent }));
  await shot(t.page, 'msaa');
  check(r.max === 4 && r.options[3] === '8x · niet ondersteund' && r.options[2] === '4x' && r.status === 'Dit apparaat ondersteunt 8x niet. Hier wordt 4x MSAA gebruikt.', 'a device with 4 samples and 8 chosen earlier: 8x is marked, and the line says 4x is used', JSON.stringify(r));
  await t.page.selectOption('#msaa', '4');
  r = await t.page.evaluate(() => ({ options: [...document.getElementById('msaa').options].map((o) => `${o.textContent}${o.disabled ? ' (off)' : ''}`), status: document.getElementById('msaa-status').textContent }));
  check(r.options[3] === '8x · niet ondersteund (off)' && /^Maakt randen/.test(r.status), 'with 4x chosen: 8x cannot be chosen any more, the line is the ordinary one', JSON.stringify(r));
  await t.context.close();
}

// --- the intro again, and the port's help page ------------------------------------------------------------
if (wants('intro') || wants('help')) {
  const t = await open(DESK, { fullscreen: false, intro: false });
  await t.page.goto(url);
  await t.page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 30000 });
  // a first visit: the Spelerlijst asks for a name
  await t.page.waitForSelector('#player-name-dialog[open]', { state: 'visible', timeout: 20000 });
  await t.page.fill('#player-name', 'Test');
  await t.page.click('#player-name-save');
  await t.page.waitForSelector('#player-list[open] .player-choice', { state: 'visible', timeout: 20000 });
  await t.page.click('#player-select');
  await t.page.waitForSelector('#player-list:not([open])', { state: 'attached' });
  if (wants('intro')) {
    console.log('intro: "Bekijk de originele intro"');
    const skipped = await t.page.evaluate(() => document.getElementById('menu-movie').hidden);
    check(skipped, 'with "Intro afspelen" off the page opens on the menu', String(skipped));
    await t.page.click('[data-menu-choice="adventure"]'); await t.page.click('#native-next');          // a new player: Moeilijkheid first
    await t.page.click('.native-difficulty[data-difficulty="0"]'); await t.page.click('#native-next');
    await t.page.waitForFunction(() => window.__menu.page === 'startinfo', null, { timeout: 10000 }).catch(() => {});
    await t.page.click('#native-start-extras summary');
    const there = await t.page.evaluate(() => { const b = document.getElementById('play-intro-again'); return { text: b.textContent, visible: b.offsetParent !== null }; });
    await shot(t.page, 'intro-button');
    const others = await t.page.evaluate(() => ['open-recovery', 'start-world-over', 'start-over'].filter((id) => !document.getElementById(id).hidden));
    check(there.text === 'Bekijk de originele intro' && there.visible && others.length === 0, 'Startinfo → Meer opties has "Bekijk de originele intro", for a new player too (and nothing else there)', JSON.stringify({ ...there, others }));
    await t.page.click('#play-intro-again');
    await t.page.waitForFunction(() => window.__menu.movies.name === 'intronl' && window.__menu.movies.state === 'playing', null, { timeout: 15000 }).catch(() => {});
    await t.page.waitForTimeout(1200);
    let r = await t.page.evaluate(() => ({ mode: window.__menu.mode, movie: window.__menu.movies.name, state: window.__menu.movies.state, overlay: !document.getElementById('menu-movie').hidden, menu: document.getElementById('menu').hidden, time: document.getElementById('menu-movie-video').currentTime, music: !!window.__menu.audio.source }));
    await shot(t.page, 'intro-again');
    check(r.mode === 'movie' && r.movie === 'intronl' && r.overlay && r.menu && r.time > 0.3 && !r.music, 'the intro plays over the page, the menu\'s music is off, nothing can be started meanwhile', JSON.stringify(r));
    await t.page.keyboard.press('Space');
    await t.page.waitForFunction(() => window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 10000 }).catch(() => {});
    await t.page.waitForTimeout(500);
    r = await t.page.evaluate(() => ({ mode: window.__menu.mode, overlay: !document.getElementById('menu-movie').hidden, page: document.querySelector('.native-menu-frame').dataset.page, music: !!window.__menu.audio.source, focus: document.activeElement && document.activeElement.id }));
    check(r.mode === 'menu' && !r.overlay && r.page === 'startinfo' && r.music && t.problems.length === 0, 'a key stops it: back on Startinfo with the music', JSON.stringify(r));
  }
  if (wants('help')) {
    console.log('help: the port\'s own page');
    for (let k = 0; k < 4 && (await t.page.evaluate(() => window.__menu.page)) !== 'home'; k++) { await t.page.click('#native-previous'); await t.page.waitForTimeout(200); }
    await t.page.click('#open-settings');
    await t.page.click('#open-more-settings');
    await t.page.click('#open-port-help');
    await t.page.waitForFunction(() => document.getElementById('native-help-viewer').open && /Op avontuur/.test(document.getElementById('native-help-content').textContent), null, { timeout: 10000 }).catch(() => {});
    let r = await t.page.evaluate(() => { const c = document.getElementById('native-help-content'); return { open: document.getElementById('native-help-viewer').open, title: c.querySelector('h2') && c.querySelector('h2').textContent, text: c.textContent, groups: [...document.querySelectorAll('#native-help-topics h3')].map((h) => h.textContent), topics: [...document.querySelectorAll('#native-help-topics section:last-child button')].map((b) => b.textContent), links: [...c.querySelectorAll('.help-topic-link')].map((b) => b.textContent) }; });
    await shot(t.page, 'help-port');
    check(r.open && r.title === 'Op avontuur' && r.groups[r.groups.length - 1] === 'Deze versie' && r.groups[0] === 'Hoofdmenu' && r.topics.join('|') === 'Op avontuur|Controller|Aanraakscherm|Opslaan en verder spelen', 'Meer instellingen → Besturing opens "Op avontuur" in the Help viewer, in a group of its own after the original\'s', JSON.stringify({ title: r.title, groups: r.groups, topics: r.topics }));
    check(/twee seconden vast tijdens een scène/.test(r.text) && /F5: nu opslaan/.test(r.text) && /W, A, S, D/.test(r.text) && r.links.includes('Controller'), 'it names the keys this port adds, the skip and saving, and links to the other pages', JSON.stringify(r.links));
    await t.page.click('#native-help-content .help-topic-link');
    r = await t.page.evaluate(() => ({ title: document.querySelector('#native-help-content h2').textContent, text: document.getElementById('native-help-content').textContent }));
    check(r.title === 'Controller' && /X \/ □ twee seconden vasthouden/.test(r.text) && /LB \/ L1: rustig lopen/.test(r.text), 'the controller page has this port\'s buttons', r.title);
    await t.page.fill('#native-help-search', 'overslaan');
    r = await t.page.evaluate(() => [...document.querySelectorAll('#native-help-topics button')].map((b) => b.textContent));
    check(r.includes('Op avontuur') && r.includes('Aanraakscherm') && !r.includes('Wat moet ik in de Spelerslijst doen?'), 'the viewer\'s search finds the port\'s pages', JSON.stringify(r));
    await t.page.fill('#native-help-search', '');
    // the original's own start page is untouched
    await t.page.click('#native-help-close');
    await t.page.evaluate(() => { for (const d of document.querySelectorAll('dialog[open]')) d.close(); });
    await t.page.click('#native-help');
    await t.page.waitForTimeout(600);
    r = await t.page.evaluate(() => document.querySelector('#native-help-content h2') && document.querySelector('#native-help-content h2').textContent);
    check(!!r && r !== 'Op avontuur' && t.problems.length === 0, 'Help in the Hoofdmenu still opens the original\'s page', String(r));
  }
  await t.context.close();
}

// --- the results screen -----------------------------------------------------------------------------------
if (wants('results')) {
  console.log('results: the overview of a world');
  // The end of a world is made with the game's own command "nextsave", through a test key put into worker.js as
  // the page fetches it (as tools/savestate-check.mjs does). Nothing of it is in the port.
  const testKey = async (context) => context.route('**/source/web/worker.js', async (route) => {
    const r = await route.fetch(); const body = await r.text(), at = "  post({ t: 'running', later });\n";
    if (!body.includes(at)) check(false, 'the test key finds its place in worker.js');
    await route.fulfill({ response: r, body: body.replace(at, `  { const tm = game.m, raw = platform.input.poll; let ask = 0;
    platform.input.poll = () => { const ev = raw(); if (!ev) return ev; return ev.filter((e) => { const mine = (e.type === 'keydown' || e.type === 'keyup') && e.vk === 0xEA; if (mine && e.type === 'keydown') ask = e.vk; return !mine; }); };
    game.host.mainLoop.beforePass.push(() => { if (!ask) return; ask = 0; const u32 = tm.u32, app = u32[0x6B915C >> 2], g = u32[(app + 0x3A4) >> 2]; if (g) tm.call(0x4040F0, [0x694A68, 8], g + 0x68); }); }\n` + at) });
  });
  const reach = async (opts, stored) => {
    const t = await open(opts, stored);
    await testKey(t.context);
    await t.page.goto(url + '?autostart=1&world=1');
    await running(t.page);
    await t.page.waitForFunction(() => window.RecompGame.stats && window.RecompGame.stats.control, null, { timeout: 60000 });
    await t.page.evaluate(async () => { const g = window.RecompGame; g.input.key(0xEA, true); await new Promise((r) => setTimeout(r, 150)); g.input.key(0xEA, false); });
    const got = await t.page.waitForFunction(() => window.RecompGame.scene().state === 4, null, { timeout: 60000, polling: 100 }).then(() => true, missed);
    await t.page.waitForTimeout(2500);
    return { t, got };
  };
  let { t, got } = await reach(DESK, { fullscreen: false, mouseLook: false, ...SMALL });
  let r = await t.page.evaluate(() => { const b = document.getElementById('results-continue'), q = b.getBoundingClientRect(); return { hidden: b.hidden, text: b.textContent, box: [Math.round(q.left), Math.round(q.top), Math.round(q.width), Math.round(q.height)], state: window.RecompGame.scene().state }; });
  await shot(t.page, 'results');
  check(got && !r.hidden && r.text === 'KLIK/TIK hier om verder te gaan' && r.box[1] > 720 * 0.8, 'the results screen (the game\'s own, state 4) gets the line "KLIK/TIK hier om verder te gaan"', JSON.stringify(r));
  // what the original itself does with a mouse button there: the button alone, sent as the game's own input
  await t.page.evaluate(async () => { const g = window.RecompGame; g.input.button(0, true); await new Promise((q) => setTimeout(q, 150)); g.input.button(0, false); });
  await t.page.waitForTimeout(2500);
  const alone = await t.page.evaluate(() => window.RecompGame.scene().state);
  console.log(`     (the left mouse button alone, as the game gets it: the game's state is ${alone} two seconds later; 4 = still the results screen)`);
  if (alone === 4) {
    // The screen also ends by itself: the original's own timer of 90000 ms (CRcGStateRESULTS 0x4900D0, docs/research/cutscenes.md 4).
    // So the click must be seen to work well before that: the state has to leave 4 within ten seconds of it.
    const clickedAt = Date.now();
    await t.page.mouse.click(640, 300);
    const left = await t.page.waitForFunction(() => window.RecompGame.scene().state !== 4, null, { timeout: 10000, polling: 100 }).then(() => true, missed);
    check(left, 'the click leaves the results screen within ten seconds (not the screen\'s own end after 90)', `${((Date.now() - clickedAt) / 1000).toFixed(1)} s`);
    const on = left && await t.page.waitForFunction(() => window.RecompGame.scene().state === 3 && window.RecompGame.players.get(1).world === 2, null, { timeout: 60000, polling: 200 }).then(() => true, missed);
    r = await t.page.evaluate(() => ({ state: window.RecompGame.scene().state, world: window.RecompGame.players.get(1).world, hidden: document.getElementById('results-continue').hidden, running: window.RecompGame.running, crash: window.__crash || null }));
    check(on && r.hidden && r.running && !r.crash, 'a click on the picture goes on: the adventure is in its second world, the line is gone', JSON.stringify(r));
  } else check(alone === 3, 'the original itself goes on at a mouse button', String(alone));
  await t.context.close();
  // a phone: a tap on the line
  ({ t, got } = await reach(PHONE, { fullscreen: false }));
  r = await t.page.evaluate(() => { const b = document.getElementById('results-continue').getBoundingClientRect(); const e = document.elementFromPoint(b.left + b.width / 2, b.top + b.height / 2); return { hit: e && e.id, x: b.left + b.width / 2, y: b.top + b.height / 2 }; });
  await shot(t.page, 'results-phone');
  check(got && r.hit === 'results-continue', 'on a phone the line lies over the touch controls and can be tapped', JSON.stringify(r));
  await t.page.touchscreen.tap(r.x, r.y);
  const leftTap = await t.page.waitForFunction(() => window.RecompGame.scene().state !== 4, null, { timeout: 10000, polling: 100 }).then(() => true, missed);
  const on = leftTap && await t.page.waitForFunction(() => window.RecompGame.scene().state === 3 && window.RecompGame.players.get(1).world === 2, null, { timeout: 60000, polling: 200 }).then(() => true, missed);
  check(leftTap && on && t.problems.length === 0, 'a tap on it leaves the screen within ten seconds and goes on to the second world', JSON.stringify({ leftTap, on }));
  await t.context.close();
}

// --- the touch controls over the game's own menu ------------------------------------------------------------
if (wants('gamemenu')) {
  console.log('gamemenu: the touch controls and the game\'s own Esc menu');
  // no fixed resolution: the picture fills the window, as on a phone (in a 4:3 picture the stick is beside it)
  const STORED = { fullscreen: false, touch: 'on', msaa: 0, phoneMsaaChecked: true };
  // the retry screen is made with the game's own "player died" (0x4DD1A0, health 0 first), through a test key put
  // into worker.js as the page fetches it (as the results part does for the end of a world); nothing of it is in the port
  const retryKey = async (context) => canPatch('web/worker.js') && (await context.route('**/source/web/worker.js', async (route) => {
    const r = await route.fetch(); const body = await r.text(), at = "  post({ t: 'running', later });\n";
    if (!body.includes(at)) check(false, 'the test key finds its place in worker.js');
    await route.fulfill({ response: r, body: body.replace(at, `  { const tm = game.m, raw = platform.input.poll; let ask = 0;
    platform.input.poll = () => { const ev = raw(); if (!ev) return ev; return ev.filter((e) => { const mine = (e.type === 'keydown' || e.type === 'keyup') && e.vk === 0xE9; if (mine && e.type === 'keydown') ask = e.vk; return !mine; }); };
    game.host.mainLoop.beforePass.push(() => { if (!ask) return; ask = 0; const u32 = tm.u32, app = u32[0x6B915C >> 2], g = u32[(app + 0x3A4) >> 2], sub = g ? u32[(g + 0x60) >> 2] : 0, pl = sub ? u32[(sub + 0x360) >> 2] : 0, props = pl ? u32[(pl + 0x1F0) >> 2] : 0; if (!props) return; tm.i32[(props + 0x44) >> 2] = 0; tm.call(0x4DD1A0, [], pl); }); }\n` + at) });
  }), true);
  // RedCat has the controls, no scene runs and the stick is on screen: only then is Esc pressed (a run that began
  // with the stick already hidden could not show the old layout's stick over the entries)
  const ready = (page) => page.waitForFunction(() => { const g = window.RecompGame, st = document.querySelector('.touch-stick'); return g.stats && g.stats.control && g.scene().cut === 0 && !g.scene().nested && st && !st.hidden && st.offsetParent; }, null, { timeout: 120000, polling: 200 }).then(() => true, missed);
  let t = await open(PHONE, STORED);
  const patchedRetry = await retryKey(t.context);
  await t.page.goto(url + '?autostart=1&world=1');
  await running(t.page);
  const stickThere = await ready(t.page);
  const key = async (vk) => { await t.page.evaluate((v) => window.RecompGame.input.key(v, true), vk); await t.page.waitForTimeout(150); await t.page.evaluate((v) => window.RecompGame.input.key(v, false), vk); await t.page.waitForTimeout(700); };
  const SEL = ['.touch-menu', '.touch-stick', '.touch-look', '.touch-camera', '.touch-walk', '.touch-jump', '.touch-fire', '.touch-nav-up', '.touch-nav-down', '.touch-nav-left', '.touch-nav-right', '#menu-gear'];
  const boxes = () => t.page.evaluate((sel) => Object.fromEntries(sel.map((s) => { const e = document.querySelector(s); if (!e || !e.offsetParent) return [s, null]; const r = e.getBoundingClientRect(); return [s, [Math.round(r.x), Math.round(r.y), Math.round(r.width), Math.round(r.height)]]; })), SEL);
  // the game's text under each control: a picture without the page's controls, and in it the pixels that have the
  // colours of the game's menu text (white and grey letters without any tint, orange for the chosen entry; the wavy
  // lines of the menu's bands are light blue and the scene behind it is dimmed). Measured at this size, per
  // thousand of a control's pixels: 11 under the old Menu button (the last letters of the title), 30 under the old
  // stick (three entries), 0 to 1.5 of the scene under a button that is clear of the text. The limit is 5.
  const textUnder = async (bx) => {
    await t.page.addStyleTag({ content: '.touch-controls, #menu-gear, #game-notice, #stats { visibility: hidden !important; }' }).then((h) => (t.hide = h));
    await t.page.waitForTimeout(250);
    const raw = await t.page.screenshot();
    if (bx.save) { fs.writeFileSync(path.join(OUT, bx.save + '.png'), raw); bx = { ...bx }; delete bx.save; }
    const png = raw.toString('base64');
    await t.hide.evaluate((e) => e.remove());
    return t.page.evaluate(async ([b64, bx]) => {
      const bmp = await createImageBitmap(await (await fetch('data:image/png;base64,' + b64)).blob());
      const c = document.createElement('canvas'); c.width = bmp.width; c.height = bmp.height;
      const g = c.getContext('2d', { willReadFrequently: true }); g.drawImage(bmp, 0, 0);
      const k = bmp.width / innerWidth, out = {};
      for (const [name, r] of Object.entries(bx)) {
        if (!r) continue;
        const x0 = Math.max(0, Math.floor(r[0] * k)), y0 = Math.max(0, Math.floor(r[1] * k)), w = Math.min(bmp.width - x0, Math.ceil(r[2] * k)), h = Math.min(bmp.height - y0, Math.ceil(r[3] * k));
        const d = g.getImageData(x0, y0, w, h).data; let n = 0;
        for (let i = 0; i < d.length; i += 4) { const R = d[i], G = d[i + 1], B = d[i + 2], lo = Math.min(R, G, B), hi = Math.max(R, G, B); if ((lo >= 140 && hi - lo <= 10) || (R >= 200 && G >= 90 && G <= 175 && B <= 70)) n++; }
        out[name] = +(1000 * n / Math.max(1, w * h)).toFixed(1);        // per thousand of the control's pixels
      }
      return out;
    }, [png, bx]);
  };
  const play = await boxes();
  check(stickThere && !!play['.touch-stick'] && !!play['.touch-menu'] && !!play['.touch-camera'] && !!play['.touch-walk'] && !play['.touch-nav-up'], 'in play: stick, Menu, Camera and Lopen, no arrow buttons', JSON.stringify(play));
  await key(0x1B);
  const nested = await t.page.waitForFunction(() => window.RecompGame.scene().nested, null, { timeout: 10000, polling: 50 }).then(() => true, missed);
  await t.page.waitForTimeout(1200);
  let bx = await boxes();
  await shot(t.page, 'gamemenu');
  // all of the controls that are on screen, whatever they are called: the old layout fails here with its stick and its Menu
  let under = await textUnder({ ...bx, save: 'gamemenu-clean' });
  check(nested && Object.values(under).every((n) => n <= 5), 'the game\'s menu is open: no touch control lies over its title or its entries (text-coloured pixels of the picture under each, per thousand)', JSON.stringify(under));
  check(!bx['.touch-stick'] && !bx['.touch-look'] && !bx['.touch-camera'] && !bx['.touch-walk'] && !!bx['.touch-menu'] && !!bx['.touch-jump'] && ['up', 'down', 'left', 'right'].every((n) => !!bx['.touch-nav-' + n]), 'stick, look area, Camera and Lopen are gone; Menu, Spring and four arrow buttons are there', JSON.stringify(bx));
  const menuB = bx['.touch-menu'], inside = (r) => !!r && r[0] >= 0 && r[1] >= 0 && r[0] + r[2] <= 915 && r[1] + r[3] <= 412;
  const apart = (a, b) => a[0] + a[2] <= b[0] || b[0] + b[2] <= a[0] || a[1] + a[3] <= b[1] || b[1] + b[3] <= a[1];
  const shown = Object.entries(bx).filter(([, r]) => r);
  check(shown.every(([, r]) => inside(r) && r[2] >= 40 && r[3] >= 40) && shown.every(([a, ra]) => shown.every(([b, rb]) => a === b || apart(ra, rb))), 'they are inside the window, at least 40 pixels each way, and none over another', JSON.stringify(bx));
  // the arrows work: Down three times and Spring opens Spelbesturing (a page with text from top to bottom)
  // a finger held for a moment, as a finger is (CDP); in the other engines the keys those buttons press
  const fingers = chromiumOnly('gamemenu: fingers on the arrow buttons, Spring and Menu (CDP Input.dispatchTouchEvent); their keys are sent instead');
  const cdp = fingers ? await t.context.newCDPSession(t.page) : null;
  const KEYS = { '.touch-nav-down': 0x28, '.touch-jump': 0x0D, '.touch-menu': 0x1B };
  const tapOn = async (sel) => {
    const r = (await boxes())[sel];
    if (!cdp) { await key(KEYS[sel]); return; }
    if (!r) return;
    await cdp.send('Input.dispatchTouchEvent', { type: 'touchStart', touchPoints: [{ x: r[0] + r[2] / 2, y: r[1] + r[3] / 2, id: 3 }] });
    await t.page.waitForTimeout(150);
    await cdp.send('Input.dispatchTouchEvent', { type: 'touchEnd', touchPoints: [] });
    await t.page.waitForTimeout(700);
  };
  for (let k = 0; k < 3; k++) await tapOn('.touch-nav-down');
  await tapOn('.touch-jump'); await t.page.waitForTimeout(900);
  bx = await boxes(); under = await textUnder({ ...bx, save: 'gamemenu-spelbesturing-clean' });
  await shot(t.page, 'gamemenu-spelbesturing');
  const page2 = await textUnder({ right: [520, 60, 130, 260] });            // in the keys' column of Spelbesturing (12 to 18 per thousand there); the first page has nothing there
  check((await scene(t.page)).nested && page2.right > 6, '▼ three times and Spring: the page Spelbesturing is on screen', JSON.stringify(page2));
  check(Object.values(under).every((n) => n <= 5), 'on that page too no touch control lies over text', JSON.stringify(under));
  // Menu: back to the first page, and again: the game goes on, with its own controls back
  await tapOn('.touch-menu'); await t.page.waitForTimeout(600);
  const still = (await scene(t.page)).nested;
  if (still) await tapOn('.touch-menu');
  const closed = await t.page.waitForFunction(() => !window.RecompGame.scene().nested, null, { timeout: 10000, polling: 50 }).then(() => true, missed);
  await t.page.waitForTimeout(500);
  const back = await boxes();
  check(closed && JSON.stringify(back['.touch-menu']) === JSON.stringify(play['.touch-menu']) && !!back['.touch-camera'] && !!back['.touch-walk'] && !back['.touch-nav-up'], 'Menu closes the game\'s menu; Menu, Camera and Lopen are where they were and the arrows are gone', JSON.stringify(back));
  // the game's pause (P): a loop of its own with nothing to choose, so no arrows (game.scene().own, read from the game's stack)
  await key(0x50); await t.page.waitForTimeout(600);
  let own = await scene(t.page); bx = await boxes();
  check(own.nested && own.own === 'pause' && !bx['.touch-nav-up'] && !bx['.touch-nav-left'] && !!bx['.touch-menu'], 'the game\'s pause: known as the pause, and without arrow buttons', JSON.stringify([own, Object.keys(bx).filter((n) => bx[n])]));
  await key(0x50); await t.page.waitForTimeout(400);
  // the retry screen
  if (patchedRetry) {
    await ready(t.page);
    await key(0xE9);
    const retry = await t.page.waitForFunction(() => window.RecompGame.scene().own === 'retry', null, { timeout: 30000, polling: 100 }).then(() => true, missed);
    await t.page.waitForTimeout(2500);
    bx = await boxes(); await shot(t.page, 'gamemenu-retry');
    under = await textUnder({ ...bx, save: 'gamemenu-retry-clean' });
    // the screen's own text, where the old layout had Menu (over the title's end) and Spring (over Nee): it must be there to be counted
    const there = await textUnder({ title: [350, 0, 215, 45], nee: [730, 368, 150, 40] });
    check(retry && there.title > 20 && there.nee > 20, 'the retry screen is on screen ("Opnieuw proberen?", Nee)', JSON.stringify(there));
    check(retry && Object.values(under).every((n) => n <= 5), 'the retry screen: no touch control and no gear lies over its title, its question or Ja and Nee', JSON.stringify(under));
    check(!bx['.touch-fire'] && !!bx['.touch-jump'] && !!bx['.touch-nav-left'] && !!bx['.touch-nav-right'] && !!bx['.touch-menu'], 'it has Menu, Spring and the arrows, and no Schieten', JSON.stringify(Object.keys(bx).filter((n) => bx[n])));
  } else notRun('gamemenu: the retry screen (needs a test key put into web/worker.js on its way to a worker)');
  check(t.problems.length === 0, 'no errors on the page', t.problems.slice(0, 3).join(' | '));
  await t.context.close();
  // other shapes: the menu and Spelbesturing, counted the same way (the gear with them)
  for (const [name, size] of [['560 x 420 (near 4:3)', { viewport: { width: 560, height: 420 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true }], ['412 x 915 (upright)', { viewport: { width: 412, height: 915 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true }]]) {
    t = await open(size, STORED);
    await t.page.goto(url + '?autostart=1&world=1');
    await running(t.page);
    await ready(t.page);
    await key(0x1B);
    const isOpen = await t.page.waitForFunction(() => window.RecompGame.scene().nested, null, { timeout: 10000, polling: 50 }).then(() => true, missed);
    await t.page.waitForTimeout(1200);
    bx = await boxes(); under = await textUnder({ ...bx, save: 'gamemenu-' + size.viewport.width + '-clean' });
    await shot(t.page, 'gamemenu-' + size.viewport.width);
    for (let k = 0; k < 3; k++) await key(0x28);
    await key(0x0D); await t.page.waitForTimeout(900);
    const bx2 = await boxes(), under2 = await textUnder({ ...bx2, save: 'gamemenu-' + size.viewport.width + '-spelbesturing-clean' });
    await shot(t.page, 'gamemenu-' + size.viewport.width + '-spelbesturing');
    const W = size.viewport.width, H = size.viewport.height, shown2 = Object.entries(bx2).filter(([, r]) => r);
    check(isOpen && !!bx['.touch-nav-up'] && !!bx2['#menu-gear'] && Object.values(under).every((n) => n <= 5) && Object.values(under2).every((n) => n <= 5), `${name}: the game's menu and Spelbesturing: no touch control and no gear over their text`, JSON.stringify([under, under2]));
    check(shown2.every(([, r]) => r[0] >= 0 && r[1] >= 0 && r[0] + r[2] <= W && r[1] + r[3] <= H && r[2] >= 36 && r[3] >= 36), `${name}: the controls are inside the window and at least 36 pixels each way`, JSON.stringify(bx2));
    check(t.problems.length === 0, `${name}: no errors on the page`, t.problems.slice(0, 3).join(' | '));
    await t.context.close();
  }
}

// --- the page's controls against each other and against the game's titles, with the frame counter on -----------
if (wants('overlaps')) {
  console.log('overlaps: touch buttons, gear and frame counter in every screen of a phone');
  // Found 2026-11-15 (tools/out/overlaps): Menu lay over the last letter of the loading screen's title "Even Wachten"
  // (the title reaches 0.205 of the picture's height from the middle; Menu began 0.16 of it + 16 pixels from there),
  // the frame counter lay over the arrow ▶ in the game's menu, on its retry screen and while loading (915 x 412: the
  // counter 191 to 219 down, the arrows from 214 or 183), and on a phone held upright it stood on the picture, over a
  // number of the results screen's score column.
  const STORED = { fullscreen: false, touch: 'on', showFps: true, msaa: 0, phoneMsaaChecked: true, mouseLook: false };
  const AT = "  post({ t: 'running', later });\n";
  // the game's own "nextsave" (0xEA: the end of a world) and "player died" (0xE9), as the parts results and gamemenu have them
  const testKeys = async (context) => canPatch('web/worker.js') && (await context.route('**/source/web/worker.js', async (route) => {
    const r = await route.fetch(); const body = await r.text();
    if (!body.includes(AT)) check(false, 'the test keys find their place in worker.js');
    await route.fulfill({ response: r, body: body.replace(AT, `  { const tm = game.m, raw = platform.input.poll; let ask = 0;
    platform.input.poll = () => { const ev = raw(); if (!ev) return ev; return ev.filter((e) => { const mine = (e.type === 'keydown' || e.type === 'keyup') && (e.vk === 0xEA || e.vk === 0xE9); if (mine && e.type === 'keydown') ask = e.vk; return !mine; }); };
    game.host.mainLoop.beforePass.push(() => { if (!ask) return; const a = ask; ask = 0; const u32 = tm.u32, app = u32[0x6B915C >> 2], g = u32[(app + 0x3A4) >> 2]; if (!g) return;
      if (a === 0xEA) { tm.call(0x4040F0, [0x694A68, 8], g + 0x68); return; }
      const sub = u32[(g + 0x60) >> 2], pl = sub ? u32[(sub + 0x360) >> 2] : 0, props = pl ? u32[(pl + 0x1F0) >> 2] : 0; if (!props) return; tm.i32[(props + 0x44) >> 2] = 0; tm.call(0x4DD1A0, [], pl); }); }\n` + AT) });
  }), true);
  const TOUCH = ['.touch-menu', '.touch-stick', '.touch-camera', '.touch-walk', '.touch-jump', '.touch-fire', '.touch-nav-up', '.touch-nav-down', '.touch-nav-left', '.touch-nav-right', '.touch-fly-up', '.touch-fly-down'];
  const SEL = [...TOUCH, '#menu-gear', '#stats', '#results-continue', '#game-notice', '#cutscene-skip'];
  const HIDE = '.touch-controls, #menu-gear, #game-notice, #stats, #results-continue, #cutscene-skip, #subtitle, #status { visibility: hidden !important; }';
  for (const [name, size] of [['915 x 412', { viewport: { width: 915, height: 412 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true }], ['844 x 390', { viewport: { width: 844, height: 390 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true }], ['740 x 360', { viewport: { width: 740, height: 360 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true }], ['667 x 375', { viewport: { width: 667, height: 375 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true }], ['412 x 915 (upright)', { viewport: { width: 412, height: 915 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true }], ['768 x 1024 (tablet upright)', { viewport: { width: 768, height: 1024 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true }]]) {
    const t = await open(size, STORED);
    const patched = await testKeys(t.context);
    const tagOf = size.viewport.width + 'x' + size.viewport.height;
    const key = async (vk, after = 700) => { await t.page.evaluate((v) => window.RecompGame.input.key(v, true), vk); await t.page.waitForTimeout(150); await t.page.evaluate((v) => window.RecompGame.input.key(v, false), vk); await t.page.waitForTimeout(after); };
    // every control that is on screen, in the page's pixels: [left, top, right, bottom]; and where the picture is
    const layout = () => t.page.evaluate((sel) => {
      const c = document.getElementById('screen').getBoundingClientRect(), boxes = {};
      for (const q of sel) { const e = document.querySelector(q); if (!e || e.hidden) continue; const cs = getComputedStyle(e); if (cs.display === 'none' || cs.visibility === 'hidden' || (!e.offsetParent && cs.position !== 'fixed')) continue; const r = e.getBoundingClientRect(); if (r.width > 0 && r.height > 0) boxes[q] = [r.left, r.top, r.right, r.bottom].map((v) => Math.round(v)); }
      return { boxes, picture: [c.left, c.top, c.width, c.height].map(Math.round), scene: window.RecompGame.scene(), fps: document.getElementById('stats').textContent, screen: document.documentElement.dataset.gameScreen || '' };
    }, SEL);
    // The picture without the page's controls: the title's letters (text-coloured pixels in the top band of the picture,
    // 0.01 to 0.105 of its height down, right of the logo in the corner) as a box in the page's pixels, and the share
    // of text-coloured pixels under each control (per thousand, as the part gamemenu counts them).
    const picture = async (lay, save) => {
      const h = await t.page.addStyleTag({ content: HIDE });
      await t.page.waitForTimeout(150);
      const raw = await t.page.screenshot({ scale: 'css' });
      await h.evaluate((e) => e.remove());
      if (save) fs.writeFileSync(path.join(OUT, `overlaps-${tagOf}-${save}-clean.png`), raw);
      return t.page.evaluate(async ([b64, pic, boxes]) => {
        const bmp = await createImageBitmap(await (await fetch('data:image/png;base64,' + b64)).blob());
        const c = document.createElement('canvas'); c.width = bmp.width; c.height = bmp.height;
        const g = c.getContext('2d', { willReadFrequently: true }); g.drawImage(bmp, 0, 0);
        const k = bmp.width / innerWidth;
        const isText = (R, G, B) => { const lo = Math.min(R, G, B), hi = Math.max(R, G, B); return (lo >= 140 && hi - lo <= 10) || (R >= 200 && G >= 90 && G <= 175 && B <= 70); };
        const [px, py, pw, ph] = pic, u = Math.min(ph, 0.75 * pw), y0 = Math.round((py + 0.01 * ph) * k), y1 = Math.round((py + 0.105 * ph) * k), x0 = Math.round((px + 0.32 * u) * k), x1 = Math.round((px + pw) * k);          // u: the height the game's 480 lines have (a picture higher than 4:3, a phone held upright, is more lines high; its text has the original's size)
        const d = g.getImageData(0, y0, bmp.width, y1 - y0).data; let lo = 1e9, hi = -1, top = 1e9, bottom = -1;
        for (let y = 0; y < y1 - y0; y++) for (let x = x0; x < x1; x++) { const i = (y * bmp.width + x) * 4; if (isText(d[i], d[i + 1], d[i + 2])) { if (x < lo) lo = x; if (x > hi) hi = x; if (y < top) top = y; if (y > bottom) bottom = y; } }
        const under = {};
        for (const [q, r] of Object.entries(boxes)) {
          const bx = Math.max(0, Math.floor(r[0] * k)), by = Math.max(0, Math.floor(r[1] * k)), w = Math.min(bmp.width - bx, Math.ceil((r[2] - r[0]) * k)), hh = Math.min(bmp.height - by, Math.ceil((r[3] - r[1]) * k));
          if (w <= 0 || hh <= 0) continue;
          const p = g.getImageData(bx, by, w, hh).data; let n = 0;
          for (let i = 0; i < p.length; i += 4) if (isText(p[i], p[i + 1], p[i + 2])) n++;
          under[q] = +(1000 * n / (w * hh)).toFixed(1);
        }
        return { title: hi < 0 ? null : [lo / k, (y0 + top) / k, (hi + 1) / k, (y0 + bottom + 1) / k].map((v) => Math.round(v)), reach: hi < 0 ? null : +(Math.max(px + pw / 2 - lo / k, (hi + 1) / k - px - pw / 2) / u).toFixed(3), under };
      }, [raw.toString('base64'), lay.picture, lay.boxes]);
    };
    const crossing = (a, b, gap = 0) => a[0] < b[2] + gap && b[0] < a[2] + gap && a[1] < b[3] + gap && b[1] < a[3] + gap;
    // one screen: what must hold for the page's controls there
    //   title:  the reach its title must have (of the picture's height from the middle), to know the right screen is measured
    //   text:   count the game's text under each control (not in play: the scene has pixels of every colour)
    const look = async (screen, { title = null, text = true, want = [], none = [], given = null } = {}) => {
      // (given: a layout and its picture taken before, for a screen that does not stand still)
      const lay = given ? given.lay : await layout(); await shot(t.page, `overlaps-${tagOf}-${screen}`);
      const pic = given ? given.pic : await picture(lay, screen);
      const names = Object.keys(lay.boxes), W = size.viewport.width, H = size.viewport.height;
      const pairs = []; for (let a = 0; a < names.length; a++) for (let b = a + 1; b < names.length; b++) if (crossing(lay.boxes[names[a]], lay.boxes[names[b]])) pairs.push(names[a] + ' over ' + names[b]);
      const outside = names.filter((q) => { const r = lay.boxes[q]; return r[0] < 0 || r[1] < 0 || r[2] > W || r[3] > H; });
      // upright the picture is a band in the middle: a touch button is above it, on it or below it, never on its edge
      // (a tablet's arrows stood on its bottom edge); the gear and Camera are meant to stand on the picture
      const [, pTop, , pH] = lay.picture, edge = H > W ? names.filter((q) => TOUCH.includes(q) && q !== '.touch-camera' && q !== '.touch-stick').filter((q) => { const r = lay.boxes[q]; return (r[1] < pTop && r[3] > pTop) || (r[1] < pTop + pH && r[3] > pTop + pH); }) : [];
      if (H > W) check(edge.length === 0, `${name}, ${screen}: no touch button stands on the picture's upper or lower edge`, edge.join(', ') || `picture ${pTop} to ${pTop + pH}`);
      check(pairs.length === 0 && outside.length === 0, `${name}, ${screen}: no page control lies over another, all inside the window`, pairs.concat(outside.map((q) => q + ' outside')).join(', ') || names.map((q) => q.replace(/^[.#](touch-)?/, '') + ' ' + lay.boxes[q].join(',')).join(' | '));
      if (title) {
        // six pixels between a control and the title's letters: the old Menu button began one pixel inside the last one
        const onTitle = pic.title ? names.filter((q) => crossing(lay.boxes[q], pic.title, 6)) : [];
        check(!!pic.title && pic.reach >= title[0] && pic.reach <= title[1] && onTitle.length === 0, `${name}, ${screen}: the title is on screen and no page control is within six pixels of its letters`, JSON.stringify({ title: pic.title, reach: pic.reach, expected: title, near: onTitle, menu: lay.boxes['.touch-menu'] || null }));
      }
      if (text) { const on = Object.entries(pic.under).filter(([, n]) => n > 5); check(on.length === 0, `${name}, ${screen}: no page control lies over the game's text (text-coloured pixels under each, per thousand; limit 5)`, JSON.stringify(on.length ? on : pic.under)); }
      const missing = want.filter((q) => !lay.boxes[q]), extra = none.filter((q) => lay.boxes[q]);
      if (want.length || none.length) check(missing.length === 0 && extra.length === 0, `${name}, ${screen}: ${want.length ? want.map((q) => q.replace(/^[.#](touch-)?/, '')).join(', ') + ' on screen' : ''}${want.length && none.length ? '; ' : ''}${none.length ? 'none of ' + (none === TOUCH ? 'the touch controls' : none.map((q) => q.replace(/^[.#](touch-)?/, '')).join(', ')) : ''}`, JSON.stringify({ missing, extra, screen: lay.screen, scene: lay.scene }));
      return { lay, pic };
    };
    // (the world's opening scene first: RedCat has the controls for a moment before it begins)
    const opened = () => t.page.waitForFunction(() => window.RecompGame.scene().cut === 2, null, { timeout: 20000, polling: 50 }).catch(missed);
    const playing = () => t.page.waitForFunction(() => { const g = window.RecompGame, st = document.querySelector('.touch-stick'); return g.stats && g.stats.control && g.scene().cut === 0 && !g.scene().nested && st && !st.hidden && st.offsetParent && /FPS/.test(document.getElementById('stats').textContent); }, null, { timeout: 180000, polling: 200 }).then(() => true, missed);
    // loading: the title fades in and the screen is drawn again now and then, so the picture is taken until its title is in it
    const loading = async (screen) => {
      const in1 = await t.page.waitForFunction(() => window.RecompGame.running && window.RecompGame.scene().state === 1 && window.RecompGame.framesDrawn > 3, null, { timeout: 180000, polling: 30 }).then(() => true, missed);
      await t.page.waitForTimeout(400);          // the page looks at the game's screen every 150 ms (touch.js)
      let seen = null;
      for (let k = 0; k < 40 && in1 && !seen; k++) { const lay = await layout(); if (lay.scene.state !== 1) break; const pic = await picture(lay); if (pic.title && pic.reach > 0.18 && pic.reach < 0.24) seen = { lay, pic }; else await t.page.waitForTimeout(150); }
      check(in1 && !!seen, `${name}, ${screen}: the game's loading screen is on screen (state 1, the title "Even Wachten" in the picture)`, JSON.stringify(seen && { title: seen.pic.title, reach: seen.pic.reach }));
      if (seen) await look(screen, { given: seen, title: [0.18, 0.24], none: TOUCH, want: ['#menu-gear'] });
    };
    await t.page.goto(url + '?autostart=1&world=1');
    await loading('loading');
    await opened();
    check(await playing(), `${name}: the world is played, with the stick and the frame counter on screen`);
    await t.page.waitForTimeout(800);
    await look('play', { text: false, want: ['.touch-menu', '.touch-stick', '.touch-camera', '.touch-walk', '.touch-jump', '.touch-fire', '#menu-gear', '#stats'] });
    if (size.viewport.height > size.viewport.width) {
      // a notice of the port (not the hint), put on screen as game.js shows it (showNotice: the text, no class): upright
      // it lay over Menu and, with the counter in the top left corner, over the counter
      const was = await t.page.evaluate(() => { const n = document.getElementById('game-notice'), was = [n.className, n.textContent, n.hidden]; n.className = ''; n.textContent = 'Opslaan lukt nu niet. Je kunt gewoon verder spelen.'; n.hidden = false; return was; });
      const lay = await layout(), n = lay.boxes['#game-notice'], on = n ? Object.keys(lay.boxes).filter((q) => q !== '#game-notice' && crossing(lay.boxes[q], n)) : ['(no notice)'];
      await shot(t.page, `overlaps-${tagOf}-notice`);
      check(on.length === 0 && n[0] >= 0 && n[2] <= size.viewport.width, `${name}, play: a notice of the port lies over no page control`, JSON.stringify({ notice: n, over: on, stats: lay.boxes['#stats'], menu: lay.boxes['.touch-menu'] }));
      await t.page.evaluate(([c, text, hidden]) => { const n = document.getElementById('game-notice'); n.className = c; n.textContent = text; n.hidden = hidden; }, was);
    }
    await key(0x1B); await t.page.waitForFunction(() => window.RecompGame.scene().own === 'menu', null, { timeout: 10000, polling: 50 }).catch(missed); await t.page.waitForTimeout(1200);
    const NAV = ['.touch-nav-up', '.touch-nav-down', '.touch-nav-left', '.touch-nav-right'];
    await look('menu', { title: [0.13, 0.17], want: ['.touch-menu', '.touch-jump', ...NAV, '#menu-gear', '#stats'] });
    for (let k = 0; k < 3; k++) await key(0x28, 300);
    await key(0x0D); await t.page.waitForTimeout(900);
    await look('spelbesturing', { title: [0.145, 0.18], want: ['.touch-menu', ...NAV, '#stats'] });
    // Weergave and Geluid: the pages with the sliders ◀ ▶ are for (their titles reach 0.115 and 0.07)
    for (const [n, page, reach] of [[4, 'weergave', [0.09, 0.14]], [5, 'geluid', [0.05, 0.095]]]) {
      await key(0x1B, 900); if ((await scene(t.page)).own !== 'menu') await key(0x1B, 900);
      await key(0x28, 300);                                                // Esc on a page goes back to the menu, the selection where it was: one entry down
      await key(0x0D); await t.page.waitForTimeout(900);
      await look(page, { title: reach, want: ['.touch-menu', '.touch-jump', ...NAV, '#stats'] });
    }
    await key(0x1B); if ((await scene(t.page)).nested) await key(0x1B);
    await t.page.waitForFunction(() => !window.RecompGame.scene().nested, null, { timeout: 10000, polling: 50 }).catch(missed);
    await key(0x50); await t.page.waitForTimeout(600);
    await look('pause', { want: ['.touch-menu', '#stats'], none: NAV });
    await key(0x50); await t.page.waitForTimeout(400);
    if (patched) {
      await playing(); await key(0xE9);
      const retry = await t.page.waitForFunction(() => window.RecompGame.scene().own === 'retry', null, { timeout: 30000, polling: 100 }).then(() => true, missed);
      await t.page.waitForTimeout(2500);
      if (retry) await look('retry', { title: [0.25, 0.30], want: ['.touch-menu', '.touch-jump', '.touch-nav-left', '.touch-nav-right', '#stats'], none: ['.touch-fire'] }); else check(false, `${name}: the retry screen came`);
      if (retry) {
        // "Ja" as Spring gives it (the jump keys and Enter, touch.js): the world is loaded again
        const vks = await t.page.evaluate(() => { const g = window.RecompGame, v = [...g.input.vks('jump'), 0x0D]; for (const k of v) g.input.key(k, true); return v; });
        await t.page.waitForTimeout(250); await t.page.evaluate((v) => { for (const k of v) window.RecompGame.input.key(k, false); }, vks);
        await loading('loading after Ja');
      }
      // the end of a world, in a game of its own: the results screen, and from it the loading screen of the next world
      await t.page.goto(url + '?autostart=1&world=1');
      await running(t.page); await opened(); await playing(); await t.page.waitForTimeout(500);
      await key(0xEA);
      const results = await t.page.waitForFunction(() => window.RecompGame.scene().state === 4, null, { timeout: 60000, polling: 100 }).then(() => true, missed);
      await t.page.waitForTimeout(2500);
      if (results) await look('results', { title: [0.12, 0.17], want: ['.touch-fire', '#results-continue', '#stats'], none: [...NAV, '.touch-jump'] }); else check(false, `${name}: the results screen came`);
      await t.page.evaluate(() => window.RecompGame.continueResults());
      await loading('loading the next world');
      // From the loading screen into the world: the game fades (a loop of its own with no name, touch.js "fade"). The
      // page took it for the game's menu: the arrows flashed and the counter went to the menu's place and back.
      const seen = await t.page.evaluate(() => new Promise((done) => {
        const out = { arrows: 0, places: [], screens: [], fade: 0 }, t0 = performance.now(); let played = 0;
        const step = () => {
          const g = window.RecompGame, s = g.scene(), st = document.getElementById('stats'), scr = document.documentElement.dataset.gameScreen || '-';
          if ([...document.querySelectorAll('.touch-nav')].some((b) => !b.hidden && b.offsetParent)) out.arrows++;
          if (s.nested && !s.own && s.state === 3) out.fade++;
          if (out.screens[out.screens.length - 1] !== scr) out.screens.push(scr);
          if (st.textContent) { const r = st.getBoundingClientRect(), at = Math.round(r.left) + ',' + Math.round(r.top); if (out.places[out.places.length - 1] !== at) out.places.push(at); }
          if (s.state === 3 && !s.nested) played++; else played = 0;
          if (played > 30 || performance.now() - t0 > 120000) done(out); else setTimeout(step, 16);
        };
        step();
      }));
      check(seen.arrows === 0 && !seen.screens.includes('menu') && seen.places.length <= 2, `${name}, from loading into the next world: no arrows show and the frame counter moves at most once`, JSON.stringify(seen));
    } else notRun(`overlaps, ${name}: the retry screen, the results screen and the loading screen after it (they need test keys put into web/worker.js)`);
    check(t.problems.length === 0, `${name}: no errors on the page`, t.problems.slice(0, 3).join(' | '));
    await t.context.close();
  }
}

// --- layout of the menu's own pages -----------------------------------------------------------------------------
if (wants('layout')) {
  console.log('layout: the Help viewer\'s footer, the settings\' right column, the list of Toetsen instellen');
  const SIZES = [['desktop 1280x960', { viewport: { width: 1280, height: 960 } }], ['phone landscape 915x412', { viewport: { width: 915, height: 412 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true }], ['phone portrait 412x915', { viewport: { width: 412, height: 915 }, deviceScaleFactor: 3, isMobile: true, hasTouch: true }]];
  for (const [name, size] of SIZES) {
    const t = await open(size, { fullscreen: false, intro: false });
    await t.page.goto(url);
    await t.page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 30000 });
    await t.page.waitForSelector('#player-name-dialog[open]', { state: 'visible', timeout: 20000 });
    await t.page.fill('#player-name', 'Test');
    await t.page.click('#player-name-save');
    await t.page.waitForSelector('#player-list[open] .player-choice', { state: 'visible', timeout: 20000 });
    await t.page.click('#player-select');
    await t.page.waitForSelector('#player-list:not([open])', { state: 'attached' });
    await t.page.click('#open-settings'); await t.page.waitForTimeout(300);
    // the right column as it is over a running game: all five buttons (the form is the same one; the game is not needed for its layout)
    const column = await t.page.evaluate(() => {
      const ids = ['open-more-settings', 'open-cheats', 'settings-load-save', 'settings-recovery', 'settings-stop-game'];
      const frame = document.querySelector('#settings .native-options-frame'), was = ids.map((id) => document.getElementById(id).hidden), had = frame.classList.contains('in-game');
      frame.classList.add('in-game'); for (const id of ids) document.getElementById(id).hidden = false;
      const out = ids.map((id) => {
        const b = document.getElementById(id), r = b.getBoundingClientRect(), range = document.createRange(); range.selectNodeContents(b);
        const lines = new Set([...range.getClientRects()].map((q) => Math.round(q.top))).size, x = range.getBoundingClientRect(), k = r.width / b.offsetWidth;
        return { id, lines, left: Math.round((x.left - r.left) / k), right: Math.round((r.right - x.right) / k), top: Math.round((x.top - r.top) / k), bottom: Math.round((r.bottom - x.bottom) / k), font: parseFloat(getComputedStyle(b).fontSize), box: [r.left, r.top, r.right, r.bottom].map(Math.round) };
      });
      frame.classList.toggle('in-game', had); ids.forEach((id, k) => { document.getElementById(id).hidden = was[k]; });
      return out;
    });
    // the artwork (175 x 67): the paw ends 60 pixels from the left, the bar's round end begins 24 from the right, the bar is 43 high in the middle
    const fits = (b) => b.lines === 1 && b.left >= 60 && b.right >= 24 && b.top >= 12 && b.bottom >= 12 && b.font >= 15;
    const clear = column.every((a) => column.every((b) => a === b || a.box[3] <= b.box[1] || b.box[3] <= a.box[1] || a.box[2] <= b.box[0] || b.box[2] <= a.box[0]));
    check(column.every(fits) && clear, `${name}: Meer instellingen, Cheats, Opgeslagen plek laden, Eerder avontuur laden and Spel stoppen have their label on one line, clear of the paw and the bar's ends`, JSON.stringify(column.map((b) => [b.id, b.lines, b.left, b.right, b.top, b.bottom, b.font])));
    // Where the artwork is DRAWN (the rectangles above are the same in every engine; Firefox drew a border-image at its
    // natural size inside the zoomed form, 2026-11-14): a picture of the five buttons, and in it, per button, the paw's
    // light blue at 30,33 of the artwork, the bar's blue just after the label, the white rim of the round end within
    // the last 16 pixels of the middle line, and no bar blue in the 6 pixels to the right of the button.
    const FIVE = ['open-more-settings', 'open-cheats', 'settings-load-save', 'settings-recovery', 'settings-stop-game'];
    const was = await t.page.evaluate((ids) => {
      const frame = document.querySelector('#settings .native-options-frame'), keep = { had: frame.classList.contains('in-game'), b: ids.map((id) => { const b = document.getElementById(id); return [b.hidden, b.disabled]; }) };
      frame.classList.add('in-game'); for (const id of ids) { const b = document.getElementById(id); b.hidden = false; b.disabled = false; }
      if (document.activeElement) document.activeElement.blur();
      return keep;
    }, FIVE);
    await t.page.mouse.move(2, 2); await t.page.waitForTimeout(250);
    const rawPaw = await t.page.screenshot();
    fs.writeFileSync(path.join(OUT, `layout-buttons-${size.viewport.width}.png`), rawPaw);
    const art = await t.page.evaluate(async ([b64, ids, keep]) => {
      const bmp = await createImageBitmap(await (await fetch('data:image/png;base64,' + b64)).blob());
      const c = document.createElement('canvas'); c.width = bmp.width; c.height = bmp.height;
      const g = c.getContext('2d', { willReadFrequently: true }); g.drawImage(bmp, 0, 0);
      const k = bmp.width / innerWidth, px = (x, y) => [...g.getImageData(Math.round(x * k), Math.round(y * k), 1, 1).data];
      const bar = ([R, G, B]) => B >= 140 && R <= 70 && G >= 50 && G <= 190 && B - R >= 100, white = ([R, G, B]) => Math.min(R, G, B) >= 215, paw = ([R, G, B]) => R >= 140 && G >= 190 && B >= 225;
      const out = ids.map((id) => {
        const b = document.getElementById(id), r = b.getBoundingClientRect(), z = r.width / b.offsetWidth, range = document.createRange(); range.selectNodeContents(b);
        const x = range.getBoundingClientRect(), mid = r.top + 33 * z;
        if (r.right + 7 * z > innerWidth || r.bottom > innerHeight || r.top < 0) return { id, off: true };
        let rim = 0, past = 0;
        for (let d = 0; d <= 16 * z; d += 0.5) if (white(px(r.right - d, mid))) rim++;
        for (let d = 1; d <= 6 * z; d += 0.5) for (const row of [20, 33, 46]) if (bar(px(r.right + d, r.top + row * z))) past++;
        return { id, z: +z.toFixed(3), paw: paw(px(r.left + 30 * z, mid)), bar: bar(px(Math.min(x.right + 2 * z, r.right - 26 * z), r.top + 21 * z)), rim, past };
      });
      const frame = document.querySelector('#settings .native-options-frame'); frame.classList.toggle('in-game', keep.had);
      ids.forEach((id, n) => { const b = document.getElementById(id); b.hidden = keep.b[n][0]; b.disabled = keep.b[n][1]; });
      return out;
    }, [rawPaw.toString('base64'), FIVE, was]);
    const seen = art.filter((a) => !a.off);
    check(seen.length >= 2 && seen.every((a) => a.paw && a.bar && a.rim >= 1 && a.past === 0), `${name}: in the picture each of those buttons has its paw, its bar under the label, its round end at its right edge and nothing of the bar beyond it (off: not in the window without scrolling)`, JSON.stringify(art));
    await t.page.click('#open-more-settings'); await t.page.waitForTimeout(300);
    await t.page.click('#open-port-help');
    await t.page.waitForFunction(() => document.getElementById('native-help-viewer').open, null, { timeout: 10000 }).catch(missed);
    await t.page.waitForTimeout(300);
    const note = await t.page.evaluate(() => {
      const lum = (c) => { const v = c.match(/[\d.]+/g).map(Number).slice(0, 3).map((x) => { x /= 255; return x <= 0.03928 ? x / 12.92 : ((x + 0.055) / 1.055) ** 2.4; }); return 0.2126 * v[0] + 0.7152 * v[1] + 0.0722 * v[2]; };
      const n = document.querySelector('#native-help-viewer .help-viewer-note'), cs = getComputedStyle(n), a = lum(cs.color), b = lum(cs.backgroundColor), r = n.getBoundingClientRect();
      return { color: cs.color, background: cs.backgroundColor, ratio: +((Math.max(a, b) + 0.05) / (Math.min(a, b) + 0.05)).toFixed(2), font: cs.fontSize, visible: r.height > 10 && r.bottom <= innerHeight, alpha: (cs.backgroundColor.match(/[\d.]+/g) || []).length > 3 ? Number(cs.backgroundColor.match(/[\d.]+/g)[3]) : 1 };
    });
    await shot(t.page, 'layout-help-' + name.split(' ')[1 - (name[0] === 'd' ? 1 : 0)].replace(/\W/g, '') + '-' + size.viewport.width);
    check(note.visible && note.alpha === 1 && note.ratio >= 4.5 && parseFloat(note.font) >= 12, `${name}: the Help viewer's footer line can be read (contrast at least 4.5 to 1 on its own background)`, JSON.stringify(note));
    await t.page.click('#native-help-close'); await t.page.waitForTimeout(200);
    await t.page.click('#open-key-settings'); await t.page.waitForTimeout(400);
    const keys = await t.page.evaluate(async () => {
      const page = document.getElementById('key-settings'), body = page.querySelector('.settings-extra-body');
      body.scrollTop = 150; await new Promise((r) => setTimeout(r, 200));
      const p = page.getBoundingClientRect(), b = body.getBoundingClientRect(), cs = getComputedStyle(page), k = p.width / page.offsetWidth;
      const size = cs.backgroundSize.split(' ')[1] || cs.backgroundSize, h = /px$/.test(size) ? parseFloat(size) : p.height / k;
      // editbgnd.png is 765 x 574 and its wavy line's lower edge is 66 lines down (measured in the file)
      return { scrolled: Math.round(body.scrollTop), listTop: +((b.top - p.top) / k).toFixed(1), waveEnds: +(h * 66 / 574).toFixed(1), overflow: getComputedStyle(body).overflowY, background: cs.backgroundSize };
    });
    await shot(t.page, 'layout-keys-' + size.viewport.width);
    check(keys.scrolled > 50 && keys.overflow !== 'visible' && keys.listTop >= keys.waveEnds, `${name}: Toetsen instellen, scrolled: the list is cut off under the header's wavy line, not above it`, JSON.stringify(keys));
    check(t.problems.length === 0, `${name}: no errors on the page`, t.problems.slice(0, 3).join(' | '));
    await t.context.close();
  }
}

await browser.close();
notRunSummary();
console.log(failed ? `${failed} check(s) FAILED` : 'all checks passed');
process.exit(failed ? 1 : 0);
