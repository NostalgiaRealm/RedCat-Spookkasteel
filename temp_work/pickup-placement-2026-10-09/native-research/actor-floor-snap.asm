  49d020: mov    eax,fs:0x0
  49d026: push   0xffffffff // None
  49d028: push   0x62ca40
  49d02d: push   eax
  49d02e: mov    DWORD PTR fs:0x0,esp
  49d035: sub    esp,0x7c
  49d038: push   ebx
  49d039: push   ebp
  49d03a: push   esi
  49d03b: mov    esi,DWORD PTR ds:0x6b915c // None
  49d041: xor    ebp,ebp
  49d043: push   edi
  49d044: cmp    esi,ebp
  49d046: mov    edi,ecx
  49d048: jne    0x49d051
  49d04a: call   0x4bc480
  49d04f: mov    esi,eax
  49d051: fld    DWORD PTR [esi+0x478]
  49d057: fcomp  DWORD PTR ds:0x64a450 // 0.0
  49d05d: fnstsw ax
  49d05f: test   ah,0x40
  49d062: je     0x49d080
  49d064: lea    eax,[esp+0x13]
  49d068: lea    ecx,[esi+0x42c]
  49d06e: push   eax
  49d06f: push   ecx
  49d070: call   0x5ad390
  49d075: fst    DWORD PTR [esi+0x478]
  49d07b: add    esp,0x8
  49d07e: jmp    0x49d086
  49d080: fld    DWORD PTR [esi+0x478]
  49d086: mov    esi,DWORD PTR [esp+0xa0]
  49d08d: mov    edx,esi
  49d08f: mov    eax,DWORD PTR [edx]
  49d091: mov    DWORD PTR [esp+0x24],eax
  49d095: mov    eax,esi
  49d097: mov    ecx,DWORD PTR [edx+0x4]
  49d09a: mov    DWORD PTR [esp+0x28],ecx
  49d09e: mov    ecx,DWORD PTR [eax]
  49d0a0: fld    DWORD PTR [esp+0x28]
  49d0a4: fadd   DWORD PTR ds:0x64a354 // 1.0
  49d0aa: mov    edx,DWORD PTR [edx+0x8]
  49d0ad: mov    DWORD PTR [esp+0x18],ecx
  49d0b1: mov    DWORD PTR [esp+0x2c],edx
  49d0b5: mov    edx,DWORD PTR [eax+0x4]
  49d0b8: lea    ecx,[edi+0x11c]
  49d0be: mov    DWORD PTR [esp+0x1c],edx
  49d0c2: fstp   DWORD PTR [esp+0x28]
  49d0c6: mov    eax,DWORD PTR [eax+0x8]
  49d0c9: push   ecx
  49d0ca: fmul   DWORD PTR ds:0x64be78 // 100.0
  49d0d0: push   ecx
  49d0d1: mov    ecx,edi
  49d0d3: mov    edx,esp
  49d0d5: mov    DWORD PTR [esp+0x1c],esp
  49d0d9: fsubr  DWORD PTR [esp+0x24]
  49d0dd: push   edx
  49d0de: mov    DWORD PTR [esp+0x2c],eax
  49d0e2: fstp   DWORD PTR [esp+0x28]
  49d0e6: call   0x4042e0
  49d0eb: lea    ecx,[esp+0x48]
  49d0ef: call   0x5545f0
  49d0f4: mov    eax,DWORD PTR [edi+0x14c]
  49d0fa: push   ebp
  49d0fb: shr    eax,0x3
  49d0fe: and    al,0x1
  49d100: mov    ecx,edi
  49d102: mov    DWORD PTR [esp+0x98],ebp
  49d109: mov    BYTE PTR [esp+0x18],al
  49d10d: call   0x49df30
  49d112: mov    edx,DWORD PTR [esp+0xa4]
  49d119: lea    ecx,[esp+0x60]
  49d11d: push   ecx
  49d11e: lea    eax,[esp+0x1c]
  49d122: push   edx
  49d123: lea    ecx,[esp+0x2c]
  49d127: push   eax
  49d128: push   ecx
  49d129: lea    ecx,[esp+0x50]
  49d12d: call   0x554ab0
  49d132: mov    edx,DWORD PTR [esp+0x14]
  49d136: mov    ecx,edi
  49d138: push   edx
  49d139: mov    bl,al
  49d13b: call   0x49df30
  49d140: test   bl,bl
  49d142: je     0x49d152
  49d144: mov    eax,DWORD PTR [esp+0x6c]
  49d148: mov    ecx,DWORD PTR [esp+0x70]
  49d14c: mov    esi,DWORD PTR [esp+0x74]
  49d150: jmp    0x49d1cd
  49d152: fld    DWORD PTR [esi+0x8]
  49d155: sub    esp,0x8
  49d158: lea    eax,[esp+0x38]
  49d15c: fstp   QWORD PTR [esp]
  49d15f: fld    DWORD PTR [esi+0x4]
  49d162: sub    esp,0x8
  49d165: fstp   QWORD PTR [esp]
  49d168: fld    DWORD PTR [esi]
  49d16a: sub    esp,0x8
  49d16d: fstp   QWORD PTR [esp]
  49d170: push   0x694d10 // Actor can't find the floor near [ %f, %f, %f ]
  49d175: push   eax
  49d176: call   0x5ae390
  49d17b: push   eax
  49d17c: push   0x299
  49d181: push   0x694c70 // D:\Work\RCHorror\AdamSource\AdamActor.cpp
  49d186: mov    BYTE PTR [esp+0xc0],0x1
  49d18d: 
  49d18e: call   0x5aff20
  49d193: mov    ecx,DWORD PTR [esp+0x60]
  49d197: add    esp,0x2c
  49d19a: cmp    ecx,ebp
  49d19c: je     0x49d1b9
  49d19e: mov    al,BYTE PTR [ecx-0x1]
  49d1a1: dec    ecx
  49d1a2: test   al,al
  49d1a4: je     0x49d1b0
  49d1a6: cmp    al,0xff
  49d1a8: je     0x49d1b0
  49d1aa: dec    al
  49d1ac: mov    BYTE PTR [ecx],al
  49d1ae: jmp    0x49d1b9
  49d1b0: push   ecx
  49d1b1: call   0x5fe5f0
  49d1b6: add    esp,0x4
  49d1b9: mov    eax,DWORD PTR [esi]
  49d1bb: mov    ecx,DWORD PTR [esi+0x4]
  49d1be: mov    esi,DWORD PTR [esi+0x8]
  49d1c1: mov    DWORD PTR [esp+0x34],ebp
  49d1c5: mov    DWORD PTR [esp+0x38],ebp
  49d1c9: mov    DWORD PTR [esp+0x3c],ebp
  49d1cd: mov    edi,DWORD PTR [esp+0x9c]
  49d1d4: mov    DWORD PTR [esp+0x94],0xffffffff // None
  49d1db: 
  49d1df: mov    edx,edi
  49d1e1: mov    DWORD PTR [edx],eax
  49d1e3: mov    DWORD PTR [edx+0x4],ecx
  49d1e6: lea    ecx,[esp+0x40]
  49d1ea: mov    DWORD PTR [edx+0x8],esi
  49d1ed: call   0x554630
  49d1f2: mov    ecx,DWORD PTR [esp+0x8c]
  49d1f9: mov    eax,edi
  49d1fb: pop    edi
  49d1fc: pop    esi
  49d1fd: pop    ebp
  49d1fe: mov    DWORD PTR fs:0x0,ecx
  49d205: pop    ebx
  49d206: add    esp,0x88
  49d20c: ret    0xc
