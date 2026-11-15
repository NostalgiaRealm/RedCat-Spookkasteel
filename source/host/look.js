// Looking around and the first-person view. Neither exists in the original; both are done on the
// original follow camera and its own data (docs/research/camera-and-look.md). The model is the one
// of the JavaScript port (its camera-control.js and native-camera.js). Addresses are RcHcGame.dat's.
//
//   sideways      RedCat's heading (yaw of CRcPlayerInput, input+0x18) and the follow camera's yaw
//                 (CRcDop+0x378) are turned by the same angle, together with what the next pass
//                 derives from the old angle: where the position chase 0x45A470 starts and the engine
//                 camera's matrix (camera+0x1E0), from which the steering 0x434F20 takes "forward".
//                 The original's smoothing then sees the same differences as before the turn.
//   up and down   one look pitch per world (radians, positive looks down, 0.16 at the start, limited
//                 to -1.2 .. 1.2). orbit = pitch - 0.16 is kept in the camera controller (dop+0x420,
//                 a field the original only clears). The follow camera's place is swung by orbit
//                 about RedCat's chest (feet + 0.75 box heights) in the vertical plane through the
//                 camera, and its pitch is lowered by orbit. Height and distance are measured in
//                 that plane, so the swing is other numbers in the rows of the preset table
//                 (0x6B7118; a CameraTrigger offset in dop+0x458), and the original camera computes
//                 the rest: yaw smoothing, the smoothing between rows, chase, line of sight, hull.
//   first person  every row becomes "eye height, distance 0, pitch = -look pitch". RedCat is taken
//                 out of the normal view through the Genesis3D world's actor flags (world+0x3BC).
//
// The original bytes of the table are in the image's read-only data (0x64D3A8, copied by the
// static initialiser 0x457CC0); the table is written back from there.
//
// All of this applies only while the player controls RedCat with the follow camera (camera mode 5
// or 6, no cutscene, alive, not getting up after a new start). In every other gap the original's
// numbers and RedCat's flags are in place and look input is dropped: fixed cameras, routes, lock-on
// and cutscenes are the original's.
//
// Requests are applied between two passes of the main loop, never while game code runs. Until
// turn() or setFirstPerson() is called, the hook on the main loop reads and writes nothing.
const APP = 0x006B915C, GS_GAME = 3;
const VT = { player: 0x0064C430, input: 0x0064C5B0, dop: 0x0064D5F4, actor: 0x0064C338, props: 0x0064C5FC };
const TABLE = 0x006B7118, TABLE_SOURCE = 0x0064D3A8;      // 3 presets x (height, distance, pitch) x (moving, backwards, standing)
const ORBIT = 0x420;                                      // CRcDop: cleared by the constructor (0x4587C6), not used by the original
const PI = Math.PI, TAU = 2 * Math.PI, DEG = Math.PI / 180;
const DEFAULT_PITCH = 0.16, PITCH_LIMIT = 1.2;            // the JavaScript port's look pitch
const PIVOT = 0.75;                                       // RedCat's chest, in box heights above his feet
// The lowest pitch given to the camera, in degrees. Around -90 the camera would turn over, and the
// original's angle smoothing 0x458900 has a special case between -90.5 and -88.8.
const PITCH_FLOOR = -85;
// The steering takes "forward" from the horizontal part of the engine camera's up vector (0x434F20 ->
// 0x5B3650). For a level camera that is nothing, for one that looks up it points backwards. While the
// camera's pitch is above this, the up vector the steering will read is replaced by that of a camera
// with the same yaw and this pitch.
const STEER_PITCH = -1 * DEG;
const RENDER_NORMAL = 1, RENDER_MIRRORS = 2, RENDER_ALWAYS = 4;      // geWorld actor flags, tested at 0x5B8A0B / 0x5B8A19

export function installLook(m, host) {
  const { u8, u32, i32, f32 } = m;
  const scratch = new Float32Array(1), scratchU = new Uint32Array(scratch.buffer);
  const toBits = (x) => { scratch[0] = x; return scratchU[0]; };
  const toFloat = (w) => { scratchU[0] = w; return scratch[0]; };
  const wrap = (x) => { x -= TAU * Math.round(x / TAU); return x <= -PI ? x + TAU : x; };      // (-pi, pi], the range of 0x5B1630
  const same3 = (a, b) => a[0] === b[0] && a[1] === b[1] && a[2] === b[2];

  // app -> game +0x3A4 -> sublevel +0x60 -> player +0x360; the camera controller (CRcDop) is player +0x250,
  // RedCat's actor (CCharAnimActor) player +0x254, the input object player +0xF8, the cutscene object player +0x258.
  const chain = () => {
    const app = u32[APP >> 2];
    const game = app ? u32[(app + 0x3A4) >> 2] : 0;
    if (!game) return null;
    const k = { game, state: i32[(game + 0x98) >> 2], player: 0, input: 0, dop: 0, actor: 0, mode: 0, control: false, engineCamera: 0 };
    const sub = u32[(game + 0x60) >> 2];
    const player = sub ? u32[(sub + 0x360) >> 2] : 0;
    if (!player || u32[player >> 2] !== VT.player) return k;
    const input = u32[(player + 0xF8) >> 2], dop = u32[(player + 0x250) >> 2], actor = u32[(player + 0x254) >> 2], props = u32[(player + 0x1F0) >> 2];
    if (!input || u32[input >> 2] !== VT.input || !dop || u32[dop >> 2] !== VT.dop) return k;
    k.player = player; k.input = input; k.dop = dop;
    k.actor = actor && u32[actor >> 2] === VT.actor ? actor : 0;
    k.mode = i32[(dop + 0x450) >> 2];
    const engine = u32[(app + 0x3A0) >> 2];
    k.engineCamera = engine ? u32[(engine + 0xE0) >> 2] : 0;
    // "the player controls RedCat with the follow camera": a world is being played, the player object is
    // active (+0x104: 0 during a cutscene 0x480DC0 and while he gets up after a new start 0x436F60), no cutscene
    // is fading in or out (state at cutscene +0xA8), he is alive (props +0x3C), and the camera is the follow
    // camera (mode 5, or 6 = follow with a CameraTrigger offset; 7 and 8 fixed, 9 lock-on, 10 route).
    const alive = props && u32[props >> 2] === VT.props ? f32[(props + 0x3C) >> 2] > 0 : true;
    k.control = k.state === GS_GAME && u8[player + 0x104] !== 0 && i32[(player + 0x258 + 0xA8) >> 2] === 0 && alive && (k.mode === 5 || k.mode === 6);
    return k;
  };

  const st = { want: false, offset: null };      // offset: { saved: [3 words], mine: [3 words] } while a CameraTrigger offset is replaced
  let engaged = false;                           // false: this module has nothing applied and nothing to apply
  let hidden = false;                            // RedCat's world flags were last written as "not drawn"
  let pendingTurn = 0, pendingPitch = 0, pendingFirstPerson = null, entryIndex = 0;

  // ---- the follow camera's numbers -----------------------------------------------------------------------
  // A row is height above RedCat's feet and distance behind him, both in box heights, and the pitch in degrees.
  // Swung by the angle a about the chest: seen from the pivot the camera is (distance, height - 0.75).
  const swung = (h, d, p, a) => {
    const c = Math.cos(a), s = Math.sin(a), up = h - PIVOT;
    return [toBits(PIVOT + up * c + d * s), toBits(d * c - up * s), toBits(Math.max(p - a / DEG, PITCH_FLOOR))];
  };
  // First person: the player's position (+0x198) is his eye point; his box (+0x1D4 mins, +0x1E0 maxs) reaches
  // EyeHeight below it. The view pitch is the look pitch itself.
  const eyeRow = (k, a) => {
    const minY = f32[(k.player + 0x1D8) >> 2], maxY = f32[(k.player + 0x1E4) >> 2];
    return [toBits(maxY > minY ? -minY / (maxY - minY) : 0.93), toBits(0), toBits(-(a + DEFAULT_PITCH) / DEG)];
  };
  // word of the table for preset p, quantity q (0 height, 1 distance, 2 pitch), motion r: the table is grouped by
  // quantity, its source in the read-only data by motion (0x457CC0)
  const tableAt = (p, q, r) => (TABLE + p * 0x24 + q * 12 + r * 4) >> 2;
  const sourceAt = (p, q, r) => (TABLE_SOURCE + p * 0x24 + r * 12 + q * 4) >> 2;
  const tableIsOriginal = () => {
    for (let p = 0; p < 3; p++) for (let q = 0; q < 3; q++) for (let r = 0; r < 3; r++) if (u32[tableAt(p, q, r)] !== u32[sourceAt(p, q, r)]) return false;
    return true;
  };
  // The numbers for "first person or not, orbit a": the nine rows of the table, and in camera mode 6 the trigger's
  // offset (dop+0x458, set by 0x459010). (false, 0) are the original's. Returns 0 when memory has them, 1 when the
  // numbers the follow camera works with differ, 2 when only a trigger offset this module replaced is left over in
  // another camera mode; with write they are made so.
  const numbers = (k, first, a, write) => {
    let differs = 0;
    const eye = first ? eyeRow(k, a) : null;
    for (let p = 0; p < 3; p++) for (let r = 0; r < 3; r++) {
      const row = eye || (a === 0 ? null : swung(f32[sourceAt(p, 0, r)], f32[sourceAt(p, 1, r)], f32[sourceAt(p, 2, r)], a));
      for (let q = 0; q < 3; q++) {
        const v = row ? row[q] : u32[sourceAt(p, q, r)];
        if (u32[tableAt(p, q, r)] === v) continue;
        differs = 1;
        if (write) u32[tableAt(p, q, r)] = v;
      }
    }
    if (!k.dop) { if (write) st.offset = null; return differs; }
    const at = (k.dop + 0x458) >> 2, now = [u32[at], u32[at + 1], u32[at + 2]];
    if (k.mode === 6 && (first || a !== 0)) {
      // the trigger's own numbers: what is there, unless that is what this module put there
      const saved = st.offset && same3(now, st.offset.mine) ? st.offset.saved : now;
      const mine = eye || swung(toFloat(saved[0]), toFloat(saved[1]), toFloat(saved[2]), a);
      if (!same3(now, mine)) { differs = 1; if (write) { u32.set(mine, at); st.offset = { saved, mine }; } }
    } else if (st.offset) {
      if (same3(now, st.offset.mine)) { differs |= k.mode === 6 ? 1 : 2; if (write) u32.set(st.offset.saved, at); } else differs |= 2;
      if (write) st.offset = null;
    }
    return differs;
  };

  // ---- carrying the camera along ------------------------------------------------------------------------
  // The chase 0x45A470 starts each pass from "last camera position (dop+0x410) + player position - last player
  // position (dop+0x424)". To let the camera be somewhere else at once, that start is moved by changing the last
  // player position. The last camera position stays what it was, so the hull collision 0x45AE30 still sweeps
  // from where the camera really was to where it goes, and stops it at a wall in between.
  const chaseStart = (k) => { const d = k.dop, p = k.player; return [0, 4, 8].map((j) => f32[(d + 0x410 + j) >> 2] + f32[(p + 0x198 + j) >> 2] - f32[(d + 0x424 + j) >> 2]); };
  const setChaseStart = (k, to) => { const d = k.dop, p = k.player; [0, 4, 8].forEach((j, n) => { f32[(d + 0x424 + j) >> 2] = f32[(d + 0x410 + j) >> 2] + f32[(p + 0x198 + j) >> 2] - to[n]; }); };
  // a point swung by the angle d about RedCat's chest in the vertical plane through the camera's "behind"
  // direction (-cos yaw, 0, sin yaw)
  const swingPoint = (k, to, d) => {
    const { player, dop } = k, yaw = f32[(dop + 0x378) >> 2], bx = -Math.cos(yaw), bz = Math.sin(yaw);
    const px = f32[(player + 0x198) >> 2], py = f32[(player + 0x19C) >> 2], pz = f32[(player + 0x1A0) >> 2];
    const H = f32[(player + 0x1E4) >> 2] - f32[(player + 0x1D8) >> 2], pivotY = py + f32[(player + 0x1D8) >> 2] + PIVOT * H;
    const along = (to[0] - px) * bx + (to[2] - pz) * bz, up = to[1] - pivotY, c = Math.cos(d), s = Math.sin(d);
    const move = along * c - up * s - along;
    return [to[0] + bx * move, pivotY + up * c + along * s, to[2] + bz * move];
  };
  // The follow camera goes from the numbers of one orbit to those of another without a cut: its pitch now
  // (dop+0x374, from which the smoothing towards the row's pitch goes on) and, in third person, its place.
  // Not the place while the line-of-sight search holds one (0x45AA40): that place does not depend on the rows.
  const carry = (k, d, third) => {
    const dop = k.dop;
    f32[(dop + 0x374) >> 2] = wrap(f32[(dop + 0x374) >> 2] - d);
    if (third && !u8[dop + 0x432]) setChaseStart(k, swingPoint(k, chaseStart(k), d));
  };

  // ---- look input ----------------------------------------------------------------------------------------
  // The game's heading h (0x4D6960) is input+0x18 + pi/2; RedCat looks along (cos h, 0, -sin h). Turning right
  // makes h smaller (the TurnRight key does the same). Sideways, everything is turned by d = -yaw about the
  // vertical through RedCat: a direction (x, z) becomes (x cos d + z sin d, -x sin d + z cos d).
  const look = (k, yaw, tilt) => {
    const { player, input, dop } = k, cam = k.engineCamera;
    const first = st.want;
    const orbit = f32[(dop + ORBIT) >> 2];
    let next = tilt ? Math.fround(Math.max(-PITCH_LIMIT, Math.min(PITCH_LIMIT, orbit + DEFAULT_PITCH + tilt)) - DEFAULT_PITCH) : orbit;
    if (Math.abs(next) < 1e-7) next = 0;      // back at the default pitch: exactly the original's numbers again
    // only a camera that has the numbers of the old pitch is carried along; anything else is left to reconcile()
    const steady = next !== orbit && !numbers(k, first, orbit, false);
    if (yaw) {
      const px = f32[(player + 0x198) >> 2], pz = f32[(player + 0x1A0) >> 2];
      const d = -yaw, c = Math.cos(d), s = Math.sin(d);
      const about = (x, z) => [px + (x - px) * c + (z - pz) * s, pz - (x - px) * s + (z - pz) * c];
      const point = (a) => { const q = about(f32[a >> 2], f32[(a + 8) >> 2]); f32[a >> 2] = q[0]; f32[(a + 8) >> 2] = q[1]; };
      f32[(input + 0x18) >> 2] = wrap(f32[(input + 0x18) >> 2] + PI / 2 + d) - PI / 2;      // stored as heading - pi/2 (0x4348AC)
      f32[(dop + 0x378) >> 2] = wrap(f32[(dop + 0x378) >> 2] + d);                          // camera yaw, same measure as the heading
      f32[(dop + 0x3C8) >> 2] = wrap(f32[(dop + 0x3C8) >> 2] + d);                          // the same as an Euler angle (yaw - pi/2)
      const to = chaseStart(k);
      [to[0], to[2]] = about(to[0], to[2]);
      setChaseStart(k, to);
      point(dop + 0x3B8);                                                                   // camera position (computed anew in every pass)
      if (host.wallLift) host.wallLift.lookTurn(d, px, pz);                                 // and the place the wall lift eases from (walllift.js)
      if (u8[dop + 0x432]) point(dop + 0x440);                                              // the place the line-of-sight search holds
      if (cam) {
        // CAdamCamera: Euler angles +0x34, position +0x210, matrix +0x1E0 (AX AY AZ BX BY BZ CX CY CZ, translation), built by 0x5569B0
        const M = cam + 0x1E0;
        for (let j = 0; j < 3; j++) { const x = f32[(M + j * 4) >> 2], z = f32[(M + 24 + j * 4) >> 2]; f32[(M + j * 4) >> 2] = x * c + z * s; f32[(M + 24 + j * 4) >> 2] = -x * s + z * c; }
        point(M + 36);
        f32[(cam + 0x38) >> 2] = wrap(f32[(cam + 0x38) >> 2] + d);
        point(cam + 0x210);
      }
    }
    if (next !== orbit) {
      f32[(dop + ORBIT) >> 2] = next;
      if (steady) { carry(k, next - orbit, !first); numbers(k, first, next, true); }
    }
  };
  // see STEER_PITCH
  const steering = (k) => {
    const cam = k.engineCamera;
    if (!cam || !(f32[(cam + 0x34) >> 2] > STEER_PITCH)) return;
    const yaw = f32[(cam + 0x38) >> 2], s = Math.sin(STEER_PITCH), M = cam + 0x1E0;
    f32[(M + 4) >> 2] = Math.sin(yaw) * s; f32[(M + 16) >> 2] = Math.cos(STEER_PITCH); f32[(M + 28) >> 2] = Math.cos(yaw) * s;      // AY, BY, CY
  };

  // ---- RedCat's model ------------------------------------------------------------------------------------
  // His entry { geActor, flags, user flags } in the world's actor list. The world is the actor's sublevel +0x5C,
  // count at world +0x3B8, list at +0x3BC (geWorld_AddActor 0x5B9970); the game's own copy of the flags is actor +0x14C.
  const worldEntry = (k) => {
    const sub = u32[(k.actor + 0x18) >> 2], ge = u32[(k.actor + 0x114) >> 2];
    const world = sub ? u32[(sub + 0x5C) >> 2] : 0;
    if (!world || !ge) return 0;
    const n = i32[(world + 0x3B8) >> 2], list = u32[(world + 0x3BC) >> 2];
    if (!list || n <= 0 || n > 0x10000) return 0;
    if (entryIndex < n && u32[(list + entryIndex * 12) >> 2] === ge) return list + entryIndex * 12;
    for (let q = 0; q < n; q++) if (u32[(list + q * 12) >> 2] === ge) { entryIndex = q; return list + q * 12; }
    return 0;
  };
  // not in the normal view; in mirrors as before
  const hiddenFlags = (f) => ((f & ~(RENDER_NORMAL | RENDER_ALWAYS)) | (f & (RENDER_MIRRORS | RENDER_ALWAYS) ? RENDER_MIRRORS : 0)) >>> 0;

  // Makes the game's memory agree with what is wanted. Writes only what differs.
  const reconcile = (k) => {
    const control = !!k.player && k.control;
    const orbit = k.dop ? f32[(k.dop + ORBIT) >> 2] : 0;
    const first = st.want && control, follow = k.mode === 5 || k.mode === 6;
    const a = control ? orbit : 0;      // the orbit in force: none while the player is not in control
    let view = false;
    const differs = numbers(k, first, a, false);
    if (differs) {
      // Third person on both sides (control was lost or came back with a look pitch set): the follow camera is
      // carried from one orbit to the other. Anything else (first person on or off, a new world) is a cut.
      const was = a === 0 ? orbit : 0;
      const carried = !first && follow && was !== a && !numbers(k, false, was, false);
      if (carried) carry(k, a - was, true);
      numbers(k, first, a, true);
      view = (differs & 1) !== 0 && !carried;
    }
    if (k.actor) {
      const e = worldEntry(k);
      if (e) {
        const own = u32[(k.actor + 0x14C) >> 2], flags = first ? hiddenFlags(own) : own;
        if (u32[(e + 4) >> 2] !== flags) u32[(e + 4) >> 2] = flags;
        hidden = first;
      }
    }
    if (view && follow) {
      // A hard cut, as the original makes at every change of camera mode (dop+0x454; no smoothing in the next
      // frame). Not while another camera runs: the original has set the flag for that change itself, and there
      // the flag also restarts the camera's timer (0x45956B, 0x4595C2).
      u8[k.dop + 0x454] = 1;
      if (first) { u8[k.dop + 0x432] = 0; u8[k.dop + 0x522] = 0; }      // leave a held line-of-sight place (as 0x45AB9D)
    }
    if (control) steering(k);
    // a pitch that is not the default one waits for control to come back; hidden without a player in reach: look again
    engaged = st.want || hidden || !!st.offset || orbit !== 0 || !tableIsOriginal();
  };

  host.look = {
    /**
     * Look input, applied before the next pass; calls add up. yaw: radians, positive turns RedCat and the follow
     * camera to the right. pitch: radians, positive looks down. Dropped while the player does not control RedCat
     * with the follow camera.
     */
    turn(yaw, pitch = 0) {
      if (Number.isFinite(yaw)) pendingTurn += yaw;
      if (Number.isFinite(pitch)) pendingPitch += pitch;
    },
    /** First-person view on or off, from the next pass. */
    setFirstPerson(on) { pendingFirstPerson = !!on; },
    /**
     * null while no game object exists. heading: RedCat looks along (cos heading, 0, sin heading); turn(a) adds a.
     * pitch: the look pitch of this world, -1.2 .. 1.2, positive looks down; 0.16 is the original's view.
     */
    state() {
      const k = chain();
      if (!k) return null;
      return {
        world: !!k.player && k.state === GS_GAME,
        firstPerson: pendingFirstPerson === null ? st.want : pendingFirstPerson,
        heading: k.input ? wrap(-(f32[(k.input + 0x18) >> 2] + PI / 2)) : 0,
        pitch: (k.dop ? f32[(k.dop + ORBIT) >> 2] : 0) + DEFAULT_PITCH,
      };
    },
  };
  // The look pitch is in game memory (dop+0x420) and so in every save state; kept here is what was asked for.
  if (host.snap) host.snap.add('look', () => ({ want: st.want, offset: st.offset }), (s) => {
    st.want = !!(s && s.want);
    st.offset = s && s.offset ? { saved: s.offset.saved.slice(), mine: s.offset.mine.slice() } : null;
    pendingTurn = 0; pendingPitch = 0; pendingFirstPerson = null; entryIndex = 0;
    hidden = st.want;
    engaged = !!s;      // a state from before this module has no part: nothing was ever applied to it
  });
  if (!host.mainLoop) return;
  host.mainLoop.beforePass.push(() => {
    if (!engaged && pendingFirstPerson === null && pendingTurn === 0 && pendingPitch === 0) return;
    const k = chain();
    const yaw = pendingTurn, tilt = pendingPitch;
    pendingTurn = 0; pendingPitch = 0;
    if (pendingFirstPerson !== null) { st.want = pendingFirstPerson; pendingFirstPerson = null; }
    engaged = true;
    if (!k) return;
    if (k.player && k.control && (yaw !== 0 || tilt !== 0)) look(k, yaw, tilt);
    reconcile(k);
  });
}
