  4dfb55: xor    dl,dl
  4dfb57: jmp    0x4dfb79
  4dfb59: cmp    ecx,ebp
  4dfb5b: jle    0x4dfb73
  4dfb5d: sub    eax,edi
  4dfb5f: mov    DWORD PTR [esp+0x58],eax
  4dfb63: fild   DWORD PTR [esp+0x58]
  4dfb67: fidiv  DWORD PTR [esp+0x14]
  4dfb6b: fstp   DWORD PTR [esi+0x134]
  4dfb71: jmp    0x4dfb79
  4dfb73: mov    DWORD PTR [esi+0x134],ebp
  4dfb79: test   dl,dl
  4dfb7b: mov    BYTE PTR [esi+0x138],dl
  4dfb81: jne    0x4dfcf3
  4dfb87: cmp    DWORD PTR [esi+0x15c],ebp
  4dfb8d: je     0x4dfb9b
  4dfb8f: push   0x6b95d8 // None
  4dfb94: mov    ecx,esi
  4dfb96: call   0x505400
  4dfb9b: mov    ecx,DWORD PTR [esi+0x120]
  4dfba1: mov    edx,DWORD PTR [esi+0x114]
  4dfba7: push   ecx
  4dfba8: push   edx
  4dfba9: call   0x4df7d0
  4dfbae: mov    ebp,eax
  4dfbb0: add    esp,0x8
  4dfbb3: cmp    ebp,ebx
  4dfbb5: je     0x4dfc1d
  4dfbb7: test   ebp,ebp
  4dfbb9: jge    0x4dfc1d
  4dfbbb: mov    al,BYTE PTR [esp+0x58]
  4dfbbf: push   0x0
  4dfbc1: lea    ecx,[esp+0x1c]
  4dfbc5: mov    BYTE PTR [esp+0x1c],al
  4dfbc9: call   0x4040a0
  4dfbce: mov    edi,0x6b3f70 // 0.0
  4dfbd3: mov    ecx,ebx
  4dfbd5: xor    eax,eax
  4dfbd7: repnz scas al,BYTE PTR es:[edi]
  4dfbd9: not    ecx
  4dfbdb: dec    ecx
  4dfbdc: push   ecx
  4dfbdd: push   0x6b3f70 // 0.0
  4dfbe2: lea    ecx,[esp+0x20]
  4dfbe6: call   0x4040f0
  4dfbeb: lea    ecx,[esp+0x18]
  4dfbef: mov    DWORD PTR [esp+0x50],0x0
  4dfbf6: 
  4dfbf7: push   ecx
  4dfbf8: push   0x56
  4dfbfa: push   0x68d4c8 // ./AdamSource\AdamLifeTime.h
  4dfbff: push   0x68d490 // (a_LifeTime == ADAMTIME_NONE ) || ( a_LifeTime >= 0 )
  4dfc04: call   0x5a07f0
  4dfc09: call   eax
  4dfc0b: add    esp,0x10
  4dfc0e: lea    ecx,[esp+0x18]
  4dfc12: mov    DWORD PTR [esp+0x50],ebx
  4dfc16: push   0x1
  4dfc18: call   0x4040a0
  4dfc1d: mov    DWORD PTR [esi+0x14c],ebp
  4dfc23: mov    DWORD PTR [esi+0x150],ebx
  4dfc29: mov    DWORD PTR [esi+0x154],0x3f800000
  4dfc30: 
  4dfc33: mov    BYTE PTR [esi+0x158],0x1
  4dfc3a: mov    edx,DWORD PTR [esi+0x11c]
  4dfc40: mov    eax,DWORD PTR [esi+0x110]
  4dfc46: push   edx
  4dfc47: push   eax
  4dfc48: call   0x4df7d0
  4dfc4d: mov    ebp,eax
  4dfc4f: add    esp,0x8
  4dfc52: cmp    ebp,ebx
  4dfc54: je     0x4dfcbc
  4dfc56: test   ebp,ebp
  4dfc58: jge    0x4dfcbc
  4dfc5a: mov    cl,BYTE PTR [esp+0x58]
  4dfc5e: push   0x0
  4dfc60: mov    BYTE PTR [esp+0x1c],cl
  4dfc64: lea    ecx,[esp+0x1c]
  4dfc68: call   0x4040a0
  4dfc6d: mov    edi,0x6b3f70 // 0.0
  4dfc72: mov    ecx,ebx
  4dfc74: xor    eax,eax
  4dfc76: repnz scas al,BYTE PTR es:[edi]
  4dfc78: not    ecx
  4dfc7a: dec    ecx
  4dfc7b: push   ecx
  4dfc7c: push   0x6b3f70 // 0.0
  4dfc81: lea    ecx,[esp+0x20]
  4dfc85: call   0x4040f0
  4dfc8a: lea    edx,[esp+0x18]
  4dfc8e: mov    DWORD PTR [esp+0x50],0x1
  4dfc95: 
  4dfc96: push   edx
  4dfc97: push   0x56
  4dfc99: push   0x68d4c8 // ./AdamSource\AdamLifeTime.h
  4dfc9e: push   0x68d490 // (a_LifeTime == ADAMTIME_NONE ) || ( a_LifeTime >= 0 )
  4dfca3: call   0x5a07f0
  4dfca8: call   eax
  4dfcaa: add    esp,0x10
  4dfcad: lea    ecx,[esp+0x18]
  4dfcb1: mov    DWORD PTR [esp+0x50],ebx
  4dfcb5: push   0x1
  4dfcb7: call   0x4040a0
  4dfcbc: mov    DWORD PTR [esi+0x13c],ebp
  4dfcc2: mov    DWORD PTR [esi+0x140],ebx
  4dfcc8: mov    DWORD PTR [esi+0x144],0x3f800000
  4dfccf: 
  4dfcd2: mov    BYTE PTR [esi+0x148],0x1
  4dfcd9: mov    DWORD PTR [esi+0xf8],0x2
  4dfce0: 
  4dfce3: jmp    0x4dfcf3
  4dfce5: mov    al,BYTE PTR [esi+0x7c]
  4dfce8: test   al,al
  4dfcea: je     0x4dfcf3
  4dfcec: mov    ecx,esi
  4dfcee: call   0x4df790
  4dfcf3: mov    ecx,DWORD PTR [esp+0x48]
  4dfcf7: pop    edi
  4dfcf8: pop    esi
  4dfcf9: pop    ebp
  4dfcfa: pop    ebx
  4dfcfb: mov    DWORD PTR fs:0x0,ecx
  4dfd02: add    esp,0x44
  4dfd05: ret    0x8
  4dfd10: mov    cl,BYTE PTR ds:0x7103a0 // None
  4dfd16: mov    al,0x1
  4dfd18: test   al,cl
  4dfd1a: jne    0x4dfd24
  4dfd1c: or     cl,al
  4dfd1e: mov    BYTE PTR ds:0x7103a0,cl // None
  4dfd24: jmp    0x4dfd30
  4dfd30: push   0x401ba0
  4dfd35: call   0x60a57b
  4dfd3a: pop    ecx
  4dfd3b: ret
  4dfd40: jmp    0x4dfd50
  4dfd50: push   0xffffffff // None
  4dfd52: push   0x632489
  4dfd57: mov    eax,fs:0x0
  4dfd5d: push   eax
  4dfd5e: mov    DWORD PTR fs:0x0,esp
  4dfd65: sub    esp,0xa0
  4dfd6b: mov    al,BYTE PTR [esp+0x3]
  4dfd6f: push   ebp
  4dfd70: push   esi
  4dfd71: push   edi
  4dfd72: push   0x0
  4dfd74: lea    ecx,[esp+0x24]
  4dfd78: mov    BYTE PTR [esp+0x24],al
  4dfd7c: call   0x4040a0
  4dfd81: mov    edi,0x690810 // General
  4dfd86: or     ecx,0xffffffff // None
  4dfd89: xor    eax,eax
  4dfd8b: push   0x1
  4dfd8d: repnz scas al,BYTE PTR es:[edi]
  4dfd8f: not    ecx
  4dfd91: dec    ecx
  4dfd92: mov    ebp,ecx
  4dfd94: lea    ecx,[esp+0x24]
  4dfd98: push   ebp
  4dfd99: call   0x401940
  4dfd9e: test   al,al
  4dfda0: je     0x4dfdc7
  4dfda2: mov    edi,DWORD PTR [esp+0x24]
  4dfda6: mov    ecx,ebp
  4dfda8: mov    edx,ecx
  4dfdaa: mov    esi,0x690810 // General
  4dfdaf: shr    ecx,0x2
  4dfdb2: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dfdb4: mov    ecx,edx
  4dfdb6: and    ecx,0x3
  4dfdb9: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dfdbb: mov    eax,DWORD PTR [esp+0x24]
  4dfdbf: mov    DWORD PTR [esp+0x28],ebp
  4dfdc3: mov    BYTE PTR [eax+ebp*1],0x0
  4dfdc7: mov    cl,BYTE PTR [esp+0xf]
  4dfdcb: push   0x0
  4dfdcd: mov    BYTE PTR [esp+0x14],cl
  4dfdd1: lea    ecx,[esp+0x14]
  4dfdd5: mov    DWORD PTR [esp+0xb8],0x0
  4dfddc: 
  4dfde0: call   0x4040a0
  4dfde5: mov    edi,0x69a188 // RespawnTime
  4dfdea: or     ecx,0xffffffff // None
  4dfded: xor    eax,eax
  4dfdef: push   0x1
  4dfdf1: repnz scas al,BYTE PTR es:[edi]
  4dfdf3: not    ecx
  4dfdf5: dec    ecx
  4dfdf6: mov    ebp,ecx
  4dfdf8: lea    ecx,[esp+0x14]
  4dfdfc: push   ebp
  4dfdfd: call   0x401940
  4dfe02: test   al,al
  4dfe04: je     0x4dfe29
  4dfe06: mov    edi,DWORD PTR [esp+0x14]
  4dfe0a: mov    ecx,ebp
  4dfe0c: mov    edx,ecx
  4dfe0e: mov    esi,0x69a188 // RespawnTime
  4dfe13: shr    ecx,0x2
  4dfe16: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dfe18: mov    ecx,edx
  4dfe1a: push   ebp
  4dfe1b: and    ecx,0x3
  4dfe1e: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dfe20: lea    ecx,[esp+0x14]
  4dfe24: call   0x404190
  4dfe29: lea    eax,[esp+0x30]
  4dfe2d: mov    BYTE PTR [esp+0xb4],0x1
  4dfe34: 
  4dfe35: push   eax
  4dfe36: call   0x43b450
  4dfe3b: add    esp,0x4
  4dfe3e: xor    edi,edi
  4dfe40: lea    ecx,[esp+0x20]
  4dfe44: push   edi
  4dfe45: push   eax
  4dfe46: push   0x41a00000
  4dfe4b: lea    edx,[esp+0x1c]
  4dfe4f: push   ecx
  4dfe50: push   edx
  4dfe51: lea    ecx,[esp+0x54]
  4dfe55: mov    BYTE PTR [esp+0xc8],0x2
  4dfe5c: 
  4dfe5d: call   0x5ac8b0
  4dfe62: mov    esi,eax
  4dfe64: fld    DWORD PTR [esi+0x60]
  4dfe67: fcomp  DWORD PTR ds:0x64a450 // 0.0
  4dfe6d: mov    BYTE PTR [esp+0xb4],0x3
  4dfe74: 
  4dfe75: fnstsw ax
  4dfe77: test   ah,0x40
  4dfe7a: je     0x4dfe92
  4dfe7c: lea    eax,[esp+0xf]
  4dfe80: lea    ecx,[esi+0x14]
  4dfe83: push   eax
  4dfe84: push   ecx
  4dfe85: call   0x5ad390
  4dfe8a: fst    DWORD PTR [esi+0x60]
  4dfe8d: add    esp,0x8
  4dfe90: jmp    0x4dfe95
  4dfe92: fld    DWORD PTR [esi+0x60]
  4dfe95: fmul   DWORD PTR ds:0x64b79c // 1000.0
  4dfe9b: call   0x60ab20
  4dfea0: lea    ecx,[esp+0x40]
  4dfea4: mov    ds:0x6b9414,eax // None
  4dfea9: mov    BYTE PTR [esp+0xb4],0x2
  4dfeb0: 
  4dfeb1: call   0x5acca0
  4dfeb6: mov    eax,DWORD PTR [esp+0x34]
  4dfeba: cmp    eax,edi
  4dfebc: je     0x4dfedb
  4dfebe: lea    ecx,[eax-0x1]
  4dfec1: mov    al,BYTE PTR [eax-0x1]
  4dfec4: test   al,al
  4dfec6: je     0x4dfed2
  4dfec8: cmp    al,0xff
  4dfeca: je     0x4dfed2
  4dfecc: dec    al
  4dfece: mov    BYTE PTR [ecx],al
  4dfed0: jmp    0x4dfedb
  4dfed2: push   ecx
  4dfed3: call   0x5fe5f0
  4dfed8: add    esp,0x4
  4dfedb: mov    eax,DWORD PTR [esp+0x14]
  4dfedf: mov    DWORD PTR [esp+0x34],edi
  4dfee3: cmp    eax,edi
  4dfee5: mov    DWORD PTR [esp+0x38],edi
  4dfee9: mov    DWORD PTR [esp+0x3c],edi
  4dfeed: je     0x4dff0c
  4dfeef: lea    ecx,[eax-0x1]
  4dfef2: mov    al,BYTE PTR [eax-0x1]
  4dfef5: test   al,al
  4dfef7: je     0x4dff03
  4dfef9: cmp    al,0xff
  4dfefb: je     0x4dff03
  4dfefd: dec    al
  4dfeff: mov    BYTE PTR [ecx],al
  4dff01: jmp    0x4dff0c
  4dff03: push   ecx
  4dff04: call   0x5fe5f0
  4dff09: add    esp,0x4
  4dff0c: mov    eax,DWORD PTR [esp+0x24]
  4dff10: mov    DWORD PTR [esp+0x14],edi
  4dff14: mov    DWORD PTR [esp+0x18],edi
  4dff18: mov    DWORD PTR [esp+0x1c],edi
  4dff1c: cmp    eax,edi
  4dff1e: pop    edi
  4dff1f: pop    esi
  4dff20: pop    ebp
  4dff21: je     0x4dff53
  4dff23: lea    ecx,[eax-0x1]
  4dff26: mov    al,BYTE PTR [eax-0x1]
  4dff29: test   al,al
  4dff2b: je     0x4dff4a
  4dff2d: cmp    al,0xff
  4dff2f: je     0x4dff4a
  4dff31: dec    al
  4dff33: mov    BYTE PTR [ecx],al
  4dff35: mov    ecx,DWORD PTR [esp+0xa0]
  4dff3c: mov    DWORD PTR fs:0x0,ecx
  4dff43: add    esp,0xac
  4dff49: ret
  4dff4a: push   ecx
  4dff4b: call   0x5fe5f0
  4dff50: add    esp,0x4
  4dff53: mov    ecx,DWORD PTR [esp+0xa0]
  4dff5a: mov    DWORD PTR fs:0x0,ecx
  4dff61: add    esp,0xac
  4dff67: ret
  4dff70: jmp    0x4dff80
  4dff80: push   0xffffffff // None
  4dff82: push   0x6324c9
  4dff87: mov    eax,fs:0x0
  4dff8d: push   eax
  4dff8e: mov    DWORD PTR fs:0x0,esp
  4dff95: sub    esp,0xa0
  4dff9b: mov    al,BYTE PTR [esp+0x3]
  4dff9f: push   ebp
  4dffa0: push   esi
  4dffa1: push   edi
  4dffa2: push   0x0
  4dffa4: lea    ecx,[esp+0x24]
  4dffa8: mov    BYTE PTR [esp+0x24],al
  4dffac: call   0x4040a0
  4dffb1: mov    edi,0x690810 // General
  4dffb6: or     ecx,0xffffffff // None
  4dffb9: xor    eax,eax
  4dffbb: push   0x1
  4dffbd: repnz scas al,BYTE PTR es:[edi]
  4dffbf: not    ecx
  4dffc1: dec    ecx
  4dffc2: mov    ebp,ecx
  4dffc4: lea    ecx,[esp+0x24]
  4dffc8: push   ebp
  4dffc9: call   0x401940
  4dffce: test   al,al
  4dffd0: je     0x4dfff7
  4dffd2: mov    edi,DWORD PTR [esp+0x24]
  4dffd6: mov    ecx,ebp
  4dffd8: mov    edx,ecx
  4dffda: mov    esi,0x690810 // General
  4dffdf: shr    ecx,0x2
  4dffe2: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dffe4: mov    ecx,edx
  4dffe6: and    ecx,0x3
  4dffe9: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dffeb: mov    eax,DWORD PTR [esp+0x24]
  4dffef: mov    DWORD PTR [esp+0x28],ebp
  4dfff3: mov    BYTE PTR [eax+ebp*1],0x0
  4dfff7: mov    cl,BYTE PTR [esp+0xf]
  4dfffb: push   0x0
  4dfffd: mov    BYTE PTR [esp+0x14],cl
  4e0001: lea    ecx,[esp+0x14]
  4e0005: mov    DWORD PTR [esp+0xb8],0x0
  4e000c: 
  4e0010: call   0x4040a0
  4e0015: mov    edi,0x69a194 // ItemYOffset
  4e001a: or     ecx,0xffffffff // None
  4e001d: xor    eax,eax
  4e001f: push   0x1
  4e0021: repnz scas al,BYTE PTR es:[edi]
  4e0023: not    ecx
  4e0025: dec    ecx
  4e0026: mov    ebp,ecx
  4e0028: lea    ecx,[esp+0x14]
  4e002c: push   ebp
  4e002d: call   0x401940
  4e0032: test   al,al
  4e0034: je     0x4e005b
  4e0036: mov    edi,DWORD PTR [esp+0x14]
  4e003a: mov    ecx,ebp
  4e003c: mov    edx,ecx
  4e003e: mov    esi,0x69a194 // ItemYOffset
  4e0043: shr    ecx,0x2
  4e0046: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0048: mov    ecx,edx
  4e004a: and    ecx,0x3
  4e004d: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e004f: mov    eax,DWORD PTR [esp+0x14]
  4e0053: mov    DWORD PTR [esp+0x18],ebp
  4e0057: mov    BYTE PTR [eax+ebp*1],0x0
  4e005b: lea    ecx,[esp+0x30]
  4e005f: mov    BYTE PTR [esp+0xb4],0x1
  4e0066: 
  4e0067: push   ecx
  4e0068: call   0x43b450
  4e006d: add    esp,0x4
  4e0070: xor    edi,edi
  4e0072: lea    edx,[esp+0x20]
  4e0076: push   edi
  4e0077: push   eax
  4e0078: push   0x41900000
  4e007d: lea    eax,[esp+0x1c]
  4e0081: push   edx
  4e0082: push   eax
  4e0083: lea    ecx,[esp+0x54]
  4e0087: mov    BYTE PTR [esp+0xc8],0x2
  4e008e: 
  4e008f: call   0x5ac8b0
  4e0094: mov    esi,eax
  4e0096: fld    DWORD PTR [esi+0x60]
  4e0099: fcomp  DWORD PTR ds:0x64a450 // 0.0
  4e009f: mov    BYTE PTR [esp+0xb4],0x3
  4e00a6: 
  4e00a7: fnstsw ax
  4e00a9: test   ah,0x40
  4e00ac: je     0x4e00c4
  4e00ae: lea    ecx,[esp+0xf]
  4e00b2: lea    edx,[esi+0x14]
  4e00b5: push   ecx
  4e00b6: push   edx
  4e00b7: call   0x5ad390
  4e00bc: fst    DWORD PTR [esi+0x60]
  4e00bf: add    esp,0x8
  4e00c2: jmp    0x4e00c7
  4e00c4: fld    DWORD PTR [esi+0x60]
  4e00c7: fstp   DWORD PTR ds:0x6b9410 // None
  4e00cd: lea    ecx,[esp+0x40]
  4e00d1: mov    BYTE PTR [esp+0xb4],0x2
  4e00d8: 
  4e00d9: call   0x5acca0
  4e00de: mov    eax,DWORD PTR [esp+0x34]
  4e00e2: cmp    eax,edi
  4e00e4: je     0x4e0103
  4e00e6: lea    ecx,[eax-0x1]
  4e00e9: mov    al,BYTE PTR [eax-0x1]
  4e00ec: test   al,al
  4e00ee: je     0x4e00fa
  4e00f0: cmp    al,0xff
  4e00f2: je     0x4e00fa
  4e00f4: dec    al
  4e00f6: mov    BYTE PTR [ecx],al
  4e00f8: jmp    0x4e0103
  4e00fa: push   ecx
  4e00fb: call   0x5fe5f0
  4e0100: add    esp,0x4
  4e0103: mov    eax,DWORD PTR [esp+0x14]
  4e0107: mov    DWORD PTR [esp+0x34],edi
  4e010b: cmp    eax,edi
  4e010d: mov    DWORD PTR [esp+0x38],edi
  4e0111: mov    DWORD PTR [esp+0x3c],edi
  4e0115: je     0x4e0134
  4e0117: lea    ecx,[eax-0x1]
  4e011a: mov    al,BYTE PTR [eax-0x1]
  4e011d: test   al,al
  4e011f: je     0x4e012b
  4e0121: cmp    al,0xff
  4e0123: je     0x4e012b
  4e0125: dec    al
  4e0127: mov    BYTE PTR [ecx],al
  4e0129: jmp    0x4e0134
  4e012b: push   ecx
  4e012c: call   0x5fe5f0
  4e0131: add    esp,0x4
  4e0134: mov    eax,DWORD PTR [esp+0x24]
  4e0138: mov    DWORD PTR [esp+0x14],edi
  4e013c: mov    DWORD PTR [esp+0x18],edi
  4e0140: mov    DWORD PTR [esp+0x1c],edi
  4e0144: cmp    eax,edi
  4e0146: pop    edi
  4e0147: pop    esi
  4e0148: pop    ebp
  4e0149: je     0x4e017b
  4e014b: lea    ecx,[eax-0x1]
  4e014e: mov    al,BYTE PTR [eax-0x1]
  4e0151: test   al,al
  4e0153: je     0x4e0172
  4e0155: cmp    al,0xff
  4e0157: je     0x4e0172
  4e0159: dec    al
  4e015b: mov    BYTE PTR [ecx],al
  4e015d: mov    ecx,DWORD PTR [esp+0xa0]
  4e0164: mov    DWORD PTR fs:0x0,ecx
  4e016b: add    esp,0xac
  4e0171: ret
  4e0172: push   ecx
  4e0173: call   0x5fe5f0
  4e0178: add    esp,0x4
  4e017b: mov    ecx,DWORD PTR [esp+0xa0]
  4e0182: mov    DWORD PTR fs:0x0,ecx
  4e0189: add    esp,0xac
  4e018f: ret
  4e0190: jmp    0x4e01a0
  4e01a0: push   0xffffffff // None
  4e01a2: push   0x632501
  4e01a7: mov    eax,fs:0x0
  4e01ad: push   eax
  4e01ae: mov    DWORD PTR fs:0x0,esp
  4e01b5: sub    esp,0xa0
  4e01bb: mov    al,BYTE PTR [esp+0x3]
  4e01bf: push   ebx
  4e01c0: push   ebp
  4e01c1: push   esi
  4e01c2: xor    ebx,ebx
  4e01c4: push   edi
  4e01c5: push   ebx
  4e01c6: lea    ecx,[esp+0x28]
  4e01ca: mov    BYTE PTR [esp+0x28],al
  4e01ce: call   0x4040a0
  4e01d3: mov    edi,0x690810 // General
  4e01d8: or     ecx,0xffffffff // None
  4e01db: xor    eax,eax
  4e01dd: push   0x1
  4e01df: repnz scas al,BYTE PTR es:[edi]
  4e01e1: not    ecx
  4e01e3: dec    ecx
  4e01e4: mov    ebp,ecx
  4e01e6: lea    ecx,[esp+0x28]
  4e01ea: push   ebp
  4e01eb: call   0x401940
  4e01f0: test   al,al
  4e01f2: je     0x4e0218
  4e01f4: mov    edi,DWORD PTR [esp+0x28]
  4e01f8: mov    ecx,ebp
  4e01fa: mov    edx,ecx
  4e01fc: mov    esi,0x690810 // General
  4e0201: shr    ecx,0x2
  4e0204: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0206: mov    ecx,edx
  4e0208: and    ecx,0x3
  4e020b: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e020d: mov    eax,DWORD PTR [esp+0x28]
  4e0211: mov    DWORD PTR [esp+0x2c],ebp
  4e0215: mov    BYTE PTR [eax+ebp*1],bl
  4e0218: mov    cl,BYTE PTR [esp+0x13]
  4e021c: push   ebx
  4e021d: mov    BYTE PTR [esp+0x18],cl
  4e0221: lea    ecx,[esp+0x18]
  4e0225: mov    DWORD PTR [esp+0xbc],ebx
  4e022c: call   0x4040a0
  4e0231: mov    edi,0x69a1a0 // Float
  4e0236: or     ecx,0xffffffff // None
  4e0239: xor    eax,eax
  4e023b: push   0x1
  4e023d: repnz scas al,BYTE PTR es:[edi]
  4e023f: not    ecx
  4e0241: dec    ecx
  4e0242: mov    ebp,ecx
  4e0244: lea    ecx,[esp+0x18]
  4e0248: push   ebp
  4e0249: call   0x401940
  4e024e: test   al,al
  4e0250: je     0x4e0276
  4e0252: mov    edi,DWORD PTR [esp+0x18]
  4e0256: mov    ecx,ebp
  4e0258: mov    edx,ecx
  4e025a: mov    esi,0x69a1a0 // Float
  4e025f: shr    ecx,0x2
  4e0262: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0264: mov    ecx,edx
  4e0266: and    ecx,0x3
  4e0269: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e026b: mov    eax,DWORD PTR [esp+0x18]
  4e026f: mov    DWORD PTR [esp+0x1c],ebp
  4e0273: mov    BYTE PTR [eax+ebp*1],bl
  4e0276: lea    ecx,[esp+0x34]
  4e027a: mov    BYTE PTR [esp+0xb8],0x1
  4e0281: 
  4e0282: push   ecx
  4e0283: call   0x43b450
  4e0288: add    esp,0x4
  4e028b: push   ebx
  4e028c: push   eax
  4e028d: lea    edx,[esp+0x2c]
  4e0291: push   ebx
  4e0292: lea    eax,[esp+0x20]
  4e0296: push   edx
  4e0297: push   eax
  4e0298: lea    ecx,[esp+0x58]
  4e029c: mov    BYTE PTR [esp+0xcc],0x2
  4e02a3: 
  4e02a4: call   0x5ac9d0
  4e02a9: mov    esi,eax
  4e02ab: mov    eax,DWORD PTR [esi+0x64]
  4e02ae: cmp    eax,0x80000000 // None
  4e02b3: jne    0x4e02cd
  4e02b5: mov    eax,DWORD PTR [esi+0x18]
  4e02b8: cmp    eax,ebx
  4e02ba: jne    0x4e02c1
  4e02bc: mov    eax,0x64a3b4 // 0.0
  4e02c1: push   eax
  4e02c2: call   0x60af10
  4e02c7: add    esp,0x4
  4e02ca: mov    DWORD PTR [esi+0x64],eax
  4e02cd: cmp    eax,ebx
  4e02cf: setne  cl
  4e02d2: mov    BYTE PTR ds:0x6b940c,cl // None
  4e02d8: lea    ecx,[esp+0x44]
  4e02dc: call   0x5acca0
  4e02e1: mov    eax,DWORD PTR [esp+0x38]
  4e02e5: cmp    eax,ebx
  4e02e7: je     0x4e0306
  4e02e9: lea    ecx,[eax-0x1]
  4e02ec: mov    al,BYTE PTR [eax-0x1]
  4e02ef: cmp    al,bl
  4e02f1: je     0x4e02fd
  4e02f3: cmp    al,0xff
  4e02f5: je     0x4e02fd
  4e02f7: dec    al
  4e02f9: mov    BYTE PTR [ecx],al
  4e02fb: jmp    0x4e0306
  4e02fd: push   ecx
  4e02fe: call   0x5fe5f0
  4e0303: add    esp,0x4
  4e0306: mov    eax,DWORD PTR [esp+0x18]
  4e030a: mov    DWORD PTR [esp+0x38],ebx
  4e030e: cmp    eax,ebx
  4e0310: mov    DWORD PTR [esp+0x3c],ebx
  4e0314: mov    DWORD PTR [esp+0x40],ebx
  4e0318: je     0x4e0337
  4e031a: lea    ecx,[eax-0x1]
  4e031d: mov    al,BYTE PTR [eax-0x1]
  4e0320: cmp    al,bl
  4e0322: je     0x4e032e
  4e0324: cmp    al,0xff
  4e0326: je     0x4e032e
  4e0328: dec    al
  4e032a: mov    BYTE PTR [ecx],al
  4e032c: jmp    0x4e0337
  4e032e: push   ecx
  4e032f: call   0x5fe5f0
  4e0334: add    esp,0x4
  4e0337: mov    eax,DWORD PTR [esp+0x28]
  4e033b: mov    DWORD PTR [esp+0x18],ebx
  4e033f: cmp    eax,ebx
  4e0341: mov    DWORD PTR [esp+0x1c],ebx
  4e0345: mov    DWORD PTR [esp+0x20],ebx
  4e0349: je     0x4e0368
  4e034b: lea    ecx,[eax-0x1]
  4e034e: mov    al,BYTE PTR [eax-0x1]
  4e0351: cmp    al,bl
  4e0353: je     0x4e035f
  4e0355: cmp    al,0xff
  4e0357: je     0x4e035f
  4e0359: dec    al
  4e035b: mov    BYTE PTR [ecx],al
  4e035d: jmp    0x4e0368
  4e035f: push   ecx
  4e0360: call   0x5fe5f0
  4e0365: add    esp,0x4
  4e0368: mov    ecx,DWORD PTR [esp+0xb0]
  4e036f: pop    edi
  4e0370: pop    esi
  4e0371: pop    ebp
  4e0372: pop    ebx
  4e0373: mov    DWORD PTR fs:0x0,ecx
  4e037a: add    esp,0xac
  4e0380: ret
  4e0390: jmp    0x4e03a0
  4e03a0: push   0xffffffff // None
  4e03a2: push   0x632539
  4e03a7: mov    eax,fs:0x0
  4e03ad: push   eax
  4e03ae: mov    DWORD PTR fs:0x0,esp
  4e03b5: sub    esp,0xa0
  4e03bb: mov    al,BYTE PTR [esp+0x3]
  4e03bf: push   ebp
  4e03c0: push   esi
  4e03c1: push   edi
  4e03c2: push   0x0
  4e03c4: lea    ecx,[esp+0x24]
  4e03c8: mov    BYTE PTR [esp+0x24],al
  4e03cc: call   0x4040a0
  4e03d1: mov    edi,0x690810 // General
  4e03d6: or     ecx,0xffffffff // None
  4e03d9: xor    eax,eax
  4e03db: push   0x1
  4e03dd: repnz scas al,BYTE PTR es:[edi]
  4e03df: not    ecx
  4e03e1: dec    ecx
  4e03e2: mov    ebp,ecx
  4e03e4: lea    ecx,[esp+0x24]
  4e03e8: push   ebp
  4e03e9: call   0x401940
  4e03ee: test   al,al
  4e03f0: je     0x4e0417
  4e03f2: mov    edi,DWORD PTR [esp+0x24]
  4e03f6: mov    ecx,ebp
  4e03f8: mov    edx,ecx
  4e03fa: mov    esi,0x690810 // General
  4e03ff: shr    ecx,0x2
  4e0402: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0404: mov    ecx,edx
  4e0406: and    ecx,0x3
  4e0409: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e040b: mov    eax,DWORD PTR [esp+0x24]
  4e040f: mov    DWORD PTR [esp+0x28],ebp
  4e0413: mov    BYTE PTR [eax+ebp*1],0x0
  4e0417: mov    cl,BYTE PTR [esp+0xf]
  4e041b: push   0x0
  4e041d: mov    BYTE PTR [esp+0x14],cl
  4e0421: lea    ecx,[esp+0x14]
  4e0425: mov    DWORD PTR [esp+0xb8],0x0
  4e042c: 
  4e0430: call   0x4040a0
  4e0435: mov    edi,0x69a1a8 // FloatSpeed
  4e043a: or     ecx,0xffffffff // None
  4e043d: xor    eax,eax
  4e043f: push   0x1
  4e0441: repnz scas al,BYTE PTR es:[edi]
  4e0443: not    ecx
  4e0445: dec    ecx
  4e0446: mov    ebp,ecx
  4e0448: lea    ecx,[esp+0x14]
  4e044c: push   ebp
  4e044d: call   0x401940
  4e0452: test   al,al
  4e0454: je     0x4e047b
  4e0456: mov    edi,DWORD PTR [esp+0x14]
  4e045a: mov    ecx,ebp
  4e045c: mov    edx,ecx
  4e045e: mov    esi,0x69a1a8 // FloatSpeed
  4e0463: shr    ecx,0x2
  4e0466: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0468: mov    ecx,edx
  4e046a: and    ecx,0x3
  4e046d: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e046f: mov    eax,DWORD PTR [esp+0x14]
  4e0473: mov    DWORD PTR [esp+0x18],ebp
  4e0477: mov    BYTE PTR [eax+ebp*1],0x0
  4e047b: lea    ecx,[esp+0x30]
  4e047f: mov    BYTE PTR [esp+0xb4],0x1
  4e0486: 
  4e0487: push   ecx
  4e0488: call   0x43b450
  4e048d: add    esp,0x4
  4e0490: xor    edi,edi
  4e0492: lea    edx,[esp+0x20]
  4e0496: push   edi
  4e0497: push   eax
  4e0498: push   0x3f800000
  4e049d: lea    eax,[esp+0x1c]
  4e04a1: push   edx
  4e04a2: push   eax
  4e04a3: lea    ecx,[esp+0x54]
  4e04a7: mov    BYTE PTR [esp+0xc8],0x2
  4e04ae: 
  4e04af: call   0x5ac8b0
  4e04b4: mov    esi,eax
  4e04b6: fld    DWORD PTR [esi+0x60]
  4e04b9: fcomp  DWORD PTR ds:0x64a450 // 0.0
  4e04bf: mov    BYTE PTR [esp+0xb4],0x3
  4e04c6: 
  4e04c7: fnstsw ax
  4e04c9: test   ah,0x40
  4e04cc: je     0x4e04e4
  4e04ce: lea    ecx,[esp+0xf]
  4e04d2: lea    edx,[esi+0x14]
  4e04d5: push   ecx
  4e04d6: push   edx
  4e04d7: call   0x5ad390
  4e04dc: fst    DWORD PTR [esi+0x60]
  4e04df: add    esp,0x8
  4e04e2: jmp    0x4e04e7
  4e04e4: fld    DWORD PTR [esi+0x60]
  4e04e7: fld    DWORD PTR ds:0x64b1d8 // 6.2831854820251465
  4e04ed: fdiv   st,st(1)
  4e04ef: lea    ecx,[esp+0x40]
  4e04f3: mov    BYTE PTR [esp+0xb4],0x2
  4e04fa: 
  4e04fb: fstp   DWORD PTR ds:0x6b9408 // None
  4e0501: fstp   st(0)
  4e0503: call   0x5acca0
  4e0508: mov    eax,DWORD PTR [esp+0x34]
  4e050c: cmp    eax,edi
  4e050e: je     0x4e052d
  4e0510: lea    ecx,[eax-0x1]
  4e0513: mov    al,BYTE PTR [eax-0x1]
  4e0516: test   al,al
  4e0518: je     0x4e0524
  4e051a: cmp    al,0xff
  4e051c: je     0x4e0524
  4e051e: dec    al
  4e0520: mov    BYTE PTR [ecx],al
  4e0522: jmp    0x4e052d
  4e0524: push   ecx
  4e0525: call   0x5fe5f0
  4e052a: add    esp,0x4
  4e052d: mov    eax,DWORD PTR [esp+0x14]
  4e0531: mov    DWORD PTR [esp+0x34],edi
  4e0535: cmp    eax,edi
  4e0537: mov    DWORD PTR [esp+0x38],edi
  4e053b: mov    DWORD PTR [esp+0x3c],edi
  4e053f: je     0x4e055e
  4e0541: lea    ecx,[eax-0x1]
  4e0544: mov    al,BYTE PTR [eax-0x1]
  4e0547: test   al,al
  4e0549: je     0x4e0555
  4e054b: cmp    al,0xff
  4e054d: je     0x4e0555
  4e054f: dec    al
  4e0551: mov    BYTE PTR [ecx],al
  4e0553: jmp    0x4e055e
  4e0555: push   ecx
  4e0556: call   0x5fe5f0
  4e055b: add    esp,0x4
  4e055e: mov    eax,DWORD PTR [esp+0x24]
  4e0562: mov    DWORD PTR [esp+0x14],edi
  4e0566: mov    DWORD PTR [esp+0x18],edi
  4e056a: mov    DWORD PTR [esp+0x1c],edi
  4e056e: cmp    eax,edi
  4e0570: pop    edi
  4e0571: pop    esi
  4e0572: pop    ebp
  4e0573: je     0x4e05a5
  4e0575: lea    ecx,[eax-0x1]
  4e0578: mov    al,BYTE PTR [eax-0x1]
  4e057b: test   al,al
  4e057d: je     0x4e059c
  4e057f: cmp    al,0xff
  4e0581: je     0x4e059c
  4e0583: dec    al
  4e0585: mov    BYTE PTR [ecx],al
  4e0587: mov    ecx,DWORD PTR [esp+0xa0]
  4e058e: mov    DWORD PTR fs:0x0,ecx
  4e0595: add    esp,0xac
  4e059b: ret
  4e059c: push   ecx
  4e059d: call   0x5fe5f0
  4e05a2: add    esp,0x4
  4e05a5: mov    ecx,DWORD PTR [esp+0xa0]
  4e05ac: mov    DWORD PTR fs:0x0,ecx
  4e05b3: add    esp,0xac
  4e05b9: ret
  4e05c0: jmp    0x4e05d0
  4e05d0: push   0xffffffff // None
  4e05d2: push   0x632579
  4e05d7: mov    eax,fs:0x0
  4e05dd: push   eax
  4e05de: mov    DWORD PTR fs:0x0,esp
  4e05e5: sub    esp,0xa0
  4e05eb: mov    al,BYTE PTR [esp+0x3]
  4e05ef: push   ebp
  4e05f0: push   esi
  4e05f1: push   edi
  4e05f2: push   0x0
  4e05f4: lea    ecx,[esp+0x24]
  4e05f8: mov    BYTE PTR [esp+0x24],al
  4e05fc: call   0x4040a0
  4e0601: mov    edi,0x690810 // General
  4e0606: or     ecx,0xffffffff // None
  4e0609: xor    eax,eax
  4e060b: push   0x1
  4e060d: repnz scas al,BYTE PTR es:[edi]
  4e060f: not    ecx
  4e0611: dec    ecx
  4e0612: mov    ebp,ecx
  4e0614: lea    ecx,[esp+0x24]
  4e0618: push   ebp
  4e0619: call   0x401940
  4e061e: test   al,al
  4e0620: je     0x4e0647
  4e0622: mov    edi,DWORD PTR [esp+0x24]
  4e0626: mov    ecx,ebp
  4e0628: mov    edx,ecx
  4e062a: mov    esi,0x690810 // General
  4e062f: shr    ecx,0x2
  4e0632: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0634: mov    ecx,edx
  4e0636: and    ecx,0x3
  4e0639: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e063b: mov    eax,DWORD PTR [esp+0x24]
  4e063f: mov    DWORD PTR [esp+0x28],ebp
  4e0643: mov    BYTE PTR [eax+ebp*1],0x0
  4e0647: mov    cl,BYTE PTR [esp+0xf]
  4e064b: push   0x0
  4e064d: mov    BYTE PTR [esp+0x14],cl
  4e0651: lea    ecx,[esp+0x14]
  4e0655: mov    DWORD PTR [esp+0xb8],0x0
  4e065c: 
  4e0660: call   0x4040a0
  4e0665: mov    edi,0x69a1b4 // FloatAmplitude
  4e066a: or     ecx,0xffffffff // None
  4e066d: xor    eax,eax
  4e066f: push   0x1
  4e0671: repnz scas al,BYTE PTR es:[edi]
  4e0673: not    ecx
  4e0675: dec    ecx
  4e0676: mov    ebp,ecx
  4e0678: lea    ecx,[esp+0x14]
  4e067c: push   ebp
  4e067d: call   0x401940
  4e0682: test   al,al
  4e0684: je     0x4e06ab
  4e0686: mov    edi,DWORD PTR [esp+0x14]
  4e068a: mov    ecx,ebp
  4e068c: mov    edx,ecx
  4e068e: mov    esi,0x69a1b4 // FloatAmplitude
  4e0693: shr    ecx,0x2
  4e0696: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0698: mov    ecx,edx
  4e069a: and    ecx,0x3
  4e069d: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e069f: mov    eax,DWORD PTR [esp+0x14]
  4e06a3: mov    DWORD PTR [esp+0x18],ebp
  4e06a7: mov    BYTE PTR [eax+ebp*1],0x0
  4e06ab: lea    ecx,[esp+0x30]
  4e06af: mov    BYTE PTR [esp+0xb4],0x1
  4e06b6: 
  4e06b7: push   ecx
  4e06b8: call   0x43b450
  4e06bd: add    esp,0x4
  4e06c0: xor    edi,edi
  4e06c2: lea    edx,[esp+0x20]
  4e06c6: push   edi
  4e06c7: push   eax
  4e06c8: push   0x3e800000
  4e06cd: lea    eax,[esp+0x1c]
  4e06d1: push   edx
  4e06d2: push   eax
  4e06d3: lea    ecx,[esp+0x54]
  4e06d7: mov    BYTE PTR [esp+0xc8],0x2
  4e06de: 
  4e06df: call   0x5ac8b0
  4e06e4: mov    esi,eax
  4e06e6: fld    DWORD PTR [esi+0x60]
  4e06e9: fcomp  DWORD PTR ds:0x64a450 // 0.0
  4e06ef: mov    BYTE PTR [esp+0xb4],0x3
  4e06f6: 
  4e06f7: fnstsw ax
  4e06f9: test   ah,0x40
  4e06fc: je     0x4e0714
  4e06fe: lea    ecx,[esp+0xf]
  4e0702: lea    edx,[esi+0x14]
  4e0705: push   ecx
  4e0706: push   edx
  4e0707: call   0x5ad390
  4e070c: fst    DWORD PTR [esi+0x60]
  4e070f: add    esp,0x8
  4e0712: jmp    0x4e0717
  4e0714: fld    DWORD PTR [esi+0x60]
  4e0717: fld    DWORD PTR ds:0x64f268 // 32.0
  4e071d: fmul   st,st(1)
  4e071f: lea    ecx,[esp+0x40]
  4e0723: mov    BYTE PTR [esp+0xb4],0x2
  4e072a: 
  4e072b: fstp   DWORD PTR ds:0x6b9404 // None
  4e0731: fstp   st(0)
  4e0733: call   0x5acca0
  4e0738: mov    eax,DWORD PTR [esp+0x34]
  4e073c: cmp    eax,edi
  4e073e: je     0x4e075d
  4e0740: lea    ecx,[eax-0x1]
  4e0743: mov    al,BYTE PTR [eax-0x1]
  4e0746: test   al,al
  4e0748: je     0x4e0754
  4e074a: cmp    al,0xff
  4e074c: je     0x4e0754
  4e074e: dec    al
  4e0750: mov    BYTE PTR [ecx],al
  4e0752: jmp    0x4e075d
  4e0754: push   ecx
  4e0755: call   0x5fe5f0
  4e075a: add    esp,0x4
  4e075d: mov    eax,DWORD PTR [esp+0x14]
  4e0761: mov    DWORD PTR [esp+0x34],edi
  4e0765: cmp    eax,edi
  4e0767: mov    DWORD PTR [esp+0x38],edi
  4e076b: mov    DWORD PTR [esp+0x3c],edi
  4e076f: je     0x4e078e
  4e0771: lea    ecx,[eax-0x1]
  4e0774: mov    al,BYTE PTR [eax-0x1]
  4e0777: test   al,al
  4e0779: je     0x4e0785
  4e077b: cmp    al,0xff
  4e077d: je     0x4e0785
  4e077f: dec    al
  4e0781: mov    BYTE PTR [ecx],al
  4e0783: jmp    0x4e078e
  4e0785: push   ecx
  4e0786: call   0x5fe5f0
  4e078b: add    esp,0x4
  4e078e: mov    eax,DWORD PTR [esp+0x24]
  4e0792: mov    DWORD PTR [esp+0x14],edi
  4e0796: mov    DWORD PTR [esp+0x18],edi
  4e079a: mov    DWORD PTR [esp+0x1c],edi
  4e079e: cmp    eax,edi
  4e07a0: pop    edi
  4e07a1: pop    esi
  4e07a2: pop    ebp
  4e07a3: je     0x4e07d5
  4e07a5: lea    ecx,[eax-0x1]
  4e07a8: mov    al,BYTE PTR [eax-0x1]
  4e07ab: test   al,al
  4e07ad: je     0x4e07cc
  4e07af: cmp    al,0xff
  4e07b1: je     0x4e07cc
  4e07b3: dec    al
  4e07b5: mov    BYTE PTR [ecx],al
  4e07b7: mov    ecx,DWORD PTR [esp+0xa0]
  4e07be: mov    DWORD PTR fs:0x0,ecx
  4e07c5: add    esp,0xac
  4e07cb: ret
  4e07cc: push   ecx
  4e07cd: call   0x5fe5f0
  4e07d2: add    esp,0x4
  4e07d5: mov    ecx,DWORD PTR [esp+0xa0]
  4e07dc: mov    DWORD PTR fs:0x0,ecx
  4e07e3: add    esp,0xac
  4e07e9: ret
  4e07f0: jmp    0x4e0800
  4e0800: push   0xffffffff // None
  4e0802: push   0x6325b9
  4e0807: mov    eax,fs:0x0
  4e080d: push   eax
  4e080e: mov    DWORD PTR fs:0x0,esp
  4e0815: sub    esp,0xa0
  4e081b: mov    al,BYTE PTR [esp+0x3]
  4e081f: push   ebp
  4e0820: push   esi
  4e0821: push   edi
  4e0822: push   0x0
  4e0824: lea    ecx,[esp+0x24]
  4e0828: mov    BYTE PTR [esp+0x24],al
  4e082c: call   0x4040a0
  4e0831: mov    edi,0x690810 // General
  4e0836: or     ecx,0xffffffff // None
  4e0839: xor    eax,eax
  4e083b: push   0x1
  4e083d: repnz scas al,BYTE PTR es:[edi]
  4e083f: not    ecx
  4e0841: dec    ecx
  4e0842: mov    ebp,ecx
  4e0844: lea    ecx,[esp+0x24]
  4e0848: push   ebp
  4e0849: call   0x401940
  4e084e: test   al,al
  4e0850: je     0x4e0877
  4e0852: mov    edi,DWORD PTR [esp+0x24]
  4e0856: mov    ecx,ebp
  4e0858: mov    edx,ecx
  4e085a: mov    esi,0x690810 // General
  4e085f: shr    ecx,0x2
  4e0862: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0864: mov    ecx,edx
  4e0866: and    ecx,0x3
  4e0869: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e086b: mov    eax,DWORD PTR [esp+0x24]
  4e086f: mov    DWORD PTR [esp+0x28],ebp
  4e0873: mov    BYTE PTR [eax+ebp*1],0x0
  4e0877: mov    cl,BYTE PTR [esp+0xf]
  4e087b: push   0x0
  4e087d: mov    BYTE PTR [esp+0x14],cl
  4e0881: lea    ecx,[esp+0x14]
  4e0885: mov    DWORD PTR [esp+0xb8],0x0
  4e088c: 
  4e0890: call   0x4040a0
  4e0895: mov    edi,0x69a1c4 // FloatHeight
  4e089a: or     ecx,0xffffffff // None
  4e089d: xor    eax,eax
  4e089f: push   0x1
  4e08a1: repnz scas al,BYTE PTR es:[edi]
  4e08a3: not    ecx
  4e08a5: dec    ecx
  4e08a6: mov    ebp,ecx
  4e08a8: lea    ecx,[esp+0x14]
  4e08ac: push   ebp
  4e08ad: call   0x401940
  4e08b2: test   al,al
  4e08b4: je     0x4e08db
  4e08b6: mov    edi,DWORD PTR [esp+0x14]
  4e08ba: mov    ecx,ebp
  4e08bc: mov    edx,ecx
  4e08be: mov    esi,0x69a1c4 // FloatHeight
  4e08c3: shr    ecx,0x2
  4e08c6: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e08c8: mov    ecx,edx
  4e08ca: and    ecx,0x3
  4e08cd: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e08cf: mov    eax,DWORD PTR [esp+0x14]
  4e08d3: mov    DWORD PTR [esp+0x18],ebp
  4e08d7: mov    BYTE PTR [eax+ebp*1],0x0
  4e08db: lea    ecx,[esp+0x30]
  4e08df: mov    BYTE PTR [esp+0xb4],0x1
  4e08e6: 
  4e08e7: push   ecx
  4e08e8: call   0x43b450
  4e08ed: add    esp,0x4
  4e08f0: xor    edi,edi
  4e08f2: lea    edx,[esp+0x20]
  4e08f6: push   edi
  4e08f7: push   eax
  4e08f8: push   0x3f000000
  4e08fd: lea    eax,[esp+0x1c]
  4e0901: push   edx
  4e0902: push   eax
  4e0903: lea    ecx,[esp+0x54]
  4e0907: mov    BYTE PTR [esp+0xc8],0x2
  4e090e: 
  4e090f: call   0x5ac8b0
  4e0914: mov    esi,eax
  4e0916: fld    DWORD PTR [esi+0x60]
  4e0919: fcomp  DWORD PTR ds:0x64a450 // 0.0
  4e091f: mov    BYTE PTR [esp+0xb4],0x3
  4e0926: 
  4e0927: fnstsw ax
  4e0929: test   ah,0x40
  4e092c: je     0x4e0944
  4e092e: lea    ecx,[esp+0xf]
  4e0932: lea    edx,[esi+0x14]
  4e0935: push   ecx
  4e0936: push   edx
  4e0937: call   0x5ad390
  4e093c: fst    DWORD PTR [esi+0x60]
  4e093f: add    esp,0x8
  4e0942: jmp    0x4e0947
  4e0944: fld    DWORD PTR [esi+0x60]
  4e0947: fld    DWORD PTR ds:0x64f268 // 32.0
  4e094d: fmul   st,st(1)
  4e094f: lea    ecx,[esp+0x40]
  4e0953: mov    BYTE PTR [esp+0xb4],0x2
  4e095a: 
  4e095b: fstp   DWORD PTR ds:0x6b9400 // None
  4e0961: fstp   st(0)
  4e0963: call   0x5acca0
  4e0968: mov    eax,DWORD PTR [esp+0x34]
  4e096c: cmp    eax,edi
  4e096e: je     0x4e098d
  4e0970: lea    ecx,[eax-0x1]
  4e0973: mov    al,BYTE PTR [eax-0x1]
  4e0976: test   al,al
  4e0978: je     0x4e0984
  4e097a: cmp    al,0xff
  4e097c: je     0x4e0984
  4e097e: dec    al
  4e0980: mov    BYTE PTR [ecx],al
  4e0982: jmp    0x4e098d
  4e0984: push   ecx
  4e0985: call   0x5fe5f0
  4e098a: add    esp,0x4
  4e098d: mov    eax,DWORD PTR [esp+0x14]
  4e0991: mov    DWORD PTR [esp+0x34],edi
  4e0995: cmp    eax,edi
  4e0997: mov    DWORD PTR [esp+0x38],edi
  4e099b: mov    DWORD PTR [esp+0x3c],edi
  4e099f: je     0x4e09be
  4e09a1: lea    ecx,[eax-0x1]
  4e09a4: mov    al,BYTE PTR [eax-0x1]
  4e09a7: test   al,al
  4e09a9: je     0x4e09b5
  4e09ab: cmp    al,0xff
  4e09ad: je     0x4e09b5
  4e09af: dec    al
  4e09b1: mov    BYTE PTR [ecx],al
  4e09b3: jmp    0x4e09be
  4e09b5: push   ecx
  4e09b6: call   0x5fe5f0
  4e09bb: add    esp,0x4
  4e09be: mov    eax,DWORD PTR [esp+0x24]
  4e09c2: mov    DWORD PTR [esp+0x14],edi
  4e09c6: mov    DWORD PTR [esp+0x18],edi
  4e09ca: mov    DWORD PTR [esp+0x1c],edi
  4e09ce: cmp    eax,edi
  4e09d0: pop    edi
  4e09d1: pop    esi
  4e09d2: pop    ebp
  4e09d3: je     0x4e0a05
  4e09d5: lea    ecx,[eax-0x1]
  4e09d8: mov    al,BYTE PTR [eax-0x1]
  4e09db: test   al,al
  4e09dd: je     0x4e09fc
  4e09df: cmp    al,0xff
  4e09e1: je     0x4e09fc
  4e09e3: dec    al
  4e09e5: mov    BYTE PTR [ecx],al
  4e09e7: mov    ecx,DWORD PTR [esp+0xa0]
  4e09ee: mov    DWORD PTR fs:0x0,ecx
  4e09f5: add    esp,0xac
  4e09fb: ret
  4e09fc: push   ecx
  4e09fd: call   0x5fe5f0
  4e0a02: add    esp,0x4
  4e0a05: mov    ecx,DWORD PTR [esp+0xa0]
  4e0a0c: mov    DWORD PTR fs:0x0,ecx
  4e0a13: add    esp,0xac
  4e0a19: ret
  4e0a20: jmp    0x4e0a30
  4e0a30: push   0xffffffff // None
  4e0a32: push   0x6325f9
  4e0a37: mov    eax,fs:0x0
  4e0a3d: push   eax
  4e0a3e: mov    DWORD PTR fs:0x0,esp
  4e0a45: sub    esp,0xa0
  4e0a4b: mov    al,BYTE PTR [esp+0x3]
  4e0a4f: push   ebp
  4e0a50: push   esi
  4e0a51: push   edi
  4e0a52: push   0x0
  4e0a54: lea    ecx,[esp+0x24]
  4e0a58: mov    BYTE PTR [esp+0x24],al
  4e0a5c: call   0x4040a0
  4e0a61: mov    edi,0x690810 // General
  4e0a66: or     ecx,0xffffffff // None
  4e0a69: xor    eax,eax
  4e0a6b: push   0x1
  4e0a6d: repnz scas al,BYTE PTR es:[edi]
  4e0a6f: not    ecx
  4e0a71: dec    ecx
  4e0a72: mov    ebp,ecx
  4e0a74: lea    ecx,[esp+0x24]
  4e0a78: push   ebp
  4e0a79: call   0x401940
  4e0a7e: test   al,al
  4e0a80: je     0x4e0aa7
  4e0a82: mov    edi,DWORD PTR [esp+0x24]
  4e0a86: mov    ecx,ebp
  4e0a88: mov    edx,ecx
  4e0a8a: mov    esi,0x690810 // General
  4e0a8f: shr    ecx,0x2
  4e0a92: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0a94: mov    ecx,edx
  4e0a96: and    ecx,0x3
  4e0a99: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e0a9b: mov    eax,DWORD PTR [esp+0x24]
  4e0a9f: mov    DWORD PTR [esp+0x28],ebp
  4e0aa3: mov    BYTE PTR [eax+ebp*1],0x0
  4e0aa7: mov    cl,BYTE PTR [esp+0xf]
  4e0aab: push   0x0
  4e0aad: mov    BYTE PTR [esp+0x14],cl
  4e0ab1: lea    ecx,[esp+0x14]
  4e0ab5: mov    DWORD PTR [esp+0xb8],0x0
  4e0abc: 
  4e0ac0: call   0x4040a0
  4e0ac5: mov    edi,0x69a1d0 // RotateSpeed
  4e0aca: or     ecx,0xffffffff // None
  4e0acd: xor    eax,eax
  4e0acf: push   0x1
  4e0ad1: repnz scas al,BYTE PTR es:[edi]
  4e0ad3: not    ecx
  4e0ad5: dec    ecx
  4e0ad6: mov    ebp,ecx
  4e0ad8: lea    ecx,[esp+0x14]
  4e0adc: push   ebp
  4e0add: call   0x401940
  4e0ae2: test   al,al
  4e0ae4: je     0x4e0b0b
  4e0ae6: mov    edi,DWORD PTR [esp+0x14]
  4e0aea: mov    ecx,ebp
  4e0aec: mov    edx,ecx
  4e0aee: mov    esi,0x69a1d0 // RotateSpeed
  4e0af3: shr    ecx,0x2
  4e0af6: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4e0af8: mov    ecx,edx
  4e0afa: and    ecx,0x3
  4e0afd: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4e0aff: mov    eax,DWORD PTR [esp+0x14]
  4e0b03: mov    DWORD PTR [esp+0x18],ebp
  4e0b07: mov    BYTE PTR [eax+ebp*1],0x0
  4e0b0b: lea    ecx,[esp+0x30]
  4e0b0f: mov    BYTE PTR [esp+0xb4],0x1
  4e0b16: 
  4e0b17: push   ecx
  4e0b18: call   0x43b450
  4e0b1d: add    esp,0x4
  4e0b20: xor    edi,edi
  4e0b22: lea    edx,[esp+0x20]
  4e0b26: push   edi
  4e0b27: push   eax
  4e0b28: push   0x40000000
  4e0b2d: lea    eax,[esp+0x1c]
  4e0b31: push   edx
  4e0b32: push   eax
  4e0b33: lea    ecx,[esp+0x54]
  4e0b37: mov    BYTE PTR [esp+0xc8],0x2
  4e0b3e: 
  4e0b3f: call   0x5ac8b0
  4e0b44: mov    esi,eax
  4e0b46: fld    DWORD PTR [esi+0x60]
  4e0b49: fcomp  DWORD PTR ds:0x64a450 // 0.0
  4e0b4f: mov    BYTE PTR [esp+0xb4],0x3
  4e0b56: 
  4e0b57: fnstsw ax
  4e0b59: test   ah,0x40
  4e0b5c: je     0x4e0b74
  4e0b5e: lea    ecx,[esp+0xf]
  4e0b62: lea    edx,[esi+0x14]
  4e0b65: push   ecx
  4e0b66: push   edx
  4e0b67: call   0x5ad390
  4e0b6c: fst    DWORD PTR [esi+0x60]
  4e0b6f: add    esp,0x8
  4e0b72: jmp    0x4e0b77
  4e0b74: fld    DWORD PTR [esi+0x60]
  4e0b77: fld    DWORD PTR ds:0x64b1d8 // 6.2831854820251465
  4e0b7d: fdiv   st,st(1)
  4e0b7f: lea    ecx,[esp+0x40]
  4e0b83: mov    BYTE PTR [esp+0xb4],0x2
  4e0b8a: 
  4e0b8b: fstp   DWORD PTR ds:0x6b93fc // None
  4e0b91: fstp   st(0)
  4e0b93: call   0x5acca0
  4e0b98: mov    eax,DWORD PTR [esp+0x34]
  4e0b9c: cmp    eax,edi
  4e0b9e: je     0x4e0bbd
  4e0ba0: lea    ecx,[eax-0x1]
  4e0ba3: mov    al,BYTE PTR [eax-0x1]
  4e0ba6: test   al,al
  4e0ba8: je     0x4e0bb4
  4e0baa: cmp    al,0xff
  4e0bac: je     0x4e0bb4
  4e0bae: dec    al
  4e0bb0: mov    BYTE PTR [ecx],al
  4e0bb2: jmp    0x4e0bbd
  4e0bb4: push   ecx
  4e0bb5: call   0x5fe5f0
  4e0bba: add    esp,0x4
  4e0bbd: mov    eax,DWORD PTR [esp+0x14]
  4e0bc1: mov    DWORD PTR [esp+0x34],edi
  4e0bc5: cmp    eax,edi
  4e0bc7: mov    DWORD PTR [esp+0x38],edi
  4e0bcb: mov    DWORD PTR [esp+0x3c],edi
  4e0bcf: je     0x4e0bee
  4e0bd1: lea    ecx,[eax-0x1]
  4e0bd4: mov    al,BYTE PTR [eax-0x1]
  4e0bd7: test   al,al
  4e0bd9: je     0x4e0be5
  4e0bdb: cmp    al,0xff
  4e0bdd: je     0x4e0be5
  4e0bdf: dec    al
  4e0be1: mov    BYTE PTR [ecx],al
  4e0be3: jmp    0x4e0bee
  4e0be5: push   ecx
  4e0be6: call   0x5fe5f0
  4e0beb: add    esp,0x4
  4e0bee: mov    eax,DWORD PTR [esp+0x24]
  4e0bf2: mov    DWORD PTR [esp+0x14],edi
  4e0bf6: mov    DWORD PTR [esp+0x18],edi
  4e0bfa: mov    DWORD PTR [esp+0x1c],edi
  4e0bfe: cmp    eax,edi
  4e0c00: pop    edi
  4e0c01: pop    esi
  4e0c02: pop    ebp
  4e0c03: je     0x4e0c35
  4e0c05: lea    ecx,[eax-0x1]
  4e0c08: mov    al,BYTE PTR [eax-0x1]
  4e0c0b: test   al,al
  4e0c0d: je     0x4e0c2c
  4e0c0f: cmp    al,0xff
  4e0c11: je     0x4e0c2c
  4e0c13: dec    al
  4e0c15: mov    BYTE PTR [ecx],al
  4e0c17: mov    ecx,DWORD PTR [esp+0xa0]
  4e0c1e: mov    DWORD PTR fs:0x0,ecx
  4e0c25: add    esp,0xac
  4e0c2b: ret
  4e0c2c: push   ecx
  4e0c2d: call   0x5fe5f0
  4e0c32: add    esp,0x4
  4e0c35: mov    ecx,DWORD PTR [esp+0xa0]
  4e0c3c: mov    DWORD PTR fs:0x0,ecx
  4e0c43: add    esp,0xac
  4e0c49: ret
