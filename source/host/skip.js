// Skipping a scene of the game ("Overslaan"), as the JavaScript port offered it: hold a key for two
// seconds during a cutscene or a dialogue and the scene is over.
//
//   What the original has (read; docs/research/cutscenes.md)
//   - A scene is a motion of the level with named moments. The level's script answers each moment
//     (MotionCommand): "startcutscene" -> StartCutScene(t) 0x569ED0, lines of speech ->
//     CutSceneSay(id) 0x56A2B0, cameras, doors, gifts of the fairy, and at its end "stopcutscene" ->
//     StopCutScene(t) 0x56A0C0. The cutscene object (CRcCutScene, player+0x258) only keeps the bars
//     and the line of text: state at +0xA8, 0 none, 1 bars coming, 2 running, 3 bars going.
//   - The original has no way to end a scene early: no key, no script call, no debug command. The
//     only thing that ends a scene is its motion reaching its last moment, on the game's clock.
//
//   What this module does
//   The scene is played to its end by the original code, only much faster than it can be watched:
//   while a skip runs the platform's clock goes on by a fixed step per pass (SKIP_STEP, half a
//   second of game time) instead of by the real time, the platform does not wait for the display,
//   and the engine's RenderScene is not run (below). Every pass of the main loop is otherwise an
//   ordinary pass. Nothing of the game's memory is written by this module: what a scene gives,
//   moves, opens and switches on happens because its script does it, at the game time it would
//   have happened.
//
//   The step (read: CAdamSubLevel::Update 0x4F5170). The original takes the time since its last
//   pass from timeGetTime, limits it to 500 ms (m_LastTime = now - 500 when more went by) and cuts
//   it into updates of at most 125 ms (0x7D); every object gets Update(t, step) once per such
//   update. So half a second is the most game time one pass simulates without losing any: a pass
//   of a skip is the original's pass on a machine that draws two frames a second, four updates
//   and one draw. A larger step gains nothing (the pass still simulates 500 ms) and lets what
//   runs on absolute time (the LifeTime timers, DirectSound's positions) run ahead of what adds
//   up steps (the motions, the cameras, the bars). A run of the game at that rate without this
//   module, with everything drawn, leaves the same memory byte for byte as a skip that draws
//   (host.skip.draw = true; tools/skip-check.mjs check 1).
//   The fine step (SKIP_FINE_STEP, 30 passes a second, the step of every skip until 2026-11-15):
//   while RedCat himself is being moved during the scene (his place changed in a pass: a walk, a
//   fall, a ride the script gives him) the passes are that short again, until he has stood still
//   for SKIP_FINE_PASSES passes. In none of the scenes run by the check he moves before the scene
//   hands the controls back; the rule is for the scenes nobody ran. host.skip.step can be set for a
//   check (one step for the whole skip).
//
//   The draw (read: World_WorldRenderQ 0x5B8730, RenderScene 0x5B88D0; host hook 'renderscene',
//   tools/recomp/build.py). RenderScene hands the driver one view of the world: its faces, the
//   actors, the polygons. While a skip runs the hook answers 1 ("drawn") without running it.
//   Everything around it runs as always: the frame counter, the visibility of the camera's place
//   (Vis_VisWorld 0x5D5580, which the game's coronas ask about), the lights, the sky's turn, the
//   end of the polygons that live one frame (0x5B62F0: particles hand those in from their update,
//   and without that end they pile up), the HUD, the bars and the line of text, EndScene. What
//   then differs from a skip that draws was compared (tools/skip-check.mjs check 2): no value of
//   the game's objects, only what the renderer keeps for itself (its working tables in the image,
//   an actor's arrays, made at its first draw, and with them where later allocations land).
//
//   The skip runs to the pass in which the cutscene's state is back at 0 (the bars are gone and
//   RedCat has the controls), and then on for as long as the scene has left something running
//   (the tail, below). It also ends when the game leaves the world (a scene that ends a world),
//   when RedCat has no health, or after SKIP_LIMIT_MS of game time in the scene itself, which is
//   reported as 'failed'.
//   The tail. The original removes nothing when a scene ends (read: StopCutScene 0x481B20 only sets
//   state 3 and the fade time): a fairy the scene switched on stays until her own LifeTime is over,
//   then bursts into fifty stars that live four seconds; a scene camera with a time limit goes back
//   to the follow camera when that time is up. Both run on the game's clock, not on the scene's
//   state, and in the Castle and the Caves they outlast the scene by 3.6 and 4.6 s. The JavaScript
//   port removed them by hand when a scene was skipped ("Fairy cleanup when skipping"); here
//   nothing of the game's memory is written, so the game plays them out too, on the same fast
//   clock: after state 0 the skip goes on while a fairy that was busy during the skip still has
//   anything switched on, or a timed scene camera still runs. The tail stops when another scene
//   begins or RedCat loses health (seen at the end of a pass, so up to half a second of game time
//   late), and after SKIP_TAIL_MS at most. During it RedCat has the controls in the game's memory
//   but no input reaches the game (the page holds it back while a skip runs): the world goes on
//   with him standing, for 0 to 5 s of game time in the scenes measured.
//   Picture: none while the skip runs; the last picture before it stays on the canvas (remote.js
//   thin, switched on by onStart before the first skipped pass draws) until the first pass after
//   the skip draws the game.
//   Sound: the game's DirectSound calls go on as always (their state runs on the same clock), but
//   nothing is started on the page while the skip runs, and the level's music plays on there
//   untouched; at its end the loops DirectSound has playing are started at their place and what
//   plays once is left silent (dsound.js mute).
//
// Requests come from the page (worker.js) and are taken between two passes. Nothing here is part of
// a save state: a state taken in the middle of a skip is the game at that moment of its scene.
const APP = 0x006B915C, GS_GAME = 3;
const VT = { player: 0x0064C430, props: 0x0064C5FC, fairy: 0x0064E294, camera: 0x0064D5F4 };
// CRcFairy (vtable 0x64E294; frame 0x479560, start 0x47CDB0, burst 0x47C580, particle update 0x47DD60):
// +0x4BE8 the encounter runs, +0x38C her centre particle, +0x548 the fifty stars of her going and after
// them, at +0x4490, the five orbiters, each 0x144 bytes with "active" at +0x6C; +0x4B54 the ribbons are on.
const FAIRY = { runs: 0x4BE8, centre: 0x38C, parts: 0x548, count: 55, size: 0x144, active: 0x6C, ribbon: 0x4B54 };
/** Game time per pass while a scene is skipped: the most CAdamSubLevel::Update 0x4F5170 simulates in one pass (four updates of 125 ms). */
export const SKIP_STEP = 500;
/** Game time per pass while RedCat himself is being moved during a skipped scene: 30 passes a second. */
export const SKIP_FINE_STEP = 1000 / 30;
/** Passes at the fine step after the last pass in which RedCat's place changed (one second of game time). */
export const SKIP_FINE_PASSES = 30;
/** A scene that has not ended after this much game time is given up (the longest scene of the game is under two minutes). */
export const SKIP_LIMIT_MS = 5 * 60000;
/** After the scene itself: game time at most that a skip goes on for what the scene left running (measured: 0 to 4.6 s). */
export const SKIP_TAIL_MS = 6000;

export function installSkip(m, host) {
  const { u8, u32, i32, f32 } = m;
  /** [game state, cutscene state, RedCat has health]; game state 0 while there is no game object. */
  const answer = [0, 0, false, 0, 0, 0];          // one array for every call (worker.js asks twice a frame): every caller reads it at once; then the sublevel, RedCat's health and the player
  const give = (state, cut, alive, sub = 0, health = 0, player = 0) => { answer[0] = state; answer[1] = cut; answer[2] = alive; answer[3] = sub; answer[4] = health; answer[5] = player; return answer; };
  const read = () => {
    const app = u32[APP >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0;
    if (!game) return give(0, 0, false);
    const state = i32[(game + 0x98) >> 2];
    const sub = u32[(game + 0x60) >> 2], player = sub ? u32[(sub + 0x360) >> 2] : 0;
    if (!player || u32[player >> 2] !== VT.player) return give(state, 0, false);
    const props = u32[(player + 0x1F0) >> 2];
    const health = props && u32[props >> 2] === VT.props ? f32[(props + 0x3C) >> 2] : 1;
    return give(state, i32[(player + 0x258 + 0xA8) >> 2], health > 0, sub, health, player);
  };
  // What a scene leaves running after its last moment, read from the objects' own state (reads only).
  const fairyBusy = (o) => {
    if (u8[o + FAIRY.runs] || u8[o + FAIRY.centre + FAIRY.active] || u8[o + FAIRY.ribbon]) return true;
    for (let k = 0; k < FAIRY.count; k++) if (u8[o + FAIRY.parts + k * FAIRY.size + FAIRY.active]) return true;
    return false;
  };
  const seen = new Set();          // the fairies that had something running while this skip played the scene
  /** Walks the sublevel's object list (sub+0x34, node { object, next }). note: remember the busy fairies; else: is a remembered one still busy? */
  const fairies = (sub, note) => {
    for (let q = sub ? u32[(sub + 0x34) >> 2] : 0, n = 0; q && n < 20000; q = u32[(q + 4) >> 2], n++) {
      const o = u32[q >> 2];
      if (!o || u32[o >> 2] !== VT.fairy) continue;
      if (note) { if (fairyBusy(o)) seen.add(o); } else if (seen.has(o) && fairyBusy(o)) return true;
    }
    return false;
  };
  // A camera on a timer of its own (camera controller player+0x250; mode +0x450; time and limit in ms +0x508,
  // +0x50C): fixed (7, 8; 0x459D40 goes back to the follow camera when the time is past a limit that is not 0)
  // or a route (10; 0x45A130). The Caves' opening scene keeps its last one for 1.9 s after the bars are gone.
  const timedCamera = (player) => {
    const c = player ? u32[(player + 0x250) >> 2] : 0;
    if (!c || u32[c >> 2] !== VT.camera) return false;
    const mode = i32[(c + 0x450) >> 2], limit = i32[(c + 0x50C) >> 2];
    return (mode === 7 || mode === 8 || mode === 10) && limit > 0 && i32[(c + 0x508) >> 2] <= limit;
  };
  let tail = -1, health0 = 0;        // tail: game time since the scene itself ended, -1 while it runs
  // RedCat's place at the end of the pass before (player+0x198, three floats), and what follows from a change:
  // `fine` passes at the fine step still to come; `moves` the passes in a row in which the place changed
  const place = new Float32Array(3);
  let placed = false, fine = 0, moves = 0;
  const moved = (player) => {
    let far = false;
    for (let j = 0; j < 3; j++) { const v = f32[(player + 0x198 + j * 4) >> 2]; if (placed && Math.abs(v - place[j]) > 0.01) far = true; place[j] = v; }
    placed = true;
    return far;
  };
  const sk = host.skip = {
    active: false,
    asked: false,
    frames: 0, ms: 0,          // of the skip that runs, or of the last one
    fineFrames: 0,             // of those frames, the ones at the fine step (RedCat was being moved)
    step: 0,                   // for a check: this step for every pass of a skip instead of SKIP_STEP and the fine step (0: the rule)
    draw: false,               // for a check: true runs RenderScene during a skip as well (the skip is then the original's pass and nothing else)
    steps: null,               // for a check: an array that gets every pass's step
    onStart: null,             // () => void: a skip was taken; the pass that follows is its first
    tailMs: 0, tailWhy: '',    // of the last skip: game time it ran on after the scene, and what ended it ('nothing left', 'over', 'another scene', 'hurt', 'limit')
    tailLimit: SKIP_TAIL_MS,
    count: 0,                  // skips started
    limit: SKIP_LIMIT_MS,      // game time after which a skip is given up
    result: '',                // how the last request ended: 'done', 'failed' (the limit), 'refused' (no scene to skip)
    onEnd: null,               // (result, { frames, ms }) => void
    /** The cutscene's state as the page needs it: 0 none (or no world, or RedCat without health), 1 bars coming, 2 running, 3 bars going. */
    scene() { const [state, cut, alive] = read(); return state === GS_GAME && alive ? cut : 0; },
    /** The game's state (CAdamGame +0x98): 3 a world is played, 4 the results screen, 7 the retry screen. */
    gameState() { return read()[0]; },
    /** Asks for the scene that runs to be skipped; taken at the next pass. */
    request() { if (!sk.active) sk.asked = true; },
    /** Takes a request back that has not been taken yet (the game is inside one of its own loops, its menu or its pause: no pass comes). */
    withdraw() { sk.asked = false; },
    /** Ends a skip that runs, as if the scene were over (the game goes on at the normal speed from where it is). */
    cancel() { sk.asked = false; if (sk.active) finish('done', true); },
    /**
     * Called once per presented frame, before the platform's own frame(): the time the platform's
     * clock must go on by for this frame, 0 for "the real time".
     */
    frame() {
      if (!sk.active) return 0;
      const [state, cut, alive, sub, health, player] = read();
      // The step the clock goes on by after this pass. RedCat moved by something other than the scene handing the
      // controls back (which drops him onto the ground in one pass, in most scenes measured): fine steps. While
      // the scene has the controls one pass with a change is enough, after that two in a row.
      if (player && state === GS_GAME) { if (moved(player)) { if (++moves >= (cut !== 0 ? 1 : 2)) fine = SKIP_FINE_PASSES; } else moves = 0; }
      let step = sk.step || SKIP_STEP;
      if (!sk.step && fine > 0) { fine--; step = SKIP_FINE_STEP; sk.fineFrames++; }
      sk.frames++; sk.ms += step;
      if (sk.steps) sk.steps.push(step);
      if (state !== GS_GAME || !alive) finish('done');
      else if (tail < 0) {
        // the scene itself, to the pass in which the bars are gone and the controls are back (state 0)
        fairies(sub, true);
        if (cut === 0) {
          tail = 0; health0 = health;
          if (!fairies(sub, false) && !timedCamera(player)) { sk.tailWhy = 'nothing left'; finish('done'); }
        } else if (sk.ms >= sk.limit) finish('failed');
      } else {
        // what the scene left running, played out by the game as well; given up when anything else happens
        tail += step;
        const why = cut !== 0 ? 'another scene' : health < health0 ? 'hurt' : !fairies(sub, false) && !timedCamera(player) ? 'over' : tail >= sk.tailLimit ? 'limit' : '';
        if (why) { sk.tailWhy = why; finish('done'); }
      }
      return step;
    },
  };
  const finish = (result, cut) => {
    sk.active = false;
    sk.result = result;
    sk.tailMs = Math.max(0, tail); tail = -1; seen.clear();
    // given up ('failed') or cut short (cancel): the scene goes on and is watched again, so everything DirectSound has playing is heard again
    if (host.dsound && host.dsound.mute) host.dsound.mute(false, result === 'done' && !cut);
    if (sk.onEnd) sk.onEnd(result, { frames: sk.frames, ms: sk.ms, tailMs: sk.tailMs, tailWhy: sk.tailWhy, fineFrames: sk.fineFrames });
  };
  // Genesis3D's RenderScene 0x5B88D0, cdecl(engine, world, camera, frustum), result 1 for "drawn"; called by
  // World_WorldRenderQ (0x5B8838) and for a mirror's view (0x5BB0EB). Not run while a scene is skipped.
  const h = m.meta.hooks && m.meta.hooks.renderscene;
  if (h) {
    const body = m.meta.eh.guardBodies[String(h.addr)];
    m.bindRaw('hook!renderscene', h.pop, (esp, ecx, edx, eax) => (sk.active && !sk.draw ? 1 : m.callBody(body, esp, eax, ecx, edx)));
    m.bound.add('hook!renderscene');
  } else host.log('skip: no hook on RenderScene in this build, a skipped scene is drawn as it goes');
  if (host.mainLoop) host.mainLoop.beforePass.push(() => {
    if (!sk.asked) return;
    sk.asked = false;
    const [state, cut, alive] = read();
    if (state !== GS_GAME || !(cut === 1 || cut === 2) || !alive) { sk.result = 'refused'; if (sk.onEnd) sk.onEnd('refused', { frames: 0, ms: 0 }); return; }
    sk.active = true; sk.frames = 0; sk.ms = 0; sk.fineFrames = 0; sk.count++; sk.result = ''; sk.tailMs = 0; sk.tailWhy = ''; tail = -1; seen.clear();
    placed = false; fine = 0; moves = 0;
    if (host.dsound && host.dsound.mute) host.dsound.mute(true);
    if (sk.onStart) sk.onStart();
  });
  // a restored state is a game at the normal speed, whatever ran before it
  const prev = host.onRestored;
  host.onRestored = () => { sk.asked = false; if (sk.active) { sk.active = false; tail = -1; seen.clear(); sk.result = 'done'; if (host.dsound) host.dsound.muted = false; if (sk.onEnd) sk.onEnd('done', { frames: sk.frames, ms: sk.ms, tailMs: 0, tailWhy: '' }); } if (prev) prev(); };
}
