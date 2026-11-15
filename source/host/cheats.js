// Optional cheats, done with what the original game already has (docs/research/cheats-and-player.md):
//   supplies   potions to 100, mirror parts to their maximum, 9000 points: the game's own
//              AddMagicPotion 0x439E60, AddMirrorPart 0x439EA0 and AddScore 0x439D20 (2.4)
//   flight     the original's no-clip mode (debug key F6, cheat menu "vlieg door muren"):
//              the byte engine+0x48, 0 = no collision and no gravity; Home / End fly up and down (4.4)
//              Switching it off first asks fixes.js for a free place (flag flightSafe): RedCat may be
//              moved to one, or flight stays on when there is none. While flying he takes no damage:
//              fixes.js holds bit 1 of the god-mode byte for that.
//   god        the original's god mode (debug key F9, cheat menu "wordt onsterfelijk"): props+0x14 (3.5);
//              bit 0 is the player's switch, bit 1 the host's protection (fixes.js)
//   menu       the original's hidden cheat page in the in-game menu (next level, level select,
//              fly, immortal): game+0xAC, which the original sets with DebugSecretCommands (3.4)
// Requests are applied between two passes of the main loop, never while game code runs. All of
// the state lives in game memory, so it is part of a save state.
export const CHEAT = { SUPPLIES: 1, FLIGHT: 2, GOD: 3, MENU: 4 };
const APP = 0x006B915C, ENGINE = 0x006C8DE0, PROPS_VTABLE = 0x0064C5FC, GS_GAME = 3;
const F = { addPotion: 0x00439E60, addMirror: 0x00439EA0, addScore: 0x00439D20 };

export function installCheats(m, host) {
  const { u8, u32, i32 } = m;
  const chain = () => {
    const app = u32[APP >> 2];
    const game = app ? u32[(app + 0x3A4) >> 2] : 0;
    if (!game) return null;
    const sub = u32[(game + 0x60) >> 2];
    const player = sub ? u32[(sub + 0x360) >> 2] : 0;
    let props = player ? u32[(player + 0x1F0) >> 2] : 0;
    if (props && u32[props >> 2] !== PROPS_VTABLE) props = 0;
    return { game, state: i32[(game + 0x98) >> 2], props, engine: u32[ENGINE >> 2] };
  };
  const queue = [];
  const c = host.cheats = {
    onApplied: null, exit: '',
    /** id from CHEAT; value 1/0 for the switches. Applied before the next pass. */
    request(id, value) { queue.push([id, value]); },
    /** What the page shows: null while no game object exists. */
    state() {
      const k = chain();
      if (!k) return null;
      return {
        world: !!k.props && k.state === GS_GAME,
        flight: !!k.engine && u8[k.engine + 0x48] === 0,
        god: !!k.props && (u8[k.props + 0x14] & 1) !== 0,
        exit: c.exit,          // after a request to stop flying: '' done where he was, 'returned' moved to a free place, 'blocked' still flying
        menu: u8[k.game + 0xAC] !== 0,
        potions: k.props ? i32[(k.props + 0x58) >> 2] : 0, mirror: k.props ? i32[(k.props + 0x60) >> 2] : 0, score: k.props ? i32[(k.props + 0x48) >> 2] : 0,
      };
    },
  };
  if (!host.mainLoop) return;
  host.mainLoop.beforePass.push((esp) => {
    if (!queue.length) return;
    const k = chain();
    if (!k) return;
    for (let n = 0; n < queue.length; n++) {
      const [id, value] = queue[n];
      if (id === CHEAT.FLIGHT) {
        if (!k.engine) continue;
        c.exit = '';
        if (!value && u8[k.engine + 0x48] === 0 && k.props && k.state === GS_GAME && host.fixes && host.fixes.flags.flightSafe) c.exit = host.fixes.landing(esp);
        if (c.exit === 'free') c.exit = '';
        if (c.exit !== 'blocked') u8[k.engine + 0x48] = value ? 0 : 1;
      }
      else if (id === CHEAT.MENU) u8[k.game + 0xAC] = value ? 1 : 0;
      else if (id === CHEAT.GOD) { if (!k.props) continue; u8[k.props + 0x14] = (u8[k.props + 0x14] & 2) | (value ? 1 : 0); }
      else if (id === CHEAT.SUPPLIES) {
        if (!k.props || k.state !== GS_GAME) continue;          // wait until a world is being played
        m.call(F.addPotion, [100], k.props);
        m.call(F.addMirror, [i32[(k.props + 0x64) >> 2]], k.props);
        m.call(F.addScore, [9000], k.props);
      }
      queue.splice(n--, 1);
    }
    if (c.onApplied) c.onApplied(c.state());
    c.exit = '';
  });
}
