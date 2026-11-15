#!/usr/bin/env node
// Checks a web server that hosts the packaged site against the package on this computer
// (dist/site): is every file there, whole, and sent the way the port needs it? Run it against the
// real server before and after the switch (docs/hosting.md). It only asks (GET and HEAD); it
// changes nothing, on the server or here.
//   - the build on the server is the build in dist/site
//   - the page: isolation headers, checked with the server every time, the same bytes
//   - every file of the package: answered 200 with its size (so: uploaded, readable, no rule of the
//     server in its way, whatever its extension or name), with the cache rule of its folder
//   - scripts and game module: the same bytes as here
//   - the .gz copies are used (a note when they are not: the site works without)
//   - a file that is not there: 404, not to be kept
//   - with --classic: the JavaScript port at classic/ as it was
//   - with --burst: what a visitor's browser asks for when a world starts (its start files,
//     sixteen at a time), twice, to see whether the server refuses any of it
//   node tools/site-check.mjs --url https://games.nostalgiarealm.com/redcatspookkasteel/ [--site dist/site]
//        [--parallel 8] [--classic] [--burst] [--world 1]
import fs from 'node:fs';
import path from 'node:path';
import http from 'node:http';
import https from 'node:https';
import zlib from 'node:zlib';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const args = process.argv.slice(2);
const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
const has = (n) => args.includes('--' + n);
const SITE = path.resolve(ROOT, opt('site', 'dist/site'));
const PARALLEL = Number(opt('parallel', 8));
let base = opt('url', null);
if (!base) { console.error('usage: node tools/site-check.mjs --url https://host/path/ [--classic] [--burst]'); process.exit(2); }
if (!base.endsWith('/')) base += '/';
const BASE = new URL(base);
const mod = BASE.protocol === 'https:' ? https : http;
const agent = new mod.Agent({ keepAlive: true, maxSockets: Math.max(PARALLEL, 16) });

let failed = 0, notes = 0;
const check = (ok, what, detail = '') => { if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); return ok; };
const note = (what) => { notes++; console.log('note ' + what); };
const sha = (b) => createHash('sha256').update(b).digest('hex');
const mb = (n) => (n / 1048576).toFixed(1) + ' MB';
const enc = (rel) => rel.split('/').map(encodeURIComponent).join('/');

/** One request. encoding: what the client says it accepts. body: keep the answer's bytes (unpacked when sent as gzip). */
const ask = (method, target, { encoding = 'identity', body = false } = {}) => new Promise((resolve) => {
  const req = mod.request(target, { method, agent, timeout: 60000, headers: { 'Accept-Encoding': encoding, 'User-Agent': 'site-check' } }, (res) => {
    const chunks = [];
    res.on('data', (c) => { if (body) chunks.push(c); });
    res.on('end', () => {
      let bytes = Buffer.concat(chunks);
      if (body && res.headers['content-encoding'] === 'gzip') { try { bytes = zlib.gunzipSync(bytes); } catch (e) { bytes = Buffer.alloc(0); } }
      resolve({ status: res.statusCode, headers: res.headers, body: bytes, version: res.httpVersion });
    });
    res.on('error', (e) => resolve({ status: 0, headers: {}, error: e.message, body: Buffer.alloc(0) }));
  });
  req.on('timeout', () => req.destroy(new Error('no answer in 60 s')));
  req.on('error', (e) => resolve({ status: 0, headers: {}, error: e.message, body: Buffer.alloc(0) }));
  req.end();
});
const at = (rel) => new URL(enc(rel), BASE);
/** Runs fn over items, `n` at a time. */
const pool = async (items, n, fn) => { let k = 0; const out = new Array(items.length); await Promise.all(Array.from({ length: n }, async () => { while (k < items.length) { const i = k++; out[i] = await fn(items[i], i); } })); return out; };

if (!fs.existsSync(path.join(SITE, 'build.json'))) { console.error(SITE + ' is not a packaged site (npm run package)'); process.exit(2); }
const build = JSON.parse(fs.readFileSync(path.join(SITE, 'build.json'), 'utf8'));
const APP = `app/${build.revision}/`;
const walk = (dir, rel = '') => fs.readdirSync(dir, { withFileTypes: true }).flatMap((e) => (e.isDirectory() ? walk(path.join(dir, e.name), rel ? rel + '/' + e.name : e.name) : [rel ? rel + '/' + e.name : e.name]));
const all = walk(SITE);
const files = all.filter((f) => !f.endsWith('.gz'));
const local = (rel) => fs.readFileSync(path.join(SITE, rel));
const size = (rel) => fs.statSync(path.join(SITE, rel)).size;
const policy = (rel) => (/^(app|data)\//.test(rel) ? 'public, max-age=31536000, immutable' : /^assets\//.test(rel) ? 'public, max-age=86400' : 'no-cache');
const isolated = (r) => r.headers['cross-origin-opener-policy'] === 'same-origin' && r.headers['cross-origin-embedder-policy'] === 'require-corp';
const why = (r) => (r.status ? `${r.status}` : r.error || 'no answer');

console.log(`${base}  against ${SITE} (revision ${build.revision}, ${files.length} files)`);
const t0 = Date.now();

// --- the server and the build --------------------------------------------------------------------
let r = await ask('GET', at('build.json'), { body: true });
if (!check(r.status === 200, 'the address answers: build.json is there', why(r))) { console.log('\nnothing else can be checked'); process.exit(1); }
let remote = null;
try { remote = JSON.parse(r.body.toString('utf8')); } catch (e) { remote = null; }
check(remote && remote.revision === build.revision, `the server has the build of dist/site (revision ${build.revision})`, remote ? 'the server has ' + remote.revision : 'build.json is not what this tool wrote');
console.log(`     server: ${r.headers.server || 'not named'}`);

// --- the page -------------------------------------------------------------------------------------
r = await ask('GET', BASE, { encoding: 'gzip', body: true });
check(r.status === 200 && /text\/html/.test(r.headers['content-type'] || ''), 'the page: 200, text/html', `${why(r)} ${r.headers['content-type'] || ''}`);
check(isolated(r), 'the page: the two isolation headers (without them the game does not start)', `COOP ${r.headers['cross-origin-opener-policy'] || 'none'}, COEP ${r.headers['cross-origin-embedder-policy'] || 'none'}`);
check(/no-cache/.test(r.headers['cache-control'] || '') && !/max-age=[1-9]|immutable/.test(r.headers['cache-control'] || ''), 'the page: checked with the server at every visit (no-cache)', r.headers['cache-control'] || 'no Cache-Control');
check(sha(r.body) === sha(local('index.html')), 'the page: the bytes of dist/site/index.html');
{ const bare = new URL(BASE); bare.pathname = bare.pathname.replace(/\/$/, ''); r = await ask('GET', bare);
  check((r.status === 301 || r.status === 302 || r.status === 308) && /\/$/.test(String(r.headers.location || '').split('?')[0]), 'the address without its slash is sent on to the one with it', `${why(r)} ${r.headers.location || ''}`); }

// --- every file -----------------------------------------------------------------------------------
const heads = await pool(files, PARALLEL, async (rel) => ({ rel, r: await ask('HEAD', at(rel)) }));
const report = (list, what) => { for (const x of list.slice(0, 8)) console.log(`       ${x.rel}: ${what(x)}`); if (list.length > 8) console.log(`       … and ${list.length - 8} more`); };
{
  const refused = heads.filter((x) => x.r.status === 429 || x.r.status >= 500 || x.r.status === 0);
  const missing = heads.filter((x) => x.r.status !== 200 && !refused.includes(x));
  check(missing.length === 0, `all ${files.length} files are answered with 200 (${mb(files.reduce((s, f) => s + size(f), 0))})`, missing.length ? `${missing.length} are not` : '');
  report(missing, (x) => why(x.r));
  const byExt = {}; for (const x of missing) { const e = path.extname(x.rel).toLowerCase() || '(none)'; byExt[e] = (byExt[e] || 0) + 1; }
  if (missing.length) console.log('       by extension: ' + Object.entries(byExt).map(([e, n]) => `${e} ${n}`).join(', '));
  check(refused.length === 0, 'the server refused none of these requests (429, 5xx or no answer)', refused.length ? `${refused.length} refused, e.g. ${refused[0].rel}: ${why(refused[0].r)}` : '');
  const ok = heads.filter((x) => x.r.status === 200);
  const wrongSize = ok.filter((x) => Number(x.r.headers['content-length']) !== size(x.rel) || x.r.headers['content-encoding']);
  check(wrongSize.length === 0, 'each has the size it has here, when asked for as it is', wrongSize.length ? `${wrongSize.length} differ` : '');
  report(wrongSize, (x) => `${x.r.headers['content-length']} bytes${x.r.headers['content-encoding'] ? ' as ' + x.r.headers['content-encoding'] : ''}, here ${size(x.rel)}`);
  const noIso = ok.filter((x) => !isolated(x.r));
  check(noIso.length === 0, 'each carries the two isolation headers (the game thread and its scripts need them too)', noIso.length ? `${noIso.length} do not, e.g. ${noIso[0].rel}` : '');
  const wrongCache = ok.filter((x) => (x.r.headers['cache-control'] || '') !== policy(x.rel));
  const strict = wrongCache.filter((x) => policy(x.rel) === 'no-cache');                      // index.html, build.json kept too long: a real fault
  check(strict.length === 0, 'index.html and build.json are not to be kept without asking', strict.map((x) => `${x.rel}: ${x.r.headers['cache-control'] || 'no Cache-Control'}`).join('; '));
  const loose = wrongCache.filter((x) => !strict.includes(x));
  if (loose.length) note(`${loose.length} files under app/, data/ or assets/ do not have their folder's cache rule (e.g. ${loose[0].rel}: "${loose[0].r.headers['cache-control'] || 'none'}", expected "${policy(loose[0].rel)}"). The site works; browsers then ask the server about these files more often than needed.`);
  else check(true, 'app/ and data/ may be kept for good, assets/ for a day');
  const jsType = ok.filter((x) => x.rel.endsWith('.js') && !/javascript/.test(x.r.headers['content-type'] || ''));
  check(jsType.length === 0, 'scripts are sent as JavaScript (a browser refuses a module of another type)', jsType.length ? `${jsType[0].rel}: ${jsType[0].r.headers['content-type']}` : '');
}

// --- the same bytes: scripts and game module, and some of the game's files -------------------------
{
  const code = files.filter((f) => f.startsWith(APP));
  const sample = files.filter((f) => f.startsWith('data/')).filter((f, i, a) => i % Math.ceil(a.length / 40) === 0);
  const got = await pool([...code, ...sample], PARALLEL, async (rel) => ({ rel, r: await ask('GET', at(rel), { encoding: 'gzip', body: true }) }));
  const differ = got.filter((x) => x.r.status !== 200 || sha(x.r.body) !== sha(local(x.rel)));
  check(differ.length === 0, `the ${code.length} files under ${APP} and ${sample.length} of the game's files hold the same bytes as here`, differ.slice(0, 4).map((x) => x.rel).join(' '));
  const withCopy = got.filter((x) => fs.existsSync(path.join(SITE, x.rel + '.gz')));
  const packed = withCopy.filter((x) => x.r.headers['content-encoding'] === 'gzip');
  const wasm = got.find((x) => x.rel.endsWith('spook.wasm'));
  if (packed.length === withCopy.length) check(true, `the .gz copies are used (${packed.length} of ${withCopy.length} asked for; the game module travels as ${mb(Number(wasm.r.headers['content-length']) || 0)})`);
  else note(`the .gz copies are not used for ${withCopy.length - packed.length} of ${withCopy.length} files asked for (gzip_static is off or its module is missing). The site works; the game module then travels as ${mb(size(wasm.rel))} instead of ${mb(size(wasm.rel + '.gz'))}.`);
}

// --- what is not there ----------------------------------------------------------------------------
r = await ask('GET', at(APP + 'source/web/nothing-here.js'));
check(r.status === 404 && !/max-age=[1-9]|immutable/.test(r.headers['cache-control'] || ''), 'a script that is not there: 404, and not to be kept', `${why(r)} ${r.headers['cache-control'] || ''}`);

// --- the JavaScript port at classic/ --------------------------------------------------------------
r = await ask('GET', at('classic/index.html'), { encoding: 'gzip', body: true });
if (has('classic') || r.status === 200) {
  const OLD = path.resolve(ROOT, '../RCSPOOK_NEW');
  check(r.status === 200, 'classic/: the JavaScript port answers (the page then offers it for a saved game at its exact place)', why(r));
  check(/no-cache/.test(r.headers['cache-control'] || ''), 'classic/: checked with the server at every visit, as before', r.headers['cache-control'] || 'no Cache-Control');
  if (fs.existsSync(path.join(OLD, 'index.html'))) {
    check(sha(r.body) === sha(fs.readFileSync(path.join(OLD, 'index.html'))), 'classic/: its page is the one in ../RCSPOOK_NEW');
    const olds = ['src/game.bundle.js', 'node_modules/three/build/three.module.js', 'data/levels/lvl00a/level.json', 'assets/media/intronl.webm'].filter((f) => fs.existsSync(path.join(OLD, f)));
    const got = await pool(olds, 4, async (rel) => ({ rel, r: await ask('HEAD', at('classic/' + rel)) }));
    const bad = got.filter((x) => x.r.status !== 200 || Number(x.r.headers['content-length']) !== fs.statSync(path.join(OLD, x.rel)).size);
    check(bad.length === 0, `classic/: its bundle, Three.js, a level and a movie are there at their sizes (${olds.length} files)`, bad.map((x) => `${x.rel}: ${why(x.r)}`).join('; '));
  }
} else note('no classic/ at this address (expected before the switch; after it, run with --classic)');

// --- a world's start, as a browser asks for it ----------------------------------------------------
if (has('burst')) {
  const lists = JSON.parse(local(APP + 'game/preload.json').toString('utf8'));
  const world = String(opt('world', 1));
  const names = [...lists.common, ...lists.worlds[world].start].map((n) => 'data/' + n);
  for (const round of [1, 2]) {
    const t = Date.now();
    const got = await pool(names, 16, async (rel) => ({ rel, r: await ask('GET', at(rel), { encoding: 'gzip', body: true }) }));
    const refused = got.filter((x) => x.r.status !== 200);
    const bytes = got.reduce((s, x) => s + (Number(x.r.headers['content-length']) || 0), 0);
    check(refused.length === 0, `start of world ${world}, round ${round}: ${names.length} files, sixteen at a time, all answered (${mb(bytes)} in ${((Date.now() - t) / 1000).toFixed(1)} s)`, refused.length ? `${refused.length} not answered, e.g. ${refused[0].rel}: ${why(refused[0].r)}` : '');
  }
}

agent.destroy();
console.log(`\n${failed ? failed + ' check(s) FAILED' : 'all checks passed'}${notes ? `, ${notes} note(s)` : ''}  (${((Date.now() - t0) / 1000).toFixed(0)} s)`);
process.exit(failed ? 1 : 0);
