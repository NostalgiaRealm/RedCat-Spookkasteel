#!/usr/bin/env node
// Builds the desktop packages of this port: the packaged site (dist/site) inside the Electron
// shell of electron/, for the six targets the JavaScript port's releases carry, each as a ZIP
// with that port's names and layout (../RCSPOOK_NEW/PUBLISH_CURRENT_BUILD, step 2):
//
//   dist/desktop/RedCat-Spookkasteel-<version>-linux-x64.zip        linux-unpacked/
//   dist/desktop/RedCat-Spookkasteel-<version>-linux-arm64.zip      linux-arm64-unpacked/
//   dist/desktop/RedCat-Spookkasteel-<version>-windows-x64.zip      win-unpacked/
//   dist/desktop/RedCat-Spookkasteel-<version>-windows-arm64.zip    win-arm64-unpacked/
//   dist/desktop/RedCat-Spookkasteel-<version>-mac-x64.zip          mac/RedCat Spookkasteel.app
//   dist/desktop/RedCat-Spookkasteel-<version>-mac-arm64.zip        mac-arm64/RedCat Spookkasteel.app
//   dist/desktop/SHA256SUMS.txt                                      the lines of those ZIPs
//   dist/desktop/unpacked/                                           what the ZIPs were made from
//
// Electron and electron-builder are not installed in this project: they are taken from the
// JavaScript port's node_modules (REDCAT_DESKTOP_TOOLS names another folder), which is only read.
// The builder fetches the Electron of a target it has not built before into ~/.cache/electron.
// Windows packages get their icon through Wine. Nothing is signed, uploaded or published.
//
//   node tools/package-desktop.mjs [--version 2.0.0] [--only linux-x64,mac-arm64] [--no-site] [--no-zip]
//
// --version (or REDCAT_PACKAGE_VERSION) defaults to the version in package.json. The site is built
// from the source for this (tools/package.mjs into tools/out/desktop/site-build, without .gz
// copies; dist/site is not touched); --no-site uses the one built the last time.
import fs from 'node:fs';
import path from 'node:path';
import { createHash } from 'node:crypto';
import { createRequire } from 'node:module';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const TOOLS = path.resolve(process.env.REDCAT_DESKTOP_TOOLS || path.join(ROOT, '../RCSPOOK_NEW/node_modules'));
const ICONS = path.join(process.env.RC_MENU_ASSETS || input('assets'), 'icons');
const args = process.argv.slice(2);
const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
const has = (n) => args.includes('--' + n);
const fail = (message) => { console.error('package-desktop: ' + message); process.exit(1); };
const mb = (n) => (n / 1048576).toFixed(1) + ' MB';

const pkg = JSON.parse(fs.readFileSync(path.join(ROOT, 'package.json'), 'utf8'));
const version = String(opt('version', process.env.REDCAT_PACKAGE_VERSION || pkg.version)).trim();
if (!/^(0|[1-9]\d*)\.(0|[1-9]\d*)\.(0|[1-9]\d*)$/.test(version) || version.split('.').some((part) => Number(part) > 65535)) fail('the version must be three dot-separated integers from 0 to 65535, not "' + version + '"');

// name in the ZIP's file name, the folder electron-builder writes and the ZIP holds
const TARGETS = {
  'linux-x64': { platform: 'LINUX', arch: 'x64', dir: 'linux-unpacked' },
  'linux-arm64': { platform: 'LINUX', arch: 'arm64', dir: 'linux-arm64-unpacked' },
  'windows-x64': { platform: 'WINDOWS', arch: 'x64', dir: 'win-unpacked' },
  'windows-arm64': { platform: 'WINDOWS', arch: 'arm64', dir: 'win-arm64-unpacked' },
  'mac-x64': { platform: 'MAC', arch: 'x64', dir: 'mac' },
  'mac-arm64': { platform: 'MAC', arch: 'arm64', dir: 'mac-arm64' },
};
const only = opt('only', '') ? opt('only').split(',').map((s) => s.trim()).filter(Boolean) : Object.keys(TARGETS);
for (const name of only) if (!TARGETS[name]) fail(`unknown target "${name}"; choose from ${Object.keys(TARGETS).join(', ')}`);

const OUT = path.join(ROOT, 'dist/desktop');
const UNPACKED = path.join(OUT, 'unpacked');
const STAGE = path.join(ROOT, 'tools/out/desktop/stage');
const SITE = path.join(ROOT, 'tools/out/desktop/site-build/site');          // this tool's own build of the site: dist/site is left as it is

if (!fs.existsSync(path.join(TOOLS, 'electron-builder/package.json')) || !fs.existsSync(path.join(TOOLS, 'electron/package.json'))) fail('electron and electron-builder were not found in ' + TOOLS + ' (REDCAT_DESKTOP_TOOLS names the node_modules folder that has them)');
const tools = createRequire(path.join(TOOLS, 'x.js'));
const electronVersion = JSON.parse(fs.readFileSync(path.join(TOOLS, 'electron/package.json'), 'utf8')).version;
const { build, createTargets, Platform } = tools('electron-builder');

// --- the site -------------------------------------------------------------------------------------
if (!has('no-site')) {
  const made = spawnSync(process.execPath, [path.join(ROOT, 'tools/package.mjs'), '--no-gzip', '--out', 'tools/out/desktop/site-build'], { cwd: ROOT, stdio: 'inherit' });
  if (made.status !== 0) fail('tools/package.mjs failed; no desktop package was built');
}
if (!fs.existsSync(path.join(SITE, 'build.json'))) fail(SITE + ' is not there: run without --no-site');
const siteFrom = SITE;
const site = JSON.parse(fs.readFileSync(path.join(siteFrom, 'build.json'), 'utf8'));

// --- what goes into the app: tools/out/desktop/stage ------------------------------------------------
fs.rmSync(STAGE, { recursive: true, force: true });
let files = 0, bytes = 0;
const copyTree = (from, to, skip = () => false) => {
  fs.mkdirSync(to, { recursive: true });
  for (const e of fs.readdirSync(from, { withFileTypes: true })) {
    const a = path.join(from, e.name), b = path.join(to, e.name);
    if (e.isDirectory()) copyTree(a, b, skip);
    else if (e.isFile() && !skip(e.name)) { fs.copyFileSync(a, b, fs.constants.COPYFILE_FICLONE); files++; bytes += fs.statSync(b).size; }
  }
};
copyTree(siteFrom, path.join(STAGE, 'site'), (name) => name.endsWith('.gz'));          // the .gz copies are for a web server
copyTree(path.join(ROOT, 'electron'), path.join(STAGE, 'electron'));
fs.mkdirSync(path.join(STAGE, 'assets/icons'), { recursive: true });
for (const name of ['redcat.png', 'redcat.ico', 'redcat.icns']) {
  if (!fs.existsSync(path.join(ICONS, name))) fail('missing icon ' + path.join(ICONS, name));
  fs.copyFileSync(path.join(ICONS, name), path.join(STAGE, 'assets/icons', name));
}
// The package name is the JavaScript port's: Electron derives names of its own from it, and
// electron/main.cjs keeps that port's profile folder (the same name) whatever stands here.
fs.writeFileSync(path.join(STAGE, 'package.json'), JSON.stringify({
  name: 'redcat-spookkasteel-port', version, private: true,
  description: 'RedCat Spookkasteel: the original game module recompiled to WebAssembly, in a desktop window',
  author: 'RedCat portable reconstruction contributors',
  main: 'electron/main.cjs',
  redcat: { port: pkg.name, siteRevision: site.revision },
}, null, 2) + '\n');

// The JavaScript port's configuration (the "build" of its package.json), with this port's files.
const config = {
  appId: 'local.redcat.spookkasteel',
  productName: 'RedCat Spookkasteel',
  asar: true,
  electronVersion,
  npmRebuild: false,
  directories: { output: UNPACKED },
  files: ['package.json', 'electron/**/*', 'assets/**/*', 'site/**/*'],
  linux: { target: 'dir', category: 'Game', executableName: 'redcat-spookkasteel', icon: 'assets/icons/redcat.png' },
  win: { target: 'dir', signExecutable: false, icon: 'assets/icons/redcat.ico' },
  mac: { icon: 'assets/icons/redcat.icns', notarize: false },
};

// --- the six packages -------------------------------------------------------------------------------
fs.mkdirSync(OUT, { recursive: true });
const zipName = (name) => `RedCat-Spookkasteel-${version}-${name}.zip`;
const sha256 = (file) => { const h = createHash('sha256'), fd = fs.openSync(file, 'r'), buf = Buffer.allocUnsafe(1 << 20); for (let n; (n = fs.readSync(fd, buf, 0, buf.length, null)) > 0;) h.update(buf.subarray(0, n)); fs.closeSync(fd); return h.digest('hex'); };
console.log(`RedCat Spookkasteel ${version}: site revision ${site.revision} (${files} files, ${mb(bytes)}), Electron ${electronVersion}, targets ${only.join(', ')}`);
for (const name of only) {
  const t = TARGETS[name], dir = path.join(UNPACKED, t.dir), zip = path.join(OUT, zipName(name));
  fs.rmSync(dir, { recursive: true, force: true });
  fs.rmSync(zip, { force: true });          // zip adds to an archive that exists
  await build({ projectDir: STAGE, targets: createTargets([Platform[t.platform]], 'dir', t.arch), publish: 'never', config: structuredClone(config) });          // the builder changes the object it is given
  if (!fs.existsSync(dir) || !fs.readdirSync(dir).length) fail(`electron-builder left no ${dir}`);
  if (has('no-zip')) continue;
  // -y keeps the symbolic links of a macOS bundle's frameworks
  const zipped = spawnSync('zip', ['-q', '-r', ...(t.platform === 'MAC' ? ['-y'] : []), zip, t.dir + '/'], { cwd: UNPACKED, stdio: 'inherit' });
  if (zipped.status !== 0) fail(`zip failed for ${name}`);
  console.log(`  ${zipName(name)}  ${mb(fs.statSync(zip).size)}`);
}

// --- checksums: every ZIP of this version that is there -----------------------------------------------
if (!has('no-zip')) {
  const zips = Object.keys(TARGETS).map(zipName).filter((f) => fs.existsSync(path.join(OUT, f))).sort();
  const lines = zips.map((f) => `${sha256(path.join(OUT, f))}  ${f}`);
  fs.writeFileSync(path.join(OUT, 'SHA256SUMS.txt'), lines.join('\n') + '\n');
  console.log(`${path.join(OUT, 'SHA256SUMS.txt')}\n${lines.join('\n')}`);
  if (zips.length < Object.keys(TARGETS).length) console.log(`note: ${zips.length} of ${Object.keys(TARGETS).length} packages of version ${version} are in ${OUT}`);
}
