#!/usr/bin/env python3
"""Import the original level loading artwork, layout and Dutch labels."""
import argparse
import configparser
import hashlib
import json
from pathlib import Path
from PIL import Image


def import_loading(installation, output):
    output.mkdir(parents=True, exist_ok=True)
    files = {p.name.lower(): p for p in (installation/'Bitmaps').iterdir()}
    sources = {}

    def image(stem, name, mask=None, crop=None):
        source = files[stem+'.bmp']
        with Image.open(source) as bitmap:
            rgba = bitmap.convert('RGBA')
        sources[source.name] = hashlib.sha256(source.read_bytes()).hexdigest()
        if mask:
            source = files[mask+'.bmp']
            with Image.open(source) as bitmap:
                rgba.putalpha(bitmap.convert('L'))
            sources[source.name] = hashlib.sha256(source.read_bytes()).hexdigest()
        if crop:
            rgba = rgba.crop(crop)
        rgba.save(output/(name+'.png'))

    image('loadingbg', 'background', 'loadingbga')
    image('logobg', 'logo', 'logobga', (0, 0, 256, 42))
    image('progress', 'progress', 'progress_a')
    for number in range(1, 6):
        image(f'levelbg{number}', f'level{number}')
    configs = []
    for name in ['Loading.ini', 'LanguageNL.ini']:
        source = installation/'Settings'/name
        config = configparser.ConfigParser(interpolation=None, strict=False)
        config.optionxform = str
        general = source.read_text(encoding='cp1252').split('[General]', 1)[1].split('\n[', 1)[0]
        config.read_string('[General]\n'+general)
        configs.append(dict(config['General']))
        sources[name] = hashlib.sha256(source.read_bytes()).hexdigest()
    layout, language = configs
    result = {'format': 'redcat-loading-v1', 'width': 640, 'height': 480,
              'layout': layout,
              'text': {key: language[key].strip() for key in ['WaitText', 'LoadingTXT', 'GameType0.msg']},
              'levels': [language[f'LevelName{i}'].strip() for i in range(1, 6)],
              'sources': sources}
    (output/'manifest.json').write_text(json.dumps(result, indent=2)+'\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation', type=Path, required=True)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1]/'assets/loading')
    args = parser.parse_args()
    import_loading(args.installation, args.output)
    print(f'Imported original loading screen into {args.output}')
