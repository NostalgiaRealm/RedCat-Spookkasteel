// The renderer as the game thread sees it, and the way its calls reach the real one.
//
// The game thread never returns to its event loop (source/web/worker.js), and Chromium only frees
// a picture that left such a thread once that thread gets back to its event loop: handing each
// frame to the page as an ImageBitmap leaked a full-size surface per frame. So no GPU object
// lives in the game thread at all. createRecorder() is what the render driver (source/host/
// gdriver.js) gets as host.render: it writes each call down, and at EndScene posts the frame's
// calls as one message to the render worker (source/web/render-worker.js), which owns the page's
// canvas, does return to its event loop, and replays them on the WebGL renderer (webgl.js) in
// the order they were made.
//
// One frame is one message: { buf, nc, nv, ni, nb, px }.
//   buf   one ArrayBuffer: nc commands (float64), then nv vertex floats (float32, VERTEX_FLOATS
//         per vertex), then ni indices (uint32, counted from the frame's first vertex), then nb
//         bytes of small texture and lightmap pixels
//         It is one of two shared buffers used in turn (SLOT_BYTES each), or, for a frame that
//         does not fit or cannot wait for its turn, a buffer of its own that is handed over. A
//         buffer of its own per frame was 12 MB a second for the render worker to collect, which
//         it did in steps of 64 MB.
//   px    the larger pixel buffers, handed over as they are (the driver makes a new one per upload)
// Nothing comes back by message, because the game thread cannot receive one: the drawing size,
// the frames drawn and the state of the WebGL context are in the shared control words (CTRL in
// source/web/shared.js). Nothing of it reaches the game's memory.
import { VERTEX_FLOATS } from '../host/gdriver.js';
import { CTRL } from '../web/shared.js';

// commands: the code, then its values
const INIT = 1;        // w, h
const CONFIGURE = 2;   // width, height, samples (NaN: as it is)
const FORGET = 3;
const TEXTURE = 4;     // id, 3D?, mips, size, level, w, h, px index or -1, byte offset
const LIGHTMAP = 5;    // id, layer, w, h, px index or -1, byte offset
const DESTROY = 6;     // id
const BEGIN = 7;       // clear, clearZ, fog?, r, g, b
const DRAW = 8;        // first index, count, texture id or 0, lightmap id or 0, layer, mode, ztest | zwrite << 1 | clamp << 2
const DECAL = 9;       // texture id, first vertex
const END = 10;

/** Pixels up to this many bytes travel inside the frame's buffer (the lightmaps that change every frame are about 1 KB each). */
const INLINE_BYTES = 16384;
/** Frames the game thread may be ahead of the render worker: the one being drawn. */
const AHEAD = 1;
/** Size of each of the two shared frame buffers: a frame in a world is 0.2 to 0.5 MB. */
const SLOT_BYTES = 1 << 20;
/** A render worker that draws nothing for this long is left alone; the game goes on without a picture until it is back. */
const STALL_MS = 2000;

/**
 * port: the MessagePort to the render worker; ctrl: the shared control words.
 * Besides the renderer interface of gdriver.js: configure(width, height, msaa), info(), stats, pace()
 * (worker.js calls it once per frame), and onResync (set by worker.js: the driver must upload
 * every texture again).
 */
export function createRecorder(port, ctrl) {
  let cmd = new Float64Array(4096), nc = 0;
  let vb = new Float32Array(16384 * VERTEX_FLOATS), nv = 0;       // nv counts floats
  let ib = new Uint32Array(65536), ni = 0;
  let bytes = new Uint8Array(65536), nb = 0;
  let px = [];
  const grow = (a, n) => { const b = new a.constructor(Math.max(a.length * 2, n)); b.set(a); return b; };
  const want = (n) => { if (nc + n > cmd.length) cmd = grow(cmd, nc + n); };
  // what a renderer that lost everything must be told again
  let W = 0, H = 0, width = NaN, height = NaN, msaa = NaN;
  let sent = 0;                 // frames posted
  // Frame `n` goes into slots[n & 1]. The frame that was there before, n - 2, has been drawn when
  // the render worker is at most AHEAD behind, which pace() waits for; when it did not wait (a
  // pause, the game closing) the frame travels in a buffer of its own instead.
  const slots = typeof SharedArrayBuffer === 'function' ? [new SharedArrayBuffer(SLOT_BYTES), new SharedArrayBuffer(SLOT_BYTES)] : null;
  // Made once per shared buffer: its views and the message that announces it. The game thread never returns to
  // its event loop, and what it allocates per frame (views, messages, arrays) is only collected when its heap's
  // allowance is used up, which JavaScriptCore sets at more than a gigabyte for this thread.
  const slotViews = slots && slots.map((buf) => ({ f64: new Float64Array(buf), f32: new Float32Array(buf), u32: new Uint32Array(buf), u8: new Uint8Array(buf), msg: { buf, nc: 0, nv: 0, ni: 0, nb: 0, px: null } }));
  let off = false;              // the render worker stopped answering: nothing is written down
  let restored = Atomics.load(ctrl, CTRL.RESTORED);
  const drop = () => { nc = 0; nv = 0; ni = 0; nb = 0; if (px.length) px = []; };
  // thin (a scene is being skipped, set by worker.js): no frame is drawn. Their scenes are left out (BEGIN, the
  // polygons, END); what they upload or destroy is still sent, without a scene, so the renderer's textures stay
  // those of the game, and the canvas keeps the picture it has.
  let quiet = false;

  /** Where an upload's pixels go: [px index or -1, byte offset]. The driver hands over a new array each time, so a large one is given away as it is. */
  const pixels = (rgba) => {
    if (rgba.byteLength <= INLINE_BYTES || rgba.byteOffset || rgba.byteLength !== rgba.buffer.byteLength) {
      if (nb + rgba.byteLength > bytes.length) bytes = grow(bytes, nb + rgba.byteLength);
      bytes.set(rgba, nb);
      nb += rgba.byteLength;
      return -1;
    }
    px.push(rgba.buffer);
    return px.length - 1;
  };
  /** Starts the renderer from nothing: after a lost WebGL context, or when the render worker is back. */
  const resync = () => {
    off = false;
    drop();
    want(8);
    cmd[nc++] = FORGET;
    if (W) { cmd[nc++] = INIT; cmd[nc++] = W; cmd[nc++] = H; }
    cmd[nc++] = CONFIGURE; cmd[nc++] = width; cmd[nc++] = height; cmd[nc++] = msaa;
    if (r.onResync) r.onResync();
  };

  const r = {
    stats: { frames: 0, draws: 0, uploads: 0 },
    onResync: null,
    thin: false,
    init(w, h) { W = w; H = h; if (off) return; want(3); cmd[nc++] = INIT; cmd[nc++] = w; cmd[nc++] = h; },
    shutdown() {},
    /** Changes the drawing size in pixels (both, or neither) and the anti-aliasing samples (0, 2, 4, 8) from the next frame on. */
    configure(w, h, samples) {
      if (w !== undefined) { width = w; height = h; }
      if (samples !== undefined) msaa = samples;
      if (off) return;
      want(4); cmd[nc++] = CONFIGURE; cmd[nc++] = w === undefined ? NaN : w; cmd[nc++] = w === undefined ? NaN : h; cmd[nc++] = samples === undefined ? NaN : samples;
    },
    /** What the render worker last reported (it draws a frame or two behind). */
    info: () => ({ width: Atomics.load(ctrl, CTRL.WIDTH), height: Atomics.load(ctrl, CTRL.HEIGHT), samples: Atomics.load(ctrl, CTRL.SAMPLES), maxSamples: Atomics.load(ctrl, CTRL.MAX_SAMPLES), busy: Atomics.load(ctrl, CTRL.BUSY) }),
    uploadTexture(t, level, w, h, rgba) {
      if (off) return;
      const at = nb, where = pixels(rgba);
      want(10);
      cmd[nc++] = TEXTURE; cmd[nc++] = t.id; cmd[nc++] = t.kind === '3d' ? 1 : 0; cmd[nc++] = t.mips; cmd[nc++] = t.size; cmd[nc++] = level; cmd[nc++] = w; cmd[nc++] = h; cmd[nc++] = where; cmd[nc++] = at;
      r.stats.uploads++;
    },
    uploadLightmap(lm, layer, w, h, rgba) {
      if (off) return;
      const at = nb, where = pixels(rgba);
      want(7);
      cmd[nc++] = LIGHTMAP; cmd[nc++] = lm.id; cmd[nc++] = layer; cmd[nc++] = w; cmd[nc++] = h; cmd[nc++] = where; cmd[nc++] = at;
      r.stats.uploads++;
    },
    destroyTexture(t) { if (off) return; want(2); cmd[nc++] = DESTROY; cmd[nc++] = t.id; },
    beginScene(clear, clearZ, fog) {
      quiet = r.thin;
      if (off || quiet) return;
      want(7);
      cmd[nc++] = BEGIN; cmd[nc++] = clear ? 1 : 0; cmd[nc++] = clearZ ? 1 : 0; cmd[nc++] = fog ? 1 : 0; cmd[nc++] = fog ? fog.r : 0; cmd[nc++] = fog ? fog.g : 0; cmd[nc++] = fog ? fog.b : 0;
    },
    /** One batch of the driver: the first `count` of `draws`. Its vertex and index arrays are the driver's scratch, so they are copied; all batches of a frame end up in one vertex and one index array. */
    draw(VB, verts, IB, indices, draws, count) {
      r.stats.draws += count;
      if (off || quiet) return;
      const floats = verts * VERTEX_FLOATS, base = nv / VERTEX_FLOATS, first = ni;
      if (nv + floats > vb.length) vb = grow(vb, nv + floats);
      for (let k = 0; k < floats; k++) vb[nv + k] = VB[k];          // (no subarray: a view per batch is garbage on this thread)
      nv += floats;
      if (ni + indices > ib.length) ib = grow(ib, ni + indices);
      for (let k = 0; k < indices; k++) ib[ni++] = IB[k] + base;
      want(count * 8);
      for (let k = 0; k < count; k++) {
        const d = draws[k];
        cmd[nc++] = DRAW; cmd[nc++] = first + d.first; cmd[nc++] = d.count; cmd[nc++] = d.tex ? d.tex.id : 0; cmd[nc++] = d.lm ? d.lm.id : 0; cmd[nc++] = d.lmLayer; cmd[nc++] = d.mode;
        cmd[nc++] = (d.ztest ? 1 : 0) | (d.zwrite ? 2 : 0) | (d.clamp ? 4 : 0);
      }
    },
    /** A 1:1 copy of a part of a 2D texture: four vertices among the frame's own (position and texture coordinate, the rest unused). */
    decal(t, sx, sy, sw, sh, dx, dy) {
      r.stats.draws++;
      if (off || quiet) return;
      const floats = 4 * VERTEX_FLOATS;
      if (nv + floats > vb.length) vb = grow(vb, nv + floats);
      vb.fill(0, nv, nv + floats);
      const u0 = sx / t.w, v0 = sy / t.h, u1 = (sx + sw) / t.w, v1 = (sy + sh) / t.h;
      const corner = (k, x, y, u, v) => { const o = nv + k * VERTEX_FLOATS; vb[o] = x; vb[o + 1] = y; vb[o + 3] = u; vb[o + 4] = v; };
      corner(0, dx, dy, u0, v0); corner(1, dx + sw, dy, u1, v0); corner(2, dx, dy + sh, u0, v1); corner(3, dx + sw, dy + sh, u1, v1);
      want(3); cmd[nc++] = DECAL; cmd[nc++] = t.id; cmd[nc++] = nv / VERTEX_FLOATS;
      nv += floats;
    },
    /** The frame is complete: it goes to the render worker as one message. */
    endScene() {
      r.stats.frames++;
      if (off) return;
      if (quiet) { quiet = false; if (!nc) return; } else { want(1); cmd[nc++] = END; }
      const size = nc * 8 + nv * 4 + ni * 4 + nb;
      const shared = slots !== null && size <= SLOT_BYTES && ((sent - Atomics.load(ctrl, CTRL.FRAMES)) | 0) <= AHEAD;
      if (shared) {
        // into the buffer's own views, element by element: nothing is made for a frame
        const s = slotViews[(sent + 1) & 1], d = s.msg;
        const f64 = s.f64, f32 = s.f32, u32 = s.u32, u8 = s.u8;
        for (let k = 0; k < nc; k++) f64[k] = cmd[k];
        for (let k = 0, o = nc * 2; k < nv; k++) f32[o + k] = vb[k];
        for (let k = 0, o = nc * 2 + nv; k < ni; k++) u32[o + k] = ib[k];
        for (let k = 0, o = nc * 8 + nv * 4 + ni * 4; k < nb; k++) u8[o + k] = bytes[k];
        d.nc = nc; d.nv = nv; d.ni = ni; d.nb = nb; d.px = px;
        if (px.length) port.postMessage(d, px); else port.postMessage(d);
        sent = (sent + 1) | 0;
        drop();
        return;
      }
      const buf = new ArrayBuffer(size);
      new Float64Array(buf, 0, nc).set(cmd.subarray(0, nc));
      new Float32Array(buf, nc * 8, nv).set(vb.subarray(0, nv));
      new Uint32Array(buf, nc * 8 + nv * 4, ni).set(ib.subarray(0, ni));
      new Uint8Array(buf, nc * 8 + nv * 4 + ni * 4, nb).set(bytes.subarray(0, nb));
      port.postMessage({ buf, nc, nv, ni, nb, px }, [buf, ...px]);
      sent = (sent + 1) | 0;
      drop();
    },
    /** Frames posted so far (the render worker's CTRL.FRAMES reaches this number when it has replayed them all). */
    sent: () => sent,
    /** Forgets every texture: the driver uploads them again (drv.reupload) after a restored save state. */
    forget() { if (off) return; want(1); cmd[nc++] = FORGET; },
    /**
     * Once per frame, after EndScene: keeps the game thread from running ahead of the render
     * worker. It waits until all but the last frame were drawn, but never without end: a paused or
     * closing game goes on at once, and when the render worker has died or draws nothing for
     * STALL_MS the game goes on without a picture. When that worker is back, or its WebGL context
     * came back after a loss, the renderer is started from nothing and the driver uploads every
     * texture again. That happens here, between two scenes, and only touches the driver's own
     * "upload again" marks.
     */
    pace() {
      if (off) {
        if (!Atomics.load(ctrl, CTRL.DEAD) && Atomics.load(ctrl, CTRL.FRAMES) === sent) { restored = Atomics.load(ctrl, CTRL.RESTORED); resync(); }
        return;
      }
      const t = performance.now();
      for (;;) {
        const done = Atomics.load(ctrl, CTRL.FRAMES);
        if (((sent - done) | 0) <= AHEAD || Atomics.load(ctrl, CTRL.PAUSED) || Atomics.load(ctrl, CTRL.CLOSE)) break;
        if (Atomics.load(ctrl, CTRL.DEAD) || performance.now() - t > STALL_MS) { off = true; drop(); return; }
        Atomics.wait(ctrl, CTRL.FRAMES, done, 50);
      }
      const now = Atomics.load(ctrl, CTRL.RESTORED);
      if (now !== restored) { restored = now; resync(); }
    },
  };
  return r;
}

// The render worker's copy of a frame that came in a shared buffer: made once, used for every frame.
let mine = new ArrayBuffer(0);
/**
 * The render worker's side: one frame's message, replayed on the WebGL renderer (webgl.js) in the
 * order the calls were made. A frame in a shared buffer is first copied to memory of this thread:
 * the game thread writes there again two frames later, and not every browser lets WebGL read
 * from shared memory.
 */
export function replay(renderer, d) {
  const at = d.nc * 8 + d.nv * 4 + d.ni * 4;
  let buf = d.buf;
  if (typeof SharedArrayBuffer === 'function' && buf instanceof SharedArrayBuffer) {
    if (mine.byteLength < at + d.nb) mine = new ArrayBuffer(Math.max(at + d.nb, mine.byteLength * 2));
    new Uint8Array(mine).set(new Uint8Array(buf, 0, at + d.nb));
    buf = mine;
  }
  const c = new Float64Array(buf, 0, d.nc);
  const data = (where, offset, n) => (where < 0 ? new Uint8Array(buf, at + offset, n) : new Uint8Array(d.px[where]));
  const set = (v) => (Number.isNaN(v) ? undefined : v);
  if (d.nv) renderer.geometry(new Float32Array(buf, d.nc * 8, d.nv), new Uint32Array(buf, d.nc * 8 + d.nv * 4, d.ni));
  for (let k = 0; k < d.nc;) {
    switch (c[k]) {
      case INIT: renderer.init(c[k + 1], c[k + 2]); k += 3; break;
      case CONFIGURE: renderer.configure(set(c[k + 1]), set(c[k + 2]), set(c[k + 3])); k += 4; break;
      case FORGET: renderer.forget(); k += 1; break;
      case TEXTURE: renderer.uploadTexture(c[k + 1], c[k + 2] !== 0, c[k + 3], c[k + 4], c[k + 5], c[k + 6], c[k + 7], data(c[k + 8], c[k + 9], c[k + 6] * c[k + 7] * 4)); k += 10; break;
      case LIGHTMAP: renderer.uploadLightmap(c[k + 1], c[k + 2], c[k + 3], c[k + 4], data(c[k + 5], c[k + 6], c[k + 3] * c[k + 4] * 4)); k += 7; break;
      case DESTROY: renderer.destroyTexture(c[k + 1]); k += 2; break;
      case BEGIN: renderer.beginScene(c[k + 1] !== 0, c[k + 2] !== 0, c[k + 3] ? { r: c[k + 4], g: c[k + 5], b: c[k + 6] } : null); k += 7; break;
      case DRAW: renderer.draw(c[k + 1], c[k + 2], c[k + 3], c[k + 4], c[k + 5], c[k + 6], (c[k + 7] & 1) !== 0, (c[k + 7] & 2) !== 0, (c[k + 7] & 4) !== 0); k += 8; break;
      case DECAL: renderer.decal(c[k + 1], c[k + 2]); k += 3; break;
      case END: renderer.endScene(); k += 1; break;
      default: throw new Error('render command ' + c[k] + ' at ' + k);
    }
  }
}
