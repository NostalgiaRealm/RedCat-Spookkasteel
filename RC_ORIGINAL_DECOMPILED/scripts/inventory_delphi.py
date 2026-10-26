#!/usr/bin/env python3
"""Recover Delphi 32-bit VMTs only with self-pointer, class-name and code-slot validation."""
import json,struct,re
from pathlib import Path
import pefile
ROOT=Path(__file__).resolve().parents[1];p=pefile.PE(str(ROOT/'originals/RcHcMenu.dat'));base=p.OPTIONAL_HEADER.ImageBase
execs=[(base+s.VirtualAddress,base+s.VirtualAddress+s.Misc_VirtualSize) for s in p.sections if s.Characteristics&0x20000000]
def mem(a,n):return p.get_data(a-base,n) if base<=a<base+p.OPTIONAL_HEADER.SizeOfImage else b''
def u32(a):
 b=mem(a,4);return struct.unpack('<I',b)[0] if len(b)==4 else None
def code(a):return a is not None and any(lo<=a<hi for lo,hi in execs)
def short(a):
 b=mem(a,1)
 if not b or not 1<=b[0]<=120:return None
 s=mem(a+1,b[0])
 return s.decode('ascii') if re.fullmatch(rb'[A-Za-z_][A-Za-z_0-9]*',s) else None
classes=[];seeds=[]
for section in p.sections:
 data=section.get_data()
 for offset in range(0,len(data)-80,4):
  start=base+section.VirtualAddress+offset;vmt=start+76
  if u32(start)!=vmt:continue
  name=short(u32(start+32) or 0);size=u32(start+36)
  if not name or not 4<=size<=0x100000:continue
  slots=[u32(start+i) for i in range(44,76,4)]
  if not all(code(t) for t in slots):continue
  methods=[];table=u32(start+24)
  if table:
   b=mem(table,2)
   if len(b)!=2:continue
   count=struct.unpack('<H',b)[0];at=table+2;valid=True
   if count>1000:continue
   for j in range(count):
    b=mem(at,6)
    if len(b)!=6:valid=False;break
    length,target=struct.unpack('<HI',b);method=short(at+6)
    if not method or length<7+len(method) or length>4096 or not code(target):valid=False;break
    methods.append({'address':hex(target),'name':method,'entry':hex(at),'bytes':length});at+=length
   if not valid:continue
  virtuals=[]
  for j,t in enumerate(slots):virtuals.append({'slot':j-8,'address':hex(t)})
  for j in range(256):
   t=u32(vmt+4*j)
   if not code(t):break
   virtuals.append({'slot':j,'address':hex(t)})
  record={'name':name,'vmt':hex(vmt),'self_pointer':hex(start),'instance_size':size,'method_table':hex(table) if table else None,'virtuals':virtuals,'published_methods':methods};classes.append(record)
  for v in virtuals:seeds.append((v['address'],hex(vmt),str(v['slot']),name))
  for m in methods:seeds.append((m['address'],hex(vmt),'published:'+m['name'],name))
(ROOT/'inventory/delphi-vmts.json').write_text(json.dumps(classes,indent=2)+'\n');(ROOT/'inventory/RcHcMenu.dat-vtable-seeds.tsv').write_text('target\ttable\tslot\tclass\n'+''.join('\t'.join(s)+'\n' for s in seeds))
print('Delphi classes',len(classes),'publishedmethods',sum(len(c['published_methods']) for c in classes),'unique targets',len(set(s[0] for s in seeds)))
