// Puts the recompiled RcHcGame.dat together with its host services. The platform object supplies
// what differs between the browser and the Node test runner: clock, files, input, audio sink,
// text rasteriser, the renderer behind the Genesis3D driver, persistence.
import { Machine, GameExit } from './machine.js';
import { installKernel32, GAME_DIR } from './kernel32.js';
import { installKernel32x } from './kernel32x.js';
import { installGdi32 } from './gdi32.js';
import { installUser32 } from './user32.js';
import { installWinmm } from './winmm.js';
import { installDinput } from './dinput.js';
import { installDsound } from './dsound.js';
import { installEh } from './eh.js';
import { installGDriver } from './gdriver.js';
import { Vfs } from './vfs.js';
import { applyLaunch } from './ini.js';
import { installSnapshot } from './snapshot.js';
import { installMainLoop } from './mainloop.js';
import { installCheats } from './cheats.js';
import { installLook } from './look.js';
import { installWallLift } from './walllift.js';
import { installMove } from './move.js';
import { installSkip } from './skip.js';
import { installSubtitles } from './subtitles.js';
import { installFixes, applyFixFiles, fixFlags } from './fixes.js';
import { installVolume } from './volume.js';
import { installTorches } from './torches.js';
import { setIniValues } from './ini.js';

export { GameExit, GAME_DIR };

/**
 * platform: {
 *   log(s), nowMs(), wallClockMs(), sleep(ms),
 *   screen: { width, height },                 // what the game sees as the desktop and display mode
 *   input: { poll() -> events[] | null }, joystick() -> state | null,
 *   audio: sink | null (see dsound.js), text: { metrics(font), glyph(font, code) } (see gdi32.js),
 *   render: the renderer behind the Genesis3D driver (see gdriver.js) or null,
 *   frame(step): called after each presented frame; step > 0 (a scene is being skipped, skip.js): the clock goes on by step ms for this frame and nothing waits,
 *   persistFile(path, data | null), messageBox(text, caption, type) -> id
 * }
 * files: [{ path, data } | { path, size, reader }]   (paths on the virtual C: drive)
 */
export async function createGame({ wasm, meta, codeMap, platform, files, options = {} }) {
  const m = new Machine(meta);
  await m.instantiate(wasm, codeMap);
  const vfs = new Vfs();
  for (const f of files) {
    if (f.data) vfs.add(f.path, f.data, { readOnly: !!f.readOnly, persist: !!f.persist });
    else vfs.mount(f.path, f.size, f.reader);
  }
  vfs.mkdir('C:\\WINDOWS');
  vfs.mkdir('C:\\WINDOWS\\SYSTEM');
  vfs.mkdir('C:\\WINDOWS\\TEMP');
  vfs.onPersist = (path, data) => platform.persistFile(path, data);
  if (options.launch) applyLaunch(vfs, GAME_DIR, options.launch);
  // the fixes carried over from the JavaScript port (fixes.js): options.fixes overrides flags, 'off' is the original
  if (options.launch) applyFixFiles(vfs, GAME_DIR, fixFlags(options.fixes), setIniValues);

  const host = {
    m, vfs, options,
    log: platform.log,
    nowMs: platform.nowMs,
    wallClockMs: platform.wallClockMs,
    sleep: (ms) => platform.sleep(ms),
    screen: platform.screen,
    input: platform.input,
    joystick: platform.joystick,
    audio: platform.audio || null,
    text: platform.text,
    render: platform.render || null,
    // skip.js: while a scene is skipped the platform's clock goes on by a step per pass (half a second of game time) and it does not wait
    onFrame: () => { const L = host.mainLoop; if (L && ++L.frames === 2) for (const fn of L.onNested) fn(); const step = host.skip ? host.skip.frame() : 0; if (host.subtitles) host.subtitles.frame(); if (platform.frame) platform.frame(step); },
    setTime: (t) => { if (platform.setTime) platform.setTime(t); },
    onRestored: () => { if (host.dsound.resume) host.dsound.resume(); },
    settingsStore: new Map(),
    saveSettings: () => {},
    messageBox: (text, caption, type) => platform.messageBox(text, caption, type),
    commandLine: options.commandLine,
    virtualLibs: new Map(),
    raiseException: () => { throw new Error('RaiseException before the exception support was installed'); },
    rtlUnwind: () => 0,
  };
  m.onUnimplemented = (name) => { throw new Error('Host function not implemented: ' + name); };
  installSnapshot(m, host);
  installKernel32(m, host);
  installKernel32x(m, host);
  installGdi32(m, host);
  installUser32(m, host);
  installWinmm(m, host);
  installDinput(m, host);
  installDsound(m, host);
  installEh(m, host);
  installGDriver(m, host);
  installMainLoop(m, host);
  installCheats(m, host);
  installLook(m, host);
  installWallLift(m, host);
  installMove(m, host);
  installSkip(m, host);           // a late hook (RenderScene), no low memory, no part of a state
  installSubtitles(m, host);      // a late hook, as those of move.js
  installVolume(m, host, vfs, GAME_DIR);      // no thunk, no low memory, no part of a state
  installFixes(m, host);          // last: it wraps a guard that eh.js made, and takes no low memory
  installTorches(m, host);        // flag handTorches of fixes.js: no thunk, no low memory, one part of a state
  // every thunk, interface and low-memory structure of the host exists now: the build's identity for save states
  host.snap.seal();

  host.unbound = Object.values(meta.thunks).filter((n) => !m.bound.has(n));

  return {
    m, host, vfs,
    /** Runs the original entry point (CRT start-up -> WinMain) until the game exits. */
    run() {
      try {
        m.call(meta.entry, []);
        return 0;
      } catch (e) {
        if (e instanceof GameExit) return e.code;
        throw e;
      }
    },
  };
}
