// Render thread. Owns the page's canvas (handed over once with transferControlToOffscreen, so one
// such worker serves a canvas for as long as the page lives) and draws on it what the game thread
// sends: each message on the port is one frame's render calls (source/render/remote.js), replayed
// on the WebGL renderer. Unlike the game thread this worker returns to its event loop after every
// frame, which is what lets the browser show the picture and free what the frame used.
// The game thread cannot receive messages, so what it needs to know is written into the shared
// control words: frames drawn, the drawing size, a WebGL context that came back.
import { createRenderer } from '../render/webgl.js';
import { replay } from '../render/remote.js';
import { CTRL } from './shared.js';

let renderer = null, ctrl = null, port = null;
// A WebGL context that was taken away normally comes back within a second. One that stays away
// (the browser refuses after repeated GPU failures) would leave the game running without a
// picture, and every later game on this canvas too: after LOST_MS of a game that is not paused the
// render worker gives up, which ends the game as an error and gives the next one a new canvas
// (game.js startPainter). A paused or hidden game does not count: a phone may only give the
// context back when the page is in view again.
const LOST_MS = 5000;
let lostTimer = 0, lostFor = 0;
const watchLost = () => {
  clearInterval(lostTimer); lostFor = 0;
  lostTimer = setInterval(() => {
    if (!renderer || !renderer.lost) { clearInterval(lostTimer); return; }
    if (!ctrl || Atomics.load(ctrl, CTRL.PAUSED)) return;
    if ((lostFor += 500) >= LOST_MS) { clearInterval(lostTimer); fatal(new Error('De grafische kaart geeft geen beeld meer (WebGL context lost)')); }
  }, 500);
};

/** The drawing size in use, for the game thread's statistics, and once a second how busy the graphics chip was. */
let busyAt = 0;
const report = () => {
  const i = renderer.info();
  Atomics.store(ctrl, CTRL.WIDTH, i.width); Atomics.store(ctrl, CTRL.HEIGHT, i.height); Atomics.store(ctrl, CTRL.SAMPLES, i.samples); Atomics.store(ctrl, CTRL.MAX_SAMPLES, i.maxSamples);
  const now = performance.now();
  if (now - busyAt >= 1000) { Atomics.store(ctrl, CTRL.BUSY, Math.min(100, Math.round(renderer.takeBusy() * 100 / (now - busyAt)))); busyAt = now; }
};
/** Nothing can be drawn any more: the game thread stops waiting for frames, the page ends the game. */
const fatal = (err) => {
  if (ctrl) { Atomics.store(ctrl, CTRL.DEAD, 1); Atomics.notify(ctrl, CTRL.FRAMES); }
  if (port) { port.close(); port = null; }
  self.postMessage({ t: 'fatal', message: String(err && err.message ? err.message : err) });
};
/** The game is over: its textures are freed, and frames of it that are still on their way are not drawn. */
const stop = () => {
  if (port) { port.close(); port = null; }
  ctrl = null;
};

self.onmessage = (e) => {
  const d = e.data;
  try {
    if (d.t === 'start') {
      // a new game: its own control words and port, a renderer that knows nothing of the previous game
      stop();
      ctrl = new Int32Array(d.ctrl);
      if (!renderer) {
        renderer = createRenderer(d.canvas, { width: d.width, height: d.height, msaa: d.msaa });
        renderer.onLost = () => { self.postMessage({ t: 'log', s: 'WebGL context lost' }); watchLost(); };
        renderer.onRestored = () => { clearInterval(lostTimer); self.postMessage({ t: 'log', s: 'WebGL context restored' }); if (ctrl) { report(); Atomics.add(ctrl, CTRL.RESTORED, 1); } };
      }
      renderer.reset(d.width, d.height, d.msaa);
      renderer.takeBusy(); busyAt = performance.now();
      report();
      const mine = port = d.port;
      mine.onmessage = (m) => {
        if (port !== mine) return;
        try { replay(renderer, m.data); } catch (err) { fatal(err); return; }
        report();
        Atomics.add(ctrl, CTRL.FRAMES, 1); Atomics.notify(ctrl, CTRL.FRAMES);
      };
      // A frame that arrived unreadable. Firefox does this to a frame that waited in the queue while
      // this worker hung for seconds (seen with the frames that travel in a shared buffer; why Gecko
      // does it is not known). The game thread counts on one answer per frame: without one it never
      // leaves its "the renderer hangs" state (remote.js pace) and the picture stands still for good.
      // So the lost frame counts as drawn, and RESTORED makes the recorder start the renderer from
      // nothing and upload every texture again, as after a lost context: the lost frame may have
      // carried uploads.
      mine.onmessageerror = () => {
        if (port !== mine) return;
        Atomics.add(ctrl, CTRL.RESTORED, 1);
        Atomics.add(ctrl, CTRL.FRAMES, 1); Atomics.notify(ctrl, CTRL.FRAMES);
      };
    } else if (d.t === 'stop') {
      stop();
      if (renderer) renderer.reset(0, 0, 0);
    } else if (d.t === 'lose' && renderer) {
      // for the checks in tools/: takes the WebGL context away and gives it back after d.ms
      const ext = renderer.gl.getExtension('WEBGL_lose_context');
      if (ext) { ext.loseContext(); setTimeout(() => ext.restoreContext(), d.ms || 500); }
    }
  } catch (err) { fatal(err); }
};
