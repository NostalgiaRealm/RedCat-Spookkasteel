import sys,struct,json
from pathlib import Path
here=Path(__file__).resolve().parent
sys.path.insert(0,str(here.parents[1]/'vm'))
from native_vm_probe import Native
n=Native()
# Private executable trampoline captures the original x87 return as a double.
code=b'\x68'+struct.pack('<I',0x2020000)+b'\xb8'+struct.pack('<I',0x60ea4c)+b'\xff\xd0\x83\xc4\x04\xdd\x1d'+struct.pack('<I',0x2021000)+b'\xc3'
n.uc.mem_write(0x2022000,code)
results=[]
for text in ['1.25','\u00a01.25','Infinity','-Infinity','NaN','1.#INF','1e2','1d2','0x1.4p2','-0','-0.0','\t-1.2tail','1e999','-1e999','1e-999','1,2']:
 n.uc.mem_write(0x2020000,text.encode('cp1252')+b'\0')
 n.call(0x2022000,[])
 value=struct.unpack('<d',n.uc.mem_read(0x2021000,8))[0]
 results.append([text,repr(value)])
(here/'double-parse-probe.json').write_text(json.dumps(results,indent=2)+'\n')
print(json.dumps(results,indent=2))
