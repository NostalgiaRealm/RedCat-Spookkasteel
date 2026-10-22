#!/usr/bin/env python3
"""Prepare a reviewable, path-bounded cleanup plan; does not delete original files."""
import collections, hashlib, json, pathlib
ROOT = pathlib.Path(__file__).resolve().parents[2]
WORK = ROOT / 'temp_work'
AUDIT = pathlib.Path(__file__).resolve().parent
inventory = json.loads((AUDIT / 'inventory-before.json').read_text())
profiles = json.loads((AUDIT / 'browser-profile-roots.json').read_text())
project_duplicates = {v['path']: v for v in json.loads((AUDIT / 'project-duplicates.json').read_text())}
saves = json.loads((AUDIT / 'save-candidates-performance-audit.json').read_text())
standalone = {e['path']: e for e in saves['standalone']}
mixed = {e['path']: e for e in saves['mixed']}
cache_names = {'node-compile-cache', 'fontconfig', 'mesa_shader_cache', 'radv_builtin_shaders', '__pycache__'}
roots = {p: 'browser-profile' for p in profiles}
for p in inventory['directories']:
    name = pathlib.PurePosixPath(p).name
    if name == 'leveldb-copy': roots[p] = 'copied-save-database'
    elif name in cache_names: roots[p] = 'generated-runtime-cache'
    elif name == 'Crash Reports': roots[p] = 'browser-crash-cache'
roots['mangohud-display'] = 'partial-browser-profile'
roots = {p: reason for p, reason in roots.items() if not any(p.startswith(q + '/') for q in roots if p != q)}

def digest(p):
    h = hashlib.sha256()
    with p.open('rb') as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b''): h.update(chunk)
    return h.hexdigest()

removals = []
retained = []
media = {'.png', '.jpg', '.jpeg', '.webp', '.gif', '.mp4', '.webm'}
# The BMPs from the original help and candidate SVG source icons are research,
# unlike screenshots and derived contact sheets. The installed JDK is reused.
for item in inventory['files']:
    path = item['path']
    entry = {'path': path, 'bytes': item['bytes'], 'mtimeNs': item['mtimeNs']}
    container = next((p for p in roots if path.startswith(p + '/')), None)
    if container:
        entry.update(reason=roots[container], container=container)
    elif path in standalone:
        entry.update(reason='standalone-test-save', sha256=digest(WORK / path), metadata=standalone[path]['matches'][0]['metadata'])
    elif path in project_duplicates:
        dup = project_duplicates[path]
        entry.update(reason='exact-project-duplicate', sha256=dup['sha256'], canonical=dup['duplicates'][0])
    elif pathlib.PurePosixPath(path).suffix.lower() in media and '/toolchain/' not in path:
        entry.update(reason='screenshot-or-derived-preview', sha256=digest(WORK / path))
    else:
        entry['sha256'] = digest(WORK / path)
        retained.append(entry)
        continue
    removals.append(entry)
# Collapse byte-identical research copies while keeping one real copy and a map.
# Exclude the installed toolchain and embedded Git metadata from deduplication.
groups = collections.defaultdict(list)
for e in retained:
    if '/toolchain/' not in e['path'] and '/.git/' not in e['path'] and e['path'] not in mixed and e['bytes']:
        groups[(e['bytes'], e['sha256'])].append(e)
internal_removed = set()
for group in groups.values():
    if len(group) < 2: continue
    group.sort(key=lambda e: (len(pathlib.PurePosixPath(e['path']).parts), e['path']))
    canonical = 'temp_work/' + group[0]['path']
    for e in group[1:]:
        e.update(reason='exact-research-duplicate', canonical=canonical)
        removals.append(e)
        internal_removed.add(e['path'])
retained = [e for e in retained if e['path'] not in internal_removed]
plan = {'root': str(WORK), 'directoryRemovals': roots, 'removeFiles': removals,
        'preserveFiles': retained, 'pruneSavePayloads': [mixed[e['path']] for e in retained if e['path'] in mixed], 'symlinksBefore': inventory['symlinks']}
(AUDIT / 'cleanup-plan.json').write_text(json.dumps(plan, indent=2) + '\n')
s = collections.defaultdict(lambda: {'files': 0, 'bytes': 0})
for e in removals:
    s[e['reason']]['files'] += 1
    s[e['reason']]['bytes'] += e['bytes']
print(json.dumps({'removalSummary':s, 'preserveFiles':len(retained), 'preserveBytes':sum(e['bytes'] for e in retained)}, indent=2))
