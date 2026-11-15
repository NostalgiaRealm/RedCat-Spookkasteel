// Save states. All game state lives in the WebAssembly memory (the image's data, the heap, the
// x86 stack) plus the host state that the modules in this folder keep in JavaScript. A snapshot
// is both, taken between two passes of the main loop (source/host/mainloop.js), when no game code
// is executing. Each host module registers how to save and load its part with host.snap.add().
//
// Restoring needs a game that has booted to the same point (the main loop hook): its memory and
// host state are then replaced as a whole. Nothing of the freshly booted world survives.
//
// A state only fits the build that made it. The memory it carries holds what this host put there:
// the addresses of host functions (thunks, numbered in the order they were made), the low-memory
// structures (allocated one after the other), the handle numbers. Another host, or the same game
// module translated with other hooks, has these elsewhere, and nothing in the memory says which
// words they are. So every state carries the identity of its build (`abi`, see seal()), and a
// state with another identity is refused before a single byte is written: check() does everything
// that can fail and writes nothing; load() checks first. Whoever restores decides what a refused
// state means (the browser deletes it and starts the world the player is at, source/web/game.js).
//
// Format: { v, abi, screen, time, esp, cw, parts: { name: state }, spans: [[address, length], ...],
//           ranges: [[address, Uint8Array], ...] }
// spans: the stretches of memory the state is about (rangesOf below). ranges: their bytes. In the
// spans that load() clears first, the stack below the stack pointer, the heap and the VirtualAlloc
// pages, 4 KiB pages that hold only zeros are left out (about a tenth of a state): they are zero
// after a load either way. The other spans are stored whole. A state without spans is one of
// before that, with every span whole.
// The stack below the stack pointer is in a state although nothing there is live: the game reads
// it. Some of its functions copy local variables they never set into data that lasts (a vertex
// scratch array in the image, seen in world 3), so what earlier calls left on the stack decides
// later memory. Without it a restored game continued with the leftovers of the game that booted,
// not of the game that was saved, and its memory differed from the first pass on.

/**
 * The hand-kept part of a state's build identity. Everything that can be seen (see seal()) is in
 * the identity by itself; RAISE THIS NUMBER when a change cannot be: what a value in a part means,
 * the heap allocator (kernel32.js Heap), how handles or ids are numbered, what the host keeps in
 * low memory after the start, the order of the calls a main-loop pass makes. A state of the
 * build before is then dropped instead of continued wrongly.
 */
export const STATE_ABI = 3;        // 2: the stack below the stack pointer is part of a state (2026-11-14). 3: the part 'torches' (torches.js, 2026-11-14): the page's build must tell such a state from an older one too
const VERSION = 2;
const MAGIC = 0x53435352;        // 'RSCS'
const PAGE = 4096;

/** A state that cannot be used. written: memory was already replaced (the booted game is gone too). */
export class StateUnusable extends Error {
  constructor(reason, written = false) {
    super('save state: ' + reason);
    this.name = 'StateUnusable';
    this.reason = reason;
    this.written = written;
  }
}
const bad = (reason) => { throw new StateUnusable(reason); };
const isInt = Number.isInteger;

/** 64 bits of a text as 16 hex digits: enough to tell builds apart, and available without waiting (no crypto.subtle here). */
function digest(text) {
  let h1 = 0xDEADBEEF, h2 = 0x41C6CE57;
  for (let k = 0; k < text.length; k++) {
    const c = text.charCodeAt(k);
    h1 = Math.imul(h1 ^ c, 2654435761);
    h2 = Math.imul(h2 ^ c, 1597334677);
  }
  h1 = Math.imul(h1 ^ (h1 >>> 16), 2246822507) ^ Math.imul(h2 ^ (h2 >>> 13), 3266489909);
  h2 = Math.imul(h2 ^ (h2 >>> 16), 2246822507) ^ Math.imul(h1 ^ (h1 >>> 13), 3266489909);
  return (h2 >>> 0).toString(16).padStart(8, '0') + (h1 >>> 0).toString(16).padStart(8, '0');
}

export function installSnapshot(m, host) {
  const parts = [];
  const L = m.layout, MEM_END = L.MEM_PAGES * 65536;
  /**
   * The memory a state holds, as [address, length, cleared], for these four cursors. save() and
   * check() both use it: a state's spans must be exactly these. cleared: load() fills the span
   * with zeros before it writes, so pages of zeros need not be stored.
   */
  const rangesOf = (lowBump, esp, highWater, pageBump) => {
    const out = [];
    const add = (lo, hi, cleared = false) => { if (hi > lo) out.push([lo, hi - lo, cleared]); };
    add(L.POP_TABLE, (lowBump + 0xFFF) & ~0xFFF);                  // thunk pop table, COM objects, host structures
    add(L.STACK_LOW, (esp - 0x100) & ~0xFFF, true);                // what earlier calls left below the stack pointer (see the top of this file)
    add((esp - 0x100) & ~0xFFF, L.STACK_TOP);                      // live stack
    add(L.TIB_BASE, L.TIB_BASE + 0x1000);
    for (const mod of m.meta.modules) add(mod.base, mod.base + mod.size);     // image: data sections and bss (code is not in memory)
    add(L.HEAP_BASE, (highWater + 0xFFF) & ~0xFFF, true);
    add(pageBump, MEM_END, true);
    return out;
  };
  /** Copies of the pages of lo..lo+n that are not all zero, as [address, Uint8Array] appended to out; pages next to each other are one copy. */
  const livePages = (lo, n, out) => {
    const u8 = m.u8, u32 = m.u32, end = lo + n;
    if (lo & 3) { out.push([lo, u8.slice(lo, end)]); return; }
    let from = -1;
    for (let p = lo; p < end; p += PAGE) {
      const stop = Math.min(p + PAGE, end);
      let zero = true;
      for (let k = p >> 2, e = stop >> 2; k < e; k++) if (u32[k] !== 0) { zero = false; break; }
      for (let k = stop & ~3; zero && k < stop; k++) if (u8[k] !== 0) zero = false;
      if (!zero) { if (from < 0) from = p; } else if (from >= 0) { out.push([from, u8.slice(from, p)]); from = -1; }
    }
    if (from >= 0) out.push([from, u8.slice(from, end)]);
  };
  const screen = () => [host.screen ? host.screen.width : 0, host.screen ? host.screen.height : 0];
  const verify = (s, esp) => {
    if (!s || typeof s !== 'object') bad('not a state');
    if (s.v !== VERSION) bad('unknown version');
    if (typeof s.abi !== 'string' || s.abi !== (host.snap.abi || host.snap.seal())) bad('made by another build');
    const scr = screen();
    if (!Array.isArray(s.screen) || s.screen[0] !== scr[0] || s.screen[1] !== scr[1]) bad('made for another screen size');
    if (!isInt(s.esp) || s.esp < L.STACK_LOW + 0x1000 || s.esp > L.STACK_TOP || s.esp & 3) bad('stack pointer');
    if (!isInt(s.cw) || !Number.isFinite(s.time) || s.time < 0) bad('header');
    if (esp !== undefined && s.esp !== esp) bad('the main loop stands elsewhere on the stack');
    if (!s.parts || typeof s.parts !== 'object') bad('parts');
    for (const p of parts) {
      const st = s.parts[p.name];
      if (st === null || typeof st !== 'object') bad('part missing: ' + p.name);
      const why = p.check ? p.check(st) : null;
      if (why) bad(p.name + ': ' + why);
    }
    // the memory: exactly the ranges a save with these cursors writes, nothing shorter, nothing elsewhere
    const heap = s.parts.kernel32 && s.parts.kernel32.heap;
    if (!heap) bad('part missing: heap');
    const want = rangesOf(s.parts.machine.lowBump, s.esp, heap.highWater, heap.pageBump);
    if (!Array.isArray(s.ranges)) bad('memory ranges');
    for (const r of s.ranges) if (!Array.isArray(r) || !isInt(r[0]) || !(r[1] instanceof Uint8Array) || !r[1].length) bad('memory ranges');
    const spans = s.spans === undefined ? s.ranges.map((r) => [r[0], r[1].length]) : s.spans;
    if (!Array.isArray(spans) || spans.length !== want.length) bad('memory ranges');
    // the bytes, in the order of the spans: a span is there as a whole, or (one that load() clears)
    // as whole pages in rising order; nothing lies outside a span
    let j = 0;
    for (let k = 0; k < want.length; k++) {
      const [lo, n, cleared] = want[k], end = lo + n;
      if (!Array.isArray(spans[k]) || spans[k][0] !== lo || spans[k][1] !== n || end > MEM_END) bad('memory range ' + k);
      let at = lo;
      for (; j < s.ranges.length; j++) {
        const [a, bytes] = s.ranges[j], stop = a + bytes.length;
        if (a < at || a >= end) break;
        if (stop > end || (cleared ? (a - lo) % PAGE !== 0 || (stop !== end && (stop - lo) % PAGE !== 0) : a !== lo || stop !== end)) bad('memory range ' + k);
        at = stop;
      }
      if (!cleared && at !== end) bad('memory range ' + k);
    }
    if (j !== s.ranges.length) bad('memory outside the ranges');
  };
  const snap = host.snap = {
    /** The identity of this build, set by seal(). */
    abi: null,
    /**
     * A host module's part. save() -> a value that survives JSON; load(value) puts it back.
     * opts.version: raise it when the value's shape changes (it is part of the build identity);
     * opts.check(value): a reason when the value cannot be loaded, without changing anything.
     */
    add: (name, save, load, opts = {}) => parts.push({ name, save, load, version: opts.version || 1, check: opts.check || null }),
    names: () => parts.map((p) => p.name),
    /**
     * Fixes the build identity; called once, when every host module is installed
     * (runtime.js). All thunks and interfaces exist by then and are never made later. In it:
     *  - the game module as translated (wasm hash; with other hooks it is another module), its layout
     *  - every host function the game can call by address: name, number and stack clean-up
     *  - the low memory the modules took while installing: each size in order, and where it ended
     *  - the parts of a state and their versions, the format version, STATE_ABI
     */
    seal() {
      const u32 = m.u32, thunks = [];
      for (let id = 0; id < m.nextThunk; id++) thunks.push(id + ':' + (m.thunkNames[id] || '') + ':' + u32[(L.POP_TABLE + id * 4) >> 2]);
      snap.abi = digest(JSON.stringify([
        VERSION, STATE_ABI,
        m.meta.wasmSha256 || '', m.meta.modules.map((mod) => [mod.name, mod.sha256, mod.base, mod.size]), L, m.meta.firstFreeThunk, m.nextThunk,
        thunks, m.lowSizes, m.lowBump, [...m.vtables],
        parts.map((p) => p.name + ':' + p.version),
      ]));
      m.lowSizes = null;           // what is allocated from here on is the running game's, and in the state (machine.lowBump)
      return snap.abi;
    },
    /** Captures the whole game. esp: the stack pointer at the capture point (everything above it is live). */
    save(esp) {
      const heap = host.heap, u8 = m.u8;
      const spans = rangesOf(m.lowBump, esp, heap.highWater, heap.pageBump), ranges = [];
      for (const [lo, n, cleared] of spans) { if (cleared) livePages(lo, n, ranges); else ranges.push([lo, u8.slice(lo, lo + n)]); }
      const state = {};
      for (const p of parts) state[p.name] = p.save();
      return { v: VERSION, abi: snap.abi || snap.seal(), screen: screen(), time: host.nowMs(), esp, cw: m.exports.g_cw.value, parts: state, spans: spans.map(([lo, n]) => [lo, n]), ranges };
    },
    /**
     * Throws StateUnusable unless s can replace the booted game. Writes nothing. esp: the stack
     * pointer of the running main loop, when the caller is there (mainloop.js): the booted game
     * must stand where the saved one stood. Without it everything else is checked (before the
     * game runs, source/web/worker.js).
     */
    check(s, esp) {
      try { verify(s, esp); } catch (e) { if (e instanceof StateUnusable) throw e; bad('malformed (' + (e && e.message ? e.message : e) + ')'); }
    },
    /** Replaces the booted game by s. A state that fails check() changes nothing; a failure after that is StateUnusable with written set. */
    load(s, esp) {
      snap.check(s, esp);
      try {
        const u8 = m.u8, saved = s.parts.kernel32.heap;
        // Forget what the freshly booted game holds below its stack pointer, in the heap and in
        // the pages, as far as either game reaches: the state leaves out the pages there that are
        // all zero (see save()).
        u8.fill(0, L.STACK_LOW, (s.esp - 0x100) & ~0xFFF);
        u8.fill(0, L.HEAP_BASE, (Math.max(host.heap.highWater, saved.highWater, L.HEAP_BASE) + 0xFFF) & ~0xFFF);
        u8.fill(0, Math.min(host.heap.pageBump, saved.pageBump), MEM_END);
        for (const [addr, bytes] of s.ranges) u8.set(bytes, addr);
        m.exports.g_cw.value = s.cw;
        for (const p of parts) p.load(s.parts[p.name]);
        if (host.setTime) host.setTime(s.time);
      } catch (e) {
        const err = new StateUnusable('loading failed: ' + (e && e.message ? e.message : e), true);
        err.cause = e;
        throw err;
      }
    },
    /**
     * The state for storage, as byte arrays that follow each other: the magic number, the length
     * of the header and the JSON header in the first, then the bytes of each range as save() made
     * them (no copy). The browser hands these over one by one (source/web/worker.js): a state is
     * some 45 MB, and one array of all of it would be a second copy in the game thread.
     */
    pieces(s) {
      const head = new TextEncoder().encode(JSON.stringify({ v: s.v, abi: s.abi, screen: s.screen, time: s.time, esp: s.esp, cw: s.cw, parts: s.parts, spans: s.spans, ranges: s.ranges.map(([a, b]) => [a, b.length]) }));
      const first = new Uint8Array(8 + head.length);
      const dv = new DataView(first.buffer);
      dv.setUint32(0, MAGIC, true);
      dv.setUint32(4, head.length, true);
      first.set(head, 8);
      return [first, ...s.ranges.map(([, b]) => b)];
    },
    /** One byte array for storage (the tools keep a state in a file): pieces(), joined. */
    pack(s) {
      const pieces = snap.pieces(s);
      let size = 0, o = 0;
      for (const b of pieces) size += b.length;
      const out = new Uint8Array(size);
      for (const b of pieces) { out.set(b, o); o += b.length; }
      return out;
    },
    /** The state in a byte array made by pack(). Throws StateUnusable for anything else: other bytes, a cut-off file, lengths that do not add up. */
    unpack(bytes) {
      if (!(bytes instanceof Uint8Array) || bytes.length < 8) bad('too short');
      const dv = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
      if (dv.getUint32(0, true) !== MAGIC) bad('not a save state');
      const n = dv.getUint32(4, true);
      if (8 + n > bytes.length) bad('header cut off');
      let s = null;
      try { s = JSON.parse(new TextDecoder('utf-8', { fatal: true }).decode(bytes.subarray(8, 8 + n))); } catch (e) { bad('header unreadable'); }
      if (!s || typeof s !== 'object' || Array.isArray(s) || !Array.isArray(s.ranges) || (s.spans !== undefined && !Array.isArray(s.spans))) bad('header');
      let o = 8 + n;
      for (const r of s.ranges) {
        if (!Array.isArray(r) || !isInt(r[0]) || !isInt(r[1]) || r[0] < 0 || r[1] <= 0 || r[0] + r[1] > MEM_END) bad('memory range');
        o += r[1];
      }
      if (o !== bytes.length) bad(o > bytes.length ? 'data cut off' : 'data too long');
      o = 8 + n;
      s.ranges = s.ranges.map(([a, len]) => { const b = bytes.subarray(o, o + len); o += len; return [a, b]; });
      return s;
    },
  };

  // The machine: the low-memory cursor. Thunks and interfaces are created at install time in a
  // fixed order, so their addresses are the same in every run of the same build (seal() has them).
  snap.add('machine', () => ({ lowBump: m.lowBump, nextThunk: m.nextThunk }), (s) => { m.lowBump = s.lowBump; }, {
    check: (s) => (s.nextThunk !== m.nextThunk ? 'made by another build' : !isInt(s.lowBump) || s.lowBump < 0x00020000 || s.lowBump > 0x000F0000 ? 'low memory cursor' : null),
  });
}
