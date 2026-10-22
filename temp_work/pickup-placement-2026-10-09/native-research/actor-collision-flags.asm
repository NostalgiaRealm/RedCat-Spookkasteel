  49b8d0: mov    eax,fs:0x0
  49b8d6: push   0xffffffff // None
  49b8d8: push   0x62c8d8
  49b8dd: push   eax
  49b8de: mov    DWORD PTR fs:0x0,esp
  49b8e5: sub    esp,0x30
  49b8e8: push   ebx
  49b8e9: mov    ebx,ecx
  49b8eb: push   esi
  49b8ec: push   edi
  49b8ed: mov    eax,DWORD PTR [ebx+0x18]
  49b8f0: xor    edi,edi
  49b8f2: cmp    eax,edi
  49b8f4: je     0x49baf0
  49b8fa: mov    al,BYTE PTR [ebx+0x208]
  49b900: mov    DWORD PTR [esp+0x10],edi
  49b904: test   al,al
  49b906: je     0x49b910
  49b908: mov    DWORD PTR [esp+0x10],0x1
  49b90f: 
  49b910: mov    al,BYTE PTR [ebx+0x20a]
  49b916: test   al,al
  49b918: je     0x49b924
  49b91a: mov    eax,DWORD PTR [esp+0x10]
  49b91e: or     al,0x4
  49b920: mov    DWORD PTR [esp+0x10],eax
  49b924: mov    al,BYTE PTR [ebx+0x20b]
  49b92a: test   al,al
  49b92c: je     0x49b938
  49b92e: mov    eax,DWORD PTR [esp+0x10]
  49b932: or     al,0x8
  49b934: mov    DWORD PTR [esp+0x10],eax
  49b938: mov    al,BYTE PTR [ebx+0x209]
  49b93e: test   al,al
  49b940: je     0x49b94c
  49b942: mov    eax,DWORD PTR [esp+0x10]
  49b946: or     al,0x2
  49b948: mov    DWORD PTR [esp+0x10],eax
  49b94c: mov    al,BYTE PTR [ebx+0x20c]
  49b952: test   al,al
  49b954: je     0x49b960
  49b956: mov    eax,DWORD PTR [esp+0x10]
  49b95a: or     al,0x10
  49b95c: mov    DWORD PTR [esp+0x10],eax
  49b960: lea    eax,[esp+0x18]
  49b964: push   ebp
  49b965: push   eax
  49b966: mov    ecx,ebx
  49b968: call   0x4042e0
  49b96d: mov    esi,eax
  49b96f: mov    DWORD PTR [esp+0x18],esi
  49b973: mov    eax,DWORD PTR [esi]
  49b975: mov    DWORD PTR [esp+0x48],edi
  49b979: cmp    eax,edi
  49b97b: jne    0x49ba0e
  49b981: mov    cl,BYTE PTR [esp+0x13]
  49b985: push   edi
  49b986: mov    BYTE PTR [esp+0x34],cl
  49b98a: lea    ecx,[esp+0x34]
  49b98e: call   0x4040a0
  49b993: mov    edi,0x6b3f70 // 0.0
  49b998: or     ecx,0xffffffff // None
  49b99b: xor    eax,eax
  49b99d: push   0x1
  49b99f: repnz scas al,BYTE PTR es:[edi]
  49b9a1: not    ecx
  49b9a3: dec    ecx
  49b9a4: mov    ebp,ecx
  49b9a6: lea    ecx,[esp+0x34]
  49b9aa: push   ebp
  49b9ab: call   0x401940
  49b9b0: test   al,al
  49b9b2: je     0x49b9db
  49b9b4: mov    edi,DWORD PTR [esp+0x34]
  49b9b8: mov    ecx,ebp
  49b9ba: mov    edx,ecx
  49b9bc: mov    esi,0x6b3f70 // 0.0
  49b9c1: shr    ecx,0x2
  49b9c4: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49b9c6: mov    ecx,edx
  49b9c8: push   ebp
  49b9c9: and    ecx,0x3
  49b9cc: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49b9ce: lea    ecx,[esp+0x34]
  49b9d2: call   0x404190
  49b9d7: mov    esi,DWORD PTR [esp+0x18]
  49b9db: lea    eax,[esp+0x30]
  49b9df: mov    BYTE PTR [esp+0x48],0x1
  49b9e4: push   eax
  49b9e5: push   0xb6
  49b9ea: push   0x68d638 // ./AdamSource\DaviRC.h
  49b9ef: push   0x68d62c // m_Pointer
  49b9f4: call   0x5a07f0
  49b9f9: call   eax
  49b9fb: add    esp,0x10
  49b9fe: lea    ecx,[esp+0x30]
  49ba02: mov    BYTE PTR [esp+0x48],0x0
  49ba07: push   0x1
  49ba09: call   0x4040a0
  49ba0e: mov    esi,DWORD PTR [esi]
  49ba10: mov    DWORD PTR [esp+0x18],esi
  49ba14: mov    eax,DWORD PTR [esi+0x5c]
  49ba17: test   eax,eax
  49ba19: jne    0x49baaf
  49ba1f: mov    cl,BYTE PTR [esp+0x13]
  49ba23: push   0x0
  49ba25: mov    BYTE PTR [esp+0x24],cl
  49ba29: lea    ecx,[esp+0x24]
  49ba2d: call   0x4040a0
  49ba32: mov    edi,0x6b3f70 // 0.0
  49ba37: or     ecx,0xffffffff // None
  49ba3a: xor    eax,eax
  49ba3c: push   0x1
  49ba3e: repnz scas al,BYTE PTR es:[edi]
  49ba40: not    ecx
  49ba42: dec    ecx
  49ba43: mov    ebp,ecx
  49ba45: lea    ecx,[esp+0x24]
  49ba49: push   ebp
  49ba4a: call   0x401940
  49ba4f: test   al,al
