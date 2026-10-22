  49c4e3: 
  49c4e4: push   ecx
  49c4e5: push   0x165
  49c4ea: push   0x694c70 // D:\Work\RCHorror\AdamSource\AdamActor.cpp
  49c4ef: push   0x68e768 // m_Actor != 0
  49c4f4: call   0x5a07f0
  49c4f9: call   eax
  49c4fb: add    esp,0x10
  49c4fe: lea    ecx,[esp+0x28]
  49c502: mov    DWORD PTR [esp+0x40],0xffffffff // None
  49c509: 
  49c50a: push   0x1
  49c50c: call   0x4040a0
  49c511: mov    ecx,DWORD PTR [esi+0x114]
  49c517: mov    edx,esi
  49c519: call   0x5b4a70
  49c51e: mov    ecx,DWORD PTR [esp+0x38]
  49c522: pop    edi
  49c523: pop    esi
  49c524: pop    ebp
  49c525: pop    ebx
  49c526: mov    DWORD PTR fs:0x0,ecx
  49c52d: add    esp,0x34
  49c530: ret
  49c540: sub    esp,0x18
  49c543: lea    eax,[esp+0x0]
  49c547: push   esi
  49c548: push   edi
  49c549: mov    edi,ecx
  49c54b: push   eax
  49c54c: call   0x49bc00
  49c551: add    edi,0x134
  49c557: mov    ecx,0x6
  49c55c: mov    esi,eax
  49c55e: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49c560: pop    edi
  49c561: pop    esi
  49c562: add    esp,0x18
  49c565: ret
  49c570: sub    esp,0x18
  49c573: lea    eax,[esp+0x0]
  49c577: push   esi
  49c578: push   edi
  49c579: mov    edi,ecx
  49c57b: push   eax
  49c57c: call   0x49bc00
  49c581: add    edi,0x11c
  49c587: mov    ecx,0x6
  49c58c: mov    esi,eax
  49c58e: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49c590: pop    edi
  49c591: pop    esi
  49c592: add    esp,0x18
  49c595: ret
  49c5a0: push   esi
  49c5a1: mov    esi,ecx
  49c5a3: push   edi
  49c5a4: mov    eax,DWORD PTR [esi]
  49c5a6: call   DWORD PTR [eax+0x64]
  49c5a9: mov    edx,DWORD PTR [esi]
  49c5ab: mov    ecx,esi
  49c5ad: call   DWORD PTR [edx+0x68]
  49c5b0: push   0x0
  49c5b2: mov    ecx,esi
  49c5b4: lea    edi,[esi+0x134]
  49c5ba: call   0x4247e0
  49c5bf: mov    ecx,eax
  49c5c1: mov    edx,edi
  49c5c3: call   0x5b4990
  49c5c8: push   0x0
  49c5ca: mov    ecx,esi
  49c5cc: lea    edi,[esi+0x11c]
  49c5d2: call   0x4247e0
  49c5d7: mov    ecx,eax
  49c5d9: mov    edx,edi
  49c5db: call   0x5b48b0
  49c5e0: pop    edi
  49c5e1: pop    esi
  49c5e2: ret
  49c5f0: push   0xffffffff // None
  49c5f2: push   0x62c9b8
  49c5f7: mov    eax,fs:0x0
  49c5fd: push   eax
  49c5fe: mov    DWORD PTR fs:0x0,esp
  49c605: sub    esp,0x1c
  49c608: push   ebx
  49c609: push   ebp
  49c60a: push   esi
  49c60b: push   edi
  49c60c: mov    esi,ecx
  49c60e: push   0x190
  49c613: push   0x694c70 // D:\Work\RCHorror\AdamSource\AdamActor.cpp
  49c618: lea    ecx,[esp+0x20]
  49c61c: mov    DWORD PTR [esp+0x18],esi
  49c620: call   0x5ae5f0
  49c625: mov    al,BYTE PTR [esi+0x10c]
  49c62b: xor    ebx,ebx
  49c62d: cmp    al,bl
  49c62f: mov    DWORD PTR [esp+0x34],ebx
  49c633: je     0x49c6c1
  49c639: mov    al,BYTE PTR [esp+0x3c]
  49c63d: push   ebx
  49c63e: lea    ecx,[esp+0x20]
  49c642: mov    BYTE PTR [esp+0x20],al
  49c646: call   0x4040a0
  49c64b: mov    edi,0x6b3f70 // 0.0
  49c650: or     ecx,0xffffffff // None
  49c653: xor    eax,eax
  49c655: push   0x1
  49c657: repnz scas al,BYTE PTR es:[edi]
  49c659: not    ecx
  49c65b: dec    ecx
  49c65c: mov    ebp,ecx
  49c65e: lea    ecx,[esp+0x20]
  49c662: push   ebp
  49c663: call   0x401940
  49c668: test   al,al
  49c66a: je     0x49c68f
  49c66c: mov    edi,DWORD PTR [esp+0x20]
  49c670: mov    ecx,ebp
  49c672: mov    edx,ecx
  49c674: mov    esi,0x6b3f70 // 0.0
  49c679: shr    ecx,0x2
  49c67c: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49c67e: mov    ecx,edx
  49c680: push   ebp
  49c681: and    ecx,0x3
  49c684: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49c686: lea    ecx,[esp+0x20]
  49c68a: call   0x404190
  49c68f: lea    eax,[esp+0x1c]
