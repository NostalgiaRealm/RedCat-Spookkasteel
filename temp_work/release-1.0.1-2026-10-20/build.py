"""Replace the six stale release outputs, retaining logs and input evidence."""
from pathlib import Path
import hashlib
import json
import os
import shutil
import subprocess
import time

root = Path(__file__).resolve().parents[2]
out = Path(__file__).resolve().parent
dist = root / 'dist'
tmp = out / 'build-temp'
tmp.mkdir(parents=True, exist_ok=True)
env = {**os.environ, 'TMPDIR': str(tmp), 'REDCAT_PACKAGE_VERSION': '1.0.1'}
targets = [
    ('linux-x64', 'linux-unpacked', ['npm', 'run', 'build:linux']),
    ('windows-x64', 'win-unpacked', ['npm', 'run', 'build:windows']),
    ('linux-arm64', 'linux-arm64-unpacked', ['npx', '--no-install', 'electron-builder', '--linux', 'dir', '--arm64', '--publish', 'never', '-c.extraMetadata.version=1.0.1']),
    ('windows-arm64', 'win-arm64-unpacked', ['npx', '--no-install', 'electron-builder', '--win', 'dir', '--arm64', '--publish', 'never', '-c.extraMetadata.version=1.0.1']),
    ('mac-x64', 'mac', ['npx', '--no-install', 'electron-builder', '--mac', 'dir', '--x64', '--publish', 'never', '-c.extraMetadata.version=1.0.1', '-c.mac.notarize=false']),
    ('mac-arm64', 'mac-arm64', ['npx', '--no-install', 'electron-builder', '--mac', 'dir', '--arm64', '--publish', 'never', '-c.extraMetadata.version=1.0.1', '-c.mac.notarize=false']),
]
assert dist.is_dir() and not dist.is_symlink()
subprocess.run(['npm', 'run', 'web:refresh'], cwd=root, env=env, check=True)
assert not any(dist.iterdir()), 'Use a fresh dist folder for this release'
results = []
for platform, folder, command in targets:
    print(f'Building {platform}', flush=True)
    started = time.time()
    with (out / f'build-{platform}.log').open('w') as log:
        result = subprocess.run(command, cwd=root, env=env, stdout=log, stderr=subprocess.STDOUT)
    results.append({'platform': platform, 'folder': folder, 'command': command,
                    'exitCode': result.returncode, 'seconds': round(time.time()-started, 2)})
    (out / 'build-results.json').write_text(json.dumps(results, indent=2) + '\n')
    if result.returncode:
        raise SystemExit(f'{platform} failed; see build-{platform}.log')
    print(f'Built {platform} successfully', flush=True)
