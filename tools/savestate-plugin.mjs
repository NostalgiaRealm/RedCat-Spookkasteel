// Plugin for tools/run-headless.mjs (--plugin), used by tools/savestate-check.mjs.
//   --ss-mode save      before the game starts: players 2 and 3 get a file, player 1's gets a name, a volume and a marker
//   --ss-mode restore   (with --restore) before the game starts: player 2's file is changed, player 3's is gone, player 4
//                       is new, player 1's name (and with --ss-volumes M,E his two volumes) changed as a menu would; after the restore: what is on
//                       the drive and what was handed to the platform to keep
//   --ss-mode refuse    (with --restore) hands the host states that must be refused: reports each answer and whether
//                       the game's memory was touched, then lets the game run on, and ends with a state whose loading fails
//   --ss-mode guard     --ss-guard death | nee | ja | next: what host.mainLoop.saveBlocked() answers at every pass
//                       while RedCat dies with lives left (the game's own Kill 0x4DD1A0), dies with none left and
//                       the retry screen is answered with Nee or Ja, and while the adventure goes to its next
//                       world (the game's own command "nextsave"); and whether the loop said the world changed
//   --ss-mode capture   at pass --ss-at (600): the state as the browser's game thread and save worker make it
//                       (snap.capture() and packCapture(), also into memory handed in, full of other bytes)
//                       against snap.pack(snap.save()) of the same moment: the same bytes, and usable
//   --ss-out file       where the report goes
import fs from 'node:fs';
import { setIniValues, readIni, latin1Decode } from '../source/host/ini.js';
import { StateUnusable, packCapture } from '../source/host/snapshot.js';

const DIR = 'C:\\REDCAT\\SETTINGS\\';
const file = (n) => `${DIR}PLAYER${n}.INI`;

export default function ({ m, host, game, opt, stop, time }) {
  const mode = opt('ss-mode', ''), out = opt('ss-out', null);
  const vfs = game.vfs;
  const report = { mode };
  const write = () => { if (out) fs.writeFileSync(out, JSON.stringify(report, null, 1)); };
  const text = (n) => { const b = vfs.readAll(file(n)); return b ? latin1Decode(b) : null; };
  const make = (n, entries) => { vfs.add(file(n), vfs.readAll(DIR + 'PLAYERDEF.INI').slice(), { persist: true }); setIniValues(vfs, file(n), entries); };
  const keys = (n) => { const t = text(n); return t === null ? null : { name: readIni(t, 'General', 'PlayerName'), music: readIni(t, 'Sound', 'MusicVolume'), sound: readIni(t, 'Sound', 'SoundVolume'), marker: readIni(t, 'General', 'Marker'), world: readIni(t, 'Level1', 'CurrentSubLevel'), total: readIni(t, 'Player', 'TotalScore') }; };
  const fnv = (lo, hi, h) => { const u8 = m.u8; for (let k = lo; k < hi; k++) { h ^= u8[k]; h = Math.imul(h, 16777619); } return h >>> 0; };
  // the low memory of the host, image, heap and the VirtualAlloc pages (the game's own heap): everything a restore writes first
  const memHash = () => { let h = 2166136261; h = fnv(m.layout.POP_TABLE, m.lowBump, h); for (const mod of m.meta.modules) h = fnv(mod.base, mod.base + mod.size, h); h = fnv(m.layout.HEAP_BASE, host.heap.highWater, h); return fnv(host.heap.pageBump, m.layout.MEM_PAGES * 65536, h).toString(16).padStart(8, '0'); };

  if (mode === 'save') {
    make(2, [['General', 'PlayerName', 'Twee'], ['Player', 'TotalScore', 100]]);
    make(3, [['General', 'PlayerName', 'Drie']]);
    setIniValues(vfs, file(1), [['General', 'PlayerName', 'Een'], ['General', 'Marker', 'saved'], ['Sound', 'MusicVolume', 80], ['Sound', 'SoundVolume', 80]]);
    report.abi = host.snap.abi;
    write();
  } else if (mode === 'restore') {
    // what the page would hand the game thread now: player 2 played on, player 3 was deleted, player 4 is new,
    // and the menu changed player 1's name and volumes
    make(2, [['General', 'PlayerName', 'Twee'], ['Player', 'TotalScore', 4321], ['Level1', 'CurrentSubLevel', 'SubLevel1_3']]);
    make(4, [['General', 'PlayerName', 'Vier']]);
    // --ss-volumes M,E: the two volumes the menu has now (default: the saved ones, 80 and 80; others are handed to the
    // game's own setters after the restore, source/host/volume.js, and the game's memory is then another on purpose)
    const [music, sound] = String(opt('ss-volumes', '80,80')).split(',').map(Number);
    setIniValues(vfs, file(1), [['General', 'PlayerName', 'Nieuw'], ['General', 'Marker', 'booted'], ['Sound', 'MusicVolume', music], ['Sound', 'SoundVolume', sound]]);
    const kept = [];
    const prevPersist = vfs.onPersist;
    vfs.onPersist = (path, data) => { kept.push([path, data ? latin1Decode(data) : null]); if (prevPersist) prevPersist(path, data); };
    const prev = host.onRestored;
    host.onRestored = () => {
      if (prev) prev();
      report.drive = { 1: keys(1), 2: keys(2), 3: keys(3), 4: keys(4) };
      // the levels DirectSound has 200 passes on, and how often the game's volume setters were called
      const at = host.mainLoop.passes + 200;
      host.mainLoop.beforePass.push(() => { if (host.mainLoop.passes !== at) return; report.levels = Object.fromEntries([...host.dsound.buffers].filter((b) => b.playing && b.volume > -10000).map((b) => [b.file.split('\\').pop().toUpperCase(), b.volume])); report.volumeCalls = host.volume.stats.calls; write(); });
      report.kept = kept.filter(([path]) => /PLAYER\d+\.INI$/.test(path)).map(([path, t]) => [path.slice(DIR.length), t === null ? null : { name: readIni(t, 'General', 'PlayerName'), music: readIni(t, 'Sound', 'MusicVolume'), marker: readIni(t, 'General', 'Marker'), total: readIni(t, 'Player', 'TotalScore') }]);
      write();
    };
    // only what the restore itself hands over counts (the launch settings and the booting game wrote before it)
    const load = host.snap.load;
    host.snap.load = (s, esp) => { kept.length = 0; load(s, esp); };
  } else if (mode === 'refuse') {
    const bytes = new Uint8Array(fs.readFileSync(opt('restore')));
    const dv = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
    const n = dv.getUint32(4, true);
    const head = () => JSON.parse(new TextDecoder().decode(bytes.subarray(8, 8 + n)));
    const pack = (h, body = bytes.subarray(8 + n)) => { const t = new TextEncoder().encode(JSON.stringify(h)); const o = new Uint8Array(8 + t.length + body.length); const d = new DataView(o.buffer); d.setUint32(0, 0x53435352, true); d.setUint32(4, t.length, true); o.set(t, 8); o.set(body, 8 + t.length); return o; };
    const edit = (fn) => { const h = head(); fn(h); return pack(h); };
    const cases = {
      'one byte short': bytes.subarray(0, bytes.length - 1),
      '30 MB short': bytes.subarray(0, bytes.length - 30 * 1048576),
      'one byte too many': (() => { const o = new Uint8Array(bytes.length + 1); o.set(bytes); return o; })(),
      'other bytes': new Uint8Array(5000),
      'header cut off': bytes.subarray(0, 200),
      'header no JSON': (() => { const o = bytes.slice(0, 8 + n + 16); o.fill(0x7B, 8, 8 + n); return o; })(),
      'empty': new Uint8Array(0),
      'state of the format before': edit((h) => { h.v = 1; delete h.abi; }),
      'no identity': edit((h) => { delete h.abi; }),
      'other identity, same thunk count': edit((h) => { h.abi = h.abi.replace(/^./, (c) => (c === '0' ? '1' : '0')); }),
      'other thunk count': edit((h) => { h.parts.machine.nextThunk--; }),
      'other screen': edit((h) => { h.screen = [854, 480]; }),
      'part missing (gdi32)': edit((h) => { delete h.parts.gdi32; }),
      'part missing (kernel32)': edit((h) => { delete h.parts.kernel32; }),
      'heap cursor moved': edit((h) => { h.parts.kernel32.heap.highWater += 0x1000; }),
      'heap cursor outside memory': edit((h) => { h.parts.kernel32.heap.highWater = 0x7FFF0000; }),
      'low cursor moved': edit((h) => { h.parts.machine.lowBump += 0x2000; }),
      // the heap is the last span but one; every span before it is stored whole, so its first bytes have the same number
      'range elsewhere': edit((h) => { h.spans[h.spans.length - 2][0] += 0x1000; }),
      'range shorter': edit((h) => { h.spans[h.spans.length - 2][1] -= 0x1000; }),
      'bytes before their range': edit((h) => { h.ranges[h.spans.length - 2][0] -= 0x1000; }),
      'bytes not on a page of the heap': edit((h) => { h.ranges[h.spans.length - 2][0] += 0x800; }),
      'a page of the image left out': (() => { const h = head(), k = h.spans.length - 3; let at = 0; for (let q = 0; q < k; q++) at += h.ranges[q][1]; const [a, len] = h.ranges[k]; h.ranges.splice(k, 1, [a, 0x1000], [a + 0x2000, len - 0x2000]); const body = bytes.subarray(8 + n); const out = new Uint8Array(body.length - 0x1000); out.set(body.subarray(0, at + 0x1000)); out.set(body.subarray(at + 0x2000), at + 0x1000); return pack(h, out); })(),
      'no spans, bytes in pages': edit((h) => { delete h.spans; }),
      'range over the code map': edit((h) => { h.ranges[0] = [0xA00000, h.ranges[0][1]]; }),
      'stack pointer outside the stack': edit((h) => { h.esp = 0x10; }),
      'no parts': edit((h) => { h.parts = null; }),
    };
    report.abi = host.snap.abi;
    report.refused = {};
    for (const [name, b] of Object.entries(cases)) {
      const before = memHash();
      let answer = 'ACCEPTED';
      try { host.snap.check(host.snap.unpack(b)); } catch (e) { answer = e instanceof StateUnusable ? e.reason : 'OTHER ERROR: ' + e.message; }
      report.refused[name] = { answer, untouched: memHash() === before };
    }
    // a state that passes before the game runs but not where the loop stands: the booted game goes on
    const shifted = host.snap.unpack(edit((h) => { h.esp += 0x40; }));
    try { host.snap.check(shifted); report.loop = { before: 'passes' }; } catch (e) { report.loop = { before: e.message }; }
    host.mainLoop.pendingRestore = shifted;
    let hashBefore = null;
    const check = host.snap.check;
    host.snap.check = (s, esp) => { if (esp !== undefined && hashBefore === null) hashBefore = memHash(); check(s, esp); };
    host.onRestoreFailed = (reason) => { report.loop.answer = reason; report.loop.untouched = memHash() === hashBefore; report.loop.passAt = host.mainLoop.passes; };
    // ... and after 20 more passes of that game: a state that passes every check and fails while loading
    const prevPass = host.mainLoop.onPass;
    host.mainLoop.onPass = (esp) => {
      if (prevPass) prevPass(esp);
      if (host.mainLoop.passes !== 20) return;
      report.loop.passesAfter = host.mainLoop.passes; report.loop.restored = host.mainLoop.restored;
      const s = host.snap.unpack(edit((h) => { h.parts.gdriver.handles = 5; }));
      host.mainLoop.pendingRestore = s;
      write();
    };
    process.on('exit', () => write());
    const prevLoad = host.snap.load;
    host.snap.load = (s, esp) => { try { prevLoad(s, esp); } catch (e) { report.load = { answer: e.message, unusable: e instanceof StateUnusable, written: !!e.written }; write(); throw e; } };
  }
  if (mode === 'capture') {
    const at = Number(opt('ss-at', 600)), prev = host.mainLoop.onPass;
    const join = (pieces) => { let n = 0, o = 0; for (const b of pieces) n += b.length; const out = new Uint8Array(n); for (const b of pieces) { out.set(b, o); o += b.length; } return out; };
    // header and body apart; the clock value is read once per state and may differ between two states of one moment
    const split = (bytes) => { const n = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength).getUint32(4, true); const head = JSON.parse(new TextDecoder().decode(bytes.subarray(8, 8 + n))); const time = head.time; head.time = 0; return { head: JSON.stringify(head), time, body: Buffer.from(bytes.buffer, bytes.byteOffset + 8 + n, bytes.length - 8 - n) }; };
    host.mainLoop.onPass = (esp) => {
      if (prev) prev(esp);
      if (host.mainLoop.passes !== at) return;
      const before = memHash();
      const a = split(host.snap.pack(host.snap.save(esp)));
      const size = host.snap.captureSize(esp), into = new Uint8Array(size + 0x123000).fill(0xA5);
      const c1 = host.snap.capture(esp), c2 = host.snap.capture(esp, into), c3 = host.snap.capture(esp, new Uint8Array(16));
      const packed = [c1, c2, c3].map((c) => join(packCapture(c)));
      const b = packed.map(split);
      let usable = true;
      try { for (const bytes of packed) host.snap.check(host.snap.unpack(bytes), esp); } catch (e) { usable = e.message; }
      const spans = c1.spans.reduce((n, r) => n + r[1], 0);
      report.capture = { pass: at, bytes: a.body.length, spans, leftOut: spans - a.body.length, heads: b.map((x) => x.head === a.head), bodies: b.map((x) => x.body.equals(a.body)), times: b.map((x) => Math.abs(x.time - a.time) < 1),
        intoUsed: c2.bytes === into, own: c1.bytes.length === size && c3.bytes.length === size, usable, untouched: memHash() === before };
      write();
      stop();
    };
  }
  if (mode === 'guard') {
    const what = opt('ss-guard', 'death'), at = 700;
    const { u8, u32, i32, f32 } = m;
    const chain = () => { const app = u32[0x6B915C >> 2]; const g = app ? u32[(app + 0x3A4) >> 2] : 0; const sub = g ? u32[(g + 0x60) >> 2] : 0; const pl = sub ? u32[(sub + 0x360) >> 2] : 0; const props = pl ? u32[(pl + 0x1F0) >> 2] : 0; return { app, g, pl, props }; };
    const level = () => { const t = text(1) || ''; return { world: readIni(t, 'Level1', 'CurrentSubLevel'), life: readIni(t, 'Player', 'Life'), health: readIni(t, 'Player', 'Health'), score: readIni(t, 'Player', 'Score') }; };
    const answers = [];          // [pass, answer, health, lives] where the answer changes
    let last = null, done = -1, t0 = null, sent = 0, lastKey = 0;
    report.what = what; report.changedAt = [];
    host.mainLoop.beforePass.push(() => {
      const n = host.mainLoop.passes, k = chain();
      if (!k.props) return;
      if (n === at - 5 && (what === 'nee' || what === 'ja')) i32[(k.props + 0x44) >> 2] = 0;                      // no life left
      if (n === at && what !== 'next') { m.call(0x4DD1A0, [], k.pl); done = n; }                                    // CRCPlayer::Kill
      if (n === at && what === 'next') { m.call(0x4040F0, [0x694A68, 8], k.g + 0x68); done = n; report.before = level(); }      // m_Command = "nextsave"
    });
    const prevPass = host.mainLoop.onPass;
    host.mainLoop.onPass = (esp) => {
      // what the game thread asks at this very moment, before it takes a state (source/web/worker.js)
      const n = host.mainLoop.passes, k = chain(), a = host.mainLoop.saveBlocked();
      if (host.mainLoop.changed) { report.changedAt.push(n); host.mainLoop.changed = false; report.after = level(); report.quitAfterChange = u8[k.app + 0x3E]; }
      const health = k.props ? f32[(k.props + 0x3C) >> 2] : null, lives = k.props ? i32[(k.props + 0x44) >> 2] : null;
      if (a !== last) { answers.push([n, a, health, lives]); last = a; report.answers = answers; write(); }
      if (prevPass) prevPass(esp);
      if (done >= 0 && n >= done + 400) { report.file = level(); report.end = { health, lives, quit: u8[k.app + 0x3E] }; write(); stop(); }
    };
    // the retry screen (left selects Ja, right Nee, the fire key confirms: 0x48ACE0) and the results screen need keys
    const poll = host.input.poll;
    host.input.poll = () => {
      const k = chain();
      if (done < 0 || !k.g) return poll();
      const now = time();
      if ((what === 'nee' || what === 'ja') && u8[k.g + 0xA4]) {
        if (t0 === null) t0 = now;
        const step = (id, ms, e) => { if (sent < id && now - t0 > ms) { sent = id; return e; } return null; };
        const e = (what === 'nee' && (step(1, 2000, { type: 'keydown', vk: 39, ch: 0 }) || step(2, 2400, { type: 'keyup', vk: 39 }))) || step(3, 3000, { type: 'keydown', vk: 17, ch: 0 }) || step(4, 3300, { type: 'keyup', vk: 17 });
        if (e) return [e];
      }
      if (what === 'next' && host.mainLoop.passes === at && now - lastKey > 1000) { lastKey = now; return [Math.floor(now / 1000) % 2 === 0 ? { type: 'keydown', vk: 17, ch: 0 } : { type: 'keyup', vk: 17 }]; }
      return poll();
    };
    process.on('exit', () => { report.file = report.file || level(); report.answers = answers; write(); });
  }
}
