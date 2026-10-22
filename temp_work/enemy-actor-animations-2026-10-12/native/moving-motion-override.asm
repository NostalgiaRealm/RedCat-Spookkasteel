004286e0: mov       eax, dword ptr fs:[0]
004286e6: push      -1
004286e8: push      0x622d80
004286ed: push      eax
004286ee: mov       dword ptr fs:[0], esp
004286f5: sub       esp, 0x20
004286f8: push      ebx
004286f9: push      ebp
004286fa: mov       ebp, dword ptr [esp + 0x38]
004286fe: xor       ebx, ebx
00428700: push      esi
00428701: cmp       ebp, 7
00428704: push      edi
00428705: mov       esi, ecx
00428707: jge       0x42871a
00428709: mov       eax, dword ptr [esi]
0042870b: push      ebp
0042870c: call      dword ptr [eax + 0x88]
00428712: test      al, al
00428714: jne       0x42879b
0042871a: mov       cl, byte ptr [esp + 0x48]
0042871e: mov       edi, 0x6b3f70
00428723: mov       byte ptr [esp + 0x10], cl
00428727: or        ecx, 0xffffffff
0042872a: xor       eax, eax
0042872c: mov       dword ptr [esp + 0x14], ebx
00428730: repne scasb al, byte ptr es:[edi]
00428732: not       ecx
00428734: dec       ecx
00428735: mov       dword ptr [esp + 0x18], ebx
00428739: push      ecx
0042873a: push      0x6b3f70
0042873f: lea       ecx, [esp + 0x18]
00428743: mov       dword ptr [esp + 0x24], ebx
00428747: call      0x4040f0
0042874c: lea       edx, [esp + 0x10]
00428750: mov       dword ptr [esp + 0x38], ebx
00428754: push      edx
00428755: push      0x124
0042875a: push      0x68fda8
0042875f: push      0x68f8c4
00428764: call      0x5a07f0
00428769: call      eax
0042876b: mov       eax, dword ptr [esp + 0x24]
0042876f: add       esp, 0x10
00428772: cmp       eax, ebx
00428774: mov       dword ptr [esp + 0x38], 0xffffffff
0042877c: je        0x42879b
0042877e: lea       ecx, [eax - 1]
00428781: mov       al, byte ptr [eax - 1]
00428784: cmp       al, bl
00428786: je        0x428792
00428788: cmp       al, 0xff
0042878a: je        0x428792
0042878c: dec       al
0042878e: mov       byte ptr [ecx], al
00428790: jmp       0x42879b
00428792: push      ecx
00428793: call      0x5fe5f0
00428798: add       esp, 4
0042879b: cmp       ebp, 2
0042879e: jl        0x42885b
004287a4: cmp       ebp, 3
004287a7: jg        0x42885b
004287ad: fld       dword ptr [esp + 0x48]
004287b1: fcomp     dword ptr [0x64ab9c]
004287b7: fnstsw    ax
004287b9: test      ah, 1
004287bc: jne       0x4287c7
004287be: call      0x424950
004287c3: fstp      dword ptr [esp + 0x48]
004287c7: mov       al, byte ptr [esp + 0x48]
004287cb: mov       edx, dword ptr [ebp*4 + 0x64bca4]
004287d2: mov       byte ptr [esp + 0x20], al
004287d6: mov       edi, edx
004287d8: or        ecx, 0xffffffff
004287db: xor       eax, eax
004287dd: mov       dword ptr [esp + 0x24], ebx
004287e1: mov       dword ptr [esp + 0x28], ebx
004287e5: mov       dword ptr [esp + 0x2c], ebx
004287e9: repne scasb al, byte ptr es:[edi]
004287eb: not       ecx
004287ed: dec       ecx
004287ee: push      ecx
004287ef: push      edx
004287f0: lea       ecx, [esp + 0x28]
004287f4: call      0x4040f0
004287f9: mov       edx, dword ptr [esi]
004287fb: mov       ecx, esi
004287fd: mov       dword ptr [esp + 0x38], 1
00428805: call      dword ptr [edx + 0x9c]
0042880b: mov       ecx, esi
0042880d: mov       edi, eax
0042880f: call      0x4286d0
00428814: fld       dword ptr [esp + 0x48]
00428818: fmul      dword ptr [eax + 0x28]
0042881b: mov       eax, dword ptr [esp + 0x44]
0042881f: push      ecx
00428820: lea       ecx, [esp + 0x24]
00428824: fstp      dword ptr [esp]
00428827: push      eax
00428828: push      ecx
00428829: lea       ecx, [edi + 0x19c]
0042882f: call      0x4a0660
00428834: mov       eax, dword ptr [esp + 0x24]
00428838: cmp       eax, ebx
0042883a: je        0x42886d
0042883c: lea       ecx, [eax - 1]
0042883f: mov       al, byte ptr [eax - 1]
00428842: cmp       al, bl
00428844: je        0x428850
00428846: cmp       al, 0xff
00428848: je        0x428850
0042884a: dec       al
0042884c: mov       byte ptr [ecx], al
0042884e: jmp       0x42886d
00428850: push      ecx
00428851: call      0x5fe5f0
00428856: add       esp, 4
00428859: jmp       0x42886d
0042885b: mov       edx, dword ptr [esp + 0x48]
0042885f: mov       eax, dword ptr [esp + 0x44]
00428863: push      edx
00428864: push      eax
00428865: push      ebp
00428866: mov       ecx, esi
00428868: call      0x4233e0
0042886d: mov       ecx, dword ptr [esp + 0x30]
00428871: pop       edi
00428872: pop       esi
00428873: pop       ebp
00428874: pop       ebx
00428875: mov       dword ptr fs:[0], ecx
0042887c: add       esp, 0x2c
0042887f: ret       0xc
00428882: nop       
00428883: nop       
00428884: nop       
00428885: nop       
00428886: nop       
00428887: nop       
00428888: nop       
00428889: nop       
0042888a: nop       
0042888b: nop       
0042888c: nop       
0042888d: nop       
0042888e: nop       
0042888f: nop       
