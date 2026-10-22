00569ed0: push      -1
00569ed2: push      0x6405af
00569ed7: mov       eax, dword ptr fs:[0]
00569edd: push      eax
00569ede: mov       dword ptr fs:[0], esp
00569ee5: sub       esp, 0x28
00569ee8: push      ebx
00569ee9: push      esi
00569eea: mov       esi, dword ptr [0x6b915c]
00569ef0: xor       ebx, ebx
00569ef2: cmp       esi, ebx
00569ef4: push      edi
00569ef5: mov       dword ptr [esp + 0x10], ebx
00569ef9: jne       0x569f02
00569efb: call      0x4bc480
00569f00: mov       esi, eax
00569f02: cmp       dword ptr [esi + 0x3a4], ebx
00569f08: jne       0x569f71
00569f0a: mov       al, byte ptr [esp + 0x48]
00569f0e: push      ebx
00569f0f: lea       ecx, [esp + 0x18]
00569f13: mov       byte ptr [esp + 0x18], al
00569f17: call      0x4040a0
00569f1c: mov       edi, 0x6b3f70
00569f21: or        ecx, 0xffffffff
00569f24: xor       eax, eax
00569f26: repne scasb al, byte ptr es:[edi]
00569f28: not       ecx
00569f2a: dec       ecx
00569f2b: push      ecx
00569f2c: push      0x6b3f70
00569f31: lea       ecx, [esp + 0x1c]
00569f35: call      0x4040f0
00569f3a: lea       ecx, [esp + 0x14]
00569f3e: mov       edi, 1
00569f43: push      ecx
00569f44: push      0x130
00569f49: push      0x68e58c
00569f4e: push      0x68e584
00569f53: mov       dword ptr [esp + 0x4c], edi
00569f57: call      0x5a07f0
00569f5c: call      eax
00569f5e: add       esp, 0x10
00569f61: lea       ecx, [esp + 0x14]
00569f65: mov       byte ptr [esp + 0x3c], bl
00569f69: push      edi
00569f6a: call      0x4040a0
00569f6f: jmp       0x569f76
00569f71: mov       edi, 1
00569f76: mov       ecx, dword ptr [esi + 0x3a4]
00569f7c: lea       edx, [esp + 0xc]
00569f80: push      ebp
00569f81: push      edx
00569f82: call      0x453d20
00569f87: mov       eax, dword ptr [esp + 0x10]
00569f8b: mov       dword ptr [esp + 0x40], 2
00569f93: cmp       eax, ebx
00569f95: je        0x56a072
00569f9b: mov       eax, dword ptr [eax + 0x360]
00569fa1: push      ebx
00569fa2: push      0x68d608
00569fa7: push      0x68d5e8
00569fac: push      ebx
00569fad: push      eax
00569fae: call      0x60a6f2
00569fb3: mov       ebp, eax
00569fb5: add       esp, 0x14
00569fb8: cmp       ebp, ebx
00569fba: je        0x56a06e
00569fc0: mov       eax, dword ptr [esp + 0x4c]
00569fc4: mov       esi, dword ptr [eax + 4]
00569fc7: cmp       esi, ebx
00569fc9: je        0x56a062
00569fcf: mov       ecx, dword ptr [eax + 8]
00569fd2: mov       eax, 0x2aaaaaab
00569fd7: sub       ecx, esi
00569fd9: imul      ecx
00569fdb: sar       edx, 2
00569fde: mov       eax, edx
00569fe0: shr       eax, 0x1f
00569fe3: add       edx, eax
00569fe5: cmp       edx, edi
00569fe7: jne       0x56a062
00569fe9: mov       eax, dword ptr [esi + 8]
00569fec: cmp       eax, edi
00569fee: jne       0x56a062
00569ff0: cmp       eax, edi
00569ff2: je        0x56a059
00569ff4: mov       cl, byte ptr [esp + 0x4c]
00569ff8: push      ebx
00569ff9: mov       byte ptr [esp + 0x2c], cl
00569ffd: lea       ecx, [esp + 0x2c]
0056a001: call      0x4040a0
0056a006: mov       edi, 0x6b3f70
0056a00b: or        ecx, 0xffffffff
0056a00e: xor       eax, eax
0056a010: repne scasb al, byte ptr es:[edi]
0056a012: not       ecx
0056a014: dec       ecx
0056a015: push      ecx
0056a016: push      0x6b3f70
0056a01b: lea       ecx, [esp + 0x30]
0056a01f: call      0x4040f0
0056a024: lea       edx, [esp + 0x28]
0056a028: mov       byte ptr [esp + 0x40], 4
0056a02d: push      edx
0056a02e: push      0x41
0056a030: push      0x692284
0056a035: push      0x695008
0056a03a: call      0x5a07f0
0056a03f: call      eax
0056a041: add       esp, 0x10
0056a044: lea       ecx, [esp + 0x28]
0056a048: mov       byte ptr [esp + 0x40], 2
0056a04d: push      1
0056a04f: call      0x4040a0
0056a054: mov       edi, 1
0056a059: fld       qword ptr [esi + 0x10]
0056a05c: push      ecx
0056a05d: fstp      dword ptr [esp]
0056a060: jmp       0x56a063
0056a062: push      ebx
0056a063: lea       ecx, [ebp + 0x258]
0056a069: call      0x4819f0
0056a06e: mov       eax, dword ptr [esp + 0x10]
0056a072: mov       esi, dword ptr [esp + 0x48]
0056a076: mov       dword ptr [esp + 0x14], edi
0056a07a: mov       dword ptr [esi], 0x64f00c
0056a080: mov       dword ptr [esi + 8], ebx
0056a083: cmp       eax, ebx
0056a085: mov       byte ptr [esp + 0x40], bl
0056a089: pop       ebp
0056a08a: je        0x56a0a3
0056a08c: mov       edi, dword ptr [eax + 0x14]
0056a08f: mov       ecx, eax
0056a091: add       eax, 0x14
0056a094: dec       edi
0056a095: mov       edx, edi
0056a097: cmp       edx, ebx
0056a099: mov       dword ptr [eax], edi
0056a09b: jne       0x56a0a3
0056a09d: push      ebx
0056a09e: call      0x5abfc0
0056a0a3: mov       ecx, dword ptr [esp + 0x34]
0056a0a7: mov       eax, esi
0056a0a9: pop       edi
0056a0aa: pop       esi
0056a0ab: pop       ebx
0056a0ac: mov       dword ptr fs:[0], ecx
0056a0b3: add       esp, 0x34
0056a0b6: ret       
0056a0b7: nop       
0056a0b8: nop       
0056a0b9: nop       
0056a0ba: nop       
0056a0bb: nop       
0056a0bc: nop       
0056a0bd: nop       
0056a0be: nop       
0056a0bf: nop       
0056a0c0: push      -1
0056a0c2: push      0x6405ef
0056a0c7: mov       eax, dword ptr fs:[0]
0056a0cd: push      eax
0056a0ce: mov       dword ptr fs:[0], esp
0056a0d5: sub       esp, 0x28
0056a0d8: push      ebx
0056a0d9: push      esi
0056a0da: mov       esi, dword ptr [0x6b915c]
0056a0e0: xor       ebx, ebx
0056a0e2: cmp       esi, ebx
0056a0e4: push      edi
0056a0e5: mov       dword ptr [esp + 0x10], ebx
0056a0e9: jne       0x56a0f2
0056a0eb: call      0x4bc480
0056a0f0: mov       esi, eax
0056a0f2: cmp       dword ptr [esi + 0x3a4], ebx
0056a0f8: jne       0x56a161
0056a0fa: mov       al, byte ptr [esp + 0x48]
0056a0fe: push      ebx
0056a0ff: lea       ecx, [esp + 0x18]
0056a103: mov       byte ptr [esp + 0x18], al
0056a107: call      0x4040a0
0056a10c: mov       edi, 0x6b3f70
0056a111: or        ecx, 0xffffffff
0056a114: xor       eax, eax
0056a116: repne scasb al, byte ptr es:[edi]
0056a118: not       ecx
0056a11a: dec       ecx
0056a11b: push      ecx
0056a11c: push      0x6b3f70
0056a121: lea       ecx, [esp + 0x1c]
0056a125: call      0x4040f0
0056a12a: lea       ecx, [esp + 0x14]
0056a12e: mov       edi, 1
0056a133: push      ecx
0056a134: push      0x130
0056a139: push      0x68e58c
0056a13e: push      0x68e584
0056a143: mov       dword ptr [esp + 0x4c], edi
0056a147: call      0x5a07f0
0056a14c: call      eax
0056a14e: add       esp, 0x10
0056a151: lea       ecx, [esp + 0x14]
0056a155: mov       byte ptr [esp + 0x3c], bl
0056a159: push      edi
0056a15a: call      0x4040a0
0056a15f: jmp       0x56a166
0056a161: mov       edi, 1
0056a166: mov       ecx, dword ptr [esi + 0x3a4]
0056a16c: lea       edx, [esp + 0xc]
0056a170: push      ebp
0056a171: push      edx
0056a172: call      0x453d20
0056a177: mov       eax, dword ptr [esp + 0x10]
0056a17b: mov       dword ptr [esp + 0x40], 2
0056a183: cmp       eax, ebx
0056a185: je        0x56a262
0056a18b: mov       eax, dword ptr [eax + 0x360]
0056a191: push      ebx
0056a192: push      0x68d608
0056a197: push      0x68d5e8
0056a19c: push      ebx
0056a19d: push      eax
0056a19e: call      0x60a6f2
0056a1a3: mov       ebp, eax
0056a1a5: add       esp, 0x14
0056a1a8: cmp       ebp, ebx
0056a1aa: je        0x56a25e
0056a1b0: mov       eax, dword ptr [esp + 0x4c]
0056a1b4: mov       esi, dword ptr [eax + 4]
0056a1b7: cmp       esi, ebx
0056a1b9: je        0x56a252
0056a1bf: mov       ecx, dword ptr [eax + 8]
0056a1c2: mov       eax, 0x2aaaaaab
0056a1c7: sub       ecx, esi
0056a1c9: imul      ecx
0056a1cb: sar       edx, 2
0056a1ce: mov       eax, edx
0056a1d0: shr       eax, 0x1f
0056a1d3: add       edx, eax
0056a1d5: cmp       edx, edi
0056a1d7: jne       0x56a252
0056a1d9: mov       eax, dword ptr [esi + 8]
0056a1dc: cmp       eax, edi
0056a1de: jne       0x56a252
0056a1e0: cmp       eax, edi
0056a1e2: je        0x56a249
0056a1e4: mov       cl, byte ptr [esp + 0x4c]
0056a1e8: push      ebx
0056a1e9: mov       byte ptr [esp + 0x2c], cl
0056a1ed: lea       ecx, [esp + 0x2c]
0056a1f1: call      0x4040a0
0056a1f6: mov       edi, 0x6b3f70
0056a1fb: or        ecx, 0xffffffff
0056a1fe: xor       eax, eax
0056a200: repne scasb al, byte ptr es:[edi]
0056a202: not       ecx
0056a204: dec       ecx
0056a205: push      ecx
0056a206: push      0x6b3f70
0056a20b: lea       ecx, [esp + 0x30]
0056a20f: call      0x4040f0
0056a214: lea       edx, [esp + 0x28]
0056a218: mov       byte ptr [esp + 0x40], 4
0056a21d: push      edx
0056a21e: push      0x41
0056a220: push      0x692284
0056a225: push      0x695008
0056a22a: call      0x5a07f0
0056a22f: call      eax
0056a231: add       esp, 0x10
0056a234: lea       ecx, [esp + 0x28]
0056a238: mov       byte ptr [esp + 0x40], 2
0056a23d: push      1
0056a23f: call      0x4040a0
0056a244: mov       edi, 1
0056a249: fld       qword ptr [esi + 0x10]
0056a24c: push      ecx
0056a24d: fstp      dword ptr [esp]
0056a250: jmp       0x56a253
0056a252: push      ebx
0056a253: lea       ecx, [ebp + 0x258]
0056a259: call      0x481b20
0056a25e: mov       eax, dword ptr [esp + 0x10]
0056a262: mov       esi, dword ptr [esp + 0x48]
0056a266: mov       dword ptr [esp + 0x14], edi
0056a26a: mov       dword ptr [esi], 0x64f00c
0056a270: mov       dword ptr [esi + 8], ebx
0056a273: cmp       eax, ebx
0056a275: mov       byte ptr [esp + 0x40], bl
0056a279: pop       ebp
0056a27a: je        0x56a293
0056a27c: mov       edi, dword ptr [eax + 0x14]
0056a27f: mov       ecx, eax
0056a281: add       eax, 0x14
0056a284: dec       edi
0056a285: mov       edx, edi
0056a287: cmp       edx, ebx
0056a289: mov       dword ptr [eax], edi
0056a28b: jne       0x56a293
0056a28d: push      ebx
0056a28e: call      0x5abfc0
0056a293: mov       ecx, dword ptr [esp + 0x34]
0056a297: mov       eax, esi
0056a299: pop       edi
0056a29a: pop       esi
0056a29b: pop       ebx
0056a29c: mov       dword ptr fs:[0], ecx
0056a2a3: add       esp, 0x34
0056a2a6: ret       
0056a2a7: nop       
0056a2a8: nop       
0056a2a9: nop       
0056a2aa: nop       
0056a2ab: nop       
0056a2ac: nop       
0056a2ad: nop       
0056a2ae: nop       
0056a2af: nop       
