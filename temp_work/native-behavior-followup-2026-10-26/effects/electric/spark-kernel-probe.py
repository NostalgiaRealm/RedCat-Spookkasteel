"""Isolated original Spark::Move bytes; no native game/audio/render execution."""
import sys,struct,json,subprocess
from pathlib import Path
here=Path(__file__).resolve().parent
sys.path.insert(0,str(here.parents[1]/'vm'))
from native_vm_probe import Native,SHA256
n=Native();base=0x2009000;cases=[]
for velocity in [[60,0,0],[0,60,0],[0,-60,0],[30,40,-20]]:
 for steps in [1,3,4,20]:
  n.uc.mem_write(base,b'\0'*0x184)
  for offset,values in [(0x128,[10,20,30]),(0x134,[10,20,30]),(0x140,velocity),(0x14c,velocity)]:n.uc.mem_write(base+offset,struct.pack('<3f',*values))
  n.uc.mem_write(base+0x164,struct.pack('<f',1.5));n.uc.mem_write(base+0x180,struct.pack('<f',1.92))
  for i in range(steps):n.call(0x4e4bc0,[struct.unpack('<I',struct.pack('<f',1/60))[0]],ecx=base)
  read=lambda offset:list(struct.unpack('<3f',n.uc.mem_read(base+offset,12)))
  cases.append(dict(velocity=velocity,steps=steps,native=dict(head=read(0x128),tail=read(0x134),velocity=read(0x140),tailVelocity=read(0x14c),tailMoving=bool(n.uc.mem_read(base+0x158,1)[0]))))
js="""import {stepElectricSpark} from './src/electric-explosion-native.js';let s='';for await(const c of process.stdin)s+=c;console.log(JSON.stringify(JSON.parse(s).map(c=>{const p={head:[10,20,30],tail:[10,20,30],velocity:[...c.velocity],tailVelocity:[...c.velocity],tailMoving:false};for(let i=0;i<c.steps;i++)stepElectricSpark(p,1/60);return p;})));"""
portable=json.loads(subprocess.check_output(['node','--input-type=module','-e',js],input=json.dumps(cases).encode(),cwd=here.parents[3]))
errors=[]
for c,p in zip(cases,portable):
 c['portable']=p
 error=max(abs(a-b) for k in ['head','tail','velocity','tailVelocity'] for a,b in zip(c['native'][k],p[k]))
 c['maxFloatDifference']=error
 if error>5e-5 or c['native']['tailMoving']!=p['tailMoving']:errors.append(c)
result=dict(sha256=SHA256,address='0x004e4bc0',cases=cases,mismatches=errors,scope='16 bounded original-byte movement trajectories; float tolerance5e-5. Renderer and full Windows game not executed.')
(here/'spark-kernel-probe.json').write_text(json.dumps(result,indent=2)+'\n')
print(json.dumps(dict(cases=len(cases),mismatches=len(errors),maxFloatDifference=max(c['maxFloatDifference'] for c in cases)),indent=2))
