#!/usr/bin/env python3
"""Reads raw PCM from stdin at the rate it would be played: the clock of the reference run's sink.

ALSA's null device takes whatever is written at once, so with it Wine's DirectSound mixes about
3.6 times faster than real time and every play cursor runs fast. The ALSA configuration of the
reference run (prepare.sh) sends the stream through the file plugin into this program instead; the
pipe is kept one page small, so Wine's writes wait for this reader and the mixer runs at 1.0x.
Nothing is played.

  pace.py <rate> <channels> <bits> [<alsa format name>]

With REFWINE_AUDIO_DIR set, the stream is also kept: stream-<pid>.raw (the samples as Wine wrote
them) and stream-<pid>.txt (first line: the format; then "<CLOCK_MONOTONIC> <bytes so far>" about
ten times a second). parse.py turns that into a WAV file.
"""
import fcntl
import os
import sys
import time


def main():
    rate, channels, bits = (int(x) for x in sys.argv[1:4])
    fmt = sys.argv[4] if len(sys.argv) > 4 else ''
    frame = channels * bits // 8
    per_second = rate * frame
    try:
        fcntl.fcntl(0, 1031, 4096)            # F_SETPIPE_SZ: one page, about 10 ms at 48 kHz stereo float
    except OSError:
        pass
    raw = marks = None
    keep = os.environ.get('REFWINE_AUDIO_DIR')
    if keep:
        os.makedirs(keep, exist_ok=True)
        raw = open(os.path.join(keep, f'stream-{os.getpid()}.raw'), 'wb')
        marks = open(os.path.join(keep, f'stream-{os.getpid()}.txt'), 'w')
        marks.write(f'rate={rate} channels={channels} bits={bits} format={fmt} start={time.monotonic():.6f}\n')
        marks.flush()
    burst = per_second * 0.030                # time that passed while nothing was written is not caught up
    credit = 0.0
    last = time.monotonic()
    total = 0
    next_mark = 0.0
    while True:
        now = time.monotonic()
        credit = min(credit + (now - last) * per_second, burst)
        last = now
        want = int(credit) // frame * frame
        if want < frame * 48:                 # about 1 ms
            time.sleep(0.0005)
            continue
        data = os.read(0, want)
        if not data:
            break
        credit -= len(data)
        total += len(data)
        if raw is not None:
            raw.write(data)
            if now >= next_mark:
                next_mark = now + 0.1
                marks.write(f'{time.monotonic():.6f} {total}\n')
                marks.flush()
    if raw is not None:
        marks.write(f'{time.monotonic():.6f} {total}\n')
        raw.close()
        marks.close()


if __name__ == '__main__':
    try:
        main()
    except (KeyboardInterrupt, BrokenPipeError):
        pass
