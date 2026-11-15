// Plugin for tools/run-headless.mjs (--plugin), used by tools/walllift-check.mjs: backs RedCat into
// the wall behind the start of world 1, turns the view there, walks away again, and records every
// pass what the original camera did and where the frame was drawn from (host.wallLift.last).
//   --wl-off 1       the same run with the lift switched off (to compare what RedCat does)
//   --wl-hold 1      after backing in, stay at the wall to the end of the run (for the save-state runs)
//   --wl-report 1    do nothing but report the lift's state at the end (the restored run)
//   --wl-out file    where the record goes
import fs from 'node:fs';

export default function ({ m, host, opt, atEnd, stop }) {
  const { u8, u32, i32, f32 } = m;
  const off = opt('wl-off', '0') === '1', hold = opt('wl-hold', '0') === '1', out = opt('wl-out', null), reportOnly = opt('wl-report', '0') === '1';
  const rd = () => {
    const app = u32[0x6B915C >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0, sub = game ? u32[(game + 0x60) >> 2] : 0, player = sub ? u32[(sub + 0x360) >> 2] : 0;
    if (!player) return null;
    const input = u32[(player + 0xF8) >> 2], dop = u32[(player + 0x250) >> 2];
    return { state: i32[(game + 0x98) >> 2], controlled: u8[player + 0x104], cutscene: i32[(player + 0x300) >> 2], mode: dop ? i32[(dop + 0x450) >> 2] : 0,
      pos: [f32[(player + 0x198) >> 2], f32[(player + 0x19C) >> 2], f32[(player + 0x1A0) >> 2]], heading: input ? f32[(input + 0x18) >> 2] + Math.PI / 2 : 0 };
  };
  const pending = [];
  const prevPoll = host.input.poll;
  host.input.poll = () => { const a = prevPoll() || []; while (pending.length) a.push(pending.shift()); return a.length ? a : null; };
  const key = (vk, down) => pending.push(down ? { type: 'keydown', vk, ch: 0 } : { type: 'keyup', vk });
  const log = [];
  let phase = 'wait', pass = 0;
  const sample = () => {
    const r = rd(), w = host.wallLift, last = w && w.last;
    log.push({ pass, phase, pos: r ? r.pos : null, heading: r ? r.heading : null, lift: w ? w.state().lift : 0, applied: !!(w && w.state().applied), hidden: !!(w && w.state().hidden),
      original: last ? last.original : null, drawn: last ? last.drawn : null, focus: last ? last.focus : 0, feet: last ? last.feet : null });
  };
  function* run() {
    for (;;) { const r = rd(); if (r && r.state === 3 && r.controlled && r.cutscene === 0 && r.mode === 5) break; yield; }
    if (off && host.wallLift) host.wallLift.off = true;
    phase = 'free'; for (let k = 0; k < 30; k++) yield;
    phase = 'backing'; key(40, true); for (let k = 0; k < 300; k++) yield;                 // Down for five seconds
    key(40, false);
    if (hold) { phase = 'at the wall'; for (;;) yield; }
    phase = 'at the wall'; for (let k = 0; k < 90; k++) yield;
    phase = 'turned at the wall'; host.look.turn(0.6, 0); for (let k = 0; k < 60; k++) yield;
    phase = 'walking away'; key(38, true); for (let k = 0; k < 150; k++) yield; key(38, false);
    phase = 'free again'; for (let k = 0; k < 120; k++) yield;
    stop();
  }
  let g = null;
  if (!reportOnly) host.mainLoop.beforePass.push(() => { if (!g) g = run(); else sample(); pass++; if (g.next().done) stop(); });
  atEnd((() => { if (out) fs.writeFileSync(out, JSON.stringify(log)); const w = host.wallLift; console.log('walllift at end: ' + JSON.stringify(w ? w.state() : null)); }));
}
