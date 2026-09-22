#!/usr/bin/env python3
"""Convert the owned game's HUD atlas and target artwork without resampling."""
import argparse
import configparser
import hashlib
import json
from pathlib import Path
from PIL import Image


def import_hud(installation, output):
    installation, output = Path(installation), Path(output)
    output.mkdir(parents=True, exist_ok=True)
    files = {p.name.lower(): p for p in (installation/'Bitmaps').iterdir()}
    sources = {}
    for color, mask, name in [('hudicon.bmp', 'hudicona.bmp', 'icons.png'),
                              ('crosshair.bmp', 'crosshair_a.bmp', 'target.png')]:
        with Image.open(files[color]) as image:
            rgba = image.convert('RGBA')
        with Image.open(files[mask]) as image:
            alpha = image.convert('L')
        if rgba.size != alpha.size:
            raise ValueError(f'Mismatched color/alpha dimensions: {color}')
        rgba.putalpha(alpha)
        rgba.save(output/name)
        for source in (color, mask):
            sources[source] = hashlib.sha256(files[source].read_bytes()).hexdigest()
    ini = installation/'Settings'/'HUDIcon.ini'
    config = configparser.ConfigParser(interpolation=None)
    config.read(ini, encoding='cp1252')
    sprites = {}
    for section in config.sections():
        if not config.has_option(section, 'BaseX'):
            continue
        sprites[section] = {key:config.getint(section, key) for key in
                           ['BaseX','BaseY','SizeX','SizeY','TotalPerLine','Total','Type']}
    positions = {}
    for section in config.sections():
        if section.startswith('Icon') and config.has_option(section,'X'):
            positions[config.get(section,'Name')] = {
                'sprite':config.get(section,'Icon'), 'x':config.getint(section,'X'),
                'y':config.getint(section,'Y'), 'disabled':config.getboolean(section,'Disable')}
    sources['HUDIcon.ini'] = hashlib.sha256(ini.read_bytes()).hexdigest()
    result = {'format':'redcat-hud-v1', 'width':640, 'height':480,
              'atlas':'icons.png', 'target':'target.png', 'sprites':sprites,
              'positions':positions, 'sources':sources}
    (output/'manifest.json').write_text(json.dumps(result,indent=2)+'\n')
    return result


if __name__ == '__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation',type=Path,required=True)
    parser.add_argument('--output',type=Path,default=Path(__file__).resolve().parents[1]/'assets/hud')
    args=parser.parse_args()
    import_hud(args.installation,args.output)
    print(f'Imported original HUD atlas, layout and target artwork into {args.output}')
