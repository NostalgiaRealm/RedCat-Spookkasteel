#!/usr/bin/env python3
"""Retain executable-section bytes independently of Ghidra function discovery."""
import subprocess,json,pefile
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];items=[]
for x in json.loads((ROOT/'inventory/manifest.json').read_text())['files']:
 p=ROOT/x['prepared_path'];out=ROOT/'decompiled'/x['path']
 with (out/'linear-disassembly.asm').open('w') as log:r=subprocess.run(['objdump','-d','-Mintel',str(p)],stdout=log,stderr=subprocess.STDOUT)
 pe=pefile.PE(str(p));overlay=pe.get_overlay_data_start_offset();items.append({'binary':x['path'],'linear_disassembly_exit':r.returncode,'overlay_offset':overlay,'overlay_bytes':len(p.read_bytes())-overlay if overlay else 0,'overlay_note':'Debug/metadata trailer; no embedded PE header' if overlay else 'None'});pe.close()
(ROOT/'inventory/additional-inspection.json').write_text(json.dumps(items,indent=2)+'\n')
raise SystemExit(1 if any(i['linear_disassembly_exit'] for i in items) else 0)
