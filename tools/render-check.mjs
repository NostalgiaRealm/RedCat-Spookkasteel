#!/usr/bin/env node
// The picture's way to the screen when something goes wrong or changes, in headless Chromium:
// what tools/gpu-memory-check.mjs (memory of a game that simply runs) does not cover. The server
// must be running (node tools/serve.mjs).
//   node tools/render-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--angle swiftshader|gl] [--only lost,blind]
// Scenarios, each on a page of its own:
//   settings    render scale, anti-aliasing and resolution changed together and one after the other; a resized window
//   lost        the WebGL context is taken away and comes back, twice: the game goes on, the picture is whole
//               again, and no frame is drawn with the textures missing in between
//   lostpaused  the same under a paused game: black while paused (a known gap), whole again when it goes on;
//               and a context that stays away while the game is paused does not end it
//   blind       a context that does not come back: the game ends as an error within seconds, and the next
//               game gets a new canvas and draws
//   restart     three games one after the other on the same render worker
//   save        a save state taken and continued from (the renderer gets every texture again)
//   crash       the game thread fails: the next game runs
//   renderdead  the render worker fails: the game ends as an error, the next gets a new canvas and worker
//   stall       the render worker hangs for five seconds: the game goes on, the picture is back afterwards
// The failures are made by changing a script on its way to the browser (the files are untouched);
// a change that no longer finds its place in the script fails the check. Screenshots: tools/out/render-check/.
// Needs Playwright, taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { decodePng, pictureStats } from './picture.mjs';
import { launch, isChromium, notRun, canPatch, notRunSummary, DEV_URL } from './browsers.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (n, d) => { const k = process.argv.indexOf('--' + n); return k < 0 ? d : process.argv[k + 1]; };
const url = opt('url', DEV_URL), angle = opt('angle', 'swiftshader');
if (!isChromium && process.argv.includes('--angle')) notRun('--angle (a Chromium flag for its GL backend)');
const only = opt('only', '') ? opt('only').split(',') : null;
const out = path.resolve(opt('out', path.join(ROOT, 'tools/out/render-check')));
fs.mkdirSync(out, { recursive: true });
const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...(angle === 'swiftshader' ? ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'] : ['--use-angle=' + angle])] });
let failed = 0;
const check = (ok, what, detail = '') => { console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? ' (' + detail + ')' : ''}`); if (!ok) failed++; };

/** A page of its own for one scenario. patches: [[file under source/, [[find, replacement], ...]], ...]. */
async function open(name, patches = []) {
  const context = await browser.newContext({ viewport: { width: 1280, height: 720 } });
  // Full screen is on by default since 2026-11-14 and a headless browser enters it without a click: a window in full
  // screen cannot be given another size (the 'settings' scenario does that), so these pages start with it off.
  await context.addInitScript(() => { if (location.origin === 'null' || sessionStorage.getItem('__once')) return; sessionStorage.setItem('__once', '1'); if (localStorage.getItem('rcspook-recomp.settings.v1') === null) localStorage.setItem('rcspook-recomp.settings.v1', JSON.stringify({ fullscreen: false })); });
  const logs = [];
  const unpatched = [];
  for (const [file, edits] of patches) {
    // (Firefox does not show a worker's imports to route(): the change would silently not be made)
    if (!canPatch(file)) { unpatched.push(file); notRun(`${name}: the part that changes ${file} on its way to the browser (route() does not see a worker's imports)`); continue; }
    await context.route('**/source/' + file, async (route) => {
      const resp = await route.fetch();
      let body = await resp.text();
      for (const [a, b] of edits) { if (!body.includes(a)) { check(false, `${name}: the change to ${file} finds its place`, a.slice(0, 60)); logs.push('patch missed'); } body = body.replace(a, b); }
      await route.fulfill({ response: resp, body });
    });
  }
  const page = await context.newPage();
  page.on('console', (m) => { logs.push(m.text()); if (m.type() === 'error' && !/test:/.test(m.text())) console.log('     [error]', m.text().slice(0, 200)); });
  page.on('pageerror', (e) => console.log('     [pageerror]', e.message));
  const h = {
    page, context, logs, unpatched,
    wait: (ms) => page.waitForTimeout(ms),
    st: () => page.evaluate(() => ({ running: window.RecompGame.running, frames: window.RecompGame.framesDrawn, stats: window.RecompGame.stats, crash: window.__crash ? window.__crash.message : null })),
    running: () => page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 30, null, { timeout: 120000 }),
    stopped: () => page.waitForFunction(() => window.RecompGame && !window.RecompGame.running, null, { timeout: 60000 }),
    /** The canvas as it is on screen now: saved, and what it shows. */
    async picture(n) { const file = path.join(out, `${name}-${n}.png`); await page.locator('#screen').screenshot({ path: file }); return pictureStats(decodePng(fs.readFileSync(file))); },
    /** The picture shows the game: mostly lit, many colours, not a white sheet. */
    async shows(n, what) { const p = await h.picture(n); check(p.lit > 40 && p.colours > 40 && p.white < 50, what, `${p.lit}% lit, ${p.white}% white, ${p.colours} colours`); return p; },
    async advancing(what) { const a = (await h.st()).frames; await h.wait(1000); const b = await h.st(); check(b.running && !b.crash && b.frames - a > 10, what, `${b.frames - a} frames in a second, ${b.stats && b.stats.fps} fps${b.crash ? ', ' + b.crash : ''}`); },
    start: (world) => page.evaluate((w) => { window.__crash = null; window.RecompGame.start({ player: 1, world: w, difficulty: 1, adventure: false }); }, world),
    close: () => context.close(),
  };
  return h;
}
// counts the polygons that reach WebGL while the renderer holds no texture at all (a frame drawn white)
const BARE = ['render/webgl.js', [['      if (!bound) { gl.useProgram(prog); gl.bindVertexArray(vao); bound = 1; }', '      if (!textures.size) self.__bare = (self.__bare || 0) + 1;\n      if (!bound) { gl.useProgram(prog); gl.bindVertexArray(vao); bound = 1; }']]];
const BARE_REPORT = ['web/render-worker.js', [["self.postMessage({ t: 'log', s: 'WebGL context restored' });", "self.postMessage({ t: 'log', s: 'WebGL context restored' }); setTimeout(() => self.postMessage({ t: 'log', s: 'BARE ' + (self.__bare || 0) }), 1200);"]]];
const bare = (h) => h.logs.filter((t) => t.includes('BARE ')).map((t) => Number(t.slice(t.indexOf('BARE ') + 5)));

const scenarios = {
  async settings() {
    const h = await open('settings');
    await h.page.goto(url + '?autostart=1&world=1'); await h.running(); await h.wait(5000);
    let s = await h.st();
    const w0 = s.stats.width, m0 = s.stats.samples;
    // two changes back to back: the second must not undo the first
    await h.page.evaluate(() => { window.RecompGame.settings.set('msaa', 0); window.RecompGame.settings.set('renderScale', 50); });
    await h.wait(2500); s = await h.st();
    check(s.stats.samples === 0 && Math.abs(s.stats.width - w0 / 2) <= 1, 'settings: anti-aliasing off and scale 50 set together both took effect', `${s.stats.width}x${s.stats.height}x${s.stats.samples}`);
    await h.page.evaluate(() => { window.RecompGame.settings.set('renderScale', 100); window.RecompGame.settings.set('msaa', 2); });
    await h.wait(2500); s = await h.st();
    check(s.stats.samples === Math.min(2, s.stats.maxSamples) && s.stats.width === w0, 'settings: scale 100 and 2 samples took effect', `${s.stats.width}x${s.stats.height}x${s.stats.samples}`);
    await h.page.evaluate(() => { window.RecompGame.settings.set('resolution', '640x480'); });
    await h.wait(2500); s = await h.st();
    check(s.stats.width <= 640 && s.stats.height <= 480, 'settings: a fixed resolution took effect', `${s.stats.width}x${s.stats.height}x${s.stats.samples}`);
    await h.page.evaluate((m) => { window.RecompGame.settings.set('resolution', 'auto'); window.RecompGame.settings.set('msaa', m); }, m0);
    await h.page.setViewportSize({ width: 900, height: 600 }); await h.wait(2500); s = await h.st();
    check(s.stats.width <= 900 && s.stats.height <= 600 && s.stats.width >= 700, 'settings: the drawing size follows the window', `${s.stats.width}x${s.stats.height}x${s.stats.samples}`);
    await h.shows('end', 'settings: the picture shows the game');
    await h.advancing('settings: still running');
    await h.close();
  },
  async lost() {
    const h = await open('lost', [BARE, BARE_REPORT]);
    await h.page.goto(url + '?autostart=1&world=1'); await h.running(); await h.wait(6000);
    await h.shows('1-before', 'lost: the picture before');
    for (let k = 0; k < 3; k++) {
      await h.page.evaluate((ms) => window.RecompGame.loseContext(ms), k ? 300 : 1000);
      if (!k) { await h.wait(400); await h.advancing('lost: the game goes on while the context is away'); }
      await h.wait(k ? 2800 : 2500);
      await h.shows(`2-back-${k}`, `lost: the picture is whole after the context came back (${k + 1})`);
    }
    const b = bare(h);
    if (!h.unpatched.length) check(b.length === 3 && b[b.length - 1] === 0, 'lost: nothing was drawn between the context coming back and the textures being there again', `polygons drawn without any texture: ${b.join(', ') || 'no report'}`);
    await h.advancing('lost: the game runs afterwards');
    await h.close();
  },
  async lostpaused() {
    const h = await open('lostpaused');
    await h.page.goto(url + '?autostart=1&world=1'); await h.running(); await h.wait(6000);
    await h.page.evaluate(() => { window.RecompGame.setPaused(true); window.RecompGame.loseContext(500); });
    await h.wait(2500);
    const p = await h.picture('1-paused');
    console.log(`     paused after the context came back: ${p.lit}% lit (black until the game goes on: PLAN.md, known gaps)`);
    await h.page.evaluate(() => window.RecompGame.setPaused(false)); await h.wait(1000);
    await h.shows('2-on', 'lostpaused: the picture is whole a second after the game goes on');
    // a context that stays away for nine seconds under a paused game: nobody is looking, the game is kept
    await h.page.evaluate(() => { window.RecompGame.setPaused(true); window.RecompGame.loseContext(9000); });
    await h.wait(7500);
    let s = await h.st();
    check(s.running && !s.crash, 'lostpaused: a context that stays away under a paused game does not end it', s.crash || '');
    await h.page.evaluate(() => window.RecompGame.setPaused(false)); await h.wait(4500);
    s = await h.st();
    check(s.running && !s.crash, 'lostpaused: and the game is still there when the context is back', s.crash || '');
    await h.shows('3-back', 'lostpaused: with its picture');
    await h.close();
  },
  async blind() {
    const h = await open('blind');
    await h.page.goto(url + '?autostart=1&world=1'); await h.running(); await h.wait(5000);
    const t0 = Date.now();
    await h.page.evaluate(() => window.RecompGame.loseContext(600000));
    await h.page.waitForFunction(() => window.__crash, null, { timeout: 20000 }).catch(() => {});
    const s = await h.st();
    check(!s.running && /WebGL/.test(s.crash || ''), 'blind: a context that does not come back ends the game as an error', `${s.crash} after ${((Date.now() - t0) / 1000).toFixed(1)} s`);
    await h.start(1); await h.running(); await h.wait(5000);
    await h.shows('1-next', 'blind: the next game draws, on a new canvas');
    check(await h.page.evaluate(() => document.querySelectorAll('#screen').length === 1 && document.getElementById('screen').parentElement.id === 'stage'), 'blind: one canvas, in its place');
    await h.advancing('blind: and runs');
    await h.close();
  },
  async restart() {
    const h = await open('restart');
    await h.page.goto(url + '?autostart=1&world=1'); await h.running(); await h.wait(5000);
    await h.advancing('restart: the first game runs');
    await h.page.evaluate(() => window.RecompGame.stop()); await h.stopped(); await h.wait(500);
    await h.start(3); await h.running(); await h.wait(6000);
    await h.shows('2-world3', 'restart: the second game (world 3) draws'); await h.advancing('restart: and runs');
    await h.page.evaluate(() => window.RecompGame.stop()); await h.stopped();
    await h.start(1); await h.running(); await h.wait(5000);
    await h.shows('3-world1', 'restart: the third game draws'); await h.advancing('restart: and runs');
    await h.close();
  },
  async save() {
    const h = await open('save');
    await h.page.goto(url + '?autostart=1&world=1'); await h.running(); await h.wait(5000);
    await h.page.keyboard.press('F5');
    await h.page.waitForFunction(() => window.__lastSave, null, { timeout: 30000 });
    await h.page.goto(url + '?autostart=1&world=1&continue=1'); await h.running(); await h.wait(6000);
    check(await h.page.evaluate(() => !window.RecompGame.notice && !window.__crash), 'save: the game continued from the state (no line about a state that could not be used)');
    await h.shows('1-continued', 'save: the continued game draws (every texture uploaded again)'); await h.advancing('save: and runs');
    await h.close();
  },
  async crash() {
    // the game thread fails at its 300th frame; the next game must start on the same render worker
    const h = await open('crash', [['web/worker.js', [['      render.pace();\n', '      render.pace(); if ((self.__f = (self.__f || 0) + 1) === 300) throw new Error("test: game thread failed");\n']]]]);
    await h.page.goto(url + '?autostart=1&world=1');
    await h.page.waitForFunction(() => window.__crash, null, { timeout: 120000 });
    await h.wait(500);
    const s = await h.st();
    check(!s.running && /test:/.test(s.crash || ''), 'crash: the game thread failed and the game ended', s.crash);
    await h.context.unroute('**/source/web/worker.js');
    await h.start(2); await h.running(); await h.wait(6000);
    await h.shows('1-next', 'crash: a game started afterwards draws'); await h.advancing('crash: and runs');
    await h.close();
  },
  async renderdead() {
    const h = await open('renderdead', [['web/render-worker.js', [['try { replay(renderer, m.data); }', 'try { if ((self.__n = (self.__n || 0) + 1) === 200) throw new Error("test: render worker failed"); replay(renderer, m.data); }']]]]);
    await h.page.goto(url + '?autostart=1&world=1');
    await h.page.waitForFunction(() => window.__crash, null, { timeout: 120000 });
    await h.wait(500);
    const s = await h.st();
    check(!s.running && /test:/.test(s.crash || ''), 'renderdead: the game ended when the render worker failed', s.crash);
    await h.context.unroute('**/source/web/render-worker.js');
    await h.start(1); await h.running(); await h.wait(5000);
    await h.shows('1-next', 'renderdead: a game on a new canvas and render worker draws'); await h.advancing('renderdead: and runs');
    check(await h.page.evaluate(() => document.querySelectorAll('#screen').length === 1 && document.getElementById('screen').parentElement.id === 'stage'), 'renderdead: one canvas, in its place');
    await h.close();
  },
  async stall() {
    const h = await open('stall', [['web/render-worker.js', [['try { replay(renderer, m.data); }', 'try { if ((self.__n = (self.__n || 0) + 1) === 300) { const t = performance.now(); while (performance.now() - t < 5000); } replay(renderer, m.data); }']]]]);
    await h.page.goto(url + '?autostart=1&world=1'); await h.running();
    await h.page.waitForFunction(() => window.RecompGame.framesDrawn >= 298, null, { timeout: 60000 });
    await h.wait(4000);
    const s = await h.st();
    check(s.running && !s.crash && s.stats.fps > 20, 'stall: the game thread went on while the render worker hung', `${s.stats.fps} fps`);
    await h.wait(4000);
    await h.shows('1-after', 'stall: the picture is whole after the hang'); await h.advancing('stall: drawing again');
    await h.close();
  },
};
for (const [name, run] of Object.entries(scenarios)) {
  if (only && !only.includes(name)) continue;
  try { await run(); } catch (e) { check(false, `${name}: ran to its end`, String(e && e.message ? e.message : e).split('\n')[0]); }
}
await browser.close();
notRunSummary();
console.log(failed ? `${failed} check(s) FAILED` : 'all checks passed');
process.exit(failed ? 1 : 0);
