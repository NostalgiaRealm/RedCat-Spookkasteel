00401160: mov       eax, dword ptr fs:[0]
00401166: push      -1
00401168: push      0x61f818
0040116d: push      eax
0040116e: mov       dword ptr fs:[0], esp
00401175: sub       esp, 0x10
00401178: push      ebx
00401179: push      esi
0040117a: push      edi
0040117b: mov       esi, ecx
0040117d: call      0x402cf0
00401182: cmp       eax, 3
00401185: ja        0x4012f3
0040118b: jmp       dword ptr [eax*4 + 0x4013c0]
00401192: mov       ecx, dword ptr [esi + 0x28]
00401195: call      0x4288c0
0040119a: mov       ecx, eax
0040119c: call      0x596c40
004011a1: test      al, al
004011a3: je        0x4011af
004011a5: mov       eax, dword ptr [esp + 0x30]
004011a9: push      eax
004011aa: jmp       0x4012cc
004011af: mov       ecx, dword ptr [esi + 0x28]
004011b2: call      0x4288c0
004011b7: mov       ecx, eax
004011b9: call      0x596d40
004011be: test      al, al
004011c0: je        0x4013a9
004011c6: mov       ecx, esi
004011c8: call      0x4013d0
004011cd: pop       edi
004011ce: pop       esi
004011cf: pop       ebx
004011d0: mov       ecx, dword ptr [esp + 0x10]
004011d4: mov       dword ptr fs:[0], ecx
004011db: add       esp, 0x1c
004011de: ret       8
004011e1: mov       edi, dword ptr [esp + 0x30]
004011e5: mov       ecx, dword ptr [esp + 0x2c]
004011e9: push      edi
004011ea: push      ecx
004011eb: mov       ecx, esi
004011ed: call      0x402a80
004011f2: mov       ecx, eax
004011f4: call      0x402d20
004011f9: mov       ecx, esi
004011fb: call      0x402a80
00401200: mov       ecx, eax
00401202: call      0x402d10
00401207: test      al, al
00401209: je        0x4013a9
0040120f: push      edi
00401210: mov       ecx, esi
00401212: call      0x401440
00401217: mov       ecx, dword ptr [esi + 0x28]
0040121a: mov       edx, dword ptr [ecx]
0040121c: call      dword ptr [edx + 0xc8]
00401222: pop       edi
00401223: pop       esi
00401224: pop       ebx
00401225: mov       ecx, dword ptr [esp + 0x10]
00401229: mov       dword ptr fs:[0], ecx
00401230: add       esp, 0x1c
00401233: ret       8
00401236: mov       ecx, dword ptr [esi + 0x28]
00401239: call      0x423700
0040123e: mov       ecx, eax
00401240: call      0x4a0d00
00401245: test      al, al
00401247: je        0x4013a9
0040124d: call      0x60a4a0
00401252: cdq       
00401253: mov       ecx, 0x2710
00401258: idiv      ecx
0040125a: mov       ecx, dword ptr [esi + 0x28]
0040125d: mov       dword ptr [esp + 0x30], edx
00401261: fild      dword ptr [esp + 0x30]
00401265: fmul      dword ptr [0x64a2c4]
0040126b: fstp      dword ptr [esp + 0x30]
0040126f: call      0x429fd0
00401274: fld       dword ptr [esp + 0x30]
00401278: fcomp     dword ptr [eax + 0x34]
0040127b: mov       ecx, esi
0040127d: fnstsw    ax
0040127f: test      ah, 0x41
00401282: je        0x4012da
00401284: call      0x4014b0
00401289: pop       edi
0040128a: pop       esi
0040128b: pop       ebx
0040128c: mov       ecx, dword ptr [esp + 0x10]
00401290: mov       dword ptr fs:[0], ecx
00401297: add       esp, 0x1c
0040129a: ret       8
0040129d: mov       edi, dword ptr [esp + 0x30]
004012a1: mov       edx, dword ptr [esp + 0x2c]
004012a5: push      edi
004012a6: push      edx
004012a7: mov       ecx, esi
004012a9: call      0x402a80
004012ae: mov       ecx, eax
004012b0: call      0x402d20
004012b5: mov       ecx, esi
004012b7: call      0x402a80
004012bc: mov       ecx, eax
004012be: call      0x402d10
004012c3: test      al, al
004012c5: je        0x4013a9
004012cb: push      edi
004012cc: mov       ecx, dword ptr [esi + 0x28]
004012cf: call      0x422f70
004012d4: test      al, al
004012d6: mov       ecx, esi
004012d8: je        0x401284
004012da: call      0x4013d0
004012df: pop       edi
004012e0: pop       esi
004012e1: pop       ebx
004012e2: mov       ecx, dword ptr [esp + 0x10]
004012e6: mov       dword ptr fs:[0], ecx
004012ed: add       esp, 0x1c
004012f0: ret       8
004012f3: mov       al, byte ptr [esp + 0x30]
004012f7: mov       edi, 0x68d308
004012fc: mov       byte ptr [esp + 0xc], al
00401300: or        ecx, 0xffffffff
00401303: xor       eax, eax
00401305: xor       ebx, ebx
00401307: repne scasb al, byte ptr es:[edi]
00401309: not       ecx
0040130b: dec       ecx
0040130c: push      ebp
0040130d: mov       ebp, ecx
0040130f: push      1
00401311: push      ebp
00401312: lea       ecx, [esp + 0x18]
00401316: mov       dword ptr [esp + 0x1c], ebx
0040131a: mov       dword ptr [esp + 0x20], ebx
0040131e: mov       dword ptr [esp + 0x24], ebx
00401322: call      0x401940
00401327: test      al, al
00401329: je        0x40134f
0040132b: mov       edi, dword ptr [esp + 0x14]
0040132f: mov       ecx, ebp
00401331: mov       edx, ecx
00401333: mov       esi, 0x68d308
00401338: shr       ecx, 2
0040133b: rep movsd dword ptr es:[edi], dword ptr [esi]
0040133d: mov       ecx, edx
0040133f: and       ecx, 3
00401342: rep movsb byte ptr es:[edi], byte ptr [esi]
00401344: mov       eax, dword ptr [esp + 0x14]
00401348: mov       dword ptr [esp + 0x18], ebp
0040134c: mov       byte ptr [eax + ebp], bl
0040134f: lea       ecx, [esp + 0x10]
00401353: mov       dword ptr [esp + 0x28], ebx
00401357: push      ecx
00401358: push      0x84
0040135d: push      0x68d2d8
00401362: push      0x68d2d0
00401367: call      0x5a07f0
0040136c: call      eax
0040136e: mov       eax, dword ptr [esp + 0x24]
00401372: add       esp, 0x10
00401375: cmp       eax, ebx
00401377: pop       ebp
00401378: je        0x4013a9
0040137a: lea       ecx, [eax - 1]
0040137d: mov       al, byte ptr [eax - 1]
00401380: cmp       al, bl
00401382: je        0x4013a0
00401384: cmp       al, 0xff
00401386: je        0x4013a0
00401388: dec       al
0040138a: pop       edi
0040138b: pop       esi
0040138c: mov       byte ptr [ecx], al
0040138e: pop       ebx
0040138f: mov       ecx, dword ptr [esp + 0x10]
00401393: mov       dword ptr fs:[0], ecx
0040139a: add       esp, 0x1c
0040139d: ret       8
004013a0: push      ecx
004013a1: call      0x5fe5f0
004013a6: add       esp, 4
004013a9: mov       ecx, dword ptr [esp + 0x1c]
004013ad: pop       edi
004013ae: pop       esi
004013af: pop       ebx
004013b0: mov       dword ptr fs:[0], ecx
004013b7: add       esp, 0x1c
004013ba: ret       8
004013bd: lea       ecx, [ecx]
004013c0: xchg      edx, eax
004013c1: adc       dword ptr [eax], eax
004013c4: loope     0x4013d7
004013c6: inc       eax
004013c7: add       byte ptr [esi], dh
004013c9: adc       al, byte ptr [eax]
004013cc: popfd     
004013cd: adc       al, byte ptr [eax]
004013d0: push      -1
004013d2: push      0x61f83b
004013d7: mov       eax, dword ptr fs:[0]
004013dd: push      eax
004013de: mov       dword ptr fs:[0], esp
004013e5: push      ecx
004013e6: push      esi
004013e7: mov       esi, ecx
004013e9: push      0x3c
004013eb: call      0x60a0b5
004013f0: add       esp, 4
004013f3: mov       dword ptr [esp + 4], eax
004013f7: test      eax, eax
004013f9: mov       dword ptr [esp + 0x10], 0
00401401: je        0x401410
00401403: mov       ecx, dword ptr [esi + 0x28]
00401406: push      ecx
00401407: mov       ecx, eax
00401409: call      0x401530
0040140e: jmp       0x401412
00401410: xor       eax, eax
00401412: push      eax
00401413: push      1
00401415: mov       ecx, esi
00401417: mov       dword ptr [esp + 0x18], 0xffffffff
0040141f: call      0x402a10
00401424: mov       ecx, dword ptr [esp + 8]
00401428: pop       esi
00401429: mov       dword ptr fs:[0], ecx
00401430: add       esp, 0x10
00401433: ret       
00401434: nop       
00401435: nop       
00401436: nop       
00401437: nop       
00401438: nop       
00401439: nop       
0040143a: nop       
0040143b: nop       
0040143c: nop       
0040143d: nop       
0040143e: nop       
0040143f: nop       
00401440: push      ecx
00401441: push      esi
00401442: mov       esi, ecx
00401444: push      ecx
00401445: mov       ecx, dword ptr [esi + 0x28]
00401448: mov       eax, esp
0040144a: mov       dword ptr [esp + 8], esp
0040144e: push      eax
0040144f: call      0x4237d0
00401454: mov       ecx, dword ptr [esi + 0x28]
00401457: call      0x428250
0040145c: push      0
0040145e: push      2
00401460: mov       ecx, esi
00401462: call      0x402a10
00401467: call      0x60a4a0
0040146c: cdq       
0040146d: mov       ecx, 0x2710
00401472: idiv      ecx
00401474: mov       ecx, dword ptr [esi + 0x28]
00401477: mov       dword ptr [esp + 4], edx
0040147b: fild      dword ptr [esp + 4]
0040147f: fmul      dword ptr [0x64a2cc]
00401485: fadd      dword ptr [0x64a2c8]
0040148b: fstp      dword ptr [esp + 4]
0040148f: mov       edx, dword ptr [esp + 4]
00401493: push      edx
00401494: push      0
00401496: push      0
00401498: call      0x419b70
0040149d: pop       esi
0040149e: pop       ecx
0040149f: ret       4
004014a2: nop       
004014a3: nop       
004014a4: nop       
004014a5: nop       
004014a6: nop       
004014a7: nop       
004014a8: nop       
004014a9: nop       
004014aa: nop       
004014ab: nop       
004014ac: nop       
004014ad: nop       
004014ae: nop       
004014af: nop       
004014b0: push      ecx
004014b1: push      esi
004014b2: mov       esi, ecx
004014b4: mov       ecx, dword ptr [esi + 0x28]
004014b7: call      0x422d90
004014bc: mov       eax, dword ptr [eax + 0x30]
004014bf: mov       ecx, dword ptr [esi + 0x28]
004014c2: push      eax
004014c3: call      0x4288c0
004014c8: mov       ecx, eax
004014ca: call      0x5967f0
004014cf: mov       ecx, dword ptr [esi + 0x28]
004014d2: call      0x4288c0
004014d7: mov       ecx, eax
004014d9: call      0x596d40
004014de: test      al, al
004014e0: je        0x4014ec
004014e2: mov       ecx, esi
004014e4: call      0x4013d0
004014e9: pop       esi
004014ea: pop       ecx
004014eb: ret       
004014ec: mov       ecx, dword ptr [esi + 0x28]
004014ef: call      0x428b40
004014f4: push      ecx
004014f5: mov       eax, esp
004014f7: mov       dword ptr [esp + 8], esp
004014fb: mov       dword ptr [eax], 0
00401501: mov       ecx, dword ptr [esi + 0x28]
00401504: call      0x428250
00401509: mov       ecx, dword ptr [esi + 0x28]
0040150c: push      0x7f7fffff
00401511: push      1
00401513: push      2
00401515: mov       edx, dword ptr [ecx]
00401517: call      dword ptr [edx + 0x8c]
0040151d: push      0
0040151f: push      0
00401521: mov       ecx, esi
00401523: call      0x402a10
00401528: pop       esi
00401529: pop       ecx
0040152a: ret       
0040152b: nop       
0040152c: nop       
0040152d: nop       
0040152e: nop       
0040152f: nop       
00401530: push      -1
00401532: push      0x61f858
00401537: mov       eax, dword ptr fs:[0]
0040153d: push      eax
0040153e: mov       dword ptr fs:[0], esp
00401545: push      ecx
00401546: push      esi
00401547: push      edi
00401548: mov       edi, dword ptr [esp + 0x1c]
0040154c: mov       esi, ecx
0040154e: push      edi
0040154f: mov       dword ptr [esp + 0xc], esi
00401553: call      0x401000
00401558: mov       ecx, edi
0040155a: mov       dword ptr [esp + 0x14], 0
00401562: call      0x429fd0
00401567: mov       eax, dword ptr [eax + 0x2c]
0040156a: mov       ecx, dword ptr [esp + 0xc]
0040156e: mov       dword ptr [esi + 0x34], eax
00401571: mov       dword ptr [esi + 0x38], 0
00401578: mov       dword ptr [esi], 0x64a2d4
0040157e: mov       eax, esi
00401580: pop       edi
00401581: pop       esi
00401582: mov       dword ptr fs:[0], ecx
00401589: add       esp, 0x10
0040158c: ret       4
0040158f: nop       
00401590: push      ecx
00401591: push      esi
00401592: mov       esi, ecx
00401594: push      ecx
00401595: mov       ecx, dword ptr [esi + 0x30]
00401598: mov       eax, esp
0040159a: mov       dword ptr [esp + 8], esp
0040159e: push      eax
0040159f: call      0x4237d0
004015a4: mov       ecx, dword ptr [esi + 0x30]
004015a7: call      0x428250
004015ac: mov       ecx, dword ptr [esi + 0x30]
004015af: call      0x428b10
004015b4: mov       ecx, esi
004015b6: call      0x4085c0
004015bb: pop       esi
004015bc: pop       ecx
004015bd: ret       4
004015c0: mov       eax, dword ptr fs:[0]
004015c6: push      -1
004015c8: push      0x61f878
004015cd: push      eax
004015ce: mov       dword ptr fs:[0], esp
004015d5: sub       esp, 0x10
004015d8: push      ebx
004015d9: push      esi
004015da: mov       esi, ecx
004015dc: call      0x402cf0
004015e1: xor       ebx, ebx
004015e3: sub       eax, ebx
004015e5: je        0x40176e
004015eb: dec       eax
004015ec: je        0x40170d
004015f2: dec       eax
004015f3: je        0x4016c5
004015f9: mov       al, byte ptr [esp + 0x2c]
004015fd: push      ebp
004015fe: push      edi
004015ff: mov       byte ptr [esp + 0x10], al
00401603: mov       edi, 0x68d350
00401608: or        ecx, 0xffffffff
0040160b: xor       eax, eax
0040160d: push      1
0040160f: repne scasb al, byte ptr es:[edi]
00401611: not       ecx
00401613: dec       ecx
00401614: mov       dword ptr [esp + 0x18], ebx
00401618: mov       ebp, ecx
0040161a: lea       ecx, [esp + 0x14]
0040161e: push      ebp
0040161f: mov       dword ptr [esp + 0x20], ebx
00401623: mov       dword ptr [esp + 0x24], ebx
00401627: call      0x401940
0040162c: test      al, al
0040162e: je        0x401654
00401630: mov       edi, dword ptr [esp + 0x14]
00401634: mov       ecx, ebp
00401636: mov       edx, ecx
00401638: mov       esi, 0x68d350
0040163d: shr       ecx, 2
00401640: rep movsd dword ptr es:[edi], dword ptr [esi]
00401642: mov       ecx, edx
00401644: and       ecx, 3
00401647: rep movsb byte ptr es:[edi], byte ptr [esi]
00401649: mov       eax, dword ptr [esp + 0x14]
0040164d: mov       dword ptr [esp + 0x18], ebp
00401651: mov       byte ptr [eax + ebp], bl
00401654: lea       ecx, [esp + 0x10]
00401658: mov       dword ptr [esp + 0x28], ebx
0040165c: push      ecx
0040165d: push      0x106
00401662: push      0x68d2d8
00401667: push      0x68d2d0
0040166c: call      0x5a07f0
00401671: call      eax
00401673: mov       eax, dword ptr [esp + 0x24]
00401677: add       esp, 0x10
0040167a: cmp       eax, ebx
0040167c: pop       edi
0040167d: pop       ebp
0040167e: je        0x4017ac
00401684: lea       ecx, [eax - 1]
00401687: mov       al, byte ptr [eax - 1]
0040168a: cmp       al, bl
0040168c: je        0x4016a9
0040168e: cmp       al, 0xff
00401690: je        0x4016a9
00401692: dec       al
00401694: pop       esi
00401695: mov       byte ptr [ecx], al
00401697: pop       ebx
00401698: mov       ecx, dword ptr [esp + 0x10]
0040169c: mov       dword ptr fs:[0], ecx
004016a3: add       esp, 0x1c
004016a6: ret       8
004016a9: push      ecx
004016aa: call      0x5fe5f0
004016af: add       esp, 4
004016b2: pop       esi
004016b3: pop       ebx
004016b4: mov       ecx, dword ptr [esp + 0x10]
004016b8: mov       dword ptr fs:[0], ecx
004016bf: add       esp, 0x1c
004016c2: ret       8
004016c5: mov       edx, dword ptr [esp + 0x2c]
004016c9: mov       eax, dword ptr [esp + 0x28]
004016cd: push      edx
004016ce: push      eax
004016cf: mov       ecx, esi
004016d1: call      0x402a80
004016d6: mov       ecx, eax
004016d8: call      0x402d20
004016dd: mov       ecx, esi
004016df: call      0x402a80
004016e4: mov       ecx, eax
004016e6: call      0x402d10
004016eb: test      al, al
004016ed: je        0x4017ac
004016f3: mov       ecx, esi
004016f5: call      0x4085c0
004016fa: pop       esi
004016fb: pop       ebx
004016fc: mov       ecx, dword ptr [esp + 0x10]
00401700: mov       dword ptr fs:[0], ecx
00401707: add       esp, 0x1c
0040170a: ret       8
0040170d: mov       ecx, dword ptr [esi + 0x30]
00401710: call      0x423700
00401715: mov       ecx, eax
00401717: call      0x4a0d00
0040171c: test      al, al
0040171e: je        0x4017ac
00401724: mov       ecx, dword ptr [esi + 0x38]
00401727: mov       eax, dword ptr [esi + 0x34]
0040172a: cmp       ecx, eax
0040172c: jge       0x401754
0040172e: mov       ecx, dword ptr [esi + 0x30]
00401731: call      0x429fd0
00401736: mov       edx, dword ptr [eax + 0x30]
00401739: mov       ecx, esi
0040173b: push      edx
0040173c: call      0x4018d0
00401741: pop       esi
00401742: pop       ebx
00401743: mov       ecx, dword ptr [esp + 0x10]
00401747: mov       dword ptr fs:[0], ecx
0040174e: add       esp, 0x1c
00401751: ret       8
00401754: mov       ecx, esi
00401756: call      0x402d00
0040175b: pop       esi
0040175c: pop       ebx
0040175d: mov       ecx, dword ptr [esp + 0x10]
00401761: mov       dword ptr fs:[0], ecx
00401768: add       esp, 0x1c
0040176b: ret       8
0040176e: mov       ecx, dword ptr [esi + 0x30]
00401771: call      0x423700
00401776: mov       ecx, eax
00401778: call      0x4a1060
0040177d: mov       ecx, dword ptr [esi + 0x30]
00401780: fstp      dword ptr [esp + 0x2c]
00401784: call      0x429fd0
00401789: fld       dword ptr [esp + 0x2c]
0040178d: fcomp     dword ptr [eax + 0x24]
00401790: fnstsw    ax
00401792: test      ah, 1
00401795: jne       0x4017ac
00401797: mov       ecx, esi
00401799: call      0x4017c0
0040179e: mov       eax, dword ptr [esi + 0x38]
004017a1: mov       ecx, esi
004017a3: inc       eax
004017a4: mov       dword ptr [esi + 0x38], eax
004017a7: call      0x40a6e0
004017ac: mov       ecx, dword ptr [esp + 0x18]
004017b0: pop       esi
004017b1: pop       ebx
004017b2: mov       dword ptr fs:[0], ecx
004017b9: add       esp, 0x1c
004017bc: ret       8
004017bf: nop       
004017c0: push      -1
004017c2: push      0x61f898
004017c7: mov       eax, dword ptr fs:[0]
004017cd: push      eax
004017ce: mov       dword ptr fs:[0], esp
004017d5: sub       esp, 0x18
004017d8: push      esi
004017d9: mov       esi, ecx
004017db: mov       dword ptr [esp + 8], esi
004017df: mov       eax, dword ptr [esi + 0x38]
004017e2: mov       ecx, dword ptr [esi + 0x34]
004017e5: cmp       eax, ecx
004017e7: jle       0x4018ad
004017ed: mov       cl, byte ptr [esp + 7]
004017f1: push      ebx
004017f2: push      ebp
004017f3: push      edi
004017f4: mov       byte ptr [esp + 0x18], cl
004017f8: mov       edi, 0x6b3f70
004017fd: or        ecx, 0xffffffff
