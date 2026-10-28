"""Build and archive 1.0.4. No tests, artifact inspections or build checks."""
from pathlib import Path
import hashlib
import json
import os
import shutil
import subprocess
import time

root = Path(__file__).resolve().parents[2]
work = Path(__file__).resolve().parent
version = '1.0.4'
archives = root / 'dist' / ('release-' + version)
output = root / 'dist' / ('build-' + version)
archives.mkdir(parents=True, exist_ok=False)
output.mkdir(parents=True, exist_ok=False)
temp = work / 'build-temp'
temp.mkdir(exist_ok=True)
commit = subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=root, text=True).strip()
env = {**os.environ, 'TMPDIR': str(temp), 'REDCAT_PACKAGE_VERSION': version,
       'CSC_IDENTITY_AUTO_DISCOVERY': 'false'}
targets = [
    ('linux-x64', 'linux-unpacked', '--linux', '--x64'),
    ('windows-x64', 'win-unpacked', '--win', '--x64'),
    ('linux-arm64', 'linux-arm64-unpacked', '--linux', '--arm64'),
    ('windows-arm64', 'win-arm64-unpacked', '--win', '--arm64'),
    ('mac-x64', 'mac', '--mac', '--x64'),
    ('mac-arm64', 'mac-arm64', '--mac', '--arm64'),
]
results = []
for platform, folder, flag, arch in targets:
    command = ['npx', '--no-install', 'electron-builder', flag, 'dir', arch,
               '--publish', 'never', f'-c.extraMetadata.version={version}',
               f'-c.directories.output={output}']
    if flag == '--mac':
        command.append('-c.mac.notarize=false')
    print('Building ' + platform, flush=True)
    started = time.time()
    with (work / f'build-{platform}.log').open('w') as log:
        result = subprocess.run(command, cwd=root, env=env, stdout=log, stderr=subprocess.STDOUT)
    results.append({'target': platform, 'command': command, 'exitCode': result.returncode,
                    'seconds': round(time.time() - started, 2)})
    (work / 'build-results.json').write_text(json.dumps(results, indent=2) + '\n')
    if result.returncode:
        raise SystemExit(f'{platform} build failed; see retained log.')
    name = f'RedCat-Spookkasteel-{version}-{platform}.zip'
    subprocess.run(['zip', '-qry', str(archives / name), folder + '/'], cwd=output, check=True)
    print('Built and archived ' + platform, flush=True)

print('Building signed Android APK and AAB', flush=True)
jdk = root / 'temp_work/android-initial-2026-10-06/toolchain/jdk-21.0.12.1+1'
android_env = {**env, 'ANDROID_HOME': '/home/rick/Android/Sdk', 'JAVA_HOME': str(jdk),
               'PATH': str(jdk / 'bin') + os.pathsep + env['PATH'],
               'REDCAT_ANDROID_SIGNING_PROPERTIES': '/home/rick/.local/share/redcat-spookkasteel/android-signing/signing.properties'}
started = time.time()
with (work / 'build-android.log').open('w') as log:
    result = subprocess.run(['npm', 'run', 'build:android'], cwd=root, env=android_env,
                            stdout=log, stderr=subprocess.STDOUT)
results.append({'target': 'android-apk-aab', 'command': ['npm', 'run', 'build:android'],
                'exitCode': result.returncode, 'seconds': round(time.time() - started, 2)})
(work / 'build-results.json').write_text(json.dumps(results, indent=2) + '\n')
if result.returncode:
    raise SystemExit('Android build failed; see retained log.')
for ext in ['apk', 'aab']:
    name = f'RedCat-Spookkasteel-{version}-android.{ext}'
    shutil.copy2(root / 'dist/android' / version / name, archives / name)
for path in (work / 'decompiled-artifacts').iterdir():
    shutil.copy2(path, archives / path.name)

entries = []
for path in sorted(archives.iterdir()):
    with path.open('rb') as stream:
        digest = hashlib.file_digest(stream, 'sha256').hexdigest()
    entries.append({'name': path.name, 'bytes': path.stat().st_size, 'sha256': digest})
(archives / 'SHA256SUMS.txt').write_text(''.join(f"{x['sha256']}  {x['name']}\n" for x in entries))
(work / 'archives.json').write_text(json.dumps(entries, indent=2) + '\n')
(work / 'release-record.json').write_text(json.dumps({
    'version': version, 'commit': commit, 'builds': results, 'artifacts': entries,
    'testsRun': False, 'buildChecksRun': False, 'packagesLaunched': False,
    'scope': 'Build, archive, generate checksums, publish; no tests or artifact verification.'
}, indent=2) + '\n')
print('All builds and archives completed. No tests or build checks executed.', flush=True)
