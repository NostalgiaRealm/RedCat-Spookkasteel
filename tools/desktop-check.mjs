#!/usr/bin/env node
// Runs an unpacked Linux x64 desktop package (tools/package-desktop.mjs) without a visible window
// and without sound, and looks at it through Chromium's debugging port. Not a test suite.
//
//   node tools/desktop-check.mjs [--exe dist/desktop/unpacked/linux-unpacked/redcat-spookkasteel]
//        [--profile tools/out/desktop/<name>] [--out tools/out/desktop/check] [--world 1] [--seconds 20]
//        [--no-world] [--legacy] [--no-quit] [--seed tests/fixtures/legacy/<file>.json]
//
// Every run uses a profile folder below tools/out/desktop/ (a new one unless --profile names
// one) and its own XDG folders there: the profile of an installed game is never opened.
//   default    the page is isolated, the shell's answers carry the headers, world --world starts
//              and draws, a screenshot; then Stoppen > Ja in the menu must end the program
//   --legacy   also reports what the page took over from the JavaScript port's data in --profile
//   --seed     for the JavaScript port's own desktop app as --exe: fills its storage (the origin
//              redcat://game) with a constructed dump and closes it. Makes an old profile to
//              try the take-over on
// Needs xvfb-run; the window is drawn with software WebGL (--use-angle=swiftshader).
import fs from 'node:fs';
import path from 'node:path';
import { spawn, spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const SCRATCH = path.join(ROOT, 'tools/out/desktop');
const args = process.argv.slice(2);
const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
const has = (n) => args.includes('--' + n);
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
let failed = 0;
const check = (ok, what, detail = '') => { console.log(`${ok ? 'ok  ' : 'FAIL'}  ${what}${detail ? '  (' + detail + ')' : ''}`); if (!ok) failed++; return ok; };

const exe = path.resolve(ROOT, opt('exe', 'dist/desktop/unpacked/linux-unpacked/redcat-spookkasteel'));
const outDir = path.resolve(ROOT, opt('out', 'tools/out/desktop/check'));
const profile = path.resolve(ROOT, opt('profile', path.join('tools/out/desktop', 'profile-' + Date.now())));
if (!profile.startsWith(SCRATCH + path.sep)) { console.error('desktop-check: the profile must be a folder below ' + SCRATCH); process.exit(1); }
if (!fs.existsSync(exe)) { console.error('desktop-check: ' + exe + ' does not exist (npm run build:desktop -- --only linux-x64)'); process.exit(1); }
if (spawnSync('xvfb-run', ['--help']).error) { console.error('desktop-check: xvfb-run is needed'); process.exit(1); }
fs.mkdirSync(outDir, { recursive: true });
fs.mkdirSync(profile, { recursive: true });
fs.rmSync(path.join(profile, 'DevToolsActivePort'), { force: true });

// --- start -----------------------------------------------------------------------------------------
const env = { ...process.env, XDG_CONFIG_HOME: path.join(SCRATCH, 'xdg-config'), XDG_CACHE_HOME: path.join(SCRATCH, 'xdg-cache'), REDCAT_DESKTOP_DEBUG: '1' };
delete env.WAYLAND_DISPLAY;
const child = spawn('xvfb-run', ['-a', '-s', '-screen 0 1366x900x24', exe,
  '--user-data-dir=' + profile, '--mute-audio', '--remote-debugging-port=0', '--ozone-platform=x11',
  '--autoplay-policy=no-user-gesture-required', '--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--ignore-gpu-blocklist'], { env, stdio: ['ignore', 'pipe', 'pipe'] });
let output = '';
child.stdout.on('data', (d) => { output += d; });
child.stderr.on('data', (d) => { output += d; });
let exited = null;
const gone = new Promise((resolve) => child.on('exit', (code, signal) => { exited = { code, signal }; resolve(exited); }));
const stop = async () => { if (!exited) { child.kill('SIGTERM'); await Promise.race([gone, sleep(5000)]); if (!exited) child.kill('SIGKILL'); } };
process.on('SIGINT', () => { child.kill('SIGKILL'); process.exit(130); });

let port = 0;
for (let i = 0; i < 150 && !port && !exited; i++) { await sleep(200); try { port = Number(fs.readFileSync(path.join(profile, 'DevToolsActivePort'), 'utf8').split('\n')[0]); } catch (e) { /* not yet */ } }
if (!port) { console.error('desktop-check: the app did not open its debugging port\n' + output.slice(-2000)); await stop(); process.exit(1); }
let target = null;
for (let i = 0; i < 100 && !target; i++) { await sleep(200); try { target = (await (await fetch(`http://127.0.0.1:${port}/json/list`)).json()).find((t) => t.type === 'page' && t.url.startsWith('redcat://game/')); } catch (e) { /* not yet */ } }
if (!target) { console.error('desktop-check: no window on redcat://game/\n' + output.slice(-2000)); await stop(); process.exit(1); }

// --- the debugging protocol -------------------------------------------------------------------------
const ws = new WebSocket(target.webSocketDebuggerUrl);
await new Promise((resolve, reject) => { ws.onopen = resolve; ws.onerror = () => reject(new Error('no connection to the page')); });
let seq = 0;
const waiting = new Map(), problems = [];
ws.onmessage = (m) => {
  const d = JSON.parse(m.data);
  if (d.id && waiting.has(d.id)) { const w = waiting.get(d.id); waiting.delete(d.id); if (d.error) w.reject(new Error(d.error.message)); else w.resolve(d.result); }
  else if (d.method === 'Runtime.exceptionThrown') problems.push('exception: ' + (d.params.exceptionDetails.exception?.description || d.params.exceptionDetails.text).slice(0, 300));
  else if (d.method === 'Runtime.consoleAPICalled' && d.params.type === 'error') problems.push('console.error: ' + d.params.args.map((a) => a.value ?? a.description ?? '').join(' ').slice(0, 300));
  else if (d.method === 'Log.entryAdded' && d.params.entry.level === 'error') problems.push('log: ' + d.params.entry.text.slice(0, 200) + ' ' + (d.params.entry.url || ''));
};
ws.onclose = () => { for (const w of waiting.values()) w.reject(new Error('the connection to the page closed')); waiting.clear(); };
const send = (method, params = {}) => new Promise((resolve, reject) => { const id = ++seq; waiting.set(id, { resolve, reject }); ws.send(JSON.stringify({ id, method, params })); });
const evaluate = async (expression) => {
  const r = await send('Runtime.evaluate', { expression, awaitPromise: true, returnByValue: true });
  if (r.exceptionDetails) throw new Error(r.exceptionDetails.exception?.description || r.exceptionDetails.text);
  return r.result.value;
};
const goto = async (address) => { await send('Page.navigate', { url: address }); for (let i = 0; i < 100; i++) { await sleep(200); try { if (await evaluate(`location.href === ${JSON.stringify(address)} && document.readyState === 'complete'`)) return; } catch (e) { /* between two pages */ } } throw new Error('the page did not load: ' + address); };
const shot = async (name) => { const f = path.join(outDir, name + '.png'); fs.writeFileSync(f, Buffer.from((await send('Page.captureScreenshot', { format: 'png' })).data, 'base64')); console.log('shot  ' + f); };
await send('Runtime.enable'); await send('Log.enable'); await send('Page.enable');
const shell = (output.match(/^\{"userData".*$/m) || [null])[0];

try {
  if (has('seed')) {
    // --- fill the JavaScript port's storage -------------------------------------------------------
    const dump = JSON.parse(fs.readFileSync(path.resolve(ROOT, opt('seed')), 'utf8'));
    await sleep(3000);                                            // the old page writes its first values
    await goto('redcat://game/package.json');                     // the same origin, without the game running
    const seeded = await evaluate(`(async (d) => {
      localStorage.clear();
      for (const db of await indexedDB.databases()) await new Promise((res) => { const r = indexedDB.deleteDatabase(db.name); r.onsuccess = r.onerror = r.onblocked = () => res(); });
      for (const [k, v] of Object.entries(d.localStorage)) localStorage.setItem(k, v);
      for (const [name, stores] of Object.entries(d.indexedDB || {})) {
        const db = await new Promise((res, rej) => { const r = indexedDB.open(name, 1); r.onupgradeneeded = () => r.result.createObjectStore('history'); r.onsuccess = () => res(r.result); r.onerror = () => rej(r.error); });
        await new Promise((res, rej) => { const t = db.transaction('history', 'readwrite'); for (const rec of stores.history || []) t.objectStore('history').put(rec.value, rec.key); t.oncomplete = res; t.onerror = () => rej(t.error); });
        db.close();
      }
      return { origin: location.origin, keys: Object.keys(localStorage).sort(), databases: (await indexedDB.databases()).map((x) => x.name).sort() };
    })(${JSON.stringify({ localStorage: dump.localStorage, indexedDB: dump.indexedDB })})`);
    console.log('seeded', JSON.stringify(seeded));
    check(seeded.origin === 'redcat://game', 'the old app\'s page origin is redcat://game', seeded.origin);
    await sleep(3000);                                            // let the storage reach the disk
  } else {
    // --- the shell ----------------------------------------------------------------------------------
    if (shell) console.log('shell ' + shell);
    const info = shell ? JSON.parse(shell) : {};
    check(info.userData === profile, 'the profile is the throwaway folder', info.userData || 'not reported');
    if (info.defaultUserData) check(path.basename(info.defaultUserData) === 'redcat-spookkasteel-port' && info.defaultUserData.startsWith(env.XDG_CONFIG_HOME), 'without --user-data-dir it would be <config>/redcat-spookkasteel-port', info.defaultUserData);
    await goto('redcat://game/index.html?skipintro');
    const page = await evaluate(`(async () => {
      const head = async (u, init) => { const r = await fetch(u, init); return { status: r.status, coop: r.headers.get('cross-origin-opener-policy'), coep: r.headers.get('cross-origin-embedder-policy'), type: r.headers.get('content-type'), length: r.headers.get('content-length'), range: r.headers.get('content-range') }; };
      const script = document.querySelector('script[src]').getAttribute('src');
      return { href: location.href, origin: location.origin, isolated: self.crossOriginIsolated, sab: typeof SharedArrayBuffer, secure: isSecureContext, title: document.title, desktop: typeof (window.desktop && window.desktop.quit), ua: navigator.userAgent,
        supported: window.RecompGame ? window.RecompGame.supported() : null,
        page: await head('index.html'), script: await head(script), headOnly: await head('index.html', { method: 'HEAD' }), missing: await head('classic/index.html', { method: 'HEAD' }), outside: await head('/%2e%2e/%2e%2e/package.json'),
        movie: await head('assets/media/intronl.webm', { headers: { Range: 'bytes=100-199' } }),
        idb: await new Promise((res) => { const r = indexedDB.open('rcspook-recomp-kv'); r.onsuccess = () => { r.result.close(); res(true); }; r.onerror = () => res(false); }) };
    })()`);
    console.log('page  ' + JSON.stringify(page));
    check(page.origin === 'redcat://game' && page.secure, 'the page is redcat://game, a secure context', page.href);
    check(page.isolated === true && page.sab === 'function', 'self.crossOriginIsolated is true and SharedArrayBuffer exists');
    const isolatedAnswer = (a) => a.coop === 'same-origin' && a.coep === 'require-corp';
    check([page.page, page.script, page.headOnly, page.missing, page.outside, page.movie].every(isolatedAnswer), 'both isolation headers on every answer, the 404s too');
    check(page.page.status === 200 && /html/.test(page.page.type) && page.script.status === 200 && /javascript/.test(page.script.type), 'page and script answered with their types');
    check(page.missing.status === 404 && page.outside.status !== 200, 'a missing file and a path outside the site are not answered', `${page.missing.status}, ${page.outside.status}`);
    check(page.movie.status === 206 && page.movie.length === '100', 'a byte range of a movie is answered', `${page.movie.status} ${page.movie.range}`);
    check(page.desktop === 'function', 'the preload gives the page window.desktop.quit');
    check(page.supported === true, 'the page says the game can run here', String(page.supported));
    check(page.title === 'RedCat Spookkasteel', 'title', page.title);

    if (has('legacy')) {
      await sleep(4000);
      const legacy = await evaluate(`(async () => {
        const old = Object.keys(localStorage).filter((k) => k.startsWith('redcat.')).sort();
        const sum = async (t) => Array.from(new Uint8Array(await crypto.subtle.digest('SHA-256', new TextEncoder().encode(t)))).map((b) => b.toString(16).padStart(2, '0')).join('');
        const oldSums = {}; for (const k of old) oldSums[k] = await sum(localStorage.getItem(k));
        return { old, oldSums, mark: JSON.parse(localStorage.getItem('rcspook-recomp.legacy.v1') || 'null'), own: Object.keys(localStorage).filter((k) => k.startsWith('rcspook-recomp')).sort(),
          databases: (await indexedDB.databases()).map((d) => d.name).sort(), notice: Array.from(document.querySelectorAll('dialog[open], [role=alertdialog]:not([hidden])')).map((e) => e.innerText.trim().replace(/\\s+/g, ' ').slice(0, 600)) };
      })()`);
      fs.writeFileSync(path.join(outDir, 'legacy.json'), JSON.stringify(legacy, null, 1));
      console.log('legacy ' + JSON.stringify({ mark: legacy.mark, old: legacy.old.length, databases: legacy.databases, notice: legacy.notice }));
      const players = legacy.mark && legacy.mark.players ? Object.keys(legacy.mark.players) : [];
      check(players.length > 0, 'players of the JavaScript port were taken over', players.join(', ') || 'none');
      await shot('legacy-menu');
    }

    if (!has('no-world')) {
      // --- a world ------------------------------------------------------------------------------------
      const world = Number(opt('world', 1)), seconds = Number(opt('seconds', 20));
      await goto(`redcat://game/index.html?autostart=1&world=${world}&scale=2&stats=1`);
      let state = null;
      for (let i = 0; i < 180; i++) { await sleep(500); state = await evaluate('({ running: !!window.RecompGame.running, frames: window.RecompGame.framesDrawn, crash: window.__crash || null, status: document.getElementById("status").textContent })'); if (state.frames > 30 || state.crash) break; }
      check(state.running && state.frames > 30 && !state.crash, `world ${world} starts and draws`, JSON.stringify(state));
      await sleep(seconds * 1000);
      const later = await evaluate('({ running: !!window.RecompGame.running, frames: window.RecompGame.framesDrawn, stats: window.RecompGame.stats || null, shown: document.getElementById("stats").textContent, crash: window.__crash || null })');
      console.log('game  ' + JSON.stringify(later));
      check(later.running && later.frames > state.frames + seconds * 5 && !later.crash, `still drawing after ${seconds} s`, `${state.frames} -> ${later.frames} frames`);
      await shot(`world${world}`);
    }

    if (!has('no-quit')) {
      // --- Stoppen > Ja -------------------------------------------------------------------------------
      await goto('redcat://game/index.html?skipintro');
      await sleep(1500);
      for (let i = 0; i < 6; i++) { if (await evaluate('(() => { const d = document.querySelector("dialog[open]:not(#quit-confirmation)"); if (!d) return true; d.close(); return false; })()')) break; await sleep(300); }
      await evaluate('document.getElementById("open-quit").click()');
      await sleep(500);
      check(await evaluate('document.getElementById("quit-confirmation").open'), 'Stoppen opens the question');
      await evaluate('document.getElementById("quit-yes").click()').catch(() => {});
      await Promise.race([gone, sleep(30000)]);
      check(!!exited && exited.code === 0, 'Ja ends the program', exited ? `exit code ${exited.code}${exited.signal ? ', ' + exited.signal : ''}` : 'still running after 30 s');
    }
  }
} catch (error) { check(false, 'the check ran to its end', error.message); }

if (problems.length) { console.log(`page errors (${problems.length}):`); for (const p of [...new Set(problems)].slice(0, 20)) console.log('  ' + p); }
if (!exited) { try { await send('Browser.close'); } catch (e) { /* gone */ } await Promise.race([gone, sleep(8000)]); }
await stop();
fs.writeFileSync(path.join(outDir, 'app-output.log'), output);
console.log(failed ? `${failed} check(s) failed` : 'all checks passed');
process.exit(failed ? 1 : 0);
