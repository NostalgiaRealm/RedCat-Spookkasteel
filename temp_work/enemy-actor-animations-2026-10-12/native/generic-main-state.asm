00405550: push      esi
00405551: push      edi
00405552: mov       edi, dword ptr [esp + 0xc]
00405556: mov       esi, ecx
00405558: push      edi
00405559: call      0x402d70
0040555e: mov       dword ptr [esi + 0x2c], edi
00405561: mov       dword ptr [esi], 0x64a618
00405567: mov       eax, esi
00405569: pop       edi
0040556a: pop       esi
0040556b: ret       4
0040556e: nop       
0040556f: nop       
00405570: push      -1
00405572: push      0x61fedb
00405577: mov       eax, dword ptr fs:[0]
0040557d: push      eax
0040557e: mov       dword ptr fs:[0], esp
00405585: push      ecx
00405586: push      esi
00405587: mov       esi, ecx
00405589: push      0x30
0040558b: call      0x60a0b5
00405590: add       esp, 4
00405593: mov       dword ptr [esp + 4], eax
00405597: test      eax, eax
00405599: mov       dword ptr [esp + 0x10], 0
004055a1: je        0x4055b0
004055a3: mov       ecx, dword ptr [esi + 0x2c]
004055a6: push      ecx
004055a7: mov       ecx, eax
004055a9: call      0x406040
004055ae: jmp       0x4055b2
004055b0: xor       eax, eax
004055b2: push      eax
004055b3: push      0
004055b5: mov       ecx, esi
004055b7: mov       dword ptr [esp + 0x18], 0xffffffff
004055bf: call      0x402a10
004055c4: mov       ecx, dword ptr [esp + 8]
004055c8: pop       esi
004055c9: mov       dword ptr fs:[0], ecx
004055d0: add       esp, 0x10
004055d3: ret       
004055d4: nop       
004055d5: nop       
004055d6: nop       
004055d7: nop       
004055d8: nop       
004055d9: nop       
004055da: nop       
004055db: nop       
004055dc: nop       
004055dd: nop       
004055de: nop       
004055df: nop       
004055e0: push      -1
004055e2: push      0x61fefb
004055e7: mov       eax, dword ptr fs:[0]
004055ed: push      eax
004055ee: mov       dword ptr fs:[0], esp
004055f5: push      ecx
004055f6: push      esi
004055f7: mov       esi, ecx
004055f9: push      0x3c
004055fb: call      0x60a0b5
00405600: add       esp, 4
00405603: mov       dword ptr [esp + 4], eax
00405607: test      eax, eax
00405609: mov       dword ptr [esp + 0x10], 0
00405611: je        0x405620
00405613: mov       ecx, dword ptr [esi + 0x2c]
00405616: push      ecx
00405617: mov       ecx, eax
00405619: call      0x405840
0040561e: jmp       0x405622
00405620: xor       eax, eax
00405622: push      eax
00405623: push      1
00405625: mov       ecx, esi
00405627: mov       dword ptr [esp + 0x18], 0xffffffff
0040562f: call      0x402a10
00405634: mov       ecx, dword ptr [esp + 8]
00405638: pop       esi
00405639: mov       dword ptr fs:[0], ecx
00405640: add       esp, 0x10
00405643: ret       
00405644: nop       
00405645: nop       
00405646: nop       
00405647: nop       
00405648: nop       
00405649: nop       
0040564a: nop       
0040564b: nop       
0040564c: nop       
0040564d: nop       
0040564e: nop       
0040564f: nop       
00405650: push      -1
00405652: push      0x61ff1b
00405657: mov       eax, dword ptr fs:[0]
0040565d: push      eax
0040565e: mov       dword ptr fs:[0], esp
00405665: push      ecx
00405666: push      esi
00405667: mov       esi, ecx
00405669: push      0x2c
0040566b: call      0x60a0b5
00405670: add       esp, 4
00405673: mov       dword ptr [esp + 4], eax
00405677: test      eax, eax
00405679: mov       dword ptr [esp + 0x10], 0
00405681: je        0x405690
00405683: mov       ecx, dword ptr [esi + 0x2c]
00405686: push      ecx
00405687: mov       ecx, eax
00405689: call      0x405a80
0040568e: jmp       0x405692
00405690: xor       eax, eax
00405692: push      eax
00405693: push      2
00405695: mov       ecx, esi
00405697: mov       dword ptr [esp + 0x18], 0xffffffff
0040569f: call      0x402a10
004056a4: mov       ecx, dword ptr [esp + 8]
004056a8: pop       esi
004056a9: mov       dword ptr fs:[0], ecx
004056b0: add       esp, 0x10
004056b3: ret       
004056b4: nop       
004056b5: nop       
004056b6: nop       
004056b7: nop       
004056b8: nop       
004056b9: nop       
004056ba: nop       
004056bb: nop       
004056bc: nop       
004056bd: nop       
004056be: nop       
004056bf: nop       
004056c0: push      -1
004056c2: push      0x61ff3b
004056c7: mov       eax, dword ptr fs:[0]
004056cd: push      eax
004056ce: mov       dword ptr fs:[0], esp
004056d5: push      ecx
004056d6: push      esi
004056d7: mov       esi, ecx
004056d9: call      0x402cf0
004056de: cmp       eax, 5
004056e1: jne       0x4056ef
004056e3: mov       ecx, esi
004056e5: call      0x402cf0
004056ea: cmp       eax, 4
004056ed: je        0x40572a
004056ef: push      0x2c
004056f1: call      0x60a0b5
004056f6: add       esp, 4
004056f9: mov       dword ptr [esp + 4], eax
004056fd: test      eax, eax
004056ff: mov       dword ptr [esp + 0x10], 0
00405707: je        0x405716
00405709: mov       ecx, dword ptr [esi + 0x2c]
0040570c: push      ecx
0040570d: mov       ecx, eax
0040570f: call      0x405b10
00405714: jmp       0x405718
00405716: xor       eax, eax
00405718: push      eax
00405719: push      4
0040571b: mov       ecx, esi
0040571d: mov       dword ptr [esp + 0x18], 0xffffffff
00405725: call      0x402a10
0040572a: mov       ecx, dword ptr [esp + 8]
0040572e: pop       esi
0040572f: mov       dword ptr fs:[0], ecx
00405736: add       esp, 0x10
00405739: ret       
0040573a: nop       
0040573b: nop       
0040573c: nop       
0040573d: nop       
0040573e: nop       
0040573f: nop       
00405740: push      esi
00405741: mov       esi, ecx
00405743: call      0x402cf0
00405748: cmp       eax, 5
0040574b: je        0x405754
0040574d: mov       eax, dword ptr [esi]
0040574f: mov       ecx, esi
00405751: call      dword ptr [eax + 0x28]
00405754: pop       esi
00405755: ret       
00405756: nop       
00405757: nop       
00405758: nop       
00405759: nop       
0040575a: nop       
0040575b: nop       
0040575c: nop       
0040575d: nop       
0040575e: nop       
0040575f: nop       
00405760: push      -1
00405762: push      0x61ff5b
00405767: mov       eax, dword ptr fs:[0]
0040576d: push      eax
0040576e: mov       dword ptr fs:[0], esp
00405775: push      ecx
00405776: push      esi
00405777: mov       esi, ecx
00405779: push      0x3c
0040577b: call      0x60a0b5
00405780: add       esp, 4
00405783: mov       dword ptr [esp + 4], eax
00405787: test      eax, eax
00405789: mov       dword ptr [esp + 0x10], 0
00405791: je        0x4057a0
00405793: mov       ecx, dword ptr [esi + 0x2c]
00405796: push      ecx
00405797: mov       ecx, eax
00405799: call      0x405bd0
0040579e: jmp       0x4057a2
004057a0: xor       eax, eax
004057a2: push      eax
004057a3: push      5
004057a5: mov       ecx, esi
004057a7: mov       dword ptr [esp + 0x18], 0xffffffff
004057af: call      0x402a10
004057b4: mov       ecx, dword ptr [esp + 8]
004057b8: pop       esi
004057b9: mov       dword ptr fs:[0], ecx
004057c0: add       esp, 0x10
004057c3: ret       
004057c4: nop       
004057c5: nop       
004057c6: nop       
004057c7: nop       
004057c8: nop       
004057c9: nop       
004057ca: nop       
004057cb: nop       
004057cc: nop       
004057cd: nop       
004057ce: nop       
004057cf: nop       
004057d0: push      -1
004057d2: push      0x61ff7b
004057d7: mov       eax, dword ptr fs:[0]
004057dd: push      eax
004057de: mov       dword ptr fs:[0], esp
004057e5: push      ecx
004057e6: push      esi
004057e7: mov       esi, ecx
004057e9: push      0x3c
004057eb: call      0x60a0b5
004057f0: add       esp, 4
004057f3: mov       dword ptr [esp + 4], eax
004057f7: test      eax, eax
004057f9: mov       dword ptr [esp + 0x10], 0
00405801: je        0x405815
00405803: mov       ecx, dword ptr [esp + 0x18]
00405807: mov       edx, dword ptr [esi + 0x2c]
0040580a: push      ecx
0040580b: push      edx
0040580c: mov       ecx, eax
0040580e: call      0x405c20
00405813: jmp       0x405817
00405815: xor       eax, eax
00405817: push      eax
00405818: push      4
0040581a: mov       ecx, esi
0040581c: mov       dword ptr [esp + 0x18], 0xffffffff
00405824: call      0x402a10
00405829: mov       ecx, dword ptr [esp + 8]
0040582d: pop       esi
0040582e: mov       dword ptr fs:[0], ecx
00405835: add       esp, 0x10
00405838: ret       4
0040583b: nop       
0040583c: nop       
0040583d: nop       
0040583e: nop       
0040583f: nop       
00405840: push      -1
00405842: push      0x61ffa0
00405847: mov       eax, dword ptr fs:[0]
0040584d: push      eax
0040584e: mov       dword ptr fs:[0], esp
00405855: sub       esp, 0x14
00405858: mov       eax, dword ptr [esp + 0x24]
0040585c: push      ebp
0040585d: push      esi
0040585e: mov       ebp, ecx
00405860: push      eax
00405861: mov       dword ptr [esp + 0xc], ebp
00405865: call      0x405530
0040586a: xor       esi, esi
0040586c: mov       dword ptr [esp + 0x24], esi
00405870: call      0x60a4a0
00405875: cdq       
00405876: mov       ecx, 0x2710
0040587b: idiv      ecx
0040587d: mov       dword ptr [esp + 0x2c], edx
00405881: fild      dword ptr [esp + 0x2c]
00405885: fmul      dword ptr [0x64a658]
0040588b: fadd      dword ptr [0x64a42c]
00405891: call      0x60ab20
00405896: cmp       eax, -1
00405899: mov       dword ptr [esp + 0x2c], eax
0040589d: je        0x405950
004058a3: cmp       eax, esi
004058a5: jge       0x405950
004058ab: push      ebx
004058ac: push      edi
004058ad: mov       edi, 0x6b3f70
004058b2: or        ecx, 0xffffffff
004058b5: xor       eax, eax
004058b7: mov       dl, byte ptr [esp + 0x34]
004058bb: repne scasb al, byte ptr es:[edi]
004058bd: not       ecx
004058bf: dec       ecx
