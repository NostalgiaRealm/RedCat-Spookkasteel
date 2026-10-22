import json
from pathlib import Path
root=Path(__file__).resolve().parents[2]
output=[]
def walk(value,path=()):
 if isinstance(value,dict):
  if isinstance(value.get('instructions'),list):yield value,path
  for k,v in value.items():yield from walk(v,path+(k,))
 elif isinstance(value,list):
  for i,v in enumerate(value):yield from walk(v,path+(i,))
for p in sorted((root/'data/davi').glob('lvl*.json')):
 d=json.loads(p.read_text());level=json.loads((root/'data/levels'/p.stem/'level.json').read_text())
 functions=list(walk(d))
 callers=[{'path':path,'function':f} for f,path in functions if 'GetGameType' in json.dumps(f['instructions'])]
 initcallers=[{'path':path,'function':f} for f,path in functions if 'CheckGameState' in json.dumps(f['instructions'])]
 targets=[]
 for c in callers:
  for ins in c['function']['instructions']:
   if ins.get('source',{}).get('ref',{}).get('kind')=='object':targets.append(ins['source']['ref']['name'])
 entities=[e for e in level['entities'] if e.get('DaviName') in targets]
 entry={'level':p.stem,'callers':callers,'initialization':initcallers,'targets':targets,'entities':entities}
 output.append(entry)
 print(p.stem,'disabled',targets,'init',[(f['function'].get('owner',{}).get('name'),f['function']['name']) for f in initcallers])
 for e in entities: print(json.dumps(e))
Path(__file__).with_name('branch-map.json').write_text(json.dumps(output,indent=2)+'\n')
