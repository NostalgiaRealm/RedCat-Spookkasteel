00404c00: push     0
00404c02: push     0
00404c04: call     0x41e6e0
00404c09: push     0
00404c0b: push     2
00404c0d: mov      ecx, esi
00404c0f: call     0x402a10
00404c14: pop      esi
00404c15: ret      
00404c16: nop      
00404c17: nop      
00404c18: nop      
00404c19: nop      
00404c1a: nop      
00404c1b: nop      
00404c1c: nop      
00404c1d: nop      
00404c1e: nop      
00404c1f: nop      
00404c20: mov      cl, byte ptr [0x7103a0]
00404c26: mov      al, 1
00404c28: test     al, cl
00404c2a: jne      0x404c34
00404c2c: or       cl, al
00404c2e: mov      byte ptr [0x7103a0], cl
00404c34: jmp      0x404c40
00404c39: nop      
00404c3a: nop      
00404c3b: nop      
00404c3c: nop      
00404c3d: nop      
00404c3e: nop      
00404c3f: nop      
00404c40: push     0x401ba0
00404c45: call     0x60a57b
00404c4a: pop      ecx
00404c4b: ret      
00404c4c: nop      
00404c4d: nop      
00404c4e: nop      
00404c4f: nop      
00404c50: mov      eax, dword ptr [esp + 4]
00404c54: push     esi
00404c55: mov      esi, ecx
00404c57: push     eax
00404c58: call     0x403610
00404c5d: mov      dword ptr [esi], 0x64a534
00404c63: mov      eax, esi
00404c65: pop      esi
00404c66: ret      4
00404c69: nop      
00404c6a: nop      
00404c6b: nop      
00404c6c: nop      
00404c6d: nop      
00404c6e: nop      
00404c6f: nop      
00404c70: push     esi
00404c71: mov      esi, ecx
00404c73: push     0
00404c75: mov      ecx, dword ptr [esi + 0x24]
00404c78: mov      eax, dword ptr [ecx]
00404c7a: call     dword ptr [eax + 0x88]
00404c80: mov      ecx, dword ptr [esi + 0x24]
00404c83: test     al, al
00404c85: je       0x404ca7
00404c87: mov      edx, dword ptr [ecx]
00404c89: push     0x3fd9999a
00404c8e: push     0
00404c90: push     0
00404c92: call     dword ptr [edx + 0x8c]
00404c98: push     0
00404c9a: push     0
00404c9c: mov      ecx, esi
00404c9e: call     0x402a10
00404ca3: pop      esi
00404ca4: ret      4
00404ca7: mov      eax, dword ptr [ecx]
00404ca9: push     0x7f7fffff
00404cae: push     1
00404cb0: push     1
00404cb2: call     dword ptr [eax + 0x8c]
00404cb8: push     0
00404cba: push     1
00404cbc: mov      ecx, esi
00404cbe: call     0x402a10
00404cc3: pop      esi
00404cc4: ret      4
00404cc7: nop      
00404cc8: nop      
00404cc9: nop      
00404cca: nop      
00404ccb: nop      
00404ccc: nop      
00404ccd: nop      
00404cce: nop      
00404ccf: nop      
00404cd0: mov      eax, dword ptr fs:[0]
00404cd6: push     -1
00404cd8: push     0x61fdb8
00404cdd: push     eax
00404cde: mov      dword ptr fs:[0], esp
00404ce5: sub      esp, 0x10
00404ce8: push     ebx
00404ce9: push     esi
00404cea: push     edi
00404ceb: mov      esi, ecx
00404ced: call     0x402cf0
00404cf2: xor      ebx, ebx
00404cf4: sub      eax, ebx
00404cf6: je       0x404e7c
00404cfc: dec      eax
00404cfd: je       0x404e06
00404d03: dec      eax
00404d04: je       0x404dd3
00404d0a: mov      al, byte ptr [esp + 0x30]
00404d0e: mov      edi, 0x68d934
00404d13: mov      byte ptr [esp + 0xc], al
00404d17: or       ecx, 0xffffffff
00404d1a: xor      eax, eax
00404d1c: push     ebp
00404d1d: repne scasb al, byte ptr es:[edi]
00404d1f: not      ecx
00404d21: dec      ecx
00404d22: push     1
00404d24: mov      ebp, ecx
00404d26: lea      ecx, [esp + 0x14]
00404d2a: push     ebp
00404d2b: mov      dword ptr [esp + 0x1c], ebx
00404d2f: mov      dword ptr [esp + 0x20], ebx
00404d33: mov      dword ptr [esp + 0x24], ebx
00404d37: call     0x401940
00404d3c: test     al, al
00404d3e: je       0x404d64
00404d40: mov      edi, dword ptr [esp + 0x14]
00404d44: mov      ecx, ebp
00404d46: mov      edx, ecx
00404d48: mov      esi, 0x68d934
00404d4d: shr      ecx, 2
00404d50: rep movsd dword ptr es:[edi], dword ptr [esi]
00404d52: mov      ecx, edx
00404d54: and      ecx, 3
00404d57: rep movsb byte ptr es:[edi], byte ptr [esi]
00404d59: mov      eax, dword ptr [esp + 0x14]
00404d5d: mov      dword ptr [esp + 0x18], ebp
00404d61: mov      byte ptr [eax + ebp], bl
00404d64: lea      ecx, [esp + 0x10]
00404d68: mov      dword ptr [esp + 0x28], ebx
00404d6c: push     ecx
00404d6d: push     0x6c
00404d6f: push     0x68d908
00404d74: push     0x68d2d0
00404d79: call     0x5a07f0
00404d7e: call     eax
00404d80: mov      eax, dword ptr [esp + 0x24]
00404d84: add      esp, 0x10
00404d87: cmp      eax, ebx
00404d89: pop      ebp
00404d8a: je       0x404e99
00404d90: lea      ecx, [eax - 1]
00404d93: mov      al, byte ptr [eax - 1]
00404d96: cmp      al, bl
00404d98: je       0x404db6
00404d9a: cmp      al, 0xff
00404d9c: je       0x404db6
00404d9e: dec      al
00404da0: pop      edi
00404da1: pop      esi
00404da2: mov      byte ptr [ecx], al
00404da4: pop      ebx
00404da5: mov      ecx, dword ptr [esp + 0x10]
00404da9: mov      dword ptr fs:[0], ecx
00404db0: add      esp, 0x1c
00404db3: ret      8
00404db6: push     ecx
00404db7: call     0x5fe5f0
00404dbc: add      esp, 4
00404dbf: pop      edi
00404dc0: pop      esi
00404dc1: pop      ebx
00404dc2: mov      ecx, dword ptr [esp + 0x10]
00404dc6: mov      dword ptr fs:[0], ecx
00404dcd: add      esp, 0x1c
00404dd0: ret      8
00404dd3: mov      edx, dword ptr [esp + 0x30]
00404dd7: mov      eax, dword ptr [esp + 0x2c]
00404ddb: push     edx
00404ddc: push     eax
00404ddd: mov      ecx, esi
00404ddf: call     0x402a80
00404de4: mov      ecx, eax
00404de6: call     0x402d20
00404deb: mov      ecx, esi
00404ded: call     0x402a80
00404df2: mov      ecx, eax
00404df4: call     0x402d10
00404df9: test     al, al
00404dfb: je       0x404e99
00404e01: jmp      0x404e8f
00404e06: mov      edi, dword ptr [esp + 0x30]
00404e0a: mov      ecx, dword ptr [esi + 0x24]
00404e0d: push     edi
00404e0e: call     0x422f70
00404e13: test     al, al
00404e15: je       0x404e32
00404e17: mov      edx, dword ptr [esi]
00404e19: mov      ecx, esi
00404e1b: call     dword ptr [edx + 0xc]
00404e1e: pop      edi
00404e1f: pop      esi
00404e20: pop      ebx
00404e21: mov      ecx, dword ptr [esp + 0x10]
00404e25: mov      dword ptr fs:[0], ecx
00404e2c: add      esp, 0x1c
00404e2f: ret      8
00404e32: mov      ecx, dword ptr [esi + 0x24]
00404e35: push     edi
00404e36: call     0x422f30
00404e3b: test     al, al
00404e3d: jne      0x404e99
00404e3f: mov      ecx, dword ptr [esi + 0x24]
00404e42: push     ebx
00404e43: mov      eax, dword ptr [ecx]
00404e45: call     dword ptr [eax + 0x88]
00404e4b: test     al, al
00404e4d: je       0x404e61
00404e4f: mov      ecx, dword ptr [esi + 0x24]
00404e52: push     0xbfd9999a
00404e57: push     ebx
00404e58: push     ebx
00404e59: mov      edx, dword ptr [ecx]
00404e5b: call     dword ptr [edx + 0x8c]
00404e61: mov      ecx, esi
00404e63: call     0x402d00
00404e68: pop      edi
00404e69: pop      esi
00404e6a: pop      ebx
00404e6b: mov      ecx, dword ptr [esp + 0x10]
00404e6f: mov      dword ptr fs:[0], ecx
00404e76: add      esp, 0x1c
00404e79: ret      8
00404e7c: mov      ecx, dword ptr [esi + 0x24]
00404e7f: call     0x423700
00404e84: mov      ecx, eax
00404e86: call     0x4a0d00
00404e8b: test     al, al
00404e8d: je       0x404e99
00404e8f: push     ebx
00404e90: push     1
00404e92: mov      ecx, esi
00404e94: call     0x402a10
00404e99: mov      ecx, dword ptr [esp + 0x1c]
00404e9d: pop      edi
00404e9e: pop      esi
00404e9f: pop      ebx
00404ea0: mov      dword ptr fs:[0], ecx
00404ea7: add      esp, 0x1c
00404eaa: ret      8
00404ead: nop      
00404eae: nop      
00404eaf: nop      
00404eb0: push     esi
00404eb1: push     edi
00404eb2: mov      edi, dword ptr [esp + 0xc]
00404eb6: mov      esi, ecx
00404eb8: push     edi
00404eb9: call     0x40a740
00404ebe: mov      dword ptr [esi + 0x30], edi
00404ec1: mov      dword ptr [esi], 0x64a548
00404ec7: mov      eax, esi
00404ec9: pop      edi
00404eca: pop      esi
00404ecb: ret      4
00404ece: nop      
00404ecf: nop      
00404ed0: mov      eax, dword ptr [ecx]
00404ed2: jmp      dword ptr [eax + 0x24]
00404ed5: nop      
00404ed6: nop      
00404ed7: nop      
00404ed8: nop      
00404ed9: nop      
00404eda: nop      
00404edb: nop      
00404edc: nop      
00404edd: nop      
00404ede: nop      
00404edf: nop      
00404ee0: push     -1
00404ee2: push     0x61fde3
00404ee7: mov      eax, dword ptr fs:[0]
00404eed: push     eax
00404eee: mov      dword ptr fs:[0], esp
00404ef5: push     ecx
00404ef6: push     ebx
00404ef7: push     esi
00404ef8: mov      ebx, ecx
00404efa: push     0x30
00404efc: call     0x60a0b5
00404f01: mov      esi, eax
00404f03: add      esp, 4
00404f06: mov      dword ptr [esp + 8], esi
00404f0a: test     esi, esi
00404f0c: mov      dword ptr [esp + 0x14], 0
00404f14: je       0x404f60
00404f16: push     edi
00404f17: mov      edi, dword ptr [ebx + 0x30]
00404f1a: push     edi
00404f1b: mov      ecx, esi
00404f1d: call     0x40a720
00404f22: push     0
00404f24: mov      ecx, edi
00404f26: mov      byte ptr [esp + 0x1c], 1
00404f2b: mov      dword ptr [esi + 0x2c], edi
00404f2e: mov      dword ptr [esi], 0x64a57c
00404f34: call     0x40e390
00404f39: mov      ecx, dword ptr [esi + 0x2c]
00404f3c: call     0x423700
00404f41: mov      ecx, eax
00404f43: call     0x4a0640
00404f48: test     al, al
00404f4a: pop      edi
00404f4b: je       0x404f62
00404f4d: mov      ecx, dword ptr [esi + 0x2c]
00404f50: push     0
00404f52: call     0x423700
00404f57: mov      ecx, eax
00404f59: call     0x4a0bb0
00404f5e: jmp      0x404f62
00404f60: xor      esi, esi
00404f62: push     esi
00404f63: push     1
00404f65: mov      ecx, ebx
00404f67: mov      dword ptr [esp + 0x1c], 0xffffffff
00404f6f: call     0x402a10
00404f74: mov      ecx, dword ptr [esp + 0xc]
00404f78: pop      esi
00404f79: pop      ebx
00404f7a: mov      dword ptr fs:[0], ecx
00404f81: add      esp, 0x10
00404f84: ret      
00404f85: nop      
00404f86: nop      
00404f87: nop      
00404f88: nop      
00404f89: nop      
00404f8a: nop      
00404f8b: nop      
00404f8c: nop      
00404f8d: nop      
00404f8e: nop      
00404f8f: nop      
00404f90: push     -1
00404f92: push     0x61fdfb
00404f97: mov      eax, dword ptr fs:[0]
00404f9d: push     eax
00404f9e: mov      dword ptr fs:[0], esp
00404fa5: push     ecx
00404fa6: push     esi
00404fa7: mov      esi, ecx
00404fa9: push     0x2c
00404fab: call     0x60a0b5
00404fb0: add      esp, 4
00404fb3: mov      dword ptr [esp + 4], eax
00404fb7: test     eax, eax
00404fb9: mov      dword ptr [esp + 0x10], 0
00404fc1: je       0x404fd0
00404fc3: mov      ecx, dword ptr [esi + 0x30]
00404fc6: push     ecx
00404fc7: mov      ecx, eax
00404fc9: call     0x405000
00404fce: jmp      0x404fd2
00404fd0: xor      eax, eax
00404fd2: push     eax
00404fd3: push     2
00404fd5: mov      ecx, esi
00404fd7: mov      dword ptr [esp + 0x18], 0xffffffff
00404fdf: call     0x402a10
00404fe4: mov      ecx, dword ptr [esp + 8]
00404fe8: pop      esi
00404fe9: mov      dword ptr fs:[0], ecx
00404ff0: add      esp, 0x10
00404ff3: ret      
00404ff4: nop      
00404ff5: nop      
00404ff6: nop      
00404ff7: nop      
00404ff8: nop      
00404ff9: nop      
00404ffa: nop      
00404ffb: nop      
00404ffc: nop      
00404ffd: nop      
00404ffe: nop      
00404fff: nop      
00405000: push     esi
00405001: push     edi
00405002: mov      edi, dword ptr [esp + 0xc]
00405006: mov      esi, ecx
00405008: push     edi
00405009: call     0x404c50
0040500e: mov      dword ptr [esi + 0x28], edi
00405011: mov      dword ptr [esi], 0x64a58c
00405017: mov      eax, esi
00405019: pop      edi
0040501a: pop      esi
0040501b: ret      4
0040501e: nop      
0040501f: nop      
00405020: push     -1
00405022: push     0x61fe1b
00405027: mov      eax, dword ptr fs:[0]
0040502d: push     eax
0040502e: mov      dword ptr fs:[0], esp
00405035: push     ecx
00405036: push     esi
00405037: mov      esi, ecx
00405039: push     0x30
0040503b: call     0x60a0b5
00405040: add      esp, 4
00405043: mov      dword ptr [esp + 4], eax
00405047: test     eax, eax
00405049: mov      dword ptr [esp + 0x10], 0
00405051: je       0x405060
00405053: mov      ecx, dword ptr [esi + 0x28]
00405056: push     ecx
00405057: mov      ecx, eax
00405059: call     0x405090
0040505e: jmp      0x405062
00405060: xor      eax, eax
00405062: push     eax
00405063: push     2
00405065: mov      ecx, esi
00405067: mov      dword ptr [esp + 0x18], 0xffffffff
0040506f: call     0x402a10
00405074: mov      ecx, dword ptr [esp + 8]
00405078: pop      esi
00405079: mov      dword ptr fs:[0], ecx
00405080: add      esp, 0x10
00405083: ret      
00405084: nop      
00405085: nop      
00405086: nop      
00405087: nop      
00405088: nop      
00405089: nop      
0040508a: nop      
0040508b: nop      
0040508c: nop      
0040508d: nop      
0040508e: nop      
0040508f: nop      
00405090: push     esi
00405091: push     edi
00405092: mov      edi, dword ptr [esp + 0xc]
00405096: mov      esi, ecx
00405098: push     edi
00405099: call     0x40ab10
0040509e: mov      dword ptr [esi + 0x28], edi
004050a1: mov      byte ptr [esi + 0x2c], 0
004050a5: mov      dword ptr [esi], 0x64a5a0
004050ab: mov      eax, esi
004050ad: pop      edi
004050ae: pop      esi
004050af: ret      4
004050b2: nop      
004050b3: nop      
004050b4: nop      
004050b5: nop      
004050b6: nop      
004050b7: nop      
004050b8: nop      
004050b9: nop      
004050ba: nop      
004050bb: nop      
004050bc: nop      
004050bd: nop      
004050be: nop      
004050bf: nop      
004050c0: mov      ecx, dword ptr [ecx + 0x28]
004050c3: push     0x3fe66666
004050c8: push     0
004050ca: push     6
004050cc: mov      eax, dword ptr [ecx]
004050ce: call     dword ptr [eax + 0x8c]
004050d4: ret      4
004050d7: nop      
004050d8: nop      
004050d9: nop      
004050da: nop      
004050db: nop      
004050dc: nop      
004050dd: nop      
004050de: nop      
004050df: nop      
004050e0: mov      eax, dword ptr [esp + 8]
004050e4: sub      esp, 0x30
004050e7: push     esi
004050e8: mov      esi, ecx
004050ea: push     eax
004050eb: mov      ecx, dword ptr [esi + 0x28]
004050ee: call     0x422f30
004050f3: test     al, al
004050f5: jne      0x405105
004050f7: mov      ecx, esi
004050f9: call     0x402d00
004050fe: pop      esi
004050ff: add      esp, 0x30
00405102: ret      8
00405105: mov      ecx, dword ptr [esi + 0x28]
00405108: call     0x423700
0040510d: mov      ecx, eax
0040510f: call     0x4a0d00
00405114: test     al, al
00405116: je       0x405137
00405118: mov      ecx, dword ptr [esi + 0x28]
0040511b: mov      byte ptr [esi + 0x2c], 0
0040511f: push     0x3fe66666
00405124: push     0
00405126: mov      edx, dword ptr [ecx]
00405128: push     6
0040512a: call     dword ptr [edx + 0x8c]
00405130: pop      esi
00405131: add      esp, 0x30
00405134: ret      8
00405137: mov      al, byte ptr [esi + 0x2c]
0040513a: test     al, al
0040513c: jne      0x405223
00405142: mov      ecx, dword ptr [esi + 0x28]
00405145: call     0x423700
0040514a: mov      ecx, eax
0040514c: call     0x4a1060
00405151: fstp     dword ptr [esp + 0x3c]
00405155: mov      ecx, dword ptr [esi + 0x28]
00405158: call     0x42bcd0
0040515d: fcomp    dword ptr [esp + 0x3c]
00405161: fnstsw   ax
00405163: test     ah, 1
00405166: je       0x405223
0040516c: mov      ecx, dword ptr [esi + 0x28]
0040516f: call     0x423700
00405174: mov      ecx, eax
00405176: call     0x4a1060
0040517b: fstp     dword ptr [esp + 0x3c]
0040517f: mov      ecx, dword ptr [esi + 0x28]
00405182: call     0x42bce0
00405187: fcomp    dword ptr [esp + 0x3c]
0040518b: fnstsw   ax
0040518d: test     ah, 0x41
00405190: jne      0x405223
00405196: mov      ecx, dword ptr [esi + 0x28]
00405199: lea      eax, [esp + 0x28]
0040519d: push     eax
0040519e: call     0x40e670
004051a3: mov      ecx, dword ptr [eax]
004051a5: mov      dword ptr [esp + 4], ecx
004051a9: mov      ecx, dword ptr [esi + 0x28]
004051ac: mov      edx, dword ptr [eax + 4]
004051af: mov      dword ptr [esp + 8], edx
004051b3: lea      edx, [esp + 0x28]
004051b7: mov      eax, dword ptr [eax + 8]
004051ba: push     edx
004051bb: mov      dword ptr [esp + 0x10], eax
004051bf: mov      eax, dword ptr [ecx]
004051c1: call     dword ptr [eax + 0x9c]
004051c7: mov      ecx, eax
004051c9: call     0x49bc80
004051ce: mov      ecx, dword ptr [eax]
004051d0: mov      dword ptr [esp + 0x10], ecx
004051d4: lea      ecx, [esp + 0x1c]
004051d8: mov      edx, dword ptr [eax + 4]
004051db: push     ecx
004051dc: mov      dword ptr [esp + 0x18], edx
004051e0: lea      edx, [esp + 0x14]
004051e4: mov      eax, dword ptr [eax + 8]
004051e7: lea      ecx, [esp + 8]
004051eb: mov      dword ptr [esp + 0x1c], eax
004051ef: call     0x5b2fe0
004051f4: lea      edx, [esp + 4]
004051f8: lea      ecx, [esp + 4]
004051fc: push     edx
004051fd: push     0x3e99999a
00405202: lea      edx, [esp + 0x24]
00405206: call     0x5b3020
0040520b: mov      ecx, dword ptr [esi + 0x28]
0040520e: lea      edx, [esp + 0x10]
00405212: push     edx
00405213: lea      edx, [esp + 8]
00405217: mov      eax, dword ptr [ecx]
00405219: push     edx
0040521a: call     dword ptr [eax + 0xc0]
00405220: mov      byte ptr [esi + 0x2c], al
00405223: pop      esi
00405224: add      esp, 0x30
00405227: ret      8
0040522a: nop      
0040522b: nop      
0040522c: nop      
0040522d: nop      
0040522e: nop      
0040522f: nop      
00405230: push     esi
00405231: push     edi
00405232: mov      edi, dword ptr [esp + 0xc]
00405236: mov      esi, ecx
00405238: push     edi
00405239: call     0x40a740
0040523e: mov      dword ptr [esi + 0x30], edi
00405241: mov      dword ptr [esi], 0x64a5b0
00405247: mov      eax, esi
00405249: pop      edi
0040524a: pop      esi
0040524b: ret      4
0040524e: nop      
0040524f: nop      
00405250: push     -1
00405252: push     0x61fe43
00405257: mov      eax, dword ptr fs:[0]
0040525d: push     eax
0040525e: mov      dword ptr fs:[0], esp
00405265: push     ecx
00405266: push     ebx
00405267: push     esi
00405268: mov      ebx, ecx
0040526a: push     0x30
0040526c: call     0x60a0b5
00405271: mov      esi, eax
00405273: add      esp, 4
00405276: mov      dword ptr [esp + 8], esi
0040527a: test     esi, esi
0040527c: mov      dword ptr [esp + 0x14], 0
00405284: je       0x4052d0
00405286: push     edi
00405287: mov      edi, dword ptr [ebx + 0x30]
0040528a: push     edi
0040528b: mov      ecx, esi
0040528d: call     0x40a720
00405292: push     0
00405294: mov      ecx, edi
00405296: mov      byte ptr [esp + 0x1c], 1
0040529b: mov      dword ptr [esi + 0x2c], edi
0040529e: mov      dword ptr [esi], 0x64a5e4
004052a4: call     0x40c4f0
004052a9: mov      ecx, dword ptr [esi + 0x2c]
004052ac: call     0x423700
004052b1: mov      ecx, eax
004052b3: call     0x4a0640
004052b8: test     al, al
004052ba: pop      edi
004052bb: je       0x4052d2
004052bd: mov      ecx, dword ptr [esi + 0x2c]
004052c0: push     0
004052c2: call     0x423700
004052c7: mov      ecx, eax
004052c9: call     0x4a0bb0
004052ce: jmp      0x4052d2
004052d0: xor      esi, esi
004052d2: push     esi
004052d3: push     1
004052d5: mov      ecx, ebx
004052d7: mov      dword ptr [esp + 0x1c], 0xffffffff
004052df: call     0x402a10
004052e4: mov      ecx, dword ptr [esp + 0xc]
004052e8: pop      esi
004052e9: pop      ebx
004052ea: mov      dword ptr fs:[0], ecx
004052f1: add      esp, 0x10
004052f4: ret      
004052f5: nop      
004052f6: nop      
004052f7: nop      
004052f8: nop      
004052f9: nop      
004052fa: nop      
004052fb: nop      
004052fc: nop      
004052fd: nop      
004052fe: nop      
004052ff: nop      
00405300: push     -1
00405302: push     0x61fe5b
00405307: mov      eax, dword ptr fs:[0]
0040530d: push     eax
0040530e: mov      dword ptr fs:[0], esp
00405315: push     ecx
00405316: push     esi
00405317: mov      esi, ecx
00405319: push     0x2c
0040531b: call     0x60a0b5
00405320: add      esp, 4
00405323: mov      dword ptr [esp + 4], eax
00405327: test     eax, eax
00405329: mov      dword ptr [esp + 0x10], 0
00405331: je       0x405340
00405333: mov      ecx, dword ptr [esi + 0x30]
00405336: push     ecx
00405337: mov      ecx, eax
00405339: call     0x405370
0040533e: jmp      0x405342
00405340: xor      eax, eax
00405342: push     eax
00405343: push     2
00405345: mov      ecx, esi
00405347: mov      dword ptr [esp + 0x18], 0xffffffff
0040534f: call     0x402a10
00405354: mov      ecx, dword ptr [esp + 8]
00405358: pop      esi
00405359: mov      dword ptr fs:[0], ecx
00405360: add      esp, 0x10
00405363: ret      
00405364: nop      
00405365: nop      
00405366: nop      
00405367: nop      
00405368: nop      
00405369: nop      
0040536a: nop      
0040536b: nop      
0040536c: nop      
0040536d: nop      
0040536e: nop      
0040536f: nop      
00405370: push     esi
00405371: push     edi
00405372: mov      edi, dword ptr [esp + 0xc]
00405376: mov      esi, ecx
00405378: push     edi
00405379: call     0x404c50
0040537e: mov      dword ptr [esi + 0x28], edi
00405381: mov      dword ptr [esi], 0x64a5f4
00405387: mov      eax, esi
00405389: pop      edi
0040538a: pop      esi
0040538b: ret      4
0040538e: nop      
0040538f: nop      
00405390: push     -1
00405392: push     0x61fe7b
00405397: mov      eax, dword ptr fs:[0]
0040539d: push     eax
0040539e: mov      dword ptr fs:[0], esp
004053a5: push     ecx
004053a6: push     esi
004053a7: mov      esi, ecx
004053a9: push     0x2c
004053ab: call     0x60a0b5
004053b0: add      esp, 4
004053b3: mov      dword ptr [esp + 4], eax
004053b7: test     eax, eax
004053b9: mov      dword ptr [esp + 0x10], 0
004053c1: je       0x4053d0
004053c3: mov      ecx, dword ptr [esi + 0x28]
004053c6: push     ecx
004053c7: mov      ecx, eax
004053c9: call     0x40a1d0
004053ce: jmp      0x4053d2
004053d0: xor      eax, eax
004053d2: push     eax
004053d3: push     2
004053d5: mov      ecx, esi
004053d7: mov      dword ptr [esp + 0x18], 0xffffffff
004053df: call     0x402a10
004053e4: mov      ecx, dword ptr [esp + 8]
004053e8: pop      esi
004053e9: mov      dword ptr fs:[0], ecx
004053f0: add      esp, 0x10
004053f3: ret      
004053f4: nop      
004053f5: nop      
004053f6: nop      
004053f7: nop      
004053f8: nop      
004053f9: nop      
004053fa: nop      
004053fb: nop      
004053fc: nop      
004053fd: nop      
004053fe: nop      
004053ff: nop      
00405400: push     esi
00405401: mov      esi, ecx
00405403: call     0x405420
00405408: test     byte ptr [esp + 8], 1
0040540d: je       0x405418
0040540f: push     esi
00405410: call     0x5fe5f0
00405415: add      esp, 4
00405418: mov      eax, esi
0040541a: pop      esi
0040541b: ret      4
0040541e: nop      
0040541f: nop      
00405420: push     -1
00405422: push     0x61fe98
00405427: mov      eax, dword ptr fs:[0]
0040542d: push     eax
0040542e: mov      dword ptr fs:[0], esp
00405435: push     ecx
00405436: push     esi
00405437: mov      esi, ecx
00405439: mov      dword ptr [esp + 4], esi
0040543d: mov      dword ptr [esi], 0x64a57c
00405443: mov      ecx, dword ptr [esi + 0x2c]
00405446: push     1
00405448: mov      dword ptr [esp + 0x14], 0
00405450: call     0x40e390
00405455: mov      ecx, esi
00405457: mov      dword ptr [esp + 0x10], 0xffffffff
0040545f: call     0x4029b0
00405464: mov      ecx, dword ptr [esp + 8]
00405468: pop      esi
00405469: mov      dword ptr fs:[0], ecx
00405470: add      esp, 0x10
00405473: ret      
00405474: nop      
00405475: nop      
00405476: nop      
00405477: nop      
00405478: nop      
00405479: nop      
0040547a: nop      
0040547b: nop      
0040547c: nop      
0040547d: nop      
0040547e: nop      
0040547f: nop      
00405480: push     esi
00405481: mov      esi, ecx
00405483: call     0x4054a0
00405488: test     byte ptr [esp + 8], 1
0040548d: je       0x405498
0040548f: push     esi
00405490: call     0x5fe5f0
00405495: add      esp, 4
00405498: mov      eax, esi
0040549a: pop      esi
0040549b: ret      4
0040549e: nop      
0040549f: nop      
004054a0: push     -1
004054a2: push     0x61feb8
004054a7: mov      eax, dword ptr fs:[0]
004054ad: push     eax
004054ae: mov      dword ptr fs:[0], esp
004054b5: push     ecx
004054b6: push     esi
004054b7: mov      esi, ecx
004054b9: mov      dword ptr [esp + 4], esi
004054bd: mov      dword ptr [esi], 0x64a5e4
004054c3: mov      ecx, dword ptr [esi + 0x2c]
004054c6: push     1
004054c8: mov      dword ptr [esp + 0x14], 0
004054d0: call     0x40c4f0
004054d5: mov      ecx, esi
004054d7: mov      dword ptr [esp + 0x10], 0xffffffff
004054df: call     0x4029b0
004054e4: mov      ecx, dword ptr [esp + 8]
004054e8: pop      esi
004054e9: mov      dword ptr fs:[0], ecx
004054f0: add      esp, 0x10
004054f3: ret      
004054f4: nop      
004054f5: nop      
004054f6: nop      
004054f7: nop      
004054f8: nop      
004054f9: nop      
004054fa: nop      
004054fb: nop      
004054fc: nop      
004054fd: nop      
004054fe: nop      
004054ff: nop      
00405500: mov      cl, byte ptr [0x7103a0]
00405506: mov      al, 1
00405508: test     al, cl
0040550a: jne      0x405514
0040550c: or       cl, al
0040550e: mov      byte ptr [0x7103a0], cl
00405514: jmp      0x405520
00405519: nop      
0040551a: nop      
0040551b: nop      
0040551c: nop      
0040551d: nop      
0040551e: nop      
0040551f: nop      
00405520: push     0x401ba0
00405525: call     0x60a57b
0040552a: pop      ecx
0040552b: ret      
0040552c: nop      
0040552d: nop      
0040552e: nop      
0040552f: nop      
00405530: push     esi
00405531: push     edi
00405532: mov      edi, dword ptr [esp + 0xc]
00405536: mov      esi, ecx
00405538: push     edi
00405539: call     0x402960
0040553e: mov      dword ptr [esi + 0x28], edi
00405541: mov      dword ptr [esi], 0x64a608
00405547: mov      eax, esi
00405549: pop      edi
0040554a: pop      esi
0040554b: ret      4
0040554e: nop      
0040554f: nop      
00405550: push     esi
00405551: push     edi
00405552: mov      edi, dword ptr [esp + 0xc]
00405556: mov      esi, ecx
00405558: push     edi
00405559: call     0x402d70
0040555e: mov      dword ptr [esi + 0x2c], edi
00405561: mov      dword ptr [esi], 0x64a618
00405567: mov      eax, esi
00405569: pop      edi
0040556a: pop      esi
0040556b: ret      4
0040556e: nop      
0040556f: nop      
00405570: push     -1
00405572: push     0x61fedb
00405577: mov      eax, dword ptr fs:[0]
0040557d: push     eax
0040557e: mov      dword ptr fs:[0], esp
00405585: push     ecx
00405586: push     esi
00405587: mov      esi, ecx
00405589: push     0x30
0040558b: call     0x60a0b5
00405590: add      esp, 4
00405593: mov      dword ptr [esp + 4], eax
00405597: test     eax, eax
00405599: mov      dword ptr [esp + 0x10], 0
004055a1: je       0x4055b0
004055a3: mov      ecx, dword ptr [esi + 0x2c]
004055a6: push     ecx
004055a7: mov      ecx, eax
004055a9: call     0x406040
004055ae: jmp      0x4055b2
004055b0: xor      eax, eax
004055b2: push     eax
004055b3: push     0
004055b5: mov      ecx, esi
004055b7: mov      dword ptr [esp + 0x18], 0xffffffff
004055bf: call     0x402a10
004055c4: mov      ecx, dword ptr [esp + 8]
004055c8: pop      esi
004055c9: mov      dword ptr fs:[0], ecx
004055d0: add      esp, 0x10
004055d3: ret      
004055d4: nop      
004055d5: nop      
004055d6: nop      
004055d7: nop      
004055d8: nop      
004055d9: nop      
004055da: nop      
004055db: nop      
004055dc: nop      
004055dd: nop      
004055de: nop      
004055df: nop      
004055e0: push     -1
004055e2: push     0x61fefb
004055e7: mov      eax, dword ptr fs:[0]
004055ed: push     eax
004055ee: mov      dword ptr fs:[0], esp
004055f5: push     ecx
004055f6: push     esi
004055f7: mov      esi, ecx
004055f9: push     0x3c
004055fb: call     0x60a0b5
00405600: add      esp, 4
00405603: mov      dword ptr [esp + 4], eax
00405607: test     eax, eax
00405609: mov      dword ptr [esp + 0x10], 0
00405611: je       0x405620
00405613: mov      ecx, dword ptr [esi + 0x2c]
00405616: push     ecx
00405617: mov      ecx, eax
00405619: call     0x405840
0040561e: jmp      0x405622
00405620: xor      eax, eax
00405622: push     eax
00405623: push     1
00405625: mov      ecx, esi
00405627: mov      dword ptr [esp + 0x18], 0xffffffff
0040562f: call     0x402a10
00405634: mov      ecx, dword ptr [esp + 8]
00405638: pop      esi
00405639: mov      dword ptr fs:[0], ecx
00405640: add      esp, 0x10
00405643: ret      
00405644: nop      
00405645: nop      
00405646: nop      
00405647: nop      
00405648: nop      
00405649: nop      
0040564a: nop      
0040564b: nop      
0040564c: nop      
0040564d: nop      
0040564e: nop      
0040564f: nop      
00405650: push     -1
00405652: push     0x61ff1b
00405657: mov      eax, dword ptr fs:[0]
0040565d: push     eax
0040565e: mov      dword ptr fs:[0], esp
00405665: push     ecx
00405666: push     esi
00405667: mov      esi, ecx
00405669: push     0x2c
0040566b: call     0x60a0b5
00405670: add      esp, 4
00405673: mov      dword ptr [esp + 4], eax
00405677: test     eax, eax
00405679: mov      dword ptr [esp + 0x10], 0
00405681: je       0x405690
00405683: mov      ecx, dword ptr [esi + 0x2c]
00405686: push     ecx
00405687: mov      ecx, eax
00405689: call     0x405a80
0040568e: jmp      0x405692
00405690: xor      eax, eax
00405692: push     eax
00405693: push     2
00405695: mov      ecx, esi
00405697: mov      dword ptr [esp + 0x18], 0xffffffff
0040569f: call     0x402a10
004056a4: mov      ecx, dword ptr [esp + 8]
004056a8: pop      esi
004056a9: mov      dword ptr fs:[0], ecx
004056b0: add      esp, 0x10
004056b3: ret      
004056b4: nop      
004056b5: nop      
004056b6: nop      
004056b7: nop      
004056b8: nop      
004056b9: nop      
004056ba: nop      
004056bb: nop      
004056bc: nop      
004056bd: nop      
004056be: nop      
004056bf: nop      
004056c0: push     -1
004056c2: push     0x61ff3b
004056c7: mov      eax, dword ptr fs:[0]
004056cd: push     eax
004056ce: mov      dword ptr fs:[0], esp
004056d5: push     ecx
004056d6: push     esi
004056d7: mov      esi, ecx
004056d9: call     0x402cf0
004056de: cmp      eax, 5
004056e1: jne      0x4056ef
004056e3: mov      ecx, esi
004056e5: call     0x402cf0
004056ea: cmp      eax, 4
004056ed: je       0x40572a
004056ef: push     0x2c
004056f1: call     0x60a0b5
004056f6: add      esp, 4
004056f9: mov      dword ptr [esp + 4], eax
004056fd: test     eax, eax
004056ff: mov      dword ptr [esp + 0x10], 0
00405707: je       0x405716
00405709: mov      ecx, dword ptr [esi + 0x2c]
0040570c: push     ecx
0040570d: mov      ecx, eax
0040570f: call     0x405b10
00405714: jmp      0x405718
00405716: xor      eax, eax
00405718: push     eax
00405719: push     4
0040571b: mov      ecx, esi
0040571d: mov      dword ptr [esp + 0x18], 0xffffffff
00405725: call     0x402a10
0040572a: mov      ecx, dword ptr [esp + 8]
0040572e: pop      esi