// Fixes of faults of the original game, carried over from the JavaScript port (../RCSPOOK_NEW,
// docs/intentional-fixes-and-findings.md there). Every one of them changes what the original game
// does, on purpose, and each has ONE flag in the list below: flag off = the original. The evidence
// per item is in docs/research/original-fixes.md; the list for players in
// docs/intentional-differences.md.
//
// Where each one acts:
//   bigBeng           a byte of lvl03a.dso as the game reads it (vfs.patch)
//   cavesStartSkill   Settings\Game.ini [sublevel1_4] StandardSkill, written before the game starts
//   cutsceneProtect   between two passes: the original's own god-mode byte, held while a cutscene runs
//   flightSafe        the same byte while free flight is on; leaving free flight looks for a free place (cheats.js)
//   fractionalDamage  the host guard in front of the damage dispatch 0x503FC0 (it has a try block, so
//                     it already runs behind a host thunk: no change to the game module)
//   mazeReset         between two passes, with the game's own script methods
//   doorSound         host hook on CAdamDoorModel's sound choice 0x4CC140
//   towerFire         host hook on the sound system's 3D helper 0x54E750
//   musicContinuity   dsound.js
//   wallTrim          the render driver only (gdriver.js); it reads game memory and never writes it
//   handTorches       torches.js: the engine's own once-polygons and dynamic-light table, the birth places of
//                     sixteen authored flames, and the game's own set-motion for the one hand without a motion;
//                     an addition of the JavaScript port, not a fault of the original
//   skyBackdrop       the render driver only (gdriver.js, BeginWorld); it reads game memory and never writes it
//   smoothSprites     the render driver only (gdriver.js pixels(), smooth.js): the bytes on their way to the renderer
//   hudShape          the render driver only (gdriver.js, RenderMiscTexturePoly): its own copy of a 2D bitmap's corners
//
// With every flag off the host calls the original bodies and nothing else: the README save-state
// pair then prints the hash of the build before these fixes.

/** The flags, in the order of their numbers on the wire (SET.FIX in source/web/shared.js). true = as the JavaScript port shipped it. */
export const FIX_DEFAULTS = {
  mazeReset: true,          // Graveyard: an unfinished hedge maze starts over when RedCat comes back from a death
  bigBeng: true,            // Caves: the fairy at trigger_cuts04 gives the super shot (RcEnableSkill 4 -> 2)
  cavesStartSkill: true,    // Snelspel in the Caves starts without the super shot (StandardSkill 7 -> 3)
  cutsceneProtect: true,    // no damage while a cutscene has the controls
  fractionalDamage: true,   // an explosion's damage to an enemy is not lost to rounding at high frame rates
  flightSafe: true,         // free flight: no damage, and it ends at a free place
  wallTrim: true,           // Graveyard: two strips of wall that use the gates' see-through bitmap are drawn solid
  doorSound: true,          // listed door panels of DoorType 4 (empty.wav) get the normal or secret door sound
  towerFire: true,          // setting: the Tower's fire loop quieter and local
  musicContinuity: true,    // setting: the level music goes on where it was after a fight
  handTorches: true,        // Castle, Graveyard: every hand torch moves, has a flame that follows the hand, and gives light (torches.js)
  skyBackdrop: true,        // picture only: the sky box is drawn behind the world, so a view past the level's faces shows sky instead of black
  smoothSprites: true,      // picture only: the sixteen levels of a 4444 texture's channels are smoothed (the fairy's halo has no stepped edge)
  hudShape: true,           // picture only: on a screen that is not 4:3 the HUD and the other 2D bitmaps keep their 4:3 width (left group left, right group right)
};
export const FIX_NAMES = Object.keys(FIX_DEFAULTS);

/** Flags from an override: 'off', 'on', an object, or 'name=0,name=1' (a name alone switches it off). */
export function fixFlags(over) {
  const f = { ...FIX_DEFAULTS };
  if (!over) return f;
  if (over === 'off') { for (const k of FIX_NAMES) f[k] = false; return f; }
  if (over === 'on') return f;
  if (typeof over === 'string') {
    for (const q of over.split(',').filter(Boolean)) { const [k, v] = q.split('='); if (!(k in f)) throw new Error('unknown fix ' + k); f[k] = v === undefined ? false : v !== '0' && v !== 'false'; }
    return f;
  }
  for (const k of FIX_NAMES) if (typeof over[k] === 'boolean') f[k] = over[k];
  return f;
}

// ---- files ---------------------------------------------------------------------------------------
// lvl03a.dso, handler CommandOnEnter of trigger_cuts04: "POP 2; RcHasAllPotions" ... "POP 4; RcEnableSkill".
// The int operand of the second push is at 0x18F5. Index 4 is mask 0x10 (0x436EA0), which nothing
// reads; the three other fairies ask and give the same index (0/0, 1/1, 3/3).
const BIG_BENG = { file: 'LEVELS\\LVL03A.DSO', offset: 0x18F0, expect: [0x03, 0x01, 0x02, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x03, 0x03, 0x04, 0x01, 0x41, 0x18, 0x00] };

/** What the fixes change in the files the game reads; before the game starts. setIni: ini.js setIniValues. */
export function applyFixFiles(vfs, dir, flags, setIni) {
  if (flags.bigBeng) {
    const bytes = BIG_BENG.expect.slice();
    bytes[5] = 2;
    vfs.patch(dir + '\\' + BIG_BENG.file, BIG_BENG.offset, BIG_BENG.expect, bytes);
  }
  // Always written: the file is kept between visits, so a flag switched off must put the 7 back.
  const ini = (dir + '\\SETTINGS\\GAME.INI').toUpperCase();
  if (vfs.readAll(ini)) setIni(vfs, ini, [['sublevel1_4', 'StandardSkill', flags.cavesStartSkill ? 3 : 7]]);
}

// ---- in the game ---------------------------------------------------------------------------------
const APP = 0x006B915C, ENGINE = 0x006C8DE0, GS_GAME = 3;
const VT = { player: 0x0064C430, props: 0x0064C5FC, trigger: 0x0064F078, controller: 0x0064F014, door: 0x0064EEB8 };
const DISPATCH = 0x00503FC0;                        // damage dispatch: thiscall(target, float damage, source, float* pos), ret 0xC
const HURT_CELL = [0x004AF180, 0x004AFFE6];         // the explosion's hurt cell: its two calls of the dispatch return to 0x4AF5F0 and 0x4AFF6B
const ENEMY_HIT = 0x004232A0;                     // CRcEnemy's damage receiver (vtable slot 7 of all twenty enemy classes): health (int, +0x178) -= ftol(damage)
const FIND = 0x004F4C30;                            // thiscall(sublevel, std::string* name) -> game object with that DaviName, or 0

export function installFixes(m, host) {
  const { u8, u32, i32, f32 } = m;
  const flags = fixFlags(host.options && host.options.fixes);
  const api = host.fixes = {
    flags,
    /** Switches a flag while the game runs (the page's settings). */
    set(name, on) {
      if (!(name in flags) || flags[name] === !!on) return;
      flags[name] = !!on;
      if (name === 'smoothSprites' && host.gdriver) host.gdriver.reupload();          // the renderer's textures were made the other way
    },
    stats: { doses: 0, kept: 0, doors: 0, fire: 0, mazeResets: 0, protectedPasses: 0, pageShown: 0 },
    remainders: new Map(),          // fractionalDamage: target object -> [what is still owed, virtual time of the last dose]
  };
  const chain = () => {
    const app = u32[APP >> 2], game = app ? u32[(app + 0x3A4) >> 2] : 0;
    if (!game) return null;
    const sub = u32[(game + 0x60) >> 2];
    let player = sub ? u32[(sub + 0x360) >> 2] : 0;
    if (player && u32[player >> 2] !== VT.player) player = 0;
    let props = player ? u32[(player + 0x1F0) >> 2] : 0;
    if (props && u32[props >> 2] !== VT.props) props = 0;
    return { app, game, sub, player, props, state: i32[(game + 0x98) >> 2], engine: u32[ENGINE >> 2] };
  };
  api.chain = chain;
  const cstr = (p) => { let s = ''; if (!p) return s; for (let k = 0; k < 96 && u8[p + k]; k++) s += String.fromCharCode(u8[p + k]); return s; };
  /** The DaviName of a game object (std::string at +0x6C, its characters at +0x70: 0x4F4C30). */
  const daviName = (o) => cstr(u32[(o + 0x70) >> 2]);
  api.daviName = daviName;
  /** The level file of the sublevel that is loaded, lower case without folder and extension ('lvl02a'), or ''. */
  const level = () => { const k = chain(); return k && k.sub ? levelOf(k.sub) : ''; };
  let levelSub = 0, levelName = '';
  const levelOf = (sub) => {
    if (sub === levelSub) return levelName;
    // the sublevel's level file: std::string at sub+0x3A4 (characters at +0x3A8), e.g. "lvl02a.bsp" (the Castle's is "Lvl01a.bsp")
    const s = cstr(u32[(sub + 0x3A8) >> 2]).toLowerCase(), q = /(lvl\d\d[a-z])\.bsp$/.exec(s);
    levelSub = sub; levelName = q ? q[1] : '';
    return levelName;
  };
  api.level = level;
  /** Game code called from between two passes or from inside a hook, with room below the stack pointer for arguments. */
  const scratch = (esp, fn) => { const mem = (esp - 0x1000) & ~15; m.esp = mem - 64; try { return fn(mem); } finally { m.esp = esp; } };
  api.scratch = scratch;
  /** The game object with that DaviName in the loaded sublevel, or 0 (the game's own lookup, 0x4F4C30). */
  const find = (esp, name) => {
    const k = chain();
    if (!k || !k.sub) return 0;
    return scratch(esp, (mem) => {
      const s = mem, t = mem + 32;
      for (let j = 0; j < name.length; j++) u8[t + j] = name.charCodeAt(j);
      u8[t + name.length] = 0;
      u32[s >> 2] = 0; u32[(s + 4) >> 2] = t; u32[(s + 8) >> 2] = name.length; u32[(s + 12) >> 2] = name.length;
      return m.call(FIND, [s], k.sub) >>> 0;
    });
  };
  api.find = find;

  // -- fractionalDamage ----------------------------------------------------------------------------
  // The hurt cell of an explosion (0x4AF180) hands every object in reach a dose per frame:
  // (1 - distance / radius) * dt[ms] * damage per second * 0.001, through the dispatch 0x503FC0.
  // An enemy takes it as an integer (ftol, e.g. 0x4232D3), so a dose under 1 is no damage at all:
  // at 60 frames per second every explosion of less than 60 per second. The dose that is passed on
  // here is the whole part of what the enemy is owed; the rest is kept for the next dose. A dose
  // that leaves nothing whole goes through as it came (the receiver's reaction to a hit of 0 is
  // the original's). Only for the enemy classes, known by their receiver 0x4232A0; RedCat's health
  // is a float, and crates, items and everything else get their doses as they come.
  const fbuf = new Float32Array(1), ubuf = new Uint32Array(fbuf.buffer);
  const guard = m.meta.hooks && m.meta.hooks['eh_' + DISPATCH.toString(16).padStart(8, '0')];
  if (guard) {
    const inner = m.thunks[guard.id];
    m.thunks[guard.id] = (esp, ecx, edx, eax) => {
      if (flags.fractionalDamage) {
        const ret = u32[esp >> 2];
        if (ret > HURT_CELL[0] && ret < HURT_CELL[1]) {
          const target = ecx >>> 0;
          if (target && u32[(u32[target >> 2] + 0x1C) >> 2] === ENEMY_HIT) {
            const dose = f32[(esp + 4) >> 2], now = host.nowMs(), R = api.remainders;
            if (dose > 0 && Number.isFinite(dose)) {
              const old = R.get(target);
              const owed = (old && now - old[1] < 1000 ? old[0] : 0) + dose, whole = Math.floor(owed);
              api.stats.doses++;
              R.set(target, [owed - whole, now]);
              if (whole >= 1 && whole !== dose) { fbuf[0] = whole; u32[(esp + 4) >> 2] = ubuf[0]; api.stats.kept++; }
              if (R.size > 64) for (const [o, v] of R) if (now - v[1] >= 1000) R.delete(o);
            }
          }
        }
      }
      return inner(esp, ecx, edx, eax);
    };
  } else host.log('fixes: no host guard on 0x503FC0 in this build, explosion damage stays the original\'s');

  // -- cutsceneProtect, flightSafe -----------------------------------------------------------------
  // The original's god mode is the byte props+0x14: ChangeHealth 0x439BF0 refuses every loss that is
  // not forced while it is not 0 (Kill 0x4DD1A0 and the script's KillPlayer are forced), and the
  // player's hit handler 0x433820 skips the hit reaction. The host holds bit 1 of that byte while
  // it protects RedCat and takes it away afterwards; bit 0 stays what the player's own switch
  // (Cheats -> Onsterfelijk, the original's cheat page) made it. The original's toggle 0x4DDEC0
  // writes (byte == 0), so a toggle while protected gives 0: seen here as "bit 0 flipped".
  // The original's cheat page reads and writes the byte too: see PAGE_GOD below.
  let wrote = -1, wroteAt = 0;
  // flightSafe: places RedCat could go back to. ground: where he last stood with collision on;
  // start: where he was when free flight came on. Per sublevel; kept in a save state.
  const places = api.places = { sub: 0, ground: null, start: null, flying: false };
  const posOf = (player) => [f32[(player + 0x198) >> 2], f32[(player + 0x19C) >> 2], f32[(player + 0x1A0) >> 2]];
  const protect = () => {
    const k = chain();
    if (!k || !k.props) { wrote = -1; return; }
    if (flags.flightSafe && k.engine && k.state === GS_GAME) {
      if (places.sub !== k.sub) { places.sub = k.sub; places.ground = null; places.start = null; places.flying = false; }
      const fly = u8[k.engine + 0x48] === 0;
      if (fly && !places.flying) places.start = posOf(k.player);
      places.flying = fly;
      // move state 0 is "walking, on a floor" (CRCPlayer::Move 0x435490); +0x104 is "under the player's control"
      if (!fly && i32[(k.player + 0x100) >> 2] === 0 && u8[k.player + 0x104] && f32[(k.props + 0x3C) >> 2] > 0) places.ground = posOf(k.player);
    }
    const at = k.props + 0x14;
    let b = u8[at];
    const cutscene = flags.cutsceneProtect && k.state === GS_GAME && i32[(k.player + 0x300) >> 2] !== 0;
    const flying = flags.flightSafe && !!k.engine && u8[k.engine + 0x48] === 0;
    const want = cutscene || flying;
    // A 0 or 1 in place of what the host wrote, after a pass in which the game was inside one of its own loops,
    // is the original's cheat page: on leaving the game's menu it calls SetGodMode(shown value) 0x4DDEB0 when
    // the entry was changed (0x52EC30, 0x532EFB). That value is the player's wish as it stands.
    const menu = !!host.mainLoop && host.mainLoop.frames >= 2;
    if (wrote >= 0 && wroteAt === at && (wrote & 2) && b === 0 && !menu) b = (wrote & 1) ^ 1;      // the original's toggle, while protected
    else if (b > 3) b = 1;
    const next = want ? (b | 2) : (b & 1);
    if (want) api.stats.protectedPasses++;
    if (next !== u8[at]) u8[at] = next;
    wrote = next; wroteAt = at;
  };
  // Leaving free flight. The original switches collision back on wherever RedCat is. The engine's box
  // sweep (geWorld_Collision 0x5B7D80, as the camera lift uses it) only reports going INTO something
  // solid: from inside solid, or from outside the level, it reports nothing, or an impact that is not
  // below where it began (run: docs/research/original-fixes.md). So "a free place" is tested as: the
  // player's own box swept straight down 4096 units meets a floor, at or below where it began. Inside
  // a floor, under the level and outside it that fails, and those are the places he would fall from
  // for ever. Inside a wall with a room below he drops into the room, as in the original.
  const COLLISION = 0x005B7D80, SET_POSITION = 0x004DBE20, DROP = 4096;
  const freeAt = (esp, k, p) => scratch(esp, (mem) => {
    const world = u32[(k.sub + 0x5C) >> 2];
    if (!world) return false;
    const a = mem, b = mem + 12, c = mem + 24, d = mem + 36, hit = mem + 48;
    for (let j = 0; j < 3; j++) { f32[(a >> 2) + j] = f32[(k.player + 0x1D4 + j * 4) >> 2]; f32[(b >> 2) + j] = f32[(k.player + 0x1E0 + j * 4) >> 2]; f32[(c >> 2) + j] = p[j]; f32[(d >> 2) + j] = p[j] - (j === 1 ? DROP : 0); }
    for (let j = 0; j < 16; j++) u32[(hit >> 2) + j] = 0;
    // contents 3 (solid, window) and flags 3 (world and its models): what the camera's hull stops at (walllift.js)
    if (!m.call(COLLISION, [world, a, b, c, d, 3, 3, 0xFFFFFFFF, 0, 0, hit])) return false;
    return f32[(hit + 0x10) >> 2] <= p[1] + 1;            // GE_Collision: impact at +0xC
  });
  /**
   * Called when free flight is to be switched off (cheats.js). 'free': RedCat is at a free place.
   * 'returned': he was not and has been put at one (a little higher, where he last stood, or where
   * the flight began). 'blocked': there is none; flight must stay on.
   */
  api.landing = (esp) => {
    const k = chain();
    if (!k || !k.player || !k.sub) return 'free';
    const here = posOf(k.player);
    if (freeAt(esp, k, here)) return 'free';
    const lifts = [1, 4, 16, 32, 64];
    const tries = lifts.map((r) => [here[0], here[1] + r, here[2]]);
    for (const p of [places.sub === k.sub ? places.ground : null, places.sub === k.sub ? places.start : null]) if (p) { tries.push(p); for (const r of lifts) tries.push([p[0], p[1] + r, p[2]]); }
    for (const p of tries) {
      if (!freeAt(esp, k, p)) continue;
      scratch(esp, (mem) => { for (let j = 0; j < 3; j++) f32[(mem >> 2) + j] = p[j]; m.call(SET_POSITION, [mem], k.player); });      // SetPosition: keeps the heading
      for (let j = 0; j < 3; j++) f32[(k.player + 0x1A4 + j * 4) >> 2] = p[j];
      return 'returned';
    }
    return 'blocked';
  };
  // The original's cheat page shows "wordt onsterfelijk" from its own copy of the byte, taken when the game's
  // menu opens: DAT_006ba66c = (GetGodMode() != 0) at 0x53202F, flipped by the entry (0x53483E, which also sets
  // "changed", 0x6BA674) and handed to SetGodMode when the menu closes. While the host holds bit 1 that copy
  // would say "on" for a player who never asked, and unticking it would be read as the toggle (immortal for
  // good). So at the second frame of a pass (the game is in a loop of its own) the copy gets the player's own
  // bit, unless the entry was already changed. The byte itself keeps the protection: nothing is unprotected.
  const PAGE_GOD = 0x006BA66C, PAGE_CHANGED = 0x006BA674;
  if (host.mainLoop) host.mainLoop.onNested.push(() => {
    if (wrote < 0 || !(wrote & 2)) return;
    const k = chain();
    if (!k || !k.props || k.props + 0x14 !== wroteAt || u8[wroteAt] !== wrote || u8[PAGE_CHANGED]) return;
    if (u32[PAGE_GOD >> 2] !== (wrote & 1)) { u32[PAGE_GOD >> 2] = wrote & 1; api.stats.pageShown++; }
  });
  api.freeAt = (esp, p) => { const k = chain(); return !!(k && k.player && k.sub && freeAt(esp, k, p)); };

  api.protectedNow = () => { const k = chain(); return !!(k && k.props && (u8[k.props + 0x14] & 2)); };

  // -- mazeReset -----------------------------------------------------------------------------------
  // The Graveyard's hedge maze (lvl02a) is five triggers with MaxTriggerTimes 1, four hedge
  // controllers that run once, and a hedge door. The level's OnPlayerRespawnCommand is empty and
  // the engine resets nothing when RedCat comes back from a death (run: counts still 1, hedges
  // still at the end of their motions), so a second walk through the maze opens nothing. When he
  // is alive again after a death and the maze was not finished, the ten objects get what a level
  // script could have given them: the game's own Reset (the script procedure, vtable slot 23 of
  // each model class: 0x4D5080 trigger, 0x4D3140 controller, 0x4CE200 door) and their authored
  // enabled state (SetEnabled 0x502350). A finished maze (the green lamp on, the exit sequence
  // started, the exit door not closed) is left alone, and so is everything else in the level.
  const MAZE = [['heg1_trigger_mc', VT.trigger, 1], ['heg3_trigger1_mc', VT.trigger, 1], ['heg3_trigger2_mc', VT.trigger, 0], ['heg2_closetrigger_mc', VT.trigger, 1], ['heg5_trigger_mc', VT.trigger, 1],
    ['heg1_mc', VT.controller, 0], ['heg3_mc', VT.controller, 0], ['heg4_mc', VT.controller, 0], ['heg5_mc', VT.controller, 0], ['heg2_mc', VT.door, 1]];
  const SET_ENABLED = 0x00502350;
  let deadIn = 0;                   // the sublevel RedCat was seen without health in
  const mazeDone = (esp) => {
    const lamp = find(esp, 'mazedeur1_groen'), seq = find(esp, 'mazedoortrigger'), exit = find(esp, 'mazedeur1_dm');
    if (!lamp || !seq || !exit || u32[seq >> 2] !== VT.controller || u32[exit >> 2] !== VT.door) return true;      // not the level as shipped: hands off
    return u8[lamp + 0x7C] !== 0 || u8[seq + 0x7C] !== 0 || f32[(seq + 0x100) >> 2] > 0 || i32[(exit + 0x16C) >> 2] !== 1;
  };
  api.mazeDone = mazeDone;
  const maze = (esp) => {
    const k = chain();
    if (!k || !k.props || k.state !== GS_GAME) return;
    if (!(f32[(k.props + 0x3C) >> 2] > 0)) { deadIn = k.sub; return; }
    if (!deadIn) return;
    const same = deadIn === k.sub;
    deadIn = 0;
    if (!same || !flags.mazeReset || levelOf(k.sub) !== 'lvl02a' || mazeDone(esp)) return;
    const objects = MAZE.map(([name, vt, on]) => [find(esp, name), vt, on]);
    if (objects.some(([o, vt]) => !o || u32[o >> 2] !== vt)) return;
    for (const [o, vt, on] of objects) scratch(esp, () => { m.call(u32[(vt + 23 * 4) >> 2], [], o); m.call(SET_ENABLED, [on], o); });
    api.stats.mazeResets++;
  };

  if (host.mainLoop) host.mainLoop.beforePass.push((esp) => { protect(); maze(esp); });

  // -- doorSound -----------------------------------------------------------------------------------
  // CAdamDoorModel picks its sound by DoorType (this+0x18C): 1 OpenDoorNormal.wav, 2 OpenDoorKey.wav,
  // 3 OpenDoorSecret.wav, 4 empty.wav (0x4CC140, used when it opens and when it closes). For the
  // door panels listed here (the JavaScript port's list, source/door-audio.js there) type 4 is
  // shown as 1, or 3 for a secret door, for the length of that one call. Everything else of the
  // door, and every other DoorType 4 mechanism (lifts, crates, hedges, the Forest's unseen
  // barriers), stays as it is.
  const PANELS = {
    lvl01a: /^(?:(?:secret)?door|fence$)/i,
    lvl02a: /^(?:mazedeur1_dm$|kerk_[12]_(?:links|rechts)$|froggerdeur_(?:links|rechts)$)/i,
    lvl03a: /^door_(?:left|right)_(?:walab01|airlab01)$/i,
  };
  // the body as a function (esp, eax, ecx, edx) -> eax (m.callBody: no result array per call)
  const bodyOf = (name) => { const h = m.meta.hooks && m.meta.hooks[name]; if (!h) return [null, null]; const k = m.meta.eh.guardBodies[String(h.addr)]; return [h, (esp, eax, ecx, edx) => m.callBody(k, esp, eax, ecx, edx)]; };
  const [doorHook, doorBody] = bodyOf('doorsound');
  if (doorHook) {
    m.bindRaw('hook!doorsound', doorHook.pop, (esp, ecx, edx, eax) => {
      const door = ecx >>> 0;
      if (flags.doorSound && i32[(door + 0x18C) >> 2] === 4) {
        const sub = u32[(door + 0x18) >> 2], rx = PANELS[sub ? levelOf(sub) : ''], name = rx ? daviName(door) : '';
        // A door whose own command for this movement switches on a sound of the level keeps that sound alone
        // (the Castle's secret doors: DoorBeforeOpenCommand "snd_OpenDoorSecret.enable"). The entity's commands
        // are plain strings: before opening at entity+0x40, before closing at +0x48 (0x4CC580, states 3 and 7).
        const entity = u32[(door + 0x184) >> 2], state = i32[(door + 0x16C) >> 2];
        const command = entity ? cstr(u32[(entity + (state === 7 ? 0x48 : 0x40)) >> 2]) : '';
        if (rx && rx.test(name) && !/\bsnd_\w*\.enable/i.test(command)) {
          i32[(door + 0x18C) >> 2] = /secret/i.test(name) ? 3 : 1;
          api.stats.doors++;
          try { return doorBody(esp, eax, ecx, edx); } finally { i32[(door + 0x18C) >> 2] = 4; }
        }
      }
      return doorBody(esp, eax, ecx, edx);
    });
    m.bound.add('hook!doorsound');
  }

  // -- towerFire -----------------------------------------------------------------------------------
  // 0x54E750 turns a 3D sound's place into a gain factor, a rate factor and a pan: *gain *=
  // LogToLin(volume by distance), where the volume is 1 within the level's MinDistanceMeters (50 m,
  // 1600 units), 1 - ln(d / min) / ln(150) beyond, and 0 when the sound's leaf is not visible from
  // the camera (0x5C7BA0, 0x5C7D20; LogToLin 0x54D140 is 2^((v - 1) * 10)). The voice update
  // 0x553170 calls it every frame for each 3D voice (it returns to 0x553296) with the position
  // inside the voice (voice+0x3C), which is how the voice is known here: its definition is at
  // voice+0x4C, the file name of that at +0x24. In the Tower nine of the ten fire loops
  // (LV4snd16.wav) are within those 50 m at once, all at full gain. With the flag:
  //   gain * 0.65 * (1 - smoothstep(10.53 m, 63.18 m, distance to the camera))
  // (the JavaScript port's numbers). The first frame of such a loop, before its first update,
  // still has the original's level.
  const RET_UPDATE = 0x00553296, UNITS = 32;
  const defFile = (def) => { const f = def ? cstr(u32[(def + 0x24) >> 2]).toLowerCase() : ''; return f.slice(f.lastIndexOf('\\') + 1); };
  api.voiceFile = (voice) => defFile(u32[(voice + 0x4C) >> 2]);
  /** defFile(def) === name (lower case, ASCII), read from memory without making a string: asked for every 3D voice every frame. */
  const defFileIs = (def, name) => {
    const p = def ? u32[(def + 0x24) >> 2] : 0;
    if (!p) return name === '';
    let n = 0, from = 0;
    for (; n < 96 && u8[p + n]; n++) if (u8[p + n] === 0x5C) from = n + 1;
    if (n - from !== name.length) return false;
    for (let k = 0; k < name.length; k++) { const c = u8[p + from + k]; if ((c >= 0x41 && c <= 0x5A ? c + 32 : c) !== name.charCodeAt(k)) return false; }
    return true;
  };
  const [sndHook, sndBody] = bodyOf('sound3d');
  if (sndHook) {
    m.bindRaw('hook!sound3d', sndHook.pop, (esp, ecx, edx, eax) => {
      const r = sndBody(esp, eax, ecx, edx);
      if (!flags.towerFire || !(r & 0xFF) || u32[esp >> 2] !== RET_UPDATE) return r;      // (r 0: no camera or no world, the body changed nothing)
      const pPos = u32[(esp + 4) >> 2], pGain = u32[(esp + 8) >> 2];
      if (!defFileIs(u32[(pPos - 0x3C + 0x4C) >> 2], 'lv4snd16.wav')) return r;
      const k = chain(), camera = k && k.engine ? u32[(k.engine + 0xE0) >> 2] : 0;
      if (!camera) return r;
      const M = camera + 0x1E0 + 36, d = Math.hypot(f32[pPos >> 2] - f32[M >> 2], f32[(pPos + 4) >> 2] - f32[(M + 4) >> 2], f32[(pPos + 8) >> 2] - f32[(M + 8) >> 2]) / UNITS;
      const t = Math.max(0, Math.min(1, (d - 10.53) / (63.18 - 10.53)));
      f32[pGain >> 2] = f32[pGain >> 2] * 0.65 * (1 - t * t * (3 - 2 * t));
      api.stats.fire++;
      return r;
    });
    m.bound.add('hook!sound3d');
  }

  // What the host keeps in JavaScript for these fixes: the damage still owed to enemies.
  if (host.snap) host.snap.add('fixes', () => ({ owed: [...api.remainders].map(([o, v]) => [o, v[0], v[1]]), places: { ...places } }), (s) => {
    api.remainders.clear(); wrote = -1; levelSub = 0;
    Object.assign(places, { sub: 0, ground: null, start: null, flying: false });
    if (s && Array.isArray(s.owed)) for (const [o, r, t] of s.owed) api.remainders.set(o, [r, t]);
    if (s && s.places) Object.assign(places, s.places);
  });
}
