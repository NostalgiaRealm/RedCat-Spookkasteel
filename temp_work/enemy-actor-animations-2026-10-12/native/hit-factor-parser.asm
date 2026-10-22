00425ed7: lea       ecx, [esp + 0x14]
00425edb: mov       byte ptr [esp + 0xbc], bl
00425ee2: call      0x4040a0
00425ee7: mov       cl, byte ptr [esp + 0xf]
00425eeb: push      0
00425eed: mov       byte ptr [esp + 0x14], cl
00425ef1: lea       ecx, [esp + 0x14]
00425ef5: call      0x4040a0
00425efa: mov       edi, 0x68fb60
00425eff: or        ecx, 0xffffffff
00425f02: xor       eax, eax
00425f04: repne scasb al, byte ptr es:[edi]
00425f06: not       ecx
00425f08: dec       ecx
00425f09: push      ecx
00425f0a: push      0x68fb60
00425f0f: lea       ecx, [esp + 0x18]
00425f13: call      0x4040f0
00425f18: lea       edx, [esp + 0x30]
00425f1c: push      0
00425f1e: push      edx
00425f1f: lea       eax, [esp + 0x28]
00425f23: push      0x3f800000
00425f28: lea       ecx, [esp + 0x1c]
00425f2c: push      eax
00425f2d: push      ecx
00425f2e: lea       ecx, [esp + 0x58]
00425f32: mov       byte ptr [esp + 0xcc], 6
00425f3a: call      0x5ac8b0
00425f3f: mov       edi, eax
00425f41: fld       dword ptr [edi + 0x60]
00425f44: fcomp     dword ptr [0x64a450]
00425f4a: mov       byte ptr [esp + 0xb8], 7
00425f52: fnstsw    ax
00425f54: test      ah, 0x40
00425f57: je        0x425f6f
00425f59: lea       edx, [esp + 0xf]
00425f5d: lea       eax, [edi + 0x14]
00425f60: push      edx
00425f61: push      eax
00425f62: call      0x5ad390
00425f67: fst       dword ptr [edi + 0x60]
00425f6a: add       esp, 8
00425f6d: jmp       0x425f72
00425f6f: fld       dword ptr [edi + 0x60]
00425f72: fstp      dword ptr [esi + 0x34]
00425f75: lea       ecx, [esp + 0x44]
00425f79: mov       byte ptr [esp + 0xb8], 6
00425f81: call      0x5acca0
00425f86: push      1
00425f88: lea       ecx, [esp + 0x14]
