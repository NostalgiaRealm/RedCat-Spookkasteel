#!/usr/bin/env python3
"""Turns the Wine trace of one reference run into the DirectSound timeline of the original game.

  parse.py parse  --run tools/out/reference-wine/logs/idle-a --out evidence/reference-wine/dsound-world1.json
  parse.py report --idle evidence/reference-wine/dsound-world1.json [--walk ...-walk.json] --out ...md

Input: wine.log (WINEDEBUG=+timestamp,+dsound,+file,...) and run.json of refrun.py. Times in the
output are seconds after the first game frame (run.json first_game_frame; Wine's timestamps count
the same clock, which the run checks with the tick samples).

What Wine's trace gives and what it does not:
  - every call of IDirectSound / IDirectSoundBuffer with its arguments (trace lines);
  - a warn line on every failing path of these methods, so "no warn line" is recorded as result "ok";
  - GetStatus results and GetFrequency results as values;
  - not the HRESULT itself and not the bytes written into a buffer.
"""
import argparse
import collections
import json
import os
import re
import struct
import sys

LINE = re.compile(rb'^\s*(\d+)\.(\d{3}):([0-9a-f]{4}):(trace|warn|err|fixme):(\w+):(\S+) (.*)$')
CALL = re.compile(r'^\(([0-9A-Fa-f]{8})(?:,\s*(.*))?\)(.*)$')
FORMAT = re.compile(r'\(formattag=0x([0-9a-f]+),chans=(\d+),samplerate=(\d+),bytespersec=(\d+),blockalign=(\d+),bitspersamp=(\d+),cbSize=(\d+)\)')
DSBCAPS = {
    0x1: 'PRIMARYBUFFER', 0x2: 'STATIC', 0x4: 'LOCHARDWARE', 0x8: 'LOCSOFTWARE', 0x10: 'CTRL3D',
    0x20: 'CTRLFREQUENCY', 0x40: 'CTRLPAN', 0x80: 'CTRLVOLUME', 0x100: 'CTRLPOSITIONNOTIFY', 0x200: 'CTRLFX',
    0x4000: 'STICKYFOCUS', 0x8000: 'GLOBALFOCUS', 0x10000: 'GETCURRENTPOSITION2', 0x20000: 'MUTE3DATMAXDISTANCE',
    0x40000: 'LOCDEFER',
}
STATUS = {0: 'stopped', 1: 'PLAYING', 5: 'PLAYING|LOOPING'}
WARN_HRESULT = [
    ('control unavailable', 'DSERR_CONTROLUNAVAIL'), ('invalid parameter', 'DSERR_INVALIDPARAM'),
    ('invalid param', 'DSERR_INVALIDPARAM'), ('buffer lost', 'DSERR_BUFFERLOST'), ('out of memory', 'DSERR_OUTOFMEMORY'),
    ('priority level needed', 'DSERR_PRIOLEVELNEEDED'), ('bad format', 'DSERR_BADFORMAT'),
    ('not fully supported', None),
]
MERGE_OPS = {'SetVolume', 'SetPan', 'SetFrequency'}


def flag_names(flags):
    return [name for bit, name in DSBCAPS.items() if flags & bit]


def wav_info(path):
    """fmt and data chunk of a RIFF file, or None."""
    try:
        with open(path, 'rb') as f:
            head = f.read(12)
            if head[:4] != b'RIFF' or head[8:12] != b'WAVE':
                return None
            out = {'fileBytes': os.path.getsize(path)}
            while True:
                h = f.read(8)
                if len(h) < 8:
                    break
                tag, size = h[:4], struct.unpack('<I', h[4:])[0]
                if tag == b'fmt ':
                    d = f.read(size + (size & 1))
                    out['tag'], out['channels'], out['rate'], _, out['blockAlign'], out['bits'] = struct.unpack('<HHIIHH', d[:16])
                elif tag == b'data':
                    out['dataBytes'] = size
                    break
                else:
                    f.seek(size + (size & 1), 1)
            return out
    except OSError:
        return None


def find_ci(root, rel):
    cur = root
    for part in rel.replace('\\', '/').split('/'):
        if part in ('', '.'):
            continue
        try:
            match = [n for n in os.listdir(cur) if n.lower() == part.lower()]
        except OSError:
            return None
        if not match:
            return None
        cur = os.path.join(cur, match[0])
    return cur


class Parser:
    def __init__(self, t0, game_root, game_win='C:\\RCSPOOK\\'):
        self.t0 = t0
        self.game_root = game_root
        self.game_win = game_win.lower()
        self.buffers = []
        self.live = {}                 # Wine address -> buffer
        self.primary = None
        self.device = {'calls': []}
        self.pending = {}              # thread -> description being read
        self.dup = {}                  # thread -> source address
        self.last_wav = {}             # thread -> [name, t]
        self.last_event = {}           # thread -> (function, event dict)
        self.status_of = {}            # thread -> buffer whose GetStatus result comes next
        self.volpan_at = {}            # thread -> address in the last DSOUND_RecalcVolPan line
        self.undo = {}                 # thread -> (buffer, key, value before the last setter)
        self.gone = {}                 # thread -> (address, buffer) destroyed just now
        self.warnings = []
        self.checks = {'volPanOk': 0, 'volPanMismatch': 0}
        self.counts = collections.Counter()
        self.threads = collections.Counter()
        self.mixer = {'thread': None, 'calls': 0, 'frames': 0, 'first': None, 'last': None, 'perSecond': collections.Counter(), 'timeline': []}
        self.fps = []
        self.alsa = {}
        self.msgbox = []
        self.unknown = collections.Counter()
        self.wav_opens = 0

    def rel(self, sec, ms):
        return round(sec + ms / 1000.0 - self.t0, 3) + 0.0      # + 0.0: no negative zero

    def event(self, buf, thread, func, t, op, args=None, result='ok'):
        ev = {'t': t, 'op': op, 'args': args if args is not None else {}, 'result': result}
        if op in MERGE_OPS and buf['events']:
            prev = buf['events'][-1]
            if prev['op'] == op and prev['args'] == ev['args'] and prev['result'] == 'ok':
                prev['n'] = prev.get('n', 1) + 1
                prev['tLast'] = t
                self.last_event[thread] = (func, prev, buf)
                return prev
        buf['events'].append(ev)
        self.last_event[thread] = (func, ev, buf)
        return ev

    def new_buffer(self, addr, t, desc, wav, duplicate_of=None):
        buf = {
            'id': len(self.buffers) + 1, 'wav': wav, 'rate': desc.get('rate'), 'channels': desc.get('channels'),
            'bits': desc.get('bits'), 'bytes': desc.get('bytes'), 'flags': desc.get('flags'),
            'flagNames': flag_names(desc.get('flags') or 0), 'duplicateOf': duplicate_of,
            'wineAddress': addr, 'created': t, 'state': {'volume': 0, 'pan': 0, 'frequency': desc.get('rate')},
            'getStatus': {'calls': 0, 'first': None, 'last': None, 'lastValue': None},
            'getCurrentPosition': {'calls': 0}, 'events': [],
        }
        self.buffers.append(buf)
        self.live[addr] = buf
        return buf

    def feed(self, raw):
        m = LINE.match(raw)
        if not m:
            return
        sec, ms, thread, cls, channel, func, rest = m.groups()
        sec = int(sec)
        ms = int(ms)
        thread = thread.decode()
        func = func.decode()
        rest = rest.decode('latin-1').rstrip('\r\n')
        if channel == b'file':
            if func == 'CreateFileW' and rest.startswith('L"'):
                name = rest[2:rest.index('"', 2)].replace('\\\\', '\\')
                if name.lower().endswith('.wav'):
                    self.last_wav[thread] = [name, self.rel(sec, ms)]
                    self.wav_opens += 1
            return
        if channel == b'fps':
            mm = re.search(r'approx ([\d.]+)fps', rest)
            if mm and func == 'wglSwapBuffers':
                self.fps.append([self.rel(sec, ms), float(mm.group(1))])
            return
        if channel == b'alsa':
            mm = re.match(r'(MMDevice|ALSA) (period|buffer): (\d+) frames', rest)
            if mm:
                self.alsa[mm.group(1) + ' ' + mm.group(2)] = int(mm.group(3))
            return
        if channel == b'msgbox':
            self.msgbox.append([self.rel(sec, ms), rest[:400]])
            return
        if channel not in (b'dsound', b'dsound3d'):
            return
        t = self.rel(sec, ms)
        self.counts[func] += 1
        if cls != b'trace':
            self.on_warning(thread, func, cls.decode(), rest, t)
            return
        handler = getattr(self, 'f_' + func, None)
        if handler is not None:
            handler(thread, t, rest)
        elif func.startswith('IDirectSoundBufferImpl_'):
            self.generic(thread, t, func, rest)
        elif func.startswith('DSOUND_Mix') or func in ('DSOUND_PerformMix', 'get_volumes', 'DSOUND_mixthread'):
            self.on_mixer(thread, sec, ms, func, rest)
        elif func.startswith(('IDirectSound8Impl_', 'IDirectSoundImpl_', 'DirectSound', 'PrimaryBufferImpl_', 'primarybuffer_',
                              'IUnknownImpl_', 'directsound_', 'GetDeviceID', 'setup_dsound_options', 'DllMain',
                              'DSOUND_ReopenDevice', 'DSOUND_PrimaryOpen', 'DSOUND_RecalcFormat', 'secondarybuffer_')):
            self.on_device(thread, t, func, rest)
        else:
            self.unknown[func] += 1

    # ---- failures -------------------------------------------------------------------------
    def on_warning(self, thread, func, cls, text, t):
        code = 'unknown'
        for needle, hr in WARN_HRESULT:
            if needle in text:
                code = hr
                break
        entry = {'t': t, 'function': func, 'class': cls, 'text': text, 'hresult': code}
        last = self.last_event.get(thread)
        if last and last[0] == func and code is not None:
            ev = last[1]
            if ev.get('n', 1) > 1:             # the failing call was merged into the one before: split it off again
                ev['n'] -= 1
                if ev['n'] == 1:
                    ev.pop('n'); ev.pop('tLast', None)
                ev = {'t': t, 'op': ev['op'], 'args': dict(ev['args']), 'result': 'ok'}
                last[2]['events'].append(ev)
            ev['result'] = {'error': code, 'wine': text}
            entry['attachedTo'] = ev['op']
            entry['buffer'] = last[2]['id']
            und = self.undo.pop(thread, None)
            if und and und[0] is last[2] and ev['op'].startswith('Set') and und[1] in ev['args']:
                und[0]['state'][und[1]] = und[2]
        self.warnings.append(entry)

    # ---- device and primary buffer --------------------------------------------------------
    def on_device(self, thread, t, func, rest):
        if func == 'DirectSoundCreate':
            self.device['calls'].append({'t': t, 'op': 'DirectSoundCreate', 'args': rest})
        elif func == 'IDirectSound8Impl_SetCooperativeLevel':
            mm = re.match(r'\(([0-9A-F]+),([0-9A-F]+),(\w+)\)', rest)
            if mm:
                self.device['calls'].append({'t': t, 'op': 'SetCooperativeLevel', 'args': {'hwnd': mm.group(2), 'level': mm.group(3)}})
        elif func == 'DSOUND_ReopenDevice' and 'period' in rest:
            self.device.setdefault('wineDevice', []).append(rest)
        elif func == 'primarybuffer_create':
            if rest.startswith('Created primary buffer at'):
                self.primary = {'wineAddress': rest.split()[-1], 'created': t, 'events': [],
                                'flags': self.pending.get(thread, {}).get('flags')}
                self.device['calls'].append({'t': t, 'op': 'CreateSoundBuffer', 'args': {
                    'flags': self.pending.get(thread, {}).get('flags'), 'flagNames': flag_names(self.pending.get(thread, {}).get('flags') or 0),
                    'bytes': self.pending.get(thread, {}).get('bytes'), 'format': None}, 'what': 'primary buffer'})
                self.pending.pop(thread, None)
            else:
                mm = FORMAT.search(rest)
                if mm and self.primary is not None:
                    self.primary['wineMixFormat'] = fmt_dict(mm)
        elif func == 'primarybuffer_SetFormat':
            mm = FORMAT.search(rest)
            if mm:
                self.device['calls'].append({'t': t, 'op': 'PrimaryBuffer.SetFormat', 'args': fmt_dict(mm)})
        elif func.startswith('PrimaryBufferImpl_') and rest.startswith('('):
            op = func.split('_', 1)[1]
            if op not in ('SetFormat', 'AddRef'):
                self.device['calls'].append({'t': t, 'op': 'PrimaryBuffer.' + op, 'args': rest})
        elif func == 'DirectSoundDevice_CreateSoundBuffer':
            p = self.pending.setdefault(thread, {})
            mm = re.match(r'\(flags=0x([0-9a-f]+):', rest)
            if mm:
                p.clear()
                p['flags'] = int(mm.group(1), 16)
            mm = re.match(r'\(bufferbytes=(\d+)\)', rest)
            if mm:
                p['bytes'] = int(mm.group(1))
            mm = FORMAT.search(rest)
            if mm:
                p.update(fmt_dict(mm))
        elif func == 'secondarybuffer_create' and rest.startswith('Created buffer at'):
            addr = rest.split()[-1]
            desc = self.pending.pop(thread, {})
            wav = self.last_wav.pop(thread, None)
            buf = self.new_buffer(addr, t, desc, self.wav_name(wav[0]) if wav else None)
            buf['wavOpened'] = wav[1] if wav else None
            buf['cbSize'] = desc.get('cbSize')
            self.check_wav(buf)
            self.event(buf, thread, 'IDirectSound8Impl_CreateSoundBuffer', t, 'CreateSoundBuffer', {
                'flags': desc.get('flags'), 'bytes': desc.get('bytes'), 'rate': desc.get('rate'),
                'channels': desc.get('channels'), 'bits': desc.get('bits')})
        elif func == 'IDirectSound8Impl_DuplicateSoundBuffer':
            mm = re.match(r'\(([0-9A-F]+),([0-9A-F]+),', rest)
            if mm:
                self.dup[thread] = mm.group(2)
        elif func == 'DirectSoundDevice_AddBuffer' and thread in self.dup:
            mm = re.match(r'\(([0-9A-F]+), ([0-9A-F]+)\)', rest)
            if mm:
                src = self.live.get(self.dup.pop(thread))
                desc = {k: src.get(k) for k in ('rate', 'channels', 'bits', 'bytes', 'flags')} if src else {}
                buf = self.new_buffer(mm.group(2), t, desc, src['wav'] if src else None, src['id'] if src else None)
                if src:
                    # Wine copies the source buffer's volume, pan and frequency into the duplicate.
                    buf['state'] = dict(src['state'])
                    buf['inherited'] = dict(src['state'])
                self.event(buf, thread, 'IDirectSound8Impl_DuplicateSoundBuffer', t, 'DuplicateSoundBuffer',
                           {'source': src['id'] if src else None})
        elif func == 'secondarybuffer_destroy':
            mm = re.match(r'\(([0-9A-F]+)\)', rest)
            if mm and mm.group(1) in self.live:
                buf = self.live.pop(mm.group(1))
                buf['destroyed'] = t
                self.gone[thread] = (mm.group(1), buf)       # Wine prints the Release line after this one

    def wav_name(self, name):
        return name[len(self.game_win):] if name.lower().startswith(self.game_win) else name

    def check_wav(self, buf):
        if not buf['wav'] or not self.game_root:
            return
        path = find_ci(self.game_root, buf['wav'])
        info = wav_info(path) if path else None
        if not info:
            buf['wavCheck'] = {'match': False, 'why': 'file not readable as RIFF'}
            return
        same = (info.get('dataBytes') == buf['bytes'] and info.get('rate') == buf['rate'] and
                info.get('channels') == buf['channels'] and info.get('bits') == buf['bits'])
        buf['wavCheck'] = {'match': same, 'dataBytes': info.get('dataBytes'), 'fileBytes': info.get('fileBytes')}
        if not same:
            buf['wavCheck'].update({k: info.get(k) for k in ('rate', 'channels', 'bits')})

    # ---- mixer thread: only its rate is of interest ---------------------------------------
    def on_mixer(self, thread, sec, ms, func, rest):
        if func == 'DSOUND_MixToPrimary':
            mm = re.match(r'(\d+) frames for (\d+) buffers', rest)
            if mm:
                mx = self.mixer
                mx['thread'] = thread
                mx['calls'] += 1
                mx['frames'] += int(mm.group(1))
                tt = sec + ms / 1000.0
                if mx['first'] is None:
                    mx['first'] = tt
                mx['last'] = tt
                mx['perSecond'][sec] += int(mm.group(1))
                mx['timeline'].append((tt, mx['frames']))

    # ---- IDirectSoundBuffer ---------------------------------------------------------------
    def buf_call(self, rest):
        mm = CALL.match(rest)
        if not mm:
            return None, None
        return self.live.get(mm.group(1)), (mm.group(2) or '')

    def generic(self, thread, t, func, rest):
        op = func.split('_', 1)[1]
        buf, args = self.buf_call(rest)
        if buf is None:
            if rest.startswith('('):
                self.unknown[func + ' (unknown buffer)'] += 1
            return
        self.threads[thread] += 1
        self.event(buf, thread, func, t, op, {'raw': args})

    def f_IDirectSoundBufferImpl_GetStatus(self, thread, t, rest):
        if rest.startswith('status='):
            buf = self.status_of.get(thread)
            if buf is None:
                return
            value = int(rest[7:], 16)
            g = buf['getStatus']
            if g['lastValue'] != value:
                g['lastValue'] = value
                buf['events'].append({'t': t, 'op': 'GetStatus', 'args': {}, 'result': {'status': value, 'meaning': STATUS.get(value, hex(value))},
                                      'note': 'first call that returned this value'})
            return
        buf, _ = self.buf_call(rest)
        self.status_of[thread] = buf
        if buf is None:
            self.unknown['GetStatus (unknown buffer)'] += 1
            return
        self.threads[thread] += 1
        g = buf['getStatus']
        g['calls'] += 1
        if g['first'] is None:
            g['first'] = t
        g['last'] = t

    def f_IDirectSoundBufferImpl_GetCurrentPosition(self, thread, t, rest):
        buf, _ = self.buf_call(rest)
        if buf is not None:
            self.threads[thread] += 1
            g = buf['getCurrentPosition']
            g['calls'] += 1
            g.setdefault('first', t)
            g['last'] = t

    def f_IDirectSoundBufferImpl_GetFrequency(self, thread, t, rest):
        if rest.startswith('->'):
            last = self.last_event.get(thread)
            if last and last[1]['op'] == 'GetFrequency':
                last[1]['result'] = {'frequency': int(rest[2:])}
            return
        buf, _ = self.buf_call(rest)
        if buf is not None:
            self.threads[thread] += 1
            self.event(buf, thread, 'IDirectSoundBufferImpl_GetFrequency', t, 'GetFrequency')

    def f_IDirectSoundBufferImpl_Lock(self, thread, t, rest):
        if rest.startswith('Locked'):
            mm = re.match(r'Locked \w+ \((\d+) bytes\) and \w+ \((\d+) bytes\)', rest)
            last = self.last_event.get(thread)
            if mm and last and last[1]['op'] == 'Lock':
                last[1]['result'] = {'bytes1': int(mm.group(1)), 'bytes2': int(mm.group(2))}
            return
        if rest.startswith('->'):
            return
        buf, args = self.buf_call(rest)
        if buf is not None:
            self.threads[thread] += 1
            a = [x.strip() for x in args.split(',')]
            self.event(buf, thread, 'IDirectSoundBufferImpl_Lock', t, 'Lock',
                       {'offset': int(a[0]), 'bytes': int(a[1]), 'flags': int(a[-1], 16)})

    def f_IDirectSoundBufferImpl_Unlock(self, thread, t, rest):
        buf, args = self.buf_call(rest)
        if buf is not None:
            self.threads[thread] += 1
            a = [x.strip() for x in args.split(',')]
            self.event(buf, thread, 'IDirectSoundBufferImpl_Unlock', t, 'Unlock', {'bytes1': int(a[1]), 'bytes2': int(a[3])})

    def f_IDirectSoundBufferImpl_Play(self, thread, t, rest):
        buf, args = self.buf_call(rest)
        if buf is not None:
            self.threads[thread] += 1
            flags = int(args.split(',')[-1], 16)
            self.event(buf, thread, 'IDirectSoundBufferImpl_Play', t, 'Play', {'flags': flags, 'looping': bool(flags & 1),
                       'volume': buf['state']['volume'], 'pan': buf['state']['pan'], 'frequency': buf['state']['frequency']})

    def f_IDirectSoundBufferImpl_Stop(self, thread, t, rest):
        buf, _ = self.buf_call(rest)
        if buf is not None:
            self.threads[thread] += 1
            self.event(buf, thread, 'IDirectSoundBufferImpl_Stop', t, 'Stop')

    def f_IDirectSoundBufferImpl_SetCurrentPosition(self, thread, t, rest):
        buf, args = self.buf_call(rest)
        if buf is not None:
            self.threads[thread] += 1
            self.event(buf, thread, 'IDirectSoundBufferImpl_SetCurrentPosition', t, 'SetCurrentPosition', {'position': int(args)})

    def setter(self, thread, t, rest, op, key):
        buf, args = self.buf_call(rest)
        if buf is not None:
            self.threads[thread] += 1
            value = int(args)
            ev = self.event(buf, thread, 'IDirectSoundBufferImpl_' + op, t, op, {key: value})
            # DSBFREQUENCY_ORIGINAL (0) means the rate the buffer was created with.
            self.undo[thread] = (buf, key, buf['state'][key])
            buf['state'][key] = buf['rate'] if key == 'frequency' and value == 0 else value

    def f_IDirectSoundBufferImpl_SetVolume(self, thread, t, rest):
        self.setter(thread, t, rest, 'SetVolume', 'volume')

    def f_IDirectSoundBufferImpl_SetPan(self, thread, t, rest):
        self.setter(thread, t, rest, 'SetPan', 'pan')

    def f_IDirectSoundBufferImpl_SetFrequency(self, thread, t, rest):
        self.setter(thread, t, rest, 'SetFrequency', 'frequency')

    def f_DSOUND_RecalcVolPan(self, thread, t, rest):
        """Wine prints a buffer's volume and pan whenever one of them changed: checks the state kept here.
        The line before it names the address of the buffer's volume block, 0x48 past the buffer."""
        if rest.startswith('('):
            self.volpan_at[thread] = '%08X' % (int(rest.strip('()'), 16) - 0x48)
            return
        mm = re.match(r'Vol=(-?\d+) Pan=(-?\d+)', rest)
        buf = self.live.get(self.volpan_at.get(thread))
        if mm and buf is not None:
            ok = buf['state']['volume'] == int(mm.group(1)) and buf['state']['pan'] == int(mm.group(2))
            self.checks['volPanOk' if ok else 'volPanMismatch'] += 1

    def f_IDirectSoundBufferImpl_AddRef(self, thread, t, rest):
        mm = re.match(r'\(([0-9A-F]+)\) ref (\d+)', rest)
        buf = self.live.get(mm.group(1)) if mm else None
        if buf is not None:
            self.threads[thread] += 1
            self.event(buf, thread, 'IDirectSoundBufferImpl_AddRef', t, 'AddRef', {}, {'ref': int(mm.group(2))})

    def f_IDirectSoundBufferImpl_Release(self, thread, t, rest):
        mm = re.match(r'\(([0-9A-F]+)\) ref (\d+)', rest)
        buf = None
        if mm:
            gone = self.gone.pop(thread, None)
            buf = gone[1] if gone and gone[0] == mm.group(1) else self.live.get(mm.group(1))
        if buf is not None:
            self.threads[thread] += 1
            self.event(buf, thread, 'IDirectSoundBufferImpl_Release', t, 'Release', {}, {'ref': int(mm.group(2))})

    def f_IDirectSoundBufferImpl_Duplicate(self, thread, t, rest):
        pass                                # the duplicate is taken from DirectSoundDevice_AddBuffer

    def f__dump_DSBCAPS(self, thread, t, rest):
        pass

    def finish(self):
        for buf in self.buffers:
            buf['stateAtEnd'] = buf.pop('state')
            buf['getStatus'].pop('lastValue', None)


def fmt_dict(mm):
    return {'formatTag': int(mm.group(1), 16), 'channels': int(mm.group(2)), 'rate': int(mm.group(3)),
            'bytesPerSec': int(mm.group(4)), 'blockAlign': int(mm.group(5)), 'bits': int(mm.group(6)), 'cbSize': int(mm.group(7))}


# ---- what each buffer did, derived from its events ---------------------------------------------
def summarize(buf, window):
    """Play intervals of one buffer with volume, pan and frequency during each, cut at `window` seconds."""
    plays = []
    cur = None
    vol = pan = freq = None

    def close(t, why):
        nonlocal cur
        if cur is not None:
            cur['end'] = t
            cur['endReason'] = why
            cur = None

    def touch(t):
        if cur is not None and t <= window:
            for key, value in (('volume', vol), ('pan', pan), ('frequency', freq)):
                cur[key + 'Min'] = min(cur[key + 'Min'], value)
                cur[key + 'Max'] = max(cur[key + 'Max'], value)

    for ev in buf['events']:
        t, op, ok = ev['t'], ev['op'], ev['result'] == 'ok'
        if op == 'SetVolume' and ok:
            vol = ev['args']['volume']
            if cur is not None and t <= window:
                cur['volumeChanges'].append([t, vol])
            touch(t)
        elif op == 'SetPan' and ok:
            pan = ev['args']['pan']
            if cur is not None and t <= window:
                cur['panCalls'] += ev.get('n', 1)
                cur['panValues'] += 1
            touch(t)
        elif op == 'SetFrequency' and ok:
            freq = ev['args']['frequency'] or buf['rate']
            if cur is not None and t <= window:
                cur['frequencyChanges'].append([t, freq])
            touch(t)
        elif op == 'Play' and ok:
            close(t, 'played again')
            vol, pan, freq = ev['args']['volume'], ev['args']['pan'], ev['args']['frequency']
            cur = {'start': t, 'looping': ev['args']['looping'], 'volumeAtStart': vol, 'panAtStart': pan, 'frequencyAtStart': freq,
                   'volumeMin': vol, 'volumeMax': vol, 'panMin': pan, 'panMax': pan, 'frequencyMin': freq, 'frequencyMax': freq,
                   'volumeChanges': [[t, vol]], 'frequencyChanges': [[t, freq]], 'panCalls': 0, 'panValues': 0,
                   'end': None, 'endReason': None}
            plays.append(cur)
        elif op == 'Stop' and ok:
            close(t, 'Stop')
        elif op == 'GetStatus' and ev['result'].get('status') == 0:
            close(t, 'first GetStatus that returned 0')
        elif op == 'Release' and ev['result'].get('ref') == 0:
            close(t, 'Release')
    for p in plays:
        p['volumeAtEnd'] = p['volumeChanges'][-1][1]
        if p['end'] is None:
            p['endReason'] = 'still playing when the capture ended'
        p['inWindow'] = p['start'] <= window
        p['audibleInWindow'] = p['inWindow'] and p['volumeMax'] > -10000
        p['bufferSeconds'] = round(buf['bytes'] / max(1, (buf['channels'] * buf['bits'] // 8) * p['frequencyAtStart']), 3)
        # A buffer that is not looping stops by itself; the game only notices at its next GetStatus.
        p['runsOutAt'] = None if p['looping'] else round(p['start'] + p['bufferSeconds'], 3)
    return plays


def first_audible(buffers):
    """Earliest moment a playing buffer has a volume above -10000."""
    best = None
    for buf in buffers:
        for p in buf['plays']:
            for t, v in p['volumeChanges']:
                if v > -10000:
                    if best is None or t < best[0]:
                        best = (t, buf['id'])
                    break
    return best


def write_audio(run_dir, out_path, t0, clock_offset, mix_timeline, alsa_buffer_frames, audible):
    """stream-*.raw of pace.py -> 16-bit WAV that starts at the first game frame. Returns what was done."""
    import array
    import wave
    folder = os.path.join(run_dir, 'audio')
    raws = sorted((os.path.getsize(os.path.join(folder, n)), n) for n in os.listdir(folder) if n.endswith('.raw')) if os.path.isdir(folder) else []
    if not raws:
        return {'written': False, 'why': 'no stream kept by pace.py'}
    raw_path = os.path.join(folder, raws[-1][1])
    with open(raw_path[:-4] + '.txt') as f:
        head = dict(kv.split('=') for kv in f.readline().split())
        marks = [(float(a), int(b)) for a, b in (ln.split() for ln in f if ln.strip())]
    rate, channels, bits = int(head['rate']), int(head['channels']), int(head['bits'])
    frame = channels * bits // 8
    if head['format'] not in ('FLOAT_LE', 'S16_LE', 'S32_LE'):
        return {'written': False, 'why': 'stream format ' + head['format']}
    with open(raw_path, 'rb') as f:
        data = f.read()
    data = data[:len(data) // frame * frame]
    code, scale = {'FLOAT_LE': ('f', 1.0), 'S16_LE': ('h', 1 / 32768.0), 'S32_LE': ('i', 1 / 2147483648.0)}[head['format']]
    samples = array.array(code)
    samples.frombytes(data)
    total_frames = len(samples) // channels
    first_nonzero = next((i // channels for i, x in enumerate(samples) if x != 0), None)
    # Model: a frame the mixer produced as its m-th is frame m + lead of the stream, where lead is the
    # silence Wine's ALSA driver writes first. What the reader has taken at time T is lead + mixed(T)
    # minus what is still on the way, and that is at least the one ALSA buffer the file plugin holds back.
    lead = None
    if mix_timeline and marks:
        j = 0
        mixed = 0
        best = None
        # Only while the mixer was running: once the game is stopped the driver keeps writing silence.
        lo, hi = mix_timeline[0][0] + 0.5, mix_timeline[-1][0] - 0.2
        for mono, nbytes in marks:
            mono += clock_offset
            while j < len(mix_timeline) and mix_timeline[j][0] <= mono:
                mixed = mix_timeline[j][1]
                j += 1
            if lo <= mono <= hi:
                d = nbytes // frame - mixed
                best = d if best is None else max(best, d)
        if best is not None:
            lead = best + alsa_buffer_frames
    mixed_before_t0 = 0
    for tt, cum in mix_timeline:
        if tt > t0:
            break
        mixed_before_t0 = cum
    model_start = None if lead is None else lead + mixed_before_t0
    info = {'stream': os.path.basename(raw_path), 'streamFormat': head, 'streamFrames': total_frames,
            'mixedFramesTotal': mix_timeline[-1][1] if mix_timeline else None, 'firstNonZeroFrame': first_nonzero}
    start = None
    if audible is not None and first_nonzero is not None:
        start = first_nonzero - int(round(audible[0] * rate))
        info['alignment'] = ('the first non-zero sample of the stream is put at t = %.3f s, the first moment a playing buffer has a volume '
                             'above -10000 (buffer %d); a sound enters the stream at the next mixer pass, up to about 35 ms after its Play') % audible
    if model_start is not None:
        info['modelStartFrame'] = model_start
        if start is not None:
            info['modelDisagreesByMs'] = round((start - model_start) * 1000.0 / rate, 1)
        if start is None or abs(start - model_start) > 0.150 * rate:
            start = model_start
            info['alignment'] = 'by the mixer frame count: frames mixed before the first game frame plus the silence at the start of the stream'
    if start is None:
        return dict(info, written=False, why='no way to place the first game frame in the stream')
    start = max(0, start)
    out = array.array('h', bytes(2 * (len(samples) - start * channels)))
    peak = 0.0
    clipped = 0
    k = 0
    for i in range(start * channels, len(samples)):
        x = samples[i] * scale
        a = -x if x < 0 else x
        if a > peak:
            peak = a
        v = int(round(x * 32767.0))
        if v > 32767:
            v = 32767
            clipped += 1
        elif v < -32768:
            v = -32768
            clipped += 1
        out[k] = v
        k += 1
    os.makedirs(os.path.dirname(os.path.abspath(out_path)), exist_ok=True)
    with wave.open(out_path, 'wb') as w:
        w.setnchannels(channels)
        w.setsampwidth(2)
        w.setframerate(rate)
        w.writeframes(out.tobytes())
    info.update({'written': True, 'file': out_path, 'rate': rate, 'channels': channels, 'bits': 16, 'startFrame': start,
                 'seconds': round((total_frames - start) / rate, 3), 'peakBeforeClipping': round(peak, 5), 'clippedSamples': clipped,
                 'note': 'Wine mixes in 32-bit float at the device rate; this file is that stream from the first game frame on, converted to 16 bit'})
    return info


def do_parse(args):
    with open(os.path.join(args.run, 'run.json')) as f:
        run = json.load(f)
    events = {e[0]: e[1] for e in run['events']}
    if 'first_game_frame' not in events:
        sys.exit('run.json has no first_game_frame: the game did not reach GS_GAME')
    # Wine's timestamps are KUSER_SHARED_DATA.TickCount; the samples say how that relates to our clock.
    diffs = sorted(tick / 1000.0 - mono for mono, tick, _ in run['ticks'])
    offset = diffs[len(diffs) // 2] if diffs else 0.0
    t0 = events['first_game_frame'] + offset
    game_root = args.game
    p = Parser(t0, game_root)
    log_path = os.path.join(args.run, 'wine.log')
    opener = open
    if not os.path.exists(log_path):          # kept compressed after the first parse
        import gzip
        log_path += '.gz'
        opener = gzip.open
    size = os.path.getsize(log_path)
    lines = 0
    with opener(log_path, 'rb') as f:
        for raw in f:
            lines += 1
            if b':dsound' in raw or b':fps:' in raw or b':msgbox:' in raw or b':alsa:alsa_create_stream' in raw or (b'CreateFileW L"' in raw and b'.wav"' in raw.lower()):
                p.feed(raw)
    p.finish()
    end = round(events['end'] + offset - t0, 3)
    window = args.window
    for buf in p.buffers:
        buf['plays'] = summarize(buf, window)

    def read(name):
        for n in os.listdir(args.run):
            if re.fullmatch(name, n, re.I):
                with open(os.path.join(args.run, n), 'rb') as f:
                    return f.read().decode('latin-1').replace('\r\n', '\n')
        return ''

    def ini_values(path, wanted):
        """[(section, key)] -> value, from a CRLF Latin-1 INI file; section and key compared without case."""
        out = {}
        try:
            with open(path, 'rb') as f:
                text = f.read().decode('latin-1')
        except OSError:
            return out
        section = ''
        want = {(a.lower(), b.lower()): f'[{a}] {b}' for a, b in wanted}
        for ln in text.replace('\r', '').split('\n'):
            mm = re.match(r'\s*\[([^\]]*)\]', ln)
            if mm:
                section = mm.group(1).strip().lower()
                continue
            if '=' in ln:
                k, v = ln.split('=', 1)
                name = want.get((section, k.strip().lower()))
                if name:
                    out[name] = v.strip()
        return out

    refwine = os.path.dirname(os.path.dirname(os.path.abspath(args.run)))
    after = os.path.join(args.run, 'Settings-after')
    world_n = run['args']['world']
    settings = {
        'Player%d.ini' % run['args']['player']: ini_values(find_ci(after, 'Player%d.ini' % run['args']['player']) or '', [
            ('Sound', 'Allowed'), ('Sound', 'MusicVolume'), ('Sound', 'SoundVolume'), ('Sound', 'EffectsVolume'),
            ('General', 'DifficultyLevel'), ('General', 'GameType')]),
        'Game.ini': ini_values(find_ci(after, 'Game.ini') or '', [
            ('SOUNDDEFAULTS', 'MusicVolume'), ('SOUNDDEFAULTS', 'EffectsVolume'), ('SOUNDDEFAULTS', 'VoicesVolume'),
            ('sublevel1_%d' % world_n, 'LevelFileName'), ('sublevel1_%d' % world_n, 'MinDistanceMeters'),
            ('sublevel1_%d' % world_n, 'MaxDistanceFactor'), ('General', 'Language')]),
        'Computer.ini': ini_values(find_ci(after, 'Computer.ini') or '', [
            ('Sound', 'Allowed'), ('Sound', 'UseLowQuality'), ('3DSound', 'Allowed'), ('3DSound', 'MinDistanceMeters'), ('3DSound', 'MaxDistanceFactor')]),
        'AdamWin.Ini': ini_values(os.path.join(refwine, 'pristine', 'AdamWin.Ini'), [
            ('Engine', 'MasterVolume'), ('Engine', 'SoundVolume'), ('Engine', 'MusicVolume')]),
    }
    volume_ini = {}
    try:
        with open(find_ci(after, 'Volume.ini'), 'rb') as f:
            for ln in f.read().decode('latin-1').replace('\r', '').split('\n'):
                if '=' in ln and not ln.startswith('*'):
                    k, v = ln.split('=', 1)
                    volume_ini[k.strip().lower()] = v.strip()
    except (OSError, TypeError):
        pass
    for buf in p.buffers:
        if buf['wav']:
            buf['volumeIni'] = volume_ini.get(buf['wav'].split('\\')[-1].lower())

    adam = read(r'adamdebug\d+\.log')
    world = [ln for ln in adam.split('\n') if 'CreateWorldFromFile' in ln]
    d3d = read(r'd3ddrv\.log')
    sound_log = [ln for ln in read(r'sound\.log').split('\n') if ln.strip()]
    mixer = p.mixer
    span = (mixer['last'] - mixer['first']) if mixer['calls'] else 0
    plays_all = sorted((ev['t'], b['id']) for b in p.buffers for ev in b['events'] if ev['op'] == 'Play')
    audible = first_audible(p.buffers)
    audio = None
    if args.audio:
        audio = write_audio(args.run, args.audio, t0, offset, mixer['timeline'], p.alsa.get('ALSA buffer', 0), audible)
        if audio.get('file'):
            audio['file'] = os.path.relpath(audio['file'], args.relative_to) if args.relative_to else audio['file']
    positions = [s[3:6] for s in run['samples'] if s[1] == 3 and s[3] is not None]
    inactive = sum(1 for s in run['samples'] if s[1] == 3 and s[2] != 1)
    game_seconds = end
    total_status = sum(b['getStatus']['calls'] for b in p.buffers)
    played = [b for b in p.buffers if b['plays']]
    sha = ''
    try:
        with open(os.path.join(os.path.dirname(os.path.dirname(args.run.rstrip('/'))), 'RcHcGame.sha256')) as f:
            sha = f.read().split()[0]
    except OSError:
        pass
    meta = {
        'what': 'DirectSound calls of the original RcHcGame.dat (RedCat Spookkasteel, Davilex 2000), world %d, traced under Wine' % run['args']['world'],
        'run': run['name'], 'scenario': ('key %s held from %.1f s for %.1f s' % (run['args']['key'], run['args']['key_at'], run['args']['key_for'])) if run['args'].get('key') else 'no input',
        'gameSha256': sha, 'wine': args.wine_version, 'wineDebug': run['args']['wine_debug'],
        'launch': {k: run['args'][k] for k in ('world', 'player', 'difficulty', 'game_type')},
        'time': {
            'zero': 'first sample (0.5 ms polling of the process memory) in which game+0x98, the current game state, is 3 = GS_GAME: the start of the first game frame after the world was loaded',
            'unit': 'seconds', 'resolution': 'Wine stamps trace lines in whole milliseconds',
            'captureEnd': end, 'summaryWindow': window,
            'firstPlay': plays_all[0][0] if plays_all else None,
            'firstPlayNote': 'subtract firstPlay from every t for times relative to the first Play',
            'firstAudible': {'t': audible[0], 'buffer': audible[1]} if audible else None,
            'clockStartSeconds': run.get('clockStart'), 'wineTickMinusMonotonic': round(offset, 4),
            'states': [[round(t + offset - t0, 3), name] for t, _, name in run['states']],
            'keys': [[e[0], round(e[1] + offset - t0, 3), e[2]] for e in run['events'] if e[0].startswith('key_')],
        },
        'worldLoaded': world, 'soundLog': sound_log, 'settings': settings,
        'settingsNote': 'the copy ran with the owner\'s Player1.ini (only GameType and DifficultyLevel are set by the launch recipe); volumeIni on a buffer is its line in Settings\\Volume.ini',
        'display': [ln.strip() for ln in d3d.split('\n') if 'Name:' in ln or 'W: ' in ln or 'Initialization' in ln],
        'frameRate': {'wineFpsChannel': p.fps[:4] + (['...'] if len(p.fps) > 8 else []) + p.fps[-4:] if len(p.fps) > 8 else p.fps,
                      'note': 'no frame limiter in the game; software OpenGL in Xvfb'},
        'player': {'positionFirst': positions[0] if positions else None, 'positionLast': positions[-1] if positions else None,
                   'samplesWithWindowInactive': inactive},
        'sink': {
            'kind': run.get('sink') or 'paced',
            'wineDevice': p.device.get('wineDevice'), 'alsa': p.alsa,
            'mixerFramesPerSecondBySecond': [mixer['perSecond'][k] for k in sorted(mixer['perSecond'])][1:-1],
            'mixerFramesPerSecond': round(mixer['frames'] / span, 1) if span else None,
            'mixerCalls': mixer['calls'],
            'note': 'no audio device: ALSA file plugin into a reader that takes the stream at the played rate; mixerFramesPerSecond against the device rate shows play cursors ran at real time',
        },
        'audio': audio,
        'device': p.device['calls'], 'primaryBuffer': p.primary,
        'counts': {
            'buffersCreated': sum(1 for b in p.buffers if b['duplicateOf'] is None),
            'duplicates': sum(1 for b in p.buffers if b['duplicateOf'] is not None),
            'buffersPlayed': len(played), 'wavFilesOpened': p.wav_opens,
            'wavMatchesVerified': sum(1 for b in p.buffers if b['duplicateOf'] is None and b.get('wavCheck', {}).get('match')),
            'wavMatchesFailed': [b['id'] for b in p.buffers if b['duplicateOf'] is None and not b.get('wavCheck', {}).get('match')],
            'getStatusCalls': total_status, 'getStatusPerSecondInGame': round(total_status / game_seconds, 1) if game_seconds else None,
            'getCurrentPositionCalls': sum(b['getCurrentPosition']['calls'] for b in p.buffers),
            'traceLinesByFunction': dict(sorted(p.counts.items(), key=lambda kv: -kv[1])),
            'apiThreads': dict(p.threads), 'mixerThread': mixer['thread'],
        },
        'checks': p.checks,
        'failedCalls': [w for w in p.warnings if w.get('hresult') is not None and w['function'] not in ('DSOUND_PerformMix',)],
        'wineNotes': [w for w in p.warnings if w.get('hresult') is None or w['function'] in ('DSOUND_PerformMix',)][:20],
        'messageBoxes': p.msgbox, 'unparsed': dict(p.unknown),
        'results': 'result "ok" = Wine logged no warn line for the call (it logs one on every failing path of these methods); values are given where Wine prints them (GetStatus, GetFrequency, Lock, AddRef/Release)',
        'merged': 'consecutive SetVolume / SetPan / SetFrequency calls on one buffer with the same argument are one event with n = number of calls and tLast = time of the last one',
        'log': {'file': os.path.basename(log_path), 'lines': lines, 'bytes': size},
    }
    out = {'meta': meta, 'buffers': p.buffers}
    os.makedirs(os.path.dirname(os.path.abspath(args.out)), exist_ok=True)
    with open(args.out, 'w') as f:
        f.write('{"meta": ' + json.dumps(meta, indent=1) + ',\n"buffers": [\n')
        for i, buf in enumerate(p.buffers):
            evs = buf.pop('events')
            head = json.dumps(buf, separators=(',', ':'))
            f.write(head[:-1] + ',"events":[\n')
            f.write(',\n'.join(json.dumps(e, separators=(',', ':')) for e in evs))
            f.write('\n]}' + (',\n' if i + 1 < len(p.buffers) else '\n'))
            buf['events'] = evs
        f.write(']}\n')
    print(json.dumps({k: meta['counts'][k] for k in ('buffersCreated', 'duplicates', 'buffersPlayed', 'wavMatchesVerified', 'wavMatchesFailed', 'getStatusCalls')}))
    print('failed calls:', len(meta['failedCalls']), '| checks:', p.checks, '| mixer', meta['sink']['mixerFramesPerSecond'], '| unparsed', dict(p.unknown))


# ---- the readable summary ----------------------------------------------------------------------
def id_ranges(ids):
    ids = sorted(ids)
    out = []
    i = 0
    while i < len(ids):
        j = i
        while j + 1 < len(ids) and ids[j + 1] == ids[j] + 1:
            j += 1
        out.append(f'#{ids[i]}' if i == j else f'#{ids[i]}–{ids[j]}')
        i = j + 1
    return ', '.join(out)


def value_at(changes, t):
    cur = changes[0][1]
    for tt, v in changes:
        if tt > t:
            break
        cur = v
    return cur


def short(wav):
    return (wav or '(no file)').replace('Sounds\\', '').replace('VoiceNL\\', 'VoiceNL\\')


def state_in(buf, a, b):
    """Volume and pan ranges of a buffer between a and b seconds, from its events."""
    vol = pan = None
    vols, pans = [], []
    for ev in buf['events']:
        if ev['result'] != 'ok':
            continue
        if ev['op'] == 'Play':
            vol, pan = ev['args']['volume'], ev['args']['pan']
        elif ev['op'] == 'SetVolume':
            vol = ev['args']['volume']
        elif ev['op'] == 'SetPan':
            pan = ev['args']['pan']
        else:
            continue
        if ev['t'] > b:
            break
        if ev['t'] >= a or ev.get('tLast', ev['t']) >= a:
            vols.append(vol)
            pans.append(pan)
        else:
            vols[:] = [vol]
            pans[:] = [pan]
    vols = [v for v in vols if v is not None]
    pans = [v for v in pans if v is not None]
    return (min(vols), max(vols)) if vols else None, (min(pans), max(pans)) if pans else None


def expected_volume(buf, settings):
    """trunc(1000 * log2(Volume.ini value * MasterVolume * player's volume / 100)), the engine's value at full strength."""
    import math
    try:
        ini = float(buf.get('volumeIni'))
        master = float(settings['AdamWin.Ini'].get('[Engine] MasterVolume', 1))
        player = next(v for k, v in settings.items() if k.lower().startswith('player'))
        name = (buf['wav'] or '').split('\\')[-1].lower()
        music = name.startswith('level ') or name.startswith('endbosses')
        share = float(player['[Sound] MusicVolume' if music else '[Sound] SoundVolume']) / 100.0
    except (TypeError, ValueError, KeyError, StopIteration):
        return None
    x = ini * master * share
    return -10000 if x <= 0 else max(-10000, int(1000 * math.log2(x)))


def rng(a, b):
    return str(a) if a == b else f'{a} … {b}'


def sec(t):
    return '%.3f' % (round(t, 3) + 0.0)


def never_played(d):
    return [b for b in d['buffers'] if b['duplicateOf'] is None and not any(p['inWindow'] for p in b['plays'])]


def set_volume_before(b, p):
    """True if the buffer got a SetVolume call of its own between the previous Play (or its creation) and this Play."""
    evs = b['events']
    k = next(i for i, e in enumerate(evs) if e['op'] == 'Play' and e['t'] == p['start'])
    j = k - 1
    while j >= 0 and evs[j]['op'] != 'Play':
        if evs[j]['op'] == 'SetVolume':
            return True
        j -= 1
    return False


def world_tables(d, window, common_never=()):
    """Markdown lines for one run: what plays, how its volume moves, what never plays."""
    out = []
    bufs = d['buffers']
    loud = collections.OrderedDict()
    silent = collections.OrderedDict()
    for b in bufs:
        for p in b['plays']:
            if p['inWindow']:
                (silent if p['volumeMax'] <= -10000 else loud).setdefault(((b['wav'] or '').lower(), p['looping']), []).append((b, p))
    rows = []
    for (_, looping), items in loud.items():
        if len(items) <= 4:
            for b, p in items:
                if looping:
                    stops = 'no' if p['end'] is None or p['end'] > window else f"{sec(p['end'])} ({p['endReason']})"
                else:
                    stops = f"runs out at {sec(p['runsOutAt'])}"
                rows.append((p['start'], '| #%d%s | %s | %s | %s | %s | %d | %s | %d | %d | %s | %s |' % (
                    b['id'], f" (copy of #{b['duplicateOf']})" if b['duplicateOf'] else '', short(b['wav']), 'yes' if looping else 'no',
                    sec(p['start']), stops, p['volumeAtStart'], rng(p['volumeMin'], p['volumeMax']),
                    value_at(p['volumeChanges'], window), p['panAtStart'], rng(p['panMin'], p['panMax']), rng(p['frequencyMin'], p['frequencyMax']))))
        else:
            ids = sorted({b['id'] for b, _ in items})
            copies = sum(1 for i in ids if next(b for b, _ in items if b['id'] == i)['duplicateOf'])
            starts = [p['start'] for _, p in items]
            if looping:
                ends = [p['end'] for _, p in items if p['end'] is not None and p['end'] <= window]
                stops = 'no' if not ends else '%d stopped by %d s' % (len(ends), window)
            else:
                stops = 'each runs out after %s s' % rng(*(lambda v: (min(v), max(v)))([p['bufferSeconds'] for _, p in items]))
            rows.append((min(starts), '| %s: %d plays on %d buffers, %d of them copies | %s | %s | %s … %s | %s | %s | %s | %s | %s | %s | %s |' % (
                id_ranges(ids), len(items), len(ids), copies, short(items[0][0]['wav']), 'yes' if looping else 'no', sec(min(starts)), sec(max(starts)), stops,
                rng(min(p['volumeAtStart'] for _, p in items), max(p['volumeAtStart'] for _, p in items)),
                rng(min(p['volumeMin'] for _, p in items), max(p['volumeMax'] for _, p in items)),
                rng(*(lambda v: (min(v), max(v)))([value_at(p['volumeChanges'], window) for _, p in items])),
                rng(min(p['panAtStart'] for _, p in items), max(p['panAtStart'] for _, p in items)),
                rng(min(p['panMin'] for _, p in items), max(p['panMax'] for _, p in items)),
                rng(min(p['frequencyMin'] for _, p in items), max(p['frequencyMax'] for _, p in items)))))
    rows.sort(key=lambda r: r[0])
    out.append('Above -10000 at some moment:')
    out.append('')
    out.append('| buffer | file | loop | Play at (s) | stops | volume at Play | volume while playing | volume at %d s | pan at Play | pan while playing | Hz |' % window)
    out.append('|---|---|---|---|---|---|---|---|---|---|---|')
    out.extend(r[1] for r in rows)
    if not rows:
        out.append('| (none) | | | | | | | | | | |')
    out.append('')
    if silent:
        out.append('Playing but silent, volume -10000 from `Play` to %d s:' % window)
        out.append('')
        out.append('| buffers | file | loop | plays | Play at (s) | own SetVolume before Play | pan while playing |')
        out.append('|---|---|---|---|---|---|---|')
        for (_, looping), items in silent.items():
            ids = sorted({b['id'] for b, _ in items})
            starts = [p['start'] for _, p in items]
            dup = sum(1 for i in ids if next(b for b, _ in items if b['id'] == i)['duplicateOf'])
            label = id_ranges(ids) + (f' ({dup} of them copies)' if dup and dup < len(ids) else ' (copies)' if dup else '')
            out.append('| %s | %s | %s | %d | %s | %d of %d | %s |' % (
                label, short(items[0][0]['wav']), 'yes' if looping else 'no', len(items), rng(sec(min(starts)), sec(max(starts))),
                sum(1 for b, p in items if set_volume_before(b, p)), len(items),
                rng(min(p['panMin'] for _, p in items), max(p['panMax'] for _, p in items))))
        out.append('')
    moving = sorted(((p['start'], b, p) for items in loud.values() for b, p in items if len(p['volumeChanges']) > 2), key=lambda x: (x[0], x[1]['id']))
    if moving:
        times = [0.0, 0.1, 0.5, 1, 2, 3, 5, 7.5, 10, 15, 20, 30, 40]
        out.append('Volume in force at these seconds, for the buffers whose volume moves while they play (blank = not playing):')
        out.append('')
        out.append('| buffer | file | ' + ' | '.join(f'{t:g}' for t in times) + ' | SetVolume calls |')
        out.append('|---|---|' + '---|' * (len(times) + 1))
        for _, b, p in moving[:24]:
            cells = [str(value_at(p['volumeChanges'], t)) if p['start'] - 0.0005 <= t and (p['end'] is None or t <= p['end']) else '' for t in times]
            calls = sum(e.get('n', 1) for e in b['events'] if e['op'] == 'SetVolume')
            out.append('| #%d | %s | %s | %d |' % (b['id'], short(b['wav']), ' | '.join(cells), calls))
        if len(moving) > 24:
            out.append('')
            out.append('%d more are in the JSON.' % (len(moving) - 24))
        out.append('')
    late = [b for b in bufs if b['duplicateOf'] is None and b['created'] >= 0]
    if late:
        out.append('Loaded while playing (`CreateSoundBuffer` after the first game frame, each just before its `Play`): ' +
                   ', '.join(f"#{b['id']} {short(b['wav'])} at {sec(b['created'])} s" for b in late) + '.')
        out.append('')
    never = never_played(d)
    extra = [b for b in never if (b['wav'] or '').lower() not in common_never]
    if common_never:
        out.append('%d buffers were created and not played in the first %d s: the %d of the common list at the end, and %s' % (
            len(never), window, len(never) - len(extra), (', '.join(short(b['wav']) for b in extra) + '.') if extra else 'nothing else.'))
    else:
        out.append('%d buffers were created and not played in the first %d s: %s.' % (len(never), window, ', '.join(short(b['wav']) for b in never)))
    out.append('')
    return out


def do_report(args):
    import math
    worlds = []
    for path in args.json:
        with open(path) as f:
            worlds.append((path, json.load(f)))
    walk = None
    if args.walk:
        with open(args.walk) as f:
            walk = json.load(f)
    window = int(worlds[0][1]['meta']['time']['summaryWindow'])
    L = []
    L.append('# DirectSound in the original game: the first %d seconds of each world' % window)
    L.append('')
    L.append('What the original `RcHcGame.dat` asks of DirectSound after a world has loaded, traced under %s in a throwaway prefix '
             '(`tools/reference-wine/`). One start per world, no input, %s. Times are seconds after the first game frame (game state '
             'GS_GAME first seen in the process memory); the first `Play` falls in the same millisecond. Volume and pan are DirectSound\'s '
             'own units, hundredths of a decibel. The complete per-buffer timelines are the `dsound-world<N>.json` files next to this one.'
             % (worlds[0][1]['meta']['wine'], 'difficulty %s, adventure' % worlds[0][1]['meta']['launch']['difficulty']))
    L.append('')
    L.append('Generated by `tools/reference-wine/parse.py report`; do not edit by hand.')
    L.append('')
    L.append('## The runs')
    L.append('')
    L.append('| world | proof of load (`AdamDebugNN.log`) | first `Play` (s) | buffers at load | loaded later | copies made | buffers played | above -10000 | failed calls | mixer rate (frames/s at 48000) | frames/s |')
    L.append('|---|---|---|---|---|---|---|---|---|---|---|')
    for path, d in worlds:
        m = d['meta']
        bufs = d['buffers']
        fps = [x[1] for x in m['frameRate']['wineFpsChannel'] if isinstance(x, list) and x[0] > 1]
        L.append('| %d | `%s` | %s | %d | %d | %d | %d | %d | %d | %s | %s |' % (
            m['launch']['world'], (m['worldLoaded'] or ['(none)'])[0], sec(m['time']['firstPlay']) if m['time']['firstPlay'] is not None else '?',
            sum(1 for b in bufs if b['duplicateOf'] is None and b['created'] < 0), sum(1 for b in bufs if b['duplicateOf'] is None and b['created'] >= 0),
            m['counts']['duplicates'], sum(1 for b in bufs if any(p['inWindow'] for p in b['plays'])),
            sum(1 for b in bufs if any(p['audibleInWindow'] for p in b['plays'])), len(m['failedCalls']),
            m['sink']['mixerFramesPerSecond'], f'{min(fps):.0f} … {max(fps):.0f}' if fps else '?'))
    L.append('')
    m1 = worlds[0][1]['meta']
    everything = [d for _, d in worlds] + ([walk] if walk else [])
    sound_errors = sum(len(d['meta']['soundLog']) - 1 for d in everything)
    inactive = sum(d['meta']['player']['samplesWithWindowInactive'] for d in everything)
    boxes = sum(len(d['meta']['messageBoxes']) for d in everything)
    L.append('Every run: `%s`, %s. Lines in `Sound.log` after its start line: %d. Samples in which the game window was not active: %d. Message boxes: %d. '
             'The sound settings of the copy are the owner\'s: `Player1.ini [Sound] MusicVolume=%s, SoundVolume=%s`, `AdamWin.Ini [Engine] MasterVolume=%s`, and per file `Settings\\Volume.ini`. '
             'A screenshot at 3 s and at 40 s of each run is in `tools/out/reference-wine/logs/<run>/`.'
             % (m1['display'][0] if m1['display'] else '', m1['display'][1] if len(m1['display']) > 1 else '', sound_errors, inactive, boxes,
                m1['settings'].get('Player1.ini', {}).get('[Sound] MusicVolume'), m1['settings'].get('Player1.ini', {}).get('[Sound] SoundVolume'),
                m1['settings'].get('AdamWin.Ini', {}).get('[Engine] MasterVolume')))
    L.append('')

    # ---- facts that hold in every run, each one counted from the JSON ----
    allbufs = [(d['meta']['launch']['world'], b) for _, d in worlds for b in d['buffers']]
    flags = collections.Counter(b['flags'] for _, b in allbufs)
    formats = collections.Counter((b['rate'], b['channels'], b['bits']) for _, b in allbufs if b['duplicateOf'] is None)
    ops = collections.Counter()
    plays_total = plays_after_pos = plays_dup_no_volume = plays_dup = 0
    locks_bad = 0
    release_not_dup = release_total = release_after_zero = 0
    pan_min = pan_max = 0
    vol_min, vol_max = 0, -10000
    setpan_calls = setpan_values = 0
    for _, b in allbufs:
        evs = b['events']
        locks = [e for e in evs if e['op'] == 'Lock']
        if b['duplicateOf'] is None:
            first_play = next((e['t'] for e in evs if e['op'] == 'Play'), None)
            if len(locks) != 1 or locks[0]['args']['bytes'] != b['bytes'] or locks[0]['args']['offset'] != 0 or \
                    locks[0]['t'] - b['created'] > 0.05 or (first_play is not None and locks[0]['t'] > first_play):
                locks_bad += 1
        elif locks:
            locks_bad += 1
        for i, e in enumerate(evs):
            ops[e['op']] += e.get('n', 1)
            if e['op'] == 'Play':
                plays_total += 1
                if i and evs[i - 1]['op'] == 'SetCurrentPosition' and evs[i - 1]['args']['position'] == 0:
                    plays_after_pos += 1
                if b['duplicateOf'] and not any(x['op'] == 'Play' for x in evs[:i]):
                    plays_dup += 1
                    if not any(x['op'] == 'SetVolume' for x in evs[:i]):
                        plays_dup_no_volume += 1
            elif e['op'] == 'Release':
                release_total += 1
                if not b['duplicateOf']:
                    release_not_dup += 1
                if i and evs[i - 1]['op'] == 'GetStatus' and evs[i - 1]['result'].get('status') == 0:
                    release_after_zero += 1
            elif e['op'] == 'SetPan':
                pan_min, pan_max = min(pan_min, e['args']['pan']), max(pan_max, e['args']['pan'])
                setpan_calls += e.get('n', 1)
                setpan_values += 1
            elif e['op'] == 'SetVolume':
                vol_min, vol_max = min(vol_min, e['args']['volume']), max(vol_max, e['args']['volume'])
    status_calls = sum(d['meta']['counts']['getStatusCalls'] for _, d in worlds)
    pos_calls = sum(d['meta']['counts']['getCurrentPositionCalls'] for _, d in worlds)
    failed = [(d['meta']['launch']['world'], w) for _, d in worlds for w in d['meta']['failedCalls']]
    dev = m1['device']
    L.append('## How the game uses DirectSound')
    L.append('')
    L.append('Counted over the %d runs above (%d buffers, %d of them copies).' % (len(worlds), len(allbufs), sum(1 for _, b in allbufs if b['duplicateOf'])))
    L.append('')
    coop = next((c for c in dev if c['op'] == 'SetCooperativeLevel'), None)
    fmt = next((c for c in dev if c['op'] == 'PrimaryBuffer.SetFormat'), None)
    L.append('- **Device.** `DirectSoundCreate(NULL)`, `SetCooperativeLevel(hwnd, %s)`, `CreateSoundBuffer` with `DSBCAPS_PRIMARYBUFFER` (no format, 0 bytes), then '
             '`SetFormat` on the primary buffer: %s Hz, %s bit, %s channels. Nothing else is called on the primary buffer (no `Play`). Wine notes that it treats '
             'DSSCL_EXCLUSIVE like DSSCL_PRIORITY and mixes at its own device format (%s Hz float); neither is a failure.'
             % (coop['args']['level'] if coop else '?', fmt['args']['rate'] if fmt else '?', fmt['args']['bits'] if fmt else '?', fmt['args']['channels'] if fmt else '?',
                (m1['primaryBuffer'] or {}).get('wineMixFormat', {}).get('rate', '?')))
    L.append('- **Buffer flags.** ' + '; '.join('`0x%08X` (%s) on %d buffers' % (f, ' | '.join(flag_names(f)), n) for f, n in flags.most_common()) +
             '. No `DSBCAPS_CTRL3D` and no `DSBCAPS_STATIC`: position in the world reaches DirectSound only as volume and pan.')
    L.append('- **Formats.** ' + ', '.join('%d Hz %d-bit %s: %d' % (r, bits, 'mono' if c == 1 else 'stereo', n) for (r, c, bits), n in formats.most_common()) + '.')
    L.append('- **No streaming.** Each file is read whole, then `CreateSoundBuffer` (size = the WAV data chunk; all %d checked against the files), '
             '`GetFrequency`, one `Lock(0, whole size, 0)`, one `Unlock`. No buffer is locked again later. The music is one static buffer too, 5 MB or more.'
             % sum(d['meta']['counts']['wavMatchesVerified'] for _, d in worlds))
    L.append('- **The format pointer** points into the file image, so `cbSize` is read from the bytes after the 16-byte PCM header: %s (0x6164 = "da" of the `data` tag).'
             % ', '.join(str(k) for k in sorted({b.get('cbSize') for _, b in allbufs if b['duplicateOf'] is None})))
    L.append('- **Starting a sound.** `GetStatus`; if the buffer is already playing, `DuplicateSoundBuffer` + `AddRef` and the copy is used; then `SetVolume` / `SetPan` / '
             '`SetFrequency` only for values that differ from what the engine last set on that buffer; `SetCurrentPosition(0)`; `Play(0, 0, DSBPLAY_LOOPING or 0)`. '
             '%d of %d `Play` calls come directly after `SetCurrentPosition(0)`.' % (plays_after_pos, plays_total))
    L.append('- **Copies start with the original\'s volume, pan and frequency** (Wine copies them; the DirectX documentation says the same). The game relies on it: '
             '%d of %d copies were played without any `SetVolume` call of their own.' % (plays_dup_no_volume, plays_dup))
    rare = []
    for w, b in allbufs:
        for e in b['events']:
            if e['op'] in ('Stop', 'SetFrequency'):
                rare.append((e['op'], w, b, e))
    stops = collections.Counter(short(b['wav']) for op, _, b, _ in rare if op == 'Stop')
    freqs = collections.Counter('%s: %d' % (short(b['wav']), e['args']['frequency']) for op, _, b, e in rare if op == 'SetFrequency')
    L.append('- **Rare calls.** `Stop`: %d calls (%s), each on a buffer that `GetStatus` had just reported playing. `SetFrequency`: %d calls (%s); '
             '0 is DSBFREQUENCY_ORIGINAL, the rate the buffer was created with. A looping sound in the world that should not be heard is not stopped, it is set to -10000.'
             % (ops['Stop'], ', '.join('%s x%d' % kv for kv in stops.most_common()) or 'none',
                ops['SetFrequency'], ', '.join('%s x%d' % kv for kv in freqs.most_common()) or 'none'))
    L.append('- **Calls never made:** `GetCurrentPosition` %d, `Restore` %d, `GetVolume` / `GetPan` %d, a second `Lock` %d.'
             % (pos_calls, ops['Restore'], ops['GetVolume'] + ops['GetPan'], locks_bad))
    w1 = worlds[0][1]
    music1 = next((b for b in w1['buffers'] if (b['wav'] or '').lower().startswith('sounds\\level') and b['plays']), None)
    chains = collections.Counter(b['duplicateOf'] for b in w1['buffers'] if b['duplicateOf'] and b['plays'] and b['plays'][0]['looping'])
    chain = [b for b in w1['buffers'] if chains and b['duplicateOf'] == chains.most_common(1)[0][0]]
    frames = music1['getStatus']['calls'] if music1 else 0
    L.append('- **Polling.** `GetStatus` is the only read-back and is called constantly: %d calls, %s per second. In world %d the music buffer was asked %d times, once per frame; '
             'the %d looping copies of %s between %d and %d times, that is %d to %d times per frame: for every copy the engine walks the chain of copies again.'
             % (status_calls, ' / '.join(str(int(d['meta']['counts']['getStatusPerSecondInGame'])) for _, d in worlds), w1['meta']['launch']['world'], frames,
                len(chain), short(chain[0]['wav']) if chain else '?', min(b['getStatus']['calls'] for b in chain) if chain else 0, max(b['getStatus']['calls'] for b in chain) if chain else 0,
                round(min(b['getStatus']['calls'] for b in chain) / frames) if chain and frames else 0, round(max(b['getStatus']['calls'] for b in chain) / frames) if chain and frames else 0))
    L.append('- **Release.** %d `Release` calls, %d on originals. A copy is released (reference count to 0) when it is found stopped the next time the same sound is started: '
             '%d of the %d directly follow a `GetStatus` that returned 0. A finished sound therefore stays allocated until then.'
             % (release_total, release_not_dup, release_after_zero, release_total))
    L.append('- **Volume.** Values from %d to %d. They follow `trunc(1000 * log2(v))` with `v` = `Volume.ini` value x `MasterVolume` x player volume / 100 x distance factor: '
             'a halving of `v` is -1000 (10 dB), and `v` = 0 gives -10000. Table below.' % (vol_min, vol_max))
    L.append('- **Pan.** Values from %d to %d (allowed: -10000 … 10000), so the engine pans by at most 10 dB. `SetPan` is called in every frame in which the engine\'s own '
             'value changed: %d calls, %d after merging repeats of the same integer.' % (pan_min, pan_max, setpan_calls, setpan_values))
    L.append('- **Failed calls:** %s' % ('none. Wine logged no warning for any buffer call.' if not failed else '; '.join(
        'world %d, %.3f s: %s (%s)' % (w, x['t'], x['function'], x['text']) for w, x in failed)))
    L.append('')

    # ---- the volume law, checked on every sound that played ----
    L.append('### Volume values against the settings')
    L.append('')
    L.append('Loudest value each file was given while playing, next to `trunc(1000 * log2(Volume.ini x %s x %s / 100))`. A sound placed in the world can only be at or below it.'
             % (m1['settings'].get('AdamWin.Ini', {}).get('[Engine] MasterVolume'), m1['settings'].get('Player1.ini', {}).get('[Sound] SoundVolume')))
    L.append('')
    L.append('| world | file | Volume.ini | computed | loudest seen | |')
    L.append('|---|---|---|---|---|---|')
    exact = total = 0
    for _, d in worlds:
        seen = collections.OrderedDict()
        for b in d['buffers']:
            for p in b['plays']:
                if p['inWindow']:
                    key = b['wav']
                    seen[key] = (b, max(seen[key][1], p['volumeMax']) if key in seen else p['volumeMax'])
        for wav, (b, loudest) in seen.items():
            exp = expected_volume(b, d['meta']['settings'])
            total += 1
            verdict = 'equal' if exp == loudest else ('below' if exp is not None and loudest < exp else 'ABOVE' if exp is not None else '?')
            exact += verdict == 'equal'
            L.append('| %d | %s | %s | %s | %d | %s |' % (d['meta']['launch']['world'], short(wav), b.get('volumeIni'), exp, loudest, verdict))
    L.append('')
    # the fade of the music
    fades = []
    for _, d in worlds:
        for b in d['buffers']:
            for p in b['plays']:
                ch = p['volumeChanges']
                if len(ch) > 50 and ch[1][1] == -10000 and ch[0][1] > -10000:
                    target = ch[0][1]
                    ta = ch[1][0]
                    k = max(i for i in range(1, len(ch)) if ch[i][0] <= ta + 2.25)      # the last step of the fade
                    if k < 10:
                        continue
                    tb = ta + 2.0
                    worst = 0
                    off = []
                    for tt, v in ch[2:k]:
                        f = (tt - ta) / 2.0
                        if 0.25 <= f < 1:
                            diff = abs(v - (target + 1000 * math.log2(f)))
                            if diff > 40:
                                off.append('%d at %s s' % (v, sec(tt)))
                            else:
                                worst = max(worst, diff)
                    fades.append((d['meta']['launch']['world'], b, p, ta, ch[k][0], target, k - 1, worst, off))
    if fades:
        L.append('**Fade-in of the music.** `Play` with the full value, in the same frame `SetVolume(-10000)`, then one rising `SetVolume` per frame for 2 s. '
                 'The steps are a straight line in `v`, so in these units a curve: `end + 1000 * log2(elapsed / 2 s)`. The last step can stop one or two short of the end value, '
                 'because the fade ends on the frame clock; where it did, the value stayed there.')
        L.append('')
        L.append('| world | buffer | Play at (s) | volume at Play | last step at (s) | value there | steps | largest difference from the curve, 0.5 s to 2 s | steps more than 40 off |')
        L.append('|---|---|---|---|---|---|---|---|---|')
        for w, b, p, ta, tb, target, n, worst, off in fades:
            L.append('| %d | #%d %s | %s | %d | %s | %d | %d | %.0f | %s |' % (w, b['id'], short(b['wav']), sec(p['start']), target, sec(tb), value_at(p['volumeChanges'], tb), n, worst,
                                                                  ', '.join(off) + ' (replaced by the regular value in the same millisecond)' if off else 'none'))
        L.append('')

    never_sets = [{(b['wav'] or '').lower() for b in never_played(d)} for _, d in worlds]
    common_never = set.intersection(*never_sets) if len(never_sets) > 1 else set()
    for path, d in worlds:
        m = d['meta']
        L.append('## World %d' % m['launch']['world'])
        L.append('')
        L.append('`%s`; first game frame %.3f s after the loading screen appeared; capture ends at %.3f s. JSON: `%s`.%s' % (
            (m['worldLoaded'] or ['(no CreateWorldFromFile line)'])[0],
            -next((t for t, name in m['time']['states'] if name == 'GS_LOADING'), 0.0), m['time']['captureEnd'], os.path.basename(path),
            (' Player stands at (%.0f, %.0f, %.0f) throughout.' % tuple(m['player']['positionFirst'])) if m['player']['positionFirst'] and m['player']['positionFirst'] == m['player']['positionLast'] else ''))
        L.append('')
        L.extend(world_tables(d, window, common_never))

    if walk is not None:
        m = walk['meta']
        keys = m['time']['keys']
        L.append('## World %d with a key held' % m['launch']['world'])
        L.append('')
        a = next((k[1] for k in keys if k[0] == 'key_down'), None)
        b_ = next((k[1] for k in keys if k[0] == 'key_up'), None)
        p0, p1 = m['player']['positionFirst'], m['player']['positionLast']
        moved = p0 and p1 and math.dist(p0, p1) or 0.0
        L.append('Second start of world %d, `%s` pressed at %.3f s and released at %.3f s (XTEST key events to the private display). Player position %s → %s: moved %.0f units. JSON: `%s`.'
                 % (m['launch']['world'], keys[0][2] if keys else '?', a or 0, b_ or 0,
                    '(%.0f, %.0f, %.0f)' % tuple(p0) if p0 else '?', '(%.0f, %.0f, %.0f)' % tuple(p1) if p1 else '?', moved, os.path.basename(args.walk)))
        L.append('')
        if a is not None and b_ is not None:
            L.append('While the key was down and one second after (%.1f … %.1f s):' % (a, b_ + 1))
            L.append('')
            L.append('| # | file | copy of | volume range | pan range | started in that time |')
            L.append('|---|---|---|---|---|---|')
            for b in walk['buffers']:
                live = [p for p in b['plays'] if not (p['start'] > b_ + 1 or (p['end'] is not None and p['end'] < a) or (p['runsOutAt'] is not None and p['runsOutAt'] < a))]
                if not live:
                    continue
                vr, pr = state_in(b, a, b_ + 1)
                if not vr or vr[1] <= -10000:
                    continue
                new = [p for p in live if a <= p['start'] <= b_ + 1]
                started = ''
                if len(new) == 1:
                    started = f"{sec(new[0]['start'])} s, {'looping' if new[0]['looping'] else 'once'}"
                elif new:
                    gaps = [y['start'] - x['start'] for x, y in zip(new, new[1:])]
                    started = '%d times, %s … %s s, every %.3f … %.3f s, %s' % (len(new), sec(new[0]['start']), sec(new[-1]['start']), min(gaps), max(gaps),
                                                                           'looping' if new[0]['looping'] else 'not looping, on the same buffer')
                L.append('| %d | %s | %s | %s | %s | %s |' % (b['id'], short(b['wav']), f"#{b['duplicateOf']}" if b['duplicateOf'] else '', rng(*vr), rng(*pr) if pr else '', started))
            L.append('')
            quiet = [b for b in walk['buffers'] if any(p['start'] <= b_ + 1 and (p['end'] is None or p['end'] >= a) and p['looping'] for p in b['plays'])
                     and (state_in(b, a, b_ + 1)[0] or (0, 0))[1] <= -10000]
            L.append('%d looping buffers stayed at -10000 in that time: %s.' % (len(quiet), id_ranges([b['id'] for b in quiet]) or 'none'))
            L.append('')
        L.append('Whole run, for comparison with the run without input:')
        L.append('')
        L.extend(world_tables(walk, window, common_never))

    # ---- what Wine played ----
    audio = [(d['meta']['launch']['world'], d['meta'].get('audio')) for _, d in worlds] + ([('%d, key held' % walk['meta']['launch']['world'], walk['meta'].get('audio'))] if walk else [])
    if any(a and a.get('written') for _, a in audio):
        L.append('## What Wine mixed, as audio')
        L.append('')
        L.append('The stream Wine wrote to its (absent) sound device, from the first game frame on, 48000 Hz stereo, converted from 32-bit float to 16 bit. '
                 'These files are scratch (`tools/out/`, not in git). Wine\'s mixer applies volume as `10^(hundredths/2000)` and pan by lowering one side, and resamples 22050 → 48000 Hz.')
        L.append('')
        L.append('| world | file | seconds | peak (1.0 = full scale) | clipped samples | placed by |')
        L.append('|---|---|---|---|---|---|')
        for w, a in audio:
            if a and a.get('written'):
                L.append('| %s | `%s` | %.1f | %.3f | %d | %s |' % (w, a['file'], a['seconds'], a['peakBeforeClipping'], a['clippedSamples'],
                                                               'first non-zero sample = first sound above -10000 (%s ms from the frame count)' % a.get('modelDisagreesByMs', '?')
                                                               if a['alignment'].startswith('the first') else 'mixer frame count'))
        L.append('')
    # ---- the questions the port's side asked, answered from world 1 without input ----
    d1 = next((d for _, d in worlds if d['meta']['launch']['world'] == 1), None)
    if d1 is not None:
        b1 = d1['buffers']
        L.append('## Checks on world 1')
        L.append('')
        forest = [b for b in b1 if b['duplicateOf'] and (b['wav'] or '').lower().endswith('forest3.wav') and b['plays']]
        own = [b for b in forest if set_volume_before(b, b['plays'][0])]
        quiet = [b for b in forest if all(p['volumeMax'] <= -10000 for p in b['plays'] if p['inWindow'])]
        heard = [b for b in forest if b not in quiet]
        parts = []
        for b in heard:
            p = b['plays'][0]
            ch = p['volumeChanges']
            up = [c for c in ch if c[1] > -10000]
            down = next((c for c in ch if c[0] > up[0][0] and c[1] <= -10000), None) if up else None
            parts.append('#%d is above -10000 from %s s %s (%s, %d at %d s)' % (
                b['id'], sec(up[0][0]), ('to %s s' % sec(down[0])) if down else 'on', rng(min(c[1] for c in up), max(c[1] for c in up)), value_at(ch, window), window))
        L.append('- **Copies of forest3.WAV.** %d copies are played, all looping, at %s … %s s. %d of them get no `SetVolume` call before `Play` and start with the -10000 the original had at that moment; '
                 '%d has its own `SetVolume` first (%s). %d stay at -10000 for the whole %d s. Not silent: %s. The original #%d itself stays at -10000.'
                 % (len(forest), sec(min(b['plays'][0]['start'] for b in forest)), sec(max(b['plays'][0]['start'] for b in forest)), len(forest) - len(own), len(own),
                    ', '.join('#%d: %d' % (b['id'], b['plays'][0]['volumeAtStart']) for b in own) or 'none', len(quiet), window, '; '.join(parts) or 'none',
                    forest[0]['duplicateOf'] if forest else 0))
        for b in b1:
            name = (b['wav'] or '').lower()
            if name.endswith('level 1 - the forest.wav') and b['plays']:
                p = b['plays'][0]
                ch = p['volumeChanges']
                fade = [c for c in ch if c[0] <= ch[1][0] + 2.25]
                later = [c for c in ch if c[0] > ch[1][0] + 2.25]
                L.append('- **Music.** `SetVolume(%d)`, `Play` (looping) at %s s, `SetVolume(-10000)` in the same frame, then the fade: %d at 0.5 s, %d at 1 s, last step %d at %s s, %s. '
                         'So the value at `Play` is %d and the fade comes after it, not before.'
                         % (p['volumeAtStart'], sec(p['start']), value_at(ch, 0.5), value_at(ch, 1.0), fade[-1][1], sec(fade[-1][0]),
                            'no change after that' if not later else 'then %s' % ', '.join('%d at %s s' % (v, sec(t)) for t, v in later[:4]), p['volumeAtStart']))
            if name.endswith('lv1snd1.wav') and b['plays']:
                p = b['plays'][0]
                ch = p['volumeChanges']
                L.append('- **LV1snd1.WAV.** `Play` (looping) at %s s with -10000, `SetVolume(%d)` at %s s, no change after that; pan moves between %d and %d.'
                         % (sec(p['start']), ch[1][1] if len(ch) > 1 else p['volumeAtStart'], sec(ch[1][0]) if len(ch) > 1 else '?', p['panMin'], p['panMax']))
        voices = [(d['meta']['launch']['world'], b, p) for _, d in worlds for b in d['buffers'] if (b['wav'] or '').lower().startswith('voicenl') for p in b['plays']]
        vv = collections.Counter(p['volumeAtStart'] for _, _, p in voices)
        L.append('- **Voices.** %d `VoiceNL` files were played in the %d runs, each loaded just before its `Play`, never looping, pan 0, volume %s. In world 1: %s.'
                 % (len(voices), len(worlds), ', '.join('%d (%d times)' % kv for kv in vv.most_common()),
                    ', '.join('%s at %s s' % (short(b['wav']), sec(p['start'])) for w, b, p in voices if w == 1)))
        everything = [d for _, d in worlds] + ([walk] if walk else [])
        pans = [e['args']['pan'] for d in everything for b in d['buffers'] for e in b['events'] if e['op'] == 'SetPan']
        L.append('- **Pan.** Over all %d runs: %d to %d. No `SetPan` and no `SetVolume` call failed.' % (len(everything), min(pans), max(pans)))
        first = sorted((ev['t'], b['id'], short(b['wav']), ev['args']['volume']) for b in b1 for ev in b['events'] if ev['op'] == 'Play')[:8]
        L.append('- **Order.** The buffers are created in the order of the port\'s list (#1 empty.wav %d bytes, #2 Endbosses.wav %d, #3 the music %d, #4 forest3.WAV %d, …; '
                 'the port counts the primary buffer as its #1, so its numbers are one higher). First `Play` calls: %s.'
                 % (b1[0]['bytes'], b1[1]['bytes'], b1[2]['bytes'], b1[3]['bytes'], ', '.join('#%d %s at %s s (%d)' % (i, n, sec(t), v) for t, i, n, v in first)))
        L.append('')

    if common_never:
        names = [short(b['wav']) for b in never_played(worlds[0][1]) if (b['wav'] or '').lower() in common_never]
        L.append('## Loaded in every world, played in none of these runs')
        L.append('')
        L.append('%d files: %s.' % (len(names), ', '.join(names)))
        L.append('')
    with open(args.out, 'w') as f:
        f.write('\n'.join(L))
        if args.tail and os.path.exists(args.tail):
            with open(args.tail) as t:
                f.write('\n' + t.read())
    print('wrote', args.out, len(L), 'lines; volume law equal on', exact, 'of', total)


if __name__ == '__main__':
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest='cmd', required=True)
    a = sub.add_parser('parse')
    a.add_argument('--run', required=True)
    a.add_argument('--out', required=True)
    a.add_argument('--game', default=None, help='the private copy of the game folder, to check each WAV against its buffer')
    a.add_argument('--window', type=float, default=40.0)
    a.add_argument('--audio', default=None, help='write the kept stream as a 16-bit WAV file here')
    a.add_argument('--relative-to', default=None, help='paths in the output are given relative to this folder')
    a.add_argument('--wine-version', default='wine-11.20 (Staging)')
    a.set_defaults(fn=do_parse)
    r = sub.add_parser('report')
    r.add_argument('--json', nargs='+', required=True, help='dsound-world<N>.json files, in order')
    r.add_argument('--walk', default=None, help='the run with a key held')
    r.add_argument('--tail', default=None, help='a Markdown file appended as written (the hand-written notes)')
    r.add_argument('--out', required=True)
    r.set_defaults(fn=do_report)
    args = ap.parse_args()
    if args.cmd == 'parse' and args.game is None:
        args.game = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(args.run))), 'prefix', 'drive_c', 'RCSPOOK')
    args.fn(args)
