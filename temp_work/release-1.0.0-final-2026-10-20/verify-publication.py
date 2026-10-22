from pathlib import Path
import argparse
import hashlib
import json
import subprocess
from datetime import datetime, timezone
from urllib.parse import unquote

root = Path(__file__).resolve().parents[2]
out = Path(__file__).resolve().parent
parser = argparse.ArgumentParser()
parser.add_argument('host', choices=['github', 'gitlab'])
parser.add_argument('--draft', action='store_true')
args = parser.parse_args()

def run(command):
    return subprocess.check_output(command, cwd=root, text=True).strip()

def api(command):
    return json.loads(run(command))

expected = {
    item['name']: {'bytes': item['bytes'], 'sha256': item['sha256']}
    for item in json.loads((out / 'archive-verification.json').read_text())
}
checksums = (root / 'dist/SHA256SUMS.txt').read_bytes()
expected['SHA256SUMS.txt'] = {
    'bytes': len(checksums), 'sha256': hashlib.sha256(checksums).hexdigest()
}
commit = run(['git', 'rev-parse', 'HEAD'])
assert run(['git', 'rev-parse', 'v1.0.0^{}']) == commit
assert not run(['git', 'diff', '--name-only'])
assert not run(['git', 'diff', '--cached', '--name-only'])

if args.host == 'github':
    prefix = 'repos/NostalgiaRealm/RedCat-Spookkasteel'
    if args.draft:
        matches = [r for r in api(['gh', 'api', f'{prefix}/releases?per_page=100'])
                   if r['tag_name'] == 'v1.0.0']
        assert len(matches) == 1
        release = matches[0]
    else:
        release = api(['gh', 'api', f'{prefix}/releases/tags/v1.0.0'])
    assert release['draft'] == args.draft
    assert not release['prerelease']
    assert release['name'] == 'RedCat Spookkasteel 1.0.0'
    assert release['body'].strip() == (out / 'github-release-notes.md').read_text().strip()
    tag = api(['gh', 'api', f'{prefix}/git/ref/tags/v1.0.0'])['object']
    if tag['type'] == 'tag':
        tag = api(['gh', 'api', f"{prefix}/git/tags/{tag['sha']}"])['object']
    assert tag['sha'] == commit
    files = {item['name']: item for item in release['assets']}
    assert files.keys() == expected.keys(), (files.keys(), expected.keys())
    for name, item in expected.items():
        assert files[name]['state'] == 'uploaded', name
        assert files[name]['size'] == item['bytes'], name
        assert files[name]['digest'] == 'sha256:' + item['sha256'], name
    details = {'releaseId': release['id'], 'draft': release['draft'],
               'url': release['html_url'], 'assets': [
                   {'name': name, **expected[name], 'url': item['browser_download_url']}
                   for name, item in files.items()
               ]}
else:
    prefix = 'projects/87079727'
    release = api(['glab', 'api', f'{prefix}/releases/v1.0.0'])
    assert not release['upcoming_release']
    assert release['name'] == 'RedCat Spookkasteel 1.0.0'
    assert release['commit']['id'] == commit
    assert release['description'].strip() == (out / 'gitlab-release-notes.md').read_text().strip()
    links = {item['name']: item for item in release['assets']['links']}
    assert links.keys() == expected.keys(), (links.keys(), expected.keys())
    packages = api(['glab', 'api', f'{prefix}/packages?package_name=redcat-spookkasteel&package_version=v1.0.0&per_page=100'])
    packages = [p for p in packages if p['name'] == 'redcat-spookkasteel'
                and p['version'] == 'v1.0.0' and p['package_type'] == 'generic']
    assert len(packages) == 1, packages
    package = packages[0]
    files = api(['glab', 'api', f"{prefix}/packages/{package['id']}/package_files?per_page=100"])
    assert len(files) == len(expected), 'unexpected duplicate or missing registry files'
    files = {item['file_name']: item for item in files}
    assert files.keys() == expected.keys()
    for name, item in expected.items():
        assert files[name]['size'] == item['bytes'], name
        assert files[name]['file_sha256'] == item['sha256'], name
        assert unquote(links[name]['url']).endswith('/redcat-spookkasteel/v1.0.0/' + name), name
    details = {'packageId': package['id'],
               'url': release['_links']['self'],
               'assets': [{'name': name, **expected[name], 'url': item['url']}
                          for name, item in links.items()]}

report = {
    'host': args.host, 'tag': 'v1.0.0', 'commit': commit,
    'verifiedAt': datetime.now(timezone.utc).isoformat(),
    'allSevenUploadedDigestsMatch': True, 'notesMatch': True, **details
}
suffix = '-draft' if args.draft else ''
(out / f'{args.host}-publication-verification{suffix}.json').write_text(
    json.dumps(report, indent=2) + '\n')
print(json.dumps({k: v for k, v in report.items() if k != 'assets'}, indent=2))
