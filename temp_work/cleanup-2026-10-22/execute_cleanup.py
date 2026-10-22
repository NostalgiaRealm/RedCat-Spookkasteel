#!/usr/bin/env python3
"""Apply the dated reviewed cleanup plan inside temp_work only, then verify retained evidence."""
import collections, hashlib, json, os, pathlib, shutil, time
AUDIT = pathlib.Path(__file__).resolve().parent
WORK = AUDIT.parent
ROOT = WORK.parent
plan = json.loads((AUDIT / 'cleanup-plan.json').read_text())
assert pathlib.Path(plan['root']) == WORK

def safe(path):
    p = WORK / path
    assert path and not pathlib.PurePosixPath(path).is_absolute() and '..' not in pathlib.PurePosixPath(path).parts
    assert p.is_relative_to(WORK) and not p.is_relative_to(AUDIT)
    assert p.resolve().is_relative_to(WORK), f'Path escapes workspace: {p}'
    assert not p.is_symlink(), f'Unexpected symlink: {p}'
    return p

def sha(path):
    h = hashlib.sha256()
    with path.open('rb') as f:
        for chunk in iter(lambda: f.read(1024*1024), b''): h.update(chunk)
    return h.hexdigest()

# Fail before any removal if files changed since the inventory.
for e in plan['removeFiles'] + plan['preserveFiles']:
    s = safe(e['path']).stat()
    assert s.st_size == e['bytes'] and s.st_mtime_ns == e['mtimeNs'], f'Changed file: {e["path"]}'
for e in plan['removeFiles']:
    if 'canonical' in e:
        canonical = ROOT / e['canonical']
        assert canonical.is_file() and sha(canonical) == e['sha256'], f'Invalid duplicate destination: {e}'

modifications = []
for report in plan['pruneSavePayloads']:
    p = safe(report['path']); before_sha = sha(p)
    original = p.read_text()
    is_lines = p.suffix == '.jsonl'
    rows = original.splitlines(keepends=True) if is_lines else None
    docs = {}
    for match in report['matches']:
        assert not match['jsonStringSteps'], 'Unexpected nested serialized container'
        line = match['line']
        if line not in docs: docs[line] = json.loads(rows[line-1] if is_lines else original)
        target = docs[line]
        for part in match['path'][:-1]: target = target[part]
        assert match['path'], 'Whole saves should be removed instead'
        target[match['path'][-1]] = {'_cleanup': 'Full saved-game payload removed on 2026-10-22; diagnostic summary retained. This is not a loadable save.', **match['metadata']}
    if is_lines:
        for line, doc in docs.items(): rows[line-1] = json.dumps(doc, ensure_ascii=False, separators=(',', ':')) + '\n'
        replacement = ''.join(rows)
    else: replacement = json.dumps(docs[None], ensure_ascii=False, indent=2) + '\n'
    staged = AUDIT / 'report-being-pruned.json'
    staged.write_text(replacement)
    os.chmod(staged, p.stat().st_mode & 0o777)
    os.replace(staged, p)
    modifications.append({'path':report['path'], 'beforeBytes':len(original.encode()), 'afterBytes':p.stat().st_size,
                          'beforeSha256':before_sha, 'afterSha256':sha(p), 'payloadsRemoved':len(report['matches'])})
(AUDIT/'modified-reports.json').write_text(json.dumps(modifications,indent=2)+'\n')

for path in sorted(plan['directoryRemovals'], key=len, reverse=True):
    p = safe(path)
    if p.exists(): shutil.rmtree(p)
for e in plan['removeFiles']:
    p = WORK / e['path']
    if p.exists(): safe(e['path']).unlink()

# Only empty directories are removed here; symlinks are never traversed.
empty = []
for base, dirs, files in os.walk(WORK, topdown=False, followlinks=False):
    p = pathlib.Path(base)
    if p == WORK or p.is_relative_to(AUDIT) or p.is_symlink(): continue
    try: p.rmdir(); empty.append(str(p.relative_to(WORK)))
    except OSError: pass
changed = {e['path']:e for e in modifications}
verified = []
for e in plan['preserveFiles']:
    expected = changed.get(e['path'], {}).get('afterSha256', e['sha256'])
    assert sha(safe(e['path'])) == expected, f'Retained evidence changed: {e["path"]}'
    verified.append(e['path'])
assert all(not (WORK/e['path']).exists() for e in plan['removeFiles'])
summary=collections.defaultdict(lambda:{'files':0,'bytes':0})
for e in plan['removeFiles']:
    summary[e['reason']]['files']+=1; summary[e['reason']]['bytes']+=e['bytes']
result={'completedAt':time.strftime('%Y-%m-%dT%H:%M:%S%z'), 'removed':summary, 'modifiedReports':len(modifications),
        'savePayloadsRemoved':sum(e['payloadsRemoved'] for e in modifications), 'prunedBytes':sum(e['beforeBytes']-e['afterBytes'] for e in modifications),
        'retainedFilesHashVerified':len(verified), 'emptyDirectoriesRemoved':len(empty)}
(AUDIT/'cleanup-result.json').write_text(json.dumps(result,indent=2)+'\n')
print(json.dumps(result,indent=2))
