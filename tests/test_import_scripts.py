"""Format regression tests use both synthetic objects and the imported campaign.

Full binary-source checks run when the owner-supplied installation is available;
the remaining tests run on Linux and Windows without that installation.
"""
import copy
import hashlib
import importlib.util
import json
import struct
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location('import_scripts', ROOT/'tools/import_scripts.py')
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


def walk(value):
    if isinstance(value, dict):
        yield value
        for child in value.values(): yield from walk(child)
    elif isinstance(value, list):
        for child in value: yield from walk(child)


def fixture():
    # One global void function with a single native RETURN instruction.
    function = b'\x3b\x04\x00test\x00\xff'+struct.pack('<IIhBi', 0, 0, 1, 0, -2)
    return struct.pack('<7I', 27, 1234567890, 0, 0, 0, 0, 1)+function


class SyntheticFormatTests(unittest.TestCase):
    def test_minimal_function_retains_explicit_return(self):
        data = module.parse_dso(fixture())
        self.assertEqual(data['functions'][0]['id'], '3b:0')
        self.assertEqual(data['functions'][0]['name'], 'test')
        self.assertEqual(data['functions'][0]['instructions'][0]['target'], -2)
        self.assertEqual(data['statistics']['instructions'], 1)

    def test_every_truncation_of_minimal_object_is_rejected(self):
        original = fixture()
        for size in range(len(original)):
            with self.subTest(size=size), self.assertRaises(module.DaviFormatError):
                module.parse_dso(original[:size])

    def test_version_trailer_and_invalid_control_flow_are_rejected(self):
        original = fixture()
        for bad in (b'\x1a'+original[1:], original+b'\0', original[:-4]+struct.pack('<i', 1)):
            with self.assertRaises(module.DaviFormatError): module.parse_dso(bad)

    def test_unknown_instructions_and_expression_tags_are_rejected(self):
        bad = bytearray(fixture())
        bad[-5] = 255
        with self.assertRaises(module.DaviFormatError): module.parse_dso(bad)
        with self.assertRaises(module.DaviFormatError): module.Reader(b'\xff').expression()

    def test_invalid_references_and_nonfinite_literals_are_rejected(self):
        for raw in (b'\x00', b'\x06', b'\x01\x42', b'\x01\x42\0'):
            with self.assertRaises(module.DaviFormatError): module.Reader(raw).reference()
        with self.assertRaises(module.DaviFormatError): module.Reader(b'\x01'+struct.pack('<d',float('nan'))).literal()
        data = module.parse_dso(fixture())
        data['functions'][0]['type']['classRef'] = {'path':[{'tag':66,'index':123}]}
        with self.assertRaisesRegex(module.DaviFormatError, 'unresolved'): module.link_and_validate(data)

    def test_original_expression_serialization_order_is_retained(self):
        # Native compare reads first=1, second=2; VM compares second against first.
        data = bytes([2])+struct.pack('<iB', -2, 0)+bytes([0,2])+struct.pack('<i',1)+bytes([0,2])+struct.pack('<i',2)+bytes([9])
        reader = module.Reader(data)
        instruction = reader.instruction()
        self.assertEqual((instruction['a']['value'],instruction['b']['value']), (1,2))
        self.assertEqual(reader.pos, len(data))


class CampaignFormatTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.programs = {p.stem:json.loads(p.read_text()) for p in (ROOT/'data/davi').glob('lvl*.json')}

    def test_exact_campaign_counts(self):
        expected = {
            'lvl00a': (612,18,62,847,133), 'lvl01a': (830,11,64,614,374),
            'lvl02a': (978,17,113,1251,369), 'lvl03a': (1484,16,170,1709,737),
            'lvl04a': (683,14,35,713,283),
        }
        self.assertEqual(set(self.programs),set(expected))
        for key, counts in expected.items():
            stats = self.programs[key]['statistics']
            self.assertEqual(tuple(stats[k] for k in ('records','functions','handlers','instructions','objects')), counts)

    def test_all_native_signatures_match_shipped_header_inventory(self):
        api = json.loads((ROOT/'data/scripts/native-api.json').read_text())['declarations']
        for data in self.programs.values():
            records = [r for r in walk(data) if 'endOffset' in r]
            for declaration in api:
                kind = 'external' if declaration['extern'] else 'event' if declaration['kind'].lower()=='event' else 'method'
                matches = [r for r in records if r['kind']==kind and r['name'].lower()==declaration['name'].lower()]
                self.assertEqual(len(matches),1,declaration['name'])
                explicit = [p for p in matches[0]['parameters'] if p['name']!='@self']
                expected = 0 if not declaration['parametersSource'] else declaration['parametersSource'].count(',')+1
                self.assertEqual(len(explicit),expected,declaration['name'])

    def test_handler_owner_and_function_references_are_fully_linked(self):
        for key, data in self.programs.items():
            # Recompute every reference from its encoded path; never trust JSON names alone.
            validated = module.link_and_validate(copy.deepcopy(data))
            self.assertEqual(validated,data,key)
            for record in walk(data):
                if record.get('kind')=='handler' and 'endOffset' in record:
                    self.assertEqual(record['owner']['kind'],'object')
            methods = data['classes'][0]['members']
            add = next(r for r in methods if r['name']=='AddDefaultCommand')
            self.assertEqual([p['stackOffset'] for p in add['parameters']],[-16,-12,-8,-4])

    def test_potion_gate_and_tower_callbacks_retain_original_branches(self):
        for key in ('lvl00a','lvl01a','lvl02a','lvl03a'):
            gates = [record for record in walk(self.programs[key]) if record.get('kind')=='handler' and 'instructions' in record and any(v.get('ref',{}).get('name')=='RcHasAllPotions' for v in walk(record))]
            self.assertEqual(len(gates),1,key)
            self.assertEqual(gates[0]['name'],'CommandOnEnter')
            self.assertTrue(any(i['opcode']==2 for i in gates[0]['instructions']))
        data = self.programs['lvl04a']
        functions = {f['name']:f for f in data['functions']}
        for name in ('CheckGameState','MirrorTrigger1','MirrorTrigger5','beams01_MotionCommand'):
            self.assertTrue(functions[name]['instructions'],name)
        self.assertTrue(any(i['opcode']==2 for i in functions['CheckGameState']['instructions']))

    @unittest.skipUnless((module.DEFAULT/'Levels/lvl00a.dso').exists(),'original game installation not available')
    def test_original_binary_files_are_fully_consumed_and_reproduce_import(self):
        for key, imported in self.programs.items():
            path = module.DEFAULT/'Levels'/imported['source']
            original = path.read_bytes()
            parsed = module.parse_dso(original)
            parsed['source'] = path.name
            self.assertEqual(parsed, imported, key)
            self.assertEqual(parsed['sha256'], hashlib.sha256(original).hexdigest())
            # Truncate at known record and instruction boundaries throughout each file.
            boundaries = sorted({v['offset'] for v in walk(parsed) if 'offset' in v})
            for offset in boundaries[::max(1,len(boundaries)//25)]:
                with self.subTest(level=key,offset=offset), self.assertRaises(module.DaviFormatError):
                    module.parse_dso(original[:offset])


if __name__=='__main__': unittest.main()
