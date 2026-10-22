from pathlib import Path
from concurrent.futures import ThreadPoolExecutor
from urllib.request import Request, urlopen
import hashlib
import json

out = Path(__file__).resolve().parent
releases = [json.loads((out / f'{host}-publication-verification.json').read_text())
            for host in ['github', 'gitlab']]
tasks = [(r['host'], a) for r in releases for a in r['assets']]

def check(task):
    host, item = task
    method = 'GET' if item['name'] == 'SHA256SUMS.txt' else 'HEAD'
    request = Request(item['url'], method=method, headers={'User-Agent': 'RedCat-release-verification/1.0'})
    with urlopen(request, timeout=60) as response:
        assert response.status == 200, (host, item['name'], response.status)
        length = response.headers.get('Content-Length')
        if length is not None:
            assert int(length) == item['bytes'], (host, item['name'], length)
        if method == 'GET':
            assert hashlib.sha256(response.read()).hexdigest() == item['sha256']
        return {'host':host, 'name':item['name'], 'httpStatus':response.status,
                'unauthenticated':True, 'contentLength':length}

with ThreadPoolExecutor(max_workers=4) as pool:
    results = list(pool.map(check, tasks))
(out / 'public-download-verification.json').write_text(json.dumps(results, indent=2) + '\n')
print(f'All {len(results)} published asset links are accessible without authentication; both checksum downloads match.')
