  5545f0: push   ebx
  5545f1: mov    ebx,ecx
  5545f3: push   esi
  5545f4: mov    esi,DWORD PTR [esp+0x10]
  5545f8: push   edi
  5545f9: lea    edi,[ebx+0x4]
  5545fc: mov    ecx,0x6
  554601: mov    BYTE PTR [ebx],0x1
  554604: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  554606: mov    ecx,DWORD PTR [esp+0x10]
  55460a: test   ecx,ecx
  55460c: mov    DWORD PTR [ebx+0x1c],ecx
  55460f: je     0x554621
  554611: mov    eax,DWORD PTR [ecx+0x14]
  554614: test   eax,eax
  554616: mov    DWORD PTR [ecx+0x14],eax
  554619: jne    0x554621
  55461b: push   eax
  55461c: call   0x5abfc0
  554621: pop    edi
  554622: mov    eax,ebx
  554624: pop    esi
  554625: pop    ebx
  554626: ret    0x8
  554630: push   esi
  554631: mov    esi,ecx
  554633: mov    ecx,DWORD PTR [esi+0x1c]
  554636: test   ecx,ecx
  554638: je     0x554651
  55463a: mov    eax,DWORD PTR [ecx+0x14]
  55463d: dec    eax
  55463e: mov    DWORD PTR [ecx+0x14],eax
  554641: jne    0x55464a
  554643: push   0x0
  554645: call   0x5abfc0
  55464a: mov    DWORD PTR [esi+0x1c],0x0
  554651: pop    esi
  554652: ret
  554660: push   0xffffffff // None
  554662: push   0x63e478
  554667: mov    eax,fs:0x0
  55466d: push   eax
  55466e: mov    DWORD PTR fs:0x0,esp
  554675: sub    esp,0x38
  554678: push   ebx
  554679: push   ebp
  55467a: push   esi
  55467b: mov    esi,ecx
  55467d: xor    ebx,ebx
  55467f: push   edi
  554680: mov    eax,DWORD PTR [esi+0x1c]
  554683: mov    DWORD PTR [esp+0x14],esi
  554687: cmp    eax,ebx
  554689: jne    0x5547d3
  55468f: mov    al,BYTE PTR [esp+0x13]
  554693: mov    edi,0x6b3f70 // 0.0
  554698: mov    BYTE PTR [esp+0x18],al
  55469c: or     ecx,0xffffffff // None
  55469f: xor    eax,eax
  5546a1: push   0x1
  5546a3: repnz scas al,BYTE PTR es:[edi]
  5546a5: not    ecx
  5546a7: dec    ecx
  5546a8: mov    DWORD PTR [esp+0x20],ebx
  5546ac: mov    ebp,ecx
  5546ae: lea    ecx,[esp+0x1c]
  5546b2: push   ebp
  5546b3: mov    DWORD PTR [esp+0x28],ebx
  5546b7: mov    DWORD PTR [esp+0x2c],ebx
  5546bb: call   0x401940
  5546c0: test   al,al
  5546c2: je     0x5546eb
  5546c4: mov    edi,DWORD PTR [esp+0x1c]
  5546c8: mov    ecx,ebp
  5546ca: mov    edx,ecx
  5546cc: mov    esi,0x6b3f70 // 0.0
  5546d1: shr    ecx,0x2
  5546d4: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5546d6: mov    ecx,edx
  5546d8: push   ebp
  5546d9: and    ecx,0x3
  5546dc: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5546de: lea    ecx,[esp+0x1c]
  5546e2: call   0x404190
  5546e7: mov    esi,DWORD PTR [esp+0x14]
  5546eb: lea    eax,[esp+0x18]
  5546ef: mov    DWORD PTR [esp+0x50],ebx
  5546f3: push   eax
  5546f4: push   0x4e
  5546f6: push   0x6a2124 // D:\Work\RCHorror\AdamSource\AdamBoundingBox.cpp
  5546fb: push   0x68d76c // m_SubLevel.IsNotNull()
  554700: call   0x5a07f0
  554705: call   eax
  554707: mov    eax,DWORD PTR [esp+0x2c]
  55470b: add    esp,0x10
  55470e: cmp    eax,ebx
  554710: mov    DWORD PTR [esp+0x50],0xffffffff // None
  554717: 
  554718: je     0x554737
  55471a: lea    ecx,[eax-0x1]
  55471d: mov    al,BYTE PTR [eax-0x1]
