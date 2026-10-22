  49bc53: push   ecx
  49bc54: lea    ecx,[esp+0x24]
  49bc58: call   0x5b2fe0
  49bc5d: mov    eax,DWORD PTR [esp+0x54]
  49bc61: mov    ecx,0x6
  49bc66: lea    esi,[esp+0x38]
  49bc6a: mov    edi,eax
  49bc6c: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49bc6e: pop    edi
  49bc6f: pop    esi
  49bc70: add    esp,0x48
  49bc73: ret    0x4
  49bc80: sub    esp,0x18
  49bc83: lea    eax,[esp+0x0]
  49bc87: push   esi
  49bc88: mov    esi,ecx
  49bc8a: push   edi
  49bc8b: push   eax
  49bc8c: lea    edx,[esi+0x128]
  49bc92: lea    ecx,[esi+0x11c]
  49bc98: call   0x5b3000
  49bc9d: mov    edx,DWORD PTR [esi]
  49bc9f: lea    ecx,[esp+0x8]
  49bca3: push   ecx
  49bca4: lea    eax,[esp+0x18]
  49bca8: push   0x3f000000
  49bcad: push   eax
  49bcae: mov    ecx,esi
  49bcb0: lea    edi,[esp+0x14]
  49bcb4: call   DWORD PTR [edx+0x48]
  49bcb7: mov    ecx,eax
  49bcb9: mov    edx,edi
  49bcbb: call   0x5b3020
  49bcc0: mov    eax,DWORD PTR [esp+0x24]
  49bcc4: mov    edx,DWORD PTR [esp+0x8]
  49bcc8: mov    ecx,eax
  49bcca: pop    edi
  49bccb: pop    esi
  49bccc: mov    DWORD PTR [ecx],edx
  49bcce: mov    edx,DWORD PTR [esp+0x4]
  49bcd2: mov    DWORD PTR [ecx+0x4],edx
  49bcd5: mov    edx,DWORD PTR [esp+0x8]
  49bcd9: mov    DWORD PTR [ecx+0x8],edx
  49bcdc: add    esp,0x18
  49bcdf: ret    0x4
  49bcf0: mov    eax,fs:0x0
  49bcf6: push   0xffffffff // None
  49bcf8: push   0x62c92b
  49bcfd: push   eax
  49bcfe: mov    eax,ds:0x6b915c // None
  49bd03: mov    DWORD PTR fs:0x0,esp
  49bd0a: sub    esp,0x80
  49bd10: test   eax,eax
  49bd12: push   ebx
  49bd13: push   ebp
  49bd14: push   esi
  49bd15: push   edi
  49bd16: mov    esi,ecx
  49bd18: jne    0x49bd1f
  49bd1a: call   0x4bc480
  49bd1f: lea    ecx,[eax+0x55c]
  49bd25: call   0x4337e0
  49bd2a: test   eax,eax
  49bd2c: je     0x49bf60
  49bd32: mov    al,BYTE PTR [esi+0x118]
  49bd38: test   al,al
  49bd3a: je     0x49bf60
  49bd40: mov    eax,DWORD PTR [esi+0x218]
  49bd46: test   eax,eax
  49bd48: je     0x49bf60
  49bd4e: mov    eax,ds:0x6c8de0 // None
  49bd53: test   eax,eax
  49bd55: jne    0x49bd5c
  49bd57: call   0x55b280
  49bd5c: lea    ecx,[esp+0x1c]
  49bd60: push   ecx
  49bd61: mov    ecx,eax
  49bd63: call   0x409f20
  49bd68: mov    ebp,eax
  49bd6a: mov    eax,DWORD PTR [ebp+0x0]
  49bd6d: mov    DWORD PTR [esp+0x98],0x0
  49bd74: 
  49bd78: test   eax,eax
  49bd7a: jne    0x49bde6
  49bd7c: mov    dl,BYTE PTR [esp+0x13]
  49bd80: push   0x0
  49bd82: lea    ecx,[esp+0x34]
  49bd86: mov    BYTE PTR [esp+0x34],dl
  49bd8a: call   0x4040a0
  49bd8f: mov    edi,0x6b3f70 // 0.0
  49bd94: or     ecx,0xffffffff // None
  49bd97: xor    eax,eax
  49bd99: repnz scas al,BYTE PTR es:[edi]
  49bd9b: not    ecx
  49bd9d: dec    ecx
  49bd9e: push   ecx
  49bd9f: push   0x6b3f70 // 0.0
