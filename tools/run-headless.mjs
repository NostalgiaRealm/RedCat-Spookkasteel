#!/usr/bin/env node
// Runs the recompiled game without a browser, on a virtual clock, with scripted input.
// Uses the same host code as the browser. For development and smoke checks only.
//
//   node tools/run-headless.mjs [--seconds N] [--frames N] [--trace api,msg,win,files,debug,eh,count,sound]
//     [--sound-log file.json] [--check-sound] [--sound-wav file.wav] [--positions file.json] [--ini "file|section|key|value;..."] [--script "wait:40;hold:Up,z<3240;tap:Control_L"] [--clock-offset seconds] [--props]
//     [--subtitle-box]   the readable subtitle box of source/host/subtitles.js: the game does not draw a scene's line, and each line is printed
//     [--fixes off | name=0,name=1]   the fixes of source/host/fixes.js: 'off' is the original game, the default is every fix on
//     [--keys "ms,vk[,holdMs];ms,vk"] [--world 1..5] [--player N] [--difficulty 0..2] [--quick] [--fresh] [--out dir] [--plugin file.mjs] [--files-read file.json]
// The original files are read from ../RCSPOOK_NEW/RC_ORIGINAL_DECOMPILED/originals (never written).
// Files the game writes go to tools/out/saved and are loaded again on the next run unless --fresh.
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { createGame, GAME_DIR } from '../source/host/runtime.js';
import { RangeReader } from '../source/host/vfs.js';
import { createRecorder } from './offline-mix.mjs';
import { setIniValues } from '../source/host/ini.js';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const ORIGINALS = process.env.RC_ORIGINALS || input('RC_ORIGINAL_DECOMPILED/originals');
const args = process.argv.slice(2);
const opt = (name, def) => { const k = args.indexOf('--' + name); return k >= 0 ? args[k + 1] : def; };
const has = (name) => args.includes('--' + name);
const seconds = Number(opt('seconds', 30));
const maxFrames = Number(opt('frames', Infinity));
const outDir = path.resolve(opt('out', path.join(ROOT, 'tools/out')));
const trace = new Set(String(opt('trace', '')).split(',').filter(Boolean));
const script = [];
for (const [t, vk, hold] of String(opt('keys', '')).split(';').filter(Boolean).map((q) => q.split(',').map(Number))) script.push({ t, type: 'keydown', vk, ch: vk === 32 || vk === 13 || vk === 27 ? vk : 0 }, { t: t + (hold || 120), type: 'keyup', vk });
script.sort((a, b) => a.t - b.t);
fs.mkdirSync(outDir, { recursive: true });

// --script "wait:40;hold:Up,z<3240;hold:Left,for=0.54;tap:Control_L": steps in order. The same script
// drives the original under Wine (tools/reference-wine/refrun.py --script), so that both walk to the
// same places whatever their frame rates. Times are seconds after the first game frame.
//   wait:T            until T seconds
//   hold:Keys,for=S   hold the keys (X keysym names, joined with +) for S seconds
//   hold:Keys,x<V     hold until the player's x, y or z passes V (also x>V ...), at most max=S seconds (15)
//   tap:Keys          press for 0.15 s
//   look:DX,DY,for=S  move the mouse DX, DY pixels per second for S seconds (optionally with keys: look:DX,DY,keys=Up,for=S)
//   goto:X,Z          walk to that place: Up held, Left or Right pressed while the direction of movement
//                     (the player's velocity) is more than 6 degrees off; done within r=30 units, at most max=S seconds
const VK = { Up: 38, Down: 40, Left: 37, Right: 39, Control_L: 17, space: 32, Return: 13, Escape: 27, Alt_L: 18, Home: 36, End: 35, Delete: 46 };
const steps = String(opt('script', '')).split(';').filter(Boolean).map((q) => {
  const [cmd, rest = ''] = q.split(':'); const parts = rest.split(',');
  const st = { cmd, keys: [], until: null, dur: null, max: 15, text: q };
  if (cmd === 'wait') st.dur = Number(parts[0]);
  else if (cmd === 'look') { st.rate = [Number(parts[0]), Number(parts[1])]; st.sent = [0, 0]; parts.shift(); const k = parts.find((c) => c.startsWith('keys=')); if (k) { st.keys = k.slice(5).split('+'); parts.splice(parts.indexOf(k), 1); } }
  else if (cmd === 'goto') { st.target = [Number(parts[0]), Number(parts[1])]; st.r = 30; st.max = 20; parts.shift(); }
  else { st.keys = parts[0].split('+'); for (const k of st.keys) if (!VK[k]) throw new Error('unknown key ' + k); if (cmd === 'tap') st.dur = 0.15; }
  for (const c of parts.slice(1)) { const mm = /^(for|max|r)=([\d.]+)$/.exec(c), pp = /^([xyz])([<>])(-?[\d.]+)$/.exec(c); if (mm) st[mm[1] === 'for' ? 'dur' : mm[1]] = Number(mm[2]); else if (pp) st.until = { axis: 'xyz'.indexOf(pp[1]), less: pp[2] === '<', v: Number(pp[3]) }; else throw new Error('bad step ' + q); }
  return st;
});
const stepLog = [];
const press = (out, st, k, on) => { if (on === st.down.has(k)) return; if (on) st.down.add(k); else st.down.delete(k); out.push(on ? { type: 'keydown', vk: VK[k], ch: 0 } : { type: 'keyup', vk: VK[k] }); };
let stepAt = 0, stepStart = null, gameZero = null;
let readPlayer = () => null;      // set once the game exists
const stepEvents = () => {
  const pl = readPlayer();
  if (gameZero === null) { if (!pl || pl.state !== 3) return null; gameZero = vt; }
  const now = (vt - gameZero) / 1000, out = [];
  for (let guard = 0; guard < 8 && stepAt < steps.length; guard++) {
    const st = steps[stepAt];
    if (stepStart === null) {
      if (st.cmd === 'goto') { st.down = new Set(); press(out, st, 'Up', true); }
      else if (st.cmd !== 'wait') for (const k of st.keys) out.push({ type: 'keydown', vk: VK[k], ch: VK[k] === 32 || VK[k] === 13 || VK[k] === 27 ? VK[k] : 0 });
      stepStart = now;
      if (st.cmd !== 'wait') stepLog.push({ t: +now.toFixed(3), step: st.text, what: 'start', pos: pl ? pl.pos : null });
    }
    let done = false, why = '';
    if (st.cmd === 'wait') done = now >= st.dur;
    else if (st.cmd === 'look') {
      const el = Math.min(now - stepStart, st.dur);
      const dx = Math.round(st.rate[0] * el) - st.sent[0], dy = Math.round(st.rate[1] * el) - st.sent[1];
      if (dx || dy) { out.push({ type: 'move', dx, dy }); st.sent[0] += dx; st.sent[1] += dy; }
      done = now - stepStart >= st.dur;
    }
    else if (st.cmd === 'goto') {
      const tx = st.target[0] - (pl.pos ? pl.pos[0] : 0), tz = st.target[1] - (pl.pos ? pl.pos[2] : 0), d = Math.hypot(tx, tz);
      if (d < st.r) { done = true; why = 'reached'; } else if (now - stepStart >= st.max) { done = true; why = 'TIMEOUT'; }
      else {
        const [vx, , vz] = pl.vel || [0, 0, 0], sp = Math.hypot(vx, vz);
        let turn = '';
        if (sp > 50) { const cross = (vx * tz - vz * tx) / (sp * d), dot = (vx * tx + vz * tz) / (sp * d); if (dot < 0.9945) turn = cross < 0 ? 'Left' : 'Right'; }      // 6 degrees
        press(out, st, 'Left', turn === 'Left'); press(out, st, 'Right', turn === 'Right');
      }
      if (done) for (const k of [...st.down]) press(out, st, k, false);
    }
    else if (st.until) { const v = pl ? pl.pos[st.until.axis] : NaN; if (st.until.less ? v < st.until.v : v > st.until.v) { done = true; why = 'reached'; } else if (now - stepStart >= st.max) { done = true; why = 'TIMEOUT'; } }
    else done = now - stepStart >= st.dur;
    if (!done) break;
    if (st.cmd !== 'wait') { for (const k of st.keys) out.push({ type: 'keyup', vk: VK[k] }); stepLog.push({ t: +now.toFixed(3), step: st.text, what: 'end', why, pos: pl ? pl.pos : null }); }
    stepAt++; stepStart = null;
  }
  return out.length ? out : null;
};

let vt = 0;                 // virtual milliseconds
let frameStep = Number(opt('step', 1000 / 60));      // virtual milliseconds per presented frame; a plugin may change it (setStep)
let scriptPos = 0;
const stats = { frames: 0, messageBoxes: [] };
class Stop extends Error {}
const advance = (ms) => {
  vt += ms;
  if (vt >= seconds * 1000) throw new Stop();
};

// A crude fixed-shape rasteriser: the browser uses canvas fonts. Enough to exercise the font code.
const text = {
  metrics: (f) => ({ height: Math.round(f.height * 1.15), ascent: Math.round(f.height * 0.9), descent: Math.round(f.height * 1.15) - Math.round(f.height * 0.9) }),
  glyph: (f, code) => {
    const adv = Math.max(2, Math.round(f.height * (code === 32 ? 0.3 : 0.55)));
    if (code <= 32) return { w: 1, h: 1, ox: 0, oy: 1, adv, cov: new Uint8Array(1) };
    const w = Math.max(1, adv - 1), h = Math.max(1, Math.round(f.height * 0.7));
    const cov = new Uint8Array(w * h);
    for (let y = 0; y < h; y++) for (let x = 0; x < w; x++) if (x === 0 || y === 0 || x === w - 1 || y === h - 1 || ((x + y + code) % 4) === 0) cov[y * w + x] = 255;
    return { w, h, ox: 0, oy: h, adv, cov };
  },
};

const savedDir = path.join(outDir, 'saved');
const fresh = has('fresh');
if (fresh) fs.rmSync(savedDir, { recursive: true, force: true });
const W = Number(opt('width', 640)), H = Number(opt('height', 480));
const platform = {
  log: (s) => console.log(`[${(vt / 1000).toFixed(3)}] ${s}`),
  nowMs: () => { vt += 0.001; return vt; },
  wallClockMs: () => Date.UTC(2001, 5, 19, 12, 0, 0) + Number(opt('clock-offset', 0)) * 1000 + vt,      // --clock-offset S: another time of day, for what the game seeds from the clock
  sleep: (ms) => advance(Math.max(ms, 1)),
  screen: { width: W, height: H },
  input: {
    poll: () => {
      if (steps.length) return stepEvents();
      if (scriptPos >= script.length || script[scriptPos].t > vt) return null;
      const out = [];
      while (scriptPos < script.length && script[scriptPos].t <= vt) { const e = script[scriptPos++]; console.log(`[${(vt / 1000).toFixed(3)}] input ${JSON.stringify(e)}`); out.push(e); }
      return out;
    },
  },
  joystick: () => null,
  audio: null,       // --check-sound puts a recording sink here, see below
  text,
  render: null,
  // headless: nothing is drawn; a presented frame advances the virtual clock by a fixed step
  // (step: a scene is being skipped, source/host/skip.js: the clock goes on by that much instead)
  frame: (step) => { stats.frames++; advance(step || frameStep); if (stats.frames >= maxFrames) throw new Stop(); },
  persistFile: (p, data) => {
    if (trace.has('files')) console.log(`[persist] ${p} ${data ? data.length + ' bytes' : 'deleted'}`);
    const f = path.join(savedDir, encodeURIComponent(p));
    if (data) { fs.mkdirSync(savedDir, { recursive: true }); fs.writeFileSync(f, data); } else fs.rmSync(f, { force: true });
  },
  messageBox: (t, c, type) => { console.log(`[MessageBox] ${c}: ${t} (type ${type})`); stats.messageBoxes.push(t); return 1; },
};

// --game dir: another build of the game module (npm run recompile writes public/game; a trial build goes elsewhere with --out)
const gameDir = path.resolve(opt('game', path.join(ROOT, 'public/game')));
const meta = JSON.parse(fs.readFileSync(path.join(gameDir, 'spook.meta.json'), 'utf8'));
const wasm = await WebAssembly.compile(fs.readFileSync(path.join(gameDir, 'spook.wasm')));
const codeMap = new Uint8Array(fs.readFileSync(path.join(gameDir, 'spook.codemap.bin')));

// The installed game folder on the virtual C: drive. Files are opened lazily and read by range.
const files = [];
// --files-read file.json: every original file the game read, in the order of its first read, with the virtual time of that read
const filesRead = opt('files-read', null) ? new Map() : null;
const SKIP = /\.(dll|exe|hlp|cnt|img|ind)$/i;      // not read by the game module
const walk = (dir, rel) => {
  for (const e of fs.readdirSync(dir, { withFileTypes: true })) {
    const p = path.join(dir, e.name);
    const r = rel ? rel + '\\' + e.name : e.name;
    if (e.isDirectory()) { walk(p, r); continue; }
    if (SKIP.test(e.name)) continue;
    const size = fs.statSync(p).size;
    let fd = -1;
    const web = (rel ? rel.replace(/\\/g, '/') + '/' : '') + e.name;
    files.push({ path: GAME_DIR + '\\' + r, size, reader: new RangeReader(size, (off, len) => { if (fd < 0) fd = fs.openSync(p, 'r'); if (filesRead && !filesRead.has(web)) filesRead.set(web, { size, at: Math.round(vt) }); const b = Buffer.alloc(len); fs.readSync(fd, b, 0, len, off); return new Uint8Array(b.buffer, b.byteOffset, len); }) });
  }
};
walk(ORIGINALS, '');
if (!fresh && fs.existsSync(savedDir)) for (const f of fs.readdirSync(savedDir)) files.push({ path: decodeURIComponent(f), data: new Uint8Array(fs.readFileSync(path.join(savedDir, f))), persist: true });

const game = await createGame({ wasm, meta, codeMap, platform, files, options: { commandLine: opt('cmd', '"' + GAME_DIR + '\\RcHcGame.dat" -game'), fixes: opt('fixes', undefined), subtitleBox: has('subtitle-box'), launch: has('no-launch') ? null : { player: Number(opt('player', 1)), world: Number(opt('world', 1)), difficulty: Number(opt('difficulty', 1)), adventure: !has('quick'), screenWidth: W } } });
const { m, host } = game;
// --ini "Settings\Player1.ini|Player|Skill|1;file|section|key|value": values set after the launch settings
// and before the game starts, e.g. a player who can already shoot.
for (const q of String(opt('ini', '')).split(';').filter(Boolean)) { const [file, sec, key, val] = q.split('|'); setIniValues(game.vfs, (GAME_DIR + '\\' + file).toUpperCase(), [[sec, key, val]]); }
// --check-sound: a sink that keeps what the page's mixer (source/web/audio.js) would know about each
// buffer, starting like it does at volume 0, pan 0 and the buffer's own rate. At every play the
// mixer's view must equal the DirectSound state the game sees; a difference is a sound at the wrong level.
const soundCheck = has('check-sound') ? { view: new Map(), plays: 0, wrong: [] } : null;
// --sound-wav file: what the page's mixer would play, rendered on the virtual clock (tools/offline-mix.mjs).
const recorder = opt('sound-wav', null) ? createRecorder(() => vt) : null;
if (recorder && !soundCheck) host.audio = recorder.sink;
if (soundCheck) {
  const V = soundCheck.view;
  const get = (id) => { let b = V.get(id); if (!b) V.set(id, b = { volume: 0, pan: 0, hz: 0, rate: 0 }); return b; };
  host.audio = {
    data: (id, bytes, fmt) => { get(id).rate = fmt.rate; },
    alias: (id, of) => { get(id).rate = get(of).rate; },          // a duplicate that shares its original's samples (audio.js)
    play: (id) => {
      soundCheck.plays++;
      const v = get(id), b = [...host.dsound.buffers].find((q) => q.id === id);
      const hz = v.hz || v.rate;
      if (!b || v.volume !== b.volume || v.pan !== b.pan || hz !== b.frequency) soundCheck.wrong.push({ t: Math.round(vt), id, file: b && b.file, mixer: { volume: v.volume, pan: v.pan, hz }, game: b && { volume: b.volume, pan: b.pan, hz: b.frequency } });
    },
    stop: () => {}, volume: (id, x) => { get(id).volume = x; }, pan: (id, x) => { get(id).pan = x; }, frequency: (id, x) => { get(id).hz = x; }, free: (id) => { V.delete(id); },
  };
}
if (recorder && soundCheck) { const c = host.audio; host.audio = Object.fromEntries(Object.keys(c).map((k) => [k, (...q) => { c[k](...q); recorder.sink[k](...q); }])); }
if (has('subtitle-box') && host.subtitles) host.subtitles.onText = (s) => console.log(`[subtitle ${(vt / 1000).toFixed(3)}] ${JSON.stringify(s)}`);
host.traceFiles = trace.has('files');
host.traceWin = trace.has('win');
host.traceMsg = trace.has('msg');
host.traceDebug = trace.has('debug');
host.traceEh = trace.has('eh');
host.traceDriver = trace.has('driver');
if (trace.has('sound') || opt('sound-log', null)) host.dsound.events = [];
if (trace.has('api')) m.traceApi = (id) => console.log(`  api ${m.thunkNames[id]}`);
const apiCounts = new Map();
if (trace.has('count')) m.traceApi = (id) => apiCounts.set(m.thunkNames[id], (apiCounts.get(m.thunkNames[id]) || 0) + 1);
if (host.unbound.length) console.log('unbound imports: ' + host.unbound.join(' '));
m.onTrace = (addr, esp, eax, ecx, edx) => console.log(`  trace ${addr.toString(16)} esp=${esp.toString(16)} eax=${eax.toString(16)} ecx=${ecx.toString(16)} edx=${edx.toString(16)} ret=${m.u32[esp >> 2].toString(16)}`);

// Save-state checks:
//   --save-at N --state file   write a save state after main-loop pass N (and keep running)
//   --restore file             boot, then replace the game with that save state at the first pass
//   --hash-after K             print a hash of the game memory K passes after the save or the restore
const fnv = (u8, lo, hi, h) => { for (let k = lo; k < hi; k++) { h ^= u8[k]; h = Math.imul(h, 16777619); } return h >>> 0; };
// Everything of a state's memory that is live between two passes (snapshot.js rangesOf, without the
// stack): the host's low memory, the image, the heap, and the VirtualAlloc pages at the top of
// memory. The game's own heap is in those pages: the player, his properties and every object of a
// world live there. (Until 2026-11-14 the hash was image and heap only and saw none of them.)
const memHash = () => {
  const L = m.layout; let h = 2166136261;
  h = fnv(m.u8, L.POP_TABLE, m.lowBump, h);
  for (const mod of m.meta.modules) h = fnv(m.u8, mod.base, mod.base + mod.size, h);
  h = fnv(m.u8, L.HEAP_BASE, host.heap.highWater, h);
  h = fnv(m.u8, host.heap.pageBump, L.MEM_PAGES * 65536, h);
  return h.toString(16).padStart(8, '0');
};
const stateFile = opt('state', path.join(outDir, 'state.bin'));
const saveAt = Number(opt('save-at', 0)), hashAfter = Number(opt('hash-after', 0));
platform.setTime = (t) => { vt = t; };
if (opt('restore', null)) host.mainLoop.pendingRestore = host.snap.unpack(new Uint8Array(fs.readFileSync(opt('restore'))));
let mark = opt('restore', null) ? 0 : -1;
{ const prev = host.onRestored; host.onRestored = () => { if (prev) prev(); console.log(`[state] restored: hash ${memHash()}, virtual time ${vt.toFixed(3)} ms`); }; }
// --positions file.json: the player's position every 50 virtual ms, [seconds, state, x, y, z]
// (app 0x6B915C -> game +0x3A4 -> sublevel +0x60 -> player +0x360 -> position +0x198; game state at game +0x98).
const positions = opt('positions', null) ? [] : null;
let nextSample = 0;
readPlayer = () => {
  const app = m.u32[0x6B915C >> 2]; const g = app ? m.u32[(app + 0x3A4) >> 2] : 0; const sub = g ? m.u32[(g + 0x60) >> 2] : 0; const pl = sub ? m.u32[(sub + 0x360) >> 2] : 0;
  if (!g) return null;
  const f = pl ? new Float32Array(m.u8.buffer, pl + 0x198, 3) : null, v = pl ? new Float32Array(m.u8.buffer, pl + 0x180, 3) : null;      // velocity at +0x180
  return { state: m.u32[(g + 0x98) >> 2], pos: f ? [+f[0].toFixed(2), +f[1].toFixed(2), +f[2].toFixed(2)] : null, vel: v ? [v[0], v[1], v[2]] : null };
};
const samplePosition = () => {
  if (vt < nextSample) return;
  nextSample = vt + 50;
  const pl = readPlayer();
  if (pl && pl.pos) positions.push([+(vt / 1000).toFixed(3), pl.state, ...pl.pos]);
};
host.mainLoop.onPass = (esp) => {
  const n = host.mainLoop.passes;
  if (positions) samplePosition();
  if (saveAt && n === saveAt) {
    const st = host.snap.save(esp);
    const bytes = host.snap.pack(st);
    fs.writeFileSync(stateFile, bytes);
    console.log(`[state] saved after pass ${n}: ${(bytes.length / 1048576).toFixed(1)} MB, ${st.ranges.length} ranges, virtual time ${st.time.toFixed(3)} ms, hash ${memHash()}`);
    mark = n;
  }
  if (hashAfter && mark >= 0 && n === mark + hashAfter) { console.log(`[state] hash ${hashAfter} passes later: ${memHash()} (virtual time ${vt.toFixed(3)} ms)`); throw new Stop(); }
};
// --plugin file.mjs: a module whose default export is called once with { m, host, game, opt, has, time(), readPlayer(), atEnd(fn), stop(), setStep(ms), memHash() }
// before the game starts; it may add to host.mainLoop.beforePass and may end the run with stop(). Functions given to atEnd
// run after the game stopped (tools/look-check.mjs uses this to call host.look and to sample the camera).
const atEnd = [];
if (opt('plugin', null)) (await import(pathToFileURL(path.resolve(opt('plugin'))).href)).default({ m, host, game, opt, has, time: () => vt, readPlayer: () => readPlayer(), atEnd: (fn) => atEnd.push(fn), stop: () => { throw new Stop(); }, setStep: (ms) => { frameStep = Number(ms); }, memHash: () => memHash() });
const t0 = Date.now();
try {
  const exit = game.run();
  console.log('game exited with code', exit);
} catch (e) {
  if (e instanceof Stop) console.log(`stopped after ${(vt / 1000).toFixed(2)} virtual seconds, ${stats.frames} frames`);
  else {
    console.log('ERROR: ' + (e && e.stack ? e.stack.split('\n').slice(0, 30).join('\n') : e));
    console.log('last indirect target g_a=' + (m.exports.g_a.value >>> 0).toString(16) + ' esp=' + (m.esp >>> 0).toString(16));
  }
}
// The game's own run logs, for comparison with the logs of the original (AdamDebugNN.log).
fs.mkdirSync(path.join(outDir, 'logs'), { recursive: true });
for (const [p, st] of game.vfs.files) if (/\.LOG$/.test(p) && st.data) fs.writeFileSync(path.join(outDir, 'logs', p.split('\\').pop()), st.data.slice(0, st.size));
// Sound trace: --trace sound prints every event; --sound-log file writes them as JSON.
if (host.dsound.events) {
  const E = host.dsound.events;
  if (opt('sound-log', null)) fs.writeFileSync(path.resolve(opt('sound-log')), JSON.stringify(E, null, 0).replace(/\},\{/g, '},\n{'));
  if (trace.has('sound')) for (const e of E) { const { t, id, file, what, ...rest } = e; console.log(`[sound ${(t / 1000).toFixed(3)}] #${id} ${file.split('\\').pop()} ${what} ${JSON.stringify(rest)}`); }
}
if (positions) fs.writeFileSync(path.resolve(opt('positions')), JSON.stringify(positions));
if (filesRead) fs.writeFileSync(path.resolve(opt('files-read')), JSON.stringify([...filesRead].map(([name, v]) => [name, v.size, v.at])));
for (const fn of atEnd) fn();
// --props: what the player has at the end of the run (CRcPlayerProperties, docs/research/cheats-and-player.md 1.3)
if (has('props')) {
  const app = m.u32[0x6B915C >> 2]; const g = app ? m.u32[(app + 0x3A4) >> 2] : 0; const sub = g ? m.u32[(g + 0x60) >> 2] : 0; const pl = sub ? m.u32[(sub + 0x360) >> 2] : 0;
  const props = pl ? m.u32[(pl + 0x1F0) >> 2] : 0;
  if (props && m.u32[props >> 2] === 0x0064C5FC) { const f = new Float32Array(m.u8.buffer, props + 0x3C, 2); console.log('props: ' + JSON.stringify({ health: f[0], maxHealth: f[1], lives: m.i32[(props + 0x44) >> 2], score: m.i32[(props + 0x48) >> 2], totalScore: m.i32[(props + 0x54) >> 2], potions: m.i32[(props + 0x58) >> 2], mirror: m.i32[(props + 0x60) >> 2], skill: m.u32[(props + 0x68) >> 2] })); }
  else console.log('props: null');
}
if (steps.length) {
  console.log(`script: first game frame at ${gameZero === null ? '-' : (gameZero / 1000).toFixed(3)} s, ${stepAt} of ${steps.length} steps done`);
  for (const e of stepLog) console.log(`  [${e.t.toFixed(2)}] ${e.what.padEnd(5)} ${e.step}${e.why ? ' (' + e.why + ')' : ''}  at ${e.pos ? e.pos.map((x) => x.toFixed(0)).join(',') : '-'}`);
  if (opt('script-log', null)) fs.writeFileSync(path.resolve(opt('script-log')), JSON.stringify({ zero: gameZero / 1000, steps: stepLog }));
}
if (recorder) {
  const out = recorder.render(vt);
  fs.writeFileSync(path.resolve(opt('sound-wav')), out.wav);
  console.log(`sound render: ${out.seconds.toFixed(1)} s, peak ${out.stats.peak.toFixed(3)}, ${out.stats.clipped} samples over full scale; level per second (dBFS): ${out.stats.perSecond.map((x) => x.toFixed(0)).join(' ')}`);
}
if (soundCheck) {
  console.log(`sound check: ${soundCheck.plays} plays, ${soundCheck.wrong.length} with a mixer state different from the game's`);
  for (const w of soundCheck.wrong.slice(0, 10)) console.log('  ' + JSON.stringify(w));
  if (soundCheck.wrong.length) process.exitCode = 1;
}
console.log(`driver: ${host.gdriver.frames} frames, ${host.gdriver.polys} polygons, ${host.gdriver.draws} draw calls, ${host.gdriver.decals || 0} decals`);
console.log('driver calls: ' + [...host.gdriver.calls].map(([k, v]) => k + ' ' + v).join(', ') + '; texture handles ' + host.gdriver.handles.size);
console.log(`wall ${(Date.now() - t0) / 1000}s, virtual ${(vt / 1000).toFixed(2)}s, frames ${stats.frames}, heap in use ${(host.heap.bytesInUse / 1048576).toFixed(1)} MB, sounds created ${host.dsound.created}, missing libraries: ${[...host.missingLibraries].join(' ') || 'none'}`);
if (apiCounts.size) console.log([...apiCounts].sort((a, b) => b[1] - a[1]).slice(0, 50).map(([k, v]) => `${v} ${k}`).join('\n'));
