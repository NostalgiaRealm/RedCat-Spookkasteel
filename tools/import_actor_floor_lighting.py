#!/usr/bin/env python3
"""Preserve native BSP face lookup for actor floor ambient, without reimporting textures."""
from __future__ import annotations

import argparse
import hashlib
import json
import math
from pathlib import Path

from import_levels import DEFAULT_SOURCE, ROOT, dot, read_chunks, records, require

ACTOR_FLOOR_FILE = 'actor-floor-lighting.json'


def actor_floor_metadata(source: Path, level: dict) -> dict:
    original = source.read_bytes()
    require(hashlib.sha256(original).hexdigest() == level['source']['sha256'], 'BSP differs from imported source')
    chunks, _ = read_chunks(original)
    vertices = records(chunks, 14, '<3f')
    indices = [v[0] for v in records(chunks, 13, '<i')]
    faces = records(chunks, 11, '<8i4B')
    infos = records(chunks, 17, '<10fI4fi')
    nodes = records(chunks, 2, '<5i6f')
    require([[n[0], n[1], n[4]] for n in nodes] == level['collision']['nodes'], 'BSP node order differs')
    result = []
    for face in faces:
        first, count, plane_id, side, info_id, offset, width, height = face[:8]
        info = infos[info_id]
        positions = [vertices[indices[i]] for i in range(first, first + count)]
        require(positions, 'Empty BSP face')
        require(offset < 0 or tuple(face[8:]) == (0, 255, 255, 255), 'Styled floor lightmap requires an explicit style importer')
        require(offset < 0 or offset + 1 + width * height * 3 <= len(chunks[20][2]), 'Lightmap extends beyond original bytes')
        bounds = [min(p[i] for p in positions) for i in range(3)] + [max(p[i] for p in positions) for i in range(3)]
        min_uv = [math.floor(min(dot(p, axis) for p in positions) / 16) * 16 for axis in (info[:3], info[3:6])]
        # MinU/V are raw texture-vector extents. Light_GetLightmapRGB also adds
        # the authored shifts; preserve that native distinction from BSP UVs.
        result.append(bounds + list(info[:8]) + min_uv + [width, height, offset, info[10], plane_id, side])
    ranges = [[n[3], n[2]] for n in nodes]
    require(all(0 <= first <= len(faces) and 0 <= count <= len(faces)-first for first, count in ranges), 'Invalid node face range')
    return {'sourceSha256': level['source']['sha256'], 'nodeFaces': ranges,
            'faceFields': ['min:3', 'max:3', 'texU:3', 'texV:3', 'shift:2', 'minUV:2', 'width', 'height', 'lightOffset', 'flags', 'plane', 'side'],
            'faces': result}


def write_actor_floor(folder: Path, source: Path, level: dict):
    metadata = actor_floor_metadata(source, level)
    (folder / ACTOR_FLOOR_FILE).write_text(json.dumps(metadata, separators=(',', ':')), encoding='utf-8')
    level['mesh']['lightmap']['actorFloorFile'] = ACTOR_FLOOR_FILE
    return metadata


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=DEFAULT_SOURCE)
    parser.add_argument('--data', type=Path, default=ROOT / 'data' / 'levels')
    parser.add_argument('--level', action='append', choices=[f'lvl0{i}a' for i in range(5)])
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    for level_id in args.level or [f'lvl0{i}a' for i in range(5)]:
        folder = args.data / level_id
        path = folder / 'level.json'
        level = json.loads(path.read_text())
        source = args.source / level['source']['file']
        if args.check:
            metadata = actor_floor_metadata(source, level)
            require(metadata == json.loads((folder / ACTOR_FLOOR_FILE).read_text()), 'Floor metadata differs')
            require(level['mesh']['lightmap'].get('actorFloorFile') == ACTOR_FLOOR_FILE, 'Floor metadata reference missing')
        else:
            metadata = write_actor_floor(folder, source, level)
            path.write_text(json.dumps(level, separators=(',', ':'), ensure_ascii=False), encoding='utf-8')
        print(f'{level_id}: {len(metadata["faces"])} actor floor faces and {len(metadata["nodeFaces"])} BSP node ranges verified')


if __name__ == '__main__':
    main()
