"""Read the spout constants directly from the installed PE image (research only)."""
import json
import struct
from pathlib import Path

source = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat')
data = source.read_bytes()
pe = struct.unpack_from('<I', data, 0x3c)[0]
count = struct.unpack_from('<H', data, pe + 6)[0]
optional_size = struct.unpack_from('<H', data, pe + 20)[0]
base = struct.unpack_from('<I', data, pe + 24 + 28)[0]
sections = pe + 24 + optional_size

def read(va, count=1):
    rva = va - base
    for i in range(count_sections):
        section = sections + i * 40
        virtual_size, section_rva, raw_size, offset = struct.unpack_from('<4I', data, section + 8)
        if section_rva <= rva < section_rva + max(virtual_size, raw_size):
            result = struct.unpack_from('<' + str(count) + 'f', data, offset + rva - section_rva)
            return result[0] if count == 1 else result
    raise ValueError(hex(va))

count_sections = count
constants = {hex(va): read(va) for va in [0x64c574, 0x64d9b8, 0x64d9bc, 0x64b79c, 0x64a2c4, 0x64a430, 0x64d658, 0x64d9dc, 0x64d9d8, 0x64da3c]}
constants['quad'] = {hex(va): read(va, 9) for va in [0x64d928, 0x64d94c, 0x64d970, 0x64d994]}
output = Path(__file__).with_name('native-constants.json')
output.write_text(json.dumps(constants, indent=2) + '\n')
print(output)
