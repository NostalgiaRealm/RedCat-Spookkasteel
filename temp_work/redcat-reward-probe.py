from pathlib import Path
import re,struct,sys
b=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat').read_bytes()
def s(a):
 o=a-0x400000
 if not 0<=o<len(b):return ''
 v=b[o:o+100].split(b'\0')[0]
 return v.decode('ascii') if len(v)>3 and all(32<=c<127 for c in v) else ''
def f(a):
 o=a-0x400000
 return struct.unpack_from('<f',b,o)[0] if 0<=o<len(b)-4 else None
lo,hi=[int(a,16) for a in sys.argv[1:3]]
for line in open('/tmp/redcat-native-score-disasm.txt'):
 m=re.match(r'  ([0-9a-f]+):',line)
 if not m or not lo<=int(m[1],16)<hi:continue
 if '\tnop' in line:continue
 notes=[]
 for a in re.findall(r'0x[0-9a-f]{6}',line):
  a=int(a,16)
  if a>=0x64a000:notes.append(s(a) or str(f(a)))
 # Strip instruction bytes.
 fields=line.rstrip().split('\t');print(fields[0]+' '+(' '.join(fields[2:]))+(' // '+'; '.join(notes) if notes else ''))
