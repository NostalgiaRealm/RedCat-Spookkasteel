00406080: push      -1
00406082: push      0x620000
00406087: mov       eax, dword ptr fs:[0]
0040608d: push      eax
0040608e: mov       dword ptr fs:[0], esp
00406095: sub       esp, 8
00406098: push      esi
00406099: mov       esi, ecx
0040609b: push      edi
0040609c: mov       dword ptr [esp + 0xc], esi
004060a0: mov       dword ptr [esi], 0x64a6c0
004060a6: mov       ecx, dword ptr [esi + 0x28]
004060a9: xor       edi, edi
004060ab: mov       dword ptr [esp + 0x18], edi
004060af: call      0x429970
004060b4: test      al, al
004060b6: je        0x406111
004060b8: mov       ecx, dword ptr [esi + 0x2c]
004060bb: cmp       ecx, edi
004060bd: je        0x406111
004060bf: call      0x598540
004060c4: test      eax, eax
004060c6: jle       0x406111
004060c8: mov       ecx, dword ptr [esi + 0x2c]
004060cb: lea       eax, [esp + 8]
004060cf: push      edi
004060d0: push      eax
004060d1: call      0x598310
004060d6: lea       ecx, [esp + 8]
004060da: mov       byte ptr [esp + 0x18], 1
004060df: call      0x59b1e0
004060e4: cmp       eax, -1
004060e7: je        0x4060f6
004060e9: mov       ecx, dword ptr [esp + 8]
004060ed: push      ecx
004060ee: mov       ecx, dword ptr [esi + 0x2c]
004060f1: call      0x598dd0
004060f6: lea       ecx, [esp + 8]
004060fa: mov       byte ptr [esp + 0x18], 0
004060ff: call      0x5630e0
00406104: mov       ecx, dword ptr [esi + 0x2c]
00406107: inc       edi
00406108: call      0x598540
0040610d: cmp       edi, eax
0040610f: jl        0x4060c8
00406111: mov       ecx, esi
00406113: mov       dword ptr [esp + 0x18], 0xffffffff
0040611b: call      0x4029b0
00406120: mov       ecx, dword ptr [esp + 0x10]
00406124: pop       edi
00406125: pop       esi
00406126: mov       dword ptr fs:[0], ecx
0040612d: add       esp, 0x14
00406130: ret       
00406131: nop       
00406132: nop       
00406133: nop       
00406134: nop       
00406135: nop       
00406136: nop       
00406137: nop       
00406138: nop       
00406139: nop       
0040613a: nop       
0040613b: nop       
0040613c: nop       
0040613d: nop       
0040613e: nop       
0040613f: nop       
00406140: push      -1
00406142: push      0x620030
00406147: mov       eax, dword ptr fs:[0]
0040614d: push      eax
0040614e: mov       dword ptr fs:[0], esp
00406155: sub       esp, 0x1c
00406158: push      ebx
00406159: push      ebp
0040615a: mov       ebp, ecx
0040615c: push      esi
0040615d: push      edi
0040615e: mov       dword ptr [esp + 0x14], ebp
00406162: mov       ecx, dword ptr [ebp + 0x28]
00406165: call      0x429970
0040616a: test      al, al
0040616c: je        0x406340
00406172: mov       ecx, dword ptr [ebp + 0x28]
00406175: lea       eax, [esp + 0x18]
00406179: push      eax
0040617a: call      0x4042e0
0040617f: mov       ebx, eax
00406181: mov       eax, dword ptr [ebx]
00406183: xor       esi, esi
00406185: cmp       eax, esi
00406187: mov       dword ptr [esp + 0x34], esi
0040618b: jne       0x406220
00406191: mov       cl, byte ptr [esp + 0x13]
00406195: push      esi
00406196: mov       byte ptr [esp + 0x20], cl
0040619a: lea       ecx, [esp + 0x20]
0040619e: call      0x4040a0
004061a3: mov       edi, 0x6b3f70
004061a8: or        ecx, 0xffffffff
004061ab: xor       eax, eax
004061ad: push      1
004061af: repne scasb al, byte ptr es:[edi]
004061b1: not       ecx
004061b3: dec       ecx
004061b4: mov       ebp, ecx
004061b6: lea       ecx, [esp + 0x20]
004061ba: push      ebp
004061bb: call      0x401940
004061c0: test      al, al
004061c2: je        0x4061e9
004061c4: mov       edi, dword ptr [esp + 0x20]
004061c8: mov       ecx, ebp
004061ca: mov       edx, ecx
004061cc: mov       esi, 0x6b3f70
004061d1: shr       ecx, 2
004061d4: rep movsd dword ptr es:[edi], dword ptr [esi]
004061d6: mov       ecx, edx
004061d8: push      ebp
004061d9: and       ecx, 3
004061dc: rep movsb byte ptr es:[edi], byte ptr [esi]
004061de: lea       ecx, [esp + 0x20]
004061e2: call      0x404190
004061e7: xor       esi, esi
004061e9: lea       eax, [esp + 0x1c]
004061ed: mov       byte ptr [esp + 0x34], 1
004061f2: push      eax
004061f3: push      0xb6
004061f8: push      0x68d638
004061fd: push      0x68d62c
00406202: call      0x5a07f0
00406207: call      eax
00406209: add       esp, 0x10
0040620c: lea       ecx, [esp + 0x1c]
00406210: mov       byte ptr [esp + 0x34], 0
00406215: push      1
00406217: call      0x4040a0
0040621c: mov       ebp, dword ptr [esp + 0x14]
00406220: mov       ecx, dword ptr [ebx]
00406222: call      0x4f3fd0
00406227: mov       edi, eax
00406229: mov       eax, dword ptr [esp + 0x18]
0040622d: or        ebx, 0xffffffff
00406230: cmp       eax, esi
00406232: mov       dword ptr [esp + 0x34], ebx
00406236: je        0x40624d
00406238: mov       edx, dword ptr [eax + 0x14]
0040623b: mov       ecx, eax
0040623d: add       eax, 0x14
00406240: dec       edx
00406241: cmp       edx, esi
00406243: mov       dword ptr [eax], edx
00406245: jne       0x40624d
00406247: push      esi
00406248: call      0x5abfc0
0040624d: lea       ecx, [esp + 0x18]
00406251: push      ecx
00406252: mov       ecx, dword ptr [ebp + 0x28]
00406255: call      0x429940
0040625a: mov       edx, dword ptr [eax]
0040625c: mov       ecx, edi
0040625e: push      edx
0040625f: mov       dword ptr [esp + 0x38], 2
00406267: call      0x59df90
0040626c: lea       ecx, [esp + 0x18]
00406270: mov       dword ptr [ebp + 0x2c], eax
00406273: mov       dword ptr [esp + 0x34], ebx
00406277: call      0x5630e0
0040627c: cmp       dword ptr [ebp + 0x2c], esi
0040627f: jne       0x406340
00406285: mov       al, byte ptr [esp + 0x13]
00406289: mov       edi, 0x6b3f70
0040628e: mov       byte ptr [esp + 0x1c], al
00406292: mov       ecx, ebx
00406294: xor       eax, eax
00406296: push      1
00406298: repne scasb al, byte ptr es:[edi]
0040629a: not       ecx
0040629c: dec       ecx
0040629d: mov       dword ptr [esp + 0x24], esi
004062a1: mov       ebp, ecx
004062a3: lea       ecx, [esp + 0x20]
004062a7: push      ebp
004062a8: mov       dword ptr [esp + 0x2c], esi
004062ac: mov       dword ptr [esp + 0x30], esi
004062b0: call      0x401940
004062b5: test      al, al
004062b7: je        0x4062e1
004062b9: mov       edi, dword ptr [esp + 0x20]
004062bd: mov       ecx, ebp
004062bf: mov       edx, ecx
004062c1: mov       esi, 0x6b3f70
004062c6: shr       ecx, 2
004062c9: rep movsd dword ptr es:[edi], dword ptr [esi]
004062cb: mov       ecx, edx
004062cd: push      ebp
004062ce: and       ecx, 3
004062d1: rep movsb byte ptr es:[edi], byte ptr [esi]
004062d3: lea       ecx, [esp + 0x20]
004062d7: call      0x404190
004062dc: xor       esi, esi
004062de: or        ebx, 0xffffffff
004062e1: lea       eax, [esp + 0x1c]
004062e5: mov       dword ptr [esp + 0x34], 3
004062ed: push      eax
004062ee: push      0x176
004062f3: push      0x68db7c
004062f8: push      0x68db74
004062fd: call      0x5a07f0
00406302: call      eax
00406304: mov       eax, dword ptr [esp + 0x30]
00406308: add       esp, 0x10
0040630b: cmp       eax, esi
0040630d: mov       dword ptr [esp + 0x34], ebx
00406311: je        0x406330
00406313: lea       ecx, [eax - 1]
00406316: mov       al, byte ptr [eax - 1]
00406319: test      al, al
0040631b: je        0x406327
0040631d: cmp       al, 0xff
0040631f: je        0x406327
00406321: dec       al
00406323: mov       byte ptr [ecx], al
00406325: jmp       0x406330
00406327: push      ecx
00406328: call      0x5fe5f0
0040632d: add       esp, 4
00406330: mov       ebp, dword ptr [esp + 0x14]
00406334: mov       dword ptr [esp + 0x20], esi
00406338: mov       dword ptr [esp + 0x24], esi
0040633c: mov       dword ptr [esp + 0x28], esi
00406340: mov       ecx, ebp
00406342: call      0x4064d0
00406347: mov       ecx, dword ptr [esp + 0x2c]
0040634b: pop       edi
0040634c: pop       esi
0040634d: pop       ebp
0040634e: pop       ebx
0040634f: mov       dword ptr fs:[0], ecx
00406356: add       esp, 0x28
00406359: ret       4
0040635c: nop       
0040635d: nop       
0040635e: nop       
0040635f: nop       
00406360: mov       eax, dword ptr fs:[0]
00406366: push      -1
00406368: push      0x620048
0040636d: push      eax
0040636e: mov       dword ptr fs:[0], esp
00406375: sub       esp, 0x10
00406378: push      ebx
00406379: push      esi
0040637a: mov       esi, ecx
0040637c: call      0x402cf0
00406381: xor       ebx, ebx
00406383: sub       eax, ebx
00406385: je        0x40648b
0040638b: dec       eax
0040638c: je        0x40645e
00406392: mov       al, byte ptr [esp + 0x2c]
00406396: push      ebp
00406397: push      edi
00406398: mov       byte ptr [esp + 0x10], al
0040639c: mov       edi, 0x68dba8
004063a1: or        ecx, 0xffffffff
004063a4: xor       eax, eax
004063a6: push      1
004063a8: repne scasb al, byte ptr es:[edi]
004063aa: not       ecx
004063ac: dec       ecx
004063ad: mov       dword ptr [esp + 0x18], ebx
004063b1: mov       ebp, ecx
004063b3: lea       ecx, [esp + 0x14]
004063b7: push      ebp
004063b8: mov       dword ptr [esp + 0x20], ebx
004063bc: mov       dword ptr [esp + 0x24], ebx
004063c0: call      0x401940
004063c5: test      al, al
004063c7: je        0x4063ed
004063c9: mov       edi, dword ptr [esp + 0x14]
004063cd: mov       ecx, ebp
004063cf: mov       edx, ecx
004063d1: mov       esi, 0x68dba8
004063d6: shr       ecx, 2
004063d9: rep movsd dword ptr es:[edi], dword ptr [esi]
004063db: mov       ecx, edx
004063dd: and       ecx, 3
004063e0: rep movsb byte ptr es:[edi], byte ptr [esi]
004063e2: mov       eax, dword ptr [esp + 0x14]
004063e6: mov       dword ptr [esp + 0x18], ebp
004063ea: mov       byte ptr [eax + ebp], bl
004063ed: lea       ecx, [esp + 0x10]
004063f1: mov       dword ptr [esp + 0x28], ebx
004063f5: push      ecx
004063f6: push      0x191
004063fb: push      0x68db7c
00406400: push      0x68d2d0
00406405: call      0x5a07f0
0040640a: call      eax
0040640c: mov       eax, dword ptr [esp + 0x24]
00406410: add       esp, 0x10
00406413: cmp       eax, ebx
00406415: pop       edi
00406416: pop       ebp
00406417: je        0x4064bc
0040641d: lea       ecx, [eax - 1]
00406420: mov       al, byte ptr [eax - 1]
00406423: cmp       al, bl
00406425: je        0x406442
00406427: cmp       al, 0xff
00406429: je        0x406442
0040642b: dec       al
0040642d: pop       esi
0040642e: mov       byte ptr [ecx], al
00406430: pop       ebx
00406431: mov       ecx, dword ptr [esp + 0x10]
00406435: mov       dword ptr fs:[0], ecx
0040643c: add       esp, 0x1c
0040643f: ret       8
00406442: push      ecx
00406443: call      0x5fe5f0
00406448: add       esp, 4
0040644b: pop       esi
0040644c: pop       ebx
0040644d: mov       ecx, dword ptr [esp + 0x10]
00406451: mov       dword ptr fs:[0], ecx
00406458: add       esp, 0x1c
0040645b: ret       8
0040645e: mov       ecx, dword ptr [esi + 0x28]
00406461: call      0x4288c0
00406466: mov       ecx, eax
00406468: call      0x596c40
0040646d: test      al, al
0040646f: je        0x4064bc
00406471: mov       ecx, esi
00406473: call      0x402d00
00406478: pop       esi
00406479: pop       ebx
0040647a: mov       ecx, dword ptr [esp + 0x10]
0040647e: mov       dword ptr fs:[0], ecx
00406485: add       esp, 0x1c
00406488: ret       8
0040648b: mov       edx, dword ptr [esp + 0x2c]
0040648f: mov       eax, dword ptr [esp + 0x28]
00406493: push      edx
00406494: push      eax
00406495: mov       ecx, esi
00406497: call      0x402a80
0040649c: mov       ecx, eax
0040649e: call      0x402d20
004064a3: mov       ecx, esi
004064a5: call      0x402a80
004064aa: mov       ecx, eax
004064ac: call      0x402d10
004064b1: test      al, al
004064b3: je        0x4064bc
004064b5: mov       ecx, esi
004064b7: call      0x406550
004064bc: mov       ecx, dword ptr [esp + 0x18]
004064c0: pop       esi
004064c1: pop       ebx
004064c2: mov       dword ptr fs:[0], ecx
004064c9: add       esp, 0x1c
004064cc: ret       8
004064cf: nop       
004064d0: push      -1
004064d2: push      0x62006b
004064d7: mov       eax, dword ptr fs:[0]
004064dd: push      eax
004064de: mov       dword ptr fs:[0], esp
004064e5: push      ecx
004064e6: push      esi
004064e7: mov       esi, ecx
004064e9: push      -1
004064eb: mov       ecx, dword ptr [esi + 0x28]
004064ee: call      0x4288c0
004064f3: mov       ecx, eax
004064f5: call      0x5966a0
004064fa: push      0x28
004064fc: call      0x60a0b5
00406501: add       esp, 4
00406504: mov       dword ptr [esp + 4], eax
00406508: test      eax, eax
0040650a: mov       dword ptr [esp + 0x10], 0
00406512: je        0x406521
00406514: mov       ecx, dword ptr [esi + 0x28]
00406517: push      ecx
00406518: mov       ecx, eax
0040651a: call      0x4034d0
0040651f: jmp       0x406523
00406521: xor       eax, eax
00406523: push      eax
00406524: push      0
00406526: mov       ecx, esi
00406528: mov       dword ptr [esp + 0x18], 0xffffffff
00406530: call      0x402a10
00406535: mov       ecx, dword ptr [esp + 8]
00406539: pop       esi
0040653a: mov       dword ptr fs:[0], ecx
00406541: add       esp, 0x10
00406544: ret       
00406545: nop       
00406546: nop       
00406547: nop       
00406548: nop       
00406549: nop       
0040654a: nop       
0040654b: nop       
0040654c: nop       
0040654d: nop       
0040654e: nop       
0040654f: nop       
00406550: mov       eax, dword ptr fs:[0]
00406556: push      -1
00406558: push      0x6200a0
0040655d: push      eax
0040655e: mov       dword ptr fs:[0], esp
00406565: sub       esp, 0x28
00406568: push      ebx
00406569: mov       ebx, ecx
0040656b: push      0x7f7fffff
00406570: push      1
00406572: mov       ecx, dword ptr [ebx + 0x28]
00406575: push      2
00406577: mov       eax, dword ptr [ecx]
00406579: call      dword ptr [eax + 0x8c]
0040657f: mov       ecx, dword ptr [ebx + 0x28]
00406582: call      0x429970
00406587: test      al, al
00406589: je        0x4067d4
0040658f: mov       eax, dword ptr [ebx + 0x2c]
00406592: push      ebp
00406593: push      esi
00406594: xor       esi, esi
00406596: cmp       eax, esi
00406598: push      edi
00406599: jne       0x406620
0040659f: mov       cl, byte ptr [esp + 0x13]
004065a3: mov       edi, 0x6b3f70
004065a8: mov       byte ptr [esp + 0x18], cl
004065ac: or        ecx, 0xffffffff
004065af: xor       eax, eax
004065b1: mov       dword ptr [esp + 0x1c], esi
004065b5: repne scasb al, byte ptr es:[edi]
004065b7: not       ecx
004065b9: dec       ecx
004065ba: mov       dword ptr [esp + 0x20], esi
004065be: push      ecx
004065bf: push      0x6b3f70
004065c4: lea       ecx, [esp + 0x20]
004065c8: mov       dword ptr [esp + 0x2c], esi
004065cc: call      0x4040f0
004065d1: lea       edx, [esp + 0x18]
004065d5: mov       dword ptr [esp + 0x40], esi
004065d9: push      edx
004065da: push      0x1a7
004065df: push      0x68db7c
004065e4: push      0x68dc14
004065e9: call      0x5a07f0
004065ee: call      eax
004065f0: mov       eax, dword ptr [esp + 0x2c]
004065f4: add       esp, 0x10
004065f7: cmp       eax, esi
004065f9: mov       dword ptr [esp + 0x40], 0xffffffff
00406601: je        0x406620
00406603: lea       ecx, [eax - 1]
00406606: mov       al, byte ptr [eax - 1]
00406609: test      al, al
0040660b: je        0x406617
0040660d: cmp       al, 0xff
0040660f: je        0x406617
00406611: dec       al
00406613: mov       byte ptr [ecx], al
00406615: jmp       0x406620
00406617: push      ecx
00406618: call      0x5fe5f0
0040661d: add       esp, 4
00406620: mov       ecx, dword ptr [ebx + 0x2c]
00406623: call      0x598540
00406628: test      eax, eax
0040662a: jg        0x4066dd
00406630: mov       al, byte ptr [esp + 0x13]
00406634: push      esi
00406635: lea       ecx, [esp + 0x1c]
00406639: mov       byte ptr [esp + 0x1c], al
0040663d: call      0x4040a0
00406642: mov       edi, 0x6b3f70
00406647: or        ecx, 0xffffffff
0040664a: xor       eax, eax
0040664c: push      1
0040664e: repne scasb al, byte ptr es:[edi]
00406650: not       ecx
00406652: dec       ecx
00406653: mov       ebp, ecx
00406655: lea       ecx, [esp + 0x1c]
00406659: push      ebp
0040665a: call      0x401940
0040665f: test      al, al
00406661: je        0x40668a
00406663: mov       edi, dword ptr [esp + 0x1c]
00406667: mov       ecx, ebp
00406669: mov       edx, ecx
0040666b: mov       esi, 0x6b3f70
00406670: shr       ecx, 2
00406673: rep movsd dword ptr es:[edi], dword ptr [esi]
00406675: mov       ecx, edx
00406677: and       ecx, 3
0040667a: rep movsb byte ptr es:[edi], byte ptr [esi]
0040667c: mov       eax, dword ptr [esp + 0x1c]
00406680: mov       dword ptr [esp + 0x20], ebp
00406684: xor       esi, esi
00406686: mov       byte ptr [eax + ebp], 0
0040668a: lea       ecx, [esp + 0x18]
0040668e: mov       dword ptr [esp + 0x40], 1
00406696: push      ecx
00406697: push      0x1a8
0040669c: push      0x68db7c
004066a1: push      0x68dbf8
004066a6: call      0x5a07f0
004066ab: call      eax
004066ad: mov       eax, dword ptr [esp + 0x2c]
004066b1: add       esp, 0x10
004066b4: cmp       eax, esi
004066b6: mov       dword ptr [esp + 0x40], 0xffffffff
004066be: je        0x4066dd
004066c0: lea       ecx, [eax - 1]
004066c3: mov       al, byte ptr [eax - 1]
004066c6: test      al, al
004066c8: je        0x4066d4
004066ca: cmp       al, 0xff
004066cc: je        0x4066d4
004066ce: dec       al
004066d0: mov       byte ptr [ecx], al
004066d2: jmp       0x4066dd
004066d4: push      ecx
004066d5: call      0x5fe5f0
004066da: add       esp, 4
004066dd: mov       ecx, dword ptr [ebx + 0x2c]
004066e0: lea       edx, [esp + 0x14]
004066e4: push      esi
004066e5: push      edx
004066e6: call      0x598310
004066eb: lea       ecx, [esp + 0x14]
004066ef: mov       dword ptr [esp + 0x40], 2
004066f7: call      0x59b1e0
004066fc: cmp       eax, -1
004066ff: jne       0x406792
00406705: mov       al, byte ptr [esp + 0x13]
00406709: push      esi
0040670a: lea       ecx, [esp + 0x2c]
0040670e: mov       byte ptr [esp + 0x2c], al
00406712: call      0x4040a0
00406717: mov       edi, 0x6b3f70
0040671c: or        ecx, 0xffffffff
0040671f: xor       eax, eax
00406721: push      1
00406723: repne scasb al, byte ptr es:[edi]
00406725: not       ecx
00406727: dec       ecx
00406728: mov       ebp, ecx
0040672a: lea       ecx, [esp + 0x2c]
0040672e: push      ebp
0040672f: call      0x401940
00406734: test      al, al
00406736: je        0x40675f
00406738: mov       edi, dword ptr [esp + 0x2c]
0040673c: mov       ecx, ebp
0040673e: mov       edx, ecx
00406740: mov       esi, 0x6b3f70
00406745: shr       ecx, 2
00406748: rep movsd dword ptr es:[edi], dword ptr [esi]
0040674a: mov       ecx, edx
0040674c: and       ecx, 3
0040674f: rep movsb byte ptr es:[edi], byte ptr [esi]
00406751: mov       eax, dword ptr [esp + 0x2c]
00406755: mov       dword ptr [esp + 0x30], ebp
00406759: xor       esi, esi
0040675b: mov       byte ptr [eax + ebp], 0
0040675f: lea       ecx, [esp + 0x28]
00406763: mov       byte ptr [esp + 0x40], 3
00406768: push      ecx
00406769: push      0x1ab
0040676e: push      0x68db7c
00406773: push      0x68dbe0
00406778: call      0x5a07f0
0040677d: call      eax
0040677f: add       esp, 0x10
00406782: lea       ecx, [esp + 0x28]
00406786: mov       byte ptr [esp + 0x40], 2
0040678b: push      1
0040678d: call      0x4040a0
00406792: mov       ecx, dword ptr [ebx + 0x28]
00406795: lea       edx, [esp + 0x14]
00406799: push      edx
0040679a: call      0x4288c0
0040679f: mov       ecx, eax
004067a1: call      0x5968d0
004067a6: push      esi
004067a7: push      1
004067a9: mov       ecx, ebx
004067ab: call      0x402a10
004067b0: lea       ecx, [esp + 0x14]
004067b4: mov       dword ptr [esp + 0x40], 0xffffffff
004067bc: call      0x5630e0
004067c1: pop       edi
004067c2: pop       esi
004067c3: pop       ebp
004067c4: pop       ebx
004067c5: mov       ecx, dword ptr [esp + 0x28]
004067c9: mov       dword ptr fs:[0], ecx
004067d0: add       esp, 0x34
004067d3: ret       
004067d4: mov       ecx, ebx
004067d6: call      0x402d00
004067db: mov       ecx, dword ptr [esp + 0x2c]
004067df: pop       ebx
004067e0: mov       dword ptr fs:[0], ecx
004067e7: add       esp, 0x34
004067ea: ret       
004067eb: nop       
004067ec: nop       
004067ed: nop       
004067ee: nop       
004067ef: nop       
004067f0: mov       cl, byte ptr [0x7103a0]
004067f6: mov       al, 1
004067f8: test      al, cl
004067fa: jne       0x406804
004067fc: or        cl, al
004067fe: mov       byte ptr [0x7103a0], cl
00406804: jmp       0x406810
00406809: nop       
0040680a: nop       
0040680b: nop       
0040680c: nop       
0040680d: nop       
0040680e: nop       
0040680f: nop       
00406810: push      0x401ba0
00406815: call      0x60a57b
0040681a: pop       ecx
0040681b: ret       
0040681c: nop       
0040681d: nop       
0040681e: nop       
0040681f: nop       
00406820: push      esi
00406821: push      edi
00406822: mov       edi, dword ptr [esp + 0xc]
00406826: mov       esi, ecx
00406828: push      edi
00406829: call      0x406dc0
0040682e: mov       dword ptr [esi + 0x34], edi
00406831: mov       dword ptr [esi], 0x64a6d0
00406837: mov       eax, esi
00406839: pop       edi
0040683a: pop       esi
0040683b: ret       4
0040683e: nop       
0040683f: nop       
00406840: push      -1
00406842: push      0x6200bb
00406847: mov       eax, dword ptr fs:[0]
0040684d: push      eax
0040684e: mov       dword ptr fs:[0], esp
00406855: push      ecx
00406856: push      esi
00406857: mov       esi, ecx
00406859: push      0x7f7fffff
0040685e: push      1
00406860: mov       ecx, dword ptr [esi + 0x34]
00406863: push      1
00406865: mov       eax, dword ptr [ecx]
00406867: call      dword ptr [eax + 0x8c]
0040686d: push      0x3c
0040686f: call      0x60a0b5
00406874: add       esp, 4
00406877: mov       dword ptr [esp + 4], eax
0040687b: test      eax, eax
0040687d: mov       dword ptr [esp + 0x10], 0
00406885: je        0x406896
00406887: mov       ecx, dword ptr [esi + 0x34]
0040688a: push      -1
0040688c: push      ecx
0040688d: mov       ecx, eax
0040688f: call      0x405c20
00406894: jmp       0x406898
00406896: xor       eax, eax
00406898: push      eax
00406899: push      1
0040689b: mov       ecx, esi
0040689d: mov       dword ptr [esp + 0x18], 0xffffffff
004068a5: call      0x402a10
004068aa: mov       ecx, dword ptr [esp + 8]
004068ae: pop       esi
004068af: mov       dword ptr fs:[0], ecx
004068b6: add       esp, 0x10
004068b9: ret       
004068ba: nop       
004068bb: nop       
004068bc: nop       
004068bd: nop       
004068be: nop       
004068bf: nop       
004068c0: push      -1
004068c2: push      0x6200db
004068c7: mov       eax, dword ptr fs:[0]
004068cd: push      eax
004068ce: mov       dword ptr fs:[0], esp
004068d5: push      ecx
004068d6: push      esi
004068d7: mov       esi, ecx
004068d9: push      0x2c
004068db: call      0x60a0b5
004068e0: add       esp, 4
004068e3: mov       dword ptr [esp + 4], eax
004068e7: test      eax, eax
004068e9: mov       dword ptr [esp + 0x10], 0
004068f1: je        0x406900
004068f3: mov       ecx, dword ptr [esi + 0x34]
004068f6: push      ecx
004068f7: mov       ecx, eax
004068f9: call      0x406e50
004068fe: jmp       0x406902
00406900: xor       eax, eax
00406902: push      eax
00406903: push      2
00406905: mov       ecx, esi
00406907: mov       dword ptr [esp + 0x18], 0xffffffff
0040690f: call      0x402a10
00406914: mov       ecx, dword ptr [esp + 8]
00406918: pop       esi
00406919: mov       dword ptr fs:[0], ecx
00406920: add       esp, 0x10
00406923: ret       
00406924: nop       
00406925: nop       
00406926: nop       
00406927: nop       
00406928: nop       
00406929: nop       
0040692a: nop       
0040692b: nop       
0040692c: nop       
0040692d: nop       
0040692e: nop       
0040692f: nop       
00406930: mov       cl, byte ptr [0x7103a0]
00406936: mov       al, 1
00406938: test      al, cl
0040693a: jne       0x406944
0040693c: or        cl, al
0040693e: mov       byte ptr [0x7103a0], cl
00406944: jmp       0x406950
00406949: nop       
0040694a: nop       
0040694b: nop       
0040694c: nop       
0040694d: nop       
0040694e: nop       
0040694f: nop       
00406950: push      0x401ba0
00406955: call      0x60a57b
0040695a: pop       ecx
0040695b: ret       
0040695c: nop       
0040695d: nop       
0040695e: nop       
0040695f: nop       
00406960: push      esi
00406961: push      edi
00406962: mov       edi, dword ptr [esp + 0xc]
00406966: mov       esi, ecx
00406968: push      edi
00406969: call      0x409f40
0040696e: mov       dword ptr [esi + 0x34], edi
00406971: mov       dword ptr [esi], 0x64a704
00406977: mov       eax, esi
00406979: pop       edi
0040697a: pop       esi
0040697b: ret       4
0040697e: nop       
0040697f: nop       
00406980: push      -1
00406982: push      0x6200fb
00406987: mov       eax, dword ptr fs:[0]
0040698d: push      eax
0040698e: mov       dword ptr fs:[0], esp
00406995: push      ecx
00406996: push      esi
00406997: mov       esi, ecx
00406999: push      0x2c
0040699b: call      0x60a0b5
004069a0: add       esp, 4
004069a3: mov       dword ptr [esp + 4], eax
004069a7: test      eax, eax
004069a9: mov       dword ptr [esp + 0x10], 0
004069b1: je        0x4069c0
004069b3: mov       ecx, dword ptr [esi + 0x30]
004069b6: push      ecx
004069b7: mov       ecx, eax
004069b9: call      0x406a60
004069be: jmp       0x4069c2
004069c0: xor       eax, eax
004069c2: push      eax
004069c3: push      1
004069c5: mov       ecx, esi
004069c7: mov       dword ptr [esp + 0x18], 0xffffffff
004069cf: call      0x402a10
004069d4: mov       ecx, dword ptr [esp + 8]
004069d8: pop       esi
004069d9: mov       dword ptr fs:[0], ecx
004069e0: add       esp, 0x10
004069e3: ret       
004069e4: nop       
004069e5: nop       
004069e6: nop       
004069e7: nop       
004069e8: nop       
004069e9: nop       
004069ea: nop       
004069eb: nop       
004069ec: nop       
004069ed: nop       
004069ee: nop       
004069ef: nop       
004069f0: push      -1
004069f2: push      0x62011b
004069f7: mov       eax, dword ptr fs:[0]
004069fd: push      eax
004069fe: mov       dword ptr fs:[0], esp
00406a05: push      ecx
00406a06: push      esi
00406a07: mov       esi, ecx
00406a09: push      0x2c
00406a0b: call      0x60a0b5
00406a10: add       esp, 4
00406a13: mov       dword ptr [esp + 4], eax
00406a17: test      eax, eax
00406a19: mov       dword ptr [esp + 0x10], 0
00406a21: je        0x406a30
00406a23: mov       ecx, dword ptr [esi + 0x34]
00406a26: push      ecx
00406a27: mov       ecx, eax
00406a29: call      0x406b30
00406a2e: jmp       0x406a32
00406a30: xor       eax, eax
00406a32: push      eax
00406a33: push      2
00406a35: mov       ecx, esi
00406a37: mov       dword ptr [esp + 0x18], 0xffffffff
00406a3f: call      0x402a10
00406a44: mov       ecx, dword ptr [esp + 8]
00406a48: pop       esi
00406a49: mov       dword ptr fs:[0], ecx
00406a50: add       esp, 0x10
00406a53: ret       
00406a54: nop       
00406a55: nop       
00406a56: nop       
00406a57: nop       
00406a58: nop       
00406a59: nop       
00406a5a: nop       
00406a5b: nop       
00406a5c: nop       
00406a5d: nop       
00406a5e: nop       
00406a5f: nop       
00406a60: mov       eax, dword ptr [esp + 4]
00406a64: push      esi
00406a65: mov       esi, ecx
00406a67: push      eax
00406a68: call      0x40a720
00406a6d: mov       dword ptr [esi], 0x64a738
00406a73: mov       eax, esi
00406a75: pop       esi
00406a76: ret       4
00406a79: nop       
00406a7a: nop       
00406a7b: nop       
00406a7c: nop       
00406a7d: nop       
00406a7e: nop       
00406a7f: nop       
00406a80: push      ecx
00406a81: push      esi
00406a82: mov       esi, ecx
00406a84: push      edi
00406a85: mov       eax, dword ptr [esi + 0x28]
00406a88: mov       edi, dword ptr [eax]
00406a8a: call      0x60a4a0
00406a8f: cdq       
00406a90: mov       ecx, 0x2710
00406a95: idiv      ecx
00406a97: push      ecx
00406a98: mov       ecx, dword ptr [esi + 0x28]
00406a9b: mov       dword ptr [esp + 0xc], edx
00406a9f: fild      dword ptr [esp + 0xc]
00406aa3: fmul      dword ptr [0x64a744]
00406aa9: fadd      dword ptr [0x64a2c8]
00406aaf: fstp      dword ptr [esp]
00406ab2: push      0
00406ab4: push      1
00406ab6: call      dword ptr [edi + 0x8c]
00406abc: pop       edi
00406abd: pop       esi
00406abe: pop       ecx
00406abf: ret       4
00406ac2: nop       
00406ac3: nop       
00406ac4: nop       
00406ac5: nop       
00406ac6: nop       
00406ac7: nop       
00406ac8: nop       
00406ac9: nop       
00406aca: nop       
00406acb: nop       
00406acc: nop       
00406acd: nop       
00406ace: nop       
00406acf: nop       
00406ad0: push      ecx
00406ad1: push      esi
00406ad2: mov       esi, ecx
00406ad4: mov       ecx, dword ptr [esi + 0x28]
00406ad7: call      0x423700
00406adc: mov       ecx, eax
00406ade: call      0x4a0d00
00406ae3: test      al, al
00406ae5: je        0x406b20
00406ae7: mov       eax, dword ptr [esi + 0x28]
00406aea: push      edi
00406aeb: mov       edi, dword ptr [eax]
00406aed: call      0x60a4a0
00406af2: cdq       
00406af3: mov       ecx, 0x2710
00406af8: idiv      ecx
00406afa: push      ecx
00406afb: mov       ecx, dword ptr [esi + 0x28]
