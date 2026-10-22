  49bb63: pop    esi
  49bb64: ret    0xc
  49bb70: push   esi
  49bb71: mov    esi,ecx
  49bb73: mov    ecx,DWORD PTR [esp+0x8]
  49bb77: push   0x1
  49bb79: lea    eax,[esi+0x18c]
  49bb7f: mov    edx,DWORD PTR [ecx]
  49bb81: mov    DWORD PTR [eax],edx
  49bb83: mov    edx,DWORD PTR [ecx+0x4]
  49bb86: mov    DWORD PTR [eax+0x4],edx
  49bb89: mov    ecx,DWORD PTR [ecx+0x8]
  49bb8c: mov    DWORD PTR [eax+0x8],ecx
  49bb8f: mov    ecx,esi
  49bb91: call   0x49d5e0
  49bb96: lea    edx,[esi+0x168]
  49bb9c: mov    ecx,esi
  49bb9e: push   edx
  49bb9f: mov    BYTE PTR [esi+0x198],0x1
  49bba6: call   0x4247e0
  49bbab: mov    ecx,eax
  49bbad: xor    edx,edx
  49bbaf: call   0x5b50a0
  49bbb4: push   0x0
  49bbb6: mov    ecx,esi
  49bbb8: call   0x4337a0
  49bbbd: pop    esi
  49bbbe: ret    0x4
  49bbd0: mov    eax,DWORD PTR [esp+0x4]
  49bbd4: add    ecx,0x18c
  49bbda: push   esi
  49bbdb: mov    edx,eax
  49bbdd: mov    esi,DWORD PTR [ecx]
  49bbdf: mov    DWORD PTR [edx],esi
  49bbe1: mov    esi,DWORD PTR [ecx+0x4]
  49bbe4: mov    DWORD PTR [edx+0x4],esi
  49bbe7: pop    esi
  49bbe8: mov    ecx,DWORD PTR [ecx+0x8]
  49bbeb: mov    DWORD PTR [edx+0x8],ecx
  49bbee: ret    0x4
  49bc00: sub    esp,0x48
  49bc03: push   esi
  49bc04: push   edi
  49bc05: mov    esi,ecx
  49bc07: lea    edi,[esp+0x20]
  49bc0b: call   0x4247e0
  49bc10: mov    ecx,eax
  49bc12: mov    edx,edi
  49bc14: call   0x5b4a80
  49bc19: mov    eax,DWORD PTR [esi]
  49bc1b: lea    ecx,[esp+0x14]
  49bc1f: push   ecx
  49bc20: mov    ecx,esi
  49bc22: call   DWORD PTR [eax+0x48]
  49bc25: mov    edx,DWORD PTR [eax]
  49bc27: mov    DWORD PTR [esp+0x8],edx
  49bc2b: mov    ecx,DWORD PTR [eax+0x4]
  49bc2e: mov    DWORD PTR [esp+0xc],ecx
  49bc32: lea    ecx,[esp+0x2c]
  49bc36: mov    edx,DWORD PTR [eax+0x8]
  49bc39: lea    eax,[esp+0x44]
  49bc3d: mov    DWORD PTR [esp+0x10],edx
  49bc41: push   eax
  49bc42: lea    edx,[esp+0xc]
  49bc46: call   0x5b2fe0
  49bc4b: lea    ecx,[esp+0x38]
  49bc4f: lea    edx,[esp+0x8]
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
