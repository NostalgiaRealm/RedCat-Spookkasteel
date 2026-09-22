#!/usr/bin/env python3
"""Import original projectile color/alpha bitmap pairs into portable PNGs."""
import argparse
import hashlib
import json
from pathlib import Path
from PIL import Image


def import_projectiles(installation, output):
    source = Path(installation) / 'Bitmaps'
    files = {path.name.lower(): path for path in source.iterdir() if path.is_file()}
    output = Path(output)
    output.mkdir(parents=True, exist_ok=True)
    originals, sequences = {}, {}
    definitions = [
        ('spark', range(1, 5), 'spark_{:02}.bmp', 'spark_a_{:02}.bmp'),
        ('power', range(6), 'psht{}.bmp', 'psht{}_a.bmp'),
        ('super', range(6), 'sshlo{}.bmp', 'sshlo{}_a.bmp'),
        ('mushroom', range(4), 'msh{}.bmp', 'msh{}a.bmp'),
    ]
    for key, numbers, color_pattern, alpha_pattern in definitions:
        frames = []
        for number in numbers:
            color_name = color_pattern.format(number)
            alpha_name = alpha_pattern.format(number)
            with Image.open(files[color_name]) as source_color:
                color = source_color.convert('RGBA')
            with Image.open(files[alpha_name]) as source_alpha:
                alpha = source_alpha.convert('L')
            if color.size != alpha.size:
                raise ValueError(f'Mismatched projectile color and alpha sizes: {color_name}')
            color.putalpha(alpha)
            filename = f'{key}-{number:02}.png'
            color.save(output / filename)
            frames.append(filename)
            for name in [color_name, alpha_name]:
                originals[name] = hashlib.sha256(files[name].read_bytes()).hexdigest()
        # The native projectile factory uses sprite scale .8 (0x44d30f).
        scale = .3 if key == 'mushroom' else .8
        sequences[key] = {'frames': frames, 'framesPerSecond': 20,
                          'width': color.width * scale, 'height': color.height * scale,
                          'color': [255, 255, 255], 'opacity': 1}
    result = {'format': 'redcat-projectiles-v1', 'sources': originals,
              'enemyShot': {**sequences['spark'], 'width': 32 * .8, 'height': 32 * .8},
              'shot': sequences['spark'], 'powerShot': sequences['power'],
              'superShot': sequences['super'], 'mushRoom': sequences['mushroom']}
    (output / 'manifest.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation', type=Path, required=True)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1] / 'assets/projectiles')
    args = parser.parse_args()
    import_projectiles(args.installation, args.output)
    print(f'Imported original projectile sprites into {args.output}')
