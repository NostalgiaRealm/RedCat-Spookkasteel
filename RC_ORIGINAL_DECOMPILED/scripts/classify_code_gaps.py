#!/usr/bin/env python3
"""Conservative byte-level classification; no arbitrary bytes promoted to functions."""
import csv,collections,json,struct
from pathlib import Path
import pefile
ROOT=Path(__file__).resolve().parents[1];allresults=[]
for item in json.loads((ROOT/'inventory/manifest.json').read_text())['files']:
 name=item['path'];out=ROOT/'decompiled'/name;pe=pefile.PE(str(ROOT/item['prepared_path']));base=pe.OPTIONAL_HEADER.ImageBase
 unowned=[];instruction_bytes=collections.Counter()
 for row in csv.DictReader((out/'assembly.tsv').open(),delimiter='\t'):
  if row['function']:continue
  b=bytes.fromhex(row['bytes']);mnemonic=row['instruction'].split()[0]
  category='padding-like-instruction' if mnemonic in ('NOP','INT3') else 'decoded-instruction-unowned'
  instruction_bytes[category]+=len(b);unowned.append({'address':row['address'],'bytes':row['bytes'],'instruction':row['instruction'],'category':category})
 with (out/'unowned-instructions-classified.tsv').open('w') as f:
  writer=csv.DictWriter(f,fieldnames=['address','bytes','instruction','category'],delimiter='\t');writer.writeheader();writer.writerows(unowned)
 gaps=[];gapbytes=collections.Counter()
 for row in csv.DictReader((out/'executable_without_instructions.tsv').open(),delimiter='\t'):
  lo,hi=int(row['start'],16),int(row['end_inclusive'],16);b=pe.get_data(lo-base,hi-lo+1)
  if len(b)!=hi-lo+1:category='non-file-backed-or-partial'
  elif all(x==0xcc for x in b):category='all-int3-fill'
  elif all(x==0x90 for x in b):category='all-nop-fill'
  elif all(x==0 for x in b):category='all-zero-fill'
  elif all(x in (0xcc,0x90,0) for x in b):category='mixed-fill-bytes'
  else:category='unclassified-code-or-data'
  gapbytes[category]+=hi-lo+1;gaps.append({'start':row['start'],'end_inclusive':row['end_inclusive'],'length':hi-lo+1,'category':category,'leading_bytes':b[:24].hex()})
 with (out/'undecoded-ranges-classified.tsv').open('w') as f:
  writer=csv.DictWriter(f,fieldnames=['start','end_inclusive','length','category','leading_bytes'],delimiter='\t');writer.writeheader();writer.writerows(gaps)
 result={'binary':name,'unowned_instruction_bytes':dict(instruction_bytes),'undecoded_executable_bytes':dict(gapbytes),'remaining_nonpadding_unowned_instruction_bytes':instruction_bytes['decoded-instruction-unowned'],'remaining_unclassified_executable_bytes':gapbytes['unclassified-code-or-data'],'qualification':'NOP/INT3/fill classification is byte-pattern evidence, not proof of intentional padding. Other bytes can be embedded data, instruction fragments, exception handlers, switch cases or undiscovered routines. No arbitrary range is promoted to a function.'};allresults.append(result);pe.close()
(ROOT/'inventory/code-gap-classification.json').write_text(json.dumps(allresults,indent=2)+'\n');print(json.dumps(allresults,indent=2))
