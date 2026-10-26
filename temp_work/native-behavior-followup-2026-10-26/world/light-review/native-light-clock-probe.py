"""Execute original CAdamLight Tick and step-interpolator machine code.
Engine cell processing, scene-light dirty upload and actor deletion are hooked;
timer, pattern sample, modulo advance and all native float math run unchanged.
"""
import sys,struct,json
from pathlib import Path
here=Path(__file__).resolve().parent
sys.path.insert(0,str(here.parent.parent/'vm'))
from native_vm_probe import Native,SHA256
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EAX,UC_X86_REG_EIP,UC_X86_REG_ECX
n=Native();u=n.uc;obj=0x2030000;interp=0x2031000;pattern=0x2032000;removed=False
rd=lambda p:struct.unpack('<I',u.mem_read(p,4))[0]
rf=lambda p:struct.unpack('<f',u.mem_read(p,4))[0]
wf=lambda p,v:u.mem_write(p,struct.pack('<f',v))
wi=lambda p,v:u.mem_write(p,struct.pack('<I',v&0xffffffff))
def hook(uc,pc,size,_):
 global removed
 argc=0
 if pc==0x4ad310:argc=3
 elif pc==0x4e2d60:argc=1;wf(obj+0x160,rf(uc.reg_read(UC_X86_REG_ESP)+4))
 elif pc==0x4e4440:pass
 elif pc==0x502220:removed=True
 else:return
 sp=uc.reg_read(UC_X86_REG_ESP)
 uc.reg_write(UC_X86_REG_EAX,0);uc.reg_write(UC_X86_REG_EIP,rd(sp));uc.reg_write(UC_X86_REG_ESP,sp+4+argc*4)
u.hook_add(UC_HOOK_CODE,hook)
def reset(maximum):
 global removed
 removed=False;u.mem_write(obj,b'\0'*0x300);u.mem_write(interp,b'\0'*0x100)
 wi(obj+0x164,1000);wi(obj+0x168,-1);wi(obj+0x174,-1);wi(obj+0x184,interp)
 wf(obj+0x18c,0);wf(obj+0x190,maximum);wf(obj+0x160,maximum)
 wi(interp,0x64f894);wi(interp+0x18,pattern);wi(interp+0x1c,10)
 wi(interp+0x24,1000);wi(interp+0x28,100);wi(interp+0x30,10)
 u.mem_write(pattern,b'pszzzspmea\0')
def run(maximum,times):
 reset(maximum);rows=[];previous=0
 for now in times:
  dt=now-previous;before=rd(interp+0x2c)
  n.call(0x4e2590,[now,dt],ecx=obj)
  rows.append({'nowMs':now,'dtMs':dt,'phaseBefore':before,'phaseAfter':rd(interp+0x2c),'radius':rf(obj+0x160),'lifeEndMs':rd(obj+0x168),'alive':not removed})
  previous=now
 return {'maximum':maximum,'ticks':rows}
scenarios=[run(200,[int(i*1000/60+1e-7) for i in range(1,64)]),run(99,[16,100,101,999,1016,1017]),run(180,[100,200,1000,1100,1101])]
report={'sha256':SHA256,'scope':__doc__,'addresses':['0x4e2590','0x569050','0x568e00','0x569480','0x5690f0','0x569bf0'],'scenarios':scenarios,'instructionsVisited':len(n.visited)}
(here/'native-light-clock-probe.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
