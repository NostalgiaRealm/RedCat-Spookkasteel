  4e0c50: push   0xffffffff // None
  4e0c52: push   0x632660
  4e0c57: mov    eax,fs:0x0
  4e0c5d: push   eax
  4e0c5e: mov    DWORD PTR fs:0x0,esp
  4e0c65: sub    esp,0x14
  4e0c68: mov    eax,DWORD PTR [esp+0x28]
  4e0c6c: push   ebx
  4e0c6d: push   ebp
  4e0c6e: mov    ebp,ecx
  4e0c70: mov    ecx,DWORD PTR [esp+0x2c]
  4e0c74: push   esi
  4e0c75: push   edi
  4e0c76: push   eax
  4e0c77: push   ecx
  4e0c78: mov    ecx,ebp
  4e0c7a: mov    DWORD PTR [esp+0x18],ebp
  4e0c7e: call   0x49b240
  4e0c83: mov    dl,BYTE PTR [esp+0x3c]
  4e0c87: mov    cl,BYTE PTR [esp+0x3c]
  4e0c8b: xor    ebx,ebx
  4e0c8d: mov    BYTE PTR [ebp+0x295],dl
  4e0c93: mov    BYTE PTR [ebp+0x294],bl
  4e0c99: mov    eax,ds:0x6b9414 // None
  4e0c9e: lea    esi,[ebp+0x2a4]
  4e0ca4: mov    DWORD PTR [ebp+0x298],eax
  4e0caa: mov    DWORD PTR [ebp+0x29c],0xffffffff // None
  4e0cb1: 
  4e0cb4: mov    DWORD PTR [ebp+0x2a0],0x3
  4e0cbb: 
  4e0cbe: mov    BYTE PTR [esi],cl
  4e0cc0: push   ebx
  4e0cc1: mov    ecx,esi
  4e0cc3: mov    DWORD PTR [esp+0x30],ebx
  4e0cc7: call   0x4040a0
  4e0ccc: mov    edi,0x6b3f70 // 0.0
  4e0cd1: or     ecx,0xffffffff // None
  4e0cd4: xor    eax,eax
  4e0cd6: repnz scas al,BYTE PTR es:[edi]
  4e0cd8: not    ecx
  4e0cda: dec    ecx
  4e0cdb: push   ecx
  4e0cdc: push   0x6b3f70 // 0.0
  4e0ce1: mov    ecx,esi
  4e0ce3: call   0x4040f0
  4e0ce8: mov    edx,DWORD PTR [esp+0x4c]
  4e0cec: mov    BYTE PTR [ebp+0x2b4],bl
  4e0cf2: lea    edi,[ebp+0x2b8]
  4e0cf8: push   ebx
  4e0cf9: mov    al,BYTE PTR [edx]
  4e0cfb: mov    ecx,edi
  4e0cfd: mov    BYTE PTR [esp+0x30],0x1
  4e0d02: mov    BYTE PTR [edi],al
  4e0d04: call   0x4040a0
  4e0d09: mov    ecx,DWORD PTR ds:0x64aba8 // nan
  4e0d0f: mov    edx,DWORD PTR [esp+0x4c]
  4e0d13: push   ecx
  4e0d14: push   ebx
  4e0d15: push   edx
  4e0d16: mov    ecx,edi
  4e0d18: call   0x40cc00
  4e0d1d: mov    DWORD PTR [ebp+0x2c8],ebx
  4e0d23: mov    al,ds:0x6b940c // None
  4e0d28: mov    BYTE PTR [ebp+0x2cc],al
  4e0d2e: mov    DWORD PTR [ebp+0x2d0],ebx
  4e0d34: mov    DWORD PTR [ebp+0x2ec],ebx
  4e0d3a: mov    BYTE PTR [ebp+0x2f0],bl
  4e0d40: mov    DWORD PTR [ebp+0x2f4],ebx
  4e0d46: lea    ecx,[ebp+0x2f8]
  4e0d4c: push   ebp
  4e0d4d: mov    BYTE PTR [esp+0x30],0x3
  4e0d52: call   0x4a04a0
  4e0d57: mov    ecx,ebp
  4e0d59: mov    BYTE PTR [esp+0x2c],0x4
  4e0d5e: mov    DWORD PTR [ebp+0x0],0x64f274 // 7.168661790303468e-39
  4e0d65: mov    BYTE PTR [ebp+0x208],bl
  4e0d6b: call   0x49b8d0
  4e0d70: mov    ecx,ebp
  4e0d72: mov    BYTE PTR [ebp+0x20a],bl
  4e0d78: call   0x49b8d0
  4e0d7d: mov    ecx,ebp
  4e0d7f: mov    BYTE PTR [ebp+0x20b],bl
  4e0d85: call   0x49b8d0
  4e0d8a: mov    BYTE PTR [ebp+0x209],bl
  4e0d90: mov    ecx,ebp
  4e0d92: call   0x49b8d0
  4e0d97: mov    ecx,ebp
  4e0d99: mov    BYTE PTR [ebp+0x20c],bl
  4e0d9f: call   0x49b8d0
  4e0da4: mov    edi,DWORD PTR [esp+0x48]
  4e0da8: cmp    edi,ebx
  4e0daa: je     0x4e0df5
  4e0dac: or     ecx,0xffffffff // None
  4e0daf: xor    eax,eax
  4e0db1: repnz scas al,BYTE PTR es:[edi]
  4e0db3: not    ecx
  4e0db5: dec    ecx
  4e0db6: push   0x1
  4e0db8: mov    edi,ecx
  4e0dba: mov    ecx,esi
  4e0dbc: push   edi
  4e0dbd: mov    DWORD PTR [esp+0x44],edi
  4e0dc1: call   0x401940
  4e0dc6: test   al,al
  4e0dc8: je     0x4e0df5
  4e0dca: mov    eax,DWORD PTR [esi+0x4]
  4e0dcd: mov    esi,DWORD PTR [esp+0x48]
  4e0dd1: mov    ecx,edi
  4e0dd3: mov    edi,eax
  4e0dd5: mov    edx,ecx
  4e0dd7: shr    ecx,0x2
  4e0dda: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0ddc: mov    ecx,edx
  4e0dde: and    ecx,0x3
  4e0de1: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e0de3: mov    eax,DWORD PTR [ebp+0x2a8]
  4e0de9: mov    ecx,edx
  4e0deb: add    eax,ecx
  4e0ded: mov    DWORD PTR [ebp+0x2ac],ecx
  4e0df3: mov    BYTE PTR [eax],bl
  4e0df5: cmp    BYTE PTR [ebp+0x2cc],bl
  4e0dfb: je     0x4e0f03
  4e0e01: mov    al,BYTE PTR [esp+0x3c]
  4e0e05: push   ebx
  4e0e06: lea    ecx,[esp+0x18]
  4e0e0a: mov    BYTE PTR [esp+0x18],al
  4e0e0e: call   0x4040a0
  4e0e13: mov    edi,0x69a1f4 // bounce
  4e0e18: or     ecx,0xffffffff // None
  4e0e1b: xor    eax,eax
  4e0e1d: push   0x1
  4e0e1f: repnz scas al,BYTE PTR es:[edi]
  4e0e21: not    ecx
  4e0e23: dec    ecx
  4e0e24: mov    esi,ecx
  4e0e26: lea    ecx,[esp+0x18]
  4e0e2a: push   esi
  4e0e2b: mov    DWORD PTR [esp+0x44],esi
  4e0e2f: call   0x401940
  4e0e34: test   al,al
  4e0e36: je     0x4e0e5d
  4e0e38: mov    edi,DWORD PTR [esp+0x18]
  4e0e3c: mov    ecx,esi
  4e0e3e: mov    edx,ecx
  4e0e40: mov    esi,0x69a1f4 // bounce
  4e0e45: shr    ecx,0x2
  4e0e48: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0e4a: mov    ecx,edx
  4e0e4c: mov    eax,edx
  4e0e4e: and    ecx,0x3
  4e0e51: push   eax
  4e0e52: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e0e54: lea    ecx,[esp+0x18]
  4e0e58: call   0x404190
  4e0e5d: push   0x3f800000
  4e0e62: lea    ecx,[esp+0x18]
  4e0e66: push   ebx
  4e0e67: push   ecx
  4e0e68: lea    ecx,[ebp+0x2f8]
  4e0e6e: mov    BYTE PTR [esp+0x38],0x5
  4e0e73: call   0x4a0660
  4e0e78: push   0x1
  4e0e7a: lea    ecx,[esp+0x18]
  4e0e7e: mov    BYTE PTR [esp+0x30],0x4
  4e0e83: call   0x4040a0
  4e0e88: cmp    BYTE PTR [ebp+0x33c],bl
  4e0e8e: je     0x4e0f03
  4e0e90: mov    edi,0x69a1dc // Float motion missing
  4e0e95: or     ecx,0xffffffff // None
  4e0e98: xor    eax,eax
  4e0e9a: mov    dl,BYTE PTR [esp+0x3c]
  4e0e9e: repnz scas al,BYTE PTR es:[edi]
  4e0ea0: not    ecx
  4e0ea2: dec    ecx
  4e0ea3: mov    BYTE PTR [esp+0x14],dl
  4e0ea7: push   ecx
  4e0ea8: push   0x69a1dc // Float motion missing
  4e0ead: lea    ecx,[esp+0x1c]
  4e0eb1: mov    DWORD PTR [esp+0x20],ebx
  4e0eb5: mov    DWORD PTR [esp+0x24],ebx
  4e0eb9: mov    DWORD PTR [esp+0x28],ebx
  4e0ebd: call   0x4040f0
  4e0ec2: lea    eax,[esp+0x14]
  4e0ec6: mov    ecx,ebp
  4e0ec8: push   eax
  4e0ec9: mov    BYTE PTR [esp+0x30],0x6
  4e0ece: call   0x5036d0
  4e0ed3: mov    eax,DWORD PTR [esp+0x18]
  4e0ed7: mov    BYTE PTR [esp+0x2c],0x4
  4e0edc: cmp    eax,ebx
  4e0ede: je     0x4e0efd
  4e0ee0: lea    ecx,[eax-0x1]
  4e0ee3: mov    al,BYTE PTR [eax-0x1]
  4e0ee6: cmp    al,bl
  4e0ee8: je     0x4e0ef4
  4e0eea: cmp    al,0xff
  4e0eec: je     0x4e0ef4
  4e0eee: dec    al
  4e0ef0: mov    BYTE PTR [ecx],al
  4e0ef2: jmp    0x4e0efd
  4e0ef4: push   ecx
  4e0ef5: call   0x5fe5f0
  4e0efa: add    esp,0x4
  4e0efd: mov    BYTE PTR [ebp+0x2cc],bl
  4e0f03: mov    ecx,ebp
  4e0f05: call   0x4e1110
  4e0f0a: mov    ecx,DWORD PTR [ebp+0x150]
  4e0f10: mov    eax,DWORD PTR [ebp+0x158]
  4e0f16: mov    edx,DWORD PTR [ebp+0x154]
  4e0f1c: mov    DWORD PTR [ebp+0x2e0],ecx
  4e0f22: mov    ecx,DWORD PTR [esp+0x24]
  4e0f26: mov    DWORD PTR [ebp+0x2e8],eax
  4e0f2c: pop    edi
  4e0f2d: mov    DWORD PTR [ebp+0x2e4],edx
  4e0f33: mov    eax,ebp
  4e0f35: pop    esi
  4e0f36: pop    ebp
  4e0f37: pop    ebx
  4e0f38: mov    DWORD PTR fs:0x0,ecx
  4e0f3f: add    esp,0x20
  4e0f42: ret    0x1c
  4e0f50: push   esi
  4e0f51: mov    esi,ecx
  4e0f53: call   0x4e0f70
  4e0f58: test   BYTE PTR [esp+0x8],0x1
  4e0f5d: je     0x4e0f68
  4e0f5f: push   esi
  4e0f60: call   0x5fe5f0
  4e0f65: add    esp,0x4
  4e0f68: mov    eax,esi
  4e0f6a: pop    esi
  4e0f6b: ret    0x4
  4e0f70: push   0xffffffff // None
  4e0f72: push   0x6326c0
  4e0f77: mov    eax,fs:0x0
  4e0f7d: push   eax
  4e0f7e: mov    DWORD PTR fs:0x0,esp
  4e0f85: sub    esp,0x1c
  4e0f88: push   ebx
  4e0f89: push   esi
  4e0f8a: mov    esi,ecx
  4e0f8c: mov    DWORD PTR [esp+0xc],esi
  4e0f90: mov    DWORD PTR [esi],0x64f274 // 7.168661790303468e-39
  4e0f96: mov    eax,DWORD PTR [esi+0x2f4]
  4e0f9c: xor    ebx,ebx
  4e0f9e: cmp    eax,ebx
  4e0fa0: mov    DWORD PTR [esp+0x2c],0x4
  4e0fa7: 
  4e0fa8: je     0x4e104a
  4e0fae: cmp    eax,ebx
  4e0fb0: jne    0x4e1017
  4e0fb2: mov    al,BYTE PTR [esp+0xb]
  4e0fb6: push   edi
  4e0fb7: push   ebx
  4e0fb8: lea    ecx,[esp+0x1c]
  4e0fbc: mov    BYTE PTR [esp+0x1c],al
  4e0fc0: call   0x4040a0
  4e0fc5: mov    edi,0x6b3f70 // 0.0
  4e0fca: or     ecx,0xffffffff // None
  4e0fcd: xor    eax,eax
  4e0fcf: repnz scas al,BYTE PTR es:[edi]
  4e0fd1: not    ecx
  4e0fd3: dec    ecx
  4e0fd4: push   ecx
  4e0fd5: push   0x6b3f70 // 0.0
  4e0fda: lea    ecx,[esp+0x20]
  4e0fde: call   0x4040f0
  4e0fe3: lea    ecx,[esp+0x18]
  4e0fe7: mov    BYTE PTR [esp+0x30],0x5
  4e0fec: push   ecx
  4e0fed: push   0xb6
  4e0ff2: push   0x68d638 // ./AdamSource\DaviRC.h
  4e0ff7: push   0x68d62c // m_Pointer
  4e0ffc: call   0x5a07f0
  4e1001: call   eax
  4e1003: add    esp,0x10
  4e1006: lea    ecx,[esp+0x18]
  4e100a: mov    BYTE PTR [esp+0x30],0x4
  4e100f: push   0x1
  4e1011: call   0x4040a0
  4e1016: pop    edi
  4e1017: mov    ecx,DWORD PTR [esi+0x2f4]
  4e101d: call   0x553130
  4e1022: mov    DWORD PTR [esp+0x10],ebx
  4e1026: mov    ecx,DWORD PTR [esi+0x2f4]
  4e102c: mov    BYTE PTR [esp+0x2c],0x6
  4e1031: cmp    ecx,ebx
  4e1033: je     0x4e104a
  4e1035: mov    eax,DWORD PTR [ecx+0x14]
  4e1038: dec    eax
  4e1039: mov    DWORD PTR [ecx+0x14],eax
  4e103c: jne    0x4e1044
  4e103e: push   ebx
  4e103f: call   0x5abfc0
  4e1044: mov    DWORD PTR [esi+0x2f4],ebx
  4e104a: lea    ecx,[esi+0x2f8]
  4e1050: mov    BYTE PTR [esp+0x2c],0x3
  4e1055: call   0x4a05f0
  4e105a: mov    ecx,DWORD PTR [esi+0x2f4]
  4e1060: mov    BYTE PTR [esp+0x2c],0x2
  4e1065: cmp    ecx,ebx
  4e1067: je     0x4e107e
  4e1069: mov    eax,DWORD PTR [ecx+0x14]
  4e106c: dec    eax
  4e106d: mov    DWORD PTR [ecx+0x14],eax
  4e1070: jne    0x4e1078
  4e1072: push   ebx
  4e1073: call   0x5abfc0
  4e1078: mov    DWORD PTR [esi+0x2f4],ebx
  4e107e: mov    eax,DWORD PTR [esi+0x2bc]
  4e1084: cmp    eax,ebx
  4e1086: je     0x4e10a5
  4e1088: lea    ecx,[eax-0x1]
  4e108b: mov    al,BYTE PTR [eax-0x1]
  4e108e: cmp    al,bl
  4e1090: je     0x4e109c
  4e1092: cmp    al,0xff
  4e1094: je     0x4e109c
  4e1096: dec    al
  4e1098: mov    BYTE PTR [ecx],al
  4e109a: jmp    0x4e10a5
  4e109c: push   ecx
  4e109d: call   0x5fe5f0
  4e10a2: add    esp,0x4
  4e10a5: mov    DWORD PTR [esi+0x2bc],ebx
  4e10ab: mov    DWORD PTR [esi+0x2c0],ebx
  4e10b1: mov    DWORD PTR [esi+0x2c4],ebx
  4e10b7: mov    eax,DWORD PTR [esi+0x2a8]
  4e10bd: cmp    eax,ebx
  4e10bf: je     0x4e10de
  4e10c1: lea    ecx,[eax-0x1]
  4e10c4: mov    al,BYTE PTR [eax-0x1]
  4e10c7: cmp    al,bl
  4e10c9: je     0x4e10d5
  4e10cb: cmp    al,0xff
  4e10cd: je     0x4e10d5
  4e10cf: dec    al
  4e10d1: mov    BYTE PTR [ecx],al
  4e10d3: jmp    0x4e10de
  4e10d5: push   ecx
  4e10d6: call   0x5fe5f0
  4e10db: add    esp,0x4
  4e10de: mov    ecx,esi
  4e10e0: mov    DWORD PTR [esi+0x2a8],ebx
  4e10e6: mov    DWORD PTR [esi+0x2ac],ebx
  4e10ec: mov    DWORD PTR [esi+0x2b0],ebx
  4e10f2: mov    DWORD PTR [esp+0x2c],0xffffffff // None
  4e10f9: 
  4e10fa: call   0x49b720
  4e10ff: mov    ecx,DWORD PTR [esp+0x24]
  4e1103: pop    esi
  4e1104: pop    ebx
  4e1105: mov    DWORD PTR fs:0x0,ecx
  4e110c: add    esp,0x28
  4e110f: ret
  4e1110: fld    DWORD PTR ds:0x6b9418 // None
  4e1116: fadd   DWORD PTR ds:0x64a354 // 1.0
  4e111c: fld    DWORD PTR ds:0x64f26c // 4.0
  4e1122: push   esi
  4e1123: mov    esi,ecx
  4e1125: call   0x60b0da
  4e112a: fst    DWORD PTR ds:0x6b9418 // None
  4e1130: fdiv   DWORD PTR ds:0x64f26c // 4.0
  4e1136: fmul   DWORD PTR ds:0x64b1d8 // 6.2831854820251465
  4e113c: fstp   DWORD PTR [esi+0x2c8]
  4e1142: pop    esi
  4e1143: ret
  4e1150: push   0xffffffff // None
  4e1152: push   0x632708
  4e1157: mov    eax,fs:0x0
  4e115d: push   eax
  4e115e: mov    DWORD PTR fs:0x0,esp
  4e1165: sub    esp,0x24
  4e1168: push   ebx
  4e1169: push   ebp
  4e116a: push   esi
  4e116b: push   edi
  4e116c: mov    esi,ecx
  4e116e: xor    ebx,ebx
  4e1170: mov    DWORD PTR [esp+0x3c],ebx
  4e1174: mov    edi,DWORD PTR [esp+0x48]
  4e1178: push   ecx
  4e1179: mov    eax,esp
  4e117b: cmp    edi,ebx
  4e117d: mov    DWORD PTR [esp+0x14],esp
  4e1181: mov    DWORD PTR [eax],edi
  4e1183: je     0x4e1188
  4e1185: inc    DWORD PTR [edi+0x14]
  4e1188: push   ecx
  4e1189: lea    eax,[esp+0x4c]
  4e118d: mov    ecx,esp
  4e118f: mov    DWORD PTR [esp+0x1c],esp
  4e1193: push   eax
  4e1194: mov    BYTE PTR [esp+0x48],0x2
  4e1199: call   0x449760
  4e119e: mov    ecx,esi
  4e11a0: mov    BYTE PTR [esp+0x44],0x1
  4e11a5: call   0x49c1b0
  4e11aa: cmp    DWORD PTR [esp+0x44],ebx
  4e11ae: je     0x4e126f
  4e11b4: mov    eax,DWORD PTR [esi+0x2f4]
  4e11ba: lea    ebp,[esi+0x2f4]
  4e11c0: cmp    eax,ebx
  4e11c2: je     0x4e1269
  4e11c8: cmp    eax,ebx
  4e11ca: jne    0x4e1233
  4e11cc: mov    cl,BYTE PTR [esp+0x44]
  4e11d0: push   ebx
  4e11d1: mov    BYTE PTR [esp+0x28],cl
  4e11d5: lea    ecx,[esp+0x28]
  4e11d9: call   0x4040a0
  4e11de: mov    edi,0x6b3f70 // 0.0
  4e11e3: or     ecx,0xffffffff // None
  4e11e6: xor    eax,eax
  4e11e8: repnz scas al,BYTE PTR es:[edi]
  4e11ea: not    ecx
  4e11ec: dec    ecx
  4e11ed: push   ecx
  4e11ee: push   0x6b3f70 // 0.0
  4e11f3: lea    ecx,[esp+0x2c]
  4e11f7: call   0x4040f0
  4e11fc: lea    edx,[esp+0x24]
  4e1200: mov    BYTE PTR [esp+0x3c],0x3
  4e1205: push   edx
  4e1206: push   0xb6
  4e120b: push   0x68d638 // ./AdamSource\DaviRC.h
  4e1210: push   0x68d62c // m_Pointer
  4e1215: call   0x5a07f0
  4e121a: call   eax
  4e121c: add    esp,0x10
  4e121f: lea    ecx,[esp+0x24]
  4e1223: mov    BYTE PTR [esp+0x3c],0x1
  4e1228: push   0x1
  4e122a: call   0x4040a0
  4e122f: mov    edi,DWORD PTR [esp+0x48]
  4e1233: mov    ecx,DWORD PTR [ebp+0x0]
  4e1236: call   0x553130
  4e123b: mov    DWORD PTR [esp+0x14],ebx
  4e123f: mov    ecx,DWORD PTR [ebp+0x0]
  4e1242: mov    BYTE PTR [esp+0x3c],0x4
  4e1247: cmp    ecx,ebx
  4e1249: je     0x4e1264
  4e124b: mov    eax,DWORD PTR [ecx+0x14]
  4e124e: dec    eax
  4e124f: mov    DWORD PTR [ecx+0x14],eax
  4e1252: jne    0x4e125a
  4e1254: push   ebx
  4e1255: call   0x5abfc0
  4e125a: mov    ecx,ebp
  4e125c: mov    DWORD PTR [ebp+0x0],ebx
  4e125f: call   0x5844b0
  4e1264: mov    BYTE PTR [esp+0x3c],0x1
  4e1269: mov    BYTE PTR [esi+0x2f0],bl
  4e126f: cmp    edi,ebx
  4e1271: je     0x4e137b
  4e1277: mov    eax,DWORD PTR [esi+0x2f4]
  4e127d: lea    ebp,[esi+0x2f4]
  4e1283: cmp    eax,ebx
  4e1285: je     0x4e1335
  4e128b: cmp    eax,ebx
  4e128d: jne    0x4e12f2
  4e128f: mov    al,BYTE PTR [esp+0x44]
  4e1293: push   ebx
  4e1294: lea    ecx,[esp+0x28]
  4e1298: mov    BYTE PTR [esp+0x28],al
  4e129c: call   0x4040a0
  4e12a1: mov    edi,0x6b3f70 // 0.0
  4e12a6: or     ecx,0xffffffff // None
  4e12a9: xor    eax,eax
  4e12ab: repnz scas al,BYTE PTR es:[edi]
  4e12ad: not    ecx
  4e12af: dec    ecx
  4e12b0: push   ecx
  4e12b1: push   0x6b3f70 // 0.0
  4e12b6: lea    ecx,[esp+0x2c]
  4e12ba: call   0x4040f0
  4e12bf: lea    ecx,[esp+0x24]
  4e12c3: mov    BYTE PTR [esp+0x3c],0x5
  4e12c8: push   ecx
  4e12c9: push   0xb6
  4e12ce: push   0x68d638 // ./AdamSource\DaviRC.h
  4e12d3: push   0x68d62c // m_Pointer
  4e12d8: call   0x5a07f0
  4e12dd: call   eax
  4e12df: add    esp,0x10
  4e12e2: lea    ecx,[esp+0x24]
  4e12e6: mov    BYTE PTR [esp+0x3c],0x1
  4e12eb: push   0x1
  4e12ed: call   0x4040a0
  4e12f2: mov    ecx,DWORD PTR [ebp+0x0]
  4e12f5: call   0x553130
  4e12fa: mov    DWORD PTR [esp+0x10],ebx
  4e12fe: mov    ecx,DWORD PTR [ebp+0x0]
  4e1301: mov    BYTE PTR [esp+0x3c],0x6
  4e1306: cmp    ecx,ebx
  4e1308: je     0x4e1327
  4e130a: mov    eax,DWORD PTR [ecx+0x14]
  4e130d: dec    eax
  4e130e: mov    DWORD PTR [ecx+0x14],eax
  4e1311: jne    0x4e1319
  4e1313: push   ebx
  4e1314: call   0x5abfc0
  4e1319: mov    edx,DWORD PTR [esp+0x10]
  4e131d: mov    ecx,ebp
  4e131f: mov    DWORD PTR [ebp+0x0],edx
  4e1322: call   0x5844b0
  4e1327: lea    ecx,[esp+0x10]
  4e132b: mov    BYTE PTR [esp+0x3c],0x1
  4e1330: call   0x57d310
  4e1335: mov    edi,DWORD PTR [esi]
  4e1337: lea    eax,[esp+0x18]
  4e133b: push   0xffffffff // None
  4e133d: push   eax
  4e133e: mov    ecx,esi
  4e1340: mov    BYTE PTR [esi+0x2f0],bl
  4e1346: call   DWORD PTR [edi+0x48]
  4e1349: lea    ecx,[esp+0x28]
  4e134d: push   eax
  4e134e: push   ecx
  4e134f: mov    ecx,esi
  4e1351: call   0x49d020
  4e1356: push   eax
  4e1357: mov    ecx,esi
  4e1359: call   DWORD PTR [edi+0x4c]
  4e135c: mov    edx,DWORD PTR [esi]
  4e135e: lea    eax,[esp+0x24]
  4e1362: push   eax
  4e1363: mov    ecx,esi
  4e1365: call   DWORD PTR [edx+0x48]
  4e1368: fld    DWORD PTR ds:0x6b9400 // None
  4e136e: fadd   DWORD PTR [eax+0x4]
  4e1371: mov    edi,DWORD PTR [esp+0x48]
  4e1375: fstp   DWORD PTR [esi+0x2d0]
  4e137b: mov    ecx,DWORD PTR [esp+0x44]
  4e137f: mov    BYTE PTR [esp+0x3c],bl
  4e1383: cmp    ecx,ebx
  4e1385: je     0x4e1390
  4e1387: call   0x4098d0
  4e138c: mov    DWORD PTR [esp+0x44],ebx
  4e1390: cmp    edi,ebx
  4e1392: mov    DWORD PTR [esp+0x3c],0xffffffff // None
  4e1399: 
  4e139a: je     0x4e13ad
  4e139c: mov    eax,DWORD PTR [edi+0x14]
  4e139f: dec    eax
  4e13a0: mov    DWORD PTR [edi+0x14],eax
  4e13a3: jne    0x4e13ad
  4e13a5: push   ebx
  4e13a6: mov    ecx,edi
  4e13a8: call   0x5abfc0
  4e13ad: mov    ecx,DWORD PTR [esp+0x34]
  4e13b1: pop    edi
  4e13b2: pop    esi
  4e13b3: pop    ebp
  4e13b4: mov    DWORD PTR fs:0x0,ecx
  4e13bb: pop    ebx
  4e13bc: add    esp,0x30
  4e13bf: ret    0x8
  4e13d0: push   esi
  4e13d1: push   edi
  4e13d2: mov    edi,DWORD PTR [esp+0xc]
  4e13d6: mov    esi,ecx
  4e13d8: mov    eax,DWORD PTR [edi+0x4]
  4e13db: test   eax,eax
  4e13dd: jne    0x4e13e4
  4e13df: mov    eax,0x64a3b4 // 0.0
  4e13e4: push   0x69a1fc // Destroy
  4e13e9: push   eax
  4e13ea: call   0x6195f0
  4e13ef: add    esp,0x8
  4e13f2: test   eax,eax
  4e13f4: jne    0x4e1404
  4e13f6: mov    ecx,esi
  4e13f8: call   0x502220
  4e13fd: pop    edi
  4e13fe: mov    al,0x1
  4e1400: pop    esi
  4e1401: ret    0xc
  4e1404: mov    eax,DWORD PTR [esp+0x14]
  4e1408: mov    ecx,DWORD PTR [esp+0x10]
  4e140c: push   eax
  4e140d: push   ecx
  4e140e: push   edi
  4e140f: mov    ecx,esi
  4e1411: call   0x49e310
  4e1416: pop    edi
  4e1417: pop    esi
  4e1418: ret    0xc
  4e1420: mov    eax,fs:0x0
  4e1426: push   0xffffffff // None
  4e1428: push   0x632770
  4e142d: push   eax
  4e142e: mov    DWORD PTR fs:0x0,esp
  4e1435: sub    esp,0x60
  4e1438: push   ebx
  4e1439: push   ebp
  4e143a: mov    ebp,ecx
  4e143c: push   esi
  4e143d: push   edi
  4e143e: mov    al,BYTE PTR [ebp+0x2f0]
  4e1444: test   al,al
  4e1446: jne    0x4e163b
  4e144c: mov    eax,DWORD PTR [ebp+0x0]
  4e144f: mov    BYTE PTR [ebp+0x2f0],0x1
  4e1456: call   DWORD PTR [eax+0x84]
  4e145c: mov    ebx,eax
  4e145e: test   ebx,ebx
  4e1460: je     0x4e1584
  4e1466: mov    edx,DWORD PTR [ebp+0x0]
  4e1469: lea    eax,[esp+0x34]
  4e146d: push   eax
  4e146e: mov    ecx,ebp
  4e1470: call   DWORD PTR [edx+0x48]
  4e1473: mov    ecx,DWORD PTR [eax]
  4e1475: mov    esi,DWORD PTR ds:0x6c8de0 // None
  4e147b: mov    DWORD PTR [esp+0x28],ecx
  4e147f: mov    edx,DWORD PTR [eax+0x4]
  4e1482: mov    DWORD PTR [esp+0x2c],edx
  4e1486: mov    eax,DWORD PTR [eax+0x8]
  4e1489: test   esi,esi
  4e148b: mov    DWORD PTR [esp+0x30],eax
  4e148f: jne    0x4e1498
  4e1491: call   0x55b280
  4e1496: mov    esi,eax
  4e1498: mov    eax,DWORD PTR [esi+0xfc]
  4e149e: test   eax,eax
  4e14a0: jne    0x4e150f
  4e14a2: mov    cl,BYTE PTR [esp+0x80]
  4e14a9: push   0x0
  4e14ab: mov    BYTE PTR [esp+0x54],cl
  4e14af: lea    ecx,[esp+0x54]
  4e14b3: call   0x4040a0
  4e14b8: mov    edi,0x6b3f70 // 0.0
  4e14bd: or     ecx,0xffffffff // None
  4e14c0: xor    eax,eax
  4e14c2: repnz scas al,BYTE PTR es:[edi]
  4e14c4: not    ecx
  4e14c6: dec    ecx
  4e14c7: push   ecx
  4e14c8: push   0x6b3f70 // 0.0
  4e14cd: lea    ecx,[esp+0x58]
  4e14d1: call   0x4040f0
  4e14d6: lea    edx,[esp+0x50]
  4e14da: mov    DWORD PTR [esp+0x78],0x0
  4e14e1: 
  4e14e2: push   edx
  4e14e3: push   0x18f
  4e14e8: push   0x68eb58 // ./AdamSource\AdamEngine.h
  4e14ed: push   0x68f8ec // m_SoundSystem
  4e14f2: call   0x5a07f0
  4e14f7: call   eax
  4e14f9: add    esp,0x10
  4e14fc: lea    ecx,[esp+0x50]
  4e1500: mov    DWORD PTR [esp+0x78],0xffffffff // None
  4e1507: 
  4e1508: push   0x1
  4e150a: call   0x4040a0
  4e150f: mov    ecx,DWORD PTR [esi+0xfc]
  4e1515: push   0x0
  4e1517: push   0x0
  4e1519: push   0x3f800000
  4e151e: push   0x1
  4e1520: lea    eax,[esp+0x38]
  4e1524: push   0x1
  4e1526: push   eax
  4e1527: lea    edx,[esp+0x28]
  4e152b: push   ebx
  4e152c: push   edx
  4e152d: call   0x54ea00
  4e1532: mov    edi,eax
  4e1534: mov    ecx,DWORD PTR [ebp+0x2f4]
  4e153a: mov    eax,DWORD PTR [edi]
  4e153c: lea    esi,[ebp+0x2f4]
  4e1542: cmp    ecx,eax
  4e1544: mov    DWORD PTR [esp+0x78],0x1
  4e154b: 
  4e154c: je     0x4e156d
  4e154e: test   ecx,ecx
  4e1550: je     0x4e1562
  4e1552: mov    eax,DWORD PTR [ecx+0x14]
  4e1555: dec    eax
  4e1556: mov    DWORD PTR [ecx+0x14],eax
  4e1559: jne    0x4e1562
  4e155b: push   0x0
  4e155d: call   0x5abfc0
  4e1562: mov    eax,DWORD PTR [edi]
  4e1564: mov    ecx,esi
  4e1566: mov    DWORD PTR [esi],eax
  4e1568: call   0x5844b0
  4e156d: mov    ecx,DWORD PTR [esp+0x10]
  4e1571: mov    DWORD PTR [esp+0x78],0xffffffff // None
  4e1578: 
  4e1579: test   ecx,ecx
  4e157b: je     0x4e15c9
  4e157d: call   0x4098d0
  4e1582: jmp    0x4e15c9
  4e1584: mov    DWORD PTR [esp+0x18],0x0
  4e158b: 
  4e158c: mov    ecx,DWORD PTR [ebp+0x2f4]
  4e1592: lea    esi,[ebp+0x2f4]
  4e1598: test   ecx,ecx
  4e159a: mov    DWORD PTR [esp+0x78],0x2
  4e15a1: 
  4e15a2: je     0x4e15c1
  4e15a4: mov    eax,DWORD PTR [ecx+0x14]
  4e15a7: dec    eax
  4e15a8: mov    DWORD PTR [ecx+0x14],eax
  4e15ab: jne    0x4e15b4
  4e15ad: push   0x0
  4e15af: call   0x5abfc0
  4e15b4: mov    ecx,esi
  4e15b6: mov    DWORD PTR [esi],0x0
  4e15bc: call   0x5844b0
  4e15c1: mov    DWORD PTR [esp+0x78],0xffffffff // None
  4e15c8: 
  4e15c9: mov    edx,DWORD PTR [ebp+0x0]
  4e15cc: lea    eax,[esp+0x34]
  4e15d0: push   eax
  4e15d1: mov    ecx,ebp
  4e15d3: call   DWORD PTR [edx+0x48]
  4e15d6: mov    edx,eax
  4e15d8: lea    ecx,[ebp+0x2d4]
  4e15de: mov    esi,DWORD PTR [edx]
  4e15e0: mov    DWORD PTR [ecx],esi
  4e15e2: mov    esi,DWORD PTR [edx+0x4]
  4e15e5: mov    DWORD PTR [ecx+0x4],esi
  4e15e8: mov    edx,DWORD PTR [edx+0x8]
  4e15eb: mov    DWORD PTR [ecx+0x8],edx
  4e15ee: mov    ecx,DWORD PTR [eax]
  4e15f0: fld    DWORD PTR ds:0x6b9410 // None
  4e15f6: fadd   DWORD PTR [ebp+0x2d8]
  4e15fc: mov    DWORD PTR [esp+0x1c],ecx
  4e1600: mov    edx,DWORD PTR [eax+0x4]
  4e1603: mov    DWORD PTR [esp+0x20],edx
  4e1607: mov    eax,DWORD PTR [eax+0x8]
  4e160a: mov    edx,DWORD PTR [ebp+0x0]
  4e160d: mov    DWORD PTR [esp+0x24],eax
  4e1611: fstp   DWORD PTR [esp+0x20]
  4e1615: lea    eax,[esp+0x1c]
  4e1619: mov    ecx,ebp
  4e161b: push   eax
  4e161c: call   DWORD PTR [edx+0x4c]
  4e161f: mov    ecx,DWORD PTR [ebp+0x2e8]
  4e1625: mov    edx,DWORD PTR [ebp+0x2e4]
  4e162b: mov    eax,DWORD PTR [ebp+0x2e0]
  4e1631: push   ecx
  4e1632: push   edx
  4e1633: push   eax
  4e1634: mov    ecx,ebp
  4e1636: call   0x49cca0
  4e163b: mov    eax,DWORD PTR [ebp+0x2a0]
  4e1641: mov    ebx,0x3
  4e1646: cmp    eax,ebx
  4e1648: ja     0x4e1b91
  4e164e: jmp    DWORD PTR [eax*4+0x4e1c50]
  4e1655: mov    al,BYTE PTR [ebp+0x295]
  4e165b: test   al,al
  4e165d: je     0x4e1712
  4e1663: mov    eax,DWORD PTR [esp+0x80]
  4e166a: mov    esi,DWORD PTR [ebp+0x29c]
  4e1670: cmp    eax,0xffffffff // None
  4e1673: je     0x4e16ef
  4e1675: cmp    esi,0xffffffff // None
  4e1678: je     0x4e16ef
  4e167a: cmp    eax,esi
  4e167c: jge    0x4e16e4
  4e167e: mov    cl,BYTE PTR [esp+0x80]
  4e1685: push   0x0
  4e1687: mov    BYTE PTR [esp+0x54],cl
  4e168b: lea    ecx,[esp+0x54]
  4e168f: call   0x4040a0
  4e1694: mov    edi,0x6b3f70 // 0.0
  4e1699: or     ecx,0xffffffff // None
  4e169c: xor    eax,eax
  4e169e: repnz scas al,BYTE PTR es:[edi]
  4e16a0: not    ecx
  4e16a2: dec    ecx
  4e16a3: push   ecx
  4e16a4: push   0x6b3f70 // 0.0
  4e16a9: lea    ecx,[esp+0x58]
  4e16ad: call   0x4040f0
  4e16b2: lea    edx,[esp+0x50]
  4e16b6: mov    DWORD PTR [esp+0x78],ebx
  4e16ba: push   edx
  4e16bb: push   0x7d
  4e16bd: push   0x68e22c // ./AdamSource\AdamClock.h
  4e16c2: push   0x6934d0 // a_Now >= a_Then
  4e16c7: call   0x5a07f0
  4e16cc: call   eax
  4e16ce: add    esp,0x10
  4e16d1: lea    ecx,[esp+0x50]
  4e16d5: mov    DWORD PTR [esp+0x78],0xffffffff // None
  4e16dc: 
  4e16dd: push   0x1
  4e16df: call   0x4040a0
  4e16e4: mov    eax,DWORD PTR [esp+0x80]
  4e16eb: sub    eax,esi
  4e16ed: jmp    0x4e16f1
  4e16ef: xor    eax,eax
  4e16f1: cmp    eax,DWORD PTR [ebp+0x298]
  4e16f7: jle    0x4e1c24
  4e16fd: mov    DWORD PTR [ebp+0x2a0],ebx
  4e1703: mov    DWORD PTR [ebp+0x2ec],0x0
  4e170a: 
  4e170d: jmp    0x4e1c24
  4e1712: mov    DWORD PTR [ebp+0x2a0],0x1
  4e1719: 
  4e171c: jmp    0x4e1c24
  4e1721: mov    al,BYTE PTR [ebp+0x295]
  4e1727: test   al,al
  4e1729: je     0x4e1c24
  4e172f: mov    eax,DWORD PTR [ebp+0x2ec]
  4e1735: mov    ecx,DWORD PTR [esp+0x84]
  4e173c: test   eax,eax
  4e173e: sete   bl
  4e1741: add    eax,ecx
  4e1743: mov    DWORD PTR [ebp+0x2ec],eax
  4e1749: mov    ecx,DWORD PTR ds:0x6b9414 // None
  4e174f: cmp    eax,ecx
  4e1751: jle    0x4e17b5
  4e1753: mov    edx,DWORD PTR [ebp+0x2e8]
  4e1759: mov    eax,DWORD PTR [ebp+0x2e4]
  4e175f: mov    ecx,DWORD PTR [ebp+0x2e0]
  4e1765: push   edx
  4e1766: push   eax
  4e1767: push   ecx
  4e1768: mov    ecx,ebp
  4e176a: mov    DWORD PTR [ebp+0x2a0],0x1
  4e1771: 
  4e1774: call   0x49cca0
  4e1779: fld    DWORD PTR ds:0x6b9410 // None
  4e177f: lea    edx,[ebp+0x2d4]
  4e1785: fadd   DWORD PTR [ebp+0x2d8]
  4e178b: mov    eax,DWORD PTR [edx]
  4e178d: mov    DWORD PTR [esp+0x1c],eax
  4e1791: mov    eax,DWORD PTR [ebp+0x0]
  4e1794: mov    ecx,DWORD PTR [edx+0x4]
  4e1797: mov    DWORD PTR [esp+0x20],ecx
  4e179b: lea    ecx,[esp+0x1c]
  4e179f: mov    edx,DWORD PTR [edx+0x8]
  4e17a2: push   ecx
  4e17a3: fstp   DWORD PTR [esp+0x24]
  4e17a7: mov    ecx,ebp
  4e17a9: mov    DWORD PTR [esp+0x28],edx
  4e17ad: call   DWORD PTR [eax+0x4c]
  4e17b0: jmp    0x4e197b
  4e17b5: or     esi,0xffffffff // None
  4e17b8: mov    DWORD PTR [esp+0x10],eax
  4e17bc: cmp    eax,esi
  4e17be: jne    0x4e1828
  4e17c0: mov    dl,BYTE PTR [esp+0x80]
  4e17c7: push   0x0
  4e17c9: lea    ecx,[esp+0x54]
  4e17cd: mov    BYTE PTR [esp+0x54],dl
  4e17d1: call   0x4040a0
  4e17d6: mov    edi,0x6b3f70 // 0.0
  4e17db: mov    ecx,esi
  4e17dd: xor    eax,eax
  4e17df: repnz scas al,BYTE PTR es:[edi]
  4e17e1: not    ecx
  4e17e3: dec    ecx
  4e17e4: push   ecx
  4e17e5: push   0x6b3f70 // 0.0
  4e17ea: lea    ecx,[esp+0x58]
  4e17ee: call   0x4040f0
  4e17f3: lea    eax,[esp+0x50]
  4e17f7: mov    DWORD PTR [esp+0x78],0x4
  4e17fe: 
  4e17ff: push   eax
  4e1800: push   0x8a
  4e1805: push   0x68e22c // ./AdamSource\AdamClock.h
  4e180a: push   0x68e214 // a_Time != ADAMTIME_NONE
  4e180f: call   0x5a07f0
  4e1814: call   eax
  4e1816: add    esp,0x10
  4e1819: lea    ecx,[esp+0x50]
  4e181d: mov    DWORD PTR [esp+0x78],esi
  4e1821: push   0x1
  4e1823: call   0x4040a0
  4e1828: fild   DWORD PTR [esp+0x10]
  4e182c: push   ecx
  4e182d: fmul   DWORD PTR ds:0x64a95c // 0.0010000000474974513
  4e1833: fld    st(0)
  4e1835: fmulp  st(1),st
  4e1837: fld    st(0)
  4e1839: fmul   DWORD PTR ds:0x64f308 // 12.566370964050293
  4e183f: fcos
  4e1841: fld    st(1)
  4e1843: fmul   DWORD PTR ds:0x64f304 // -1.5
  4e1849: fldl2e
  4e184b: fmulp  st(1),st
  4e184d: fld    st(0)
  4e184f: frndint
  4e1851: fxch   st(1)
  4e1853: fsub   st,st(1)
  4e1855: f2xm1
  4e1857: fld1
  4e1859: faddp  st(1),st
  4e185b: fscale
  4e185d: fst    DWORD PTR [esp+0x14]
  4e1861: fstp   st(1)
  4e1863: fmul   st,st(1)
  4e1865: fsubr  DWORD PTR ds:0x64a354 // 1.0
  4e186b: fstp   DWORD PTR [esp+0x1c]
  4e186f: fstp   st(0)
  4e1871: fmul   DWORD PTR ds:0x64f300 // 18.84955596923828
  4e1877: fcos
  4e1879: fmul   DWORD PTR [esp+0x14]
  4e187d: fsubr  DWORD PTR ds:0x64a354 // 1.0
  4e1883: fld    DWORD PTR [esp+0x1c]
  4e1887: fmul   DWORD PTR [ebp+0x2e8]
  4e188d: fstp   DWORD PTR [esp]
  4e1890: push   ecx
  4e1891: fld    st(0)
  4e1893: fmul   DWORD PTR [ebp+0x2e4]
  4e1899: fstp   DWORD PTR [esp]
  4e189c: push   ecx
  4e189d: mov    ecx,ebp
  4e189f: fmul   DWORD PTR [ebp+0x2e0]
  4e18a5: fstp   DWORD PTR [esp]
  4e18a8: call   0x49cca0
  4e18ad: lea    ecx,[ebp+0x2d4]
  4e18b3: mov    edx,DWORD PTR [ebp+0x2d4]
  4e18b9: mov    DWORD PTR [esp+0x1c],edx
  4e18bd: mov    eax,DWORD PTR [ecx+0x4]
  4e18c0: mov    DWORD PTR [esp+0x20],eax
  4e18c4: mov    eax,DWORD PTR [ebp+0x2ec]
  4e18ca: mov    ecx,DWORD PTR [ecx+0x8]
  4e18cd: cmp    eax,0x3e8
  4e18d2: mov    DWORD PTR [esp+0x24],ecx
  4e18d6: jg     0x4e195e
  4e18dc: cmp    eax,esi
  4e18de: mov    DWORD PTR [esp+0x18],eax
  4e18e2: jne    0x4e194c
  4e18e4: mov    dl,BYTE PTR [esp+0x80]
  4e18eb: push   0x0
  4e18ed: lea    ecx,[esp+0x54]
  4e18f1: mov    BYTE PTR [esp+0x54],dl
  4e18f5: call   0x4040a0
  4e18fa: mov    edi,0x6b3f70 // 0.0
  4e18ff: mov    ecx,esi
  4e1901: xor    eax,eax
  4e1903: repnz scas al,BYTE PTR es:[edi]
  4e1905: not    ecx
  4e1907: dec    ecx
  4e1908: push   ecx
  4e1909: push   0x6b3f70 // 0.0
  4e190e: lea    ecx,[esp+0x58]
  4e1912: call   0x4040f0
  4e1917: lea    eax,[esp+0x50]
  4e191b: mov    DWORD PTR [esp+0x78],0x5
  4e1922: 
  4e1923: push   eax
  4e1924: push   0x8a
  4e1929: push   0x68e22c // ./AdamSource\AdamClock.h
  4e192e: push   0x68e214 // a_Time != ADAMTIME_NONE
  4e1933: call   0x5a07f0
  4e1938: call   eax
  4e193a: add    esp,0x10
  4e193d: lea    ecx,[esp+0x50]
  4e1941: mov    DWORD PTR [esp+0x78],esi
  4e1945: push   0x1
  4e1947: call   0x4040a0
  4e194c: fild   DWORD PTR [esp+0x18]
  4e1950: fmul   DWORD PTR ds:0x64a95c // 0.0010000000474974513
  4e1956: fmul   DWORD PTR ds:0x6b9410 // None
  4e195c: jmp    0x4e1964
  4e195e: fld    DWORD PTR ds:0x6b9410 // None
  4e1964: fadd   DWORD PTR [ebp+0x2d8]
  4e196a: mov    edx,DWORD PTR [ebp+0x0]
  4e196d: lea    eax,[esp+0x1c]
  4e1971: push   eax
  4e1972: mov    ecx,ebp
  4e1974: fstp   DWORD PTR [esp+0x24]
  4e1978: call   DWORD PTR [edx+0x4c]
  4e197b: test   bl,bl
  4e197d: je     0x4e199f
  4e197f: mov    al,BYTE PTR [ebp+0x118]
  4e1985: test   al,al
  4e1987: jne    0x4e199f
  4e1989: push   ecx
  4e198a: mov    ecx,esp
  4e198c: mov    DWORD PTR [esp+0x1c],esp
  4e1990: push   ecx
  4e1991: mov    ecx,ebp
  4e1993: call   0x4042e0
  4e1998: mov    ecx,ebp
  4e199a: call   0x49ca60
  4e199f: mov    ecx,ebp
  4e19a1: call   0x49c5a0
  4e19a6: jmp    0x4e1c24
  4e19ab: mov    edx,DWORD PTR [ebp+0x0]
  4e19ae: mov    ecx,ebp
  4e19b0: call   DWORD PTR [edx+0x80]
  4e19b6: mov    ebx,eax
  4e19b8: test   ebx,ebx
  4e19ba: je     0x4e1a79
  4e19c0: mov    esi,DWORD PTR ds:0x6c8de0 // None
  4e19c6: test   esi,esi
  4e19c8: jne    0x4e19d1
  4e19ca: call   0x55b280
  4e19cf: mov    esi,eax
  4e19d1: mov    eax,DWORD PTR [esi+0xfc]
  4e19d7: test   eax,eax
  4e19d9: jne    0x4e1a48
  4e19db: mov    al,BYTE PTR [esp+0x80]
  4e19e2: push   0x0
  4e19e4: lea    ecx,[esp+0x54]
  4e19e8: mov    BYTE PTR [esp+0x54],al
  4e19ec: call   0x4040a0
  4e19f1: mov    edi,0x6b3f70 // 0.0
  4e19f6: or     ecx,0xffffffff // None
  4e19f9: xor    eax,eax
  4e19fb: repnz scas al,BYTE PTR es:[edi]
  4e19fd: not    ecx
  4e19ff: dec    ecx
  4e1a00: push   ecx
  4e1a01: push   0x6b3f70 // 0.0
  4e1a06: lea    ecx,[esp+0x58]
  4e1a0a: call   0x4040f0
  4e1a0f: lea    ecx,[esp+0x50]
  4e1a13: mov    DWORD PTR [esp+0x78],0x6
  4e1a1a: 
  4e1a1b: push   ecx
  4e1a1c: push   0x18f
  4e1a21: push   0x68eb58 // ./AdamSource\AdamEngine.h
  4e1a26: push   0x68f8ec // m_SoundSystem
  4e1a2b: call   0x5a07f0
  4e1a30: call   eax
  4e1a32: add    esp,0x10
  4e1a35: lea    ecx,[esp+0x50]
  4e1a39: mov    DWORD PTR [esp+0x78],0xffffffff // None
  4e1a40: 
  4e1a41: push   0x1
  4e1a43: call   0x4040a0
  4e1a48: mov    ecx,DWORD PTR [esi+0xfc]
  4e1a4e: push   0x0
  4e1a50: push   0x0
  4e1a52: push   0x3f800000
  4e1a57: push   0x0
  4e1a59: lea    edx,[esp+0x24]
  4e1a5d: push   ebx
  4e1a5e: push   edx
  4e1a5f: call   0x54ffe0
  4e1a64: mov    ecx,DWORD PTR [esp+0x14]
  4e1a68: test   ecx,ecx
  4e1a6a: je     0x4e1a79
  4e1a6c: call   0x4098d0
  4e1a71: mov    DWORD PTR [esp+0x14],0x0
  4e1a78: 
  4e1a79: mov    eax,DWORD PTR [ebp+0x2f4]
  4e1a7f: lea    esi,[ebp+0x2f4]
  4e1a85: test   eax,eax
  4e1a87: je     0x4e1b40
  4e1a8d: test   eax,eax
  4e1a8f: jne    0x4e1afe
  4e1a91: mov    al,BYTE PTR [esp+0x80]
  4e1a98: push   0x0
  4e1a9a: lea    ecx,[esp+0x64]
  4e1a9e: mov    BYTE PTR [esp+0x64],al
  4e1aa2: call   0x4040a0
  4e1aa7: mov    edi,0x6b3f70 // 0.0
  4e1aac: or     ecx,0xffffffff // None
  4e1aaf: xor    eax,eax
  4e1ab1: repnz scas al,BYTE PTR es:[edi]
  4e1ab3: not    ecx
  4e1ab5: dec    ecx
  4e1ab6: push   ecx
  4e1ab7: push   0x6b3f70 // 0.0
  4e1abc: lea    ecx,[esp+0x68]
  4e1ac0: call   0x4040f0
  4e1ac5: lea    ecx,[esp+0x60]
  4e1ac9: mov    DWORD PTR [esp+0x78],0x7
  4e1ad0: 
  4e1ad1: push   ecx
  4e1ad2: push   0xb6
  4e1ad7: push   0x68d638 // ./AdamSource\DaviRC.h
  4e1adc: push   0x68d62c // m_Pointer
  4e1ae1: call   0x5a07f0
  4e1ae6: call   eax
  4e1ae8: add    esp,0x10
  4e1aeb: lea    ecx,[esp+0x60]
  4e1aef: mov    DWORD PTR [esp+0x78],0xffffffff // None
  4e1af6: 
  4e1af7: push   0x1
  4e1af9: call   0x4040a0
  4e1afe: mov    ecx,DWORD PTR [esi]
  4e1b00: call   0x553130
  4e1b05: mov    DWORD PTR [esp+0x18],0x0
  4e1b0c: 
  4e1b0d: mov    ecx,DWORD PTR [esi]
  4e1b0f: mov    DWORD PTR [esp+0x78],0x8
  4e1b16: 
  4e1b17: test   ecx,ecx
  4e1b19: je     0x4e1b38
  4e1b1b: mov    eax,DWORD PTR [ecx+0x14]
  4e1b1e: dec    eax
  4e1b1f: mov    DWORD PTR [ecx+0x14],eax
  4e1b22: jne    0x4e1b2b
  4e1b24: push   0x0
  4e1b26: call   0x5abfc0
  4e1b2b: mov    ecx,esi
  4e1b2d: mov    DWORD PTR [esi],0x0
  4e1b33: call   0x5844b0
  4e1b38: mov    DWORD PTR [esp+0x78],0xffffffff // None
  4e1b3f: 
  4e1b40: mov    al,BYTE PTR [ebp+0x294]
  4e1b46: mov    edx,DWORD PTR [esp+0x80]
  4e1b4d: test   al,al
  4e1b4f: mov    DWORD PTR [ebp+0x29c],edx
  4e1b55: mov    DWORD PTR [ebp+0x2a0],0x2
  4e1b5c: 
  4e1b5f: je     0x4e1b68
  4e1b61: mov    BYTE PTR [ebp+0x295],0x0
  4e1b68: mov    al,BYTE PTR [ebp+0x118]
  4e1b6e: test   al,al
  4e1b70: je     0x4e1c24
  4e1b76: push   ecx
  4e1b77: mov    ecx,ebp
  4e1b79: mov    eax,esp
  4e1b7b: mov    DWORD PTR [esp+0x1c],esp
  4e1b7f: push   eax
  4e1b80: call   0x4042e0
  4e1b85: mov    ecx,ebp
  4e1b87: call   0x49c880
  4e1b8c: jmp    0x4e1c24
  4e1b91: mov    cl,BYTE PTR [esp+0x80]
  4e1b98: push   0x0
  4e1b9a: mov    BYTE PTR [esp+0x44],cl
  4e1b9e: lea    ecx,[esp+0x44]
  4e1ba2: call   0x4040a0
  4e1ba7: mov    edi,0x69a230 // Unknown FSM state
  4e1bac: or     ecx,0xffffffff // None
  4e1baf: xor    eax,eax
  4e1bb1: push   0x1
  4e1bb3: repnz scas al,BYTE PTR es:[edi]
  4e1bb5: not    ecx
  4e1bb7: dec    ecx
  4e1bb8: mov    ebx,ecx
  4e1bba: lea    ecx,[esp+0x44]
  4e1bbe: push   ebx
  4e1bbf: call   0x401940
  4e1bc4: test   al,al
  4e1bc6: je     0x4e1beb
  4e1bc8: mov    edi,DWORD PTR [esp+0x44]
  4e1bcc: mov    ecx,ebx
  4e1bce: mov    edx,ecx
  4e1bd0: mov    esi,0x69a230 // Unknown FSM state
  4e1bd5: shr    ecx,0x2
  4e1bd8: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e1bda: mov    ecx,edx
  4e1bdc: push   ebx
  4e1bdd: and    ecx,0x3
  4e1be0: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e1be2: lea    ecx,[esp+0x44]
  4e1be6: call   0x404190
  4e1beb: lea    eax,[esp+0x40]
  4e1bef: mov    DWORD PTR [esp+0x78],0x9
  4e1bf6: 
  4e1bf7: push   eax
  4e1bf8: push   0x145
  4e1bfd: push   0x69a204 // D:\Work\RCHorror\AdamSource\AdamItem.cpp
  4e1c02: push   0x68d2d0 // false
  4e1c07: call   0x5a07f0
  4e1c0c: call   eax
  4e1c0e: add    esp,0x10
  4e1c11: lea    ecx,[esp+0x40]
  4e1c15: mov    DWORD PTR [esp+0x78],0xffffffff // None
  4e1c1c: 
  4e1c1d: push   0x1
  4e1c1f: call   0x4040a0
  4e1c24: mov    ecx,DWORD PTR [esp+0x84]
  4e1c2b: mov    edx,DWORD PTR [esp+0x80]
  4e1c32: push   ecx
  4e1c33: push   edx
  4e1c34: mov    ecx,ebp
  4e1c36: call   0x49d890
  4e1c3b: mov    ecx,DWORD PTR [esp+0x70]
  4e1c3f: pop    edi
  4e1c40: pop    esi
  4e1c41: pop    ebp
  4e1c42: mov    DWORD PTR fs:0x0,ecx
  4e1c49: pop    ebx
  4e1c4a: add    esp,0x6c
  4e1c4d: ret    0x8
  4e1c50: stos   DWORD PTR es:[edi],eax
  4e1c51: sbb    DWORD PTR [esi+0x0],ecx
  4e1c54: and    al,0x1c
  4e1c56: dec    esi
  4e1c57: add    BYTE PTR [ebp+0x16],dl
  4e1c5a: dec    esi
  4e1c5b: add    BYTE PTR [ecx],ah
  4e1c5d: pop    ss
  4e1c5e: dec    esi
  4e1c5f: add    BYTE PTR [edx+0x2f081],cl
  4e1c65: add    BYTE PTR [eax+eax*8+0x6f681475],al // None
  4e1c6c: adc    al,BYTE PTR [ebx+0x126f683a]
  4e1c72: cmp    DWORD PTR [edx],0x68
  4e1c75: outs   dx,DWORD PTR ds:[esi]
  4e1c76: adc    al,BYTE PTR [ebx-0x4fdd17c6]
  4e1c7c: sti
  4e1c7d: inc    ebx
  4e1c80: push   esi
  4e1c81: mov    esi,ecx
  4e1c83: mov    al,BYTE PTR [esi+0x2cc]
  4e1c89: test   al,al
  4e1c8b: je     0x4e1cf2
  4e1c8d: push   ebx
  4e1c8e: mov    ebx,DWORD PTR [esp+0x10]
  4e1c92: push   edi
  4e1c93: push   ebx
  4e1c94: call   0x409e30
  4e1c99: fmul   DWORD PTR ds:0x6b9408 // None
  4e1c9f: add    esp,0x4
  4e1ca2: fadd   DWORD PTR [esi+0x2c8]
  4e1ca8: fcom   DWORD PTR ds:0x64b1d8 // 6.2831854820251465
  4e1cae: fst    DWORD PTR [esi+0x2c8]
  4e1cb4: fnstsw ax
  4e1cb6: test   ah,0x1
  4e1cb9: jne    0x4e1cc9
  4e1cbb: fsub   DWORD PTR ds:0x64b1d8 // 6.2831854820251465
  4e1cc1: fstp   DWORD PTR [esi+0x2c8]
  4e1cc7: jmp    0x4e1ccb
  4e1cc9: fstp   st(0)
  4e1ccb: fld    DWORD PTR [esi+0x2c8]
  4e1cd1: fmul   DWORD PTR ds:0x64f30c // 0.15915493667125702
  4e1cd7: lea    edi,[esi+0x2f8]
  4e1cdd: push   ecx
  4e1cde: mov    ecx,edi
  4e1ce0: fstp   DWORD PTR [esp]
  4e1ce3: call   0x4a0e20
  4e1ce8: push   ebx
  4e1ce9: mov    ecx,edi
  4e1ceb: call   0x4a0ac0
  4e1cf0: pop    edi
  4e1cf1: pop    ebx
  4e1cf2: pop    esi
  4e1cf3: ret    0x8
  4e1d00: push   0xffffffff // None
  4e1d02: push   0x632798
  4e1d07: mov    eax,fs:0x0
  4e1d0d: push   eax
  4e1d0e: mov    DWORD PTR fs:0x0,esp
  4e1d15: sub    esp,0x28
  4e1d18: push   ebx
  4e1d19: push   ebp
  4e1d1a: push   esi
  4e1d1b: push   edi
  4e1d1c: lea    eax,[esp+0x10]
  4e1d20: mov    edi,ecx
  4e1d22: push   eax
  4e1d23: mov    DWORD PTR [esp+0x18],edi
  4e1d27: call   0x4042e0
  4e1d2c: mov    ebx,eax
  4e1d2e: mov    eax,DWORD PTR [ebx]
  4e1d30: xor    esi,esi
  4e1d32: cmp    eax,esi
  4e1d34: mov    DWORD PTR [esp+0x40],esi
  4e1d38: jne    0x4e1dcd
  4e1d3e: mov    cl,BYTE PTR [esp+0x48]
  4e1d42: push   esi
  4e1d43: mov    BYTE PTR [esp+0x2c],cl
  4e1d47: lea    ecx,[esp+0x2c]
  4e1d4b: call   0x4040a0
  4e1d50: mov    edi,0x6b3f70 // 0.0
  4e1d55: or     ecx,0xffffffff // None
  4e1d58: xor    eax,eax
  4e1d5a: push   0x1
  4e1d5c: repnz scas al,BYTE PTR es:[edi]
  4e1d5e: not    ecx
  4e1d60: dec    ecx
  4e1d61: mov    ebp,ecx
  4e1d63: lea    ecx,[esp+0x2c]
  4e1d67: push   ebp
  4e1d68: call   0x401940
  4e1d6d: test   al,al
  4e1d6f: je     0x4e1d96
  4e1d71: mov    edi,DWORD PTR [esp+0x2c]
  4e1d75: mov    ecx,ebp
  4e1d77: mov    edx,ecx
  4e1d79: mov    esi,0x6b3f70 // 0.0
  4e1d7e: shr    ecx,0x2
  4e1d81: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e1d83: mov    ecx,edx
  4e1d85: push   ebp
  4e1d86: and    ecx,0x3
  4e1d89: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e1d8b: lea    ecx,[esp+0x2c]
  4e1d8f: call   0x404190
  4e1d94: xor    esi,esi
  4e1d96: lea    eax,[esp+0x28]
  4e1d9a: mov    BYTE PTR [esp+0x40],0x1
  4e1d9f: push   eax
  4e1da0: push   0xb6
  4e1da5: push   0x68d638 // ./AdamSource\DaviRC.h
  4e1daa: push   0x68d62c // m_Pointer
  4e1daf: call   0x5a07f0
  4e1db4: call   eax
  4e1db6: add    esp,0x10
  4e1db9: lea    ecx,[esp+0x28]
  4e1dbd: mov    BYTE PTR [esp+0x40],0x0
  4e1dc2: push   0x1
  4e1dc4: call   0x4040a0
  4e1dc9: mov    edi,DWORD PTR [esp+0x14]
  4e1dcd: mov    eax,DWORD PTR [ebx]
  4e1dcf: or     ebp,0xffffffff // None
  4e1dd2: mov    DWORD PTR [esp+0x40],ebp
  4e1dd6: mov    ebx,DWORD PTR [eax+0x360]
  4e1ddc: mov    eax,DWORD PTR [esp+0x10]
  4e1de0: cmp    eax,esi
  4e1de2: je     0x4e1dfd
  4e1de4: mov    edx,DWORD PTR [eax+0x14]
  4e1de7: mov    ecx,eax
  4e1de9: add    eax,0x14
  4e1dec: dec    edx
  4e1ded: cmp    edx,esi
  4e1def: mov    DWORD PTR [eax],edx
  4e1df1: jne    0x4e1df9
  4e1df3: push   esi
  4e1df4: call   0x5abfc0
  4e1df9: mov    DWORD PTR [esp+0x10],esi
  4e1dfd: cmp    DWORD PTR [esp+0x48],ebx
  4e1e01: jne    0x4e1ec1
  4e1e07: mov    ecx,edi
  4e1e09: call   0x4e1ee0
  4e1e0e: test   al,al
  4e1e10: je     0x4e1ec1
  4e1e16: cmp    ebx,esi
  4e1e18: je     0x4e1ec1
  4e1e1e: cmp    DWORD PTR [ebx+0x1f4],esi
  4e1e24: jne    0x4e1eb6
  4e1e2a: mov    cl,BYTE PTR [esp+0x48]
  4e1e2e: mov    edi,0x6b3f70 // 0.0
  4e1e33: mov    BYTE PTR [esp+0x18],cl
  4e1e37: mov    ecx,ebp
  4e1e39: xor    eax,eax
  4e1e3b: mov    DWORD PTR [esp+0x1c],esi
  4e1e3f: repnz scas al,BYTE PTR es:[edi]
  4e1e41: not    ecx
  4e1e43: dec    ecx
  4e1e44: mov    DWORD PTR [esp+0x20],esi
  4e1e48: push   ecx
  4e1e49: push   0x6b3f70 // 0.0
  4e1e4e: lea    ecx,[esp+0x20]
  4e1e52: mov    DWORD PTR [esp+0x2c],esi
  4e1e56: call   0x4040f0
  4e1e5b: lea    edx,[esp+0x18]
  4e1e5f: mov    DWORD PTR [esp+0x40],0x2
  4e1e66: 
  4e1e67: push   edx
  4e1e68: push   0x161
  4e1e6d: push   0x69888c // D:\Work\RCHorror\AdamSource\AdamPlayer.h
  4e1e72: push   0x690410 // m_HUD != 0
  4e1e77: call   0x5a07f0
  4e1e7c: call   eax
  4e1e7e: mov    eax,DWORD PTR [esp+0x2c]
  4e1e82: add    esp,0x10
  4e1e85: cmp    eax,esi
  4e1e87: mov    DWORD PTR [esp+0x40],ebp
  4e1e8b: je     0x4e1eaa
  4e1e8d: lea    ecx,[eax-0x1]
  4e1e90: mov    al,BYTE PTR [eax-0x1]
  4e1e93: test   al,al
  4e1e95: je     0x4e1ea1
  4e1e97: cmp    al,0xff
  4e1e99: je     0x4e1ea1
  4e1e9b: dec    al
  4e1e9d: mov    BYTE PTR [ecx],al
  4e1e9f: jmp    0x4e1eaa
  4e1ea1: push   ecx
  4e1ea2: call   0x5fe5f0
  4e1ea7: add    esp,0x4
  4e1eaa: mov    DWORD PTR [esp+0x1c],esi
  4e1eae: mov    DWORD PTR [esp+0x20],esi
  4e1eb2: mov    DWORD PTR [esp+0x24],esi
  4e1eb6: mov    ecx,DWORD PTR [ebx+0x1f4]
  4e1ebc: mov    eax,DWORD PTR [ecx]
  4e1ebe: call   DWORD PTR [eax+0xc]
  4e1ec1: mov    ecx,DWORD PTR [esp+0x38]
  4e1ec5: pop    edi
  4e1ec6: pop    esi
  4e1ec7: pop    ebp
  4e1ec8: pop    ebx
  4e1ec9: mov    DWORD PTR fs:0x0,ecx
  4e1ed0: add    esp,0x34
  4e1ed3: ret    0x4
  4e1ee0: push   ecx
  4e1ee1: push   ebx
  4e1ee2: push   esi
  4e1ee3: mov    esi,ecx
  4e1ee5: mov    eax,DWORD PTR [esi+0x2a0]
  4e1eeb: cmp    eax,0x1
  4e1eee: je     0x4e1ef5
  4e1ef0: cmp    eax,0x3
  4e1ef3: jne    0x4e1f46
  4e1ef5: mov    eax,DWORD PTR [esi]
  4e1ef7: mov    ecx,esi
  4e1ef9: call   DWORD PTR [eax+0x88]
  4e1eff: test   al,al
  4e1f01: je     0x4e1f46
  4e1f03: mov    ecx,esi
  4e1f05: mov    BYTE PTR [esp+0x8],0x0
  4e1f0a: call   0x502480
  4e1f0f: test   al,al
  4e1f11: je     0x4e1f18
  4e1f13: mov    BYTE PTR [esp+0x8],0x1
  4e1f18: mov    eax,DWORD PTR [esp+0x8]
  4e1f1c: mov    edx,DWORD PTR [esi]
  4e1f1e: push   eax
  4e1f1f: mov    ecx,esi
  4e1f21: call   DWORD PTR [edx+0x7c]
  4e1f24: mov    bl,al
  4e1f26: test   bl,bl
  4e1f28: je     0x4e1f40
  4e1f2a: push   0x6b9650 // None
  4e1f2f: mov    ecx,esi
  4e1f31: call   0x505400
  4e1f36: mov    DWORD PTR [esi+0x2a0],0x0
  4e1f3d: 
  4e1f40: mov    al,bl
  4e1f42: pop    esi
  4e1f43: pop    ebx
  4e1f44: pop    ecx
  4e1f45: ret
  4e1f46: pop    esi
  4e1f47: xor    al,al
  4e1f49: pop    ebx
  4e1f4a: pop    ecx
  4e1f4b: ret
  4e1f50: mov    cl,BYTE PTR ds:0x7103a0 // None
  4e1f56: mov    al,0x1
  4e1f58: test   al,cl
  4e1f5a: jne    0x4e1f64
  4e1f5c: or     cl,al
  4e1f5e: mov    BYTE PTR ds:0x7103a0,cl // None
  4e1f64: jmp    0x4e1f70
  4e1f70: push   0x401ba0
  4e1f75: call   0x60a57b
  4e1f7a: pop    ecx
  4e1f7b: ret
  4e1f80: call   0x4e1f90
  4e1f85: jmp    0x4e2150
  4e1f90: push   0xffffffff // None
  4e1f92: push   0x6327c8
  4e1f97: mov    eax,fs:0x0
  4e1f9d: push   eax
  4e1f9e: mov    DWORD PTR fs:0x0,esp
  4e1fa5: sub    esp,0x34
  4e1fa8: mov    al,BYTE PTR [esp+0x3]
  4e1fac: push   ebx
  4e1fad: push   ebp
  4e1fae: push   esi
  4e1faf: push   edi
  4e1fb0: mov    BYTE PTR [esp+0x34],al
  4e1fb4: mov    edi,0x6b3f70 // 0.0
  4e1fb9: or     ecx,0xffffffff // None
  4e1fbc: xor    eax,eax
  4e1fbe: xor    ebx,ebx
  4e1fc0: repnz scas al,BYTE PTR es:[edi]
  4e1fc2: not    ecx
  4e1fc4: dec    ecx
  4e1fc5: mov    DWORD PTR [esp+0x38],ebx
  4e1fc9: push   ecx
  4e1fca: push   0x6b3f70 // 0.0
  4e1fcf: lea    ecx,[esp+0x3c]
  4e1fd3: mov    DWORD PTR [esp+0x44],ebx
  4e1fd7: mov    DWORD PTR [esp+0x48],ebx
  4e1fdb: call   0x4040f0
  4e1fe0: mov    cl,BYTE PTR [esp+0x13]
  4e1fe4: push   ebx
  4e1fe5: mov    BYTE PTR [esp+0x18],cl
  4e1fe9: lea    ecx,[esp+0x18]
  4e1fed: mov    DWORD PTR [esp+0x50],ebx
  4e1ff1: call   0x4040a0
  4e1ff6: mov    edi,0x6901ec // Debug
  4e1ffb: or     ecx,0xffffffff // None
  4e1ffe: xor    eax,eax
  4e2000: push   0x1
  4e2002: repnz scas al,BYTE PTR es:[edi]
  4e2004: not    ecx
  4e2006: dec    ecx
  4e2007: mov    ebp,ecx
  4e2009: lea    ecx,[esp+0x18]
  4e200d: push   ebp
  4e200e: call   0x401940
  4e2013: test   al,al
  4e2015: je     0x4e203b
  4e2017: mov    edi,DWORD PTR [esp+0x18]
  4e201b: mov    ecx,ebp
  4e201d: mov    edx,ecx
  4e201f: mov    esi,0x6901ec // Debug
  4e2024: shr    ecx,0x2
  4e2027: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e2029: mov    ecx,edx
  4e202b: and    ecx,0x3
  4e202e: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e2030: mov    eax,DWORD PTR [esp+0x18]
  4e2034: mov    DWORD PTR [esp+0x1c],ebp
  4e2038: mov    BYTE PTR [eax+ebp*1],bl
  4e203b: mov    cl,BYTE PTR [esp+0x13]
  4e203f: push   ebx
  4e2040: mov    BYTE PTR [esp+0x28],cl
  4e2044: lea    ecx,[esp+0x28]
  4e2048: mov    BYTE PTR [esp+0x50],0x1
  4e204d: call   0x4040a0
  4e2052: mov    edi,0x69a244 // DebugLight
  4e2057: or     ecx,0xffffffff // None
  4e205a: xor    eax,eax
  4e205c: push   0x1
  4e205e: repnz scas al,BYTE PTR es:[edi]
  4e2060: not    ecx
  4e2062: dec    ecx
  4e2063: mov    ebp,ecx
  4e2065: lea    ecx,[esp+0x28]
  4e2069: push   ebp
  4e206a: call   0x401940
  4e206f: test   al,al
  4e2071: je     0x4e2097
  4e2073: mov    edi,DWORD PTR [esp+0x28]
  4e2077: mov    ecx,ebp
  4e2079: mov    edx,ecx
  4e207b: mov    esi,0x69a244 // DebugLight
  4e2080: shr    ecx,0x2
  4e2083: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e2085: mov    ecx,edx
  4e2087: and    ecx,0x3
  4e208a: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e208c: mov    eax,DWORD PTR [esp+0x28]
  4e2090: mov    DWORD PTR [esp+0x2c],ebp
  4e2094: mov    BYTE PTR [eax+ebp*1],bl
  4e2097: lea    ecx,[esp+0x34]
  4e209b: push   ebx
  4e209c: push   ecx
  4e209d: lea    edx,[esp+0x1c]
  4e20a1: push   ebx
  4e20a2: lea    eax,[esp+0x30]
  4e20a6: push   edx
  4e20a7: push   eax
  4e20a8: mov    ecx,0x6b9450 // None
  4e20ad: mov    BYTE PTR [esp+0x60],0x2
  4e20b2: call   0x5ac9d0
  4e20b7: push   0x1
  4e20b9: lea    ecx,[esp+0x28]
  4e20bd: mov    BYTE PTR [esp+0x50],0x1
  4e20c2: call   0x4040a0
  4e20c7: mov    eax,DWORD PTR [esp+0x18]
  4e20cb: cmp    eax,ebx
  4e20cd: je     0x4e20ec
  4e20cf: lea    ecx,[eax-0x1]
  4e20d2: mov    al,BYTE PTR [eax-0x1]
  4e20d5: cmp    al,bl
  4e20d7: je     0x4e20e3
  4e20d9: cmp    al,0xff
  4e20db: je     0x4e20e3
  4e20dd: dec    al
  4e20df: mov    BYTE PTR [ecx],al
  4e20e1: jmp    0x4e20ec
  4e20e3: push   ecx
  4e20e4: call   0x5fe5f0
  4e20e9: add    esp,0x4
  4e20ec: mov    eax,DWORD PTR [esp+0x38]
  4e20f0: mov    DWORD PTR [esp+0x18],ebx
  4e20f4: cmp    eax,ebx
  4e20f6: mov    DWORD PTR [esp+0x1c],ebx
  4e20fa: mov    DWORD PTR [esp+0x20],ebx
  4e20fe: je     0x4e212e
  4e2100: lea    ecx,[eax-0x1]
  4e2103: mov    al,BYTE PTR [eax-0x1]
  4e2106: cmp    al,bl
  4e2108: je     0x4e2125
  4e210a: cmp    al,0xff
  4e210c: je     0x4e2125
  4e210e: pop    edi
  4e210f: dec    al
  4e2111: pop    esi
  4e2112: pop    ebp
  4e2113: mov    BYTE PTR [ecx],al
  4e2115: pop    ebx
  4e2116: mov    ecx,DWORD PTR [esp+0x34]
  4e211a: mov    DWORD PTR fs:0x0,ecx
  4e2121: add    esp,0x40
  4e2124: ret
  4e2125: push   ecx
  4e2126: call   0x5fe5f0
  4e212b: add    esp,0x4
  4e212e: mov    ecx,DWORD PTR [esp+0x44]
  4e2132: pop    edi
  4e2133: pop    esi
  4e2134: pop    ebp
  4e2135: pop    ebx
  4e2136: mov    DWORD PTR fs:0x0,ecx
  4e213d: add    esp,0x40
  4e2140: ret
  4e2150: push   0x4e2160
  4e2155: call   0x60a57b
  4e215a: pop    ecx
  4e215b: ret
  4e2160: mov    ecx,0x6b9450 // None
  4e2165: jmp    0x5acca0
  4e2170: mov    eax,ds:0x6b94bc // None
  4e2175: ret
  4e2180: call   0x4e2190
  4e2185: jmp    0x4e2270
  4e2190: push   0xffffffff // None
  4e2192: push   0x6327e8
  4e2197: mov    eax,fs:0x0
  4e219d: push   eax
  4e219e: mov    DWORD PTR fs:0x0,esp
  4e21a5: sub    esp,0x14
  4e21a8: mov    al,BYTE PTR [esp+0x3]
  4e21ac: push   ebx
  4e21ad: push   ebp
  4e21ae: push   edi
  4e21af: mov    BYTE PTR [esp+0x10],al
  4e21b3: mov    edi,0x69a250 // DynamicLightEntity
  4e21b8: or     ecx,0xffffffff // None
  4e21bb: xor    eax,eax
  4e21bd: xor    ebx,ebx
  4e21bf: push   0x1
  4e21c1: repnz scas al,BYTE PTR es:[edi]
  4e21c3: not    ecx
  4e21c5: dec    ecx
  4e21c6: mov    DWORD PTR [esp+0x18],ebx
  4e21ca: mov    ebp,ecx
  4e21cc: lea    ecx,[esp+0x14]
  4e21d0: push   ebp
  4e21d1: mov    DWORD PTR [esp+0x20],ebx
  4e21d5: mov    DWORD PTR [esp+0x24],ebx
  4e21d9: call   0x401940
  4e21de: test   al,al
  4e21e0: je     0x4e2208
  4e21e2: mov    edi,DWORD PTR [esp+0x14]
  4e21e6: mov    ecx,ebp
  4e21e8: mov    edx,ecx
  4e21ea: push   esi
  4e21eb: mov    esi,0x69a250 // DynamicLightEntity
  4e21f0: shr    ecx,0x2
  4e21f3: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e21f5: mov    ecx,edx
  4e21f7: and    ecx,0x3
  4e21fa: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e21fc: mov    eax,DWORD PTR [esp+0x18]
  4e2200: mov    DWORD PTR [esp+0x1c],ebp
  4e2204: pop    esi
  4e2205: mov    BYTE PTR [eax+ebp*1],bl
  4e2208: lea    ecx,[esp+0x10]
  4e220c: mov    DWORD PTR [esp+0x28],ebx
  4e2210: push   ecx
  4e2211: mov    ecx,0x6b9428 // None
  4e2216: call   0x5671a0
  4e221b: mov    eax,DWORD PTR [esp+0x14]
  4e221f: cmp    eax,ebx
  4e2221: je     0x4e2250
  4e2223: lea    ecx,[eax-0x1]
  4e2226: mov    al,BYTE PTR [eax-0x1]
  4e2229: cmp    al,bl
  4e222b: je     0x4e2247
  4e222d: cmp    al,0xff
  4e222f: je     0x4e2247
  4e2231: dec    al
  4e2233: pop    edi
  4e2234: pop    ebp
  4e2235: mov    BYTE PTR [ecx],al
  4e2237: pop    ebx
  4e2238: mov    ecx,DWORD PTR [esp+0x14]
  4e223c: mov    DWORD PTR fs:0x0,ecx
  4e2243: add    esp,0x20
  4e2246: ret
  4e2247: push   ecx
  4e2248: call   0x5fe5f0
  4e224d: add    esp,0x4
  4e2250: mov    ecx,DWORD PTR [esp+0x20]
  4e2254: pop    edi
  4e2255: pop    ebp
  4e2256: pop    ebx
  4e2257: mov    DWORD PTR fs:0x0,ecx
  4e225e: add    esp,0x20
  4e2261: ret
  4e2270: push   0x4e2280
  4e2275: call   0x60a57b
  4e227a: pop    ecx
  4e227b: ret
  4e2280: mov    cl,BYTE PTR ds:0x6b9420 // None
  4e2286: mov    al,0x1
  4e2288: test   al,cl
  4e228a: jne    0x4e229e
  4e228c: or     cl,al
  4e228e: mov    BYTE PTR ds:0x6b9420,cl // None
  4e2294: mov    ecx,0x6b9428 // None
  4e2299: jmp    0x567300
  4e229e: ret
  4e22a0: push   0xffffffff // None
  4e22a2: push   0x632816
  4e22a7: mov    eax,fs:0x0
  4e22ad: push   eax
  4e22ae: mov    DWORD PTR fs:0x0,esp
  4e22b5: push   ecx
  4e22b6: mov    eax,DWORD PTR [esp+0x14]
  4e22ba: push   ebx
  4e22bb: push   esi
  4e22bc: mov    esi,ecx
  4e22be: push   eax
  4e22bf: mov    DWORD PTR [esp+0xc],esi
  4e22c3: call   0x501cb0
  4e22c8: xor    ebx,ebx
  4e22ca: push   esi
  4e22cb: lea    ecx,[esi+0xf8]
  4e22d1: mov    DWORD PTR [esp+0x18],ebx
  4e22d5: call   0x4ad120
  4e22da: or     ecx,0xffffffff // None
  4e22dd: mov    edx,0x3f800000
  4e22e2: mov    al,0x1
  4e22e4: mov    BYTE PTR [esi+0x12c],bl
  4e22ea: mov    BYTE PTR [esi+0x12d],bl
  4e22f0: mov    DWORD PTR [esi+0x140],ebx
  4e22f6: mov    DWORD PTR [esi+0x144],ebx
  4e22fc: mov    DWORD PTR [esi+0x160],ebx
  4e2302: mov    DWORD PTR [esi+0x164],ecx
  4e2308: mov    DWORD PTR [esi+0x168],ecx
  4e230e: mov    DWORD PTR [esi+0x16c],edx
  4e2314: mov    BYTE PTR [esi+0x170],al
  4e231a: mov    DWORD PTR [esi+0x174],ecx
  4e2320: mov    DWORD PTR [esi+0x178],ecx
  4e2326: mov    cl,BYTE PTR [esp+0x1c]
  4e232a: mov    DWORD PTR [esi+0x17c],edx
  4e2330: mov    dl,BYTE PTR [esp+0x1c]
  4e2334: mov    BYTE PTR [esi+0x180],al
  4e233a: mov    DWORD PTR [esi+0x184],ebx
  4e2340: mov    DWORD PTR [esi+0x188],ebx
  4e2346: mov    DWORD PTR [esi+0x18c],ebx
  4e234c: mov    DWORD PTR [esi+0x190],ebx
  4e2352: mov    BYTE PTR [esi+0x1b4],al
  4e2358: mov    DWORD PTR [esi+0x1b8],ebx
  4e235e: mov    BYTE PTR [esi+0x1bc],cl
  4e2364: mov    cl,BYTE PTR [esp+0x1c]
  4e2368: mov    DWORD PTR [esi+0x1c0],ebx
  4e236e: mov    DWORD PTR [esi+0x1c4],ebx
  4e2374: mov    DWORD PTR [esi+0x1c8],ebx
  4e237a: mov    DWORD PTR [esi+0x1cc],ebx
  4e2380: mov    BYTE PTR [esi+0x1d0],dl
  4e2386: mov    DWORD PTR [esi+0x1d4],ebx
  4e238c: mov    DWORD PTR [esi+0x1d8],ebx
  4e2392: mov    DWORD PTR [esi+0x1dc],ebx
  4e2398: push   ebx
  4e2399: mov    BYTE PTR [esi+0x1e0],cl
  4e239f: push   ebx
  4e23a0: mov    DWORD PTR [esi+0x1e4],ebx
  4e23a6: mov    DWORD PTR [esi+0x1e8],ebx
  4e23ac: mov    DWORD PTR [esi+0x1ec],ebx
  4e23b2: push   ebx
  4e23b3: lea    ecx,[esi+0x154]
  4e23b9: mov    BYTE PTR [esi+0x1f0],al
  4e23bf: mov    DWORD PTR [esi],0x64f314 // 7.17615032929682e-39
  4e23c5: call   0x5b2e20
  4e23ca: mov    ecx,DWORD PTR [esp+0xc]
  4e23ce: mov    DWORD PTR [esi+0x1a4],ebx
  4e23d4: mov    DWORD PTR [esi+0x194],ebx
  4e23da: mov    DWORD PTR [esi+0x130],ebx
  4e23e0: mov    DWORD PTR [esi+0x1a8],ebx
  4e23e6: mov    DWORD PTR [esi+0x198],ebx
  4e23ec: mov    DWORD PTR [esi+0x134],ebx
  4e23f2: mov    DWORD PTR [esi+0x1ac],ebx
  4e23f8: mov    DWORD PTR [esi+0x19c],ebx
  4e23fe: mov    DWORD PTR [esi+0x138],ebx
  4e2404: mov    DWORD PTR [esi+0x1b0],ebx
  4e240a: mov    DWORD PTR [esi+0x1a0],ebx
  4e2410: mov    DWORD PTR [esi+0x13c],ebx
  4e2416: mov    eax,esi
  4e2418: pop    esi
  4e2419: pop    ebx
  4e241a: mov    DWORD PTR fs:0x0,ecx
  4e2421: add    esp,0x10
  4e2424: ret    0x4
  4e2430: push   esi
  4e2431: mov    esi,ecx
  4e2433: call   0x4e2450
  4e2438: test   BYTE PTR [esp+0x8],0x1
  4e243d: je     0x4e2448
  4e243f: push   esi
  4e2440: call   0x5fe5f0
  4e2445: add    esp,0x4
  4e2448: mov    eax,esi
  4e244a: pop    esi
  4e244b: ret    0x4
  4e2450: push   0xffffffff // None
  4e2452: push   0x632860
  4e2457: mov    eax,fs:0x0
  4e245d: push   eax
  4e245e: mov    DWORD PTR fs:0x0,esp
  4e2465: push   ecx
  4e2466: push   ebx
  4e2467: push   esi
  4e2468: mov    esi,ecx
  4e246a: mov    DWORD PTR [esp+0x8],esi
  4e246e: mov    DWORD PTR [esi],0x64f314 // 7.17615032929682e-39
  4e2474: mov    ecx,DWORD PTR [esi+0x184]
  4e247a: xor    ebx,ebx
  4e247c: cmp    ecx,ebx
  4e247e: mov    DWORD PTR [esp+0x14],0x4
  4e2485: 
  4e2486: je     0x4e2494
  4e2488: mov    eax,DWORD PTR [ecx]
  4e248a: push   0x1
  4e248c: call   DWORD PTR [eax]
  4e248e: mov    DWORD PTR [esi+0x184],ebx
  4e2494: mov    ecx,DWORD PTR [esi+0x188]
  4e249a: cmp    ecx,ebx
  4e249c: je     0x4e24aa
  4e249e: mov    edx,DWORD PTR [ecx]
  4e24a0: push   0x1
  4e24a2: call   DWORD PTR [edx]
  4e24a4: mov    DWORD PTR [esi+0x188],ebx
  4e24aa: mov    eax,DWORD PTR [esi+0x1e4]
  4e24b0: cmp    eax,ebx
  4e24b2: je     0x4e24d1
  4e24b4: lea    ecx,[eax-0x1]
  4e24b7: mov    al,BYTE PTR [eax-0x1]
  4e24ba: cmp    al,bl
  4e24bc: je     0x4e24c8
  4e24be: cmp    al,0xff
  4e24c0: je     0x4e24c8
  4e24c2: dec    al
  4e24c4: mov    BYTE PTR [ecx],al
  4e24c6: jmp    0x4e24d1
  4e24c8: push   ecx
  4e24c9: call   0x5fe5f0
  4e24ce: add    esp,0x4
  4e24d1: mov    DWORD PTR [esi+0x1e4],ebx
  4e24d7: mov    DWORD PTR [esi+0x1e8],ebx
  4e24dd: mov    DWORD PTR [esi+0x1ec],ebx
  4e24e3: mov    eax,DWORD PTR [esi+0x1d4]
  4e24e9: cmp    eax,ebx
  4e24eb: je     0x4e250a
  4e24ed: lea    ecx,[eax-0x1]
  4e24f0: mov    al,BYTE PTR [eax-0x1]
  4e24f3: cmp    al,bl
  4e24f5: je     0x4e2501
  4e24f7: cmp    al,0xff
  4e24f9: je     0x4e2501
  4e24fb: dec    al
  4e24fd: mov    BYTE PTR [ecx],al
  4e24ff: jmp    0x4e250a
