from pathlib import Path
import hashlib
import json
import plistlib
import subprocess
import zipfile

root = Path(__file__).resolve().parents[2]
out = Path(__file__).resolve().parent
dist = root / 'dist'
reports = []
for platform, folder in [
    ('linux-x64', 'linux-unpacked'), ('linux-arm64', 'linux-arm64-unpacked'),
    ('windows-x64', 'win-unpacked'), ('windows-arm64', 'win-arm64-unpacked'),
    ('mac-x64', 'mac'), ('mac-arm64', 'mac-arm64'),
]:
    name = f'RedCat-Spookkasteel-1.0.0-{platform}.zip'
    target = dist / name
    assert not target.exists(), name
    if platform.startswith('mac-'):
        with (dist / folder / 'RedCat Spookkasteel.app/Contents/Info.plist').open('rb') as source:
            info = plistlib.load(source)
        assert info['CFBundleShortVersionString'] == '1.0.0'
        assert info['CFBundleVersion'] == '1.0.0'
    subprocess.run(['zip', '-qry', name, folder + '/'], cwd=dist, check=True)
    subprocess.run(['unzip', '-tqq', name], cwd=dist, check=True)
    with zipfile.ZipFile(target) as archive:
        entries = archive.infolist()
        assert entries and all(item.filename.startswith(folder + '/') for item in entries)
        links = [item.filename for item in entries if (item.external_attr >> 16) & 0o170000 == 0o120000]
        if platform.startswith('mac-'):
            assert links, 'macOS framework symlinks must survive ZIP packaging'
    with target.open('rb') as source:
        digest = hashlib.file_digest(source, 'sha256').hexdigest()
    reports.append({'name':name, 'bytes':target.stat().st_size, 'sha256':digest,
                    'entries':len(entries), 'symlinks':len(links), 'zipIntegrity':'passed'})
    print(f'Verified {name}: {digest}', flush=True)
with (dist / 'SHA256SUMS.txt').open('w') as checksums:
    for report in reports:
        checksums.write(f"{report['sha256']}  {report['name']}\n")
(out / 'archive-verification.json').write_text(json.dumps(reports, indent=2) + '\n')
