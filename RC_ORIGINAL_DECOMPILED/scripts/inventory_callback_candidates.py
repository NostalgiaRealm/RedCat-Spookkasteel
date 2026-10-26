#!/usr/bin/env python3
"""Conservative missing-entry candidates: stored code pointer plus canonical entry bytes."""
import csv,json,struct,collections
from pathlib import Path
import pefile
ROOT=Path(__file__).resolve().parents[1];reports=[]
PREFIXES=[bytes.fromhex(x) for x in ['558bec','64a100000000','6aff68','568bf1','538bd8','53565755']]
for f in json.loads((ROOT/'inventory/manifest.json').read_text())['files']:
 name=f['path'];p=pefile.PE(str(ROOT/f['prepared_path']));base=p.OPTIONAL_HEADER.ImageBase;execs=[(base+s.VirtualAddress,base+s.VirtualAddress+s.Misc_VirtualSize) for s in p.sections if s.Characteristics&0x20000000];out=ROOT/'decompiled'/name
 unowned={int(r['address'],16) for r in csv.DictReader((out/'assembly.tsv').open(),delimiter='\t') if not r['function']};refs=collections.defaultdict(list)
 for sec in p.sections:
  if sec.Characteristics&0x20000000:continue
  b=sec.get_data()
  for off in range(0,len(b)-3,4):
   a=struct.unpack_from('<I',b,off)[0]
   if a not in unowned or a%4 or not any(lo<=a<hi for lo,hi in execs):continue
   code=p.get_data(a-base,12)
   if any(code.startswith(prefix) for prefix in PREFIXES):refs[a].append(base+sec.VirtualAddress+off)
 candidates=[{'address':hex(a),'prologue_bytes':p.get_data(a-base,16).hex(),'stored_pointer_references':[hex(r) for r in locs],'classification':'canonical-prologue-plus-stored-executable-pointer; not automatically a proven original function'} for a,locs in sorted(refs.items())]
 reports.append({'binary':name,'candidates':candidates})
 if candidates:
  (ROOT/'inventory'/(name+'-callback-seeds.tsv')).write_text('target\ttable\tslot\tclass\n'+''.join(c['address']+'\t'+c['stored_pointer_references'][0]+'\tstored-pointer\tcanonical-prologue\n' for c in candidates))
 p.close();print(name,len(candidates))
(ROOT/'inventory/callback-candidates.json').write_text(json.dumps(reports,indent=2)+'\n')
