#!/usr/bin/env python3
"""Write the retained-research index and compress the cleanup audit without losing records."""
import collections, gzip, hashlib, json, os, pathlib, subprocess
AUDIT=pathlib.Path(__file__).resolve().parent
WORK=AUDIT.parent
ROOT=WORK.parent
plan=json.loads((AUDIT/'cleanup-plan.json').read_text())
result=json.loads((AUDIT/'cleanup-result.json').read_text())
original=json.loads((AUDIT/'inventory-before.json').read_text())
head=subprocess.check_output(['git','rev-parse','HEAD'],cwd=ROOT,text=True).strip()
indexed={}
for line in subprocess.check_output(['git','ls-files','--stage','-z'],cwd=ROOT).decode().split('\0'):
    if not line:continue
    metadata,path=line.split('\t',1)
    indexed[path]=metadata.split()[1]
with (AUDIT/'duplicate-locations.tsv').open('w') as out:
    out.write('removed_temp_work_path\tretained_project_path\tsha256\tgit_blob_if_tracked\n')
    for entry in plan['removeFiles']:
        if 'canonical' in entry:
            out.write('\t'.join([entry['path'],entry['canonical'],entry['sha256'],indexed.get(entry['canonical'],'')])+'\n')
(AUDIT/'verification.json').write_text(json.dumps({
    'sourceCommit':head,'trackedSourceChangesAfterCleanup':subprocess.check_output(['git','status','--short','-uno'],cwd=ROOT,text=True),
    'retainedFilesHashVerified':result['retainedFilesHashVerified'],
    'independentFinalAudit':{'jsonAndJsonlFilesScanned':1039,'fullSavePayloadsFound':0,'browserProfileMarkersFound':0,
      'scope':'Outside cleanup audit, toolchain and node_modules. Included serialized JSON values.',
      'representativeEvidence':'CPU profiles, crate trace, campaign results, native research, streaming and hitch reports retained.'},
    'protected':'No source, actual player save storage, published builds or RCSPOOK_WEBSITE files modified.'
},indent=2)+'\n')
# Keep the complete audit, compressed rather than a second bulky working copy.
archives=[]
for p in list(AUDIT.glob('*.json')):
    if p.stat().st_size < 1000000:continue
    raw=p.read_bytes(); target=p.with_name(p.name+'.gz')
    with gzip.open(target,'wb',compresslevel=6) as out:out.write(raw)
    with gzip.open(target,'rb') as f:assert f.read()==raw
    archives.append({'file':target.name,'uncompressedBytes':len(raw),'sha256':hashlib.sha256(raw).hexdigest()})
    p.unlink()
(AUDIT/'compressed-inventories.json').write_text(json.dumps(archives,indent=2)+'\n')
# Directory summary includes original evidence only; the audit is separate.
summary=collections.defaultdict(lambda:{'files':0,'bytes':0})
for base,dirs,files in os.walk(WORK,followlinks=False):
    dirs[:]=[d for d in dirs if not (pathlib.Path(base)/d).is_symlink() and pathlib.Path(base)/d != AUDIT]
    for name in files:
        p=pathlib.Path(base)/name
        if p.is_symlink():continue
        rel=p.relative_to(WORK); k=rel.parts[0]
        summary[k]['files']+=1;summary[k]['bytes']+=p.stat().st_size
(AUDIT/'retained-directory-index.json').write_text(json.dumps(dict(sorted(summary.items())),indent=2)+'\n')
rows='\n'.join(f"| `{key}` | {value['files']} | {value['bytes']/1024**2:.2f} |" for key,value in sorted(summary.items()))
(AUDIT/'README.md').write_text(f'''# temp_work cleanup — 22 October 2026

This cleanup followed the request to retain useful investigation data while removing browser profiles, saves, screenshots and duplicates. It applies only to `temp_work`.

## What was kept

Native disassemblies and REA snapshots; original Help resource extractions; analysis scripts and notes; unique historical source snapshots and patches; animation measurements; CPU profiles and traces; campaign reports and release verification. The installed Android JDK and its distribution archive remain because the documented Android workflow uses this toolchain.

`cpu-profile.json` and `.cpuprofile` files are performance measurements, not browser user profiles. REA `.snapshot` files are analysis data, not game saves. Original Help BMP resources and candidate source SVGs were preserved; rendered screenshots and contact sheets were removed.

## What was removed

- 327 browser/Electron profile directories plus a partial profile, copied save databases and generated runtime caches.
- {result['removed']['standalone-test-save']['files']} standalone saved-game files.
- {result['removed']['screenshot-or-derived-preview']['files']} screenshots, derived previews and disposable test-fixture media.
- {result['removed']['exact-project-duplicate']['files']} exact copies of files elsewhere in the project, plus {result['removed']['exact-research-duplicate']['files']} duplicate research copies. At least one canonical copy remains.
- {result['savePayloadsRemoved']} full save payloads embedded in {result['modifiedReports']} diagnostic reports. Each payload was replaced with an explicit cleanup marker and compact hash, level, position and state metadata. Surrounding diagnostic events and results remain. These summaries cannot be loaded as saves.

## Finding retained evidence

- [Duplicate location lookup](duplicate-locations.tsv): removed path → retained project path, SHA-256 and Git blob where tracked. Source commit at cleanup: `{head}`. This also lets a historical copy be recovered from Git if a canonical tracked source file changes later.
- [Cleanup results](cleanup-result.json) and [verification](verification.json).
- [Changed reports](modified-reports.json): hashes and byte counts before/after save-payload removal.
- [Save summary inventory](save-candidates-performance-audit.json): compact reproduction locations and exact report paths, without full saves.
- `inventory-before.json.gz` and `cleanup-plan.json.gz`: complete pre-cleanup metadata and removal/retention decisions. [Compression checks](compressed-inventories.json) include hashes of their original JSON. Read with `gzip -dc FILE.json.gz`; no need to retain an uncompressed copy.
- [Retained directory index](retained-directory-index.json).

Historical reports and harnesses can still mention deleted screenshots/profiles/saves. These were intentionally removed. They describe historical runs, not a promise that the disposable fixtures remain. Consult the duplicate lookup for removed source/data copies; recreate fresh test profiles/saves if rerunning a harness.

The cleanup scripts in this directory record this one-time operation. Do not treat them as a recurring cleanup command or rerun a destructive plan against a changed directory. No gameplay tests or builds were needed. Retained files were hash-checked, and a separate final scan found no full game saves or browser-profile markers in the reviewed research directories. Main source and actual user save storage were not changed.

## Retained investigation directories

| Directory/file | Files | MiB |
| --- | ---: | ---: |
{rows}
''')
(WORK/'README.md').write_text('''# Retained research and investigation data

`temp_work` retains native-code research, REA output, investigation notes and scripts, unique source snapshots, performance measurements, campaign findings and release verification.

Browser test profiles, copied saves, screenshots, generated caches and redundant copies were removed on 22 October 2026. Mixed reports retain their findings with compact summaries replacing full saved-game payloads. The documented Android toolchain and original resource-extraction evidence remain.

See the [cleanup and research index](cleanup-2026-10-22/README.md) for the retained directories, verification and a lookup from removed duplicate files to their canonical copies. Historical references to discarded screenshots and test profiles are expected.
''')
print('Source commit:',head)
print('Compressed inventories:',len(archives))
print('Original evidence retained, bytes:',sum(x['bytes'] for x in summary.values()))
