"""Check this documentation-only pass against retained baselines; no game tests."""
from pathlib import Path
from urllib.parse import unquote, urlsplit
import difflib
import json
import re

task = Path(__file__).resolve().parent
root = task.parent.parent
before = task / 'before'
changed = []
patches = []
errors = []
checked = 0

def slugs(text):
    result = set()
    counts = {}
    for heading in re.findall(r'^#{1,6}\s+(.+?)\s*#*$', text, re.M):
        heading = re.sub(r'<[^>]+>', '', heading).lower()
        slug = re.sub(r'[^\w\- ]', '', heading).replace(' ', '-')
        count = counts.get(slug, 0)
        counts[slug] = count + 1
        result.add(slug if not count else f'{slug}-{count}')
    return result

for old in sorted(before.rglob('*.md')):
    relative = old.relative_to(before)
    path = root / relative
    if not path.exists():
        errors.append(f'Missing edited document: {relative}')
        continue
    old_text = old.read_text()
    text = path.read_text()
    if text == old_text:
        continue
    changed.append(str(relative))
    patches.extend(difflib.unified_diff(old_text.splitlines(True), text.splitlines(True),
        fromfile='before/' + str(relative), tofile=str(relative)))
    # Only Markdown links in prose; leave original evidence paths/code as recorded.
    prose = re.sub(r'^```[^\n]*\n.*?^```\s*$', '', text, flags=re.M | re.S)
    for match in re.finditer(r'\[[^\]\n]+\]\(([^)\n]+)\)', prose):
        link = match.group(1).strip().strip('<>')
        url = urlsplit(link)
        if url.scheme or url.netloc or 'RCSPOOK_WEBSITE' in link:
            continue
        target = path.parent / unquote(url.path) if url.path else path
        checked += 1
        if not target.exists():
            errors.append(f'{relative}: missing link {link}')
        elif url.fragment and target.suffix == '.md' and unquote(url.fragment) not in slugs(target.read_text()):
            errors.append(f'{relative}: missing heading {link}')

(task / 'documentation-review.diff').write_text(''.join(patches))
report = {'changedDocuments': changed, 'checkedLocalLinks': checked, 'errors': errors,
          'gameplayTestsRun': False, 'buildsCreated': False}
(task / 'documentation-checks.json').write_text(json.dumps(report, indent=2) + '\n')
print(json.dumps(report, indent=2))
raise SystemExit(bool(errors))
