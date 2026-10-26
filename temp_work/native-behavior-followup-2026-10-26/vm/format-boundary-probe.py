#!/usr/bin/env python3
"""Compare the shipped formatter at six-digit rounding/notation boundaries."""
import json, math, subprocess
from native_vm_probe import Native, OUT, SHA256

n = Native()
values = []
for centre in [1.234565, 1.234575, 9.999995, 99.99995, 999.9995,
               9999.995, 99999.95, 999999.5, .00009999995, .000009999995,
               123456.5, 123457.5, 100000.5, 100001.5]:
    for value in [math.nextafter(centre, -math.inf), centre,
                  math.nextafter(centre, math.inf)]:
        values.extend([value, -value])
values += [5e-324, -5e-324, 2.2250738585072014e-308,
           1.7976931348623157e308, -0.0, 0.0]
cases = [{'value': value, 'native': n.format(value)} for value in values]
js = "import {daviUnary} from './src/davi-vm.js';let s='';for await(const c of process.stdin)s+=c;console.log(JSON.stringify(JSON.parse(s).map(value=>daviUnary(4,{type:1,value}).value)));"
portable = json.loads(subprocess.check_output(['node', '--input-type=module', '-e', js],
    input=json.dumps(values).encode(), cwd=OUT.parents[2]))
differences = [{**case, 'portable': value} for case, value in zip(cases, portable)
               if case['native'] != value]
report = {'sha256': SHA256, 'cases': cases, 'mismatches': len(differences),
          'differences': differences,
          'scope': 'Shipped formatter machine code; half-way rounding, notation boundaries and binary64 extremes.'}
(OUT/'format-boundary-probe.json').write_text(json.dumps(report, indent=2)+'\n')
print(json.dumps({'cases': len(cases), 'mismatches': len(differences),
                  'differences': differences}, indent=2))
