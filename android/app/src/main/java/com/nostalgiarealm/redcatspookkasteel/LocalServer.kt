package com.nostalgiarealm.redcatspookkasteel

import android.content.res.AssetManager
import java.io.BufferedInputStream
import java.io.ByteArrayInputStream
import java.io.ByteArrayOutputStream
import java.io.IOException
import java.io.InputStream
import java.io.OutputStream
import java.net.InetAddress
import java.net.ServerSocket
import java.net.Socket
import java.net.SocketException
import java.net.URLDecoder
import java.util.Locale
import java.util.concurrent.ExecutorService
import java.util.concurrent.Executors

/**
 * The web server of the app: answers the page's requests from the packaged site (assets/www), on the
 * loopback address only. Every answer carries the two headers that make the page cross-origin isolated:
 * the page shares memory with the game thread and does not start without them (docs/hosting.md).
 * GeckoView has no hook to answer requests itself, and a page from resource:// or file:// is never
 * isolated; a page from http://127.0.0.1 is a secure context and can be.
 *
 * The port is fixed: the page's saved games belong to its origin (scheme, host and port).
 * Paths below /__android/ are the app's own: [Routes] answers them.
 */
internal class LocalServer(private val assets: AssetManager, private val routes: Routes) {
    /** The app's own answers. A null return is a 404. */
    interface Routes {
        fun handle(method: String, path: String, query: String, body: ByteArray): Answer?
        /** Text put at the start of the page's <head>, or "". */
        fun pageHead(): String
    }
    class Answer(val status: Int, val type: String, val body: ByteArray)

    companion object {
        const val PORT = 28517
        const val HOST = "127.0.0.1"
        const val ORIGIN = "http://$HOST:$PORT"
        const val ENTRY = "$ORIGIN/index.html"
        private const val MAX_HEAD = 16 * 1024
        private const val MAX_BODY = 48 * 1024 * 1024

        fun isSafePath(path: String): Boolean =
            path.isNotEmpty() && '\\' !in path && path.none { it.code < 32 || it.code == 127 } &&
                path.split('/').all { it.isNotEmpty() && it != "." && it != ".." && !it.startsWith(".") }

        fun mimeType(path: String): String = when (path.substringAfterLast('.').lowercase(Locale.ROOT)) {
            "html" -> "text/html; charset=utf-8"
            "js", "mjs" -> "text/javascript; charset=utf-8"
            "css" -> "text/css; charset=utf-8"
            "json" -> "application/json; charset=utf-8"
            "wasm" -> "application/wasm"
            "png" -> "image/png"
            "jpg", "jpeg" -> "image/jpeg"
            "bmp" -> "image/bmp"
            "svg" -> "image/svg+xml"
            "ico" -> "image/x-icon"
            "wav" -> "audio/wav"
            "mp4" -> "video/mp4"
            "webm" -> "video/webm"
            "txt", "md" -> "text/plain; charset=utf-8"
            else -> "application/octet-stream"
        }
    }

    private var socket: ServerSocket? = null
    private var workers: ExecutorService? = null

    /** Throws IOException when the port is taken. */
    @Synchronized fun start() {
        if (socket != null) return
        val server = ServerSocket(PORT, 64, InetAddress.getByName(HOST))
        val pool = Executors.newCachedThreadPool { r -> Thread(r, "game-server").apply { isDaemon = true } }
        socket = server
        workers = pool
        pool.execute {
            while (!server.isClosed) {
                val client = try { server.accept() } catch (_: IOException) { break }
                pool.execute { serve(client) }
            }
        }
    }

    @Synchronized fun stop() {
        runCatching { socket?.close() }
        workers?.shutdownNow()
        socket = null
        workers = null
    }

    private fun serve(client: Socket) {
        try {
            client.tcpNoDelay = true
            client.soTimeout = 120_000
            val input = BufferedInputStream(client.getInputStream(), 8192)
            val output = client.getOutputStream()
            while (true) {
                val head = readHead(input) ?: break
                val lines = head.split("\r\n")
                val request = lines[0].split(' ')
                if (request.size != 3) { send(output, 400, "Bad Request", close = true); break }
                val headers = HashMap<String, String>()
                for (line in lines.drop(1)) { val k = line.indexOf(':'); if (k > 0) headers[line.substring(0, k).trim().lowercase(Locale.ROOT)] = line.substring(k + 1).trim() }
                val length = headers["content-length"]?.toIntOrNull() ?: 0
                if (length < 0 || length > MAX_BODY || headers.containsKey("transfer-encoding")) { send(output, 413, "Payload Too Large", close = true); break }
                val body = ByteArray(length)
                var got = 0
                while (got < length) { val n = input.read(body, got, length - got); if (n < 0) return; got += n }
                // only the page of this app: a request made through another name for this address is refused
                val host = headers["host"]
                if (host != "$HOST:$PORT" && host != "localhost:$PORT") { send(output, 403, "Forbidden", close = true); break }
                val close = headers["connection"].equals("close", true) || request[2] == "HTTP/1.0"
                answer(output, request[0], request[1], headers["range"], body, close)
                if (close) break
            }
        } catch (_: SocketException) {
        } catch (_: IOException) {
        } finally { runCatching { client.close() } }
    }

    private fun readHead(input: InputStream): String? {
        val bytes = ByteArrayOutputStream(512)
        var state = 0
        while (bytes.size() < MAX_HEAD) {
            val b = input.read()
            if (b < 0) return null
            bytes.write(b)
            state = when {
                b == '\r'.code && (state == 0 || state == 2) -> state + 1
                b == '\n'.code && (state == 1 || state == 3) -> state + 1
                b == '\r'.code -> 1
                else -> 0
            }
            if (state == 4) return String(bytes.toByteArray(), 0, bytes.size() - 4, Charsets.ISO_8859_1)
        }
        return null
    }

    private fun answer(output: OutputStream, method: String, target: String, rangeHeader: String?, body: ByteArray, close: Boolean) {
        val mark = target.indexOf('?')
        val rawPath = if (mark < 0) target else target.substring(0, mark)
        val query = if (mark < 0) "" else target.substring(mark + 1)
        val path = try { URLDecoder.decode(rawPath.replace("+", "%2B"), "UTF-8") } catch (_: IllegalArgumentException) { return send(output, 400, "Bad Request", close = close) }
        if (path.startsWith("/__android/")) {
            val result = runCatching { routes.handle(method, path.removePrefix("/__android/"), query, body) }.getOrNull()
                ?: return send(output, 404, "Not Found", close = close)
            return send(output, result.status, "OK", result.type, ByteArrayInputStream(result.body), result.body.size.toLong(), close = close, head = method == "HEAD")
        }
        if (method != "GET" && method != "HEAD") return send(output, 405, "Method Not Allowed", close = close)
        val relative = if (path == "/") "index.html" else path.removePrefix("/")
        if (!path.startsWith("/") || !isSafePath(relative)) return send(output, 403, "Forbidden", close = close)
        val asset = "www/$relative"
        val head = method == "HEAD"
        try {
            if (relative == "index.html") {
                // the page as packaged, with the app's own script first in its <head>
                val page = assets.open(asset).use { it.readBytes() }.toString(Charsets.UTF_8)
                val at = page.indexOf("<head>").let { if (it < 0) 0 else it + 6 }
                val bytes = (page.substring(0, at) + routes.pageHead() + page.substring(at)).toByteArray(Charsets.UTF_8)
                return send(output, 200, "OK", mimeType(asset), ByteArrayInputStream(bytes), bytes.size.toLong(), close = close, head = head)
            }
            // The movies are stored uncompressed in the APK: their length is known without reading
            // them and a part can be sent. Everything else is stored compressed and is read whole.
            val descriptor = try { assets.openFd(asset) } catch (_: IOException) { null }
            if (descriptor == null) {
                val bytes = assets.open(asset, AssetManager.ACCESS_BUFFER).use { it.readBytes() }
                return send(output, 200, "OK", mimeType(asset), ByteArrayInputStream(bytes), bytes.size.toLong(), close = close, head = head)
            }
            descriptor.use {
                val total = it.length
                val range = if (rangeHeader != null) HttpByteRange.parse(rangeHeader, total) else null
                if (rangeHeader != null && range == null) return send(output, 416, "Range Not Satisfiable", extra = "Content-Range: bytes */$total\r\n", close = close)
                it.createInputStream().use { stream ->
                    if (range == null) return send(output, 200, "OK", mimeType(asset), stream, total, "Accept-Ranges: bytes\r\n", close, head)
                    stream.skipExactly(range.first)
                    return send(output, 206, "Partial Content", mimeType(asset), LimitedInputStream(stream, range.length), range.length,
                        "Accept-Ranges: bytes\r\nContent-Range: bytes ${range.first}-${range.last}/$total\r\n", close, head)
                }
            }
        } catch (error: java.io.FileNotFoundException) {
            send(output, 404, "Not Found", close = close)
        }
    }

    private fun send(output: OutputStream, status: Int, reason: String, type: String = "text/plain; charset=utf-8",
                     body: InputStream? = null, length: Long = 0, extra: String = "", close: Boolean = false, head: Boolean = false) {
        val text = "HTTP/1.1 $status $reason\r\n" +
            "Content-Type: $type\r\nContent-Length: $length\r\n" +
            "Cross-Origin-Opener-Policy: same-origin\r\nCross-Origin-Embedder-Policy: require-corp\r\n" +
            "Cross-Origin-Resource-Policy: same-origin\r\nX-Content-Type-Options: nosniff\r\n" +
            // nothing is kept by the engine: the files are in the app already, and a copy of each in its cache would double them on the phone
            "Cache-Control: no-store\r\n" + extra +
            (if (close) "Connection: close\r\n" else "") + "\r\n"
        output.write(text.toByteArray(Charsets.ISO_8859_1))
        if (!head && body != null) body.copyTo(output, 64 * 1024)
        output.flush()
    }
}
