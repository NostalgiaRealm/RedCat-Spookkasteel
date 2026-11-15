// The adventure's part of a player's file, for the menu. The original menu keeps a player's
// adventure itself and takes it from Settings\Player<N>.ini only after an adventure
// (RcHcMenu.dat 0x567694: everything is read under "[General] GameType = 0"); what a Snelspel
// leaves in that file does not count. This port has no second copy: the menu notes the
// adventure's sections before a Snelspel and puts them back when it is over.
// It also reads and writes the player's two volumes, which the players API does not show.
// Reads go straight to the stored file (../web/files.js), writes through the players API.
import { gameFiles, GAME_DIR } from '../web/files.js';

const path = (n) => `${GAME_DIR}\\SETTINGS\\PLAYER${n}.INI`;
const ADVENTURE = /^(Level1|SubLevel1_[1-5]|Player)$/i;

/** [[section, key, value], ...] of the adventure's sections ([Level1], [SubLevel1_1..5], [Player]). */
export function adventureKeys(n) {
  const text = gameFiles.readText(path(n));
  const out = [];
  let section = null;
  for (const line of (text || '').split(/\r?\n/)) {
    const m = /^\s*\[(.*)\]\s*$/.exec(line);
    if (m) { section = ADVENTURE.test(m[1]) ? m[1] : null; continue; }
    const eq = line.indexOf('=');
    if (section && eq > 0 && !/^\s*;/.test(line)) out.push([section, line.slice(0, eq).trim(), line.slice(eq + 1).trim()]);
  }
  return out;
}
/** Puts back what adventureKeys() returned earlier; keys that came since are removed. */
export function restoreAdventureKeys(players, n, before) {
  if (!players.exists(n) || !Array.isArray(before)) return;
  const id = (s, k) => (s + '\n' + k).toLowerCase();
  const now = new Map(adventureKeys(n).map(([s, k, v]) => [id(s, k), [s, k, v]]));
  const entries = [];
  for (const [s, k, v] of before) { const cur = now.get(id(s, k)); if (!cur || cur[2] !== v) entries.push([s, k, v]); now.delete(id(s, k)); }
  for (const [s, k] of now.values()) entries.push([s, k, null]);
  if (entries.length) players.set(n, entries);
}
/**
 * The player's two volumes, 0..100, where the game reads them when it starts:
 * [Sound] MusicVolume and SoundVolume (RcHcGame.dat 0x527C20; a missing key is 80 there). The
 * original menu writes them as integers when it starts a game (RcHcMenu.dat 0x566768).
 */
export function soundVolumes(n) {
  const read = (key) => { const v = parseFloat(gameFiles.iniGet(path(n), 'Sound', key)); return Number.isFinite(v) ? Math.max(0, Math.min(100, Math.round(v))) : 80; };
  return { music: read('MusicVolume'), effects: read('SoundVolume') };
}
export function setSoundVolumes(players, n, { music, effects }) {
  players.set(n, [['Sound', 'MusicVolume', Math.round(music)], ['Sound', 'SoundVolume', Math.round(effects)]]);
}
/** The two keys as they stand in the file, for the checks in tools/. */
export const rawSoundKeys = (n) => ({ MusicVolume: gameFiles.iniGet(path(n), 'Sound', 'MusicVolume'), SoundVolume: gameFiles.iniGet(path(n), 'Sound', 'SoundVolume') });
