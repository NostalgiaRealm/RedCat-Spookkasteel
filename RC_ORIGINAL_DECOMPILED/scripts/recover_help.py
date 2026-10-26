#!/usr/bin/env python3
"""Recover all original Windows help projects with a caller-provided helpdeco."""
import argparse,subprocess,json
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
p=argparse.ArgumentParser();p.add_argument('--helpdeco',type=Path,required=True);a=p.parse_args();items=[]
for f in sorted((ROOT/'originals').rglob('*')):
 if f.suffix.lower()!='.hlp':continue
 out=ROOT/'recovered-resources/help'/f.relative_to(ROOT/'originals');out.mkdir(parents=True,exist_ok=True)
 with (out/'extraction.log').open('w') as log:r=subprocess.run([str(a.helpdeco.resolve()),str(f),'-g','-y'],cwd=out,stdout=log,stderr=subprocess.STDOUT)
 items.append({'original':str(f.relative_to(ROOT)),'output':str(out.relative_to(ROOT)),'exit_code':r.returncode})
(ROOT/'recovered-resources/help/index.json').write_text(json.dumps(items,indent=2)+'\n')
raise SystemExit(1 if any(i['exit_code'] for i in items) else 0)
