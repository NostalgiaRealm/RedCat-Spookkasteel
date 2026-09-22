#!/usr/bin/env python3
"""Inventory Davilex Davi-Script 27 objects without executing or decompiling them.

Exports length-prefixed symbol candidates and verified signature layouts. Opcode
semantics and full object boundaries are NOT decoded. Python standard library.
"""
import argparse
import datetime
import hashlib
import json
import re
import struct
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel')
TAGS = {0x03:'stringLiteralCandidate',0x35:'formalVariable',0x36:'namedObjectBinding',
        0x37:'localVariable',0x3b:'scriptFunction',0x3c:'objectMethod',0x3d:'eventDeclaration',
        0x3e:'eventImplementation',0x3f:'runtimeBuiltin',0x41:'nativeExtern',0x42:'class'}
FUNCTION_TAGS = {0x3b,0x3c,0x3d,0x3e,0x3f,0x41}


def u16(data,offset):return struct.unpack_from('<H',data,offset)[0]
def u32(data,offset):return struct.unpack_from('<I',data,offset)[0]


def typed(data,offset):
    kind=data[offset]
    if kind in (0,1,2,3) and data[offset+1]==0xff:
        return {'name':['void','double','int','string'][kind],'code':kind},offset+2
    if kind==4 and data[offset+1:offset+3]==b'\x01\x42':
        return {'name':'object','code':4,'classIndex':u16(data,offset+3)},offset+5
    raise ValueError('Unknown type descriptor')


def signature(data,symbol):
    offset=symbol['stringOffset']+symbol['length']
    try:
        return_type,offset=typed(data,offset)
        count=u32(data,offset);offset+=4
        if count>64:return None
        params=[]
        for _ in range(count):
            if data[offset]!=0x35:return None
            length=u16(data,offset+1);offset+=3
            raw=data[offset:offset+length]
            if not re.fullmatch(rb'[@A-Za-z_][@A-Za-z_0-9]*',raw):return None
            offset+=length
            type_info,offset=typed(data,offset)
            stack_offset=struct.unpack_from('<i',data,offset)[0];offset+=4
            params.append({'name':raw.decode('ascii'),'type':type_info,'stackOffset':stack_offset})
        return {'returnType':return_type,'parameters':params,'endOffset':offset}
    except (ValueError,IndexError,struct.error):
        return None


def inspect_dso(path):
    data=path.read_bytes()
    if len(data)<12 or u32(data,0)!=27:raise ValueError(f'Not a supported Davi-Script 27 object: {path}')
    symbols=[]
    for offset in range(12,len(data)-3):
        tag=data[offset]
        if tag not in TAGS:continue
        length=u16(data,offset+1)
        if not 1<=length<=4096 or offset+3+length>len(data):continue
        raw=data[offset+3:offset+3+length]
        if not all(32<=v<127 for v in raw):continue
        if tag!=3 and not re.fullmatch(rb'[@A-Za-z_][@A-Za-z_0-9]*',raw):continue
        symbol={'offset':offset,'stringOffset':offset+3,'length':length,'tag':tag,'kind':TAGS[tag],'name':raw.decode('ascii')}
        if tag in FUNCTION_TAGS:
            parsed=signature(data,symbol)
            if not parsed:continue
            symbol['signature']=parsed
        symbols.append(symbol)
    timestamp=u32(data,4)
    return {'format':'davi-script-symbol-inventory-v1','source':path.name,'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest(),
            'compilerVersion':u32(data,0),'compileTimestamp':timestamp,'compileTimeUTC':datetime.datetime.fromtimestamp(timestamp,datetime.timezone.utc).isoformat(),
            'thirdDWORD':u32(data,8),'headerHex':data[:32].hex(' '),
            'warning':'Symbol scan and signature inspection only. Not a complete binary parser, decompiler or VM. Numeric opcodes are not interpreted.',
            'symbolCounts':dict(Counter(s['kind'] for s in symbols)),'symbols':symbols,
            'scriptFunctions':[{'name':s['name'],'offset':s['offset'],'signature':s['signature']} for s in symbols if s['tag']==0x3b]}


def inspect_pe(path):
    data=path.read_bytes();pe=u32(data,0x3c)
    if data[:2]!=b'MZ' or data[pe:pe+4]!=b'PE\0\0':raise ValueError('Not a PE executable')
    optional=pe+24;optional_size=u16(data,pe+20);sections=[]
    for i in range(u16(data,pe+6)):
        offset=optional+optional_size+i*40
        name=data[offset:offset+8].split(b'\0')[0].decode('ascii')
        vsize,rva,size,raw=struct.unpack_from('<4I',data,offset+8)
        sections.append({'name':name,'rva':rva,'virtualSize':vsize,'rawOffset':raw,'rawSize':size})
    image_base=u32(data,optional+28)
    def file_offset(rva):
        for section in sections:
            if section['rva']<=rva<section['rva']+section['rawSize']:
                return section['rawOffset']+rva-section['rva']
        raise ValueError('RVA outside file-backed sections')
    imports=[];descriptor=file_offset(u32(data,optional+104))
    while any(data[descriptor:descriptor+20]):
        name_offset=file_offset(u32(data,descriptor+12))
        imports.append(data[name_offset:data.index(b'\0',name_offset)].decode('ascii'));descriptor+=20
    evidence=[]
    needles=re.compile(rb'Davi-Script|Davi-script|daviscript|CDSRuntime|Compiler version|runtimelib version|CALL %s|JP%s|JP %d|BINOP|UNOP|CAST [SDI]->[SDI]|Consts:|Const objs:|Global funcs:|Classes:|DaviSillyParser|AdamScript.cpp')
    for match in re.finditer(rb'[\x20-\x7e\t]{5,}',data):
        if not needles.search(match.group()):continue
        offset=match.start();va=None
        for section in sections:
            if section['rawOffset']<=offset<section['rawOffset']+section['rawSize']:
                va=image_base+section['rva']+offset-section['rawOffset'];break
        references=[]
        if va is not None:
            encoded=struct.pack('<I',va);start=0
            while True:
                found=data.find(encoded,start)
                if found<0:break
                for section in sections:
                    if section['name']=='.text' and section['rawOffset']<=found<section['rawOffset']+section['rawSize']:
                        references.append(image_base+section['rva']+found-section['rawOffset'])
                start=found+1
        evidence.append({'offset':offset,'virtualAddress':va,'text':match.group().decode('ascii'),'textSectionAddressReferences':references})
    return {'source':path.name,'sha256':hashlib.sha256(data).hexdigest(),'imageBase':image_base,'sections':sections,'importDLLs':imports,'evidence':evidence,
            'warning':'Address references are raw immediate-byte matches, not verified instruction cross references.'}


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source',type=Path,default=DEFAULT)
    parser.add_argument('--output',type=Path,default=ROOT/'data'/'scripts')
    args=parser.parse_args();args.output.mkdir(parents=True,exist_ok=True)
    levels=[]
    for path in sorted((args.source/'Levels').glob('*.dso')):
        result=inspect_dso(path);filename=path.stem.lower()+'.json'
        (args.output/filename).write_text(json.dumps(result,indent=2),encoding='utf-8')
        levels.append({'source':path.name,'file':filename,'bytes':result['bytes'],'scriptFunctions':len(result['scriptFunctions']),'symbolCounts':result['symbolCounts']})
        print(f'{path.name}: {len(result["symbols"])} symbol candidates, {len(result["scriptFunctions"])} script functions')
    native=inspect_pe(args.source/'RcHcGame.dat')
    (args.output/'native-runtime.json').write_text(json.dumps(native,indent=2),encoding='utf-8')
    header=(args.source/'Script'/'ScriptGameObject.ds').read_text(encoding='cp1252')
    declarations=[]
    for match in re.finditer(r'^\s*(Extern\s+)?(Procedure|Function|Event)\s+(?:(\w+)\s+)?(\w+)\s*\(([^)]*)\)\s*;',header,re.M|re.I):
        declarations.append({'extern':bool(match[1]),'kind':match[2],'returnType':match[3] or 'void','name':match[4],'parametersSource':match[5].strip()})
    (args.output/'native-api.json').write_text(json.dumps({'source':'ScriptGameObject.ds','declarations':declarations},indent=2),encoding='utf-8')
    (args.output/'index.json').write_text(json.dumps({'format':'davi-script-inventory-v1','levels':levels,'nativeRuntime':'native-runtime.json','nativeApi':'native-api.json'},indent=2),encoding='utf-8')


if __name__=='__main__':main()
