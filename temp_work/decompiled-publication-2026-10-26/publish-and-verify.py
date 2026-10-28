from pathlib import Path
import hashlib
import json
import subprocess
from datetime import datetime, timezone

root = Path.cwd()
work = root / 'temp_work/decompiled-publication-2026-10-26'
out = root / 'dist/original-decompiled'
version = '1.0.3'
tag = 'v' + version
prefix = 'projects/87079727'
package_name = 'redcat-original-decompiled'
files = [out / f'RC_ORIGINAL_DECOMPILED-{version}{suffix}' for suffix in ('.tar.gz', '.sha256', '.manifest.json')]

def run(args):
    return subprocess.check_output(args, cwd=root, text=True).strip()

def api(args):
    return json.loads(run(args))

expected = {}
for path in files:
    with path.open('rb') as stream:
        sha = hashlib.file_digest(stream, 'sha256').hexdigest()
    expected[path.name] = {'bytes': path.stat().st_size, 'sha256': sha}

release = api(['glab', 'api', f'{prefix}/releases/{tag}'])
links = {x['name']: x for x in release['assets']['links']}
for path in files:
    endpoint = f'{prefix}/packages/generic/{package_name}/{tag}/{path.name}'
    print('Uploading GitLab:', path.name, flush=True)
    result = api(['glab', 'api', '--method', 'PUT', endpoint, '--input', str(path), '--header', 'Content-Type: application/octet-stream'])
    assert result.get('message') == '201 Created', result
    url = 'https://gitlab.com/api/v4/' + endpoint
    if path.name not in links:
        api(['glab', 'api', '--method', 'POST', f'{prefix}/releases/{tag}/assets/links', '--raw-field', 'name=' + path.name, '--raw-field', 'url=' + url, '--raw-field', 'link_type=other'])

packages = api(['glab', 'api', f'{prefix}/packages?package_name={package_name}&package_version={tag}&per_page=100'])
packages = [p for p in packages if p['name'] == package_name and p['version'] == tag and p['package_type'] == 'generic']
assert len(packages) == 1, packages
package = packages[0]
registry = api(['glab', 'api', f"{prefix}/packages/{package['id']}/package_files?per_page=100"])
registry = {x['file_name']: x for x in registry}
release = api(['glab', 'api', f'{prefix}/releases/{tag}'])
links = {x['name']: x for x in release['assets']['links']}
for name, item in expected.items():
    assert registry[name]['size'] == item['bytes'], name
    assert registry[name]['file_sha256'] == item['sha256'], name
    assert name in links, name

report = {
    'verifiedAt': datetime.now(timezone.utc).isoformat(),
    'version': version,
    'sourceCommit': run(['git', 'rev-parse', 'HEAD']),
    'files': expected,
    'gitlab': {'url': release['_links']['self'], 'packageId': package['id'], 'allThreeHashesMatch': True,
               'links': {name: links[name]['url'] for name in expected}},
}
# GitHub upload runs independently; its final verification is added separately.
(work / 'publication-verification.json').write_text(json.dumps(report, indent=2) + '\n')
print(json.dumps(report, indent=2), flush=True)
