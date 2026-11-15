#!/usr/bin/env node
// Save states that cannot be used, and what a restore may touch (source/host/snapshot.js,
// source/web/game.js, docs/LLM_GUIDE.md "Save states"). A state of another build, a damaged or
// cut-off record, a browser that cannot store: none of it may reach the player as an error.
//
//   node tools/savestate-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--only node|browser|<case>] [--gpu]
//
// Node part (tools/run-headless.mjs with tools/savestate-plugin.mjs, no server needed):
//   - the README pair in world 3 (saved there, restored into a game booted in world 1): equal memory hashes
//   - the README pair with other players' files changed in between: equal memory hashes, the
//     other players' files as they are now, a deleted player not back, the own player's name and
//     volumes as the menu left them, nothing of the others handed to the platform
//   - some twenty states that must be refused, each with the game's memory untouched; a state
//     refused where the main loop stands, after which the booted game runs on; a state whose
//     loading fails, which ends as StateUnusable
// Browser part (headless Chromium; needs the server): a real state is saved, then its stored record
// is changed and the page opened with ?autostart=1&continue=1. Per case: no error dialog, a game
// that runs in the world that was asked for, the line for the player on screen, the bad record
// gone. Also: the menu does not offer a state it drops, a valid state still continues, players
// changed or deleted since the save stay so, and a save that fails leaves the game running;
// leaving or hiding the page while a continued game loads is no failed try; the state of a page
// that is hidden is stored while it is hidden; a game that ended with its player file further
// than the state loses the state; and a record the page cannot judge (the game's lists do not
// arrive) is asked about again and not played over.
// Also (2026-11-14): no state of a RedCat without health or of a game that is ending, and the last
// state of a living RedCat still there after "Nee" on the retry screen ('dead'); a state by itself
// when the adventure goes to its next world, continued in that world ('world-change'); F9 and what
// it must not count ('reload'); a Snelspel's state apart from the adventure's ('snelspel'); the
// older saved places, their dialogs in the menu and over the game, and their budget ('recovery').
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { launch, isChromium, notRun, notRunSummary, DEV_URL } from './browsers.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const args = process.argv.slice(2);
const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
const url = opt('url', DEV_URL);
const only = opt('only', '');
const OUT = path.join(ROOT, 'tools/out/savestate-check');
fs.mkdirSync(OUT, { recursive: true });
let failed = 0, passed = 0;
const check = (ok, what, detail = '') => { if (ok) passed++; else failed++; console.log(`${ok ? '  ok  ' : ' FAIL '} ${what}${detail ? '  [' + detail + ']' : ''}`); };
const wants = (name) => !only || only === name || (only === 'browser' && name !== 'node');

// --- Node -------------------------------------------------------------------------------------------
if (wants('node')) {
  console.log('Node runner');
  const state = path.join(OUT, 'state.bin');
  const run = (name, extra) => {
    const report = path.join(OUT, name + '.json');
    fs.rmSync(report, { force: true });
    const r = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '60', '--fresh', '--out', path.join(OUT, 'run-' + name), '--plugin', 'tools/savestate-plugin.mjs', '--ss-mode', name, '--ss-out', report, ...extra], { cwd: ROOT, encoding: 'utf8', maxBuffer: 1 << 26 });
    const text = r.stdout + r.stderr;
    fs.writeFileSync(path.join(OUT, name + '.log'), text);
    return { text, hash: (/hash 300 passes later: ([0-9a-f]{8})/.exec(text) || [])[1], report: fs.existsSync(report) ? JSON.parse(fs.readFileSync(report, 'utf8')) : {} };
  };
  const a = run('save', ['--world', '1', '--save-at', '600', '--state', state, '--hash-after', '300']);
  const b = run('restore', ['--world', '5', '--restore', state, '--hash-after', '300']);
  check(!!a.hash && a.hash === b.hash, 'restored into a game booted in another world, with other players\' files changed: the same memory 300 passes on', `${a.hash} ${b.hash}`);
  const d = b.report.drive || {}, kept = b.report.kept || [];
  check(d[2] && d[2].total === '4321' && d[2].world === 'SubLevel1_3', 'another player\'s file is not put back to the state\'s copy', JSON.stringify(d[2]));
  check(d[3] === null, 'a player deleted since the save does not come back', JSON.stringify(d[3]));
  check(d[4] && d[4].name === 'Vier', 'a player made since the save is still there', JSON.stringify(d[4]));
  check(d[1] && d[1].marker === 'saved' && d[1].name === 'Nieuw' && d[1].music === '80' && d[1].sound === '80' && b.report.volumeCalls === 0, 'the own player\'s file is the state\'s, with the name of now; volumes that did not change are not set again', JSON.stringify([d[1], b.report.volumeCalls]));
  // The menu's sliders moved since the save: the file gets them and the game's own two setters are called with them
  // (source/host/volume.js). The levels are those of a game that was started with these volumes.
  const cv = run('restore', ['--world', '5', '--restore', state, '--hash-after', '300', '--ss-volumes', '50,100']);
  const started = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '60', '--fresh', '--out', path.join(OUT, 'run-vol'), '--plugin', 'tools/volume-plugin.mjs', '--vol-report', '800', '--ini', 'Settings\\Player1.ini|Sound|MusicVolume|50;Settings\\Player1.ini|Sound|SoundVolume|100'], { cwd: ROOT, encoding: 'utf8', maxBuffer: 1 << 26 });
  const live = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '60', '--fresh', '--out', path.join(OUT, 'run-vol2'), '--plugin', 'tools/volume-plugin.mjs', '--vol-report', '800', '--vol-set', '50,100', '--vol-at', '500'], { cwd: ROOT, encoding: 'utf8', maxBuffer: 1 << 26 });
  const vol = (r) => { const q = /^\[vol\] (.*)$/m.exec(r.stdout || ''); return q ? JSON.parse(q[1]) : null; };
  const want = vol(started), got = vol(live), lv = (o) => (o ? Object.fromEntries(o.playing.filter((q) => q[1] > -10000)) : {});
  const cl = cv.report.levels || {}, cd = (cv.report.drive || {})[1] || {};
  check(cd.music === '50' && cd.sound === '100' && cv.report.volumeCalls === 2 && !!want && cl['LEVEL 1 - THE FOREST.WAV'] === lv(want)['LEVEL 1 - THE FOREST.WAV'] && cl['LV1SND1.WAV'] === lv(want)['LV1SND1.WAV'] && cl['LV1SND1.WAV'] !== (b.report.levels || {})['LV1SND1.WAV'] && cv.hash !== a.hash,
    'a state continued after the volumes were changed in the menu plays at the menu\'s volumes: music and effects at the levels of a game started with them', JSON.stringify({ file: [cd.music, cd.sound], calls: cv.report.volumeCalls, restored: cl, started: lv(want), unchanged: b.report.levels }));
  check(!!got && !!want && JSON.stringify(got.playing) === JSON.stringify(want.playing) && got.calls === 2 && got.kept === 1 && got.file.join() === '50,100' && want.calls === 0,
    'the two volumes changed while the game runs (the settings over a game, OK): every playing sound at the level of a game started with them, and the player\'s file has them', JSON.stringify(got && { calls: got.calls, kept: got.kept, file: got.file, levels: lv(got) }));
  check(kept.length === 1 && kept[0][0] === 'PLAYER1.INI' && kept[0][1].marker === 'saved' && kept[0][1].name === 'Nieuw', 'only the own player\'s file is handed to the platform to keep', JSON.stringify(kept));
  // The same in world 3, restored into a game booted in world 1. This world's code copies what earlier
  // calls left on the stack into lasting data, so it only continues bit for bit when a state holds
  // the stack below the stack pointer too (snapshot.js); world 1 does not show that.
  const plain = (name, extra) => {
    const r = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '60', '--fresh', '--out', path.join(OUT, 'run-' + name), ...extra], { cwd: ROOT, encoding: 'utf8', maxBuffer: 1 << 26 });
    fs.writeFileSync(path.join(OUT, name + '.log'), r.stdout + r.stderr);
    return (/hash 300 passes later: ([0-9a-f]{8})/.exec(r.stdout + r.stderr) || [])[1];
  };
  const state3 = path.join(OUT, 'state3.bin');
  const a3 = plain('save3', ['--world', '3', '--save-at', '900', '--state', state3, '--hash-after', '300']);
  const b3 = plain('restore3', ['--world', '1', '--restore', state3, '--hash-after', '300']);
  check(!!a3 && a3 === b3, 'a state of world 3 restored into a game booted in world 1: the same memory 300 passes on', `${a3} ${b3}`);
  fs.rmSync(state3, { force: true });
  const c = run('refuse', ['--world', '1', '--restore', state]);
  const refused = Object.entries(c.report.refused || {});
  check(refused.length >= 20, `${refused.length} unusable states tried`);
  for (const [name, r] of refused) check(r.answer !== 'ACCEPTED' && !/^OTHER ERROR/.test(r.answer) && r.untouched, `refused, memory untouched: ${name}`, r.answer);
  const same = (c.report.refused || {})['other identity, same thunk count'];
  check(same && same.answer === 'made by another build', 'a state with the same number of thunks and another identity is another build', same && same.answer);
  const loop = c.report.loop || {};
  check(loop.before === 'passes' && /main loop/.test(loop.answer || '') && loop.untouched && loop.passesAfter === 20 && loop.restored === false, 'refused where the main loop stands: nothing written, the booted game runs on', JSON.stringify(loop));
  const load = c.report.load || {};
  check(load.unusable && load.written && /loading failed/.test(load.answer || '') && /StateUnusable/.test(c.text), 'a state whose loading fails ends as StateUnusable (written), not as another error', JSON.stringify(load));

  // --- no state of a dead RedCat or of a game that is ending; a state when the world changes ---
  // (source/host/mainloop.js saveBlocked and `changed`, source/web/worker.js onPass)
  const guard = (what, extra = []) => run('guard', ['--world', '1', '--ss-guard', what, ...extra]).report;
  const g1 = guard('death');
  const A = (r) => (r.answers || []).map((q) => q[1] || 'ok').join(' > ');
  check(A(g1) === 'ok > dead > ok' && g1.answers[1][2] === 0 && g1.answers[2][3] === 2, 'RedCat dies with lives left: no state from the pass he has no health until the pass he is back, with a life less', JSON.stringify(g1.answers));
  const g2 = guard('nee');
  check(A(g2) === 'ok > dead' && g2.file && g2.file.life === '3' && g2.file.health === '10', 'the last life and "Nee" on the retry screen: no state from his death to the end of the game; his file keeps the state at the door of the world', JSON.stringify({ answers: g2.answers, file: g2.file }));
  const g3 = guard('ja');
  check(A(g3) === 'ok > dead > ok' && g3.changedAt.length === 1 && g3.changedAt[0] === g3.answers[2][0] && g3.end && g3.end.lives === 3, 'the last life and "Ja": no state until the world has started again, and that pass says the world changed', JSON.stringify({ answers: g3.answers, changed: g3.changedAt }));
  const stateNext = path.join(OUT, 'state-next.bin');
  const g4run = run('guard', ['--world', '1', '--ss-guard', 'next', '--save-at', '701', '--state', stateNext, '--hash-after', '300']);
  const g4 = g4run.report;
  check(A(g4) === 'ok' && g4.changedAt.length === 1 && g4.changedAt[0] === 701 && g4.before.world === 'SubLevel1_1' && g4.after.world === 'SubLevel1_2' && g4.quitAfterChange === 0, 'an adventure goes to its next world: the pass says the world changed, a state may be taken, the player file is at the next world', JSON.stringify({ changed: g4.changedAt, before: g4.before, after: g4.after }));
  const b4 = plain('restore-next', ['--world', '1', '--restore', stateNext, '--hash-after', '300']);
  check(!!g4run.hash && g4run.hash === b4, 'the state taken in the pass that changed the world, restored into a game booted in world 1: the same memory 300 passes on', `${g4run.hash} ${b4}`);
  fs.rmSync(stateNext, { force: true });
  const g5 = guard('next', ['--quick']);
  check(A(g5) === 'ok > quit' && g5.changedAt.length === 1 && g5.quitAfterChange === 1, 'a Snelspel world ends: the pass says the world changed and the game is ending, so no state', JSON.stringify({ answers: g5.answers, changed: g5.changedAt }));

  // --- recovery points: the ladder (source/web/recovery.js) ---
  const { planRotation, RECOVERY } = await import('../source/web/recovery.js');
  const ladder = (cadence, jitter, minutes = 240) => {
    const slots = [null, null, null, null], most = [0, 0, 0, 0], least = [1e9, 1e9, 1e9, 1e9];
    let t = 0, same = 0, empty = 0, seed = 12345;
    const rnd = () => { seed = (Math.imul(seed, 1103515245) + 12345) >>> 0; return seed / 4294967296; };
    while (t < minutes * 60) {
      t += cadence + rnd() * jitter;
      const ages = slots.map((at) => (at === null ? null : t - at));
      if (t > 30 * 60) for (let k = 1; k < 4; k++) { if (ages[k] === null) empty++; else { most[k] = Math.max(most[k], ages[k]); least[k] = Math.min(least[k], ages[k]); } }
      for (const [from, to] of planRotation(ages)) slots[to] = slots[from];
      slots[0] = t;
      for (let k = 0; k < 3; k++) if (slots[k] !== null && slots[k] === slots[k + 1]) same++;
    }
    return { most: most.slice(1).map((x) => +(x / 60).toFixed(1)), least: least.slice(1).map((x) => +(x / 60).toFixed(1)), same, empty };
  };
  const minute = ladder(60, 2), phone3 = ladder(180, 2), fast = ladder(5, 2), uneven = ladder(60, 90);
  check(minute.same === 0 && minute.empty === 0 && minute.least[0] >= 1.9 && minute.most[0] <= 3.3 && minute.least[1] >= 3.9 && minute.most[1] <= 7.5 && minute.least[2] >= 7.5 && minute.most[2] <= 16, 'recovery points with a state every minute: about 2 to 3, 4 to 7 and 8 to 15 minutes old just before the next state, never the same state twice', JSON.stringify(minute));
  check(phone3.same === 0 && phone3.empty === 0 && phone3.most[2] <= 16 && fast.same === 0 && fast.empty === 0 && fast.most[2] <= 16 && fast.least[2] >= 7 && uneven.same === 0 && uneven.empty === 0 && uneven.most[2] <= 20, 'the ladder also holds with a state every three minutes, every five seconds (F5) and at uneven moments', JSON.stringify({ phone3, fast, uneven }));
  check(planRotation([30, null, null, null]).join() === '0,1' && planRotation([null, null, null, null]).length === 0 && planRotation([60, 100, null, null]).length === 0 && RECOVERY.L[1] === RECOVERY.U[0] && RECOVERY.L[2] === RECOVERY.U[1], 'the first older place is kept at once, nothing moves without a newest state or before its time', JSON.stringify([planRotation([30, null, null, null]), planRotation([60, 100, null, null])]));
}

// --- browser ----------------------------------------------------------------------------------------
const NEW_CASES = ['dead', 'world-change', 'reload', 'snelspel', 'recovery'];
const BROWSER_CASES = [...NEW_CASES, 'other-build', 'no-identity', 'same-thunks', 'same-thunks-other-world', 'truncated', 'corrupt-gzip', 'not-a-state', 'ranges-cut', 'no-launch', 'garbage', 'load-fails', 'loop-refuses', 'crash-after', 'menu', 'valid', 'bad-launch', 'ends-early', 'leave', 'hidden', 'moved-on', 'lists', 'players', 'save-fails'];
if (BROWSER_CASES.some(wants)) {
  if (!isChromium && args.includes('--gpu')) notRun('--gpu (a Chromium flag for its GL backend)');
  const gl = args.includes('--gpu') ? ['--use-angle=gl'] : ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'];
  const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...gl] });

  // In the page: the events of the game API as they come, and what a test needs to change a stored record.
  const inPage = () => {
    window.__ev = [];
    // when the game that runs first said that its world is there (0: not yet): the line of a notice counts its time from then
    window.__worldAt = 0;
    { let stale = null; window.addEventListener('recomp-running', () => { window.__worldAt = 0; stale = window.RecompGame.stats; }); setInterval(() => { const g = window.RecompGame, s = g && g.stats; if (!window.__worldAt && g && g.running && s && s !== stale && s.world) window.__worldAt = performance.now(); }, 50); }
    for (const name of ['recomp-running', 'recomp-restart', 'recomp-notice', 'recomp-exit', 'recomp-save-dropped', 'recomp-saved', 'recomp-save-failed', 'recomp-save-skipped', 'recomp-world']) {
      window.addEventListener(name, (e) => window.__ev.push({ name: name.slice(7), t: Math.round(performance.now()), detail: e.detail ? JSON.parse(JSON.stringify(e.detail)) : null }));
    }
    const idb = (mode, fn) => new Promise((res, rej) => {
      const o = indexedDB.open('rcspook-recomp', 1);
      o.onupgradeneeded = () => o.result.createObjectStore('states');
      o.onerror = () => rej(o.error);
      o.onsuccess = () => { const t = o.result.transaction('states', mode); const r = fn(t.objectStore('states')); t.oncomplete = () => { o.result.close(); res(r.result); }; t.onerror = t.onabort = () => { o.result.close(); rej(t.error); }; };
    });
    const through = async (bytes, stream) => new Uint8Array(await new Response(new Blob([bytes]).stream().pipeThrough(stream)).arrayBuffer());
    const T = window.__t = {
      get: (key) => idb('readonly', (s) => s.get(key)),
      put: (key, value) => idb('readwrite', (s) => s.put(value, key)),
      keys: () => idb('readonly', (s) => s.getAllKeys()),
      gzip: (b) => through(b, new CompressionStream('gzip')),
      gunzip: (b) => through(b, new DecompressionStream('gzip')),
      /** [header, memory] of a packed state, and back. */
      split: (raw) => { const n = new DataView(raw.buffer, raw.byteOffset).getUint32(4, true); return [JSON.parse(new TextDecoder().decode(raw.subarray(8, 8 + n))), raw.subarray(8 + n)]; },
      join: (head, body) => { const h = new TextEncoder().encode(JSON.stringify(head)); const out = new Uint8Array(8 + h.length + body.length); const dv = new DataView(out.buffer); dv.setUint32(0, 0x53435352, true); dv.setUint32(4, h.length, true); out.set(h, 8); out.set(body, 8 + h.length); return out; },
      /** The kept good record with its state changed by fn(header, memory) -> [header, memory]. */
      async edited(fn) { const rec = await T.get('pristine'); const [h, body] = T.split(await T.gunzip(rec.data)); const raw = T.join(...fn(h, body)); rec.data = await T.gzip(raw); rec.size = raw.length; return rec; },
      /** Puts a changed copy of the kept good record in player 1's slot. */
      async prepare(kind) {
        let rec = await T.get('pristine');
        // The page stores the data as a Blob. The changes below are made to bytes, and the record is
        // put back with bytes: the form of records written before 2026-11-14 (and of a browser that
        // cannot keep a Blob), which the page must still read. 'valid' keeps the Blob as it is.
        if (kind !== 'valid') rec.data = new Uint8Array(await rec.data.arrayBuffer());
        if (kind === 'other-build') rec.build = '0123456789abcdef.1';
        else if (kind === 'no-identity') { delete rec.v; delete rec.build; }                                  // what every build before this one stored
        else if (kind === 'same-thunks') rec = await T.edited((h, b) => { h.abi = h.abi.replace(/^./, (c) => (c === '0' ? '1' : '0')); return [h, b]; });      // machine.nextThunk untouched
        else if (kind === 'truncated') rec.data = rec.data.slice(0, rec.data.length >> 1);
        else if (kind === 'corrupt-gzip') { rec.data = rec.data.slice(); for (let k = 1000; k < 1100; k++) rec.data[rec.data.length - k] ^= 0x5A; for (let k = 0; k < 64; k++) rec.data[(rec.data.length >> 1) + k] ^= 0xFF; }
        else if (kind === 'not-a-state') { const raw = new Uint8Array(5000); rec.data = await T.gzip(raw); rec.size = raw.length; }
        else if (kind === 'ranges-cut') { const raw = (await T.gunzip(rec.data)).slice(0, rec.size - 30 * 1048576); rec.data = await T.gzip(raw); rec.size = raw.length; }
        else if (kind === 'no-launch') delete rec.launch;
        else if (kind === 'garbage') rec = 'this is not a record';
        else if (kind === 'load-fails') rec = await T.edited((h, b) => { h.parts.gdriver.handles = 5; return [h, b]; });      // passes every check, fails while loading
        else if (kind === 'loop-refuses') rec = await T.edited((h, b) => { h.esp += 0x40; return [h, b]; });                 // only wrong where the main loop stands
        else if (kind === 'crash-after') rec = await T.edited((h, b) => { const out = b.slice(), live = (h.esp - 0x100) & ~0xFFF; let o = 0; for (const [a, n] of h.ranges) { if (a >= live && a < 0x1800000) out.fill(0, o, o + n); o += n; } return [h, out]; });   // a well-formed state with an empty stack and image (everything from the live stack up to the heap)
        else if (kind === 'bad-launch') rec.launch = { ...rec.launch, difficulty: 99 };                                    // a launch the game ends on by itself, before the state is loaded
        else if (kind !== 'valid' && kind !== 'valid-bytes') throw new Error('unknown case ' + kind);
        if (rec && typeof rec === 'object') rec.savedAt = Date.now();
        await T.put('player1', rec);
      },
    };
  };
  const open = async (init, options = {}) => {
    const context = await browser.newContext({ viewport: { width: 800, height: 600 }, ...options });
    await context.addInitScript(inPage);
    if (init) await context.addInitScript(init);
    const page = await context.newPage();
    const problems = [];
    page.on('pageerror', (e) => problems.push('pageerror: ' + e.message));
    page.on('crash', () => problems.push('the page died'));
    return { context, page, problems };
  };
  /** Waits for a game that runs and keeps drawing; returns what there is to see. */
  const settle = async (page, runs = 1) => {
    await page.waitForFunction((n) => window.__ev.filter((e) => e.name === 'running').length >= n && window.RecompGame.running && window.RecompGame.framesDrawn > 20, runs, { timeout: 120000 });
    // Twenty frames are also drawn by the loading screen (Firefox under Playwright takes twenty seconds over a world):
    // the world itself is waited for, as long again. A game that never says so is looked at as it is.
    await page.waitForFunction(() => !window.RecompGame.running || window.__worldAt > 0, null, { timeout: 120000 }).catch(() => console.log('     (the game did not report a world within two minutes)'));
    const f0 = await page.evaluate(() => window.RecompGame.framesDrawn);
    await page.waitForTimeout(1500);
    return page.evaluate(async (before) => {
      const g = window.RecompGame, el = document.getElementById('game-notice');
      const count = (name) => window.__ev.filter((e) => e.name === name).length;
      return {
        running: g.running, frames: g.framesDrawn - before, crash: window.__crash ? window.__crash.message : null,
        fatal: !!(document.getElementById('menu-fatal') && document.getElementById('menu-fatal').open), exits: count('exit'),
        runs: count('running'), restarts: count('restart'), dropped: window.__ev.filter((e) => e.name === 'save-dropped').map((e) => e.detail.kind + ': ' + e.detail.reason),
        notices: window.__ev.filter((e) => e.name === 'notice').map((e) => e.detail.text), noticeShown: !el.hidden && el.getClientRects().length > 0 ? el.textContent : '',
        record: await window.__t.get('player1'), keys: await window.__t.keys(),
        world: g.files.iniGet('C:\\REDCAT\\SETTINGS\\GAME.INI', 'Run', 'StartSubLevelNumber'), status: (document.getElementById('status') || {}).textContent || '',
      };
    }, f0);
  };
  const PLACE = ['Het Bos', 'Het Kasteel', 'Het Kerkhof', 'De Grotten', 'De Toren'];
  const TEXT = { version: 'Je opgeslagen plek past niet meer bij deze versie van het spel.', damaged: 'Je opgeslagen plek kon niet meer geladen worden.' };

  // One browser profile for the cases that change player 1's record: a state is saved once and kept under another key.
  const t = await open();
  const start = Date.now();
  await t.page.goto(url + '?autostart=1&world=1');
  await t.page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.stats && window.RecompGame.framesDrawn > 60, null, { timeout: 120000 });
  await t.page.evaluate(() => window.RecompGame.save());
  await t.page.waitForFunction(() => window.__ev.some((e) => e.name === 'saved'), null, { timeout: 30000 });
  const base = await t.page.evaluate(async () => { const rec = await window.__t.get('player1'); await window.__t.put('pristine', rec); const [h] = window.__t.split(await window.__t.gunzip(rec.data)); return { v: rec.v, build: rec.build, size: rec.size, packed: rec.data.size, blob: rec.data instanceof Blob, world: rec.launch.world, abi: h.abi, hv: h.v, ranges: h.ranges.length, spans: h.spans.length }; });
  check(base.v === 2 && /^[0-9a-f]{16}\.\d+$/.test(base.build) && /^[0-9a-f]{16}$/.test(base.abi), 'a saved record carries the page\'s build and the state its own identity', JSON.stringify(base));
  check(base.blob && base.packed > 1048576 && base.spans >= 4 && base.ranges >= base.spans, 'the state is stored as a Blob, with the pages of zeros left out of its heap', `${base.ranges} pieces of memory in ${base.spans} ranges`);
  console.log(`  (state ${(base.size / 1048576).toFixed(1)} MB, ${(base.packed / 1048576).toFixed(1)} MB stored; first game after ${((Date.now() - start) / 1000).toFixed(1)} s)`);

  /** kind: the change to the record; world: the world asked for in the address; expect: what must be seen. */
  const unusable = async (kind, world, expect, prepare = kind) => {
    if (!wants(kind)) return;
    console.log(`${kind}: continue asked in world ${world}`);
    await t.page.goto('about:blank');
    await t.page.goto(url + '?skipintro=1&nothing=1');          // the page's origin, without a game, to change the record
    await t.page.waitForFunction(() => window.__t);
    await t.page.evaluate((k) => window.__t.prepare(k), prepare);
    t.problems.length = 0;
    const began = Date.now();
    await t.page.goto(`${url}?autostart=1&world=${world}&continue=1`);
    const s = await settle(t.page, expect.runs);
    const took = ((Date.now() - began) / 1000).toFixed(1);
    check(s.running && s.frames > 10 && !s.crash && !s.fatal && s.exits === 0 && t.problems.length === 0, `${kind}: a game runs, no error dialog, no error (${took} s)`, JSON.stringify({ running: s.running, frames: s.frames, crash: s.crash, fatal: s.fatal, exits: s.exits, problems: t.problems }));
    check(s.world === String(world), `${kind}: it is the world that was asked for, not the state's`, `StartSubLevelNumber ${s.world}`);
    const restarts = expect.restarts || 0;
    check(s.runs === expect.runs && s.restarts === restarts, `${kind}: ${restarts ? 'the page started the game thread again' : 'one game thread, started once'}`, `runs ${s.runs}, restarts ${s.restarts}`);
    const text = `${TEXT[expect.kind]} Je begint ${PLACE[world - 1]} opnieuw.`;
    check(s.notices.length === 1 && s.notices[0] === text && s.noticeShown === text, `${kind}: the player is told, and the line is on screen while the game runs`, JSON.stringify({ notices: s.notices, shown: s.noticeShown }));
    if (expect.kept) check(s.record !== undefined && s.dropped.length === 0, `${kind}: the record is kept for one more try`, JSON.stringify(s.dropped));
    else check(s.record === undefined && s.dropped.length === 1 && s.dropped[0].startsWith(expect.kind), `${kind}: the record is gone`, JSON.stringify({ keys: s.keys, dropped: s.dropped }));
    return s;
  };
  await unusable('other-build', 2, { kind: 'version', runs: 1 });
  if (wants('other-build')) {
    // how long the line stays: until the world has been there for 12 s (counted from the game's first report of
    // its world, which comes once a second; not from the start of the game thread, whose loading may take longer than that)
    const seen = await t.page.evaluate(async () => { const el = document.getElementById('game-notice'), ran = window.__worldAt; while (!el.hidden && performance.now() - ran < 30000) await new Promise((r) => setTimeout(r, 200)); return Math.round(performance.now() - ran); });
    check(seen >= 11000 && seen <= 15000, 'the line stays for about 12 s of a world on screen, then goes', `${seen} ms`);
  }
  await unusable('no-identity', 2, { kind: 'version', runs: 1 });
  await unusable('same-thunks', 1, { kind: 'version', runs: 1 });                                      // refused in the game thread; the booted world is the one asked for and runs on
  await unusable('same-thunks-other-world', 3, { kind: 'version', runs: 1, restarts: 1 }, 'same-thunks');      // refused in the game thread, which had booted the state's world: the page starts the one asked for
  await unusable('truncated', 2, { kind: 'damaged', runs: 1 });
  await unusable('corrupt-gzip', 1, { kind: 'damaged', runs: 1 });
  await unusable('not-a-state', 1, { kind: 'damaged', runs: 1 });
  await unusable('ranges-cut', 2, { kind: 'damaged', runs: 1, restarts: 1 });               // found by the game thread (gzip is whole, the state in it is not)
  await unusable('no-launch', 2, { kind: 'damaged', runs: 1 });
  await unusable('bad-launch', 2, { kind: 'damaged', runs: 1 });
  if (wants('ends-early')) {
    // a continued game that ends by itself before its state was loaded (made here: the game thread says so right after it started)
    await t.context.route('**/source/web/worker.js', async (route) => {
      const r = await route.fetch(); const body = await r.text(), at = "  post({ t: 'running', later });\n";
      if (!body.includes(at)) check(false, 'ends-early: the change to worker.js finds its place');
      await route.fulfill({ response: r, body: body.replace(at, at + "  if (game.host.mainLoop.pendingRestore) { post({ t: 'exit', code: 0 }); return; }\n") });
    });
    await unusable('ends-early', 2, { kind: 'damaged', runs: 2, restarts: 1 }, 'valid-bytes');
    await t.context.unroute('**/source/web/worker.js');
  }
  await unusable('garbage', 1, { kind: 'damaged', runs: 1 });
  await unusable('loop-refuses', 1, { kind: 'damaged', runs: 1 });
  await unusable('load-fails', 1, { kind: 'damaged', runs: 2, restarts: 1 });
  await unusable('crash-after', 1, { kind: 'damaged', runs: 2, restarts: 1, kept: true });
  if (wants('crash-after')) {
    // the same record a second time: now it goes
    console.log('crash-after: the same record once more');
    t.problems.length = 0;
    await t.page.goto(`${url}?autostart=1&world=1&continue=1`);
    const s = await settle(t.page, 2);
    check(s.running && s.frames > 10 && !s.crash && !s.fatal && s.record === undefined && s.dropped.length === 1, 'crash-after: after the second failed try the record is gone, and the game runs', JSON.stringify({ running: s.running, crash: s.crash, fatal: s.fatal, dropped: s.dropped, keys: s.keys }));
  }

  if (wants('menu')) {
    console.log('menu: a state of another build, read by the menu');
    await t.page.goto(url + '?skipintro=1&nothing=1');
    await t.page.waitForFunction(() => window.__t);
    await t.page.evaluate(async () => { await window.__t.prepare('other-build'); window.RecompGame.players.set(1, [['Level1', 'CurrentSubLevel', 'SubLevel1_2']]); });
    t.problems.length = 0;
    await t.page.goto(url + '?skipintro=1');
    await t.page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 30000 });
    const m = await t.page.evaluate(async () => ({ saves: window.__menu.saves.size, record: await window.__t.get('player1'), note: window.__menu.getState().resumeNote, returning: window.__menu.getState().returning, dropped: window.__ev.filter((e) => e.name === 'save-dropped').length }));
    check(m.saves === 0 && m.record === undefined && m.dropped === 1, 'menu: the state is dropped when the menu reads its saves, and not offered', JSON.stringify({ saves: m.saves, dropped: m.dropped }));
    check(m.returning && m.note === `${TEXT.version} Je begint Het Kasteel opnieuw.`, 'menu: Startinfo says so instead of promising the saved place', m.note);
    await t.page.click('[data-menu-choice="adventure"]'); await t.page.click('#native-next');
    await t.page.waitForFunction(() => window.__menu.page === 'startinfo');
    const shown = await t.page.evaluate(() => { const el = document.getElementById('native-start-note'); return el.hidden ? '' : el.textContent; });
    check(shown.includes('past niet meer bij deze versie'), 'menu: the line is on the Startinfo page', shown);
    await t.page.screenshot({ path: path.join(OUT, 'menu-startinfo.png') });
    await t.page.click('#native-start');
    const s = await settle(t.page, 1);
    await t.page.screenshot({ path: path.join(OUT, 'menu-game-notice.png') });
    check(s.running && !s.crash && !s.fatal && s.world === '2' && s.notices.length === 1 && s.noticeShown === `${TEXT.version} Je begint Het Kasteel opnieuw.` && t.problems.length === 0, 'menu: Start! starts world 2 with the line over the game, no error dialog', JSON.stringify({ running: s.running, crash: s.crash, fatal: s.fatal, world: s.world, notices: s.notices, problems: t.problems }));
    await t.page.evaluate(() => window.RecompGame.players.set(1, [['Level1', 'CurrentSubLevel', 'SubLevel1_1']]));
  }

  // the record as the page stored it (a Blob), and the same as bytes, the form of older records
  for (const form of ['valid', 'valid-bytes']) if (wants('valid')) {
    console.log(form === 'valid' ? 'valid: an untouched record' : 'valid: the same record with its data as bytes');
    await t.page.goto('about:blank');
    await t.page.goto(url + '?skipintro=1&nothing=1');
    await t.page.waitForFunction(() => window.__t);
    await t.page.evaluate((f) => window.__t.prepare(f), form);
    const stored = await t.page.evaluate(async () => { const rec = await window.__t.get('player1'); return rec.data instanceof Blob ? 'blob' : rec.data instanceof Uint8Array ? 'bytes' : 'other'; });
    check(stored === (form === 'valid' ? 'blob' : 'bytes'), `valid: the record's data is ${form === 'valid' ? 'a Blob' : 'bytes'}`, stored);
    t.problems.length = 0;
    await t.page.goto(`${url}?autostart=1&world=3&continue=1`);
    await t.page.waitForFunction(() => /Opgeslagen spel geladen/.test((document.getElementById('status') || {}).textContent || ''), null, { timeout: 120000 }).catch(() => {});
    const s = await settle(t.page, 1);
    check(s.running && s.frames > 10 && !s.crash && !s.fatal && s.notices.length === 0 && s.record !== undefined && s.dropped.length === 0 && s.world === '1' && t.problems.length === 0, 'valid: the game is continued (the state\'s own world), nothing is said, the record stays', JSON.stringify({ running: s.running, frames: s.frames, crash: s.crash, notices: s.notices, dropped: s.dropped, world: s.world, status: s.status, problems: t.problems }));
    await t.page.waitForTimeout(11000);
    const tries = await t.page.evaluate(() => localStorage.getItem('rcspook-recomp.resume-tries'));
    check(tries === '{}' || tries === null, 'valid: after ten seconds of running the try is no longer counted', String(tries));
  }
  if (wants('leave')) {
    // Leaving the page while a continued game is still loading is not a failed try: twice, and the state must still be there
    console.log('leave: the page is left twice while a continued game loads');
    await t.page.goto('about:blank');
    await t.page.goto(url + '?skipintro=1&nothing=1');
    await t.page.waitForFunction(() => window.__t);
    await t.page.evaluate(() => window.__t.prepare('valid'));
    const counts = [];
    for (let k = 0; k < 2; k++) {
      await t.page.goto(`${url}?autostart=1&world=1&continue=1`);
      await t.page.waitForFunction(() => window.__ev.some((e) => e.name === 'running'), null, { timeout: 120000, polling: 20 });
      await t.page.goto(url + '?skipintro=1&nothing=1');
      await t.page.waitForFunction(() => window.__t);
      counts.push(await t.page.evaluate(() => localStorage.getItem('rcspook-recomp.resume-tries')));
    }
    check(counts.every((c) => c === null || c === '{}'), 'leave: no failed try is counted', counts.join(' '));
    t.problems.length = 0;
    await t.page.goto(`${url}?autostart=1&world=1&continue=1`);
    await t.page.waitForFunction(() => /Opgeslagen spel geladen/.test((document.getElementById('status') || {}).textContent || ''), null, { timeout: 120000 }).catch(() => {});
    const s = await settle(t.page, 1);
    check(s.running && !s.crash && s.notices.length === 0 && s.record !== undefined && s.dropped.length === 0 && t.problems.length === 0, 'leave: the third time the game is continued from the state, which is still there', JSON.stringify({ running: s.running, crash: s.crash, notices: s.notices, dropped: s.dropped }));
    // and a page that is hidden while the continued game has not shown to work yet: no failed try either
    const hiddenTries = await t.page.evaluate(() => { Object.defineProperty(document, 'hidden', { configurable: true, get: () => true }); document.dispatchEvent(new Event('visibilitychange')); const v = localStorage.getItem('rcspook-recomp.resume-tries'); Object.defineProperty(document, 'hidden', { configurable: true, get: () => false }); document.dispatchEvent(new Event('visibilitychange')); return v; });
    check(hiddenTries === null || hiddenTries === '{}', 'leave: a page that is hidden right after continuing counts no failed try', String(hiddenTries));
  }
  await t.context.close();

  const hide = (page, hidden) => page.evaluate((h) => {
    Object.defineProperty(document, 'hidden', { configurable: true, get: () => h });
    Object.defineProperty(document, 'visibilityState', { configurable: true, get: () => (h ? 'hidden' : 'visible') });
    document.dispatchEvent(new Event('visibilitychange'));
  }, hidden);
  if (wants('hidden')) {
    // The state asked for when the page is hidden must be taken while it is hidden: it is what keeps
    // the game of a tab a phone throws away. (Hiding is played to the page; Playwright's pages stay visible.)
    console.log('hidden: the save state of a page that is hidden');
    const h = await open();
    await h.page.goto(url + '?autostart=1&world=1');
    await h.page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 120, null, { timeout: 120000 });
    const saved = () => h.page.evaluate(() => window.__ev.filter((e) => e.name === 'saved').length);
    const ROUNDS = 10;
    let inTime = 0;
    const took = [];
    for (let k = 0; k < ROUNDS; k++) {
      await h.page.waitForTimeout(350 + ((k * 137) % 400));
      const n0 = await saved(), t0 = Date.now();
      await hide(h.page, true);
      const ok = await h.page.waitForFunction((n) => window.__ev.filter((e) => e.name === 'saved').length > n, n0, { timeout: 4000 }).then(() => true, () => false);
      if (ok) { inTime++; took.push(Date.now() - t0); }
      const f0 = await h.page.evaluate(() => window.RecompGame.framesDrawn);
      await h.page.waitForTimeout(300);
      if (k === 0) check(await h.page.evaluate((f) => window.RecompGame.paused && window.RecompGame.framesDrawn - f <= 1, f0), 'hidden: the game stands still once the state is taken');
      await hide(h.page, false);
    }
    check(inTime === ROUNDS, `hidden: the state was stored while the page was still hidden, ${ROUNDS} times out of ${ROUNDS}`, `${inTime} of ${ROUNDS}; ${took.join(", ")} ms after hiding`);
    // inside the game's own menu there is no moment between two passes: no state, but the game must pause all the same
    await h.page.keyboard.down('Escape'); await h.page.waitForTimeout(150); await h.page.keyboard.up('Escape'); await h.page.waitForTimeout(1500);
    const n1 = await saved();
    await hide(h.page, true); await h.page.waitForTimeout(700);
    const f1 = await h.page.evaluate(() => window.RecompGame.framesDrawn);
    await h.page.waitForTimeout(1500);
    const f2 = await h.page.evaluate(() => window.RecompGame.framesDrawn), n2 = await saved();
    check(f2 === f1 && n2 === n1, 'hidden: a game inside its own menu pauses all the same, without a state (that shows the menu was open)', `${f2 - f1} frames in a hidden second and a half, ${n2 - n1} states`);
    await hide(h.page, false); await h.page.waitForTimeout(1000);
    const f3 = await h.page.evaluate(() => ({ f: window.RecompGame.framesDrawn, running: window.RecompGame.running, crash: window.__crash }));
    check(f3.running && !f3.crash && f3.f - f2 > 10 && h.problems.length === 0, 'hidden: and goes on when the page is shown again', `${f3.f - f2} frames`);
    // back in the game, the state that was asked for is taken at the first pass
    await h.page.keyboard.down('Escape'); await h.page.waitForTimeout(150); await h.page.keyboard.up('Escape');
    const late = await h.page.waitForFunction((n) => window.__ev.filter((e) => e.name === 'saved').length > n, n1, { timeout: 8000 }).then(() => true, () => false);
    check(late, 'hidden: the state that could not be taken in the menu is taken when the game is back in play');
    await h.context.close();
  }

  if (wants('moved-on')) {
    // A game that ends by itself with its player file further than the stored state: the state must go,
    // or continuing would put the older file back. The game writes its file from its own memory when
    // it ends, so the newer file is made where the page hears of it: a write of the file with the
    // adventure at the next world, just before the game thread says it ended.
    console.log('moved-on: the game ends by itself after its player file moved on');
    const m = await open();
    const stopAndLook = async () => {
      await m.page.goto(url + '?autostart=1&world=1');
      await m.page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 60, null, { timeout: 120000 });
      await m.page.evaluate(() => window.RecompGame.save());
      await m.page.waitForFunction(() => window.__ev.some((e) => e.name === 'saved'), null, { timeout: 30000 });
      await m.page.waitForTimeout(500);
      await m.page.evaluate(() => window.RecompGame.stop());
      await m.page.waitForFunction(() => window.__ev.some((e) => e.name === 'exit'), null, { timeout: 30000 });
      return m.page.evaluate(async () => { const g = window.RecompGame; return { info: await g.saveInfo(1), record: await window.__t.get('player1'), world: g.players.get(1).world, dropped: window.__ev.filter((e) => e.name === 'save-dropped').length, note: g.lostSaveNote(1, 2) }; });
    };
    let r = await stopAndLook();
    check(r.info && r.record !== undefined && r.world === 1, 'moved-on: a game that is stopped with its file where the state stands keeps the state', JSON.stringify({ info: !!r.info, world: r.world }));
    await m.context.route('**/source/web/worker.js', async (route) => {
      const resp = await route.fetch(); const body = await resp.text(), at = "    post({ t: 'exit', code });";
      if (!body.includes(at)) check(false, 'moved-on: the change to worker.js finds its place');
      await route.fulfill({ response: resp, body: body.replace(at, `    { const p = 'C:\\\\REDCAT\\\\SETTINGS\\\\PLAYER1.INI', b = game.vfs.readAll(p); let t = ''; for (const c of b) t += String.fromCharCode(c); t = t.replace(/(\\[Level1\\][^\\[]*?CurrentSubLevel=)[^\\r\\n]*/i, '$1SubLevel1_2'); const o = new Uint8Array(t.length); for (let k = 0; k < t.length; k++) o[k] = t.charCodeAt(k); post({ t: 'persist', path: p, data: o }); }\n` + at) });
    });
    r = await stopAndLook();
    check(r.world === 2, 'moved-on: (the stand-in) the player file says world 2 after the game', `world ${r.world}`);
    check(r.info === null && r.record === undefined, 'moved-on: the older state is gone, so the menu starts the world the file says', JSON.stringify({ info: r.info, record: r.record === undefined ? 'none' : 'still there' }));
    check(r.dropped === 0 && r.note === '' && m.problems.length === 0, 'moved-on: without a line about a lost place (nothing was lost)', JSON.stringify({ dropped: r.dropped, note: r.note, problems: m.problems }));
    await m.context.close();
  }

  if (wants('lists')) {
    // The page judges a record by the game's lists (spook.meta.json). When those do not arrive it must
    // ask again, and a record it cannot judge may be neither dropped nor played over.
    console.log('lists: the game\'s lists do not arrive');
    const l = await open();
    await l.page.goto(url + '?autostart=1&world=1');
    await l.page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 60, null, { timeout: 120000 });
    await l.page.evaluate(() => window.RecompGame.save());
    await l.page.waitForFunction(() => window.__ev.some((e) => e.name === 'saved'), null, { timeout: 30000 });
    let refuse = 1, asked = 0;
    await l.context.route('**/game/spook.meta.json', async (route) => { asked++; if (refuse-- > 0) await route.fulfill({ status: 503, body: 'busy' }); else await route.continue(); });
    const menu = async () => {
      await l.page.goto(url + '?skipintro=1');
      await l.page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 30000 });
      return l.page.evaluate(async () => ({ saves: window.__menu.saves.size, unknown: window.RecompGame.saveUnknown(1), record: (await window.__t.get('player1')) !== undefined, note: window.__menu.getState().resumeNote }));
    };
    let s = await menu();
    check(s.saves === 1 && !s.unknown && asked >= 2 && /opgeslagen spel/.test(s.note), 'lists: refused once, asked again: the menu offers the state', JSON.stringify({ ...s, asked }));
    refuse = 1e9;
    s = await menu();
    check(s.saves === 0 && s.unknown && s.record, 'lists: refused every time: the state is not offered, not dropped, and known to be unjudged', JSON.stringify(s));
    // a new adventure, as the menu now offers it (the difficulty page comes first)
    await l.page.click('[data-menu-choice="adventure"]');
    for (let k = 0; k < 4 && await l.page.evaluate(() => window.__menu.page !== 'startinfo'); k++) { await l.page.click('#native-next'); await l.page.waitForTimeout(400); }
    await l.page.click('#native-start');
    await l.page.waitForFunction(() => document.getElementById('menu-fatal').open, null, { timeout: 30000 }).catch(() => {});
    const d = await l.page.evaluate(async () => ({ open: document.getElementById('menu-fatal').open, text: document.getElementById('menu-fatal-message').textContent, running: window.RecompGame.running, runs: window.__ev.filter((e) => e.name === 'running').length, record: (await window.__t.get('player1')) !== undefined, mode: window.__menu.mode }));
    check(d.open && /niet te bereiken/.test(d.text) && !d.running && d.runs === 0 && d.record && d.mode === 'menu', 'lists: Start! starts no game over it; the player is asked to try again', JSON.stringify(d));
    await l.page.evaluate(() => document.getElementById('menu-fatal').close());
    refuse = 0;
    await l.page.waitForFunction(() => window.__menu.saves.size === 1 && !window.RecompGame.saveUnknown(1), null, { timeout: 20000 }).catch(() => {});
    const again = await l.page.evaluate(() => ({ saves: window.__menu.saves.size, unknown: window.RecompGame.saveUnknown(1), note: window.__menu.getState().resumeNote }));
    check(again.saves === 1 && !again.unknown && /opgeslagen spel/.test(again.note), 'lists: when the lists arrive again the menu offers the state by itself', JSON.stringify(again));
    await l.context.close();
  }

  if (wants('players')) {
    console.log('players: other players\' files and a deleted player');
    const p = await open();
    await p.page.goto(url + '?skipintro=1&nothing=1');
    await p.page.waitForFunction(() => window.RecompGame && window.__menu);
    await p.page.evaluate(async () => { const g = window.RecompGame; await g.ready; g.players.create('Een'); g.players.create('Twee'); g.players.create('Drie'); g.players.current = 1; g.players.set(1, [['Sound', 'MusicVolume', 80], ['Sound', 'SoundVolume', 80]]); });
    await p.page.goto(url + '?autostart=1&world=1');
    await p.page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 60, null, { timeout: 120000 });
    await p.page.evaluate(() => window.RecompGame.save());
    await p.page.waitForFunction(() => window.__ev.some((e) => e.name === 'saved'), null, { timeout: 30000 });
    await p.page.goto(url + '?skipintro=1&nothing=1');
    await p.page.waitForFunction(() => window.RecompGame && window.__menu);
    // since the save: player 2 played on, player 3 was deleted, player 4 is new, and the menu renamed player 1 and moved his sliders
    await p.page.evaluate(async () => { const g = window.RecompGame; await g.ready; g.players.set(2, [['Level1', 'CurrentSubLevel', 'SubLevel1_3'], ['Player', 'TotalScore', 4321]]); g.players.remove(3); g.files.writeText('C:\\REDCAT\\SETTINGS\\PLAYER4.INI', g.files.readText('C:\\REDCAT\\SETTINGS\\PLAYER2.INI')); g.players.rename(4, 'Vier'); g.players.rename(1, 'Nieuw'); g.players.set(1, [['Sound', 'MusicVolume', 35], ['Sound', 'SoundVolume', 60]]); });
    p.problems.length = 0;
    await p.page.goto(url + '?autostart=1&world=1&continue=1');
    await p.page.waitForFunction(() => /Opgeslagen spel geladen/.test((document.getElementById('status') || {}).textContent || ''), null, { timeout: 120000 }).catch(() => {});
    const s = await settle(p.page, 1);
    const after = await p.page.evaluate(() => { const g = window.RecompGame, f = (n) => 'C:\\REDCAT\\SETTINGS\\PLAYER' + n + '.INI'; return { two: g.players.get(2), three: g.players.exists(3), four: g.players.get(4), one: g.players.get(1), music: g.files.iniGet(f(1), 'Sound', 'MusicVolume'), sound: g.files.iniGet(f(1), 'Sound', 'SoundVolume') }; });
    check(s.running && !s.crash && !s.fatal && s.notices.length === 0 && s.record !== undefined && p.problems.length === 0, 'players: the game is continued', JSON.stringify({ running: s.running, crash: s.crash, notices: s.notices, problems: p.problems }));
    check(after.two && after.two.world === 3 && after.two.totalScore === 4321, 'players: the other player keeps his progress', JSON.stringify(after.two && { world: after.two.world, totalScore: after.two.totalScore }));
    check(after.three === false, 'players: the deleted player stays deleted');
    check(after.four && after.four.name === 'Vier', 'players: the player made since is still there');
    check(after.one && after.one.name === 'Nieuw' && after.music === '35' && after.sound === '60', 'players: the own player keeps the name and volumes the menu gave him', JSON.stringify({ name: after.one && after.one.name, music: after.music, sound: after.sound }));
    await p.context.close();
  }

  if (wants('save-fails')) {
    console.log('save-fails: storing is refused');
    // the store refuses every write of a state: first with the quota error, then by aborting the transaction
    const q = await open(() => {
      const put = IDBObjectStore.prototype.put;
      window.__putMode = 'quota';
      IDBObjectStore.prototype.put = function (...a) {
        if (this.name !== 'states' || !window.__putMode) return put.apply(this, a);
        if (window.__putMode === 'quota') throw new DOMException('The quota has been exceeded.', 'QuotaExceededError');
        const r = put.apply(this, a); this.transaction.abort(); return r;
      };
    });
    await q.page.goto(url + '?autostart=1&world=1');
    await q.page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 60, null, { timeout: 120000 });
    await q.page.evaluate(() => window.RecompGame.save());
    await q.page.waitForFunction(() => window.__ev.some((e) => e.name === 'save-failed'), null, { timeout: 30000 });
    await q.page.evaluate(() => { window.__putMode = 'abort'; window.RecompGame.save(); });
    await q.page.waitForFunction(() => window.__ev.filter((e) => e.name === 'save-failed').length === 2, null, { timeout: 30000 });
    const s = await settle(q.page, 1);
    check(s.running && s.frames > 10 && !s.crash && !s.fatal && q.problems.length === 0, 'save-fails: the game runs on after two refused saves', JSON.stringify({ running: s.running, frames: s.frames, crash: s.crash, problems: q.problems }));
    check(s.notices.length === 1 && s.notices[0] === 'Opslaan lukt niet: er is te weinig ruimte op dit apparaat. Je kunt gewoon verder spelen.' && s.record === undefined, 'save-fails: the player is told once, calmly; nothing half is stored', JSON.stringify({ notices: s.notices, keys: s.keys }));
    await q.context.close();
    // a browser without compression streams
    const n = await open(() => { delete window.CompressionStream; });
    await n.page.goto(url + '?autostart=1&world=1');
    await n.page.waitForFunction(() => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > 60, null, { timeout: 120000 });
    await n.page.evaluate(() => window.RecompGame.save());
    const s2 = await settle(n.page, 1);
    check(s2.running && !s2.crash && s2.notices.length === 1 && /^Opslaan lukt nu niet/.test(s2.notices[0]) && n.problems.length === 0, 'save-fails: without CompressionStream the game runs and says saving does not work', JSON.stringify({ running: s2.running, crash: s2.crash, notices: s2.notices, problems: n.problems }));
    await n.context.close();
  }

  // ---------------------------------------------------------------------------------------------
  // The cases below make the game do things no script can play to in a few seconds (die, lose the
  // last life, finish a world). The game thread gets three test keys for that, put into worker.js
  // as the page fetches it: virtual key 0xE8 the game's own Kill (CRCPlayer slot 8, 0x4DD1A0), 0xE9
  // the same with no life left, 0xEA the game's own command "nextsave" (game+0x68). Nothing of it
  // is in the port.
  const testKeys = async (context) => {
    await context.route('**/source/web/worker.js', async (route) => {
      const r = await route.fetch(); const body = await r.text(), at = "  post({ t: 'running', later });\n";
      if (!body.includes(at)) check(false, 'the test keys find their place in worker.js');
      await route.fulfill({ response: r, body: body.replace(at, `  { const tm = game.m, raw = platform.input.poll; let ask = 0;
    platform.input.poll = () => { const ev = raw(); if (!ev) return ev; return ev.filter((e) => { const mine = (e.type === 'keydown' || e.type === 'keyup') && e.vk >= 0xE8 && e.vk <= 0xEA; if (mine && e.type === 'keydown') ask = e.vk; return !mine; }); };
    game.host.mainLoop.beforePass.push(() => { if (!ask) return; const what = ask; ask = 0; const u32 = tm.u32, app = u32[0x6B915C >> 2], g = u32[(app + 0x3A4) >> 2], sub = g ? u32[(g + 0x60) >> 2] : 0, pl = sub ? u32[(sub + 0x360) >> 2] : 0, props = pl ? u32[(pl + 0x1F0) >> 2] : 0; if (!props) return;
      if (what === 0xE9) tm.i32[(props + 0x44) >> 2] = 0;
      if (what === 0xE8 || what === 0xE9) tm.call(0x4DD1A0, [], pl);
      if (what === 0xEA) tm.call(0x4040F0, [0x694A68, 8], g + 0x68); }); }\n` + at) });
    });
  };
  const key = (page, vk, ms = 150) => page.evaluate(async ([v, t]) => { const g = window.RecompGame; g.input.key(v, true); await new Promise((r) => setTimeout(r, t)); g.input.key(v, false); }, [vk, ms]);
  const count = (page, name) => page.evaluate((n) => window.__ev.filter((e) => e.name === n).length, name);
  const waitCount = (page, name, n, timeout = 30000) => page.waitForFunction(([nm, k]) => window.__ev.filter((e) => e.name === nm).length >= k, [name, n], { timeout }).then(() => true, () => false);
  const running = (page, frames = 60) => page.waitForFunction((f) => window.RecompGame && window.RecompGame.running && window.RecompGame.framesDrawn > f, frames, { timeout: 120000 });
  const statusOf = (page) => page.evaluate(() => (document.getElementById('status') || {}).textContent || '');
  const savedAtOf = (page, k = 'player1') => page.evaluate(async (q) => { const r = await window.__t.get(q); return r ? r.savedAt : null; }, k);

  if (wants('dead')) {
    console.log('dead: no state of a RedCat without health, nor of a game that is ending');
    const d = await open();
    await testKeys(d.context);
    await d.page.goto(url + '?autostart=1&world=1');
    await running(d.page);
    await d.page.evaluate(() => window.RecompGame.save());
    await waitCount(d.page, 'saved', 1);
    const first = await savedAtOf(d.page);
    // RedCat dies with lives left; F5 while he has no health
    await key(d.page, 0xE8);
    await d.page.waitForTimeout(500);
    await d.page.keyboard.press('F5');
    await d.page.waitForTimeout(600);
    const a = await d.page.evaluate(async () => ({ saved: window.__ev.filter((e) => e.name === 'saved').length, skipped: window.__ev.filter((e) => e.name === 'save-skipped').map((e) => e.detail.why), status: document.getElementById('status').textContent, at: (await window.__t.get('player1')).savedAt }));
    check(a.saved === 1 && a.at === first && a.skipped.join() === 'dead', 'dead: F5 while RedCat has no health takes no state; the stored one is untouched', JSON.stringify(a));
    check(a.status === 'Je avontuur is niet opgeslagen. Dat gebeurt zodra RedCat terug is.', 'dead: the player is told so', a.status);
    await d.page.screenshot({ path: path.join(OUT, 'dead-not-saved.png') });
    const back = await waitCount(d.page, 'saved', 2, 15000);
    const second = await savedAtOf(d.page);
    check(back && second > first, 'dead: the state that was asked for is taken once RedCat is back');
    // the last life: the retry screen, a state asked for while it stands (as the timer would), then "Nee"
    await key(d.page, 0xE9);
    await d.page.waitForTimeout(8000);
    await d.page.screenshot({ path: path.join(OUT, 'dead-retry-screen.png') });
    await d.page.evaluate(() => window.RecompGame.save());
    await d.page.waitForTimeout(1200);
    const n1 = await count(d.page, 'saved');
    await key(d.page, 39, 300);          // right: Nee
    await d.page.waitForTimeout(300);
    await key(d.page, 17, 300);          // fire: confirm
    const ended = await waitCount(d.page, 'exit', 1, 30000);
    await d.page.waitForTimeout(1500);
    const b = await d.page.evaluate(async () => ({ saved: window.__ev.filter((e) => e.name === 'saved').length, at: ((await window.__t.get('player1')) || {}).savedAt, info: await window.RecompGame.saveInfo(1), life: window.RecompGame.files.iniGet('C:\\REDCAT\\SETTINGS\\PLAYER1.INI', 'Player', 'Life'), crash: window.__crash || null }));
    check(ended && !b.crash, 'dead: "Nee" on the retry screen ends the game', JSON.stringify({ ended, crash: b.crash }));
    check(n1 === 2 && b.saved === 2 && b.at === second && !!b.info, 'dead: no state from the retry screen or the ending game; the last state of a living RedCat is still the saved place', JSON.stringify({ before: n1, after: b.saved, same: b.at === second, info: !!b.info }));
    check(b.life === '3', 'dead: the player file holds the state at the door of the world (Life=3), not the lost lives', `Life=${b.life}`);
    d.problems.length = 0;
    await d.page.goto(url + '?autostart=1&world=1&continue=1');
    await d.page.waitForFunction(() => /Opgeslagen spel geladen/.test((document.getElementById('status') || {}).textContent || ''), null, { timeout: 120000 }).catch(() => {});
    const s = await settle(d.page, 1);
    await d.page.waitForTimeout(4000);
    const still = await d.page.evaluate(() => ({ running: window.RecompGame.running, exits: window.__ev.filter((e) => e.name === 'exit').length }));
    check(s.running && s.frames > 10 && !s.crash && !s.fatal && s.notices.length === 0 && still.running && still.exits === 0 && d.problems.length === 0, 'dead: continuing afterwards goes on from that state and keeps running (Doorgaan after a game over)', JSON.stringify({ running: s.running, frames: s.frames, crash: s.crash, notices: s.notices, still, problems: d.problems }));
    await d.context.close();
  }

  if (wants('world-change')) {
    console.log('world-change: the adventure goes to its next world');
    const w = await open();
    await testKeys(w.context);
    await w.page.goto(url + '?autostart=1&world=1');
    await running(w.page);
    const t0 = Date.now();
    await key(w.page, 0xEA);
    // the results screen waits for the fire key; the change is one pass of the main loop
    // (at most 25 s, well under the minute after which the timer would save anyway, and the state must carry the mark of a
    // changed world: without loop.changed in mainloop.js the timer's save satisfied this check after 61 s)
    let got = false;
    for (let k = 0; k < 35 && !got; k++) { await key(w.page, 17, 120); got = await waitCount(w.page, 'saved', 1, 600); }
    const took = ((Date.now() - t0) / 1000).toFixed(1);
    const mark = await w.page.evaluate(() => ({ changed: (window.__ev.find((e) => e.name === 'saved') || { detail: {} }).detail.changed, world: window.__ev.filter((e) => e.name === 'world').map((e) => e.detail) }));
    check(got && mark.changed === true && Number(took) < 30 && mark.world.length === 1 && mark.world[0].world === 2, 'world-change: that state is the one of the pass that changed the world (its mark), and the page was told the world', JSON.stringify(mark) + ` ${took} s`);
    const r = await w.page.evaluate(async () => { const rec = await window.__t.get('player1'); const g = window.RecompGame; return { saves: window.__ev.filter((e) => e.name === 'saved').length, world: rec && rec.launch.world, file: g.players.get(1).world, done: g.players.get(1).adventureDone, level: g.files.iniGet('C:\\REDCAT\\SETTINGS\\PLAYER1.INI', 'Level1', 'Completed'), running: g.running, crash: window.__crash || null }; });
    check(got && r.saves === 1 && r.running && !r.crash, `world-change: a state is taken by itself in the new world (${took} s after the command)`, JSON.stringify(r));
    check(r.world === 2 && r.file === 2, 'world-change: the record and the player file both say world 2', JSON.stringify({ record: r.world, file: r.file }));
    check(r.level === '1' && r.done === false, 'world-change: the game sets [Level1] Completed at the change, and the adventure is not taken for finished', JSON.stringify({ level1Completed: r.level, adventureDone: r.done }));
    // noted while the game runs, before any menu sees the player file: an older place loaded in the game puts the file back to world 1
    const memo = await w.page.evaluate(() => { try { return JSON.parse(localStorage.getItem('rcspook-recomp.menu.v1')).players[1].unlocked; } catch (e) { return null; } });
    check(memo === 2, 'world-change: Het Kasteel is noted as open for Snelspel the moment it is reached', String(memo));
    await w.page.waitForTimeout(1500);
    await w.page.screenshot({ path: path.join(OUT, 'world-change-world2.png') });
    w.problems.length = 0;
    // which world's files the continued game is booted with (after the restore the game's own files are the state's again)
    const levels = new Set();
    w.context.on('request', (q) => { const m = /lvl0(\d)a\.bsp/i.exec(q.url()); if (m) levels.add(Number(m[1]) + 1); });
    await w.page.goto(url + '?autostart=1&world=2&continue=1');
    await w.page.waitForFunction(() => /Opgeslagen spel geladen/.test((document.getElementById('status') || {}).textContent || ''), null, { timeout: 120000 }).catch(() => {});
    const s = await settle(w.page, 1);
    check(s.running && s.frames > 10 && !s.crash && !s.fatal && s.notices.length === 0 && [...levels].join() === '2' && s.restarts === 0 && /Opgeslagen spel geladen/.test(s.status) && w.problems.length === 0, 'world-change: continuing boots world 2 (its level file is the one fetched) and goes on from the state', JSON.stringify({ running: s.running, frames: s.frames, crash: s.crash, notices: s.notices, levels: [...levels], restarts: s.restarts, status: s.status, problems: w.problems }));
    await w.page.screenshot({ path: path.join(OUT, 'world-change-continued.png') });
    // and the menu takes the player for somebody whose adventure is under way in world 2
    await w.page.evaluate(() => window.RecompGame.stop());
    await waitCount(w.page, 'exit', 1);
    await w.page.goto(url + '?skipintro=1');
    await w.page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 30000 });
    const m = await w.page.evaluate(() => { const st = window.__menu.getState(); return { returning: st.returning, level: st.savedLevel, unlocked: st.unlocked, note: st.resumeNote }; });
    check(m.returning && m.level === 1 && m.unlocked === 2 && /opgeslagen spel/.test(m.note), 'world-change: the menu continues the adventure in Het Kasteel, with two Griezelplekken open', JSON.stringify(m));
    await w.context.close();
  }

  if (wants('reload')) {
    console.log('reload: F9 loads the saved place');
    const r = await open();
    await r.page.goto(url + '?autostart=1&world=1');
    await running(r.page);
    await r.page.keyboard.press('F9');
    await r.page.waitForTimeout(700);
    const none = { status: await statusOf(r.page), restarts: await count(r.page, 'restart'), running: await r.page.evaluate(() => window.RecompGame.running) };
    check(none.status === 'Er is nog geen opgeslagen plek om te laden.' && none.restarts === 0 && none.running, 'reload: F9 without a saved place says so and leaves the game as it is', JSON.stringify(none));
    await r.page.keyboard.press('F5');
    await waitCount(r.page, 'saved', 1);
    const at = await savedAtOf(r.page);
    const tries = [];
    let ok = true;
    for (let k = 1; k <= 3; k++) {
      await r.page.keyboard.press('F9');
      ok = ok && await waitCount(r.page, 'restart', k, 20000) && await r.page.waitForFunction((n) => window.__ev.filter((e) => e.name === 'running').length >= n + 1 && /Opgeslagen spel geladen/.test(document.getElementById('status').textContent), k, { timeout: 120000 }).then(() => true, () => false);
      if (k === 1) await r.page.screenshot({ path: path.join(OUT, 'reload-f9.png') });
      await r.page.waitForTimeout(1200);          // well within the ten seconds in which a continued game has not shown to work yet
      tries.push(await r.page.evaluate(() => localStorage.getItem('rcspook-recomp.resume-tries')));
    }
    const s = await settle(r.page, 4);
    const reloads = await r.page.evaluate(() => window.__ev.filter((e) => e.name === 'restart').map((e) => !!(e.detail && e.detail.reload)));
    check(ok && s.running && s.frames > 10 && !s.crash && !s.fatal && s.runs === 4 && reloads.length === 3 && reloads.every(Boolean), 'reload: F9 three times in a row: each time the saved place is loaded and the game runs', JSON.stringify({ ok, running: s.running, frames: s.frames, runs: s.runs, reloads, crash: s.crash }));
    check(s.record && s.record.savedAt === at && s.dropped.length === 0 && s.notices.length === 0 && tries.every((q) => { const n = JSON.parse(q || '{}')[1]; return !n || n.n <= 1; }), 'reload: a deliberate reload is no failed try: the state is still there after three, nothing is said', JSON.stringify({ tries, dropped: s.dropped, notices: s.notices }));
    await r.page.waitForTimeout(10500);
    const after = await r.page.evaluate(() => localStorage.getItem('rcspook-recomp.resume-tries'));
    check(after === '{}' || after === null, 'reload: after ten seconds of running nothing is counted any more', String(after));
    // A second try to continue (one earlier try died without the page being left: what tries.add leaves behind), and F9,
    // the settings over the game and the list of older places within its first ten seconds: the state the game runs
    // from is not taken for one that failed twice.
    await r.page.evaluate((savedAt) => localStorage.setItem('rcspook-recomp.resume-tries', JSON.stringify({ 1: { at: savedAt, n: 1 } })), at);
    await r.page.goto(url + '?autostart=1&world=1&continue=1');
    await r.page.waitForFunction(() => /Opgeslagen spel geladen/.test((document.getElementById('status') || {}).textContent || ''), null, { timeout: 120000 }).catch(() => {});
    const second = await r.page.evaluate(async () => ({ tries: localStorage.getItem('rcspook-recomp.resume-tries'), info: await window.RecompGame.reloadInfo(), points: await window.RecompGame.recoveryInfo(1), record: !!(await window.__t.get('player1')) }));
    await r.page.keyboard.press('F9');
    const again = await waitCount(r.page, 'restart', 1, 20000) && await r.page.waitForFunction(() => window.__ev.filter((e) => e.name === 'running').length >= 2 && /Opgeslagen spel geladen/.test(document.getElementById('status').textContent), null, { timeout: 120000 }).then(() => true, () => false);
    const s2 = await r.page.evaluate(async () => ({ record: ((await window.__t.get('player1')) || {}).savedAt, dropped: window.__ev.filter((e) => e.name === 'save-dropped').map((e) => e.detail), notices: window.__ev.filter((e) => e.name === 'notice').map((e) => e.detail.text), running: window.RecompGame.running }));
    check(/"n":2/.test(second.tries || '') && !!second.info && second.info.savedAt === at && second.record && again && s2.record === at && s2.dropped.length === 0 && s2.notices.length === 0 && s2.running, 'reload: F9 and the settings within ten seconds of a second try to continue: the saved place is loaded, not deleted', JSON.stringify({ second, again, s2 }));
    check(r.problems.length === 0, 'reload: no error on the page', r.problems.join('; '));
    await r.context.close();
  }

  if (wants('snelspel')) {
    console.log('snelspel: a Snelspel keeps its state apart from the adventure\'s');
    const q = await open();
    await q.page.goto(url + '?autostart=1&world=1');
    await running(q.page);
    await q.page.evaluate(() => window.RecompGame.save());
    await waitCount(q.page, 'saved', 1);
    const adv = await savedAtOf(q.page);
    await q.page.evaluate(() => window.RecompGame.stop());
    await waitCount(q.page, 'exit', 1);
    await q.page.goto(url + '?autostart=1&world=1&quick=1');
    await running(q.page);
    await q.page.keyboard.press('F5');
    await waitCount(q.page, 'saved', 1);
    const a = await q.page.evaluate(async () => ({ keys: (await window.__t.keys()).sort(), adv: ((await window.__t.get('player1')) || {}).savedAt, quick: ((await window.__t.get('player1.quick')) || { launch: {} }).launch.adventure, info: await window.RecompGame.saveInfo(1), last: window.RecompGame.lastSave }));
    check(a.keys.includes('player1.quick') && a.quick === false && a.adv === adv && a.info && a.info.savedAt === adv && a.last.adventure === false, 'snelspel: its state goes to a key of its own; the adventure\'s saved place is untouched', JSON.stringify({ keys: a.keys, same: a.adv === adv }));
    await q.page.keyboard.press('F9');
    const re = await waitCount(q.page, 'restart', 1, 20000) && await q.page.waitForFunction(() => window.__ev.filter((e) => e.name === 'running').length >= 2 && /Opgeslagen spel geladen/.test(document.getElementById('status').textContent), null, { timeout: 120000 }).then(() => true, () => false);
    check(re, 'snelspel: F9 loads the Snelspel\'s own saved place');
    await q.page.evaluate(() => window.RecompGame.stop());
    await waitCount(q.page, 'exit', 1);
    await q.page.waitForTimeout(800);
    const b = await q.page.evaluate(async () => ({ keys: (await window.__t.keys()).sort(), adv: ((await window.__t.get('player1')) || {}).savedAt }));
    check(!b.keys.includes('player1.quick') && b.adv === adv, 'snelspel: when it ends its state is gone, the adventure\'s is still there', JSON.stringify(b.keys));
    // a record a Snelspel left where the adventure's is kept (every build before 2026-11-14)
    const c = await q.page.evaluate(async () => { const rec = await window.__t.get('player1'); rec.launch = { ...rec.launch, adventure: false }; await window.__t.put('player1', rec); const n = window.__ev.length; const info = await window.RecompGame.saveInfo(1); return { info, record: (await window.__t.get('player1')) !== undefined, dropped: window.__ev.slice(n).filter((e) => e.name === 'save-dropped').length, note: window.RecompGame.lostSaveNote(1, 1) }; });
    check(c.info === null && !c.record && c.dropped === 0 && c.note === '', 'snelspel: a Snelspel state left in the adventure\'s place by an earlier build goes without a word', JSON.stringify(c));
    check(q.problems.length === 0, 'snelspel: no error on the page', q.problems.join('; '));
    await q.context.close();
  }

  if (wants('recovery')) {
    console.log('recovery: older saved places');
    // A point is a whole stored state; its age is playing time. The check makes states older by
    // lowering the playing time written in their records (there is no quick way to play ten minutes).
    const older = (page, changes) => page.evaluate(async (list) => { for (const [k, by] of list) { const rec = await window.__t.get(k); rec.play -= by; await window.__t.put(k, rec); } }, changes);
    const saveNow = async (page, n) => { await page.evaluate(() => window.RecompGame.save()); await waitCount(page, 'saved', n); await page.waitForTimeout(300); return savedAtOf(page); };
    const points = (page) => page.evaluate(async () => { const o = {}; for (const k of ['player1', 'player1.r1', 'player1.r2', 'player1.r3']) { const r = await window.__t.get(k); o[k] = r ? r.savedAt : null; } return o; });
    const v = await open();
    await v.page.goto(url + '?autostart=1&world=1');
    await running(v.page);
    check(await v.page.evaluate(() => window.RecompGame.settings.get('recovery')) === true, 'recovery: on a desktop the setting starts switched on');
    const S = [];
    S.push(await saveNow(v.page, 1));
    let p = await points(v.page);
    check(p['player1.r1'] === null, 'recovery: the first state has nothing to move down', JSON.stringify(p));
    S.push(await saveNow(v.page, 2));
    p = await points(v.page);
    check(p['player1'] === S[1] && p['player1.r1'] === S[0] && p['player1.r2'] === null, 'recovery: the second state moves the first to the first older place', JSON.stringify(p));
    S.push(await saveNow(v.page, 3));
    p = await points(v.page);
    check(p['player1'] === S[2] && p['player1.r1'] === S[0] && p['player1.r2'] === null, 'recovery: a third state seconds later replaces only the newest (the older place is not yet three minutes old)', JSON.stringify(p));
    await older(v.page, [['player1.r1', 500], ['player1', 200]]);
    S.push(await saveNow(v.page, 4));
    p = await points(v.page);
    check(p['player1'] === S[3] && p['player1.r1'] === S[2] && p['player1.r2'] === S[0] && p['player1.r3'] === null, 'recovery: an older place of over three minutes moves on to the second', JSON.stringify(p));
    await older(v.page, [['player1.r2', 1000], ['player1.r1', 400], ['player1', 100]]);
    S.push(await saveNow(v.page, 5));
    p = await points(v.page);
    check(p['player1'] === S[4] && p['player1.r1'] === S[3] && p['player1.r2'] === S[2] && p['player1.r3'] === S[0], 'recovery: and from there to the third: four different states, the oldest last', JSON.stringify(p));
    const info = await v.page.evaluate(() => window.RecompGame.recoveryInfo(1));
    check(info.length === 3 && info.map((q) => q.id).join() === 'r1,r2,r3' && info[0].minutes < info[1].minutes && info[1].minutes < info[2].minutes && info.every((q) => q.world === 1), 'recovery: the game API lists them newest first with their real age in minutes of playing time', JSON.stringify(info));
    // over the running game, through the API: the second older place
    const ok = await v.page.evaluate(() => window.RecompGame.reload({ recovery: 'r2', note: 'Avontuur van ongeveer 7 minuten geleden geladen.' }));
    await v.page.waitForFunction(() => window.__ev.filter((e) => e.name === 'running').length >= 2 && /geladen/.test(document.getElementById('status').textContent), null, { timeout: 120000 }).catch(() => {});
    const line = await statusOf(v.page);
    const s = await settle(v.page, 2);
    p = await points(v.page);
    check(ok && s.running && s.frames > 10 && !s.crash && !s.fatal && s.notices.length === 0 && line === 'Avontuur van ongeveer 7 minuten geleden geladen.', 'recovery: loading an older place over the running game starts from it, with a line that says so', JSON.stringify({ ok, running: s.running, crash: s.crash, line }));
    check(p['player1'] === S[2] && p['player1.r1'] === S[3] && p['player1.r2'] === S[2] && p['player1.r3'] === S[0], 'recovery: the chosen place is the saved place now; the other older places are still there', JSON.stringify(p));
    // the menu: Startinfo -> Meer opties
    await v.page.evaluate(() => window.RecompGame.stop());
    await waitCount(v.page, 'exit', 1);
    await v.page.goto(url + '?skipintro=1');
    await v.page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 30000 });
    await v.page.click('[data-menu-choice="adventure"]'); await v.page.click('#native-next');
    await v.page.waitForFunction(() => window.__menu.page === 'startinfo');
    await v.page.click('#native-start-extras summary');
    const extras = await v.page.evaluate(() => ['open-recovery', 'start-world-over', 'start-over'].map((id) => { const el = document.getElementById(id); return el.hidden ? null : el.textContent; }));
    check(extras[0] === 'Eerder opgeslagen avontuur laden' && extras[1] === 'Het Bos opnieuw beginnen' && extras[2] === 'Opnieuw beginnen', 'recovery: Meer opties offers an older saved place, the world again, and a new adventure', JSON.stringify(extras));
    await v.page.screenshot({ path: path.join(OUT, 'recovery-meer-opties.png') });
    await v.page.click('#open-recovery');
    await v.page.waitForFunction(() => document.getElementById('recovery-saves').open && document.querySelectorAll('#recovery-options button').length > 0, null, { timeout: 10000 }).catch(() => {});
    const dlg = await v.page.evaluate(() => ({ open: document.getElementById('recovery-saves').open, rows: [...document.querySelectorAll('#recovery-options button')].map((b) => b.querySelector('b').textContent + ' | ' + b.querySelector('small').textContent), status: document.getElementById('recovery-status').textContent, text: document.getElementById('recovery-description').textContent }));
    check(dlg.open && dlg.rows.length === 3 && dlg.rows.every((q) => /^\d+ minu(ut|ten) geleden \| Het Bos · /.test(q)) && dlg.status === 'Het gekozen herstelpunt wordt je huidige avontuur.', 'recovery: the dialog lists the three places with their age, world and date', JSON.stringify(dlg));
    await v.page.screenshot({ path: path.join(OUT, 'recovery-dialog-menu.png') });
    v.problems.length = 0;
    await v.page.click('#recovery-options button:last-child');
    await v.page.waitForFunction(() => /Opgeslagen spel geladen/.test((document.getElementById('status') || {}).textContent || ''), null, { timeout: 120000 }).catch(() => {});
    const s2 = await settle(v.page, 1);
    p = await points(v.page);
    check(s2.running && s2.frames > 10 && !s2.crash && !s2.fatal && p['player1'] === S[0] && v.problems.length === 0, 'recovery: choosing the oldest starts the game from it', JSON.stringify({ running: s2.running, crash: s2.crash, main: p['player1'] === S[0], problems: v.problems }));
    // over that game: the settings (F10) have the saved place and the older ones
    await v.page.keyboard.press('F10');
    await v.page.waitForFunction(() => document.getElementById('settings').open && !document.getElementById('settings-load-save').disabled, null, { timeout: 10000 }).catch(() => {});
    const inGame = await v.page.evaluate(() => ['settings-load-save', 'settings-recovery', 'settings-stop-game'].map((id) => { const el = document.getElementById(id); return el.hidden ? null : el.textContent + (el.disabled ? ' (uit)' : ''); }));
    check(inGame.join('|') === 'Opgeslagen plek laden|Eerder avontuur laden|Spel stoppen', 'recovery: the settings over a game offer the saved place, an older one and Spel stoppen', JSON.stringify(inGame));
    await v.page.waitForTimeout(600);
    await v.page.screenshot({ path: path.join(OUT, 'recovery-settings-in-game.png') });
    await v.page.click('#settings-recovery');
    await v.page.waitForFunction(() => document.getElementById('recovery-saves').open && document.querySelectorAll('#recovery-options button').length > 0, null, { timeout: 10000 }).catch(() => {});
    await v.page.screenshot({ path: path.join(OUT, 'recovery-dialog-in-game.png') });
    const runs = await count(v.page, 'running');
    await v.page.click('#recovery-options button');
    await v.page.waitForFunction((n) => window.__ev.filter((e) => e.name === 'running').length > n && /geleden geladen/.test(document.getElementById('status').textContent), runs, { timeout: 120000 }).catch(() => {});
    const line2 = await statusOf(v.page);
    const s3 = await settle(v.page, runs + 1);
    const closed = await v.page.evaluate(() => !document.querySelector('dialog[open]') && !window.RecompGame.paused);
    check(s3.running && s3.frames > 10 && !s3.crash && !s3.fatal && closed && /^Avontuur van ongeveer \d+ minu(ut|ten) geleden geladen\.$/.test(line2), 'recovery: chosen over the game: the dialogs close, the game starts from that place and says so', JSON.stringify({ running: s3.running, crash: s3.crash, closed, line: line2 }));
    // "Opgeslagen plek laden" is F9 with a button
    await v.page.keyboard.press('F10');
    await v.page.waitForFunction(() => document.getElementById('settings').open && !document.getElementById('settings-load-save').disabled, null, { timeout: 10000 }).catch(() => {});
    const runs2 = await count(v.page, 'running');
    await v.page.click('#settings-load-save');
    const again = await v.page.waitForFunction((n) => window.__ev.filter((e) => e.name === 'running').length > n && /Opgeslagen spel geladen/.test(document.getElementById('status').textContent), runs2, { timeout: 120000 }).then(() => true, () => false);
    check(again && await v.page.evaluate(() => window.RecompGame.running && !document.querySelector('dialog[open]')), 'recovery: "Opgeslagen plek laden" loads the saved place and closes the settings');
    // switched off: the points go
    await v.page.evaluate(() => window.RecompGame.settings.set('recovery', false));
    await v.page.waitForTimeout(1500);
    const keys = await v.page.evaluate(async () => (await window.__t.keys()).sort());
    check(keys.join() === 'player1', 'recovery: switching the setting off deletes the points and keeps the saved place', keys.join());
    check(v.problems.length === 0, 'recovery: no error on the page', v.problems.join('; '));
    await v.context.close();

    // a phone: off to begin with; switched on, all points together stay within 80 MB, other players' oldest first
    console.log('recovery: on a phone');
    const f = await open(null, { userAgent: 'Mozilla/5.0 (Linux; Android 13; Pixel 7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Mobile Safari/537.36', hasTouch: true, isMobile: true, viewport: { width: 844, height: 390 } });
    await f.page.goto(url + '?autostart=1&world=1');
    await running(f.page);
    check(await f.page.evaluate(() => window.RecompGame.settings.get('recovery')) === false, 'recovery: on a phone the setting starts switched off');
    const F = [];
    F.push(await saveNow(f.page, 1));
    F.push(await saveNow(f.page, 2));
    let keysF = await f.page.evaluate(async () => (await window.__t.keys()).sort());
    check(keysF.join() === 'player1', 'recovery: and then no older place is kept', keysF.join());
    const size = await f.page.evaluate(async () => { const g = window.RecompGame; g.settings.set('recovery', true); const rec = await window.__t.get('player1'); for (const [k, at] of [['player2.r1', 1000], ['player2.r2', 2000], ['player3.r1', 3000]]) await window.__t.put(k, { ...rec, launch: { ...rec.launch, player: Number(k[6]) }, savedAt: at }); return rec.data.size; });
    F.push(await saveNow(f.page, 3));
    await older(f.page, [['player1.r1', 500], ['player1', 200]]);
    F.push(await saveNow(f.page, 4));
    await older(f.page, [['player1.r2', 1000], ['player1.r1', 400], ['player1', 100]]);
    F.push(await saveNow(f.page, 5));
    await f.page.waitForTimeout(500);
    const end = await f.page.evaluate(async () => { const keys = (await window.__t.keys()).sort(); let total = 0; for (const k of keys) if (/\.r\d$/.test(k)) total += (await window.__t.get(k)).data.size; return { keys, total }; });
    const own = end.keys.filter((k) => /^player1\.r/.test(k)).length, others = end.keys.filter((k) => /^player[23]\.r/.test(k));
    check(own === 3 && end.total <= 80 * 1048576 && 3 * size <= 80 * 1048576 && (4 * size > 80 * 1048576 ? others.length === 0 : true), `recovery: all points together stay within 80 MB (one is ${(size / 1048576).toFixed(1)} MB): this player's three are kept, other players' go first`, JSON.stringify({ keys: end.keys, mb: +(end.total / 1048576).toFixed(1) }));
    check(f.problems.length === 0, 'recovery: no error on the phone page', f.problems.join('; '));
    await f.context.close();
  }
  await browser.close();
}
notRunSummary();

console.log(failed ? `\n${failed} check(s) FAILED, ${passed} passed` : `\nall checks passed (${passed})`);
process.exit(failed ? 1 : 0);
