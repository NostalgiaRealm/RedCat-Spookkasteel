// Small values the port keeps between visits: its settings, the game's INI files (players and
// their progress), the menu's notes. localStorage is read at once when the page loads, but a site
// has only about five megabytes of it, and on the public site that space is shared with what the
// JavaScript port left there (a saved game of that port is 0.3 to 1 MB). A write that does not fit
// must not lose a player's progress, so every value is also written to IndexedDB, which has far
// more room. When the two differ at the next visit, the newer one is used.
//
//   store.get(key)            the text, or null; from localStorage the first time
//   store.set(key, text)      remembers it, writes localStorage (may fail) and IndexedDB
//   store.remove(key)
//   store.fresh(key)          the text after taking over what another tab of this page wrote since
//   store.onReplace(key, fn)  fn() when a newer text was found in IndexedDB after the page loaded, or another tab wrote one
//   await store.ready         after that comparison; values read earlier may have been replaced
//   await store.settled()     when every write so far has reached IndexedDB (for checks)
// Keys of this port start with "rcspook-recomp."; nothing else is read or written here.
const DB = 'rcspook-recomp-kv', STORE = 'kv';
const cache = new Map();          // key -> text or null
const revs = new Map();           // key -> number of writes, to tell which copy is newer
const listeners = new Map();      // key -> Set(fn)
const revKey = (key) => key + '#rev';
const local = {
  get: (key) => { try { return localStorage.getItem(key); } catch (e) { return null; } },
  set: (key, text) => { try { localStorage.setItem(key, text); return true; } catch (e) { return false; } },
  remove: (key) => { try { localStorage.removeItem(key); } catch (e) { /* nothing to remove */ } },
};
const load = (key) => {
  if (cache.has(key)) return;
  cache.set(key, local.get(key));
  revs.set(key, Number(local.get(revKey(key))) || 0);
};

let dbPromise = null;
const open = () => dbPromise || (dbPromise = new Promise((resolve) => {
  let r;
  try { r = indexedDB.open(DB, 1); } catch (e) { resolve(null); return; }
  r.onupgradeneeded = () => { if (!r.result.objectStoreNames.contains(STORE)) r.result.createObjectStore(STORE); };
  r.onsuccess = () => resolve(r.result);
  r.onerror = () => resolve(null);
  r.onblocked = () => resolve(null);
}));
let pending = Promise.resolve();
const mirror = (key) => {
  const value = cache.get(key), rev = revs.get(key);
  pending = pending.then(open).then((db) => new Promise((resolve) => {
    if (!db) { resolve(); return; }
    try {
      // not over a newer copy: another tab of this page may have written since (its number is higher)
      const t = db.transaction(STORE, 'readwrite'), s = t.objectStore(STORE), had = s.get(key);
      had.onsuccess = () => { if (had.result && had.result.rev > rev) return; if (value === null) s.put({ removed: true, rev }, key); else s.put({ value, rev }, key); };
      t.oncomplete = () => resolve(); t.onerror = () => resolve(); t.onabort = () => resolve();
    } catch (e) { resolve(); }
  }));
};

// Two tabs of this page share the stored values. What another tab wrote is taken over when it
// arrives (the 'storage' event, which a tab gets for writes of other tabs only) and, by whoever
// is about to write, with store.fresh(key) just before. Without this a tab that was open earlier
// wrote its old copy of every player file over the other tab's players and progress.
const reread = (key) => {
  if (!cache.has(key)) return false;
  const rev = Number(local.get(revKey(key))) || 0;
  if (!(rev > (revs.get(key) || 0))) return false;         // nothing newer there (also: a value that only fits in IndexedDB)
  const text = local.get(key), changed = cache.get(key) !== text;
  cache.set(key, text); revs.set(key, rev);
  return changed;
};
const tell = (key) => { for (const fn of listeners.get(key) || []) { try { fn(); } catch (e) { console.error(e); } } };
if (typeof window !== 'undefined' && typeof window.addEventListener === 'function') window.addEventListener('storage', (e) => {
  let ours = false;
  try { ours = e.storageArea === localStorage; } catch (error) { /* no localStorage */ }
  if (!ours) return;
  // the number is written after the value, so its event says that both are there; key null: everything was cleared
  const keys = e.key === null ? [...cache.keys()] : e.key.endsWith('#rev') ? [e.key.slice(0, -4)] : [];
  for (const key of keys) {
    if (e.key === null) { if (cache.get(key) !== null) { cache.set(key, null); tell(key); } continue; }
    if (reread(key)) tell(key);
  }
});

export const store = {
  /** The text as it is stored now, after taking over what another tab wrote since: call it before changing a part of a value. */
  fresh(key) { load(key); if (reread(key)) tell(key); return cache.get(key); },
  /** false after a write that localStorage refused (the value is then only in IndexedDB). */
  localOk: true,
  get(key) { load(key); return cache.get(key); },
  set(key, text) {
    load(key);
    if (cache.get(key) === text) return;
    cache.set(key, text); revs.set(key, Math.max(revs.get(key) || 0, Number(local.get(revKey(key))) || 0) + 1);
    // the value first: when it does not fit, the older text stays there with its older number
    if (!(local.set(key, text) && local.set(revKey(key), String(revs.get(key))))) { store.localOk = false; console.warn(`[opslag] ${key} past niet in localStorage; het staat wel in IndexedDB`); }
    mirror(key);
  },
  remove(key) {
    load(key);
    if (cache.get(key) === null) return;
    cache.set(key, null); revs.set(key, Math.max(revs.get(key) || 0, Number(local.get(revKey(key))) || 0) + 1);
    local.remove(key); local.set(revKey(key), String(revs.get(key)));
    mirror(key);
  },
  onReplace(key, fn) { if (!listeners.has(key)) listeners.set(key, new Set()); listeners.get(key).add(fn); },
  settled: () => pending,
  ready: null,
};

store.ready = open().then((db) => new Promise((resolve) => {
  if (!db) { resolve(); return; }
  let rows = [];
  try {
    const t = db.transaction(STORE), s = t.objectStore(STORE), c = s.openCursor();
    c.onsuccess = () => { const cur = c.result; if (cur) { rows.push([cur.key, cur.value]); cur.continue(); } };
    t.oncomplete = () => resolve(rows); t.onerror = () => resolve(rows); t.onabort = () => resolve(rows);
  } catch (e) { resolve(rows); }
})).then((rows) => {
  const seen = new Map();
  for (const [key, rec] of rows || []) {
    if (typeof key !== 'string' || !rec) continue;
    load(key);
    seen.set(key, rec.rev || 0);
    if (!(rec.rev > (revs.get(key) || 0))) continue;        // localStorage has the same or a newer text
    const text = rec.removed ? null : rec.value;
    const changed = cache.get(key) !== text;
    cache.set(key, text); revs.set(key, rec.rev);
    if (text === null) local.remove(key); else if (local.set(key, text)) local.set(revKey(key), String(rec.rev));
    if (changed) for (const fn of listeners.get(key) || []) { try { fn(); } catch (e) { console.error(e); } }
  }
  // the other way round: what localStorage has and IndexedDB lacks or has older (a tab closed before its write was through)
  for (const [key, rev] of revs) if (cache.get(key) !== null && rev > 0 && rev > (seen.get(key) || 0)) mirror(key);
}).catch((e) => { console.warn('[opslag] IndexedDB kon niet gelezen worden', e); });
