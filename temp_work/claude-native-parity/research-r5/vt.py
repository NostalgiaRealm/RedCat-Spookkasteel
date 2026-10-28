import struct,sys
p=sys.argv[1]; d=open(p,'rb').read()
pe=struct.unpack_from('<I',d,0x3c)[0]
ns=struct.unpack_from('<H',d,pe+6)[0]; osz=struct.unpack_from('<H',d,pe+20)[0]
ib=struct.unpack_from('<I',d,pe+24+28)[0]
secs=[]
o=pe+24+osz
for i in range(ns):
    n,vs,va,rs,ra=struct.unpack_from('<8sIIII',d,o+40*i)[:5]
    secs.append((va,max(vs,rs),ra))
def rd(va):
    rva=va-ib
    for s in secs:
        if s[0]<=rva<s[0]+s[1]: return rva-s[0]+s[2]
for vt in [int(x,16) for x in sys.argv[2:]]:
    off=rd(vt)
    print(hex(vt),[hex(struct.unpack_from('<I',d,off+4*i)[0]) for i in range(15)])
