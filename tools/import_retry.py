#!/usr/bin/env python3
"""Import the original game-over retry screen: buttons, layout and Dutch labels.

The background and logo are LoadingBG and LogoBG, already imported by
import_debriefing.py into assets/debriefing/.
"""
import argparse
import configparser
import hashlib
import json
from pathlib import Path
from PIL import Image


def general_section(path):
    config = configparser.ConfigParser(interpolation=None, strict=False)
    config.optionxform = str
    # LanguageNL.ini's other sections hold loose comments and dialogue.
    text = path.read_text(encoding='cp1252')
    config.read_string('[General]\n'+text.split('[General]', 1)[1].split('\n[', 1)[0])
    return config['General']


def import_retry(installation, output):
    installation, output = Path(installation), Path(output)
    output.mkdir(parents=True, exist_ok=True)
    files = {p.name.lower(): p for p in (installation/'Bitmaps').iterdir()}
    # BUTTON.BMP is four 64-pixel rows: Ja, Ja selected, Nee, Nee selected.
    with Image.open(files['button.bmp']) as image:
        rgba = image.convert('RGBA')
    with Image.open(files['buttona.bmp']) as mask:
        rgba.putalpha(mask.convert('L'))
    rgba.save(output/'button.png')
    sources = {name: hashlib.sha256(files[name].read_bytes()).hexdigest() for name in ['button.bmp', 'buttona.bmp']}
    settings = installation/'Settings'
    layout = general_section(settings/'Retry.ini')
    language = general_section(settings/'LanguageNL.ini')
    for name in ['Retry.ini', 'LanguageNL.ini']:
        sources[name] = hashlib.sha256((settings/name).read_bytes()).hexdigest()
    result = {'format': 'redcat-retry-v1', 'width': 640, 'height': 480,
              'layout': dict(layout),
              'text': {key: language[key].strip() for key in ['RetryTitle', 'RetryText', 'YesText', 'NoText']},
              'sources': sources}
    (output/'manifest.json').write_text(json.dumps(result, indent=2)+'\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation', type=Path, required=True)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1]/'assets/retry')
    args = parser.parse_args()
    import_retry(args.installation, args.output)
    print(f'Imported original retry screen artwork and text into {args.output}')
