package com.nostalgiarealm.redcatspookkasteel

import java.net.URI

/** One persistent origin owns both packaged files and the game's saved data. */
internal object GameUrls {
    const val HOST = "appassets.androidplatform.net"
    const val ORIGIN = "https://$HOST"
    const val ENTRY = "$ORIGIN/assets/www/index.html"
    private val externalLinks = setOf(
        "https://ko-fi.com/nostalgiarealm",
        "https://www.nostalgiarealm.com/",
        "https://github.com/NostalgiaRealm/RedCat-Spookkasteel",
        "https://www.youtube.com/@Nostalgia_Realm",
    )

    private fun parse(url: String): URI? = runCatching { URI(url) }.getOrNull()

    private fun trustedOrigin(uri: URI): Boolean =
        uri.scheme == "https" && uri.host == HOST && uri.port in setOf(-1, 443) &&
            uri.rawUserInfo == null

    fun isGameOrigin(url: String): Boolean = parse(url)?.let(::trustedOrigin) == true

    fun assetPath(url: String): String? {
        val uri = parse(url) ?: return null
        if (!trustedOrigin(uri)) return null
        val path = uri.path ?: return null
        if (!path.startsWith("/assets/www/")) return null
        val relative = path.removePrefix("/assets/")
        return relative.takeIf(::isSafeAssetPath)
    }

    fun isSafeAssetPath(path: String): Boolean =
        path.startsWith("www/") && '\\' !in path && path.none { it.code < 32 || it.code == 127 } &&
            path.split('/').all { it.isNotEmpty() && it != "." && it != ".." }

    fun isGamePage(url: String): Boolean = assetPath(url) == "www/index.html"
    fun isExternalLink(url: String): Boolean = url in externalLinks
}
