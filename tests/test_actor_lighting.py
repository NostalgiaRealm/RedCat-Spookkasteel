import importlib.util
import tempfile
import unittest
from pathlib import Path

spec=importlib.util.spec_from_file_location('import_actors',Path(__file__).resolve().parents[1]/'tools/import_actors.py')
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)

class ActorLightingImportTest(unittest.TestCase):
    def test_authored_lighting_and_animation_survive_import(self):
        with tempfile.TemporaryDirectory() as directory:
            path=Path(directory)/'heart.act'
            path.with_name('HEART.INI').write_text('[ActorLighting]\nActorLightingUseSun=0\nActorLightingUseAmbient=0\nActorLightingOverrideAmbient=1\nActorLightingOverrideAmbientRed=255\nActorLightingOverrideAmbientGreen=200\nActorLightingOverrideAmbientBlue=200\nActorLightingMaxNrDynLights=2\n[ActorLightAnimation]\nAnimateColorEnabled=1\nAnimateColorString=az\nAnimateColorTimeSeconds=2\nAnimateColorStartRed=200\nAnimateColorStartGreen=90\nAnimateColorStartBlue=90\nAnimateColorEndRed=255\nAnimateColorEndGreen=255\nAnimateColorEndBlue=255\n')
            settings=module.actor_settings(path)
            self.assertFalse(settings['lighting']['useSun'])
            self.assertFalse(settings['lighting']['useAmbient'])
            self.assertTrue(settings['lighting']['overrideAmbient'])
            self.assertEqual(settings['lighting']['ambientColor'],[255,200,200])
            self.assertEqual(settings['lighting']['maxDynamicLights'],2)
            self.assertEqual(settings['lightAnimation'],{'enabled':True,'start':[200,90,90],'end':[255,255,255],'pattern':'az','duration':2})

    def test_missing_ini_uses_renderer_defaults_without_invented_animation(self):
        with tempfile.TemporaryDirectory() as directory:
            settings=module.actor_settings(Path(directory)/'portrait.act')
            self.assertNotIn('lightAnimation',settings)
            self.assertNotIn('lighting',settings)

if __name__=='__main__': unittest.main()
