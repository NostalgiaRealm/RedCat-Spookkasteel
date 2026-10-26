#!/usr/bin/env python3
"""Verify Android release signatures, manifest and bundled source without launching it."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import xml.etree.ElementTree as ET
import zipfile

root = Path(__file__).resolve().parent.parent
parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--bundletool', required=True, type=Path)
parser.add_argument('--output', type=Path, default=root / 'temp_work/android-release-verification')
args = parser.parse_args()
args.output.mkdir(parents=True, exist_ok=True)
version = json.loads((root / 'package.json').read_text())['version']
release = root / 'dist/android' / version
prefix = f'RedCat-Spookkasteel-{version}-android'
aab, apk = (release / (prefix + suffix) for suffix in ('.aab', '.apk'))
sdk = Path(os.environ.get('ANDROID_HOME', Path.home() / 'Android/Sdk'))
java_home = os.environ.get('JAVA_HOME')
java = str(Path(java_home) / 'bin/java') if java_home else 'java'
jarsigner = str(Path(java_home) / 'bin/jarsigner') if java_home else 'jarsigner'
build_tools = sdk / 'build-tools/36.0.0'
checks = []
def run(name, command):
    result = subprocess.run([str(v) for v in command], text=True, capture_output=True)
    (args.output / (name + '.txt')).write_text(result.stdout + result.stderr)
    if result.returncode:
        raise RuntimeError(f'{name} failed; see {args.output / (name + ".txt")}')
    checks.append(name)
    return result.stdout

run('bundle-structure', [java, '-jar', args.bundletool, 'validate', f'--bundle={aab}'])
aab_signature = run('aab-signature', [jarsigner, '-verify', str(aab)])
assert 'jar verified.' in aab_signature, 'AAB is not signed'
apk_signature = run('apk-signature', [build_tools / 'apksigner', 'verify', '--verbose', '--print-certs', apk])
assert 'CN=Android Debug' not in apk_signature, 'Release uses the debug key'
run('apk-alignment', [build_tools / 'zipalign', '-c', '-P', '16', '-v', '4', apk])
xml = run('bundle-manifest', [java, '-jar', args.bundletool, 'dump', 'manifest', f'--bundle={aab}', '--module=base'])
manifest = ET.fromstring(xml)
a = '{http://schemas.android.com/apk/res/android}'
uses_sdk = manifest.find('uses-sdk')
application = manifest.find('application')
permissions = [v.attrib[a+'name'] for v in manifest.findall('uses-permission')]
assert manifest.attrib['package'] == 'com.nostalgiarealm.redcatspookkasteel'
assert manifest.attrib[a+'versionName'] == version
assert uses_sdk.attrib[a+'minSdkVersion'] == '29'
assert uses_sdk.attrib[a+'targetSdkVersion'] == '36'
assert application.attrib.get(a+'debuggable', 'false') == 'false'
assert application.attrib.get(a+'usesCleartextTraffic') == 'false'
assert application.attrib.get(a+'allowBackup') == 'false'
assert 'android.permission.INTERNET' not in permissions
assert not any(p in permissions for p in ['android.permission.READ_EXTERNAL_STORAGE', 'android.permission.WRITE_EXTERNAL_STORAGE', 'android.permission.MANAGE_EXTERNAL_STORAGE'])
checks.append('release-manifest-policy')

staged = root / 'android/app/build/generated/gameAssets'
asset_bytes = (staged / 'asset-manifest.json').read_bytes()
assets = json.loads(asset_bytes)
assert assets['packageVersion'] == version
entries = {e['path']: e for e in assets['files']}
assert len(entries) == assets['fileCount']
for p, e in entries.items():
    assert hashlib.sha256((root / p).read_bytes()).hexdigest() == e['sha256'], f'Stale source snapshot: {p}'
    assert hashlib.sha256((staged / 'www' / p).read_bytes()).hexdigest() == e['sha256'], f'Stale staged file: {p}'
for directory in assets['roots']:
    item = root / directory
    for file in ([item] if item.is_file() else item.rglob('*')):
        if file.is_file():
            assert file.relative_to(root).as_posix() in entries, f'Unlisted runtime source: {file}'
package_records = []
for package, asset_prefix in [(aab, 'base/assets/'), (apk, 'assets/')]:
    with zipfile.ZipFile(package) as archive:
        names = archive.namelist()
        assert not any(name.endswith('.so') for name in names), 'Recheck native ABI/page-size requirements'
        assert not any(name.lower().endswith(('.jks', '.keystore', '.p12')) for name in names)
        assert not any('.redcat-android-assets.json' in name for name in names), 'Local ownership marker must not ship'
        assert archive.read(asset_prefix + 'asset-manifest.json') == asset_bytes
        actual = {n[len(asset_prefix+'www/'):] for n in names if n.startswith(asset_prefix+'www/') and not n.endswith('/')}
        assert actual == set(entries), f'Runtime inventory mismatch in {package.name}'
        for relative, entry in entries.items():
            item = archive.getinfo(asset_prefix+'www/'+relative)
            assert hashlib.sha256(archive.read(item)).hexdigest() == entry['sha256'], f'Packaged hash mismatch: {relative}'
            # APK media must support bounded seekable AssetFileDescriptor streams.
            if package == apk and Path(relative).suffix.lower() in ('.wav', '.webm', '.mp4', '.ogg', '.bin'):
                assert item.compress_type == zipfile.ZIP_STORED, f'Compressed range media: {relative}'
    package_records.append({'file':package.name,'bytes':package.stat().st_size,'sha256':hashlib.file_digest(package.open('rb'),'sha256').hexdigest()})
checks.append('all-source-staged-aab-apk-runtime-bytes-match')
result = {'version':version,'versionCode':int(manifest.attrib[a+'versionCode']), 'applicationId':manifest.attrib['package'], 'minSdk':29,'targetSdk':36,'permissions':permissions,'debuggable':False,'nativeLibraries':0,'runtimeFiles':assets['fileCount'],'runtimeBytes':assets['totalBytes'],'runtimeContentSha256':assets['contentSha256'],'checks':checks,'artifacts':package_records,'releaseRuntimeTested':False,'scope':'Build structure, signatures, alignment, manifest, and complete packaged current-source byte equality. Runtime validation uses the separate debug APK; no physical-device or Play approval claim.'}
(args.output / 'release-verification.json').write_text(json.dumps(result,indent=2)+'\n')
print(json.dumps(result,indent=2))
