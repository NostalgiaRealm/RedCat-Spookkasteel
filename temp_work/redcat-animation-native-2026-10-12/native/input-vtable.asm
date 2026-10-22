004374a0: push      esi
004374a1: mov       esi, ecx
004374a3: call      0x4de360
004374a8: xor       al, al
004374aa: lea       ecx, [esi + 0x28]
004374ad: mov       byte ptr [esi + 0x20], al
004374b0: mov       byte ptr [esi + 0x21], al
004374b3: mov       byte ptr [esi + 0x22], al
004374b6: mov       byte ptr [esi + 0x23], al
004374b9: mov       byte ptr [esi + 0x24], al
004374bc: mov       dword ptr [esi], 0x64c5b0
004374c2: call      0x5b3070
004374c7: lea       ecx, [esi + 0x14]
004374ca: call      0x5b3070
004374cf: mov       eax, esi
004374d1: pop       esi
004374d2: ret       
004374d3: nop       
004374d4: nop       
004374d5: nop       
004374d6: nop       
004374d7: nop       
004374d8: nop       
004374d9: nop       
004374da: nop       
004374db: nop       
004374dc: nop       
004374dd: nop       
004374de: nop       
004374df: nop       
004374e0: push      esi
004374e1: mov       esi, ecx
004374e3: call      0x437570
004374e8: test      byte ptr [esp + 8], 1
004374ed: je        0x4374f8
004374ef: push      esi
004374f0: call      0x5fe5f0
004374f5: add       esp, 4
004374f8: mov       eax, esi
004374fa: pop       esi
004374fb: ret       4
004374fe: nop       
004374ff: nop       
00437500: push      esi
00437501: push      edi
00437502: mov       edi, dword ptr [esp + 0xc]
00437506: mov       esi, ecx
00437508: push      edi
00437509: call      0x4de3a0
0043750e: lea       eax, [edi + 0x14]
00437511: lea       ecx, [esi + 0x14]
00437514: add       edi, 0x28
00437517: mov       edx, dword ptr [eax]
00437519: mov       dword ptr [ecx], edx
0043751b: mov       edx, dword ptr [eax + 4]
0043751e: mov       dword ptr [ecx + 4], edx
00437521: mov       eax, dword ptr [eax + 8]
00437524: mov       dword ptr [ecx + 8], eax
00437527: mov       cl, byte ptr [edi - 8]
0043752a: mov       byte ptr [esi + 0x20], cl
0043752d: mov       dl, byte ptr [edi - 7]
00437530: mov       byte ptr [esi + 0x21], dl
00437533: mov       al, byte ptr [edi - 6]
00437536: mov       byte ptr [esi + 0x22], al
00437539: mov       cl, byte ptr [edi - 5]
0043753c: mov       byte ptr [esi + 0x23], cl
0043753f: mov       dl, byte ptr [edi - 4]
00437542: mov       byte ptr [esi + 0x24], dl
00437545: mov       ecx, dword ptr [edi]
00437547: lea       eax, [esi + 0x28]
0043754a: mov       dword ptr [esi + 0x28], ecx
0043754d: mov       edx, dword ptr [edi + 4]
00437550: mov       dword ptr [eax + 4], edx
00437553: mov       ecx, dword ptr [edi + 8]
00437556: mov       dword ptr [esi], 0x64c5b0
0043755c: pop       edi
0043755d: mov       dword ptr [eax + 8], ecx
00437560: mov       eax, esi
00437562: pop       esi
00437563: ret       4
00437566: nop       
00437567: nop       
00437568: nop       
00437569: nop       
0043756a: nop       
0043756b: nop       
0043756c: nop       
0043756d: nop       
0043756e: nop       
0043756f: nop       
00437570: mov       dword ptr [ecx], 0x64c5b0
00437576: jmp       0x4de3c0
0043757b: nop       
0043757c: nop       
0043757d: nop       
0043757e: nop       
0043757f: nop       
00437580: push      esi
00437581: mov       esi, ecx
00437583: lea       ecx, [esi + 0x28]
00437586: call      0x5b3070
0043758b: lea       ecx, [esi + 0x14]
0043758e: call      0x5b3070
00437593: xor       al, al
00437595: mov       byte ptr [esi + 0x20], al
00437598: mov       byte ptr [esi + 0x23], al
0043759b: mov       byte ptr [esi + 0x21], al
0043759e: mov       byte ptr [esi + 0x22], al
004375a1: mov       byte ptr [esi + 0x24], al
004375a4: pop       esi
004375a5: ret       
004375a6: nop       
004375a7: nop       
004375a8: nop       
004375a9: nop       
004375aa: nop       
004375ab: nop       
004375ac: nop       
004375ad: nop       
004375ae: nop       
004375af: nop       
004375b0: mov       eax, dword ptr [0x6b915c]
004375b5: sub       esp, 0xc
004375b8: test      eax, eax
004375ba: push      esi
004375bb: push      edi
004375bc: mov       edi, ecx
004375be: jne       0x4375c5
004375c0: call      0x4bc480
004375c5: push      1
004375c7: push      0x690308
004375cc: push      0x6902e8
004375d1: push      0
004375d3: push      eax
004375d4: call      0x60a6f2
004375d9: add       esp, 0x14
004375dc: mov       ecx, eax
004375de: call      0x492360
004375e3: mov       esi, eax
004375e5: lea       ecx, [edi + 0x22]
004375e8: lea       edx, [esp + 8]
004375ec: push      ecx
004375ed: mov       eax, dword ptr [esi]
004375ef: push      edx
004375f0: mov       ecx, esi
004375f2: call      dword ptr [eax + 4]
004375f5: mov       edx, dword ptr [eax]
004375f7: lea       ecx, [edi + 0x28]
004375fa: mov       dword ptr [edi + 0x28], edx
004375fd: mov       edx, dword ptr [eax + 4]
00437600: mov       dword ptr [ecx + 4], edx
00437603: mov       eax, dword ptr [eax + 8]
00437606: mov       dword ptr [ecx + 8], eax
00437609: mov       edx, dword ptr [esi]
0043760b: mov       ecx, esi
0043760d: call      dword ptr [edx + 0x14]
00437610: mov       byte ptr [edi + 0x20], al
00437613: mov       eax, dword ptr [esi]
00437615: mov       ecx, esi
00437617: call      dword ptr [eax + 0x10]
0043761a: mov       ecx, esi
0043761c: mov       byte ptr [edi + 0x21], al
0043761f: call      0x482b80
00437624: mov       byte ptr [edi + 0x24], al
00437627: pop       edi
00437628: pop       esi
00437629: add       esp, 0xc
0043762c: ret       
0043762d: nop       
0043762e: nop       
0043762f: nop       
00437630: fld       dword ptr [esp + 4]
00437634: fmul      dword ptr [0x64c5f0]
0043763a: fmul      dword ptr [0x64b1d8]
00437640: fstp      dword ptr [ecx + 0x18]
00437643: ret       4
00437646: nop       
00437647: nop       
00437648: nop       
00437649: nop       
0043764a: nop       
0043764b: nop       
0043764c: nop       
0043764d: nop       
0043764e: nop       
0043764f: nop       
00437650: fld       dword ptr [esp + 4]
00437654: fadd      dword ptr [ecx + 0x18]
00437657: fstp      dword ptr [ecx + 0x18]
0043765a: ret       4
0043765d: nop       
0043765e: nop       
0043765f: nop       
00437660: push      esi
00437661: mov       esi, ecx
00437663: xor       al, al
00437665: lea       ecx, [esi + 0x28]
00437668: mov       byte ptr [esi + 0x22], al
0043766b: mov       byte ptr [esi + 0x21], al
0043766e: mov       byte ptr [esi + 0x24], al
00437671: call      0x5b3070
00437676: mov       eax, dword ptr [esp + 8]
0043767a: mov       dword ptr [esi + 0x1c], eax
0043767d: pop       esi
0043767e: ret       4
00437681: nop       
00437682: nop       
00437683: nop       
00437684: nop       
00437685: nop       
00437686: nop       
00437687: nop       
00437688: nop       
00437689: nop       
0043768a: nop       
0043768b: nop       
0043768c: nop       
0043768d: nop       
0043768e: nop       
0043768f: nop       
00437690: mov       edx, dword ptr [esp + 8]
00437694: lea       eax, [ecx + 0x14]
00437697: mov       dword ptr [ecx + 0x14], edx
0043769a: mov       edx, dword ptr [esp + 0xc]
0043769e: mov       dword ptr [eax + 4], edx
004376a1: mov       edx, dword ptr [esp + 0x10]
004376a5: mov       dword ptr [eax + 8], edx
004376a8: mov       edx, dword ptr [esp + 4]
004376ac: mov       eax, dword ptr [ecx]
004376ae: push      edx
004376af: call      dword ptr [eax + 0x20]
004376b2: ret       0x10
004376b5: nop       
004376b6: nop       
004376b7: nop       
004376b8: nop       
004376b9: nop       
004376ba: nop       
004376bb: nop       
004376bc: nop       
004376bd: nop       
004376be: nop       
004376bf: nop       
004376c0: mov       eax, dword ptr [esp + 4]
004376c4: add       ecx, 0x28
004376c7: push      esi
004376c8: mov       edx, eax
004376ca: mov       esi, dword ptr [ecx]
004376cc: mov       dword ptr [edx], esi
004376ce: mov       esi, dword ptr [ecx + 4]
004376d1: mov       dword ptr [edx + 4], esi
004376d4: pop       esi
004376d5: mov       ecx, dword ptr [ecx + 8]
004376d8: mov       dword ptr [edx + 8], ecx
004376db: ret       4
004376de: nop       
004376df: nop       
004376e0: mov       eax, dword ptr [esp + 4]
004376e4: add       ecx, 0x14
004376e7: push      esi
004376e8: mov       edx, eax
004376ea: mov       esi, dword ptr [ecx]
004376ec: mov       dword ptr [edx], esi
004376ee: mov       esi, dword ptr [ecx + 4]
004376f1: mov       dword ptr [edx + 4], esi
004376f4: pop       esi
004376f5: mov       ecx, dword ptr [ecx + 8]
004376f8: mov       dword ptr [edx + 8], ecx
004376fb: ret       4
004376fe: nop       
004376ff: nop       
00437700: mov       al, byte ptr [ecx + 0x20]
00437703: ret       
00437704: nop       
00437705: nop       
00437706: nop       
00437707: nop       
00437708: nop       
00437709: nop       
0043770a: nop       
0043770b: nop       
0043770c: nop       
0043770d: nop       
0043770e: nop       
0043770f: nop       
00437710: mov       al, byte ptr [ecx + 0x21]
00437713: ret       
00437714: nop       
00437715: nop       
00437716: nop       
00437717: nop       
00437718: nop       
00437719: nop       
0043771a: nop       
0043771b: nop       
0043771c: nop       
0043771d: nop       
0043771e: nop       
0043771f: nop       
00437720: mov       al, byte ptr [ecx + 0x22]
00437723: ret       
00437724: nop       
00437725: nop       
00437726: nop       
00437727: nop       
00437728: nop       
00437729: nop       
0043772a: nop       
0043772b: nop       
0043772c: nop       
0043772d: nop       
0043772e: nop       
0043772f: nop       
00437730: mov       al, byte ptr [ecx + 0x24]
00437733: ret       
00437734: nop       
00437735: nop       
00437736: nop       
00437737: nop       
00437738: nop       
00437739: nop       
0043773a: nop       
0043773b: nop       
0043773c: nop       
0043773d: nop       
0043773e: nop       
0043773f: nop       
00437740: mov       al, byte ptr [ecx + 0x23]
00437743: test      al, al
00437745: je        0x43774e
00437747: mov       dword ptr [ecx + 0x14], 0
0043774e: ret       
0043774f: nop       
00437750: mov       eax, dword ptr [esp + 4]
00437754: add       ecx, 0x14
00437757: mov       edx, dword ptr [eax]
00437759: mov       dword ptr [ecx], edx
0043775b: mov       edx, dword ptr [eax + 4]
0043775e: mov       dword ptr [ecx + 4], edx
00437761: mov       eax, dword ptr [eax + 8]
00437764: mov       dword ptr [ecx + 8], eax
00437767: ret       4
0043776a: nop       
0043776b: nop       
0043776c: nop       
0043776d: nop       
0043776e: nop       
0043776f: nop       
00437770: mov       eax, dword ptr [esp + 4]
00437774: add       ecx, 0x28
00437777: mov       edx, dword ptr [eax]
00437779: mov       dword ptr [ecx], edx
0043777b: mov       edx, dword ptr [eax + 4]
0043777e: mov       dword ptr [ecx + 4], edx
00437781: mov       eax, dword ptr [eax + 8]
00437784: mov       dword ptr [ecx + 8], eax
00437787: ret       4
0043778a: nop       
0043778b: nop       
0043778c: nop       
0043778d: nop       
0043778e: nop       
0043778f: nop       
00437790: push      -1
00437792: push      0x623dcb
00437797: mov       eax, dword ptr fs:[0]
0043779d: push      eax
0043779e: mov       dword ptr fs:[0], esp
004377a5: push      ecx
004377a6: push      esi
004377a7: mov       esi, ecx
004377a9: push      0x34
004377ab: call      0x60a0b5
004377b0: add       esp, 4
004377b3: mov       dword ptr [esp + 4], eax
004377b7: test      eax, eax
004377b9: mov       dword ptr [esp + 0x10], 0
004377c1: je        0x4377db
004377c3: push      esi
004377c4: mov       ecx, eax
004377c6: call      0x437500
004377cb: pop       esi
004377cc: mov       ecx, dword ptr [esp + 4]
004377d0: mov       dword ptr fs:[0], ecx
004377d7: add       esp, 0x10
004377da: ret       
004377db: mov       ecx, dword ptr [esp + 8]
004377df: xor       eax, eax
004377e1: pop       esi
004377e2: mov       dword ptr fs:[0], ecx
004377e9: add       esp, 0x10
004377ec: ret       
004377ed: nop       
004377ee: nop       
004377ef: nop       
004377f0: mov       cl, byte ptr [0x7103a0]
004377f6: mov       al, 1
004377f8: test      al, cl
004377fa: jne       0x437804
004377fc: or        cl, al
004377fe: mov       byte ptr [0x7103a0], cl
00437804: jmp       0x437810
00437809: nop       
0043780a: nop       
0043780b: nop       
0043780c: nop       
0043780d: nop       
0043780e: nop       
0043780f: nop       
00437810: push      0x401ba0
00437815: call      0x60a57b
0043781a: pop       ecx
0043781b: ret       
0043781c: nop       
0043781d: nop       
0043781e: nop       
0043781f: nop       
00437820: call      0x437830
00437825: jmp       0x437910
0043782a: nop       
0043782b: nop       
0043782c: nop       
0043782d: nop       
0043782e: nop       
0043782f: nop       
00437830: push      ecx
00437831: mov       al, byte ptr [esp + 3]
00437835: push      ebx
00437836: push      esi
00437837: push      edi
00437838: mov       byte ptr [0x6b58b8], al
