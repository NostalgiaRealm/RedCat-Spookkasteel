005b3e00: add       byte ptr [eax], al
005b3e02: add       byte ptr [ebp - 0x3d], bl
005b3e05: nop       
005b3e06: nop       
005b3e07: nop       
005b3e08: nop       
005b3e09: nop       
005b3e0a: nop       
005b3e0b: nop       
005b3e0c: nop       
005b3e0d: nop       
005b3e0e: nop       
005b3e0f: nop       
005b3e10: push      ebx
005b3e11: mov       ebx, ecx
005b3e13: push      esi
005b3e14: mov       esi, dword ptr [ebx]
005b3e16: mov       eax, dword ptr [esi]
005b3e18: test      eax, eax
005b3e1a: jle       0x5b3e2d
005b3e1c: dec       eax
005b3e1d: mov       dword ptr [esi], eax
005b3e1f: mov       eax, dword ptr [0x6cadd8]
005b3e24: dec       eax
005b3e25: pop       esi
005b3e26: mov       dword ptr [0x6cadd8], eax
005b3e2b: pop       ebx
005b3e2c: ret       
005b3e2d: push      edi
005b3e2e: lea       ecx, [esi + 0x10]
005b3e31: call      0x5b3d60
005b3e36: mov       eax, dword ptr [esi + 4]
005b3e39: lea       edi, [esi + 4]
005b3e3c: test      eax, eax
005b3e3e: je        0x5b3e4d
005b3e40: mov       ecx, edi
005b3e42: call      0x5cd7b0
005b3e47: mov       dword ptr [edi], 0
005b3e4d: mov       eax, dword ptr [esi + 8]
005b3e50: lea       edi, [esi + 8]
005b3e53: test      eax, eax
005b3e55: je        0x5b3e64
005b3e57: mov       ecx, edi
005b3e59: call      0x5cf750
005b3e5e: mov       dword ptr [edi], 0
005b3e64: mov       eax, dword ptr [esi + 0x14]
005b3e67: add       esi, 0x14
005b3e6a: test      eax, eax
005b3e6c: pop       edi
005b3e6d: je        0x5b3e7c
005b3e6f: mov       ecx, esi
005b3e71: call      0x5bd500
005b3e76: mov       dword ptr [esi], 0
005b3e7c: mov       eax, dword ptr [ebx]
005b3e7e: push      eax
005b3e7f: call      0x5cf400
005b3e84: mov       dword ptr [ebx], 0
005b3e8a: mov       eax, dword ptr [0x6cadd4]
005b3e8f: add       esp, 4
005b3e92: dec       eax
005b3e93: mov       dword ptr [0x7203c0], 0
005b3e9d: mov       dword ptr [0x6cadd4], eax
005b3ea2: mov       dword ptr [ebx], 0
005b3ea8: pop       esi
005b3ea9: pop       ebx
005b3eaa: ret       
005b3eab: nop       
005b3eac: nop       
005b3ead: nop       
005b3eae: nop       
005b3eaf: nop       
005b3eb0: push      esi
005b3eb1: mov       esi, ecx
005b3eb3: push      edi
005b3eb4: mov       edi, edx
005b3eb6: mov       eax, dword ptr [esi + 0x10]
005b3eb9: test      eax, eax
005b3ebb: jle       0x5b3ee2
005b3ebd: push      0
005b3ebf: push      0x6b3f70
005b3ec4: push      0x18d
005b3ec9: push      0x6a9430
005b3ece: push      0x6b3f70
005b3ed3: push      -1
005b3ed5: call      0x5cf220
005b3eda: add       esp, 0x18
005b3edd: xor       eax, eax
005b3edf: pop       edi
005b3ee0: pop       esi
005b3ee1: ret       
005b3ee2: cmp       dword ptr [esi], 0
005b3ee5: je        0x5b3eee
005b3ee7: mov       ecx, esi
005b3ee9: call      0x5b7130
005b3eee: mov       dword ptr [esi], edi
005b3ef0: pop       edi
005b3ef1: mov       eax, 1
005b3ef6: pop       esi
005b3ef7: ret       
005b3ef8: nop       
005b3ef9: nop       
005b3efa: nop       
005b3efb: nop       
005b3efc: nop       
005b3efd: nop       
005b3efe: nop       
005b3eff: nop       
005b3f00: mov       eax, dword ptr [esp + 8]
005b3f04: mov       ecx, dword ptr [ecx + 8]
005b3f07: push      eax
005b3f08: mov       eax, dword ptr [esp + 8]
005b3f0c: push      eax
005b3f0d: call      0x5cfdf0
005b3f12: ret       8
005b3f15: nop       
005b3f16: nop       
005b3f17: nop       
005b3f18: nop       
005b3f19: nop       
005b3f1a: nop       
005b3f1b: nop       
005b3f1c: nop       
005b3f1d: nop       
005b3f1e: nop       
005b3f1f: nop       
005b3f20: mov       eax, dword ptr [ecx + 0xc]
005b3f23: mov       ecx, dword ptr [ecx + 8]
005b3f26: push      eax
005b3f27: mov       eax, dword ptr [esp + 0x10]
005b3f2b: push      eax
005b3f2c: mov       eax, dword ptr [esp + 0x10]
005b3f30: push      eax
005b3f31: mov       eax, dword ptr [esp + 0x10]
005b3f35: push      eax
005b3f36: call      0x5cff30
005b3f3b: ret       0xc
005b3f3e: nop       
005b3f3f: nop       
005b3f40: push      ebx
005b3f41: push      ebp
005b3f42: mov       ebp, ecx
005b3f44: push      esi
005b3f45: push      edi
005b3f46: xor       edi, edi
005b3f48: mov       eax, dword ptr [ebp + 8]
005b3f4b: mov       ebx, edx
005b3f4d: test      eax, eax
005b3f4f: jle       0x5b3f97
005b3f51: mov       eax, dword ptr [ebp + 0xc]
005b3f54: mov       ecx, dword ptr [eax + edi*4]
005b3f57: call      0x59b1e0
005b3f5c: test      eax, eax
005b3f5e: je        0x5b3f8f
005b3f60: mov       esi, ebx
005b3f62: mov       dl, byte ptr [eax]
005b3f64: mov       cl, dl
005b3f66: cmp       dl, byte ptr [esi]
005b3f68: jne       0x5b3f86
005b3f6a: test      cl, cl
005b3f6c: je        0x5b3f82
005b3f6e: mov       dl, byte ptr [eax + 1]
005b3f71: mov       cl, dl
005b3f73: cmp       dl, byte ptr [esi + 1]
005b3f76: jne       0x5b3f86
005b3f78: add       eax, 2
005b3f7b: add       esi, 2
005b3f7e: test      cl, cl
005b3f80: jne       0x5b3f62
005b3f82: xor       eax, eax
005b3f84: jmp       0x5b3f8b
005b3f86: sbb       eax, eax
005b3f88: sbb       eax, -1
005b3f8b: test      eax, eax
005b3f8d: je        0x5b3f9e
005b3f8f: mov       eax, dword ptr [ebp + 8]
005b3f92: inc       edi
005b3f93: cmp       edi, eax
005b3f95: jl        0x5b3f51
005b3f97: pop       edi
005b3f98: pop       esi
005b3f99: pop       ebp
005b3f9a: xor       eax, eax
005b3f9c: pop       ebx
005b3f9d: ret       
005b3f9e: mov       eax, dword ptr [ebp + 0xc]
005b3fa1: mov       eax, dword ptr [eax + edi*4]
005b3fa4: pop       edi
005b3fa5: pop       esi
005b3fa6: pop       ebp
005b3fa7: pop       ebx
005b3fa8: ret       
005b3fa9: nop       
005b3faa: nop       
005b3fab: nop       
005b3fac: nop       
005b3fad: nop       
005b3fae: nop       
005b3faf: nop       
005b3fb0: sub       esp, 0x38
005b3fb3: lea       eax, [esp]
005b3fb7: push      esi
005b3fb8: mov       esi, edx
005b3fba: push      eax
005b3fbb: lea       edx, [esp + 0x10]
005b3fbf: lea       eax, [esp + 0xc]
005b3fc3: push      edx
005b3fc4: push      eax
005b3fc5: call      0x59b1e0
005b3fca: mov       ecx, eax
005b3fcc: mov       edx, esi
005b3fce: call      0x5b7230
005b3fd3: neg       eax
005b3fd5: sbb       eax, eax
005b3fd7: pop       esi
005b3fd8: neg       eax
005b3fda: add       esp, 0x38
005b3fdd: ret       
005b3fde: nop       
005b3fdf: nop       
005b3fe0: sub       esp, 0x3f4
005b3fe6: push      ebp
005b3fe7: push      esi
005b3fe8: push      edi
005b3fe9: xor       ebp, ebp
005b3feb: push      9
005b3fed: push      ebp
005b3fee: push      ebp
005b3fef: mov       edx, 3
005b3ff4: mov       dword ptr [esp + 0x18], 0
005b3ffc: mov       dword ptr [esp + 0x20], ebp
