from pathlib import Path
import pefile, capstone, struct, hashlib
src=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat')
out=Path(__file__).parent
raw=src.read_bytes(); pe=pefile.PE(data=raw); base=pe.OPTIONAL_HEADER.ImageBase
md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32)
def read(va,n):return pe.get_data(va-base,n)
def dump(name,a,b):
    with (out/name).open('w') as f:
        for i in md.disasm(read(a,b-a),a): f.write(f'{i.address:08x}: {i.mnemonic:<9} {i.op_str}\n')
for name,a,b in [('player-frame.asm',0x432420,0x433798),('player-floor-and-drop.asm',0x4363a0,0x4366b0),('player-shoot.asm',0x4348b0,0x434f20),('player-ctor.asm',0x430640,0x431050),('animation-wrapper.asm',0x42e240,0x42e340),('animation-engine.asm',0x4a0660,0x4a0d40),('floor-probe.asm',0x4d6720,0x4d6820),('input-vtable.asm',0x4374a0,0x437840),('script-registration.asm',0x527650,0x527880),('script-motion-hint.asm',0x56b510,0x56b7e0),('script-cutscene.asm',0x569ed0,0x56a2b0),('script-portal-show.asm',0x56a4a0,0x56aab0),('player-hint-and-respawn.asm',0x436f40,0x437060),('shoot-state-end.asm',0x431820,0x4318c0),('animation-normalized-time.asm',0x4a1060,0x4a10d0),('cutscene-runtime.asm',0x4819f0,0x481c60)]:dump(name,a,b)
with (out/'constants.txt').open('w') as f:
    f.write(f'SHA256 {hashlib.sha256(raw).hexdigest()}\n')
    for a in range(0x6900e0,0x6901f0,4):
        p=struct.unpack('<I',read(a,4))[0]
        if base<=p<0x700000:
            s=read(p,80).split(b'\0')[0]
            f.write(f'{a:08x} -> {p:08x} {s!r}\n')
    for a in range(0x433758,0x433794,4):
        f.write(f'{a:08x} {read(a,4).hex()} {struct.unpack("<I",read(a,4))[0]:08x}\n')
print(out)
