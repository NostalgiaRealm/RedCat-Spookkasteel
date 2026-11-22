// Save worker. Turns the copy of the game's memory that the game thread took (worker.js onPass,
// snapshot.js capture()) into the stored form and compresses it, away from the game thread, which
// must go on with the next frame, and away from the page, whose display tick paces the game: gzip
// of a state on the page's own thread took 0.8 s on a desktop, in slices between which the ticks
// came late (measured 2026-11-22: frames of 50 ms on a desktop, of 140 ms with the page's thread
// four times slower). The page stores what comes back (game.js storeState), so that all writes to
// the store stay in one line there.
//
// One worker for the page's lifetime. The page hands on what a game thread handed it:
// { t: 'state', id, c } with c.bytes handed over, and gets back
// { t: 'packed', id, size, data: Blob, ms } or { t: 'failed', id, message, name }.
// Memory: the copy (some 50 MB) lives here until the browser has it as a Blob, as it did on the
// page before, and is let go of then; one state at a time.
import { packCapture } from '../host/snapshot.js';

let turn = Promise.resolve();
const pack = async (id, c) => {
  if (typeof CompressionStream !== 'function') throw new Error('this browser has no CompressionStream in a worker');
  const t0 = performance.now();
  let pieces = packCapture(c);          // views into c.bytes: nothing is copied here
  const t1 = performance.now();
  let size = 0;
  for (const b of pieces) size += b.length;
  let whole = new Blob(pieces);
  // The Blob has the bytes now: the copy goes, at once and not when this thread's garbage collector
  // gets to it (a worker that waits collects seldom, and the copy is as large as everything else a
  // save takes): handed to a channel that is closed, it belongs to nobody.
  pieces = null;
  try { const drop = new MessageChannel(); drop.port1.postMessage(null, [c.bytes.buffer]); drop.port1.close(); drop.port2.close(); } catch (e) { /* then the collector frees it */ }
  c = null;
  const t2 = performance.now();
  const data = await new Response(whole.stream().pipeThrough(new CompressionStream('gzip'))).blob();
  whole = null;
  self.postMessage({ t: 'packed', id, size, data, ms: { scan: t1 - t0, blob: t2 - t1, gzip: performance.now() - t2 } });
};
self.onmessage = (e) => {
  const d = e.data;
  if (!d || d.t !== 'state') return;
  const id = d.id, c = d.c;
  turn = turn.then(() => pack(id, c)).catch((err) => self.postMessage({ t: 'failed', id, message: String(err && err.message ? err.message : err), name: (err && err.name) || 'Error' }));
};
