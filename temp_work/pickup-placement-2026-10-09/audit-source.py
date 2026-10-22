"""Read-only comparison of every imported pickup with the shipped BSP entities."""
import sys,json,hashlib
from pathlib import Path
root=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(root/'tools'))
from import_levels import read_chunks,read_entities
source=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Levels')
report=[]
for f in sorted(source.iterdir(),key=lambda p:p.name.lower()):
 if f.suffix.lower()!='.bsp' or f.stem.lower() not in ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']:continue
 data=f.read_bytes();chunks,_=read_chunks(data)
 native=[e for e in read_entities(chunks[16][2]) if e.get('classname','').startswith('Item')]
 level=json.loads((root/'data/levels'/f.stem.lower()/'level.json').read_text())
 imported=[e for e in level['entities'] if e.get('classname','').startswith('Item')]
 assert native==imported,f.name
 report.append(dict(level=f.stem.lower(),count=len(native),exactEntityMatch=True,sha256=hashlib.sha256(data).hexdigest(),attached=[dict(id=e['%name%'],model=e['Model']) for e in native if e.get('Model')]))
(root/'temp_work/pickup-placement-2026-10-09/source-audit.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
