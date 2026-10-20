package com.nostalgiarealm.redcatspookkasteel

import android.annotation.SuppressLint
import android.content.ActivityNotFoundException
import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.content.IntentFilter
import android.graphics.Color
import android.media.AudioAttributes
import android.media.AudioFocusRequest
import android.media.AudioManager
import android.net.Uri
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.os.Message
import android.view.Gravity
import android.view.ViewGroup
import android.view.WindowManager
import android.webkit.RenderProcessGoneDetail
import android.webkit.WebChromeClient
import android.webkit.WebResourceError
import android.webkit.WebResourceRequest
import android.webkit.WebResourceResponse
import android.webkit.WebSettings
import android.webkit.WebView
import android.webkit.WebViewClient
import android.widget.Button
import android.widget.FrameLayout
import android.widget.LinearLayout
import android.widget.TextView
import android.widget.Toast
import androidx.activity.ComponentActivity
import androidx.activity.OnBackPressedCallback
import androidx.activity.result.contract.ActivityResultContracts
import androidx.core.content.ContextCompat
import androidx.core.net.toUri
import androidx.core.view.ViewCompat
import androidx.core.view.WindowCompat
import androidx.core.view.WindowInsetsCompat
import androidx.core.view.WindowInsetsControllerCompat
import androidx.webkit.WebViewCompat
import androidx.webkit.WebViewFeature
import org.json.JSONObject
import java.io.ByteArrayInputStream
import java.util.concurrent.Executors

class MainActivity : ComponentActivity() {
    private companion object {
        const val MAX_EXPORT_BYTES = 32 * 1024 * 1024
        // JSON.stringify escapes the file text a second time for the message.
        const val MAX_EXPORT_MESSAGE_CHARS = MAX_EXPORT_BYTES * 2 + 4096
    }
    private data class PendingExport(val id: String, val view: WebView, val bytes: ByteArray)
    private val exportWriter = Executors.newSingleThreadExecutor()
    private var pendingExport: PendingExport? = null
    private val exportDocument = registerForActivityResult(ActivityResultContracts.CreateDocument("application/json")) { uri ->
        val request = pendingExport
        pendingExport = null
        if (request != null && request.view === webView) {
            if (uri == null) exportResult(request.id, request.view, canceled = true)
            else exportWriter.execute {
                val error = runCatching {
                    contentResolver.openOutputStream(uri, "wt")?.use { it.write(request.bytes) }
                        ?: throw java.io.IOException("De gekozen locatie kan niet worden beschreven.")
                }.exceptionOrNull()
                handler.post {
                    exportResult(request.id, request.view,
                        error = if (error == null) null else "Het avontuur kon niet worden opgeslagen op de gekozen locatie.")
                }
            }
        }
    }
    private lateinit var root: FrameLayout
    private lateinit var audioManager: AudioManager
    private lateinit var focusRequest: AudioFocusRequest
    private val handler = Handler(Looper.getMainLooper())
    private var webView: WebView? = null
    private val popups = mutableSetOf<WebView>()
    private var foreground = false
    private var audioFocus = false
    private var pageReady = false
    private var fullscreen = true
    private var keepAwakeRequested = false
    private var noisyReceiverRegistered = false
    private var focusOverlay: LinearLayout? = null

    private val noisyReceiver = object : BroadcastReceiver() {
        override fun onReceive(context: Context, intent: Intent) {
            if (intent.action != AudioManager.ACTION_AUDIO_BECOMING_NOISY || !foreground) return
            // Pause on headphone removal. Restoring availability never resumes
            // gameplay automatically: the web adapter waits for the player's action.
            sendEvent(JSONObject().put("type", "lifecycle").put("active", false))
            handler.post { publishLifecycle() }
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        root = FrameLayout(this).apply { setBackgroundColor(Color.rgb(16, 28, 34)) }
        WindowCompat.setDecorFitsSystemWindows(window, false)
        setContentView(root)
        ViewCompat.setOnApplyWindowInsetsListener(root) { view, insets ->
            // The WebView's actual viewport excludes system bars, cutouts and
            // mandatory gesture edges. CSS safe-area padding remains an extra safeguard.
            val safe = insets.getInsets(WindowInsetsCompat.Type.systemBars() or
                WindowInsetsCompat.Type.displayCutout() or WindowInsetsCompat.Type.mandatorySystemGestures())
            view.setPadding(safe.left, safe.top, safe.right, safe.bottom)
            insets
        }
        audioManager = getSystemService(AudioManager::class.java)
        focusRequest = AudioFocusRequest.Builder(AudioManager.AUDIOFOCUS_GAIN)
            .setAudioAttributes(AudioAttributes.Builder().setUsage(AudioAttributes.USAGE_GAME)
                .setContentType(AudioAttributes.CONTENT_TYPE_MUSIC).build())
            .setAcceptsDelayedFocusGain(true)
            .setWillPauseWhenDucked(true)
            .setOnAudioFocusChangeListener({ change ->
                audioFocus = foreground && change == AudioManager.AUDIOFOCUS_GAIN
                publishLifecycle()
            }, handler)
            .build()
        ContextCompat.registerReceiver(this, noisyReceiver,
            IntentFilter(AudioManager.ACTION_AUDIO_BECOMING_NOISY), ContextCompat.RECEIVER_NOT_EXPORTED)
        noisyReceiverRegistered = true
        onBackPressedDispatcher.addCallback(this, object : OnBackPressedCallback(true) {
            override fun handleOnBackPressed() {
                if (pageReady && webView != null) sendEvent(JSONObject().put("type", "back"))
                else finish()
            }
        })
        createGameView()
        applyDisplay()
    }

    @SuppressLint("SetJavaScriptEnabled")
    private fun createGameView() {
        disposeGameView()
        root.removeAllViews()
        val supported = runCatching { WebViewFeature.isFeatureSupported(WebViewFeature.WEB_MESSAGE_LISTENER) }.getOrDefault(false)
        if (!supported) {
            showFailure(R.string.old_webview)
            return
        }
        val view = try {
            WebView.setWebContentsDebuggingEnabled(BuildConfig.DEBUG)
            WebView(this)
        } catch (_: RuntimeException) {
            showFailure(R.string.old_webview)
            return
        }
        webView = view
        pageReady = false
        view.setBackgroundColor(Color.rgb(16, 28, 34))
        view.settings.apply {
            javaScriptEnabled = true
            domStorageEnabled = true
            allowFileAccess = false
            allowContentAccess = false
            mixedContentMode = WebSettings.MIXED_CONTENT_NEVER_ALLOW
            mediaPlaybackRequiresUserGesture = true
            javaScriptCanOpenWindowsAutomatically = false
            setSupportMultipleWindows(true)
            setSupportZoom(false)
        }
        val gameAssets = GameAssets(applicationContext)
        view.webViewClient = object : WebViewClient() {
            override fun shouldInterceptRequest(view: WebView, request: WebResourceRequest): WebResourceResponse? =
                gameAssets.intercept(request)

            override fun shouldOverrideUrlLoading(view: WebView, request: WebResourceRequest): Boolean {
                if (request.isForMainFrame && GameUrls.isGamePage(request.url.toString())) return false
                if (request.isForMainFrame && request.hasGesture()) openExternal(request.url)
                return true
            }

            override fun onPageStarted(view: WebView, url: String, favicon: android.graphics.Bitmap?) {
                if (view === webView) pageReady = false
            }

            override fun onPageFinished(view: WebView, url: String) {
                if (view === webView) watchStartup(view)
            }

            override fun onReceivedError(view: WebView, request: WebResourceRequest, error: WebResourceError) {
                if (view === webView && request.isForMainFrame) showFailure(R.string.load_failed)
            }

            override fun onReceivedHttpError(view: WebView, request: WebResourceRequest, response: WebResourceResponse) {
                if (view === webView && request.isForMainFrame) showFailure(R.string.load_failed)
            }

            override fun onRenderProcessGone(view: WebView, detail: RenderProcessGoneDetail): Boolean {
                if (view === webView) {
                    disposeGameView(rendererGone = true)
                    showFailure(R.string.renderer_stopped)
                }
                return true
            }
        }
        view.webChromeClient = object : WebChromeClient() {
            override fun onCreateWindow(view: WebView, isDialog: Boolean, isUserGesture: Boolean, resultMsg: Message): Boolean {
                if (!isUserGesture) return false
                val transport = resultMsg.obj as? WebView.WebViewTransport ?: return false
                // About links use target=_blank. This temporary view has no JS,
                // bridge or network access; it only hands approved URLs to a browser.
                val popup = WebView(this@MainActivity)
                popups.add(popup)
                popup.settings.allowFileAccess = false
                popup.settings.allowContentAccess = false
                popup.webViewClient = object : WebViewClient() {
                    override fun shouldOverrideUrlLoading(view: WebView, request: WebResourceRequest): Boolean {
                        if (request.isForMainFrame) openExternal(request.url)
                        closePopup(view)
                        return true
                    }
                    override fun shouldInterceptRequest(view: WebView, request: WebResourceRequest) =
                        WebResourceResponse("text/plain", "UTF-8", 403, "Forbidden", emptyMap(), ByteArrayInputStream(byteArrayOf()))
                    override fun onPageStarted(view: WebView, url: String, favicon: android.graphics.Bitmap?) {
                        if (url != "about:blank") { openExternal(url.toUri()); closePopup(view) }
                    }
                    override fun onRenderProcessGone(view: WebView, detail: RenderProcessGoneDetail): Boolean {
                        closePopup(view)
                        return true
                    }
                }
                transport.webView = popup
                resultMsg.sendToTarget()
                handler.postDelayed({ closePopup(popup) }, 5_000)
                return true
            }
        }
        if (WebViewFeature.isFeatureSupported(WebViewFeature.WEB_MESSAGE_LISTENER)) {
            WebViewCompat.addWebMessageListener(view, "RedCatAndroid", setOf(GameUrls.ORIGIN)) {
                    sender, message, sourceOrigin, isMainFrame, _ ->
                if (sender === webView && isMainFrame && GameUrls.isGameOrigin(sourceOrigin.toString())) {
                    val data = runCatching { message.data }.getOrNull()
                    // Only this explicit, bounded operation may exceed the
                    // ordinary 4 KiB bridge-message limit.
                    if (data != null && (data.length <= 4096 ||
                            (data.length <= MAX_EXPORT_MESSAGE_CHARS && data.startsWith("{\"type\":\"export-save\",")))) {
                        receiveMessage(data)
                    }
                }
            }
        } else {
            showFailure(R.string.old_webview)
            return
        }
        root.addView(view, FrameLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT))
        if (!foreground) view.onPause()
        view.loadUrl(GameUrls.ENTRY)
        updateFocusOverlay()
    }

    private fun receiveMessage(data: String) {
        val message = runCatching { JSONObject(data) }.getOrNull() ?: return
        if (data.length > 4096 && message.optString("type") != "export-save") return
        when (message.optString("type")) {
            "ready" -> { pageReady = true; publishLifecycle() }
            "fullscreen" -> if (message.opt("enabled") is Boolean) {
                fullscreen = message.getBoolean("enabled")
                applyDisplay()
            }
            "keep-awake" -> if (message.opt("enabled") is Boolean) {
                keepAwakeRequested = message.getBoolean("enabled")
                updateKeepAwake()
            }
            // The web adapter completes its normal save before sending quit.
            "quit" -> finish()
            "export-save" -> exportSave(message)
        }
    }

    private fun exportSave(message: JSONObject) {
        val view = webView ?: return
        val id = message.optString("id")
        if (!Regex("[A-Za-z0-9_-]{1,80}").matches(id)) return
        if (pendingExport != null) {
            exportResult(id, view, error = "Er is al een exportvenster geopend.")
            return
        }
        val filename = message.optString("filename")
        val text = message.optString("text")
        if (!Regex("RedCat-Spookkasteel-[A-Za-z0-9_-]{1,100}\\.json").matches(filename) ||
                text.isEmpty() || text.length > MAX_EXPORT_BYTES) {
            exportResult(id, view, error = "Het exportbestand is ongeldig of te groot (maximaal 32 MiB).")
            return
        }
        val bytes = text.toByteArray(Charsets.UTF_8)
        val bundle = runCatching { JSONObject(text) }.getOrNull()
        val save = bundle?.optJSONObject("save")
        if (bytes.size > MAX_EXPORT_BYTES || bundle?.optString("format") != "redcat-spookkasteel-save" ||
                bundle.optInt("formatVersion") != 1 || save?.optInt("version") != 1 ||
                save.optJSONObject("game") == null || save.optJSONArray("position")?.length() != 3 ||
                bundle.optJSONObject("player")?.opt("name") !is String) {
            exportResult(id, view, error = "Het bestand is geen geldig opgeslagen RedCat-avontuur.")
            return
        }
        pendingExport = PendingExport(id, view, bytes)
        try { exportDocument.launch(filename) }
        catch (_: RuntimeException) {
            pendingExport = null
            exportResult(id, view, error = "Het Android-bestandsvenster kon niet worden geopend.")
        }
    }

    private fun exportResult(id: String, view: WebView, canceled: Boolean = false, error: String? = null) {
        if (view !== webView) return
        sendEvent(JSONObject().put("type", "export-result").put("id", id)
            .put("ok", !canceled && error == null).put("canceled", canceled).put("error", error))
    }

    private fun watchStartup(view: WebView) {
        handler.postDelayed({
            if (view === webView && !pageReady) {
                if (foreground) showFailure(R.string.startup_failed) else watchStartup(view)
            }
        }, 20_000)
    }

    private fun sendEvent(event: JSONObject) {
        if (!pageReady) return
        webView?.evaluateJavascript("window.dispatchEvent(new CustomEvent('redcat:android',{detail:$event}));", null)
    }

    private fun publishLifecycle() {
        sendEvent(JSONObject().put("type", "lifecycle").put("active", foreground && audioFocus))
        updateKeepAwake()
        updateFocusOverlay()
    }

    private fun requestGameAudioFocus() {
        audioFocus = audioManager.requestAudioFocus(focusRequest) == AudioManager.AUDIOFOCUS_REQUEST_GRANTED
        publishLifecycle()
    }

    private fun updateFocusOverlay() {
        if (!foreground || audioFocus || webView == null) {
            focusOverlay?.let(root::removeView)
            focusOverlay = null
            return
        }
        if (focusOverlay != null) return
        val padding = (24 * resources.displayMetrics.density).toInt()
        val panel = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
            gravity = Gravity.CENTER
            setPadding(padding, padding, padding, padding)
            setBackgroundColor(Color.rgb(16, 28, 34))
            isClickable = true
        }
        panel.addView(TextView(this).apply {
            setText(R.string.audio_paused_title)
            textSize = 24f
            setTextColor(Color.WHITE)
        })
        panel.addView(TextView(this).apply {
            setText(R.string.audio_paused)
            textSize = 16f
            setTextColor(Color.WHITE)
            setPadding(0, padding, 0, padding)
        })
        panel.addView(Button(this).apply {
            setText(R.string.retry_audio)
            setOnClickListener {
                audioManager.abandonAudioFocusRequest(focusRequest)
                requestGameAudioFocus()
            }
        })
        panel.addView(Button(this).apply { setText(R.string.close); setOnClickListener { finish() } })
        focusOverlay = panel
        root.addView(panel, FrameLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT))
    }

    private fun updateKeepAwake() {
        if (foreground && audioFocus && pageReady && keepAwakeRequested) {
            window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)
        } else window.clearFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)
    }

    private fun applyDisplay() {
        WindowInsetsControllerCompat(window, root).apply {
            systemBarsBehavior = WindowInsetsControllerCompat.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
            if (fullscreen) hide(WindowInsetsCompat.Type.systemBars()) else show(WindowInsetsCompat.Type.systemBars())
        }
        ViewCompat.requestApplyInsets(root)
    }

    private fun openExternal(uri: Uri) {
        if (!GameUrls.isExternalLink(uri.toString())) return
        try { startActivity(Intent(Intent.ACTION_VIEW, uri).addCategory(Intent.CATEGORY_BROWSABLE)) }
        catch (_: ActivityNotFoundException) { Toast.makeText(this, R.string.browser_missing, Toast.LENGTH_LONG).show() }
    }

    private fun closePopup(popup: WebView) {
        if (popups.remove(popup)) popup.destroy()
    }

    private fun disposeGameView(rendererGone: Boolean = false) {
        val old = webView
        webView = null
        pendingExport = null
        pageReady = false
        keepAwakeRequested = false
        updateKeepAwake()
        updateFocusOverlay()
        if (old != null) {
            (old.parent as? ViewGroup)?.removeView(old)
            if (!rendererGone) {
                old.stopLoading()
                if (WebViewFeature.isFeatureSupported(WebViewFeature.WEB_MESSAGE_LISTENER)) {
                    WebViewCompat.removeWebMessageListener(old, "RedCatAndroid")
                }
            }
            old.destroy()
        }
        popups.toList().forEach(::closePopup)
    }

    private fun showFailure(message: Int) {
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
        foreground = true
        webView?.onResume()
        requestGameAudioFocus()
        applyDisplay()
    }

    override fun onPause() {
        foreground = false
        audioFocus = false
        publishLifecycle()
        webView?.onPause()
        audioManager.abandonAudioFocusRequest(focusRequest)
        super.onPause()
    }

    override fun onDestroy() {
        handler.removeCallbacksAndMessages(null)
        if (noisyReceiverRegistered) unregisterReceiver(noisyReceiver)
        audioManager.abandonAudioFocusRequest(focusRequest)
        disposeGameView()
        exportWriter.shutdown()
        super.onDestroy()
    }
}
