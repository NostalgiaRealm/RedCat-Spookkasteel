"""Binary format regression and real-data import verification.

Run with: python3 -m unittest discover -s tests -p 'test_import_levels.py' -v
"""
import importlib.util
import json
import math
import struct
import unittest
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location('import_levels', ROOT / 'tools' / 'import_levels.py')
importer = importlib.util.module_from_spec(spec)
spec.loader.exec_module(importer)


def chunk(kind, data, size=1):
    return struct.pack('<3I', kind, size, len(data)//size) + data


class BinaryFormatTests(unittest.TestCase):
    def test_chunk_boundaries_and_version(self):
        header = b'GBSP\0\0\0\0' + struct.pack('<I', 15) + b'\0'*16
        good = chunk(0, header, 28) + struct.pack('<3I', 65535, 0, 0)
        chunks, _ = importer.read_chunks(good)
        self.assertEqual(chunks[0][:2], (28, 1))
        for corrupt in (good[:-1], good+b'junk', good[:12]+b'IBSP'+good[16:], good[:20]+struct.pack('<I',16)+good[24:]):
            with self.assertRaises(importer.FormatError):
                importer.read_chunks(corrupt)

    def test_duplicate_or_oversized_chunk_rejected(self):
        header = b'GBSP\0\0\0\0' + struct.pack('<I', 15) + b'\0'*16
        with self.assertRaises(importer.FormatError):
            importer.read_chunks(chunk(0, header, 28)*2)
        with self.assertRaises(importer.FormatError):
            importer.read_chunks(struct.pack('<3I', 0, 0xffffffff, 0xffffffff))

    def test_entities_preserve_case_and_windows_text(self):
        values = ['classname', 'PlayerStart', 'Origin', '-1 2 3', 'Name', 'heks café']
        data = struct.pack('<2I', 1, 3)
        for value in values:
            encoded = value.encode('cp1252') + b'\0'
            data += struct.pack('<I', len(encoded)) + encoded
        entities = importer.read_entities(data)
        self.assertEqual(entities, [{'classname':'PlayerStart', 'Origin':'-1 2 3', 'Name':'heks café'}])
        for bad in (data[:-1], data+b'\0', data[:8]+struct.pack('<I',0)+data[12:]):
            with self.assertRaises(importer.FormatError):
                importer.read_entities(bad)


class ImportedLevelTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.files = sorted((ROOT / 'data' / 'levels').glob('*/level.json'))
        if not cls.files:
            raise unittest.SkipTest('Run tools/import_levels.py to make local asset exports first')

    def test_five_original_levels_and_known_player_start(self):
        self.assertEqual([p.parent.name for p in self.files], ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a'])
        data = json.loads(self.files[0].read_text())
        self.assertEqual(data['spawn']['position'], [-1332,-160,2280])
        self.assertEqual(data['stats']['entities'], 896)

    def test_mesh_coverage_winding_and_lightmap_uvs(self):
        for path in self.files:
            with self.subTest(level=path.parent.name):
                data = json.loads(path.read_text())
                mesh = (path.parent / data['mesh']['file']).read_bytes()
                self.assertEqual(len(mesh), data['mesh']['vertexCount'] * 44)
                cursor = 0
                for group in data['groups']:
                    self.assertEqual(group['start'], cursor)
                    self.assertEqual(group['count']%3, 0)
                    self.assertLess(group['texture'], len(data['textures']))
                    cursor += group['count']
                self.assertEqual(cursor, data['mesh']['vertexCount'])
                vertices = list(struct.iter_unpack('<11f', mesh))
                for i in range(0, len(vertices), 3):
                    p, q, r = vertices[i:i+3]
                    self.assertTrue(all(math.isfinite(v) for v in (*p,*q,*r)))
                    a, b = [q[j]-p[j] for j in range(3)], [r[j]-p[j] for j in range(3)]
                    cross = [a[1]*b[2]-a[2]*b[1], a[2]*b[0]-a[0]*b[2], a[0]*b[1]-a[1]*b[0]]
                    self.assertGreaterEqual(sum(cross[j]*p[j+3] for j in range(3)), -0.01)
                uv = (path.parent / data['mesh']['lightmap']['uvFile']).read_bytes()
                self.assertEqual(len(uv), len(vertices)*8)
                self.assertTrue(all(0 <= v[0] <= 1 for v in struct.iter_unpack('<f', uv)))

    def test_spawn_is_in_empty_static_bsp_leaf(self):
        for path in self.files:
            with self.subTest(level=path.parent.name):
                data = json.loads(path.read_text())
                collision = data['collision']
                point = list(data['spawn']['position'])
                point[1] += 32  # The original origin is at the character's feet.
                node = collision['models'][0]['root']
                visited = set()
                while node >= 0:
                    self.assertNotIn(node, visited, 'BSP node cycle')
                    visited.add(node)
                    front, back, pi = collision['nodes'][node]
                    plane = collision['planes'][pi]
                    node = front if sum(point[i]*plane[i] for i in range(3)) >= plane[3] else back
                self.assertFalse(collision['leaves'][-node-1]['contents'] & 67, 'Spawn is inside blocking world geometry')

    def test_png_chunks_crc_and_dimensions(self):
        for level_path in self.files:
            data = json.loads(level_path.read_text())
            images = data['textures'] + [data['mesh']['lightmap']]
            for texture in images:
                path = level_path.parent / texture['file']
                with self.subTest(image=str(path.relative_to(ROOT))):
                    png = path.read_bytes()
                    self.assertEqual(png[:8], b'\x89PNG\r\n\x1a\n')
                    offset, compressed = 8, bytearray()
                    while offset < len(png):
                        size = struct.unpack_from('>I',png,offset)[0]
                        tag = png[offset+4:offset+8]
                        payload = png[offset+8:offset+8+size]
                        crc = struct.unpack_from('>I',png,offset+8+size)[0]
                        self.assertEqual(crc, zlib.crc32(tag+payload)&0xffffffff)
                        if tag == b'IHDR':
                            w,h,depth,color,*_ = struct.unpack('>2I5B',payload)
                            self.assertEqual((w,h),(texture['width'],texture['height']))
                            self.assertEqual(depth,8)
                        if tag == b'IDAT':
                            compressed += payload
                        offset += size+12
                    channels = 4 if color == 6 else 3
                    self.assertEqual(len(zlib.decompress(compressed)),h*(1+w*channels))


if __name__ == '__main__':
    unittest.main()
