// The game's main loop, run by the host. CAdamApplication::MainLoop (RcHcGame.dat 0x4BFD60) is
// replaced by a hook (tools/recomp/build.py, GAME_HOOKS); what it did per pass is done here with
// the same calls, in the same order (docs/research/startup-and-loop.md, 4.1 and 4.4):
//
//   while (!app->m_Quit) {
//     app->ProcessMessages(true, &text);                 // 0x4BEF70
//     if (app->m_Quit) break;
//     app->HandleKeyCommands(NULL, &text);               // 0x4C0170
//     if (window->m_Active) {
//       game->HandleCurrentState();                      // 0x52AF50: the frame
//       if (game->m_Command is not empty) { game->ChangeToSubLevel(&m_Command); m_Command = ""; }
//     }
//   }
//
// Why the host owns it: between two passes no game code is executing, so the whole game can be
// saved or replaced there (snapshot.js). Everything else, including the nested loops of the
// in-game menu, pause, results and loading, still runs as original code inside one pass.
//
// Not carried over from the original function: the console toggle before the loop (only with
// [Debug] DebugUseConsole) and writing the console state to the INI after it.
import { GameExit } from './machine.js';
import { CppException } from './eh.js';
import { StateUnusable } from './snapshot.js';

const APP_GLOBAL = 0x006B915C;
const PROPS_VTABLE = 0x0064C5FC;        // CRcPlayerProperties (docs/research/cheats-and-player.md 1.3)
const A = { processMessages: 0x004BEF70, handleKeyCommands: 0x004C0170, handleCurrentState: 0x0052AF50, stringAssign: 0x0040CC00, npos: 0x0064ABA8,
  shutdownDriver: 0x005BB9E0, appShutdown: 0x004BC090, freeInstance: 0x004BC650, statics: 0x0059B0D0, iniDelete: 0x005A4480 };

export function installMainLoop(m, host) {
  const { u8, u32, f32 } = m;
  // beforePass: functions run before every pass, when no game code is executing (cheats.js uses this)
  // changed: a pass changed the sublevel (the next world, or the same one again after the retry screen); whoever keeps save states takes one and clears it
  // frames: the frames presented in the pass that runs (or, between two passes, in the last one). A pass of play presents one;
  //   a second frame means the game is inside one of its own loops (its menu 0x52EC30, pause 0x534D00, results, retry, a
  //   fade, loading): onNested functions run at that second frame, inside game code, so they may only read and write memory
  const loop = host.mainLoop = { passes: 0, restored: false, pendingRestore: null, onPass: null, beforePass: [], changed: false, saveBlocked: () => '', frames: 0, onNested: [] };
  /**
   * Why the game as it stands between two passes must not become a save state, or ''.
   *  'quit'  the quit flag app+0x3E is set (SetQuit 0x4C4440: "Nee" on the retry screen, "Spel verlaten", the end of a
   *          Snelspel world or of the last world): the pass that set it still counts as a pass, and a game continued
   *          from such a state would end at once.
   *  'dead'  RedCat has no health (IsDead 0x439CB0 is health <= 0; health is the f32 at props+0x3C). Seen in the Node
   *          runner after the game's own Kill 0x4DD1A0: 121 passes at health 0, then either health back with a life
   *          less, or with no life left lives -1 and the retry screen inside the next pass, health still 0.
   * Reads only; no world loaded yet (no player object) is ''.
   */
  loop.saveBlocked = () => {
    const app = u32[APP_GLOBAL >> 2];
    if (!app) return '';
    if (u8[app + 0x3E]) return 'quit';
    const game = u32[(app + 0x3A4) >> 2], sub = game ? u32[(game + 0x60) >> 2] : 0, player = sub ? u32[(sub + 0x360) >> 2] : 0;
    const props = player ? u32[(player + 0x1F0) >> 2] : 0;
    return props && u32[props >> 2] === PROPS_VTABLE && !(f32[(props + 0x3C) >> 2] > 0) ? 'dead' : '';
  };
  if (!m._ids || !m._ids.has('hook!mainloop')) { try { m.thunkId('hook!mainloop'); } catch (e) { host.log('main loop hook missing in this build: save states are not available'); return; } }

  // Two empty std::string (all zero) for the calls below. Allocated here, while the host is put
  // together, so that they are at the same address in every boot of this build: a restored state
  // may come from a boot of another world, which had taken other low memory by the time its loop began.
  const text = m.lowAlloc(16), empty = m.lowAlloc(16);
  // the arguments of the calls of every pass, made once (m.call only reads them)
  const ARGS_MESSAGES = [1, text], ARGS_KEYS = [0, text], NONE = [];
  m.bindRaw('hook!mainloop', 0, (esp, ecx) => {
    loop.esp = esp;
    const pass = () => {
      const app = u32[APP_GLOBAL >> 2];
      const game = u32[(app + 0x3A4) >> 2], win = u32[(app + 0x58) >> 2];
      if (u8[app + 0x3E]) return false;
      m.esp = esp;
      m.call(A.processMessages, ARGS_MESSAGES, app);
      if (u8[app + 0x3E]) return false;
      m.call(A.handleKeyCommands, ARGS_KEYS, app);
      if (u8[win + 0x59]) {
        m.call(A.handleCurrentState, NONE, game);
        if (u32[(game + 0x70) >> 2]) {
          m.call(u32[(u32[game >> 2] + 0x1C) >> 2], [game + 0x68], game);            // vtbl[7]: ChangeToSubLevel
          m.call(A.stringAssign, [empty, 0, u32[A.npos >> 2]], game + 0x68);        // m_Command = ""
          loop.changed = true;
        }
      }
      return true;
    };
    try {
      for (;;) {
        if (loop.pendingRestore) {
          const s = loop.pendingRestore;
          loop.pendingRestore = null;
          // A state that does not fit is refused before anything is written (snapshot.js), so
          // the booted game is whole and can go on: host.onRestoreFailed decides (the browser
          // lets it, or ends this game thread to start the player's own world). Without that
          // function, and when load() itself fails (memory is then already replaced), the
          // StateUnusable error leaves the game.
          let refused = null;
          if (host.onRestoreFailed) { try { host.snap.check(s, esp); } catch (e) { if (!(e instanceof StateUnusable)) throw e; refused = e; } }
          if (refused) host.onRestoreFailed(refused.reason);
          else {
            host.snap.load(s, esp);
            loop.restored = true;
            if (host.onRestored) host.onRestored();
          }
        }
        for (let k = 0; k < loop.beforePass.length; k++) { m.esp = esp; loop.beforePass[k](esp); }
        loop.frames = 0;
        if (!pass()) break;
        loop.passes++;
        if (loop.onPass) loop.onPass(esp);       // the platform takes save states here
      }
    } catch (e) {
      // A C++ exception leaving a pass would be caught by the original Start() further down the
      // stack. After a restore those frames belong to another boot, so the game ends here instead.
      if (!(e instanceof CppException)) throw e;
      host.log('main loop left by ' + e.typeName);
      if (e.typeName !== '.?AVCAdamQuitException@@') { host.messageBox('Er is een onverwachte fout opgetreden in RedCat.', '', 16); throw new GameExit(1); }
      throw new GameExit(0);
    }
    if (!loop.restored) return 0;          // a game that was never replaced returns into the original Start(), which shuts down
    // orderly shutdown as Start() and WinMain do it, with pointers read from the restored memory
    const app = u32[APP_GLOBAL >> 2];
    const engine = u32[(app + 0x3A0) >> 2];
    m.esp = esp;
    if (engine && u32[(engine + 0x100) >> 2]) m.call(A.shutdownDriver, [u32[(engine + 0x100) >> 2]]);
    m.call(A.appShutdown, [], app);
    m.call(A.freeInstance, [app]);
    m.call(A.statics, []);
    m.call(A.iniDelete, []);
    throw new GameExit(0);
  });
  m.bound.add('hook!mainloop');
}
