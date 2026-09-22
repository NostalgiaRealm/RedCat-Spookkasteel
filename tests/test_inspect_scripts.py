import importlib.util
import json
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
spec=importlib.util.spec_from_file_location('inspect_scripts',ROOT/'tools'/'inspect_scripts.py')
module=importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class ScriptInventoryTests(unittest.TestCase):
    def test_all_levels_retain_exact_native_api_names_and_signatures(self):
        api=json.loads((ROOT/'data/scripts/native-api.json').read_text())['declarations']
        self.assertEqual(len(api),111)
        for path in sorted((ROOT/'data/scripts').glob('lvl*.json')):
            data=json.loads(path.read_text())
            symbols=data['symbols']
            for declaration in api:
                kind='nativeExtern' if declaration['extern'] else 'eventDeclaration' if declaration['kind'].lower()=='event' else 'objectMethod'
                matches=[s for s in symbols if s['kind']==kind and s['name'].lower()==declaration['name'].lower()]
                self.assertEqual(len(matches),1,(path.name,declaration))
                expected=0 if not declaration['parametersSource'] else declaration['parametersSource'].count(',')+1
                actual=len([p for p in matches[0]['signature']['parameters'] if p['name']!='@self'])
                self.assertEqual(actual,expected,(path.name,declaration))

    def test_known_parameter_types_and_stack_offsets(self):
        data=json.loads((ROOT/'data/scripts/lvl00a.json').read_text())
        method=next(s for s in data['symbols'] if s['kind']=='objectMethod' and s['name']=='AddDefaultCommand')
        self.assertEqual([p['type']['name'] for p in method['signature']['parameters']],['string','string','int','object'])
        self.assertEqual([p['stackOffset'] for p in method['signature']['parameters']],[-16,-12,-8,-4])
        self.assertEqual(data['compilerVersion'],27)
        self.assertEqual(len(data['scriptFunctions']),18)

    def test_truncated_type_and_signature_are_rejected(self):
        self.assertIsNone(module.signature(b'\x3c\x01\x00x\x00',{'stringOffset':3,'length':1}))


if __name__=='__main__':unittest.main()
