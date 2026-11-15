// The Genesis3D render driver, implemented by the host. The engine in RcHcGame.dat loads a driver
// DLL and calls its DriverHook export to get the driver's function table (DRV_Driver); here
// LoadLibrary of D3DDrv.dll yields this host library instead, and every slot of the table is a
// host thunk. The interface and the behaviour of the original Direct3D driver are documented, with
// addresses, in docs/research/genesis-driver.md; section numbers below refer to it.
//
// What is reproduced from the original D3DDrv.dll:
// - table layout, version 100.3, __fastcall slots with their stack clean-up (2.1);
// - the pixel formats it offers on a 16-bit display and its texture storage: 3D handles are
//   square power-of-two surfaces with engine-written mip levels, 2D handles keep their size and
//   use colour key 1 (6.1, 6.2);
// - deferred drawing: world and misc polygons go into two queues of at most 256 polygons / 1024
//   vertices, drawn sorted by texture and mip level at the original flush points, while Gouraud
//   polygons and decals are drawn at once (7.2);
// - one mip level per polygon, chosen as the original does (GetMipLevel 0x10006880);
// - vertex conversion, lightmap and fog rules (4.1, 7.4, 7.7).
// What differs on purpose: lightmaps keep 8 bits per channel (the original reduced them to
// 565), and the depth buffer is the renderer's (24 bits instead of 16).
//
// And, each behind a flag of source/host/fixes.js that is on by default (off = the original's picture):
// the 4-bit channels of a 4444 texture are smoothed on their way to the renderer (smoothSprites,
// smooth.js) and the sky box is drawn behind the world (skyBackdrop, below at BeginWorld).
// And the game's 2D bitmaps keep their 4:3 shape on a screen of another shape, wider or higher (hudShape, at RenderMiscTexturePoly).
//
// Texture pixels stay in game memory, where the engine writes them through THandle_Lock. After a
// save state is restored everything the renderer needs can be rebuilt from game memory and the
// handle list.
import { smoothChannel, smoothPasses } from './smooth.js';

// gePixelFormat values used here
const PF_555 = 3, PF_565 = 5, PF_4444 = 7, PF_1555 = 8, PF_24_RGB = 9, PF_32_XRGB = 13, PF_32_ARGB = 17;
// geRDriver_PixelFormat flags
const RDRIVER_PF_2D = 1 << 0, RDRIVER_PF_3D = 1 << 1, RDRIVER_PF_LIGHTMAP = 1 << 2;
const RDRIVER_PF_CAN_DO_COLORKEY = 1 << 17, RDRIVER_PF_COMBINE_LIGHTMAP = 1 << 18;
// render flags
const DRV_RENDER_ALPHA = 1, DRV_RENDER_FLUSH = 2, DRV_RENDER_NO_ZMASK = 4, DRV_RENDER_NO_ZWRITE = 8, DRV_RENDER_CLAMP_UV = 16;

const BYTES = { [PF_555]: 2, [PF_565]: 2, [PF_4444]: 2, [PF_1555]: 2, [PF_24_RGB]: 3, [PF_32_XRGB]: 4, [PF_32_ARGB]: 4 };
const COLOR_KEY = 1;           // THandle_GetInfo reports colour key 1 for 2D surfaces (0x10007801)
const MAX_POLYS = 256, MAX_VERTS = 1024;
/** Floats per vertex handed to the renderer: x, y, z, u, v, lu, lv, r, g, b, a, fog, lod */
export const VERTEX_FLOATS = 13;

// offset, name, stack bytes the callee pops
const SLOTS = [
  [0x14, 'EnumSubDrivers', 0], [0x18, 'EnumModes', 8], [0x1C, 'EnumPixelFormats', 0],
  [0x20, 'Init', 0], [0x24, 'Shutdown', 0], [0x28, 'Reset', 0], [0x2C, 'UpdateWindow', 0], [0x30, 'SetActive', 0],
  [0x34, 'THandle_Create', 8], [0x38, 'THandle_Destroy', 0], [0x3C, 'THandle_Lock', 4], [0x40, 'THandle_UnLock', 0],
  [0x54, 'THandle_GetInfo', 4],
  [0x58, 'BeginScene', 4], [0x5C, 'EndScene', 0], [0x60, 'BeginWorld', 0], [0x64, 'EndWorld', 0],
  [0x68, 'BeginMeshes', 0], [0x6C, 'EndMeshes', 0], [0x70, 'BeginModels', 0], [0x74, 'EndModels', 0],
  [0x78, 'RenderGouraudPoly', 4], [0x7C, 'RenderWorldPoly', 16], [0x80, 'RenderMiscTexturePoly', 8], [0x84, 'DrawDecal', 8],
  [0x98, 'ScreenShot', 0], [0x9C, 'SetGamma', 4], [0xA0, 'GetGamma', 0], [0xA4, 'SetFogEnable', 20],
];

const pow2 = (n) => { let s = 1; while (s < n) s <<= 1; return s; };

export function installGDriver(m, host) {
  const { u8, u16, u32, i32, i16, f32 } = m;
  const heap = host.heap;
  const render = () => host.render;
  const drv = host.gdriver = {
    calls: new Map(), impl: {},
    handles: new Map(),        // THandle address -> handle record
    slots: [],                 // the original's handle array: index -> record or undefined (first free slot is reused)
    nextId: 1,
    width: 640, height: 480, hwnd: 0, active: true,
    frames: 0, polys: 0, draws: 0,
    fog: null,
  };
  const table = m.lowAlloc(0xC0);
  const name = m.lowAlloc(64);
  m.writeCStr(name, 'D3D driver. v100.3. Host (WebGL)');
  const errStr = m.lowAlloc(256);
  const settings = m.lowAlloc(32);
  const cacheInfo = m.lowAlloc(64);
  const pfBuf = m.lowAlloc(5 * 8);
  const dynFlag = m.lowAlloc(8);
  drv.table = table;
  u32[table >> 2] = name;
  u32[(table + 4) >> 2] = 100;
  u32[(table + 8) >> 2] = 3;
  u32[(table + 0x10) >> 2] = errStr;
  u32[(table + 0x94) >> 2] = cacheInfo;
  u32[(table + 0xA8) >> 2] = settings;
  // DRV_EngineSettings as the original sets it in DriverHook (0x10005304): alpha and colour key, no preferences
  u32[settings >> 2] = 3;
  u32[(settings + 4) >> 2] = 0;

  const I = drv.impl;
  const stack = (esp, k) => u32[(esp + 4 + k * 4) >> 2];

  // --- enumeration and set-up (3.1 to 3.5) ---------------------------------------------
  const SUBDRIVER = '(D3D)DirectDraw HAL';
  const scratch = m.lowAlloc(256);
  I.EnumSubDrivers = (esp, cb, ctx) => {
    m.writeCStr(scratch, SUBDRIVER);
    m.call(cb, [0, scratch, ctx]);
    return 1;
  };
  // The game's automatic selection takes the mode whose name contains "640x480" and rejects a
  // driver with fewer than two modes (0x55F630, 0x55FC90). The mode of that name carries the host's
  // screen size, which may be wider than 640 (widescreen): the engine takes width and height from
  // the mode, not from its name.
  drv.modes = () => [['640x480', host.screen.width, host.screen.height], ['800x600', 800, 600]];
  I.EnumModes = (esp) => {
    const cb = stack(esp, 0), ctx = stack(esp, 1);
    const list = drv.modes();
    for (let k = 0; k < list.length; k++) {
      m.writeCStr(scratch, list[k][0]);
      if (!m.call(cb, [k, scratch, list[k][1], list[k][2], ctx])) return 1;
    }
    return 1;
  };
  drv.formats = [
    [PF_565, RDRIVER_PF_3D | RDRIVER_PF_COMBINE_LIGHTMAP],
    [PF_4444, RDRIVER_PF_3D | RDRIVER_PF_COMBINE_LIGHTMAP],
    [PF_565, RDRIVER_PF_2D | RDRIVER_PF_CAN_DO_COLORKEY],
    [PF_565, RDRIVER_PF_LIGHTMAP],
    [PF_1555, RDRIVER_PF_3D | RDRIVER_PF_COMBINE_LIGHTMAP],
  ];
  I.EnumPixelFormats = (esp, cb, ctx) => {
    for (let k = 0; k < drv.formats.length; k++) {
      const p = pfBuf + k * 8;
      u32[p >> 2] = drv.formats[k][0];
      u32[(p + 4) >> 2] = drv.formats[k][1];
      if (!m.call(cb, [p, ctx])) return 1;
    }
    return 1;
  };
  I.Init = (esp, hookPtr) => {
    // DRV_DriverHook: AppName[512], Driver, DriverName[512], Mode, ModeName[512], Width, Height, hWnd (3.4)
    const mode = i32[(hookPtr + 0x404) >> 2];
    let w = i32[(hookPtr + 0x608) >> 2], h = i32[(hookPtr + 0x60C) >> 2];
    drv.hwnd = u32[(hookPtr + 0x610) >> 2];
    if (w === -1 && h === -1) {
      const win = host.user.windows.get(drv.hwnd);
      w = win ? win.w : host.screen.width; h = win ? win.h : host.screen.height;
      i32[(hookPtr + 0x608) >> 2] = w; i32[(hookPtr + 0x60C) >> 2] = h;
    }
    drv.width = w; drv.height = h;
    host.log(`driver Init: "${m.cstr(hookPtr + 0x204)}" mode ${mode} "${m.cstr(hookPtr + 0x408)}" ${w}x${h}`);
    resetQueues();
    if (render()) render().init(w, h);
    return 1;
  };
  I.Shutdown = () => { dropAll(); if (render()) render().shutdown(); return 1; };
  // Reset destroys every handle that is still alive and empties both queues (0x100020C0).
  I.Reset = () => { dropAll(); resetQueues(); return 1; };
  I.UpdateWindow = () => 1;
  I.SetActive = (esp, active) => { drv.active = !!active; return 1; };

  // --- texture handles (6.1) -----------------------------------------------------------
  // The handle is a 16-byte block in game memory (magic, slot index, 0, 0): opaque to the engine.
  const MAGIC = 0x444E4854;
  const freeHandle = (t) => {
    if (render()) render().destroyTexture(t);
    for (const p of t.data) heap.release(p);
    u32[t.addr >> 2] = 0;
    heap.release(t.addr);
    drv.handles.delete(t.addr);
    drv.slots[t.slot] = undefined;
  };
  const dropAll = () => { for (const t of [...drv.handles.values()]) freeHandle(t); };
  I.THandle_Create = (esp, width, height) => {
    const mips = Math.max(1, stack(esp, 0) | 0), pf = stack(esp, 1);
    const format = u32[pf >> 2], flags = u32[(pf + 4) >> 2];
    const bpp = BYTES[format];
    if (!bpp) { host.log('driver THandle_Create: unsupported pixel format ' + format); return 0; }
    let slot = 0;
    while (drv.slots[slot]) slot++;
    const kind = flags & RDRIVER_PF_3D ? '3d' : flags & RDRIVER_PF_LIGHTMAP ? 'lightmap' : '2d';
    const addr = heap.alloc(16, true);
    const t = { addr, slot, id: drv.nextId++, kind, w: width | 0, h: height | 0, mips: kind === '3d' ? mips : 1, format, flags, bpp, data: [], dirty: 0, version: 0 };
    // 3D: square surface of the next power of two; 2D: the bitmap's own size; stride in pixels
    t.size = kind === '3d' ? pow2(Math.max(t.w, t.h)) : 0;
    t.stride = kind === '2d' ? t.w : pow2(Math.max(t.w, t.h));
    u32[addr >> 2] = MAGIC; u32[(addr + 4) >> 2] = slot;
    if (kind === '3d') for (let k = 0; k < t.mips; k++) { const s = Math.max(1, t.size >> k); t.data.push(heap.alloc(Math.max(4, s * s * bpp), true)); }
    else if (kind === '2d') t.data.push(heap.alloc(Math.max(4, t.w * t.h * bpp), true));
    // a lightmap handle has no storage: its pixels come from the engine's SetupLightmap callback
    drv.handles.set(addr, t);
    drv.slots[slot] = t;
    return addr;
  };
  I.THandle_Destroy = (esp, th) => {
    const t = drv.handles.get(th);
    if (!t) return 0;
    freeHandle(t);
    return 1;
  };
  I.THandle_Lock = (esp, th, mip) => {
    const pOut = stack(esp, 0);
    const t = drv.handles.get(th);
    if (!t || mip >= t.data.length) return 0;
    u32[pOut >> 2] = t.data[mip];
    return 1;
  };
  I.THandle_UnLock = (esp, th, mip) => {
    const t = drv.handles.get(th);
    if (!t) return 0;
    t.dirty |= 1 << mip;
    t.trim = undefined;
    return 1;
  };
  I.THandle_GetInfo = (esp, th, mip) => {
    const info = stack(esp, 0);
    const t = drv.handles.get(th);
    if (!t) return 0;
    i32[info >> 2] = t.w >> mip; i32[(info + 4) >> 2] = t.h >> mip; i32[(info + 8) >> 2] = t.stride >> mip;
    const key = (t.flags & RDRIVER_PF_CAN_DO_COLORKEY) !== 0;
    u32[(info + 12) >> 2] = key ? COLOR_KEY : 0;
    u32[(info + 16) >> 2] = key ? 1 : 0;             // RDRIVER_THANDLE_HAS_COLORKEY
    u32[(info + 20) >> 2] = t.format; u32[(info + 24) >> 2] = t.flags;
    return 1;
  };

  /** One level of a 3D or 2D handle as RGBA bytes: { w, h, rgba }. */
  const pixels = (t, mip) => {
    const w = t.kind === '3d' ? Math.max(1, t.size >> mip) : t.w, h = t.kind === '3d' ? w : t.h, n = w * h;
    const out = new Uint8Array(n * 4);
    const p = t.data[mip];
    const key = (t.flags & RDRIVER_PF_CAN_DO_COLORKEY) !== 0;
    switch (t.format) {
      case PF_565:
        for (let k = 0, s = p >> 1; k < n; k++, s++) {
          const c = u16[s];
          const r = c >> 11, g = (c >> 5) & 63, b = c & 31;
          out[k * 4] = (r << 3) | (r >> 2); out[k * 4 + 1] = (g << 2) | (g >> 4); out[k * 4 + 2] = (b << 3) | (b >> 2);
          out[k * 4 + 3] = key && c === COLOR_KEY ? 0 : 255;
        }
        break;
      case PF_555:
        for (let k = 0, s = p >> 1; k < n; k++, s++) {
          const c = u16[s];
          const r = (c >> 10) & 31, g = (c >> 5) & 31, b = c & 31;
          out[k * 4] = (r << 3) | (r >> 2); out[k * 4 + 1] = (g << 3) | (g >> 2); out[k * 4 + 2] = (b << 3) | (b >> 2);
          out[k * 4 + 3] = key && c === COLOR_KEY ? 0 : 255;
        }
        break;
      case PF_4444:
        for (let k = 0, s = p >> 1; k < n; k++, s++) {
          const c = u16[s];
          out[k * 4] = ((c >> 8) & 15) * 17; out[k * 4 + 1] = ((c >> 4) & 15) * 17; out[k * 4 + 2] = (c & 15) * 17; out[k * 4 + 3] = (c >> 12) * 17;
        }
        // flag smoothSprites (fixes.js; off = the original's sixteen levels): slopes the 4 bits could not follow are
        // made smooth again inside what each level allows (smooth.js). On these bytes only, never in game memory.
        if (t.kind === '3d' && host.fixes && host.fixes.flags.smoothSprites) {
          const passes = smoothPasses(w);
          let changed = 0;
          for (let ch = 0; ch < 4; ch++) changed += smoothChannel(u16, p >> 1, w, h, ch === 3 ? 12 : 8 - ch * 4, out, ch, passes);
          drv.smoothed += changed ? 1 : 0;
        }
        break;
      case PF_1555:
        for (let k = 0, s = p >> 1; k < n; k++, s++) {
          const c = u16[s];
          const r = (c >> 10) & 31, g = (c >> 5) & 31, b = c & 31;
          out[k * 4] = (r << 3) | (r >> 2); out[k * 4 + 1] = (g << 3) | (g >> 2); out[k * 4 + 2] = (b << 3) | (b >> 2); out[k * 4 + 3] = c & 0x8000 ? 255 : 0;
        }
        break;
      case PF_24_RGB:
        for (let k = 0; k < n; k++) { out[k * 4] = u8[p + k * 3 + 2]; out[k * 4 + 1] = u8[p + k * 3 + 1]; out[k * 4 + 2] = u8[p + k * 3]; out[k * 4 + 3] = 255; }
        break;
      default:      // 32-bit XRGB / ARGB, stored b, g, r, a
        for (let k = 0; k < n; k++) { out[k * 4] = u8[p + k * 4 + 2]; out[k * 4 + 1] = u8[p + k * 4 + 1]; out[k * 4 + 2] = u8[p + k * 4]; out[k * 4 + 3] = t.format === PF_32_ARGB ? u8[p + k * 4 + 3] : 255; }
        break;
    }
    return { w, h, rgba: out };
  };
  /** Brings the renderer's copy of a 3D/2D handle up to date (the original does this lazily at draw time too). */
  const sync = (t) => {
    if (!t.dirty || !render()) return;
    for (let k = 0; k < t.data.length; k++) if (t.dirty & (1 << k)) {
      // The engine unlocks a level whether or not it wrote to it: the game's own menu does so with
      // all of its 35 bitmaps every frame (9 MB of pixels). A level whose bytes are the ones the
      // renderer already has is not converted and sent again. Renderer-side only: t.sums is not
      // part of a save state and nothing of it reaches the game.
      if (!t.sums) t.sums = [];
      if (unchanged(t, k)) continue;
      const px = pixels(t, k); render().uploadTexture(t, k, px.w, px.h, px.rgba);
    }
    t.dirty = 0;
    t.version++;
  };
  /** Whether level `mip` of a handle holds the bytes it held at its last upload; remembers the bytes' two checksums. */
  const unchanged = (t, mip) => {
    const side = t.kind === '3d' ? Math.max(1, t.size >> mip) : 0, n = (side ? side * side : t.w * t.h) * t.bpp, p = t.data[mip];
    let a = 0x811C9DC5 ^ n, b = 0x9E3779B9, k = p;
    const end = p + n;
    if (!(p & 3)) for (const stop = p + (n & ~3); k < stop; k += 4) { const v = u32[k >> 2]; a = Math.imul(a ^ v, 0x01000193); a = (a << 13) | (a >>> 19); b = (Math.imul(b, 0x85EBCA6B) + v) | 0; b ^= b >>> 15; }
    for (; k < end; k++) { a = Math.imul(a ^ u8[k], 0x01000193); b = (Math.imul(b, 0x85EBCA6B) + u8[k]) | 0; }
    const same = t.sums[mip * 2] === a && t.sums[mip * 2 + 1] === b;
    t.sums[mip * 2] = a; t.sums[mip * 2 + 1] = b;
    return same;
  };
  drv.smoothed = 0;               // for the checks: 4444 levels that went to the renderer smoothed (flag smoothSprites)
  /** Every handle's pixels again, for a renderer that lost them (new context, restored save state) or must get them made another way (a flag). */
  drv.reupload = () => {
    for (const t of drv.handles.values()) { if (t.kind !== 'lightmap') { t.dirty = (1 << t.data.length) - 1; t.sums = null; } else t.loaded = false; }
  };

  // --- lightmaps (4.3, 4.4) -------------------------------------------------------------
  // DRV_LInfo: i16 Width, i16 Height, i32 MinU, i32 MinV, u8* RGBLight[0], u8* RGBLight[1], i32 Face, THandle*
  // A lightmap that changes is uploaded every frame (a few of about 1 KB each): those are written
  // into one array that is used again. The renderer gets a part of it and must copy what it wants
  // to keep (remote.js copies everything that is not a whole buffer of its own); a large one gets a
  // new array, which the recorder hands over as it is.
  const lmScratch = new Uint8Array(16384 + 4);
  const rgbToRgba = (p, n) => {
    const out = n * 4 < lmScratch.length ? lmScratch.subarray(0, n * 4) : new Uint8Array(n * 4);
    for (let k = 0; k < n; k++) { out[k * 4] = u8[p + k * 3]; out[k * 4 + 1] = u8[p + k * 3 + 1]; out[k * 4 + 2] = u8[p + k * 3 + 2]; out[k * 4 + 3] = 255; }
    return out;
  };
  /** Runs the engine's SetupLightmap for a polygon and refreshes the renderer's lightmap. Returns the handle or null. */
  const setupArgs = [0, 0];          // the callback's arguments, one array for every polygon (m.call only reads it)
  const setupLightmap = (lInfo) => {
    const lm = drv.handles.get(u32[(lInfo + 0x18) >> 2]);
    if (!lm) return null;
    const setup = u32[(table + 0xAC) >> 2];
    u32[dynFlag >> 2] = 0;
    if (setup) { setupArgs[0] = lInfo; setupArgs[1] = dynFlag; m.call(setup, setupArgs); }
    const dynamic = u32[dynFlag >> 2] !== 0;
    const w = i16[lInfo >> 1], h = i16[(lInfo + 2) >> 1];
    // upload when never uploaded, or when it was dynamic this time or the previous time (0x10005880)
    if (!lm.loaded || dynamic || lm.wasDynamic) {
      const src = u32[(lInfo + 0x0C) >> 2];
      if (src && render()) render().uploadLightmap(lm, 0, w, h, rgbToRgba(src, w * h));
      lm.loaded = true;
    }
    lm.wasDynamic = dynamic;
    const fogSrc = u32[(lInfo + 0x10) >> 2];
    lm.hasFog = fogSrc !== 0;
    if (fogSrc && render()) render().uploadLightmap(lm, 1, w, h, rgbToRgba(fogSrc, w * h));
    lm.lw = w; lm.lh = h;
    return lm;
  };

  // --- the two polygon queues (7.2) -------------------------------------------------------
  // The game hands over some 800 polygons a frame. A queue keeps them in arrays that are made
  // once: the vertices of all its polygons in one array (a queue holds fewer than 0x400), the
  // records used again. (A copy of the vertices and an object per polygon were about 2 MB of
  // garbage per second on the game thread.) A queue has two such sets: take() hands out the
  // filled one and continues on the other, so a polygon that would arrive while the first is
  // being drawn (the engine's lightmap callback runs in between) cannot touch it.
  const QUEUE_FLOATS = 0x400 * 9;
  const makeQueue = () => { const set = () => ({ recs: [], v: new Float32Array(QUEUE_FLOATS), list: [], count: 0 }); return { n: 0, verts: 0, cur: set(), spare: set() }; };
  const world = makeQueue(), misc = makeQueue();
  const resetQueues = () => { world.n = 0; world.verts = 0; misc.n = 0; misc.verts = 0; };
  /** The next record of a queue, with the polygon's n vertices (DRV_TLVertex, 9 floats each) copied behind those already there: p.off, p.n. */
  const enqueue = (q, pnts, n) => {
    const c = q.cur, off = q.verts * 9, floats = n * 9;
    if (off + floats > c.v.length) { const v = new Float32Array(Math.max(c.v.length * 2, off + floats)); v.set(c.v); c.v = v; }
    let p = c.recs[q.n];
    if (!p) p = c.recs[q.n] = { key: 0, tex: null, mip: 0, lInfo: 0, flags: 0, shiftU: 0, shiftV: 0, scaleU: 0, scaleV: 0, off: 0, n: 0, solid: false };
    p.off = off; p.n = n;
    const v = c.v;
    for (let k = 0, src = pnts >> 2; k < floats; k++) v[off + k] = f32[src + k];
    q.n++; q.verts += n;
    return p;
  };
  /** What a queue holds: { list: its `count` records sorted by key (in the order of arrival within a key), v: their vertices }. The queue is empty afterwards. */
  const take = (q) => {
    const c = q.cur, n = q.n, list = c.list;
    q.cur = q.spare; q.spare = c; q.n = 0; q.verts = 0;
    // The list is never made shorter: `count` says how much of it is this flush. JavaScriptCore gives an array that
    // loses more than half of its entries (and more than 64) a new store, and filling it again by push makes a row of
    // ever larger ones: 3 KB each time (measured), several times a frame, because a queue is flushed full and then
    // nearly empty in turn. On the game thread that is only collected when its heap's allowance is used up.
    for (let k = 0; k < n; k++) { if (k < list.length) list[k] = c.recs[k]; else list.push(c.recs[k]); }
    sortByKey(list, n);
    c.count = n;
    return c;
  };
  // The first n of a list by key, in the order of arrival within a key: what list.sort((a, b) => a.key - b.key) gives
  // (a stable sort has one answer), without that function's working arrays in V8 (13 to 18 KB a frame, measured in the
  // Node runner) and over the n records only.
  const sortScratch = [];
  const sortByKey = (a, n) => {
    let k = 1;
    while (k < n && a[k - 1].key <= a[k].key) k++;
    if (k >= n) return;                         // in order as it came
    if (n <= 12) {
      for (let i = k; i < n; i++) { const p = a[i], key = p.key; let j = i - 1; while (j >= 0 && a[j].key > key) { a[j + 1] = a[j]; j--; } a[j + 1] = p; }
      return;
    }
    while (sortScratch.length < n) sortScratch.push(null);
    let src = a, dst = sortScratch;
    for (let w = 1; w < n; w *= 2) {
      for (let lo = 0; lo < n; lo += 2 * w) {
        const mid = Math.min(lo + w, n), hi = Math.min(lo + 2 * w, n);
        let i = lo, j = mid, o = lo;
        while (i < mid && j < hi) dst[o++] = src[j].key < src[i].key ? src[j++] : src[i++];
        while (i < mid) dst[o++] = src[i++];
        while (j < hi) dst[o++] = src[j++];
      }
      const t = src; src = dst; dst = t;
    }
    if (src !== a) for (let i = 0; i < n; i++) a[i] = src[i];
  };
  const uvs = new Float32Array(64 * 4);          // texture and lightmap coordinates of the polygon being emitted
  const noUvs = new Float32Array(64 * 4);        // all zero, for a polygon without a texture
  // vertex and index scratch for one batch
  const VB = new Float32Array(MAX_VERTS * 3 * VERTEX_FLOATS);
  const IB = new Uint16Array(MAX_VERTS * 9);
  let nv = 0, ni = 0;
  // the draws of one batch: the first `nd` of an array whose objects are used again for the next batch (the renderer
  // takes the values, not the objects). The array is never emptied with length = 0: see take().
  const draws = [];
  let nd = 0;
  const pushDraw = (first, count, tex, lm, lmLayer, mode, ztest, zwrite, clamp) => {
    const d = nd ? draws[nd - 1] : undefined;
    if (d && d.tex === tex && d.lm === lm && d.lmLayer === lmLayer && d.mode === mode && d.ztest === ztest && d.zwrite === zwrite && d.clamp === clamp && d.first + d.count === first) { d.count += count; return; }
    const e = draws[nd] || (draws[nd] = { first: 0, count: 0, tex: null, lm: null, lmLayer: 0, mode: 0, ztest: false, zwrite: false, clamp: false });
    e.first = first; e.count = count; e.tex = tex; e.lm = lm; e.lmLayer = lmLayer; e.mode = mode; e.ztest = ztest; e.zwrite = zwrite; e.clamp = clamp;
    nd++;
  };
  let drawn = false;              // something of this scene went to the renderer (for the sky backdrop)
  const submit = () => {
    if (ni) drawn = true;
    if (ni && render()) render().draw(VB, nv, IB, ni, draws, nd);
    drv.draws += nd;
    nv = 0; ni = 0; nd = 0;
  };
  const fogFactor = (z) => {
    const f = drv.fog;
    if (!f) return 1;
    // 0x10006A59: zc = min(z, End); factor = (End - zc) / (End - Start) * 255, truncated, at most 255
    const v = Math.trunc((f.end - Math.min(z, f.end)) / (f.end - f.start) * 255);
    return v > 255 ? 1 : v < 0 ? 0 : v / 255;
  };
  /** Mip level of a polygon as the original chooses it (0x10006880). */
  const mipLevel = (pnts, n, su, sv, last) => mipOf(f32, pnts >> 2, n, su, sv, last);
  /** The same for n vertices of 9 floats in V from float o on. */
  const mipOf = (V, o, n, su, sv, last) => {
    if (last <= 0) return 0;
    let best = 999999;
    for (let k = 0; k < n; k++) {
      const a = o + k * 9, b = o + ((k + 1) % n) * 9;
      const dx = V[b] - V[a], dy = V[b + 1] - V[a + 1];
      const du = (V[b + 3] - V[a + 3]) * su, dv = (V[b + 4] - V[a + 4]) * sv;
      const r = Math.fround(Math.fround(du * du + dv * dv) / Math.fround(dx * dx + dy * dy));
      if (r < best) best = r;
    }
    const lv = best <= 4 ? 0 : best <= 15 ? 1 : best <= 40 ? 2 : 3;
    return Math.min(lv, last);
  };
  /** Appends a fan as triangles: n vertices (9 floats each) of v from float `from` on, uvs[k * 4 ..] = u, v, lu, lv of vertex k. Returns the first index. */
  const emit = (v, from, n, alpha, lod, uvs, fog) => {
    const base = nv;
    for (let k = 0; k < n; k++) {
      const o = nv * VERTEX_FLOATS, s = from + k * 9;
      VB[o] = v[s]; VB[o + 1] = v[s + 1]; VB[o + 2] = v[s + 2];
      VB[o + 3] = uvs[k * 4]; VB[o + 4] = uvs[k * 4 + 1]; VB[o + 5] = uvs[k * 4 + 2]; VB[o + 6] = uvs[k * 4 + 3];
      // colours are converted with truncation, like the original's float-to-int (4.1)
      VB[o + 7] = Math.min(255, Math.max(0, Math.trunc(v[s + 5]))) / 255;
      VB[o + 8] = Math.min(255, Math.max(0, Math.trunc(v[s + 6]))) / 255;
      VB[o + 9] = Math.min(255, Math.max(0, Math.trunc(v[s + 7]))) / 255;
      VB[o + 10] = alpha;
      VB[o + 11] = fog ? fogFactor(v[s + 2]) : 1;
      VB[o + 12] = lod;
      nv++;
    }
    const first = ni;
    for (let k = 2; k < n; k++) { IB[ni++] = base; IB[ni++] = base + k - 1; IB[ni++] = base + k; }
    return first;
  };
  const flushWorld = () => {
    if (!world.n) return;
    const { list, v: V, count } = take(world);
    // lightmapped polygons first, then the ones without (single-pass path of the original)
    for (let pass = 0; pass < 2; pass++) {
      for (let i = 0; i < count; i++) {
        const p = list[i];
        if ((p.lInfo !== 0) !== (pass === 0)) continue;
        const t = p.tex;
        sync(t);
        const n = p.n, o = p.off;
        let lm = null, lu0 = 0, lv0 = 0, lsu = 0, lsv = 0;
        if (p.lInfo) {
          lm = setupLightmap(p.lInfo);
          if (lm) {
            lu0 = 8 - i32[(p.lInfo + 4) >> 2]; lv0 = 8 - i32[(p.lInfo + 8) >> 2];
            lsu = 1 / (16 * lm.lw); lsv = 1 / (16 * lm.lh);
          }
        }
        for (let k = 0; k < n; k++) {
          const u = V[o + k * 9 + 3], v = V[o + k * 9 + 4];
          uvs[k * 4] = (u * p.scaleU + p.shiftU) / t.size;
          uvs[k * 4 + 1] = (v * p.scaleV + p.shiftV) / t.size;
          uvs[k * 4 + 2] = (u + lu0) * lsu;
          uvs[k * 4 + 3] = (v + lv0) * lsv;
        }
        if (nv + n > VB.length / VERTEX_FLOATS - 64) submit();
        const alpha = p.flags & DRV_RENDER_ALPHA ? Math.min(255, Math.max(0, Math.trunc(V[o + 8]))) / 255 : 1;
        const first = emit(V, o, n, alpha, p.mip, uvs, true);
        pushDraw(first, (n - 2) * 3, t, lm, 0, p.solid ? 2 : 0, true, true, (p.flags & DRV_RENDER_CLAMP_UV) !== 0);
        if (lm && lm.hasFog) {
          // fog lights: the polygon once more with the fog lightmap, added on top, without driver fog
          for (let k = 0; k < n; k++) { uvs[k * 4] = uvs[k * 4 + 2]; uvs[k * 4 + 1] = uvs[k * 4 + 3]; }
          const f2 = emit(V, o, n, 1, 0, uvs, false);
          pushDraw(f2, (n - 2) * 3, null, lm, 1, 1, true, true, true);
        }
      }
    }
    submit();
  };
  const flushMisc = () => {
    if (!misc.n) return;
    const { list, v: V, count } = take(misc);
    for (let i = 0; i < count; i++) {
      const p = list[i];
      const t = p.tex;
      sync(t);
      const n = p.n, o = p.off;
      const ku = t.w / t.size, kv = t.h / t.size;
      for (let k = 0; k < n; k++) { uvs[k * 4] = V[o + k * 9 + 3] * ku; uvs[k * 4 + 1] = V[o + k * 9 + 4] * kv; uvs[k * 4 + 2] = 0; uvs[k * 4 + 3] = 0; }
      if (nv + n > VB.length / VERTEX_FLOATS - 64) submit();
      const alpha = Math.min(255, Math.max(0, Math.trunc(V[o + 8]))) / 255;
      const first = emit(V, o, n, alpha, p.mip, uvs, true);
      pushDraw(first, (n - 2) * 3, t, null, 0, 0, !(p.flags & DRV_RENDER_NO_ZMASK), !(p.flags & DRV_RENDER_NO_ZWRITE), (p.flags & DRV_RENDER_CLAMP_UV) !== 0);
    }
    submit();
  };

  // --- the Graveyard's wall trim (source/host/fixes.js, flag wallTrim; off = the original) --------
  // In lvl02a two strips of a solid wall (faces 920 and 921, 8 units wide beside the descending
  // passage) carry the gates' bitmap hek_door, whose palette index 255 is see-through: 9538 of its
  // 16384 texels. The engine gives that bitmap a 1555 surface with those texels at alpha 0 because
  // the gates use it with their transparency flag, and the original driver blends every world
  // polygon by texture alpha, so the wall has holes (seen in a picture of this port without the
  // fix; not seen in the original itself). The strips arrive here as world polygons without the
  // alpha flag (flags 0), the gates' own faces with it (flags 3). With the fix such a polygon is
  // drawn with every texel, the see-through ones in their palette colour (black). The bitmap is
  // known by its own see-through pattern: 128 x 128, 1555, and the hash of its alpha bits as they
  // are in the level file. Nothing is written to game memory.
  const TRIM_MASK = 0xF2E30131;          // FNV-1a over the 16384 alpha bits of hek_door's first level
  const isTrim = (t) => {
    if (t.trim !== undefined) return t.trim;
    t.trim = false;
    if (t.format !== PF_1555 || t.size !== 128 || t.w !== 128 || t.h !== 128) return false;
    let h = 0x811C9DC5;
    for (let k = 0, s = t.data[0] >> 1; k < 16384; k++) h = Math.imul(h ^ (u16[s + k] >>> 15), 0x01000193) >>> 0;
    return (t.trim = h === TRIM_MASK);
  };
  drv.trimPolys = 0;              // for tools/fixes-check.mjs: world polygons drawn that way

  // --- the sky behind the world (source/host/fixes.js, flag skyBackdrop; off = the original) ------
  // The engine draws its sky box only through the world's faces that are marked as sky: for each
  // such face in view it clips the box's faces to that face's outline and hands them over as misc
  // polygons with FLUSH and CLAMP (RenderSkyThroughFrustum 0x5BB340). Where a view has neither a
  // world face nor a sky face, nothing is drawn and the cleared frame buffer shows: black. The
  // Forest has such a place behind the fairy in her first lesson, and the original under Wine shows
  // the same black area there (docs/research/effects-low-end.md 7).
  // With the flag the whole box is drawn first, behind everything. It is already there: before the
  // world is drawn, SetupSkyForScene 0x5BA160 clips the six faces of the box to the camera's view
  // and leaves them in RenderScene's SkyInfo (0x5B88D0, a local; filled by 0x5BA250):
  //   +0x10C  number of polygons (at most 6; a face without a texture is left out)
  //   +0x110  + k * 0x78: the vertices of polygon k in camera space, 12 bytes each (x, y, z; z negative in front)
  //   +0x3E0  + k * 0xF0: their texture coordinates, 0x18 bytes each (u, v first)
  //   +0x980  + k * 4: the number of vertices;  +0x998 + k * 4: the box's face
  // The driver's BeginWorld is called from 0x5B8B5E in 0x5B8B40 (SUB ESP,0x6A0; PUSH EBP), whose
  // arguments are the camera and the SkyInfo: [esp+0x6AC] and [esp+0x6B4] here, with the return into
  // RenderScene (0x5B8964) at [esp+0x6A8]. Not for a mirror's scene (RenderScene inside itself,
  // depth counter 0x722F24): the main view is already drawn then. Texture of a face as 0x5BB340
  // finds it: index = the sky data's table (*(*0x6CC41C + 0x18) + 0xF4 + face * 4, the table
  // 0x5BA250 tests), bitmap = *(*(*(*0x6CC40C + 0x1C8) + 4) + 0x40 + index * 0x4C) (0x5D40F0), its
  // driver handle at bitmap + 0xAC (0x453600). Projection as the camera's own (0x5C9330, 0x5C92E0),
  // z as the engine's sky polygons have it, fog as for any misc polygon: where the engine draws its
  // own piece of sky afterwards it puts the same texels on the same pixels. Reads game memory only.
  const SKY_RET = 0x5B8B61, SCENE_RET = 0x5B8964, SCENE_DEPTH = 0x722F24;
  const skyV = new Float32Array(12 * 9);
  drv.skyPolys = 0;               // for the checks: sky polygons drawn as a backdrop
  const skyBackdrop = (esp) => {
    if (u32[esp >> 2] !== SKY_RET || u32[(esp + 0x6A8) >> 2] !== SCENE_RET || i32[SCENE_DEPTH >> 2] !== 0) return;
    const cam = u32[(esp + 0x6AC) >> 2], si = u32[(esp + 0x6B4) >> 2];
    if (!cam || si <= esp || si - esp > 0x2000) return;          // the SkyInfo is a local of the caller, just above
    const count = i32[(si + 0x10C) >> 2];
    if (count < 1 || count > 6) return;
    const bsp = u32[0x6CC41C >> 2], data = bsp ? u32[(bsp + 0x18) >> 2] : 0, world = u32[0x6CC40C >> 2], list = world ? u32[(world + 0x1C8) >> 2] : 0, bitmaps = list ? u32[(list + 4) >> 2] : 0;
    if (!data || !bitmaps) return;
    const clampUv = !(f32[(data + 0xF0) >> 2] > 1);              // the flags of 0x5BB340: FLUSH, and CLAMP unless the sky's scale is over 1
    const sx = f32[(cam + 0x24) >> 2], cx = f32[(cam + 0x28) >> 2], cy = f32[(cam + 0x2C) >> 2], zs = f32[(cam + 0x11C) >> 2];
    const clip = !(u32[0x6CC414 >> 2] & 0x80);                   // which of the camera's two projections 0x5D16C0 takes
    const l = f32[(cam + 0x0C) >> 2], r = f32[(cam + 0x10) >> 2], top = f32[(cam + 0x14) >> 2], bottom = f32[(cam + 0x18) >> 2];
    for (let k = 0; k < count; k++) {
      const n = i32[(si + 0x980 + k * 4) >> 2], face = i32[(si + 0x998 + k * 4) >> 2];
      if (n < 3 || n > 10 || face < 0 || face > 5) continue;
      const index = i32[(data + 0xF4 + face * 4) >> 2];
      if (index < 0) continue;
      const t = drv.handles.get(u32[(u32[(bitmaps + 0x40 + index * 0x4C) >> 2] + 0xAC) >> 2]);
      if (!t || t.kind !== '3d') continue;
      const ku = t.w / t.size, kv = t.h / t.size;
      for (let j = 0; j < n; j++) {
        const p = (si + 0x110 + k * 0x78 + j * 12) >> 2, q = (si + 0x3E0 + k * 0xF0 + j * 0x18) >> 2, o = j * 9;
        let z = -f32[p + 2];
        if (clip ? z < 0.01 : z === 0) z = 0.01;
        const s = Math.fround(sx / z);
        let x = Math.fround(s * f32[p] + cx), y = Math.fround(cy - s * f32[p + 1]);
        if (clip) { x = x < l ? l : x > r ? r : x; y = y < top ? top : y > bottom ? bottom : y; }
        skyV[o] = x; skyV[o + 1] = y; skyV[o + 2] = z * zs; skyV[o + 3] = f32[q]; skyV[o + 4] = f32[q + 1];
        skyV[o + 5] = 255; skyV[o + 6] = 255; skyV[o + 7] = 255; skyV[o + 8] = 255;
        uvs[j * 4] = f32[q] * ku; uvs[j * 4 + 1] = f32[q + 1] * kv; uvs[j * 4 + 2] = 0; uvs[j * 4 + 3] = 0;
      }
      sync(t);
      const first = emit(skyV, 0, n, 1, mipOf(skyV, 0, n, t.w, t.h, t.mips - 1), uvs, true);
      pushDraw(first, (n - 2) * 3, t, null, 0, 0, false, false, clampUv);
      drv.skyPolys++;
    }
    submit();
  };

  // --- scene (7.1) ------------------------------------------------------------------------
  I.BeginScene = (esp, clear, clearZ) => {
    drv.inScene = true;
    drawn = false;
    if (host.torches) host.torches.beginScene(esp);          // flag handTorches (torches.js): light slots of the engine for this scene; nothing with the flag off
    if (render()) render().beginScene(!!clear, !!clearZ, drv.fog);
    return 1;
  };
  I.EndScene = () => {
    flushWorld(); flushMisc();
    drv.inScene = false;
    drv.frames++;
    if (render()) render().endScene();
    if (host.torches) host.torches.endScene();               // the light slots get their bytes back
    if (host.onFrame) host.onFrame();
    return 1;
  };
  I.BeginWorld = (esp) => {
    // flag skyBackdrop: the sky box behind this scene's world, when nothing of the scene is on the picture yet
    if (!drawn && drv.active && host.fixes && host.fixes.flags.skyBackdrop) skyBackdrop(esp);
    if (host.torches) host.torches.beginWorld(esp);          // the flames of hands without an emitter, as polygons of this frame
    return 1;
  };
  I.BeginMeshes = () => 1;
  I.BeginModels = () => 1;
  I.EndWorld = () => { flushWorld(); flushMisc(); return 1; };
  I.EndModels = I.EndWorld;
  I.EndMeshes = () => { flushMisc(); flushWorld(); return 1; };

  // DRV_TLVertex: x, y, z, u, v, r, g, b, a (9 floats, 4.1)
  I.RenderGouraudPoly = (esp, pnts, n) => {
    const flags = stack(esp, 0);
    if (!drv.active) return 1;
    drv.polys++;
    if (flags & DRV_RENDER_FLUSH) { flushWorld(); flushMisc(); }
    // drawn at once, straight from the game's vertices
    const first = emit(f32, pnts >> 2, n, Math.min(255, Math.max(0, Math.trunc(f32[(pnts >> 2) + 8]))) / 255, 0, n > 64 ? new Float32Array(n * 4) : noUvs, true);
    pushDraw(first, (n - 2) * 3, null, null, 0, 0, true, true, false);
    submit();
    return 1;
  };
  I.RenderWorldPoly = (esp, pnts, n) => {
    const th = stack(esp, 0), texInfo = stack(esp, 1), lInfo = stack(esp, 2), flags = stack(esp, 3);
    if (!drv.active) return 1;
    drv.polys++;
    const t = drv.handles.get(th);
    if (!t || t.kind !== '3d') return 1;
    // queue limits as in the insert function 0x10005590
    if (world.verts + n >= 0x400 || world.n + 1 > 0xFF) flushWorld();
    if (flags & DRV_RENDER_FLUSH) flushWorld();
    const scaleU = 1 / f32[(texInfo + 8) >> 2], scaleV = 1 / f32[(texInfo + 12) >> 2];
    const mip = mipLevel(pnts, n, scaleU, scaleV, t.mips - 1);
    const p = enqueue(world, pnts, n);
    p.key = (t.slot << 4) + mip; p.tex = t; p.mip = mip; p.lInfo = lInfo; p.flags = flags; p.shiftU = f32[texInfo >> 2]; p.shiftV = f32[(texInfo + 4) >> 2]; p.scaleU = scaleU; p.scaleV = scaleV;
    p.solid = !(flags & DRV_RENDER_ALPHA) && !!host.fixes && host.fixes.flags.wallTrim && isTrim(t) && host.fixes.level() === 'lvl02a';
    if (p.solid) drv.trimPolys++;
    if (flags & DRV_RENDER_FLUSH) flushWorld();
    return 1;
  };
  // --- the game's 2D bitmaps on a screen that is not 4:3 (source/host/fixes.js, flag hudShape; off = the original) ---
  // CAdamEngine::DrawBitmap 0x5614E0 takes its rectangle as fractions of the screen and multiplies x by the mode's
  // width and y by its height apart (size 0x561947..0x561974, place 0x561CC4). Its callers make the fractions from
  // 640 x 480 positions (the HUD's icons: 0x454090, x / 640 and y / 480), so on a mode wider than 4:3 a bitmap is
  // width / 640 times wider and no higher. Here a bitmap gets the width it has at 4:3 again, around a point that
  // depends on what it is (docs/research/genesis-driver.md 11b). A quad of DrawBitmap is known by the return addresses
  // the game's own calls left on its stack: [esp] in geEngine_RenderPoly 0x5BBA8B, [esp+20] in DrawBitmap 0x562267,
  // [esp+316] in DrawBitmap's caller. Only the queue's copy of the vertices is changed; game memory is read.
  // x' = round(P s) + (x / s - P) u, with s = width / 640, k = height / 480, u the smaller of the two (1 in this port's
  // modes) and P the fixed point in 640 units; on a screen higher than 4:3 the same for y: y' = round(Q k) + (y / k - Q) u
  // with Q in 480 units. An axis whose factor is u is not touched (the wide modes' y, the high modes' x: bit for bit as before).
  let sliderPivot = 403.5, sliderPivotY = 240, sliderLine = -1;        // the menu's slider bar is at 340..467 (0x5392ED); its knob keeps its place on it
  let decalMid = -1;              // the middle line of the last DrawDecal: the letters of the entry a slider belongs to are drawn just before it
  drv.bitmaps = null;             // for tools/hud-check.mjs: an array here gets every DrawBitmap quad as it goes to the renderer
  drv.reshaped = 0;               // for the checks: bitmaps drawn with another shape than the game gave them
  drv.bitmapsSeen = 0;            // quads of DrawBitmap, any shape of screen
  drv.strangers = 0;              // flat screen quads that did not come through DrawBitmap (none seen; they are left as they are)
  drv.hudLift = 0;                // lines of the game's screen the HUD's bottom group is lifted on a high screen (the page's touch controls lie there)
  const reshape = (ra, v, off) => {
    const s = drv.width / 640, k = drv.height / 480, u = s < k ? s : k;
    let x0 = v[off], x1 = x0, y0 = v[off + 1], y1 = y0;
    for (let j = 1; j < 4; j++) { const x = v[off + j * 9], y = v[off + j * 9 + 1]; if (x < x0) x0 = x; if (x > x1) x1 = x; if (y < y0) y0 = y; if (y > y1) y1 = y; }
    const a = x0 / s, b = x1 / s, c = y0 / k, d = y1 / k;
    let P, Q, lift = 0;
    switch (ra) {
      // HUD icons (HUDIcon.ini: x 5..65 and 510..596): the left group, the right group; the enemy's portrait and hearts (y 435) at the bottom, the rest at the top (the JavaScript port's hud.js: x >= 500, y >= 400)
      case 0x454151: P = a < 500 ? 0 : 640; if (c < 400) Q = 0; else { Q = 480; lift = drv.hudLift; } break;
      case 0x487FE4: case 0x48E4DB: case 0x48AB73: P = 0; Q = c < 240 ? 0 : 480; break;      // the logo of the loading, results and retry screens: its corner
      case 0x488037: case 0x4880BA: P = 320; Q = 240; break;                    // loading: the picture and the progress bar under it
      case 0x48F94B: case 0x48AC21: case 0x48ACCE: P = (a + b) / 2; Q = (c + d) / 2; break;      // the results' row icons, Ja and Nee: where they are, since the text on and next to them is placed with the real width and height
      // The menu's slider bar, and its knob. On a high screen the game puts the entry's letters and the bar at different
      // heights (letters from 111 down and the bar's middle at 121.5 at 480 lines; 252 and 223.7 at 1422: run), so there the
      // bar goes on the middle line of the letters drawn just before it.
      case 0x5392ED: P = sliderPivot = (a + b) / 2; Q = sliderPivotY = (c + d) / 2; sliderLine = k !== u && decalMid >= 0 ? decalMid : -1; break;
      case 0x5393CC: P = sliderPivot; Q = sliderPivotY; break;
      // the three tiles of the menu's header and of its footer span the screen: DrawBitmap cuts a tile's width to whole
      // pixels (ftol) and not its place, which leaves a column open between two tiles (281 wide, the next at 281.73 in a mode of 854)
      case 0x53ADA8: case 0x53AE03: case 0x53AE5E: case 0x53AEDA: case 0x53AF35: case 0x53AF90:
        if (s !== 1) for (let j = 0; j < 4; j++) if (v[off + j * 9] === x1) v[off + j * 9] = x1 + 1;
        // on a high screen they keep their height, the header at the top and the footer at the bottom
        if (k !== u) { const q = c < 240 ? 0 : 480, base = Math.round(q * k); for (let j = 0; j < 4; j++) v[off + j * 9 + 1] = base + (v[off + j * 9 + 1] / k - q) * u; }
        drv.reshaped++;
        return;
      case 0x4EF942: if (k === u) return; P = 0; Q = (c + d) / 2; break;         // a letter of a scene's line: as high as the game draws it at 4:3, where its line is
      default: return;            // bars, backgrounds, fades and dims fill the screen; what was never seen stays as the game draws it
    }
    if (s !== u) { const base = Math.round(P * s); for (let j = 0; j < 4; j++) v[off + j * 9] = base + (v[off + j * 9] / s - P) * u; }
    if (k !== u) { const base = ((ra === 0x5392ED || ra === 0x5393CC) && sliderLine >= 0 ? sliderLine : Math.round(Q * k)) - lift; for (let j = 0; j < 4; j++) v[off + j * 9 + 1] = base + (v[off + j * 9 + 1] / k - Q) * u; }
    drv.reshaped++;
  };
  I.RenderMiscTexturePoly = (esp, pnts, n) => {
    const th = stack(esp, 0), flags = stack(esp, 1);
    if (!drv.active) return 1;
    drv.polys++;
    const t = drv.handles.get(th);
    if (!t || t.kind !== '3d') return 1;
    if (misc.verts + n > 0x3FF || misc.n + 1 > 0xFF) flushMisc();
    if (flags & DRV_RENDER_FLUSH) flushMisc();
    // the readable subtitle box: the letters of a scene's line are not drawn (subtitles.js); everything else of the call is as it was
    if (host.subtitles && host.subtitles.inside && host.subtitles.hide()) { drv.hidden = (drv.hidden || 0) + 1; return 1; }
    const mip = mipLevel(pnts, n, t.w, t.h, t.mips - 1);
    const p = enqueue(misc, pnts, n);
    p.key = (t.slot << 4) + mip; p.tex = t; p.mip = mip; p.flags = flags;
    if (n === 4 && (flags & ~DRV_RENDER_ALPHA) === 0x1E) {                      // what DrawBitmap sets (0x562248): flush, no depth test or write, clamped
      if (u32[esp >> 2] === 0x5BBA8B && u32[(esp + 20) >> 2] === 0x562267) {
        const ra = u32[(esp + 316) >> 2], v = misc.cur.v;
        drv.bitmapsSeen++;
        if (drv.width * 480 !== drv.height * 640 && host.fixes && host.fixes.flags.hudShape) reshape(ra, v, p.off);
        if (drv.bitmaps) { let x0 = v[p.off], x1 = x0, y0 = v[p.off + 1], y1 = y0; for (let j = 1; j < 4; j++) { const x = v[p.off + j * 9], y = v[p.off + j * 9 + 1]; if (x < x0) x0 = x; if (x > x1) x1 = x; if (y < y0) y0 = y; if (y > y1) y1 = y; } let g0 = f32[pnts >> 2], g1 = g0, h0 = f32[(pnts + 4) >> 2], h1 = h0; for (let j = 1; j < 4; j++) { const x = f32[(pnts + j * 36) >> 2], y = f32[(pnts + j * 36 + 4) >> 2]; if (x < g0) g0 = x; if (x > g1) g1 = x; if (y < h0) h0 = y; if (y > h1) h1 = y; } drv.bitmaps.push({ ra, x0, y0, x1, y1, gx0: g0, gx1: g1, gy0: h0, gy1: h1 }); }
      } else if (!drv.strangers++ && !drv.bitmapsSeen) console.warn('gdriver: the first screen quad has no return address of DrawBitmap 0x5614E0 on the stack (a build made with --no-ret-store?): the 2D bitmaps are drawn as the game gives them');
    }
    if (flags & DRV_RENDER_FLUSH) flushMisc();
    return 1;
  };
  // DrawDecal: an immediate 1:1 blit with the colour key, clipped as the original does (7.6)
  I.DrawDecal = (esp, th, srcRect) => {
    let x = stack(esp, 0) | 0, y = stack(esp, 1) | 0;
    if (!drv.active) return 1;
    const t = drv.handles.get(th);
    if (!t || t.kind !== '2d') return 1;
    let left = 0, top = 0, right = t.w, bottom = t.h, w = t.w, h = t.h;
    if (srcRect) {
      left = i32[srcRect >> 2]; top = i32[(srcRect + 4) >> 2]; right = i32[(srcRect + 8) >> 2]; bottom = i32[(srcRect + 12) >> 2];
      w = right - left + 1; h = bottom - top + 1;
    }
    decalMid = y + h / 2;
    const W = drv.width, H = drv.height;
    if (x + w <= 0 || y + h <= 0 || x >= W || y >= H) return 1;
    if (x + w >= W - 1) right -= (x + w) - (W - 1);
    if (y + h >= H - 1) bottom -= (y + h) - (H - 1);
    if (x < 0) { left += -x; x = 0; }
    if (y < 0) { top += -y; y = 0; }
    if (srcRect) { i32[srcRect >> 2] = left; i32[(srcRect + 4) >> 2] = top; i32[(srcRect + 8) >> 2] = right; i32[(srcRect + 12) >> 2] = bottom; }
    if (right <= left || bottom <= top) return 1;
    sync(t);
    drv.decals = (drv.decals || 0) + 1;
    drawn = true;
    if (render()) render().decal(t, left, top, right - left, bottom - top, x, y);
    return 1;
  };
  I.ScreenShot = () => 0;                 // not implemented in the original D3D driver either (0x100053B0)
  I.SetGamma = () => 1;                   // no gamma in the original D3D driver (0x100052E0)
  I.GetGamma = (esp, p) => { f32[p >> 2] = 1; return 1; };
  I.SetFogEnable = (esp, enable) => {
    drv.fog = enable ? { r: f32[(esp + 4) >> 2], g: f32[(esp + 8) >> 2], b: f32[(esp + 12) >> 2], start: f32[(esp + 16) >> 2], end: f32[(esp + 20) >> 2] } : null;
    return 1;
  };

  // Save states: the handle list. Pixels are in game memory; the renderer gets everything again.
  const HFIELDS = ['addr', 'slot', 'id', 'kind', 'w', 'h', 'mips', 'format', 'flags', 'bpp', 'data', 'size', 'stride'];
  if (host.snap) host.snap.add('gdriver', () => ({ nextId: drv.nextId, width: drv.width, height: drv.height, hwnd: drv.hwnd, active: drv.active, fog: drv.fog, handles: [...drv.handles.values()].map((t) => Object.fromEntries(HFIELDS.map((k) => [k, t[k]]))) }), (st) => {
    if (render()) render().forget();
    drv.handles.clear(); drv.slots.length = 0;
    Object.assign(drv, { nextId: st.nextId, width: st.width, height: st.height, hwnd: st.hwnd, active: st.active, fog: st.fog });
    for (const f of st.handles) { const t = { ...f, data: f.data.slice(), dirty: 0, version: 0 }; drv.handles.set(t.addr, t); drv.slots[t.slot] = t; }
    resetQueues();
    if (render()) render().init(drv.width, drv.height);
    drv.reupload();
  });

  for (const [off, slot, pop] of SLOTS) {
    u32[(table + off) >> 2] = m.makeThunk('GDriver::' + slot, pop, (esp, ecx, edx) => {
      const count = (drv.calls.get(slot) || 0) + 1;
      drv.calls.set(slot, count);
      if (host.traceDriver && (host.traceDriver === 'all' || count <= 2)) host.log(`driver ${slot}(ecx=${(ecx >>> 0).toString(16)}, edx=${(edx >>> 0).toString(16)}; ${[0, 1, 2, 3].map((k) => stack(esp, k).toString(16)).join(', ')})`);
      return I[slot](esp, ecx >>> 0, edx >>> 0) | 0;
    });
  }

  const hook = m.makeThunk('D3DDrv.dll!DriverHook', 0, (esp) => {
    // BOOL DriverHook(DRV_Driver **Driver), cdecl. Called twice: once to enumerate, once to initialise.
    u32[stack(esp, 0) >> 2] = table;
    return 1;
  });
  host.virtualLibs.set('D3DDRV.DLL', { handle: 0x7E000000, procs: new Map([['DriverHook', hook]]) });
}
