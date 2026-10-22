"""Compare remake bone poses with exact retained C reference functions.
Reference functions use float32; importer channel arrays are cast to float32.
This is a reference-library numerical audit, not execution of RcHcGame.dat.
"""
from pathlib import Path
import ctypes as c,json,math,collections
HERE=Path(__file__).resolve().parent;ROOT=HERE.parents[2]
data=json.loads((ROOT/'assets/actors/redcat.json').read_text());samples=json.loads((HERE/'rebuild-samples.json').read_text())
lib=c.CDLL(str(HERE/'native_reference.so'));fp=c.POINTER(c.c_float);ip=c.POINTER(c.c_int)
lib.sample.argtypes=[c.c_int,fp,fp,c.c_int,c.c_float,fp];lib.sample.restype=None
lib.pose.argtypes=[c.c_int,fp,ip,fp,fp,fp];lib.pose.restype=None
F=lambda v:(c.c_float*len(v))(*v)
count=len(data['bones']);attachments=F([v for b in data['bones'] for v in b['attachment']]);parents=(c.c_int*count)(*(b['parent'] for b in data['bones']))
prepared={}
for clip in data['animations']:
 byname={t['bone']:t for t in clip['tracks']};tracks=[]
 for bone in data['bones']:
  track=byname[bone['name']];tracks.append({name:(F(ch['times']),F(ch['values'])) for name,ch in track.items() if name!='bone'})
 prepared[clip['name']]=tracks
results={};globalWorst={}
for s in samples:
 translation=F([0.]*count*3);rotation=F([0.,0.,0.,1.]*count);result=F([0.]*count*12)
 for i,track in enumerate(prepared[s['name']]):
  for ch,(times,values) in track.items():
   width=4 if ch=='rotation' else 3;dest=rotation if width==4 else translation;buffer=F([0.]*width)
   lib.sample(len(times),times,values,width==4,s['time'],buffer)
   for k in range(width):dest[width*i+k]=buffer[k]
 lib.pose(count,attachments,parents,translation,rotation,result)
 stat=results.setdefault(s['name'],{'samples':0,'maxBonePositionDelta':0.,'maxVertexDelta':0.,'maxRotationElementDelta':0.})
 stat['samples']+=1
 for i,b in enumerate(data['bones']):
  reference=list(result[i*12:(i+1)*12]);remake=s['transforms'][i]
  d=math.dist(reference[9:12],remake[9:12]);stat['maxBonePositionDelta']=max(stat['maxBonePositionDelta'],d)
  stat['maxRotationElementDelta']=max(stat['maxRotationElementDelta'],max(abs(reference[k]-remake[k]) for k in range(9)))
 for i,joint in enumerate(data['joints']):
  if joint<0:continue
  p=data['localPositions'][i*3:i*3+3];native=list(result[joint*12:(joint+1)*12]);rebuild=s['transforms'][joint]
  d=math.sqrt(sum((sum((native[row*3+k]-rebuild[row*3+k])*p[k] for k in range(3))+native[9+row]-rebuild[9+row])**2 for row in range(3)))
  stat['maxVertexDelta']=max(stat['maxVertexDelta'],d)
  if d>globalWorst.get('delta',0):globalWorst={'delta':d,'name':s['name'],'time':s['time'],'vertex':i,'bone':data['bones'][joint]['name']}
report={'method':'Exact retained float32 C Hermite/SLERP and quaternion-pose functions vs current JS matrices, 129 samples per motion. Importer-decoded inputs cast to float32. Vertex error computed from bone transforms, before final Float32 GPU storage or 1.3 actor scale. This is not original executable runtime capture.','clips':results,'worst':globalWorst,'worstWorldUnits':globalWorst['delta']*data['settings']['scale']}
(HERE/'native-comparison.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
