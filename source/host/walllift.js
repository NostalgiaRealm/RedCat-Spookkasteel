// The wall lift of the JavaScript port, on top of the original camera
// (docs/research/camera-and-look.md, section 13). When RedCat backs against a wall, the original
// pulls the camera in until it is inside his model. The lift raises it along an arc over him
// instead and turns the view down towards him; under a low ceiling it takes a side or front view,
// and with no outside view at all his model is not drawn for that frame.
//
// Where it runs: a host hook on the camera controller's frame, CRcDop::Update 0x4594A0
// (tools/recomp/build.py, GAME_HOOKS). The hook runs the original function and then, with its
// result, the lift. What the lift decides is given to the Genesis3D camera only (geCamera, the
// transform the frame is drawn with: 0x5C9420). The engine camera object's own fields stay the
// original's: its matrix (camera+0x1E0) is what the steering 0x434F20 and the 3D sound
// 0x54E750 read, and from its position and angles the original goes on in the next frame. So the
// lift is drawn in the same pass and is never fed back into anything.
//
// The lift itself (everything from CAMERA_BODY to the end of class CameraWallLift) is
// ../RCSPOOK_NEW/source/third-person-camera.js, unchanged but for its layout: same constants, same
// order of decisions. Its world traces are the engine's own, with the box of the port's lift
// (4 units) and the contents and flags of the original camera's hull (0x45AE30).
//
// It applies to the follow camera, a CameraTrigger offset and the lock-on camera (modes 5, 6, 9)
// while a world is played; not in first person, in free flight, with a fixed or route camera or
// during a cutscene. No setting. While the original's camera has room, nothing here calls the
// game or writes its memory.

// ---- the lift ----------------------------------------------------------------------------------
// Keep room around the rendered actor, whose ears/arms exceed its movement hull.
export const CAMERA_BODY = { radius: 28, bottom: -8, top: 80 };
// The lifted boom keeps at least this much distance from the chest anchor.
const COMFORTABLE_DISTANCE = 80;
// The arc is scanned coarsely, then the lowest suitable angle is refined, so the lift changes
// continuously instead of in steps. Six halvings place it within 1/1024 of the arc.
const SCAN_STEPS = 16, REFINE_STEPS = 6;
// Easing per second of the lift used to turn the view toward RedCat: rise quickly, settle back
// more gently.
const RISE_RATE = 10, FALL_RATE = 4;
// While lifted, and while blending back to the native view, the camera position itself eases at
// this rate, so changes in how the wall clips the arc never jump. Each eased step is
// collision-checked.
const POSITION_RATE = 12, RETURN_RATE = 6, SETTLED = 0.25;
// A reused lift (see CameraWallLift.reuse) is rescanned at least this often.
const RESCAN_SECONDS = 0.5;
const distance = (a, b) => Math.hypot(...a.map((v, i) => v - b[i]));
const clamp = (v, min, max) => Math.max(min, Math.min(max, v));
export function cameraInsidePlayer(position, playerPosition) {
  const [x, y, z] = position.map((v, i) => v - playerPosition[i]);
  return Math.abs(x) < CAMERA_BODY.radius && Math.abs(z) < CAMERA_BODY.radius && y > CAMERA_BODY.bottom && y < CAMERA_BODY.top;
}

function arc({ anchor, desired, playerPosition, trace }) {
  const delta = desired.map((v, i) => v - anchor[i]), boom = Math.hypot(...delta);
  const horizontal = Math.hypot(delta[0], delta[2]);
  const back = horizontal > 1e-6 ? [delta[0] / horizontal, 0, delta[2] / horizontal] : [0, 0, 1];
  const baseAngle = Math.atan2(delta[1], horizontal);
  // Stay just behind the vertical pole so the view keeps RedCat's heading.
  const overheadAngle = Math.max(baseAngle, Math.PI / 2 - Math.PI / 180);
  const minimum = Math.min(COMFORTABLE_DISTANCE, boom);
  // The arc runs at the comfortable radius: the camera rises only as far as the wall requires
  // and comes down again as RedCat gains room.
  const sample = (lift) => {
    const angle = baseAngle + (overheadAngle - baseAngle) * lift;
    const hit = trace(anchor, anchor.map((v, i) => v + (i === 1 ? Math.sin(angle) : back[i] * Math.cos(angle)) * minimum));
    const valid = !hit.startSolid && !cameraInsidePlayer(hit.end, playerPosition);
    return { position: hit.end, valid, comfortable: valid && distance(anchor, hit.end) >= minimum - 0.1 };
  };
  return { delta, back, horizontal, minimum, sample };
}

const comfortable = (s) => s.comfortable, valid = (s) => s.valid;

/**
 * Lowest lift in (0, 1] whose arc sample is comfortable, or else the lowest that is at least
 * valid, refined between scan steps; null if none. One scan serves both tests. Returns
 * {lift, low, test, sample}: `low` is the highest lift known to fail the test, and `sample` the
 * arc sample at `lift`.
 */
function lowestLift(sample) {
  let previous = 0, firstValid = null;
  for (let step = 1; step <= SCAN_STEPS; step++) {
    const lift = step / SCAN_STEPS, s = sample(lift);
    if (s.comfortable) return refine(sample, comfortable, previous, lift, s);
    if (s.valid && !firstValid) firstValid = { low: step === 1 ? 0 : (step - 1) / SCAN_STEPS, lift, s };
    previous = lift;
  }
  return firstValid && refine(sample, valid, firstValid.low, firstValid.lift, firstValid.s);
}
function refine(sample, test, low, high, highSample) {
  for (let i = 0; i < REFINE_STEPS; i++) { const middle = (low + high) / 2, s = sample(middle); if (test(s)) { high = middle; highSample = s; } else low = middle; }
  return { lift: high, low, test, sample: highSample };
}
const sameVector = (a, b) => !!a && !!b && a[0] === b[0] && a[1] === b[1] && a[2] === b[2];

/**
 * Stateful wall lift. anchor: RedCat's chest; desired: the unobstructed native camera position;
 * position: the native result after collision; trace sweeps a small camera hull through the
 * world. Returns the position; `lift` (0 for the native view, 1 for directly overhead); `focus`,
 * how far the caller should turn the view toward RedCat; and `hidePlayer` when no external
 * viewpoint exists.
 */
export class CameraWallLift {
  constructor() { this.reset(); }
  reset() { this.lift = 0; this.last = null; this.blending = false; this.found = null; this.foundAge = 0; }
  /** Direct look turns the eased position with RedCat. */
  lookTurn(deltaYaw, eye) {
    if (!this.last || !Number.isFinite(deltaYaw) || !deltaYaw) return;
    const c = Math.cos(deltaYaw), s = Math.sin(deltaYaw), x = this.last[0] - eye[0], z = this.last[2] - eye[2];
    this.last = [eye[0] + x * c + z * s, this.last[1], eye[2] + z * c - x * s];
  }
  update(dt, options) {
    const result = this.target(dt, options), { anchor, playerPosition, trace, snap = false } = options;
    const active = result.position !== this.nativePosition || result.lift > 0 || result.focus > 0 || result.hidePlayer;
    if (!snap && this.last && (active || this.blending) && !result.hidePlayer) {
      // Returning to the native view eases more gently than avoiding the wall.
      const rate = result.position === this.nativePosition ? RETURN_RATE : POSITION_RATE;
      const k = 1 - Math.exp(-rate * Math.max(0, dt));
      const eased = this.last.map((v, i) => v + (result.position[i] - v) * k);
      // Keep the eased step, clipped against the world, as long as it stays outside RedCat.
      const sight = trace(anchor, eased);
      if (!sight.startSolid && !cameraInsidePlayer(sight.end, playerPosition)) result.position = sight.end;
    }
    this.blending = active || (!!this.last && distance(result.position, this.nativePosition) > SETTLED);
    if (!active && !this.blending) result.position = this.nativePosition;
    this.last = [...result.position];
    return result;
  }
  target(dt, { anchor, desired, position, playerPosition, trace, snap = false }) {
    this.nativePosition = position;
    const { sample, back, horizontal, delta, minimum } = arc({ anchor, desired, playerPosition, trace });
    const nativeClear = !cameraInsidePlayer(position, playerPosition) && distance(anchor, position) >= minimum - 0.1;
    // Target: the lowest comfortable lift (0 when the native view is fine), or else the lowest that
    // keeps the camera outside the model. The position aims at that unclipped arc point; update()
    // eases the position, and the eased lift only turns the view toward RedCat.
    let found = null; this.foundAge += Math.max(0, dt);
    if (!nativeClear) {
      found = this.reuse({ anchor, desired, position, playerPosition }, sample);
      if (!found) { found = lowestLift(sample) ?? { lift: null }; this.foundAge = 0; }
    }
    this.found = found && { ...found, anchor, desired, position, playerPosition };
    const target = nativeClear ? 0 : found.lift;
    if (target === null) return this.fallback({ anchor, position, playerPosition, trace, back, horizontal, delta, minimum });
    const rate = target > this.lift ? RISE_RATE : FALL_RATE;
    let lift = snap ? target : this.lift + (target - this.lift) * (1 - Math.exp(-rate * Math.max(0, dt)));
    if (lift < 1e-4) lift = 0;
    this.lift = lift = clamp(lift, 0, 1);
    // With the native view clear again, aim for the native position; the position easing in
    // update() carries the camera back down smoothly.
    if (nativeClear) return { position, lift, focus: lift, hidePlayer: false };
    return { position: found.sample.position, lift, focus: lift, hidePlayer: false };
  }
  /**
   * While RedCat and the native camera stay put (standing against a wall), keep last frame's lift
   * when its arc sample still passes and the one just below still fails: two traces instead of a
   * full scan. A blocked arc is kept as is. Moving geometry that changes either sample triggers a
   * new scan, and any reuse is rescanned after RESCAN_SECONDS.
   */
  reuse({ anchor, desired, position, playerPosition }, sample) {
    const found = this.found;
    if (!found || this.foundAge >= RESCAN_SECONDS || !sameVector(found.anchor, anchor) || !sameVector(found.desired, desired) ||
      !sameVector(found.position, position) || !sameVector(found.playerPosition, playerPosition)) return null;
    if (found.lift === null) return found;
    const s = sample(found.lift);
    if (!found.test(s) || found.low > 0 && found.test(sample(found.low))) return null;
    if (found.test === valid && s.comfortable) return null;
    return { ...found, sample: s };
  }
  /** Low ceiling blocks the whole arc: a clear side or front view, else hide the model. */
  fallback({ anchor, position, playerPosition, trace, back, horizontal, delta, minimum }) {
    this.lift = 0;
    let side = null;
    for (const direction of [[back[2], 0, -back[0]], [-back[2], 0, back[0]], [-back[0], 0, -back[2]]]) {
      const hit = trace(anchor, anchor.map((v, i) => v + (i === 1 ? Math.max(0, delta[1]) : direction[i] * horizontal)));
      if (hit.startSolid || cameraInsidePlayer(hit.end, playerPosition)) continue;
      if (!side || distance(anchor, hit.end) > distance(anchor, side)) side = hit.end;
      if (distance(anchor, hit.end) >= minimum - 0.1) { side = hit.end; break; }
    }
    if (side && (cameraInsidePlayer(position, playerPosition) || distance(anchor, side) > distance(anchor, position)))
      return { position: side, lift: 0, focus: 1, hidePlayer: false };
    if (!cameraInsidePlayer(position, playerPosition)) return { position, lift: 0, focus: 0, hidePlayer: false };
    // No external viewpoint at all: keep the native position and hide RedCat's model for this
    // frame instead of rendering the view from inside it.
    return { position, lift: 0, focus: 0, hidePlayer: true };
  }
}

// ---- on the original camera --------------------------------------------------------------------
const APP = 0x006B915C, GS_GAME = 3;
const VT = { player: 0x0064C430, dop: 0x0064D5F4, input: 0x0064C5B0, actor: 0x0064C338 };
const TABLE = 0x006B7118;                 // the follow camera's rows: per preset 3 heights, 3 distances, 3 pitches (moving, backwards, standing)
const LOCK_ROW = [1.2, 1.5];              // the lock-on camera's height and distance in box heights (0x64D65C, 0x64D660)
const CHEST = 43;                         // the port's anchor: units above RedCat's feet
const HULL = 4;                           // half size of the box the port's lift sweeps
const COLLISION = 0x005B7D80;             // geWorld_Collision(world, mins, maxs, front, back, contents, flags, user flags, callback, context, result), cdecl
const SOLID_WINDOW = 3, MESHES_MODELS = 3;      // what the original camera's hull stops at (0x45AE89, 0x565EC7 .. 0x565F04): no clip brushes, no actors
const SET_CAMERA = 0x005C9420;            // geCamera: world transform, fastcall(geCamera, transform)
const RENDER_NORMAL = 1, RENDER_MIRRORS = 2, RENDER_ALWAYS = 4;
const PI = Math.PI;
const wrap = (x) => { x -= 2 * PI * Math.round(x / (2 * PI)); return x <= -PI ? x + 2 * PI : x; };

export function installWallLift(m, host) {
  const { u8, u32, i32, f32 } = m;
  const hook = m.meta.hooks && m.meta.hooks.camera;
  if (!hook) { host.log('camera hook missing in this build: no wall lift'); return; }
  const originalIndex = m.meta.eh.guardBodies[String(hook.addr)], original = (esp, eax, ecx, edx) => m.callBody(originalIndex, esp, eax, ecx, edx);      // no result array per call
  const lift = new CameraWallLift();
  // applied: the lift looked at the last frame of the controller; hidden: it took RedCat out of the last frame
  const st = { dop: 0, applied: false, hidden: false };
  const api = host.wallLift = {
    off: false,                           // for tools/look-check.mjs only: the same game without the lift
    /** look.js: a look turn by d about the vertical through (x, z), as it turns the camera's own places */
    lookTurn(d, x, z) { lift.lookTurn(d, [x, 0, z]); },
    /** for checks: how far the lift is up (0 .. 1) and whether it changed the last frame */
    state() { return { lift: lift.lift, blending: lift.blending, hidden: st.hidden, applied: st.applied }; },
  };

  // RedCat's entry in the world's actor list, as in look.js (world = sublevel +0x5C; count +0x3B8, list +0x3BC)
  const worldEntry = (actor) => {
    const sub = u32[(actor + 0x18) >> 2], ge = u32[(actor + 0x114) >> 2];
    const world = sub ? u32[(sub + 0x5C) >> 2] : 0;
    if (!world || !ge) return 0;
    const n = i32[(world + 0x3B8) >> 2], list = u32[(world + 0x3BC) >> 2];
    if (!list || n <= 0 || n > 0x10000) return 0;
    for (let q = 0; q < n; q++) if (u32[(list + q * 12) >> 2] === ge) return list + q * 12;
    return 0;
  };
  const showAgain = () => {
    st.hidden = false;
    const app = u32[APP >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0, sub = game ? u32[(game + 0x60) >> 2] : 0, player = sub ? u32[(sub + 0x360) >> 2] : 0;
    const actor = player && u32[player >> 2] === VT.player ? u32[(player + 0x254) >> 2] : 0;
    const e = actor && u32[actor >> 2] === VT.actor ? worldEntry(actor) : 0;
    if (e) u32[(e + 4) >> 2] = u32[(actor + 0x14C) >> 2];
  };

  // One frame of the controller is over: `dop` has the original's result.
  const frame = (dop, esp, dtMs, cut, yawBefore) => {
    if (api.off || u32[dop >> 2] !== VT.dop || !u32[(dop + 0x18) >> 2]) return false;
    const player = u32[(dop + 0x360) >> 2];
    if (!player || u32[player >> 2] !== VT.player) return false;
    const app = u32[APP >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0, engine = app ? u32[(app + 0x3A0) >> 2] : 0;
    const mode = i32[(dop + 0x450) >> 2];
    if (!game || i32[(game + 0x98) >> 2] !== GS_GAME || !engine || !(mode === 5 || mode === 6 || mode === 9)) return false;
    if (i32[(player + 0x258 + 0xA8) >> 2] !== 0) return false;              // a cutscene
    if (u8[engine + 0x48] === 0) return false;                               // free flight (cheats-and-player.md, 4)
    // first person in force (look.js): the follow camera works with distance 0
    if (mode !== 9 && f32[(mode === 6 ? dop + 0x45C : TABLE + 12) >> 2] === 0) return false;
    const camera = u32[(engine + 0xE0) >> 2], sub = u32[(dop + 0x18) >> 2], world = u32[(sub + 0x5C) >> 2];
    const input = u32[(player + 0xF8) >> 2];
    if (!camera || !world || !input || u32[input >> 2] !== VT.input) return false;

    const px = f32[(player + 0x198) >> 2], py = f32[(player + 0x19C) >> 2], pz = f32[(player + 0x1A0) >> 2];
    const minY = f32[(player + 0x1D8) >> 2], H = f32[(player + 0x1E4) >> 2] - minY;
    const feet = [px, py + minY, pz], anchor = [px, feet[1] + CHEST, pz];
    const position = [f32[(dop + 0x3B8) >> 2], f32[(dop + 0x3BC) >> 2], f32[(dop + 0x3C0) >> 2]];
    // Where the original's numbers put the camera before line of sight, chase and collision: the row of this frame
    // (0x4598E0, 0x459E50) behind the yaw of this frame. That yaw is dop+0x378 after the update, except while the
    // line-of-sight search holds a place: then the field has the yaw towards RedCat, and the yaw the row was laid
    // out with is worked out as the smoothing 0x458900 does it.
    let h, d;
    if (mode === 9) [h, d] = LOCK_ROW;
    else if (mode === 6) { h = f32[(dop + 0x458) >> 2]; d = f32[(dop + 0x45C) >> 2]; }
    else {
      const row = TABLE + i32[(dop + 0x528) >> 2] * 0x24 + (u8[dop + 0x431] ? (f32[(input + 0x30) >> 2] === 1 ? 4 : 0) : 8);
      h = f32[row >> 2]; d = f32[(row + 12) >> 2];
    }
    let yaw = f32[(dop + 0x378) >> 2];
    if (u8[dop + 0x432]) {
      const heading = wrap(f32[(input + 0x18) >> 2] + PI / 2);
      const rate = f32[(dop + 0x39C) >> 2] * (u8[input + 0x22] ? f32[(dop + 0x3A0) >> 2] : 1), diff = wrap(heading - yawBefore);
      yaw = cut || Math.abs(diff) < 0.001 ? heading : wrap(yawBefore + Math.min(1, Math.max(0, dtMs) * 0.001 * rate) * diff);
    }
    const desired = [px + Math.cos(yaw + PI) * d * H, feet[1] + h * H, pz - Math.sin(yaw + PI) * d * H];

    // the engine's box sweep; its vectors and its result live on the game's stack below this hook
    const mem = (esp - 0x400) & ~15, pMins = mem, pMaxs = mem + 12, pA = mem + 24, pB = mem + 36, pHit = mem + 48, pMatrix = mem + 96;
    let traces = 0;
    const call = (addr, args, ecx = 0, edx = 0) => { m.esp = mem - 32; const r = m.call(addr, args, ecx, edx); m.esp = esp; return r; };
    const trace = (a, b) => {
      for (let j = 0; j < 3; j++) { f32[(pMins >> 2) + j] = -HULL; f32[(pMaxs >> 2) + j] = HULL; f32[(pA >> 2) + j] = a[j]; f32[(pB >> 2) + j] = b[j]; }
      traces++;
      if (!call(COLLISION, [world, pMins, pMaxs, pA, pB, SOLID_WINDOW, MESHES_MODELS, 0xFFFFFFFF, 0, 0, pHit])) return { end: [...b], startSolid: false };
      // GE_Collision: impact at +0xC, plane normal at +0x1C. The camera's own tracer steps 0.01 off the plane (0x5B1520).
      const end = [0, 1, 2].map((j) => f32[((pHit + 0xC) >> 2) + j] + f32[((pHit + 0x1C) >> 2) + j] * 0.01);
      return { end, startSolid: false };
    };
    const snap = cut || !st.applied || st.dop !== dop;
    st.dop = dop;
    const result = lift.update(Math.max(0, dtMs) * 0.001, { anchor, desired, position, playerPosition: feet, trace, snap });
    api.traces = traces;
    // for checks: the original's place of this frame, where the frame is drawn from, and RedCat's feet
    api.last = { original: position, drawn: [...result.position], focus: result.focus, hidden: !!result.hidePlayer, feet, anchor };

    if (result.position !== position || result.focus > 0) {
      // The view: the original's direction, turned towards his chest by `focus` (as the port aims its camera).
      const M = camera + 0x1E0;
      const v = [-f32[(M + 8) >> 2], -f32[(M + 20) >> 2], -f32[(M + 32) >> 2]].map((x, j) => x + (anchor[j] - result.position[j]) * result.focus);
      const pitch = Math.atan2(v[1], Math.hypot(v[0], v[2])), e = Math.atan2(-v[0], -v[2]);
      const sp = Math.sin(pitch), cp = Math.cos(pitch), se = Math.sin(e), ce = Math.cos(e);
      // a Genesis3D transform as 0x5569B0 builds it from pitch and yaw: AX AY AZ BX BY BZ CX CY CZ, translation
      const t = [ce, se * sp, se * cp, 0, cp, -sp, -se, ce * sp, ce * cp, result.position[0], result.position[1], result.position[2]];
      for (let j = 0; j < 12; j++) f32[(pMatrix >> 2) + j] = t[j];
      call(SET_CAMERA, [], u32[(camera + 0x30) >> 2], pMatrix);
    }
    if (result.hidePlayer) {
      const actor = u32[(player + 0x254) >> 2], e = actor && u32[actor >> 2] === VT.actor ? worldEntry(actor) : 0;
      if (e) {
        const own = u32[(actor + 0x14C) >> 2];
        u32[(e + 4) >> 2] = ((own & ~(RENDER_NORMAL | RENDER_ALWAYS)) | (own & (RENDER_MIRRORS | RENDER_ALWAYS) ? RENDER_MIRRORS : 0)) >>> 0;
        st.hidden = true;
      }
    }
    return true;
  };

  m.bindRaw('hook!camera', hook.pop, (esp, ecx, edx, eax) => {
    const dop = ecx >>> 0;
    const cut = u8[dop + 0x454] !== 0, yawBefore = f32[(dop + 0x378) >> 2], dtMs = i32[(esp + 8) >> 2];
    const r = original(esp, eax, ecx, edx);
    m.esp = esp;
    api.last = null;
    st.applied = frame(dop, esp, dtMs, cut, yawBefore);
    return r;
  });
  m.bound.add('hook!camera');

  // A model hidden for the last frame is shown again before anything else looks at it (look.js hides him
  // itself in first person, after this).
  if (host.mainLoop) host.mainLoop.beforePass.unshift(() => { if (st.hidden) showAgain(); });

  if (host.snap) host.snap.add('walllift', () => ({
    dop: st.dop, applied: st.applied, hidden: st.hidden, lift: lift.lift, last: lift.last, blending: lift.blending, foundAge: lift.foundAge,
    found: lift.found && { ...lift.found, test: lift.found.test === valid ? 'valid' : lift.found.test === comfortable ? 'comfortable' : null },
  }), (s) => {
    lift.reset();
    Object.assign(st, { dop: 0, applied: false, hidden: false });
    if (!s) return;                       // a state from before the lift
    Object.assign(st, { dop: s.dop, applied: s.applied, hidden: s.hidden });
    Object.assign(lift, { lift: s.lift, last: s.last && [...s.last], blending: s.blending, foundAge: s.foundAge });
    lift.found = s.found && { ...s.found, test: s.found.test === 'valid' ? valid : s.found.test === 'comfortable' ? comfortable : undefined };
  });
}
