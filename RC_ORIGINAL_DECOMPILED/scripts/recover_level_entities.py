#!/usr/bin/env python3
"""Lossless BSP chunk export plus structured entity key/value records."""
import json,hashlib,struct,shutil,argparse
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
NAMES={0:'header',1:'models',2:'nodes',3:'bnodes',4:'leaves',5:'clusters',6:'areas',7:'areaPortals',8:'leafSides',9:'portals',10:'planes',11:'faces',12:'leafFaces',13:'vertexIndices',14:'vertices',15:'vertexColors',16:'entities',17:'texInfo',18:'textures',19:'texturePixels',20:'lightmaps',21:'visibility',22:'sky',23:'palettes',24:'motions'}
def entities(data):
 pos=0
 def number():
  nonlocal pos
  n=struct.unpack_from('<I',data,pos)[0];pos+=4;return n
 def string():
  nonlocal pos
  n=number();b=data[pos:pos+n];pos+=n
  assert len(b)==n and b[-1:]==b'\0'
  return b[:-1].decode('cp1252')
 result=[]
 for _ in range(number()):
  result.append([{'key':string(),'value':string()} for _ in range(number())])
 assert pos==len(data)
 return result

def main():
 p=argparse.ArgumentParser();p.add_argument('--source',type=Path,default=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel'));a=p.parse_args();index=[]
 for f in sorted((a.source/'Levels').glob('*.bsp')):
  original=ROOT/'originals/Levels'/f.name;shutil.copy2(f,original);b=original.read_bytes();pos=0;items=[];out=ROOT/'recovered-levels'/f.stem;out.mkdir(parents=True,exist_ok=True)
  while pos<len(b):
   at=pos;kind,size,count=struct.unpack_from('<III',b,pos);pos+=12;payload=b[pos:pos+size*count];pos+=size*count;assert len(payload)==size*count
   if kind==65535:assert pos==len(b) and size==count==0;break
   name=NAMES.get(kind,'unknown');dest=out/(str(kind).zfill(2)+'-'+name+'.bin');dest.write_bytes(payload);items.append({'id':kind,'name':name,'file_offset':at+12,'element_size':size,'count':count,'bytes':len(payload),'sha256':hashlib.sha256(payload).hexdigest(),'path':str(dest.relative_to(ROOT))})
   if kind==16:
    ents=entities(payload);(out/'entities.json').write_text(json.dumps(ents,indent=2,ensure_ascii=False)+'\n');entitycount=len(ents)
  (out/'chunks.json').write_text(json.dumps(items,indent=2)+'\n');index.append({'level':f.stem,'source_sha256':hashlib.sha256(b).hexdigest(),'chunks':len(items),'entities':entitycount,'fully_consumed':pos==len(b)})
 (ROOT/'recovered-levels/index.json').write_text(json.dumps(index,indent=2)+'\n');print(index)
if __name__=='__main__':main()
