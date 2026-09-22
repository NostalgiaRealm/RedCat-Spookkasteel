import hashlib
import sys
import tempfile
import unittest
from pathlib import Path
from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from import_hazards import import_hazards


class HazardImportTest(unittest.TestCase):
    def test_original_alpha_is_preserved_and_inputs_are_hashed(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            bitmaps = root / 'Bitmaps'
            bitmaps.mkdir()
            color = bitmaps / 'MSHTRAIL.BMP'
            alpha = bitmaps / 'mshTrailA.bmp'
            Image.new('RGB', (2, 1), (91, 123, 17)).save(color)
            mask = Image.new('L', (2, 1))
            mask.putdata([0, 191])
            mask.save(alpha)
            before = color.read_bytes(), alpha.read_bytes()
            manifest = import_hazards(root, root / 'out')
            with Image.open(root / 'out' / manifest['mushroomTrail']['texture']) as result:
                self.assertEqual(list(result.getdata()), [(91, 123, 17, 0), (91, 123, 17, 191)])
            self.assertEqual(manifest['sources']['mshtrail.bmp'], hashlib.sha256(before[0]).hexdigest())
            self.assertEqual(manifest['sources']['mshtraila.bmp'], hashlib.sha256(before[1]).hexdigest())
            self.assertEqual(before, (color.read_bytes(), alpha.read_bytes()))

    def test_mismatched_artwork_is_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / 'Bitmaps').mkdir()
            Image.new('RGB', (2, 1)).save(root / 'Bitmaps/mshTrail.bmp')
            Image.new('L', (1, 1)).save(root / 'Bitmaps/mshTrailA.bmp')
            with self.assertRaisesRegex(ValueError, 'dimensions differ'):
                import_hazards(root, root / 'out')


if __name__ == '__main__':
    unittest.main()
