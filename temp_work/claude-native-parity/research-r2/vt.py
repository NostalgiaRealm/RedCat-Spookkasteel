import sys,struct,re
sys.path.insert(0,'../camera-re')
from asm import rd
CI=open('../../../RC_ORIGINAL_DECOMPILED/CLASS_INDEX.md').read()
def vt(cls):
    m=re.search(r'### \.\?AV'+re.escape(cls)+r'@@\n\nVtable `0x([0-9a-f]+)`',CI)
    return int(m.group(1),16)
def slots(cls,n=80):
    v=vt(cls); out=[]
    for i in range(n):
        x=struct.unpack('<I',rd(v+4*i,4))[0]
        if not (0x401000<=x<0x640000): break
        out.append(x)
    return out
cl=sys.argv[1:]
S={c:slots(c) for c in cl}
for c in cl: print(c,hex(vt(c)),len(S[c]))
n=max(len(s) for s in S.values())
for i in range(n):
    row=[('%x'%S[c][i]) if i<len(S[c]) else '-' for c in cl]
    mark='' if len(set(row))==1 else ' *'
    print(i,' '.join(row)+mark)
