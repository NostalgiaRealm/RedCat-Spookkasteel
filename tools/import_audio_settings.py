#!/usr/bin/env python3
"""Export the original sound gains and spatial distances for the portable mixer."""
import argparse
import json
import math
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]
DEFAULT = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Settings')
SPATIAL_DEFAULTS = {'minDistanceMeters': 5.0, 'maxDistanceFactor': 25.0}
# This is the same sublevel mapping used for StandardSkill in Gameplay.
LEVEL_SECTIONS = {f'lvl{index:02d}a': f'sublevel1_{index + 1}' for index in range(5)}


def basename(name):
    return name.strip().strip('"\'').replace('\\', '/').rsplit('/', 1)[-1].lower()


def section_entries(text, wanted):
    """Read the first matching section, preserving its first case-insensitive key.

    GetPrivateProfileString returns the first key in the first matching section;
    Wine's kernel32/profile.c PROFILE_Find implements the same lookup. This
    matters for the shipped LV4snd8.WAV entries (0.8 followed by 1.0).
    https://github.com/wine-mirror/wine/blob/master/dlls/kernel32/profile.c
    """
    result = {}
    active = False
    for raw in text.splitlines():
        line = raw.strip().lstrip('\ufeff')
        if not line or line.startswith(('*', ';', '#', '//')):
            continue
        if line.startswith('[') and ']' in line:
            if active:
                break
            active = line[1:line.index(']')].strip().lower() == wanted.lower()
            continue
        if active and '=' in line:
            key, value = line.split('=', 1)
            result.setdefault(key.strip().lower(), value.strip())
    return result


def number(value, key):
    # Shipped comments are whole lines. Also accept conventional inline comments
    # when importing an installation whose settings have been edited by its owner.
    value = re.split(r'\s*[;#]|\s+//', value, maxsplit=1)[0].strip().strip('"\'')
    try:
        result = float(value)
    except ValueError as error:
        raise ValueError(f'Invalid audio setting {key}: {value!r}') from error
    if not math.isfinite(result) or result < 0:
        raise ValueError(f'Invalid audio setting {key}: {value!r}')
    return result


def parse_settings(volumes, computer='', game=''):
    gains = {}
    for key, value in section_entries(volumes, 'Volumes').items():
        name = basename(key)
        if name not in gains:
            gains[name] = number(value, key)
    spatial = SPATIAL_DEFAULTS.copy()
    fallback = section_entries(game, '3DSound')
    preferred = section_entries(computer, '3DSound')
    spatial = spatial_settings(spatial, {**fallback, **preferred})
    # The native sublevel loader overrides these global settings after opening
    # the level. Preserve the first section even if a later duplicate differs.
    levels = {level: spatial_settings(spatial, section_entries(game, section))
              for level, section in LEVEL_SECTIONS.items()}
    return {'gains': gains, 'spatial': spatial, 'levels': levels}


def spatial_settings(defaults, entries):
    spatial = defaults.copy()
    for target in spatial:
        key = target.lower()
        value = entries.get(key)
        if value is not None:
            spatial[target] = number(value, key)
            if spatial[target] == 0:
                raise ValueError(f'Audio distance {key} must be positive')
    return spatial


def load_settings(source):
    files = {path.name.lower(): path for path in source.iterdir() if path.is_file()}
    def read(name, required=False):
        path = files.get(name.lower())
        if path is None:
            if required:
                raise FileNotFoundError(source / name)
            return ''
        return path.read_text(encoding='cp1252')
    return parse_settings(read('Volume.ini', True), read('Computer.ini'), read('Game.ini'))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=DEFAULT, help='Original Settings directory')
    parser.add_argument('--output', type=Path, default=ROOT / 'src/audio-settings.js')
    args = parser.parse_args()
    result = load_settings(args.source)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text('// Generated from the locally installed original Settings/Volume.ini, Computer.ini and Game.ini.\n'
                           '// Rebuild with python3 tools/import_audio_settings.py. Missing gains default to 1 in the mixer.\n'
                           'export default ' + json.dumps(result, indent=2, allow_nan=False) + ';\n', encoding='utf-8')
    print(f'Exported {len(result["gains"])} sound gains to {args.output}')


if __name__ == '__main__':
    main()
