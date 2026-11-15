// Editing the game's INI files as text. The game parses them itself and writes single values
// through WritePrivateProfileString, so files stay plain Windows INI text (CR LF, Latin-1).

const isSection = (l) => /^\s*\[.*\]\s*$/.test(l);
const sectionName = (l) => l.trim().slice(1, -1);

/** Returns the text with [section] key=value set. value null removes the key; key null removes the section. */
export function editIni(text, section, key, value) {
  const lines = text ? text.split(/\r?\n/) : [];
  if (lines.length && lines[lines.length - 1] === '') lines.pop();
  const s = lines.findIndex((l) => isSection(l) && sectionName(l).toLowerCase() === section.toLowerCase());
  if (s < 0) {
    if (key !== null && value !== null) lines.push('[' + section + ']', key + '=' + value);
  } else {
    let e = s + 1;
    while (e < lines.length && !isSection(lines[e])) e++;
    if (key === null) lines.splice(s, e - s);
    else {
      const k = lines.findIndex((l, i) => i > s && i < e && l.includes('=') && l.split('=')[0].trim().toLowerCase() === key.toLowerCase());
      if (value === null) { if (k >= 0) lines.splice(k, 1); }
      else if (k >= 0) lines[k] = key + '=' + value;
      else {
        let at = e;
        while (at > s + 1 && lines[at - 1].trim() === '') at--;
        lines.splice(at, 0, key + '=' + value);
      }
    }
  }
  return lines.join('\r\n') + '\r\n';
}

/** Reads [section] key from INI text, or undefined. */
export function readIni(text, section, key) {
  let inside = false;
  for (const l of text.split(/\r?\n/)) {
    if (isSection(l)) { inside = sectionName(l).toLowerCase() === section.toLowerCase(); continue; }
    if (inside && l.includes('=') && l.split('=')[0].trim().toLowerCase() === key.toLowerCase()) return l.slice(l.indexOf('=') + 1).trim();
  }
  return undefined;
}

export const latin1Decode = (bytes) => { let s = ''; for (let k = 0; k < bytes.length; k++) s += String.fromCharCode(bytes[k]); return s; };
export const latin1Encode = (text) => { const b = new Uint8Array(text.length); for (let k = 0; k < text.length; k++) b[k] = text.charCodeAt(k) & 0xFF; return b; };

/** Sets values in an INI file of the virtual file system. entries: [[section, key, value], ...] */
export function setIniValues(vfs, path, entries) {
  const old = vfs.readAll(path);
  let text = old ? latin1Decode(old) : '';
  for (const [sec, key, val] of entries) text = editIni(text, sec, key, val === null ? null : String(val));
  const bytes = latin1Encode(text);
  vfs.add(path, bytes, { persist: true });
  if (vfs.onPersist) vfs.onPersist(path, bytes);
}

/**
 * The cameras' FieldOfView (AdamWin.Ini) for a game screen of W x H. It is the engine's own measure,
 * not an angle: geCamera_SetAttributes 0x5C9070 sets XScale = width / Fov and YScale = height / Fov
 * and keeps the larger of the two as Scale (camera + 0x24, the compare at 0x5C9139; read back in a run: see docs/intentional-differences.md). The
 * shipped 1.36 at 640 x 480 is a tangent of 0.51 for half the height: 54 degrees from top to bottom.
 * The port keeps that angle from top to bottom at every shape, as the JavaScript port did (its
 * camera had a fixed vertical angle and the window's aspect: main.js resize()):
 *   - a screen wider than it is high: Scale = W / Fov, so Fov = W * tan / (H / 2), which grows with
 *     the width: the sides are added;
 *   - a screen higher than it is wide: Scale = H / Fov, so Fov = 2 * tan whatever the height: the
 *     sides are cut off.
 * degrees, when set, is the wanted angle from top to bottom. (For any value but 1.36 the game logs
 * that the setting is ignored; it is not.)
 */
export function fieldOfView(W, H, degrees) {
  const tanHalf = degrees > 0 ? Math.tan(Math.min(100, Math.max(30, degrees)) * Math.PI / 360) : 1.36 * 240 / 640;
  if (H === 480 && W >= H) return W * tanHalf / 240;          // the arithmetic of the wide modes as it always was
  return Math.max(W, H) * tanHalf / (H / 2);
}

/**
 * Writes what the original menu and launcher leave for the game before starting it with "-game"
 * (docs/research/startup-and-loop.md, 2.6): which player, which world, and the switches that keep
 * the start-up dialogs away.
 *   launch: { player: 1..10, world: 1..5, difficulty: 0..2, adventure: bool, screenWidth, screenHeight: the game's screen (640 x 480 = original) }
 */
export function applyLaunch(vfs, dir, launch = {}) {
  const player = launch.player || 1, world = launch.world || 1;
  const p = (name) => (dir + '\\SETTINGS\\' + name).toUpperCase();
  setIniValues(vfs, p('GAME.INI'), [['Run', 'PlayerNumber', player], ['Run', 'StartLevelNumber', 1], ['Run', 'StartSubLevelNumber', world], ['Run', 'StartSubSubLevelNumber', 1]]);
  const playerFile = p(`PLAYER${player}.INI`);
  if (!vfs.readAll(playerFile)) {
    const def = vfs.readAll(p('PLAYERDEF.INI'));
    if (def) vfs.add(playerFile, def, { persist: true });
  }
  const general = [['General', 'GameType', launch.adventure === false ? 1 : 0]];
  if (launch.difficulty !== undefined) general.push(['General', 'DifficultyLevel', launch.difficulty]);
  // [Display] Mode is the original menu's Beeldkwaliteit (RcHcMenu.dat 0x566768 writes it). The game reads
  // it once at its start (0x4BE08C): 0 or 1 sets IsLowEndPC, and then the game itself leaves out the
  // fairy's stars, ribbons and light, and objects get a range of 1000 units instead of 1600
  // (docs/research/effects-low-end.md). The original's menu gives a new player 2 (RcHcMenu.dat 0x56B850,
  // static.ini [DEFAULTSETTINGS] Resolution=2) and writes it over the template's value; PlayerDef.ini, from
  // which this port makes a new player's file, has Mode=0. The menu of this port has no such choice (its
  // Beeldkwaliteit is the drawing size), so every game starts with the original's default: 2.
  general.push(['Display', 'Mode', 2]);
  setIniValues(vfs, playerFile, general);
  setIniValues(vfs, p('COMPUTER.INI'), [['Display', 'AutoSelectDriver', 1], ['Display', 'ForceSelectWindowedMode', 0], ['Install', 'Minimal', 0], ['Sound', 'Allowed', 1]]);
  const fov = fieldOfView(launch.screenWidth || 640, launch.screenHeight || 480, launch.fov);
  setIniValues(vfs, (dir + '\\ADAMWIN.INI').toUpperCase(), [['Camera-PlayerCamera', 'FieldOfView', fov.toFixed(6)], ['Camera-LevelCamera', 'FieldOfView', fov.toFixed(6)]]);
  // crash guard of the original: a run that was cut off would disable the driver or the sound next time
  const guard = [];
  for (const sec of ['D3DDriver', 'SoftwareDriver', 'Sound']) guard.push([sec, 'Allowed', 1], [sec, 'ResultLastRun', 2]);
  guard.push(['Status', 'LastSectionEntered', '']);
  setIniValues(vfs, p('STARTUP.INI'), guard);
}
