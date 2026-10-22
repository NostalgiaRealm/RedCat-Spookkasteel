#!/usr/bin/env python3
"""Read RedCat's original GBSP v15 levels; emit portable, verified assets.

No original files are changed. Python 3 standard library only. This is a format
reader, not Genesis3D engine code. See docs/asset-formats.md for the schema.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import math
import struct
import sys
import zlib
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_SOURCE = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Levels')
CHUNK_NAMES = {0: 'header', 1: 'models', 2: 'nodes', 3: 'bnodes', 4: 'leaves',
               5: 'clusters', 6: 'areas', 7: 'areaPortals', 8: 'leafSides',
               9: 'portals', 10: 'planes', 11: 'faces', 12: 'leafFaces',
               13: 'vertexIndices', 14: 'vertices', 15: 'vertexColors',
               16: 'entities', 17: 'texInfo', 18: 'textures', 19: 'texturePixels',
               20: 'lightmaps', 21: 'visibility', 22: 'sky', 23: 'palettes', 24: 'motions'}


class FormatError(ValueError):
    """Input is truncated, unsupported, or contains invalid references."""


def require(condition, message):
    if not condition:
        raise FormatError(message)


def read_chunks(data: bytes):
    chunks, inventory, offset = {}, [], 0
    while offset < len(data):
        require(offset + 12 <= len(data), 'Truncated chunk header')
        kind, size, count = struct.unpack_from('<3I', data, offset)
        offset += 12
        require(kind not in chunks, f'Duplicate chunk {kind}')
        require(offset + size * count <= len(data), f'Truncated chunk {kind}')
        if kind == 65535:
            require(size == count == 0 and offset == len(data), 'Invalid end chunk/trailing data')
            break
        chunks[kind] = (size, count, data[offset:offset + size * count])
        inventory.append({'id': kind, 'name': CHUNK_NAMES.get(kind, 'unknown'), 'elementSize': size, 'count': count})
        offset += size * count
    else:
        raise FormatError('Missing end chunk')
    require(0 in chunks and chunks[0][:2] == (28, 1), 'Missing GBSP header')
    header = chunks[0][2]
    require(header[:5] == b'GBSP\0', 'Not a GBSP file')
    require(struct.unpack_from('<I', header, 8)[0] == 15, 'Only GBSP v15 is supported')
    return chunks, inventory


def records(chunks, kind, fmt):
    require(kind in chunks, f'Missing {CHUNK_NAMES.get(kind, kind)} chunk')
    size, count, data = chunks[kind]
    require(size == struct.calcsize(fmt), f'Unexpected {CHUNK_NAMES.get(kind, kind)} record size: {size}')
    result = list(struct.iter_unpack(fmt, data))
    require(len(result) == count, f'Record count mismatch in chunk {kind}')
    return result


def read_entities(data: bytes):
    offset = 0
    def integer():
        nonlocal offset
        require(offset + 4 <= len(data), 'Truncated entity integer')
        value = struct.unpack_from('<I', data, offset)[0]
        offset += 4
        return value
    def string():
        nonlocal offset
        size = integer()
        require(0 < size <= len(data) - offset, 'Invalid entity string size')
        value = data[offset:offset + size]
        offset += size
        require(value[-1] == 0, 'Entity string is not NUL terminated')
        return value[:-1].decode('cp1252')
    count = integer()
    require(count <= len(data) // 4, 'Invalid entity count')
    entities = []
    for _ in range(count):
        pairs = integer()
        require(pairs <= len(data) // 10, 'Invalid entity property count')
        entity = {}
        for _ in range(pairs):
            key, value = string(), string()
            entity[key] = value
        entities.append(entity)
    require(offset == len(data), 'Trailing entity data')
    return entities


def png(path: Path, width: int, height: int, rgb: bytes, channels=3):
    require(len(rgb) == width * height * channels, 'PNG pixel count mismatch')
    def chunk(kind, payload):
        return struct.pack('>I', len(payload)) + kind + payload + struct.pack('>I', zlib.crc32(kind + payload) & 0xffffffff)
    stride = width * channels
    rows = b''.join(b'\0' + rgb[y*stride:(y+1)*stride] for y in range(height))
    data = b'\x89PNG\r\n\x1a\n'
    data += chunk(b'IHDR', struct.pack('>2I5B', width, height, 8, 2 if channels == 3 else 6, 0, 0, 0))
    data += chunk(b'IDAT', zlib.compress(rows, 9)) + chunk(b'IEND', b'')
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_bytes(data)


def vec(value):
    try:
        parsed = [float(v) for v in value.split()]
        return parsed if len(parsed) == 3 and all(math.isfinite(v) for v in parsed) else None
    except (TypeError, ValueError):
        return None


def dot(a, b):
    return sum(a[i] * b[i] for i in range(3))


def build_lightmap_atlas(chunks, faces, infos):
    """Pack first-style lightmaps, with duplicated borders for linear filtering."""
    data = chunks[20][2]
    width, x, y, row_height = 1024, 4, 0, 4
    placements = {}
    for face_id, face in enumerate(faces):
        offset, w, h = face[5:8]
        flags = infos[face[4]][10]
        if offset < 0 or w <= 0 or h <= 0 or flags & (2 | 32 | 32768):
            continue
        require(w + 2 <= width and h <= 1024, 'Unsupported lightmap dimensions')
        require(offset + 1 + w*h*3 <= len(data), 'Lightmap data outside chunk')
        require(data[offset] == 1, 'Expected RGB lightmap marker')
        if x + w + 2 > width:
            x, y, row_height = 0, y + row_height, 0
        placements[face_id] = (x+1, y+1, w, h, offset+1)
        x += w + 2
        row_height = max(row_height, h + 2)
    height = 1
    while height < y + row_height:
        height *= 2
    pixels = bytearray(b'\xff' * (width * height * 3))
    for x, y, w, h, offset in placements.values():
        for row in range(-1, h+1):
            src_y = max(0, min(h-1, row))
            for col in range(-1, w+1):
                src_x = max(0, min(w-1, col))
                src = offset + (src_y*w + src_x)*3
                dst = ((y+row)*width + x+col)*3
                pixels[dst:dst+3] = data[src:src+3]
    return width, height, pixels, placements


def export_level(source: Path, output: Path):
    data = source.read_bytes()
    chunks, inventory = read_chunks(data)
    vertices = records(chunks, 14, '<3f')
    indices = [v[0] for v in records(chunks, 13, '<i')]
    colors = records(chunks, 15, '<3f')
    planes = records(chunks, 10, '<4fi')
    faces = records(chunks, 11, '<8i4B')
    infos = records(chunks, 17, '<10fI4fi')
    raw_textures = records(chunks, 18, '<32sI4i')
    raw_models = records(chunks, 1, '<2i9f9i')
    raw_nodes = records(chunks, 2, '<5i6f')
    raw_leaves = records(chunks, 4, '<i6f8i')
    leaf_sides = records(chunks, 8, '<2i')
    entities = read_entities(chunks[16][2])
    require(len(colors) == len(indices), 'RGB corner count differs from vertex index count')
    require(all(0 <= i < len(vertices) for i in indices), 'Vertex index outside vertex array')
    require(all(math.isfinite(v) for xyz in vertices for v in xyz), 'Non-finite vertex')
    out = output / source.stem.lower()
    out.mkdir(parents=True, exist_ok=True)
    palettes, pixels = chunks[23][2], chunks[19][2]
    transparent_textures = {info[-1] for info in infos if info[10] & 16}
    textures = []
    for i, (raw_name, flags, width, height, offset, palette) in enumerate(raw_textures):
        name = raw_name.split(b'\0', 1)[0].decode('cp1252')
        require(0 < width <= 8192 and 0 < height <= 8192, f'Invalid texture dimensions: {name}')
        require(0 <= offset <= len(pixels)-width*height, f'Invalid texture offset: {name}')
        require(0 <= palette and (palette+1)*768 <= len(palettes), f'Invalid palette: {name}')
        pal = palettes[palette*768:(palette+1)*768]
        indexed = pixels[offset:offset+width*height]
        # Original 1999/2000 GBSP uses 8-bit indices with an RGB palette.
        # Index 255 is the color key only for texinfo-marked transparent surfaces.
        has_alpha = i in transparent_textures
        decoded = bytearray()
        for index in indexed:
            decoded += pal[index*3:index*3+3]
            if has_alpha:
                decoded.append(0 if index == 255 else 255)
        filename = f'textures/{i:03d}.png'
        png(out / filename, width, height, decoded, 4 if has_alpha else 3)
        textures.append({'name': name, 'file': filename, 'width': width, 'height': height, 'flags': flags, 'colorKey': has_alpha})

    models, face_models = [], [-1] * len(faces)
    for i, model in enumerate(raw_models):
        root, _, *rest = model
        first, count = model[11:13]
        require(0 <= first <= len(faces) and 0 <= count <= len(faces)-first, 'Model face range invalid')
        for fi in range(first, first+count):
            require(face_models[fi] == -1, 'Model face ranges overlap')
            face_models[fi] = i
        models.append({'root': root, 'min': model[2:5], 'max': model[5:8], 'origin': model[8:11],
                       'firstFace': first, 'numFaces': count, 'firstLeaf': model[13], 'numLeaves': model[14]})
    require(all(i >= 0 for i in face_models), 'Unassigned model faces')
    atlas_width, atlas_height, atlas_pixels, atlas_faces = build_lightmap_atlas(chunks, faces, infos)
    png(out / 'lightmap.png', atlas_width, atlas_height, atlas_pixels)
    batches = defaultdict(list)
    degenerate = 0
    for face_id, face in enumerate(faces):
        first, count, plane_id, side, info_id = face[:5]
        require(0 <= first <= len(indices) and 0 <= count <= len(indices)-first, 'Face vertex range invalid')
        require(0 <= plane_id < len(planes) and 0 <= info_id < len(infos), 'Face reference invalid')
        info = infos[info_id]
        texture_id, flags = info[-1], info[10]
        require(0 <= texture_id < len(textures), 'Texture info references unknown texture')
        require(info[8] != 0 and info[9] != 0, 'Texture draw scale is zero')
        texture = textures[texture_id]
        normal = tuple(v * (-1 if side else 1) for v in planes[plane_id][:3])
        alpha = max(0.0, min(1.0, info[13] / 255.0)) if flags & 16 else 1.0
        key = (texture_id, face_models[face_id], flags, alpha)
        lightmap = atlas_faces.get(face_id)
        face_positions = [vertices[indices[ci]] for ci in range(first, first+count)]
        if lightmap:
            min_u = math.floor(min(dot(p, info[:3]) for p in face_positions)/16.0)
            min_v = math.floor(min(dot(p, info[3:6]) for p in face_positions)/16.0)
        corners = []
        for ci in range(first, first+count):
            position = vertices[indices[ci]]
            uv = ((dot(position, info[:3]) / info[8] + info[6]) / texture['width'],
                  (dot(position, info[3:6]) / info[9] + info[7]) / texture['height'])
            rgb = tuple(max(0.0, min(1.0, c/255.0)) for c in colors[ci])
            if flags & 2:
                rgb = (1.0, 1.0, 1.0)
            if lightmap:
                light_uv = ((lightmap[0] + dot(position, info[:3])/16.0 - min_u + 0.5)/atlas_width,
                            (lightmap[1] + dot(position, info[3:6])/16.0 - min_v + 0.5)/atlas_height)
            else:
                light_uv = (1.5/atlas_width, 1.5/atlas_height)
            corners.append(position + normal + uv + rgb + light_uv)
        for i in range(1, count-1):
            tri = [corners[0], corners[i], corners[i+1]]
            a = [tri[1][j]-tri[0][j] for j in range(3)]
            b = [tri[2][j]-tri[0][j] for j in range(3)]
            cross = (a[1]*b[2]-a[2]*b[1], a[2]*b[0]-a[0]*b[2], a[0]*b[1]-a[1]*b[0])
            if dot(cross, cross) < 1e-12:
                degenerate += 1
                continue
            # WebGL uses right-handed counterclockwise front faces.
            if dot(cross, normal) < 0:
                tri[1], tri[2] = tri[2], tri[1]
            batches[key].extend(tri)
    groups, mesh_data, light_uv_data, cursor = [], bytearray(), bytearray(), 0
    pack_vertex = struct.Struct('<11f').pack
    for (texture, model, flags, alpha), batch in sorted(batches.items()):
        groups.append({'texture': texture, 'model': model, 'flags': flags, 'alpha': alpha, 'start': cursor, 'count': len(batch)})
        for corner in batch:
            require(all(math.isfinite(v) for v in corner), 'Non-finite mesh attribute')
            mesh_data += pack_vertex(*corner[:11])
            light_uv_data += struct.pack('<2f', *corner[11:13])
        cursor += len(batch)
    (out / 'mesh.bin').write_bytes(mesh_data)
    (out / 'lightmap-uv.bin').write_bytes(light_uv_data)
    nodes = [[n[0], n[1], n[4]] for n in raw_nodes]
    leaves = [{'contents': l[0], 'min': l[1:4], 'max': l[4:7], 'firstSide': l[13], 'numSides': l[14]} for l in raw_leaves]
    for front, back, plane in nodes:
        require(0 <= plane < len(planes), 'Invalid node plane')
        require(all(0 <= c < len(nodes) if c >= 0 else 0 <= -c-1 < len(leaves) for c in (front, back)), 'Invalid BSP child')
    for leaf in leaves:
        f, n = leaf['firstSide'], leaf['numSides']
        require((n == 0 and f == -1) or (0 <= f <= len(leaf_sides) and 0 <= n <= len(leaf_sides)-f), 'Invalid leaf side range')
    require(all(0 <= p < len(planes) and s in (0,1) for p,s in leaf_sides), 'Invalid leaf side plane')
    spawn_entity = next((e for e in entities if e.get('classname') == 'PlayerStart'), None)
    require(spawn_entity is not None and vec(spawn_entity.get('Origin', '')), 'Missing valid PlayerStart')
    sky_record = records(chunks, 22, '<4f6if')[0]
    # Preserve complete lightmap and motion bytes for future exact rendering/animation.
    (out / 'lightmaps.bin').write_bytes(chunks[20][2])
    (out / 'motions.bin').write_bytes(chunks[24][2])
    (out / 'lightmap-faces.bin').write_bytes(chunks[11][2])
    result = {
        'version': 1, 'id': source.stem.lower(), 'source': {'file': source.name, 'sha256': hashlib.sha256(data).hexdigest(), 'gbspVersion': 15},
        'units': 'original Genesis3D units; Y up; no coordinate conversion',
        'mesh': {'file': 'mesh.bin', 'stride': 44, 'vertexCount': cursor, 'attributes': ['position:3', 'normal:3', 'uv:2', 'color:3'],
                 'lightmap': {'file': 'lightmap.png', 'uvFile': 'lightmap-uv.bin', 'width': atlas_width, 'height': atlas_height}},
        'groups': groups, 'textures': textures, 'entities': entities,
        'spawn': {'position': vec(spawn_entity['Origin']), 'orientation': float(spawn_entity.get('Orientation', '0'))},
        'bounds': {'min': models[0]['min'], 'max': models[0]['max']},
        'collision': {'planes': [p[:4] for p in planes], 'nodes': nodes, 'leaves': leaves, 'leafSides': leaf_sides, 'models': models},
        'sky': {'axis': sky_record[:3], 'rotation': sky_record[3], 'textures': sky_record[4:10], 'scale': sky_record[10]},
        'preserved': {'lightmaps': 'lightmaps.bin', 'lightmapFaces': 'lightmap-faces.bin', 'motions': 'motions.bin'},
        'stats': {'faces': len(faces), 'triangles': cursor//3, 'degenerateTrianglesSkipped': degenerate,
                  'textures': len(textures), 'entities': len(entities), 'models': len(models),
                  'entityClasses': dict(sorted(Counter(e.get('classname', 'worldSettings') for e in entities).items()))},
        'chunks': inventory,
    }
    # Preserve the native BSP dynamic-light texture frame in both the regular
    # import workflow and the standalone lighting-only upgrade tool.
    from import_world_lighting import LIGHT_FRAME_METADATA, light_frames
    (out / LIGHT_FRAME_METADATA['framesFile']).write_bytes(light_frames(source, result, bytes(mesh_data)))
    result['mesh']['lightmap'].update(LIGHT_FRAME_METADATA)
    from import_actor_floor_lighting import write_actor_floor
    write_actor_floor(out, source, result)
    (out / 'level.json').write_text(json.dumps(result, separators=(',', ':'), ensure_ascii=False), encoding='utf-8')
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=DEFAULT_SOURCE, help='Installed game directory, Levels directory, or one .bsp file')
    parser.add_argument('--output', type=Path, default=ROOT / 'data' / 'levels')
    args = parser.parse_args()
    source = args.source.expanduser().resolve()
    if source.is_dir() and (source / 'Levels').is_dir():
        source /= 'Levels'
    paths = [source] if source.is_file() else sorted((p for p in source.iterdir() if p.suffix.lower() == '.bsp'), key=lambda p: p.name.lower())
    require(paths, f'No BSP files found in {source}')
    output = args.output.expanduser().resolve()
    require(not any(output == p.parent or output in p.parents for p in paths), 'Output must not contain original source files')
    levels = []
    for path in paths:
        result = export_level(path, output)
        levels.append({'id': result['id'], 'file': f"{result['id']}/level.json", 'stats': result['stats']})
        print(f"{result['id']}: {result['stats']['triangles']:,} triangles, {result['stats']['textures']} textures, {result['stats']['entities']} entities", flush=True)
    (output / 'index.json').write_text(json.dumps({'version': 1, 'levels': levels}, indent=2), encoding='utf-8')
    print(f'Imported {len(levels)} levels into {output}')


if __name__ == '__main__':
    try:
        main()
    except (FormatError, OSError) as exc:
        print(f'Import failed: {exc}', file=sys.stderr)
        sys.exit(1)
