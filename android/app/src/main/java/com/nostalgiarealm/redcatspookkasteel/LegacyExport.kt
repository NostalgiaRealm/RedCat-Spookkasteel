package com.nostalgiarealm.redcatspookkasteel

import android.annotation.SuppressLint
import android.content.Context
import android.os.Handler
import android.os.Looper
import android.webkit.JavascriptInterface
import android.webkit.WebResourceRequest
import android.webkit.WebResourceResponse
import android.webkit.WebView
import android.webkit.WebViewClient
import java.io.ByteArrayInputStream
import java.io.File

/**
 * Reads what the app of the JavaScript port (versions up to 1.0.8) left on this phone.
 *
 * That app was a WebView showing https://appassets.androidplatform.net/assets/www/index.html, and its
 * players, settings and saved games are in that WebView's storage for that origin (localStorage keys
 * `redcat.…`, IndexedDB databases `redcat-recovery-saves…`; docs/research/legacy-storage.md). This app
 * has the same application id, so that storage is still in its data folder (app_webview), but the game
 * now runs in another engine at another origin, which cannot see it. So, once: a WebView that is never
 * shown opens a page of ours at the old origin, the page reads the old data (reads only) and hands it
 * over as one JSON text, which is kept in the app's files. The game's engine then gets it from the
 * app's server and writes it into its own storage under the same names (HostPages.LEGACY_PAGE), where
 * the page's own take-over finds it (source/web/legacy-import.js, docs/legacy-saves.md).
 *
 * Nothing of the old app's storage is changed or removed.
 */
internal class LegacyExport(private val context: Context) {
    companion object {
        const val OLD_ORIGIN = "https://appassets.androidplatform.net"
        private const val PAGE_URL = "$OLD_ORIGIN/assets/www/legacy-export.html"
        private const val TIMEOUT_MS = 15_000L
        // reads only; a database that is not there is not created (indexedDB.databases() names what exists)
        private const val PAGE = """<!doctype html><meta charset="utf-8"><title>export</title><script>
(async () => {
  const out = { format: 'redcat-android-legacy', version: 1, origin: location.origin, local: {}, databases: {}, errors: [] };
  try {
    for (let i = 0; i < localStorage.length; i++) { const k = localStorage.key(i); if (k && k.startsWith('redcat.')) out.local[k] = localStorage.getItem(k); }
  } catch (e) { out.errors.push('localStorage: ' + e.message); }
  try {
    const list = indexedDB.databases ? await indexedDB.databases() : [];
    for (const d of list) {
      if (!d.name || !d.name.startsWith('redcat-recovery-saves')) continue;
      try {
        const value = await new Promise((resolve, reject) => {
          const r = indexedDB.open(d.name);
          r.onerror = () => reject(r.error);
          r.onupgradeneeded = () => { r.transaction.abort(); };
          r.onsuccess = () => {
            const db = r.result;
            if (!db.objectStoreNames.contains('history')) { db.close(); resolve(undefined); return; }
            const g = db.transaction('history', 'readonly').objectStore('history').get('rolling');
            g.onsuccess = () => { db.close(); resolve(g.result); };
            g.onerror = () => { db.close(); reject(g.error); };
          };
        });
        if (value !== undefined) out.databases[d.name] = { version: d.version || 1, rolling: value };
      } catch (e) { out.errors.push(d.name + ': ' + (e && e.message)); }
    }
  } catch (e) { out.errors.push('indexedDB: ' + e.message); }
  let text;
  try { text = JSON.stringify(out); } catch (e) { out.databases = {}; out.errors.push('history not JSON: ' + e.message); text = JSON.stringify(out); }
  RedCatLegacy.done(text);
})();
</script>"""
    }

    private val exported = File(context.filesDir, "legacy-export.json")
    private val settled = File(context.filesDir, "legacy-export.done")

    /** The exported text that the game has not taken yet, or null. */
    fun pending(): ByteArray? = if (!settled.exists() && exported.isFile) runCatching { exported.readBytes() }.getOrNull() else null

    /** The game's engine has written the data into its own storage (or there was none). */
    fun settle(note: String) {
        runCatching { settled.writeText(note) }
        runCatching { exported.delete() }
    }

    /** Whether there is anything to do: not settled, and a WebView of the old app has been here. */
    fun needed(): Boolean = !settled.exists() && !exported.isFile && File(context.applicationInfo.dataDir, "app_webview").isDirectory

    /** Calls [then] on the main thread when the old data is in the file, or could not be read (tried again at the next start). */
    @SuppressLint("SetJavaScriptEnabled")
    fun run(then: () -> Unit) {
        if (!needed()) {
            if (!settled.exists() && !exported.isFile) settle("nothing: no WebView storage on this installation")
            then()
            return
        }
        val handler = Handler(Looper.getMainLooper())
        var view: WebView? = null
        var finished = false
        fun finish(text: String?) {
            if (finished) return
            finished = true
            handler.removeCallbacksAndMessages(null)
            if (text != null) runCatching {
                val part = File(context.filesDir, "legacy-export.json.part")
                part.writeText(text)
                part.renameTo(exported)
            }
            view?.let { it.stopLoading(); it.destroy() }
            view = null
            then()
        }
        try {
            val web = WebView(context)
            view = web
            web.settings.apply {
                javaScriptEnabled = true
                domStorageEnabled = true
                allowFileAccess = false
                allowContentAccess = false
            }
            web.webViewClient = object : WebViewClient() {
                // this WebView gets our one page and nothing from anywhere else
                override fun shouldInterceptRequest(view: WebView, request: WebResourceRequest): WebResourceResponse =
                    if (request.url.toString() == PAGE_URL) WebResourceResponse("text/html", "UTF-8", ByteArrayInputStream(PAGE.toByteArray()))
                    else WebResourceResponse("text/plain", "UTF-8", 403, "Forbidden", emptyMap(), ByteArrayInputStream(byteArrayOf()))
            }
            web.addJavascriptInterface(object {
                @JavascriptInterface fun done(text: String) { handler.post { finish(text) } }
            }, "RedCatLegacy")
            handler.postDelayed({ finish(null) }, TIMEOUT_MS)
            web.loadUrl(PAGE_URL)
        } catch (_: RuntimeException) {
            finish(null)
        }
    }
}
