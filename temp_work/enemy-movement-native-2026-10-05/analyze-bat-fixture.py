"""Read-only comparison of the retained fixture and original authored points."""
from pathlib import Path
import json
import math

HERE = Path(__file__).resolve().parent
ROOT = HERE.parent.parent
level = json.loads((ROOT / 'data/levels/lvl01a/level.json').read_text())
performance = json.loads((HERE / 'perf-after.json').read_text())['batReport']
target = performance['fixture']['target']
points = {e['%name%']: e for e in level['entities']
          if e.get('classname') == 'GrobberPathPoint'}

def xyz(entity):
    return list(map(float, entity['Origin'].split()))

def segment_distance(a, b, p):
    delta = [y-x for x, y in zip(a, b)]
    length2 = sum(x*x for x in delta)
    fraction = (sum((x-y)*d for x, y, d in zip(p, a, delta)) / length2
                if length2 else 0)
    fraction = max(0, min(1, fraction))
    nearest = [x+fraction*d for x, d in zip(a, delta)]
    return {'distance': math.dist(p, nearest), 'fraction': fraction,
            'position': nearest}

nearest_points = sorted(points.values(), key=lambda e: math.dist(xyz(e), target))[:8]
report = {
    'fixture': performance['fixture'],
    'actor': next(e for e in level['entities'] if e.get('%name%') == 'MovingEnemy16'),
    'nearestPointsInEntireLevel': [
        {'id': e['%name%'], 'position': xyz(e), 'distance': math.dist(xyz(e), target)}
        for e in nearest_points],
    'inspectedSegment': {
        'ids': ['GrobberPathPoint61', 'GrobberPathPoint64'],
        **segment_distance(xyz(points['GrobberPathPoint61']),
                           xyz(points['GrobberPathPoint64']), target),
    },
    'nearestObservedPosition': min(
        [{'frame': s['frame'], 'position': s['position'],
          'distance': math.dist(s['position'], target)} for s in performance['samples']],
        key=lambda x: x['distance']),
}
(HERE / 'native-bat-fixture-reachability.json').write_text(json.dumps(report, indent=2)+'\n')
print(json.dumps(report, indent=2))
