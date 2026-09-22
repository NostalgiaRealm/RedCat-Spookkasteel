#!/usr/bin/env python3
"""Combine original hazard color/alpha bitmaps into portable RGBA textures."""
import argparse
import hashlib
import json
from pathlib import Path
from PIL import Image


def import_hazards(installation, output):
    source = Path(installation) / 'Bitmaps'
    files = {path.name.lower(): path for path in source.iterdir() if path.is_file()}
    output = Path(output)
    output.mkdir(parents=True, exist_ok=True)
    names = ['mshtrail.bmp', 'mshtraila.bmp']
    with Image.open(files[names[0]]) as original:
        color = original.convert('RGBA')
    with Image.open(files[names[1]]) as original:
        alpha = original.convert('L')
    if color.size != alpha.size:
        raise ValueError('Mushroom trail color/alpha dimensions differ')
    color.putalpha(alpha)
    color.save(output / 'mushroom-trail.png')
    manifest = {
        'format': 'redcat-hazards-v1',
        'sources': {name: hashlib.sha256(files[name].read_bytes()).hexdigest() for name in names},
        'mushroomTrail': {'texture': 'mushroom-trail.png', 'width': 6.4,
                          'color': [255, 255, 127], 'opacity': 127 / 255,
                          'fadeTime': 1.5, 'textureWidth': color.width,
                          'textureHeight': color.height},
    }
    (output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    return manifest


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation', type=Path, required=True)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1] / 'assets/hazards')
    args = parser.parse_args()
    import_hazards(args.installation, args.output)
    print(f'Imported original hazard artwork into {args.output}')
