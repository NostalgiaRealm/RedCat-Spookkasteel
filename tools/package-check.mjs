#!/usr/bin/env node
// Checks a packaged site (dist/site, tools/package.mjs) the way a visitor's browser would use it:
// served below /redcatspookkasteel/ by tools/serve-site.mjs (a stand-in for the web server with the
// headers of docs/nginx-redcatspookkasteel*.conf), with a delay before every answer for a network's
// round trip.
//   1. the folder: every file the page, its scripts, its style sheets and the game's lists refer to
//      is there; the .gz copies hold what their files hold; nothing else is in it
//   2. the server's answers: redirect, isolation headers, what may be kept and for how long, .gz
//      for clients that accept it, 404 for what is not there, the old version at classic/ as it
//      is answered now
//   3. headless Chromium: the menu comes up; each world starts; nothing is asked for that is not
//      there or lies outside the prefix; a second visit takes scripts, game module and game files
//      from the browser's cache; loading with and without the per-world lists, timed
// What it does not check: nginx with that configuration file, a real network, a real browser.
//   node tools/package-check.mjs [--site dist/site] [--latency 25] [--worlds 1,2,3,4,5] [--no-browser] [--out tools/out/package]
// Needs Playwright, taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import http from 'node:http';
import zlib from 'node:zlib';
import os from 'node:os';
import { createHash } from 'node:crypto';
import { createRequire } from 'node:module';
import { fileURLToPath } from 'node:url';
import { serveSite } from './serve-site.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const args = process.argv.slice(2);
const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
const has = (n) => args.includes('--' + n);
const SITE = path.resolve(ROOT, opt('site', 'dist/site'));
const OUT = path.resolve(ROOT, opt('out', 'tools/out/package'));
const LATENCY = Number(opt('latency', 25));
const WORLDS = String(opt('worlds', '1,2,3,4,5')).split(',').map(Number);
const PREFIX = '/redcatspookkasteel/';
const posix = path.posix;
fs.mkdirSync(OUT, { recursive: true });

let failed = 0;
const check = (ok, what, detail = '') => { if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); return ok; };
const exists = (rel) => { try { return fs.statSync(path.join(SITE, rel)).isFile(); } catch (e) { return false; } };
const walk = (dir, rel = '') => fs.readdirSync(dir, { withFileTypes: true }).flatMap((e) => (e.isDirectory() ? walk(path.join(dir, e.name), rel ? rel + '/' + e.name : e.name) : [rel ? rel + '/' + e.name : e.name]));
const mb = (n) => (n / 1048576).toFixed(1) + ' MB';

// ================================================================================================
console.log('the folder ' + SITE);
if (!exists('build.json')) { console.log('FAIL no build.json: not a packaged site (node tools/package.mjs)'); process.exit(1); }
const build = JSON.parse(fs.readFileSync(path.join(SITE, 'build.json'), 'utf8'));
const APP = `app/${build.revision}/`;
const all = walk(SITE);
const plain = all.filter((f) => !f.endsWith('.gz'));

{ // the revision is the content's
  const hash = createHash('sha256');
  const files = plain.filter((f) => f.startsWith(APP)).map((f) => [f.slice(APP.length), fs.readFileSync(path.join(SITE, f))]).sort((a, b) => (a[0] < b[0] ? -1 : 1));
  for (const [rel, data] of files) { hash.update(rel + '\0' + data.length + '\0'); hash.update(data); }
  const rev = hash.digest('hex').slice(0, 12);
  check(rev === build.revision, `app/${build.revision}/ holds what its name was made from (${files.length} files)`, rev === build.revision ? '' : 'content gives ' + rev);
  const others = fs.readdirSync(path.join(SITE, 'app')).filter((n) => n !== build.revision);
  check(others.length === 0, 'one revision under app/', others.join(' '));
}

const html = fs.readFileSync(path.join(SITE, 'index.html'), 'utf8');
{ // the page's own references
  const refs = [...html.matchAll(/\b(?:src|href)="([^"#]+)"/g)].map((m) => m[1]).filter((r) => !/^(https?:|data:|mailto:)/.test(r));
  const missing = refs.filter((r) => !r.startsWith('classic/') && !exists(r.split('?')[0]));
  check(refs.length > 10 && missing.length === 0, `index.html: its ${refs.length} references to files are in the folder`, missing.slice(0, 5).join(' '));
  check(!/\b(src|href)="source\//.test(html) && html.includes(APP + 'source/'), 'index.html loads its scripts and styles from the revision folder');
}

const reached = new Set();
{ // every script reachable from the page and from the game thread
  const entries = [...html.matchAll(/<script[^>]+src="([^"]+)"/g)].map((m) => m[1]);
  const queue = [...entries];
  const missing = [], outside = [];
  while (queue.length) {
    const file = queue.pop();
    if (reached.has(file)) continue;
    if (!exists(file)) { missing.push(file); continue; }
    reached.add(file);
    const text = fs.readFileSync(path.join(SITE, file), 'utf8').replace(/\/\*[\s\S]*?\*\//g, '').replace(/^\s*\/\/.*$/gm, '');
    const refs = [...text.matchAll(/\bimport\s+(?:[^'"()]*?\sfrom\s+)?['"]([^'"]+)['"]/g), ...text.matchAll(/\bexport\s+[^'"]*?\sfrom\s+['"]([^'"]+)['"]/g), ...text.matchAll(/new URL\(\s*['"]([^'"]+\.js)['"]\s*,\s*import\.meta\.url\s*\)/g)].map((m) => m[1]);
    for (const ref of refs) {
      const to = posix.normalize(posix.join(posix.dirname(file), ref));
      if (!to.startsWith(APP)) outside.push(`${file} -> ${ref}`);
      queue.push(to);
    }
  }
  check(entries.length >= 2 && missing.length === 0, `scripts: ${reached.size} reached from the page, all in the folder`, missing.slice(0, 5).join(' '));
  check(outside.length === 0, 'no script refers to a script outside its revision folder', outside.slice(0, 3).join('; '));
  check([...reached].some((f) => f.endsWith('source/web/worker.js')) && [...reached].some((f) => f.endsWith('source/host/runtime.js')), 'the game thread and the host are among them');
  const unused = plain.filter((f) => f.startsWith(APP + 'source/') && f.endsWith('.js') && !reached.has(f));
  if (unused.length) console.log('     note: scripts in the folder that nothing reaches: ' + unused.map((f) => f.slice(APP.length)).join(' '));
}

{ // style sheets: every url() points at a file
  const sheets = plain.filter((f) => f.startsWith(APP) && f.endsWith('.css'));
  const missing = []; let n = 0;
  for (const sheet of sheets) for (const m of fs.readFileSync(path.join(SITE, sheet), 'utf8').matchAll(/url\(\s*["']?([^"')]+)["']?\s*\)/g)) {
    if (/^(data:|https?:|#)/.test(m[1])) continue;
    n++;
    const to = posix.normalize(posix.join(posix.dirname(sheet), m[1]));
    if (!exists(to)) missing.push(`${sheet.slice(APP.length)}: ${m[1]}`);
  }
  check(sheets.length >= 4 && n > 20 && missing.length === 0, `style sheets: ${n} url() references in ${sheets.length} sheets point at files in the folder`, missing.slice(0, 4).join('; '));
}

{ // asset paths written out in scripts and page; voices by their file names
  const texts = [html, ...[...reached].map((f) => fs.readFileSync(path.join(SITE, f), 'utf8'))].join('\n');
  const literal = [...new Set([...texts.matchAll(/assets\/[A-Za-z0-9_.\/-]+\.(?:png|wav|json|svg|ico|webm|mp4)/g)].map((m) => m[0]))];
  const missing = literal.filter((p) => !exists(p));
  check(literal.length > 5 && missing.length === 0, `scripts and page: the ${literal.length} asset paths written out in them are in the folder`, missing.slice(0, 5).join(' '));
  const voices = [...new Set([...texts.matchAll(/['"`]([a-z0-9_]+\.wav)['"`]/gi)].map((m) => m[1]))];
  // a name may also be one of the game's own sounds (the host names some, e.g. for a fix): those are under data/
  const gameSounds = new Set(all.filter((f) => /^data\/(Sounds|VoiceNL)\//.test(f)).map((f) => f.split('/').pop().toLowerCase()));
  const noVoice = voices.filter((v) => !exists('assets/voices/' + v) && !exists('assets/audio/' + v) && !gameSounds.has(v.toLowerCase()));
  check(voices.length > 20 && noVoice.length === 0, `the ${voices.length} voice and music files named in the scripts are in the folder`, noVoice.join(' '));
  for (const base of ['davilex', 'intronl', 'outronl']) for (const ext of ['webm', 'mp4']) if (!exists(`assets/media/${base}.${ext}`)) check(false, `movie assets/media/${base}.${ext}`);
}

const manifest = JSON.parse(fs.readFileSync(path.join(SITE, APP, 'game/files.json'), 'utf8'));
const lists = JSON.parse(fs.readFileSync(path.join(SITE, APP, 'game/preload.json'), 'utf8'));
{ // the game's files and lists
  const bad = manifest.files.filter(([rel, size]) => { try { return fs.statSync(path.join(SITE, manifest.base, rel)).size !== size; } catch (e) { return true; } });
  check(manifest.files.length > 1000 && bad.length === 0, `the ${manifest.files.length} original game files of files.json are under ${manifest.base} at their sizes (${mb(manifest.files.reduce((s, f) => s + f[1], 0))})`, bad.slice(0, 3).map((f) => f[0]).join(' '));
  const known = new Set(manifest.files.map((f) => f[0]));
  const named = [...lists.common, ...Object.values(lists.worlds).flatMap((w) => [...w.start, ...w.later])];
  const unknown = named.filter((n) => !known.has(n));
  check(Object.keys(lists.worlds).length === 5 && unknown.length === 0, `preload.json: five worlds, every file it names is in files.json (${lists.common.length} common)`, unknown.slice(0, 3).join(' '));
  check(exists('data/Settings/PlayerDef.ini'), 'the template for a new player is there (data/Settings/PlayerDef.ini)');
}

{ // .gz copies, and nothing that does not belong
  let n = 0; const wrong = [];
  for (const f of all.filter((x) => x.endsWith('.gz'))) {
    const orig = f.slice(0, -3);
    if (!exists(orig)) { wrong.push(f + ' (no file)'); continue; }
    if (!zlib.gunzipSync(fs.readFileSync(path.join(SITE, f))).equals(fs.readFileSync(path.join(SITE, orig)))) wrong.push(f);
    n++;
  }
  check(wrong.length === 0, `the ${n} .gz copies unpack to exactly their files`, wrong.slice(0, 3).join(' '));
  const top = fs.readdirSync(SITE).sort();
  const extra = top.filter((n2) => !['app', 'assets', 'data', 'index.html', 'index.html.gz', 'build.json'].includes(n2));
  check(extra.length === 0, 'top level: app/ assets/ data/ index.html build.json and nothing else', extra.join(' '));
  const unwanted = all.filter((f) => /\.(exe|dll|dat|hlp|map|mjs|log|py)$/i.test(f) || /(^|\/)\./.test(f) || /node_modules/.test(f));
  check(unwanted.length === 0, 'no programs, tools, logs or hidden files in the folder', unwanted.slice(0, 4).join(' '));
}

// ================================================================================================
console.log('\nthe server\'s answers (tools/serve-site.mjs, as docs/nginx-redcatspookkasteel*.conf describe them)');
const get = (port, p, headers = {}, method = 'GET') => new Promise((resolve, reject) => {
  const req = http.request({ host: '127.0.0.1', port, path: p, method, headers }, (res) => { const chunks = []; res.on('data', (c) => chunks.push(c)); res.on('end', () => resolve({ status: res.statusCode, headers: res.headers, body: Buffer.concat(chunks) })); });
  req.on('error', reject); req.end();
});
{
  const s = await serveSite({ root: SITE, port: 0, prefix: PREFIX, classic: fs.existsSync(path.join(path.resolve(ROOT, '../RCSPOOK_NEW'), 'index.html')) ? path.resolve(ROOT, '../RCSPOOK_NEW') : null });
  const isolated = (r) => r.headers['cross-origin-opener-policy'] === 'same-origin' && r.headers['cross-origin-embedder-policy'] === 'require-corp';
  const CLASSIC = path.resolve(ROOT, '../RCSPOOK_NEW');
  let r = await get(s.port, '/redcatspookkasteel?skipintro');
  check(r.status === 301 && r.headers.location === '/redcatspookkasteel/?skipintro', 'the address without its slash is sent on, with its query', `${r.status} ${r.headers.location}`);
  r = await get(s.port, PREFIX);
  check(r.status === 200 && /text\/html/.test(r.headers['content-type']) && r.headers['cache-control'] === 'no-cache' && isolated(r), 'the page: isolation headers, always checked with the server (no-cache)', r.headers['cache-control']);
  r = await get(s.port, PREFIX + 'build.json');
  check(r.status === 200 && r.headers['cache-control'] === 'no-cache', 'build.json: no-cache');
  const wasm = PREFIX + APP + 'game/spook.wasm';
  r = await get(s.port, wasm, { 'accept-encoding': 'gzip, deflate, br' });
  const rawSize = fs.statSync(path.join(SITE, APP, 'game/spook.wasm')).size;
  check(r.status === 200 && r.headers['content-encoding'] === 'gzip' && zlib.gunzipSync(r.body).length === rawSize && /immutable/.test(r.headers['cache-control']) && isolated(r), `the game module to a browser: its .gz copy (${mb(r.body.length)} for ${mb(rawSize)}), kept for good, isolation headers`, r.headers['cache-control']);
  r = await get(s.port, wasm);
  check(r.status === 200 && !r.headers['content-encoding'] && r.body.length === rawSize, 'the game module to a client that takes no gzip: the file itself');
  const etag = r.headers.etag;
  r = await get(s.port, wasm, { 'if-none-match': etag });
  check(r.status === 304, 'a copy that is still good: 304', String(r.status));
  r = await get(s.port, PREFIX + APP + 'source/web/game.js', { 'accept-encoding': 'gzip' });
  check(r.status === 200 && /javascript/.test(r.headers['content-type']) && /immutable/.test(r.headers['cache-control']), 'a script: a JavaScript type, kept for good');
  r = await get(s.port, PREFIX + 'data/Levels/lvl00a.bsp', { 'accept-encoding': 'gzip' });
  check(r.status === 200 && r.headers['content-encoding'] === 'gzip' && /immutable/.test(r.headers['cache-control']) && isolated(r), `an original game file: .gz copy (${mb(r.body.length)}), kept for good`);
  r = await get(s.port, PREFIX + 'assets/menu/menu-logo.png');
  check(r.status === 200 && r.headers['cache-control'] === 'public, max-age=86400' && isolated(r), 'a menu picture: kept for a day', r.headers['cache-control']);
  r = await get(s.port, PREFIX + 'assets/media/intronl.webm', { range: 'bytes=0-1023' });
  check(r.status === 206 && r.body.length === 1024, 'a movie: byte ranges', String(r.status));
  r = await get(s.port, PREFIX + APP + 'source/web/nothing.js');
  check(r.status === 404 && !/max-age|immutable/.test(r.headers['cache-control'] || '') && isolated(r), 'a script that is not there: 404, and not to be kept', `${r.status} ${r.headers['cache-control'] || 'no Cache-Control'}`);
  r = await get(s.port, PREFIX + 'classic/index.html', {}, 'HEAD');
  if (fs.existsSync(path.join(CLASSIC, 'index.html'))) {
    check(r.status === 200 && r.headers['cache-control'] === 'no-cache' && !r.headers['cross-origin-opener-policy'] && !r.headers['cross-origin-embedder-policy'], 'the old version at classic/: answered as the site answers it now (no-cache, no isolation headers)', `${r.status} ${r.headers['cache-control']}`);
    r = await get(s.port, PREFIX + 'classic/nothing.js');
    check(r.status === 404 && r.headers['cache-control'] === 'no-cache', 'a file that is not in classic/: 404, no-cache');
  } else console.log('     note: ../RCSPOOK_NEW not found, classic/ not checked');
  r = await get(s.port, PREFIX + 'assets/icons/apple-touch-icon.png');
  check(r.status === 200, 'the home-screen icon the old page had is still at its address');
  r = await get(s.port, '/index.html');
  check(r.status === 404, 'nothing is served outside the prefix');
  await s.close();
}

// ================================================================================================
if (has('no-browser')) { console.log(failed ? `\n${failed} check(s) FAILED` : '\nall checks passed (browser part skipped)'); process.exit(failed ? 1 : 0); }
console.log(`\nheadless Chromium, ${LATENCY} ms before every answer`);
const require = createRequire(path.join(process.env.PLAYWRIGHT_DIR || path.resolve(ROOT, '../../A2 Racer 4/node_modules'), 'x.js'));
const { chromium } = require('playwright');
const LAUNCH = ['--mute-audio', '--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', '--use-angle=swiftshader', '--enable-unsafe-swiftshader'];
const profiles = [];
const newProfile = () => { const dir = fs.mkdtempSync(path.join(OUT, 'profile-')); profiles.push(dir); return dir; };
const open = async (profile) => {
  const context = await chromium.launchPersistentContext(profile, { headless: true, args: LAUNCH, viewport: { width: 1280, height: 960 } });
  const page = context.pages()[0] || await context.newPage();
  const seen = { bad: [], outside: [], errors: [] };
  page.on('response', (r) => { const u = new URL(r.url()); if (!u.pathname.startsWith(PREFIX)) seen.outside.push(r.url()); else if (r.status() >= 400) seen.bad.push(`${r.status()} ${u.pathname.slice(PREFIX.length)}`); });
  page.on('requestfailed', (r) => seen.bad.push(`failed ${r.url()}`));
  context.on('weberror', (e) => seen.errors.push(String(e.error())));
  page.on('pageerror', (e) => seen.errors.push(e.message));
  return { context, page, seen };
};
/** Starts a world straight away and waits for the game to run. Returns ms from navigation to the running game, and what the page saw. */
const startWorld = async (t, url, world) => {
  const t0 = Date.now();
  await t.page.goto(`${url}?autostart=1&world=${world}&quick=1`);
  const isolated = await t.page.evaluate(() => self.crossOriginIsolated);
  await t.page.waitForFunction(() => (window.RecompGame && window.RecompGame.running) || window.__crash, null, { timeout: 180000 });
  const ms = Date.now() - t0;
  const crash = await t.page.evaluate(() => (window.__crash ? window.__crash.message : null));
  return { ms, isolated, crash };
};
const settle = async (t, ms) => { await t.page.waitForTimeout(ms); return t.page.evaluate(() => ({ stats: window.RecompGame.stats ? { fps: window.RecompGame.stats.fps, fetches: window.RecompGame.stats.fetches, mb: window.RecompGame.stats.mb } : null, crash: window.__crash ? window.__crash.message : null, running: window.RecompGame.running })); };
const dataRequests = (log, from = 0) => log.slice(from).filter((r) => r.path.startsWith('data/') && r.path !== 'data/Settings/PlayerDef.ini');

const site = await serveSite({ root: SITE, port: 0, prefix: PREFIX, latency: LATENCY });
const timing = {};
{ // the menu
  const t = await open(newProfile());
  await t.page.goto(site.url + '?skipintro');
  await t.page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu', null, { timeout: 60000 });
  await t.page.waitForTimeout(1500);
  const info = await t.page.evaluate(() => ({ isolated: self.crossOriginIsolated, supported: window.RecompGame.supported(), classic: !document.getElementById('menu-legacy-classic') || document.getElementById('menu-legacy-classic').hidden, images: [...document.images].filter((i) => i.complete && i.naturalWidth === 0 && i.getAttribute('src')).map((i) => i.getAttribute('src')) }));
  await t.page.screenshot({ path: path.join(OUT, 'menu.png') });
  check(info.isolated && info.supported, 'the page is isolated and can start the game (shared memory)');
  const bad = t.seen.bad.filter((b) => b !== '404 classic/index.html');
  check(bad.length === 0 && t.seen.outside.length === 0 && t.seen.errors.length === 0, 'the menu comes up: nothing missing, nothing asked for outside the prefix, no script error', [...bad, ...t.seen.outside, ...t.seen.errors].slice(0, 4).join(' | '));
  check(info.images.length === 0, 'no picture of the page failed to load', info.images.join(' '));
  check(info.classic, 'no link to an old version, as none is served next to this package here');
  const scripts = site.log.filter((r) => /\.js$/.test(r.path));
  check(scripts.length > 20 && scripts.every((r) => r.path.startsWith(APP)), `the page's ${scripts.length} scripts come from the revision folder`);
  await t.context.close();
}

for (const world of WORLDS) {
  const profile = newProfile();
  let t = await open(profile);
  let mark = site.log.length;
  const first = await startWorld(t, site.url, world);
  const atRun = site.log.length;
  const after = await settle(t, 12000);
  await t.page.screenshot({ path: path.join(OUT, `world${world}.png`) });
  const before = dataRequests(site.log.slice(0, atRun), mark), during = dataRequests(site.log, atRun);
  const wanted = lists.common.length + lists.worlds[world].start.length;
  check(first.isolated && !first.crash && after.running && !after.crash && after.stats && after.stats.fps > 0, `world ${world}: runs (${after.stats ? after.stats.fps + ' fps in software rendering' : 'no frames'}), ${(first.ms / 1000).toFixed(1)} s from opening the address to the running game`, first.crash || after.crash || '');
  check(before.length >= wanted && before.every((r) => r.status === 200), `world ${world}: its ${wanted} start files were fetched together before the game thread started (${before.length} requests, ${before.filter((r) => r.encoding === 'gzip').length} as .gz)`);
  const waited = during.length - 0;
  const laterNames = new Set(lists.worlds[world].later.map((n) => 'data/' + n));
  const byGame = during.filter((r) => !laterNames.has(r.path));
  check(byGame.length <= 12, `world ${world}: in its first 12 s the game thread itself had to wait for ${byGame.length} file(s); ${waited - byGame.length} of the ${laterNames.size} later files were fetched in the background meanwhile`, byGame.slice(0, 4).map((r) => r.path.slice(5)).join(' '));
  const bad = t.seen.bad.filter((b) => b !== '404 classic/index.html');
  check(bad.length === 0 && t.seen.outside.length === 0, `world ${world}: nothing missing, nothing outside the prefix`, [...bad, ...t.seen.outside].slice(0, 4).join(' | '));
  timing[world] = { first: first.ms };
  await t.context.close();

  if (world === WORLDS[0]) {
    // a second visit with the same browser profile
    t = await open(profile);
    mark = site.log.length;
    const second = await startWorld(t, site.url, world);
    await settle(t, 3000);
    const again = site.log.slice(mark);
    const fetched = again.filter((r) => (r.path.startsWith('app/') || r.path.startsWith('data/')) && r.status === 200);
    const checked = again.filter((r) => r.status === 304 || (r.status === 200 && !r.path.startsWith('app/') && !r.path.startsWith('data/')));
    check(!second.crash && fetched.length === 0, `second visit: scripts, game module and game files all come from the browser's cache (${fetched.length} fetched again; ${checked.length} other answers, the page among them), ${(second.ms / 1000).toFixed(1)} s to the running game`, fetched.slice(0, 4).map((r) => r.path).join(' '));
    timing[world].second = second.ms;
    await t.context.close();
  }
}
await site.close();

{ // a server that refuses requests for a moment (503): asked again, nothing lost
  const world = WORLDS[0];
  const wanted = lists.common.length + lists.worlds[world].start.length;
  let flaky = await serveSite({ root: SITE, port: 0, prefix: PREFIX, latency: LATENCY, refuseOnce: /^data\// });
  let t = await open(newProfile());
  let r = await startWorld(t, flaky.url, world);
  let after = await settle(t, 6000);
  const refusedN = flaky.log.filter((x) => x.status === 503).length;
  check(!r.crash && after.running && !after.crash && after.stats && after.stats.fetches >= wanted - 5 && refusedN >= wanted, `every game file refused once (${refusedN} answers 503): the start files are asked for again and world ${world} runs, ${(r.ms / 1000).toFixed(1)} s`, r.crash || after.crash || `fetches ${after.stats && after.stats.fetches}`);
  await t.context.close(); await flaky.close();
  flaky = await serveSite({ root: SITE, port: 0, prefix: PREFIX, without: 'preload.json', refuseOnce: /^data\/(Levels|Settings)\// });
  t = await open(newProfile());
  r = await startWorld(t, flaky.url, world);
  await t.page.waitForFunction((n) => window.__crash || (window.RecompGame.stats && window.RecompGame.stats.fetches >= n), wanted - 5, { timeout: 120000, polling: 250 }).catch(() => {});
  after = await settle(t, 2000);
  const again = flaky.log.filter((x) => x.status === 503).length;
  check(!r.crash && after.running && !after.crash && again >= 3, `files the waiting game thread asks for itself, refused once (${again} answers 503): asked again, the game goes on`, r.crash || after.crash || '');
  await t.context.close(); await flaky.close();
}

{ // the same package without the per-world lists: every file on its first use, as before the lists existed
  const bare = await serveSite({ root: SITE, port: 0, prefix: PREFIX, latency: LATENCY, without: 'preload.json' });
  const t = await open(newProfile());
  const world = WORLDS[0];
  const r = await startWorld(t, bare.url, world);
  // Without the lists the game thread runs at once and fetches each file when the game asks for it.
  // Comparable moment: when it has fetched nearly as many files as the world's start list holds
  // (a few of that list are files the page keeps itself, such as the player's own).
  const wanted = lists.common.length + lists.worlds[world].start.length - 5;
  const t0 = Date.now();
  const reached = await t.page.waitForFunction((n) => window.__crash || (window.RecompGame.stats && window.RecompGame.stats.fetches >= n), wanted, { timeout: 180000, polling: 250 }).then(() => true, () => false);
  const loaded = r.ms + (Date.now() - t0);
  const n = dataRequests(bare.log).length;
  timing.without = { world, running: r.ms, loaded: reached ? loaded : null, requests: n };
  console.log(`     for comparison, world ${world} without the lists: the waiting game thread fetched ${n} files one after the other${reached ? `, the last of its start files after ${(loaded / 1000).toFixed(1)} s` : ' and was not done after 3 minutes'}; with the lists they were all there after ${(timing[world].first / 1000).toFixed(1)} s`);
  check(!r.crash, 'without preload.json the game still starts (every file on its first use)', r.crash || '');
  await t.context.close();
  await bare.close();
}
fs.writeFileSync(path.join(OUT, 'timing.json'), JSON.stringify({ latency: LATENCY, cpus: os.cpus().length, timing }, null, 1));
for (const dir of profiles) fs.rmSync(dir, { recursive: true, force: true });
console.log(failed ? `\n${failed} check(s) FAILED` : '\nall checks passed');
process.exit(failed ? 1 : 0);
