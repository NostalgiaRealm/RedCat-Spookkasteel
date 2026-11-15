#!/usr/bin/env node
// The effects the original leaves out on a "Low End PC" (docs/research/effects-low-end.md): the fairy's
// orbiting stars, her ribbons and her light. The game
// decides at its start from [Display] Mode of the player's file (0x4BE08C: 0 or 1 is low end); the port
// starts every game with Mode 2 (source/host/ini.js). Fails when her effects are not drawn.
//
// Node (the driver's calls, tools/effects-plugin.mjs):
//   - the Forest with a NEW player, made from PlayerDef.ini as the page makes one, the fairy's first
//     lesson fired (csmc01_tr): IsLowEndPC "0", her five orbiters and her ribbon on, over 150 polygons
//     with flags 9 in one frame, a dynamic light;
//   - the same with Mode 1 written after the launch: IsLowEndPC "1", none of it (the original's low
//     end; shows that the numbers can tell);
//   - the opening scenes of the Castle, the Graveyard and the Caves, where she appears: over 150; and in the Caves,
//     where she flies a path, the loose stars of her pool (none in the lesson at 60 passes a second: the original's
//     code, docs/research/effects-low-end.md 2).
//   - the same lesson, her close-up (docs/research/effects-low-end.md 7): every scene with a world begins with the
//     sky box as a backdrop and her halo lies on it (the driver's flag skyBackdrop), and the halo's texture as the
//     driver hands it to a renderer has a smooth outer slope (flag smoothSprites); and the same run with both flags
//     off, which must show the original's picture: no backdrop, sixteen levels of alpha, steps of 17;
// Browser (pictures, server needed):
//   - the Forest, the lesson fired: what the game thread reports (setting, orbiters, triangles handed
//     to the renderer without depth writing) and the picture: the screenshots of the scene against
//     those of the same scene with Mode 1 put into the page's ini.js on its way to the browser; with
//     the effects the picture must be lighter where they are. LOOK at the pictures too
//     (tools/out/effects/pictures/, a sheet per scene): the numbers do not say what the light is.
//   node tools/effects-check.mjs [--only node,browser] [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit]
//        [--angle gl|swiftshader] [--scenes lesson,control] [--tag name] [--pics folder for the pictures]
//   - the lesson's close-ups (her halo fills a fifth of the picture's height or more): around the halo hardly a
//     pixel is black (no black box behind her), and its edge has no step (haloEdge below). Both fail on the code of
//     before 2026-11-15 and with --fixes skyBackdrop=0,smoothSprites=0, which is the original's picture.
//   --viewport WxH    the window (1280x960)
//   --fixes list      the page's ?fixes= (source/host/fixes.js);  --patch host/gdriver.js=file,...  a source file
//                     replaced on its way to the browser
// More scenes to look at (no verdict; --scenes castle,graveyard,caves,tower,shot2..shot5,lesson1 ...):
//   castle, graveyard, caves, tower   the world's opening, a screenshot every 2 s
//   shotN                             world N: Ctrl tapped, then held 2.5 s and let go (a shot and a charged shot),
//                                     with the shooting skill put into the player's file on its way to the browser
//   boom2, boom3                      the same shots from a place with a wall near ahead (tools/torch-place.mjs: the
//                                     Castle's hall of hands, the Graveyard's entrance), to see a shot fly and end
// Every picture is asked for by the game thread, on the game's own clock (so many ms after the trigger, the start or
// the first key), and taken with the game paused: a busy machine moves no picture to another moment of the scene.
// The keys of the shots are put in by the game thread too; nothing clicks on the picture (no caught mouse).
//   add --mode 1 to see them as the original's low end.
import fs from 'node:fs';
import path from 'node:path';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { decodePng, pictureStats } from './picture.mjs';
import { launch, engine, isChromium, canPatch, notRun, notRunSummary, DEV_URL } from './browsers.mjs';
import { PLACES } from './torch-place.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (n, d) => { const k = process.argv.indexOf('--' + n); return k < 0 ? d : process.argv[k + 1]; };
const url = opt('url', DEV_URL), angle = opt('angle', 'gl'), tag = opt('tag', ''), forced = opt('mode', null);
const VIEW = opt('viewport', '1280x960').split('x').map(Number);          // --viewport 1708x960: a wide picture to look at (the verdicts were measured at 1280 x 960)
const fixes = opt('fixes', ''), patches = String(opt('patch', '')).split(',').filter(Boolean).map((q) => q.split('='));
const only = opt('only', 'node,browser').split(','), scenes = opt('scenes', 'lesson,control').split(',').filter(Boolean);
const OUT = path.join(ROOT, 'tools/out/effects'), PICS = path.resolve(ROOT, opt('pics', 'tools/out/effects/pictures'));
fs.mkdirSync(PICS, { recursive: true });
let failed = 0, n = 0;
const check = (ok, what, detail = '') => { n++; if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); };

// ---- Node ----------------------------------------------------------------------------------------
function nodeRun(name, args) {
  const r = spawnSync('node', ['tools/run-headless.mjs', '--seconds', '600', '--fresh', '--out', path.join(OUT, 'node-' + name), '--plugin', 'tools/effects-plugin.mjs', ...args], { cwd: ROOT, encoding: 'utf8', maxBuffer: 1 << 26 });
  const line = /^\[effects\] (.*)$/m.exec(r.stdout || '');
  if (!line) { check(false, `${name}: the run reports`, (r.stdout || '').split('\n').filter((l) => /ERROR|error/.test(l)).slice(0, 2).join(' | ') || 'no [effects] line'); return null; }
  return JSON.parse(line[1]);
}
function nodePart() {
  console.log('Node: what the game asks the driver to draw');
  const a = nodeRun('lesson', ['--world', '1', '--player', '2', '--trigger', 'csmc01_tr']);
  if (a) {
    check(a.lowEnd.setting === '0' && a.lowEnd.read === 0, 'Forest, new player: the game is not in its low-end state', JSON.stringify(a.lowEnd));
    check(a.found === true && a.fx.orbiters === 5 && a.fx.ribbons >= 1, 'the fairy\'s lesson: her five orbiters and her ribbon are on', `orbiters ${a.fx.orbiters}, ribbons ${a.fx.ribbons}; loose stars ${a.fx.stars}`);
    check(a.fx.most9 >= 150, 'the fairy\'s lesson: stars and ribbons go to the driver (flags 9, most in one frame)', `${a.fx.most9}, ${a.fx.perFrame[9]} per frame`);
    check(a.fx.lights >= 1, 'the fairy\'s lesson: the game has dynamic lights in the engine\'s table', String(a.fx.lights));
    const k = a.fx.sky, h = a.fx.halo;
    check(k.worlds > 100 && k.backdrops === k.worlds && h.frames > 100 && h.onSky === h.frames, 'the fairy\'s lesson: every scene begins with the sky box behind the world, and her halo lies on it (no black box behind her)', `${k.backdrops} backdrops in ${k.worlds} scenes, at least ${(k.least * 100).toFixed(0)} % of the screen; halo on it in ${h.onSky} of ${h.frames} frames`);
    check(h.levels > 64 && h.step <= 8, 'the fairy\'s lesson: her halo\'s texture reaches the renderer with a smooth outer slope (alpha values; largest change between neighbours under 48 on eight rays from the middle)', `${h.levels} values, largest change ${h.step}`);
  }
  const p = nodeRun('lesson-plain', ['--world', '1', '--player', '2', '--trigger', 'csmc01_tr', '--fixes', 'skyBackdrop=0,smoothSprites=0']);
  if (p) check(p.fx.sky.backdrops === 0 && p.fx.halo.frames > 100 && p.fx.halo.onSky === 0 && p.fx.halo.levels <= 16 && p.fx.halo.step === 17, 'control, both flags off (the original\'s picture): no backdrop, and the halo\'s texture has the sixteen levels of its 4444 surface', `${p.fx.sky.backdrops} backdrops; ${p.fx.halo.levels} values, largest change ${p.fx.halo.step}`);
  const b = nodeRun('lesson-low', ['--world', '1', '--player', '2', '--trigger', 'csmc01_tr', '--ini', 'SETTINGS\\PLAYER2.INI|Display|Mode|1']);
  if (b) check(b.lowEnd.setting === '1' && b.fx.orbiters === 0 && b.fx.ribbons === 0 && b.fx.most9 < 30 && b.fx.lights === 0, 'control, Mode 1 (the original\'s low end): none of it', `setting ${b.lowEnd.setting}, orbiters ${b.fx.orbiters}, most ${b.fx.most9}, lights ${b.fx.lights}`);
  for (const [w, name] of [[2, 'Castle'], [3, 'Graveyard'], [4, 'Caves']]) {
    const c = nodeRun('opening' + w, ['--world', String(w), '--player', '2', '--fx-seconds', '1']);
    if (c) check(c.lowEnd.setting === '0' && c.before.most9 >= 150 && c.before.lights >= 1, `${name}, opening scene: the fairy's stars and ribbons go to the driver`, `most ${c.before.most9}, lights ${c.before.lights}`);
    // the loose stars of her pool are only made while she flies a path: the Caves' opening has one of seven points
    if (c && w === 4) check(c.before.stars >= 10, 'Caves, opening scene: she leaves loose stars behind while she flies (her pool of 50)', `most at one time ${c.before.stars}`);
  }
}

// ---- browser -------------------------------------------------------------------------------------
const MARK = 'fixes = game.host.fixes || null;';
const SCENES = {
  lesson: { world: 1, trigger: 'csmc01_tr', from: 6000, shots: 7, gap: 1000, closeups: [7500, 8500, 9500, 10500], what: 'Forest, the fairy\'s first lesson' },
  control: { world: 1, trigger: 'csmc01_tr', from: 6000, shots: 7, gap: 1000, mode: 1, what: 'Forest, the lesson with [Display] Mode 1 (the original\'s low end)' },
  castle: { world: 2, opening: true, from: 2000, shots: 13, gap: 2000, what: 'Castle, opening scene' },
  graveyard: { world: 3, opening: true, from: 2000, shots: 17, gap: 2000, what: 'Graveyard, opening scene' },
  caves: { world: 4, opening: true, from: 2000, shots: 22, gap: 2000, what: 'Caves, opening scene' },
  tower: { world: 5, opening: true, from: 1000, shots: 5, gap: 2000, what: 'Tower, start' },
};
for (let w = 1; w <= 5; w++) SCENES['shot' + w] = { world: w, shoot: true, what: `world ${w}, a shot and a charged shot` };
SCENES.boom2 = { world: 2, shoot: true, place: PLACES.castle, what: 'Castle, the hall of hands: a shot and a charged shot at a near wall' };
SCENES.boom3 = { world: 3, shoot: true, place: PLACES.yard, what: 'Graveyard, the entrance: a shot and a charged shot at a near wall' };
// What the game thread does after its moment zero (the trigger fired, the world begun, RedCat put in place), in ms of
// the game's clock: pictures, and for a shot the Ctrl key (17) down and up.
const SHOOT_PLAN = [{ at: 500, key: [17, true] }, { at: 650, key: [17, false] }, ...[700, 800, 900, 1050, 1250, 1500, 1900].map((at) => ({ at, shot: true })),
  { at: 2500, key: [17, true] }, { at: 3800, shot: true }, { at: 4900, shot: true }, { at: 5000, key: [17, false] }, ...[5080, 5180, 5300, 5450, 5650, 5900, 6300].map((at) => ({ at, shot: true }))];
// closeups: pictures for the halo's verdicts only (files -c1, -c2, ...), each taken in the first frame from its moment
// on in which the game draws her halo close up, or not at all when none comes within CLOSE_WAIT ms. The game leaves
// the halo's polygon out for 5 to 35 frames at a time, about a third of the lesson's frames (Node, 60 passes a second,
// from the halo's first frame: drawn 242 frames, out 8, 76, out 26, 44, out 5, 76, out 35, 23, out 16, 76, out 28;
// tools/out/halohud/fix-review/frames-plugin.mjs), and then her 128 x 128 light sprite shows as a disc instead. A
// picture at a fixed moment falls into such a gap in one run and not in the next: the seven fixed pictures gave 2 to
// 5 with a halo over nine runs, where three are asked for (review, 2026-11-15).
const CLOSE_WAIT = 1500;
const planOf = (sc) => sc.shoot ? SHOOT_PLAN : [...Array.from({ length: sc.shots }, (_, k) => ({ at: sc.from + k * sc.gap, shot: true })), ...(sc.closeups || []).map((at) => ({ at, shot: true, close: true }))].sort((p, q) => p.at - q.at);
const inject = (sc) => `
  { const H = game.host, M = H.m, D = H.gdriver, I = D.impl; let held = 0, fired = 0, began = 0, passes = 0, frame = -1, n9 = 0, zero = -1, at = 0, shots = 0, closes = 0, placed = 0, due = null;
    const PLAN = ${JSON.stringify(planOf(sc))}, OPENING = ${sc.opening ? 1 : 0}, PLACE = ${JSON.stringify(sc.place || null)};
    const pend = [], poll0 = H.input.poll; H.input.poll = () => { const a = poll0() || []; while (pend.length) a.push(pend.shift()); return a.length ? a : null; };
    const st = { most9: 0, orbiters: 0, ribbons: 0, tris: 0, lights: 0 }; let tr = 0, halo = null;
    const oM = I.RenderMiscTexturePoly;
    // her halo: the one polygon with flags 3 (ALPHA | FLUSH) and a 128 x 128 texture of 4444 (fleuri.bmp), whole on the screen
    const seeHalo = (esp, pnts) => { const t = D.handles.get(M.u32[(esp + 4) >> 2]); if (!t || t.format !== 7 || t.w !== 128 || t.h !== 128) return; let x0 = 1e9, x1 = -1e9, y0 = 1e9, y1 = -1e9; for (let j = 0, q = pnts >> 2; j < 4; j++, q += 9) { const x = M.f32[q], y = M.f32[q + 1]; if (x < x0) x0 = x; if (x > x1) x1 = x; if (y < y0) y0 = y; if (y > y1) y1 = y; } halo = { frame: D.frames, v: [Math.round((x0 + x1) / 2), Math.round((y0 + y1) / 2), Math.round(Math.max(x1 - x0, y1 - y0) / 2), D.width, D.height] }; };
    I.RenderMiscTexturePoly = (esp, pnts, nn) => { if (D.frames !== frame) { frame = D.frames; n9 = 0; st.tris = Math.max(st.tris, tr); tr = 0; } const fl = M.u32[(esp + 8) >> 2]; if (fl === 9 && ++n9 > st.most9) st.most9 = n9; if (fl === 3 && nn === 4) seeHalo(esp, pnts); return oM(esp, pnts, nn); };
    // A picture is taken of the frame that is being ended here: the line for the check goes out and the game thread
    // pauses itself, so it stops in this frame's platform.frame() (checkPause) with exactly this scene on its way to
    // the canvas; the check takes the picture and lets the game go on. The halo that goes with the picture is the
    // one drawn in this very frame, or null. (Until 2026-11-15 the check paused the game from the page, some frames
    // after the line, and the halo of up to two frames before counted: the picture could show a frame without it.)
    const oE = I.EndScene;
    I.EndScene = (...a) => {
      if (due) {
        const h = halo && halo.frame === D.frames ? halo.v : null;
        if (!due.close || (h && h[2] >= h[4] * 0.2)) { log('effects-check shot ' + (due.close ? 'c' + (++closes) : ++shots) + ' ' + JSON.stringify(h)); due = null; Atomics.store(ctrl, CTRL.PAUSED, 1); }
        else if (now() > due.until) { log('effects-check miss c' + (++closes)); due = null; }
      }
      return oE(...a);
    };
    const R0 = H.render, oD = R0.draw.bind(R0);
    R0.draw = (VB, nv, IB, ni, draws, nd) => { for (let q = 0; q < nd; q++) { const d = draws[q]; if (d.tex && !d.lm && d.ztest && !d.zwrite) tr += d.count / 3; } return oD(VB, nv, IB, ni, draws, nd); };
    const cs = (p) => { let q = ''; for (let j = 0; p && j < 16 && M.u8[p + j]; j++) q += String.fromCharCode(M.u8[p + j]); return q; };
    const report = (what) => { const app = M.u32[0x6B915C >> 2]; log('effects-check ' + what + ' ' + JSON.stringify({ setting: cs(M.u32[(app + 0x49C) >> 2]), read: M.i32[(app + 0x4E8) >> 2], ...st })); st.most9 = 0; st.tris = 0; };
    H.mainLoop.beforePass.push((esp) => {
      const k = H.fixes.chain();
      if (!k || !k.player || k.state !== 3) return;
      if (!began) { began = 1; report('began'); if (OPENING) zero = now(); }
      // the plan: one step per pass, and none while a picture is waited for (EndScene above takes it)
      if (zero >= 0 && !due && at < PLAN.length && now() - zero >= PLAN[at].at) { const p = PLAN[at++]; if (p.key) pend.push(p.key[1] ? { type: 'keydown', vk: p.key[0], ch: 0 } : { type: 'keyup', vk: p.key[0] }); else due = { close: !!p.close, until: now() + ${CLOSE_WAIT} }; }
      const world = M.u32[(k.sub + 0x5C) >> 2], table = world ? M.u32[(world + 0x3B0) >> 2] : 0;
      if (table) st.lights = Math.max(st.lights, M.i32[(table + 0xA64) >> 2]);
      let orb = 0, rib = 0;
      for (let nd = M.u32[(k.sub + 0x34) >> 2], g = 0; nd && g < 5000; nd = M.u32[(nd + 4) >> 2], g++) { const o = M.u32[nd >> 2]; if (M.u32[o >> 2] !== 0x64E294 || !(M.u8[o + 0x74] & 1)) continue; for (let j = 0; j < 5; j++) orb += M.u8[o + 0x4494 + j * 0x144 + 0x68] ? 1 : 0; rib += M.u8[o + 0x4B54] ? 1 : 0; }
      st.orbiters = Math.max(st.orbiters, orb); st.ribbons = Math.max(st.ribbons, rib);
      if (++passes % 120 === 0) report('stats');
      if (fired) return;
      held = M.u8[k.player + 0x104] && M.i32[(k.player + 0x300) >> 2] === 0 ? held + 1 : 0;
      if (held < 60) return;
      if (PLACE && !placed) {            // as tools/torch-place.mjs: the game's own SetPosition, the view turned
        M.u8[k.engine + 0x48] = 0;
        H.fixes.scratch(esp, (mem) => { for (let j = 0; j < 3; j++) M.f32[(mem >> 2) + j] = PLACE.at[j]; M.call(0x4DBE20, [mem], k.player); });
        for (let j = 0; j < 3; j++) M.f32[(k.player + 0x1A4 + j * 4) >> 2] = PLACE.at[j];
        if (PLACE.turn) H.look.turn(PLACE.turn, 0);
        placed = 1; return;
      }
      if (PLACE && ++placed < 150) return;
      fired = 1; if (!OPENING) zero = now();
      const name = ${JSON.stringify(sc.trigger || '')};
      let found = null;
      if (name) { const t = H.fixes.find(esp, name); found = !!t; if (t) H.fixes.scratch(esp, () => M.call(0x4D4310, [k.player], t)); }
      st.orbiters = 0; st.ribbons = 0; st.lights = 0;
      report('ready ' + found);
    }); }
`;

/**
 * Light that picture a has and picture b has nowhere near, per ten thousand cells of the band between 12 % and 78 %
 * of the height (the page's hint is above it and the subtitle below). A cell is 8 x 8 pixels and counts with its
 * lightest pixel; it is "new" when it is more than 40 (of 255) lighter than every cell of b within 4 cells (32
 * pixels) of its place. The effects only add light (stars, ribbons, her light on the scenery), and the fairy herself
 * wanders: her place differs by tens of pixels between two runs of the same moment (her movement follows the
 * frames), which a pixel by pixel comparison counted as light on one side and dark on the other (2026-11-14: a
 * failure in one run of two on a busy machine, and one of one with the pictures taken at the same clock value).
 */
const CELL = 8, NEAR = 4;
function cells(q) {
  const W = q.width, y0 = Math.round(q.height * 0.12), y1 = Math.round(q.height * 0.78), cw = Math.floor(W / CELL), ch = Math.floor((y1 - y0) / CELL), out = new Uint8Array(cw * ch);
  for (let cy = 0; cy < ch; cy++) for (let cx = 0; cx < cw; cx++) {
    let most = 0;
    for (let y = y0 + cy * CELL, ye = y + CELL; y < ye; y++) for (let x = cx * CELL, xe = x + CELL, o = (y * W + x) * q.channels; x < xe; x++, o += q.channels) { const L = (q.data[o] * 2 + q.data[o + 1] * 5 + q.data[o + 2]) >> 3; if (L > most) most = L; }
    out[cy * cw + cx] = most;
  }
  return { cw, ch, v: out };
}
function newLight(a, b) {
  if (a.cw !== b.cw || a.ch !== b.ch) return 0;
  let n = 0;
  for (let cy = 0; cy < a.ch; cy++) for (let cx = 0; cx < a.cw; cx++) {
    let near = 0;
    for (let y = Math.max(0, cy - NEAR), ye = Math.min(a.ch - 1, cy + NEAR); y <= ye; y++) for (let x = Math.max(0, cx - NEAR), xe = Math.min(a.cw - 1, cx + NEAR); x <= xe; x++) { const v = b.v[y * b.cw + x]; if (v > near) near = v; }
    if (a.v[cy * a.cw + cx] - near > 40) n++;
  }
  return n * 10000 / (a.cw * a.ch);
}

/**
 * Her close-up. halo: [x, y, half side, screen width, screen height] of the halo's polygon in the game's pixels, as the
 * game thread saw it just before the picture (she wanders a few pixels meanwhile).
 * black: percent of the pixels around the halo (0.8 to 1.2 of its half side from its middle, inside the band the
 * page's own lines leave free) with every channel under 16. The polygon is see-through there, so this is the scene
 * behind her.
 * edge: the halo is white and fades out between about 0.4 and 0.75 of its half side. The blue channel (the Forest's
 * sky and her yellow ribbons have hardly any) is read along 180 rays from the middle between 0.38 and 0.82; a
 * median over nine neighbouring rays takes out what crosses a ray (a ribbon, an orbiter) and keeps a contour around
 * her; per ray the largest change over 3 pixels; the answer is the value a tenth of the rays stay under. A step
 * of the 4444 surface (one level of alpha: 17 of 255, times the polygon's 200 of 255) crosses every ray and gave 6
 * to 8; the smoothed slope 2 to 3 (2026-11-15, 1280 x 960, four series of each kind, with and without the sky).
 */
function haloPicture(png, halo) {
  const [hx, hy, hr, W] = halo, k = png.width / W, cx = hx * k, cy = hy * k, R = hr * k, c = png.channels;
  const yLo = Math.round(png.height * 0.12), yHi = Math.round(png.height * 0.78);
  let ring = 0, black = 0;
  for (let y = Math.max(yLo, Math.floor(cy - 1.2 * R)); y < Math.min(yHi, cy + 1.2 * R); y++) for (let x = Math.max(0, Math.floor(cx - 1.2 * R)); x < Math.min(png.width, cx + 1.2 * R); x++) {
    const d = Math.hypot(x - cx, y - cy);
    if (d < 0.8 * R || d > 1.2 * R) continue;
    ring++;
    const o = (y * png.width + x) * c;
    if (png.data[o] < 16 && png.data[o + 1] < 16 && png.data[o + 2] < 16) black++;
  }
  const NA = 180, WIN = 4, r0 = Math.round(0.38 * R), NR = Math.round(0.82 * R) - r0, P = new Float32Array(NA * NR), Q = new Float32Array(NA * NR), w = [];
  for (let a = 0; a < NA; a++) { const dx = Math.cos(a * 2 * Math.PI / NA), dy = Math.sin(a * 2 * Math.PI / NA); for (let r = 0; r < NR; r++) { const x = Math.round(cx + dx * (r0 + r)), y = Math.round(cy + dy * (r0 + r)); P[a * NR + r] = x >= 0 && x < png.width && y >= yLo && y < yHi ? png.data[(y * png.width + x) * c + 2] : -1; } }
  for (let a = 0; a < NA; a++) for (let r = 0; r < NR; r++) { w.length = 0; for (let d = -WIN; d <= WIN; d++) { const v = P[((a + d + NA) % NA) * NR + r]; if (v >= 0) w.push(v); } w.sort((p, q) => p - q); Q[a * NR + r] = w.length > WIN ? w[w.length >> 1] : -1; }
  const steps = [];
  for (let a = 0; a < NA; a++) { let most = 0, n = 0; for (let r = 0; r + 3 < NR; r++) { const p = Q[a * NR + r], q = Q[a * NR + r + 3]; if (p < 0 || q < 0) continue; n++; if (Math.abs(p - q) > most) most = Math.abs(p - q); } if (n > NR * 0.8) steps.push(most); }
  steps.sort((p, q) => p - q);
  return { black: ring ? black * 100 / ring : 100, rays: steps.length, edge: steps.length ? steps[Math.floor((steps.length - 1) * 0.1)] : 99 };
}

async function scene(name) {
  const sc = SCENES[name];
  if (!sc) { check(false, `scene ${name}: one of ${Object.keys(SCENES).join(', ')}`); return null; }
  const mode = forced !== null ? Number(forced) : sc.mode;
  if ((mode !== undefined || sc.shoot) && !canPatch('host/ini.js')) { notRun(`${name}: needs a change to host/ini.js on its way to a worker`); return null; }
  const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...(angle === 'swiftshader' ? ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'] : ['--use-angle=' + angle])] });
  const ctx = await browser.newContext({ viewport: { width: VIEW[0], height: VIEW[1] } });
  let patched = false, moded = false;
  await ctx.route('**/web/worker.js', async (route) => { const r = await route.fetch(); let body = await r.text(); if (body.includes(MARK)) { body = body.replace(MARK, MARK + inject(sc)); patched = true; } await route.fulfill({ response: r, body }); });
  // the page's ini.js on its way to the browser: another Mode, and for a shot the skill the fairy gives later ([Player] Skill=1, as tools/sound-scenarios.txt)
  if (mode !== undefined || sc.shoot) await ctx.route('**/host/ini.js', async (route) => { const r = await route.fetch(); let body = await r.text(); const q = "['Display', 'Mode', 2]"; if (body.includes(q)) { body = body.replace(q, `['Display', 'Mode', ${mode === undefined ? 2 : mode}]${sc.shoot ? ", ['Player', 'Skill', 1]" : ''}`); moded = true; } await route.fulfill({ response: r, body }); });
  // --patch host/gdriver.js=file,...: a source file replaced on its way to the browser (to show that a check fails on the code of before)
  for (const [file, by] of patches) { if (!canPatch(file)) { notRun(`${name}: needs a change to ${file} on its way to a worker`); return null; } await ctx.route('**/' + file, async (route) => { const r = await route.fetch(); await route.fulfill({ response: r, body: fs.readFileSync(by, 'utf8') }); }); }
  const page = await ctx.newPage();
  await page.addInitScript(() => { try { const k = 'rcspook-recomp.settings.v1'; localStorage.setItem(k, JSON.stringify({ ...JSON.parse(localStorage.getItem(k) || '{}'), fullscreen: false, msaa: 0 })); } catch (e) { /* the defaults then */ } });
  const waits = {}, got = {}, reports = [], halos = {}; let missed = 0;
  const when = (w) => got[w] ? Promise.resolve(got[w]) : new Promise((r) => { waits[w] = r; });
  page.on('console', (m) => {
    const sh = /effects-check shot (c?\d+) (.*)/.exec(m.text());
    if (sh) { halos[sh[1]] = JSON.parse(sh[2]); taking = taking.then(() => shot(sh[1])).catch((e) => console.log('     [picture] ' + e.message.split('\n')[0])); return; }
    if (/effects-check miss c\d+/.test(m.text())) { missed++; return; }
    const q = /effects-check (began|ready|stats)( true| false| null)? (\{.*\})/.exec(m.text());
    if (!q) return;
    const v = { found: (q[2] || '').trim(), ...JSON.parse(q[3]) };
    reports.push({ what: q[1], ...v });
    if (!got[q[1]]) { got[q[1]] = v; if (waits[q[1]]) waits[q[1]](v); }
  });
  page.on('pageerror', (e) => console.log('     [pageerror] ' + e.message));
  const label = (tag ? tag + '-' : '') + name + (forced !== null ? '-mode' + forced : '') + '-' + engine;
  const files = [], haloOf = [], closeOf = [];
  // the game is paused for the picture: its clock stands still meanwhile, so the next picture's moment does not move
  let taking = Promise.resolve();
  const shot = async (k) => {
    const f = path.join(PICS, `${label}-${k.padStart(2, '0')}.png`);
    await page.evaluate(() => window.RecompGame.setPaused(true)); await page.waitForTimeout(120);
    await page.locator('#screen').screenshot({ path: f }); files.push(f); haloOf.push(halos[k] || null); closeOf.push(k[0] === 'c');
    await page.evaluate(() => window.RecompGame.setPaused(false));
  };
  const res = { name, sc, mode, files, reports, ok: false };
  try {
    await page.goto(`${url}?autostart=1&world=${sc.world}${fixes ? '&fixes=' + encodeURIComponent(fixes) : ''}`, { waitUntil: 'domcontentloaded' });
    const first = await Promise.race([when(sc.opening ? 'began' : 'ready'), new Promise((r) => setTimeout(() => r(null), 240000))]);
    if (!first) { check(false, `${name}: the world came up and RedCat got the controls within four minutes`, `game thread's script changed: ${patched}`); return res; }
    res.first = first;
    const want = planOf(sc).filter((p) => p.shot).length, limit = Date.now() + (sc.place ? 120000 : 0) + 60000 + planOf(sc).at(-1).at * 4;
    while (files.length + missed < want && Date.now() < limit) await page.waitForTimeout(200);
    await taking;
    if (files.length + missed < want) check(false, `${name}: the game thread asked for its ${want} pictures`, `${files.length} taken, ${missed} close-ups without a halo`);
    await page.waitForTimeout(2200);          // one more report from the game thread
    res.ok = true; res.patched = patched; res.moded = moded;
  } finally { try { await ctx.close(); } catch (e) { /* gone */ } await browser.close(); }
  // what the game thread saw from "ready" (or the beginning) on
  const from = reports.findIndex((r) => r.what === (sc.opening ? 'began' : 'ready'));
  const later = reports.slice(from + 1);
  res.seen = { setting: (reports[reports.length - 1] || {}).setting, orbiters: Math.max(0, ...later.map((r) => r.orbiters)), ribbons: Math.max(0, ...later.map((r) => r.ribbons)), most9: Math.max(0, ...later.map((r) => r.most9)), tris: Math.max(0, ...later.map((r) => r.tris)), lights: Math.max(0, ...later.map((r) => r.lights)) };
  res.pictures = files.map((f, k) => { const png = decodePng(fs.readFileSync(f)); return { file: path.basename(f), png, halo: haloOf[k], close: closeOf[k], ...pictureStats(png) }; });
  fs.writeFileSync(path.join(PICS, label + '-halo.json'), JSON.stringify(res.pictures.map((q) => ({ file: q.file, halo: q.halo }))));
  const sheet = path.join(PICS, label + '-sheet.png');
  const m = spawnSync('montage', [...files, '-tile', '4x', '-geometry', '426x320+2+2', '-background', 'black', sheet]);
  console.log(`     ${name} (${sc.what}${mode !== undefined ? ', Mode ' + mode : ''}): ${JSON.stringify(res.seen)}${m.status === 0 ? '; ' + path.relative(ROOT, sheet) : ''}`);
  return res;
}

async function browserPart() {
  console.log(`Browser (${engine}): what reaches the picture`);
  const res = {};
  for (const name of scenes) res[name] = await scene(name);
  const a = res.lesson, b = res.control;
  if (a && a.ok && forced === null) {
    check(a.first.found === 'true' && a.patched, 'lesson: the trigger was fired from the game thread');
    check(a.seen.setting === '0', 'lesson: the game is not in its low-end state', `IsLowEndPC "${a.seen.setting}"`);
    check(a.seen.orbiters === 5 && a.seen.ribbons >= 1, 'lesson: her five orbiters and her ribbon are on', `orbiters ${a.seen.orbiters}, ribbons ${a.seen.ribbons}`);
    check(a.seen.most9 >= 150 && a.seen.tris >= 300, 'lesson: stars and ribbons go to the driver and on to the renderer (triangles drawn without depth writing, most in one frame)', `${a.seen.most9} polygons, ${a.seen.tris} triangles`);
    check(a.pictures.every((p) => p.lit > 50), 'lesson: every picture shows the game', a.pictures.map((p) => p.lit.toFixed(0)).join(' '));
    // her close-ups: the halo's polygon, drawn in the picture's own frame, is at least a fifth of the screen's height in
    // half side. Four pictures are taken for this alone (SCENES.lesson.closeups), plus those of the seven that have it.
    const close = a.pictures.filter((p) => p.halo && p.halo[2] >= p.halo[4] * 0.2).map((p) => ({ file: p.file, ...haloPicture(p.png, p.halo) })).filter((q) => q.rays >= 60);
    check(close.length >= 3 && close.every((q) => q.black <= 5), 'lesson, her close-ups: no black box behind her (percent of black pixels around her halo, at most 5 in each of at least three pictures)', close.map((q) => q.black.toFixed(1)).join(' ') + ` (${close.length} close-ups: ${close.map((q) => /-(c?\d+)\.png$/.exec(q.file)[1]).join(' ')})`);
    // The median over the pictures, not the mean: where the halo is at its largest and low in the picture (02, c3)
    // only the rays upwards stay inside the band, over the orange sky, whose blue is 0 and stays 0 under the halo's
    // faint outer part: such a picture reads 0 or 1 with steps too (looked at: the steps are there). 2026-11-15, 8
    // close-ups a run: 1 2 2 2 2 1 2 2 smoothed (six runs), 0 7 7 7 6 0 7 7 and 0 7 7 6 7 0 5 7 with smoothSprites=0.
    const sorted = close.map((q) => q.edge).sort((x, y) => x - y), edge = sorted.length ? (sorted[(sorted.length - 1) >> 1] + sorted[sorted.length >> 1]) / 2 : 99;
    check(close.length >= 3 && edge <= 4.5, 'lesson, her close-ups: the halo\'s edge has no step (blue channel along rays from its middle, largest change over 3 pixels that a tenth of the rays stay under; median over the pictures at most 4.5)', close.map((q) => q.edge.toFixed(0)).join(' ') + ', median ' + edge.toFixed(1));
    if (b && b.ok) {
      // the scene runs on the game's clock from the trigger on, and picture k is asked for by the game thread at the
      // same clock value in both runs (until 2026-11-14 the check waited by its own clock, and a busy machine moved
      // the fairy between the two series)
      const pa = a.pictures.filter((p) => !p.close), pb = b.pictures.filter((p) => !p.close);          // the pictures at fixed moments
      const up = [], down = [], N = Math.min(pa.length, pb.length);
      for (let k = 0; k < N; k++) { const ca = cells(pa[k].png), cb = cells(pb[k].png); up.push(newLight(ca, cb)); down.push(newLight(cb, ca)); }
      const U = up.reduce((x, y) => x + y, 0), more = up.filter((v, k) => v > down[k]).length;
      check(b.moded && b.seen.setting === '1' && b.seen.orbiters === 0 && b.seen.most9 < 30, 'control: with Mode 1 the game is in its low-end state and her orbiters are off', `IsLowEndPC "${b.seen.setting}", orbiters ${b.seen.orbiters}, ${b.seen.most9} polygons`);
      check(N >= 5 && U >= NEW_MIN && more >= N - 2, `the pictures: the lesson has light where the control has none near (cells per 10000, 32 pixels of tolerance for her own wandering: at least ${NEW_MIN} over the ${N} pictures, and more than the control has the other way round in all but two of them at most)`, `lesson ${up.map((v) => v.toFixed(0)).join(' ')} = ${U.toFixed(0)}, control ${down.map((v) => v.toFixed(0)).join(' ')}; more in ${more} of ${N}`);
    } else if (!scenes.includes('control')) console.log('     no verdict on the pictures without the scene "control"');
  }
}
// Measured 2026-11-14, Chromium, 1280 x 960, five pairs of series (three of them taken by the check's own clock, one
// of those on a machine with load 14): the lesson 512 to 1617 over seven pictures, the control 6 to 720 the other way
// round; more in the lesson in 6 or 7 of the 7 pictures every time. Two series without the effects: 0 against 0, and
// (the old timing) 219 against 165 with more in 1 of 7, which is why the count per picture is asked for as well.
// Since 2026-11-15 the sky is behind her in the close shots (the driver's flag skyBackdrop) instead of black, and her
// light stands out less against it: five series gave 184 to 205 for the lesson and 7 to 12 for the control the
// other way round, more in the lesson in 7 of 7. Hence 80 and not the 150 of before.
const NEW_MIN = 80;

if (only.includes('node')) nodePart();
if (only.includes('browser')) await browserPart();
notRunSummary();
console.log(failed ? `${failed} of ${n} checks FAILED` : `all ${n} checks passed`);
process.exit(failed ? 1 : 0);
