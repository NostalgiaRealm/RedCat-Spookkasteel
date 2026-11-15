package com.nostalgiarealm.redcatspookkasteel

import org.junit.Assert.*
import org.junit.Test

class LocalServerTest {
    @Test fun pathsStayInsideThePackagedSite() {
        for (path in listOf("index.html", "data/Levels/lvl02a.bsp", "assets/audio/level 3 - the graveyard.wav", "app/61e25855e2c5/game/spook.wasm")) {
            assertTrue(path, LocalServer.isSafePath(path))
        }
        for (path in listOf("", "../secret", "data/../../secret", "data/./x", "data//x", "a\\b", "x\u0000.js", "data/", "/index.html", ".hidden", "data/.marker")) {
            assertFalse(path, LocalServer.isSafePath(path))
        }
    }

    @Test fun theGameModuleAndTheMoviesGetTheirTypes() {
        assertEquals("application/wasm", LocalServer.mimeType("app/r/game/spook.wasm"))
        assertEquals("video/webm", LocalServer.mimeType("assets/media/intronl.WEBM"))
        assertEquals("application/octet-stream", LocalServer.mimeType("data/Settings/Player1.ini"))
        assertTrue(LocalServer.mimeType("app/r/source/web/worker.js").startsWith("text/javascript"))
    }
}
