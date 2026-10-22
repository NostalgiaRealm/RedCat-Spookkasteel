"""Read original wall faces and audit the affected texture use; no asset writes."""
import hashlib,json,runpy
from pathlib import Path
from PIL import Image
root=Path(__file__).resolve().parents[2]
reader=runpy.run_path(str(root/'tools/import_levels.py'))
source=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Levels/lvl02a.bsp')
raw=source.read_bytes();chunks,_=reader['read_chunks'](raw)
records=reader['records']
faces=records(chunks,11,'<8i4B');info=records(chunks,17,'<10fI4fi');textures=records(chunks,18,'<32sI4i');vertices=records(chunks,14,'<3f');indices=[i[0] for i in records(chunks,13,'<i')]
level=json.loads((root/'data/levels/lvl02a/level.json').read_text())
assert hashlib.sha256(raw).hexdigest()==level['source']['sha256']
result={'source_sha256':level['source']['sha256'],'faces':[],'unflagged_keyed_textures':{}}
for face_id in [920,921,923,928]:
 f=faces[face_id];ti=info[f[4]];t=textures[ti[-1]]
 result['faces'].append({'id':face_id,'flags':ti[10],'texture':t[0].split(b'\0')[0].decode(),'points':[vertices[indices[i]] for i in range(f[0],f[0]+f[1])]})
for path in sorted((root/'data/levels').glob('*/level.json')):
 l=json.loads(path.read_text());items=[]
 for i,t in enumerate(l['textures']):
  groups=[g for g in l['groups'] if g['texture']==i and not g['flags']&(16|4)]
  if groups and t.get('colorKey'):
   im=Image.open(path.parent/t['file'])
   if im.mode=='RGBA' and im.getchannel('A').getextrema()[0]==0:
    items.append({'texture':t['name'],'vertices':sum(g['count'] for g in groups),'models':sorted(set(g['model'] for g in groups))})
 result['unflagged_keyed_textures'][l['id']]=items
out=Path(__file__).with_name('native-level-evidence.json');out.write_text(json.dumps(result,indent=2)+'\n')
print(out)
