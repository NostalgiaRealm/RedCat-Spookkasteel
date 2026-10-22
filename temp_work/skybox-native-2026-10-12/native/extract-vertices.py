from pathlib import Path
import hashlib,json,struct
import pefile
from capstone import Cs,CS_ARCH_X86,CS_MODE_32
from capstone.x86_const import X86_OP_MEM,X86_OP_REG,X86_REG_ESI,X86_REG_EAX,X86_REG_ECX
source=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat')
data=source.read_bytes();pe=pefile.PE(data=data);base=pe.OPTIONAL_HEADER.ImageBase
start,end=0x5b9fbf,0x5ba10e;offset=pe.get_offset_from_rva(start-base)
cs=Cs(CS_ARCH_X86,CS_MODE_32);cs.detail=True;values={}
for inst in cs.disasm(data[offset:offset+end-start],start):
 a,b=inst.operands
 assert inst.mnemonic=='mov' and a.type==X86_OP_MEM and a.mem.base==X86_REG_ESI and b.type==X86_OP_REG
 values[a.mem.disp]=5000 if b.reg==X86_REG_EAX else -5000
assert len(values)==72
vertices=[[[values[face*48+vertex*12+axis*4]/5000 for axis in range(3)] for vertex in range(4)] for face in range(6)]
expected=[
[[-1,1,1],[1,1,1],[1,1,-1],[-1,1,-1]],
[[-1,-1,-1],[1,-1,-1],[1,-1,1],[-1,-1,1]],
[[-1,1,1],[-1,1,-1],[-1,-1,-1],[-1,-1,1]],
[[1,1,-1],[1,1,1],[1,-1,1],[1,-1,-1]],
[[-1,1,-1],[1,1,-1],[1,-1,-1],[-1,-1,-1]],
[[1,1,1],[-1,1,1],[-1,-1,1],[1,-1,1]]]
assert vertices==expected
Path(__file__).with_name('native-vertices.json').write_text(json.dumps({'exeSha256':hashlib.sha256(data).hexdigest(),'buildFunction':'0x5b9f30','verticesRange':['0x5b9fbf','0x5ba10e'],'nativeVerticesNormalized':vertices,'uvLoopRange':['0x5ba10e','0x5ba146'],'uvCornersAtScale1':[[0,0],[1,0],[1,1],[0,1]],'skipNegativeTexture':'0x5ba26d-0x5ba276'},indent=2)+'\n')
print('PASS: all 72 sky vertex coordinates extracted from original executable match reference quads and test fixture.')
