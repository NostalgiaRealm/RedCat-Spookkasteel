import importlib.util
from pathlib import Path
import tempfile
import unittest


spec = importlib.util.spec_from_file_location('import_actors', Path(__file__).parents[1] / 'tools/import_actors.py')
actors = importlib.util.module_from_spec(spec)
spec.loader.exec_module(actors)


class NativePortraitBasis(unittest.TestCase):
    def test_missing_ini_and_missing_rotation_fields_use_native_basis(self):
        with tempfile.TemporaryDirectory() as directory:
            actor = Path(directory) / 'paintbr.act'
            actor.touch()
            self.assertEqual(actors.actor_settings(actor)['initialRotationDegrees'], [-90, 0, 0])
            ini = actor.with_name('PAINTBR.INI')
            ini.write_text('[Actor]\nActorScale=2.5\nActorInitialRotationY=25\n')
            settings = actors.actor_settings(actor)
            self.assertEqual(settings['initialRotationDegrees'], [-90, 25, 0])
            self.assertEqual(settings['scale'], 2.5)

    def test_explicit_zero_rotation_is_preserved(self):
        with tempfile.TemporaryDirectory() as directory:
            actor = Path(directory) / 'paintbr.act'
            actor.touch()
            actor.with_suffix('.ini').write_text('[Actor]\nActorInitialRotationX=0\nActorInitialRotationZ=-45\n')
            self.assertEqual(actors.actor_settings(actor)['initialRotationDegrees'], [0, 0, -45])


if __name__ == '__main__':
    unittest.main()
