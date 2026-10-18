package com.nostalgiarealm.redcatspookkasteel

import org.junit.Assert.*
import org.junit.Test

class GameUrlsTest {
    @Test fun localFilesKeepDecodedSpacesAndRelativeLayout() {
        assertEquals("www/assets/audio/level 3 - the graveyard.wav",
            GameUrls.assetPath("${GameUrls.ORIGIN}/assets/www/assets/audio/level%203%20-%20the%20graveyard.wav"))
        assertEquals("www/index.html", GameUrls.assetPath("${GameUrls.ENTRY}?skipIntro#menu"))
        assertTrue(GameUrls.isGamePage(GameUrls.ENTRY))
        assertFalse(GameUrls.isGamePage("${GameUrls.ORIGIN}/assets/www/src/main.js"))
    }

    @Test fun pathsCannotEscapeThePackagedGame() {
        for (path in listOf("../secret", "www/../secret", "www/./index.html", "www//index.html",
            "www/a\\secret", "www/file\u0000.js", "www/", "/www/index.html")) {
            assertFalse(path, GameUrls.isSafeAssetPath(path))
        }
        for (path in listOf("/assets/www/%2e%2e/secret", "/assets/www/%2E/index.html",
            "/assets/www/a%5C..%5Csecret", "/assets/www/%00hidden", "/assets/secret", "/other/www/index.html")) {
            assertNull(path, GameUrls.assetPath(GameUrls.ORIGIN + path))
        }
    }

    @Test fun trustIsLimitedToTheHttpsAppOrigin() {
        assertTrue(GameUrls.isGameOrigin(GameUrls.ORIGIN))
        assertTrue(GameUrls.isGameOrigin("${GameUrls.ORIGIN}:443"))
        for (url in listOf("http://${GameUrls.HOST}", "${GameUrls.ORIGIN}:8443",
            "https://${GameUrls.HOST}.example.com", "https://${GameUrls.HOST}@evil.example",
            "file:///assets/www/index.html", "javascript:alert(1)", "not a url")) {
            assertFalse(url, GameUrls.isGameOrigin(url))
            assertNull(url, GameUrls.assetPath(url))
        }
    }

    @Test fun onlyTheAboutDestinationsCanOpenExternally() {
        assertTrue(GameUrls.isExternalLink("https://ko-fi.com/nostalgiarealm"))
        assertTrue(GameUrls.isExternalLink("https://www.nostalgiarealm.com/"))
        assertTrue(GameUrls.isExternalLink("https://github.com/NostalgiaRealm/RedCat-Spookkasteel"))
        assertTrue(GameUrls.isExternalLink("https://www.youtube.com/@Nostalgia_Realm"))
        assertFalse(GameUrls.isExternalLink("http://www.nostalgiarealm.com/"))
        assertFalse(GameUrls.isExternalLink("https://www.nostalgiarealm.com.evil.example/"))
        assertFalse(GameUrls.isExternalLink("intent://anything"))
    }
}
