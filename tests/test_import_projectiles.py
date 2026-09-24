import sys
import tempfile
import unittest
from pathlib import Path
from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from import_projectiles import import_projectiles


class ProjectileImportTest(unittest.TestCase):
    def test_original_color_alpha_pairs_are_combined_with_case_insensitive_names(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            bitmaps = root / 'Bitmaps'
            bitmaps.mkdir()
            for number in range(1, 5):
                Image.new('RGB', (2, 1), (240, 160, number)).save(bitmaps / f'Spark_{number:02}.BMP')
                alpha = Image.new('L', (2, 1))
                alpha.putdata([0, 191])
                alpha.save(bitmaps / f'Spark_A_{number:02}.bmp')
            for prefix in ['psht', 'sshlo']:
                for number in range(6):
                    Image.new('RGB', (2, 1), (10, 20, number)).save(bitmaps / f'{prefix}{number}.bmp')
                    Image.new('L', (2, 1), 127).save(bitmaps / f'{prefix}{number}_A.BMP')
            for number in range(4):
                Image.new('RGB', (2, 1), (30, 40, number)).save(bitmaps / f'MSH{number}.BMP')
                Image.new('L', (2, 1), 63).save(bitmaps / f'msh{number}a.bmp')
            for count, color_pattern, alpha_pattern in [
                (4, 'bn{}.bmp', 'bn{}a.bmp'),
                (6, 'snot{}.bmp', 'snot{}_a.bmp'),
                (4, 'jb{}.bmp', 'jb{}a.bmp'),
                (4, 'mb{}.bmp', 'mb{}a.bmp'),
                (6, 'eball{}.bmp', 'eball{}_a.bmp'),
                (4, 'skl_{}.bmp', 'skl_{}a.bmp'),
            ]:
                for number in range(count):
                    Image.new('RGB', (2, 1), (30, 40, number)).save(bitmaps / color_pattern.format(number))
                    Image.new('L', (2, 1), 63).save(bitmaps / alpha_pattern.format(number))
            manifest = import_projectiles(root, root / 'out')
            self.assertEqual(manifest['enemyShot']['framesPerSecond'], 20)
            self.assertEqual(len(manifest['sources']), 96)
            for style in manifest.values():
                if isinstance(style, dict) and 'frames' in style:
                    self.assertEqual(style['frameIntervalMs'], 50)
            self.assertEqual(len(manifest['mushRoom']['frames']), 4)
            self.assertEqual(manifest['mushRoom']['framesPerSecond'], 20)
            image = Image.open(root / 'out' / manifest['mushRoom']['frames'][0])
            self.assertEqual(image.getpixel((0, 0)), (30, 40, 0, 63))
            self.assertEqual(manifest['shot']['frames'], manifest['enemyShot']['frames'])
            for key in ['powerShot', 'superShot']:
                self.assertEqual(len(manifest[key]['frames']), 6)
                self.assertEqual(manifest[key]['framesPerSecond'], 20)
                image = Image.open(root / 'out' / manifest[key]['frames'][0])
                self.assertEqual(image.getpixel((0, 0)), (10, 20, 0, 127))
            for number, frame in enumerate(manifest['enemyShot']['frames'], 1):
                image = Image.open(root / 'out' / frame)
                self.assertEqual(image.getpixel((0, 0)), (240, 160, number, 0))
                self.assertEqual(image.getpixel((1, 0)), (240, 160, number, 191))


if __name__ == '__main__':
    unittest.main()
