00419b70: push      -1
00419b72: push      0x621608
00419b77: mov       eax, dword ptr fs:[0]
00419b7d: push      eax
00419b7e: mov       dword ptr fs:[0], esp
00419b85: sub       esp, 0x14
00419b88: mov       eax, dword ptr [esp + 0x24]
00419b8c: push      ebx
00419b8d: mov       dword ptr [esp + 4], ecx
00419b91: push      ebp
00419b92: mov       cl, byte ptr [esp + 0x2c]
00419b96: push      esi
00419b97: mov       esi, dword ptr [eax*4 + 0x64b624]
00419b9e: push      edi
00419b9f: mov       byte ptr [esp + 0x14], cl
00419ba3: xor       ebx, ebx
00419ba5: mov       edi, esi
00419ba7: or        ecx, 0xffffffff
00419baa: xor       eax, eax
00419bac: mov       dword ptr [esp + 0x18], ebx
00419bb0: mov       dword ptr [esp + 0x1c], ebx
00419bb4: mov       dword ptr [esp + 0x20], ebx
00419bb8: repne scasb al, byte ptr es:[edi]
00419bba: not       ecx
00419bbc: dec       ecx
00419bbd: push      1
00419bbf: mov       ebp, ecx
00419bc1: lea       ecx, [esp + 0x18]
00419bc5: push      ebp
00419bc6: call      0x401940
00419bcb: test      al, al
00419bcd: je        0x419bee
00419bcf: mov       edi, dword ptr [esp + 0x18]
00419bd3: mov       ecx, ebp
00419bd5: mov       edx, ecx
00419bd7: shr       ecx, 2
00419bda: rep movsd dword ptr es:[edi], dword ptr [esi]
00419bdc: mov       ecx, edx
00419bde: and       ecx, 3
00419be1: rep movsb byte ptr es:[edi], byte ptr [esi]
00419be3: mov       eax, dword ptr [esp + 0x18]
00419be7: mov       dword ptr [esp + 0x1c], ebp
00419beb: mov       byte ptr [eax + ebp], bl
00419bee: mov       ecx, dword ptr [esp + 0x3c]
00419bf2: mov       edx, dword ptr [esp + 0x38]
00419bf6: push      ecx
00419bf7: mov       ecx, dword ptr [esp + 0x14]
00419bfb: lea       eax, [esp + 0x18]
00419bff: push      edx
00419c00: push      eax
00419c01: mov       dword ptr [esp + 0x38], ebx
00419c05: call      0x423700
00419c0a: mov       ecx, eax
00419c0c: call      0x4a0660
00419c11: mov       eax, dword ptr [esp + 0x18]
00419c15: cmp       eax, ebx
00419c17: je        0x419c36
00419c19: lea       ecx, [eax - 1]
00419c1c: mov       al, byte ptr [eax - 1]
00419c1f: cmp       al, bl
00419c21: je        0x419c2d
00419c23: cmp       al, 0xff
00419c25: je        0x419c2d
00419c27: dec       al
00419c29: mov       byte ptr [ecx], al
00419c2b: jmp       0x419c36
00419c2d: push      ecx
00419c2e: call      0x5fe5f0
00419c33: add       esp, 4
00419c36: mov       ecx, dword ptr [esp + 0x24]
00419c3a: pop       edi
00419c3b: pop       esi
00419c3c: pop       ebp
00419c3d: pop       ebx
00419c3e: mov       dword ptr fs:[0], ecx
00419c45: add       esp, 0x20
00419c48: ret       0xc
00419c4b: nop       
00419c4c: nop       
00419c4d: nop       
00419c4e: nop       
00419c4f: nop       
00419c50: mov       eax, dword ptr [esp + 4]
00419c54: sub       eax, 2
00419c57: je        0x419c87
00419c59: dec       eax
00419c5a: je        0x419c73
00419c5c: dec       eax
00419c5d: jne       0x419c98
00419c5f: push      0x3f800000
00419c64: push      0
00419c66: push      0x6b4e80
00419c6b: call      0x423be0
00419c70: ret       4
00419c73: push      0x3f800000
00419c78: push      0
00419c7a: push      0x6b4ea8
00419c7f: call      0x423be0
00419c84: ret       4
00419c87: push      0x3f800000
00419c8c: push      0
00419c8e: push      0x6b4ed8
00419c93: call      0x423be0
00419c98: ret       4
00419c9b: nop       
00419c9c: nop       
00419c9d: nop       
00419c9e: nop       
00419c9f: nop       
00419ca0: push      esi
00419ca1: mov       esi, ecx
00419ca3: call      0x428190
00419ca8: push      0
00419caa: mov       ecx, esi
00419cac: call      0x422880
00419cb1: pop       esi
00419cb2: ret       
00419cb3: nop       
00419cb4: nop       
00419cb5: nop       
00419cb6: nop       
00419cb7: nop       
00419cb8: nop       
00419cb9: nop       
00419cba: nop       
00419cbb: nop       
00419cbc: nop       
00419cbd: nop       
00419cbe: nop       
00419cbf: nop       
00419cc0: push      esi
00419cc1: mov       esi, ecx
00419cc3: mov       al, byte ptr [esi + 0x100]
00419cc9: test      al, al
00419ccb: jne       0x419d5b
00419cd1: mov       eax, dword ptr [0x6b915c]
00419cd6: test      eax, eax
00419cd8: jne       0x419cdf
00419cda: call      0x4bc480
00419cdf: mov       ecx, eax
00419ce1: call      0x40cf10
00419ce6: mov       ecx, 0x6b9950
00419ceb: call      0x565870
00419cf0: mov       ecx, esi
00419cf2: mov       dword ptr [esi + 0x168], eax
00419cf8: call      0x424420
00419cfd: test      al, al
00419cff: jne       0x419d5b
00419d01: push      edi
00419d02: call      0x60a4a0
00419d07: cdq       
00419d08: mov       ecx, 3
00419d0d: idiv      ecx
00419d0f: test      edx, edx
00419d11: jne       0x419d3d
00419d13: mov       edi, dword ptr [esi + 0xfc]
00419d19: test      edi, edi
00419d1b: je        0x419d3d
00419d1d: fld       dword ptr [esp + 0xc]
00419d21: call      0x60ab20
00419d26: mov       ecx, dword ptr [esi + 0x178]
00419d2c: sub       ecx, eax
00419d2e: mov       dword ptr [esi + 0x178], ecx
00419d34: mov       edx, dword ptr [edi]
00419d36: mov       ecx, edi
00419d38: call      dword ptr [edx + 0x20]
00419d3b: jmp       0x419d49
00419d3d: mov       eax, dword ptr [esi]
00419d3f: push      3
00419d41: mov       ecx, esi
00419d43: call      dword ptr [eax + 0xbc]
00419d49: mov       eax, dword ptr [esi + 0x178]
00419d4f: pop       edi
