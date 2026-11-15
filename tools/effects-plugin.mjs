// Plugin for tools/run-headless.mjs (--plugin), used by tools/effects-check.mjs: what the game asks the driver to
// draw for its effects, and the switch that decides it (docs/research/effects-low-end.md).
//   --trigger name       fire this trigger of the level once RedCat has the controls (csmc01_tr: the fairy's first lesson)
//   --potions N          give N potions first (the fairy's gifts ask for all of them)
//   --shoot              instead of a trigger: a shot (Ctrl tapped), then a charged shot (Ctrl held 2.5 s)
//   --fx-seconds S       how long to measure after that (10)
// Prints one line "[effects] {json}":
//   lowEnd      the application's setting IsLowEndPC as the game holds it (string at app+0x49C: "0" or "1"), and the
//               number the effect classes read (app+0x4E8)
//   before, fx  per phase: frames, the driver's RenderMiscTexturePoly calls per frame by flags (mean), the most
//               flags-9 polygons (ALPHA | NO_ZWRITE: light sprites, ribbons, stars) in one frame, and the most
//               dynamic lights the game had in the engine's table between two frames (*(world+0x3B0)+0xA64);
//               orbiters, ribbons: the most that were on at one time over the fairies (class 0x64E294) that are
//               switched on: five orbiters each (+0x4494 + j * 0x144, "on" byte +0x68) and a ribbon (+0x4B54);
//               stars: the most loose stars at one time (her pool of 50 at +0x548 + j * 0x144, "on" byte +0x6C),
//               which she only makes while she travels (docs/research/effects-low-end.md 2)
//               sky: scenes with a world (the driver's BeginWorld), how many of them began with the sky box as a
//               backdrop (the driver's flag skyBackdrop: the scene's first draw, textured, without depth test or
//               write), and the least share of the screen such a backdrop covered;
//               halo: frames with the fairy's halo (the misc polygon with flags 3 and a 128 x 128 texture of 4444,
//               fleuri.bmp), in how many of them its middle lay on the backdrop, and of that texture as the driver
//               hands it to a renderer: the number of different alpha values and the largest change of alpha
//               between two texels next to each other on eight rays from the middle, both under 48: the outer slope (haloProfile)
//   fairies     the fairies that are switched on at the end
const APP = 0x6B915C, FAIRY = 0x64E294, FIRE_TRIGGER = 0x4D4310, ADD_POTIONS = 0x439E60;

/** A halo texture's alpha (RGBA bytes, w x w): { levels: different values, step: the largest change between neighbours under 48 (the outer slope, three of the sixteen levels) on eight rays from the middle }. The 4-bit surface gives 16 and 17. */
export function haloProfile(rgba, w) {
  const seen = new Set();
  for (let k = 3; k < rgba.length; k += 4) seen.add(rgba[k]);
  let step = 0;
  const c = w >> 1;
  for (const [dx, dy] of [[1, 0], [-1, 0], [0, 1], [0, -1], [1, 1], [-1, 1], [1, -1], [-1, -1]]) for (let i = 1; i < c - 1; i++) {
    const p = rgba[((c + dy * i) * w + c + dx * i) * 4 + 3], q = rgba[((c + dy * (i + 1)) * w + c + dx * (i + 1)) * 4 + 3];
    if (p < 48 && q < 48 && Math.abs(p - q) > step) step = Math.abs(p - q);
  }
  return { levels: seen.size, step };
}

export default function ({ m, host, opt, has, stop, time }) {
  const { u8, u32, i32 } = m;
  const trigger = opt('trigger', ''), potions = Number(opt('potions', 0)), shoot = has('shoot'), seconds = Number(opt('fx-seconds', 10));
  const drv = host.gdriver, I = drv.impl;
  let phase = 'before';
  const stats = {}, slot = () => (stats[phase] ||= { frames: 0, misc: {}, most9: 0, lights: 0, worlds: 0, backdrops: 0, least: 1, halo: 0, haloOnSky: 0 });
  let frame = -1, n9 = 0;
  // A renderer that only looks (the Node runner has none, host.render is free): the sky backdrop is the scene's first
  // draw, and the pixels of the halo's texture are what a real renderer would get.
  const kept = new Map();          // id of a 128 x 128 texture of 4444 -> its first level as last handed over
  let first = false, backdrop = [], haloTex = 0;
  const inTri = (t, x, y) => { const d1 = (x - t[2]) * (t[1] - t[3]) - (t[0] - t[2]) * (y - t[3]), d2 = (x - t[4]) * (t[3] - t[5]) - (t[2] - t[4]) * (y - t[5]), d3 = (x - t[0]) * (t[5] - t[1]) - (t[4] - t[0]) * (y - t[1]); return !((d1 < 0 || d2 < 0 || d3 < 0) && (d1 > 0 || d2 > 0 || d3 > 0)); };
  host.render = {
    init() {}, shutdown() {}, endScene() {}, uploadLightmap() {}, destroyTexture() {}, forget() {}, decal() { first = false; },
    beginScene() { first = true; backdrop = []; },
    uploadTexture(t, level, w, h, rgba) { if (!level && t.format === 7 && w === 128 && h === 128) kept.set(t.id, rgba.slice()); },
    draw(VB, nv, IB, ni, draws, nd) {
      if (!first) return;
      first = false;
      const tris = [];
      for (let q = 0; q < nd; q++) { const d = draws[q]; if (!d.tex || d.lm || d.ztest || d.zwrite) return; for (let i = d.first; i < d.first + d.count; i += 3) tris.push([0, 1, 2].flatMap((j) => [VB[IB[i + j] * 13], VB[IB[i + j] * 13 + 1]])); }
      backdrop = tris;
      const s = slot(), area = tris.reduce((a, t) => a + Math.abs((t[2] - t[0]) * (t[5] - t[1]) - (t[4] - t[0]) * (t[3] - t[1])) / 2, 0) / (drv.width * drv.height);
      s.backdrops++; if (area < s.least) s.least = area;
    },
  };
  const oW = I.BeginWorld;
  I.BeginWorld = (esp) => { slot().worlds++; return oW(esp); };
  const oM = I.RenderMiscTexturePoly;
  I.RenderMiscTexturePoly = (esp, pnts, n) => {
    const flags = u32[(esp + 8) >> 2], s = slot();
    if (drv.frames !== frame) { frame = drv.frames; n9 = 0; s.frames++; }
    s.misc[flags] = (s.misc[flags] || 0) + 1;
    if (flags === 9 && ++n9 > s.most9) s.most9 = n9;
    if (flags === 3 && n === 4) {
      const t = drv.handles.get(u32[(esp + 4) >> 2]);
      if (t && t.format === 7 && t.w === 128 && t.h === 128) {
        let x = 0, y = 0;
        for (let j = 0, q = pnts >> 2; j < 4; j++, q += 9) { x += m.f32[q] / 4; y += m.f32[q + 1] / 4; }
        haloTex = t.id; s.halo++;
        if (backdrop.some((tri) => inTri(tri, x, y))) s.haloOnSky++;
      }
    }
    return oM(esp, pnts, n);
  };
  const cstr = (p) => { let s = ''; for (let k = 0; p && k < 16 && u8[p + k]; k++) s += String.fromCharCode(u8[p + k]); return s; };
  const lowEnd = () => { const app = u32[APP >> 2]; return { setting: cstr(u32[(app + 0x49C) >> 2]), read: i32[(app + 0x4E8) >> 2] }; };
  const fairies = (sub) => {
    const out = [];
    for (let nd = u32[(sub + 0x34) >> 2], g = 0; nd && g < 5000; nd = u32[(nd + 4) >> 2], g++) {
      const o = u32[nd >> 2];
      if (u32[o >> 2] !== FAIRY) continue;
      out.push({ name: host.fixes.daviName(o), on: u8[o + 0x74] & 1, orbiters: [0, 1, 2, 3, 4].map((j) => u8[o + 0x4494 + j * 0x144 + 0x68]), ribbon: u8[o + 0x4B54], stars: (() => { let n = 0; for (let j = 0; j < 50; j++) n += u8[o + 0x548 + j * 0x144 + 0x6C] ? 1 : 0; return n; })() });
    }
    return out;
  };
  const pending = [], prevPoll = host.input.poll;
  host.input.poll = () => { const a = prevPoll() || []; while (pending.length) a.push(pending.shift()); return a.length ? a : null; };
  const key = (vk, down) => pending.push(down ? { type: 'keydown', vk, ch: 0 } : { type: 'keyup', vk });
  let held = 0, firedAt = null, found = null, all = [], step = 0;
  const count = (sub) => {
    const f = fairies(sub).filter((q) => q.on), s = slot();
    s.orbiters = Math.max(s.orbiters || 0, f.reduce((a, q) => a + q.orbiters.filter(Boolean).length, 0));
    s.ribbons = Math.max(s.ribbons || 0, f.reduce((a, q) => a + (q.ribbon ? 1 : 0), 0));
    s.stars = Math.max(s.stars || 0, f.reduce((a, q) => a + q.stars, 0));
  };
  host.mainLoop.beforePass.push((esp) => {
    const k = host.fixes.chain();
    if (!k || !k.player || k.state !== 3) return;
    const world = u32[(k.sub + 0x5C) >> 2], table = world ? u32[(world + 0x3B0) >> 2] : 0, s = slot();
    if (table) s.lights = Math.max(s.lights, i32[(table + 0xA64) >> 2]);
    const now = time();
    if (firedAt === null) {
      // RedCat has the controls and no scene runs, for a second
      count(k.sub);
      held = u8[k.player + 0x104] && i32[(k.player + 0x300) >> 2] === 0 ? held + 1 : 0;
      if (held < 60) return;
      all = fairies(k.sub);
      if (potions && k.props) m.call(ADD_POTIONS, [potions], k.props);
      if (trigger) { const t = host.fixes.find(esp, trigger); found = !!t; if (t) host.fixes.scratch(esp, () => m.call(FIRE_TRIGGER, [k.player], t)); }
      firedAt = now; phase = 'fx';
      return;
    }
    const t = now - firedAt;
    count(k.sub);
    if (shoot) {
      if (step === 0 && t >= 500) { key(17, true); step = 1; }
      else if (step === 1 && t >= 650) { key(17, false); step = 2; }
      else if (step === 2 && t >= 2500) { key(17, true); step = 3; }
      else if (step === 3 && t >= 5000) { key(17, false); step = 4; }
    }
    if (t < seconds * 1000) return;
    const f = fairies(k.sub).filter((q) => q.on);
    const out = (ph) => { const q = stats[ph]; if (!q) return null; return { sky: { worlds: q.worlds, backdrops: q.backdrops, least: +q.least.toFixed(3) }, halo: { frames: q.halo, onSky: q.haloOnSky, ...(kept.has(haloTex) ? haloProfile(kept.get(haloTex), 128) : {}) }, frames: q.frames, perFrame: Object.fromEntries(Object.entries(q.misc).map(([fl, n]) => [fl, +(n / Math.max(1, q.frames)).toFixed(1)])), most9: q.most9, lights: q.lights, orbiters: q.orbiters || 0, ribbons: q.ribbons || 0, stars: q.stars || 0 }; };
    console.log('[effects] ' + JSON.stringify({ level: host.fixes.level(), lowEnd: lowEnd(), trigger: trigger || null, found, before: out('before'), fx: out('fx'), fairiesInLevel: all.length, fairies: f }));
    stop();
  });
}
