"""Read-only native evidence extraction. Run from the repository root."""
from pathlib import Path
import hashlib
import json
import re
import struct

ROOT = Path(__file__).resolve().parent
EXE = Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat')
DISASM = ROOT.parent / 'redcat-native-score-disasm.txt'
RANGES = {
    'touch-state': (0x40ab80, 0x40b060),
    'movement-states': (0x596640, 0x5974d0),
    'movement-steering': (0x5997e0, 0x59a1b0),
    'movement-target': (0x595c80, 0x595d30),
    'movement-predicates': (0x596c40, 0x596e90),
    'movement-angle-math': (0x5b1600, 0x5b1740),
    'movement-distance': (0x5b30a0, 0x5b30c0),
    'movement-point-fields': (0x597a00, 0x597c00),
    'movement-point-distance': (0x597fa0, 0x597fd0),
    'movement-entry': (0x596150, 0x596880),
    'movement-route': (0x59bc20, 0x59c0c0),
    'movement-manager-update': (0x5969b0, 0x596c40),
    'movement-bearing': (0x5b15f0, 0x5b1623),
    'movement-vector-sub': (0x5b2e40, 0x5b3070),
    'movement-collision-flag': (0x597a00, 0x597c00),
    'movement-waypoint-update': (0x59be60, 0x59c0c0),
    'movement-point-busy': (0x598570, 0x598670),
    'movement-point-state': (0x59b450, 0x59b730),
    'movement-set-target': (0x59bac0, 0x59bc20),
    'movement-dispatch': (0x595c30, 0x595c80),
    'guardian-constructor': (0x40d660, 0x40d7b0),
    'touch-enemy-init-contact': (0x42dc80, 0x42df40),
    'cursor-constructor-call': (0x427680, 0x4277a0),
    'touch-main-transition': (0x403070, 0x4032e0),
    'enemy-perception-predicates': (0x422f30, 0x422fb0),
    'cursor-sense-settings': (0x4258a0, 0x425d30),
    'cursor-spawn-attachment': (0x595b30, 0x595c30),
    'cursor-place-at-point': (0x59b980, 0x59bac0),
    'cursor-destination-reservation': (0x59b730, 0x59b980),
    'enemy-death-cursor-release': (0x429900, 0x429940),
    'cursor-actor-constructor': (0x421fa0, 0x422190),
    'cursor-copy-position-to-actor': (0x595f60, 0x595f80),
    'actor-set-position': (0x49bb70, 0x49bbc1),
    'cursor-actor-frame-update': (0x422240, 0x4223d0),
    'enemy-position-proxies': (0x423650, 0x4236b0),
    'enemy-frame-update': (0x422fb0, 0x423280),
    'enemy-movement-animation-update': (0x427eb0, 0x428190),
    'enemy-turn-toward-target': (0x429150, 0x429440),
    'green-bat-constructor': (0x415680, 0x4157e0),
    'green-bat-initializer': (0x4158f0, 0x415950),
    'green-bat-main-state': (0x404470, 0x404500),
    'random-neighbor-state': (0x5977d0, 0x5979d0),
}
streams = {name: (ROOT / (name + '.asm')).open('w') for name in RANGES}
for line in DISASM.open():
    match = re.match(r'\s*([0-9a-f]+):', line)
    if not match:
        continue
    address = int(match[1], 16)
    for name, (low, high) in RANGES.items():
        if low <= address < high:
            streams[name].write(line)
for stream in streams.values():
    stream.close()

binary = EXE.read_bytes()
pe = struct.unpack_from('<I', binary, 0x3c)[0]
count = struct.unpack_from('<H', binary, pe + 6)[0]
optional_size = struct.unpack_from('<H', binary, pe + 20)[0]
base = struct.unpack_from('<I', binary, pe + 52)[0]
sections = [struct.unpack_from('<8sIIIIIIHHI', binary, pe + 24 + optional_size + index * 40)
            for index in range(count)]

def read(address, length=4):
    for _, virtual_size, virtual_address, raw_size, offset, *_ in sections:
        if virtual_address <= address - base < virtual_address + max(virtual_size, raw_size):
            start = offset + address - base - virtual_address
            return binary[start:start + length]
    raise ValueError(hex(address))

def u32(address):
    return struct.unpack('<I', read(address))[0]

def string(address):
    return read(address, 300).split(b'\0')[0].decode('latin1')

def table(address, count=3):
    locator = u32(address - 4)
    descriptor = u32(locator + 12)
    return {'rtti': string(descriptor + 8),
            'methods': [hex(u32(address + index * 4)) for index in range(count)]}

result = {
    'exe': str(EXE),
    'sha256': hashlib.sha256(binary).hexdigest(),
    'floats': {hex(address): struct.unpack('<f', read(address))[0]
               for address in [0x64d910, 0x64a450, 0x64d654, 0x64b1d8, 0x64a95c]},
    'scoreLimit': struct.unpack('<f', struct.pack('<I', 0x47c34ff3))[0],
    'vtables': {hex(address): table(address, count)
                for address, count in [(0x650028, 3), (0x650038, 3), (0x650048, 3),
                                       (0x64abc0, 45), (0x64c274, 45), (0x64aa6c, 4),
                                       (0x64aa38, 12), (0x64a618, 12), (0x64bc08, 35),
                                       (0x64b2c4, 45), (0x650078, 3), (0x64a4a4, 12)]},
}
(ROOT / 'bat-native-constants.json').write_text(json.dumps(result, indent=2) + '\n')
strings = {hex(address): string(address) for address in [
    0x6a70c8, 0x6a722c, 0x6a7278, 0x6a7258, 0x6a7244, 0x6a6c98,
    0x6a6c84, 0x6a6ad8, 0x6a6aa8, 0x69532c, 0x68d2d0, 0x68e354,
    0x68e58c, 0x6a71ac, 0x6a719c, 0x6a705c, 0x6a7088,
    0x68fb04, 0x68faf8, 0x68f3fc, 0x68faec]}
(ROOT / 'bat-native-strings.json').write_text(json.dumps(strings, indent=2) + '\n')
settings = EXE.parent / 'Settings' / 'Game.ini'
lines = settings.read_text().splitlines()
cursor_line = lines.index('[CursorActor]')
(ROOT / 'native-cursor-settings.txt').write_text('\n'.join(
    f'{index + 1}: {lines[index]}' for index in range(cursor_line, cursor_line + 2)) + '\n')
print(f'Extracted {len(RANGES)} focused disassembly files; verified {result["sha256"]}.')
