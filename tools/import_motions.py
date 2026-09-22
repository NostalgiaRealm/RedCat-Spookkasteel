#!/usr/bin/env python3
"""Decode the preserved original GBSP model motions without Windows/Genesis3D.

The original five worlds use Genesis_Motion_File v1.0, MOTN 0.F0,
TKEV 0.F0, SBLK 0.F0 and PATH 0.F2 text records. Source definitions are
World/Gbspfile.c and Actor/{motion,path,tkevents,vkframe,QKFrame}.c.
The input is an already imported, owned copy of the original game data.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import math
from pathlib import Path


class Reader:
    def __init__(self, data):
        self.lines = data.decode('cp1252').splitlines()
        self.index = 0

    def line(self):
        if self.index >= len(self.lines):
            raise ValueError('Truncated Genesis3D motion record')
        value = self.lines[self.index]
        self.index += 1
        return value

    def field(self, expected):
        parts = self.line().split(maxsplit=1)
        if not parts or parts[0] != expected:
            raise ValueError(f'Line {self.index}: expected {expected}, got {parts!r}')
        return parts[1] if len(parts) > 1 else ''

    def integer(self, field, maximum=1_000_000):
        value = int(self.field(field))
        if not 0 <= value <= maximum:
            raise ValueError(f'Invalid {field}: {value}')
        return value

    def expect(self, expected):
        actual = self.line()
        if actual != expected:
            raise ValueError(f'Line {self.index}: expected {expected!r}, got {actual!r}')


def numbers(line, count):
    # Compressed records append explanatory text ("Start T,Delta T", "Axis").
    values = [float(v) for v in line.split()[:count]]
    if len(values) != count or not all(math.isfinite(v) for v in values):
        raise ValueError('Invalid or non-finite motion values')
    return values


def keyframes(reader, rotation):
    fields = reader.field('Keys').split()
    if len(fields) != 4:
        raise ValueError('Invalid Keys header')
    count, interpolation, compression, loop = map(int, fields)
    if not 0 <= count <= 1_000_000 or interpolation not in (0, 1, 2):
        raise ValueError('Invalid motion key count or interpolation')
    if compression & ~(3 if rotation else 2) or loop not in (0, 1):
        raise ValueError('Unsupported motion compression or loop flag')
    if compression & 2:
        start, step = numbers(reader.line(), 2)
        if count > 1 and step <= 0:
            raise ValueError('Compressed key times must increase')
    if rotation and compression & 1:
        axis = numbers(reader.line(), 3)
        length = math.hypot(*axis)
        if abs(length - 1) > .001:
            raise ValueError('Invalid quaternion hinge axis')
    times, values = [], []
    width = 1 if rotation and compression & 1 else (4 if rotation else 3)
    for i in range(count):
        record = numbers(reader.line(), width + (0 if compression & 2 else 1))
        time = start + step * i if compression & 2 else record.pop(0)
        if times and time <= times[-1]:
            raise ValueError('Motion key times must increase')
        times.append(time)
        if rotation and compression & 1:
            angle = record[0] * .5
            values.extend([v * math.sin(angle) for v in axis] + [math.cos(angle)])
        elif rotation:
            # geQuaternion stores W,X,Y,Z. Export X,Y,Z,W, as used by Three.
            w, x, y, z = record
            if abs(math.hypot(w, x, y, z) - 1) > .001:
                raise ValueError('Invalid motion quaternion')
            values.extend([x, y, z, w])
        else:
            values.extend(record)
    return {'times': times, 'values': values, 'interpolation': interpolation, 'loop': bool(loop)}


def path(reader):
    reader.expect('PATH 0.F2')
    result = {}
    for field, rotation in [('Rotation', True), ('Translation', False)]:
        flags = reader.field(field).split()
        if len(flags) != 2 or int(flags[0]) not in (0, 1):
            raise ValueError('Invalid path channel header')
        if int(flags[0]):
            result[field.lower()] = keyframes(reader, rotation)
    # Genesis sets one path-level loop flag if either channel is looped.
    result['loop'] = any(c.get('loop') for c in result.values())
    for name in ('rotation', 'translation'):
        if name in result:
            result[name]['loop'] = result['loop']
    return result


def events(reader):
    reader.expect('TKEV 0.F0')
    size = reader.integer('DataSize')
    count = reader.integer('TimeKeys')
    result, occupied = [], set()
    for _ in range(count):
        pair = reader.line().split()
        if len(pair) != 2:
            raise ValueError('Invalid event time/offset')
        time, offset = float(pair[0]), int(pair[1])
        label = reader.line()
        end = offset + len(label.encode('cp1252')) + 1
        if not math.isfinite(time) or not 0 <= offset < end <= size:
            raise ValueError('Event string outside declared DataSize')
        span = set(range(offset, end))
        if occupied & span:
            raise ValueError('Overlapping event strings')
        occupied.update(span)
        if result and time <= result[-1]['time']:
            raise ValueError('Event times must increase')
        result.append({'time': time, 'label': label})
    if len(occupied) != size:
        raise ValueError('Unconsumed event data')
    return result


def motion(reader):
    reader.expect('MOTN 0.F0')
    name = reader.field('NameID')
    reader.integer('MaintainNames', 1)
    count = reader.integer('PathCount')
    int(reader.field('NameChecksum'))
    labels = events(reader) if reader.integer('Events', 1) else []
    if reader.integer('NameArray', 1):
        reader.expect('SBLK 0.F0')
        name_count = reader.integer('Strings')
        if name_count != count:
            raise ValueError('Path and name counts differ')
        names = [reader.line() for _ in range(name_count)]
    else:
        names = [str(i) for i in range(count)]
    if reader.integer('PathArray') != count:
        raise ValueError('PathArray count differs from PathCount')
    paths = [dict(name=names[i], **path(reader)) for i in range(count)]
    times = [time for p in paths for c in ('rotation', 'translation')
             for time in p.get(c, {}).get('times', [])]
    start, end = (min(times), max(times)) if times else (0, 0)
    event_end = max((e['time'] for e in labels), default=end)
    playback_end = max(end, event_end)
    return {'name': name, 'startTime': start, 'endTime': end, 'duration': end-start,
            'pathEndTime': end, 'eventEndTime': event_end, 'playbackEndTime': playback_end,
            'playbackDuration': playback_end-start,
            'paths': paths, 'events': labels}


def decode(data, level=None):
    reader = Reader(data)
    reader.expect('Genesis_Motion_File v1.0')
    count = reader.integer('NumMotions')
    motions, seen = [], set()
    models = level.get('collision', {}).get('models', []) if level else []
    names = {int(e['Model']): e.get('%name%', '') for e in level.get('entities', [])
             if e.get('classname') == '%Model%' and 'Model' in e} if level else {}
    for _ in range(count):
        model = reader.integer('ModelNum')
        if model in seen or (level is not None and model >= len(models)):
            raise ValueError(f'Duplicate or unknown model {model}')
        seen.add(model)
        item = motion(reader)
        item['model'] = model
        item['sourceName'] = item['name']
        item['name'] = item['name'] or names.get(model, '') or f'model{model}'
        item['origin'] = models[model]['origin'] if models else [0, 0, 0]
        motions.append(item)
    if reader.index != len(reader.lines):
        raise ValueError('Unexpected data after final motion')
    return {'version': 1, 'level': level.get('id') if level else None,
            'units': 'original Genesis3D units; Y up; seconds; quaternion XYZW',
            'source': {'file': 'motions.bin', 'sha256': hashlib.sha256(data).hexdigest()},
            'motions': motions,
            'stats': {'motions': len(motions), 'paths': sum(len(m['paths']) for m in motions),
                      'events': sum(len(m['events']) for m in motions),
                      'keyframes': sum(len(c.get('times', [])) for m in motions for p in m['paths']
                                       for name, c in p.items() if name in ('rotation', 'translation'))}}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    root = Path(__file__).resolve().parents[1]
    parser.add_argument('--levels', type=Path, default=root / 'data/levels')
    parser.add_argument('--output', type=Path, default=root / 'data/motions')
    args = parser.parse_args()
    sources = sorted(args.levels.glob('*/motions.bin'))
    if not sources:
        parser.error(f'No imported level motions found in {args.levels}')
    args.output.mkdir(parents=True, exist_ok=True)
    for source in sources:
        level = json.loads(source.with_name('level.json').read_text(encoding='utf-8'))
        result = decode(source.read_bytes(), level)
        target = args.output / f"{level['id']}.json"
        target.write_text(json.dumps(result, separators=(',', ':'), ensure_ascii=False), encoding='utf-8')
        print(f"{target.name}: {result['stats']}")


if __name__ == '__main__':
    main()
