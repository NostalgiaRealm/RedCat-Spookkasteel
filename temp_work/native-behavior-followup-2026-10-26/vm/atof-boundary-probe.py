#!/usr/bin/env python3
import json,struct,subprocess
from pathlib import Path
from native_vm_probe import Native,OUT
n=Native()
code=b'\x68'+struct.pack('<I',0x2020000)+b'\xb8'+struct.pack('<I',0x60ea4c)+b'\xff\xd0\x83\xc4\x04\xdd\x1d'+struct.pack('<I',0x2021000)+b'\xc3'
n.uc.mem_write(0x2022000,code)
inputs=['',' ','-','+','.','-.','-x','+x','-0x2','1D-2','1e','1e+','1e-','1d++2','.5','-.5',' \t\f+3.0','\u2026.2','\r\n2','1e+02rest','-1e-999','-.e9','+.0D-2','1\x002']
cases=[]
for text in inputs:
 n.uc.mem_write(0x2020000,text.encode('cp1252')+b'\0');n.call(0x2022000,[])
 bits=bytes(n.uc.mem_read(0x2021000,8)).hex();cases.append({'text':text,'nativeBits':bits})
js="import {daviUnary} from './src/davi-vm.js';let s='';for await(const c of process.stdin)s+=c;console.log(JSON.stringify(JSON.parse(s).map(text=>{const a=new ArrayBuffer(8);new DataView(a).setFloat64(0,daviUnary(7,{type:3,value:text}).value,true);return Array.from(new Uint8Array(a),b=>b.toString(16).padStart(2,'0')).join('')})));"
actual=json.loads(subprocess.check_output(['node','--input-type=module','-e',js],input=json.dumps(inputs).encode(),cwd=OUT.parents[2]))
for c,v in zip(cases,actual):c['portableBits']=v;c['match']=c['nativeBits']==v
result={'cases':cases,'mismatches':sum(not c['match'] for c in cases)}
(OUT/'atof-boundary-probe.json').write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(result,indent=2))
