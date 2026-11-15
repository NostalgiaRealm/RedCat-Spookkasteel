// The game's own 2D bitmaps on a screen that is not 4:3 (source/host/gdriver.js, flag hudShape;
// docs/research/genesis-driver.md 11b), in headless Chromium or Firefox (--browser firefox; not tried in WebKit):
//
//   node tools/hud-check.mjs [--url http://127.0.0.1:4221/] [--gpu] [--shapes 4x3,16x9,21x9,phone] [--browser firefox]
//                            [--out folder]             the screenshots (tools/out/hud)
//                            [--fixes hudShape=0]      the original's picture: the check must FAIL with it
//
// At 4:3, 16:9, 21:9 and a phone on its side the same eight screens are put up (loading, the opening
// scene with its bars, play, the Esc menu, its page Geluid with the sliders, the pause, the retry
// screen, the results screen). The driver writes down every quad of CAdamEngine::DrawBitmap 0x5614E0
// as it goes to the renderer (drv.bitmaps: its caller's return address and its corners after the
// driver's change), which comes to this check through the game thread's log. Per screen and shape:
//   - at 4:3 every quad is the game's own, bit for bit (x as the game gave it);
//   - every bitmap is as wide and as high as at 4:3, within a pixel, and at the same height;
//   - where it is: the HUD's left group as far from the left edge as at 4:3 and its right group as
//     far from the right edge; the logos in their corner; the loading picture and its bar around the
//     middle; the results' icons, Ja, Nee and the menu's slider where the game put their middle (the
//     text on and beside them is placed by the game with the real width), the slider's knob at the
//     same place on its bar;
//   - what fills the screen still does (bars, backgrounds, fades, dims), and the three tiles of the
//     menu's header and footer leave no column of pixels open;
//   - nothing is cut off by the picture's edge, and no bitmap of the HUD lies under the page's own
//     gear, frame counter (switched on here) or touch buttons, measured in the page's pixels.
// A caller of DrawBitmap this check does not know is a failure: it has to be given a rule here and in
// the driver. Screenshots in tools/out/hud/ (look at them: the check reads the draws, not the pixels).
// The test keys (the end of a world, RedCat's death) are put into web/worker.js on its way to the
// browser, as tools/screens-check.mjs does; nothing of it is in the port. Needs the server running.
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { launch, engine, canPatch, notRun, notRunSummary, DEV_URL } from './browsers.mjs';
const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (n, d) => { const k = process.argv.indexOf('--' + n); return k < 0 ? d : process.argv[k + 1]; };
const url = opt('url', DEV_URL), fixes = opt('fixes', '');
const OUT = path.resolve(ROOT, opt('out', 'tools/out/hud'));
fs.mkdirSync(OUT, { recursive: true });
const gpu = process.argv.includes('--gpu');
if (!canPatch('web/worker.js') || engine === 'webkit') { notRun('hud-check (it reads the driver\'s draws through a change to web/worker.js on its way to a worker)'); notRunSummary(); process.exit(0); }
const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...(gpu ? ['--use-angle=gl'] : ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'])] });
let failed = 0;
const check = (ok, what, detail = '') => { console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); if (!ok) failed++; };
const SHAPES = {
  '4x3': { viewport: { width: 1024, height: 768 } },
  '16x9': { viewport: { width: 1280, height: 720 } },
  '21x9': { viewport: { width: 1680, height: 720 } },
  'phone': { viewport: { width: 915, height: 412 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true },
};
const shapes = opt('shapes', Object.keys(SHAPES).join(',')).split(',');
if (!shapes.includes('4x3')) shapes.unshift('4x3');

// Every caller of DrawBitmap seen in these screens (return address in the caller) and the rule for its bitmap.
const HUD = 0x454151, BAR = 0x4880BA, SLIDER = 0x5392ED, KNOB = 0x5393CC, GLYPH = 0x4EF942;
const RULE = new Map([
  [HUD, 'hud'],
  [0x487FE4, 'left'], [0x48E4DB, 'left'], [0x48AB73, 'left'],                          // the logo of the loading, results and retry screens
  [0x488037, 'middle'], [BAR, 'middle'],                                               // loading: the picture, the progress bar
  [0x48F94B, 'place'], [0x48AC21, 'place'], [0x48ACCE, 'place'], [SLIDER, 'place'],    // results icons, Ja, Nee, the slider's bar
  [KNOB, 'knob'],
  [0x48173E, 'full'], [0x481778, 'full'],                                              // a scene's two bars
  [0x487F3D, 'full'], [0x48AACC, 'full'], [0x48E435, 'full'],                          // backgrounds: loading, retry, results
  [0x51A8A1, 'full'], [0x51CDC4, 'full'], [0x53AD2E, 'full'],                          // fade, the pause's dim, the menu's dim
  [0x53ADA8, 'tile'], [0x53AE03, 'tile'], [0x53AE5E, 'tile'], [0x53AEDA, 'tile'], [0x53AF35, 'tile'], [0x53AF90, 'tile'],
  [GLYPH, 'glyph'],                                                                    // a scene's line of text, letter by letter
]);
// what must be in a frame for it to be the screen that is asked for
const SCREENS = {
  loading: (has) => has(0x488037) && has(0x487F3D),
  scene: (has) => has(0x48173E) && has(0x481778) && !has(0x53AD2E),
  play: (has, q) => q.length > 8 && q.every((b) => b.ra === HUD),
  menu: (has) => has(0x53ADA8) && has(0x53AF90) && !has(SLIDER),
  sound: (has) => has(0x53ADA8) && has(SLIDER) && has(KNOB),
  pause: (has) => has(0x51CDC4) && !has(0x53AD2E),
  retry: (has) => has(0x48AC21) && has(0x48ACCE),
  results: (has) => has(0x48F94B) && has(0x48E435),
};
const hex = (n) => '0x' + n.toString(16).toUpperCase();
const r1 = (x) => Math.round(x * 10) / 10;

// the test keys and the reporter, put into worker.js where the game thread says it runs
const AT = "  post({ t: 'running', later });\n";
const PATCH = `  { const tm = game.m, raw = platform.input.poll; let ask = 0;
    platform.input.poll = () => { const ev = raw(); if (!ev) return ev; return ev.filter((e) => { const mine = (e.type === 'keydown' || e.type === 'keyup') && (e.vk === 0xEA || e.vk === 0xE9); if (mine && e.type === 'keydown') ask = e.vk; return !mine; }); };
    game.host.mainLoop.beforePass.push(() => { if (!ask) return; const a = ask; ask = 0; const u32 = tm.u32, app = u32[0x6B915C >> 2], g = u32[(app + 0x3A4) >> 2]; if (!g) return;
      if (a === 0xEA) { tm.call(0x4040F0, [0x694A68, 8], g + 0x68); return; }
      const sub = u32[(g + 0x60) >> 2], pl = sub ? u32[(sub + 0x360) >> 2] : 0, props = pl ? u32[(pl + 0x1F0) >> 2] : 0; if (!props) return; tm.i32[(props + 0x44) >> 2] = 0; tm.call(0x4DD1A0, [], pl); });
    const d = game.host.gdriver, I = d.impl, end = I.EndScene; let told = '', when = 0, n = 0; d.bitmaps = [];
    I.EndScene = (esp) => { const r = end(esp), list = d.bitmaps; d.bitmaps = []; n++; const now = performance.now(), sig = list.map((b) => b.ra).join();
      if (sig !== told || now - when > 250) { told = sig; when = now; post({ t: 'log', s: '[hud] ' + JSON.stringify({ n, W: d.width, H: d.height, reshaped: d.reshaped, strangers: d.strangers, q: list }) }); }
      return r; }; }\n`;

const got = {};          // shape -> screen -> frame
for (const shape of shapes) {
  got[shape] = {};
  for (const part of ['play', 'results']) {
    const context = await browser.newContext(SHAPES[shape]);
    await context.addInitScript((v) => { if (location.origin === 'null' || sessionStorage.getItem('__once')) return; sessionStorage.setItem('__once', '1'); localStorage.setItem('rcspook-recomp.settings.v1', JSON.stringify(v)); }, { fullscreen: false, showFps: true, msaa: 0, phoneMsaaChecked: true });
    let placed = false;
    await context.route('**/source/web/worker.js', async (route) => { const r = await route.fetch(); const body = await r.text(); placed = body.includes(AT); await route.fulfill({ response: r, body: body.replace(AT, PATCH + AT) }); });
    const page = await context.newPage();
    const problems = [], frames = [];
    page.on('pageerror', (e) => { problems.push(e.message); console.log('[pageerror]', e.message); });
    page.on('console', (m) => {
      const s = m.text();
      if (s.startsWith('[game] [hud] ')) { try { frames.push(JSON.parse(s.slice(13))); } catch (e) { problems.push('unreadable report'); } }
      else if (m.type() === 'error' && !/favicon|Failed to load resource/.test(s)) { problems.push(s); console.log('[error]', s.slice(0, 300)); }
    });
    const key = async (vk, after = 800) => { await page.evaluate((v) => window.RecompGame.input.key(v, true), vk); await page.waitForTimeout(150); await page.evaluate((v) => window.RecompGame.input.key(v, false), vk); await page.waitForTimeout(after); };
    // the page's own controls and the picture's place, in the page's pixels
    const SEL = ['#menu-gear', '#stats', '.touch-menu', '.touch-stick', '.touch-camera', '.touch-walk', '.touch-jump', '.touch-fire', '.touch-nav-up', '.touch-nav-down', '.touch-nav-left', '.touch-nav-right'];
    const layout = () => page.evaluate((sel) => { const box = (e) => { const r = e.getBoundingClientRect(); return [r.left, r.top, r.right, r.bottom]; };
      return { picture: box(document.getElementById('screen')), controls: Object.fromEntries(sel.map((s) => { const e = document.querySelector(s); return [s, e && !e.hidden && e.getClientRects().length && getComputedStyle(e).visibility !== 'hidden' ? box(e) : null]; })) }; }, SEL);
    // the newest reported frame that is the screen asked for (reports come four times a second and at every change of what is drawn)
    const take = async (name, from = 0) => {
      const ok = (f) => SCREENS[name]((ra) => f.q.some((b) => b.ra === ra), f.q);
      for (let tries = 0; tries < 40; tries++) {
        await page.waitForTimeout(350);
        const f = frames[frames.length - 1];
        if (f && frames.length > from && ok(f) && (name === 'loading' || (frames.length > 1 && ok(frames[frames.length - 2])))) { f.layout = await layout(); await page.screenshot({ path: path.join(OUT, `${shape}-${name}.png`) }); return (got[shape][name] = f); }
        if (name === 'loading') { const g = frames.filter(ok).pop(); if (g && !ok(f)) { g.layout = null; return (got[shape][name] = g); } }
      }
      return null;
    };
    try {
      console.log(`${shape}: ${part === 'play' ? 'loading, opening scene, play, menu, Geluid, pause, retry' : 'results'}`);
      await page.goto(url + '?autostart=1&world=1' + (fixes ? '&fixes=' + fixes : ''));
      await page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 3, null, { timeout: 180000, polling: 30 });
      if (!placed) check(false, 'the test keys and the reporter find their place in worker.js');
      if (part === 'play') {
        await take('loading');
        await page.waitForFunction(() => window.RecompGame.scene().cut === 2, null, { timeout: 90000, polling: 50 });
        await page.waitForTimeout(2500);
        await take('scene');
      }
      await page.waitForFunction(() => window.RecompGame.stats && window.RecompGame.stats.control && window.RecompGame.scene().cut === 0, null, { timeout: 180000, polling: 100 });
      await page.waitForTimeout(1000);
      if (part === 'play') {
        await take('play');
        await key(27, 1200); await take('menu');
        for (let k = 0; k < 5; k++) await key(40, 400);
        await key(13, 1200); await take('sound');
        await key(27, 900); await key(27, 1200);
        await key(0x50, 1200); await take('pause'); await key(0x50, 900);
        await key(0xE9, 200);
        await page.waitForFunction(() => window.RecompGame.scene().own === 'retry', null, { timeout: 40000, polling: 100 });
        await page.waitForTimeout(1500); await take('retry');
      } else {
        await key(0xEA, 200);
        await page.waitForFunction(() => window.RecompGame.scene().state === 4, null, { timeout: 60000, polling: 100 });
        await page.waitForTimeout(2500); await take('results');
      }
    } catch (e) { check(false, `${shape}: the screens of "${part}" were reached`, String(e.message).split('\n')[0]); await page.screenshot({ path: path.join(OUT, `${shape}-failed-${part}.png`) }).catch(() => {}); }
    const last = frames[frames.length - 1];
    check(!!last && last.strangers === 0, `${shape}, ${part}: every flat screen quad came through DrawBitmap (the return addresses are on the stack)`, last ? `${last.strangers} others in ${last.n} frames` : 'no report');
    check(problems.length === 0, `${shape}, ${part}: no errors on the page`, problems.slice(0, 3).join(' | '));
    await context.close();
  }
}
await browser.close();

// ---- what was drawn ------------------------------------------------------------------------------
const NAMES = Object.keys(SCREENS);
const byRa = (f) => { const m = new Map(); for (const b of f.q) { if (!m.has(b.ra)) m.set(b.ra, []); m.get(b.ra).push(b); } return m; };
const over = (a, b) => Math.min(a[2], b[2]) - Math.max(a[0], b[0]) > 0.5 && Math.min(a[3], b[3]) - Math.max(a[1], b[1]) > 0.5;
// a column of pixels (its middle at i + 0.5) that neither of two tiles next to each other covers
const open = (x1, next) => Math.ceil(x1 - 0.5) < next - 0.5;
const ref = got['4x3'];
for (const name of NAMES) {
  const f = ref[name];
  if (!check(!!f, `4:3, ${name}: the screen was seen`) && !f) continue;
  const same = f.q.every((b) => b.x0 === b.gx0 && b.x1 === b.gx1);
  check(f.W === 640 && f.H === 480 && same && f.reshaped === 0, `4:3, ${name}: ${f.q.length} bitmaps, each as the game gave it (the driver changed none)`, `${f.W} x ${f.H}, changed so far ${f.reshaped}`);
  const unknown = [...new Set(f.q.map((b) => b.ra))].filter((ra) => !RULE.has(ra));
  check(unknown.length === 0, `4:3, ${name}: every caller of DrawBitmap has a rule`, unknown.map(hex).join(' '));
}
for (const shape of shapes) {
  if (shape === '4x3') continue;
  for (const name of NAMES) {
    const f = got[shape][name], g = ref[name];
    if (!f || !g) { check(false, `${shape}, ${name}: the screen was seen here and at 4:3`); continue; }
    const W = f.W, s = W / 640, bad = [], note = [];
    const say = (b, what) => { if (bad.length < 6) bad.push(`${hex(b.ra)} ${what}: ${r1(b.x0)},${r1(b.y0)}..${r1(b.x1)},${r1(b.y1)}`); else if (bad.length === 6) bad.push('…'); };
    if (!(W > 640 && f.H === 480)) bad.push(`mode ${W} x ${f.H}`);
    const mine = byRa(f), theirs = byRa(g);
    let sliderAt = null, sliderRef = null, n = 0;
    for (const [ra, list] of mine) {
      const rule = RULE.get(ra), was = theirs.get(ra) || [];
      if (!rule) { bad.push(`${hex(ra)} has no rule`); continue; }
      if (rule === 'tile') continue;
      // the bar grows with the loading, the letters with the line that is said, the fades come and go: no pairs there
      const paired = ra !== BAR && rule !== 'glyph' && rule !== 'full';
      if (paired && list.length !== was.length) { bad.push(`${hex(ra)}: ${list.length} bitmaps, ${was.length} at 4:3`); continue; }
      list.forEach((b, i) => {
        n++;
        const o = paired ? was[i] : was[0], w = b.x1 - b.x0, h = b.y1 - b.y0;
        if (rule === 'full') { if (b.x0 > 0.5 || b.x1 < W - 0.5) say(b, 'does not fill the width'); return; }
        if (rule === 'glyph') { if (w > 11 || b.x0 < 0 || b.x1 > W) say(b, 'a letter wider than at 4:3, or cut off'); return; }
        if (!o) { say(b, 'not at 4:3'); return; }
        const ow = o.x1 - o.x0, oh = o.y1 - o.y0;
        if (Math.abs(b.y0 - o.y0) > 0.01 || Math.abs(h - oh) > 0.01) say(b, `height or line differs from 4:3 (${r1(o.y0)}..${r1(o.y1)})`);
        if (ra !== BAR && Math.abs(w - ow) > 1) say(b, `${r1(w)} wide, ${r1(ow)} at 4:3`);
        if (b.x0 < -0.5 || b.x1 > W + 0.5) say(b, 'cut off by the picture\'s edge');
        const group = rule === 'hud' ? (o.x0 < 500 ? 'left' : 'right') : rule;
        if (group === 'left' && Math.abs(b.x0 - o.x0) > 1) say(b, `not ${r1(o.x0)} from the left edge`);
        if (group === 'right' && Math.abs((W - b.x1) - (640 - o.x1)) > 1) say(b, `not ${r1(640 - o.x1)} from the right edge`);
        if (group === 'middle' && Math.abs((b.x0 - W / 2) - (o.x0 - 320)) > 1) say(b, `not ${r1(o.x0 - 320)} from the middle`);
        if (group === 'place' && Math.abs((b.x0 + b.x1) / 2 - (o.x0 + o.x1) / 2 * s) > 1) say(b, `its middle is not at ${r1((o.x0 + o.x1) / 2 * s)}`);
        if (ra === SLIDER) { sliderAt = (b.x0 + b.x1) / 2; sliderRef = (o.x0 + o.x1) / 2; }
        if (group === 'knob' && (sliderAt === null || Math.abs(((b.x0 + b.x1) / 2 - sliderAt) - ((o.x0 + o.x1) / 2 - sliderRef)) > 1)) say(b, 'the knob is not at its place on the bar');
      });
    }
    // the menu's tiles: two rows of three, together the whole width
    for (const row of [[0x53ADA8, 0x53AE03, 0x53AE5E], [0x53AEDA, 0x53AF35, 0x53AF90]]) {
      const t = row.map((ra) => (mine.get(ra) || [])[0]);
      if (!t[0]) continue;
      n += 3;
      if (!t[1] || !t[2]) { bad.push('a row of the menu without its three tiles'); continue; }
      if (t[0].x0 > 0.5 || open(t[0].x1, t[1].x0) || open(t[1].x1, t[2].x0) || t[2].x1 <= W - 0.5) say(t[1], `a column between the tiles or at the edge is left open (${t.map((b) => r1(b.x0) + '..' + r1(b.x1)).join(' ')})`);
    }
    // the page's own controls over the HUD's bitmaps, in the page's pixels
    const lay = f.layout;
    if (lay) {
      const [px, py, pr, pb] = lay.picture, kx = (pr - px) / W, ky = (pb - py) / f.H;
      const shown = Object.entries(lay.controls).filter(([, c]) => c);
      note.push(`controls ${shown.map(([q]) => q.replace(/^[.#](touch-)?/, '')).join(' ')}`);
      for (const b of mine.get(HUD) || []) { const r = [px + b.x0 * kx, py + b.y0 * ky, px + b.x1 * kx, py + b.y1 * ky]; for (const [q, c] of shown) if (over(r, c)) say(b, `under the page's ${q}`); }
      if (name === 'play' && !lay.controls['#stats']) bad.push('the frame counter is not on screen');
      if (name === 'play' && shape === 'phone' && !lay.controls['.touch-stick']) bad.push('the touch controls are not on screen');
    }
    check(bad.length === 0 && n > 0, `${shape} (${W} x ${f.H}), ${name}: ${n} bitmaps with the size they have at 4:3, each at its place`, [...bad, ...note].join(' | '));
  }
}
notRunSummary();
console.log(failed ? `${failed} check(s) failed` : 'all checks passed');
process.exit(failed ? 1 : 0);
