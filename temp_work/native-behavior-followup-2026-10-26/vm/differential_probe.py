#!/usr/bin/env python3
"""Compare bounded native kernel probes to the actual JavaScript evaluator."""
import json
import random
import subprocess
from native_vm_probe import Native, OUT, SHA256

n = Native()
rng = random.Random(20261026)
cases = []
def unary(operator, kind, value, result):
    cases.append({'operator': operator, 'operand': {'type': kind, 'value': value}, 'native': result})
for _ in range(1000):
    value = rng.uniform(-9.9, 9.9) * 10 ** rng.randint(-300, 300)
    unary(4, 1, value, {'type': 3, 'value': n.format(value)})
for _ in range(200):
    value = rng.choice(['', '-', '+', '\t ']) + ''.join(str(rng.randrange(10)) for _ in range(rng.randint(1, 70))) + rng.choice(['', 'x', '\0'])
    unary(6, 3, value, {'type': 2, 'value': n.integer(value)})
for kind, pairs in [(2, [(12, 5), (-12, 5), (12, -5), (0, 1), (1234567, 1234), (-2147483648, 2)]), (1, [(12.25, 5.125), (-12.25, 5.125), (1e10, 3.), (.25, -.75), (0., 1.)])]:
    for a, b in pairs:
        for operator in [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 15]:
            cases.append({'operator': operator, 'left': {'type': kind, 'value': a}, 'right': {'type': kind, 'value': b}, 'native': n.binary(operator, kind, a, b)})
js = "import { daviUnary, daviBinary } from './src/davi-vm.js'; let s=''; for await(const c of process.stdin)s+=c; console.log(JSON.stringify(JSON.parse(s).map(c=>c.operand?daviUnary(c.operator,c.operand):daviBinary(c.operator,c.left,c.right))));"
portable = json.loads(subprocess.check_output(['node', '--input-type=module', '-e', js], input=json.dumps(cases).encode(), cwd=OUT.parents[2]))
differences = [{**c, 'portable': p} for c, p in zip(cases, portable) if c['native'] != p]
result = {'sha256': SHA256, 'cases': len(cases), 'mismatches': len(differences), 'differences': differences, 'scope': 'Isolated shipped CRT and BINOP machine-code execution. Not a native campaign run. Floating operations compared numerically for these bounded inputs only.'}
(OUT / 'differential-probe.json').write_text(json.dumps(result, indent=2) + '\n')
(OUT / 'native-kernel-cases.json').write_text(json.dumps(cases, indent=2) + '\n')
print(json.dumps(result, indent=2))
