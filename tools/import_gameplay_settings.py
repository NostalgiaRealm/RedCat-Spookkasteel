#!/usr/bin/env python3
"""Export numeric original gameplay settings as a browser-readable JS module."""
import argparse
import configparser
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Settings')
FILES = ['items', 'frog', 'plant', 'knight', 'gargoyle', 'zombie', 'Skeleton', 'MushroomBrutus',
         'BoneBrutus', 'DungeonMax', 'JesterMax', 'guardian', 'witch',
         'spider1', 'spider2', 'spider3', 'bat1', 'bat2', 'bat3', 'ghost1', 'ghost2', 'ghost3', 'Game',
         'ProjectileEasy', 'ProjectileNormal', 'ProjectileHard']


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=DEFAULT)
    parser.add_argument('--output', type=Path, default=ROOT / 'src' / 'gameplay-settings.js')
    args = parser.parse_args()
    result = {}
    for name in FILES:
        config = configparser.ConfigParser(interpolation=None, strict=False)
        config.optionxform = str
        text = (args.source / (name + '.ini')).read_text(encoding='cp1252')
        # A shipped gargoyle.ini typo reads 'VisualRange450'; retain valid fields.
        valid_lines = []
        for raw in text.splitlines():
            line = raw.strip()
            if line.startswith('[') and ']' not in line:
                line += ']'
            if not line or line.startswith((';','#','[')) or '=' in line:
                valid_lines.append(line)
        valid = '\n'.join(valid_lines)
        config.read_string(valid)
        result[name.lower()] = {}
        for section in config.sections():
            values = {}
            for key, value in config[section].items():
                try:
                    values[key] = float(value)
                except ValueError:
                    continue
            result[name.lower()][section] = values
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text('// Generated from the locally installed original Settings/*.ini.\n'
                           '// Rebuild with python3 tools/import_gameplay_settings.py.\n'
                           'export const GAMEPLAY_SETTINGS = ' + json.dumps(result, separators=(',', ':')) + ';\n', encoding='utf-8')
    print(f'Exported {len(result)} setting files to {args.output}')


if __name__ == '__main__':
    main()
