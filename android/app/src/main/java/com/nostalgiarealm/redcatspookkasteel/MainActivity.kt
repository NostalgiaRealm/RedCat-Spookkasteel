package com.nostalgiarealm.redcatspookkasteel

import android.content.ActivityNotFoundException
import android.content.Intent
import android.graphics.Color
import android.media.AudioManager
import android.net.Uri
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.os.SystemClock
import android.view.Gravity
import android.view.KeyCharacterMap
import android.view.KeyEvent
import android.view.ViewGroup
import android.view.WindowManager
import android.widget.Button
import android.widget.FrameLayout
import android.widget.LinearLayout
import android.widget.TextView
import android.widget.Toast
import androidx.activity.ComponentActivity
import androidx.activity.OnBackPressedCallback
import androidx.core.view.ViewCompat
import androidx.core.view.WindowCompat
import androidx.core.view.WindowInsetsCompat
import androidx.core.view.WindowInsetsControllerCompat
import org.mozilla.geckoview.AllowOrDeny
import org.mozilla.geckoview.ContentBlocking
import org.mozilla.geckoview.ExperimentalGeckoViewApi
import org.mozilla.geckoview.GeckoPreferenceController
import org.mozilla.geckoview.GeckoResult
import org.mozilla.geckoview.GeckoRuntime
import org.mozilla.geckoview.GeckoRuntimeSettings
import org.mozilla.geckoview.GeckoSession
import org.mozilla.geckoview.GeckoSessionSettings
import org.mozilla.geckoview.GeckoView
import org.mozilla.geckoview.WebRequestError
import java.io.IOException
import java.security.SecureRandom
import java.util.concurrent.LinkedBlockingQueue
import java.util.concurrent.TimeUnit

/**
 * One full-screen GeckoView that shows the packaged site of the recompiled port, served from the
 * app's own files by LocalServer. The page is the one a browser gets; what Android adds is in
 * HostPages (Back, quit) and LegacyExport (the saved games of the JavaScript port's app).
 * Conventions follow that app (../RCSPOOK_NEW/android): application id, name, icon, immersive
 * display, Back, and the engine as the only owner of Android's audio focus.
 */
class MainActivity : ComponentActivity() {
    private companion object {
        // one engine per process, kept when the activity is made again
        var runtime: GeckoRuntime? = null
        val externalLinks = setOf(
            "https://ko-fi.com/nostalgiarealm",
            "https://www.nostalgiarealm.com/",
            "https://github.com/NostalgiaRealm/RedCat-Spookkasteel",
            "https://www.youtube.com/@Nostalgia_Realm",
        )
    }

    private lateinit var root: FrameLayout
    private val handler = Handler(Looper.getMainLooper())
    private val token = ByteArray(16).also { SecureRandom().nextBytes(it) }.joinToString("") { "%02x".format(it) }
    private lateinit var legacy: LegacyExport
    private var server: LocalServer? = null
    private var session: GeckoSession? = null
    private var gameView: GeckoView? = null
    private var pageReady = false
    private var foreground = false
    private var generation = 0
    // debug builds: scripts for the page (tools/android-check.mjs), and their results
    private val debugJobs = LinkedBlockingQueue<Pair<String, String>>()
    private val debugResults = java.util.concurrent.ConcurrentHashMap<String, LinkedBlockingQueue<ByteArray>>()

    private val routes = object : LocalServer.Routes {
        override fun pageHead(): String = HostPages.hostScript(token, BuildConfig.DEBUG)

        override fun handle(method: String, path: String, query: String, body: ByteArray): LocalServer.Answer? {
            if (BuildConfig.DEBUG && path.startsWith("debug/")) return debug(path.removePrefix("debug/"), query, body)
            if (query != "t=$token") return null
            return when (path) {
                "ready" -> { handler.post { pageReady = true }; ok() }
                // the page has saved before it shows that screen (source/menu/quit-menu.js)
                "quit" -> { handler.post { finish() }; ok() }
                "legacy.html" -> LocalServer.Answer(200, "text/html; charset=utf-8", HostPages.legacyPage(token).toByteArray())
                "legacy-data" -> legacy.pending()?.let { LocalServer.Answer(200, "application/json; charset=utf-8", it) }
                "legacy-done" -> { legacy.settle(String(body, Charsets.UTF_8).take(4000)); ok() }
                else -> null
            }
        }

        private fun ok() = LocalServer.Answer(200, "text/plain; charset=utf-8", byteArrayOf())

        private fun debug(path: String, query: String, body: ByteArray): LocalServer.Answer? = when (path) {
            // from the development computer: run this in the page and wait for what it returns
            "eval" -> {
                val id = java.lang.Long.toHexString(SecureRandom().nextLong())
                val box = LinkedBlockingQueue<ByteArray>()
                debugResults[id] = box
                debugJobs.put(id to String(body, Charsets.UTF_8))
                val result = box.poll(120, TimeUnit.SECONDS)
                debugResults.remove(id)
                LocalServer.Answer(if (result == null) 504 else 200, "application/json; charset=utf-8", result ?: "{\"error\":\"no answer from the page\"}".toByteArray())
            }
            // from the page: the next script, or nothing after a while
            "next" -> {
                val job = debugJobs.poll(25, TimeUnit.SECONDS)
                val text = if (job == null) "{}" else org.json.JSONObject().put("id", job.first).put("code", job.second).toString()
                LocalServer.Answer(200, "application/json; charset=utf-8", text.toByteArray())
            }
            "result" -> { debugResults[query.removePrefix("id=")]?.put(body); ok() }
            else -> null
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        legacy = LegacyExport(applicationContext)
        root = FrameLayout(this).apply { setBackgroundColor(Color.BLACK) }
        WindowCompat.setDecorFitsSystemWindows(window, false)
        // the page draws to the edges of the screen and keeps its controls clear of a cutout itself (env(safe-area-inset-*))
        window.attributes = window.attributes.apply {
            layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
        }
        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)
        setContentView(root)
        // The engine owns the media players and Android's audio focus, as the WebView did in the
        // JavaScript port's app: a second request by the activity competed with it there.
        onBackPressedDispatcher.addCallback(this, object : OnBackPressedCallback(true) {
            override fun handleOnBackPressed() {
                val view = gameView
                if (pageReady && view != null) pressEscape(view) else finish()
            }
        })
        applyDisplay()
        // first what the old app left here (once, a second at most), then the game
        val mine = ++generation
        legacy.run { if (mine == generation && !isDestroyed) createGameView() }
    }

    private fun pressEscape(view: GeckoView) {
        val now = SystemClock.uptimeMillis()
        view.requestFocus()
        // with the keyboard's scan code of Esc (1): the engine makes the event's `code` from it, and the page reads `code`
        // Held for a moment: the game looks at the keyboard once per frame, and a key that goes down and up
        // within one frame is not seen (the page's own made-up Esc is held 100 ms too, source/web/game.js).
        fun key(action: Int) = KeyEvent(now, SystemClock.uptimeMillis(), action, KeyEvent.KEYCODE_ESCAPE, 0, 0, KeyCharacterMap.VIRTUAL_KEYBOARD, 1)
        view.dispatchKeyEvent(key(KeyEvent.ACTION_DOWN))
        handler.postDelayed({ if (view === gameView) view.dispatchKeyEvent(key(KeyEvent.ACTION_UP)) }, 120)
    }

    private fun createGameView() {
        disposeGameView()
        root.removeAllViews()
        if (server == null) {
            val made = LocalServer(assets, routes)
            try { made.start() } catch (_: IOException) { showFailure(R.string.port_taken); return }
            server = made
        }
        val engine = try {
            runtime ?: GeckoRuntime.create(applicationContext, GeckoRuntimeSettings.Builder()
                .consoleOutput(BuildConfig.DEBUG)
                .remoteDebuggingEnabled(BuildConfig.DEBUG)
                .aboutConfigEnabled(false)
                .contentBlocking(ContentBlocking.Settings.Builder()
                    .safeBrowsing(ContentBlocking.SafeBrowsing.NONE)
                    .antiTracking(ContentBlocking.AntiTracking.NONE)
                    .build())
                .build()).also { runtime = it; keepEngineOffTheNetwork() }
        } catch (_: RuntimeException) { showFailure(R.string.startup_failed); return }
        val made = GeckoSession(GeckoSessionSettings.Builder()
            .usePrivateMode(false)
            .allowJavascript(true)
            .suspendMediaWhenInactive(true)
            .build())
        made.navigationDelegate = object : GeckoSession.NavigationDelegate {
            // the page stays on the app's own server; the About links go to a browser
            override fun onLoadRequest(session: GeckoSession, request: GeckoSession.NavigationDelegate.LoadRequest): GeckoResult<AllowOrDeny> {
                if (request.uri.startsWith(LocalServer.ORIGIN + "/")) return GeckoResult.allow()
                if (request.uri in externalLinks) openExternal(Uri.parse(request.uri))
                return GeckoResult.deny()
            }

            override fun onNewSession(session: GeckoSession, uri: String): GeckoResult<GeckoSession>? {
                if (uri in externalLinks) openExternal(Uri.parse(uri))
                return null
            }

            override fun onLoadError(session: GeckoSession, uri: String?, error: WebRequestError): GeckoResult<String>? {
                if (session === this@MainActivity.session) handler.post { showFailure(R.string.load_failed) }
                return null
            }
        }
        made.progressDelegate = object : GeckoSession.ProgressDelegate {
            override fun onPageStart(session: GeckoSession, url: String) { if (session === this@MainActivity.session) pageReady = false }
            override fun onPageStop(session: GeckoSession, success: Boolean) {
                if (session === this@MainActivity.session && session.let { true }) watchStartup(session)
            }
        }
        made.contentDelegate = object : GeckoSession.ContentDelegate {
            override fun onCrash(session: GeckoSession) = stopped(session)
            override fun onKill(session: GeckoSession) = stopped(session)
            private fun stopped(session: GeckoSession) {
                if (session === this@MainActivity.session) handler.post { showFailure(R.string.renderer_stopped) }
            }
        }
        made.permissionDelegate = object : GeckoSession.PermissionDelegate {
            // the page asks the engine to keep its storage (navigator.storage.persist()): yes, it is the app's own
            override fun onContentPermissionRequest(session: GeckoSession, perm: GeckoSession.PermissionDelegate.ContentPermission): GeckoResult<Int> =
                GeckoResult.fromValue(
                    if (perm.permission == GeckoSession.PermissionDelegate.PERMISSION_PERSISTENT_STORAGE && perm.uri.startsWith(LocalServer.ORIGIN + "/"))
                        GeckoSession.PermissionDelegate.ContentPermission.VALUE_ALLOW
                    else GeckoSession.PermissionDelegate.ContentPermission.VALUE_DENY)
        }
        made.open(engine)
        val view = GeckoView(this)
        view.coverUntilFirstPaint(Color.BLACK)
        view.setSession(made)
        session = made
        gameView = view
        pageReady = false
        root.addView(view, FrameLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT))
        made.setActive(foreground)
        view.requestFocus()
        // debug builds: `am start … -e query "autostart=1&world=1"` opens the page with that query (tools/android-check.mjs)
        val query = if (BuildConfig.DEBUG) intent?.getStringExtra("query")?.takeIf { Regex("[A-Za-z0-9=&._-]{1,200}").matches(it) } else null
        made.loadUri(when {
            legacy.pending() != null -> "${LocalServer.ORIGIN}/__android/legacy.html?t=$token"
            query != null -> "${LocalServer.ENTRY}?$query"
            else -> LocalServer.ENTRY
        })
    }

    /**
     * The game is complete inside the app and asks nothing of the internet, but a browser engine does
     * by itself (lists of settings and of unsafe sites, connectivity checks: 25 MB in the first minutes
     * on the emulator, before this was added). The JavaScript port's app could not reach the internet
     * at all. The loopback server needs the INTERNET permission, so the engine is told instead: every
     * address except this device itself goes to a proxy that does not exist. Kept in the engine's
     * profile, so from the second start on it holds from the first moment.
     */
    @OptIn(ExperimentalGeckoViewApi::class)
    private fun keepEngineOffTheNetwork() {
        val user = GeckoPreferenceController.PREF_BRANCH_USER
        val nowhere = "127.0.0.1"
        for ((name, value) in listOf<Pair<String, Any>>(
            "network.proxy.type" to 1,
            "network.proxy.http" to nowhere, "network.proxy.http_port" to 9,
            "network.proxy.ssl" to nowhere, "network.proxy.ssl_port" to 9,
            "network.proxy.no_proxies_on" to "127.0.0.1",
            "network.proxy.allow_hijacking_localhost" to false,
            "network.proxy.failover_direct" to false,
            "network.trr.mode" to 5,
            "network.dns.disablePrefetch" to true,
            "network.prefetch-next" to false,
            "network.captive-portal-service.enabled" to false,
            "network.connectivity-service.enabled" to false,
        )) when (value) {
            is Int -> GeckoPreferenceController.setGeckoPref(name, value, user)
            is Boolean -> GeckoPreferenceController.setGeckoPref(name, value, user)
            else -> GeckoPreferenceController.setGeckoPref(name, value.toString(), user)
        }
    }

    private fun watchStartup(watched: GeckoSession) {
        handler.postDelayed({
            if (watched === session && !pageReady) {
                if (foreground) showFailure(R.string.startup_failed) else watchStartup(watched)
            }
        }, 20_000)
    }

    /** Always immersive, as the JavaScript port's app was with its full-screen setting on (its default). */
    private fun applyDisplay() {
        WindowInsetsControllerCompat(window, root).apply {
            systemBarsBehavior = WindowInsetsControllerCompat.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
            hide(WindowInsetsCompat.Type.systemBars())
        }
        ViewCompat.requestApplyInsets(root)
    }

    private fun openExternal(uri: Uri) {
        try { startActivity(Intent(Intent.ACTION_VIEW, uri).addCategory(Intent.CATEGORY_BROWSABLE)) }
        catch (_: ActivityNotFoundException) { Toast.makeText(this, R.string.browser_missing, Toast.LENGTH_LONG).show() }
    }

    private fun disposeGameView() {
        val old = session
        session = null
        pageReady = false
        gameView?.let { view ->
            (view.parent as? ViewGroup)?.removeView(view)
            view.releaseSession()
        }
        gameView = null
        old?.close()
    }

    private fun showFailure(message: Int) {
        generation++
        disposeGameView()
        root.removeAllViews()
        val padding = (24 * resources.displayMetrics.density).toInt()
        val panel = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
            gravity = Gravity.CENTER
            setPadding(padding, padding, padding, padding)
        }
        panel.addView(TextView(this).apply {
            text = getString(R.string.error_title)
            textSize = 24f
            setTextColor(Color.WHITE)
        })
        panel.addView(TextView(this).apply {
            text = getString(message)
            textSize = 16f
            setTextColor(Color.WHITE)
            setPadding(0, padding, 0, padding)
        })
        panel.addView(Button(this).apply { setText(R.string.retry); setOnClickListener { createGameView() } })
        panel.addView(Button(this).apply { setText(R.string.close); setOnClickListener { finish() } })
        root.addView(panel, FrameLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT))
    }

    override fun onResume() {
        super.onResume()
        volumeControlStream = AudioManager.STREAM_MUSIC
        foreground = true
        // an inactive session is a hidden page: the page itself then stops the game, saves and
        // silences its sound (source/web/game.js, source/menu/menu.js)
        session?.setActive(true)
        applyDisplay()
    }

    override fun onWindowFocusChanged(hasFocus: Boolean) {
        super.onWindowFocusChanged(hasFocus)
        if (hasFocus && ::root.isInitialized) applyDisplay()
    }

    override fun onPause() {
        foreground = false
        session?.setActive(false)
        super.onPause()
    }

    override fun onDestroy() {
        generation++
        handler.removeCallbacksAndMessages(null)
        disposeGameView()
        server?.stop()
        server = null
        super.onDestroy()
    }
}
