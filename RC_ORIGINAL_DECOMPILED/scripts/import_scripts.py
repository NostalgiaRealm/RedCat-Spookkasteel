#!/usr/bin/env python3
"""Decode Davi-Script 27 objects into portable, fully linked JSON IR.

Originals are read only. Binary grammar is reconstructed from the native loader;
unknown tags, invalid references, truncated records and trailing bytes are errors.
"""
import argparse
import hashlib
import json
import math
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel')
KINDS = {0x32:'variable',0x35:'parameter',0x36:'object',0x37:'local',0x38:'global',0x39:'constant',0x3a:'constant',0x3b:'function',0x3c:'method',0x3d:'event',0x3e:'handler',0x3f:'builtin',0x41:'external',0x42:'class'}

class DaviFormatError(ValueError):
    pass

class Reader:
    def __init__(self, data):
        self.data = data
        self.pos = 0
        self.depth = 0
    def fail(self, message):
        raise DaviFormatError(f'0x{self.pos:x}: {message}')
    def take(self, size):
        if size < 0 or self.pos + size > len(self.data): self.fail(f'truncated read of {size} bytes')
        result = self.data[self.pos:self.pos+size]
        self.pos += size
        return result
    def unpack(self, fmt): return struct.unpack('<'+fmt, self.take(struct.calcsize('<'+fmt)))[0]
    def u8(self): return self.unpack('B')
    def u16(self): return self.unpack('H')
    def i16(self): return self.unpack('h')
    def u32(self): return self.unpack('I')
    def i32(self): return self.unpack('i')
    def f64(self):
        result = self.unpack('d')
        if not math.isfinite(result): self.fail('nonfinite double')
        return result
    def string(self): return self.take(self.u16()).decode('cp1252')
    def reference(self):
        depth = self.u8()
        if depth == 255: return None
        if not 1 <= depth <= 5: self.fail(f'invalid reference depth {depth}')
        return {'path': [{'tag':self.u8(), 'index':self.u16()} for _ in range(depth)]}
    def type(self):
        code = self.u8()
        if code not in range(5): self.fail(f'invalid type {code}')
        return {'code':code, 'name':['void','double','int','string','object'][code], 'classRef':self.reference()}
    def literal(self):
        code = self.u8()
        if code == 0: value = None
        elif code == 1: value = self.f64()
        elif code == 2: value = self.i32()
        elif code == 3: value = self.string()
        elif code == 4: value = self.i32()
        else: self.fail(f'invalid literal type {code}')
        return {'type':code,'value':value}
    def expression(self):
        offset = self.pos
        tag = self.u8()
        result = {'tag':tag, 'offset':offset}
        if tag == 0: result.update(self.literal())
        elif tag == 1:
            result['type'] = self.u8()
            if result['type'] not in (1,2,3,4): self.fail('invalid stack value type')
        elif tag == 2: result['ref'] = self.reference()
        elif tag == 3: pass
        elif tag == 4:
            result['ref'] = self.reference()
            result['callFlag'] = self.u8()
            if result['callFlag'] not in (0,1): self.fail('invalid call flag')
        elif tag == 5:
            result['index'] = self.i16()
            if result['index'] < 0: self.fail('negative temporary register')
        else: self.fail(f'unknown expression tag {tag}')
        return result
    def instruction(self):
        result = {'offset': self.pos, 'opcode': self.u8()}
        op = result['opcode']
        if op in (0,1,2):
            result['target'] = self.i32()
            if op:
                result['whenTruthy'] = self.u8()
                result['a'] = self.expression()
            if op == 2:
                result['b'] = self.expression()
                result['operator'] = self.u8()
        elif op in (3,4,5,6):
            result['destination'] = self.expression()
            result['source'] = self.expression()
            if op in (4,5,6): result['operator'] = self.u8()
            if op == 4: result['rhs'] = self.expression()
        else: self.fail(f'unknown instruction opcode {op}')
        return result
    def collection(self):
        count = self.u32()
        if count > 32767 or count > len(self.data)-self.pos: self.fail(f'invalid collection length {count}')
        return [self.record(i) for i in range(count)]
    def record(self,index):
        if self.depth >= 32: self.fail('record nesting limit exceeded')
        self.depth += 1
        try:
            return self._record(index)
        finally:
            self.depth -= 1
    def _record(self,index):
        result = {'offset':self.pos,'tag':self.u8(),'index':index}
        tag = result['tag']
        if tag not in KINDS: self.fail(f'unsupported record tag 0x{tag:x}')
        result['kind'] = KINDS[tag]
        result['name'] = self.string()
        result['type'] = self.type()
        if tag == 0x42:
            result['variables'] = self.collection()
            result['members'] = self.collection()
        elif tag in (0x35,0x37): result['stackOffset'] = self.i32()
        elif tag in (0x32,0x36): pass
        elif tag in (0x3b,0x3c,0x3d,0x3e,0x3f,0x41):
            result['parameters'] = self.collection()
            if tag in (0x3b,0x3d,0x3e):
                result['locals'] = self.collection()
                count = self.i16()
                if count < 0: self.fail('negative instruction count')
                result['instructions'] = [self.instruction() for _ in range(count)]
                if tag in (0x3d,0x3e): result['handlers'] = self.collection()
                if tag == 0x3e: result['owner'] = self.reference()
        else: self.fail(f'unimplemented record 0x{tag:x}')
        result['endOffset'] = self.pos
        return result

def link_and_validate(program):
    """Resolve native inner-to-outer paths using the loader's collection indices."""
    symbols = {}
    collections = ('classes','globals','constants','objects','functions','variables','members','parameters','locals','handlers')
    def register(container, prefix=''):
        for key in collections:
            for record in container.get(key, []):
                ident = f"{prefix}{record['tag']:02x}:{record['index']}"
                if ident in symbols: raise DaviFormatError(f'duplicate symbol {ident}')
                record['id'] = ident
                symbols[ident] = record
                register(record, ident+'/')
    register(program)
    def resolve(value):
        if isinstance(value,dict):
            if 'path' in value:
                ident = '/'.join(f"{step['tag']:02x}:{step['index']}" for step in reversed(value['path']))
                if ident not in symbols: raise DaviFormatError(f'unresolved symbol reference {ident}')
                target = symbols[ident]
                value.update(id=ident, name=target['name'], kind=target['kind'])
            else:
                for child in value.values(): resolve(child)
        elif isinstance(value,list):
            for child in value: resolve(child)
    resolve(program)
    for record in symbols.values():
        dtype = record['type']
        if dtype['code'] == 4:
            if not dtype['classRef'] or dtype['classRef']['kind'] != 'class': raise DaviFormatError(f'{record["id"]}: invalid object type reference')
        elif dtype['classRef'] is not None: raise DaviFormatError(f'{record["id"]}: primitive type references a class')
        if record['tag'] == 0x3e:
            if record['owner'] is None or record['owner']['kind'] != 'object': raise DaviFormatError(f'{record["id"]}: invalid event owner')
        instructions = record.get('instructions', [])
        for instruction in instructions:
            if 'target' in instruction and instruction['target'] != -2 and not 0 <= instruction['target'] < len(instructions):
                raise DaviFormatError(f'{record["id"]}: jump outside instruction list')
            if 'whenTruthy' in instruction and instruction['whenTruthy'] not in (0,1): raise DaviFormatError(f'{record["id"]}: invalid branch condition')
    program['statistics'] = {
        'records': len(symbols),
        'functions': sum(record['kind']=='function' for record in symbols.values()),
        'handlers': sum(record['kind']=='handler' for record in symbols.values()),
        'instructions': sum(len(record.get('instructions', [])) for record in symbols.values()),
        'objects': len(program['objects']),
    }
    return program


def parse_dso(data):
    reader = Reader(data)
    version = reader.u32()
    if version != 27: reader.fail(f'unsupported Davi-Script version {version}')
    result = {'format':'davi-script-ir-v1','version':version,'compileTimestamp':reader.u32(),'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest()}
    for key in ['classes','globals','constants','objects','functions']:
        result[key] = reader.collection()
    if reader.pos != len(data): reader.fail(f'{len(data)-reader.pos} trailing bytes')
    return link_and_validate(result)

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source',type=Path,default=DEFAULT)
    parser.add_argument('--output',type=Path,default=ROOT/'data'/'davi')
    args = parser.parse_args()
    args.output.mkdir(parents=True,exist_ok=True)
    levels=[]
    for path in sorted((args.source/'Levels').glob('*.dso')):
        result=parse_dso(path.read_bytes())
        result['source']=path.name
        filename=path.stem.lower()+'.json'
        (args.output/filename).write_text(json.dumps(result,indent=2)+'\n')
        levels.append({'id':path.stem.lower(),'file':filename,'sha256':result['sha256']})
        print(f'{path.name}: parsed {result["bytes"]} bytes')
    (args.output/'index.json').write_text(json.dumps({'format':'davi-script-index-v1','levels':levels},indent=2)+'\n')

if __name__=='__main__':main()
