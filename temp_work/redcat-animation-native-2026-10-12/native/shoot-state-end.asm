00431820: push      edi
00431821: mov       edi, ecx
00431823: mov       al, byte ptr [edi + 0x394]
00431829: test      al, al
0043182b: je        0x4318bb
00431831: mov       eax, dword ptr [edi + 0x390]
00431837: test      eax, eax
00431839: je        0x43188d
0043183b: push      esi
0043183c: mov       esi, dword ptr [0x6b915c]
00431842: test      esi, esi
00431844: jne       0x43184d
00431846: call      0x4bc480
0043184b: mov       esi, eax
0043184d: mov       eax, dword ptr [esi + 0x4e8]
00431853: cmp       eax, 0x80000000
00431858: jne       0x431878
0043185a: mov       eax, dword ptr [esi + 0x49c]
00431860: test      eax, eax
00431862: jne       0x431869
00431864: mov       eax, 0x64a3b4
00431869: push      eax
0043186a: call      0x60af10
0043186f: add       esp, 4
00431872: mov       dword ptr [esi + 0x4e8], eax
00431878: test      eax, eax
0043187a: pop       esi
0043187b: jne       0x43188d
0043187d: mov       ecx, dword ptr [edi + 0x390]
00431883: push      0x3f800000
00431888: call      0x4e2d60
0043188d: mov       ecx, dword ptr [edi + 0x330]
00431893: test      ecx, ecx
00431895: je        0x4318bb
00431897: push      0
00431899: call      0x502350
0043189e: mov       eax, dword ptr [edi + 0x330]
004318a4: mov       byte ptr [eax + 0xa8], 0
004318ab: mov       ecx, dword ptr [edi + 0x330]
004318b1: mov       dword ptr [ecx + 0x130], 0x3c23d70a
004318bb: pop       edi
004318bc: ret       
004318bd: nop       
004318be: nop       
004318bf: nop       
