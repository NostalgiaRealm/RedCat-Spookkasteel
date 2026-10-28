// The original TfrmKeyConfig edits keys and refuses duplicate assignments
// (Settings/menu.ini, MENUSTRINGS 6, 26 and 27). Retain the port's mouse/WASD
// controls and shortcuts while giving its keyboard actions the same facility.
export const CONTROL_ACTIONS = Object.freeze([
  ['forward', 'Vooruit'],
  ['backward', 'Achteruit'],
  ['turnLeft', 'Links draaien'],
  ['turnRight', 'Rechts draaien'],
  ['left', 'Links opzij'],
  ['right', 'Rechts opzij'],
  ['attack', 'Schieten'],
  ['jump', 'Springen'],
  ['walk', 'Rustig lopen / dalen'],
  ['use', 'Gebruiken / overslaan'],
  ['camera', 'Camera wisselen'],
  // The original Weapon1/2/3 keys pick the follow camera's distance row
  // (0x458e40). These actions are newer than stored bindings, so they may be
  // left without a key when an older set already uses 1, 2 or 3.
  ['cameraNear', 'Camera dichtbij', true],
  ['cameraFar', 'Camera verder weg', true],
  ['cameraHigh', 'Camera hoog', true],
].map(([id, label, optional = false]) => Object.freeze({id, label, optional})));

/** Follow-camera distance row selected by each camera distance action. */
export const CAMERA_DISTANCE_ACTIONS = Object.freeze(['cameraNear', 'cameraFar', 'cameraHigh']);

export const DEFAULT_CONTROL_BINDINGS = Object.freeze(Object.fromEntries(Object.entries({
  forward: ['KeyW', 'ArrowUp'],
  backward: ['KeyS', 'ArrowDown'],
  turnLeft: ['ArrowLeft'],
  turnRight: ['ArrowRight'],
  left: ['KeyA'],
  right: ['KeyD'],
  attack: ['Control'],
  jump: ['Space'],
  walk: ['Shift'],
  use: ['KeyE'],
  camera: ['KeyV'],
  cameraNear: ['Digit1'],
  cameraFar: ['Digit2'],
  cameraHigh: ['Digit3'],
}).map(([action, keys]) => [action, Object.freeze(keys)])));

const MODIFIERS = {Shift: ['ShiftLeft', 'ShiftRight'], Control: ['ControlLeft', 'ControlRight'], Alt: ['AltLeft', 'AltRight']};
const NAMED_KEYS = new Set(['Backspace', 'Tab', 'Enter', 'Shift', 'Control', 'Alt', 'Space',
  'PageUp', 'PageDown', 'End', 'Home', 'ArrowLeft', 'ArrowUp', 'ArrowRight', 'ArrowDown',
  'Insert', 'Delete', 'Minus', 'Equal', 'BracketLeft', 'BracketRight', 'Backslash',
  'Semicolon', 'Quote', 'Backquote', 'Comma', 'Period', 'Slash',
  'NumpadMultiply', 'NumpadAdd', 'NumpadSubtract', 'NumpadDecimal', 'NumpadDivide', 'NumpadEnter']);
const RESERVED_KEYS = new Set(['Escape', 'KeyP', 'F5', 'F9']);
const LABELS = {
  ArrowUp: 'Pijl omhoog', ArrowDown: 'Pijl omlaag', ArrowLeft: 'Pijl links', ArrowRight: 'Pijl rechts',
  Space: 'Spatie', Control: 'Ctrl', Shift: 'Shift', Alt: 'Alt', Escape: 'Esc',
  PageUp: 'Page Up', PageDown: 'Page Down', Minus: '−', Equal: '=', BracketLeft: '[',
  BracketRight: ']', Backslash: '\\', Semicolon: ';', Quote: "'", Backquote: '`',
  Comma: ',', Period: '.', Slash: '/', NumpadMultiply: 'Num *', NumpadAdd: 'Num +',
  NumpadSubtract: 'Num −', NumpadDecimal: 'Num .', NumpadDivide: 'Num /', NumpadEnter: 'Num Enter',
};

export function canonicalKeyCode(code) {
  return typeof code === 'string' ? code.replace(/^(Shift|Control|Alt)(Left|Right)$/, '$1') : '';
}

export function controlKeyLabel(code) {
  code = canonicalKeyCode(code);
  if (LABELS[code]) return LABELS[code];
  if (/^Key[A-Z]$/.test(code)) return code.slice(3);
  if (/^Digit[0-9]$/.test(code)) return code.slice(5);
  if (/^Numpad[0-9]$/.test(code)) return `Num ${code.slice(6)}`;
  return code;
}

export function controlBindingLabel(bindings, action) {
  return (bindings?.[action] || DEFAULT_CONTROL_BINDINGS[action] || []).map(controlKeyLabel).join(' / ') || 'Geen toets';
}

function keyAllowed(code) {
  return !RESERVED_KEYS.has(code) && (NAMED_KEYS.has(code) || /^(Key[A-Z]|Digit[0-9]|Numpad[0-9]|F(?:[1-9]|1[0-2]))$/.test(code));
}

function copyBindings(bindings = DEFAULT_CONTROL_BINDINGS) {
  return Object.fromEntries(CONTROL_ACTIONS.map(({id}) => [id, [...bindings[id]]]));
}

/** Return the original-style validation error, or null when all keys are valid. */
export function validateControlBindings(bindings) {
  const used = new Map();
  for (const {id: action, optional} of CONTROL_ACTIONS) {
    const keys = bindings?.[action];
    if (!Array.isArray(keys) || (!keys.length && !optional) || keys.length > 4) {
      return {code: 'invalid', action, message: 'Je hebt een ongeldige toets gekozen.'};
    }
    for (const rawKey of keys) {
      const key = canonicalKeyCode(rawKey);
      if (RESERVED_KEYS.has(key)) {
        return {code: 'reserved', action, key, message: `${controlKeyLabel(key)} is gereserveerd voor pauzeren, opslaan of laden.`};
      }
      if (!keyAllowed(key)) return {code: 'invalid', action, key, message: 'Je hebt een ongeldige toets gekozen.'};
      if (used.has(key)) {
        return {code: 'duplicate', action, otherAction: used.get(key), key,
          message: `De toets ${controlKeyLabel(key)} wordt al gebruikt! Kies een andere toets.`};
      }
      used.set(key, action);
    }
  }
  return null;
}

// Stored preferences are not trusted. An invalid set falls back as a whole:
// repairing only one action can accidentally create a second duplicate.
export function normalizeControlBindings(value) {
  if (!value || typeof value !== 'object' || Array.isArray(value)) return copyBindings();
  const candidate = {}, added = [];
  for (const {id, optional} of CONTROL_ACTIONS) {
    if (optional && !Object.hasOwn(value, id)) {added.push(id); continue;}
    const keys = Object.hasOwn(value, id) ? value[id] : DEFAULT_CONTROL_BINDINGS[id];
    candidate[id] = Array.isArray(keys) ? keys.map(canonicalKeyCode) : keys;
  }
  // An action added after the set was stored gets its default key only when
  // that key is still free, so an older custom set is never discarded.
  const used = new Set(Object.values(candidate).flat());
  for (const id of added) candidate[id] = DEFAULT_CONTROL_BINDINGS[id].filter(key => !used.has(key));
  return validateControlBindings(candidate) ? copyBindings() : copyBindings(candidate);
}

/** A remap replaces that action's keyboard aliases; mouse/touch/pad stay separate. */
export function assignControlBinding(bindings, action, code) {
  if (!Object.hasOwn(DEFAULT_CONTROL_BINDINGS, action)) {
    return {ok: false, error: {code: 'action', message: 'Onbekende spelactie.'}};
  }
  const candidate = normalizeControlBindings(bindings);
  candidate[action] = [canonicalKeyCode(code)];
  const error = validateControlBindings(candidate);
  return error ? {ok: false, error} : {ok: true, bindings: candidate};
}

/** Cheap per-frame lookup; normalize preferences when loading or changing them. */
export function bindingPressed(keys, bindings, action) {
  for (const key of bindings?.[action] || DEFAULT_CONTROL_BINDINGS[action] || []) {
    if (keys.has(key)) return true;
    const modifier = MODIFIERS[key];
    if (modifier && (keys.has(modifier[0]) || keys.has(modifier[1]))) return true;
  }
  return false;
}

export function readKeyboardInput(keys, bindings = DEFAULT_CONTROL_BINDINGS) {
  const pressed = action => bindingPressed(keys, bindings, action);
  return {
    forward: Number(pressed('forward')) - Number(pressed('backward')),
    right: Number(pressed('right')) - Number(pressed('left')),
    turn: Number(pressed('turnLeft')) - Number(pressed('turnRight')),
    jump: pressed('jump'),
    walk: pressed('walk'),
    descend: pressed('walk'),
    attack: pressed('attack'),
    use: pressed('use'),
  };
}
