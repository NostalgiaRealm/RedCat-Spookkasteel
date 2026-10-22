005b3940: sub       esp, 0x60
005b3943: push      esi
005b3944: mov       esi, edx
005b3946: lea       edx, [esp + 0x34]
005b394a: call      0x5b3790
005b394f: mov       edx, esi
005b3951: lea       ecx, [esp + 0x58]
005b3955: call      0x5b2e40
005b395a: fsub      dword ptr [esp + 0x68]
005b395e: lea       eax, [esp + 0x28]
005b3962: mov       edx, esi
005b3964: push      eax
005b3965: push      ecx
005b3966: fmul      dword ptr [0x64f110]
005b396c: lea       ecx, [esp + 0x60]
005b3970: fstp      dword ptr [esp]
005b3973: call      0x5b3020
005b3978: lea       edx, [esp + 4]
005b397c: lea       ecx, [esp + 0x34]
005b3980: call      0x5b3670
005b3985: lea       ecx, [esp + 4]
005b3989: lea       edx, [esp + 4]
005b398d: push      ecx
005b398e: lea       ecx, [esp + 0x5c]
005b3992: call      0x5b3000
005b3997: mov       edx, esi
005b3999: lea       ecx, [esp + 4]
005b399d: call      0x5b2e40
005b39a2: fsub      dword ptr [esp + 0x68]
005b39a6: lea       edx, [esp + 4]
005b39aa: push      edx
005b39ab: push      ecx
005b39ac: fmul      dword ptr [0x64f110]
005b39b2: mov       edx, esi
005b39b4: lea       ecx, [esp + 0xc]
005b39b8: fstp      dword ptr [esp]
005b39bb: call      0x5b3020
005b39c0: lea       eax, [esp + 4]
005b39c4: lea       edx, [esp + 0x28]
005b39c8: push      eax
005b39c9: lea       ecx, [esp + 8]
005b39cd: call      0x5b2fe0
005b39d2: lea       ecx, [esp + 4]
005b39d6: call      0x5b2f20
005b39db: lea       edx, [esp + 0x1c]
005b39df: lea       ecx, [esp + 0x34]
005b39e3: fstp      st(0)
005b39e5: call      0x5b3630
005b39ea: lea       ecx, [esp + 0x1c]
005b39ee: lea       edx, [esp + 0x1c]
005b39f2: push      ecx
005b39f3: lea       ecx, [esp + 0x5c]
005b39f7: call      0x5b3000
005b39fc: mov       edx, esi
005b39fe: lea       ecx, [esp + 0x1c]
005b3a02: call      0x5b2e40
005b3a07: fsub      dword ptr [esp + 0x68]
005b3a0b: lea       edx, [esp + 0x1c]
005b3a0f: push      edx
005b3a10: push      ecx
005b3a11: fmul      dword ptr [0x64f110]
005b3a17: mov       edx, esi
005b3a19: lea       ecx, [esp + 0x24]
005b3a1d: fstp      dword ptr [esp]
005b3a20: call      0x5b3020
005b3a25: lea       eax, [esp + 0x1c]
005b3a29: lea       edx, [esp + 0x28]
005b3a2d: push      eax
005b3a2e: lea       ecx, [esp + 0x20]
005b3a32: call      0x5b2fe0
005b3a37: lea       ecx, [esp + 0x1c]
005b3a3b: call      0x5b2f20
005b3a40: lea       edx, [esp + 0x10]
005b3a44: lea       ecx, [esp + 0x34]
005b3a48: fstp      st(0)
005b3a4a: call      0x5b3650
005b3a4f: lea       ecx, [esp + 0x10]
005b3a53: lea       edx, [esp + 0x10]
005b3a57: push      ecx
005b3a58: lea       ecx, [esp + 0x5c]
005b3a5c: call      0x5b3000
005b3a61: mov       edx, esi
005b3a63: lea       ecx, [esp + 0x10]
005b3a67: call      0x5b2e40
005b3a6c: fsub      dword ptr [esp + 0x68]
005b3a70: lea       edx, [esp + 0x10]
005b3a74: push      edx
005b3a75: push      ecx
005b3a76: fmul      dword ptr [0x64f110]
005b3a7c: mov       edx, esi
005b3a7e: lea       ecx, [esp + 0x18]
005b3a82: fstp      dword ptr [esp]
005b3a85: call      0x5b3020
005b3a8a: lea       eax, [esp + 0x10]
005b3a8e: lea       edx, [esp + 0x28]
005b3a92: push      eax
005b3a93: lea       ecx, [esp + 0x14]
005b3a97: call      0x5b2fe0
005b3a9c: lea       ecx, [esp + 0x10]
005b3aa0: call      0x5b2f20
005b3aa5: mov       esi, dword ptr [esp + 0x6c]
005b3aa9: lea       ecx, [esp + 4]
005b3aad: lea       edx, [esp + 0x10]
005b3ab1: push      ecx
005b3ab2: push      edx
005b3ab3: lea       edx, [esp + 0x24]
005b3ab7: mov       ecx, esi
005b3ab9: fstp      st(0)
005b3abb: call      0x5b38e0
005b3ac0: mov       eax, dword ptr [esp + 0x30]
005b3ac4: mov       ecx, dword ptr [esp + 0x2c]
005b3ac8: mov       edx, dword ptr [esp + 0x28]
005b3acc: push      eax
005b3acd: push      ecx
005b3ace: push      edx
005b3acf: lea       ecx, [esi + 0x24]
005b3ad2: call      0x5b2e20
005b3ad7: pop       esi
005b3ad8: add       esp, 0x60
005b3adb: ret       8
005b3ade: nop       
005b3adf: nop       
005b3ae0: mov       eax, dword ptr [esp + 4]
005b3ae4: mov       ecx, dword ptr [ecx + 4]
005b3ae7: push      eax
005b3ae8: call      0x5cd9e0
005b3aed: ret       4
005b3af0: mov       eax, dword ptr [ecx + 0x10]
005b3af3: ret       
005b3af4: nop       
005b3af5: nop       
005b3af6: nop       
005b3af7: nop       
005b3af8: nop       
005b3af9: nop       
005b3afa: nop       
005b3afb: nop       
005b3afc: nop       
005b3afd: nop       
005b3afe: nop       
005b3aff: nop       
005b3b00: mov       eax, dword ptr [ecx + 0x10]
005b3b03: inc       eax
005b3b04: mov       dword ptr [ecx + 0x10], eax
005b3b07: mov       ecx, dword ptr [0x6cade0]
005b3b0d: inc       ecx
005b3b0e: mov       dword ptr [0x6cade0], ecx
005b3b14: ret       
005b3b15: nop       
005b3b16: nop       
005b3b17: nop       
005b3b18: nop       
005b3b19: nop       
005b3b1a: nop       
005b3b1b: nop       
005b3b1c: nop       
005b3b1d: nop       
005b3b1e: nop       
005b3b1f: nop       
005b3b20: push      0x18
005b3b22: call      0x5cf3b0
005b3b27: xor       ecx, ecx
005b3b29: add       esp, 4
005b3b2c: cmp       eax, ecx
005b3b2e: jne       0x5b3b52
005b3b30: push      ecx
005b3b31: push      0x6b3f70
005b3b36: push      0xcf
005b3b3b: push      0x6a9430
005b3b40: push      0x6b3f70
005b3b45: push      0x6e
005b3b47: call      0x5cf220
005b3b4c: add       esp, 0x18
005b3b4f: xor       eax, eax
005b3b51: ret       
005b3b52: mov       dword ptr [eax], ecx
005b3b54: mov       dword ptr [eax + 8], ecx
005b3b57: mov       dword ptr [eax + 0xc], ecx
005b3b5a: mov       dword ptr [eax + 0x14], eax
005b3b5d: mov       dword ptr [eax + 0x10], ecx
005b3b60: mov       ecx, dword ptr [0x6caddc]
005b3b66: inc       ecx
005b3b67: mov       dword ptr [0x6caddc], ecx
005b3b6d: ret       
005b3b6e: nop       
005b3b6f: nop       
005b3b70: mov       eax, dword ptr [ecx]
005b3b72: inc       eax
005b3b73: mov       dword ptr [ecx], eax
005b3b75: mov       ecx, dword ptr [0x6cadd8]
005b3b7b: inc       ecx
005b3b7c: mov       dword ptr [0x6cadd8], ecx
005b3b82: ret       
005b3b83: nop       
005b3b84: nop       
005b3b85: nop       
005b3b86: nop       
005b3b87: nop       
005b3b88: nop       
005b3b89: nop       
005b3b8a: nop       
005b3b8b: nop       
005b3b8c: nop       
005b3b8d: nop       
005b3b8e: nop       
005b3b8f: nop       
005b3b90: sub       esp, 0x44
005b3b93: push      ebx
005b3b94: push      ebp
005b3b95: push      esi
005b3b96: push      edi
005b3b97: mov       edi, ecx
005b3b99: mov       dword ptr [esp + 0x1c], edi
005b3b9d: cmp       dword ptr [edi], 0
005b3ba0: jne       0x5b3bcc
005b3ba2: push      0
005b3ba4: push      0x6b3f70
005b3ba9: push      0xea
005b3bae: push      0x6a9430
005b3bb3: push      0x6b3f70
005b3bb8: push      -1
005b3bba: call      0x5cf220
005b3bbf: add       esp, 0x18
005b3bc2: xor       eax, eax
005b3bc4: pop       edi
005b3bc5: pop       esi
005b3bc6: pop       ebp
005b3bc7: pop       ebx
005b3bc8: add       esp, 0x44
005b3bcb: ret       
005b3bcc: push      0x5c
005b3bce: call      0x5cf3b0
005b3bd3: mov       esi, eax
005b3bd5: add       esp, 4
005b3bd8: test      esi, esi
005b3bda: jne       0x5b3c05
005b3bdc: push      eax
005b3bdd: push      0x6b3f70
005b3be2: push      0xf2
005b3be7: push      0x6a9430
005b3bec: push      0x6b3f70
005b3bf1: push      0x6e
005b3bf3: call      0x5cf220
005b3bf8: add       esp, 0x18
005b3bfb: xor       eax, eax
005b3bfd: pop       edi
005b3bfe: pop       esi
005b3bff: pop       ebp
005b3c00: pop       ebx
005b3c01: add       esp, 0x44
005b3c04: ret       
005b3c05: lea       ebx, [esi + 8]
005b3c08: lea       ebp, [esi + 0x14]
005b3c0b: mov       dword ptr [esi + 4], 0
005b3c12: mov       dword ptr [ebx], 0
005b3c18: mov       dword ptr [ebp], 0
005b3c1f: call      0x5cf470
005b3c24: test      eax, eax
005b3c26: mov       dword ptr [ebx], eax
005b3c28: jne       0x5b3c3a
005b3c2a: push      eax
005b3c2b: push      0x6b3f70
005b3c30: push      0xfc
005b3c35: jmp       0x5b3d15
005b3c3a: mov       ecx, 1
005b3c3f: mov       dword ptr [esi], 0
005b3c45: mov       dword ptr [esi + 0xc], ecx
005b3c48: mov       dword ptr [esi + 0x10], edi
005b3c4b: call      0x5bd440
005b3c50: xor       edi, edi
005b3c52: mov       dword ptr [ebp], eax
005b3c55: push      edi
005b3c56: push      edi
005b3c57: push      edi
005b3c58: push      edi
005b3c59: or        eax, 0xffffffff
005b3c5c: push      edi
005b3c5d: push      edi
005b3c5e: lea       ecx, [esi + 0x3c]
005b3c61: mov       dword ptr [esi + 0x30], eax
005b3c64: mov       dword ptr [esi + 0x54], eax
005b3c67: mov       dword ptr [esi + 0x58], edi
005b3c6a: mov       dword ptr [esi + 0x34], eax
005b3c6d: call      0x5d0200
005b3c72: cmp       dword ptr [ebp], edi
005b3c75: jne       0x5b3c87
005b3c77: push      edi
005b3c78: push      0x6b3f70
005b3c7d: push      0x10b
005b3c82: jmp       0x5b3d15
005b3c87: mov       eax, dword ptr [esi + 0x10]
005b3c8a: mov       ecx, dword ptr [eax]
005b3c8c: call      0x5b7140
005b3c91: test      eax, eax
005b3c93: mov       dword ptr [esp + 0x18], eax
005b3c97: jle       0x5b3cdb
005b3c99: lea       ecx, [esp + 0x14]
005b3c9d: lea       edx, [esp + 0x24]
005b3ca1: push      ecx
005b3ca2: mov       ecx, dword ptr [esi + 0x10]
005b3ca5: lea       eax, [esp + 0x14]
005b3ca9: push      edx
005b3caa: mov       ecx, dword ptr [ecx]
005b3cac: push      eax
005b3cad: mov       edx, edi
005b3caf: call      0x5b7150
005b3cb4: lea       edx, [esp + 0x20]
005b3cb8: lea       eax, [esp + 0x24]
005b3cbc: mov       ecx, dword ptr [esp + 0x10]
005b3cc0: push      edx
005b3cc1: mov       edx, dword ptr [esp + 0x18]
005b3cc5: push      eax
005b3cc6: push      ecx
005b3cc7: mov       ecx, dword ptr [ebx]
005b3cc9: call      0x5cf7c0
005b3cce: test      eax, eax
005b3cd0: je        0x5b3d09
005b3cd2: mov       eax, dword ptr [esp + 0x18]
005b3cd6: inc       edi
005b3cd7: cmp       edi, eax
005b3cd9: jl        0x5b3c99
005b3cdb: lea       ecx, [esi + 0x18]
