import importlib.util
import unittest
import tempfile
from pathlib import Path
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location('import_actors', ROOT/'tools'/'import_actors.py')
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class ColorKeyFilteringTest(unittest.TestCase):
    def test_destructible_actor_keeps_original_explosion_and_debris_properties(self):
        with tempfile.TemporaryDirectory() as directory:
            path=Path(directory)/'crate.act'
            path.with_suffix('.ini').write_text('[Actor]\nActorDestroyable=1\nActorMinDamage=1\nActorMaxDamage=2\n'
                '[Explosion]\nExplodeSizePercentage=25\nExplodeNrExplosions=1\nExplodeSmokeOnly=0\n'
                '[Particle]\nParticleGravity=9.8\nParticleMinLifeTimeSeconds=3\nParticleMaxLifeTimeSeconds=4\n'
                '[ParticleType1]\nActorDefName=crate_s1.act\nMinNr=5\nMaxNr=8\nMinVelocity=125\nMaxVelocity=180\n')
            settings=module.actor_settings(path)
            self.assertTrue(settings['destroyable'])
            self.assertEqual(settings['damageThreshold'],[1,2])
            self.assertEqual(settings['explosion']['SizePercentage'],25)
            self.assertEqual(settings['debris']['Gravity'],9.8)
            self.assertEqual(settings['debris']['types'],[{'actor':'crate_s1.act','MinNr':5,'MaxNr':8,'MinVelocity':125,'MaxVelocity':180}])

    def test_actor_spin_preserves_signed_degrees_per_second_separately_from_initial_rotation(self):
        with tempfile.TemporaryDirectory() as directory:
            path=Path(directory)/'cannball_rol.act'
            path.with_name('CANNBALL_ROL.INI').write_text(
                '[Actor]\nActorInitialRotationX=-90\n'
                'actorrotationspeedx=-360 ; original castle ball\n'
                'ActorRotationSpeedY=12.5\nActorRotationSpeedZ=0\n')
            settings=module.actor_settings(path)
            self.assertEqual(settings['rotationDegreesPerSecond'],[-360,12.5,0])
            self.assertEqual(settings['initialRotationDegrees'],[-90,0,0])

    def test_missing_spin_axes_and_missing_ini_default_to_stationary(self):
        with tempfile.TemporaryDirectory() as directory:
            path=Path(directory)/'rol_rots.act'
            self.assertEqual(module.actor_settings(path)['rotationDegreesPerSecond'],[0,0,0])
            path.with_suffix('.ini').write_text('[Actor]\nActorRotationSpeedX=360\n')
            settings=module.actor_settings(path)
            self.assertEqual(settings['rotationDegreesPerSecond'],[360,0,0])
            self.assertEqual(settings['initialRotationDegrees'],[0,0,0])

    def test_actor_collision_flags_are_imported_case_insensitively(self):
        with tempfile.TemporaryDirectory() as directory:
            path=Path(directory)/'statue.act'
            path.with_name('STATUE.INI').write_text('[Actor]\nActorBlocksPlayer=1\nActorCanBeShot=1\nActorBlocksLOS=0\nActorScale=2.5\nActorInitialRotationX=-90\n')
            settings=module.actor_settings(path)
            self.assertTrue(settings['blocksPlayer'])
            self.assertTrue(settings['canBeShot'])
            self.assertFalse(settings['blocksLOS'])
            self.assertEqual(settings['scale'],2.5)
            self.assertEqual(settings['initialRotationDegrees'],[-90,0,0])

    def test_bleed_removes_hidden_magenta_without_changing_alpha_or_visible_pixels(self):
        image = Image.new('RGBA',(3,1))
        image.putdata([(10,100,20,255),(255,0,255,0),(255,0,255,0)])
        result = module.bleed_transparent_rgb(image)
        self.assertEqual(result.tobytes(),bytes([10,100,20,255,10,100,20,0,10,100,20,0]))

    def test_translucent_pixels_and_empty_image_unchanged(self):
        image = Image.new('RGBA',(2,1))
        image.putdata([(90,10,20,128),(20,30,40,255)])
        self.assertEqual(module.bleed_transparent_rgb(image).tobytes(),image.tobytes())
        empty = Image.new('RGBA',(2,2),(255,0,255,0))
        self.assertEqual(module.bleed_transparent_rgb(empty).tobytes(),empty.tobytes())


if __name__ == '__main__':
    unittest.main()
