import sys,struct,re
sys.path.insert(0,'../camera-re')
from asm import rd
ASM="../../../RC_ORIGINAL_DECOMPILED/decompiled/RcHcGame.dat/assembly.tsv"
fns=[a.lower().zfill(8) for a in sys.argv[1:]]
rows={}
for line in open(ASM):
    p=line.rstrip('\n').split('\t')
    if len(p)>=4 and p[3] in fns: rows.setdefault(p[3],[]).append((p[0],p[2]))
def s(va):
    b=rd(va,40)
    if not b: return None
    t=b.split(b'\0')[0]
    return t.decode('latin1') if len(t)>1 and all(32<=c<127 for c in t) else None
for f in fns:
    r=rows.get(f,[]); print('=====',f)
    lastkey=None
    for i,(a,ins) in enumerate(r):
        m=re.search(r'0x(6[89][0-9a-f]{4})\b',ins)
        if m and ('MOV EDI' in ins or 'PUSH' in ins):
            t=s(int(m.group(1),16))
            if t: lastkey=t
        if 'CALL 0x005ac9d0' in ins or 'CALL 0x005ac8b0' in ins:
            pushes=[x[1] for x in r[max(0,i-14):i] if x[1].startswith('PUSH')]
            d=pushes[-3].split()[-1]
            if ins.endswith('8b0'):
                try: d='%gf'%struct.unpack('<f',struct.pack('<I',int(d,16)))[0]
                except: pass
            else:
                try: d=str(int(d,16))
                except: pass
            dest='?'
            for a2,ins2 in r[i+1:i+25]:
                mm=re.search(r'(FSTP|MOV) (float|dword|byte) ptr \[(E[A-Z]{2}) \+ (0x[0-9a-f]+)\],?(.*)',ins2)
                if mm and mm.group(4)!='0x60' and not mm.group(3)=='ESP':
                    dest=mm.group(3)+'+'+mm.group(4)+(' '+mm.group(5) if mm.group(5) else '');break
            print(a,'int ' if ins.endswith('9d0') else 'flt ',lastkey,'default=',d,'->',dest)
