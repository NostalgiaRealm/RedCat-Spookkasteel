004a1060: push      ecx
004a1061: push      esi
004a1062: mov       esi, ecx
004a1064: mov       dword ptr [esp + 4], 0
004a106c: call      0x4a0640
004a1071: test      al, al
004a1073: je        0x4a108b
004a1075: mov       eax, dword ptr [esi + 0x28]
004a1078: mov       ecx, dword ptr [esi + 0x2c]
004a107b: sub       eax, ecx
004a107d: mov       dword ptr [esp + 4], eax
004a1081: fild      dword ptr [esp + 4]
004a1085: fidiv     dword ptr [esi + 0x34]
004a1088: pop       esi
004a1089: pop       ecx
004a108a: ret       
004a108b: fld       dword ptr [esp + 4]
004a108f: pop       esi
004a1090: pop       ecx
004a1091: ret       
004a1092: nop       
004a1093: nop       
004a1094: nop       
004a1095: nop       
004a1096: nop       
004a1097: nop       
004a1098: nop       
004a1099: nop       
004a109a: nop       
004a109b: nop       
004a109c: nop       
004a109d: nop       
004a109e: nop       
004a109f: nop       
004a10a0: push      -1
004a10a2: push      0x62cf58
004a10a7: mov       eax, dword ptr fs:[0]
004a10ad: push      eax
004a10ae: mov       dword ptr fs:[0], esp
004a10b5: sub       esp, 0x18
004a10b8: push      ebx
004a10b9: push      esi
004a10ba: mov       esi, ecx
004a10bc: mov       dword ptr [esp + 0xc], esi
004a10c0: call      0x4a0640
004a10c5: xor       ebx, ebx
004a10c7: test      al, al
004a10c9: jne       0x4a1177
