// Plugin for tools/run-headless.mjs (--plugin), used by tools/fixes-check.mjs: one scenario per run
// (--fx name) for the fixes of source/host/fixes.js. Each scenario makes the original game show the
// fault with the game's own functions and prints one line "[fx] {json}" with what it measured;
// fixes-check.mjs runs it with the fix off and on and judges the two. Nothing here is a second
// implementation of a fix: the scenarios only read game memory, move RedCat (SetPosition
// 0x4DBE20), and call game functions a level would call (the damage dispatch 0x503FC0, Kill
// 0x4DD1A0, the enemies' "a threat begins / ends" 0x422630 / 0x422740).
const APP = 0x6B915C, ENGINE = 0x6C8DE0;

export default function ({ m, host, opt, stop, time }) {
  const { u8, u32, i32 } = m, f32 = new Float32Array(m.u8.buffer), fx = host.fixes;
  const out = (o) => console.log('[fx] ' + JSON.stringify(o));
  const chain = () => { const app = u32[APP >> 2], g = app ? u32[(app + 0x3A4) >> 2] : 0, sub = g ? u32[(g + 0x60) >> 2] : 0, pl = sub ? u32[(sub + 0x360) >> 2] : 0; let props = pl ? u32[(pl + 0x1F0) >> 2] : 0; if (props && u32[props >> 2] !== 0x64C5FC) props = 0; return { app, g, sub, pl, props, state: g ? i32[(g + 0x98) >> 2] : 0, engine: u32[ENGINE >> 2] }; };
  const fbits = (x) => new Uint32Array(new Float32Array([x]).buffer)[0];
  const pos = (k) => [0, 1, 2].map((j) => +f32[(k.pl + 0x198 + j * 4) >> 2].toFixed(1));
  const put = (esp, k, q) => { fx.scratch(esp, (mem) => { for (let j = 0; j < 3; j++) f32[(mem >> 2) + j] = q[j]; m.call(0x4DBE20, [mem], k.pl); }); for (let j = 0; j < 3; j++) f32[(k.pl + 0x1A4 + j * 4) >> 2] = q[j]; };
  const hurt = (esp, target, d) => fx.scratch(esp, () => m.call(0x503FC0, [fbits(d), 0, 0], target));
  const health = (k) => f32[(k.props + 0x3C) >> 2];
  const controlled = (k) => !!u8[k.pl + 0x104] && i32[(k.pl + 0x300) >> 2] === 0;
  // a dose as an explosion's hurt cell hands it over: the dispatch entered with the cell's return address on the stack
  const guard = m.meta.hooks.eh_00503fc0;
  const dose = (esp, target, d) => fx.scratch(esp, (mem) => { const sp = mem - 64; u32[sp >> 2] = 0x4AFF6B; u32[(sp + 4) >> 2] = fbits(d); u32[(sp + 8) >> 2] = 0; u32[(sp + 12) >> 2] = 0; m.thunks[guard.id](sp, target, 0, 0); });

  // the fifteen birth places of each emitter in the list, as one hash (by the emitter's origin, so the same in every run)
  const placesHash = (spouts) => { const o = spouts.map((e) => { let h = 2166136261; for (let j = 0; j < 3; j++) h = Math.imul(h ^ u32[(e + 0x2B4 + j * 4) >> 2], 16777619) >>> 0; for (let q = 0; q < 15; q++) for (let j = 0; j < 3; j++) h = Math.imul(h ^ u32[(e + 0x1498 + q * 0x1C + j * 4) >> 2], 16777619) >>> 0; return h; }).sort((x, y) => x - y); let h = 2166136261; for (const x of o) h = Math.imul(h ^ x, 16777619) >>> 0; return h.toString(16); };
  const scenarios = {
    // Snelspel or adventure in the Caves: the skill mask the world starts with
    *skill() { let [k] = yield; out({ skill: u32[(k.props + 0x68) >> 2] }); },

    // Caves: 100 potions, into the fairy's trigger, the skill mask afterwards
    *bigbeng() {
      let [k, esp] = yield;
      while (!controlled(k)) [k, esp] = yield;
      const before = u32[(k.props + 0x68) >> 2];
      m.call(0x439E60, [100], k.props);
      // RedCat enters the fairy's trigger: the trigger's own "somebody triggers me" (0x4D4310, what entering its model and the script's Trigger() end in)
      const trigger = fx.find(esp, 'trigger_cuts04');
      fx.scratch(esp, () => m.call(0x4D4310, [k.pl], trigger));
      for (let j = 0; j < 600 && u32[(k.props + 0x68) >> 2] === before; j++) [k, esp] = yield;
      out({ before, after: u32[(k.props + 0x68) >> 2] });
    },

    // a world that opens with a cutscene: 2 damage while it runs, and 2 after it
    *cutscene() {
      let [k, esp] = yield;
      for (let j = 0; j < 120; j++) [k, esp] = yield;
      const during = i32[(k.pl + 0x300) >> 2], h0 = health(k), byte0 = u8[k.props + 0x14];
      hurt(esp, k.pl, 2);
      const h1 = health(k);
      let n = 0;
      while (!controlled(k) && n++ < 6000) [k, esp] = yield;
      for (let j = 0; j < 5; j++) [k, esp] = yield;
      const byte1 = u8[k.props + 0x14], h2 = health(k);
      hurt(esp, k.pl, 2);
      out({ cutsceneState: during, byteDuring: byte0, lostDuring: h0 - h1, byteAfter: byte1, lostAfter: h2 - health(k) });
    },

    // the Onsterfelijk switch and the original's own toggle while the host protects (a cutscene)
    *godswitch() {
      let [k, esp] = yield;
      for (let j = 0; j < 60; j++) [k, esp] = yield;
      const r = { start: u8[k.props + 0x14] };
      host.cheats.request(3, 1); [k, esp] = yield; [k, esp] = yield; r.switchedOn = u8[k.props + 0x14]; r.stateGod = host.cheats.state().god;
      m.call(0x4DDEC0, [], k.props); r.toggled = u8[k.props + 0x14]; [k, esp] = yield; [k, esp] = yield; r.afterToggle = u8[k.props + 0x14];
      m.call(0x4DDEC0, [], k.props); [k, esp] = yield; [k, esp] = yield; r.afterSecondToggle = u8[k.props + 0x14];
      let n = 0;
      while (!controlled(k) && n++ < 6000) [k, esp] = yield;
      for (let j = 0; j < 5; j++) [k, esp] = yield;
      r.afterCutscene = u8[k.props + 0x14];
      out(r);
    },

    // --enemy name --n 24 --d 0.78: explosion doses for an enemy
    *dose() {
      let [k, esp] = yield;
      for (let j = 0; j < 60; j++) [k, esp] = yield;
      const enemy = fx.find(esp, opt('enemy', 'spider11')), h0 = i32[(enemy + 0x178) >> 2], N = Number(opt('n', 8)), d = Number(opt('d', 0.78));
      for (let j = 0; j < N; j++) dose(esp, enemy, d);
      // the same doses for RedCat (float health) and for an item (no enemy receiver): never changed by the fix
      const before = fx.stats.kept; dose(esp, k.pl, 0.5); dose(esp, k.pl, 0.75);
      out({ enemy: !!enemy, receiver: u32[(u32[enemy >> 2] + 0x1C) >> 2].toString(16), doses: N, each: d, health: [h0, i32[(enemy + 0x178) >> 2]], changedForPlayer: fx.stats.kept - before, player: health(k) });
    },

    // a crate blown up with the dispatch: what its hurt cell hands out per frame
    *blast() {
      let [k, esp] = yield;
      while (!controlled(k)) [k, esp] = yield;
      const doses = [], inner = m.thunks[guard.id];
      m.thunks[guard.id] = (sp, ecx, edx, eax) => { const ret = u32[sp >> 2]; if (ret > 0x4AF180 && ret < 0x4AFFE6) doses.push(f32[(sp + 4) >> 2]); return inner(sp, ecx, edx, eax); };
      u8[k.engine + 0x48] = 0; u8[k.props + 0x14] = 1; put(esp, k, [-1560, 90, -1560]);
      for (let j = 0; j < 30; j++) [k, esp] = yield;
      hurt(esp, fx.find(esp, 'earth_crate'), 1000);
      for (let j = 0; j < Math.round(4000 / Number(opt('step', 1000 / 60))); j++) [k, esp] = yield;
      out({ step: Number(opt('step', 1000 / 60)), doses: doses.length, largest: +Math.max(0, ...doses).toFixed(3), sum: +doses.reduce((a, b) => a + b, 0).toFixed(2) });
    },

    // free flight: --to below | out | floor, [--forget 1]: no places remembered
    *flight() {
      let [k, esp] = yield;
      while (!controlled(k) || host.mainLoop.passes < 700) [k, esp] = yield;
      const P = pos(k), r = { start: P, freeAtStart: fx.freeAt(esp, P) }, applied = [];
      host.cheats.onApplied = (s) => applied.push(s.exit);
      host.cheats.request(2, 1);
      for (let j = 0; j < 5; j++) [k, esp] = yield;
      r.byteFlying = u8[k.props + 0x14]; r.godShown = host.cheats.state().god;
      const h0 = health(k); hurt(esp, k.pl, 2); r.lostFlying = h0 - health(k);
      const to = opt('to', 'below'), q = to === 'below' ? [P[0], P[1] - 300, P[2]] : to === 'out' ? [P[0] + 30000, P[1], P[2]] : [P[0], P[1] - 20, P[2]];
      put(esp, k, q);
      if (opt('forget', '')) { fx.places.ground = null; fx.places.start = null; }
      r.freeThere = fx.freeAt(esp, q);
      for (let j = 0; j < 10; j++) [k, esp] = yield;
      host.cheats.request(2, 0);
      for (let j = 0; j < 180; j++) [k, esp] = yield;
      Object.assign(r, { exit: applied[applied.length - 1], end: pos(k), flying: u8[k.engine + 0x48] === 0, moveState: i32[(k.pl + 0x100) >> 2], byteAfter: u8[k.props + 0x14], freeAtEnd: fx.freeAt(esp, pos(k)) });
      const h1 = health(k); hurt(esp, k.pl, 2); r.lostAfter = h1 - health(k);
      out(r);
    },

    // free flight on, immortality never asked for, and the original's cheat page (--page off | on | none): the game's own
    // menu is opened with Esc; what the page's copy of the god-mode byte says (0x6BA66C, read by the entry's getter
    // 0x534850); the entry set through its own setter 0x534830; the menu closed with Esc, which makes the original call
    // SetGodMode(copy) when the entry was changed (0x532EFB); then flight off and 2 damage
    *godpage() {
      let [k, esp] = yield;
      while (!controlled(k) || host.mainLoop.passes < 700) [k, esp] = yield;
      const r = { start: u8[k.props + 0x14] }, page = opt('page', 'off');
      if (opt('god', '')) host.cheats.request(3, 1);
      host.cheats.request(2, 1); host.cheats.request(4, 1);
      for (let j = 0; j < 10; j++) [k, esp] = yield;
      r.flying = u8[k.props + 0x14];
      const pending = [], poll = host.input.poll;
      host.input.poll = () => { const a = poll() || []; while (pending.length) a.push(pending.shift()); return a.length ? a : null; };
      let up = -1, frames = 0;        // Esc is held for eight frames
      const esc = () => { pending.push({ type: 'keydown', vk: 27, ch: 27 }); up = frames + 8; };
      const frame = host.onFrame; let nested = 0;
      host.onFrame = () => {
        frame();
        if (++frames === up) pending.push({ type: 'keyup', vk: 27 });
        if (host.mainLoop.frames < 2) return;
        nested++;
        if (nested === 30) {
          r.pageCopy = u32[0x6BA66C >> 2]; r.byteInMenu = u8[k.props + 0x14];
          if (page !== 'none') { const want = page === 'on' ? 1 : 0; try { const sp = m.esp; fx.scratch(sp, () => m.call(0x534830, [want])); r.setter = 'called'; } catch (e) { m.esp = m.esp; if (u32[0x6BA66C >> 2] !== want) { u32[0x6BA66C >> 2] = want; u8[0x6BA674] = 1; } r.setter = 'written'; } }
          r.changed = u8[0x6BA674];
        }
        if (nested === 60) esc();
      };
      esc();
      for (let j = 0; j < 30 && !nested; j++) [k, esp] = yield;
      [k, esp] = yield;
      r.menuFrames = nested;
      for (let j = 0; j < 5; j++) [k, esp] = yield;
      r.afterMenu = u8[k.props + 0x14]; r.portSaysGod = host.cheats.state().god;
      host.cheats.request(2, 0);
      for (let j = 0; j < 40; j++) [k, esp] = yield;
      r.afterFlight = u8[k.props + 0x14];
      const h = health(k); hurt(esp, k.pl, 2); r.lostBy2Damage = h - health(k);
      out(r);
    },

    // --door name: asks a door to open (its "open asked" byte, read by the door's state machine 0x4CC580) and lists what it played
    *door() {
      let [k, esp] = yield;
      for (let j = 0; j < 60; j++) [k, esp] = yield;
      host.dsound.events = [];
      const door = fx.find(esp, opt('door', 'doorhallway02_01')), type = i32[(door + 0x18C) >> 2];
      u8[door + 0x171] = 1;
      for (let j = 0; j < 240; j++) [k, esp] = yield;
      out({ door: !!door, type, typeAfter: i32[(door + 0x18C) >> 2], state: i32[(door + 0x16C) >> 2], played: host.dsound.events.filter((e) => e.what === 'play' && /DOOR|EMPTY/i.test(e.file)).map((e) => e.file.split('\\').pop().toUpperCase()) });
    },

    // the Tower: the levels (hundredths of a decibel) the game gives the fire loops after two seconds
    *fire() {
      let [k, esp] = yield;
      for (let j = 0; j < 120; j++) [k, esp] = yield;
      out({ volumes: [...host.dsound.buffers].filter((b) => /LV4SND16/i.test(b.file) && b.playing).map((b) => b.volume).sort((a, b) => a - b) });
    },

    // the Caves: is the fairy's loop (IdleFee1.wav) ever handed to the 3D helper, and does its level follow RedCat's distance?
    // RedCat is put 6000 units away while the fairy of the opening scene is active.
    *fairy() {
      let [k, esp] = yield;
      host.dsound.events = host.dsound.events || [];
      const h = m.meta.hooks.sound3d, inner = m.thunks[h.id]; let through3d = 0, calls = 0;
      m.thunks[h.id] = (sp, ecx, edx, eax) => { calls++; if (u32[sp >> 2] === 0x553296 && /idlefee1/.test(fx.voiceFile(u32[(sp + 4) >> 2] - 0x3C))) through3d++; return inner(sp, ecx, edx, eax); };
      for (let j = 0; j < 150; j++) [k, esp] = yield;
      const P = pos(k); u8[k.engine + 0x48] = 0; put(esp, k, [P[0] + 6000, P[1], P[2]]);
      for (let j = 0; j < 300; j++) [k, esp] = yield;
      const loop = [...host.dsound.buffers].find((b) => /IDLEFEE1/i.test(b.file) && b.playing && b.loop);
      out({ calls3d: calls, fairyThrough3d: through3d, loopPlaying: !!loop, level: loop ? loop.volume : null, levelChanges: host.dsound.events.filter((e) => /IDLEFEE1/i.test(e.file) && e.what === 'volume' && e.playing).length });
    },

    // --enemy name: a fight for the music from second 20 to 35, with an enemy's own threat calls
    *music() {
      let [k, esp] = yield;
      host.dsound.events = [];
      const t0 = time(), sec = () => (time() - t0) / 1000;
      while (sec() < 20) [k, esp] = yield;
      fx.scratch(esp, () => m.call(0x422630, [], fx.find(esp, opt('enemy', 'froga'))));
      while (sec() < 35) [k, esp] = yield;
      fx.scratch(esp, () => m.call(0x422740, [], fx.find(esp, opt('enemy', 'froga'))));
      while (sec() < 45) [k, esp] = yield;
      const ev = host.dsound.events.filter((e) => /LEVEL \d/i.test(e.file) && (e.what === 'play' || e.what === 'stop'));
      const level = [...host.dsound.buffers].find((b) => /LEVEL \d/i.test(b.file));
      out({ events: ev.map((e) => [e.what, e.what === 'play' ? e.from : e.pos]), playing: !!(level && level.playing), bytesPerSecond: level ? level.frequency * level.blockAlign : 0 });
    },

    // the Graveyard: at the wall beside the descending passage, the world polygons the driver marks as "every texel drawn"
    *trim() {
      let [k, esp] = yield;
      while (!controlled(k)) [k, esp] = yield;
      u8[k.engine + 0x48] = 0; put(esp, k, [930, 582, -2000]); host.look.turn(Math.PI, 0);
      for (let j = 0; j < 120; j++) [k, esp] = yield;
      const before = host.gdriver.trimPolys, frames = host.gdriver.frames;
      for (let j = 0; j < 60; j++) [k, esp] = yield;
      out({ perFrame: (host.gdriver.trimPolys - before) / (host.gdriver.frames - frames), handles: [...host.gdriver.handles.values()].filter((t) => t.trim).length });
    },

    // the hand torches (flag handTorches, source/host/torches.js). --at x,y,z: RedCat is put there with free flight, --turn radians;
    // --hold 1: nothing is measured and the run goes on (for a save-state pair; nothing is done in a restored game).
    // Measured by the plugin itself, with the JavaScript port's numbers: the wick's place of every hand (BONE03 x scale x cap centre,
    // 3 higher), the engine's light table between two passes and while the world is drawn, the polygons the driver is handed,
    // and for the hand nearest RedCat that has an authored flame: its fifteen birth places against the wick
    *torch() {
      let [k, esp] = yield;
      if (opt('restore', '')) for (;;) [k, esp] = yield;
      // the player has the controls and the follow camera (mode 5 or 6 at dop+0x450) for two seconds on end: past a world's opening scene
      for (let held = 0; held < 120;) { const dop = u32[(k.pl + 0x250) >> 2], mode = dop ? i32[(dop + 0x450) >> 2] : 0; held = controlled(k) && (mode === 5 || mode === 6) ? held + 1 : 0; [k, esp] = yield; }
      const CAP = [0.11176367476582527, 0.2269089619318644, 14.135211308797201], LIFT = 3;
      const cstr = (p) => { let t = ''; for (let j = 0; p && j < 32 && u8[p + j]; j++) t += String.fromCharCode(u8[p + j]); return t; };
      const v3 = (p) => [0, 1, 2].map((j) => f32[(p >> 2) + j]);
      const list = () => { const hands = [], spouts = []; for (let q = u32[(k.sub + 0x34) >> 2]; q; q = u32[(q + 4) >> 2]) { const o = u32[q >> 2]; if (!o) continue; if (u32[o >> 2] === 0x64BB14 && /^htorch\.act$/i.test(cstr(u32[(o + 0xFC) >> 2]))) hands.push(o); if (u32[o >> 2] === 0x64D9E4) spouts.push(o); } return { hands, spouts }; };
      const tip = (o) => fx.scratch(esp, (mem) => { 'BONE03'.split('').forEach((c, j) => { u8[mem + j] = c.charCodeAt(0); }); u8[mem + 6] = 0; const xf = mem + 16; if (!(m.call(0x5B44A0, [xf], u32[(o + 0x114) >> 2], mem) & 0xFF)) return null; const M = (j) => f32[(xf >> 2) + j], [x, y, z] = CAP.map((c, j) => c * f32[(o + 0x150 + j * 4) >> 2]); return [M(0) * x + M(1) * y + M(2) * z + M(9), M(3) * x + M(4) * y + M(5) * z + M(10) + LIFT, M(6) * x + M(7) * y + M(8) * z + M(11)]; });
      const table = () => { const w = u32[(k.sub + 0x5C) >> 2], L = w ? u32[(w + 0x3B0) >> 2] : 0; let active = 0, warm = 0; if (L) for (let j = 0; j < 32; j++) { const a = L + 0x3E4 + j * 0x34; if (u32[a >> 2]) { active++; if (f32[(a + 4) >> 2] === 191.25 && f32[(a + 8) >> 2] === 102 && f32[(a + 0x20) >> 2] === 150) warm++; } } return { active, warm, count: L ? i32[(L + 0xA64) >> 2] : -1 }; };
      const at = opt('at', '').split(',').map(Number);
      if (at.length === 3) { u8[k.engine + 0x48] = 0; put(esp, k, at); if (opt('turn', '')) host.look.turn(Number(opt('turn')), 0); }
      for (let j = 0; j < 150; j++) [k, esp] = yield;
      if (opt('hold', '')) for (;;) [k, esp] = yield;
      const { hands, spouts } = list(), P = pos(k);
      // the nearest hand with an emitter within 32 units of its wick at rest (transform +0x168 x the rest point), from memory alone
      const rest = (o) => { const M = (j) => f32[((o + 0x168) >> 2) + j], R = [6.566, -43.946, 16.592]; return [0, 1, 2].map((r) => M(r * 3) * R[0] + M(r * 3 + 1) * R[1] + M(r * 3 + 2) * R[2] + M(9 + r)); };
      const d3 = (a, b) => Math.hypot(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
      let pair = null;
      for (const h of hands) for (const e of spouts) { const d = d3(v3(e + 0x2B4), rest(h)); if (d <= 32 && (!pair || d3(v3(h + 0x18C), P) < pair.far)) pair = { h, e, far: d3(v3(h + 0x18C), P) }; }
      const I = host.gdriver.impl, bw = I.BeginWorld, misc = I.RenderMiscTexturePoly;
      const r = { hands: hands.length, spouts: spouts.length, near: hands.filter((h) => d3(v3(h + 0x18C), P) < 1800).length, frames: 0, between: { active: 0, warm: 0, bad: 0 }, during: { warmMin: 99, warmMax: 0, bad: 0 }, miscPolys: 0, height: [1e9, -1e9], swing: 0 };
      let worlds = 0;
      I.BeginWorld = (...a) => { const q = bw(...a), t = table(); worlds++; r.during.warmMin = Math.min(r.during.warmMin, t.warm); r.during.warmMax = Math.max(r.during.warmMax, t.warm); if (t.active !== t.count) r.during.bad++; return q; };
      I.RenderMiscTexturePoly = (...a) => { r.miscPolys++; return misc(...a); };
      const st0 = host.torches ? { ...host.torches.stats } : null, xs = [], zs = [];
      let off = 0, yErr = 0, away = 0;
      const nearest = hands.slice().sort((a, b) => d3(v3(a + 0x18C), P) - d3(v3(b + 0x18C), P))[0];
      for (let j = 0; j < 240; j++) {
        const t = table(); r.between.active = Math.max(r.between.active, t.active); r.between.warm += t.warm; if (t.active !== t.count) r.between.bad++;
        for (const h of hands) { const q = tip(h); if (q) { const dy = q[1] - LIFT - f32[(h + 0x190) >> 2]; r.height[0] = Math.min(r.height[0], dy); r.height[1] = Math.max(r.height[1], dy); } }
        { const q = tip(nearest); xs.push(q[0]); zs.push(q[2]); }
        if (pair) {
          const q = tip(pair.h), o = v3(pair.e + 0x2B4); away = Math.max(away, Math.hypot(q[0] - o[0], q[2] - o[2]));
          for (let s = 0; s < 15; s++) { const b = v3(pair.e + 0x1498 + s * 0x1C); off = Math.max(off, Math.abs(b[0] - q[0]), Math.abs(b[2] - q[2])); yErr = Math.max(yErr, Math.abs(b[1] - q[1])); }
        }
        r.frames++; [k, esp] = yield;
      }
      I.BeginWorld = bw; I.RenderMiscTexturePoly = misc;
      { const engine = u32[(k.app + 0x3A0) >> 2], cam = engine ? u32[(engine + 0xE0) >> 2] : 0, ge = cam ? u32[(cam + 0x30) >> 2] : 0; if (ge) { r.eye = v3(ge + 0xD0 + 36).map((x) => Math.round(x)); r.forward = [2, 5, 8].map((j) => +(-f32[((ge + 0xD0) >> 2) + j]).toFixed(2)); } r.redcat = pos(k).map(Math.round); }
      r.worlds = worlds; r.height = r.height.map((x) => +x.toFixed(3)); r.miscPolys = +(r.miscPolys / r.frames).toFixed(1);
      r.swing = +Math.max(Math.max(...xs) - Math.min(...xs), Math.max(...zs) - Math.min(...zs)).toFixed(2);
      if (pair) Object.assign(r, { pairFar: +pair.far.toFixed(0), wickFromFlameOrigin: +away.toFixed(2), birthFromWick: +off.toFixed(3), birthHeightError: +yErr.toFixed(4) });
      if (st0) { const s1 = host.torches.stats; Object.assign(r, { module: { hands: s1.hands, bound: s1.bound, pools: s1.pools, polys: +((s1.polys - st0.polys) / r.frames).toFixed(1), lights: +((s1.lights - st0.lights) / r.frames).toFixed(2), skipped: s1.skipped, motions: s1.motions } }); }
      // the nearest hand's animator (hand+0x19C): length of its motion name, geMotion*, time factor
      r.nearestHeight = +(tip(nearest)[1] - LIFT - f32[(nearest + 0x190) >> 2]).toFixed(3);
      r.nearestMotion = [u32[(nearest + 0x19C + 0x20) >> 2], u32[(nearest + 0x19C + 0x38) >> 2] ? 1 : 0, +f32[(nearest + 0x19C + 0x40) >> 2].toFixed(3)];
      // --then off: the flag is switched off in the running game; what the nearest hand and the emitters are afterwards
      if (opt('then', '') === 'off') {
        fx.set('handTorches', false);
        for (let j = 0; j < 30; j++) [k, esp] = yield;
        const xs2 = [];
        for (let j = 0; j < 240; j++) { xs2.push(tip(nearest)); [k, esp] = yield; }
        r.off = { motion: [u32[(nearest + 0x19C + 0x20) >> 2], u32[(nearest + 0x19C + 0x38) >> 2] ? 1 : 0, +f32[(nearest + 0x19C + 0x40) >> 2].toFixed(3)], swing: +Math.max(...[0, 2].map((c) => Math.max(...xs2.map((q) => q[c])) - Math.min(...xs2.map((q) => q[c])))).toFixed(2), places: placesHash(list().spouts), height: +(xs2[xs2.length - 1][1] - LIFT - f32[(nearest + 0x190) >> 2]).toFixed(3) };
      }
      out(r);
    },

    // the hand torches, the paths a normal run does not reach (--do):
    //   places  nothing is done: the hash of the birth places of every emitter (with the flag off: the level's own)
    //   shot    the hand nearest RedCat that has an authored flame takes 1000 damage through the game's dispatch and is gone
    //   poke    one float of one bound emitter's birth places is changed, as if the game had written it
    //   full    the engine's light table is filled to 30 of 32 with the game's own geWorld_AddLight 0x5D36A0, and emptied again
    *torchx() {
      let [k, esp] = yield;
      for (let held = 0; held < 120;) { const dop = u32[(k.pl + 0x250) >> 2], mode = dop ? i32[(dop + 0x450) >> 2] : 0; held = controlled(k) && (mode === 5 || mode === 6) ? held + 1 : 0; [k, esp] = yield; }
      const cstr = (p) => { let t = ''; for (let j = 0; p && j < 32 && u8[p + j]; j++) t += String.fromCharCode(u8[p + j]); return t; };
      const v3 = (p) => [0, 1, 2].map((j) => f32[(p >> 2) + j]);
      const d3 = (a, b) => Math.hypot(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
      const list = () => { const hands = [], spouts = []; for (let q = u32[(k.sub + 0x34) >> 2]; q; q = u32[(q + 4) >> 2]) { const o = u32[q >> 2]; if (!o) continue; if (u32[o >> 2] === 0x64BB14 && /^htorch\.act$/i.test(cstr(u32[(o + 0xFC) >> 2]))) hands.push(o); if (u32[o >> 2] === 0x64D9E4) spouts.push(o); } return { hands, spouts }; };
      const table = () => { const w = u32[(k.sub + 0x5C) >> 2], L = w ? u32[(w + 0x3B0) >> 2] : 0; let active = 0, warm = 0; if (L) for (let j = 0; j < 32; j++) { const a = L + 0x3E4 + j * 0x34; if (u32[a >> 2]) { active++; if (f32[(a + 4) >> 2] === 191.25 && f32[(a + 8) >> 2] === 102 && f32[(a + 0x20) >> 2] === 150) warm++; } } return { active, warm, count: L ? i32[(L + 0xA64) >> 2] : -1 }; };
      const at = opt('at', '').split(',').map(Number), what = opt('do', 'places'), T = host.torches;
      u8[k.engine + 0x48] = 0; put(esp, k, at);
      for (let j = 0; j < 150; j++) [k, esp] = yield;
      const P = pos(k), L0 = list();
      const rest = (o) => { const M = (j) => f32[((o + 0x168) >> 2) + j], R = [6.566, -43.946, 16.592]; return [0, 1, 2].map((r) => M(r * 3) * R[0] + M(r * 3 + 1) * R[1] + M(r * 3 + 2) * R[2] + M(9 + r)); };
      let pair = null;
      for (const h of L0.hands) for (const e of L0.spouts) { const d = d3(v3(e + 0x2B4), rest(h)); if (d <= 32 && (!pair || d3(v3(h + 0x18C), P) < pair.far)) pair = { h, e, far: d3(v3(h + 0x18C), P) }; }
      const r = { what, hands: L0.hands.length, all: placesHash(L0.spouts), one: pair ? placesHash([pair.e]) : null, skipped: T.stats.skipped };
      if (what === 'shot') {
        hurt(esp, pair.h, 1000);
        for (let j = 0; j < 60; j++) [k, esp] = yield;
        const L1 = list();
        Object.assign(r, { handsAfter: L1.hands.length, handGone: !L1.hands.includes(pair.h), emitterThere: L1.spouts.includes(pair.e), oneAfter: placesHash([pair.e]), allAfter: placesHash(L1.spouts), moduleHands: T.stats.hands, moduleBound: T.stats.bound });
        const scenes = T.stats.scenes, frames = host.gdriver.frames;
        for (let j = 0; j < 120; j++) [k, esp] = yield;
        Object.assign(r, { framesOn: host.gdriver.frames - frames, scenesOn: T.stats.scenes - scenes, lightsNow: T.stats.lightsNow });
      }
      if (what === 'poke') {
        const truth = new Map([...T.state.emitters].map(([e, q]) => [e, q.orig.slice()])), e = pair.e, kept0 = T.stats.kept;
        f32[(e + 0x1498) >> 2] += 0.5;
        for (let j = 0; j < 5; j++) [k, esp] = yield;
        let floats = 0, worst = 0, others = 0;
        for (const [a, q] of T.state.emitters) { const t = truth.get(a); if (!t) { others++; continue; } q.orig.forEach((x, j) => { if (Math.fround(x) !== Math.fround(t[j])) { floats++; if (a !== e || j !== 0) others++; worst = Math.max(worst, Math.abs(x - t[j])); } }); }
        Object.assign(r, { emitters: T.state.emitters.size, floatsChanged: floats, elsewhere: others, worst: +worst.toFixed(2), keptRecords: T.stats.kept - kept0, skippedBy: T.stats.skipped - r.skipped });
        // and off: every emitter has its own places again, but for the one float the "game" wrote
        fx.set('handTorches', false);
        for (let j = 0; j < 3; j++) [k, esp] = yield;
        let wrong = 0;
        for (const [a, t] of truth) for (let j = 0; j < 45; j++) { const x = f32[(a + 0x1498 + Math.trunc(j / 3) * 0x1C + (j % 3) * 4) >> 2]; if (x !== Math.fround(t[j]) && !(a === e && j === 0)) wrong++; }
        r.wrongAfterOff = wrong; r.allAfterOff = placesHash(list().spouts);
      }
      if (what === 'full') {
        const world = u32[(k.sub + 0x5C) >> 2], mine = [], I = host.gdriver.impl, bw = I.BeginWorld;
        r.before = table();
        while (table().count < 30) mine.push(fx.scratch(esp, () => m.call(0x5D36A0, [world])) >>> 0);
        r.filled = table(); r.during = { warmMin: 99, warmMax: 0, bad: 0, activeMax: 0 };
        I.BeginWorld = (...a) => { const q = bw(...a), t = table(); r.during.warmMin = Math.min(r.during.warmMin, t.warm); r.during.warmMax = Math.max(r.during.warmMax, t.warm); r.during.activeMax = Math.max(r.during.activeMax, t.active); if (t.active !== t.count) r.during.bad++; return q; };
        let between = 0;
        for (let j = 0; j < 120; j++) { const t = table(); if (t.warm || t.active !== t.count || t.active !== 30) between++; [k, esp] = yield; }
        I.BeginWorld = bw;
        for (const l of mine) fx.scratch(esp, () => m.call(0x5D3710, [world, l]));
        r.betweenBad = between; r.after = table();
        for (let j = 0; j < 30; j++) [k, esp] = yield;
        r.lightsNowAfter = T.stats.lightsNow;
      }
      out(r);
    },

    // the Graveyard maze: the five triggers in order, a death, the five triggers again
    *maze() {
      let [k, esp] = yield;
      while (!controlled(k)) [k, esp] = yield;
      const T = ['heg1_trigger_mc', 'heg2_closetrigger_mc', 'heg3_trigger1_mc', 'heg3_trigger2_mc', 'heg5_trigger_mc'], C = ['heg1_mc', 'heg3_mc', 'heg4_mc', 'heg5_mc'];
      const at = { heg1_trigger_mc: [-928, 536, -815], heg2_closetrigger_mc: [-1164, 551, -576], heg3_trigger1_mc: [-1296, 536, -576], heg3_trigger2_mc: [-1104, 536, -840], heg5_trigger_mc: [-1500, 552, -960] };
      const obj = Object.fromEntries([...T, ...C, 'heg2_mc', 'heg6_mc'].map((n) => [n, fx.find(esp, n)]));
      const read = () => ({ counts: T.map((n) => i32[(obj[n] + 0x174) >> 2]).join(''), enabled: T.map((n) => u8[obj[n] + 0x7C]).join(''), hedges: C.map((n) => +f32[(obj[n] + 0x100) >> 2].toFixed(2)), door: i32[(obj.heg2_mc + 0x16C) >> 2] });
      const walk = function* () { u8[k.engine + 0x48] = 0; for (const n of T) { put(esp, k, at[n]); for (let j = 0; j < 240; j++) [k, esp] = yield; } };
      const r = { start: read() };
      yield* walk(); r.walked = read();
      // a death: collision back on (flight would protect him), then the game's own Kill
      put(esp, k, at.heg1_trigger_mc); u8[k.engine + 0x48] = 1; u8[k.props + 0x14] = 0;
      for (let j = 0; j < 5; j++) [k, esp] = yield;
      const other = +f32[(obj.heg6_mc + 0x100) >> 2].toFixed(2);
      m.call(0x4DD1A0, [], k.pl);
      for (let j = 0; j < 3000 && !(health(k) > 0); j++) [k, esp] = yield;
      for (let j = 0; j < 30; j++) [k, esp] = yield;
      r.afterDeath = read(); r.lives = i32[(k.props + 0x44) >> 2]; r.resets = fx.stats.mazeResets; r.otherHedgeMoved = +f32[(obj.heg6_mc + 0x100) >> 2].toFixed(2) !== other;
      yield* walk(); r.second = read();
      out(r);
    },
  };

  // skyBackdrop, smoothSprites, hudShape (picture only): a renderer that takes everything and keeps nothing, so that the driver
  // converts its textures as it does in the browser; the run goes on to its end and then says what the driver did
  scenarios.looker = function* () { for (;;) yield; };
  if (opt('fx', '') === 'looker') {
    host.render = { init() {}, shutdown() {}, beginScene() {}, endScene() {}, uploadTexture() {}, uploadLightmap() {}, destroyTexture() {}, forget() {}, decal() {}, draw() {} };
    process.on('exit', () => console.log('[looker] ' + JSON.stringify({ sky: host.gdriver.skyPolys, smoothed: host.gdriver.smoothed, reshaped: host.gdriver.reshaped, bitmaps: host.gdriver.bitmapsSeen, strangers: host.gdriver.strangers, frames: host.gdriver.frames })));
  }

  const name = opt('fx', '');
  if (!scenarios[name]) throw new Error('fixes-plugin: unknown scenario ' + name);
  let g = null;
  host.mainLoop.beforePass.push((esp) => {
    const k = chain();
    if (!k.pl || !k.props || k.state !== 3) return;
    if (!g) { g = scenarios[name](); g.next(); }
    if (g.next([k, esp]).done) stop();
  });
}
