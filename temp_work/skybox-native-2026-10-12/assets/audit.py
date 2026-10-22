from pathlib import Path
import hashlib,json,struct,sys
from PIL import Image
root=Path(__file__).resolve().parents[3]
sys.path.insert(0,str(root/'tools'))
from import_levels import read_chunks,records
installation=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel')
report=[]
for source in sorted((installation/'Levels').glob('*.bsp')):
 level_path=root/'data/levels'/source.stem.lower()/'level.json'
 if not level_path.exists():continue
 data=source.read_bytes();chunks,_=read_chunks(data);d=json.loads(level_path.read_text())
 sky=records(chunks,22,'<4f6if')[0]
 expected={'axis':list(sky[:3]),'rotation':sky[3],'textures':list(sky[4:10]),'scale':sky[10]}
 assert expected==d['sky'];assert hashlib.sha256(data).hexdigest()==d['source']['sha256']
 textures=records(chunks,18,'<32sI4i');audited=[]
 for index in sorted(set(i for i in sky[4:10] if i>=0)):
  name,flags,w,h,offset,palette=textures[index];name=name.split(b'\0')[0].decode('cp1252')
  indices=chunks[19][2][offset:offset+w*h];pal=chunks[23][2][palette*768:(palette+1)*768]
  native_rgb=b''.join(pal[i*3:i*3+3] for i in indices)
  png=Image.open(level_path.parent/d['textures'][index]['file'])
  assert png.size==(w,h);assert png.convert('RGB').tobytes()==native_rgb
  assert png.convert('RGBA').getextrema()[3]==(255,255)
  assert d['textures'][index]['name']==name
  audited.append({'index':index,'name':name,'size':[w,h],'nativeRgbSha256':hashlib.sha256(native_rgb).hexdigest(),'pixelExact':True})
 faces=records(chunks,11,'<8i4B');infos=records(chunks,17,'<10fI4fi');models=records(chunks,1,'<2i9f9i')
 sky_faces=[i for i,f in enumerate(faces) if infos[f[4]][10]&4]
 groups=[g for g in d['groups'] if g['flags']&4]
 report.append({'id':d['id'],'sourceSha256':d['source']['sha256'],'metadataExact':True,'sky':expected,'textures':audited,'nativeSkyFaceCount':len(sky_faces),'nativeSkyModels':[i for i,m in enumerate(models) if any(m[11]<=f<m[11]+m[12] for f in sky_faces)],'importedSkyGroups':len(groups),'importedSkyTriangleVertices':sum(g['count'] for g in groups)})
assert len(report)==5
out=Path(__file__).with_name('report.json');out.write_text(json.dumps(report,indent=2)+'\n')
print('PASS: all five original BSP hashes/sky records match; all ten assigned source images match imported PNG RGB pixels exactly; SKY surface inventory saved.')
