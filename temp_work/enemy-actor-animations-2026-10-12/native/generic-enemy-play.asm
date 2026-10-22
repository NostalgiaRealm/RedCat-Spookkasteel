004233e0: mov       eax, dword ptr fs:[0]
004233e6: push      -1
004233e8: fld       dword ptr [esp + 0x10]
004233ec: fcomp     dword ptr [0x64ab9c]
004233f2: push      0x6225d8
004233f7: push      eax
004233f8: mov       dword ptr fs:[0], esp
004233ff: sub       esp, 0x30
00423402: fnstsw    ax
00423404: push      ebx
00423405: push      ebp
00423406: push      esi
00423407: push      edi
00423408: test      ah, 1
0042340b: mov       ebp, ecx
0042340d: jne       0x423418
0042340f: call      0x424950
00423414: fstp      dword ptr [esp + 0x58]
00423418: mov       esi, dword ptr [esp + 0x50]
0042341c: cmp       esi, 7
0042341f: jge       0x423435
00423421: mov       eax, dword ptr [ebp]
00423424: push      esi
00423425: mov       ecx, ebp
00423427: call      dword ptr [eax + 0x88]
0042342d: test      al, al
0042342f: jne       0x4234cb
00423435: mov       cl, byte ptr [esp + 0x58]
00423439: push      0
0042343b: mov       byte ptr [esp + 0x14], cl
0042343f: lea       ecx, [esp + 0x14]
00423443: call      0x4040a0
00423448: mov       edi, 0x6b3f70
0042344d: or        ecx, 0xffffffff
00423450: xor       eax, eax
00423452: push      1
00423454: repne scasb al, byte ptr es:[edi]
00423456: not       ecx
00423458: dec       ecx
00423459: mov       ebx, ecx
0042345b: lea       ecx, [esp + 0x14]
0042345f: push      ebx
00423460: call      0x401940
00423465: test      al, al
00423467: je        0x423492
00423469: mov       edi, dword ptr [esp + 0x14]
0042346d: mov       ecx, ebx
0042346f: mov       edx, ecx
00423471: mov       esi, 0x6b3f70
00423476: shr       ecx, 2
00423479: rep movsd dword ptr es:[edi], dword ptr [esi]
0042347b: mov       ecx, edx
0042347d: and       ecx, 3
00423480: rep movsb byte ptr es:[edi], byte ptr [esi]
00423482: mov       eax, dword ptr [esp + 0x14]
00423486: mov       esi, dword ptr [esp + 0x50]
0042348a: mov       dword ptr [esp + 0x18], ebx
0042348e: mov       byte ptr [eax + ebx], 0
00423492: lea       ecx, [esp + 0x10]
00423496: mov       dword ptr [esp + 0x48], 0
0042349e: push      ecx
0042349f: push      0x176
004234a4: push      0x68f7f4
004234a9: push      0x68f8c4
004234ae: call      0x5a07f0
004234b3: call      eax
004234b5: add       esp, 0x10
004234b8: lea       ecx, [esp + 0x10]
004234bc: mov       dword ptr [esp + 0x48], 0xffffffff
004234c4: push      1
004234c6: call      0x4040a0
004234cb: cmp       esi, 4
004234ce: je        0x423584
004234d4: mov       dl, byte ptr [esp + 0x58]
004234d8: mov       esi, dword ptr [esi*4 + 0x64bca4]
004234df: push      0
004234e1: lea       ecx, [esp + 0x24]
004234e5: mov       byte ptr [esp + 0x24], dl
004234e9: call      0x4040a0
004234ee: mov       edi, esi
004234f0: or        ecx, 0xffffffff
004234f3: xor       eax, eax
004234f5: push      1
004234f7: repne scasb al, byte ptr es:[edi]
004234f9: not       ecx
004234fb: dec       ecx
004234fc: mov       ebx, ecx
004234fe: lea       ecx, [esp + 0x24]
00423502: push      ebx
00423503: call      0x401940
00423508: test      al, al
0042350a: je        0x42352c
0042350c: mov       edi, dword ptr [esp + 0x24]
00423510: mov       ecx, ebx
00423512: mov       eax, ecx
00423514: shr       ecx, 2
00423517: rep movsd dword ptr es:[edi], dword ptr [esi]
00423519: mov       ecx, eax
0042351b: and       ecx, 3
0042351e: rep movsb byte ptr es:[edi], byte ptr [esi]
00423520: mov       ecx, dword ptr [esp + 0x24]
00423524: mov       dword ptr [esp + 0x28], ebx
00423528: mov       byte ptr [ecx + ebx], 0
0042352c: mov       edx, dword ptr [ebp]
0042352f: mov       ecx, ebp
00423531: mov       dword ptr [esp + 0x48], 2
00423539: call      dword ptr [edx + 0x9c]
0042353f: mov       ecx, dword ptr [esp + 0x58]
00423543: mov       edx, dword ptr [esp + 0x54]
00423547: push      ecx
00423548: lea       ecx, [esp + 0x24]
0042354c: push      edx
0042354d: push      ecx
0042354e: lea       ecx, [eax + 0x19c]
00423554: call      0x4a0660
00423559: mov       eax, dword ptr [esp + 0x24]
0042355d: test      eax, eax
0042355f: je        0x423636
00423565: lea       ecx, [eax - 1]
00423568: mov       al, byte ptr [eax - 1]
0042356b: test      al, al
0042356d: je        0x42362d
00423573: cmp       al, 0xff
00423575: je        0x42362d
0042357b: dec       al
0042357d: mov       byte ptr [ecx], al
0042357f: jmp       0x423636
00423584: mov       dl, byte ptr [esp + 0x58]
00423588: mov       esi, dword ptr [0x64bcb4]
0042358e: push      0
00423590: lea       ecx, [esp + 0x34]
00423594: mov       byte ptr [esp + 0x34], dl
00423598: call      0x4040a0
0042359d: mov       edi, esi
0042359f: or        ecx, 0xffffffff
004235a2: xor       eax, eax
004235a4: push      1
004235a6: repne scasb al, byte ptr es:[edi]
004235a8: not       ecx
004235aa: dec       ecx
004235ab: mov       ebx, ecx
004235ad: lea       ecx, [esp + 0x34]
004235b1: push      ebx
004235b2: call      0x401940
004235b7: test      al, al
004235b9: je        0x4235db
004235bb: mov       edi, dword ptr [esp + 0x34]
004235bf: mov       ecx, ebx
004235c1: mov       eax, ecx
004235c3: shr       ecx, 2
004235c6: rep movsd dword ptr es:[edi], dword ptr [esi]
004235c8: mov       ecx, eax
004235ca: and       ecx, 3
004235cd: rep movsb byte ptr es:[edi], byte ptr [esi]
004235cf: mov       ecx, dword ptr [esp + 0x34]
004235d3: mov       dword ptr [esp + 0x38], ebx
004235d7: mov       byte ptr [ecx + ebx], 0
004235db: mov       edx, dword ptr [ebp]
004235de: mov       ecx, ebp
004235e0: mov       dword ptr [esp + 0x48], 1
004235e8: call      dword ptr [edx + 0x9c]
004235ee: fld       dword ptr [esp + 0x58]
004235f2: fmul      dword ptr [ebp + 0x154]
004235f8: push      ecx
004235f9: mov       ecx, dword ptr [esp + 0x58]
004235fd: lea       edx, [esp + 0x34]
00423601: fstp      dword ptr [esp]
00423604: push      ecx
00423605: push      edx
00423606: lea       ecx, [eax + 0x19c]
0042360c: call      0x4a0660
00423611: mov       eax, dword ptr [esp + 0x34]
00423615: test      eax, eax
00423617: je        0x423636
00423619: lea       ecx, [eax - 1]
0042361c: mov       al, byte ptr [eax - 1]
0042361f: test      al, al
00423621: je        0x42362d
00423623: cmp       al, 0xff
00423625: je        0x42362d
00423627: dec       al
00423629: mov       byte ptr [ecx], al
0042362b: jmp       0x423636
0042362d: push      ecx
0042362e: call      0x5fe5f0
00423633: add       esp, 4
00423636: mov       ecx, dword ptr [esp + 0x40]
0042363a: pop       edi
0042363b: pop       esi
0042363c: pop       ebp
0042363d: pop       ebx
0042363e: mov       dword ptr fs:[0], ecx
00423645: add       esp, 0x3c
00423648: ret       0xc
0042364b: nop       
0042364c: nop       
0042364d: nop       
0042364e: nop       
0042364f: nop       
00423650: mov       eax, dword ptr [ecx]
00423652: call      dword ptr [eax + 0x9c]
00423658: mov       ecx, dword ptr [esp + 4]
0042365c: mov       edx, dword ptr [eax]
0042365e: push      ecx
0042365f: mov       ecx, eax
00423661: call      dword ptr [edx + 0x4c]
00423664: ret       4
00423667: nop       
00423668: nop       
00423669: nop       
0042366a: nop       
0042366b: nop       
0042366c: nop       
0042366d: nop       
0042366e: nop       
0042366f: nop       
00423670: mov       eax, dword ptr [ecx]
00423672: sub       esp, 0xc
00423675: push      esi
00423676: call      dword ptr [eax + 0xa4]
0042367c: mov       edx, dword ptr [eax]
0042367e: lea       ecx, [esp + 4]
00423682: push      ecx
00423683: mov       ecx, eax
00423685: call      dword ptr [edx + 0x48]
00423688: mov       edx, eax
0042368a: mov       eax, dword ptr [esp + 0x14]
0042368e: mov       ecx, eax
00423690: mov       esi, dword ptr [edx]
00423692: mov       dword ptr [ecx], esi
00423694: mov       esi, dword ptr [edx + 4]
00423697: mov       dword ptr [ecx + 4], esi
0042369a: pop       esi
0042369b: mov       edx, dword ptr [edx + 8]
