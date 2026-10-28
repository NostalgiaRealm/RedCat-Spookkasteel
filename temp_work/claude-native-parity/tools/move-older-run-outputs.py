"""Move untracked test-run outputs (any date; RUN_CUTOFF env, default 0) out of the
research folders into the ignored temp_work/scene-output/earlier-runs/.
Nothing is deleted; tracked files and older untracked runs are left alone."""
import os, re, subprocess, sys, shutil, time
CUTOFF = float(__import__("os").environ.get("RUN_CUTOFF", "0"))
RUN = re.compile(r'^(run|browser|scenes|check|ui-scenes|render|profile)-[0-9A-Za-z]+$|^fairy-idle-audio-\d+$')
dest_root = 'temp_work/scene-output/earlier-runs'
out = subprocess.run(['git', 'status', '--porcelain', '-z', 'temp_work'], capture_output=True, text=True).stdout
entries = [e[3:] for e in out.split('\0') if e.startswith('?? ')]
dry = '--dry' in sys.argv
moved = []
def candidates(entry):
    entry = entry.rstrip('/')
    if RUN.match(os.path.basename(entry)) and os.path.isdir(entry):
        yield entry
    elif os.path.isdir(entry) and entry.count('/') == 1 and (entry.endswith('-scenes') or entry.startswith('temp_work/web-cache-20')):
        for child in sorted(os.listdir(entry)):
            if RUN.match(child): yield os.path.join(entry, child)
    elif entry.endswith(('unit-fixtures', 'server-tests', 'android-asset-tests')) and os.path.isdir(entry):
        for child in sorted(os.listdir(entry)):
            if RUN.match(child): yield os.path.join(entry, child)
# Never move this review's own research, and keep run folders that docs cite.
def cited(path):
    name = os.path.basename(path)
    return subprocess.run(['grep', '-rqF', name, 'docs', 'README.md'], capture_output=True).returncode == 0
for entry in entries:
    if entry.startswith('temp_work/claude-native-parity'): continue
    for path in candidates(entry):
        if cited(path): continue
        if subprocess.run(['git', 'ls-files', '--error-unmatch', path], capture_output=True).returncode == 0:
            continue
        if os.path.getmtime(path) < CUTOFF: continue
        target = os.path.join(dest_root, path)
        moved.append((path, target))
        if not dry:
            os.makedirs(os.path.dirname(target), exist_ok=True)
            shutil.move(path, target)
for parent in sorted({os.path.dirname(p) for p, _ in moved}, key=len, reverse=True):
    if not dry and os.path.isdir(parent) and not os.listdir(parent): os.rmdir(parent)
print(len(moved), 'moved' if not dry else 'would move')
for p, _ in moved: print(p)
