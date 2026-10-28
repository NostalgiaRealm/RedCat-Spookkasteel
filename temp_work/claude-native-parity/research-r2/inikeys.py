import sys,struct,re
sys.path.insert(0,'../camera-re')
from asm import rd,ann
ASM="../../../RC_ORIGINAL_DECOMPILED/decompiled/RcHcGame.dat/assembly.tsv"
fns=set(a.lower().zfill(8) for a in sys.argv[1:])
rows={}
for line in open(ASM):
    p=line.rstrip('\n').split('\t')
    if len(p)>=4 and p[3] in fns: rows.setdefault(p[3],[]).append((p[0],p[2]))
def s(va):
    b=rd(va,40)
    if not b: return None
    t=b.split(b'\0')[0]
    return t.decode('latin1') if t and all(32<=c<127 for c in t) else None
for f in sys.argv[1:]:
    f=f.lower().zfill(8); r=rows[f]; print('=====',f)
    lastkey=None
    for i,(a,ins) in enumerate(r):
        m=re.search(r'0x(6[89][0-9a-f]{4})\b',ins)
        if m and ('MOV EDI' in ins or 'PUSH' in ins):
            t=s(int(m.group(1),16))
            if t: lastkey=t
        if 'CALL 0x005ac9d0' in ins or 'CALL 0x005ac8b0' in ins:
            pushes=[x for x in r[max(0,i-14):i] if x[1].startswith('PUSH') or 'FST' in x[1] or 'FLD' in x[1]]
            print(a,ins.split()[1][-6:],'key=',lastkey,'|',' ; '.join(x[1]+ann(x[1]) for x in pushes))
        if 'FSTP float ptr [ESI' in ins or 'MOV dword ptr [ESI + 0x' in ins and lastkey:
            pass
        if re.search(r'(FSTP|FST|MOV) (float|dword) ptr \[(ESI|EBP|EBX|EDI) \+ 0x[0-9a-f]+\]',ins) and lastkey:
            print('    store',a,ins)
