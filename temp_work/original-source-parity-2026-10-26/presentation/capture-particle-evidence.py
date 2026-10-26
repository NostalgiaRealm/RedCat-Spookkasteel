#!/usr/bin/env python3
"""Read-only native excerpts for the 26 October presentation comparison."""
import hashlib
import json
from pathlib import Path
import struct
import subprocess

native = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat')
output = Path(__file__).resolve().parent
data = native.read_bytes()
pe = struct.unpack_from('<I', data, 0x3c)[0]
count = struct.unpack_from('<H', data, pe+6)[0]
optional_size = struct.unpack_from('<H', data, pe+20)[0]
base = struct.unpack_from('<I', data, pe+24+28)[0]
sections=[]
for index in range(count):
    p=pe+24+optional_size+index*40
    size,rva,raw_size,raw=struct.unpack_from('<IIII',data,p+8)
    sections.append((rva,raw_size,raw))
def read(va,fmt):
    rva=va-base
    for start,size,raw in sections:
        if start<=rva and rva+struct.calcsize(fmt)<=start+size:
            return struct.unpack_from(fmt,data,raw+rva-start)[0]
    raise ValueError(hex(va))

ranges=[
    ('particle-initialize',0x47db60,0x47dd60),
    ('particle-lifetime-fade-update',0x47dd60,0x47defc),
    ('particle-start-restart-timers',0x47e710,0x47e850),
    ('fairy-secondary-particle-initialize',0x47c989,0x47ca89),
    ('portal-secondary-particle-initialize',0x475270,0x475438),
    ('portal-burst-restart',0x474f20,0x475030),
    ('portal-seek-restart',0x475720,0x475820),
    ('portal-runtime-duration-initializers',0x471b80,0x471bc3),
]
for name,start,end in ranges:
    result=subprocess.run(['objdump','-d','-Mintel',f'--start-address={start}',f'--stop-address={end}',str(native)],capture_output=True,text=True,check=True)
    (output/f'{name}.asm').write_text(result.stdout)
record={
    'original':str(native),'sha256':hashlib.sha256(data).hexdigest(),
    'constants':{hex(va):read(va,fmt) for va,fmt in [(0x64e338,'<f'),(0x64e328,'<d'),(0x64b79c,'<f'),(0x64e038,'<f'),(0x64c568,'<d'),(0x64d9d0,'<d')]},
    'runtimeGlobals':{
        '0x6b8688':{'initializedAt':'0x471bb0','value':struct.unpack('<f',struct.pack('<f',read(0x64e038,'<f')*read(0x64d9d0,'<d')))[0]},
        '0x6b868c':{'initializedAt':'0x471b80','value':struct.unpack('<f',struct.pack('<f',read(0x64e038,'<f')*read(0x64c568,'<d')))[0]},
    },
    'ranges':[{'name':name,'start':hex(start),'endExclusive':hex(end)} for name,start,end in ranges],
    'readOnlyOriginal':True,
}
(output/'native-particle-evidence.json').write_text(json.dumps(record,indent=2)+'\n')
print(json.dumps(record,indent=2))
