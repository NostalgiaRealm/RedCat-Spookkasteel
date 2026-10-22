from pathlib import Path
import re,struct
binary=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat').read_bytes()
lines=Path(__file__).with_name('redcat-native-score-disasm.txt').read_text().splitlines()
reg={r:0 for r in ['eax','ebx','ecx','edx','esi','edi','ebp','esp']};reg['esp']=0x100000;reg['ecx']=0x200000
mem={0x200110:'originX',0x200114:'originY',0x200118:'originZ',0x20011c:struct.unpack('<I',struct.pack('<f',30))[0],0x6b85d4:0x3f800000}
def addr(x):
 return sum((reg.get(p,int(p,16) if p.startswith('0x') else int(p) if p.isdigit() else 0)) * (-1 if sg=='-' else 1) for sg,p in re.findall(r'([+-]?)([^+-]+)',x))
def val(x):
 x=x.strip()
 if '[' in x:
  a=addr(x[x.index('[')+1:x.index(']')]);return mem.get(a,f'mem[{a:#x}]')
 if 'ds:' in x:
  a=int(x.split(':')[-1],16)
  return mem.get(a,struct.unpack_from('<I',binary,a-0x400000)[0] if a<len(binary)+0x400000 else f'mem[{a:#x}]')
 if x in reg:return reg[x]
 return int(x,16)
def setval(x,v):
 if '[' in x:mem[addr(x[x.index('[')+1:x.index(']')])]=v
 else:reg[x]=v
for l in lines:
 m=re.match(r'  ([0-9a-f]+):',l)
 if not m or not 0x469770<=int(m[1],16)<=0x46994e:continue
 cols=l.split('\t')
 if len(cols)<3:continue
 ins=' '.join(cols[2:]).strip()
 if not ins:continue
 op,*rest=ins.split(None,1);args=[a.strip() for a in (rest[0].split(',') if rest else [])]
 if op=='mov':setval(args[0],val(args[1]))
 elif op=='lea':setval(args[0],addr(args[1][1:-1]))
 elif op=='push':v=val(args[0]);reg['esp']-=4;mem[reg['esp']]=v
 elif op=='sub':setval(args[0],val(args[0])-val(args[1]))
 elif op=='add':setval(args[0],val(args[0])+val(args[1]))
 elif op=='call':break
 else:raise Exception((l,reg))
for i in range(36):
 v=mem.get(reg['esp']+i*4);f=struct.unpack('<f',struct.pack('<I',v))[0] if isinstance(v,int) else ''
 print(f'arg{i+1:02d} [entry esp+{4+i*4:#x}]: {v!s:<20} float={f}')
