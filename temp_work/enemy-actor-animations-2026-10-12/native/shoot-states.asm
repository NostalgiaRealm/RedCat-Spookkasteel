00406d00: mov       ecx, dword ptr [ecx + 0x24]
00406d03: push      0x7f7fffff
00406d08: push      0
00406d0a: push      1
00406d0c: mov       eax, dword ptr [ecx]
00406d0e: call      dword ptr [eax + 0x8c]
00406d14: ret       
00406d15: nop       
00406d16: nop       
00406d17: nop       
00406d18: nop       
00406d19: nop       
00406d1a: nop       
00406d1b: nop       
00406d1c: nop       
00406d1d: nop       
00406d1e: nop       
00406d1f: nop       
00406d20: mov       eax, dword ptr [esp + 8]
00406d24: push      esi
00406d25: mov       esi, ecx
00406d27: push      eax
00406d28: mov       ecx, dword ptr [esp + 0xc]
00406d2c: push      ecx
00406d2d: mov       ecx, esi
00406d2f: call      0x404020
00406d34: mov       ecx, esi
00406d36: call      0x402d10
00406d3b: test      al, al
00406d3d: jne       0x406d66
00406d3f: mov       ecx, dword ptr [esi + 0x24]
00406d42: call      0x423700
00406d47: mov       ecx, eax
00406d49: call      0x4a0d00
00406d4e: test      al, al
00406d50: je        0x406d66
00406d52: mov       ecx, dword ptr [esi + 0x24]
00406d55: push      0x7f7fffff
00406d5a: push      0
00406d5c: push      1
00406d5e: mov       edx, dword ptr [ecx]
00406d60: call      dword ptr [edx + 0x8c]
00406d66: pop       esi
00406d67: ret       8
00406d6a: nop       
00406d6b: nop       
00406d6c: nop       
00406d6d: nop       
00406d6e: nop       
00406d6f: nop       
00406d70: mov       cl, byte ptr [0x7103a0]
00406d76: mov       al, 1
00406d78: test      al, cl
00406d7a: jne       0x406d84
00406d7c: or        cl, al
00406d7e: mov       byte ptr [0x7103a0], cl
00406d84: jmp       0x406d90
00406d89: nop       
00406d8a: nop       
00406d8b: nop       
00406d8c: nop       
00406d8d: nop       
00406d8e: nop       
00406d8f: nop       
00406d90: push      0x401ba0
00406d95: call      0x60a57b
00406d9a: pop       ecx
00406d9b: ret       
00406d9c: nop       
00406d9d: nop       
00406d9e: nop       
00406d9f: nop       
00406da0: push      esi
00406da1: push      edi
00406da2: mov       edi, dword ptr [esp + 0xc]
00406da6: mov       esi, ecx
00406da8: push      edi
00406da9: call      0x405530
00406dae: mov       dword ptr [esi + 0x2c], edi
00406db1: mov       dword ptr [esi], 0x64a790
00406db7: mov       eax, esi
00406db9: pop       edi
00406dba: pop       esi
00406dbb: ret       4
00406dbe: nop       
00406dbf: nop       
00406dc0: push      esi
00406dc1: push      edi
00406dc2: mov       edi, dword ptr [esp + 0xc]
00406dc6: mov       esi, ecx
00406dc8: push      edi
00406dc9: call      0x405550
00406dce: mov       dword ptr [esi + 0x30], edi
00406dd1: mov       dword ptr [esi], 0x64a7a0
00406dd7: mov       eax, esi
00406dd9: pop       edi
00406dda: pop       esi
00406ddb: ret       4
00406dde: nop       
00406ddf: nop       
00406de0: push      -1
00406de2: push      0x62017b
00406de7: mov       eax, dword ptr fs:[0]
00406ded: push      eax
00406dee: mov       dword ptr fs:[0], esp
00406df5: push      ecx
00406df6: push      esi
00406df7: mov       esi, ecx
00406df9: push      0x2c
00406dfb: call      0x60a0b5
00406e00: add       esp, 4
00406e03: mov       dword ptr [esp + 4], eax
00406e07: test      eax, eax
00406e09: mov       dword ptr [esp + 0x10], 0
00406e11: je        0x406e20
00406e13: mov       ecx, dword ptr [esi + 0x30]
00406e16: push      ecx
00406e17: mov       ecx, eax
00406e19: call      0x406e50
00406e1e: jmp       0x406e22
00406e20: xor       eax, eax
00406e22: push      eax
00406e23: push      2
00406e25: mov       ecx, esi
00406e27: mov       dword ptr [esp + 0x18], 0xffffffff
00406e2f: call      0x402a10
00406e34: mov       ecx, dword ptr [esp + 8]
00406e38: pop       esi
00406e39: mov       dword ptr fs:[0], ecx
00406e40: add       esp, 0x10
00406e43: ret       
00406e44: nop       
00406e45: nop       
00406e46: nop       
00406e47: nop       
00406e48: nop       
00406e49: nop       
00406e4a: nop       
00406e4b: nop       
00406e4c: nop       
00406e4d: nop       
00406e4e: nop       
00406e4f: nop       
00406e50: push      -1
00406e52: push      0x620198
00406e57: mov       eax, dword ptr fs:[0]
00406e5d: push      eax
00406e5e: mov       dword ptr fs:[0], esp
00406e65: push      ecx
00406e66: push      esi
00406e67: push      edi
00406e68: mov       edi, dword ptr [esp + 0x1c]
00406e6c: mov       esi, ecx
00406e6e: push      edi
00406e6f: mov       dword ptr [esp + 0xc], esi
00406e73: call      0x403610
00406e78: push      ecx
00406e79: mov       ecx, edi
00406e7b: mov       eax, esp
00406e7d: mov       dword ptr [esp + 0x20], esp
00406e81: push      eax
00406e82: mov       dword ptr [esp + 0x1c], 0
00406e8a: mov       dword ptr [esi + 0x28], edi
00406e8d: mov       dword ptr [esi], 0x64a7d4
00406e93: call      0x4237d0
00406e98: mov       ecx, dword ptr [esi + 0x28]
00406e9b: call      0x428250
00406ea0: mov       ecx, dword ptr [esp + 0xc]
00406ea4: mov       eax, esi
00406ea6: pop       edi
00406ea7: mov       dword ptr fs:[0], ecx
00406eae: pop       esi
00406eaf: add       esp, 0x10
00406eb2: ret       4
00406eb5: nop       
00406eb6: nop       
00406eb7: nop       
00406eb8: nop       
00406eb9: nop       
00406eba: nop       
00406ebb: nop       
00406ebc: nop       
00406ebd: nop       
00406ebe: nop       
00406ebf: nop       
00406ec0: push      esi
00406ec1: mov       esi, ecx
00406ec3: call      0x406ee0
00406ec8: test      byte ptr [esp + 8], 1
00406ecd: je        0x406ed8
00406ecf: push      esi
00406ed0: call      0x5fe5f0
00406ed5: add       esp, 4
00406ed8: mov       eax, esi
00406eda: pop       esi
00406edb: ret       4
00406ede: nop       
00406edf: nop       
00406ee0: push      -1
00406ee2: push      0x6201b8
00406ee7: mov       eax, dword ptr fs:[0]
00406eed: push      eax
00406eee: mov       dword ptr fs:[0], esp
00406ef5: sub       esp, 8
00406ef8: push      esi
00406ef9: mov       esi, ecx
00406efb: mov       dword ptr [esp + 4], esi
00406eff: mov       dword ptr [esi], 0x64a7d4
00406f05: push      ecx
00406f06: mov       dword ptr [esp + 0x18], 0
00406f0e: mov       eax, esp
00406f10: mov       dword ptr [esp + 0xc], esp
00406f14: mov       dword ptr [eax], 0
00406f1a: mov       ecx, dword ptr [esi + 0x28]
00406f1d: call      0x428250
00406f22: mov       ecx, esi
00406f24: mov       dword ptr [esp + 0x14], 0xffffffff
00406f2c: call      0x4036a0
00406f31: mov       ecx, dword ptr [esp + 0xc]
00406f35: pop       esi
00406f36: mov       dword ptr fs:[0], ecx
00406f3d: add       esp, 0x14
00406f40: ret       
00406f41: nop       
00406f42: nop       
00406f43: nop       
00406f44: nop       
00406f45: nop       
00406f46: nop       
00406f47: nop       
00406f48: nop       
00406f49: nop       
00406f4a: nop       
00406f4b: nop       
00406f4c: nop       
00406f4d: nop       
00406f4e: nop       
00406f4f: nop       
00406f50: mov       eax, dword ptr [esp + 4]
00406f54: push      esi
00406f55: mov       esi, ecx
00406f57: push      eax
00406f58: call      0x403690
00406f5d: mov       edx, dword ptr [esi]
00406f5f: mov       ecx, esi
00406f61: call      dword ptr [edx + 0xc]
00406f64: pop       esi
00406f65: ret       4
00406f68: nop       
00406f69: nop       
00406f6a: nop       
00406f6b: nop       
00406f6c: nop       
00406f6d: nop       
00406f6e: nop       
00406f6f: nop       
00406f70: mov       eax, dword ptr fs:[0]
00406f76: push      -1
00406f78: push      0x6201d8
00406f7d: push      eax
00406f7e: mov       dword ptr fs:[0], esp
00406f85: sub       esp, 0x10
00406f88: push      ebx
00406f89: push      esi
00406f8a: push      edi
00406f8b: mov       esi, ecx
00406f8d: call      0x402cf0
00406f92: xor       ebx, ebx
00406f94: sub       eax, ebx
00406f96: je        0x407175
00406f9c: dec       eax
00406f9d: je        0x4070d0
00406fa3: dec       eax
00406fa4: je        0x407076
00406faa: mov       al, byte ptr [esp + 0x30]
00406fae: mov       edi, 0x68d308
00406fb3: mov       byte ptr [esp + 0xc], al
00406fb7: or        ecx, 0xffffffff
00406fba: xor       eax, eax
00406fbc: push      ebp
00406fbd: repne scasb al, byte ptr es:[edi]
00406fbf: not       ecx
00406fc1: dec       ecx
00406fc2: push      1
00406fc4: mov       ebp, ecx
00406fc6: lea       ecx, [esp + 0x14]
00406fca: push      ebp
00406fcb: mov       dword ptr [esp + 0x1c], ebx
00406fcf: mov       dword ptr [esp + 0x20], ebx
00406fd3: mov       dword ptr [esp + 0x24], ebx
00406fd7: call      0x401940
00406fdc: test      al, al
00406fde: je        0x407004
00406fe0: mov       edi, dword ptr [esp + 0x14]
00406fe4: mov       ecx, ebp
00406fe6: mov       edx, ecx
00406fe8: mov       esi, 0x68d308
00406fed: shr       ecx, 2
00406ff0: rep movsd dword ptr es:[edi], dword ptr [esi]
00406ff2: mov       ecx, edx
00406ff4: and       ecx, 3
00406ff7: rep movsb byte ptr es:[edi], byte ptr [esi]
00406ff9: mov       eax, dword ptr [esp + 0x14]
00406ffd: mov       dword ptr [esp + 0x18], ebp
00407001: mov       byte ptr [eax + ebp], bl
00407004: lea       ecx, [esp + 0x10]
00407008: mov       dword ptr [esp + 0x28], ebx
0040700c: push      ecx
0040700d: push      0x82
00407012: push      0x68dd98
00407017: push      0x68d2d0
0040701c: call      0x5a07f0
00407021: call      eax
00407023: mov       eax, dword ptr [esp + 0x24]
00407027: add       esp, 0x10
0040702a: cmp       eax, ebx
0040702c: pop       ebp
0040702d: je        0x4071e9
00407033: lea       ecx, [eax - 1]
00407036: mov       al, byte ptr [eax - 1]
00407039: cmp       al, bl
0040703b: je        0x407059
0040703d: cmp       al, 0xff
0040703f: je        0x407059
00407041: dec       al
00407043: pop       edi
00407044: pop       esi
00407045: mov       byte ptr [ecx], al
00407047: pop       ebx
00407048: mov       ecx, dword ptr [esp + 0x10]
0040704c: mov       dword ptr fs:[0], ecx
00407053: add       esp, 0x1c
00407056: ret       8
00407059: push      ecx
0040705a: call      0x5fe5f0
0040705f: add       esp, 4
00407062: pop       edi
00407063: pop       esi
00407064: pop       ebx
00407065: mov       ecx, dword ptr [esp + 0x10]
00407069: mov       dword ptr fs:[0], ecx
00407070: add       esp, 0x1c
00407073: ret       8
00407076: mov       edi, dword ptr [esp + 0x30]
0040707a: mov       edx, dword ptr [esp + 0x2c]
0040707e: push      edi
0040707f: push      edx
00407080: mov       ecx, esi
00407082: call      0x402a80
00407087: mov       ecx, eax
00407089: call      0x402d20
0040708e: mov       ecx, esi
00407090: call      0x402a80
00407095: mov       ecx, eax
00407097: call      0x402d10
0040709c: test      al, al
0040709e: je        0x4071e9
004070a4: mov       ecx, dword ptr [esi + 0x28]
004070a7: push      edi
004070a8: call      0x422f70
004070ad: test      al, al
004070af: jne       0x4071e2
004070b5: mov       edx, dword ptr [esi]
004070b7: mov       ecx, esi
004070b9: call      dword ptr [edx + 0xc]
004070bc: pop       edi
004070bd: pop       esi
004070be: pop       ebx
004070bf: mov       ecx, dword ptr [esp + 0x10]
004070c3: mov       dword ptr fs:[0], ecx
004070ca: add       esp, 0x1c
004070cd: ret       8
004070d0: mov       eax, dword ptr [esp + 0x30]
004070d4: mov       ecx, dword ptr [esp + 0x2c]
004070d8: push      eax
004070d9: push      ecx
004070da: mov       ecx, esi
004070dc: call      0x402a80
004070e1: mov       ecx, eax
004070e3: call      0x402d20
004070e8: mov       ecx, esi
004070ea: call      0x402a80
004070ef: mov       ecx, eax
004070f1: call      0x402d10
004070f6: test      al, al
004070f8: je        0x4071e9
004070fe: call      0x60a4a0
00407103: cdq       
00407104: mov       ecx, 0x2710
00407109: idiv      ecx
0040710b: mov       ecx, dword ptr [esi + 0x28]
0040710e: mov       dword ptr [esp + 0x30], edx
00407112: fild      dword ptr [esp + 0x30]
00407116: fmul      dword ptr [0x64a2c4]
0040711c: fstp      dword ptr [esp + 0x30]
00407120: call      0x429fd0
00407125: fld       dword ptr [esp + 0x30]
00407129: fcomp     dword ptr [eax + 0x34]
0040712c: fnstsw    ax
0040712e: test      ah, 0x41
00407131: je        0x40714e
00407133: mov       edx, dword ptr [esi]
00407135: mov       ecx, esi
00407137: call      dword ptr [edx + 0xc]
0040713a: pop       edi
0040713b: pop       esi
0040713c: pop       ebx
0040713d: mov       ecx, dword ptr [esp + 0x10]
00407141: mov       dword ptr fs:[0], ecx
00407148: add       esp, 0x1c
0040714b: ret       8
0040714e: mov       ecx, dword ptr [esi + 0x28]
00407151: mov       edi, dword ptr [esi]
00407153: call      0x429fd0
00407158: mov       eax, dword ptr [eax + 0x38]
0040715b: mov       ecx, esi
0040715d: push      eax
0040715e: call      dword ptr [edi + 0x14]
00407161: pop       edi
00407162: pop       esi
00407163: pop       ebx
00407164: mov       ecx, dword ptr [esp + 0x10]
00407168: mov       dword ptr fs:[0], ecx
0040716f: add       esp, 0x1c
00407172: ret       8
00407175: mov       ecx, dword ptr [esi + 0x28]
00407178: call      0x4288c0
0040717d: mov       ecx, eax
0040717f: call      0x596c40
00407184: test      al, al
00407186: je        0x4071cf
00407188: mov       ecx, dword ptr [esp + 0x30]
0040718c: push      ecx
0040718d: mov       ecx, dword ptr [esi + 0x24]
00407190: call      0x422f30
00407195: test      al, al
00407197: jne       0x4071b4
00407199: mov       ecx, esi
0040719b: call      0x402d00
004071a0: pop       edi
004071a1: pop       esi
004071a2: pop       ebx
004071a3: mov       ecx, dword ptr [esp + 0x10]
004071a7: mov       dword ptr fs:[0], ecx
004071ae: add       esp, 0x1c
004071b1: ret       8
004071b4: mov       edx, dword ptr [esi]
004071b6: mov       ecx, esi
004071b8: call      dword ptr [edx + 0x10]
004071bb: pop       edi
004071bc: pop       esi
004071bd: pop       ebx
004071be: mov       ecx, dword ptr [esp + 0x10]
004071c2: mov       dword ptr fs:[0], ecx
004071c9: add       esp, 0x1c
004071cc: ret       8
004071cf: mov       ecx, dword ptr [esi + 0x28]
004071d2: call      0x4288c0
004071d7: mov       ecx, eax
004071d9: call      0x596d40
004071de: test      al, al
004071e0: je        0x4071e9
004071e2: mov       eax, dword ptr [esi]
004071e4: mov       ecx, esi
004071e6: call      dword ptr [eax + 0x10]
004071e9: mov       ecx, dword ptr [esp + 0x1c]
004071ed: pop       edi
004071ee: pop       esi
004071ef: pop       ebx
004071f0: mov       dword ptr fs:[0], ecx
004071f7: add       esp, 0x1c
004071fa: ret       8
004071fd: nop       
004071fe: nop       
004071ff: nop       
00407200: push      -1
00407202: push      0x6201fb
00407207: mov       eax, dword ptr fs:[0]
0040720d: push      eax
0040720e: mov       dword ptr fs:[0], esp
00407215: push      ecx
00407216: push      esi
00407217: mov       esi, ecx
00407219: push      ecx
0040721a: mov       ecx, dword ptr [esi + 0x28]
0040721d: mov       eax, esp
0040721f: mov       dword ptr [esp + 8], esp
00407223: push      eax
00407224: call      0x4237d0
00407229: mov       ecx, dword ptr [esi + 0x28]
0040722c: call      0x428250
00407231: push      0x38
00407233: call      0x60a0b5
00407238: add       esp, 4
0040723b: mov       dword ptr [esp + 4], eax
0040723f: test      eax, eax
00407241: mov       dword ptr [esp + 0x10], 0
00407249: je        0x407258
0040724b: mov       ecx, dword ptr [esi + 0x28]
0040724e: push      ecx
0040724f: mov       ecx, eax
00407251: call      0x4073a0
00407256: jmp       0x40725a
00407258: xor       eax, eax
0040725a: push      eax
0040725b: push      1
0040725d: mov       ecx, esi
0040725f: mov       dword ptr [esp + 0x18], 0xffffffff
00407267: call      0x402a10
0040726c: mov       ecx, dword ptr [esp + 8]
00407270: pop       esi
00407271: mov       dword ptr fs:[0], ecx
00407278: add       esp, 0x10
0040727b: ret       
0040727c: nop       
0040727d: nop       
0040727e: nop       
0040727f: nop       
00407280: push      ecx
00407281: push      esi
00407282: mov       esi, ecx
00407284: mov       eax, dword ptr [esi]
00407286: call      dword ptr [eax + 0x18]
00407289: mov       ecx, dword ptr [esi + 0x28]
0040728c: call      0x4288c0
00407291: mov       ecx, eax
00407293: call      0x596d40
00407298: test      al, al
0040729a: je        0x4072a6
0040729c: mov       edx, dword ptr [esi]
0040729e: mov       ecx, esi
004072a0: call      dword ptr [edx + 0x10]
004072a3: pop       esi
004072a4: pop       ecx
004072a5: ret       
004072a6: mov       ecx, dword ptr [esi + 0x28]
004072a9: push      0x7f7fffff
004072ae: push      1
004072b0: push      2
004072b2: mov       eax, dword ptr [ecx]
004072b4: call      dword ptr [eax + 0x8c]
004072ba: push      ecx
004072bb: mov       eax, esp
004072bd: mov       dword ptr [esp + 8], esp
004072c1: mov       dword ptr [eax], 0
004072c7: mov       ecx, dword ptr [esi + 0x28]
004072ca: call      0x428250
004072cf: mov       ecx, dword ptr [esi + 0x28]
004072d2: call      0x428b40
004072d7: push      0
004072d9: push      0
004072db: mov       ecx, esi
004072dd: call      0x402a10
004072e2: pop       esi
004072e3: pop       ecx
004072e4: ret       
004072e5: nop       
004072e6: nop       
004072e7: nop       
004072e8: nop       
004072e9: nop       
004072ea: nop       
004072eb: nop       
004072ec: nop       
004072ed: nop       
004072ee: nop       
004072ef: nop       
004072f0: push      esi
004072f1: mov       esi, ecx
004072f3: mov       ecx, dword ptr [esi + 0x28]
004072f6: call      0x422d90
004072fb: mov       eax, dword ptr [eax + 0x30]
004072fe: mov       ecx, dword ptr [esi + 0x28]
00407301: push      eax
00407302: call      0x4288c0
00407307: mov       ecx, eax
00407309: call      0x5967f0
0040730e: pop       esi
0040730f: ret       
00407310: push      -1
00407312: push      0x62021b
00407317: mov       eax, dword ptr fs:[0]
0040731d: push      eax
0040731e: mov       dword ptr fs:[0], esp
00407325: push      ecx
00407326: push      esi
00407327: mov       esi, ecx
00407329: push      ecx
0040732a: mov       ecx, dword ptr [esi + 0x28]
0040732d: mov       eax, esp
0040732f: mov       dword ptr [esp + 8], esp
00407333: push      eax
00407334: call      0x4237d0
00407339: mov       ecx, dword ptr [esi + 0x28]
0040733c: call      0x428250
00407341: push      0x3c
00407343: call      0x60a0b5
00407348: add       esp, 4
0040734b: mov       dword ptr [esp + 4], eax
0040734f: test      eax, eax
00407351: mov       dword ptr [esp + 0x10], 0
00407359: je        0x40736d
0040735b: mov       ecx, dword ptr [esp + 0x18]
0040735f: mov       edx, dword ptr [esi + 0x28]
00407362: push      ecx
00407363: push      edx
00407364: mov       ecx, eax
00407366: call      0x405c20
0040736b: jmp       0x40736f
0040736d: xor       eax, eax
0040736f: push      eax
00407370: push      2
00407372: mov       ecx, esi
00407374: mov       dword ptr [esp + 0x18], 0xffffffff
0040737c: call      0x402a10
00407381: mov       ecx, dword ptr [esp + 8]
00407385: pop       esi
00407386: mov       dword ptr fs:[0], ecx
0040738d: add       esp, 0x10
00407390: ret       4
00407393: nop       
00407394: nop       
00407395: nop       
00407396: nop       
00407397: nop       
00407398: nop       
00407399: nop       
0040739a: nop       
0040739b: nop       
0040739c: nop       
0040739d: nop       
0040739e: nop       
0040739f: nop       
004073a0: push      -1
004073a2: push      0x620238
004073a7: mov       eax, dword ptr fs:[0]
004073ad: push      eax
004073ae: mov       dword ptr fs:[0], esp
004073b5: push      ecx
004073b6: push      esi
004073b7: push      edi
004073b8: mov       edi, dword ptr [esp + 0x1c]
004073bc: mov       esi, ecx
004073be: push      edi
004073bf: mov       dword ptr [esp + 0xc], esi
004073c3: call      0x406da0
004073c8: mov       ecx, edi
004073ca: mov       dword ptr [esp + 0x14], 0
004073d2: call      0x429fd0
004073d7: mov       eax, dword ptr [eax + 0x2c]
004073da: mov       ecx, dword ptr [esp + 0xc]
004073de: mov       dword ptr [esi + 0x30], eax
004073e1: mov       dword ptr [esi + 0x34], 0
004073e8: mov       dword ptr [esi], 0x64a7f4
004073ee: mov       eax, esi
004073f0: pop       edi
004073f1: pop       esi
004073f2: mov       dword ptr fs:[0], ecx
004073f9: add       esp, 0x10
004073fc: ret       4
004073ff: nop       
00407400: push      esi
00407401: mov       esi, ecx
00407403: call      0x407420
00407408: test      byte ptr [esp + 8], 1
0040740d: je        0x407418
0040740f: push      esi
00407410: call      0x5fe5f0
00407415: add       esp, 4
00407418: mov       eax, esi
0040741a: pop       esi
0040741b: ret       4
0040741e: nop       
0040741f: nop       
00407420: push      -1
00407422: push      0x620258
00407427: mov       eax, dword ptr fs:[0]
0040742d: push      eax
0040742e: mov       dword ptr fs:[0], esp
00407435: push      ecx
00407436: push      esi
00407437: mov       esi, ecx
00407439: mov       dword ptr [esp + 4], esi
0040743d: mov       dword ptr [esi], 0x64a7f4
00407443: mov       ecx, dword ptr [esi + 0x2c]
00407446: mov       dword ptr [esp + 0x10], 0
0040744e: call      0x428b40
00407453: mov       ecx, esi
00407455: mov       dword ptr [esp + 0x10], 0xffffffff
0040745d: call      0x4029b0
00407462: mov       ecx, dword ptr [esp + 8]
00407466: pop       esi
00407467: mov       dword ptr fs:[0], ecx
0040746e: add       esp, 0x10
00407471: ret       
00407472: nop       
00407473: nop       
00407474: nop       
00407475: nop       
00407476: nop       
00407477: nop       
00407478: nop       
00407479: nop       
0040747a: nop       
0040747b: nop       
0040747c: nop       
0040747d: nop       
0040747e: nop       
0040747f: nop       
00407480: push      esi
00407481: mov       esi, ecx
00407483: push      -1
00407485: mov       ecx, dword ptr [esi + 0x2c]
00407488: call      0x4288c0
0040748d: mov       ecx, eax
0040748f: call      0x5966a0
00407494: mov       ecx, dword ptr [esi + 0x2c]
00407497: call      0x428b10
0040749c: mov       ecx, esi
0040749e: call      0x4076b0
004074a3: pop       esi
004074a4: ret       4
004074a7: nop       
004074a8: nop       
004074a9: nop       
004074aa: nop       
004074ab: nop       
004074ac: nop       
004074ad: nop       
004074ae: nop       
004074af: nop       
004074b0: mov       eax, dword ptr fs:[0]
004074b6: push      -1
004074b8: push      0x620278
004074bd: push      eax
004074be: mov       dword ptr fs:[0], esp
004074c5: sub       esp, 0x10
004074c8: push      ebx
004074c9: push      esi
004074ca: mov       esi, ecx
004074cc: call      0x402cf0
004074d1: xor       ebx, ebx
004074d3: sub       eax, ebx
004074d5: je        0x407662
004074db: dec       eax
004074dc: je        0x4075fd
004074e2: dec       eax
004074e3: je        0x4075b5
004074e9: mov       al, byte ptr [esp + 0x2c]
004074ed: push      ebp
004074ee: push      edi
004074ef: mov       byte ptr [esp + 0x10], al
004074f3: mov       edi, 0x68d350
004074f8: or        ecx, 0xffffffff
004074fb: xor       eax, eax
004074fd: push      1
