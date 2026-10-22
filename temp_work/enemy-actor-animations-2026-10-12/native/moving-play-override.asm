00428c00: jl        0x428c26
00428c02: and       al, 0x8b
00428c04: retf      
00428c05: mov       edx, ecx
00428c07: mov       esi, 0x6b3f70
00428c0c: shr       ecx, 2
00428c0f: rep movsd dword ptr es:[edi], dword ptr [esi]
00428c11: mov       ecx, edx
00428c13: push      ebx
00428c14: and       ecx, 3
00428c17: rep movsb byte ptr es:[edi], byte ptr [esi]
00428c19: lea       ecx, [esp + 0x24]
00428c1d: call      0x404190
00428c22: or        esi, 0xffffffff
00428c25: lea       eax, [esp + 0x20]
00428c29: mov       dword ptr [esp + 0x48], 0
00428c31: push      eax
00428c32: push      0x1ab
00428c37: push      0x68fda8
00428c3c: push      0x68f604
00428c41: call      0x5a07f0
00428c46: call      eax
00428c48: add       esp, 0x10
00428c4b: lea       ecx, [esp + 0x20]
00428c4f: mov       dword ptr [esp + 0x48], esi
00428c53: push      1
00428c55: call      0x4040a0
00428c5a: xor       ebx, ebx
00428c5c: mov       ecx, 0x6b5230
00428c61: call      0x5a1d60
00428c66: mov       eax, dword ptr [eax + 4]
00428c69: cmp       eax, ebx
00428c6b: jne       0x428c72
00428c6d: mov       eax, 0x64a3b4
00428c72: mov       ecx, dword ptr [ebp + 0xc]
00428c75: push      eax
00428c76: lea       edx, [esp + 0x14]
00428c7a: push      ecx
00428c7b: push      edx
00428c7c: call      0x5033f0
00428c81: add       esp, 0xc
00428c84: mov       eax, dword ptr [ebp + 0x28]
00428c87: mov       dword ptr [esp + 0x48], 1
00428c8f: lea       ecx, [eax - 1]
00428c92: cmp       ecx, 9
00428c95: ja        0x42908c
00428c9b: jmp       dword ptr [ecx*4 + 0x429128]
00428ca2: mov       eax, dword ptr [ebp + 0x2c]
00428ca5: cmp       eax, 1
00428ca8: je        0x428ce8
00428caa: cmp       eax, 2
00428cad: je        0x428ce8
00428caf: cmp       eax, 3
00428cb2: jne       0x428e31
00428cb8: push      0x1f4
00428cbd: call      0x60a0b5
00428cc2: add       esp, 4
00428cc5: mov       dword ptr [esp + 0x54], eax
00428cc9: cmp       eax, ebx
00428ccb: mov       byte ptr [esp + 0x48], 3
00428cd0: je        0x428d50
00428cd2: mov       ecx, dword ptr [esp + 0x50]
00428cd6: lea       edx, [esp + 0x10]
00428cda: push      ecx
00428cdb: push      ebp
00428cdc: push      edx
00428cdd: mov       ecx, eax
00428cdf: call      0x413570
00428ce4: mov       edi, eax
00428ce6: jmp       0x428d52
00428ce8: push      0x1e0
00428ced: call      0x60a0b5
00428cf2: add       esp, 4
00428cf5: mov       dword ptr [esp + 0x54], eax
00428cf9: cmp       eax, ebx
00428cfb: mov       byte ptr [esp + 0x48], 2
00428d00: je        0x428d50
00428d02: mov       ecx, dword ptr [esp + 0x50]
00428d06: lea       edx, [esp + 0x10]
00428d0a: push      ecx
00428d0b: push      ebp
00428d0c: push      edx
00428d0d: mov       ecx, eax
00428d0f: call      0x4176c0
00428d14: mov       edi, eax
00428d16: jmp       0x428d52
00428d18: mov       eax, dword ptr [ebp + 0x2c]
00428d1b: cmp       eax, 1
00428d1e: jne       0x428d76
00428d20: push      0x1d4
00428d25: call      0x60a0b5
00428d2a: add       esp, 4
00428d2d: mov       dword ptr [esp + 0x54], eax
00428d31: cmp       eax, ebx
00428d33: mov       byte ptr [esp + 0x48], 4
00428d38: je        0x428d50
00428d3a: mov       ecx, dword ptr [esp + 0x50]
00428d3e: lea       edx, [esp + 0x10]
00428d42: push      ecx
00428d43: push      ebp
00428d44: push      edx
00428d45: mov       ecx, eax
00428d47: call      0x415680
00428d4c: mov       edi, eax
00428d4e: jmp       0x428d52
00428d50: xor       edi, edi
00428d52: push      1
00428d54: lea       ecx, [esp + 0x14]
00428d58: mov       dword ptr [esp + 0x4c], esi
00428d5c: call      0x4040a0
00428d61: mov       eax, edi
00428d63: pop       edi
00428d64: pop       esi
00428d65: pop       ebp
00428d66: pop       ebx
00428d67: mov       ecx, dword ptr [esp + 0x30]
00428d6b: mov       dword ptr fs:[0], ecx
00428d72: add       esp, 0x3c
00428d75: ret       
00428d76: cmp       eax, 2
00428d79: je        0x428d84
00428d7b: cmp       eax, 3
00428d7e: jne       0x428e31
00428d84: push      0x1e8
00428d89: call      0x60a0b5
00428d8e: add       esp, 4
00428d91: mov       dword ptr [esp + 0x54], eax
00428d95: cmp       eax, ebx
00428d97: mov       byte ptr [esp + 0x48], 5
00428d9c: je        0x428db4
00428d9e: mov       ecx, dword ptr [esp + 0x50]
00428da2: lea       edx, [esp + 0x10]
00428da6: push      ecx
00428da7: push      ebp
00428da8: push      edx
00428da9: mov       ecx, eax
00428dab: call      0x410a80
00428db0: mov       edi, eax
00428db2: jmp       0x428db6
00428db4: xor       edi, edi
00428db6: mov       ecx, dword ptr [esp + 0x14]
00428dba: cmp       ecx, ebx
00428dbc: je        0x429077
00428dc2: mov       al, byte ptr [ecx - 1]
00428dc5: test      al, al
00428dc7: je        0x42906d
00428dcd: cmp       al, 0xff
00428dcf: je        0x42906d
00428dd5: dec       al
00428dd7: mov       byte ptr [ecx - 1], al
00428dda: mov       eax, edi
00428ddc: pop       edi
00428ddd: pop       esi
00428dde: pop       ebp
00428ddf: pop       ebx
00428de0: mov       ecx, dword ptr [esp + 0x30]
00428de4: mov       dword ptr fs:[0], ecx
00428deb: add       esp, 0x3c
00428dee: ret       
00428def: mov       eax, dword ptr [ebp + 0x2c]
00428df2: cmp       eax, 1
00428df5: jne       0x428e27
00428df7: push      0x1d4
00428dfc: call      0x60a0b5
00428e01: add       esp, 4
00428e04: mov       dword ptr [esp + 0x54], eax
00428e08: cmp       eax, ebx
00428e0a: mov       byte ptr [esp + 0x48], 6
00428e0f: je        0x428db4
00428e11: mov       ecx, dword ptr [esp + 0x50]
00428e15: lea       edx, [esp + 0x10]
00428e19: push      ecx
00428e1a: push      ebp
00428e1b: push      edx
00428e1c: mov       ecx, eax
00428e1e: call      0x4161f0
00428e23: mov       edi, eax
00428e25: jmp       0x428db6
00428e27: cmp       eax, 2
00428e2a: je        0x428e94
00428e2c: cmp       eax, 3
00428e2f: je        0x428e94
00428e31: push      eax
00428e32: lea       eax, [esp + 0x34]
00428e36: push      0x68fe00
00428e3b: push      eax
00428e3c: call      0x5ae390
00428e41: add       esp, 0xc
00428e44: push      eax
00428e45: push      0x1ea
00428e4a: push      0x68fda8
00428e4f: push      0x68d2d0
00428e54: mov       byte ptr [esp + 0x58], 0x10
00428e59: call      0x5a07f0
00428e5e: call      eax
00428e60: mov       eax, dword ptr [esp + 0x44]
00428e64: add       esp, 0x10
00428e67: cmp       eax, ebx
00428e69: je        0x4290ef
00428e6f: lea       ecx, [eax - 1]
00428e72: mov       al, byte ptr [eax - 1]
00428e75: test      al, al
00428e77: je        0x428e86
00428e79: cmp       al, 0xff
00428e7b: je        0x428e86
00428e7d: dec       al
00428e7f: mov       byte ptr [ecx], al
00428e81: jmp       0x4290ef
00428e86: push      ecx
00428e87: call      0x5fe5f0
00428e8c: add       esp, 4
00428e8f: jmp       0x4290ef
00428e94: push      0x1e8
00428e99: call      0x60a0b5
00428e9e: add       esp, 4
00428ea1: mov       dword ptr [esp + 0x54], eax
00428ea5: cmp       eax, ebx
00428ea7: mov       byte ptr [esp + 0x48], 7
00428eac: je        0x428db4
00428eb2: mov       ecx, dword ptr [esp + 0x50]
00428eb6: lea       edx, [esp + 0x10]
00428eba: push      ecx
00428ebb: push      ebp
00428ebc: push      edx
00428ebd: mov       ecx, eax
00428ebf: call      0x412000
00428ec4: mov       edi, eax
00428ec6: jmp       0x428db6
00428ecb: push      0x1d4
00428ed0: call      0x60a0b5
00428ed5: add       esp, 4
00428ed8: mov       dword ptr [esp + 0x54], eax
00428edc: cmp       eax, ebx
00428ede: mov       byte ptr [esp + 0x48], 8
00428ee3: je        0x428db4
00428ee9: mov       ecx, dword ptr [esp + 0x50]
00428eed: lea       edx, [esp + 0x10]
00428ef1: push      ecx
00428ef2: push      ebp
00428ef3: push      edx
00428ef4: mov       ecx, eax
00428ef6: call      0x418d50
00428efb: mov       edi, eax
00428efd: jmp       0x428db6
00428f02: push      0x1e8
00428f07: call      0x60a0b5
00428f0c: add       esp, 4
00428f0f: mov       dword ptr [esp + 0x54], eax
00428f13: cmp       eax, ebx
00428f15: mov       byte ptr [esp + 0x48], 9
00428f1a: je        0x428db4
00428f20: mov       ecx, dword ptr [esp + 0x50]
00428f24: lea       edx, [esp + 0x10]
00428f28: push      ecx
00428f29: push      ebp
00428f2a: push      edx
00428f2b: mov       ecx, eax
00428f2d: call      0x40fba0
00428f32: mov       edi, eax
00428f34: jmp       0x428db6
00428f39: push      0x1ec
00428f3e: call      0x60a0b5
00428f43: add       esp, 4
00428f46: mov       dword ptr [esp + 0x54], eax
00428f4a: cmp       eax, ebx
00428f4c: mov       byte ptr [esp + 0x48], 0xa
00428f51: je        0x428db4
00428f57: mov       ecx, dword ptr [esp + 0x50]
00428f5b: lea       edx, [esp + 0x10]
00428f5f: push      ecx
00428f60: push      ebp
00428f61: push      edx
00428f62: mov       ecx, eax
00428f64: call      0x414a90
00428f69: mov       edi, eax
00428f6b: jmp       0x428db6
00428f70: push      0x1e8
00428f75: call      0x60a0b5
00428f7a: add       esp, 4
00428f7d: mov       dword ptr [esp + 0x54], eax
00428f81: cmp       eax, ebx
00428f83: mov       byte ptr [esp + 0x48], 0xb
00428f88: je        0x428db4
00428f8e: mov       ecx, dword ptr [esp + 0x50]
00428f92: lea       edx, [esp + 0x10]
00428f96: push      ecx
00428f97: push      ebp
00428f98: push      edx
00428f99: mov       ecx, eax
00428f9b: call      0x41f770
00428fa0: mov       edi, eax
00428fa2: jmp       0x428db6
00428fa7: push      0x1ec
00428fac: call      0x60a0b5
00428fb1: add       esp, 4
00428fb4: mov       dword ptr [esp + 0x54], eax
00428fb8: cmp       eax, ebx
00428fba: mov       byte ptr [esp + 0x48], 0xc
00428fbf: je        0x428db4
00428fc5: mov       ecx, dword ptr [esp + 0x50]
00428fc9: lea       edx, [esp + 0x10]
00428fcd: push      ecx
00428fce: push      ebp
00428fcf: push      edx
00428fd0: mov       ecx, eax
00428fd2: call      0x419570
00428fd7: mov       edi, eax
00428fd9: jmp       0x428db6
00428fde: push      0x1e8
00428fe3: call      0x60a0b5
00428fe8: add       esp, 4
00428feb: mov       dword ptr [esp + 0x54], eax
00428fef: cmp       eax, ebx
00428ff1: mov       byte ptr [esp + 0x48], 0xd
00428ff6: je        0x42903e
00428ff8: mov       ecx, dword ptr [esp + 0x50]
00428ffc: lea       edx, [esp + 0x10]
00429000: push      ecx
00429001: push      ebp
00429002: push      edx
00429003: mov       ecx, eax
00429005: call      0x420240
0042900a: mov       edi, eax
0042900c: jmp       0x429040
0042900e: push      0x1d4
00429013: call      0x60a0b5
00429018: add       esp, 4
0042901b: mov       dword ptr [esp + 0x54], eax
0042901f: cmp       eax, ebx
00429021: mov       byte ptr [esp + 0x48], 0xe
00429026: je        0x42903e
00429028: mov       ecx, dword ptr [esp + 0x50]
0042902c: lea       edx, [esp + 0x10]
00429030: push      ecx
00429031: push      ebp
00429032: push      edx
00429033: mov       ecx, eax
00429035: call      0x40d660
0042903a: mov       edi, eax
0042903c: jmp       0x429040
0042903e: xor       edi, edi
00429040: mov       ecx, dword ptr [esp + 0x14]
00429044: cmp       ecx, ebx
00429046: je        0x429077
00429048: mov       al, byte ptr [ecx - 1]
0042904b: test      al, al
0042904d: je        0x42906d
0042904f: cmp       al, 0xff
00429051: je        0x42906d
00429053: dec       al
00429055: mov       byte ptr [ecx - 1], al
00429058: mov       eax, edi
0042905a: pop       edi
0042905b: pop       esi
0042905c: pop       ebp
0042905d: pop       ebx
0042905e: mov       ecx, dword ptr [esp + 0x30]
00429062: mov       dword ptr fs:[0], ecx
00429069: add       esp, 0x3c
0042906c: ret       
0042906d: dec       ecx
0042906e: push      ecx
0042906f: call      0x5fe5f0
00429074: add       esp, 4
00429077: mov       eax, edi
00429079: pop       edi
0042907a: pop       esi
0042907b: pop       ebp
0042907c: pop       ebx
0042907d: mov       ecx, dword ptr [esp + 0x30]
00429081: mov       dword ptr fs:[0], ecx
00429088: add       esp, 0x3c
0042908b: ret       
0042908c: push      eax
0042908d: lea       eax, [esp + 0x24]
00429091: push      0x68fdd4
00429096: push      eax
00429097: call      0x5ae390
0042909c: add       esp, 0xc
0042909f: push      eax
004290a0: push      0x1e5
004290a5: push      0x68fda8
004290aa: push      0x68d2d0
004290af: mov       byte ptr [esp + 0x58], 0xf
004290b4: call      0x5a07f0
004290b9: call      eax
004290bb: mov       eax, dword ptr [esp + 0x34]
004290bf: add       esp, 0x10
004290c2: cmp       eax, ebx
004290c4: je        0x4290e3
004290c6: lea       ecx, [eax - 1]
004290c9: mov       al, byte ptr [eax - 1]
004290cc: test      al, al
004290ce: je        0x4290da
004290d0: cmp       al, 0xff
004290d2: je        0x4290da
004290d4: dec       al
004290d6: mov       byte ptr [ecx], al
004290d8: jmp       0x4290e3
004290da: push      ecx
004290db: call      0x5fe5f0
004290e0: add       esp, 4
004290e3: mov       dword ptr [esp + 0x24], ebx
004290e7: mov       dword ptr [esp + 0x28], ebx
004290eb: mov       dword ptr [esp + 0x2c], ebx
004290ef: mov       ecx, dword ptr [esp + 0x14]
004290f3: cmp       ecx, ebx
004290f5: je        0x429113
004290f7: mov       al, byte ptr [ecx - 1]
004290fa: test      al, al
004290fc: je        0x429109
004290fe: cmp       al, 0xff
00429100: je        0x429109
00429102: dec       al
00429104: mov       byte ptr [ecx - 1], al
00429107: jmp       0x429113
00429109: dec       ecx
0042910a: push      ecx
0042910b: call      0x5fe5f0
00429110: add       esp, 4
00429113: mov       ecx, dword ptr [esp + 0x40]
00429117: pop       edi
00429118: pop       esi
00429119: pop       ebp
0042911a: xor       eax, eax
0042911c: pop       ebx
0042911d: mov       dword ptr fs:[0], ecx
00429124: add       esp, 0x3c
00429127: ret       
00429128: mov       byte ptr [0x1800428c], al
0042912d: lea       eax, [edx]
00429130: out       dx, eax
00429131: lea       eax, [edx]
00429134: retf      
00429135: mov       es, word ptr [edx]
00429138: add       cl, byte ptr [edi - 0x70c6ffbe]
0042913e: inc       edx
0042913f: add       byte ptr [eax - 0x71], dh
00429142: inc       edx
00429143: add       byte ptr [edi - 0x21ffbd71], ah
00429149: pop       dword ptr [edx]
0042914c: push      cs
0042914d: nop       
0042914e: inc       edx
