  4bc665: sub    esp,0x14
  4bc668: push   ebx
  4bc669: push   0xac
  4bc66e: push   0x6975f0 // D:\Work\RCHorror\AdamSource\AdamApplication.cpp
  4bc673: lea    ecx,[esp+0xc]
  4bc677: call   0x5ae5f0
  4bc67c: mov    ecx,DWORD PTR ds:0x6b915c // None
  4bc682: mov    eax,DWORD PTR [esp+0x28]
  4bc686: xor    ebx,ebx
  4bc688: cmp    eax,ecx
  4bc68a: mov    DWORD PTR [esp+0x20],ebx
  4bc68e: je     0x4bc751
  4bc694: mov    al,BYTE PTR [esp+0x28]
  4bc698: push   ebp
  4bc699: push   edi
  4bc69a: mov    BYTE PTR [esp+0x10],al
  4bc69e: mov    edi,0x6b3f70 // 0.0
  4bc6a3: or     ecx,0xffffffff // None
  4bc6a6: xor    eax,eax
  4bc6a8: push   0x1
  4bc6aa: repnz scas al,BYTE PTR es:[edi]
  4bc6ac: not    ecx
  4bc6ae: dec    ecx
  4bc6af: mov    DWORD PTR [esp+0x18],ebx
  4bc6b3: mov    ebp,ecx
  4bc6b5: lea    ecx,[esp+0x14]
  4bc6b9: push   ebp
  4bc6ba: mov    DWORD PTR [esp+0x20],ebx
  4bc6be: mov    DWORD PTR [esp+0x24],ebx
  4bc6c2: call   0x401940
  4bc6c7: test   al,al
  4bc6c9: je     0x4bc6f1
  4bc6cb: mov    edi,DWORD PTR [esp+0x14]
  4bc6cf: mov    ecx,ebp
  4bc6d1: mov    edx,ecx
  4bc6d3: push   esi
  4bc6d4: mov    esi,0x6b3f70 // 0.0
  4bc6d9: shr    ecx,0x2
  4bc6dc: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bc6de: mov    ecx,edx
  4bc6e0: and    ecx,0x3
  4bc6e3: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bc6e5: mov    eax,DWORD PTR [esp+0x18]
  4bc6e9: mov    DWORD PTR [esp+0x1c],ebp
  4bc6ed: pop    esi
  4bc6ee: mov    BYTE PTR [eax+ebp*1],bl
  4bc6f1: lea    ecx,[esp+0x10]
  4bc6f5: mov    BYTE PTR [esp+0x28],0x1
  4bc6fa: push   ecx
  4bc6fb: push   0xad
  4bc700: push   0x6975f0 // D:\Work\RCHorror\AdamSource\AdamApplication.cpp
  4bc705: push   0x6976c8 // &a_Application==m_Instance
  4bc70a: call   0x5a07f0
  4bc70f: call   eax
  4bc711: mov    eax,DWORD PTR [esp+0x24]
  4bc715: add    esp,0x10
  4bc718: cmp    eax,ebx
  4bc71a: mov    BYTE PTR [esp+0x28],bl
  4bc71e: pop    edi
  4bc71f: pop    ebp
  4bc720: je     0x4bc73f
  4bc722: lea    ecx,[eax-0x1]
  4bc725: mov    al,BYTE PTR [eax-0x1]
  4bc728: cmp    al,bl
  4bc72a: je     0x4bc736
  4bc72c: cmp    al,0xff
  4bc72e: je     0x4bc736
  4bc730: dec    al
  4bc732: mov    BYTE PTR [ecx],al
  4bc734: jmp    0x4bc73f
  4bc736: push   ecx
  4bc737: call   0x5fe5f0
  4bc73c: add    esp,0x4
  4bc73f: mov    ecx,DWORD PTR ds:0x6b915c // None
  4bc745: mov    DWORD PTR [esp+0xc],ebx
  4bc749: mov    DWORD PTR [esp+0x10],ebx
  4bc74d: mov    DWORD PTR [esp+0x14],ebx
  4bc751: cmp    ecx,ebx
  4bc753: je     0x4bc75b
  4bc755: mov    edx,DWORD PTR [ecx]
  4bc757: push   0x1
  4bc759: call   DWORD PTR [edx]
  4bc75b: lea    ecx,[esp+0x4]
  4bc75f: mov    DWORD PTR ds:0x6b915c,ebx // None
  4bc765: mov    DWORD PTR [esp+0x20],0xffffffff // None
  4bc76c: 
  4bc76d: call   0x5ae770
  4bc772: mov    ecx,DWORD PTR [esp+0x18]
  4bc776: pop    ebx
  4bc777: mov    DWORD PTR fs:0x0,ecx
  4bc77e: add    esp,0x20
  4bc781: ret
  4bc790: mov    eax,fs:0x0
  4bc796: push   0xffffffff // None
  4bc798: push   0x62f8b2
  4bc79d: push   eax
  4bc79e: mov    DWORD PTR fs:0x0,esp
  4bc7a5: sub    esp,0xb4
  4bc7ab: push   ebx
  4bc7ac: push   ebp
  4bc7ad: mov    ebp,ecx
  4bc7af: push   esi
  4bc7b0: push   edi
  4bc7b1: mov    eax,DWORD PTR [ebp+0x0]
  4bc7b4: call   DWORD PTR [eax+0x4]
  4bc7b7: test   eax,eax
  4bc7b9: mov    DWORD PTR [ebp+0x3a4],eax
  4bc7bf: jne    0x4bc830
  4bc7c1: mov    cl,BYTE PTR [esp+0x13]
  4bc7c5: push   eax
  4bc7c6: mov    BYTE PTR [esp+0x18],cl
  4bc7ca: lea    ecx,[esp+0x18]
  4bc7ce: call   0x4040a0
  4bc7d3: mov    edi,0x6b3f70 // 0.0
  4bc7d8: or     ecx,0xffffffff // None
  4bc7db: xor    eax,eax
  4bc7dd: repnz scas al,BYTE PTR es:[edi]
  4bc7df: not    ecx
  4bc7e1: dec    ecx
  4bc7e2: push   ecx
  4bc7e3: push   0x6b3f70 // 0.0
  4bc7e8: lea    ecx,[esp+0x1c]
  4bc7ec: call   0x4040f0
  4bc7f1: lea    edx,[esp+0x14]
  4bc7f5: mov    DWORD PTR [esp+0xcc],0x0
  4bc7fc: 
  4bc800: push   edx
  4bc801: push   0xb8
  4bc806: push   0x6975f0 // D:\Work\RCHorror\AdamSource\AdamApplication.cpp
  4bc80b: push   0x6976e4 // m_Game!=0
  4bc810: call   0x5a07f0
  4bc815: call   eax
  4bc817: add    esp,0x10
  4bc81a: lea    ecx,[esp+0x14]
  4bc81e: mov    DWORD PTR [esp+0xcc],0xffffffff // None
  4bc825: 
  4bc829: push   0x1
  4bc82b: call   0x4040a0
  4bc830: fld    DWORD PTR [ebp+0x40c]
  4bc836: fcomp  DWORD PTR ds:0x64a450 // 0.0
  4bc83c: fnstsw ax
  4bc83e: test   ah,0x40
  4bc841: je     0x4bc863
  4bc843: lea    eax,[esp+0x13]
  4bc847: lea    ecx,[ebp+0x3c0]
  4bc84d: push   eax
  4bc84e: push   ecx
  4bc84f: call   0x5ad390
  4bc854: fst    DWORD PTR [ebp+0x40c]
  4bc85a: fstp   DWORD PTR [esp+0x2c]
  4bc85e: add    esp,0x8
  4bc861: jmp    0x4bc86d
  4bc863: mov    edx,DWORD PTR [ebp+0x40c]
  4bc869: mov    DWORD PTR [esp+0x24],edx
  4bc86d: mov    eax,DWORD PTR [esp+0x24]
  4bc871: mov    ecx,0x6b9950 // None
  4bc876: push   eax
  4bc877: call   0x565ae0
  4bc87c: mov    edx,DWORD PTR [ebp+0x0]
  4bc87f: mov    ecx,ebp
  4bc881: call   DWORD PTR [edx+0x8]
  4bc884: test   eax,eax
  4bc886: mov    DWORD PTR [ebp+0x3a8],eax
  4bc88c: jne    0x4bc928
  4bc892: mov    al,BYTE PTR [esp+0x13]
  4bc896: push   0x0
  4bc898: lea    ecx,[esp+0x18]
  4bc89c: mov    BYTE PTR [esp+0x18],al
  4bc8a0: call   0x4040a0
  4bc8a5: mov    edi,0x6b3f70 // 0.0
  4bc8aa: or     ecx,0xffffffff // None
  4bc8ad: xor    eax,eax
  4bc8af: push   0x1
  4bc8b1: repnz scas al,BYTE PTR es:[edi]
  4bc8b3: not    ecx
  4bc8b5: dec    ecx
  4bc8b6: mov    ebx,ecx
  4bc8b8: lea    ecx,[esp+0x18]
  4bc8bc: push   ebx
  4bc8bd: call   0x401940
  4bc8c2: test   al,al
  4bc8c4: je     0x4bc8e9
  4bc8c6: mov    edi,DWORD PTR [esp+0x18]
  4bc8ca: mov    ecx,ebx
  4bc8cc: mov    edx,ecx
  4bc8ce: mov    esi,0x6b3f70 // 0.0
  4bc8d3: shr    ecx,0x2
  4bc8d6: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bc8d8: mov    ecx,edx
  4bc8da: push   ebx
  4bc8db: and    ecx,0x3
  4bc8de: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bc8e0: lea    ecx,[esp+0x18]
  4bc8e4: call   0x404190
  4bc8e9: lea    eax,[esp+0x14]
  4bc8ed: mov    DWORD PTR [esp+0xcc],0x1
  4bc8f4: 
  4bc8f8: push   eax
  4bc8f9: push   0xbe
  4bc8fe: push   0x6975f0 // D:\Work\RCHorror\AdamSource\AdamApplication.cpp
  4bc903: push   0x693a28 // m_Input != 0
  4bc908: call   0x5a07f0
  4bc90d: call   eax
  4bc90f: add    esp,0x10
  4bc912: lea    ecx,[esp+0x14]
  4bc916: mov    DWORD PTR [esp+0xcc],0xffffffff // None
  4bc91d: 
  4bc921: push   0x1
  4bc923: call   0x4040a0
  4bc928: mov    eax,DWORD PTR [ebp+0x3a8]
  4bc92e: test   eax,eax
  4bc930: jne    0x4bc9a2
  4bc932: mov    cl,BYTE PTR [esp+0x13]
  4bc936: push   0x0
  4bc938: mov    BYTE PTR [esp+0x18],cl
  4bc93c: lea    ecx,[esp+0x18]
  4bc940: call   0x4040a0
  4bc945: mov    edi,0x6b3f70 // 0.0
  4bc94a: or     ecx,0xffffffff // None
  4bc94d: xor    eax,eax
  4bc94f: repnz scas al,BYTE PTR es:[edi]
  4bc951: not    ecx
  4bc953: dec    ecx
  4bc954: push   ecx
  4bc955: push   0x6b3f70 // 0.0
  4bc95a: lea    ecx,[esp+0x1c]
  4bc95e: call   0x4040f0
  4bc963: lea    edx,[esp+0x14]
  4bc967: mov    DWORD PTR [esp+0xcc],0x2
  4bc96e: 
  4bc972: push   edx
  4bc973: push   0x136
  4bc978: push   0x68e58c // ./AdamSource\AdamApplication.h
  4bc97d: push   0x693a28 // m_Input != 0
  4bc982: call   0x5a07f0
  4bc987: call   eax
  4bc989: add    esp,0x10
  4bc98c: lea    ecx,[esp+0x14]
  4bc990: mov    DWORD PTR [esp+0xcc],0xffffffff // None
  4bc997: 
  4bc99b: push   0x1
  4bc99d: call   0x4040a0
  4bc9a2: mov    ecx,DWORD PTR [ebp+0x3a8]
  4bc9a8: call   0x53d320
  4bc9ad: lea    ecx,[ebp+0x88]
  4bc9b3: call   0x592cb0
  4bc9b8: push   0x4c4110
  4bc9bd: call   0x5afda0
  4bc9c2: add    esp,0x4
  4bc9c5: call   0x515b70
  4bc9ca: mov    ecx,eax
  4bc9cc: call   0x4337e0
  4bc9d1: test   eax,eax
  4bc9d3: je     0x4bc9e1
  4bc9d5: mov    BYTE PTR [ebp+0x39c],0x1
  4bc9dc: jmp    0x4bcb49
  4bc9e1: mov    al,BYTE PTR [esp+0x13]
  4bc9e5: push   0x0
  4bc9e7: lea    ecx,[esp+0x2c]
  4bc9eb: mov    BYTE PTR [esp+0x2c],al
  4bc9ef: call   0x4040a0
  4bc9f4: mov    edi,0x690810 // General
  4bc9f9: or     ecx,0xffffffff // None
  4bc9fc: xor    eax,eax
  4bc9fe: push   0x1
  4bca00: repnz scas al,BYTE PTR es:[edi]
  4bca02: not    ecx
  4bca04: dec    ecx
  4bca05: mov    ebx,ecx
  4bca07: lea    ecx,[esp+0x2c]
  4bca0b: push   ebx
  4bca0c: call   0x401940
  4bca11: test   al,al
  4bca13: je     0x4bca38
  4bca15: mov    edi,DWORD PTR [esp+0x2c]
  4bca19: mov    ecx,ebx
  4bca1b: mov    edx,ecx
  4bca1d: mov    esi,0x690810 // General
  4bca22: shr    ecx,0x2
  4bca25: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bca27: mov    ecx,edx
  4bca29: push   ebx
  4bca2a: and    ecx,0x3
  4bca2d: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bca2f: lea    ecx,[esp+0x2c]
  4bca33: call   0x404190
  4bca38: mov    al,BYTE PTR [esp+0x13]
  4bca3c: push   0x0
  4bca3e: lea    ecx,[esp+0x3c]
  4bca42: mov    DWORD PTR [esp+0xd0],0x3
  4bca49: 
  4bca4d: mov    BYTE PTR [esp+0x3c],al
  4bca51: call   0x4040a0
  4bca56: mov    edi,0x697634 // Console
  4bca5b: or     ecx,0xffffffff // None
  4bca5e: xor    eax,eax
  4bca60: repnz scas al,BYTE PTR es:[edi]
  4bca62: not    ecx
  4bca64: dec    ecx
  4bca65: push   ecx
  4bca66: push   0x697634 // Console
  4bca6b: lea    ecx,[esp+0x40]
  4bca6f: call   0x4040f0
  4bca74: lea    ecx,[esp+0x48]
  4bca78: mov    bl,0x4
  4bca7a: push   ecx
  4bca7b: mov    BYTE PTR [esp+0xd0],bl
  4bca82: call   0x43b0a0
  4bca87: add    esp,0x4
  4bca8a: push   0x0
  4bca8c: push   eax
  4bca8d: lea    edx,[esp+0x30]
  4bca91: push   0x0
  4bca93: lea    eax,[esp+0x44]
  4bca97: push   edx
  4bca98: push   eax
  4bca99: lea    ecx,[esp+0x6c]
  4bca9d: mov    BYTE PTR [esp+0xe0],0x5
  4bcaa4: 
  4bcaa5: call   0x5ac9d0
  4bcaaa: mov    esi,eax
  4bcaac: mov    eax,DWORD PTR [esi+0x64]
  4bcaaf: cmp    eax,0x80000000 // None
  4bcab4: jne    0x4bcad2
  4bcab6: mov    eax,DWORD PTR [esi+0x18]
  4bcab9: xor    edi,edi
  4bcabb: cmp    eax,edi
  4bcabd: jne    0x4bcac4
  4bcabf: mov    eax,0x64a3b4 // 0.0
  4bcac4: push   eax
  4bcac5: call   0x60af10
  4bcaca: add    esp,0x4
  4bcacd: mov    DWORD PTR [esi+0x64],eax
  4bcad0: jmp    0x4bcad4
  4bcad2: xor    edi,edi
  4bcad4: cmp    eax,edi
  4bcad6: setne  cl
  4bcad9: mov    BYTE PTR [ebp+0x39c],cl
  4bcadf: lea    ecx,[esp+0x58]
  4bcae3: call   0x5acca0
  4bcae8: push   0x1
  4bcaea: lea    ecx,[esp+0x4c]
  4bcaee: mov    BYTE PTR [esp+0xd0],bl
  4bcaf5: call   0x4040a0
  4bcafa: push   0x1
  4bcafc: lea    ecx,[esp+0x3c]
  4bcb00: mov    BYTE PTR [esp+0xd0],0x3
  4bcb07: 
  4bcb08: call   0x4040a0
  4bcb0d: mov    eax,DWORD PTR [esp+0x2c]
  4bcb11: mov    DWORD PTR [esp+0xcc],0xffffffff // None
  4bcb18: 
  4bcb1c: cmp    eax,edi
  4bcb1e: je     0x4bcb3d
  4bcb20: lea    ecx,[eax-0x1]
  4bcb23: mov    al,BYTE PTR [eax-0x1]
  4bcb26: test   al,al
  4bcb28: je     0x4bcb34
  4bcb2a: cmp    al,0xff
  4bcb2c: je     0x4bcb34
  4bcb2e: dec    al
  4bcb30: mov    BYTE PTR [ecx],al
  4bcb32: jmp    0x4bcb3d
  4bcb34: push   ecx
  4bcb35: call   0x5fe5f0
  4bcb3a: add    esp,0x4
  4bcb3d: mov    DWORD PTR [esp+0x2c],edi
  4bcb41: mov    DWORD PTR [esp+0x30],edi
  4bcb45: mov    DWORD PTR [esp+0x34],edi
  4bcb49: mov    edx,DWORD PTR [ebp+0x0]
  4bcb4c: mov    ecx,ebp
  4bcb4e: call   DWORD PTR [edx+0xc]
  4bcb51: mov    ecx,DWORD PTR [esp+0xc4]
  4bcb58: pop    edi
  4bcb59: pop    esi
  4bcb5a: pop    ebp
  4bcb5b: pop    ebx
  4bcb5c: mov    DWORD PTR fs:0x0,ecx
  4bcb63: add    esp,0xc0
  4bcb69: ret
  4bcb70: push   0xffffffff // None
  4bcb72: push   0x62fb2b
  4bcb77: mov    eax,fs:0x0
  4bcb7d: push   eax
  4bcb7e: mov    DWORD PTR fs:0x0,esp
  4bcb85: sub    esp,0x520
  4bcb8b: push   ebx
  4bcb8c: push   ebp
  4bcb8d: push   esi
  4bcb8e: push   edi
  4bcb8f: mov    DWORD PTR [esp+0x24],ecx
  4bcb93: push   0xd6
  4bcb98: push   0x6975f0 // D:\Work\RCHorror\AdamSource\AdamApplication.cpp
  4bcb9d: lea    ecx,[esp+0x84]
  4bcba4: call   0x5ae5f0
  4bcba9: mov    al,BYTE PTR [esp+0x12]
  4bcbad: xor    ebp,ebp
  4bcbaf: push   ebp
  4bcbb0: lea    ecx,[esp+0xe4]
  4bcbb7: mov    DWORD PTR [esp+0x53c],ebp
  4bcbbe: mov    BYTE PTR [esp+0xe4],al
  4bcbc5: call   0x4040a0
  4bcbca: mov    edi,0x697760 // CAdamApplication::InitializeLevelStructure()
  4bcbcf: or     ecx,0xffffffff // None
  4bcbd2: xor    eax,eax
  4bcbd4: repnz scas al,BYTE PTR es:[edi]
  4bcbd6: not    ecx
  4bcbd8: dec    ecx
  4bcbd9: push   ecx
  4bcbda: push   0x697760 // CAdamApplication::InitializeLevelStructure()
  4bcbdf: lea    ecx,[esp+0xe8]
  4bcbe6: call   0x4040f0
  4bcbeb: lea    ecx,[esp+0x1b0]
  4bcbf2: mov    BYTE PTR [esp+0x538],0x1
  4bcbf9: 
  4bcbfa: call   0x5ab4a0
  4bcbff: mov    bl,0x2
  4bcc01: mov    BYTE PTR [esp+0x538],bl
  4bcc08: call   DWORD PTR ds:0x64a258 // 3.7362989110108317e-39
  4bcc0e: mov    DWORD PTR [esp+0x1c4],eax
  4bcc15: mov    eax,ds:0x6b9940 // None
  4bcc1a: lea    ecx,[esp+0xe0]
  4bcc21: mov    DWORD PTR [esp+0x1b0],0x64e854 // 6.795086830102186e-39
  4bcc28: 
  4bcc2c: push   ecx
  4bcc2d: push   eax
  4bcc2e: mov    ecx,0x6b9938 // None
  4bcc33: call   0x442bf0
  4bcc38: call   0x51c180
  4bcc3d: call   0x515ff0
  4bcc42: mov    ecx,eax
  4bcc44: call   0x4337e0
  4bcc49: test   eax,eax
  4bcc4b: je     0x4bcc91
  4bcc4d: call   0x49f950
  4bcc52: mov    eax,DWORD PTR [eax+0x4]
  4bcc55: cmp    eax,ebp
  4bcc57: jne    0x4bcc5e
  4bcc59: mov    eax,0x64a3b4 // 0.0
  4bcc5e: push   eax
  4bcc5f: lea    edx,[esp+0x70]
  4bcc63: push   0x695190 // CAdamLoadUpdater >> %s
  4bcc68: push   edx
  4bcc69: call   0x5ae390
  4bcc6e: push   eax
  4bcc6f: mov    BYTE PTR [esp+0x548],0x3
  4bcc76: 
  4bcc77: call   0x5aff00
  4bcc7c: add    esp,0x10
  4bcc7f: lea    ecx,[esp+0x6c]
  4bcc83: mov    BYTE PTR [esp+0x538],bl
  4bcc8a: push   0x1
  4bcc8c: call   0x4040a0
  4bcc91: push   0x1
  4bcc93: lea    ecx,[esp+0xe4]
  4bcc9a: mov    BYTE PTR [esp+0x53c],0x5
  4bcca1: 
  4bcca2: call   0x4040a0
  4bcca7: lea    ecx,[esp+0x20]
  4bccab: mov    DWORD PTR [esp+0x20],ebp
  4bccaf: call   0x5844b0
  4bccb4: lea    ecx,[esp+0x18]
  4bccb8: mov    BYTE PTR [esp+0x538],0x6
  4bccbf: 
  4bccc0: mov    DWORD PTR [esp+0x18],ebp
  4bccc4: call   0x5844b0
  4bccc9: lea    ecx,[esp+0x1c]
  4bcccd: mov    BYTE PTR [esp+0x538],0x7
  4bccd4: 
  4bccd5: mov    DWORD PTR [esp+0x1c],ebp
  4bccd9: call   0x5844b0
  4bccde: lea    ecx,[esp+0x14]
  4bcce2: mov    BYTE PTR [esp+0x538],0x8
  4bcce9: 
  4bccea: mov    DWORD PTR [esp+0x14],ebp
  4bccee: call   0x5844b0
  4bccf3: lea    ecx,[esp+0x28]
  4bccf7: mov    BYTE PTR [esp+0x538],0x9
  4bccfe: 
  4bccff: mov    DWORD PTR [esp+0x28],ebp
  4bcd03: call   0x5844b0
  4bcd08: lea    eax,[esp+0x5c]
  4bcd0c: mov    BYTE PTR [esp+0x538],0xa
  4bcd13: 
  4bcd14: push   eax
  4bcd15: call   0x436f90
  4bcd1a: add    esp,0x4
  4bcd1d: mov    cl,BYTE PTR [esp+0x12]
  4bcd21: push   ebp
  4bcd22: mov    BYTE PTR [esp+0xf4],cl
  4bcd29: lea    ecx,[esp+0xf4]
  4bcd30: mov    BYTE PTR [esp+0x53c],0xb
  4bcd37: 
  4bcd38: call   0x4040a0
  4bcd3d: mov    edi,0x690810 // General
  4bcd42: or     ecx,0xffffffff // None
  4bcd45: xor    eax,eax
  4bcd47: repnz scas al,BYTE PTR es:[edi]
  4bcd49: not    ecx
  4bcd4b: dec    ecx
  4bcd4c: push   ecx
  4bcd4d: push   0x690810 // General
  4bcd52: lea    ecx,[esp+0xf8]
  4bcd59: call   0x4040f0
  4bcd5e: mov    dl,BYTE PTR [esp+0x12]
  4bcd62: push   ebp
  4bcd63: lea    ecx,[esp+0xd4]
  4bcd6a: mov    BYTE PTR [esp+0x53c],0xc
  4bcd71: 
  4bcd72: mov    BYTE PTR [esp+0xd4],dl
  4bcd79: call   0x4040a0
  4bcd7e: mov    edi,0x697754 // NrLevels
  4bcd83: or     ecx,0xffffffff // None
  4bcd86: xor    eax,eax
  4bcd88: repnz scas al,BYTE PTR es:[edi]
  4bcd8a: not    ecx
  4bcd8c: dec    ecx
  4bcd8d: push   ecx
  4bcd8e: push   0x697754 // NrLevels
  4bcd93: lea    ecx,[esp+0xd8]
  4bcd9a: call   0x4040f0
  4bcd9f: lea    eax,[esp+0x5c]
  4bcda3: push   ebp
  4bcda4: push   eax
  4bcda5: lea    ecx,[esp+0xf8]
  4bcdac: push   0x5
  4bcdae: lea    edx,[esp+0xdc]
  4bcdb5: push   ecx
  4bcdb6: push   edx
  4bcdb7: lea    ecx,[esp+0x320]
  4bcdbe: mov    BYTE PTR [esp+0x54c],0xd
  4bcdc5: 
  4bcdc6: call   0x5ac9d0
  4bcdcb: push   0x1
  4bcdcd: lea    ecx,[esp+0xd4]
  4bcdd4: mov    BYTE PTR [esp+0x53c],0x10
  4bcddb: 
  4bcddc: call   0x4040a0
  4bcde1: push   0x1
  4bcde3: lea    ecx,[esp+0xf4]
  4bcdea: mov    BYTE PTR [esp+0x53c],0xf
  4bcdf1: 
  4bcdf2: call   0x4040a0
  4bcdf7: mov    al,BYTE PTR [esp+0x12]
  4bcdfb: push   ebp
  4bcdfc: lea    ecx,[esp+0x114]
  4bce03: mov    BYTE PTR [esp+0x114],al
  4bce0a: call   0x4040a0
  4bce0f: mov    edi,0x693a14 // 1.0143991175456565e-38
  4bce14: or     ecx,0xffffffff // None
  4bce17: xor    eax,eax
  4bce19: repnz scas al,BYTE PTR es:[edi]
  4bce1b: not    ecx
  4bce1d: dec    ecx
  4bce1e: push   ecx
  4bce1f: push   0x693a14 // 1.0143991175456565e-38
  4bce24: lea    ecx,[esp+0x118]
  4bce2b: call   0x4040f0
  4bce30: mov    cl,BYTE PTR [esp+0x12]
  4bce34: push   ebp
  4bce35: mov    BYTE PTR [esp+0x124],cl
  4bce3c: lea    ecx,[esp+0x124]
  4bce43: mov    BYTE PTR [esp+0x53c],0x11
  4bce4a: 
  4bce4b: call   0x4040a0
  4bce50: mov    edi,0x693a00 // StartLevelNumber
  4bce55: or     ecx,0xffffffff // None
  4bce58: xor    eax,eax
  4bce5a: repnz scas al,BYTE PTR es:[edi]
  4bce5c: not    ecx
  4bce5e: dec    ecx
  4bce5f: push   ecx
  4bce60: push   0x693a00 // StartLevelNumber
  4bce65: lea    ecx,[esp+0x128]
  4bce6c: call   0x4040f0
  4bce71: lea    edx,[esp+0x5c]
  4bce75: push   ebp
  4bce76: push   edx
  4bce77: lea    eax,[esp+0x118]
  4bce7e: push   0x1
  4bce80: lea    ecx,[esp+0x12c]
  4bce87: push   eax
  4bce88: push   ecx
  4bce89: lea    ecx,[esp+0x248]
  4bce90: mov    BYTE PTR [esp+0x54c],0x12
  4bce97: 
  4bce98: call   0x5ac9d0
  4bce9d: push   0x1
  4bce9f: lea    ecx,[esp+0x124]
  4bcea6: mov    BYTE PTR [esp+0x53c],0x15
  4bcead: 
  4bceae: call   0x4040a0
  4bceb3: push   0x1
  4bceb5: lea    ecx,[esp+0x114]
  4bcebc: mov    BYTE PTR [esp+0x53c],0x14
  4bcec3: 
  4bcec4: call   0x4040a0
  4bcec9: mov    dl,BYTE PTR [esp+0x12]
  4bcecd: push   ebp
  4bcece: lea    ecx,[esp+0xc4]
  4bced5: mov    BYTE PTR [esp+0xc4],dl
  4bcedc: call   0x4040a0
  4bcee1: mov    edi,0x693a14 // 1.0143991175456565e-38
  4bcee6: or     ecx,0xffffffff // None
  4bcee9: xor    eax,eax
  4bceeb: repnz scas al,BYTE PTR es:[edi]
  4bceed: not    ecx
  4bceef: dec    ecx
  4bcef0: push   ecx
  4bcef1: push   0x693a14 // 1.0143991175456565e-38
  4bcef6: lea    ecx,[esp+0xc8]
  4bcefd: call   0x4040f0
  4bcf02: mov    al,BYTE PTR [esp+0x12]
  4bcf06: push   ebp
  4bcf07: lea    ecx,[esp+0x154]
  4bcf0e: mov    BYTE PTR [esp+0x53c],0x16
  4bcf15: 
  4bcf16: mov    BYTE PTR [esp+0x154],al
  4bcf1d: call   0x4040a0
  4bcf22: mov    edi,0x6939ec // StartSubLevelNumber
  4bcf27: or     ecx,0xffffffff // None
  4bcf2a: xor    eax,eax
  4bcf2c: repnz scas al,BYTE PTR es:[edi]
  4bcf2e: not    ecx
  4bcf30: dec    ecx
  4bcf31: push   ecx
  4bcf32: push   0x6939ec // StartSubLevelNumber
  4bcf37: lea    ecx,[esp+0x158]
  4bcf3e: call   0x4040f0
  4bcf43: lea    ecx,[esp+0x5c]
  4bcf47: push   ebp
  4bcf48: push   ecx
  4bcf49: lea    edx,[esp+0xc8]
  4bcf50: push   0x1
  4bcf52: lea    eax,[esp+0x15c]
  4bcf59: push   edx
  4bcf5a: push   eax
  4bcf5b: lea    ecx,[esp+0x38c]
  4bcf62: mov    BYTE PTR [esp+0x54c],0x17
  4bcf69: 
  4bcf6a: call   0x5ac9d0
  4bcf6f: push   0x1
  4bcf71: lea    ecx,[esp+0x154]
  4bcf78: mov    BYTE PTR [esp+0x53c],0x1a
  4bcf7f: 
  4bcf80: call   0x4040a0
  4bcf85: push   0x1
  4bcf87: lea    ecx,[esp+0xc4]
  4bcf8e: mov    BYTE PTR [esp+0x53c],0x19
  4bcf95: 
  4bcf96: call   0x4040a0
  4bcf9b: mov    cl,BYTE PTR [esp+0x12]
  4bcf9f: push   ebp
  4bcfa0: mov    BYTE PTR [esp+0x94],cl
  4bcfa7: lea    ecx,[esp+0x94]
  4bcfae: call   0x4040a0
  4bcfb3: mov    edi,0x693a14 // 1.0143991175456565e-38
  4bcfb8: or     ecx,0xffffffff // None
  4bcfbb: xor    eax,eax
  4bcfbd: repnz scas al,BYTE PTR es:[edi]
  4bcfbf: not    ecx
  4bcfc1: dec    ecx
  4bcfc2: push   ecx
  4bcfc3: push   0x693a14 // 1.0143991175456565e-38
  4bcfc8: lea    ecx,[esp+0x98]
  4bcfcf: call   0x4040f0
  4bcfd4: mov    dl,BYTE PTR [esp+0x12]
  4bcfd8: push   ebp
  4bcfd9: lea    ecx,[esp+0x134]
  4bcfe0: mov    BYTE PTR [esp+0x53c],0x1b
  4bcfe7: 
  4bcfe8: mov    BYTE PTR [esp+0x134],dl
  4bcfef: call   0x4040a0
  4bcff4: mov    edi,0x6939d4 // StartSubSubLevelNumber
  4bcff9: or     ecx,0xffffffff // None
  4bcffc: xor    eax,eax
  4bcffe: repnz scas al,BYTE PTR es:[edi]
