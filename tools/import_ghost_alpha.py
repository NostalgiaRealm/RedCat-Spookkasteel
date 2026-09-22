#!/usr/bin/env python3
"""Import the original ghost bitmap/alpha pair without altering its samples."""
import argparse
import hashlib
import json
from pathlib import Path
from PIL import Image

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('installation', type=Path)
parser.add_argument('--output', type=Path, default=Path('assets/ghosts'))
args = parser.parse_args()
bitmap_dir = args.installation / 'Bitmaps'
paths = {path.name.lower(): path for path in bitmap_dir.iterdir()}
source = paths['transghost.bmp']
alpha_source = paths['transghost_a.bmp']
colour = Image.open(source).convert('RGBA')
mask = Image.open(alpha_source).convert('L')
if colour.size != mask.size:
    raise ValueError('Ghost colour and alpha bitmaps have different dimensions')
colour.putalpha(mask)
args.output.mkdir(parents=True, exist_ok=True)
colour.save(args.output / 'ghost.png')
(args.output / 'manifest.json').write_text(json.dumps({
    'source': str(source.relative_to(args.installation)),
    'sha256': hashlib.sha256(source.read_bytes()).hexdigest(),
    'alphaSource': str(alpha_source.relative_to(args.installation)),
    'alphaSha256': hashlib.sha256(alpha_source.read_bytes()).hexdigest(),
    'width': mask.width, 'height': mask.height,
    'alphaRange': list(mask.getextrema()),
    'file': 'ghost.png',
}, indent=2) + '\n')
