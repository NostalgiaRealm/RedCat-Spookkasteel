"""Project declutter, 29 October 2026 (requested: remove old results such as
artifacts/ screenshots and other unneeded files). Removes regenerable output
only: scene/test runs, screenshots, browser/Electron test profiles, Android
staging copies and emulator images, build trees and old local packages that
are published on GitHub and GitLab. Keeps source, data, tests, docs,
RC_ORIGINAL_DECOMPILED, RC_*_TEST, research text (notes, logs, scripts,
json), test inputs, the Android JDK and bundletool, signing material and the
current 1.0.6 release files. Tracked files are removed with git rm, so git
history keeps them. Usage: cleanup.py [--apply]"""
import os, shutil, subprocess, sys, json
from pathlib import Path
root = Path(__file__).resolve().parents[2]
os.chdir(root)
apply = '--apply' in sys.argv
IMAGES = ('.png', '.jpg', '.jpeg', '.webp', '.gif', '.bmp', '.ppm')
# Note: the first run also removed the tracked help-menu bitmaps (bm*.bmp,
# original-content extracts, not screenshots); they were restored with git.
KEEP_EXACT = {
    'temp_work/efficiency-2026-10-26/ui-baseline',          # ui-efficiency scene baseline
    'temp_work/android-initial-2026-10-06/toolchain',       # JDK for Android release builds
    'temp_work/android-release-1.0.3-2026-10-26/toolchain', # bundletool for verify-android-release.py
}
def git(*args):
    return subprocess.run(['git', *args], capture_output=True, text=True, check=True).stdout
def size(p):
    p = Path(p)
    if p.is_symlink() or p.is_file(): return p.lstat().st_size
    return sum(f.lstat().st_size for f in p.rglob('*') if f.is_file() and not f.is_symlink())
def kept(p):
    return any(p == k or p.startswith(k + '/') for k in KEEP_EXACT)
remove_untracked, remove_tracked = [], []
# 1. Tracked: the whole artifacts/ folder and screenshots kept in temp_work research.
remove_tracked += [f for f in git('ls-files', 'artifacts').splitlines()]
remove_tracked += [f for f in git('ls-files', 'temp_work').splitlines() if f.lower().endswith(IMAGES)]
# 2. Old local packages and build trees (every version is published on both hosts).
for entry in sorted(Path('dist').iterdir()):
    if entry.name in ('release-1.0.6', 'android', 'original-decompiled'): continue
    remove_untracked.append(str(entry))
for entry in sorted(Path('dist/android').iterdir()):
    if entry.name != '1.0.6': remove_untracked.append(str(entry))
for entry in sorted(Path('dist/original-decompiled').iterdir()):
    if '-1.0.6.' not in entry.name: remove_untracked.append(str(entry))
remove_untracked.append('android/app/build')
# 3. Generated test and scene output, baselines and environments.
remove_untracked += ['temp_work/scene-output', 'temp_work/claude-native-parity/baseline',
                     'temp_work/claude-native-parity/venv-import', 'temp_work/web-subpath-scenes',
                     'temp_work/level-selection-menu']
remove_untracked += sorted(str(p) for p in Path('temp_work/claude-native-parity').glob('scene-outputs*'))
remove_untracked += sorted(str(p) for p in Path('temp_work').glob('android-build-1.0.*'))
remove_untracked += sorted(str(p) for p in Path('temp_work').glob('*/android-staging'))
remove_untracked += sorted(str(p) for p in Path('temp_work').glob('release-*/build-temp'))
remove_untracked += ['temp_work/release-1.0.4-2026-10-26/decompiled-artifacts',
                     'temp_work/js-bundling-2026-10-26/electron/profile',
                     'temp_work/js-bundling-2026-10-26/electron-final/profile',
                     'temp_work/android-initial-2026-10-06/asset-tests',
                     'temp_work/enemy-actor-animations-2026-10-12/assets/rebuild-samples.jsonl',
                     'temp_work/android-release-1.0.3-2026-10-26/assets',
                     'temp_work/android-release-1.0.3-2026-10-26/build-temp',
                     'temp_work/android-release-1.0.3-2026-10-26/verification/play-delivery.apks']
remove_untracked += sorted(str(p) for p in Path('temp_work/js-bundling-2026-10-26').glob('browser-*'))
remove_untracked += sorted(str(p) for p in Path('temp_work/efficiency-2026-10-26').glob('ui-scenes-*'))
# Emulator record: keep its text results (json, txt, log, xml, mjs), drop images and disk images.
for f in sorted(Path('temp_work/android-release-1.0.3-2026-10-26/emulator').rglob('*')):
    if f.is_file() and f.suffix.lower() not in ('.json', '.txt', '.log', '.xml', '.mjs', '.md'):
        remove_untracked.append(str(f))
# Untracked or ignored run folders and Python caches anywhere outside node_modules.
others = git('ls-files', '--others', '--exclude-standard', '-z').split('\0') + \
         git('ls-files', '--others', '--ignored', '--exclude-standard', '-z').split('\0')
for f in others:
    if not f or f.startswith(('node_modules/', 'RC_')) or '/node_modules/' in f: continue
    if '__pycache__/' in f: remove_untracked.append(f.split('__pycache__/')[0] + '__pycache__')
    elif f.startswith('temp_work/web-cache-tests/'): remove_untracked.append('/'.join(f.split('/')[:3]))
    elif f.startswith('temp_work/') and f.lower().endswith(IMAGES): remove_untracked.append(f)
seen = set(); final = []
for p in remove_untracked:
    p = p.rstrip('/')
    if p in seen or kept(p) or not os.path.lexists(p): continue
    if any(p.startswith(q + '/') for q in seen): continue
    seen.add(p); final.append(p)
remove_tracked = [f for f in dict.fromkeys(remove_tracked) if os.path.lexists(f)]
record = {'untracked': [{'path': p, 'bytes': size(p)} for p in final],
          'tracked': [{'path': p, 'bytes': size(p)} for p in remove_tracked]}
total = sum(x['bytes'] for x in record['untracked']) + sum(x['bytes'] for x in record['tracked'])
print(f"{len(final)} untracked/ignored paths, {len(remove_tracked)} tracked files, {total/1e9:.2f} GB")
if not apply:
    Path(__file__).with_name('plan.json').write_text(json.dumps(record, indent=1)); sys.exit(0)
for p in final:
    if os.path.isdir(p) and not os.path.islink(p): shutil.rmtree(p)
    else: os.remove(p)
for i in range(0, len(remove_tracked), 200):
    subprocess.run(['git', 'rm', '-q', '--', *remove_tracked[i:i + 200]], check=True)
Path(__file__).with_name('removed.json').write_text(json.dumps(record, indent=1))
print('Removed.')
