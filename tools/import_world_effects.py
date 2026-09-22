#!/usr/bin/env python3
"""Import original flame, smoke, corona, beam and decal RGBA artwork, without resampling."""
import argparse
import hashlib
import json
from pathlib import Path
from PIL import Image


def import_effects(installation, output, levels):
    files = {p.name.lower(): p for p in (Path(installation)/'Bitmaps').iterdir() if p.is_file()}
    pairs = {('blast.bmp','blast_a.bmp'), ('fleuri.bmp','fleuri_a.bmp'), ('fleurl7.bmp','fleurl7_a.bmp'), ('fleurl8.bmp','fleurl8_a.bmp'), ('star.bmp','star_a.bmp'), ('spark8.bmp','spark8_a.bmp'), ('coreff.bmp','coreff_a.bmp'), ('energybeam.bmp','energybeam_a.bmp'), ('beam.bmp','beam_a.bmp')}
    for frame in range(1,9):
        pairs.add((f'expl_gen{frame:02}.bmp',f'expl_gen_a_{frame:02}.bmp'))
        pairs.add((f'explosie{frame:02}.bmp',f'explosie{frame:02}_a.bmp'))
    pairs.add(('smoke_05.bmp','smoke_green_a.bmp'))
    pairs.add(('strail.bmp','strail_a.bmp'))
    for file in Path(levels).glob('*/level.json'):
        for entity in json.loads(file.read_text())['entities']:
            if entity.get('classname') in {'EffectSpoutEntity', 'EffectDecalEntity'}:
                pairs.add((entity['BitmapFileName'].lower(), entity['BitmapAlphaFileName'].lower()))
    output = Path(output)
    output.mkdir(parents=True, exist_ok=True)
    manifest = {'format':'redcat-world-effects-v1', 'textures':{}, 'sources':{}}
    for bitmap, mask in sorted(pairs):
        with Image.open(files[bitmap]) as image:
            rgba = image.convert('RGBA')
        with Image.open(files[mask]) as image:
            alpha = image.convert('L')
        if rgba.size != alpha.size:
            raise ValueError(f'Effect dimensions differ: {bitmap}, {mask}')
        rgba.putalpha(alpha)
        name = f'{Path(bitmap).stem}-{Path(mask).stem}.png'
        rgba.save(output/name)
        manifest['textures'][bitmap+'|'+mask] = {'file':name, 'width':rgba.width, 'height':rgba.height}
        for original in (bitmap,mask):
            manifest['sources'][original] = hashlib.sha256(files[original].read_bytes()).hexdigest()
    (output/'manifest.json').write_text(json.dumps(manifest, indent=2)+'\n')
    return manifest


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation', type=Path, required=True)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1]/'assets/effects')
    parser.add_argument('--levels', type=Path, default=Path(__file__).resolve().parents[1]/'data/levels')
    args = parser.parse_args()
    result = import_effects(args.installation, args.output, args.levels)
    print(f"Imported {len(result['textures'])} original effect textures into {args.output}")
