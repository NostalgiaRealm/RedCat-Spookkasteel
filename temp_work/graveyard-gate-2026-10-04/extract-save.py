import struct, pathlib, json
root=pathlib.Path(__file__).parent
def vint(b,p):
    value=shift=0
    while True:
        c=b[p];p+=1;value|=(c&127)<<shift
        if c<128:return value,p
        shift+=7
def blob(b,p):
    size,p=vint(b,p)
    return b[p:p+size],p+size
records=[]
for path in sorted((root/'leveldb-copy').glob('*.log')):
    b=path.read_bytes();parts=[]
    for start in range(0,len(b),32768):
        p=start
        while p+7<=min(start+32768,len(b)):
            crc,size,kind=struct.unpack_from('<IHB',b,p);p+=7
            if not size:break
            part=b[p:p+size];p+=size
            if kind==1:records.append(part)
            elif kind==2:parts=[part]
            elif kind==3:parts.append(part)
            elif kind==4:parts.append(part);records.append(b''.join(parts));parts=[]
saves=[]
for record in records:
    if len(record)<12:continue
    seq,count=struct.unpack_from('<QI',record);p=12
    for i in range(count):
        kind=record[p];p+=1;key,p=blob(record,p)
        if kind!=1:continue
        value,p=blob(record,p)
        if b'redcat.save.v1' in key:
            text=value[1:].decode('utf-16-le' if value[0]==0 else 'latin1')
            save=json.loads(text);saves.append((seq+i,save))
if not saves:raise RuntimeError('No save found in WAL')
seq,save=max(saves,key=lambda s:s[0])
(root/'live-autosave.json').write_text(json.dumps(save,indent=2))
print(json.dumps({'sequence':seq,'savedAt':save.get('savedAt'),'level':save.get('level'),'position':save.get('position'),'lastSafe':save.get('lastSafe'),'playerMotion':save.get('playerMotion'),'yaw':save.get('yaw'),'pitch':save.get('pitch')}))
