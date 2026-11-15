// Settings of the port itself (not the game's): kept between visits (persist.js), read by the page
// and handed to the game thread. The menu shows and changes them through this module.
import { store } from './persist.js';
import { importLegacySettings } from './legacy-import.js';
import { phone } from './device.js';

const KEY = 'rcspook-recomp.settings.v1';
export const DEFAULTS = {
  resolution: 'auto',     // 'auto' (the window) or 'WIDTHxHEIGHT' of the picture that is drawn
  renderScale: 100,       // percent of that resolution, 25..200
  msaa: 4,                // 0, 2, 4 or 8 samples; a phone starts at 0 (see read())
  widescreen: true,       // false: always 4:3 as the original
  touch: 'auto',          // 'auto', 'on', 'off'
  fullscreen: true,       // as the original, which always ran full screen, and as the JavaScript port; entered at the first click, tap or key press (game.js)
  showFps: false,
  volume: 100,            // master volume of the port, 0..100
  mouseLook: true,
  unlockAll: false,       // cheat: every world selectable in quick play
  deadzone: 0.18,         // gamepad stick dead zone
  intro: true,            // the Davilex leader and the intro when the page opens
  subtitleBox: true,      // what is said in a scene in a readable box (source/host/subtitles.js); false: the original's letters over the picture
  fov: 0,                 // vertical field of view in degrees, 45..90; 0: the original's (54)
  sensitivity: 1,         // speed of looking around with mouse, right stick and touch, 0.2..2
  camera: 'third',        // 'third' as the original, or 'first': through RedCat's eyes
  // The keys of the game's actions are in each player's file ([KeyBinds], keybinds.js). Here: the port's own
  // key (camera: KeyboardEvent.code values that switch between the original camera and first person), `legacy`:
  // the JavaScript port's stored bindings of a visitor taken over from it, which every player starts with,
  // and v: 3 once the players that existed before were given their keys (menu.js adoptKeys). The mark is
  // NOT in this default: a visitor who never stored a setting must not read it as set. (v: 2 was the mark
  // of a build that had it here, so it says nothing.)
  keys: { camera: ['KeyV'] },          // (skip: the codes that skip a scene when held, source/web/skip.js; E when not set)
  // Recovery points: next to the saved place of an adventure, older ones of about 2, 5 and 10
  // minutes of playing time ago (recovery.js). Each is a whole save state, 23 to 39 MB stored, so
  // a phone or tablet starts without them.
  recovery: !phone,
  // Two of the fixes carried over from the JavaScript port are the player's choice (source/host/fixes.js
  // has them all; off = the original game's sound):
  towerFire: true,        // the Tower's fire loop quieter and only heard nearby
  musicContinuity: true,  // the level music goes on where it was after a fight
  // The other fixes, for whoever wants the original back: 'off', or 'name=0,name=0' with the names of fixes.js.
  fixes: '',
  phoneMsaaChecked: false, // on a phone: the 4 samples everybody starts with were switched off once (see read())
};
const listeners = new Set();
let values = { ...DEFAULTS };
// A first visit of somebody who used the JavaScript port here: its settings become this port's
// (legacy-import.js). Before the first read, so that the page starts with them.
importLegacySettings(KEY, DEFAULTS);
// Phones and tablets, as in the JavaScript port: 4x anti-aliasing costs a resolve and a copy of
// the whole picture per frame, so there it starts switched off. Done once per visitor (the mark
// is kept with the next setting that is written, and comes along from the JavaScript port's own
// settings, legacy.js): a number of samples chosen afterwards, 4 too, stays.
const phoneStart = () => { if (!phone || values.phoneMsaaChecked) return; if (values.msaa === 4) values.msaa = 0; values.phoneMsaaChecked = true; };
const read = () => { values = { ...DEFAULTS }; try { Object.assign(values, JSON.parse(store.get(KEY) || '{}')); } catch (e) { /* keep defaults */ } phoneStart(); };
read();
store.onReplace(KEY, () => { const before = values; read(); for (const k of Object.keys(DEFAULTS)) if (before[k] !== values[k]) for (const fn of listeners) fn(k, values[k]); });

export const settings = {
  get: (key) => values[key],
  all: () => ({ ...values }),
  set(key, value) {
    if (!(key in DEFAULTS) || values[key] === value) return;
    values[key] = value;
    store.set(KEY, JSON.stringify(values));
    for (const fn of listeners) fn(key, value);
  },
  /** fn(key, value) after every change. Returns a function that removes it. */
  onChange(fn) { listeners.add(fn); return () => listeners.delete(fn); },
  /** Everything back to what a first visit starts with on this device. */
  reset() { for (const k of Object.keys(DEFAULTS)) settings.set(k, k === 'msaa' && phone ? 0 : k === 'phoneMsaaChecked' ? phone : DEFAULTS[k]); },
};
