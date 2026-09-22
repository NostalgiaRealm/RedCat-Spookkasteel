import importlib.util
import json
from pathlib import Path
import unittest

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location('import_motions', ROOT / 'tools/import_motions.py')
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class MotionImportTests(unittest.TestCase):
    def test_original_levels_are_losslessly_accounted_for(self):
        counts = []
        for source in sorted((ROOT / 'data/levels').glob('*/motions.bin')):
            level = json.loads(source.with_name('level.json').read_text())
            imported = module.decode(source.read_bytes(), level)
            expected = json.loads((ROOT / 'data/motions' / f"{level['id']}.json").read_text())
            self.assertEqual(imported, expected)
            self.assertEqual(imported['stats']['events'], sum(len(m['events']) for m in imported['motions']))
            counts.append(imported['stats']['motions'])
            for motion in imported['motions']:
                self.assertEqual(motion['origin'], level['collision']['models'][motion['model']]['origin'])
        self.assertEqual(counts, [34, 83, 106, 191, 23])

    def test_compressed_times_and_hinge_rotation(self):
        reader = module.Reader(b'Keys 3 1 3 0\n1 2 Start T,Delta T\n0 1 0 Axis\n0\n1.5707963267948966\n3.141592653589793\n')
        channel = module.keyframes(reader, True)
        self.assertEqual(channel['times'], [1, 3, 5])
        self.assertAlmostEqual(channel['values'][5], 2 ** -.5)
        self.assertAlmostEqual(channel['values'][9], 1)

    def test_reject_truncated_bad_reference_and_nonfinite_input(self):
        source = ROOT / 'data/levels/lvl00a/motions.bin'
        raw = source.read_bytes()
        with self.assertRaises(ValueError):
            module.decode(raw[:-10])
        with self.assertRaises(ValueError):
            module.decode(raw.replace(b'ModelNum 1\r\n', b'ModelNum 999999\r\n', 1), {'collision': {'models': []}})
        with self.assertRaises(ValueError):
            module.keyframes(module.Reader(b'Keys 1 1 0 0\n0 nan 0 0\n'), False)

    def test_reject_overlapping_event_string_offsets(self):
        reader = module.Reader(b'TKEV 0.F0\nDataSize 4\nTimeKeys 2\n0 0\na\n1 1\nb\n')
        with self.assertRaises(ValueError):
            module.events(reader)


if __name__ == '__main__':
    unittest.main()
