  49b240: push   0xffffffff // None
  49b242: push   0x62c862
  49b247: mov    eax,fs:0x0
  49b24d: push   eax
  49b24e: mov    DWORD PTR fs:0x0,esp
  49b255: sub    esp,0x28
  49b258: mov    eax,DWORD PTR [esp+0x38]
  49b25c: push   ebx
  49b25d: push   ebp
  49b25e: push   esi
  49b25f: push   edi
  49b260: mov    esi,ecx
  49b262: push   eax
  49b263: mov    DWORD PTR [esp+0x18],esi
  49b267: call   0x501cb0
  49b26c: mov    ebp,DWORD PTR [esp+0x4c]
  49b270: lea    edi,[esi+0xf8]
  49b276: xor    ebx,ebx
  49b278: mov    cl,BYTE PTR [ebp+0x0]
  49b27b: push   ebx
  49b27c: mov    BYTE PTR [edi],cl
  49b27e: mov    ecx,edi
  49b280: mov    DWORD PTR [esp+0x44],ebx
  49b284: call   0x4040a0
  49b289: mov    edx,DWORD PTR ds:0x64aba8 // nan
  49b28f: mov    ecx,edi
  49b291: push   edx
  49b292: push   ebx
  49b293: push   ebp
  49b294: call   0x40cc00
  49b299: mov    DWORD PTR [esi+0x108],ebx
  49b29f: mov    BYTE PTR [esi+0x10c],bl
  49b2a5: mov    DWORD PTR [esi+0x110],ebx
  49b2ab: push   esi
  49b2ac: lea    ecx,[esi+0x19c]
  49b2b2: mov    BYTE PTR [esp+0x44],0x2
  49b2b7: mov    DWORD PTR [esi+0x114],ebx
  49b2bd: mov    BYTE PTR [esi+0x118],bl
  49b2c3: mov    DWORD PTR [esi+0x14c],0x9
  49b2ca: 
  49b2cd: mov    DWORD PTR [esi+0x15c],ebx
  49b2d3: mov    DWORD PTR [esi+0x160],ebx
  49b2d9: mov    DWORD PTR [esi+0x164],ebx
  49b2df: mov    BYTE PTR [esi+0x198],0x1
  49b2e6: call   0x4a04a0
  49b2eb: lea    ecx,[esi+0x220]
  49b2f1: push   ebx
  49b2f2: mov    BYTE PTR [esp+0x44],0x3
  49b2f7: mov    DWORD PTR [esi+0x1fc],ebx
  49b2fd: mov    DWORD PTR [esi+0x204],ebx
  49b303: mov    BYTE PTR [esi+0x209],0x1
  49b30a: mov    BYTE PTR [esi+0x20d],0x1
  49b311: mov    DWORD PTR [esi+0x210],0x437f0000
  49b318: 
  49b31b: mov    BYTE PTR [esi+0x214],0x1
  49b322: mov    DWORD PTR [esi+0x218],ebx
  49b328: mov    DWORD PTR [esi+0x21c],ebx
  49b32e: call   0x4041b0
  49b333: push   ebp
  49b334: mov    BYTE PTR [esi+0x23c],bl
  49b33a: mov    DWORD PTR [esi+0x240],ebx
  49b340: mov    DWORD PTR [esi+0x280],ebx
  49b346: mov    DWORD PTR [esi+0x284],ebx
  49b34c: mov    DWORD PTR [esi],0x64e7b4 // 6.769639249990047e-39
  49b352: call   0x4a1c80
  49b357: add    esp,0x4
  49b35a: cmp    eax,ebx
  49b35c: mov    DWORD PTR [esi+0x108],eax
  49b362: jne    0x49b3c7
  49b364: mov    al,BYTE PTR [esp+0x48]
  49b368: push   ebx
  49b369: lea    ecx,[esp+0x2c]
  49b36d: mov    BYTE PTR [esp+0x2c],al
  49b371: call   0x4040a0
  49b376: mov    edi,0x6b3f70 // 0.0
  49b37b: or     ecx,0xffffffff // None
  49b37e: xor    eax,eax
  49b380: repnz scas al,BYTE PTR es:[edi]
  49b382: not    ecx
  49b384: dec    ecx
  49b385: push   ecx
  49b386: push   0x6b3f70 // 0.0
  49b38b: lea    ecx,[esp+0x30]
  49b38f: call   0x4040f0
  49b394: lea    ecx,[esp+0x28]
  49b398: mov    BYTE PTR [esp+0x40],0x4
  49b39d: push   ecx
  49b39e: push   0x141
  49b3a3: push   0x694bcc // D:\Work\RCHorror\AdamSource\AdamActor.h
  49b3a8: push   0x68f8a0 // m_Settings != 0
  49b3ad: call   0x5a07f0
  49b3b2: call   eax
  49b3b4: add    esp,0x10
  49b3b7: lea    ecx,[esp+0x28]
  49b3bb: mov    BYTE PTR [esp+0x40],0x3
  49b3c0: push   0x1
  49b3c2: call   0x4040a0
  49b3c7: mov    ebp,DWORD PTR [esi+0x108]
  49b3cd: mov    dl,BYTE PTR [ebp+0x18]
  49b3d0: mov    BYTE PTR [esi+0x208],dl
  49b3d6: mov    al,BYTE PTR [ebp+0x54]
  49b3d9: mov    BYTE PTR [esi+0x20a],al
  49b3df: mov    cl,BYTE PTR [ebp+0x54]
  49b3e2: mov    BYTE PTR [esi+0x20b],cl
  49b3e8: mov    dl,BYTE PTR [ebp+0x55]
  49b3eb: mov    BYTE PTR [esi+0x20c],dl
  49b3f1: mov    al,BYTE PTR [ebp+0x56]
  49b3f4: mov    BYTE PTR [esi+0x200],al
  49b3fa: mov    ecx,DWORD PTR [ebp+0x5c]
  49b3fd: mov    edx,DWORD PTR [ebp+0x58]
  49b400: mov    DWORD PTR [esp+0x10],ecx
  49b404: mov    DWORD PTR [esp+0x48],edx
  49b408: call   0x60a4a0
  49b40d: cdq
  49b40e: mov    ecx,0x2710
  49b413: idiv   ecx
  49b415: mov    DWORD PTR [esp+0x4c],edx
  49b419: fild   DWORD PTR [esp+0x4c]
  49b41d: fld    DWORD PTR [esp+0x10]
  49b421: fsub   DWORD PTR [esp+0x48]
  49b425: fmulp  st(1),st
  49b427: fmul   DWORD PTR ds:0x64a2c4 // 9.999999747378752e-05
  49b42d: fadd   DWORD PTR [esp+0x48]
  49b431: fcom   DWORD PTR ds:0x64a354 // 1.0
  49b437: fst    DWORD PTR [esi+0x1f8]
  49b43d: fnstsw ax
  49b43f: test   ah,0x1
  49b442: je     0x49b485
  49b444: sub    esp,0x8
  49b447: lea    edx,[esp+0x20]
  49b44b: fstp   QWORD PTR [esp]
  49b44e: push   0x694bb0 // Invalid MaxDamage value %f
  49b453: push   edx
  49b454: call   0x5ae390
  49b459: add    esp,0x10
  49b45c: push   eax
  49b45d: mov    ecx,esi
  49b45f: mov    BYTE PTR [esp+0x44],0x5
  49b464: call   0x5035a0
  49b469: push   0x1
  49b46b: lea    ecx,[esp+0x1c]
  49b46f: mov    BYTE PTR [esp+0x44],0x3
  49b474: call   0x4040a0
  49b479: mov    DWORD PTR [esi+0x1f8],0x3f800000
  49b480: 
  49b483: jmp    0x49b487
  49b485: fstp   st(0)
  49b487: call   0x5171f0
  49b48c: mov    edi,eax
  49b48e: mov    eax,DWORD PTR [edi+0x64]
  49b491: cmp    eax,0x80000000 // None
  49b496: jne    0x49b4b0
  49b498: mov    eax,DWORD PTR [edi+0x18]
  49b49b: cmp    eax,ebx
  49b49d: jne    0x49b4a4
  49b49f: mov    eax,0x64a3b4 // 0.0
  49b4a4: push   eax
  49b4a5: call   0x60af10
  49b4aa: add    esp,0x4
  49b4ad: mov    DWORD PTR [edi+0x64],eax
  49b4b0: cmp    eax,ebx
  49b4b2: je     0x49b53a
  49b4b8: mov    al,BYTE PTR [esi+0x200]
  49b4be: mov    edx,0x694ba8 // TRUE
  49b4c3: cmp    al,bl
  49b4c5: jne    0x49b4cc
  49b4c7: mov    edx,0x694ba0 // FALSE
  49b4cc: mov    ecx,DWORD PTR [esi+0x70]
  49b4cf: cmp    ecx,ebx
  49b4d1: jne    0x49b4d8
  49b4d3: mov    ecx,0x64a3b4 // 0.0
  49b4d8: mov    eax,DWORD PTR [esi+0x60]
  49b4db: cmp    eax,ebx
  49b4dd: jne    0x49b4e4
  49b4df: mov    eax,0x64a3b4 // 0.0
  49b4e4: fld    DWORD PTR [esi+0x1f8]
  49b4ea: sub    esp,0x8
  49b4ed: fstp   QWORD PTR [esp]
  49b4f0: push   edx
  49b4f1: push   ecx
  49b4f2: push   eax
  49b4f3: lea    eax,[esp+0x2c]
  49b4f7: push   0x694b6c // Create actor %s (%s) destroyable %s, max damage %f
  49b4fc: push   eax
  49b4fd: call   0x5ae390
  49b502: push   eax
  49b503: mov    BYTE PTR [esp+0x60],0x6
  49b508: call   0x5aff00
  49b50d: mov    eax,DWORD PTR [esp+0x3c]
  49b511: add    esp,0x20
  49b514: cmp    eax,ebx
  49b516: mov    BYTE PTR [esp+0x40],0x3
  49b51b: je     0x49b53a
  49b51d: lea    ecx,[eax-0x1]
  49b520: mov    al,BYTE PTR [eax-0x1]
  49b523: cmp    al,bl
  49b525: je     0x49b531
  49b527: cmp    al,0xff
  49b529: je     0x49b531
  49b52b: dec    al
  49b52d: mov    BYTE PTR [ecx],al
  49b52f: jmp    0x49b53a
  49b531: push   ecx
  49b532: call   0x5fe5f0
  49b537: add    esp,0x4
  49b53a: mov    ecx,DWORD PTR [ebp+0x1c]
  49b53d: lea    edi,[esi+0x134]
