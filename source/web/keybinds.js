// The game's key bindings: Settings\Player<N>.ini [KeyBinds], one line per input action,
//   <Action>=<Key>[+<Key>][,<Key>[+<Key>]…]        e.g. MoveLeft=Alt+Left,A   Jump=Space,RightMouse
// with the key names of Settings\Game.ini [InputKeys]. The game reads the section when a world is
// set up (0x4D5E74 -> 0x544B80 -> 0x540F80) and its own menu page Spelbesturing reads and writes
// it. The original menu program had a form for the same lines (TfrmKeyConfig, menu.ini strings 6,
// 26, 27, 28); this module is what this port's form (source/menu/key-menu.js), the controller and
// the touch controls need of them. Pure functions: no browser, so the checks run it under Node.
//
// Why the player's file and not a table of the page in front of the game: there is then one list
// of keys. What the form in the main menu shows is what the game's own Spelbesturing page shows,
// and a key changed in either is changed in both. Controller and touch buttons press the keys the
// file names for an action, so they keep working whatever the player binds.
//
// Run in the Node runner (2026-11-14): MoveForward=Up,W,Shift+T walks with Up, with W and with
// Shift+T, not with T alone. The action Walk does nothing in the game (source/host/move.js); the
// keys bound to it are read by the page, which asks the host to walk slowly while one is held.

// Game.ini [InputKeys]: name -> Windows virtual key. (There is no U in the original's list.)
export const GAME_KEYS = {
  LeftMouse: 1, RightMouse: 2, MiddleMouse: 4, Backspace: 8, Tab: 9, Enter: 13, Shift: 16, Control: 17, Alt: 18, Pause: 19, CapsLock: 20,
  Escape: 27, Space: 32, PageUp: 33, PageDown: 34, End: 35, Home: 36, Left: 37, Up: 38, Right: 39, Down: 40, PrintScreen: 44, Insert: 45, Delete: 46,
  NumLock: 144, ScrollLock: 145, LeftShift: 160, RightShift: 161, LeftControl: 162, RightControl: 163, LeftAlt: 164, RightAlt: 165,
  ';': 186, '/': 191, '`': 192, '[': 219, '\\': 220, ']': 221, Quote: 222, Plus: 187, Comma: 188, Minus: 189, Period: 190,
};
for (let k = 0; k < 10; k++) GAME_KEYS[String(k)] = 48 + k;
for (const c of 'ABCDEFGHIJKLMNOPQRSTVWXYZ') GAME_KEYS[c] = c.charCodeAt(0);
for (let k = 1; k <= 12; k++) GAME_KEYS['F' + k] = 111 + k;
const LOWER = new Map(Object.keys(GAME_KEYS).map((n) => [n.toLowerCase(), n]));
/** The game's spelling of a key name, or '' when it has no such key. */
export const keyName = (name) => LOWER.get(String(name).trim().toLowerCase()) || '';
const MOUSE = new Set(['LeftMouse', 'RightMouse', 'MiddleMouse']);

// KeyboardEvent.code -> the game's key name, for the keys a player may choose in the form. Not offered: the
// function keys (the game's debug keys, and F5, F9, F10 of this port), Escape, and keys the game has no name for.
const CODE_NAMES = {
  ArrowUp: 'Up', ArrowDown: 'Down', ArrowLeft: 'Left', ArrowRight: 'Right', Space: 'Space', Enter: 'Enter', NumpadEnter: 'Enter', Tab: 'Tab', Backspace: 'Backspace',
  ShiftLeft: 'Shift', ShiftRight: 'Shift', ControlLeft: 'Control', ControlRight: 'Control', AltLeft: 'Alt', AltRight: 'Alt',
  PageUp: 'PageUp', PageDown: 'PageDown', Home: 'Home', End: 'End', Insert: 'Insert', Delete: 'Delete',
  Semicolon: ';', Slash: '/', BracketLeft: '[', BracketRight: ']', Backslash: '\\', Quote: 'Quote', Equal: 'Plus', Comma: 'Comma', Minus: 'Minus', Period: 'Period',
  // the JavaScript port's own names for the three modifiers (its control-bindings.js)
  Shift: 'Shift', Control: 'Control', Alt: 'Alt',
};
for (const c of 'ABCDEFGHIJKLMNOPQRSTVWXYZ') CODE_NAMES['Key' + c] = c;
for (let k = 0; k < 10; k++) CODE_NAMES['Digit' + k] = String(k);
/** The game's key name for a KeyboardEvent.code, or '' when the game cannot bind that key. */
export const nameOfCode = (code) => CODE_NAMES[code] || '';
/** The KeyboardEvent.code values that are a game key (both Shift keys for Shift). */
export const codesOfName = (name) => Object.keys(CODE_NAMES).filter((c) => CODE_NAMES[c] === name && c !== name);

// The form's actions, in the JavaScript port's order and wording (its control-bindings.js). `bind` is the game's
// action; `camera` is this port's own and is kept in the port's settings. optional: may be left without a key.
// Not carried over: "Gebruiken / overslaan", which has nothing to do here (doors open on contact, and the original
// has no key that skips a scene).
export const ACTIONS = [
  { id: 'forward', label: 'Vooruit', bind: 'MoveForward' },
  { id: 'backward', label: 'Achteruit', bind: 'MoveBack' },
  { id: 'turnLeft', label: 'Links draaien', bind: 'TurnLeft' },
  { id: 'turnRight', label: 'Rechts draaien', bind: 'TurnRight' },
  { id: 'left', label: 'Links opzij', bind: 'MoveLeft' },
  { id: 'right', label: 'Rechts opzij', bind: 'MoveRight' },
  { id: 'attack', label: 'Schieten', bind: 'Fire' },
  { id: 'jump', label: 'Springen', bind: 'Jump' },
  { id: 'walk', label: 'Rustig lopen', bind: 'Walk' },
  { id: 'camera', label: 'Camera wisselen', bind: null },
  { id: 'cameraNear', label: 'Camera dichtbij', bind: 'Weapon1', optional: true },
  { id: 'cameraFar', label: 'Camera verder weg', bind: 'Weapon2', optional: true },
  { id: 'cameraHigh', label: 'Camera hoog', bind: 'Weapon3', optional: true },
];
const BY_ID = new Map(ACTIONS.map((a) => [a.id, a]));
// What a new player starts with here: the original's own keys (PlayerDef.ini) and next to them the keys the
// JavaScript port offered (W, S, A, D; Shift to walk slowly, where the original has Alt, which is also the key
// its sidesteps are made with).
export const DEFAULTS = {
  forward: ['Up', 'W'], backward: ['Down', 'S'], turnLeft: ['Left'], turnRight: ['Right'], left: ['Alt+Left', 'A'], right: ['Alt+Right', 'D'],
  attack: ['Control'], jump: ['Space', 'RightMouse'], walk: ['Shift'], camera: ['V'], cameraNear: ['1'], cameraFar: ['2'], cameraHigh: ['3'],
};
// The JavaScript port's defaults (its DEFAULT_CONTROL_BINDINGS), to tell a set somebody changed from one nobody touched.
const OLD_DEFAULTS = {
  forward: ['W', 'Up'], backward: ['S', 'Down'], turnLeft: ['Left'], turnRight: ['Right'], left: ['A'], right: ['D'], attack: ['Control'], jump: ['Space'],
  walk: ['Shift'], use: ['E'], camera: ['V'], cameraNear: ['1'], cameraFar: ['2'], cameraHigh: ['3'],
};
// Keys the page keeps for itself or that leave the game: never offered.
const RESERVED = new Set(['Escape', 'P']);
export const MAX_KEYS = 4;      // per action, as in the JavaScript port

const LABELS = {
  Up: 'Pijl omhoog', Down: 'Pijl omlaag', Left: 'Pijl links', Right: 'Pijl rechts', Space: 'Spatie', Control: 'Ctrl', Escape: 'Esc', PageUp: 'Page Up', PageDown: 'Page Down',
  Minus: '−', Plus: '=', Quote: "'", Comma: ',', Period: '.', LeftMouse: 'Linkermuisknop', RightMouse: 'Rechtermuisknop', MiddleMouse: 'Middelste muisknop',
};
/** A combination as the form shows it: "Alt + Pijl links". */
export const comboLabel = (combo) => combo.split('+').map((n) => LABELS[n] || n).join(' + ');
export const bindingLabel = (combos) => (combos && combos.length ? combos.map(comboLabel).join(' / ') : 'Geen toets');

/** A [KeyBinds] value as combinations in the game's spelling; a part the game has no key for is left out. */
export function parseBinding(value) {
  const out = [];
  for (const alt of String(value || '').split(',')) {
    const names = alt.split('+').map((n) => n.trim()).filter(Boolean);
    if (!names.length) continue;
    const spelled = names.map(keyName);
    if (spelled.includes('')) continue;
    const combo = spelled.join('+');
    if (!out.includes(combo)) out.push(combo);
  }
  return out;
}
const section = (text, name) => {
  const out = new Map();
  let inside = false;
  for (const line of String(text || '').split(/\r?\n/)) {
    const h = /^\s*\[(.*)\]\s*$/.exec(line);
    if (h) { inside = h[1].trim().toLowerCase() === name.toLowerCase(); continue; }
    const kv = inside && /^\s*([^=;]+?)\s*=(.*)$/.exec(line);
    if (kv) out.set(kv[1].toLowerCase(), [kv[1], kv[2].trim()]);
  }
  return out;
};
/**
 * The form's bindings from a player's file and the port's camera keys (KeyboardEvent.code values):
 * { forward: ['Up', 'W'], …, camera: ['V'] }, and `other`: the keys of the game's actions that are not in the form
 * (Pause, Menu, Scores, …), as a Map of combination -> action name.
 */
export function readBindings(iniText, cameraCodes = ['KeyV']) {
  const sec = section(iniText, 'KeyBinds'), binds = {}, other = new Map();
  const mine = new Set(ACTIONS.filter((a) => a.bind).map((a) => a.bind.toLowerCase()));
  for (const a of ACTIONS) binds[a.id] = a.bind ? parseBinding((sec.get(a.bind.toLowerCase()) || ['', ''])[1]) : [...new Set((cameraCodes || []).map(nameOfCode).filter(Boolean))];
  // RotateLeft and RotateRight repeat TurnLeft and TurnRight in the shipped file and no code asks for them
  for (const [low, [name, value]] of sec) if (!mine.has(low) && !/^rotate(left|right)$/.test(low)) for (const combo of parseBinding(value)) other.set(combo, name);
  return { binds, other };
}
const copy = (binds) => Object.fromEntries(ACTIONS.map((a) => [a.id, [...(binds[a.id] || [])]]));
export const defaultBindings = () => copy(DEFAULTS);

/** The fault in a set of bindings as the original form words it, or null. other: see readBindings. */
export function validateBindings(binds, other = new Map()) {
  const used = new Map();
  for (const a of ACTIONS) {
    const combos = binds && binds[a.id];
    if (!Array.isArray(combos) || combos.length > MAX_KEYS) return { code: 'invalid', action: a.id, message: 'Je hebt een ongeldige toets gekozen.' };
    if (!combos.some((c) => !MOUSE.has(c)) && !a.optional) return { code: 'invalid', action: a.id, message: 'Je hebt een ongeldige toets gekozen.' };
    for (const combo of combos) {
      const names = combo.split('+');
      if (!names.length || names.some((n) => !(n in GAME_KEYS))) return { code: 'invalid', action: a.id, key: combo, message: 'Je hebt een ongeldige toets gekozen.' };
      if (names.some((n) => RESERVED.has(n) || /^F\d+$/.test(n))) return { code: 'reserved', action: a.id, key: combo, message: `${comboLabel(combo)} is gereserveerd voor pauzeren, opslaan of laden.` };
      if (other.has(combo)) return { code: 'reserved', action: a.id, key: combo, message: `De toets ${comboLabel(combo)} wordt al gebruikt door het spel zelf! Kies een andere toets.` };
      if (used.has(combo)) return { code: 'duplicate', action: a.id, otherAction: used.get(combo), key: combo, message: `De toets ${comboLabel(combo)} wordt al gebruikt! Kies een andere toets.` };
      used.set(combo, a.id);
    }
  }
  return null;
}
/** One key for an action in place of its keyboard keys (a mouse button it has stays), as the JavaScript port's form did. */
export function assignBinding(binds, action, code, other = new Map()) {
  if (!BY_ID.has(action)) return { ok: false, error: { code: 'action', message: 'Onbekende spelactie.' } };
  const name = nameOfCode(code);
  if (RESERVED.has(code === 'Escape' ? 'Escape' : code === 'KeyP' ? 'P' : '') || /^F\d+$/.test(code)) return { ok: false, error: { code: 'reserved', message: `${code === 'KeyP' ? 'P' : code === 'Escape' ? 'Esc' : code} is gereserveerd voor pauzeren, opslaan of laden.` } };
  if (!name) return { ok: false, error: { code: 'invalid', message: 'Je hebt een ongeldige toets gekozen.' } };
  const candidate = copy(binds);
  candidate[action] = [name, ...candidate[action].filter((c) => MOUSE.has(c))];
  const error = validateBindings(candidate, other);
  return error ? { ok: false, error } : { ok: true, bindings: candidate };
}
/** The player's file with these bindings: only the lines of the form's actions change. Returns [[section, key, value], …] for players.set(). */
export const bindingEntries = (binds) => ACTIONS.filter((a) => a.bind).map((a) => ['KeyBinds', a.bind, (binds[a.id] || []).join(',')]);
/**
 * The camera key of a player (KeyboardEvent.code values) from the setting `keys`: his own (cameraBy[number],
 * written by the form), else the one every player starts with (camera: V, or what a visitor of the JavaScript
 * port had). Until 2026-11-14 the form wrote `camera` itself, so one player's choice was every player's.
 */
export const cameraKeysOf = (keys, player) => {
  const own = keys && keys.cameraBy && typeof keys.cameraBy === 'object' ? keys.cameraBy[player] : null;
  const list = Array.isArray(own) ? own : keys && Array.isArray(keys.camera) ? keys.camera : ['KeyV'];
  return list.filter((c) => typeof c === 'string');
};
/** The port's camera keys as KeyboardEvent.code values (setting `keys`). */
export const cameraCodes = (binds) => (binds.camera || []).flatMap(codesOfName);

/**
 * The virtual keys a controller or touch button presses for an action: the first combination of the player's file
 * that is all keyboard, e.g. [18, 37] for Alt+Left. Empty when the action has no key.
 */
export function vksFor(binds, action) {
  for (const combo of (binds && binds[action]) || []) {
    const names = combo.split('+');
    if (names.some((n) => MOUSE.has(n))) continue;
    return names.map((n) => GAME_KEYS[n]);
  }
  return [];
}
/**
 * The keys a player starts with: this port's defaults, or what the JavaScript port's visitor had bound there
 * (setting `keys`, field `legacy`: that port's stored bindings as they were). template: the text of PlayerDef.ini.
 * Returns { binds, camera } with camera as KeyboardEvent.code values.
 */
export function startBindings(keys, template) {
  const other = readBindings(template || '').other;
  const taken = keys && keys.legacy ? bindingsFromLegacy(keys.legacy, other) : null;
  const binds = taken && !validateBindings(taken.binds, other) ? taken.binds : defaultBindings();
  return { binds, camera: cameraCodes(binds) };
}
/**
 * For a player made before this port kept its keys in the player's file: the starting keys, when his file
 * still has the original's own (nobody changed them in the game). Returns the entries to write, or null.
 */
export function adoptBindings(text, template, keys) {
  const shipped = JSON.stringify(readBindings(template || '').binds), mine = readBindings(text || '');
  if (!text) return null;
  if (JSON.stringify(mine.binds) === shipped) return bindingEntries(startBindings(keys, template).binds);
  // A file somebody changed keeps its keys, but for the original's Walk=Alt: Alt is also what the original's
  // sidesteps are made with (MoveLeft=Alt+Left), and Walk does nothing there. Walking slowly goes to Shift
  // when that is free; when it is not, Alt stays in the file and is not watched (walkKeys).
  const walk = mine.binds.walk || [];
  if (walk.length === 1 && walk[0] === 'Alt' && modifiers(mine.binds).has('Alt')) {
    const used = new Set([...mine.other.keys(), ...ACTIONS.flatMap((a) => mine.binds[a.id] || [])].flatMap((c) => c.split('+')));
    if (!used.has('Shift')) return [['KeyBinds', 'Walk', 'Shift']];
  }
  return null;
}
/** The keys that are part of a combination of an action other than Walk: Alt in MoveLeft=Alt+Left. */
const modifiers = (binds) => new Set(ACTIONS.filter((a) => a.id !== 'walk').flatMap((a) => (binds && binds[a.id]) || []).filter((c) => c.includes('+')).flatMap((c) => c.split('+')));
/**
 * Virtual key -> held for "walk slowly": the keyboard keys of the action Walk. Not a key that another action
 * uses inside a combination: with the original's own lines (Walk=Alt, MoveLeft=Alt+Left) Alt+Left is a sidestep
 * at full speed in the original, where Walk does nothing, and it must stay one.
 */
export const walkKeys = (binds) => { const mods = modifiers(binds); return new Set(((binds && binds.walk) || []).filter((c) => !c.includes('+') && !MOUSE.has(c) && !mods.has(c)).map((c) => GAME_KEYS[c])); };

/**
 * The JavaScript port's stored bindings (its settings key controlBindings: action -> KeyboardEvent.code values, the
 * three modifiers without Left/Right) as this form's. An action nobody changed there gets this port's default, a
 * changed one its own keys; a key the game cannot bind, or one that is taken, is left out, and an action that ends
 * without a key gets its default keys that are still free. null when the stored value is not a set of bindings.
 */
export function bindingsFromLegacy(stored, other = new Map()) {
  if (!stored || typeof stored !== 'object' || Array.isArray(stored)) return null;
  const out = {}, used = new Set(other.keys()), changed = [];
  const same = (a, b) => a.length === b.length && a.every((v) => b.includes(v));
  for (const a of ACTIONS) {
    const list = stored[a.id];
    if (list !== undefined && (!Array.isArray(list) || list.some((c) => typeof c !== 'string' || !/^[A-Za-z0-9]{1,20}$/.test(c)))) return null;
    const names = list === undefined ? null : [...new Set(list.map(nameOfCode))];
    if (names === null || same(names, OLD_DEFAULTS[a.id] || [])) continue;
    changed.push(a.id);
    out[a.id] = [];
    for (const n of names) if (n && !RESERVED.has(n) && !used.has(n) && out[a.id].length < MAX_KEYS) { out[a.id].push(n); used.add(n); }
  }
  for (const a of ACTIONS) {
    if (out[a.id] && out[a.id].length) continue;
    out[a.id] = DEFAULTS[a.id].filter((c) => !used.has(c));
    for (const c of out[a.id]) used.add(c);
  }
  // a default key that a changed action took is gone from the default set above; keys stay unique
  const seen = new Set();
  for (const a of ACTIONS) { out[a.id] = out[a.id].filter((c) => !seen.has(c)); for (const c of out[a.id]) seen.add(c); }
  return { binds: out, changed };
}
