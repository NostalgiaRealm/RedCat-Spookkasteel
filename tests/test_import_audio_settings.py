import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location('import_audio_settings', ROOT / 'tools/import_audio_settings.py')
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class AudioSettingsImportTests(unittest.TestCase):
    def test_comments_case_and_windows_paths_keep_first_duplicate(self):
        parsed = module.parse_settings(r'''
* Davilex volume table
[VoLuMeS]
; leading comment
# another comment
FOREST1.WAV = .45 ; quieter ambient loop
forest1.wav = 1
C:\Sounds\LV1snd1.WAV = .25
Sounds/LV1SND1.wav = .9
expl6.wav = 1.5
empty.wav = 0
[volumes]
forest1.wav = .1
''')
        self.assertEqual(parsed['gains'], {
            'forest1.wav': .45, 'lv1snd1.wav': .25, 'expl6.wav': 1.5, 'empty.wav': 0,
        })
        self.assertEqual(parsed['spatial'], {'minDistanceMeters': 5, 'maxDistanceFactor': 25})

    def test_spatial_computer_priority_and_game_section_fallback(self):
        parsed = module.parse_settings('[Volumes]', '[3dSOUND]\nMinDistanceMeters=7',
                                       '[3DSound]\nMinDistanceMeters=8\nMaxDistanceFactor=30')
        self.assertEqual(parsed['spatial'], {'minDistanceMeters': 7, 'maxDistanceFactor': 30})
        self.assertEqual(module.parse_settings('', '', '[level1]\nMinDistanceMeters=50')['spatial'],
                         module.SPATIAL_DEFAULTS)
        self.assertEqual(parsed['levels']['lvl00a'], parsed['spatial'])

    def test_level_overrides_global_and_first_section_and_key_win(self):
        parsed = module.parse_settings('', '[3DSound]\nMinDistanceMeters=5\nMaxDistanceFactor=25', '''
[SubLevel1_1]
LevelFileName=lvl00a.bsp
MinDistanceMeters=50
mindistancemeters=3
MaxDistanceFactor=150
[SubLevel1_2]
MinDistanceMeters=40
[sublevel1_1]
MinDistanceMeters=2
MaxDistanceFactor=8
[sublevel1_2]
MaxDistanceFactor=99
''')
        self.assertEqual(parsed['spatial'], module.SPATIAL_DEFAULTS)
        self.assertEqual(parsed['levels']['lvl00a'], {'minDistanceMeters': 50, 'maxDistanceFactor': 150})
        self.assertEqual(parsed['levels']['lvl01a'], {'minDistanceMeters': 40, 'maxDistanceFactor': 25})
        self.assertEqual(parsed['levels']['lvl02a'], module.SPATIAL_DEFAULTS)

    def test_invalid_gains_or_distances_are_rejected(self):
        for value in ('nan', 'inf', '-.5', 'oops'):
            with self.subTest(value=value), self.assertRaises(ValueError):
                module.parse_settings(f'[Volumes]\nforest1.wav={value}')
        with self.assertRaises(ValueError):
            module.parse_settings('', '[3DSound]\nMinDistanceMeters=0')

    def test_case_insensitive_source_names_and_optional_config_defaults(self):
        with tempfile.TemporaryDirectory() as temporary:
            source = Path(temporary)
            (source / 'vOlUmE.InI').write_text('[Volumes]\nTORCH1.WAV=.2', encoding='cp1252')
            parsed = module.load_settings(source)
            self.assertEqual(parsed['gains'], {'torch1.wav': .2})
            self.assertEqual(parsed['spatial'], module.SPATIAL_DEFAULTS)

    def test_imported_original_forest_and_music_levels(self):
        source = (ROOT / 'src/audio-settings.js').read_text()
        imported = json.loads(source.split('export default ', 1)[1].rstrip(';\n'))
        for index in range(1, 6):
            self.assertEqual(imported['gains'][f'forest{index}.wav'], .45)
        for index, gain in enumerate((.25, .5, .5, .5), 1):
            self.assertEqual(imported['gains'][f'lv1snd{index}.wav'], gain)
        self.assertEqual(imported['gains']['level 1 - the forest.wav'], .7)
        self.assertEqual(imported['gains']['lv4snd8.wav'], .8)
        self.assertEqual(imported['gains']['expl6.wav'], 1.5)
        self.assertEqual(imported['gains']['empty.wav'], 0)
        self.assertEqual(imported['spatial'], module.SPATIAL_DEFAULTS)
        for index in range(5):
            self.assertEqual(imported['levels'][f'lvl{index:02d}a'],
                             {'minDistanceMeters': 50, 'maxDistanceFactor': 150})
        if module.DEFAULT.is_dir():
            self.assertEqual(imported, module.load_settings(module.DEFAULT))


if __name__ == '__main__':
    unittest.main()
