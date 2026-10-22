00405c20: mov       eax, dword ptr [esp + 8]
00405c24: push      esi
00405c25: push      edi
00405c26: mov       edi, dword ptr [esp + 0xc]
00405c2a: push      eax
00405c2b: mov       esi, ecx
00405c2d: push      edi
00405c2e: call      0x403ed0
00405c33: mov       dword ptr [esi + 0x38], edi
00405c36: mov       dword ptr [esi], 0x64a698
00405c3c: mov       eax, esi
00405c3e: pop       edi
00405c3f: pop       esi
00405c40: ret       8
00405c43: nop       
00405c44: nop       
00405c45: nop       
00405c46: nop       
00405c47: nop       
00405c48: nop       
00405c49: nop       
00405c4a: nop       
00405c4b: nop       
00405c4c: nop       
00405c4d: nop       
00405c4e: nop       
00405c4f: nop       
00405c50: mov       eax, dword ptr [esp + 4]
00405c54: push      esi
00405c55: mov       esi, ecx
00405c57: push      eax
00405c58: call      0x403ff0
00405c5d: fld       dword ptr [esi + 0x30]
00405c60: fild      dword ptr [esi + 0x28]
00405c63: fmul      st(1)
00405c65: call      0x60ab20
00405c6a: mov       ecx, dword ptr [esi + 0x38]
00405c6d: push      eax
00405c6e: fstp      st(0)
00405c70: call      0x4288c0
00405c75: mov       ecx, eax
00405c77: call      0x5966a0
00405c7c: mov       ecx, dword ptr [esi + 0x38]
00405c7f: call      0x428b10
00405c84: pop       esi
00405c85: ret       4
00405c88: nop       
00405c89: nop       
00405c8a: nop       
00405c8b: nop       
00405c8c: nop       
00405c8d: nop       
00405c8e: nop       
00405c8f: nop       
00405c90: push      esi
00405c91: mov       esi, ecx
00405c93: mov       ecx, dword ptr [esi + 0x38]
00405c96: call      0x4288c0
00405c9b: mov       ecx, eax
00405c9d: call      0x596c40
00405ca2: test      al, al
00405ca4: je        0x405cb5
00405ca6: mov       ecx, dword ptr [esi + 0x38]
00405ca9: call      0x428b40
00405cae: mov       ecx, esi
00405cb0: call      0x402d00
00405cb5: pop       esi
00405cb6: ret       8
00405cb9: nop       
00405cba: nop       
00405cbb: nop       
00405cbc: nop       
00405cbd: nop       
00405cbe: nop       
00405cbf: nop       
00405cc0: push      -1
00405cc2: push      0x61ffe0
00405cc7: mov       eax, dword ptr fs:[0]
00405ccd: push      eax
00405cce: mov       dword ptr fs:[0], esp
00405cd5: sub       esp, 0x14
00405cd8: mov       eax, dword ptr [esp + 0x24]
00405cdc: push      ebp
00405cdd: push      esi
00405cde: mov       ebp, ecx
00405ce0: push      eax
00405ce1: mov       dword ptr [esp + 0xc], ebp
00405ce5: call      0x405530
00405cea: mov       eax, dword ptr [esp + 0x30]
00405cee: xor       esi, esi
00405cf0: cmp       eax, -1
00405cf3: mov       dword ptr [esp + 0x24], esi
00405cf7: je        0x405daf
00405cfd: cmp       eax, esi
00405cff: jge       0x405daf
00405d05: mov       cl, byte ptr [esp + 0x30]
00405d09: push      ebx
00405d0a: push      edi
00405d0b: mov       byte ptr [esp + 0x14], cl
00405d0f: mov       edi, 0x6b3f70
00405d14: or        ecx, 0xffffffff
00405d17: xor       eax, eax
00405d19: push      1
00405d1b: repne scasb al, byte ptr es:[edi]
00405d1d: not       ecx
00405d1f: dec       ecx
00405d20: mov       dword ptr [esp + 0x1c], esi
00405d24: mov       ebx, ecx
00405d26: lea       ecx, [esp + 0x18]
00405d2a: push      ebx
00405d2b: mov       dword ptr [esp + 0x24], esi
00405d2f: mov       dword ptr [esp + 0x28], esi
00405d33: call      0x401940
00405d38: test      al, al
00405d3a: je        0x405d63
00405d3c: mov       edi, dword ptr [esp + 0x18]
00405d40: mov       ecx, ebx
00405d42: mov       edx, ecx
00405d44: mov       esi, 0x6b3f70
00405d49: shr       ecx, 2
00405d4c: rep movsd dword ptr es:[edi], dword ptr [esi]
00405d4e: mov       ecx, edx
00405d50: and       ecx, 3
00405d53: rep movsb byte ptr es:[edi], byte ptr [esi]
00405d55: mov       eax, dword ptr [esp + 0x18]
00405d59: mov       dword ptr [esp + 0x1c], ebx
00405d5d: xor       esi, esi
00405d5f: mov       byte ptr [ebx + eax], 0
00405d63: lea       ecx, [esp + 0x14]
00405d67: mov       byte ptr [esp + 0x2c], 1
00405d6c: push      ecx
00405d6d: push      0x56
00405d6f: push      0x68d4c8
00405d74: push      0x68d490
00405d79: call      0x5a07f0
00405d7e: call      eax
00405d80: mov       eax, dword ptr [esp + 0x28]
00405d84: add       esp, 0x10
00405d87: cmp       eax, esi
00405d89: mov       byte ptr [esp + 0x2c], 0
00405d8e: pop       edi
00405d8f: pop       ebx
00405d90: je        0x405daf
00405d92: lea       ecx, [eax - 1]
00405d95: mov       al, byte ptr [eax - 1]
00405d98: test      al, al
00405d9a: je        0x405da6
00405d9c: cmp       al, 0xff
00405d9e: je        0x405da6
00405da0: dec       al
00405da2: mov       byte ptr [ecx], al
00405da4: jmp       0x405daf
00405da6: push      ecx
00405da7: call      0x5fe5f0
00405dac: add       esp, 4
00405daf: mov       edx, dword ptr [esp + 0x30]
00405db3: mov       ecx, dword ptr [esp + 0x2c]
00405db7: mov       dword ptr [ebp + 0x30], edx
