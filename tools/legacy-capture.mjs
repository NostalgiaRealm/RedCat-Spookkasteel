// Helper of tools/legacy-check.mjs: everything a page of this origin can see in localStorage and
// IndexedDB, as plain JSON, to compare what the JavaScript port had stored before and after this
// port ran. Binary values are reduced to their length.
export const dumpStorage = (page) => page.evaluate(async () => {
  const ls = {};
  for (let k = 0; k < localStorage.length; k++) { const key = localStorage.key(k); ls[key] = localStorage.getItem(key); }
  const idb = {};
  const names = indexedDB.databases ? (await indexedDB.databases()).map((d) => d.name) : [];
  const plain = (v) => {
    if (v instanceof Uint8Array) return { $bytes: v.length };
    if (v instanceof ArrayBuffer) return { $bytes: v.byteLength };
    if (Array.isArray(v)) return v.map(plain);
    if (v && typeof v === 'object') return Object.fromEntries(Object.entries(v).map(([k, x]) => [k, plain(x)]));
    return v;
  };
  for (const name of names) {
    const db = await new Promise((res, rej) => { const r = indexedDB.open(name); r.onsuccess = () => res(r.result); r.onerror = () => rej(r.error); });
    idb[name] = { version: db.version, stores: {} };
    for (const store of db.objectStoreNames) {
      idb[name].stores[store] = await new Promise((res, rej) => {
        const rows = []; const c = db.transaction(store).objectStore(store).openCursor();
        c.onsuccess = () => { const cur = c.result; if (!cur) return res(rows); rows.push({ key: cur.key, value: plain(cur.value) }); cur.continue(); };
        c.onerror = () => rej(c.error);
      });
    }
    db.close();
  }
  return { localStorage: ls, indexedDB: idb };
});
