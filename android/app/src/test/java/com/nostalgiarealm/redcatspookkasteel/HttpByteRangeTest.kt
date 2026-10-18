package com.nostalgiarealm.redcatspookkasteel

import java.io.ByteArrayInputStream
import java.io.EOFException
import org.junit.Assert.*
import org.junit.Test

class HttpByteRangeTest {
    @Test fun supportsVideoSeekAndSuffixRequests() {
        assertEquals(HttpByteRange(0, 99), HttpByteRange.parse("bytes=0-99", 1000))
        assertEquals(HttpByteRange(100, 999), HttpByteRange.parse("bytes=100-", 1000))
        assertEquals(HttpByteRange(900, 999), HttpByteRange.parse("bytes=-100", 1000))
        assertEquals(HttpByteRange(0, 999), HttpByteRange.parse("bytes=-2000", 1000))
        assertEquals(HttpByteRange(900, 999), HttpByteRange.parse("bytes=900-5000", 1000))
        assertEquals(100L, HttpByteRange.parse("bytes=900-", 1000)?.length)
    }

    @Test fun rejectsMalformedOverflowingAndUnsatisfiableRanges() {
        for (header in listOf("bytes=", "bytes=-", "bytes=-0", "bytes=1000-", "bytes=20-10",
            "bytes=0-2,5-8", "items=0-5", "bytes=9999999999999999999999-", "bytes=0-9999999999999999999999")) {
            assertNull(header, HttpByteRange.parse(header, 1000))
        }
        assertNull(HttpByteRange.parse("bytes=0-", 0))
        assertNull(HttpByteRange.parse("bytes=0-", -1))
    }

    @Test fun streamNeverReturnsBytesAfterTheRangeBoundary() {
        val source = ByteArrayInputStream("0123456789".toByteArray())
        source.skipExactly(3)
        LimitedInputStream(source, 4).use { stream ->
            assertEquals('3'.code, stream.read())
            assertEquals(3, stream.available())
            assertEquals("456", stream.readBytes().toString(Charsets.UTF_8))
            assertEquals(-1, stream.read())
            assertEquals(0, stream.read(ByteArray(0), 0, 0))
        }
    }

    @Test fun skippingCannotCrossTheRangeBoundary() {
        LimitedInputStream(ByteArrayInputStream(ByteArray(20)), 5).use { stream ->
            assertEquals(5L, stream.skip(100))
            assertEquals(0L, stream.skip(1))
            assertEquals(-1, stream.read())
        }
    }

    @Test fun skipExactlyHandlesStreamsThatDoNotSupportSkip() {
        val input = object : ByteArrayInputStream("0123".toByteArray()) {
            override fun skip(count: Long) = 0L
        }
        input.skipExactly(3)
        assertEquals('3'.code, input.read())
    }

    @Test(expected = EOFException::class) fun skipExactlyRejectsTruncatedFiles() {
        ByteArrayInputStream(byteArrayOf(1, 2)).skipExactly(3)
    }
}
