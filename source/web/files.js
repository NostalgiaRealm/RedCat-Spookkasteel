// The game's own files as the page keeps them between runs: every file the game has written
// (its INI files), stored as path -> base64 (persist.js: localStorage and IndexedDB). The worker gets them at start and
// reports each write. Paths are upper-case DOS paths on the virtual drive, e.g.
// C:\REDCAT\SETTINGS\PLAYER1.INI.
import { editIni, readIni, latin1Decode, latin1Encode } from '../host/ini.js';
import { store } from './persist.js';

const KEY = 'rcspook-recomp.files.v1';
export const GAME_DIR = 'C:\\REDCAT';
const load = () => { try { return new Map(JSON.parse(store.get(KEY) || '[]')); } catch (e) { return new Map(); } };
let files = load();
store.onReplace(KEY, () => { files = load(); });        // a newer copy was found in IndexedDB, or another tab wrote (persist.js)
// Every file is in one stored value. A write changes one path of the value as it is stored NOW
// (store.fresh takes over what another tab wrote since this one read it): a tab that was open
// earlier must not put its old copy of the other files back.
const change = (fn) => { store.fresh(KEY); fn(); store.set(KEY, JSON.stringify([...files])); };
const b64 = (bytes) => { let s = ''; for (let k = 0; k < bytes.length; k++) s += String.fromCharCode(bytes[k]); return btoa(s); };
const unb64 = (text) => { const bin = atob(text); const b = new Uint8Array(bin.length); for (let k = 0; k < bin.length; k++) b[k] = bin.charCodeAt(k); return b; };

export const gameFiles = {
  /** [[path, base64], ...] for the worker. */
  entries: () => [...files],
  has: (path) => files.has(path.toUpperCase()),
  read: (path) => { const v = files.get(path.toUpperCase()); return v === undefined ? null : unb64(v); },
  write: (path, bytes) => change(() => files.set(path.toUpperCase(), b64(bytes))),
  remove: (path) => change(() => files.delete(path.toUpperCase())),
  /** A write reported by the game thread (data null: deleted). */
  persisted: (path, data) => change(() => { if (data) files.set(path, b64(data)); else files.delete(path); }),
  readText: (path) => { const b = gameFiles.read(path); return b ? latin1Decode(b) : null; },
  writeText: (path, text) => gameFiles.write(path, latin1Encode(text)),
  iniGet: (path, section, key) => { const t = gameFiles.readText(path); return t === null ? undefined : readIni(t, section, key); },
  iniSet: (path, entries) => { store.fresh(KEY); let t = gameFiles.readText(path) || ''; for (const [s, k, v] of entries) t = editIni(t, s, k, v === null ? null : String(v)); gameFiles.writeText(path, t); },
};
