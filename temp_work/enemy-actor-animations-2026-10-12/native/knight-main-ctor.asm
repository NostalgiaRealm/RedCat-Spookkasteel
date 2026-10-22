0040e3a0: push      -1
0040e3a2: push      0x620c1b
0040e3a7: mov       eax, dword ptr fs:[0]
0040e3ad: push      eax
0040e3ae: mov       dword ptr fs:[0], esp
0040e3b5: push      ecx
0040e3b6: push      esi
0040e3b7: mov       esi, ecx
0040e3b9: push      0x34
0040e3bb: call      0x60a0b5
0040e3c0: add       esp, 4
0040e3c3: mov       dword ptr [esp + 4], eax
0040e3c7: test      eax, eax
0040e3c9: mov       dword ptr [esp + 0x10], 0
0040e3d1: je        0x40e3dd
0040e3d3: push      esi
0040e3d4: mov       ecx, eax
0040e3d6: call      0x404eb0
0040e3db: jmp       0x40e3df
0040e3dd: xor       eax, eax
0040e3df: push      eax
0040e3e0: mov       ecx, esi
0040e3e2: mov       dword ptr [esp + 0x14], 0xffffffff
0040e3ea: call      0x423710
0040e3ef: mov       ecx, dword ptr [esp + 8]
0040e3f3: pop       esi
0040e3f4: mov       dword ptr fs:[0], ecx
0040e3fb: add       esp, 0x10
0040e3fe: ret       
0040e3ff: nop       
0040e400: push      esi
0040e401: mov       esi, ecx
0040e403: mov       al, byte ptr [esi + 0x224]
0040e409: test      al, al
0040e40b: je        0x40e427
