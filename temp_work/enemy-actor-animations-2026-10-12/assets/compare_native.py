"""Extends retained redcat compare_native.py to all nonplayer clips.
Uses already-built retained exact Genesis C reference; performs no builds.
"""
from pathlib import Path
import ctypes as c,json,math,numpy as np
HERE=Path(__file__).resolve().parent;ROOT=HERE.parents[2]
lib=c.CDLL(str(ROOT/'temp_work/redcat-animation-native-2026-10-12/pose/native_reference.so'));fp=c.POINTER(c.c_float);ip=c.POINTER(c.c_int)
lib.sample.argtypes=[c.c_int,fp,fp,c.c_int,c.c_float,fp];lib.sample.restype=None
lib.pose.argtypes=[c.c_int,fp,ip,fp,fp,fp];lib.pose.restype=None
F=lambda v:(c.c_float*len(v))(*v)
cache={};results={};worst={}
for line in (HERE/'rebuild-samples.jsonl').open():
 s=json.loads(line);actor=s['actor']
 if actor not in cache:
  data=json.loads((ROOT/f'assets/actors/{actor}.json').read_text());count=len(data['bones']);attachments=F([v for b in data['bones'] for v in b['attachment']]);parents=(c.c_int*count)(*(b['parent'] for b in data['bones']))
  prepared={}
  for clip in data['animations']:
   byname={t['bone']:t for t in clip['tracks']}
   prepared[clip['name']]=[{name:(F(ch['times']),F(ch['values'])) for name,ch in byname.get(bone['name'],{}).items() if name!='bone'} for bone in data['bones']]
  valid=np.asarray(data['joints'])>=0;joints=np.asarray(data['joints'])[valid];positions=np.asarray(data['localPositions']).reshape(-1,3)[valid]
  cache[actor]=(data,count,attachments,parents,prepared,valid,joints,positions)
 data,count,attachments,parents,prepared,valid,joints,positions=cache[actor]
 translation=F([0.]*count*3);rotation=F([0.,0.,0.,1.]*count);result=F([0.]*count*12)
 for i,track in enumerate(prepared[s['name']]):
  for ch,(times,values) in track.items():
   width=4 if ch=='rotation' else 3;dest=rotation if width==4 else translation;buffer=F([0.]*width)
   lib.sample(len(times),times,values,width==4,s['time'],buffer)
   for k in range(width):dest[width*i+k]=buffer[k]
 lib.pose(count,attachments,parents,translation,rotation,result)
 delta=np.asarray(result).reshape(count,12).astype(float)-np.asarray(s['transforms'])
 stat=results.setdefault(actor,{}).setdefault(s['name'],{'samples':0,'maxBonePositionDelta':0.,'maxVertexDelta':0.,'maxRotationElementDelta':0.})
 stat['samples']+=1;stat['maxBonePositionDelta']=max(stat['maxBonePositionDelta'],float(np.linalg.norm(delta[:,9:12],axis=1).max()));stat['maxRotationElementDelta']=max(stat['maxRotationElementDelta'],float(np.abs(delta[:,:9]).max()))
 vd=np.linalg.norm(np.einsum('ijk,ik->ij',delta[joints,:9].reshape(-1,3,3),positions)+delta[joints,9:12],axis=1)
 maximum=float(vd.max());stat['maxVertexDelta']=max(stat['maxVertexDelta'],maximum)
 if maximum>worst.get('delta',0):
  index=int(np.argmax(vd));worst={'delta':maximum,'worldUnits':maximum*data['settings']['scale'],'actor':actor,'motion':s['name'],'time':s['time'],'vertex':int(np.flatnonzero(valid)[index]),'bone':data['bones'][joints[index]]['name']}
report={'method':'Exact retained float32 Genesis C Hermite/SLERP and quaternion-pose functions vs current JS matrices; 129 samples per motion. Every nonplayer animated asset included, including unused/test assets. Inputs cast to float32. Errors before GPU Float32 storage and actor scale. Original executable not run. Existing native_reference.so reused without build.','actorCount':len(results),'motionCount':sum(len(a) for a in results.values()),'sampleCount':sum(s['samples'] for a in results.values() for s in a.values()),'actors':results,'worst':worst}
(HERE/'native-comparison.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps({k:v for k,v in report.items() if k!='actors'},indent=2))
