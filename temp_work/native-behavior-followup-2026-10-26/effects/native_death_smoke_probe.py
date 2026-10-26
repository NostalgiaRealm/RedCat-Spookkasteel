"""Execute original death-smoke construction and CParticle update bytes.

The parent engine pointer is a private nonzero sentinel; this particle's mode-1
no-collision path does not dereference it. The native launch is replaced by a
zero anchor/velocity so the recovered acceleration and clock can be isolated.
"""
import json
from pathlib import Path
import struct
from native_jester_probe import module

HERE=Path(__file__).resolve().parent
n=module.Native();base=0x2080000
def write(address,fmt,*values):n.uc.mem_write(address,struct.pack('<'+fmt,*values))
def read(address,fmt):return struct.unpack('<'+fmt,n.uc.mem_read(address,struct.calcsize('<'+fmt)))
write(0x6c8de0,'I',0x20e0000)
for i in range(15):n.call(0x47d9b0,[],ecx=base+0xfc+i*0x144)
n.call(0x46e6c0,[],ecx=base)
p=base+0xfc;n.call(0x47e710,[],ecx=p)
frames=[];previous=0
for tick in range(1,423):
    now=tick*1000//60;n.call(0x47dd60,[now,now-previous],ecx=p);previous=now
    frames.append({'tick':tick,'now':now,'active':read(p+0x6c,'B')[0],
        'position':read(p+4,'3f'),'velocity':read(p+0x10,'3f'),'alpha':read(p+0x70,'i')[0],
        'remaining':read(p+0x24,'f')[0]})
(HERE/'native-death-smoke-frames.json').write_text(json.dumps({'sha256':module.SHA256,'boundary':__doc__,'frames':frames},indent=2)+'\n')
print('PASS original death-smoke constructor and 422 CParticle ticks in private mapped memory.')
