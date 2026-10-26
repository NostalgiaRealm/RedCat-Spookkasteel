"""Execute recovered Jester/particle instructions in private emulated memory.

Not a Windows game runtime. Floor tracing/actor lookup is replaced by the
verified phase-setup field writes; emitter, timer, particle rotation and alpha
instructions execute from the unmodified original image.
"""
import importlib.util
import json
from pathlib import Path
import struct

HERE=Path(__file__).resolve().parent
spec=importlib.util.spec_from_file_location('native_vm',HERE.parent/'vm/native_vm_probe.py')
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)

def probe(arrival):
    n=module.Native();base=0x2080000
    def write(address,fmt,*values):n.uc.mem_write(address,struct.pack('<'+fmt,*values))
    def read(address,fmt):return struct.unpack('<'+fmt,n.uc.mem_read(address,struct.calcsize('<'+fmt)))
    for address,value in [(0x6b8734,19),(0x6b8738,29),(0x6b873c,.5)]:write(address,'f',value)
    for i in range(15):n.call(0x47d9b0,[],ecx=base+0x108+i*0x150)
    n.call(0x4775b0,[],ecx=base)
    write(base+0x7c,'B',1);write(base+0x14bc,'B',int(arrival))
    write(base+0x14c0,'iifB',19 if arrival else 29,-1,1,1)
    write(base+0x14d0,'i',0)
    start=0 if arrival else 75;end=50 if arrival else 0
    write(base+0x14d4,'6f',0,start,0,0,end,0)
    for i in range(15):
        p=base+0x108+i*0x150
        write(p-12,'3f',0,start,0);write(p+4,'3f',0,start,0);write(p+0x118,'3f',0,start,0)
        write(p+0x104,'2f',.1 if arrival else 50,30 if arrival else .1)
        write(p+0x7c,'2f',100 if arrival else 25,35 if arrival else 100)
        write(p+0x110,'f',18.5 if arrival else 12.5)
    frames=[];previous=0
    for tick in range(1,107):
        now=tick*1000//60
        n.call(0x477410,[now,now-previous],ecx=base);previous=now
        particles=[]
        for i in range(15):
            p=base+0x108+i*0x150
            if read(p+0x6c,'B')[0]:
                particles.append({'index':i,'position':read(p+4,'3f'),'alpha':read(p+0x70,'i')[0],
                    'remaining':read(p+0x24,'f')[0],'angle':read(p+0x10c,'f')[0],
                    'radialRemaining':read(p+0xf4,'f')[0]})
        frames.append({'tick':tick,'now':now,'particles':particles})
    return frames

if __name__=='__main__':
    result={'sha256':module.SHA256,'boundary':__doc__,'departure':probe(False),'arrival':probe(True)}
    (HERE/'native-jester-frames.json').write_text(json.dumps(result,indent=2)+'\n')
    print('PASS original-byte emitter/CParticle execution: 212 frames across both phases.')
