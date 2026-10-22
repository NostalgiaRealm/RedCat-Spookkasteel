import json,sys,struct
from pathlib import Path
from collections import Counter,defaultdict
ROOT=Path(__file__).resolve().parents[3]
sys.path.insert(0,str(ROOT/'tools'));from import_levels import read_chunks,records
root=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Levels');out={}
for f in sorted((ROOT/'data/visibility').glob('*.json')):
 v=json.loads(f.read_text());lv=json.loads((ROOT/'data/levels'/f.stem/'level.json').read_text());bsp=next(p for p in root.iterdir() if p.stem.lower()==f.stem and p.suffix.lower()=='.bsp');chunks,_=read_chunks(bsp.read_bytes());leaves=records(chunks,4,'<i6f8i');areas=defaultdict(list)
 for i in range(lv['collision']['models'][0]['firstLeaf'],lv['collision']['models'][0]['firstLeaf']+lv['collision']['models'][0]['numLeaves']):
  l=leaves[i]
  if l[11]>=0:areas[l[12]].append((i,l))
 def leaf(point):
  m=lv['collision']['models'][0];n=m['root']
  while n>=0:
   a,b,p=lv['collision']['nodes'][n];x,y,z,d=lv['collision']['planes'][p];n=a if sum(i*j for i,j in zip(point,(x,y,z)))>=d else b
  return -n-1
 def entarea(e):
  p=e.get('Origin',e.get('origin'))
  if not p:return None
  try:q=leaf([float(i) for i in p.split()])
  except ValueError:return None
  return v['leaves'][q][1] if v['leaves'][q][0]>=0 else None
 r={}
 for a,items in areas.items():
  entities=[e for e in lv['entities'] if entarea(e)==a];n,first=v['areas'][a];r[a]={'leaves':len(items),'bounds':[[min(l[1+j]for _,l in items)for j in range(3)],[max(l[4+j]for _,l in items)for j in range(3)]],'graph':v['areaPortals'][first:first+n],'classes':dict(Counter(e.get('classname','?')for e in entities)),'entities':[{'name':e.get('%name%'),'type':e.get('classname'),'origin':e.get('Origin',e.get('origin')),'model':e.get('Model'),'actor':e.get('ActorFile',e.get('Actor'))} for e in entities]}
 out[f.stem]={'spawn':lv['spawn'],'spawnLeaf':leaf(lv['spawn']['position']),'spawnArea':v['leaves'][leaf(lv['spawn']['position'])][1],'areas':r,'rawChunk9':chunks.get(9,[])[:2]}
Path(__file__).with_name('area-inventory.json').write_text(json.dumps(out,indent=2))
for id,r in out.items():
 print(id,'spawnarea',r['spawnArea'],'portalsraw',r['rawChunk9'])
 for a,s in sorted(r['areas'].items()):print(a,s['bounds'],len(s['entities']),'edges',s['graph'])
