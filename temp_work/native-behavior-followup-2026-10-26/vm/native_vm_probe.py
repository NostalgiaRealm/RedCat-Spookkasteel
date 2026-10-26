#!/usr/bin/env python3
"""Bounded original-byte kernel execution, not a game or Windows runtime.

Run with re-python. Originals are read-only. Only mapped private memory changes.
The probe executes the shipped CRT and string comparator, never host OS calls.
"""
import hashlib
import json
from pathlib import Path
import struct

import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_MEM_INVALID, UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_ECX, UC_X86_REG_EAX, UC_X86_REG_EIP, UC_X86_REG_FPCW

BINARY = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat')
SHA256 = 'e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5'
OUT = Path(__file__).resolve().parent

class Native:
    def __init__(self):
        raw = BINARY.read_bytes()
        assert hashlib.sha256(raw).hexdigest() == SHA256
        pe = pefile.PE(data=raw)
        self.uc = Uc(UC_ARCH_X86, UC_MODE_32)
        self.uc.mem_map(pe.OPTIONAL_HEADER.ImageBase, (pe.OPTIONAL_HEADER.SizeOfImage + 4095) & ~4095)
        self.uc.mem_write(pe.OPTIONAL_HEADER.ImageBase, pe.get_memory_mapped_image())
        self.uc.mem_map(0, 0x1000)  # private zero FS/SEH area; no process state
        self.uc.mem_map(0x1000000, 0x100000)
        self.uc.mem_map(0x2000000, 0x100000)
        self.uc.reg_write(UC_X86_REG_FPCW, 0x37f)
        self.visited = set()
        self.uc.hook_add(UC_HOOK_CODE, lambda uc, address, size, data: self.visited.add(address))
        self.call(0x60a4d6, [])  # shipped CRT floating formatter startup pointers

    def call(self, address, args, ecx=0):
        sp = 0x10ff000
        self.uc.mem_write(sp, struct.pack('<' + 'I' * (len(args) + 1), 0x20ff000, *args))
        self.uc.reg_write(UC_X86_REG_ESP, sp)
        self.uc.reg_write(UC_X86_REG_ECX, ecx)
        self.uc.emu_start(address, 0x20ff000, timeout=1000000, count=500000)
        assert self.uc.reg_read(UC_X86_REG_EIP) == 0x20ff000, 'probe instruction/time budget exceeded'
        return self.uc.reg_read(UC_X86_REG_EAX)

    def format(self, value):
        self.uc.mem_write(0x2000000, b'\0' * 512)
        self.uc.mem_write(0x2001000, struct.pack('<d', value))
        self.call(0x60df9f, [0x2000000, 0x6b1798, 0x2001000])
        return bytes(self.uc.mem_read(0x2000000, 512)).split(b'\0')[0].decode('ascii')

    def integer(self, value):
        self.uc.mem_write(0x2002000, value.encode('cp1252') + b'\0')
        result = self.call(0x60af10, [0x2002000])
        return struct.unpack('<i', struct.pack('<I', result))[0]

    def compare(self, a, b):
        for base, value in [(0x2003000, a), (0x2004000, b)]:
            data = value.encode('cp1252')
            self.uc.mem_write(base, struct.pack('<4I', 0, base + 64, len(data), len(data)))
            self.uc.mem_write(base + 64, data + b'\0')
        result = self.call(0x484b80, [0x2004000], ecx=0x2003000)
        return struct.unpack('<i', struct.pack('<I', result))[0]

    def binary(self, operator, kind, a, b):
        for base, value in [(0x2005000, a), (0x2006000, b)]:
            self.uc.mem_write(base, struct.pack('<4I', 0, 0, kind, 0) + (struct.pack('<d', value) if kind == 1 else struct.pack('<i', value)))
        self.uc.mem_write(0x2007000, b'\0' * 32)
        self.uc.mem_write(0x10f0000, b'\0' * 65536)
        self.call(0x5f8990, [0x2007000, operator, 0x2005000, 0x2006000])
        kind = struct.unpack('<I', self.uc.mem_read(0x2007008, 4))[0]
        value = struct.unpack('<d' if kind == 1 else '<i', self.uc.mem_read(0x2007010, 8 if kind == 1 else 4))[0]
        return {'type': kind, 'value': value}

    def unary_number(self, operator, kind, value):
        self.uc.mem_write(0x2005000, struct.pack('<4I', 0, 0, kind, 0) + (struct.pack('<d', value) if kind == 1 else struct.pack('<i', value)))
        self.uc.mem_write(0x2007000, b'\0' * 32)
        self.uc.mem_write(0x10f0000, b'\0' * 65536)
        self.call(0x5fc480, [0x2007000, operator, 0x2005000])
        kind = struct.unpack('<I', self.uc.mem_read(0x2007008, 4))[0]
        value = struct.unpack('<d' if kind == 1 else '<i', self.uc.mem_read(0x2007010, 8 if kind == 1 else 4))[0]
        return {'type': kind, 'value': value}

if __name__ == '__main__':
    native = Native()
    result = {'sha256': SHA256, 'boundary': 'Unicorn original-byte CRT/comparator execution with private mapped image, stack, C-locale globals and zero SEH; no original game loop or Windows runtime.'}
    try:
        result['integers'] = [[s, native.integer(s)] for s in ['123', '-42', '2147483648', '999999999999999999999999999999', '\u00a0123', '\t 12tail', '12\0' + '34']]
        result['comparisons'] = [[a, b, native.compare(a, b)] for a, b in [('€', 'é'), ('abc\0z', 'abc\0x'), ('A', 'a'), ('', 'x'), ('abc', 'ab')]]
        result['formats'] = [[repr(x), native.format(x)] for x in [0., -0., 1., 123456., 1234567., .0001, .00001, .00009999999, 999999.5, 1.234565, -1.234565, 1e100, 1e-100, 1.7976931348623157e308, 5e-324, float('inf'), float('-inf'), float('nan')]]
    except Exception as error:
        result['error'] = f'{type(error).__name__}: {error}'
        result['eip'] = hex(native.uc.reg_read(UC_X86_REG_EIP))
    result['instructions_visited'] = len(native.visited)
    (OUT / 'native-vm-probe.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps(result, indent=2))
    if 'error' in result:
        raise SystemExit(1)
