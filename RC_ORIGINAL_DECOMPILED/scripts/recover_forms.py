#!/usr/bin/env python3
"""Decode Delphi TPF0 menu forms, preserving every field and binary property."""
import hashlib,json,struct
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
class Reader:
 def __init__(self,b):self.b=b;self.p=0
 def take(self,n):
  if self.p+n>len(self.b):raise ValueError('Truncated form at '+hex(self.p))
  b=self.b[self.p:self.p+n];self.p+=n;return b
 def u(self,f):return struct.unpack('<'+f,self.take(struct.calcsize('<'+f)))[0]
 def s(self):return self.take(self.u('B')).decode('cp1252')
 def value(self):
  at=self.p;t=self.u('B')
  if t==0:v=None
  elif t==1:
   v=[]
   while self.b[self.p]!=0:v.append(self.value())
   self.p+=1
  elif t in (2,3,4,15,16,17,19,21):v=self.u({2:'b',3:'h',4:'i',15:'f',16:'q',17:'d',19:'q',21:'d'}[t])
  elif t==5:v={'extended80_hex':self.take(10).hex()}
  elif t in (6,7):v=self.s()
  elif t==8:v=False
  elif t==9:v=True
  elif t==10:
   b=self.take(self.u('I'));v={'binary_hex':b.hex(),'bytes':len(b),'sha256':hashlib.sha256(b).hexdigest()}
  elif t==11:
   v=[]
   while self.b[self.p]:v.append(self.s())
   self.p+=1
  elif t in (12,20):v=self.take(self.u('I')).decode('utf-8' if t==20 else 'cp1252')
  elif t==13:v=None
  elif t==14:
   v=[]
   while self.b[self.p]:
    mark=self.u('B')
    if mark!=1:raise ValueError('Collection marker '+str(mark)+' at '+hex(self.p))
    v.append(self.props())
   self.p+=1
  elif t==18:v=self.take(self.u('I')*2).decode('utf-16le')
  else:raise ValueError('Unknown value '+str(t)+' at '+hex(at))
  return {'offset':at,'type':t,'value':v}
 def props(self):
  a=[]
  while True:
   name=self.s()
   if not name:return a
   a.append({'name':name,**self.value()})
 def node(self):
  at=self.p; flags=0; childpos=None
  if self.b[self.p]&0xf0==0xf0:
   flags=self.u('B')&0xf
   if flags&2:childpos=self.value()
  cls=self.s();name=self.s();props=self.props();children=[]
  while self.b[self.p]:children.append(self.node())
  self.p+=1
  return {'offset':at,'endOffset':self.p,'class':cls,'name':name,'flags':flags,'childPosition':childpos,'properties':props,'children':children}
def text(node,indent=0):
 prefix='  '*indent;lines=[prefix+'object '+node['name']+': '+node['class']]
 for p in node['properties']:lines.append(prefix+'  '+p['name']+' = '+json.dumps(p['value'],ensure_ascii=False))
 for child in node['children']:lines+=text(child,indent+1)
 return lines+[prefix+'end']
def main():
 out=ROOT/'recovered-resources/forms';out.mkdir(parents=True,exist_ok=True);index=[]
 for entry in json.loads((ROOT/'inventory/resources.json').read_text()):
  data=(ROOT/entry['path']).read_bytes()
  if not data.startswith(b'TPF0'):continue
  r=Reader(data);r.take(4);node=r.node()
  if r.p!=len(data):raise ValueError(entry['path']+': trailing '+str(len(data)-r.p)+' bytes')
  stem=entry['binary']+'__'+entry['ids'][1];(out/(stem+'.json')).write_text(json.dumps(node,indent=2,ensure_ascii=False)+'\n');(out/(stem+'.dfm')).write_text('// Recovered from '+entry['path']+'; binary values and original offsets retained in companion JSON.\n'+'\n'.join(text(node))+'\n')
  index.append({**entry,'form':str((out/(stem+'.dfm')).relative_to(ROOT)),'fully_consumed':True})
 (out/'index.json').write_text(json.dumps(index,indent=2)+'\n');print('Recovered '+str(len(index))+' complete Delphi forms')
if __name__=='__main__':main()
