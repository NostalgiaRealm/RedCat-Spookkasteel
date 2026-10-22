  441983: lea    ebx,[ebp+0x354]
  441989: mov    ecx,ebp
  44198b: mov    DWORD PTR [ebp+0x0],0x64c908 // 6.249208210727525e-39
  441992: mov    BYTE PTR [ebp+0x208],0x1
  441999: mov    DWORD PTR [ebx],0x0
  44199f: call   0x49b8d0
  4419a4: push   0xb10
  4419a9: call   0x60a0b5
  4419ae: mov    esi,eax
  4419b0: add    esp,0x4
  4419b3: mov    DWORD PTR [esp+0x88],esi
  4419ba: xor    edi,edi
  4419bc: mov    BYTE PTR [esp+0x80],0x9
  4419c3: 
  4419c4: cmp    esi,edi
  4419c6: je     0x441a3e
  4419c8: mov    DWORD PTR [esp+0x3c],edi
  4419cc: mov    DWORD PTR [esp+0x40],edi
  4419d0: mov    DWORD PTR [esp+0x44],edi
  4419d4: mov    edi,0x690cd4 // PotionPickUpEffect
  4419d9: or     ecx,0xffffffff // None
  4419dc: xor    eax,eax
  4419de: repnz scas al,BYTE PTR es:[edi]
  4419e0: mov    dl,BYTE PTR [esp+0x88]
  4419e7: not    ecx
  4419e9: dec    ecx
  4419ea: mov    BYTE PTR [esp+0x38],dl
  4419ee: push   ecx
  4419ef: push   0x690cd4 // PotionPickUpEffect
  4419f4: lea    ecx,[esp+0x40]
  4419f8: call   0x4040f0
  4419fd: mov    DWORD PTR [esp+0x10],0x1
  441a04: 
  441a05: lea    eax,[esp+0x38]
  441a09: lea    ecx,[esp+0x58]
  441a0d: push   eax
  441a0e: push   ecx
  441a0f: mov    BYTE PTR [esp+0x88],0xa
  441a16: 
  441a17: call   0x5033a0
  441a1c: add    esp,0x8
  441a1f: mov    DWORD PTR [esp+0x10],0x3
  441a26: 
  441a27: push   eax
  441a28: mov    ecx,esi
  441a2a: mov    DWORD PTR [esp+0x84],0xb
  441a31: 
  441a35: call   0x4689a0
  441a3a: xor    edi,edi
  441a3c: jmp    0x441a40
  441a3e: xor    eax,eax
  441a40: mov    DWORD PTR [ebx],eax
  441a42: mov    al,BYTE PTR [esp+0x10]
  441a46: test   al,0x2
  441a48: je     0x441a86
  441a4a: mov    edx,DWORD PTR [esp+0x10]
  441a4e: mov    eax,DWORD PTR [esp+0x5c]
  441a52: and    edx,0xfffffffd // None
  441a55: cmp    eax,edi
  441a57: mov    DWORD PTR [esp+0x10],edx
  441a5b: je     0x441a7a
  441a5d: lea    ecx,[eax-0x1]
  441a60: mov    al,BYTE PTR [eax-0x1]
  441a63: test   al,al
  441a65: je     0x441a71
  441a67: cmp    al,0xff
  441a69: je     0x441a71
  441a6b: dec    al
  441a6d: mov    BYTE PTR [ecx],al
  441a6f: jmp    0x441a7a
  441a71: push   ecx
  441a72: call   0x5fe5f0
  441a77: add    esp,0x4
  441a7a: mov    DWORD PTR [esp+0x5c],edi
  441a7e: mov    DWORD PTR [esp+0x60],edi
  441a82: mov    DWORD PTR [esp+0x64],edi
  441a86: mov    al,BYTE PTR [esp+0x10]
  441a8a: mov    DWORD PTR [esp+0x80],0x5
  441a91: 
  441a95: test   al,0x1
  441a97: je     0x441abe
  441a99: mov    eax,DWORD PTR [esp+0x3c]
  441a9d: cmp    eax,edi
  441a9f: je     0x441abe
  441aa1: lea    ecx,[eax-0x1]
  441aa4: mov    al,BYTE PTR [eax-0x1]
  441aa7: test   al,al
  441aa9: je     0x441ab5
  441aab: cmp    al,0xff
  441aad: je     0x441ab5
  441aaf: dec    al
  441ab1: mov    BYTE PTR [ecx],al
  441ab3: jmp    0x441abe
  441ab5: push   ecx
  441ab6: call   0x5fe5f0
  441abb: add    esp,0x4
  441abe: mov    eax,DWORD PTR [ebx]
  441ac0: cmp    eax,edi
  441ac2: je     0x441acd
  441ac4: push   ebx
  441ac5: push   eax
  441ac6: mov    ecx,ebp
  441ac8: call   0x509a90
  441acd: mov    ecx,DWORD PTR [esp+0x78]
  441ad1: pop    edi
  441ad2: mov    eax,ebp
  441ad4: pop    esi
  441ad5: pop    ebp
  441ad6: pop    ebx
  441ad7: mov    DWORD PTR fs:0x0,ecx
  441ade: add    esp,0x74
  441ae1: ret    0x4
  441af0: push   0xffffffff // None
  441af2: push   0x624de3
  441af7: mov    eax,fs:0x0
  441afd: push   eax
  441afe: mov    DWORD PTR fs:0x0,esp
  441b05: sub    esp,0x24
  441b08: push   ebx
  441b09: push   ebp
  441b0a: push   esi
  441b0b: push   edi
  441b0c: push   0x358
  441b11: call   0x60a0b5
  441b16: add    esp,0x4
  441b19: mov    DWORD PTR [esp+0x10],eax
  441b1d: mov    ebp,DWORD PTR [esp+0x44]
  441b21: xor    ebx,ebx
  441b23: cmp    eax,ebx
  441b25: mov    DWORD PTR [esp+0x3c],ebx
  441b29: je     0x441b3a
  441b2b: mov    ecx,DWORD PTR [ebp+0x18]
  441b2e: push   ecx
  441b2f: mov    ecx,eax
  441b31: call   0x4417d0
  441b36: mov    esi,eax
  441b38: jmp    0x441b3c
  441b3a: xor    esi,esi
  441b3c: or     ecx,0xffffffff // None
  441b3f: cmp    esi,ebx
  441b41: mov    DWORD PTR [esp+0x3c],ecx
  441b45: jne    0x441bc6
  441b47: mov    edi,0x6b3f70 // 0.0
  441b4c: xor    eax,eax
  441b4e: repnz scas al,BYTE PTR es:[edi]
  441b50: mov    dl,BYTE PTR [esp+0x44]
  441b54: mov    DWORD PTR [esp+0x18],ebx
  441b58: not    ecx
  441b5a: dec    ecx
  441b5b: mov    BYTE PTR [esp+0x14],dl
  441b5f: push   ecx
  441b60: push   0x6b3f70 // 0.0
  441b65: lea    ecx,[esp+0x1c]
  441b69: mov    DWORD PTR [esp+0x24],ebx
  441b6d: mov    DWORD PTR [esp+0x28],ebx
  441b71: call   0x4040f0
  441b76: lea    eax,[esp+0x14]
  441b7a: mov    DWORD PTR [esp+0x3c],0x1
  441b81: 
  441b82: push   eax
  441b83: push   0x2d
  441b85: push   0x690cf4 // D:\Work\RCHorror\RCSource\RcItemPotion.cpp
  441b8a: push   0x6909d0 // item != 0
  441b8f: call   0x5a07f0
  441b94: call   eax
  441b96: mov    eax,DWORD PTR [esp+0x28]
  441b9a: add    esp,0x10
  441b9d: cmp    eax,ebx
  441b9f: mov    DWORD PTR [esp+0x3c],0xffffffff // None
  441ba6: 
  441ba7: je     0x441bc6
  441ba9: lea    ecx,[eax-0x1]
  441bac: mov    al,BYTE PTR [eax-0x1]
  441baf: test   al,al
  441bb1: je     0x441bbd
  441bb3: cmp    al,0xff
  441bb5: je     0x441bbd
  441bb7: dec    al
  441bb9: mov    BYTE PTR [ecx],al
  441bbb: jmp    0x441bc6
  441bbd: push   ecx
  441bbe: call   0x5fe5f0
  441bc3: add    esp,0x4
  441bc6: mov    edx,DWORD PTR [esi]
  441bc8: lea    eax,[ebp+0x8]
  441bcb: lea    ecx,[ebp+0x4]
  441bce: push   eax
  441bcf: push   ecx
