  49b531: push   ecx
  49b532: call   0x5fe5f0
  49b537: add    esp,0x4
  49b53a: mov    ecx,DWORD PTR [ebp+0x1c]
  49b53d: lea    edi,[esi+0x134]
  49b543: mov    DWORD PTR [esi+0x150],ecx
  49b549: mov    edx,DWORD PTR [ebp+0x1c]
  49b54c: mov    DWORD PTR [esi+0x154],edx
  49b552: mov    eax,DWORD PTR [ebp+0x1c]
  49b555: mov    DWORD PTR [esi+0x158],eax
  49b55b: mov    ecx,0x6
  49b560: xor    eax,eax
  49b562: rep stos DWORD PTR es:[edi],eax
  49b564: mov    ecx,0x6
  49b569: lea    edi,[esi+0x11c]
  49b56f: rep stos DWORD PTR es:[edi],eax
  49b571: lea    eax,[esi+0x230]
  49b577: xor    ecx,ecx
  49b579: mov    DWORD PTR [eax],ecx
  49b57b: mov    DWORD PTR [eax+0x4],ecx
  49b57e: mov    DWORD PTR [eax+0x8],ecx
  49b581: lea    ecx,[esi+0x168]
  49b587: call   0x5b30c0
  49b58c: lea    ecx,[esi+0x244]
  49b592: call   0x5b30c0
  49b597: lea    ecx,[esi+0x288]
  49b59d: call   0x5b3070
  49b5a2: lea    eax,[esi+0x274]
  49b5a8: xor    edx,edx
  49b5aa: mov    DWORD PTR [eax],edx
  49b5ac: mov    DWORD PTR [eax+0x4],edx
  49b5af: mov    DWORD PTR [eax+0x8],edx
  49b5b2: mov    eax,DWORD PTR [esi+0x108]
  49b5b8: cmp    eax,ebx
  49b5ba: jne    0x49b61f
  49b5bc: mov    cl,BYTE PTR [esp+0x48]
  49b5c0: push   ebx
  49b5c1: mov    BYTE PTR [esp+0x1c],cl
  49b5c5: lea    ecx,[esp+0x1c]
  49b5c9: call   0x4040a0
  49b5ce: mov    edi,0x6b3f70 // 0.0
  49b5d3: or     ecx,0xffffffff // None
  49b5d6: xor    eax,eax
  49b5d8: repnz scas al,BYTE PTR es:[edi]
  49b5da: not    ecx
  49b5dc: dec    ecx
  49b5dd: push   ecx
  49b5de: push   0x6b3f70 // 0.0
  49b5e3: lea    ecx,[esp+0x20]
  49b5e7: call   0x4040f0
  49b5ec: lea    edx,[esp+0x18]
  49b5f0: mov    BYTE PTR [esp+0x40],0x7
  49b5f5: push   edx
  49b5f6: push   0x141
  49b5fb: push   0x694bcc // D:\Work\RCHorror\AdamSource\AdamActor.h
  49b600: push   0x68f8a0 // m_Settings != 0
  49b605: call   0x5a07f0
  49b60a: call   eax
  49b60c: add    esp,0x10
  49b60f: lea    ecx,[esp+0x18]
  49b613: mov    BYTE PTR [esp+0x40],0x3
  49b618: push   0x1
  49b61a: call   0x4040a0
  49b61f: mov    eax,DWORD PTR [esi+0x108]
  49b625: mov    ecx,esi
  49b627: add    eax,0xf4
  49b62c: push   eax
  49b62d: call   0x49c5f0
  49b632: fld    DWORD PTR [ebp+0x68]
  49b635: fmul   DWORD PTR ds:0x64d658 // 0.01745329238474369
  49b63b: push   ecx
  49b63c: mov    ecx,esi
  49b63e: fstp   DWORD PTR [esp]
  49b641: call   0x49ccf0
  49b646: fld    DWORD PTR [ebp+0x6c]
  49b649: fmul   DWORD PTR ds:0x64d658 // 0.01745329238474369
  49b64f: push   ecx
  49b650: mov    ecx,esi
  49b652: fstp   DWORD PTR [esp]
  49b655: call   0x49cd90
  49b65a: fld    DWORD PTR [ebp+0x70]
  49b65d: fmul   DWORD PTR ds:0x64d658 // 0.01745329238474369
  49b663: push   ecx
  49b664: mov    ecx,esi
  49b666: fstp   DWORD PTR [esp]
  49b669: call   0x49ce30
  49b66e: fld    DWORD PTR [ebp+0x74]
  49b671: fstp   DWORD PTR [esp+0x18]
  49b675: fld    DWORD PTR [ebp+0x78]
  49b678: fstp   DWORD PTR [esp+0x1c]
  49b67c: fld    DWORD PTR [ebp+0x7c]
  49b67f: mov    ecx,DWORD PTR [esp+0x18]
  49b683: mov    edx,DWORD PTR [esp+0x1c]
  49b687: fstp   DWORD PTR [esp+0x20]
  49b68b: fld    DWORD PTR [esp+0x18]
  49b68f: fcomp  DWORD PTR ds:0x64a450 // 0.0
  49b695: mov    eax,DWORD PTR [esp+0x20]
  49b699: mov    DWORD PTR [esi+0x230],ecx
  49b69f: mov    DWORD PTR [esi+0x234],edx
