// Gradual movement for a stick, and walking slowly. Neither exists in the original
// (docs/research/cheats-and-player.md 1.5 and 7): its controls are on or off, whatever the device.
//
//   What the original does (read and run, addresses are RcHcGame.dat's)
//   - The move vector of a frame is made from input actions that are held or not (CRcInput slot 1,
//     0x482110). A joystick does not change that: its two axes are reduced to four booleans against
//     centre +- 10 percent of the range (0x5A61F0, constant 0.1 at 0x5A5DD0) before anything of the
//     game sees them. So the joystick path (joyGetPosEx, winmm.js) cannot give a gradual walk.
//   - The steering (CRCPlayer slot 24, 0x434430 -> 0x434F20) only looks at the signs of that vector:
//     it turns RedCat towards "camera forward", 45 degrees beside it or 90 degrees beside it, and
//     writes a new move vector of whole numbers ((0,0,-1) forward, (0,0,1) back) with 0x437770.
//   - The speed of a frame is the move vector times RunForwardSpeed or RunOtherSpeed
//     (0x4DAD83..0x4DADE8). The walk speeds (0x6B92C0, 0x6B92C4) are chosen when the input object's
//     slot 11 answers true (0x4DAD62), and that is 0x53DC80, which returns 0: the action Walk of
//     [KeyBinds] does nothing. Run: Up, and Up with Alt, both 3.69 units a pass.
//
//   What this module adds, as the JavaScript port did for its touch stick (its native-camera.js,
//   touchSteer; docs/native-camera.md there), through two host hooks (tools/recomp/build.py):
//   - 'steer', on 0x434430: the original runs first. When a stick is deflected and the original
//     took its steering branch (player in control, not locked, with movement), the heading it wrote
//     is replaced: RedCat turns towards the stick's direction relative to the camera, at any angle;
//     within 45 degrees of straight back he keeps facing away and backs up. He turns by
//     min(1, dt x rate) of the difference, rate 6.1 (the original's) times the deflection but at
//     least 0.35 of it, and jumps onto the target within pi/8, as the original. "Camera forward"
//     and "left" are the two vectors the original takes from the engine camera's matrix. The move
//     vector stays what the original wrote, so the camera's rows, the animation and "firing stops
//     movement" see what they always see. With a locked target the original's heading stays, and
//     the move vector is the stick's direction in RedCat's own frame.
//   - 'move', on CRCPlayer::Move 0x435490 as called from the player's update (0x4DAE67): the part
//     of the velocity that comes from input is multiplied by the stick's deflection, and by
//     96 / 156.8 while "walk" is held (the original's WalkForwardSpeed over its RunForwardSpeed, in
//     every direction: the original's own walk table would back up faster than running, 156.8
//     against 144). What the level adds (player+0x1B4 times the world scale, 0x4DAE3D) is not scaled.
//
// The keyboard and a d-pad are untouched: with no stick deflected and walk not held, both hooks call
// the original and nothing else. The stick's value is input of the moment, like a held key; it is
// not part of a save state.
//
//   Free flight (the cheat; the original's no-clip mode, byte engine+0x48 = 0, cheats.js) is flown as in
//   the JavaScript port (its collision.js, the noClip branch of the player's step), through the same two
//   hooks, and only while that byte is 0:
//   - 'steer': the frame's input is read first: the raw move vector (input+0x28: x right, y MoveUp /
//     MoveDown, -z forward), the jump flag (input+0x21) and this module's stick and "walk". The original
//     runs, and the heading it turned (input+0x14..+0x1C) is put back unless a target is locked: the
//     movement keys do not turn RedCat, only the look does (look.js turns the heading itself). The move
//     vector, "has movement" (+0x22) and the jump flag are then cleared, so he stands in his idle pose.
//   - 'move': the velocity handed to CRCPlayer::Move is replaced by flyVelocity() below: 240 units a
//     second along the look direction (yaw input+0x18, the look pitch of look.js) for forward, sideways
//     for left and right, straight up for Jump (or MoveUp), down for Walk (or MoveDown). The original's
//     state 4 then does position += velocity x dt (0x4360CC) with no collision and no gravity, and its
//     touch and trigger passes as always.
//   - before each pass the follow camera's "cut" byte (dop+0x454) is set: its yaw and pitch follow the
//     view without smoothing and without the position chase, the JavaScript port's "direct" camera. Its
//     hull sweep and line of sight are the original's and stay.
const APP = 0x006B915C, GS_GAME = 3, ENGINE = 0x006C8DE0;
const VT = { player: 0x0064C430, input: 0x0064C5B0, props: 0x0064C5FC, dop: 0x0064D5F4 };
export const FLY_SPEED = 240;                             // units per second, the JavaScript port's
const LOOK_ORBIT = 0x420, LOOK_DEFAULT_PITCH = 0.16;      // look.js: the look pitch is dop+0x420 + 0.16, positive looks down
const RET_STEER = 0x004DAB73, RET_MOVE = 0x004DAE6A;      // where the player's update calls the two functions
const STEER_STATIC = 0x006B52B8;                          // the steering's own scratch: (first move x, heading - pi/2, first move z)
const RATE = 6.1, SNAP = Math.PI / 8;                     // 0x64C428, 0x64C580
export const MIN_TURN = 0.35, WALK_SCALE = 96 / 156.8;    // the JavaScript port's TOUCH_MIN_TURN and TOUCH_WALK_SCALE
const PI = Math.PI, TAU = 2 * Math.PI;
const wrap = (x) => { x -= TAU * Math.round(x / TAU); return x <= -PI ? x + TAU : x; };

/** The heading after one frame: onto the target within pi/8, else min(1, dt x rate) of the way (0x43478C). */
export function steerHeading(current, target, rate, dt) {
  const diff = wrap(target - current);
  return Math.abs(diff) < SNAP ? wrap(target) : wrap(current + Math.min(1, Math.max(0, dt) * rate) * diff);
}
/**
 * Where a stick (x to the right, y forward, length at most 1) sends RedCat. forward and left are the
 * horizontal unit vectors [x, z] of the controls; back: the game is moving him backwards this frame.
 * Returns the heading h he should face (he walks along (cos h, 0, -sin h)), or null without a direction.
 */
export function stickHeading(x, y, forward, left, back) {
  const n = Math.hypot(x, y);
  if (!(n > 0)) return null;
  let dx = (forward[0] * y - left[0] * x) / n, dz = (forward[1] * y - left[1] * x) / n;
  if (back) { dx = -dx; dz = -dz; }
  return Math.atan2(-dz, dx);
}

/**
 * Free flight's velocity, units per second: the JavaScript port's rule. yaw is input+0x18 (forward is
 * (-sin yaw, 0, -cos yaw), 0x4DA920), pitch positive looks down; forward and right -1 .. 1, vertical -1, 0 or 1.
 */
export function flyVelocity(yaw, pitch, forward, right, vertical) {
  const d = [-Math.sin(yaw) * Math.cos(pitch) * forward + Math.cos(yaw) * right, -Math.sin(pitch) * forward + vertical, -Math.cos(yaw) * Math.cos(pitch) * forward - Math.sin(yaw) * right];
  const length = Math.max(1, Math.hypot(d[0], d[1], d[2]));
  return d.map((v) => v / length * FLY_SPEED);
}

export function installMove(m, host) {
  const { u8, u32, i32, f32 } = m;
  const st = { x: 0, y: 0, walk: false };
  const api = host.move = {
    /** A stick's place: x to the right, y forward, each -1 .. 1 (the page has taken its dead zone off). (0, 0): released. */
    stick(x, y) {
      x = Number.isFinite(x) ? x : 0; y = Number.isFinite(y) ? y : 0;
      const n = Math.hypot(x, y);
      if (n > 1) { x /= n; y /= n; }
      st.x = x; st.y = y;
    },
    /** Walking slowly, while held. */
    walk(on) { st.walk = !!on; },
    /** For the page (touch controls, first-time hints): is a world being played, does the player control RedCat now, is a scene playing. */
    state() {
      const app = u32[APP >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0;
      if (!game) return { world: false, control: false, cutscene: false };
      const world = i32[(game + 0x98) >> 2] === GS_GAME;
      const sub = u32[(game + 0x60) >> 2], player = sub ? u32[(sub + 0x360) >> 2] : 0;
      if (!world || !player || u32[player >> 2] !== VT.player) return { world: false, control: false, cutscene: false };
      // as look.js: the player object is active (+0x104: 0 during a cutscene and while he gets up), no cutscene is
      // fading in or out (cutscene +0xA8), and he is alive (props +0x3C)
      const props = u32[(player + 0x1F0) >> 2];
      const alive = props && u32[props >> 2] === VT.props ? f32[(props + 0x3C) >> 2] > 0 : true;
      const free = u8[player + 0x104] !== 0 && i32[(player + 0x258 + 0xA8) >> 2] === 0;
      // cutscene: a scene has the controls of a living RedCat (not the retry screen, which needs the keys)
      // speed: the velocity of the last frame over the ground, units per second (player+0x180), for the checks
      return { world: true, control: free && alive, cutscene: alive && !free, speed: Math.round(Math.hypot(f32[(player + 0x180) >> 2], f32[(player + 0x188) >> 2]) * 10) / 10, steered: api.stats.steered, scaled: api.stats.scaled };
    },
    stats: { steered: 0, scaled: 0, flown: 0 },      // frames in which each hook changed something, for the checks
    last: null,                            // for the checks: what the steering hook did last
  };
  // A restored state has the key bindings of the day it was made in the game's memory, and the player may have
  // changed his keys in the menu since (kernel32.js sets host.keysChanged when it put the menu's lines into the
  // file). The game's own loader reads the section again: 0x53DC20 (input object + 0x14 -> 0x544B80), the call
  // the game makes when a world is set up (0x4D5E74, with the input object of app+0x3A8).
  const LOAD_KEYS = 0x0053DC20;      // thiscall(input object): ADD ECX, 0x14 / JMP 0x544B80
  // The game keeps the INI files it has read (CDaviIniFileSystem, the object at 0x6CA01C): the loader alone would
  // find the old lines there. 0x5A4480 deletes that object, as the game does when it ends (0x5924A2); the two
  // functions that use it (0x5AD130, 0x5AD1A0) make a new one when there is none, and nothing else holds it or
  // a file of it (they are the only code that reads 0x6CA01C). The files are then read again when asked for.
  const INI_DROP = 0x005A4480;
  const flying = () => { const engine = u32[ENGINE >> 2]; return !!engine && u8[engine + 0x48] === 0; };
  let fly = null;                          // free flight: this frame's input, from the steering hook to the move hook
  // free flight: the follow camera goes with the view directly (see the top of this file). Modes 5 and 6 only:
  // elsewhere the byte also restarts the camera's timer (0x45956B, 0x4595C2).
  if (host.mainLoop) host.mainLoop.beforePass.push(() => {
    if (!flying()) return;
    const app = u32[APP >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0;
    if (!game || i32[(game + 0x98) >> 2] !== GS_GAME) return;
    const sub = u32[(game + 0x60) >> 2], player = sub ? u32[(sub + 0x360) >> 2] : 0;
    if (!player || u32[player >> 2] !== VT.player || !u8[player + 0x104]) return;
    const dop = u32[(player + 0x250) >> 2];
    if (!dop || u32[dop >> 2] !== VT.dop) return;
    const mode = i32[(dop + 0x450) >> 2];
    if (mode === 5 || mode === 6) u8[dop + 0x454] = 1;
  });
  if (host.mainLoop) host.mainLoop.beforePass.push((esp) => {
    if (!host.keysChanged) return;
    host.keysChanged = false;
    const app = u32[APP >> 2], input = app ? u32[(app + 0x3A8) >> 2] : 0;
    if (!input) return;
    const mem = (esp - 0x1000) & ~15;
    m.esp = mem - 64;
    try { m.call(INI_DROP, []); m.call(LOAD_KEYS, [], input); api.stats.keysLoaded = (api.stats.keysLoaded || 0) + 1; } finally { m.esp = esp; }
  });
  // the body as a function (esp, eax, ecx, edx) -> eax (m.callBody: no result array per call)
  const bodyOf = (name) => { const h = m.meta.hooks && m.meta.hooks[name]; if (!h) return [null, null]; const k = m.meta.eh.guardBodies[String(h.addr)]; return [h, (esp, eax, ecx, edx) => m.callBody(k, esp, eax, ecx, edx)]; };
  const [steerHook, steerBody] = bodyOf('steer'), [moveHook, moveBody] = bodyOf('move');
  if (!steerHook || !moveHook) { host.log('steering hooks missing in this build: sticks act as keys'); api.missing = true; return; }
  const scratch = new Float32Array(1), bits = new Uint32Array(scratch.buffer);
  const SENTINEL = 0x7FC0AD0B;             // a NaN no float sum makes

  // CRCPlayer slot 24: thiscall(a, dtMs, rotation source, input), ret 0x10
  m.bindRaw('hook!steer', steerHook.pop, (esp, ecx, edx, eax) => {
    const n = Math.hypot(st.x, st.y);
    fly = null;
    if (u32[esp >> 2] === RET_STEER && flying()) {
      const player = ecx >>> 0, input = u32[(esp + 16) >> 2];
      if (u32[player >> 2] === VT.player && input && u32[input >> 2] === VT.input) {
        const mx = f32[(input + 0x28) >> 2], my = f32[(input + 0x2C) >> 2], mz = f32[(input + 0x30) >> 2];
        const up = u8[input + 0x21] !== 0 || my > 0, down = st.walk || my < 0;
        const rot = [u32[(input + 0x14) >> 2], u32[(input + 0x18) >> 2], u32[(input + 0x1C) >> 2]];
        const r = steerBody(esp, eax, ecx, edx);
        const locked = u8[player + 0x364] !== 0 && (u32[(player + 0x35C) >> 2] !== 0 || u32[(player + 0x360) >> 2] !== 0);
        if (!locked) u32.set(rot, (input + 0x14) >> 2);
        // a stick's value when one is deflected, else the keys (a pressed key is 1 or -1; Math.sign: the original normalises a diagonal)
        fly = n > 0 ? { forward: st.y, right: st.x, vertical: Number(up) - Number(down) } : { forward: -Math.sign(mz), right: Math.sign(mx), vertical: Number(up) - Number(down) };
        f32[(input + 0x28) >> 2] = 0; f32[(input + 0x2C) >> 2] = 0; f32[(input + 0x30) >> 2] = 0;
        u8[input + 0x22] = 0; u8[input + 0x21] = 0;
        return r;
      }
    }
    if (!(n > 0) || u32[esp >> 2] !== RET_STEER) return steerBody(esp, eax, ecx, edx);
    const player = ecx >>> 0, input = u32[(esp + 16) >> 2], dt = i32[(esp + 8) >> 2] * 0.001;
    if (u32[player >> 2] !== VT.player || !input || u32[input >> 2] !== VT.input) return steerBody(esp, eax, ecx, edx);
    const h0 = wrap(f32[(input + 0x18) >> 2] + PI / 2);
    // Did the original steer? Its steering branch always stores heading - pi/2 in its static (0x4348A6);
    // the other branch (no control, locked, no movement) does not touch it.
    const at = (STEER_STATIC + 4) >> 2, kept = u32[at];
    u32[at] = SENTINEL;
    const r = steerBody(esp, eax, ecx, edx);
    if (u32[at] === SENTINEL) { u32[at] = kept; return r; }
    const mx = f32[(input + 0x28) >> 2], mz = f32[(input + 0x30) >> 2];
    const locked = u8[player + 0x364] !== 0 && (u32[(player + 0x35C) >> 2] !== 0 || u32[(player + 0x360) >> 2] !== 0);
    if (locked) {
      // the original has turned him towards the target and left the raw move vector; zero: firing stops movement (0x435382 ff.)
      if (mx !== 0 || mz !== 0) { f32[(input + 0x28) >> 2] = st.x / n; f32[(input + 0x30) >> 2] = -st.y / n; api.stats.steered++; }
      api.last = { locked: true };
      return r;
    }
    // "forward" and "left" of the controls, as 0x434F20 takes them from the engine camera's matrix
    // (camera+0x1E0: AX AY AZ BX BY BZ CX CY CZ): up (AY, CY) and left -(AX, CX), flattened and normalised
    const app = u32[APP >> 2], engine = app ? u32[(app + 0x3A0) >> 2] : 0, camera = engine ? u32[(engine + 0xE0) >> 2] : 0;
    if (!camera) return r;
    const M = camera + 0x1E0;
    let fx = f32[(M + 4) >> 2], fz = f32[(M + 28) >> 2], lx = -f32[M >> 2], lz = -f32[(M + 24) >> 2];
    const fl = Math.hypot(fx, fz), ll = Math.hypot(lx, lz);
    if (!(fl > 1e-6) || !(ll > 1e-6)) return r;      // a level camera has no "forward" for the original either
    fx /= fl; fz /= fl; lx /= ll; lz /= ll;
    // backwards as the game has it this frame (the page holds Down for a stick within 45 degrees of straight back);
    // with the move vector at zero (firing) the stick's own direction decides, and he only turns
    const back = mz > 0 || (mz === 0 && mx === 0 && Math.abs(Math.atan2(st.x, st.y)) >= 3 * PI / 4);
    const target = stickHeading(st.x, st.y, [fx, fz], [lx, lz], back);
    const h = steerHeading(h0, target, RATE * Math.max(MIN_TURN, Math.min(1, n)), dt);
    scratch[0] = h - PI / 2;
    u32[at] = bits[0]; u32[(input + 0x18) >> 2] = bits[0];
    api.stats.steered++;
    api.last = { locked: false, from: h0, original: wrap(f32[(input + 0x18) >> 2] + PI / 2), target, heading: h, back, dt };
    return r;
  });
  m.bound.add('hook!steer');

  // CRCPlayer::Move: thiscall(out*, position*, velocity*, dt), ret 0x10
  m.bindRaw('hook!move', moveHook.pop, (esp, ecx, edx, eax) => {
    if (fly && u32[esp >> 2] === RET_MOVE && u32[(ecx >>> 0) >> 2] === VT.player) {
      const player = ecx >>> 0, v = u32[(esp + 12) >> 2], f = fly, input = u32[(player + 0xF8) >> 2], dop = u32[(player + 0x250) >> 2];
      fly = null;
      if (flying() && input && u32[input >> 2] === VT.input) {
        const pitch = dop && u32[dop >> 2] === VT.dop ? f32[(dop + LOOK_ORBIT) >> 2] + LOOK_DEFAULT_PITCH : LOOK_DEFAULT_PITCH;
        const w = flyVelocity(f32[(input + 0x18) >> 2], pitch, f.forward, f.right, f.vertical);
        f32[v >> 2] = w[0]; f32[(v + 4) >> 2] = w[1]; f32[(v + 8) >> 2] = w[2];
        api.stats.flown++;
        return moveBody(esp, eax, ecx, edx);
      }
    }
    const n = Math.min(1, Math.hypot(st.x, st.y));
    const s = (n > 0 ? n : 1) * (st.walk ? WALK_SCALE : 1);
    if (s < 1 && u32[esp >> 2] === RET_MOVE && u32[(ecx >>> 0) >> 2] === VT.player) {
      const player = ecx >>> 0, v = u32[(esp + 12) >> 2], app = u32[APP >> 2];
      const scale = app ? f32[(app + 0x42C) >> 2] : 0;                // the world scale (0x431000)
      for (const j of [0, 8]) {
        const add = Math.fround(f32[(player + 0x1B4 + j) >> 2] * scale);      // what the level adds (0x5B3020 at 0x4DAE3D)
        f32[(v + j) >> 2] = add + (f32[(v + j) >> 2] - add) * s;
      }
      api.stats.scaled++;
    }
    return moveBody(esp, eax, ecx, edx);
  });
  m.bound.add('hook!move');
}
