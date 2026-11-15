// Another size of the game's screen while a game runs: a phone that is turned, a window that is
// reshaped, a save state made in one shape and continued in another.
//
// The original never changes its mode in a running game (its menu is another program), so nothing
// of the game does this. The size of the mode it started with is kept in these places, found by
// running the game at 1046 x 1754 and looking for those numbers in everything a save state holds
// (2026-11-15; after a change here the old numbers are in none of them and the driver gets the
// polygons of a game started at the new size: docs/research/genesis-driver.md 11c):
//   CAdamEngine (global 0x6C8DE0)   +0x40, +0x44  width, height (written at 0x55B5F0 from the mode;
//                                   CAdamEngine::DrawBitmap 0x5614E0 and the text multiply by them)
//                                   +0x118        the engine's mode record: +0x204, +0x208 width, height
//                                                 (read by 0x5C96A0)
//                                   +0xDC, +0xE0, +0xE4  its cameras (CAdamCamera, vtable 0x64F828;
//                                                 two objects, made once at 0x55B7D0)
//   CAdamCamera                     +0xAC, +0xB0  width, height (set by its Init 0x555A20)
//                                   +0x18C        its rectangle (left, right, top, bottom), made of
//                                                 width, height and its percentage by 0x556150
//                                   +0x19C, +0x1AC  the rectangle put aside and the flag of its
//                                                 half-screen mode (0x556400; never seen on)
//                                   +0x30         the geCamera: Fov, width, height, scales, centre,
//                                                 all written by geCamera_SetAttributes 0x5C9070
//   the window object (app + 0x58)  +0x64, +0x68  the middle the mouse is put back to (0x5AA270,
//                                                 called with width / 2, height / 2 at 0x55B7D0)
//                                   +0x78, +0x80  right and bottom of the rectangle the mouse is kept
//                                                 in (0x5AA450)
// and on the host's side: host.screen, the driver's width and height, the window's size, the
// renderer's idea of the game's screen. The engine's working tables for a frame (GInfo 0x722860,
// the frustum at 0x70F8B0) are made anew from the camera every frame.
//
// A change is asked for with request(w, h) and made between two passes of the main loop, never
// inside one of the game's own loops (its menu, its pause, the retry screen): there no pass
// begins, and the request waits. The numbers are written where the game keeps them, each
// camera's rectangle is made by the game's own 0x556150 and its projection by the engine's own
// 0x5C9070, with the field of view of the new shape (ini.js fieldOfView; a camera whose field of
// view is not the launch's keeps its ratio to it). Nothing is called and nothing is written while
// no change is asked for. No thunk, no low memory, no part of a state: the size in use is in the
// driver's part and in game memory already.
import { fieldOfView } from './ini.js';

const ENGINE = 0x006C8DE0, APP = 0x006B915C, CAMERA_VT = 0x0064F828, CAMERA_RECT = 0x00556150, SET_ATTRIBUTES = 0x005C9070;
export const MODE_LIMITS = { min: 480, max: 1708 };          // no side of a mode the port asks for is outside these

export function installShape(m, host) {
  const { u8, u32, i32, f32 } = m;
  const fbuf = new Float32Array(1), ubuf = new Uint32Array(fbuf.buffer);
  let asked = null;
  const drv = () => host.gdriver;
  const ok = (v) => Number.isInteger(v) && v >= MODE_LIMITS.min && v <= MODE_LIMITS.max;
  const api = host.shape = {
    stats: { changes: 0 },
    /** The size the game works in now. */
    size: () => [drv() ? drv().width : host.screen.width, drv() ? drv().height : host.screen.height],
    /** Asks for a screen of w x h; made before the next pass of the main loop. */
    request(w, h) { w |= 0; h |= 0; if (ok(w) && ok(h)) asked = [w, h]; },
    pending: () => !!asked,
    onChange: null,
  };
  const cameras = (engine) => {
    const out = [];
    for (const off of [0xDC, 0xE0, 0xE4]) { const c = u32[(engine + off) >> 2]; if (c && u32[c >> 2] === CAMERA_VT && !out.includes(c)) out.push(c); }
    return out;
  };
  const apply = (esp, W, H) => {
    const d = drv(), engine = u32[ENGINE >> 2], app = u32[APP >> 2];
    if (!d || !engine || !app) return false;
    const w0 = d.width, h0 = d.height;
    if (i32[(engine + 0x40) >> 2] !== w0 || i32[(engine + 0x44) >> 2] !== h0) return false;          // the engine has no mode yet (or not the driver's): wait
    const cams = cameras(engine);
    if (!cams.length) return false;
    const degrees = (host.options.launch || {}).fov;
    const f0 = Math.fround(Number(fieldOfView(w0, h0, degrees).toFixed(6))), f1 = Math.fround(Number(fieldOfView(W, H, degrees).toFixed(6)));      // as the game reads them from AdamWin.ini
    i32[(engine + 0x40) >> 2] = W; i32[(engine + 0x44) >> 2] = H;
    const mode = u32[(engine + 0x118) >> 2];
    if (mode && i32[(mode + 0x204) >> 2] === w0 && i32[(mode + 0x208) >> 2] === h0) { i32[(mode + 0x204) >> 2] = W; i32[(mode + 0x208) >> 2] = H; }
    const win = u32[(app + 0x58) >> 2];
    if (win) {
      if (i32[(win + 0x64) >> 2] === (w0 / 2 | 0) && i32[(win + 0x68) >> 2] === (h0 / 2 | 0)) { i32[(win + 0x64) >> 2] = W / 2 | 0; i32[(win + 0x68) >> 2] = H / 2 | 0; }
      if (i32[(win + 0x78) >> 2] === w0 - 1 && i32[(win + 0x80) >> 2] === h0 - 1) { i32[(win + 0x78) >> 2] = W - 1; i32[(win + 0x80) >> 2] = H - 1; }
    }
    const mem = (esp - 0x1000) & ~15;
    m.esp = mem - 64;
    try {
      for (const cam of cams) {
        i32[(cam + 0xAC) >> 2] = W; i32[(cam + 0xB0) >> 2] = H;
        const rect = cam + 0x18C;
        if (!u8[cam + 0x1AC]) m.call(CAMERA_RECT, [rect], cam);
        else {          // the half-screen mode (0x556400): the whole rectangle is the one put aside
          m.call(CAMERA_RECT, [cam + 0x19C], cam);
          i32[rect >> 2] = 0; i32[(rect + 4) >> 2] = W - 1; i32[(rect + 8) >> 2] = H / 2 | 0; i32[(rect + 12) >> 2] = H - 1;
        }
        const ge = u32[(cam + 0x30) >> 2];
        if (!ge) continue;
        const cur = f32[ge >> 2];
        fbuf[0] = Math.abs(cur - f0) <= 1e-5 * f0 ? f1 : cur * f1 / f0;
        m.call(SET_ATTRIBUTES, [ubuf[0]], ge, rect);
      }
    } finally { m.esp = esp; }
    // the host's own side
    host.screen.width = W; host.screen.height = H;
    if (host.user) for (const w of host.user.windows.values()) if (w.w === w0 && w.h === h0) { w.w = W; w.h = H; }
    d.width = W; d.height = H;
    if (host.render) host.render.init(W, H);
    api.stats.changes++;
    if (api.onChange) api.onChange(W, H);
    return true;
  };
  if (!host.mainLoop) return;
  host.mainLoop.beforePass.push((esp) => {
    if (!asked) return;
    const [W, H] = asked, d = drv();
    if (d && d.width === W && d.height === H) { asked = null; return; }
    if (host.skip && host.skip.active) return;          // a scene that is being skipped ends first
    if (apply(esp, W, H)) asked = null;
  });
}
