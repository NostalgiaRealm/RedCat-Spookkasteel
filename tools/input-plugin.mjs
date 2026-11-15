// Plugin for tools/run-headless.mjs (--plugin), used by tools/input-check.mjs: moves RedCat with keys or
// with a stick (source/host/move.js) from the start of a world and writes down every pass where he is.
//   --in-mode "keys:38+39"            hold these virtual keys
//   --in-mode "stick:X,Y[,walk]"      a stick at X (right), Y (forward), with the key the page holds for it (source/web/stick.js)
//   --in-mode "keys:38,walk"          keys, walking slowly
//   --in-mode "probe:73/38"          which of these keys walk (after a restore, for the keys of the player's file)
//   --in-fly 1 [--in-pitch R]        free flight on first (the cheat), with the look pitch changed by R radians
//   --in-passes N                     for N passes (120)
//   --in-out file                     where the record goes
import fs from 'node:fs';
import { stickKey } from '../source/web/stick.js';

export default function ({ m, host, opt, atEnd, stop, time }) {
  const { u8, u32, i32, f32 } = m;
  const mode = opt('in-mode', 'keys:38'), passes = Number(opt('in-passes', 120)), out = opt('in-out', null);
  const [kind, rest = ''] = mode.split(':'), parts = rest.split(',');
  const walk = parts.includes('walk');
  const rd = () => {
    const app = u32[0x6B915C >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0, sub = game ? u32[(game + 0x60) >> 2] : 0, player = sub ? u32[(sub + 0x360) >> 2] : 0;
    if (!player) return null;
    const input = u32[(player + 0xF8) >> 2], dop = u32[(player + 0x250) >> 2];
    return { state: i32[(game + 0x98) >> 2], controlled: u8[player + 0x104], cutscene: i32[(player + 0x300) >> 2], mode: dop ? i32[(dop + 0x450) >> 2] : 0,
      pos: [f32[(player + 0x198) >> 2], f32[(player + 0x19C) >> 2], f32[(player + 0x1A0) >> 2]], heading: input ? f32[(input + 0x18) >> 2] + Math.PI / 2 : 0,
      move: input ? [f32[(input + 0x28) >> 2], f32[(input + 0x2C) >> 2], f32[(input + 0x30) >> 2]] : null, row: dop ? u8[dop + 0x431] : 0 };
  };
  const pending = [];
  const prevPoll = host.input.poll;
  host.input.poll = () => { const a = prevPoll() || []; while (pending.length) a.push(pending.shift()); return a.length ? a : null; };
  const key = (vk, down) => pending.push(down ? { type: 'keydown', vk, ch: 0 } : { type: 'keyup', vk });
  const log = [];
  let keys = [], stick = null;
  if (kind === 'keys') keys = parts[0].split('+').filter(Boolean).map(Number);
  else if (kind === 'stick') { stick = [Number(parts[0]), Number(parts[1])]; const k = stickKey(stick[0], stick[1]); keys = k === 'forward' ? [38] : k === 'back' ? [40] : []; }
  function* run() {
    for (;;) { const r = rd(); if (r && r.state === 3 && r.controlled && r.cutscene === 0 && r.mode === 5) break; yield; }
    if (kind === 'probe') {
      // which keys walk: each key of "probe:73/38" held for 30 passes, the distance covered written down
      const res = {};
      for (const vk of parts[0].split('/').map(Number)) { const a = rd(); key(vk, true); for (let k = 0; k < 30; k++) yield; key(vk, false); const b = rd(); res[vk] = Math.hypot(b.pos[0] - a.pos[0], b.pos[2] - a.pos[2]); for (let k = 0; k < 20; k++) yield; }
      log.push({ probe: res, stats: { ...host.move.stats } });
      return;
    }
    // away from the start, which stands in a corner facing exactly -90 degrees (camera-and-look.md 4): 20 passes forward, then stand
    key(38, true); for (let k = 0; k < 20; k++) yield; key(38, false); for (let k = 0; k < 60; k++) yield;
    if (opt('in-fly', '')) {
      host.cheats.request(2, 1);
      if (Number(opt('in-pitch', 0))) host.look.turn(0, Number(opt('in-pitch', 0)));
      for (let k = 0; k < 40; k++) yield;
    }
    log.push({ start: rd(), control: host.move.state(), look: host.look ? host.look.state() : null, ms: time() });
    for (const k of keys) key(k, true);
    if (stick) host.move.stick(stick[0], stick[1]);
    if (walk) host.move.walk(true);
    for (let k = 0; k < passes; k++) { yield; const r = rd(); log.push({ pos: r.pos, heading: r.heading, move: r.move, row: r.row, ms: time(), last: stick && k === 0 ? host.move.last : undefined }); }
    for (const k of keys) key(k, false);
    host.move.stick(0, 0); host.move.walk(false);
    for (let k = 0; k < 30; k++) yield;
    log.push({ end: rd(), stats: { ...host.move.stats }, ms: time() });
  }
  let g = null;
  host.mainLoop.beforePass.push(() => { if (!g) g = run(); if (g.next().done) stop(); });
  atEnd(() => { if (out) fs.writeFileSync(out, JSON.stringify(log)); });
}
