"""Run the original button Tick bytes with bounded engine dependency hooks.

Only sound/script callbacks, proximity and collision transforms are substituted.
The original FSM instructions, bounds, counters and time arithmetic execute.
This is a controller-unit trace, not a native game/renderer/collision test.
"""
import sys,struct,json
from pathlib import Path
here=Path(__file__).resolve().parent
sys.path.insert(0,str(here.parent/'vm'))
from native_vm_probe import Native,SHA256
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EAX,UC_X86_REG_EIP,UC_X86_REG_ECX
n=Native();u=n.uc;obj=0x2030000;definition=0x2031000;events=[];blocked=False
rd=lambda p:struct.unpack('<I',u.mem_read(p,4))[0]
wf=lambda p,v:u.mem_write(p,struct.pack('<f',v))
wi=lambda p,v:u.mem_write(p,struct.pack('<I',v&0xffffffff))
wi(obj+0x168,1);wi(obj+0x174,definition);wi(definition+0x30,-1);wf(obj+0x13c,2);wf(obj+0x140,0);wf(obj+0x100,0)
def hook(uc,pc,size,_):
 global blocked
 sp=uc.reg_read(UC_X86_REG_ESP)
 if pc not in (0x4d14f0,0x502480,0x4cb180,0x4cb130,0x4cad50):return
 argc=0;result=0
 if pc==0x4d14f0:argc=1
 elif pc==0x4cb180:events.append('sound')
 elif pc==0x4cb130:
  on,before=rd(sp+4),rd(sp+8);argc=2
  events.append(('Before' if before else 'After')+('On' if on else 'Off')+':phase'+str(rd(obj+0x168)))
 elif pc==0x4cad50:
  argc=2;value=struct.unpack('<f',u.mem_read(sp+4,4))[0]
  result=int(not(blocked and value>1))
  if result:wf(obj+0x100,value)
 uc.reg_write(UC_X86_REG_EAX,result);uc.reg_write(UC_X86_REG_EIP,rd(sp));uc.reg_write(UC_X86_REG_ESP,sp+4+argc*4)
u.hook_add(UC_HOOK_CODE,hook)
rows=[]
def step(ms,request=False):
 if request:u.mem_write(obj+0x16c,b'\1')
 events.clear();n.call(0x4cb420,[0,ms],ecx=obj)
 rows.append({'dtMs':ms,'request':request,'phase':rd(obj+0x168),'time':struct.unpack('<f',u.mem_read(obj+0x100,4))[0],'count':rd(obj+0x17c),'pending':u.mem_read(obj+0x16c,1)[0],'events':list(events)})
# A queued opposite request during movement must not prevent AfterOn.
for ms,request in [(100,True),(100,False),(500,True),(500,False),(500,False),(500,False),(100,False),(100,False),(100,False),(500,False),(500,False),(500,False),(500,False),(100,False),(100,False),(100,False)]:step(ms,request)
report={'sha256':SHA256,'scope':__doc__,'ticks':rows}
(here/'native-button-fsm-probe.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
