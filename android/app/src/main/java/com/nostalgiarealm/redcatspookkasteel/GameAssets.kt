package com.nostalgiarealm.redcatspookkasteel

import android.content.Context
import android.content.res.AssetManager
import android.webkit.WebResourceRequest
import android.webkit.WebResourceResponse
import androidx.webkit.WebViewAssetLoader
import java.io.ByteArrayInputStream
import java.io.IOException
import java.io.InputStream
import java.util.Locale

/** Serves local content only. Missing or rejected paths never fall through to the network. */
internal class GameAssets(context: Context) {
    private val assets = context.assets
    private val loader = WebViewAssetLoader.Builder()
        .setDomain(GameUrls.HOST)
        .setHttpAllowed(false)
        .addPathHandler("/assets/") { path -> open(path) }
        .build()

    fun intercept(request: WebResourceRequest): WebResourceResponse? {
        // WebView resolves these local opaque URLs itself; the page CSP limits their use.
        if (request.url.scheme in setOf("data", "blob")) return null
        val path = GameUrls.assetPath(request.url.toString()) ?: return error(403, "Forbidden")
        if (request.method !in setOf("GET", "HEAD")) return error(405, "Method Not Allowed")
        val range = request.requestHeaders.entries.firstOrNull { it.key.equals("Range", true) }?.value
        if (range != null || request.method == "HEAD") return open(path, range, request.method == "HEAD")
        return loader.shouldInterceptRequest(request.url) ?: error(404, "Not Found")
    }

    private fun open(path: String, rangeHeader: String? = null, head: Boolean = false): WebResourceResponse {
        if (!GameUrls.isSafeAssetPath(path)) return error(403, "Forbidden")
        var stream: InputStream? = null
        try {
            // Media and binary files are stored uncompressed in the APK. Compressed
            // text/image assets remain readable, but may ignore an optional Range header.
            val descriptor = try { assets.openFd(path) } catch (_: IOException) { null }
            val total = descriptor?.length?.takeIf { it >= 0 }
            stream = if (descriptor != null) {
                try { descriptor.createInputStream() } catch (error: IOException) {
                    descriptor.close()
                    throw error
                }
            } else assets.open(path, AssetManager.ACCESS_STREAMING)
            val headers = mutableMapOf("Cache-Control" to "no-cache", "X-Content-Type-Options" to "nosniff")
            if (total != null) {
                headers["Accept-Ranges"] = "bytes"
                headers["Content-Length"] = total.toString()
            }
            var status = 200
            var reason = "OK"
            if (rangeHeader != null && total != null && !head) {
                val range = HttpByteRange.parse(rangeHeader, total)
                if (range == null) {
                    stream.close()
                    return error(416, "Range Not Satisfiable", mapOf("Content-Range" to "bytes */$total"))
                }
                stream.skipExactly(range.first)
                stream = LimitedInputStream(stream, range.length)
                status = 206
                reason = "Partial Content"
                headers["Content-Range"] = "bytes ${range.first}-${range.last}/$total"
                headers["Content-Length"] = range.length.toString()
            }
            if (head) {
                stream.close()
                stream = ByteArrayInputStream(byteArrayOf())
            }
            val mime = mimeType(path)
            return WebResourceResponse(mime, if (mime.startsWith("text/") || mime == "application/json") "UTF-8" else null,
                status, reason, headers, stream)
        } catch (_: IOException) {
            stream?.close()
            return error(404, "Not Found")
        }
    }

    private fun mimeType(path: String): String = when (path.substringAfterLast('.').lowercase(Locale.ROOT)) {
        "html" -> "text/html"
        "js", "mjs" -> "text/javascript"
        "css" -> "text/css"
        "json", "map" -> "application/json"
        "png" -> "image/png"
        "jpg", "jpeg" -> "image/jpeg"
        "svg" -> "image/svg+xml"
        "webp" -> "image/webp"
        "ico" -> "image/x-icon"
        "wav" -> "audio/wav"
        "ogg" -> "audio/ogg"
        "mp4" -> "video/mp4"
        "webm" -> "video/webm"
        "woff2" -> "font/woff2"
        else -> "application/octet-stream"
    }

    private fun error(status: Int, reason: String, extra: Map<String, String> = emptyMap()): WebResourceResponse =
        WebResourceResponse("text/plain", "UTF-8", status, reason,
            mapOf("Content-Length" to "0", "Cache-Control" to "no-store") + extra,
            ByteArrayInputStream(byteArrayOf()))
}
