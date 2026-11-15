#!/usr/bin/env node
// Smoke check of the Android app's DEBUG build on a running emulator or a connected phone: starts a
// world, asks the page what it has (isolation, shared memory, WebGL 2 in a worker, frames) and saves a
// screenshot. Not a test suite, and no proof of how a phone performs.
//
//   node tools/android-check.mjs [--serial emulator-5554] [--apk dist/android/2.0.0/…-debug-x86_64.apk] [--world 1] [--wait 25] [--out tools/out/android/check]
//
// --apk installs that file first (adb install -r). The page is reached through the app's own server
// (adb forward tcp:28517): a debug build runs scripts that are sent to /__android/debug/eval, a release
// build does not have that address. Start the emulator yourself, without sound if that matters:
//   ~/Android/Sdk/emulator/emulator -avd <name> -no-window -no-audio -no-snapshot-save
import { execFileSync } from 'node:child_process';
import fs from 'node:fs';
import os from 'node:os';
import path from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (name, def) => { const k = process.argv.indexOf('--' + name); return k < 0 ? def : process.argv[k + 1]; };
const ADB = path.join(process.env.ANDROID_HOME || path.join(os.homedir(), 'Android/Sdk'), 'platform-tools/adb');
const serial = opt('serial', '');
const adb = (...args) => execFileSync(ADB, [...(serial ? ['-s', serial] : []), ...args], { encoding: 'utf8', maxBuffer: 64 << 20 });
const APP = 'com.nostalgiarealm.redcatspookkasteel.debug', PORT = 28517;
const out = path.resolve(opt('out', path.join(ROOT, 'tools/out/android/check')));
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
fs.mkdirSync(out, { recursive: true });

const page = async (code) => {
  const r = await fetch(`http://127.0.0.1:${PORT}/__android/debug/eval`, { method: 'POST', body: code });
  const j = await r.json();
  if (j.error) throw new Error(j.error);
  return j.value;
};

if (opt('apk', '')) console.log('install:', adb('install', '-r', path.resolve(opt('apk'))).trim().split('\n').pop());
console.log('device:', adb('shell', 'getprop', 'ro.product.model').trim(), '· Android', adb('shell', 'getprop', 'ro.build.version.release').trim(), '·', adb('shell', 'getprop', 'ro.product.cpu.abi').trim());
adb('forward', `tcp:${PORT}`, `tcp:${PORT}`);
adb('shell', 'am', 'force-stop', APP);
adb('shell', 'am', 'start', '-n', `${APP}/com.nostalgiarealm.redcatspookkasteel.MainActivity`, '-e', 'query', `'autostart=1&world=${Number(opt('world', 1))}'`);
await sleep(Number(opt('wait', 25)) * 1000);

const GAME = `const src = [...document.querySelectorAll('script[type=module]')].map((s) => s.src).find((s) => s.endsWith('/web/main.js')); const { game } = await import(src.replace('main.js', 'game.js'));`;
const has = await page(`${GAME}
  const w = new Worker(URL.createObjectURL(new Blob(["onmessage = () => { let r; try { const gl = new OffscreenCanvas(8, 8).getContext('webgl2'); const d = gl && gl.getExtension('WEBGL_debug_renderer_info'); r = gl ? (d ? gl.getParameter(d.UNMASKED_RENDERER_WEBGL) : 'yes') : 'no'; } catch (e) { r = 'throws ' + e.message; } postMessage({ isolated: self.crossOriginIsolated, webgl2: r }); }"], { type: 'text/javascript' })));
  const worker = await new Promise((res) => { w.onmessage = (e) => res(e.data); w.postMessage(0); setTimeout(() => res('no answer'), 5000); });
  return { userAgent: navigator.userAgent, address: location.origin, crossOriginIsolated: self.crossOriginIsolated, SharedArrayBuffer: typeof SharedArrayBuffer, worker,
    unsupportedReason: game.unsupportedReason(), window: innerWidth + 'x' + innerHeight + ' @' + devicePixelRatio.toFixed(2), touchControls: document.documentElement.classList.contains('touch-shown') };`);
console.log(JSON.stringify(has, null, 1));
const stats = await page(`${GAME}
  const seen = []; const old = game.onStats; game.onStats = (s) => { seen.push(s); if (old) old(s); };
  await new Promise((r) => setTimeout(r, 5500)); game.onStats = old;
  return { running: game.running, paused: game.paused, world: seen.some((s) => s.world), fps: seen.map((s) => s.fps), drawsPerSecond: seen.map((s) => s.draws), picture: seen.length ? seen[0].width + 'x' + seen[0].height : '', files: seen.length ? seen[seen.length - 1].fetches : 0 };`);
console.log(JSON.stringify(stats));

const shot = path.join(out, `world${opt('world', 1)}.png`);
fs.writeFileSync(shot, execFileSync(ADB, [...(serial ? ['-s', serial] : []), 'exec-out', 'screencap', '-p'], { maxBuffer: 64 << 20 }));
console.log('screenshot:', shot);
let pss = 0;
for (const line of adb('shell', 'ps', '-A', '-o', 'PID,NAME').split('\n').filter((l) => l.includes(APP))) {
  const m = /TOTAL PSS:\s+(\d+)/.exec(adb('shell', 'dumpsys', 'meminfo', line.trim().split(/\s+/)[0]));
  if (m) pss += Number(m[1]);
}
console.log(`memory: ${(pss / 1024).toFixed(0)} MB (PSS, all processes of the app)`);
const ok = has.crossOriginIsolated && has.unsupportedReason === null && stats.running && stats.world && stats.fps.some((f) => f > 0);
console.log(ok ? 'world runs' : 'FAILED: no running world');
process.exit(ok ? 0 : 1);
