#!/usr/bin/env node
// Checks the take-over of what the JavaScript port left in a browser (source/web/legacy*.js).
//   node tools/legacy-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--only gen5] [--no-real] [--no-game]
// Needs the server (node tools/serve.mjs), which also serves the JavaScript port itself under
// /classic/ on the same origin, as the public site would with the old version kept next to the new.
//
// 1. Every constructed storage dump of tests/fixtures/legacy/ (one per generation of the old
//    storage) is put into a fresh browser profile; this port is opened; then:
//      - the players, their world, lives, score, mirror parts, abilities and difficulty are what
//        legacy.js says for that dump, and the settings were taken over;
//      - everything the old version had stored is byte for byte what it was: localStorage and
//        the IndexedDB recovery databases (names, versions, records);
//      - a second visit takes nothing over again.
// 2. Special cases: an unreadable save with a recovery history, storage that is full, eight
//    players, a visitor who never played.
// 3. The real thing (unless --no-real): the JavaScript port itself is driven to a saved game in
//    its second world, this port is opened in the same profile, and afterwards the JavaScript
//    port still loads its own save.
// 4. One taken-over player is started in the game (unless --no-game), in the Node runner: the
//    game has the lives, health, score, mirror parts and abilities of the player file.
// 5. Export files (unless --only names something else; Node only, source/menu/save-export.js): the
//    JavaScript port's own export code makes a file from every saved game of the dumps, and that
//    file becomes the player file the take-over makes of the same save; this port's own file goes
//    out and comes back the same; files with values the game never writes are refused.
//      node tools/legacy-check.mjs --only export
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { readLegacy, convertPlayer, convertSettings, newestCheckpoint } from '../source/web/legacy.js';
import { dumpStorage } from './legacy-capture.mjs';
import { startBindings, bindingEntries, bindingsFromLegacy, readBindings } from '../source/web/keybinds.js';
import { launch, notRunSummary, DEV_URL } from './browsers.mjs';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (name, def) => { const k = process.argv.indexOf('--' + name); return k < 0 ? def : process.argv[k + 1]; };
const has = (name) => process.argv.includes('--' + name);
const base = opt('url', DEV_URL);
const only = opt('only', null);
const FIX = path.join(ROOT, 'tests/fixtures/legacy');
let failed = 0, passed = 0;
const check = (ok, what, detail = '') => { if (ok) passed++; else failed++; console.log(`  ${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + String(detail).slice(0, 300) + ']' : ''}`); };
const oldOnly = (dump) => ({
  localStorage: Object.fromEntries(Object.entries(dump.localStorage).filter(([k]) => k.startsWith('redcat.')).sort()),
  indexedDB: Object.fromEntries(Object.entries(dump.indexedDB).filter(([n]) => n.startsWith('redcat-recovery-saves')).sort()),
});
const same = (a, b) => JSON.stringify(a) === JSON.stringify(b);

const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', '--use-angle=swiftshader', '--enable-unsafe-swiftshader'] });
const fresh = async () => {
  const context = await browser.newContext({ viewport: { width: 1280, height: 900 } });
  const page = await context.newPage();
  const errors = [];
  page.on('pageerror', (e) => errors.push(e.message));
  return { context, page, errors };
};
/** Puts a dump into the profile, through a page of the same origin that runs nothing itself. */
const seed = async (page, dump) => {
  await page.goto(base + 'nothing-here');            // a 404 page of the origin
  await page.evaluate(async (d) => {
    for (const [k, v] of Object.entries(d.localStorage)) localStorage.setItem(k, v);
    for (const [name, stores] of Object.entries(d.indexedDB || {})) {
      const db = await new Promise((res, rej) => { const r = indexedDB.open(name, 1); r.onupgradeneeded = () => r.result.createObjectStore('history'); r.onsuccess = () => res(r.result); r.onerror = () => rej(r.error); });
      await new Promise((res, rej) => { const t = db.transaction('history', 'readwrite'); for (const row of stores.history || []) t.objectStore('history').put(row.value, row.key); t.oncomplete = res; t.onerror = () => rej(t.error); });
      db.close();
    }
  }, dump);
};
// The JavaScript port's stored key bindings as the keys of a player's file (keybinds.js): a set nobody changed gives
// this port's starting keys; a changed one keeps its keys, without what the game cannot bind or what is taken.
{
  const template = fs.readFileSync(path.join(input('RC_ORIGINAL_DECOMPILED/originals'), 'Settings/PlayerDef.ini'), 'latin1');
  const other = readBindings(template).other;
  const untouched = { forward: ['KeyW', 'ArrowUp'], backward: ['KeyS', 'ArrowDown'], turnLeft: ['ArrowLeft'], turnRight: ['ArrowRight'], left: ['KeyA'], right: ['KeyD'], attack: ['Control'], jump: ['Space'], walk: ['Shift'], use: ['KeyE'], camera: ['KeyV'], cameraNear: ['Digit1'], cameraFar: ['Digit2'], cameraHigh: ['Digit3'] };
  const a = startBindings({ legacy: untouched }, template);
  check(JSON.stringify(a.binds) === JSON.stringify(startBindings(null, template).binds) && a.binds.forward.join() === 'Up,W' && a.binds.left.join() === 'Alt+Left,A' && a.camera.join() === 'KeyV', 'old key bindings nobody changed: this port\'s starting keys', JSON.stringify(a.binds));
  const custom = { ...untouched, forward: ['KeyI'], jump: ['Enter', 'Numpad0'], attack: ['KeyU'], walk: ['Alt'], camera: ['KeyC'], cameraNear: [], use: ['KeyQ'] };
  const b = bindingsFromLegacy(custom, other).binds;
  check(b.forward.join() === 'I' && b.jump.join() === 'Enter' && b.attack.join() === 'Control' && b.walk.join() === 'Alt' && b.camera.join() === 'C' && b.backward.join() === 'Down,S' && b.cameraNear.join() === '1',
    'changed old key bindings: the changed actions keep their keys (I, Enter, Alt, C), a key the game cannot bind (U, Numpad 0) is left out and the action gets its default, Gebruiken is dropped', JSON.stringify(b));
  check(bindingsFromLegacy('x') === null && bindingsFromLegacy({ forward: 'KeyW' }) === null, 'a stored value that is not a set of bindings is refused');
}
const openPort = async (page) => {
  await page.goto(base + '?skipintro');
  await page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu', null, { timeout: 60000 });
  await page.waitForTimeout(400);
  return page.evaluate(async () => {
    const g = window.RecompGame;
    const { store } = await import(new URL('persist.js', document.querySelector('script[src$="source/web/main.js"]').src).href);
    await store.settled();
    const d = document.getElementById('menu-legacy');
    const out = {
      players: g.players.list(), current: g.players.current, settings: g.settings.all(), memo: JSON.parse(JSON.stringify(window.__menu.memo)),
      template: g.players.template(), binds: Object.fromEntries(g.players.list().map((p) => [p.number, (g.players.text(p.number) || '').split(/\r?\n/).filter((l) => /^(MoveForward|MoveBack|TurnLeft|TurnRight|MoveLeft|MoveRight|Fire|Jump|Walk|Weapon[123])=/.test(l)).sort().join(' ')])),
      files: Object.fromEntries(g.players.list().map((p) => [p.number, ['Health', 'MaxHealth', 'Life', 'MirrorPart', 'Skill', 'TotalScore', 'Score', 'MagicPotion'].map((k) => k + '=' + new TextDecoder('latin1').decode(g.files ? g.files.read(`C:\\REDCAT\\SETTINGS\\PLAYER${p.number}.INI`) : new Uint8Array()).match(new RegExp('\\[Player\\][^\\[]*?\\n' + k + '=([^\\r\\n]*)', 'i'))?.[1]).join(' ')])),
      dialog: d.open ? d.innerText : null, classicShown: !document.getElementById('menu-legacy-classic').hidden,
      state: window.__menu.getState(),
    };
    if (d.open) document.getElementById('menu-legacy-close').click();
    return out;
  });
};

// ---------------------------------------------------------------------------------------------
const files = fs.readdirSync(FIX).filter((n) => n.endsWith('.json') && (!only || n.includes(only))).sort();
const allDumps = fs.readdirSync(FIX).filter((n) => n.endsWith('.json')).sort();
for (const f of files) {
  console.log(`\n${f}`);
  const dump = JSON.parse(fs.readFileSync(path.join(FIX, f), 'utf8'));
  const { context, page, errors } = await fresh();
  await seed(page, dump);
  const before = oldOnly(await dumpStorage(page));
  const got = await openPort(page);
  const legacy = readLegacy((k) => (k in dump.localStorage ? dump.localStorage[k] : null));
  // expected, from the same rules (legacy.js), with the recovery history where the save is missing
  const want = legacy.players.map((p) => {
    let save = p.save, fromRecovery = false;
    if (!save) { const rec = ((dump.indexedDB || {})[p.id === 'legacy' ? 'redcat-recovery-saves' : 'redcat-recovery-saves-' + p.id] || {}).history; const cp = newestCheckpoint(rec && rec[0] ? rec[0].value : null); if (cp) { save = cp; fromRecovery = true; } }
    return { p, c: convertPlayer(p, legacy.settings, { save, fromRecovery }) };
  });
  check(got.players.length === want.length, `players taken over: ${got.players.map((p) => p.name).join(', ')}`, `${got.players.length} of ${want.length}`);
  for (const { p, c } of want) {
    const g = got.players.find((x) => x.name === c.name);
    if (!g) { check(false, `player ${c.name} exists`); continue; }
    check(g.world === c.world && g.difficulty === c.difficulty && g.adventureDone === c.adventureDone, `${c.name}: world ${g.world}, difficulty ${g.difficulty}${c.adventureDone ? ', adventure done' : ''}`, `want world ${c.world} difficulty ${c.difficulty}`);
    if (c.state) {
      const line = got.files[g.number];
      const wantLine = `Health=${c.state.health} MaxHealth=${c.state.maxHealth} Life=${c.state.lives} MirrorPart=${c.state.mirror} Skill=${c.state.skill} TotalScore=${c.state.score} Score=0 MagicPotion=0`;
      check(line === wantLine, `${c.name}: player file ${line}`, 'want ' + wantLine);
    }
    check((got.memo.players[g.number] || {}).unlocked === c.unlocked, `${c.name}: ${c.unlocked} world(s) open in Snelspel`, JSON.stringify(got.memo.players[g.number]));
    if (p.active) check(got.current === g.number, `${c.name} is the chosen player`, `current ${got.current}`);
  }
  if (legacy.settings) {
    const ws = convertSettings(legacy.settings, got.settings).values;
    // the keys: the camera key and the old bindings as they were, marked as given to the players (menu.js adoptKeys)
    if (ws.keys) ws.keys = { camera: ws.keys.camera, legacy: ws.keys.legacy, v: 3 };      // (the order menu.js adoptKeys leaves them in: the comparison is of the JSON text)
    const diff = Object.keys(ws).filter((k) => JSON.stringify(got.settings[k]) !== JSON.stringify(ws[k]));
    const wantBinds = bindingEntries(startBindings(ws.keys, got.template).binds).map(([, k, v]) => `${k}=${v}`).sort().join(' ');
    const off = got.players.filter((p) => got.binds[p.number] !== wantBinds);
    check(off.length === 0 && got.players.length > 0, `every taken-over player has the keys of the old settings in his own file: ${wantBinds}`, off.map((p) => got.binds[p.number]).join(' / '));
    check(diff.length === 0, `settings taken over: ${Object.entries(ws).map(([k, v]) => k + '=' + (typeof v === 'object' ? '…' : v)).join(' ')}`, 'different: ' + diff.join(','));
  }
  check(!!got.dialog && want.every(({ c }) => got.dialog.includes(c.name)), 'the notice names every player', got.dialog && got.dialog.replace(/\s+/g, ' ').slice(0, 200));
  const after = oldOnly(await dumpStorage(page));
  check(same(before.localStorage, after.localStorage), `old localStorage untouched (${Object.keys(before.localStorage).length} keys, ${Object.values(before.localStorage).reduce((a, v) => a + v.length, 0)} characters)`);
  check(same(before.indexedDB, after.indexedDB), `old IndexedDB untouched (${Object.keys(before.indexedDB).join(', ') || 'none'})`, Object.keys(after.indexedDB).join(','));
  // second visit
  const again = await openPort(page);
  check(again.players.length === got.players.length && again.dialog === null, 'a second visit takes nothing over again and shows no notice', `${again.players.length} players, dialog ${again.dialog ? 'shown' : 'not shown'}`);
  check(same(oldOnly(await dumpStorage(page)), after), 'old data still untouched after the second visit');
  check(errors.length === 0, 'no page errors', errors.join(' | '));
  await context.close();
}

// ---------------------------------------------------------------------------------------------
if (!only) {
  console.log('\nspecial cases');
  const gen5 = JSON.parse(fs.readFileSync(path.join(FIX, 'gen5-v1.0.8-two-players.json'), 'utf8'));
  {   // the latest save is unreadable: the newest checkpoint of the recovery history is used
    const d = JSON.parse(JSON.stringify(gen5));
    d.localStorage['redcat.save.v1'] = '{"version":1,"level":"lvl01a","posi';        // cut off, as after a full disk
    const { context, page } = await fresh();
    await seed(page, d);
    const before = oldOnly(await dumpStorage(page));
    const got = await openPort(page);
    const p1 = got.players.find((p) => p.name === 'Speler 1');
    const cp = newestCheckpoint(d.indexedDB['redcat-recovery-saves'].history[0].value);
    check(!!p1 && p1.world === ['lvl00a', 'lvl01a', 'lvl02a', 'lvl03a', 'lvl04a'].indexOf(cp.level) + 1, `unreadable save: taken from the recovery history (${cp.level})`, JSON.stringify(p1));
    check(same(before, oldOnly(await dumpStorage(page))), 'the unreadable save is left as it was');
    await context.close();
  }
  {   // localStorage full: this port's own values must still be kept (IndexedDB), and the old data stays
    const d = JSON.parse(JSON.stringify(gen5));
    const { context, page } = await fresh();
    await seed(page, d);
    const filled = await page.evaluate(() => { let n = 0; const chunk = 'x'.repeat(100000); try { for (;;) { localStorage.setItem('redcat.filler.' + n, chunk); n++; } } catch (e) { /* full */ } let small = 0; try { for (;;) { localStorage.setItem('redcat.fill2.' + small, 'y'.repeat(200)); small++; } } catch (e) { /* really full */ } return n; });
    const before = oldOnly(await dumpStorage(page));
    const got = await openPort(page);
    check(got.players.length === 2, `storage full (${filled} filler blocks): both players still taken over`, got.players.map((p) => p.name).join(','));
    const local = await page.evaluate(() => Object.keys(localStorage).filter((k) => k.startsWith('rcspook-recomp.') && !k.endsWith('#rev')));
    const again = await openPort(page);
    check(again.players.length === 2 && again.dialog === null, `after a reload the players are still there (kept in IndexedDB; in localStorage only: ${local.join(', ') || 'nothing'})`, again.players.map((p) => p.name).join(','));
    check(same(before, oldOnly(await dumpStorage(page))), 'old data untouched with full storage');
    await context.close();
  }
  {   // field of view, first-person camera, look speed, and free flight as a player's kept choice
    const d = JSON.parse(JSON.stringify(gen5));
    const st = JSON.parse(d.localStorage['redcat.settings.v1']); Object.assign(st, { fov: 70, camera: 'first', sensitivity: 1.5 }); d.localStorage['redcat.settings.v1'] = JSON.stringify(st);
    const key = Object.keys(d.localStorage).find((k) => k.startsWith('redcat.player.') && k.endsWith('.redcat.save.v1'));
    const sv = JSON.parse(d.localStorage[key]); sv.noClip = true; d.localStorage[key] = JSON.stringify(sv);
    const { context, page } = await fresh();
    await seed(page, d);
    const got = await openPort(page);
    check(got.settings.fov === 70 && got.settings.camera === 'first' && got.settings.sensitivity === 1.5, 'field of view 70, first person and look speed 1.5 are taken over', JSON.stringify({ fov: got.settings.fov, camera: got.settings.camera, sensitivity: got.settings.sensitivity }));
    const mila = got.players.find((p) => p.name === 'Mila'), other = got.players.find((p) => p.name === 'Speler 1');
    check(!!mila && (got.memo.players[mila.number] || {}).flight === true && !(got.memo.players[other.number] || {}).flight, 'free flight is kept for the player whose saved game had it on, not for the other', JSON.stringify(got.memo.players));
    await context.close();
  }
  {   // the port's usual 54 degrees is the original's field of view: no setting of its own here
    const { context, page } = await fresh();
    const d = JSON.parse(JSON.stringify(gen5));
    const st = JSON.parse(d.localStorage['redcat.settings.v1']); st.fov = 54; d.localStorage['redcat.settings.v1'] = JSON.stringify(st);
    await seed(page, d);
    const got = await openPort(page);
    check(got.settings.fov === 0, 'a stored 54 degrees stays "the original"', String(got.settings.fov));
    await context.close();
  }
  {   // the player list here is nearly full: what does not fit waits for room, nothing is lost
    const { context, page } = await fresh();
    await page.goto(base + '?skipintro');
    await page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu', null, { timeout: 60000 });
    await page.evaluate(async () => { const g = window.RecompGame; for (let k = 1; k <= 7; k++) g.players.create('Speler' + k); g.players.current = 1; const { store } = await import(new URL('persist.js', document.querySelector('script[src$="source/web/main.js"]').src).href); await store.settled(); });
    await seed(page, gen5);
    const got = await openPort(page);
    check(got.players.length === 8 && /spelerlijst is vol/.test(got.dialog || ''), 'seven players here, two there: one taken over, the other is told to wait', (got.dialog || '').replace(/\s+/g, ' ').slice(0, 220));
    await page.evaluate(async () => { const g = window.RecompGame; g.players.remove(2); const { store } = await import(new URL('persist.js', document.querySelector('script[src$="source/web/main.js"]').src).href); await store.settled(); });
    const again = await openPort(page);
    check(again.players.length === 8 && ['Speler 1', 'Mila'].every((n) => again.players.some((p) => p.name === n)), 'after room was made the other one is taken over at the next visit', again.players.map((p) => p.name).join(','));
    await context.close();
  }
  {   // a visitor who opened the old version once and never played
    const { context, page } = await fresh();
    await seed(page, { localStorage: { 'redcat.players.v1': '{"version":1,"activeId":"legacy","players":[{"id":"legacy","name":"Speler 1"}]}', 'redcat.progress.v1': '{"version":1,"highestUnlocked":0}', 'redcat.player-options.v1': '{"difficulty":"Normal","noClip":false}' }, indexedDB: { 'redcat-recovery-saves': { history: [] } } });
    const got = await openPort(page);
    check(got.players.length === 0 && got.dialog === null, 'a visitor who never played gets the ordinary first visit', `${got.players.length} players`);
    await context.close();
  }
  {   // nothing of the old version at all
    const { context, page } = await fresh();
    await page.goto(base + 'nothing-here');
    const got = await openPort(page);
    const dbs = (await dumpStorage(page)).indexedDB;
    check(got.players.length === 0 && got.dialog === null && !Object.keys(dbs).some((n) => n.startsWith('redcat')), 'a new visitor: nothing taken over, no old database created', Object.keys(dbs).join(','));
    await context.close();
  }
}

// ---------------------------------------------------------------------------------------------
if (!has("no-real") && (!only || only === "real")) {
  console.log('\nthe JavaScript port itself (served under /classic/)');
  const { context, page, errors } = await fresh();
  await page.goto(base + 'classic/?skipIntro');
  await page.waitForFunction(() => window.__redcat, null, { timeout: 60000 });
  // its own first world, finished through its own game code, on to the second world; then a save
  await page.evaluate(() => window.__redcat.startLevel(0));
  await page.waitForFunction(() => window.__redcat.mode === 'playing', null, { timeout: 120000 });
  await page.waitForTimeout(1500);
  await page.evaluate(() => { const r = window.__redcat; r.gameplay.state.score += 340; r.gameplay.state.lives = 4; r.gameplay.complete(); r.pause(); });
  await page.waitForTimeout(1200);
  await page.evaluate(() => window.__redcat.resume());
  await page.waitForFunction(() => window.__redcat.mode === 'debriefing', null, { timeout: 60000 });       // its results screen
  await page.waitForTimeout(800);
  await page.locator('#debriefing button').first().click();
  await page.waitForFunction(() => window.__redcat.world && window.__redcat.world.id === 'lvl01a' && window.__redcat.mode === 'playing', null, { timeout: 120000 });
  await page.waitForTimeout(2500);
  const made = await page.evaluate(() => { const r = window.__redcat; r.gameplay.state.score += 55; const ok = r.saveGame(true); return { ok, state: { ...r.gameplay.state }, level: r.world.id, position: [...r.world.player.position] }; });
  await page.waitForTimeout(1500);
  check(made.ok !== false && made.level === 'lvl01a', `the old version saved a game in its second world`, JSON.stringify(made.state));
  // leave the old version first: while its page is open it goes on saving by itself
  await page.goto(base + 'nothing-here');
  await page.waitForTimeout(500);
  const before = oldOnly(await dumpStorage(page));
  fs.mkdirSync(path.join(ROOT, 'tools/out/legacy'), { recursive: true });
  fs.writeFileSync(path.join(ROOT, 'tools/out/legacy/captured-current.json'), JSON.stringify(await dumpStorage(page)));
  const got = await openPort(page);
  const p = got.players[0];
  check(got.players.length === 1 && p.world === 2, `this port: ${p ? `${p.name}, world ${p.world}, ${p.lives} lives, ${p.totalScore} points` : 'no player'}`, got.files[1]);
  check(!!p && p.totalScore === Math.round(made.state.score) && p.lives === 4, 'score and lives are those of the saved game', `saved ${Math.round(made.state.score)} points, ${made.state.lives} lives`);
  check(got.classicShown && /precies verder/.test(got.dialog || ''), 'the notice offers the old version for the exact place', (got.dialog || '').replace(/\s+/g, ' ').slice(-160));
  check(/begint Het Kasteel opnieuw/.test(got.state.resumeNote || ''), 'Startinfo says the world starts again', got.state.resumeNote);
  check(same(before, oldOnly(await dumpStorage(page))), 'the old version\'s data is untouched');
  // back in the old version: it still has its player and loads its own save at the saved place
  await page.goto(base + 'classic/?skipIntro');
  await page.waitForFunction(() => window.__redcat, null, { timeout: 60000 });
  const loaded = await page.evaluate(async () => { const r = window.__redcat; const ok = await r.loadSave(); return { ok, level: r.world && r.world.id, position: r.world ? [...r.world.player.position] : null, score: r.gameplay && r.gameplay.state.score }; });
  check(loaded.ok === true && loaded.level === 'lvl01a' && Math.hypot(...loaded.position.map((v, i) => v - made.position[i])) < 1 && loaded.score === made.state.score, 'the old version still loads its own save at the saved place', JSON.stringify(loaded));
  check(errors.length === 0, 'no page errors', errors.join(' | '));
  await context.close();
}
await browser.close();
notRunSummary();

// ---------------------------------------------------------------------------------------------
if (!has("no-game") && (!only || only === "game")) {
  console.log('\nthe game with a taken-over player file (Node runner)');
  const dump = JSON.parse(fs.readFileSync(path.join(FIX, 'gen5-v1.0.8-two-players.json'), 'utf8'));
  const legacy = readLegacy((k) => (k in dump.localStorage ? dump.localStorage[k] : null));
  const c = convertPlayer(legacy.players[0], legacy.settings);
  const ini = c.entries.map(([s, k, v]) => `Settings\\Player1.ini|${s}|${k}|${v}`).join(';');
  const r = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '14', '--fresh', '--out', 'tools/out/legacy/run', '--world', String(c.world), '--difficulty', String(c.difficulty), '--ini', ini, '--props'], { cwd: ROOT, encoding: 'utf8' });
  const m = /props: (\{.*\})/.exec(r.stdout);
  const props = m ? JSON.parse(m[1]) : null;
  check(!!props && props.health === c.state.health && props.maxHealth === c.state.maxHealth && props.lives === c.state.lives && props.totalScore === c.state.score && props.mirror === c.state.mirror && props.skill === c.state.skill,
    `world ${c.world} started with ${props ? JSON.stringify(props) : 'nothing'}`, 'want ' + JSON.stringify(c.state));
}

// ---------------------------------------------------------------------------------------------
if (!only || only === 'export') {
  console.log('\nexport files (Spelerlijst -> Exporteren / Importeren)');
  const { createExport, parseImport, applyImport, checkedEntries, EXPORT_FORMAT } = await import('../source/menu/save-export.js');
  const { readIni, editIni, latin1Decode } = await import('../source/host/ini.js');
  const ORIGINALS = process.env.RC_ORIGINALS || input('RC_ORIGINAL_DECOMPILED/originals');
  const CLASSIC = process.env.RC_CLASSIC || path.resolve(ROOT, '../RCSPOOK_NEW');
  const template = latin1Decode(fs.readFileSync(path.join(ORIGINALS, 'Settings/PlayerDef.ini')));
  const mine = editIni(editIni(template, 'General', 'PlayerName', 'Doel'), 'KeyBinds', 'Jump', 'Enter');          // the destination player's own file
  const player = (text) => ['Health', 'MaxHealth', 'Life', 'MirrorPart', 'Skill', 'TotalScore', 'Score', 'MagicPotion'].map((k) => k + '=' + readIni(text, 'Player', k)).join(' ');
  // the JavaScript port's own code writes its export file (read only, nothing of that project is changed)
  const old = await import(path.join(CLASSIC, 'source/save-export.js'));
  let made = 0;
  for (const f of allDumps) {
    const dump = JSON.parse(fs.readFileSync(path.join(FIX, f), 'utf8'));
    const legacy = readLegacy((k) => (k in dump.localStorage ? dump.localStorage[k] : null));
    for (const p of legacy.players) {
      if (!p.save) continue;
      let file;
      try { file = old.createSaveExport({ playerName: p.name, save: p.save, progress: p.progress, options: p.options || {} }); } catch (e) { console.log(`  (${f}, ${p.name}: the old version itself does not export this save: ${e.message})`); continue; }
      made++;
      const c = convertPlayer({ ...p, id: 'import' }, null, { save: p.save });
      let got = null, why = '';
      try { got = parseImport(file.text, template); } catch (e) { why = e.message; }
      if (!got) { check(false, `${f}, ${p.name}: the old version's export file is read`, why); continue; }
      const text = applyImport(mine, template, got.entries);
      const want = `Health=${c.state.health} MaxHealth=${c.state.maxHealth} Life=${c.state.lives} MirrorPart=${c.state.mirror} Skill=${c.state.skill} TotalScore=${c.state.score} Score=0 MagicPotion=0`;
      check(got.kind === 'classic' && got.world === c.world && got.adventureDone === c.adventureDone && got.midWorld === c.legacy.midWorld && got.menu.unlocked === c.unlocked && player(text) === want && readIni(text, 'Level1', 'CurrentSubLevel') === `SubLevel1_${c.world}` && readIni(text, 'General', 'DifficultyLevel') === String(c.difficulty),
        `${f}, ${p.name}: the old version's export file gives what the take-over gives: world ${got.world}${got.midWorld ? ' (starts again)' : ''}, ${player(text)}`, 'want ' + want);
      check(readIni(text, 'General', 'PlayerName') === 'Doel' && readIni(text, 'KeyBinds', 'Jump') === 'Enter' && readIni(text, 'KeyBinds', 'WeaponPrev') === '[' && readIni(text, 'KeyBinds', 'Menu') === 'Escape', `${f}, ${p.name}: the destination keeps its name and keys`);
    }
  }
  check(made >= 5, `${made} export files made by the old version's own code`);
  // this port's own file: out and back
  const played = editIni(editIni(editIni(editIni(editIni(mine, 'Level1', 'CurrentSubLevel', 'SubLevel1_3'), 'Level1', 'Completed', '1'), 'Player', 'Life', '7'), 'Player', 'TotalScore', '12345'), 'SubLevel1_2', 'Skill', '3');
  const out = createExport({ name: 'Rïck', ini: played, menu: { unlocked: 4, flight: true, quickWorld: 2, quickDifficulty: 0 }, exportedAt: new Date('2026-11-14T03:00:00Z') });
  const back = parseImport(out.text, template);
  const again = applyImport(template, template, back.entries);
  check(out.filename === 'RedCat-Spookkasteel-Rick-2026-11-14T030000Z.json' && out.bundle.format === EXPORT_FORMAT && back.kind === 'recomp' && back.name === 'Rïck' && back.world === 3 && !back.adventureDone && back.menu.unlocked === 4 && back.menu.flight === true && back.menu.quickWorld === 2 && back.menu.quickDifficulty === 0, 'this port\'s own file: name, world and the menu\'s record come back', JSON.stringify({ file: out.filename, world: back.world, menu: back.menu }));
  check(readIni(again, 'Player', 'Life') === '7' && readIni(again, 'Player', 'TotalScore') === '12345' && readIni(again, 'SubLevel1_2', 'Skill') === '3' && readIni(again, 'Level1', 'Completed') === '1' && readIni(again, 'KeyBinds', 'Jump') === 'Enter' && readIni(again, 'General', 'PlayerName') === 'Player', 'and the adventure and the keys are the exported ones; the name is the destination\'s', player(again));
  // what must be refused, and what must be left out
  const refused = (what, text) => { let why = 'ACCEPTED'; try { parseImport(text, template); } catch (e) { why = e.message; } check(why !== 'ACCEPTED', `refused: ${what}`, why); };
  const withIni = (ini) => JSON.stringify({ ...out.bundle, playerIni: ini });
  refused('lives below zero', withIni(editIni(played, 'Player', 'Life', '-1')));
  refused('more health than the game allows', withIni(editIni(played, 'Player', 'Health', '99')));
  refused('more health than the player\'s own maximum', withIni(editIni(editIni(played, 'Player', 'Health', '15'), 'Player', 'MaxHealth', '10')));
  refused('six mirror parts', withIni(editIni(played, 'Player', 'MirrorPart', '6')));
  refused('an ability that does not exist', withIni(editIni(played, 'Player', 'Skill', '64')));
  refused('a world that does not exist', withIni(editIni(played, 'Level1', 'CurrentSubLevel', 'SubLevel1_9')));
  refused('a score that is no number', withIni(editIni(played, 'Player', 'TotalScore', '1e9')));
  refused('a key binding with a control character', withIni(editIni(played, 'KeyBinds', 'Jump', 'Space\u0001')));
  refused('no progress in it at all', withIni('[General]\r\nDifficultyLevel=1\r\n'));
  refused('a player file of a megabyte', withIni(played + ';'.repeat(1 << 20)));
  refused('another format', JSON.stringify({ ...out.bundle, format: 'iets-anders' }));
  refused('a later version of the format', JSON.stringify({ ...out.bundle, formatVersion: 2 }));
  refused('no JSON', 'dit is geen export');
  refused('an old-version file whose save is not one', JSON.stringify({ format: 'redcat-spookkasteel-save', formatVersion: 1, exportedAt: '2026-11-14T03:00:00Z', player: { name: 'x' }, save: { version: 1, game: { version: 1 } }, progress: {}, options: {} }));
  // found by the review of 2026-11-14 (hand-made files)
  const mk = (ini) => JSON.stringify({ ...out.bundle, playerIni: ini });
  refused('a key twice in a section (the test would see the first, the file get the last)', mk('[Player]\r\nHealth=5\r\nMaxHealth=5\r\nHealth=20\r\n'));
  refused('mirror parts twice', mk('[Player]\r\nMirrorPart=0\r\nMaxMirrorPart=0\r\nMirrorPart=5\r\n'));
  refused('more health than the maximum the new player has (the file brings none)', mk('[Player]\r\nHealth=20\r\n'));
  refused('the key of Schieten emptied', mk(editIni(played, 'KeyBinds', 'Fire', '')));
  refused('the key of the game\'s menu emptied', mk(editIni(played, 'KeyBinds', 'Menu', '')));
  refused('a key the game has no name for', mk(editIni(played, 'KeyBinds', 'Jump', 'A'.repeat(40))));
  refused('a key line with an empty part', mk(editIni(played, 'KeyBinds', 'Jump', 'Space,,J')));
  { const oldFile = (difficulty) => JSON.stringify({ format: 'redcat-spookkasteel-save', formatVersion: 1, exportedAt: '2026-10-01T00:00:00.000Z', player: { name: 'Old' }, progress: { version: 1, highestUnlocked: 2 }, options: {},
      save: { version: 1, level: 'lvl02a', position: [0, 0, 0], yaw: 0, pitch: 0, game: { version: 1, level: 'lvl02a', difficulty, state: { health: 7, maxHealth: 12, lives: 2, score: 1234, mirror: 2, skill: 3, potions: 4 } } } });
    let got = null, why = '';
    try { got = ['constructor', 'toString', 'Hard'].map((d) => { const e = parseImport(oldFile(d), template).entries.find(([sec, key]) => sec === 'General' && key === 'DifficultyLevel'); return e ? e[2] : '-'; }); } catch (e) { why = e.message; }
    check(!!got && got.join() === '1,1,2', 'an old-version file with a difficulty that is a property of every object ("constructor", "toString") gets the normal one', why || JSON.stringify(got)); }
  check(parseImport(mk(played), template).entries.some(([sec, key, v]) => sec === 'KeyBinds' && key === 'WeaponPrev' && v === '['), 'the player\'s own keys still pass, the bracket key too');
  const extra = checkedEntries(editIni(editIni(editIni(played, 'Display', 'Mode', '99999'), 'General', 'ControlType', '77'), 'Hack', 'Run', 'calc.exe'), template);
  check(!extra.some(([sec, key]) => /^(Display|Hack)$/i.test(sec) || /^ControlType$/i.test(key)) && extra.some(([sec, key, v]) => sec === 'Player' && key === 'Life' && v === '7'), 'sections and keys that are not the adventure, the keys or the two volumes are left out', `${extra.length} entries taken`);
}

console.log(`\n${failed ? failed + ' check(s) FAILED' : 'all checks passed'} (${passed} passed)`);
process.exitCode = failed ? 1 : 0;
