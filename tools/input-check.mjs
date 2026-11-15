#!/usr/bin/env node
// Checks of the controls this port adds (docs/research/input.md): gradual movement with a stick and
// walking slowly (source/host/move.js), the keys in the player's file (source/web/keybinds.js, the form
// Toetsen instellen), controller, touch controls, first-time hints.
//   node tools/input-check.mjs [--only node,keys,pad,touch] [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--out tools/out/input-check] [--gpu]
// The Node part runs the game in the Node runner (no server needed). The other parts need the server
// (node tools/serve.mjs) and Playwright (PLAYWRIGHT_DIR, default: the A2 Racer 4 project's node_modules);
// they use headless Chromium with a controller and a touch screen that are played to the page.
import fs from 'node:fs';
import path from 'node:path';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { launch, engine, isChromium, chromiumOnly, notRun, notRunSummary, DEV_URL } from './browsers.mjs';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (name, def) => { const k = process.argv.indexOf('--' + name); return k < 0 ? def : process.argv[k + 1]; };
const url = opt('url', DEV_URL);
const OUT = path.resolve(opt('out', path.join(ROOT, 'tools/out/input-check')));
const only = opt('only', 'node,keys,pad,touch').split(',');
fs.mkdirSync(OUT, { recursive: true });
let failed = 0, count = 0;
const check = (ok, what, detail = '') => { count++; if (!ok) failed++; console.log(`${ok ? '  ok  ' : ' FAIL '} ${what}${detail ? '  [' + detail + ']' : ''}`); };
const wrap = (x) => { x -= 2 * Math.PI * Math.round(x / (2 * Math.PI)); return x; };
const deg = (x) => (x * 180 / Math.PI).toFixed(2);

// ---------------------------------------------------------------------------------------------------------
if (only.includes('node')) {
  console.log('--- Node runner: the original and the stick');
  const runner = (args) => execFileSync(process.execPath, [path.join(ROOT, 'tools/run-headless.mjs'), '--fresh', '--out', path.join(OUT, 'run'), ...args], { cwd: ROOT, encoding: 'utf8', stdio: ['ignore', 'pipe', 'pipe'], maxBuffer: 1 << 26 });
  const scenario = (name, mode, extra = []) => {
    const file = path.join(OUT, name + '.json');
    runner(['--world', '1', '--seconds', '60', '--plugin', path.join(ROOT, 'tools/input-plugin.mjs'), '--in-mode', mode, '--in-passes', '40', '--in-out', file, ...extra]);
    const log = JSON.parse(fs.readFileSync(file, 'utf8'));
    return { start: log[0], rows: log.slice(1, -1), end: log[log.length - 1] };
  };
  // units per pass over passes 5..25, before any wall
  const step = (r) => Math.hypot(r.rows[25].pos[0] - r.rows[5].pos[0], r.rows[25].pos[2] - r.rows[5].pos[2]) / 20;
  const apart = (a, b) => { let d = 0, h = 0; for (let k = 0; k < a.rows.length; k++) { d = Math.max(d, Math.hypot(...a.rows[k].pos.map((v, j) => v - b.rows[k].pos[j]))); h = Math.max(h, Math.abs(wrap(a.rows[k].heading - b.rows[k].heading))); } return [d, h]; };

  const kUp = scenario('k-up', 'keys:38'), kAlt = scenario('k-alt-up', 'keys:18+38'), kDown = scenario('k-down', 'keys:40');
  check(Math.abs(step(kUp) - step(kAlt)) < 0.02 && step(kUp) > 3.5, 'the original: Up and Alt+Up (the action Walk) cover the same ground', `${step(kUp).toFixed(3)} and ${step(kAlt).toFixed(3)} units per pass`);
  check(kUp.end.stats.steered === 0 && kUp.end.stats.scaled === 0 && kDown.end.stats.scaled === 0, 'keys alone: neither hook changes anything');
  const sUp = scenario('s-up', 'stick:0,1'), sDown = scenario('s-down', 'stick:0,-1');
  let [d, h] = apart(kUp, sUp);
  check(d < 1e-3 && h < 1e-5, 'stick straight forward, full: pass by pass where the Up key puts RedCat', `at most ${d.toExponential(1)} units, ${h.toExponential(1)} radians apart over 40 passes`);
  [d, h] = apart(kDown, sDown);
  check(d < 1e-3 && h < 1e-5, 'stick straight back, full: pass by pass where the Down key puts him', `at most ${d.toExponential(1)} units, ${h.toExponential(1)} radians apart`);
  const sHalf = scenario('s-half', 'stick:0,0.5'), sBackHalf = scenario('s-back-half', 'stick:0,-0.5'), kWalk = scenario('k-walk', 'keys:38,walk'), sQuarterWalk = scenario('s-quarter-walk', 'stick:0,0.25,walk');
  check(Math.abs(step(sHalf) / step(kUp) - 0.5) < 0.02, 'stick half forward: half the speed', `${(step(sHalf) / step(kUp)).toFixed(3)} of the run`);
  check(Math.abs(step(sBackHalf) / step(kDown) - 0.5) < 0.02, 'stick half back: half the speed backwards', `${(step(sBackHalf) / step(kDown)).toFixed(3)}`);
  check(Math.abs(step(kWalk) / step(kUp) - 96 / 156.8) < 0.02, 'walking slowly with a key: 96 / 156.8 of the run', `${(step(kWalk) / step(kUp)).toFixed(3)}`);
  check(Math.abs(step(sQuarterWalk) / step(kUp) - 0.25 * 96 / 156.8) < 0.02, 'a quarter stick while walking slowly: both factors', `${(step(sQuarterWalk) / step(kUp)).toFixed(3)}`);
  check(sHalf.rows.every((r) => r.move[2] === -1) && sBackHalf.rows.every((r) => r.move[2] === 1), 'the move vector stays the original\'s whole numbers (camera rows and animation see what they always see)');
  // direction: 45 degrees is what the original's Up+Right turns towards
  const kUR = scenario('k-up-right', 'keys:38+39'), sUR = scenario('s-up-right', 'stick:0.70710678,0.70710678');
  const F = sUp.rows[0].last.target, t45 = sUR.rows[0].last.target;
  check(Math.abs(wrap(F - t45) - Math.PI / 4) < 1e-4, 'stick 45 degrees to the right: the target is 45 degrees right of "camera forward"', `${deg(wrap(F - t45))} degrees`);
  check(Math.abs(wrap(kUR.rows[0].heading - sUR.rows[0].heading)) < 1e-5 && Math.abs(wrap(sUR.rows[0].last.original - sUR.rows[0].last.heading)) < 1e-5, 'and the first pass turns RedCat exactly as the original\'s Up+Right does', `${deg(kUR.rows[0].heading)} and ${deg(sUR.rows[0].heading)}`);
  const s30 = scenario('s-30', 'stick:0.5,0.8660254'), sLeft = scenario('s-left-20', 'stick:-0.34202014,0.93969262');
  check(Math.abs(wrap(F - s30.rows[0].last.target) - Math.PI / 6) < 1e-4 && Math.abs(wrap(F - sLeft.rows[0].last.target) + Math.PI / 9) < 1e-4, 'any angle: 30 degrees right and 20 degrees left of forward', `${deg(wrap(F - s30.rows[0].last.target))}, ${deg(wrap(F - sLeft.rows[0].last.target))}`);
  // within 45 degrees of straight back he keeps facing away and backs up
  const sBR = scenario('s-back-right', 'stick:0.5,-0.8660254');
  check(sBR.rows[0].last.back === true && sBR.rows[5].move[2] === 1 && Math.abs(wrap(sBR.rows[0].last.target - F) - Math.PI / 6) < 1e-4, 'stick 30 degrees right of straight back: backs up, facing 30 degrees left of forward', `${deg(wrap(sBR.rows[0].last.target - F))}`);
  // a light push turns more gently: the first pass covers min(1, dt x 6.1 x max(0.35, n)) of the difference
  const sFull = scenario('s-right', 'stick:1,0'), sLight = scenario('s-right-light', 'stick:0.2,0');
  const share = (r) => { const l = r.rows[0].last; return wrap(l.heading - l.from) / wrap(l.target - l.from); };
  check(Math.abs(share(sFull) - sFull.rows[0].last.dt * 6.1) < 1e-4 && Math.abs(share(sLight) - sLight.rows[0].last.dt * 6.1 * 0.35) < 1e-4, 'turn rate: 6.1 at full deflection, 0.35 of it for a light push', `${share(sFull).toFixed(4)} and ${share(sLight).toFixed(4)} of the difference in a pass of ${sFull.rows[0].last.dt * 1000} ms`);
  // free flight (the cheat) is flown as in the JavaScript port: along the look direction, 240 units a second (source/host/move.js)
  {
    const { flyVelocity } = await import('../source/host/move.js');
    const fly = (name, mode) => scenario('fly-' + name, mode, ['--in-fly', '1', '--in-pitch', '0.3']);
    // units per second over passes 5..25, and the yaw (input+0x18) and look pitch it was flown with
    const vel = (r) => { const a = r.rows[5], b = r.rows[25], dt = (b.ms - a.ms) / 1000; return b.pos.map((v, j) => (v - a.pos[j]) / dt); };
    const near = (r, f, rt, v) => { const got = vel(r), want = flyVelocity(r.rows[5].heading - Math.PI / 2, r.start.look.pitch, f, rt, v); return [Math.hypot(...got.map((x, j) => x - want[j])) < 2, `${got.map((x) => x.toFixed(1)).join(', ')} units per second, expected ${want.map((x) => x.toFixed(1)).join(', ')}`]; };
    const fwd = fly('forward', 'keys:38'), right = fly('right', 'keys:39'), up = fly('jump', 'keys:32'), down = fly('walk', 'keys:,walk'), diag = fly('diagonal', 'keys:38+39'), half = fly('half', 'stick:0,0.5');
    check(Math.abs(fwd.start.look.pitch - 0.46) < 1e-3 && near(fwd, 1, 0, 0)[0] && vel(fwd)[1] < -100, 'free flight, forward key at look pitch 0.46: along the view, downwards with it, 240 units a second', near(fwd, 1, 0, 0)[1]);
    check(near(right, 0, 1, 0)[0] && Math.abs(vel(right)[1]) < 0.5 && Math.abs(wrap(right.rows[30].heading - right.start.start.heading)) < 1e-6, 'free flight, right key: sideways, level, and RedCat is not turned', near(right, 0, 1, 0)[1]);
    check(near(up, 0, 0, 1)[0] && near(down, 0, 0, -1)[0], 'free flight: the Jump key rises, "walk" sinks, 240 units a second', `${vel(up)[1].toFixed(1)} and ${vel(down)[1].toFixed(1)}`);
    check(near(diag, 1, 1, 0)[0] && Math.abs(Math.hypot(...vel(diag)) - 240) < 2, 'free flight, forward and right together: normalised, still 240', near(diag, 1, 1, 0)[1]);
    check(near(half, 0.5, 0, 0)[0] && Math.abs(Math.hypot(...vel(half)) - 120) < 2, 'free flight, half a stick: half the speed', `${Math.hypot(...vel(half)).toFixed(1)}`);
    check(fwd.rows.every((r) => r.move.every((v) => v === 0)) && fwd.end.stats.flown > 40 && kUp.end.stats.flown === 0, 'free flight clears the move vector (idle pose); with flight off the flight code never acts');
  }
  // nothing active: the memory of before
  const pair = runner(['--save-at', '900', '--hash-after', '300', '--fixes', 'off', '--state', path.join(OUT, 'state.bin')]);
  const hash = (/hash 300 passes later: ([0-9a-f]{8})/.exec(pair) || [])[1];
  check(hash === '307574ef', 'with no stick and no walk key the game\'s memory is the original game\'s (fixes off: 307574ef, the hash tools/fixes-check.mjs demands as well)', hash);
  // the keys of a continued game are the ones the player's file has now
  const ini = (v) => `Settings\\Player1.ini|KeyBinds|MoveForward|${v}`;
  runner(['--world', '1', '--ini', ini('Up'), '--save-at', '700', '--hash-after', '10', '--state', path.join(OUT, 'keys.bin')]);
  const probe = (name, extra) => { const file = path.join(OUT, name + '.json'); runner(['--world', '1', '--seconds', '40', '--plugin', path.join(ROOT, 'tools/input-plugin.mjs'), '--in-mode', 'probe:73/38', '--in-out', file, ...extra]); return JSON.parse(fs.readFileSync(file, 'utf8'))[0]; };
  const same = probe('keys-same', ['--ini', ini('Up'), '--restore', path.join(OUT, 'keys.bin')]);
  const changed = probe('keys-changed', ['--ini', ini('I'), '--restore', path.join(OUT, 'keys.bin')]);
  check(same.probe[38] > 50 && same.probe[73] === 0 && !same.stats.keysLoaded, 'a state continued with the keys it was saved with: Up walks, the game\'s key loader is not called', JSON.stringify(same.probe));
  check(changed.probe[73] > 50 && changed.probe[38] === 0 && changed.stats.keysLoaded === 1, 'a state continued after the player changed a key in the menu: the new key walks, the old one does not', JSON.stringify(changed.probe));
}

// ---------------------------------------------------------------------------------------------------------
if (only.includes('node')) {
  // the original's own lines: Walk=Alt, and Alt is what its sidesteps are made with (pure functions of keybinds.js)
  const kb = await import('../source/web/keybinds.js');
  const template = fs.readFileSync(path.resolve(process.env.RC_ORIGINALS || input('RC_ORIGINAL_DECOMPILED/originals'), 'Settings/PlayerDef.ini'), 'latin1');
  const shipped = kb.readBindings(template).binds;
  check(shipped.walk.join() === 'Alt' && shipped.left.join() === 'Alt+Left' && kb.walkKeys(shipped).size === 0, 'a file with the original\'s Walk=Alt and MoveLeft=Alt+Left: Alt is not watched as "walk slowly" (Alt+Left stays a sidestep at full speed)', JSON.stringify([shipped.walk, shipped.left, [...kb.walkKeys(shipped)]]));
  check([...kb.walkKeys(kb.defaultBindings())].join() === '16' && [...kb.walkKeys({ ...shipped, left: ['A'], right: ['D'] })].join() === '18', 'Shift is watched for a new player, and Alt for a player whose sidesteps do not use it');
  const oneChanged = template.replace(/^Jump=.*$/m, 'Jump=J');
  const whole = kb.adoptBindings(template, template, {}), part = kb.adoptBindings(oneChanged, template, {}), taken = kb.adoptBindings(oneChanged.replace(/^Fire=.*$/m, 'Fire=Shift'), template, {});
  check(whole && whole.some(([, k, v]) => k === 'MoveForward' && v === 'Up,W') && JSON.stringify(part) === '[["KeyBinds","Walk","Shift"]]' && taken === null, 'adoption: an untouched file gets the starting keys; a file with one key changed only loses Walk=Alt to Shift; not when Shift is taken', JSON.stringify([part, taken]));
}

if (!only.some((p) => p !== 'node')) { console.log(`${count - failed} of ${count} checks passed`); process.exit(failed ? 1 : 0); }
// ---------------------------------------------------------------------------------------------------------
const gpu = process.argv.includes('--gpu');
if (!isChromium && gpu) notRun('--gpu (a Chromium flag for its GL backend)');
const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...(gpu ? ['--use-angle=gl'] : ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'])] });
const problems = [];
async function open(options = {}) {
  const context = await browser.newContext({ viewport: { width: 1280, height: 720 }, ...options });
  const page = await context.newPage();
  page.on('pageerror', (e) => problems.push('pageerror: ' + e.message));
  page.on('console', (m) => { if (m.type() === 'error' && !/favicon|Failed to load resource/.test(m.text())) problems.push('console: ' + m.text().slice(0, 200)); });
  await page.addInitScript(() => {
    window.__ev = [];
    for (const n of ['recomp-hint', 'recomp-notice', 'recomp-gamepad-lost', 'recomp-open-settings']) window.addEventListener(n, (e) => window.__ev.push([n, e.detail && e.detail.text]));
    // a controller that is played to the page: window.__pad = { axes: [..4], buttons: Set of pressed numbers } or null
    window.__pad = null;
    const fake = () => (window.__pad ? [{ index: 0, id: 'Speelcontroller (STANDARD GAMEPAD)', connected: true, mapping: 'standard', axes: window.__pad.axes, timestamp: performance.now(),
      buttons: Array.from({ length: 17 }, (_, k) => ({ pressed: window.__pad.buttons.includes(k), value: window.__pad.buttons.includes(k) ? 1 : 0 })) }] : []);
    Object.defineProperty(navigator, 'getGamepads', { value: fake, configurable: true });
  });
  return { context, page };
}
const stats = (page) => page.evaluate(() => { const s = window.RecompGame.stats || {}; return { world: !!s.world, control: !!s.control, cutscene: !!s.cutscene, speed: s.speed || 0, steered: s.steered || 0, scaled: s.scaled || 0 }; });
const fileLines = (page) => page.evaluate(() => { const g = window.RecompGame, t = g.players.text(g.players.current) || ''; const o = {}; for (const l of t.split(/\r?\n/)) { const kv = /^(MoveForward|MoveBack|TurnLeft|TurnRight|MoveLeft|MoveRight|Fire|Jump|Walk|Weapon[123])=(.*)$/.exec(l); if (kv) o[kv[1]] = kv[2]; } return o; });
const makePlayer = async (page, name) => {
  await page.waitForSelector('#player-name-dialog[open]', { state: 'visible', timeout: 30000 });
  await page.fill('#player-name', name); await page.click('#player-name-save');
  await page.waitForSelector('#player-list[open] .player-choice', { state: 'visible' }); await page.click('#player-select');
  await page.waitForSelector('#player-list:not([open])', { state: 'attached' });
};
/** A world of the current player, through the page's own start; waits until the opening scene has given the controls back. */
const startWorld = async (page, world = 1) => {
  await page.evaluate((w) => { const g = window.RecompGame; window.__started = g.start({ player: g.players.current, world: w, difficulty: 1, adventure: false }); }, world);
  await page.waitForFunction(() => window.RecompGame.running, null, { timeout: 120000 });
  let seenScene = false;
  for (let k = 0; k < 90; k++) { const s = await stats(page); if (s.cutscene) seenScene = true; if (s.control && seenScene) return; await page.waitForTimeout(500); }
  throw new Error('the opening scene did not end');
};
/** The speed the game reports after holding something for 2.4 s (the statistics come once a second). */
const speedWhile = async (page, on, off) => { await on(); await page.waitForTimeout(2400); const s = await stats(page); await off(); await page.waitForTimeout(1300); return s; };

if (only.includes('keys')) {
  console.log('--- keys: the form Toetsen instellen and the player\'s file');
  const { context, page } = await open();
  await page.goto(url + '?skipintro=1');
  await makePlayer(page, 'Toets');
  let f = await fileLines(page);
  check(f.MoveForward === 'Up,W' && f.MoveBack === 'Down,S' && f.MoveLeft === 'Alt+Left,A' && f.MoveRight === 'Alt+Right,D' && f.Walk === 'Shift' && f.Fire === 'Control' && f.Jump === 'Space,RightMouse' && f.Weapon1 === '1',
    'a new player starts with the original\'s keys and W, A, S, D, Shift next to them, in his own file', JSON.stringify(f));
  // A player of the build before: the original's own keys in his file, and a visitor who never stored a setting
  // (or one who did: an earlier build wrote the mark v: 2 with any setting, whether the players had their keys or not).
  const shippedLines = async (extra = []) => page.evaluate(async (extra) => {
    const g = window.RecompGame, t = g.players.template(), lines = [];
    let inside = false;
    for (const l of t.split(/\r?\n/)) { const h = /^\s*\[(.*)\]\s*$/.exec(l); if (h) { inside = h[1] === 'KeyBinds'; continue; } const kv = inside && /^([^=;]+)=(.*)$/.exec(l); if (kv) lines.push(['KeyBinds', kv[1], kv[2]]); }
    g.players.set(g.players.current, [...lines, ...extra]);
    return lines.length;
  }, extra);
  const forgetSettings = (stored) => page.evaluate(async (stored) => {
    const K = 'rcspook-recomp.settings.v1';
    await new Promise((r) => setTimeout(r, 300));
    await new Promise((done) => { const q = indexedDB.open('rcspook-recomp-kv', 1); q.onsuccess = () => { const t = q.result.transaction('kv', 'readwrite'); if (stored) t.objectStore('kv').put({ value: stored, rev: 1 }, K); else t.objectStore('kv').delete(K); t.oncomplete = () => { q.result.close(); done(); }; }; q.onerror = () => done(); });
    if (stored) { localStorage.setItem(K, stored); localStorage.setItem(K + '#rev', '1'); } else { localStorage.removeItem(K); localStorage.removeItem(K + '#rev'); }
  }, stored);
  const reopen = async () => { await page.goto(url + '?skipintro=1'); await page.waitForFunction(() => window.RecompGame && window.RecompGame.players.current > 0 && window.RecompGame.settings.get('keys').v === 3, null, { timeout: 30000 }).catch(() => {}); };
  await shippedLines(); await forgetSettings(null); await reopen();
  f = await fileLines(page);
  check(f.MoveForward === 'Up,W' && f.MoveLeft === 'Alt+Left,A' && f.Walk === 'Shift', 'a player with the original\'s keys and a visitor without stored settings: the starting keys are given at the next visit', JSON.stringify(f));
  await shippedLines(); await forgetSettings(JSON.stringify({ volume: 80, keys: { v: 2, camera: ['KeyV'] } })); await reopen();
  f = await fileLines(page);
  check(f.MoveForward === 'Up,W' && f.Walk === 'Shift' && await page.evaluate(() => window.RecompGame.settings.get('volume')) === 80, 'and for a visitor whose stored settings carry the earlier build\'s mark v: 2', JSON.stringify(f));
  await shippedLines([['KeyBinds', 'Jump', 'J']]); await forgetSettings(null); await reopen();
  f = await fileLines(page);
  check(f.MoveForward === 'Up' && f.Jump === 'J' && f.MoveLeft === 'Alt+Left' && f.Walk === 'Shift', 'a file with one key changed keeps its keys; only the original\'s Walk=Alt, the sidesteps\' key, goes to Shift', JSON.stringify(f));
  await shippedLines(); await forgetSettings(null); await reopen();
  await page.click('#open-settings'); await page.waitForSelector('#settings[open]'); await page.click('#open-more-settings'); await page.click('#open-key-settings');
  await page.waitForSelector('#key-settings:not([hidden]) #key-binding-forward');
  const rows = await page.$$eval('#key-bindings .key-binding-row', (els) => els.map((r) => r.firstChild.textContent + ': ' + r.lastChild.textContent));
  check(rows.length === 13 && rows[0] === 'Vooruit: Pijl omhoog / W' && rows.includes('Links opzij: Alt + Pijl links / A') && rows.includes('Rustig lopen: Shift') && rows.includes('Camera wisselen: V') && rows.includes('Camera dichtbij: 1') && rows.includes('Camera hoog: 3'), 'the form lists the thirteen actions with the keys of the file', rows.join(' | '));
  await page.screenshot({ path: path.join(OUT, 'toetsen.png') });
  const status = () => page.textContent('#key-binding-status');
  await page.click('#key-binding-jump');
  check(await page.textContent('#key-binding-jump') === 'Druk op een toets…' && /Druk op de gewenste toets/.test(await status()), 'a click on an action waits for a key');
  await page.keyboard.press('KeyW');
  check(await status() === 'De toets W wordt al gebruikt! Kies een andere toets.', 'a key another action has is refused in the original\'s words', await status());
  await page.keyboard.press('KeyP');
  check(/P is gereserveerd/.test(await status()), 'P is kept for the pause', await status());
  await page.keyboard.press('Tab');
  check(/Tab wordt al gebruikt door het spel zelf/.test(await status()), 'a key of one of the game\'s other actions (Tab: scores) is refused', await status());
  await page.keyboard.press('KeyU');
  check(await status() === 'Je hebt een ongeldige toets gekozen.', 'a key the game has no name for (U) is refused', await status());
  await page.keyboard.press('KeyJ');
  check(await page.textContent('#key-binding-jump') === 'J / Rechtermuisknop', 'a free key replaces the action\'s keyboard keys; its mouse button stays', await page.textContent('#key-binding-jump'));
  await page.click('#key-binding-walk'); await page.keyboard.press('Escape');
  check(await page.textContent('#key-binding-walk') === 'Shift' && await page.isVisible('#key-settings'), 'Esc leaves "press a key" and not the form');
  await page.click('#key-binding-camera'); await page.keyboard.press('KeyC');
  await page.click('#key-binding-cameraNear'); await page.keyboard.press('KeyZ');
  await page.screenshot({ path: path.join(OUT, 'toetsen-gewijzigd.png') });
  check((await fileLines(page)).Jump === 'Space,RightMouse', 'nothing is written before OK');
  await page.click('#apply-key-settings');
  f = await fileLines(page);
  const cam = await page.evaluate(() => { const g = window.RecompGame, k = g.settings.get('keys'); return { own: (k.cameraBy || {})[g.players.current], others: k.camera }; });
  check(f.Jump === 'J,RightMouse' && f.Weapon1 === 'Z' && f.MoveForward === 'Up,W' && JSON.stringify(cam.own) === '["KeyC"]' && await page.isVisible('[data-settings-page="more"]'), 'OK writes the lines of the player\'s file and his camera key, and leads back to Meer instellingen', JSON.stringify(f) + ' ' + JSON.stringify(cam));
  check(JSON.stringify(cam.others) === '["KeyV"]', 'the camera key is this player\'s own: every other player still has V (it was one key for all, shown as the chosen player\'s)', JSON.stringify(cam.others));
  // Annuleren and Standaard
  await page.click('#open-key-settings'); await page.click('#key-binding-attack'); await page.keyboard.press('KeyK'); await page.click('#cancel-key-settings');
  check((await fileLines(page)).Fire === 'Control', 'Annuleren writes nothing');
  await page.click('#open-key-settings'); await page.click('#default-key-settings');
  check(/standaardtoetsen zijn hersteld/.test(await status()), 'Standaard says what it did', await status());
  await page.click('#apply-key-settings');
  f = await fileLines(page);
  check(f.Jump === 'Space,RightMouse' && f.Weapon1 === '1' && f.Walk === 'Shift' && JSON.stringify(await page.evaluate(() => { const g = window.RecompGame; return g.settings.get('keys').cameraBy[g.players.current]; })) === '["KeyV"]', 'Standaard and OK: the starting keys again', JSON.stringify(f));
  // a second player keeps his own keys
  await page.click('#open-key-settings'); await page.click('#key-binding-forward'); await page.keyboard.press('KeyI'); await page.click('#apply-key-settings');
  await page.click('[data-settings-action="cancel"]:visible');
  f = await fileLines(page);
  check(f.MoveForward === 'I', 'forward on I alone for this player', f.MoveForward);
  // in the game: I walks, W and the arrow do not; Shift slows down; C/V switches the camera; the game's own page shows the same keys
  await startWorld(page);
  const hold = (code) => [() => page.keyboard.down(code), () => page.keyboard.up(code)];
  const sI = await speedWhile(page, ...hold('KeyI')), sW = await speedWhile(page, ...hold('KeyW')), sUp = await speedWhile(page, ...hold('ArrowUp'));
  check(sI.speed > 150 && sW.speed === 0 && sUp.speed === 0, 'in the game the player\'s key walks and the keys he took away do not', `I ${sI.speed}, W ${sW.speed}, Up ${sUp.speed} units per second`);
  const sBack = await speedWhile(page, ...hold('KeyS'));
  const sSlow = await speedWhile(page, async () => { await page.keyboard.down('ShiftLeft'); await page.keyboard.down('KeyS'); }, async () => { await page.keyboard.up('KeyS'); await page.keyboard.up('ShiftLeft'); });
  check(sBack.speed === 144 && Math.abs(sSlow.speed / sBack.speed - 96 / 156.8) < 0.01, 'Shift (the key of Rustig lopen) walks slowly, backwards too', `${sBack.speed} and ${sSlow.speed}`);
  // The left mouse button shoots while the mouse is caught (the keys of Schieten are held), and the click that catches
  // the mouse does not. Headless Chromium has no pointer to catch: the page is told the canvas has it.
  const mouseShot = await page.evaluate(async () => {
    const g = window.RecompGame, c = document.getElementById('screen'), wait = (ms) => new Promise((r) => setTimeout(r, ms));
    const ev = (target, type) => target.dispatchEvent(new MouseEvent(type, { button: 0, buttons: type === 'mousedown' ? 1 : 0, bubbles: true, cancelable: true, clientX: 600, clientY: 300 }));
    const out = { look: g.settings.get('mouseLook') };
    const was = c.requestPointerLock; c.requestPointerLock = () => { out.asked = (out.asked || 0) + 1; };
    let caught = null;
    Object.defineProperty(document, 'pointerLockElement', { configurable: true, get: () => caught });
    ev(c, 'mousedown'); await wait(60); out.catching = g.input.mouseKeys(); ev(window, 'mouseup');
    caught = c;
    ev(c, 'mousedown'); await wait(60); out.down = g.input.mouseKeys(); ev(window, 'mouseup'); await wait(30); out.up = g.input.mouseKeys();
    delete document.pointerLockElement; c.requestPointerLock = was;
    return out;
  });
  check(mouseShot.look && mouseShot.asked >= 1 && mouseShot.catching.length === 0 && mouseShot.down.join() === '17' && mouseShot.up.length === 0, 'the left mouse button: the click that catches the mouse does not shoot; with the mouse caught it holds the key of Schieten (Ctrl) until it is let go', JSON.stringify(mouseShot));
  await page.keyboard.press('KeyV');
  check(await page.evaluate(() => window.RecompGame.settings.get('camera')) === 'first', 'V switches to first person');
  await page.keyboard.press('KeyV');
  // the settings over the game: the keys are the game's now
  await page.keyboard.press('F10'); await page.waitForSelector('#settings[open]'); await page.click('#open-more-settings');
  check(await page.isDisabled('#open-key-settings') && /Spelbesturing/.test(await page.textContent('#key-settings-note')), 'over a running game the form is closed and points to the game\'s own Spelbesturing', await page.textContent('#key-settings-note'));
  await page.screenshot({ path: path.join(OUT, 'instellingen-in-spel.png') });
  // Muziek and Geluidseffecten over a running game: on OK to the game's own setters and to the player's file,
  // which the game thread writes (source/host/volume.js)
  const volRows = await page.evaluate(() => ['music', 'effects'].map((k) => { const r = document.getElementById(`game-volume-${k}-row`); return [!r.hidden, document.getElementById(`game-volume-${k}`).value]; }));
  await page.evaluate(() => { for (const [k, v] of [['music', 40], ['effects', 65]]) { const e = document.getElementById(`game-volume-${k}`); e.value = v; e.dispatchEvent(new Event('input', { bubbles: true })); } });
  await page.click('[data-settings-action="ok"]:visible');
  const sound = () => page.evaluate(() => { const g = window.RecompGame, t = g.players.text(g.players.current) || ''; return [(/^MusicVolume=(.*)$/m.exec(t) || [])[1], (/^SoundVolume=(.*)$/m.exec(t) || [])[1]]; });
  await page.waitForFunction(() => /^MusicVolume=40\s*$/m.test(window.RecompGame.players.text(window.RecompGame.players.current) || ''), null, { timeout: 8000 }).catch(() => {});
  check(volRows.every((r) => r[0]) && volRows[0][1] === '80' && (await sound()).join() === '40,65' && await page.evaluate(() => window.RecompGame.running && !window.RecompGame.paused), 'over a running game Meer instellingen has Muziek and Geluidseffecten; OK hands them to the game, which writes them to the player\'s file', JSON.stringify([volRows, await sound()]));
  await page.waitForTimeout(500);
  const tap = async (k, wait = 900) => { await page.keyboard.press(k, { delay: 90 }); await page.waitForTimeout(wait); };
  await tap('Escape', 2500); await tap('ArrowDown'); await tap('ArrowDown'); await tap('ArrowDown'); await tap('Enter', 1500);
  await page.screenshot({ path: path.join(OUT, 'spelbesturing.png') });
  console.log('       (look at spelbesturing.png: the game\'s own page must show Vooruit: I)');
  await context.close();
}

if (only.includes('pad')) {
  console.log('--- a controller');
  const { context, page } = await open();
  await page.goto(url + '?skipintro=1');
  await makePlayer(page, 'Pad');
  await startWorld(page);
  const pad = (axes, buttons = []) => page.evaluate(([a, b]) => { window.__pad = { axes: a, buttons: b }; }, [axes, buttons]);
  const off = () => pad([0, 0, 0, 0]);
  await pad([0, 0, 0, 0]); await page.waitForTimeout(300);
  const full = await speedWhile(page, () => pad([0, 1, 0, 0]), off);
  const half = await speedWhile(page, () => pad([0, 0.18 + 0.82 * 0.5, 0, 0]), off);
  const dead = await speedWhile(page, () => pad([0.1, 0.14, 0, 0]), off);
  check(full.speed === 144 && Math.abs(half.speed - 72) < 1 && dead.speed === 0, 'left stick back: full speed at the rim, half of it halfway past the dead zone, nothing inside 18 percent', `${full.speed}, ${half.speed}, ${dead.speed} units per second`);
  const fwd = await speedWhile(page, () => pad([0, -(0.18 + 0.82 * 0.25), 0, 0]), off);
  check(Math.abs(fwd.speed - 156.8 * 0.25) < 1 && fwd.steered > half.steered, 'left stick a quarter forward: a quarter of the run, steered by the host', `${fwd.speed}`);
  const walk = await speedWhile(page, () => pad([0, 1, 0, 0], [4]), off);
  check(Math.abs(walk.speed - 144 * 96 / 156.8) < 1, 'LB held: walking slowly', `${walk.speed}`);
  const dpad = await speedWhile(page, () => pad([0, 0, 0, 0], [13]), off);
  check(dpad.speed === 144, 'the d-pad walks as the keys do, at full speed', `${dpad.speed}`);
  await pad([0, 0, 0, 0], [3]); await page.waitForTimeout(200); await off(); await page.waitForTimeout(200);
  check(await page.evaluate(() => window.RecompGame.settings.get('camera')) === 'first', 'Y switches to first person');
  await pad([0, 0, 0, 0], [3]); await page.waitForTimeout(200); await off(); await page.waitForTimeout(200);
  check(await page.evaluate(() => window.RecompGame.settings.get('camera')) === 'third', 'and back');
  // R3: the settings over the game, worked with the controller
  await pad([0, 0, 0, 0], [11]); await page.waitForTimeout(300); await off();
  await page.waitForSelector('#settings[open]', { timeout: 5000 }).catch(() => {});
  check(await page.evaluate(() => document.getElementById('settings').open && window.RecompGame.paused), 'R3 opens Instellingen over the game, which waits');
  await page.waitForTimeout(400);
  check(/Controller: Speelcontroller/.test(await page.textContent('#controller-status')), 'the controller is named in Meer instellingen', await page.textContent('#controller-status'));
  await pad([0, 0, 0, 0], [1]); await page.waitForTimeout(300); await off(); await page.waitForTimeout(600);
  check(await page.evaluate(() => !document.getElementById('settings').open && !window.RecompGame.paused), 'B closes them again and the game goes on');
  // the controller in use disappears
  await speedWhile(page, () => pad([0, 1, 0, 0]), async () => {});
  await page.evaluate(() => { window.__pad = null; });
  await page.waitForSelector('#controller-lost[open]', { timeout: 5000 }).catch(() => {});
  check(await page.evaluate(() => document.getElementById('controller-lost').open && window.RecompGame.paused), 'the controller that was being used is gone: the game is paused and says so');
  await page.screenshot({ path: path.join(OUT, 'controller-los.png') });
  await page.waitForTimeout(1500);
  const frames0 = await page.evaluate(() => window.RecompGame.framesDrawn); await page.waitForTimeout(700);
  check(await page.evaluate(() => window.RecompGame.framesDrawn) === frames0, 'no frame is drawn while it waits');
  await pad([0, 0, 0, 0]); await page.waitForTimeout(500);
  await pad([0, 0, 0, 0], [0]); await page.waitForTimeout(400); await off(); await page.waitForTimeout(1200);
  check(await page.evaluate(() => !document.getElementById('controller-lost').open && !window.RecompGame.paused && window.RecompGame.running), 'connected again, A goes on');
  const after = await speedWhile(page, () => pad([0, 1, 0, 0]), off);
  check(after.speed === 144, 'and the stick walks again', `${after.speed}`);
  await context.close();
  // a controller that was connected but never used does not interrupt
  const second = await open();
  await second.page.goto(url + '?skipintro=1'); await makePlayer(second.page, 'Pad');
  await second.page.evaluate(() => { window.__pad = { axes: [0, 0, 0, 0], buttons: [] }; });
  await startWorld(second.page);
  await second.page.evaluate(() => { window.__pad = null; }); await second.page.waitForTimeout(800);
  check(await second.page.evaluate(() => !document.getElementById('controller-lost').open && !window.RecompGame.paused), 'losing a controller nobody touched interrupts nothing');
  // first-time hint of a keyboard player: shown once
  check((await second.page.evaluate(() => window.__ev)).some((e) => e[0] === 'recomp-hint' && /WASD om te bewegen/.test(e[1])), 'first start of the first world: the hint for mouse and keyboard', JSON.stringify(await second.page.evaluate(() => window.__ev.filter((e) => e[0] === 'recomp-hint'))));
  await second.page.screenshot({ path: path.join(OUT, 'hint-desktop.png') });
  await second.page.evaluate(() => { window.__ev.length = 0; window.RecompGame.stop(); });
  await second.page.waitForFunction(() => !window.RecompGame.running, null, { timeout: 30000 });
  await startWorld(second.page); await second.page.waitForTimeout(1500);
  check(!(await second.page.evaluate(() => window.__ev)).some((e) => e[0] === 'recomp-hint'), 'the second time it is not shown again');
  await second.context.close();
  // a player who starts with the mouse and then takes the controller during the opening scene gets the controller's hint
  const third = await open();
  await third.page.goto(url + '?skipintro=1'); await makePlayer(third.page, 'Pad');
  await third.page.evaluate(() => { window.__pad = { axes: [0, 0, 0, 0], buttons: [] }; const g = window.RecompGame; g.start({ player: g.players.current, world: 1, difficulty: 1, adventure: false }); });
  await third.page.waitForFunction(() => window.RecompGame.running && window.RecompGame.stats && window.RecompGame.stats.cutscene, null, { timeout: 120000 });
  await third.page.evaluate(() => { window.__pad = { axes: [0, -1, 0, 0], buttons: [] }; });
  await third.page.waitForFunction(() => window.__ev.some((e) => e[0] === 'recomp-hint'), null, { timeout: 60000 }).catch(() => {});
  const hinted = (await third.page.evaluate(() => window.__ev)).filter((e) => e[0] === 'recomp-hint').map((e) => e[1]);
  check(hinted.length === 1 && /^Linkerstick: bewegen/.test(hinted[0]), 'started with the mouse, then the stick moved in the opening scene: the controller\'s hint', JSON.stringify(hinted));
  await third.page.screenshot({ path: path.join(OUT, 'hint-controller.png') });
  await third.context.close();
}

if (only.includes('touch')) {
  console.log('--- a phone: touch controls');
  // fingers on the glass are sent through Chromium's CDP (two at a time, held, dragged): no other engine has that
  if (chromiumOnly('touch: the stick, the look drag, held buttons and two fingers (CDP Input.dispatchTouchEvent)')) {
  const { context, page } = await open({ viewport: { width: 915, height: 412 }, deviceScaleFactor: 2, hasTouch: true, isMobile: true, userAgent: 'Mozilla/5.0 (Linux; Android 14; Pixel 8) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/130.0.0.0 Mobile Safari/537.36' });
  const cdp = await context.newCDPSession(page);
  const touch = (type, points) => cdp.send('Input.dispatchTouchEvent', { type, touchPoints: points.map(([x, y, id]) => ({ x, y, id, radiusX: 8, radiusY: 8, force: 1 })) });
  await page.goto(url + '?skipintro=1');
  await makePlayer(page, 'Tik');
  await page.evaluate(() => { const g = window.RecompGame; window.__started = g.start({ player: g.players.current, world: 1, difficulty: 1, adventure: false }); });
  await page.waitForFunction(() => window.RecompGame.running, null, { timeout: 120000 });
  await page.waitForFunction(() => window.RecompGame.stats && window.RecompGame.stats.cutscene, null, { timeout: 30000 });
  await page.waitForTimeout(700);
  const box = (sel) => page.evaluate((s) => { const e = document.querySelector(s); if (!e) return null; const r = e.getBoundingClientRect(); return { x: r.x, y: r.y, w: r.width, h: r.height, shown: !!(r.width && r.height) && getComputedStyle(e).display !== 'none' }; }, sel);
  check((await box('.touch-controls')).shown && !(await box('.touch-stick')).shown && (await box('.touch-jump')).shown, 'during the opening scene the stick and the look area are gone, the buttons stay');
  await page.screenshot({ path: path.join(OUT, 'telefoon-scene.png') });
  for (let k = 0; k < 90; k++) { if ((await stats(page)).control) break; await page.waitForTimeout(500); }
  await page.waitForFunction(() => window.__ev.some((e) => e[0] === 'recomp-hint'), null, { timeout: 8000 }).catch(() => {});
  const hint = (await page.evaluate(() => window.__ev)).find((e) => e[0] === 'recomp-hint');
  check(!!hint && hint[1] === 'Stick links: bewegen · veeg rechts: kijken · Menu: het menu van het spel', 'the first-time hint of the touch controls', hint ? hint[1] : 'none');
  await page.waitForTimeout(600);
  await page.screenshot({ path: path.join(OUT, 'telefoon.png') });
  const stick = await box('.touch-stick'), gear = await box('#menu-gear'), cam = await box('.touch-camera'), walkB = await box('.touch-walk'), menuB = await box('.touch-menu'), hintB = await box('#game-notice');
  check(stick.shown && cam.shown && walkB.shown && menuB.shown, 'stick, Camera, Menu and Lopen are on screen');
  const overlap = (a, b) => a.x < b.x + b.w && b.x < a.x + a.w && a.y < b.y + b.h && b.y < a.y + a.h;
  // the game's HUD rows at the top right: everything right of 73 percent of the width, down to 20 percent of the height (measured on the picture)
  // and at the top left the hearts, to 0.88 of the height from the left edge
  const hud = { x: 915 - 412 * 0.5, y: 0, w: 412 * 0.5, h: 412 * 0.2 }, hudLeft = { x: 0, y: 0, w: 412 * 0.9, h: 412 * 0.2 };
  check(gear.shown && !overlap(gear, hud), 'the gear is clear of the HUD\'s potion count and treasure at the top right', `gear at ${Math.round(gear.x)},${Math.round(gear.y)} ${gear.w}×${gear.h}`);
  check(![cam, walkB, menuB].some((b) => overlap(b, hud) || overlap(b, hudLeft)) && !overlap(cam, gear) && !overlap(walkB, await box('.touch-jump')) && !overlap(walkB, await box('.touch-fire')) && !overlap(hintB, stick) && !overlap(hintB, cam), 'Menu, Camera and Lopen are clear of the HUD, of the gear and of the other buttons; the hint is clear of the stick', JSON.stringify([cam, menuB, walkB].map((b) => [Math.round(b.x), Math.round(b.w)])));
  const cx = stick.x + stick.w / 2, cy = stick.y + stick.h / 2, R = stick.w / 2;
  const at = (f) => [cx, cy + R * (0.12 + 0.88 * f), 1];      // pulled back by a share f of the range past the dead zone
  const pull = (f) => [async () => { await touch('touchStart', [[cx, cy, 1]]); await touch('touchMove', [at(f)]); }, () => touch('touchEnd', [])];
  const tFull = await speedWhile(page, ...pull(1)), tHalf = await speedWhile(page, ...pull(0.5));
  check(tFull.speed === 144 && Math.abs(tHalf.speed - 72) < 1.5, 'the touch stick pulled back: full speed at the rim, half of it halfway', `${tFull.speed} and ${tHalf.speed} units per second`);
  // Lopen: a tap switches it on, another off
  await touch('touchStart', [[walkB.x + walkB.w / 2, walkB.y + walkB.h / 2, 2]]); await touch('touchEnd', []);
  const pressed = await page.getAttribute('.touch-walk', 'aria-pressed');
  const tWalk = await speedWhile(page, ...pull(1));
  await touch('touchStart', [[walkB.x + walkB.w / 2, walkB.y + walkB.h / 2, 2]]); await touch('touchEnd', []);
  check(pressed === 'true' && Math.abs(tWalk.speed - 144 * 96 / 156.8) < 1 && await page.getAttribute('.touch-walk', 'aria-pressed') === 'false', 'Lopen: tapped on, RedCat walks slowly in every direction; tapped off again', `${tWalk.speed}`);
  await touch('touchStart', [[cam.x + cam.w / 2, cam.y + cam.h / 2, 3]]); await touch('touchEnd', []);
  check(await page.evaluate(() => window.RecompGame.settings.get('camera')) === 'first', 'Camera: first person');
  await touch('touchStart', [[cam.x + cam.w / 2, cam.y + cam.h / 2, 3]]); await touch('touchEnd', []);
  // a held stick is let go when the page goes to the background
  await touch('touchStart', [[cx, cy, 1]]); await touch('touchMove', [at(1)]); await page.waitForTimeout(1500);
  await page.evaluate(() => window.dispatchEvent(new Event('blur'))); await page.waitForTimeout(2300);
  const let0 = await stats(page);
  await touch('touchEnd', []);
  check(let0.speed === 0, 'a stick that is held when the window loses the focus is let go', `${let0.speed}`);
  // the Startinfo picture follows the same rule as the overlay
  await context.close();
  }
  // Where things lie on a phone held either way (found by the review of 2026-11-14: Menu half off an upright
  // screen, the subtitle box under "Overslaan" and the buttons, the hint over the gear and Camera, the frame counter).
  for (const [name, w, h] of [['liggend', 844, 390], ['staand', 390, 844]]) {
    const v = await open({ viewport: { width: w, height: h }, deviceScaleFactor: 2, hasTouch: true, isMobile: true, userAgent: 'Mozilla/5.0 (Linux; Android 14; Pixel 8) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/130.0.0.0 Mobile Safari/537.36' });
    await v.page.goto(url + '?skipintro=1');
    await makePlayer(v.page, 'Tik');
    // (headless Firefox's full screen is 1366x768 whatever the viewport: the places are looked at in the window there)
    const windowed = engine === 'firefox' && !notRun(`${name}: where things lie in full screen (headless Firefox's full screen is 1366x768 whatever the viewport): looked at in the window, full screen off`);
    await v.page.evaluate((off) => { const g = window.RecompGame; g.settings.set('showFps', true); if (off) g.settings.set('fullscreen', false); g.start({ player: g.players.current, world: 1, difficulty: 1, adventure: false }); }, windowed);
    await v.page.waitForFunction(() => window.RecompGame.running, null, { timeout: 120000 });
    const rect = (sel) => v.page.evaluate((q) => { const e = document.querySelector(q); if (!e) return null; const r = e.getBoundingClientRect(), c = getComputedStyle(e); return r.width && r.height && c.display !== 'none' && c.visibility !== 'hidden' && !e.hidden ? { x: r.x, y: r.y, w: r.width, h: r.height } : null; }, sel);
    const hits = (a, b) => !!a && !!b && a.x < b.x + b.w && b.x < a.x + a.w && a.y < b.y + b.h && b.y < a.y + a.h;
    const inside = (a) => !!a && a.x >= 0 && a.y >= 0 && a.x + a.w <= w && a.y + a.h <= h;
    const show = (o) => JSON.stringify(Object.fromEntries(Object.entries(o).map(([k, b]) => [k, b ? [b.x, b.y, b.x + b.w, b.y + b.h].map(Math.round) : null])));
    await v.page.waitForFunction(() => { const q = document.getElementById('subtitle'); return !q.hidden && q.textContent.length > 3 && !document.getElementById('cutscene-skip').hidden; }, null, { timeout: 30000 }).catch(() => {});
    const sub = await rect('#subtitle'), skipB = await rect('#cutscene-skip'), fire = await rect('.touch-fire'), jump = await rect('.touch-jump'), walk2 = await rect('.touch-walk'), menu2 = await rect('.touch-menu'), pic = await rect('#screen');
    await v.page.screenshot({ path: path.join(OUT, `telefoon-${name}-scene.png`) });
    check(inside(menu2), `${name}: the touch button Menu is on the screen as a whole`, show({ menu2 }));
    check(!!sub && !!skipB && inside(sub) && ![skipB, fire, jump, walk2, menu2].some((b) => hits(sub, b)), `${name}: the subtitle box lies over neither "Overslaan" nor a button`, show({ sub, skipB, fire, jump, walk2 }));
    // the longest line of the game's scenes (the Castle's, 189 characters) still fits
    const long = await v.page.evaluate(() => { const q = document.getElementById('subtitle'), was = q.textContent; q.textContent = 'Gelukkig, want je moet toch naar binnen! Je kunt de ophaalbrug neerlaten door op de knop te schieten. Als je straks 20 flesjes toverdrank kan vinden, kan ik je weer een nieuwe toverkracht geven!'; const r = q.getBoundingClientRect(); q.textContent = was; return { x: r.x, y: r.y, w: r.width, h: r.height }; });
    check(inside(long) && ![skipB, fire, jump, walk2, menu2].some((b) => hits(long, b)), `${name}: and neither does a line of three sentences`, show({ long }));
    for (let k = 0; k < 90; k++) { if ((await stats(v.page)).control) break; await v.page.waitForTimeout(500); }
    await v.page.waitForFunction(() => !document.getElementById('game-notice').hidden && document.getElementById('game-notice').classList.contains('hint'), null, { timeout: 10000 }).catch(() => {});
    const hint2 = await rect('#game-notice'), gear2 = await rect('#menu-gear'), cam2 = await rect('.touch-camera'), fps = await rect('#stats'), stick2 = await rect('.touch-stick');
    await v.page.screenshot({ path: path.join(OUT, `telefoon-${name}-hint.png`) });
    check(!!hint2 && inside(hint2) && ![gear2, cam2, menu2, stick2, fire, jump, walk2].some((b) => hits(hint2, b)), `${name}: the first-time hint covers no button`, show({ hint2, gear2, cam2, menu2 }));
    // the HUD's top right: from 0.45 of the picture's height left of its right edge, 20 percent down
    const hudR = { x: pic.x + pic.w - 0.45 * pic.h, y: pic.y, w: 0.45 * pic.h, h: 0.2 * pic.h };
    check(!!fps && inside(fps) && ![gear2, cam2, menu2, hudR, fire, jump, walk2].some((b) => hits(fps, b)), `${name}: the frame counter covers neither the HUD's potion count nor a button`, show({ fps, hudR, gear2, cam2 }));
    await v.context.close();
  }
}
await browser.close();
notRunSummary();
for (const p of [...new Set(problems)]) console.log('   page problem: ' + p);
check(problems.length === 0, 'no errors on the pages');
console.log(`${count - failed} of ${count} checks passed`);
process.exit(failed ? 1 : 0);
