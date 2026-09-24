#!/usr/bin/env python3
"""Add native BSP light texture frames without rebuilding meshes or textures."""
from __future__ import annotations

import argparse
from collections import defaultdict
import hashlib
import json
import math
from pathlib import Path
import struct

from import_levels import DEFAULT_SOURCE, ROOT, dot, read_chunks, records, require

LIGHT_FRAME_METADATA = {'framesFile': 'lightmap-frames.bin', 'framesStride': 32,
                        'framesAttributes': ['texAxisU:3', 'texAxisV:3', 'minUV:2']}


def light_frames(source: Path, level: dict, mesh: bytes) -> bytes:
    original = source.read_bytes()
    require(hashlib.sha256(original).hexdigest() == level['source']['sha256'], 'BSP differs from imported source')
    chunks, _ = read_chunks(original)
    vertices = records(chunks, 14, '<3f')
    indices = [v[0] for v in records(chunks, 13, '<i')]
    faces = records(chunks, 11, '<8i4B')
    planes = records(chunks, 10, '<4fi')
    infos = records(chunks, 17, '<10fI4fi')
    models = records(chunks, 1, '<2i9f9i')
    owners = [-1] * len(faces)
    for model_index, model in enumerate(models):
        for face_index in range(model[11], model[11] + model[12]):
            owners[face_index] = model_index
    batches = defaultdict(list)
    for face_index, face in enumerate(faces):
        first, count, plane_id, side, info_id = face[:5]
        info = infos[info_id]
        normal = tuple(v * (-1 if side else 1) for v in planes[plane_id][:3])
        positions = [vertices[indices[i]] for i in range(first, first + count)]
        min_uv = tuple(math.floor(min(dot(p, axis) for p in positions) / 16) * 16
                       for axis in (info[:3], info[3:6]))
        frame = struct.pack('<8f', *info[:6], *min_uv)
        flags = info[10]
        alpha = max(0.0, min(1.0, info[13] / 255.0)) if flags & 16 else 1.0
        key = (info[-1], owners[face_index], flags, alpha)
        for i in range(1, count - 1):
            tri = [positions[0], positions[i], positions[i + 1]]
            a = [tri[1][j] - tri[0][j] for j in range(3)]
            b = [tri[2][j] - tri[0][j] for j in range(3)]
            cross = (a[1]*b[2]-a[2]*b[1], a[2]*b[0]-a[0]*b[2], a[0]*b[1]-a[1]*b[0])
            if dot(cross, cross) < 1e-12:
                continue
            if dot(cross, normal) < 0:
                tri[1], tri[2] = tri[2], tri[1]
            batches[key].extend((struct.pack('<6f', *p, *normal), frame) for p in tri)
    result = bytearray()
    vertex = 0
    for key in sorted(batches):
        for position_normal, frame in batches[key]:
            require(mesh[vertex*44:vertex*44+24] == position_normal,
                    f'Existing mesh order differs at vertex {vertex}; no files written')
            result += frame
            vertex += 1
    require(vertex == level['mesh']['vertexCount'] and len(mesh) == vertex*44, 'Mesh vertex count differs')
    return bytes(result)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=DEFAULT_SOURCE)
    parser.add_argument('--data', type=Path, default=ROOT / 'data' / 'levels')
    parser.add_argument('--level', action='append', choices=[f'lvl0{i}a' for i in range(5)])
    parser.add_argument('--check', action='store_true', help='Validate existing frames without writing')
    args = parser.parse_args()
    for level_id in args.level or [f'lvl0{i}a' for i in range(5)]:
        folder = args.data / level_id
        path = folder / 'level.json'
        level = json.loads(path.read_text())
        result = light_frames(args.source / level['source']['file'], level, (folder / level['mesh']['file']).read_bytes())
        sidecar = folder / 'lightmap-frames.bin'
        metadata = LIGHT_FRAME_METADATA
        if args.check:
            require(sidecar.read_bytes() == result, f'{level_id}: native light frames differ')
            require(all(level['mesh']['lightmap'].get(k) == v for k, v in metadata.items()), 'Light frame metadata differs')
        else:
            sidecar.write_bytes(result)
            level['mesh']['lightmap'].update(metadata)
            path.write_text(json.dumps(level, separators=(',', ':'), ensure_ascii=False), encoding='utf-8')
        print(f'{level_id}: {len(result)//32} verified native lighting frames ({len(result)} bytes)')


if __name__ == '__main__':
    main()
