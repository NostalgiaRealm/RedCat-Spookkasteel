#!/usr/bin/env python3
"""Extract the original PE icon and create portable app-icon containers.

Usage: python3 tools/import_app_icon.py /path/to/RcHcGame.dat
       [--android-foreground android/app/src/main/res/drawable-nodpi/redcat_launcher_foreground.png]
Requires pefile and Pillow. Does not execute or modify the original game.
"""
import argparse
import hashlib
import io
import json
from pathlib import Path
import struct

import pefile
from PIL import Image


def extract_icon(source):
    pe = pefile.PE(data=source)
    resources = {}
    try:
        for kind in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            if kind.id not in (3, 14):
                continue
            for name in kind.directory.entries:
                for language in name.directory.entries:
                    record = language.data.struct
                    resources[kind.id, name.id, language.id] = pe.get_data(record.OffsetToData, record.Size)
        groups = sorted(key for key in resources if key[0] == 14)
        if len(groups) != 1:
            raise ValueError(f"Expected the game's one icon group, found {len(groups)}")
        group = groups[0]
        data = resources[group]
        reserved, kind, count = struct.unpack_from('<HHH', data)
        if (reserved, kind) != (0, 1) or not count or len(data) != 6 + count * 14:
            raise ValueError('Invalid PE group-icon directory')
        entries, images, details = [], [], []
        offset = 6 + count * 16
        for index in range(count):
            w, h, colors, reserved, planes, bits, size, resource_id = struct.unpack_from('<BBBBHHIH', data, 6 + index * 14)
            image = resources[3, resource_id, group[2]]
            if len(image) != size:
                raise ValueError('Icon resource length mismatch')
            entries.append(struct.pack('<BBBBHHII', w, h, colors, reserved, planes, bits, size, offset))
            images.append(image)
            details.append({'resource': resource_id, 'width': w or 256, 'height': h or 256, 'bits': bits, 'bytes': size})
            offset += size
        return struct.pack('<HHH', 0, 1, count) + b''.join(entries + images), {'group': group[1], 'language': group[2], 'images': details}
    finally:
        pe.close()


def save_android_foreground(native, output):
    """Center exact 8x native pixels within a 108dp adaptive-icon canvas."""
    bounds = native.getchannel('A').getbbox()
    if bounds is None:
        raise ValueError('Cannot create an Android foreground from an empty icon')
    art = native.crop(bounds)
    art = art.resize((art.width * 8, art.height * 8), Image.Resampling.NEAREST)
    # 432px represents 108dp at xxxhdpi; this artwork fits the 66dp safe circle.
    foreground = Image.new('RGBA', (432, 432), (0, 0, 0, 0))
    foreground.paste(art, ((432 - art.width) // 2, (432 - art.height) // 2))
    output.parent.mkdir(parents=True, exist_ok=True)
    foreground.save(output)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('executable', type=Path)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1] / 'assets' / 'icons')
    parser.add_argument('--android-foreground', type=Path,
                        help='Also write the padded Android adaptive-icon foreground PNG to this path')
    args = parser.parse_args()
    source = args.executable.read_bytes()
    original_ico, resource = extract_icon(source)
    # Pillow decodes the original palette and AND transparency mask together.
    native = Image.open(io.BytesIO(original_ico)).convert('RGBA')
    if native.size != (32, 32):
        raise ValueError(f'Expected the original 32x32 game icon, got {native.size}')
    args.output.mkdir(parents=True, exist_ok=True)
    (args.output / 'redcat-original.ico').write_bytes(original_ico)
    native.save(args.output / 'redcat-32.png')
    sizes = [16, 24, 32, 48, 64, 128, 180, 256, 512, 1024]
    frames = {size: native.resize((size, size), Image.Resampling.NEAREST) for size in sizes}
    frames[512].save(args.output / 'redcat.png')
    frames[180].save(args.output / 'apple-touch-icon.png')
    ico_sizes = [size for size in sizes if size <= 256 and size != 180]
    frames[256].save(args.output / 'redcat.ico', format='ICO',
                     sizes=[(size, size) for size in ico_sizes],
                     append_images=[frames[size] for size in ico_sizes])
    frames[1024].save(args.output / 'redcat.icns', format='ICNS',
                      append_images=[frames[size] for size in [32, 64, 128, 256, 512, 1024]])
    (args.output / 'source.json').write_text(json.dumps({
        'source': args.executable.name, 'sha256': hashlib.sha256(source).hexdigest(),
        'resource': resource, 'resampling': 'nearest; original pixels and transparency preserved',
    }, indent=2) + '\n')
    if args.android_foreground is not None:
        save_android_foreground(native, args.android_foreground)
    print(f'Extracted icon group {resource["group"]} to {args.output}')


if __name__ == '__main__':
    main()
