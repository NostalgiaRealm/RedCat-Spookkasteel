"""Focused generator checks; fixtures/evidence stay in the project research folder."""
import hashlib
import importlib.util
import json
from pathlib import Path
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[2]
OUTPUT = Path(__file__).parent / f'resource-index-check-{time.time_ns()}'
OUTPUT.mkdir()
sys.dont_write_bytecode = True
spec = importlib.util.spec_from_file_location('actor_resources_check', ROOT / 'tools/import_actor_resources.py')
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def save(path, value):
    path.write_text(json.dumps(value) + '\n', encoding='utf-8')


fixture = OUTPUT / 'fixture'
(fixture / 'textures').mkdir(parents=True)
base = {'positions': [0., 0., 0., 1., 1., 1.], 'normals': [0., 1., 0., 0., 1., 0.],
        'uvs': [0., 0., 1., 1.], 'indices': [0, 1, 0],
        'groups': [{'start': 0, 'count': 3, 'materialIndex': 0}]}
actors = {'zulu': {'file': 'zulu.json'}, 'alpha': {'file': 'alpha.json'}}
save(fixture / 'zulu.json', {**base, 'settings': {'scale': 9}, 'animations': [{'name': 'different'}]})
save(fixture / 'alpha.json', {**base, 'settings': {'scale': 1}, 'animations': []})
for field in module.GEOMETRY_FIELDS:
    variant = json.loads(json.dumps(base))
    if field == 'groups':
        variant[field][0]['count'] = 2
    else:
        variant[field][0] += 1
    stem = 'variant_' + field
    actors[stem] = {'file': stem + '.json'}
    save(fixture / (stem + '.json'), variant)
save(fixture / 'manifest.json', {'format': 'redcat-actors-v1', 'actors': actors})
png = b'\x89PNG\r\n\x1a\nExact bytes fixture, not image decoded by generator.'
(fixture / 'textures/zulu.png').write_bytes(png)
(fixture / 'textures/alpha.png').write_bytes(png)
(fixture / 'textures/different.png').write_bytes(png + b'Byte difference')
(fixture / 'textures/not-png.dat').write_bytes(png)
before = {str(path.relative_to(fixture)): digest(path) for path in fixture.rglob('*') if path.is_file()}

first = module.write_shared_resources(fixture)
first_bytes = (fixture / 'shared-resources.json').read_bytes()
second = module.write_shared_resources(fixture)
assert first == second
assert (fixture / 'shared-resources.json').read_bytes() == first_bytes
assert first['format'] == 'redcat-actor-resources-v1'
assert first['geometry'] == {'zulu': 'alpha'}
assert first['textures'] == {'textures/zulu.png': 'textures/alpha.png'}
assert all(digest(fixture / name) == value for name, value in before.items())
for section in ('geometry', 'textures'):
    assert not set(first[section]).intersection(first[section].values())
cli_file = OUTPUT / 'cli-index.json'
subprocess.run([sys.executable, str(ROOT / 'tools/import_actor_resources.py'), '--actors', str(fixture), '--output', str(cli_file)], check=True)
assert cli_file.read_bytes() == first_bytes

bad = OUTPUT / 'missing-field'
bad.mkdir()
save(bad / 'manifest.json', {'format': 'redcat-actors-v1', 'actors': {'bad': {'file': 'bad.json'}}})
save(bad / 'bad.json', {'positions': []})
try:
    module.build_shared_resources(bad)
except ValueError as error:
    assert 'missing render fields' in str(error)
else:
    raise AssertionError('Missing fields did not fail')
save(bad / 'manifest.json', {'format': 'wrong', 'actors': {}})
try:
    module.build_shared_resources(bad)
except ValueError as error:
    assert 'manifest' in str(error)
else:
    raise AssertionError('Wrong manifest did not fail')
save(bad / 'manifest.json', {'format': 'redcat-actors-v1', 'actors': {'bad': {'file': '../fixture/alpha.json'}}})
try:
    module.build_shared_resources(bad)
except ValueError as error:
    assert 'outside' in str(error)
else:
    raise AssertionError('Outside actor file did not fail')

# Existing tooling imports this module through an importlib file specification.
# The end-of-main hook must not add an import-time tools-path dependency.
actor_spec = importlib.util.spec_from_file_location('actor_import_check', ROOT / 'tools/import_actors.py')
actor_module = importlib.util.module_from_spec(actor_spec)
actor_spec.loader.exec_module(actor_module)

actual = module.build_shared_resources(ROOT / 'assets/actors')
assert actual == json.loads((ROOT / 'assets/actors/shared-resources.json').read_text())
manifest = json.loads((ROOT / 'assets/actors/manifest.json').read_text())
for alias, canonical in actual['geometry'].items():
    left = json.loads((ROOT / 'assets/actors' / manifest['actors'][alias]['file']).read_text())
    right = json.loads((ROOT / 'assets/actors' / manifest['actors'][canonical]['file']).read_text())
    assert all(left[field] == right[field] for field in module.GEOMETRY_FIELDS)
for alias, canonical in actual['textures'].items():
    assert (ROOT / 'assets/actors' / alias).read_bytes() == (ROOT / 'assets/actors' / canonical).read_bytes()
for section in ('geometry', 'textures'):
    assert not set(actual[section]).intersection(actual[section].values())
texture_files = list((ROOT / 'assets/actors/textures').glob('*.png'))
report = {'passed': True, 'checks': ['deterministic bytes', 'lexicographic direct aliases', 'all five geometry fields participate',
          'settings and animations remain independent', 'exact PNG bytes only', 'CLI regeneration', 'cached source files unchanged',
          'missing/wrong/outside inputs rejected', 'importer remains importlib-loadable', 'actual aliases all exact and no chains'],
          'actors': len(manifest['actors']), 'geometryAliases': len(actual['geometry']), 'uniqueGeometry': len(manifest['actors']) - len(actual['geometry']),
          'textureFiles': len(texture_files), 'textureAliases': len(actual['textures']), 'uniqueTextures': len(texture_files) - len(actual['textures']),
          'indexSha256': digest(ROOT / 'assets/actors/shared-resources.json'), 'output': str(OUTPUT)}
save(OUTPUT / 'report.json', report)
print(json.dumps(report, indent=2))
