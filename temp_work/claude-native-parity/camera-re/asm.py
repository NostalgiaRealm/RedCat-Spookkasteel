import sys,struct,re
BIN="/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW/RC_ORIGINAL_DECOMPILED/originals/RcHcGame.dat"
ASM="/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW/RC_ORIGINAL_DECOMPILED/decompiled/RcHcGame.dat/assembly.tsv"
data=open(BIN,'rb').read()
pe=struct.unpack_from('<I',data,0x3c)[0]
nsec=struct.unpack_from('<H',data,pe+6)[0]
optsz=struct.unpack_from('<H',data,pe+20)[0]
base=struct.unpack_from('<I',data,pe+24+28)[0]
secs=[]
off=pe+24+optsz
for i in range(nsec):
    name=data[off:off+8].rstrip(b'\0').decode()
    vsz,va,rsz,raw=struct.unpack_from('<IIII',data,off+8)
    secs.append((name,va+base,vsz,raw,rsz)); off+=40
def rd(va,n):
    for name,sva,vsz,raw,rsz in secs:
        if sva<=va<sva+max(vsz,rsz):
            o=va-sva
            if o+n<=rsz: return data[raw+o:raw+o+n]
            return None
    return None
def ann(ins):
    out=[]
    for m in re.finditer(r'\[0x([0-9a-f]{6,8})\]',ins):
        va=int(m.group(1),16); b=rd(va,8)
        if b is None: continue
        if 'qword' in ins or 'double' in ins: out.append('%s=%r'%(m.group(1),struct.unpack('<d',b)[0]))
        else: out.append('%s=%r'%(m.group(1),struct.unpack('<f',b[:4])[0]))
    for m in re.finditer(r',0x([0-9a-f]{8})\b',ins):
        v=int(m.group(1),16)
        f=struct.unpack('<f',struct.pack('<I',v))[0]
        if 1e-6<abs(f)<1e7: out.append('imm=%g'%f)
    return '   ; '+' '.join(out) if out else ''
if __name__=='__main__':
    if sys.argv[1]=='secs':
        [print(s[0],hex(s[1]),hex(s[2]),hex(s[3]),hex(s[4])) for s in secs]; sys.exit()
    if sys.argv[1]=='f':
        for a in sys.argv[2:]:
            va=int(a,16); b=rd(va,8); print(a,struct.unpack('<f',b[:4])[0],struct.unpack('<d',b)[0])
        sys.exit()
    fn=sys.argv[1].lower().zfill(8)
    for line in open(ASM):
        p=line.rstrip('\n').split('\t')
        if len(p)>=4 and p[3]==fn:
            print(p[0],p[2]+ann(p[2]))
