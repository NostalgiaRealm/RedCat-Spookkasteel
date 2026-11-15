#!/usr/bin/env node
// Builds the folder a web server needs to host this port: dist/site/. Upload its contents to the
// folder that the address of the game points at (docs/hosting.md has the steps and the server
// settings; the dist/nginx-*.conf files are the server configuration that goes with it).
//
//   dist/site/
//     index.html, build.json     the page; always checked with the server
//     app/<revision>/source/     the scripts and styles of the page and of the game thread
//     app/<revision>/game/       the recompiled game module and its lists
//     assets/                    the menu's artwork, voices, music, movies and help text
//     data/                      the original game files the game module reads
//
// <revision> is made from the content of everything under it: a build with other scripts or
// another game module gets another folder name, so a browser never mixes the files of two builds,
// and a page that is open during an upload keeps finding its own files. Text files get a .gz copy
// next to them where that is at least a tenth smaller (nginx: gzip_static).
//
// Read only from: this project, RC_ORIGINALS (default ../RCSPOOK_NEW/RC_ORIGINAL_DECOMPILED/originals)
// and RC_MENU_ASSETS (default ../RCSPOOK_NEW/assets). Nothing is uploaded or published.
//
//   node tools/package.mjs [--out dist] [--no-gzip]
import fs from 'node:fs';
import path from 'node:path';
import zlib from 'node:zlib';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const ORIGINALS = process.env.RC_ORIGINALS || input('RC_ORIGINAL_DECOMPILED/originals');
const MENU_ASSETS = process.env.RC_MENU_ASSETS || input('assets');
const args = process.argv.slice(2);
const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
const has = (n) => args.includes('--' + n);
const OUT = path.resolve(ROOT, opt('out', 'dist'));
const FINAL = path.join(OUT, 'site');
const SITE = path.join(OUT, 'site.building');          // built here, then moved into place: a build that fails leaves the last good site/
const posix = path.posix;
const fail = (message) => { console.error('package: ' + message); process.exit(1); };
const mb = (n) => (n / 1048576).toFixed(1) + ' MB';

// --- what goes in ------------------------------------------------------------------------------
const GAME_FILES = ['spook.wasm', 'spook.meta.json', 'spook.codemap.bin', 'files.json', 'preload.json'];
// The menu's files under RC_MENU_ASSETS (docs/menu.md, "Artwork, voices, music, movies, help text").
const ASSET_RULES = [
  ['menu', /\.png$/i],
  ['voices', /^(rcmn\d+|mn_red\d+|mn_in\d+)\.wav$/i],
  ['audio', /^menumuz\.wav$/i],
  ['media', /^(davilex|intronl|outronl)\.(webm|mp4)$/i],
  ['help', /^manifest\.json$/i],
  ['icons', /^(redcat\.ico|apple-touch-icon\.png|kde-touchscreen\.svg|KDE-TOUCHSCREEN\.md)$/],
  ['icons/licenses/breeze-icons', /./],
];
const GZIP = /\.(html|js|css|json|svg|wasm|bin|bsp|act|bmp|ini|dso|wps|ds|wav|tga|adb|ghc|max|txt|md)$/i;

for (const f of GAME_FILES) if (!fs.existsSync(path.join(ROOT, 'public/game', f))) fail(`public/game/${f} is missing (npm run recompile; node tools/build-manifest.mjs; node tools/build-preload.mjs)`);
if (!fs.existsSync(ORIGINALS)) fail('the original game files were not found at ' + ORIGINALS);
if (!fs.existsSync(MENU_ASSETS)) fail('the menu assets were not found at ' + MENU_ASSETS);

// Only a folder this tool made is replaced.
if (fs.existsSync(FINAL) && !fs.existsSync(path.join(FINAL, 'build.json')) && fs.readdirSync(FINAL).length) fail(FINAL + ' exists and was not made by this tool; remove it or choose another --out');
fs.rmSync(SITE, { recursive: true, force: true });

const walk = (dir, rel = '') => fs.readdirSync(dir, { withFileTypes: true }).sort((a, b) => (a.name < b.name ? -1 : 1)).flatMap((e) => (e.isDirectory() ? walk(path.join(dir, e.name), rel ? rel + '/' + e.name : e.name) : [rel ? rel + '/' + e.name : e.name]));
const written = [];          // [path below site, bytes]
const put = (rel, data) => { const to = path.join(SITE, rel); fs.mkdirSync(path.dirname(to), { recursive: true }); fs.writeFileSync(to, data); written.push([rel, data.length]); };
const copy = (from, rel) => { const to = path.join(SITE, rel); fs.mkdirSync(path.dirname(to), { recursive: true }); fs.copyFileSync(from, to, fs.constants.COPYFILE_FICLONE); written.push([rel, fs.statSync(to).size]); };

// --- the scripts, styles and game module: app/<revision>/ ------------------------------------------
// A style sheet refers to the menu's artwork relative to its own place (../../assets/...). Below
// app/<revision>/ it is two folders deeper, so those references are written anew.
const moveCssUrls = (css, from, to) => css.replace(/url\(\s*(["']?)([^"')]+)\1\s*\)/g, (all, q, ref) => {
  if (/^(data:|https?:|\/|#)/.test(ref)) return all;
  const target = posix.normalize(posix.join(posix.dirname(from), ref));          // below the page's folder
  if (target.startsWith('source/')) return all;                                     // moves along with the sheet
  return `url(${q}${posix.relative(posix.dirname(to), target)}${q})`;
});
const app = new Map();       // path below app/<revision>/ -> bytes
for (const rel of walk(path.join(ROOT, 'source'))) {
  let data = fs.readFileSync(path.join(ROOT, 'source', rel));
  if (rel.endsWith('.css')) data = Buffer.from(moveCssUrls(data.toString('utf8'), 'source/' + rel, 'app/R/source/' + rel));
  app.set('source/' + rel, data);
}
for (const f of GAME_FILES) app.set('game/' + f, fs.readFileSync(path.join(ROOT, 'public/game', f)));
const hash = createHash('sha256');
for (const [rel, data] of [...app].sort((a, b) => (a[0] < b[0] ? -1 : 1))) { hash.update(rel + '\0' + data.length + '\0'); hash.update(data); }
const revision = hash.digest('hex').slice(0, 12);
for (const [rel, data] of app) put(`app/${revision}/${rel}`, data);

// --- the page -------------------------------------------------------------------------------------
let html = fs.readFileSync(path.join(ROOT, 'public/index.html'), 'utf8');
let moved = 0;
html = html.replace(/\b(src|href)="source\//g, (all, attr) => { moved++; return `${attr}="app/${revision}/source/`; });
if (!moved) fail('public/index.html refers to no file under source/');
put('index.html', Buffer.from(html));

// --- the menu's assets ------------------------------------------------------------------------------
for (const [dir, rule] of ASSET_RULES) {
  const from = path.join(MENU_ASSETS, dir);
  if (!fs.existsSync(from)) fail('missing ' + from);
  const names = fs.readdirSync(from, { withFileTypes: true }).filter((e) => e.isFile() && rule.test(e.name)).map((e) => e.name).sort();
  if (!names.length) fail(`nothing in ${from} matches ${rule}`);
  for (const name of names) copy(path.join(from, name), `assets/${dir}/${name}`);
}

// --- the original game files ------------------------------------------------------------------------
const manifest = JSON.parse(app.get('game/files.json').toString('utf8'));
if (manifest.base !== 'data/') fail(`files.json has base "${manifest.base}"; this tool lays the files out under data/`);
for (const [rel, size] of manifest.files) {
  const from = path.join(ORIGINALS, rel);
  if (!fs.existsSync(from) || fs.statSync(from).size !== size) fail(`${from} is missing or not the ${size} bytes of public/game/files.json (node tools/build-manifest.mjs; node tools/build-preload.mjs)`);
  copy(from, 'data/' + rel);
}

// --- smaller copies for the server to send ----------------------------------------------------------
let gz = 0, saved = 0;
if (!has('no-gzip')) {
  for (const [rel, size] of [...written]) {
    if (!GZIP.test(rel) || size < 1024) continue;
    const packed = zlib.gzipSync(fs.readFileSync(path.join(SITE, rel)), { level: 9 });
    if (packed.length > size * 0.9) continue;
    fs.writeFileSync(path.join(SITE, rel + '.gz'), packed);
    gz++; saved += size - packed.length;
  }
}

// --- what was built ---------------------------------------------------------------------------------
const pkg = JSON.parse(fs.readFileSync(path.join(ROOT, 'package.json'), 'utf8'));
const total = written.reduce((s, f) => s + f[1], 0);
const group = (prefix) => { const list = written.filter(([rel]) => rel.startsWith(prefix)); return { files: list.length, bytes: list.reduce((s, f) => s + f[1], 0) }; };
const build = { name: pkg.name, version: pkg.version, revision, built: new Date().toISOString(), files: written.length + 1, bytes: total, app: group('app/'), assets: group('assets/'), data: group('data/') };
fs.writeFileSync(path.join(SITE, 'build.json'), JSON.stringify(build, null, 1) + '\n');
fs.rmSync(FINAL, { recursive: true, force: true });
fs.renameSync(SITE, FINAL);
for (const f of ['nginx-redcatspookkasteel.conf', 'nginx-redcatspookkasteel-cache.conf', 'nginx-redcatspookkasteel-test.conf']) fs.copyFileSync(path.join(ROOT, 'docs', f), path.join(OUT, f));

console.log(`${FINAL}
  revision ${revision}
  app/     ${String(build.app.files).padStart(5)} files  ${mb(build.app.bytes)}
  assets/  ${String(build.assets.files).padStart(5)} files  ${mb(build.assets.bytes)}
  data/    ${String(build.data.files).padStart(5)} files  ${mb(build.data.bytes)}
  total    ${String(build.files).padStart(5)} files  ${mb(total)}${gz ? `, plus ${gz} .gz copies that save ${mb(saved)} in transfer` : ''}
Check it: node tools/package-check.mjs     Host it: docs/hosting.md`);
