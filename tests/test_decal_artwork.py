import hashlib
import json
import os
from pathlib import Path
import unittest
from PIL import Image


ROOT = Path(__file__).resolve().parents[1]
INSTALL = Path(os.environ.get('REDCAT_INSTALL', '/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel'))


@unittest.skipUnless((INSTALL / 'Bitmaps').is_dir(), 'Set REDCAT_INSTALL to the original installation to compare its artwork')
class OriginalDecalArtworkTest(unittest.TestCase):
    def test_all_authored_decal_color_pixels_alpha_masks_and_source_hashes(self):
        files = {p.name.lower(): p for p in (INSTALL / 'Bitmaps').iterdir() if p.is_file()}
        manifest = json.loads((ROOT / 'assets/effects/manifest.json').read_text())
        pairs = set()
        for path in (ROOT / 'data/levels').glob('*/level.json'):
            for e in json.loads(path.read_text())['entities']:
                if e.get('classname') == 'EffectDecalEntity':
                    pairs.add((e['BitmapFileName'].lower(), e['BitmapAlphaFileName'].lower()))
        self.assertEqual(len(pairs), 6)
        for bitmap, alpha in pairs:
            with self.subTest(bitmap=bitmap):
                entry = manifest['textures'][f'{bitmap}|{alpha}']
                with Image.open(files[bitmap]) as image:
                    expected = image.convert('RGBA')
                with Image.open(files[alpha]) as image:
                    expected.putalpha(image.convert('L'))
                with Image.open(ROOT / 'assets/effects' / entry['file']) as image:
                    actual = image.convert('RGBA')
                self.assertEqual(actual.size, expected.size)
                self.assertEqual(actual.tobytes(), expected.tobytes())
                for source in [bitmap, alpha]:
                    self.assertEqual(manifest['sources'][source], hashlib.sha256(files[source].read_bytes()).hexdigest())
                self.assertLess(actual.getchannel('A').getextrema()[0], 255)


if __name__ == '__main__':
    unittest.main()
