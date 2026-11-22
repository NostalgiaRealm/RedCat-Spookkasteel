// Plugin for tools/run-headless.mjs (--plugin), used by tools/memory-check.mjs: the adventure's worlds one after the
// other in one game, as a player meets them, and what the game's heap holds after each change of world.
// A world is ended with the game's own command "nextsave" (game+0x68; docs/research/startup-and-loop.md 8), the
// fire key answers the results screen, as tools/savestate-plugin.mjs does it.
//   --mem-out file      the report (JSON); one line "[mem] ..." per measurement is printed as well
//   --mem-play N        passes of play in each world (300)
//   --mem-until W       the last world (5)
//   --mem-restarts N    then the last world again N times with the game's command "restart" ("Ja" on the retry screen)
//   --mem-boss          then RedCat is put at the save point before the witch's door, at the door and at the trigger
//                       that shows the witch (the objects' own places, +0x148; SetPosition 0x4DBE20), 240 passes each
//   --mem-callers       every block also by the return addresses on the game's stack (slow; for finding who allocates)
// Every block of the heap is followed from its allocation (host.heap.alloc, realloc, release) and carries the world it
// was made in, so "carried" is what a world still holds of the worlds before it.
import fs from 'node:fs';

export default function ({ m, host, opt, has, stop, time }) {
  const out = opt('mem-out', null), PLAY = Number(opt('mem-play', 300)), UNTIL = Number(opt('mem-until', 5)), CALLERS = has('mem-callers');
  let restarts = Number(opt('mem-restarts', 0));
  const { u8, u32, f32 } = m, heap = host.heap, L = m.layout;
  const report = { rows: [] };
  const live = new Map();      // pointer -> [capacity, world, who, size asked]
  let world = 0, lastThunk = '', peak = 0, peakBump = 0, pages = 0;
  const prevTrace = m.traceApi;
  m.traceApi = (id, esp) => { lastThunk = m.thunkNames[id] || String(id); if (prevTrace) prevTrace(id, esp); };
  const who = () => {
    if (!/Heap|Global|Local/.test(lastThunk)) return 'host:' + lastThunk;      // the host's own blocks: sound buffers, the driver's textures
    if (!CALLERS) return 'game';
    const a = [];
    for (let k = 0, esp = m.esp; k < 200 && a.length < 7; k++) { const v = u32[(esp + k * 4) >> 2]; if (v >= 0x401000 && v < L.IMAGE_END) a.push(v.toString(16)); }
    return a.join('<');
  };
  const A = heap.alloc.bind(heap), R = heap.release.bind(heap), RA = heap.realloc.bind(heap), P = heap.pages.bind(heap);
  let inside = 0;
  heap.alloc = (size, zero) => { const p = A(size, zero); if (heap.bytesInUse > peak) peak = heap.bytesInUse; if (heap.bump > peakBump) peakBump = heap.bump; if (!inside) live.set(p, [u32[(p - 16) >> 2], world, who(), size]); return p; };
  heap.release = (p) => { if (p && heap.valid(p) && !inside) live.delete(p); R(p); };
  heap.realloc = (p, size, zero) => { const old = live.get(p); inside++; let q; try { q = RA(p, size, zero); } finally { inside--; } if (q !== p) live.delete(p); live.set(q, [u32[(q - 16) >> 2], old ? old[1] : world, old ? old[2] : who(), size]); return q; };
  heap.pages = (size) => { pages += (size + 0xFFFF) & ~0xFFFF; return P(size); };
  const cls = (n) => (n <= 64 ? '<=64' : n <= 256 ? '<=256' : n <= 1024 ? '<=1K' : n <= 16384 ? '<=16K' : n <= 262144 ? '<=256K' : n <= 1048576 ? '<=1M' : '>1M');
  const mb = (n) => +(n / 1048576).toFixed(2);
  /** The sound manager's channels that no sound definition refers to (source/host/fixes.js, soundRelease). */
  const loose = () => {
    const engine = u32[0x6C8DE0 >> 2], sys = engine ? u32[(engine + 0xFC) >> 2] : 0, ge = sys ? u32[(sys + 0x50) >> 2] : 0, sm = ge ? u32[(ge + 4) >> 2] : 0;
    if (!sm) return null;
    const held = new Set(); for (let p = u32[(sys + 0x34) >> 2]; p && p < u32[(sys + 0x38) >> 2]; p += 4) held.add(u32[(u32[p >> 2] + 0x1C) >> 2]);
    let channels = 0, n = 0; for (let c = u32[(sm + 0xC) >> 2]; c; c = u32[(c + 0x1C) >> 2]) { channels++; if (!held.has(u32[(c + 4) >> 2])) n++; }
    let music = 0; for (let p = u32[(sys + 0x74) >> 2]; p && p < u32[(sys + 0x78) >> 2]; p += 4) music++;
    return { channels, loose: n, music };
  };
  const snap = (label) => {
    let smallFree = 0, smallN = 0; for (const [k, v] of heap.small) { smallFree += (k + 16) * v.length; smallN += v.length; }
    let largeFree = 0, largest = 0; for (const [, s] of heap.large) { largeFree += s; if (s > largest) largest = s; }
    const byClass = {}, byWorld = {}, byWho = {};
    let carried = 0, slack = 0;
    for (const [, [cap, w, tag, size]] of live) {
      slack += cap - size;
      if (w < world) carried += cap;
      const c = byClass[cls(cap)] || (byClass[cls(cap)] = [0, 0]); c[0]++; c[1] += cap;
      const e = byWorld[w] || (byWorld[w] = [0, 0]); e[0]++; e[1] += cap;
      const key = w + '|' + tag, t = byWho[key] || (byWho[key] = [0, 0]); t[0]++; t[1] += cap;
    }
    for (const k in byClass) byClass[k][1] = mb(byClass[k][1]);
    for (const k in byWorld) byWorld[k][1] = mb(byWorld[k][1]);
    const row = { label, world, pass: host.mainLoop.passes, seconds: +(time() / 1000).toFixed(1), inUse: mb(heap.bytesInUse), peak: mb(peak), carried: mb(carried), blocks: live.size, slack: mb(slack),
      bump: mb(heap.bump - L.HEAP_BASE), peakBump: mb(peakBump - L.HEAP_BASE), highWater: mb(heap.highWater - L.HEAP_BASE), room: mb(heap.pageBump - heap.bump),
      smallFree: mb(smallFree), smallFreeBlocks: smallN, largeFree: mb(largeFree), largeFreeBlocks: heap.large.length, largestFree: mb(largest),
      pages: mb(L.MEM_PAGES * 65536 - heap.pageBump), low: m.lowBump - 0x20000, lowRoom: 0xF0000 - m.lowBump, soundBuffers: host.dsound.buffers.size, sounds: loose(),
      released: host.fixes ? [host.fixes.stats.musicReleased, host.fixes.stats.soundsReleased, mb(host.fixes.stats.soundBytesReleased)] : null,
      byClass, byWorld, top: Object.entries(byWho).sort((a, b) => b[1][1] - a[1][1]).slice(0, 40).map(([k, v]) => [k, v[0], mb(v[1])]) };
    report.rows.push(row);
    console.log(`[mem] ${label}: in use ${row.inUse} MB (carried from earlier worlds ${row.carried}), peak ${row.peak}, heap top ${row.bump} (highest ${row.highWater}), free inside ${mb(smallFree + largeFree)} in ${smallN + heap.large.length} blocks (largest ${row.largestFree}), pages ${row.pages}, room ${row.room}, low area ${row.low} bytes, channels without a definition ${row.sounds ? row.sounds.loose : '-'}`);
    if (out) fs.writeFileSync(out, JSON.stringify(report, null, 1));
  };
  const chain = () => { const app = u32[0x6B915C >> 2], g = app ? u32[(app + 0x3A4) >> 2] : 0; return { app, g }; };
  let startAt = null, cmdAt = -1, lastKey = 0, bossAt = -1, step = -1;
  const first = Number(opt('world', 1));
  const STEPS = ['pilaar01e', 'door_witch01', 'trigger_witchmodel'];
  const put = (esp, pl, q) => { host.fixes.scratch(esp, (mem) => { for (let j = 0; j < 3; j++) f32[(mem >> 2) + j] = q[j]; m.call(0x4DBE20, [mem], pl); }); for (let j = 0; j < 3; j++) f32[(pl + 0x1A4 + j * 4) >> 2] = q[j]; };
  host.mainLoop.beforePass.push((esp) => {
    const n = host.mainLoop.passes, k = chain();
    if (!k.g) return;
    if (startAt === null) { startAt = n; snap('world ' + first + ' loaded (the start)'); world = first; }
    if (bossAt >= 0) {
      const c = host.fixes.chain();
      if (!c || !c.player || !c.props) return;
      u8[c.props + 0x14] |= 1;                                    // the game's own god mode: no death ends the scenario
      if ((n - bossAt) % 240 !== 0) return;
      if (step >= 0) snap('witch: after ' + STEPS[step]);
      if (++step >= STEPS.length) { stop(); return; }
      const o = host.fixes.find(esp, STEPS[step]);
      if (!o) { console.log('[mem] witch: no object ' + STEPS[step]); report.missing = STEPS[step]; stop(); return; }
      put(esp, c.player, [f32[(o + 0x148) >> 2], f32[(o + 0x14C) >> 2] + 30, f32[(o + 0x150) >> 2]]);
      return;
    }
    if (n !== startAt + PLAY) return;
    snap('world ' + world + ' played');
    if (world < UNTIL) { world++; m.call(0x4040F0, [0x694A68, 8], k.g + 0x68); cmdAt = n; return; }      // m_Command = "nextsave"; what the change allocates is the next world's
    if (restarts-- > 0) { const mem = (m.esp - 0x2000) & ~15; m.writeCStr(mem, 'restart'); m.call(0x4040F0, [mem, 7], k.g + 0x68); cmdAt = n; return; }
    if (has('mem-boss')) { bossAt = n; return; }
    stop();
  });
  const prevPass = host.mainLoop.onPass;
  host.mainLoop.onPass = (esp) => {
    if (host.mainLoop.changed && cmdAt >= 0) { startAt = host.mainLoop.passes; cmdAt = -1; snap('world ' + world + ' loaded'); }
    if (prevPass) prevPass(esp);
  };
  const poll = host.input.poll;
  host.input.poll = () => {
    const now = time();
    if (cmdAt >= 0 && host.mainLoop.passes === cmdAt && now - lastKey > 1000) { lastKey = now; return [Math.floor(now / 1000) % 2 === 0 ? { type: 'keydown', vk: 17, ch: 0 } : { type: 'keyup', vk: 17 }]; }
    return poll();
  };
}
