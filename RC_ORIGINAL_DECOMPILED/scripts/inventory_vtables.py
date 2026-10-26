#!/usr/bin/env python3
"""Identify MSVC x86 vtables using valid Complete Object Locator/type descriptors."""
import json,struct
from pathlib import Path
import pefile
ROOT=Path(__file__).resolve().parents[1]
manifest=json.loads((ROOT/'inventory/manifest.json').read_text());tables=[]
for f in manifest['files']:
 pe=pefile.PE(str(ROOT/f['prepared_path']));base=pe.OPTIONAL_HEADER.ImageBase;execs=[(base+s.VirtualAddress,base+s.VirtualAddress+s.Misc_VirtualSize) for s in pe.sections if s.Characteristics&0x20000000]
 def mem(a,n):
  if a<base or a>=base+pe.OPTIONAL_HEADER.SizeOfImage:return b''
  return pe.get_data(a-base,n)
 def u32(a):
  b=mem(a,4);return struct.unpack('<I',b)[0] if len(b)==4 else None
 def executable(a):return a is not None and any(lo<=a<hi for lo,hi in execs)
 for s in pe.sections:
  if s.Characteristics&0x20000000:continue
  data=s.get_data()
  for offset in range(0,len(data)-8,4):
   col=struct.unpack_from('<I',data,offset)[0];rec=mem(col,20)
   if len(rec)!=20:continue
   signature,object_offset,ctor_offset,td,chd=struct.unpack('<5I',rec)
   if signature!=0 or object_offset>0x100000 or ctor_offset>0x100000:continue
   name=mem(td+8,200).split(b'\0',1)[0]
   if not (name.startswith(b'.?AV') or name.startswith(b'.?AU')):continue
   if len(mem(chd,16))!=16:continue
   at=base+s.VirtualAddress+offset+4;entries=[]
   for j in range(512):
    target=u32(at+4*j)
    if not executable(target):break
    entries.append({'slot':j,'pointer_address':hex(at+4*j),'target':hex(target)})
   if not entries:continue
   tables.append({'binary':f['path'],'table':hex(at),'complete_object_locator':hex(col),'type_descriptor':hex(td),'class_name':name.decode('ascii','replace'),'entries':entries})
 pe.close()
(ROOT/'inventory/vtables.json').write_text(json.dumps(tables,indent=2)+'\n')
for f in manifest['files']:
 rows=[(e['target'],t['table'],e['slot'],t['class_name']) for t in tables if t['binary']==f['path'] for e in t['entries']]
 p=ROOT/'inventory'/(f['path']+'-vtable-seeds.tsv');p.write_text('target\ttable\tslot\tclass\n'+''.join('\t'.join(map(str,r))+'\n' for r in rows));print(f['path'],len(rows),'entries',len(set(r[0] for r in rows)),'unique')
