import sys,json,math,subprocess
from pathlib import Path
here=Path(__file__).resolve().parent
sys.path.insert(0,str(here.parents[1]/'vm'))
from native_vm_probe import Native,SHA256
n=Native();cases=[]
for kind,pairs in [(2,[(2,3),(3,2),(-3,3),(-3,2),(3,20),(3,34),(2,31),(2,32),(2,-1),(0,0)]),(1,[(2.,3.),(3.,2.),(.5,-3.),(-3.,3.),(1.5,4.5)])]:
 for a,b in pairs:
  cases.append(dict(operator=16,left=dict(type=kind,value=a),right=dict(type=kind,value=b),native=n.binary(16,kind,a,b)))
for op in [11,12]:
 for a,b in [(0,0),(-7,0),(0,-7),(-7,3)]:cases.append(dict(operator=op,left=dict(type=2,value=a),right=dict(type=2,value=b),native=n.binary(op,2,a,b)))
for op in range(9,21):
 for value in [.25,.75]:cases.append(dict(operator=op,operand=dict(type=1,value=value),native=n.unary_number(op,1,value)))
js="import {daviUnary,daviBinary} from './src/davi-vm.js';let s='';for await(const c of process.stdin)s+=c;console.log(JSON.stringify(JSON.parse(s).map(c=>c.operand?daviUnary(c.operator,c.operand):daviBinary(c.operator,c.left,c.right))));"
portable=json.loads(subprocess.check_output(['node','--input-type=module','-e',js],input=json.dumps(cases).encode(),cwd=here.parents[3]))
differences=[dict(c,portable=p) for c,p in zip(cases,portable) if c['native']!=p]
result=dict(sha256=SHA256,cases=len(cases),differences=differences,scope='Read-only isolated native-byte operator checks: power, logical binary operations, finite interior transcendental inputs. Not a campaign test.')
(here/'review-probe.json').write_text(json.dumps(result,indent=2)+'\n')
print(json.dumps(result,indent=2))
