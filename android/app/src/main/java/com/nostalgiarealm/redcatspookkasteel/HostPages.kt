package com.nostalgiarealm.redcatspookkasteel

/** What the app adds to the page as packaged. Both are served by the app's own server. */
internal object HostPages {
    /**
     * First in the page's <head> (LocalServer puts it there; the packaged files are not changed).
     *  - Back arrives as an Escape key (the page's and the game's own "back"). When nothing took it and
     *    the main menu is at its top, the menu's own quit question is opened.
     *  - The menu's "you may close this window now" screen ends the app: a browser tab cannot close
     *    itself, an app can.
     *  - 'ready' tells the activity that the page's scripts run.
     * TOKEN is new at every start of the app: only this page can tell the app to quit.
     */
    fun hostScript(token: String, debug: Boolean): String = """<script>(() => {
  const say = (what) => fetch('/__android/' + what + '?t=$token', { method: 'POST', keepalive: true }).catch(() => {});
  const shown = (id) => { const el = document.getElementById(id); return !!el && !el.hidden; };
  window.addEventListener('keydown', (e) => {
    if (e.code !== 'Escape' || e.repeat || !shown('menu') || document.querySelector('dialog[open]')) return;
    // after the page's own handlers: they say (preventDefault) when the menu went a page back
    setTimeout(() => {
      if (e.defaultPrevented || !shown('menu') || document.querySelector('dialog[open]')) return;
      const quit = document.getElementById('open-quit');
      if (quit) quit.click();
    }, 0);
  }, true);
  document.addEventListener('DOMContentLoaded', () => {
    const done = document.getElementById('menu-quit-done');
    if (done) new MutationObserver(() => { if (!done.hidden) say('quit'); }).observe(done, { attributes: true, attributeFilter: ['hidden'] });
    say('ready');
  });
  ${if (debug) DEBUG_CHANNEL else ""}
})();</script>"""

    // Debug builds only: lets `node tools/android-check.mjs` run a script in the page (adb forward to the app's server).
    private const val DEBUG_CHANNEL = """
  const AsyncFunction = (async () => {}).constructor;
  (async () => {
    for (;;) {
      try {
        const job = await (await fetch('/__android/debug/next', { method: 'POST' })).json();
        if (!job || !job.id) continue;
        let result;
        try { result = { value: await new AsyncFunction(job.code)() }; } catch (e) { result = { error: String(e && e.stack || e) }; }
        let text; try { text = JSON.stringify(result); } catch (e) { text = JSON.stringify({ error: 'result is not JSON: ' + e.message }); }
        await fetch('/__android/debug/result?id=' + job.id, { method: 'POST', body: text === undefined ? '{}' : text });
      } catch (e) { await new Promise((r) => setTimeout(r, 1000)); }
    }
  })();"""

    /**
     * Shown once before the game on an installation that had the JavaScript port's app: writes what
     * LegacyExport read into this engine's storage under the old names, then goes on to the game.
     * The small values first, then the saved games; a saved game that does not fit in localStorage
     * (5 MB here) is left out, and the page's take-over then uses that player's newest recovery
     * checkpoint from IndexedDB instead (docs/legacy-saves.md). Existing values are not overwritten.
     */
    fun legacyPage(token: String): String = """<!doctype html><html lang="nl"><meta charset="utf-8"><meta name="viewport" content="width=device-width">
<title>RedCat Spookkasteel</title><body style="margin:0;background:#000;color:#9aa3b8;font:16px system-ui,sans-serif;display:grid;place-items:center;height:100vh">
<p>Opgeslagen spellen overnemen…</p><script>
(async () => {
  const note = { local: 0, skipped: [], databases: 0, errors: [] };
  try {
    const data = await (await fetch('/__android/legacy-data?t=$token')).json();
    const keys = Object.keys(data.local || {}).sort((a, b) => data.local[a].length - data.local[b].length);
    for (const k of keys) {
      try { if (localStorage.getItem(k) === null) localStorage.setItem(k, data.local[k]); note.local++; } catch (e) { note.skipped.push(k); }
    }
    for (const [name, d] of Object.entries(data.databases || {})) {
      try {
        await new Promise((resolve, reject) => {
          const r = indexedDB.open(name, 1);
          r.onupgradeneeded = () => { if (!r.result.objectStoreNames.contains('history')) r.result.createObjectStore('history'); };
          r.onerror = () => reject(r.error);
          r.onsuccess = () => {
            const db = r.result, t = db.transaction('history', 'readwrite'), s = t.objectStore('history');
            const g = s.get('rolling');
            g.onsuccess = () => { if (g.result === undefined) s.put(d.rolling, 'rolling'); };
            t.oncomplete = () => { db.close(); resolve(); };
            t.onerror = t.onabort = () => { db.close(); reject(t.error); };
          };
        });
        note.databases++;
      } catch (e) { note.errors.push(name + ': ' + (e && e.message)); }
    }
    note.exportErrors = data.errors || [];
    await fetch('/__android/legacy-done?t=$token', { method: 'POST', body: JSON.stringify(note) });
  } catch (e) { /* not settled: tried again at the next start */ }
  location.replace('/index.html');
})();
</script></body></html>"""
}
