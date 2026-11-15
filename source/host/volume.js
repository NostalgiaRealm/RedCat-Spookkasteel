// The player's two volumes, Muziek and Geluidseffecten, changed while a game runs.
//
// The original reads them once, when the game starts: FUN_00527C20 reads [Sound] MusicVolume and
// SoundVolume of the player's file (0..100, 80 when missing) and calls, with value * 0.01 (the
// float at 0x64C574) and the sound system of the engine object (engine global 0x6C8DE0, +0xFC):
//   0x54E5F0  CAdamSoundSystem: the music volume   (0x528D45)
//   0x54E490  CAdamSoundSystem: the sound volume   (0x528F67)
// Both are thiscall(sound system, float) and do nothing when the value is the one in use. The
// sliders are in the original's main menu only, so in the original a new value needs a new game.
// Here (as the JavaScript port had it since its 1.0.1):
//   - the settings over a running game have the two sliders; a value is handed to the same two
//     setters between two passes (`request`), and written to the player's file on OK (`keep`);
//   - a save state brings the volumes of the day it was made; when the menu's are others (kernel32.js
//     put them into the file and set host.volumesChanged) the setters are called with them
//     before the next pass.
// The game keeps the INI files it has read (CDaviIniFileSystem, 0x6CA01C) and would write its
// old copy back; 0x5A4480 lets go of them, as move.js does for the keys (see there).
// Nothing here is called while the volumes are what they were: no call, no memory changed.
import { readIni, latin1Decode, setIniValues } from './ini.js';

const ENGINE = 0x006C8DE0, SET_MUSIC = 0x0054E5F0, SET_SOUND = 0x0054E490, HUNDREDTH = 0x0064C574, INI_DROP = 0x005A4480;

export function installVolume(m, host, vfs, gameDir) {
  const { u32, f32 } = m;
  const fbuf = new Float32Array(1), ubuf = new Uint32Array(fbuf.buffer);
  const asked = { music: null, effects: null, keep: false };
  const file = () => `${gameDir}\\SETTINGS\\PLAYER${(host.options.launch || {}).player || 1}.INI`.toUpperCase();
  const stored = () => {
    const b = vfs.readAll(file());
    if (!b) return null;
    const t = latin1Decode(b), read = (key) => { const v = parseFloat(readIni(t, 'Sound', key)); return Number.isFinite(v) ? Math.max(0, Math.min(100, v)) : 80; };      // 80: the game's own default (0x527C20)
    return { music: read('MusicVolume'), effects: read('SoundVolume') };
  };
  const api = host.volume = {
    stats: { calls: 0, kept: 0 },
    /** 0..100 each, null: leave as it is. Applied before the next pass. */
    request(music, effects) { if (music !== null && music !== undefined) asked.music = Math.max(0, Math.min(100, Number(music) || 0)); if (effects !== null && effects !== undefined) asked.effects = Math.max(0, Math.min(100, Number(effects) || 0)); },
    /** The values last asked for become the player's: written to his file before the next pass. */
    keep() { asked.keep = true; },
    /** The two volumes of the player's file as the game thread has it. */
    stored,
    last: { music: null, effects: null },      // what was handed to the game last (not part of a state: the game's own memory holds the volumes)
  };
  if (!host.mainLoop) return;
  host.mainLoop.beforePass.push((esp) => {
    if (host.volumesChanged) { host.volumesChanged = false; const v = stored(); if (v) { if (asked.music === null) asked.music = v.music; if (asked.effects === null) asked.effects = v.effects; } api.drop = true; }
    if (asked.music === null && asked.effects === null && !asked.keep && !api.drop) return;
    const engine = u32[ENGINE >> 2], sound = engine ? u32[(engine + 0xFC) >> 2] : 0;
    if (!sound) return;                     // no sound system yet: the request waits
    const mem = (esp - 0x1000) & ~15;
    m.esp = mem - 64;
    try {
      const set = (fn, v) => { fbuf[0] = v * f32[HUNDREDTH >> 2]; m.call(fn, [ubuf[0]], sound); api.stats.calls++; };
      if (asked.music !== null) { set(SET_MUSIC, asked.music); api.last.music = asked.music; }
      if (asked.effects !== null) { set(SET_SOUND, asked.effects); api.last.effects = asked.effects; }
      if (asked.keep) {
        const entries = [];
        if (api.last.music !== null) entries.push(['Sound', 'MusicVolume', Math.round(api.last.music)]);        // integers, as the original menu writes them (RcHcMenu.dat 0x566768)
        if (api.last.effects !== null) entries.push(['Sound', 'SoundVolume', Math.round(api.last.effects)]);
        if (entries.length && vfs.readAll(file())) { setIniValues(vfs, file(), entries); api.stats.kept++; api.drop = true; }
      }
      if (api.drop) { api.drop = false; m.call(INI_DROP, []); }
    } finally { m.esp = esp; asked.music = null; asked.effects = null; asked.keep = false; }
  });
}
