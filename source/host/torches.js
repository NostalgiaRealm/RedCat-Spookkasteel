// The moving, lit hand torches of the JavaScript port (its item "All 32 moving hand torches lit",
// ../RCSPOOK_NEW/source/torch-flames.js, release 0.9.7). One flag, handTorches in fixes.js; off is
// the original: nothing here is called and nothing is written. Evidence and what was run:
// docs/research/original-fixes.md 10.
//
// The original (level data, original code, runs of the Node runner):
//   - a hand torch is a decorative actor, entity AdamAnyActor -> CRcAnyActor (vtable 0x64BB14) with
//     the actor file htorch.act; 8 in the Castle (lvl01a), 24 in the Graveyard (lvl02a). The game
//     plays its motion "anim" on 31 of them (Graveyard AdamAnyActor131 has no MotionName);
//   - a torch has no flame and no light of its own. A flame is a separate EffectSpoutEntity ->
//     CRcParticleSystem (vtable 0x64D9E4) that the level's author put at a fixed place. 16 of the
//     Graveyard's hands have one 9.5 to 15.5 units from the tip at rest, so the hand sways about
//     22 units under a flame that stands still; the other 8 and all 8 of the Castle have none;
//   - no hand has a dynamic light.
//
// With the flag (the JavaScript port's numbers):
//   tip      the centre of the wick cap, mesh vertices 51-53, all on BONE03: the bone's transform
//            (geActor_GetBoneTransform 0x5B44A0, read only) x scale x CAP, 3 units higher;
//   flame a  the 16 authored flames are born at the tip: the fifteen birth places of the emitter
//            (emitter+0x1498, stride 0x1C: place, velocity, delay; computed once by its constructor
//            0x466A90 and copied at every birth, 0x468540) are moved by tip - emitter origin,
//            between two passes. 45 floats of game memory per emitter. Particles that are alive
//            keep their path; enabling and disabling by scripts stays the game's;
//   flame b  the 16 hands without an emitter get a particle pool of the host with the values of
//            the Graveyard's hand flames (15 slots, the constructor's and the updater's rules as
//            docs/spout-effects-native.md of the JavaScript port has them, its own random numbers:
//            the game's rand() is not touched). Each particle is handed to the engine as one
//            polygon for one frame, as the emitter's own draw 0x467EB0 does: geWorld_AddPolyOnce
//            0x5B6E90 with the level's flame03 bitmap, the quad from the game's own billboard
//            helper 0x477D50;
//   motion   the one hand the level gives no MotionName (Graveyard AdamAnyActor131) gets the motion
//            "anim" at speed 1 (its entity's MotionSpeed), as the JavaScript port plays it: the two
//            calls the factory 0x4A87E0 makes for the other 31, on the hand's own animator
//            (0x4A06B0 set motion, 0x4A0BD0 time factor), once, between two passes. So all 32 move;
//   light    at most eight hands nearest the camera get a constant light (191 102 26, radius
//            150, no shadow) for the length of one scene: a free slot of the engine's own table
//            of 32 dynamic lights (world+0x3B0 -> +0x3E4, 0x34 bytes each; geWorld_AddLight
//            0x5D36A0 takes the first free one from the bottom) is taken from the top at the
//            driver's BeginScene, filled with the engine's own setter 0x5D3730, and put back at
//            EndScene. Between two scenes the table is the original's.
// So, unlike wallTrim, this one writes game memory while it is on: the 45 floats per authored
// flame, one hand's animator (and the heap block of its motion name), a light slot for the length
// of a scene, and what AddPolyOnce and the lightmap code leave behind (heap blocks of one frame,
// light marks on faces). The calls made inside a scene (BeginScene, BeginWorld) run on the stack
// 0x1000 below the driver's stack pointer, so what lies in dead stack there is not the original's
// either (snapshot.js: the game reads dead stack in places; no effect was seen, not proven that
// there is none). No hook, no recompile, no low memory. What the host keeps in JavaScript (the
// pools, the authored birth places, the hand that got a motion) is a part of a save state.
//
// Not as the JavaScript port:
//   - a hand that is shot leaves the game (it is destructed inside the pass, seen in a run); its
//     authored flame then goes back to where the level has it, as in the original, instead of
//     going out;
//   - the 16 authored flames keep the game's own emission: they go on being born when their hand
//     is hidden or further than 1800 units from the camera (the port stops them there; the host's
//     own 16 pools do stop), and keep their own spread direction (13 of 16 straight up; the port
//     forced all of them straight up);
//   - the lights: eight torch lights on top of the game's own (the port has eight light slots in
//     all, one kept for RedCat, so at most seven torches and fewer near authored lights), and
//     computed by the engine's own lightmap code, which lights walls about twice as strongly as
//     the port's own shader does with the same colour and radius (docs/research/original-fixes.md 10).

const VT_ANY = 0x0064BB14, VT_SPOUT = 0x0064D9E4;
const BONE_XF = 0x005B44A0;                 // geActor_GetBoneTransform: fastcall(ECX geActor, EDX name, stack xform*), ret 4
const ADD_POLY_ONCE = 0x005B6E90;           // geWorld_AddPolyOnce: cdecl(world, GE_LVertex*, n, geBitmap*, type, flags, scale)
const LIGHT_ATTR = 0x005D3730;              // Light_SetAttributes: cdecl(light, pos*, rgba*, radius, castShadow)
const BASIS = 0x00477D50;                   // the particle classes' billboard helper: thiscall(-, toCamera*, outA*, outB*), ret 0xC
const CAP = [0.11176367476582527, 0.2269089619318644, 14.135211308797201];      // wick cap centre in BONE03, before the actor's scale
const REST = [6.566, -43.946, 16.592];      // the same point at rest, in the frame of the actor's transform (+0x168): only to pair hands and emitters
const LIFT = 3, PAIR = 32, REACH = 1800, SLOTS = 15, MAX_LIGHTS = 8;
const LIGHT = { rgba: [191.25, 102, 25.5, 255], radius: 150 };
// EffectSpoutEntity values of the Graveyard's hand flames (all 28 flame03 emitters of lvl02a have them)
const FLAME = { delay: [0.1, 0.3], life: [0.5, 2], speed: [4, 8], alpha: [100, 25], size: [0.25, 1], half: 10, radius: 1.5, gravity: 0.5, angle: [0, 20] };
const LEVELS = { lvl01a: true, lvl02a: true };
// A hand's animation: the CAdamActor animator inside the object (hand+0x19C: motion name std::string at +0x18, its length
// +0x20, geMotion* +0x38, time factor +0x40). The factory 0x4A87E0 calls these two on it when MotionName is not empty
// (0x4A8B1F, 0x4A8BBB); the string is made and freed with the game's own std::string code, as the factory does.
const ANIMATOR = 0x19C, SET_MOTION = 0x004A06B0, SET_FACTOR = 0x004A0BD0;      // thiscall(animator, std::string*), ret 4; thiscall(animator, float), ret 4
const STR_TIDY = 0x004040A0, STR_GROW = 0x00401940, STR_EOS = 0x00404190;       // thiscall(string, bool); thiscall(string, n, bool) -> bool; thiscall(string, n)

/** A hand's own pool: the constructor 0x466A90 with the hand flame's values, direction straight up. */
function makePool(seed) {
  let s = seed >>> 0;
  const random = () => { s = (Math.imul(s, 214013) + 2531011) >>> 0; return ((s >>> 16) & 32767) % 10000 / 10000; };       // the CRT's rand() % 10000 / 10000, own state
  const pick = ([a, b]) => a + (b - a) * random();
  const slots = [];
  for (let k = 0; k < SLOTS; k++) slots.push({ on: 0, life: Math.max(1, Math.trunc(pick(FLAME.life) * 1000)), off: [0, 0], vel: [0, 0, 0], delay: 0, p: [0, 0, 0], v: [0, 0, 0], end: 0, stage: 0, fadeEnd: 0, fadeStart: 0, alpha: 0 });
  for (const q of slots) {
    const angle = pick(FLAME.angle) * Math.PI / 180, speed = 3 * pick(FLAME.speed), azimuth = random() * 2 * Math.PI;
    const axial = speed * Math.cos(angle), radial = axial * Math.tan(angle);
    // direction (0,1,0): reference (0,0,1), tangents (-1,0,0) and (0,0,-1) (0x466DC7 onward)
    q.vel = [-radial * Math.sin(azimuth), axial, -radial * Math.cos(azimuth)];
    q.off = [FLAME.radius * (2 * random() - 1), FLAME.radius * (2 * random() - 1)];
    q.delay = Math.max(0, Math.trunc(pick(FLAME.delay) * 1000));
  }
  return { slots, delay: slots[0].delay, delayEnd: -1, live: 0 };
}

/** One update of a pool, as 0x468540 and the particle's own tick: now in game ms, dt in seconds. */
function stepPool(pool, now, dt, origin, births) {
  if (births) {
    if (pool.delayEnd < 0) pool.delayEnd = now + pool.delay;
    else if (now > pool.delayEnd) {
      const q = pool.slots.find((x) => !x.on);
      if (q) {
        q.on = 1; q.end = now + q.life; q.stage = 0; q.fadeEnd = now + 1; q.fadeStart = 0;
        q.alpha = Math.trunc(FLAME.alpha[0] * Math.fround(2.55));
        q.p = [origin[0] + q.off[0], origin[1], origin[2] + q.off[1]]; q.v = q.vel.slice();
        pool.delay = q.delay; pool.delayEnd = -1;
      }
    }
  } else pool.delayEnd = -1;
  pool.live = 0;
  for (const q of pool.slots) {
    if (!q.on) continue;
    if (now > q.end) { q.on = 0; continue; }
    if (q.stage === 0 && now > q.fadeEnd) q.stage = 1;
    else if (q.stage === 1) { q.stage = 2; q.fadeStart = now; }
    if (q.stage === 2) { const t = Math.max(0, Math.min(1, (now - q.fadeStart) / q.life)); q.alpha = Math.trunc(2.5500000000000003 * (FLAME.alpha[0] + (FLAME.alpha[1] - FLAME.alpha[0]) * t)); }
    q.v[1] -= 24 * FLAME.gravity * dt;
    for (let j = 0; j < 3; j++) q.p[j] += q.v[j] * dt;
    pool.live++;
  }
}

export function installTorches(m, host) {
  const { u8, u32, i32, f32 } = m;
  const fx = host.fixes;
  if (!fx) return;
  const flags = fx.flags;
  const fbuf = new Float32Array(1), ubuf = new Uint32Array(fbuf.buffer);
  const bits = (x) => { fbuf[0] = x; return ubuf[0]; };
  const vec = (p) => [f32[p >> 2], f32[(p + 4) >> 2], f32[(p + 8) >> 2]];
  const dist = (a, b) => Math.hypot(a[0] - b[0], a[1] - b[1], a[2] - b[2]);

  // sub: the sublevel the state belongs to. hands: object -> { pool | null, emitter }. emitters: object -> { hand, orig, cur }
  // (orig: the fifteen birth places as the game made them; cur: as the host wrote them last). last: game time of the last pool update.
  // motions: object -> the time factor (bits) of a hand that had no motion and was given "anim" (Graveyard AdamAnyActor131).
  const st = { sub: 0, hands: new Map(), emitters: new Map(), motions: new Map(), last: -1 };
  const stats = { hands: 0, bound: 0, pools: 0, polys: 0, lights: 0, scenes: 0, lightsNow: 0, polysNow: 0, moved: 0, skipped: 0, motions: 0, kept: 0 };
  const api = host.torches = { stats, state: st };
  let live = null;            // of the last walk: { hands: Set, spouts: Set, flame: geBitmap* }
  let scene = null;           // between BeginScene and EndScene: { slots: [[address, bytes]], table, draw: [pool, ...], drawn }

  const TEMPLATES = 0x1498, STRIDE = 0x1C;
  const readPlaces = (e) => { const a = new Array(SLOTS * 3); for (let k = 0; k < SLOTS; k++) for (let j = 0; j < 3; j++) a[k * 3 + j] = f32[(e + TEMPLATES + k * STRIDE + j * 4) >> 2]; return a; };
  const writePlaces = (e, a) => { for (let k = 0; k < SLOTS; k++) for (let j = 0; j < 3; j++) f32[(e + TEMPLATES + k * STRIDE + j * 4) >> 2] = a[k * 3 + j]; };
  const same = (a, b) => { for (let k = 0; k < a.length; k++) if (Math.fround(a[k]) !== Math.fround(b[k])) return false; return true; };

  /** The name at p is `name` (lower case, ASCII, shorter than cstr's 32 characters) whatever its case: /^name$/i.test(cstr(p)) without making a string. */
  const nameIs = (p, name) => {
    if (!p) return false;
    for (let k = 0; k < name.length; k++) { const c = u8[p + k]; if ((c >= 0x41 && c <= 0x5A ? c + 32 : c) !== name.charCodeAt(k)) return false; }
    return u8[p + name.length] === 0;
  };
  const isHand = (o) => u32[(o + 0x114) >> 2] !== 0 && nameIs(u32[(o + 0xFC) >> 2], 'htorch.act');
  const flameOf = (o) => { const b = u32[(o + 0xFC) >> 2]; return b && nameIs(u32[(b + 0x20) >> 2], 'flame03.bmp') ? u32[(b + 0x2C) >> 2] : 0; };
  let liveHands = [], liveSpouts = [];          // the last walk's hands and emitters in the order of the list
  /**
   * The sublevel's object list (head at sub+0x34, node = { object, next }: 0x4F4940, 0x4F4C30): the hands and emitters that exist now.
   * This runs twice a frame over every object of the level, on a thread whose garbage is only collected when its heap's
   * allowance is used up (a name per object and two sets per walk were 0.1 MB a frame in the Graveyard). So the list is
   * first read without making anything: when it has the hands and emitters of the last walk, in the same order, and the
   * same flame, the last result stands.
   */
  const walk = (sub) => {
    let flame = 0, n = 0, nh = 0, ns = 0, same = live !== null;
    for (let q = u32[(sub + 0x34) >> 2]; q && n < 20000; q = u32[(q + 4) >> 2], n++) {
      const o = u32[q >> 2];
      if (!o) continue;
      const vt = u32[o >> 2];
      if (vt === VT_ANY) { if (isHand(o)) { if (liveHands[nh] !== o) same = false; nh++; } }
      else if (vt === VT_SPOUT) {
        if (liveSpouts[ns] !== o) same = false;
        ns++;
        if (!flame) flame = flameOf(o);
      }
    }
    if (same && nh === liveHands.length && ns === liveSpouts.length && flame === live.flame) return live;
    const hands = new Set(), spouts = new Set();
    liveHands = []; liveSpouts = []; n = 0;
    for (let q = u32[(sub + 0x34) >> 2]; q && n < 20000; q = u32[(q + 4) >> 2], n++) {
      const o = u32[q >> 2];
      if (!o) continue;
      const vt = u32[o >> 2];
      if (vt === VT_ANY) { if (isHand(o)) { hands.add(o); liveHands.push(o); } }
      else if (vt === VT_SPOUT) { spouts.add(o); liveSpouts.push(o); }
    }
    return (live = { hands, spouts, flame });
  };
  /** Pairs hands and authored flames for a sublevel: the nearest emitter within 32 units of the tip at rest, each emitter once. */
  const bind = (sub) => {
    // The same sublevel again (a hand went, or the game wrote an emitter's places): what the host knows stays. An emitter
    // keeps its own places for every float that still is what the host wrote last; a float that is something else now is
    // the game's and is taken as it is. A hand keeps its pool. (Reading everything again here would take the places the
    // host moved for the level's own.)
    const again = st.sub === sub, oldE = again ? new Map(st.emitters) : null, oldH = again ? new Map(st.hands) : null;
    if (!again) st.motions.clear();
    st.sub = sub; st.hands.clear(); st.emitters.clear(); if (!again) st.last = -1;
    const M = (o, j) => f32[((o + 0x168) >> 2) + j];
    for (const h of live.hands) {
      const rest = [0, 1, 2].map((r) => M(h, r * 3) * REST[0] + M(h, r * 3 + 1) * REST[1] + M(h, r * 3 + 2) * REST[2] + M(h, 9 + r));
      let best = 0, bd = PAIR;
      for (const e of live.spouts) { if (st.emitters.has(e)) continue; const d = dist(vec(e + 0x2B4), rest); if (d <= bd) { bd = d; best = e; } }
      if (best) {
        const now = readPlaces(best), was = oldE && oldE.get(best);
        let orig = now;
        if (was && was.hand === h) { orig = now.map((x, j) => (Math.fround(x) === Math.fround(was.cur[j]) ? was.orig[j] : x)); stats.kept++; }
        st.emitters.set(best, { hand: h, orig, cur: now.slice() }); st.hands.set(h, { pool: null, emitter: best });
      } else {
        const was = oldH && oldH.get(h);
        st.hands.set(h, { pool: was && was.pool ? was.pool : makePool((u32[(h + 0x18C) >> 2] ^ Math.imul(u32[(h + 0x190) >> 2], 31) ^ Math.imul(u32[(h + 0x194) >> 2], 961)) >>> 0), emitter: 0 });
      }
    }
    stats.hands = st.hands.size; stats.bound = st.emitters.size; stats.pools = st.hands.size - st.emitters.size;
  };
  /** The state fits what is in memory: same sublevel, every hand known, and every authored flame that still exists has the places the host wrote last. */
  const fits = (sub) => {
    if (st.sub !== sub) return false;
    for (const h of live.hands) if (!st.hands.has(h)) return false;          // hands never appear in a level that runs: the level was loaded again at the same address
    for (const [e, r] of st.emitters) if (live.spouts.has(e) && !placesAre(e, r.cur)) return false;
    return true;
  };
  /** same(readPlaces(e), a) without the array: asked for every authored flame twice a frame. */
  const placesAre = (e, a) => { for (let k = 0; k < SLOTS; k++) for (let j = 0; j < 3; j++) if (Math.fround(f32[(e + TEMPLATES + k * STRIDE + j * 4) >> 2]) !== Math.fround(a[k * 3 + j])) return false; return true; };
  /** Game code with room for data below the stack pointer: fn(mem), 0x400 bytes at mem. */
  const below = (esp, fn) => { const keep = m.esp, mem = (esp - 0x1000) & ~15; m.esp = mem - 64; try { return fn(mem); } finally { m.esp = keep; } };
  /** The wick's place now, lifted: the bone's transform x scale x CAP. null when the engine has no such bone. */
  const tipOf = (mem, o) => {
    const nm = mem + 0x3F0, xf = mem + 0x3A0, s = [f32[(o + 0x150) >> 2], f32[(o + 0x154) >> 2], f32[(o + 0x158) >> 2]];
    u8[nm] = 0x42; u8[nm + 1] = 0x4F; u8[nm + 2] = 0x4E; u8[nm + 3] = 0x45; u8[nm + 4] = 0x30; u8[nm + 5] = 0x33; u8[nm + 6] = 0;      // "BONE03"
    if (!(m.call(BONE_XF, [xf], u32[(o + 0x114) >> 2], nm) & 0xFF)) return null;
    const M = (j) => f32[(xf >> 2) + j], x = CAP[0] * s[0], y = CAP[1] * s[1], z = CAP[2] * s[2];
    const p = [M(0) * x + M(1) * y + M(2) * z + M(9), M(3) * x + M(4) * y + M(5) * z + M(10) + LIFT, M(6) * x + M(7) * y + M(8) * z + M(11)];
    return p.every(Number.isFinite) ? p : null;
  };
  /** The game's own "play this motion" on a hand's animator, the name as a std::string of the game ('' = none). */
  const setMotion = (mem, hand, name) => {
    const str = mem + 0x3C0, an = hand + ANIMATOR;
    for (let j = 0; j < 4; j++) u32[(str >> 2) + j] = 0;
    m.call(STR_TIDY, [0], str);
    if (name.length && (m.call(STR_GROW, [name.length, 1], str) & 0xFF)) {
      const p = u32[(str + 4) >> 2];
      for (let j = 0; j < name.length; j++) u8[p + j] = name.charCodeAt(j);
      m.call(STR_EOS, [name.length], str);
    }
    m.call(SET_MOTION, [str], an);
    m.call(STR_TIDY, [1], str);
  };
  /**
   * The hands that have no motion (the level gives Graveyard AdamAnyActor131 none) get "anim" at speed 1, the entity's own
   * MotionSpeed, as the JavaScript port plays it. Kept: the time factor the hand had, for when the flag goes off.
   */
  const motions = (esp) => {
    for (const h of st.motions.keys()) if (!live.hands.has(h)) st.motions.delete(h);
    let todo = null;
    for (const h of live.hands) if (!st.motions.has(h) && u32[(h + ANIMATOR + 0x20) >> 2] === 0 && u32[(h + ANIMATOR + 0x38) >> 2] === 0) (todo || (todo = [])).push(h);
    if (!todo) return;
    below(esp, (mem) => {
      for (const h of todo) {
        st.motions.set(h, u32[(h + ANIMATOR + 0x40) >> 2]);
        setMotion(mem, h, 'anim');
        m.call(SET_FACTOR, [bits(1)], h + ANIMATOR);
        stats.motions++;
      }
    });
  };
  /** The flag went off: those hands have no motion again, and their own time factor. The pose they stop in is the engine's. */
  const still = (esp) => {
    if (!st.motions.size) return;
    below(esp, (mem) => {
      for (const [h, factor] of st.motions) if (live.hands.has(h)) { setMotion(mem, h, ''); m.call(SET_FACTOR, [factor], h + ANIMATOR); }
    });
    st.motions.clear();
  };
  const playing = () => {
    const k = fx.chain();
    if (!k || !k.sub || k.state !== 3 || !LEVELS[fx.level()]) return null;
    return k;
  };
  /** The authored flames get their own places back (the flag went off, or their hand is gone). */
  const release = (only) => {
    for (const [e, r] of st.emitters) {
      if (only && only !== e) continue;
      if (live && live.spouts.has(e) && same(readPlaces(e), r.cur)) writePlaces(e, r.orig);
      r.cur = r.orig.slice();
    }
  };

  // -- between two passes: the authored flames follow their hands --------------------------------
  api.beforePass = (esp) => {
    if (!flags.handTorches) {
      if (!st.sub) return;
      const k = fx.chain();
      if (k && k.sub === st.sub) { walk(k.sub); release(0); still(esp); }
      st.sub = 0; st.hands.clear(); st.emitters.clear(); st.motions.clear(); st.last = -1;
      return;
    }
    const k = playing();
    if (!k) return;
    walk(k.sub);
    if (!fits(k.sub)) bind(k.sub);
    motions(esp);
    if (!st.emitters.size) return;
    below(esp, (mem) => {
      for (const [e, r] of st.emitters) {
        if (!live.spouts.has(e)) continue;
        const tip = live.hands.has(r.hand) ? tipOf(mem, r.hand) : null;
        if (!tip) { if (!same(r.cur, r.orig)) release(e); continue; }
        const o = vec(e + 0x2B4), next = r.orig.slice();
        for (let k2 = 0; k2 < SLOTS; k2++) for (let j = 0; j < 3; j++) next[k2 * 3 + j] = Math.fround(r.orig[k2 * 3 + j] + (tip[j] - o[j]));
        writePlaces(e, next); r.cur = next; stats.moved++;
      }
    });
  };

  // -- a scene: the lights, and the flames of the hands that have none ---------------------------
  api.beginScene = (esp) => {
    scene = null;
    if (!flags.handTorches) return;
    const k = playing();
    if (!k) return;
    const world = u32[(k.sub + 0x5C) >> 2], app = k.app, engine = u32[(app + 0x3A0) >> 2], cam = engine ? u32[(engine + 0xE0) >> 2] : 0, ge = cam ? u32[(cam + 0x30) >> 2] : 0;
    if (!world || !ge) return;
    walk(k.sub);
    if (!fits(k.sub)) { if (st.sub === k.sub) { stats.skipped++; return; } bind(k.sub); }      // (an emitter the game changed since the last pass: the next pass pairs again)
    const eye = vec(ge + 0xD0 + 36), now = i32[(k.sub + 0x3E8) >> 2];
    const step = st.last < 0 || now <= st.last ? 0 : Math.min(now - st.last, 125);
    st.last = now;
    scene = { slots: [], table: 0, draw: [], drawn: false, world, ge, flame: live.flame, eye };
    stats.scenes++; stats.lightsNow = 0; stats.polysNow = 0;
    const lit = [];
    below(esp, (mem) => {
      for (const [h, r] of st.hands) {
        const there = live.hands.has(h) && u8[h + 0x7C] !== 0 && dist(vec(h + 0x18C), eye) < REACH;
        const tip = there ? tipOf(mem, h) : null;
        if (r.pool) {
          if (step && (tip || r.pool.live)) stepPool(r.pool, now, step / 1000, tip, !!tip);
          if (r.pool.live) scene.draw.push(r.pool);
        }
        if (!tip) continue;
        const burning = r.emitter ? live.spouts.has(r.emitter) && u8[r.emitter + 0x7C] !== 0 : true;
        const d = dist(tip, eye);
        if (burning && d < REACH + LIGHT.radius) lit.push([d, tip]);
      }
      // the lights: free slots of the engine's table from the top, for this scene only
      lit.sort((a, b) => a[0] - b[0]);
      const table = u32[(world + 0x3B0) >> 2];
      if (!table || !lit.length) return;
      scene.table = table;
      let slot = 31;
      for (const [, tip] of lit.slice(0, MAX_LIGHTS)) {
        while (slot >= 0 && u32[(table + 0x3E4 + slot * 0x34) >> 2]) slot--;
        if (slot < 0) break;
        const at = table + 0x3E4 + slot * 0x34;
        scene.slots.push([at, u8.slice(at, at + 0x34)]);
        for (let j = 0; j < 13; j++) u32[(at >> 2) + j] = 0;
        u32[at >> 2] = 1; i32[(table + 0xA64) >> 2]++;
        for (let j = 0; j < 3; j++) f32[((mem + 0x300) >> 2) + j] = tip[j];
        for (let j = 0; j < 4; j++) f32[((mem + 0x310) >> 2) + j] = LIGHT.rgba[j];
        m.call(LIGHT_ATTR, [at, mem + 0x300, mem + 0x310, bits(LIGHT.radius), 0]);
        slot--;
      }
      stats.lightsNow = scene.slots.length; stats.lights += scene.slots.length;
    });
  };
  /** The first world of a scene: one polygon per live particle, drawn by the engine in this frame only (as 0x467EB0 does). */
  api.beginWorld = (esp) => {
    if (!scene || scene.drawn) return;
    scene.drawn = true;
    if (!flags.handTorches || !scene.flame || !scene.draw.length) return;
    const { world, eye } = scene;
    below(esp, (mem) => {
      const dir = mem + 0x340, A = mem + 0x350, B = mem + 0x360, V = mem + 0x200;
      for (const pool of scene.draw) for (const q of pool.slots) {
        if (!q.on) continue;
        const rest = Math.max(0, Math.min(1, (q.end - st.last) / q.life));             // what is left of its life
        const half = FLAME.half * (rest * FLAME.size[0] + (1 - rest) * FLAME.size[1]);
        for (let j = 0; j < 3; j++) f32[(dir >> 2) + j] = eye[j] - q.p[j];             // 0x468148: camera - particle
        m.call(BASIS, [dir, A, B], 0);
        const flip = q.p[1] < eye[1] ? -1 : 1;                                          // 0x468183: both turned round when the camera is above
        const a = vec(A).map((x) => x * half * flip), b = vec(B).map((x) => x * half * flip);
        // the four corners with the quad's own small offsets (0x64D928 onward) and its UVs
        const C = [[-1, 1, -0.5, 0.5, 1, 0], [1, 1, 0.5, 0.5, 0, 0], [1, -1, 0.5, -0.5, 0, 1], [-1, -1, -0.5, -0.5, 1, 1]];
        C.forEach(([sa, sb, ox, oy, tu, tv], j) => {
          const o = (V >> 2) + j * 9;
          f32[o] = q.p[0] + ox + sa * a[0] + sb * b[0]; f32[o + 1] = q.p[1] + oy + sa * a[1] + sb * b[1]; f32[o + 2] = q.p[2] + sa * a[2] + sb * b[2];
          f32[o + 3] = tu; f32[o + 4] = tv; f32[o + 5] = 255; f32[o + 6] = 255; f32[o + 7] = 255; f32[o + 8] = q.alpha;
        });
        m.call(ADD_POLY_ONCE, [world, V, 4, scene.flame, 0, 1, 0]);
        stats.polysNow++;
      }
      stats.polys += stats.polysNow;
    });
  };
  /** The light slots get their bytes back; the count goes down by what the host added. */
  api.endScene = () => {
    if (!scene) return;
    for (const [at, bytes] of scene.slots) u8.set(bytes, at);
    if (scene.slots.length) i32[(scene.table + 0xA64) >> 2] -= scene.slots.length;
    scene = null;
  };

  if (host.mainLoop) host.mainLoop.beforePass.push((esp) => api.beforePass(esp));

  // What the host keeps: the pools of the hands without an authored flame, and the authored flames' own birth places.
  const isNum = (x) => typeof x === 'number' && Number.isFinite(x);
  if (host.snap) host.snap.add('torches', () => ({
    sub: st.sub, last: st.last,
    hands: [...st.hands].map(([h, r]) => [h, r.emitter, r.pool ? { delay: r.pool.delay, delayEnd: r.pool.delayEnd, live: r.pool.live, slots: r.pool.slots.map((q) => [q.on, q.life, q.delay, q.end, q.stage, q.fadeEnd, q.fadeStart, q.alpha, ...q.off, ...q.vel, ...q.p, ...q.v]) } : null]),
    emitters: [...st.emitters].map(([e, r]) => [e, r.hand, r.orig, r.cur]),
    motions: [...st.motions],
  }), (s) => {
    st.sub = 0; st.hands.clear(); st.emitters.clear(); st.motions.clear(); st.last = -1; scene = null; live = null; liveHands = []; liveSpouts = [];
    if (!s || !s.sub) return;
    st.sub = s.sub; st.last = s.last;
    for (const [h, e, p] of s.hands) st.hands.set(h, { emitter: e, pool: p ? { delay: p.delay, delayEnd: p.delayEnd, live: p.live, slots: p.slots.map((a) => ({ on: a[0], life: a[1], delay: a[2], end: a[3], stage: a[4], fadeEnd: a[5], fadeStart: a[6], alpha: a[7], off: a.slice(8, 10), vel: a.slice(10, 13), p: a.slice(13, 16), v: a.slice(16, 19) })) } : null });
    for (const [e, h, orig, cur] of s.emitters) st.emitters.set(e, { hand: h, orig: orig.slice(), cur: cur.slice() });
    for (const [h, factor] of s.motions || []) st.motions.set(h, factor);
    stats.hands = st.hands.size; stats.bound = st.emitters.size; stats.pools = st.hands.size - st.emitters.size;
  }, {
    check: (s) => {
      if (!isNum(s.sub) || !isNum(s.last) || !Array.isArray(s.hands) || !Array.isArray(s.emitters) || s.hands.length > 64 || s.emitters.length > 64) return 'shape';
      for (const r of s.hands) { if (!Array.isArray(r) || !isNum(r[0]) || !isNum(r[1])) return 'hand'; const p = r[2]; if (p !== null && (!p || !isNum(p.delay) || !isNum(p.delayEnd) || !Array.isArray(p.slots) || p.slots.length !== SLOTS || p.slots.some((a) => !Array.isArray(a) || a.length !== 19 || !a.every(isNum)))) return 'pool'; }
      for (const r of s.emitters) if (!Array.isArray(r) || !isNum(r[0]) || !isNum(r[1]) || !Array.isArray(r[2]) || !Array.isArray(r[3]) || r[2].length !== SLOTS * 3 || r[3].length !== SLOTS * 3 || !r[2].every(isNum) || !r[3].every(isNum)) return 'emitter';
      if (s.motions !== undefined && (!Array.isArray(s.motions) || s.motions.length > 64 || s.motions.some((r) => !Array.isArray(r) || r.length !== 2 || !isNum(r[0]) || !isNum(r[1])))) return 'motion';
      return null;
    },
  });
}
