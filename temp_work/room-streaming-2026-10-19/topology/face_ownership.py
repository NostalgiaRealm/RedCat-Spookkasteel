import json,struct
from pathlib import Path
from collections import Counter,defaultdict
ROOT=Path(__file__).resolve().parents[3]
out={}
for f in sorted((ROOT/'data/visibility').glob('*.json')):
 v=json.loads(f.read_text());lv=json.loads((ROOT/'data/levels'/f.stem/'level.json').read_text());mesh=list(struct.iter_unpack('<11f',(ROOT/'data/levels'/f.stem/'mesh.bin').read_bytes()));c=lv['collision'];ownership=[set()for _ in range(v['faceCount'])]
 for cluster,area,first,count in v['leaves']:
  if cluster<0 or area<=0:continue
  for face in v['leafFaces'][first:first+count]:ownership[face].add(area)
 def area(point):
  m=c['models'][0]
  if any(x<lo or x>hi for x,lo,hi in zip(point,m['min'],m['max'])):return -1
  node=m['root']
  while node>=0:
   a,b,p=c['nodes'][node];pl=c['planes'][p];node=a if sum(x*y for x,y in zip(point,pl[:3]))>=pl[3] else b
  leaf=v['leaves'][-node-1];return leaf[1]if leaf[0]>=0 else -1
 groups=lv['groups'];spans=v['faceSpans'];gi=0;static=[];unknown=[];multi=Counter();zero=Counter();counts=Counter();sets=Counter()
 for face,start,count in spans:
  while start>=groups[gi]['start']+groups[gi]['count']:gi+=1
  g=groups[gi]
  if g['model']:continue
  s=ownership[face];raw=bool(s)
  if not s:
   p=[sum(mesh[i][axis]for i in range(start,start+count))/count for axis in range(3)]
   for sign in [1,-1]:
    a=area([x+sign*n*2 for x,n in zip(p,mesh[start][3:6])])
    if a>0:s.add(a)
  counts['staticFaces']+=1;counts['staticVertices']+=count;counts['referencedFaces'if raw else 'unreferencedFaces']+=1
  if not raw:counts['unreferencedUnresolved'if not s else 'unreferencedProbed']+=1
  if not s:unknown.append({'face':face,'group':g,'vertices':count,'center':p})
  if len(s)>1:multi[','.join(map(str,sorted(s)))]+=1
  sets[','.join(map(str,sorted(s)))]+=count
 out[f.stem]={'counts':dict(counts),'multiAreaFaceSets':dict(multi),'vertexOwnership':dict(sets),'unresolved':unknown}
 print(f.stem,counts,'multiAreaFaces',sum(multi.values()),'unresolved',len(unknown))
Path(__file__).with_name('face-ownership.json').write_text(json.dumps(out,indent=2))
