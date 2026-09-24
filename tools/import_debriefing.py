#!/usr/bin/env python3
"""Import original end-level artwork, layout and Dutch labels."""
import argparse
import configparser
import hashlib
import json
from pathlib import Path
from PIL import Image


def import_debriefing(installation, output):
    installation, output = Path(installation), Path(output)
    output.mkdir(parents=True, exist_ok=True)
    files = {p.name.lower(): p for p in (installation/'Bitmaps').iterdir()}
    sources = {}
    for stem, name in [('loadingbg', 'background'), ('logobg', 'logo')]:
        with Image.open(files[stem+'.bmp']) as image:
            rgba = image.convert('RGBA')
        with Image.open(files[stem+'a.bmp']) as mask:
            rgba.putalpha(mask.convert('L'))
        rgba.save(output/(name+'.png'))
        for suffix in ['.bmp', 'a.bmp']:
            sources[stem+suffix] = hashlib.sha256(files[stem+suffix].read_bytes()).hexdigest()
    configs = []
    for name in ['Debriefing.ini', 'LanguageNL.ini']:
        ini = installation/'Settings'/name
        config = configparser.ConfigParser(interpolation=None, strict=False)
        config.optionxform = str
        # Other LanguageNL sections contain loose comments / tab-delimited
        # dialogue. Only the conventional General section belongs to this UI.
        general = ini.read_text(encoding='cp1252').split('[General]', 1)[1].split('\n[', 1)[0]
        config.read_string('[General]\n'+general)
        configs.append(config)
        sources[name] = hashlib.sha256(ini.read_bytes()).hexdigest()
    layout, language = configs
    textkeys = ['DebriefTXT','ContinueTXT','PotionTXT','MoneyTXT','EnemyTXT','SecretTXT',
                'TotalScoreTXT','OldTotalScoreTXT','NewTotalScoreTXT']
    result = {'format':'redcat-debriefing-v1', 'width':640, 'height':480,
              'layout':dict(layout['General']),
              'text':{key:language['General'][key].strip() for key in textkeys},
              'levels':[language['General']['LevelName'+str(i)] for i in range(1,6)],
              'sources':sources}
    (output/'manifest.json').write_text(json.dumps(result,indent=2)+'\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation', type=Path, required=True)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1]/'assets/debriefing')
    args = parser.parse_args()
    import_debriefing(args.installation, args.output)
    print(f'Imported original debriefing artwork and text into {args.output}')
