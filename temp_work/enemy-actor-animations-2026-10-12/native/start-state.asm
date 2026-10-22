00406040: mov       eax, dword ptr [esp + 4]
00406044: push      esi
00406045: mov       esi, ecx
00406047: push      eax
00406048: call      0x405530
0040604d: mov       dword ptr [esi + 0x2c], 0
00406054: mov       dword ptr [esi], 0x64a6c0
0040605a: mov       eax, esi
0040605c: pop       esi
0040605d: ret       4
00406060: push      esi
00406061: mov       esi, ecx
00406063: call      0x406080
00406068: test      byte ptr [esp + 8], 1
0040606d: je        0x406078
0040606f: push      esi
00406070: call      0x5fe5f0
00406075: add       esp, 4
00406078: mov       eax, esi
0040607a: pop       esi
0040607b: ret       4
0040607e: nop       
0040607f: nop       
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
