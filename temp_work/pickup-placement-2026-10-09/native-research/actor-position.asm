  49bb10: mov    eax,DWORD PTR [esp+0xc]
  49bb14: mov    edx,DWORD PTR [esp+0x8]
  49bb18: push   esi
  49bb19: mov    esi,ecx
  49bb1b: mov    ecx,DWORD PTR [eax]
  49bb1d: mov    eax,DWORD PTR [edx]
  49bb1f: push   ecx
  49bb20: mov    ecx,DWORD PTR [esp+0xc]
  49bb24: push   eax
  49bb25: mov    edx,DWORD PTR [ecx]
  49bb27: lea    ecx,[esi+0x18c]
  49bb2d: push   edx
  49bb2e: call   0x5b2e20
  49bb33: push   0x1
  49bb35: mov    ecx,esi
  49bb37: call   0x49d5e0
  49bb3c: lea    eax,[esi+0x168]
  49bb42: mov    ecx,esi
  49bb44: push   eax
  49bb45: mov    BYTE PTR [esi+0x198],0x1
  49bb4c: call   0x4247e0
  49bb51: mov    ecx,eax
  49bb53: xor    edx,edx
  49bb55: call   0x5b50a0
  49bb5a: push   0x0
  49bb5c: mov    ecx,esi
  49bb5e: call   0x4337a0
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
