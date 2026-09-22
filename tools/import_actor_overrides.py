#!/usr/bin/env python3
"""Import the authored AdamAnyActor alternative bitmap/alpha pairs."""
import argparse
import hashlib
import json
from pathlib import Path
from PIL import Image


def import_overrides(installation, levels, output):
    files={p.name.lower():p for p in (installation/'Bitmaps').iterdir() if p.is_file()}
    pairs=set()
    for level in levels.glob('*/level.json'):
        for entity in json.loads(level.read_text())['entities']:
            if entity.get('AlternativeBitmap')=='1':
                pairs.add((entity['AltBitmapFileName'].lower(),entity['AltBitmapAlphaFileName'].lower()))
    output.mkdir(parents=True,exist_ok=True)
    manifest={'format':'redcat-actor-overrides-v1','textures':{},'sources':{}}
    for bitmap,alpha in sorted(pairs):
        with Image.open(files[bitmap]) as image: rgba=image.convert('RGBA')
        with Image.open(files[alpha]) as image: mask=image.convert('L')
        if rgba.size!=mask.size:raise ValueError(f'Mismatched alternative actor bitmaps: {bitmap}, {alpha}')
        rgba.putalpha(mask)
        name=f'{Path(bitmap).stem}-{Path(alpha).stem}.png';rgba.save(output/name)
        manifest['textures'][f'{bitmap}|{alpha}']={'file':name,'width':rgba.width,'height':rgba.height}
        for source in [bitmap,alpha]:manifest['sources'][source]=hashlib.sha256(files[source].read_bytes()).hexdigest()
    (output/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
    return manifest


if __name__=='__main__':
    root=Path(__file__).resolve().parents[1]
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation',type=Path,required=True)
    parser.add_argument('--levels',type=Path,default=root/'data/levels')
    parser.add_argument('--output',type=Path,default=root/'assets/actor-overrides')
    args=parser.parse_args();result=import_overrides(args.installation,args.levels,args.output)
    print(f"Imported {len(result['textures'])} authored actor bitmap overrides")
