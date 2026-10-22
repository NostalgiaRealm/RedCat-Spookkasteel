  554ab0: mov    al,BYTE PTR [ecx]
  554ab2: mov    edx,DWORD PTR [esp+0xc]
  554ab6: test   al,al
  554ab8: mov    eax,DWORD PTR [esp+0x10]
  554abc: push   eax
  554abd: mov    eax,DWORD PTR [esp+0xc]
  554ac1: push   0x0
  554ac3: push   0x0
  554ac5: push   edx
  554ac6: mov    edx,DWORD PTR [esp+0x14]
  554aca: push   0x6
  554acc: push   0x43
  554ace: push   eax
  554acf: push   edx
  554ad0: je     0x554adc
  554ad2: lea    eax,[ecx+0x10]
  554ad5: lea    edx,[ecx+0x4]
  554ad8: push   eax
  554ad9: push   edx
  554ada: jmp    0x554ae0
  554adc: push   0x0
  554ade: push   0x0
  554ae0: call   0x554660
  554ae5: push   eax
  554ae6: call   0x5b7d80
  554aeb: add    esp,0x2c
  554aee: test   eax,eax
  554af0: setne  al
  554af3: ret    0x10
  554b00: mov    eax,DWORD PTR [esp+0x10]
  554b04: mov    edx,DWORD PTR [esp+0xc]
  554b08: push   0x0
  554b0a: push   0x0
  554b0c: push   eax
  554b0d: mov    eax,DWORD PTR [esp+0x14]
  554b11: push   edx
  554b12: mov    edx,DWORD PTR [esp+0x14]
  554b16: push   eax
  554b17: push   edx
  554b18: call   0x554b20
  554b1d: ret    0x10
  554b20: mov    eax,DWORD PTR [esp+0x10]
  554b24: mov    edx,DWORD PTR [esp+0x18]
  554b28: push   eax
  554b29: mov    eax,DWORD PTR [esp+0x18]
  554b2d: push   edx
  554b2e: mov    edx,DWORD PTR [esp+0x14]
  554b32: push   eax
  554b33: mov    eax,DWORD PTR [esp+0x14]
  554b37: push   edx
  554b38: lea    edx,[ecx+0x10]
  554b3b: push   eax
  554b3c: push   edx
  554b3d: mov    edx,DWORD PTR [esp+0x1c]
  554b41: lea    eax,[ecx+0x4]
  554b44: push   eax
  554b45: push   edx
  554b46: call   0x554660
  554b4b: push   eax
  554b4c: call   0x5b7dc0
  554b51: add    esp,0x24
  554b54: neg    eax
  554b56: sbb    eax,eax
  554b58: neg    eax
  554b5a: ret    0x18
  554b60: sub    esp,0x14
  554b63: push   esi
  554b64: mov    esi,DWORD PTR [esp+0x20]
  554b68: mov    DWORD PTR [esp+0x4],ecx
  554b6c: mov    eax,DWORD PTR [esi+0x4]
  554b6f: test   eax,eax
  554b71: je     0x554b8b
  554b73: mov    ecx,DWORD PTR [esi+0x8]
  554b76: sub    ecx,eax
  554b78: test   ecx,0xfffffffc // None
  554b7e: jle    0x554b8b
  554b80: push   0x0
  554b82: mov    ecx,esi
  554b84: call   0x555200
  554b89: jmp    0x554b6c
  554b8b: push   ebx
  554b8c: mov    ebx,DWORD PTR [esp+0x8]
  554b90: push   ebp
  554b91: mov    ebp,DWORD PTR [esp+0x2c]
  554b95: push   edi
  554b96: lea    edi,[ebx+0x10]
  554b99: add    ebx,0x4
  554b9c: mov    eax,DWORD PTR [esp+0x28]
  554ba0: lea    edx,[esp+0x14]
  554ba4: mov    ecx,DWORD PTR [esp+0x10]
  554ba8: push   edx
  554ba9: push   esi
  554baa: push   0x554dd0
  554baf: push   ebp
  554bb0: push   0x4
  554bb2: push   edi
  554bb3: push   ebx
  554bb4: push   eax
  554bb5: call   0x554660
  554bba: push   eax
  554bbb: call   0x5b7dc0
  554bc0: add    esp,0x24
  554bc3: test   eax,eax
  554bc5: setne  al
  554bc8: test   al,al
  554bca: je     0x554bf1
  554bcc: mov    ecx,DWORD PTR [esp+0x1c]
  554bd0: push   ecx
  554bd1: call   0x554c20
  554bd6: add    esp,0x4
  554bd9: lea    edx,[esp+0x2c]
  554bdd: mov    DWORD PTR [esp+0x2c],eax
  554be1: mov    eax,DWORD PTR [esi+0x8]
  554be4: push   edx
  554be5: push   0x1
  554be7: push   eax
  554be8: mov    ecx,esi
  554bea: call   0x53cff0
  554bef: jmp    0x554b9c
  554bf1: mov    eax,DWORD PTR [esi+0x4]
  554bf4: pop    edi
  554bf5: pop    ebp
  554bf6: pop    ebx
  554bf7: test   eax,eax
  554bf9: jne    0x554c09
  554bfb: xor    esi,esi
  554bfd: test   esi,esi
  554bff: setg   al
  554c02: pop    esi
  554c03: add    esp,0x14
  554c06: ret    0xc
  554c09: mov    esi,DWORD PTR [esi+0x8]
  554c0c: sub    esi,eax
  554c0e: xor    eax,eax
  554c10: sar    esi,0x2
  554c13: test   esi,esi
  554c15: setg   al
  554c18: pop    esi
  554c19: add    esp,0x14
  554c1c: ret    0xc
  554c20: mov    eax,fs:0x0
  554c26: push   0xffffffff // None
  554c28: push   0x63e4c0
  554c2d: push   eax
  554c2e: mov    eax,DWORD PTR [esp+0x10]
  554c32: mov    DWORD PTR fs:0x0,esp
  554c39: sub    esp,0x20
  554c3c: push   ebx
  554c3d: xor    ebx,ebx
  554c3f: push   ebp
  554c40: push   esi
  554c41: cmp    eax,ebx
  554c43: push   edi
  554c44: jne    0x554cf1
  554c4a: mov    al,BYTE PTR [esp+0x40]
  554c4e: mov    edi,0x6b3f70 // 0.0
  554c53: mov    BYTE PTR [esp+0x10],al
  554c57: or     ecx,0xffffffff // None
  554c5a: xor    eax,eax
  554c5c: push   0x1
  554c5e: repnz scas al,BYTE PTR es:[edi]
  554c60: not    ecx
  554c62: dec    ecx
  554c63: mov    DWORD PTR [esp+0x18],ebx
  554c67: mov    ebp,ecx
  554c69: lea    ecx,[esp+0x14]
  554c6d: push   ebp
  554c6e: mov    DWORD PTR [esp+0x20],ebx
  554c72: mov    DWORD PTR [esp+0x24],ebx
  554c76: call   0x401940
  554c7b: test   al,al
  554c7d: je     0x554ca2
  554c7f: mov    edi,DWORD PTR [esp+0x14]
  554c83: mov    ecx,ebp
  554c85: mov    edx,ecx
  554c87: mov    esi,0x6b3f70 // 0.0
  554c8c: shr    ecx,0x2
  554c8f: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  554c91: mov    ecx,edx
  554c93: push   ebp
  554c94: and    ecx,0x3
  554c97: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  554c99: lea    ecx,[esp+0x14]
  554c9d: call   0x404190
  554ca2: lea    eax,[esp+0x10]
  554ca6: mov    DWORD PTR [esp+0x38],ebx
  554caa: push   eax
  554cab: push   0x1a1
  554cb0: push   0x694bcc // D:\Work\RCHorror\AdamSource\AdamActor.h
  554cb5: push   0x699780 // a_Actor != 0
  554cba: call   0x5a07f0
  554cbf: call   eax
  554cc1: mov    eax,DWORD PTR [esp+0x24]
  554cc5: add    esp,0x10
  554cc8: cmp    eax,ebx
  554cca: mov    DWORD PTR [esp+0x38],0xffffffff // None
  554cd1: 
  554cd2: je     0x554cf1
  554cd4: lea    ecx,[eax-0x1]
  554cd7: mov    al,BYTE PTR [eax-0x1]
  554cda: cmp    al,bl
  554cdc: je     0x554ce8
  554cde: cmp    al,0xff
  554ce0: je     0x554ce8
  554ce2: dec    al
  554ce4: mov    BYTE PTR [ecx],al
  554ce6: jmp    0x554cf1
  554ce8: push   ecx
  554ce9: call   0x5fe5f0
  554cee: add    esp,0x4
  554cf1: mov    ecx,DWORD PTR [esp+0x40]
  554cf5: call   0x5525c0
  554cfa: mov    esi,eax
  554cfc: cmp    esi,ebx
  554cfe: mov    DWORD PTR [esp+0x40],esi
  554d02: jne    0x554dad
  554d08: mov    cl,BYTE PTR [esp+0x40]
  554d0c: mov    edi,0x6b3f70 // 0.0
  554d11: mov    BYTE PTR [esp+0x20],cl
  554d15: or     ecx,0xffffffff // None
  554d18: xor    eax,eax
  554d1a: push   0x1
  554d1c: repnz scas al,BYTE PTR es:[edi]
  554d1e: not    ecx
  554d20: dec    ecx
  554d21: mov    DWORD PTR [esp+0x28],ebx
  554d25: mov    ebp,ecx
  554d27: lea    ecx,[esp+0x24]
  554d2b: push   ebp
  554d2c: mov    DWORD PTR [esp+0x30],ebx
  554d30: mov    DWORD PTR [esp+0x34],ebx
  554d34: call   0x401940
  554d39: test   al,al
  554d3b: je     0x554d64
  554d3d: mov    edi,DWORD PTR [esp+0x24]
  554d41: mov    ecx,ebp
  554d43: mov    edx,ecx
  554d45: mov    esi,0x6b3f70 // 0.0
  554d4a: shr    ecx,0x2
  554d4d: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  554d4f: mov    ecx,edx
  554d51: push   ebp
  554d52: and    ecx,0x3
  554d55: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  554d57: lea    ecx,[esp+0x24]
  554d5b: call   0x404190
  554d60: mov    esi,DWORD PTR [esp+0x40]
  554d64: lea    eax,[esp+0x20]
  554d68: mov    DWORD PTR [esp+0x38],0x1
  554d6f: 
  554d70: push   eax
  554d71: push   0x1a3
  554d76: push   0x694bcc // D:\Work\RCHorror\AdamSource\AdamActor.h
  554d7b: push   0x699770 // userData != 0
  554d80: call   0x5a07f0
  554d85: call   eax
  554d87: mov    ecx,DWORD PTR [esp+0x34]
  554d8b: add    esp,0x10
  554d8e: cmp    ecx,ebx
  554d90: je     0x554dad
  554d92: mov    al,BYTE PTR [ecx-0x1]
  554d95: dec    ecx
  554d96: cmp    al,bl
  554d98: je     0x554da4
  554d9a: cmp    al,0xff
  554d9c: je     0x554da4
  554d9e: dec    al
  554da0: mov    BYTE PTR [ecx],al
  554da2: jmp    0x554dad
  554da4: push   ecx
  554da5: call   0x5fe5f0
  554daa: add    esp,0x4
  554dad: mov    ecx,DWORD PTR [esp+0x30]
  554db1: mov    eax,esi
  554db3: pop    edi
  554db4: pop    esi
  554db5: pop    ebp
  554db6: pop    ebx
  554db7: mov    DWORD PTR fs:0x0,ecx
  554dbe: add    esp,0x2c
  554dc1: ret
  554dd0: mov    eax,fs:0x0
  554dd6: push   0xffffffff // None
  554dd8: push   0x63e500
  554ddd: push   eax
  554dde: mov    eax,DWORD PTR [esp+0x18]
  554de2: mov    DWORD PTR fs:0x0,esp
  554de9: sub    esp,0x44
  554dec: push   ebx
  554ded: push   ebp
  554dee: or     ebp,0xffffffff // None
  554df1: push   esi
  554df2: test   eax,eax
  554df4: push   edi
  554df5: jne    0x554e86
  554dfb: mov    al,BYTE PTR [esp+0x6c]
  554dff: push   0x0
  554e01: lea    ecx,[esp+0x18]
  554e05: mov    BYTE PTR [esp+0x18],al
  554e09: call   0x4040a0
  554e0e: mov    edi,0x6b3f70 // 0.0
  554e13: mov    ecx,ebp
  554e15: xor    eax,eax
  554e17: push   0x1
  554e19: repnz scas al,BYTE PTR es:[edi]
  554e1b: not    ecx
  554e1d: dec    ecx
  554e1e: mov    ebx,ecx
