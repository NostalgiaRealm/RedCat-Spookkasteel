// Game thread. Runs the recompiled game module as the original process ran: its own WinMain with
// the original main loop and all its nested loops (in-game menu, pause, results, loading). Those
// loops spin on rendering and PeekMessage, so this worker never returns to its event loop while
// the game runs: input arrives through shared memory, and the frame wait (Atomics.wait on the
// page's display tick) is the only place the game thread sleeps. Shared memory needs a
// cross-origin isolated page.
// Nothing of the GPU lives here. A picture that leaves a thread which never gets back to its
// event loop is never freed by the browser (an ImageBitmap per frame was 8 MB per frame at
// 1920x1080), so the render calls of each frame are written down and sent to the render worker
// (source/render/remote.js, render-worker.js), which draws them on the page's canvas.
import { createGame, GAME_DIR } from '../host/runtime.js';
import { StateUnusable } from '../host/snapshot.js';
import { FIX_NAMES } from '../host/fixes.js';
import { createRecorder } from '../render/remote.js';
import { createTextRasteriser } from './text.js';

import { CTRL, RING, REC, EV, SET } from './shared.js';
let ctrl, ring;
let t0 = 0, pausedTotal = 0;
const post = (msg, transfer) => self.postMessage(msg, transfer || []);
const log = (s) => post({ t: 'log', s });
// While a scene is skipped (source/host/skip.js) the game's clock is this number instead: it goes on by a fixed
// step per frame (frame() below), and by a thousandth per reading so that no loop of the game sees time stand still.
let skipClock = null;
// of the skip that runs: when its first pass ended, the passes since, and whether it is taken for long (frame() below)
let skipFrom = 0, skipPasses = 0, skipSlow = false;
const SLOW_AFTER = 3, SLOW_PASSES = 60, SLOW_MS = 250;
const now = () => (skipClock !== null ? (skipClock += 0.001) : performance.now() - t0 - pausedTotal);

// Which of the game's own loops presents this frame: the function whose return address is nearest on the game's
// stack, between the stack pointer and where the main loop's pass began. Only read, and only for the page (bits 4
// and 5 of CTRL.SCENE: the touch controls differ per screen, touch.js). 1 the game's menu 0x52EC30, 2 its pause
// 0x534D00, 3 the retry screen 0x5351E0; 0 any other (the results screen 0x52E620 has its own game state, fades,
// loading). The ranges are the functions' in RcHcGame.dat.
const OWN_LOOPS = [[0x52EC30, 0x5333D2, 1], [0x534D00, 0x5351DF, 2], [0x5351E0, 0x535698, 3]];
const ownLoop = (m, L) => {
  const top = L && L.esp;
  if (!top || !(m.esp < top) || top - m.esp > 0x40000) return 0;
  const u32 = m.u32;
  for (let p = m.esp >>> 2, e = top >>> 2; p < e; p++) { const v = u32[p]; if (v > 0x52EC30 && v <= 0x535698) for (const [from, to, kind] of OWN_LOOPS) if (v > from && v <= to) return kind; }
  return 0;
};

/** While the page is hidden or paused the game thread stops here and its clock does not run. */
const checkPause = () => {
  if (!Atomics.load(ctrl, CTRL.PAUSED)) return;
  const t = performance.now();
  while (Atomics.load(ctrl, CTRL.PAUSED)) Atomics.wait(ctrl, CTRL.PAUSED, 1, 500);
  pausedTotal += performance.now() - t;
};

/** Lets the game thread sleep (it may: it is not the page). Nobody ever wakes this cell: the wait always ends by its time. */
const sleepCell = new Int32Array(new SharedArrayBuffer(4));
const sleep = (ms) => { Atomics.wait(sleepCell, 0, 0, ms); };
/** A server that is busy or restarting refuses for a moment: such an answer is worth asking again. */
const passing = (status) => status === 0 || status === 408 || status === 429 || status >= 500;

/**
 * A whole file, fetched while the game thread waits (a file the game asks for that was not loaded
 * at the start). The game cannot go on without it, so a refused or failed request is tried again
 * a few times (after 0.25, 0.5, 1 and 2 s) before the game is given up.
 */
function fetchSync(url) {
  for (let attempt = 0; ; attempt++) {
    const x = new XMLHttpRequest();
    x.open('GET', url, false);
    x.responseType = 'arraybuffer';
    let status = 0;
    try { x.send(); status = x.status; } catch (e) { status = 0; }       // no answer at all
    if (status === 200) return new Uint8Array(x.response);
    if (!passing(status) || attempt >= 4) throw new Error(`fetch ${url}: ${status ? 'HTTP ' + status : 'no answer'}`);
    sleep(250 << attempt);
  }
}

/**
 * The files a world reads when it starts (game/preload.json, tools/build-preload.mjs), fetched
 * several at a time before the game thread starts. The game would otherwise ask for each of them
 * in turn and wait for it: more than five hundred requests one after the other. A request the
 * server refuses for a moment is tried again twice; a file that still cannot be fetched here, or
 * is not the size the list was made for, is left to its first use.
 */
async function preload(names, urlOf, sizeOf, progress) {
  const got = new Map();
  let next = 0, done = 0;
  const total = names.reduce((sum, name) => sum + sizeOf(name), 0);
  const one = async () => {
    while (next < names.length) {
      const name = names[next++];
      for (let attempt = 0; attempt < 3; attempt++) {
        try {
          const r = await fetch(urlOf(name));
          if (r.ok) { const bytes = new Uint8Array(await r.arrayBuffer()); if (bytes.length === sizeOf(name)) got.set(name, bytes); break; }
          if (!passing(r.status)) break;                                   // not there: left to its first use, which reports it
        } catch (e) { /* no answer: once more */ }
        await new Promise((done) => setTimeout(done, 300 << attempt));
      }
      done += sizeOf(name);
      progress(done, total);
    }
  };
  await Promise.all(Array.from({ length: PRELOAD_PARALLEL }, one));
  return got;
}
const PRELOAD_PARALLEL = 16;

async function start(init) {
  ctrl = new Int32Array(init.ctrl);
  ring = new Int32Array(init.ring);
  // base: the page's folder, with the original game files under data/. game: the folder of the
  // recompiled module and its lists, next to the scripts (it changes with them, see docs/hosting.md).
  const base = init.baseUrl, gameBase = init.gameUrl || base + 'game/';
  post({ t: 'status', s: 'Het spel laden…' });
  const [wasmResp, meta, codeMap, manifest, lists] = await Promise.all([
    fetch(gameBase + 'spook.wasm'),
    fetch(gameBase + 'spook.meta.json').then((r) => r.json()),
    fetch(gameBase + 'spook.codemap.bin').then((r) => r.arrayBuffer()),
    fetch(gameBase + 'files.json').then((r) => r.json()),
    fetch(gameBase + 'preload.json').then((r) => (r.ok ? r.json() : null)).catch(() => null),      // none: every file on first use
  ]);
  if (!wasmResp.ok) throw new Error('spook.wasm: HTTP ' + wasmResp.status);
  const compiling = WebAssembly.compile(await wasmResp.arrayBuffer());

  // The installed game folder. What the chosen world reads at its start is fetched now, together;
  // every other original file is fetched whole on its first use.
  const stats = { fetches: 0, bytes: 0, held: 0 };          // held: bytes of original files in this thread's memory now
  const sizes = new Map(manifest.files);
  const urlOf = (rel) => base + manifest.base + rel.split('/').map(encodeURIComponent).join('/');
  const world = lists && lists.worlds ? lists.worlds[String((init.launch && init.launch.world) || 1)] : null;
  const wanted = world ? [...(lists.common || []), ...(world.start || [])].filter((name) => sizes.has(name)) : [];
  let shown = -1;
  const loaded = await preload(wanted, urlOf, (name) => sizes.get(name), (done, total) => {
    const percent = Math.floor(done * 100 / total);
    if (percent !== shown) { shown = percent; post({ t: 'status', s: `Het spel laden… ${percent}%` }); }
  });
  for (const bytes of loaded.values()) { stats.fetches++; stats.bytes += bytes.length; }
  const wasm = await compiling;
  post({ t: 'status', s: 'Starten…' });
  // The game copies what it reads into its own memory (sounds, textures, the level), so a file's
  // bytes are not kept here for the session (17 to 24 MB per world): a file the game has not read
  // from between two sweeps (sweep() below, every few seconds of play) is let go. Should the game
  // read it again, it is fetched again while the game waits, from the browser's cache when the
  // server allows that; such a file is kept from then on, so the wait comes once.
  const held = new Set();
  let sweeps = 0;
  const files = manifest.files.map(([rel, size]) => {
    const f = { data: loaded.get(rel) || null, used: 0, dropped: false, keep: false };
    if (f.data) { held.add(f); stats.held += f.data.length; }
    const read = (pos, n, dst, dstOff) => {
      if (!f.data) { f.data = fetchSync(urlOf(rel)); stats.fetches++; stats.bytes += f.data.length; stats.held += f.data.length; f.keep = f.dropped; held.add(f); }
      f.used = sweeps;
      dst.set(f.data.subarray(pos, pos + n), dstOff);
    };
    return { path: GAME_DIR + '\\' + rel.replace(/\//g, '\\'), size, reader: { read } };
  });
  const sweep = () => {
    for (const f of held) if (f.used < sweeps && !f.keep) { stats.held -= f.data.length; f.data = null; f.dropped = true; held.delete(f); }
    sweeps++;
  };
  // what this world may ask for later (voices, mostly): the page fetches these in the background,
  // so that the game's own request is answered from the browser's cache
  const later = world ? (world.later || []).filter((name) => sizes.has(name) && !loaded.has(name)).map(urlOf) : [];
  loaded.clear();
  for (const [path, b64] of init.saved || []) {
    const bin = atob(b64);
    const data = new Uint8Array(bin.length);
    for (let k = 0; k < bin.length; k++) data[k] = bin.charCodeAt(k);
    files.push({ path, data, persist: true });
  }

  const W = init.width || 640, H = init.height || 480;
  // the render calls go to the render worker; the page gave it this game's scale and anti-aliasing
  const render = createRecorder(init.port, ctrl);
  let cheat = null;          // set once the game exists: (id, value) => void
  let look = null;           // host.look, once the game exists
  let move = null;           // host.move: a stick's value and walking slowly (source/host/move.js)
  let fixes = null;          // host.fixes, once the game exists
  let skip = null;           // host.skip: skipping a scene
  let subtitles = null;      // host.subtitles: the readable subtitle box
  let volume = null;         // host.volume: Muziek and Geluidseffecten while the game runs
  let shape = null;          // host.shape: another size of the game's screen while the game runs
  let lastTick = Atomics.load(ctrl, CTRL.TICK);
  let frames = 0, lastReport = 0, idle = 0;
  // The save state the page asked for last (CTRL.SAVE counts the requests), and the frames a pause
  // was put off for one: see frame().
  let saveSeen = Atomics.load(ctrl, CTRL.SAVE), deferred = 0, skipTold = saveSeen;
  let dropCopy = () => {};        // lets go of the memory made for a state that is not taken yet (onPass below)
  // The copy of a state is made in the time a frame would wait for the display: the frame before it does not wait in
  // frame() (holdWait), the pass ends, the state is copied, and the wait comes after that (owed, paid in onPass). A
  // game with time to spare per frame, any that reaches the display's rate, then shows every frame when it would have.
  let holdWait = false, owed = false, idleOwed = 0;

  const platform = {
    log,
    nowMs: now,
    wallClockMs: () => Date.now(),
    sleep,
    screen: { width: W, height: H },
    input: {
      poll: () => {
        if (Atomics.load(ctrl, CTRL.CLOSE)) { Atomics.store(ctrl, CTRL.CLOSE, 0); return [{ type: 'close' }]; }
        let r = Atomics.load(ctrl, CTRL.IN_READ);
        const w = Atomics.load(ctrl, CTRL.IN_WRITE);
        if (r === w) return null;
        const out = [];
        while (r !== w) {
          const o = (r % RING) * REC;
          const type = ring[o];
          if (type === 1) out.push({ type: 'move', dx: ring[o + 1], dy: ring[o + 2] });
          else if (type === 2) out.push({ type: 'down', button: ring[o + 1] });
          else if (type === 3) out.push({ type: 'up', button: ring[o + 1] });
          else if (type === 4) out.push({ type: 'keydown', vk: ring[o + 1], ch: ring[o + 2] });
          else if (type === 5) out.push({ type: 'keyup', vk: ring[o + 1] });
          else if (type === 6) out.push({ type: 'activate', active: ring[o + 1] });
          else if (type === 7) out.push({ type: 'wheel', dz: ring[o + 1] });
          else if (type === EV.SETTING) { if (ring[o + 1] === SET.SIZE) render.configure(ring[o + 2], ring[o + 3], undefined); else if (ring[o + 1] === SET.MSAA) render.configure(undefined, undefined, ring[o + 2]); else if (ring[o + 1] === SET.FIX) { if (fixes) fixes.set(FIX_NAMES[ring[o + 2]], !!ring[o + 3]); } else if (ring[o + 1] === SET.FIRST_PERSON) { if (look) look.setFirstPerson(!!ring[o + 2]); } else if (ring[o + 1] === SET.WALK) { if (move) move.walk(!!ring[o + 2]); } else if (ring[o + 1] === SET.SUBTITLES) { if (subtitles) subtitles.set(!!ring[o + 2]); } else if (ring[o + 1] === SET.SHAPE) { if (shape) shape.request(ring[o + 2], ring[o + 3]); } else if (ring[o + 1] === SET.HUD_LIFT) { if (shape) game.host.gdriver.hudLift = Math.max(0, ring[o + 2] | 0); } else if (ring[o + 1] === SET.VOLUME) { if (volume) { if (ring[o + 2] === 0) volume.request(ring[o + 3], null); else if (ring[o + 2] === 1) volume.request(null, ring[o + 3]); else volume.keep(); } } }
          else if (type === EV.SKIP) { if (skip) { if (ring[o + 1] === 1) skip.request(); else if (ring[o + 1] === 2) skip.withdraw(); else skip.cancel(); } }
          else if (type === EV.STICK) { if (move) move.stick(ring[o + 1] / 1e4, ring[o + 2] / 1e4); }
          else if (type === EV.LOOK) { if (look) look.turn(ring[o + 1] / 1e6, ring[o + 2] / 1e6); }       // to the right, downwards
          else if (type === EV.CHEAT) { if (cheat) cheat(ring[o + 1], ring[o + 2]); }
          r = (r + 1) | 0;
        }
        Atomics.store(ctrl, CTRL.IN_READ, r);
        return out;
      },
    },
    joystick: () => null,
    audio: {
      data: (id, bytes, fmt) => post({ t: 'audio', m: { t: 'data', id, bytes, fmt } }, [bytes.buffer]),
      alias: (id, of) => post({ t: 'audio', m: { t: 'alias', id, of } }),
      play: (id, loop, offset) => post({ t: 'audio', m: { t: 'play', id, loop, offset } }),
      stop: (id) => post({ t: 'audio', m: { t: 'stop', id } }),
      volume: (id, v) => post({ t: 'audio', m: { t: 'volume', id, v } }),
      pan: (id, v) => post({ t: 'audio', m: { t: 'pan', id, v } }),
      frequency: (id, hz) => post({ t: 'audio', m: { t: 'frequency', id, hz } }),
      free: (id) => post({ t: 'audio', m: { t: 'free', id } }),
    },
    text: createTextRasteriser(),
    render,
    // a restored save state carries its own clock value
    setTime: (t) => { skipClock = null; skipSlow = false; t0 = performance.now() - pausedTotal - t; },
    // one presented frame (the driver's EndScene sent it to the render worker): do not get ahead
    // of that worker, then sleep until the display's next tick
    // step > 0: a scene is being skipped; the clock goes on by step for this frame, nothing waits for the
    // display, and no frame is drawn (remote.js thin, switched on by skip.onStart below before the skip's first
    // pass draws: that pass's scene has no world in it, skip.js). The canvas keeps the last picture it got, the
    // scene as it stood when the hold was complete; the pass in which the skip ends switches drawing on again,
    // and the next pass's scene is the first picture after it. A skip that will take long on this device is
    // told to the page (bit 64 of CTRL.SCENE: it shows a busy sign over the held picture): the cost of the first
    // SLOW_AFTER passes times SLOW_PASSES, the passes of a scene of half a minute, is more than SLOW_MS. How
    // long the scene still is the host does not know; the page shows the sign after SLOW_MS in any case.
    frame: (step) => {
      frames++;
      if (step > 0) {
        if (skipClock === null) { skipClock = performance.now() - t0 - pausedTotal; skipFrom = performance.now(); skipPasses = 0; skipSlow = false; }
        else if (++skipPasses === SLOW_AFTER) skipSlow = (performance.now() - skipFrom) / SLOW_AFTER * SLOW_PASSES > SLOW_MS;
        skipClock += step; render.thin = !!(skip && skip.active);
      } else if (skipClock !== null) { t0 = performance.now() - pausedTotal - skipClock; skipClock = null; render.thin = false; skipSlow = false; }
      if (skip) { const own = game.host.mainLoop && game.host.mainLoop.frames >= 2; Atomics.store(ctrl, CTRL.SCENE, skip.scene() | (skip.active ? 4 : 0) | (own ? 8 | (ownLoop(game.m, game.host.mainLoop) << 4) : 0) | (skipSlow && skip.active ? 64 : 0));      // 8: a second frame in one pass, the game is in a loop of its own (its menu, its pause; mainloop.js)
        Atomics.store(ctrl, CTRL.GSTATE, skip.gameState()); }
      if (shape) { const size = shape.size(); Atomics.store(ctrl, CTRL.MODE_W, size[0]); Atomics.store(ctrl, CTRL.MODE_H, size[1]); }
      const t1 = performance.now();
      render.pace();
      const t2 = performance.now();
      // A page that is hidden asks for a save state and pauses in one go (game.js), and that state
      // is what keeps the game of a tab a phone throws away. It is taken between two passes of the
      // main loop (onPass below), which this thread would not reach when it stopped here first: so
      // while a state is asked for, the pause waits until the pass is over, and this frame does not
      // wait for the display either (a hidden page gives no ticks). At most three frames: a loop
      // inside a pass (the game's own menu) has no such moment and must pause all the same.
      const saving = Atomics.load(ctrl, CTRL.PAUSED) !== 0 && Atomics.load(ctrl, CTRL.SAVE) !== saveSeen && ++deferred <= 3;
      if (!saving) { deferred = 0; if (Atomics.load(ctrl, CTRL.PAUSED)) dropCopy(); checkPause(); }          // (a game that waits holds no memory for a state it cannot take now)
      const t3 = performance.now();
      // (a skip that was asked for is taken before the next pass: that pass does not wait for the display either)
      // (and a frame after which a state will be copied waits for the display after that copy, onPass below: owed)
      const waits = !saving && !(step > 0) && !(skip && skip.asked);
      if (waits && holdWait && !owed) owed = true;
      else {
        if (waits && Atomics.load(ctrl, CTRL.TICK) === lastTick) Atomics.wait(ctrl, CTRL.TICK, lastTick, 100);
        lastTick = Atomics.load(ctrl, CTRL.TICK);
      }
      const t = performance.now();
      idle += t2 - t1 + t - t3 + idleOwed; idleOwed = 0;
      // idle: the share of the time, in percent, this thread stood waiting for the render worker and
      // the display. Few frames with little of it: the game itself is busy. Few frames with much of
      // it says nothing about the reason: a graphics chip that cannot keep up and a display that
      // gives few ticks both show as waiting for the display here (measured: the wait in pace() stays
      // at nothing either way). What tells them apart is `busy`, from the render worker (render.info()).
      if (t - lastReport > 1000) { post({ t: 'stats', fps: Math.round(frames * 1000 / (t - lastReport)), idle: Math.round(idle * 100 / (t - lastReport)), draws: render.stats.draws, fetches: stats.fetches, mb: stats.bytes / 1048576, heldMb: stats.held / 1048576, ...render.info(), cheats: game.host.cheats.state(), ...(move ? move.state() : { world: false, control: false }) }); frames = 0; idle = 0; render.stats.draws = 0; lastReport = t; }
    },
    persistFile: (path, data) => post({ t: 'persist', path, data }),
    messageBox: (textStr, caption, type) => {
      // modal, as a real MessageBox: the game thread waits for the answer with its clock stopped
      Atomics.store(ctrl, CTRL.ANSWER, 0);
      post({ t: 'messagebox', text: textStr, caption, type });
      const t = performance.now();
      while (!Atomics.load(ctrl, CTRL.ANSWER)) Atomics.wait(ctrl, CTRL.ANSWER, 0, 500);
      pausedTotal += performance.now() - t;
      return Atomics.load(ctrl, CTRL.ANSWER);
    },
  };
  const game = await createGame({ wasm, meta, codeMap: new Uint8Array(codeMap), platform, files, options: { commandLine: '"' + GAME_DIR + '\\RcHcGame.dat" -game', launch: { ...init.launch, screenWidth: W, screenHeight: H }, fixes: init.fixes, subtitleBox: !!init.subtitleBox } });
  fixes = game.host.fixes || null;
  skip = game.host.skip || null;
  // (frame: the number CTRL.FRAMES has when the first picture after the skip is drawn; this pass's own, without a scene, is already sent)
  if (skip) skip.onEnd = (result, info) => post({ t: 'skip', result, frames: info.frames, ms: Math.round(info.ms), tailMs: Math.round(info.tailMs || 0), tailWhy: info.tailWhy || '', fineFrames: info.fineFrames || 0, frame: (render.sent() + 1) | 0 });
  if (skip) skip.onStart = () => { render.thin = true; };
  subtitles = game.host.subtitles || null;
  volume = game.host.volume || null;
  shape = game.host.shape || null;
  if (subtitles) subtitles.onText = (text) => post({ t: 'subtitle', text });
  if (game.host.unbound.length) log('unbound imports: ' + game.host.unbound.join(' '));
  game.host.traceDebug = !!init.debugLog;
  // a renderer that lost its textures (WebGL context lost and back) gets them again from game memory
  render.onResync = () => game.host.gdriver.reupload();
  cheat = (id, value) => game.host.cheats.request(id, value);
  // looking around and the first-person view (source/host/look.js); the player's kept choices at start
  look = game.host.look || null;
  move = game.host.move || null;
  if (look && init.firstPerson) look.setFirstPerson(true);
  const wantFlight = () => { if (init.flight) cheat(2, 1); };        // CHEAT.FLIGHT: free flight is this player's preference
  if (!init.restore) wantFlight();
  game.host.cheats.onApplied = (state) => post({ t: 'cheat', state });
  // Save states: taken between two passes of the main loop when the page asks for one; a state
  // handed over at start replaces the freshly booted game at its first pass.
  if (game.host.mainLoop) {
    let passes = 0;
    // the state that is asked for and not taken yet: its copy's memory (buf), how far that is written to (at), what that took
    let pend = null;
    dropCopy = () => { if (pend) { pend.buf = null; pend.at = 0; pend.ready = false; } };
    const TOUCH_MS = 1, SLACK = 0x100000;
    /** Makes the memory for the copy and writes to it once, TOUCH_MS per pass. true: ready (also when there is no room for it now: capture() then tries itself). */
    const prepare = (p, esp) => {
      const t = performance.now();
      p.passes++;
      if (!p.buf) { try { p.buf = new Uint8Array((game.host.snap.captureSize(esp) + SLACK + 0xFFFF) & ~0xFFFF); p.at = 0; } catch (e) { return true; } }
      const b = p.buf, n = b.length;
      let k = p.at;
      do { for (const e = Math.min(k + 0x100000, n); k < e; k += 4096) b[k] = 0; } while (k < n && performance.now() - t < TOUCH_MS);
      p.at = k;
      p.ms += performance.now() - t;
      return k >= n;
    };
    game.host.mainLoop.onPass = (esp) => {
      between(esp);
      if (!owed) return;
      // the wait for the display that this pass's frame left out
      owed = false;
      const t = performance.now();
      if (Atomics.load(ctrl, CTRL.TICK) === lastTick) Atomics.wait(ctrl, CTRL.TICK, lastTick, 100);
      lastTick = Atomics.load(ctrl, CTRL.TICK);
      idleOwed += performance.now() - t;
    };
    const between = (esp) => {
      holdWait = false;
      if ((++passes & 255) === 0) sweep();          // every four seconds or so
      const loop = game.host.mainLoop;
      // A pass that changed the sublevel (the next world of an adventure, or the same world again
      // after "Ja" on the retry screen) counts as a request: the state stored until now is of a
      // world the player's file has left.
      const changed = loop.changed;
      loop.changed = false;
      const want = Atomics.load(ctrl, CTRL.SAVE);
      if (want === saveSeen && !changed && !pend) return;
      // Never the state of a game that is ending or of a RedCat without health (mainloop.js
      // saveBlocked): continuing from the first ends at once, from the second leads straight to
      // the retry screen, and either would replace the last state of a living RedCat. A game
      // that is ending drops the request. For a RedCat without health it stays, so the state is
      // taken at the first pass he lives again (after his new start, or the world's). The page
      // is told once per request.
      const why = loop.saveBlocked();
      if (why) {
        if (want !== skipTold) { skipTold = want; post({ t: 'state-skipped', why }); }
        if (why === 'quit') { saveSeen = want; pend = null; }
        return;
      }
      // A state is a copy of some 50 MB of game memory, and the game stands still while it is made.
      // What the game thread does of it is the least that must happen between two passes: one copy
      // of the memory and the parts' text (snapshot.js capture()). Everything else, finding the pages
      // of zeros, the stored form, compression, is the save worker's (save-worker.js): the page gets
      // the copy handed over and hands it on at once. (Through the page and not on a channel of its
      // own to that worker: Firefox copies what is handed over on a MessagePort, 15 to 30 ms for a
      // state, and hands over to and from a worker's own page in 0.1 ms; measured in Firefox 146.)
      // Copying into memory that was never written to takes three times as long as copying into
      // memory that was (the system hands out a page at its first write: 11 ms against 4 for 50 MB,
      // measured), so the copy's memory is made when the request comes and written to once in the
      // passes before the copy, a millisecond per pass (prepare(), some ten passes). It is handed
      // over with the state: nothing of a save stays in this thread. A page that is hidden gets
      // its state at once (frame() holds the pause for it, and nobody sees that frame).
      if (!pend) pend = { changed: false, buf: null, at: 0, ms: 0, passes: 0, ready: false };
      if (changed) pend.changed = true;
      if (Atomics.load(ctrl, CTRL.PAUSED) === 0) {
        if (!prepare(pend, esp)) return;
        // ready: the copy comes after the next pass, whose frame leaves its wait for the display to after it
        if (!pend.ready) { pend.ready = true; holdWait = true; return; }
      }
      saveSeen = want;
      const taken = pend, t0 = performance.now();
      pend = null;
      let c = null;
      try { c = game.host.snap.capture(esp, taken.buf); } catch (e) { post({ t: 'state-failed', message: String(e && e.message ? e.message : e) }); return; }
      const prepared = c.bytes === taken.buf, took = c.took;
      c.took = undefined;
      // stop: how long the game stood still for this state (tools/save-hitch-check.mjs holds it to a bound); post: what handing it over took of that
      const t1 = performance.now();
      post({ t: 'state', c, changed: taken.changed, screen: game.host.shape ? game.host.shape.size() : [W, H], ms: { stop: 0, copy: took[0], parts: took[1], text: took[2], prepare: taken.ms, passes: taken.passes, prepared, inWait: owed } }, [c.bytes.buffer]);
      const t2 = performance.now();
      post({ t: 'state-took', stop: t2 - t0, post: t2 - t1 });
    };
    if (init.restore) {
      // A state that cannot be used is found here, before the game runs and before anything of it
      // is written (snapshot.js: unpack and check write nothing): bytes that are no state, a
      // state of another build, lengths that do not add up. The game that booted is then whole.
      // When it is the game the player would have got without a state (init.sameStart: same
      // world, difficulty, kind of game and screen), it simply runs; when not, this thread stops
      // here and the page starts that game. Either way the page deletes the state and tells the player.
      const refuse = (reason) => { post({ t: 'restore-failed', reason, goesOn: !!init.sameStart }); if (init.sameStart) wantFlight(); return !!init.sameStart; };
      let state = null, why = null;
      try { state = game.host.snap.unpack(new Uint8Array(init.restore)); game.host.snap.check(state); } catch (e) { why = e instanceof StateUnusable ? e.reason : String(e && e.message ? e.message : e); }
      init.restore = null;          // the unpacked state is the only thing that holds the 47 MB now, and the loop lets go of it
      if (why !== null) { if (!refuse(why)) return; } else {
        game.host.mainLoop.pendingRestore = state;
        state = null;
        // the last check, where the loop stands (mainloop.js): still nothing written
        game.host.onRestoreFailed = (reason) => { if (!refuse(reason)) throw new StateUnusable(reason); };
        const prev = game.host.onRestored;
        // the camera choice is the player's of now, not the one of the moment the state was saved
        game.host.onRestored = () => { if (prev) prev(); if (look) look.setFirstPerson(!!init.firstPerson); post({ t: 'restored' }); };
      }
    }
  }
  post({ t: 'running', later });
  t0 = performance.now();
  pausedTotal = 0;
  try {
    const code = game.run();
    post({ t: 'exit', code });
  } catch (e) {
    // a save state that failed is not a crash of the game: the page starts the player's world instead
    // (written: load() itself failed, the last line of defence; memory is replaced, this game is gone)
    if (e instanceof StateUnusable) post({ t: 'restore-failed', reason: e.reason, goesOn: false, written: e.written });
    else post({ t: 'crash', message: String(e && e.message ? e.message : e), stack: e && e.stack ? String(e.stack).split('\n').slice(0, 24).join('\n') : '' });
  }
}

self.onmessage = (e) => {
  if (e.data.t === 'start') start(e.data).catch((err) => post({ t: 'crash', message: String(err && err.message ? err.message : err), stack: err && err.stack ? String(err.stack) : '' }));
};
