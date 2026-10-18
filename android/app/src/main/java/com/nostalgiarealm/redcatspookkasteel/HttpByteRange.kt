package com.nostalgiarealm.redcatspookkasteel

import java.io.EOFException
import java.io.FilterInputStream
import java.io.InputStream

internal data class HttpByteRange(val first: Long, val last: Long) {
    val length: Long get() = last - first + 1

    companion object {
        private val singleRange = Regex("bytes=([0-9]*)-([0-9]*)", RegexOption.IGNORE_CASE)

        /** Only a single byte range is supported; malformed/unsatisfiable ranges return null. */
        fun parse(header: String, totalLength: Long): HttpByteRange? {
            if (totalLength <= 0) return null
            val match = singleRange.matchEntire(header.trim()) ?: return null
            val (startText, endText) = match.destructured
            if (startText.isEmpty()) {
                val suffix = endText.toLongOrNull()?.takeIf { it > 0 } ?: return null
                return HttpByteRange((totalLength - suffix).coerceAtLeast(0), totalLength - 1)
            }
            val start = startText.toLongOrNull()?.takeIf { it < totalLength } ?: return null
            val end = if (endText.isEmpty()) totalLength - 1 else endText.toLongOrNull() ?: return null
            if (end < start) return null
            return HttpByteRange(start, minOf(end, totalLength - 1))
        }
    }
}

/** Prevent the response stream from reading beyond the requested range. */
internal class LimitedInputStream(input: InputStream, private var remaining: Long) : FilterInputStream(input) {
    override fun read(): Int {
        if (remaining <= 0) return -1
        val value = super.read()
        if (value >= 0) remaining--
        return value
    }

    override fun read(bytes: ByteArray, offset: Int, length: Int): Int {
        if (length == 0) return 0
        if (remaining <= 0) return -1
        val count = `in`.read(bytes, offset, minOf(length.toLong(), remaining).toInt())
        if (count > 0) remaining -= count
        return count
    }

    override fun skip(count: Long): Long {
        if (count <= 0 || remaining <= 0) return 0
        val skipped = `in`.skip(minOf(count, remaining))
        remaining -= skipped
        return skipped
    }

    override fun available(): Int = minOf(`in`.available().toLong(), remaining).toInt()
    override fun markSupported(): Boolean = false
    override fun mark(readlimit: Int) = Unit
    override fun reset(): Unit = throw java.io.IOException("Range responses cannot be reset")
}

internal fun InputStream.skipExactly(count: Long) {
    var left = count
    while (left > 0) {
        val skipped = skip(left)
        if (skipped > 0) left -= skipped
        else if (read() < 0) throw EOFException("Asset ended before the requested range")
        else left--
    }
}
