00407170: les      ebx, ptr [edx + eax*8]
00407173: or       byte ptr [eax], al
00407175: mov      ecx, dword ptr [esi + 0x28]
00407178: call     0x4288c0
0040717d: mov      ecx, eax
0040717f: call     0x596c40
00407184: test     al, al
00407186: je       0x4071cf
00407188: mov      ecx, dword ptr [esp + 0x30]
0040718c: push     ecx
0040718d: mov      ecx, dword ptr [esi + 0x24]
00407190: call     0x422f30
00407195: test     al, al
00407197: jne      0x4071b4
00407199: mov      ecx, esi
0040719b: call     0x402d00
004071a0: pop      edi
004071a1: pop      esi
004071a2: pop      ebx
004071a3: mov      ecx, dword ptr [esp + 0x10]
004071a7: mov      dword ptr fs:[0], ecx
004071ae: add      esp, 0x1c
004071b1: ret      8
004071b4: mov      edx, dword ptr [esi]
004071b6: mov      ecx, esi
004071b8: call     dword ptr [edx + 0x10]
004071bb: pop      edi
004071bc: pop      esi
004071bd: pop      ebx
004071be: mov      ecx, dword ptr [esp + 0x10]
004071c2: mov      dword ptr fs:[0], ecx
004071c9: add      esp, 0x1c
004071cc: ret      8
004071cf: mov      ecx, dword ptr [esi + 0x28]
004071d2: call     0x4288c0
004071d7: mov      ecx, eax
004071d9: call     0x596d40
004071de: test     al, al
004071e0: je       0x4071e9
004071e2: mov      eax, dword ptr [esi]
004071e4: mov      ecx, esi
004071e6: call     dword ptr [eax + 0x10]
004071e9: mov      ecx, dword ptr [esp + 0x1c]
004071ed: pop      edi
004071ee: pop      esi
004071ef: pop      ebx
004071f0: mov      dword ptr fs:[0], ecx
004071f7: add      esp, 0x1c
004071fa: ret      8
004071fd: nop      
004071fe: nop      
004071ff: nop      
00407200: push     -1
00407202: push     0x6201fb
00407207: mov      eax, dword ptr fs:[0]
0040720d: push     eax
0040720e: mov      dword ptr fs:[0], esp
00407215: push     ecx
00407216: push     esi
00407217: mov      esi, ecx
00407219: push     ecx
0040721a: mov      ecx, dword ptr [esi + 0x28]
0040721d: mov      eax, esp
0040721f: mov      dword ptr [esp + 8], esp
00407223: push     eax
00407224: call     0x4237d0
00407229: mov      ecx, dword ptr [esi + 0x28]
0040722c: call     0x428250
00407231: push     0x38
00407233: call     0x60a0b5
00407238: add      esp, 4
0040723b: mov      dword ptr [esp + 4], eax
0040723f: test     eax, eax
00407241: mov      dword ptr [esp + 0x10], 0
00407249: je       0x407258
0040724b: mov      ecx, dword ptr [esi + 0x28]
0040724e: push     ecx
0040724f: mov      ecx, eax
00407251: call     0x4073a0
00407256: jmp      0x40725a
00407258: xor      eax, eax
0040725a: push     eax
0040725b: push     1
0040725d: mov      ecx, esi
0040725f: mov      dword ptr [esp + 0x18], 0xffffffff
00407267: call     0x402a10
0040726c: mov      ecx, dword ptr [esp + 8]
00407270: pop      esi
00407271: mov      dword ptr fs:[0], ecx
00407278: add      esp, 0x10
0040727b: ret      
0040727c: nop      
0040727d: nop      
0040727e: nop      
0040727f: nop      
00407280: push     ecx
00407281: push     esi
00407282: mov      esi, ecx
00407284: mov      eax, dword ptr [esi]
00407286: call     dword ptr [eax + 0x18]
00407289: mov      ecx, dword ptr [esi + 0x28]
0040728c: call     0x4288c0
00407291: mov      ecx, eax
00407293: call     0x596d40
00407298: test     al, al
0040729a: je       0x4072a6
0040729c: mov      edx, dword ptr [esi]
0040729e: mov      ecx, esi
004072a0: call     dword ptr [edx + 0x10]
004072a3: pop      esi
004072a4: pop      ecx
004072a5: ret      
004072a6: mov      ecx, dword ptr [esi + 0x28]
004072a9: push     0x7f7fffff
004072ae: push     1
004072b0: push     2
004072b2: mov      eax, dword ptr [ecx]
004072b4: call     dword ptr [eax + 0x8c]
004072ba: push     ecx
004072bb: mov      eax, esp
004072bd: mov      dword ptr [esp + 8], esp
004072c1: mov      dword ptr [eax], 0
004072c7: mov      ecx, dword ptr [esi + 0x28]
004072ca: call     0x428250
004072cf: mov      ecx, dword ptr [esi + 0x28]
004072d2: call     0x428b40
004072d7: push     0
004072d9: push     0
004072db: mov      ecx, esi
004072dd: call     0x402a10
004072e2: pop      esi
004072e3: pop      ecx
004072e4: ret      
004072e5: nop      
004072e6: nop      
004072e7: nop      
004072e8: nop      
004072e9: nop      
004072ea: nop      
004072eb: nop      
004072ec: nop      
004072ed: nop      
004072ee: nop      
004072ef: nop      
004072f0: push     esi
004072f1: mov      esi, ecx
004072f3: mov      ecx, dword ptr [esi + 0x28]
004072f6: call     0x422d90
004072fb: mov      eax, dword ptr [eax + 0x30]
004072fe: mov      ecx, dword ptr [esi + 0x28]
00407301: push     eax
00407302: call     0x4288c0
00407307: mov      ecx, eax
00407309: call     0x5967f0
0040730e: pop      esi
0040730f: ret      
00407310: push     -1
00407312: push     0x62021b
00407317: mov      eax, dword ptr fs:[0]
0040731d: push     eax
0040731e: mov      dword ptr fs:[0], esp
00407325: push     ecx
00407326: push     esi
00407327: mov      esi, ecx
00407329: push     ecx
0040732a: mov      ecx, dword ptr [esi + 0x28]
0040732d: mov      eax, esp
0040732f: mov      dword ptr [esp + 8], esp
00407333: push     eax
00407334: call     0x4237d0
00407339: mov      ecx, dword ptr [esi + 0x28]
0040733c: call     0x428250
00407341: push     0x3c
00407343: call     0x60a0b5
00407348: add      esp, 4
0040734b: mov      dword ptr [esp + 4], eax
0040734f: test     eax, eax
00407351: mov      dword ptr [esp + 0x10], 0
00407359: je       0x40736d
0040735b: mov      ecx, dword ptr [esp + 0x18]
0040735f: mov      edx, dword ptr [esi + 0x28]
00407362: push     ecx
00407363: push     edx
00407364: mov      ecx, eax
00407366: call     0x405c20
0040736b: jmp      0x40736f
0040736d: xor      eax, eax
0040736f: push     eax
00407370: push     2
00407372: mov      ecx, esi
00407374: mov      dword ptr [esp + 0x18], 0xffffffff
0040737c: call     0x402a10
00407381: mov      ecx, dword ptr [esp + 8]
00407385: pop      esi
00407386: mov      dword ptr fs:[0], ecx
0040738d: add      esp, 0x10
00407390: ret      4
00407393: nop      
00407394: nop      
00407395: nop      
00407396: nop      
00407397: nop      
00407398: nop      
00407399: nop      
0040739a: nop      
0040739b: nop      
0040739c: nop      
0040739d: nop      
0040739e: nop      
0040739f: nop      
004073a0: push     -1
004073a2: push     0x620238
004073a7: mov      eax, dword ptr fs:[0]
004073ad: push     eax
004073ae: mov      dword ptr fs:[0], esp
004073b5: push     ecx
004073b6: push     esi
004073b7: push     edi
004073b8: mov      edi, dword ptr [esp + 0x1c]
004073bc: mov      esi, ecx
004073be: push     edi
004073bf: mov      dword ptr [esp + 0xc], esi
004073c3: call     0x406da0
004073c8: mov      ecx, edi
004073ca: mov      dword ptr [esp + 0x14], 0
004073d2: call     0x429fd0
004073d7: mov      eax, dword ptr [eax + 0x2c]
004073da: mov      ecx, dword ptr [esp + 0xc]
004073de: mov      dword ptr [esi + 0x30], eax
004073e1: mov      dword ptr [esi + 0x34], 0
004073e8: mov      dword ptr [esi], 0x64a7f4
004073ee: mov      eax, esi
004073f0: pop      edi
004073f1: pop      esi
004073f2: mov      dword ptr fs:[0], ecx
004073f9: add      esp, 0x10
004073fc: ret      4
004073ff: nop      
00407400: push     esi
00407401: mov      esi, ecx
00407403: call     0x407420
00407408: test     byte ptr [esp + 8], 1
0040740d: je       0x407418
0040740f: push     esi
00407410: call     0x5fe5f0
00407415: add      esp, 4
00407418: mov      eax, esi
0040741a: pop      esi
0040741b: ret      4
0040741e: nop      
0040741f: nop      
00407420: push     -1
00407422: push     0x620258
00407427: mov      eax, dword ptr fs:[0]
0040742d: push     eax
0040742e: mov      dword ptr fs:[0], esp
00407435: push     ecx
00407436: push     esi
00407437: mov      esi, ecx
00407439: mov      dword ptr [esp + 4], esi
0040743d: mov      dword ptr [esi], 0x64a7f4
00407443: mov      ecx, dword ptr [esi + 0x2c]
00407446: mov      dword ptr [esp + 0x10], 0
0040744e: call     0x428b40
00407453: mov      ecx, esi
00407455: mov      dword ptr [esp + 0x10], 0xffffffff
0040745d: call     0x4029b0
00407462: mov      ecx, dword ptr [esp + 8]
00407466: pop      esi
00407467: mov      dword ptr fs:[0], ecx
0040746e: add      esp, 0x10
00407471: ret      
00407472: nop      
00407473: nop      
00407474: nop      
00407475: nop      
00407476: nop      
00407477: nop      
00407478: nop      
00407479: nop      
0040747a: nop      
0040747b: nop      
0040747c: nop      
0040747d: nop      
0040747e: nop      
0040747f: nop      
00407480: push     esi
00407481: mov      esi, ecx
00407483: push     -1
00407485: mov      ecx, dword ptr [esi + 0x2c]
00407488: call     0x4288c0
0040748d: mov      ecx, eax
0040748f: call     0x5966a0
00407494: mov      ecx, dword ptr [esi + 0x2c]
00407497: call     0x428b10
0040749c: mov      ecx, esi
0040749e: call     0x4076b0
004074a3: pop      esi
004074a4: ret      4
004074a7: nop      
004074a8: nop      
004074a9: nop      
004074aa: nop      
004074ab: nop      
004074ac: nop      
004074ad: nop      
004074ae: nop      
004074af: nop      
004074b0: mov      eax, dword ptr fs:[0]
004074b6: push     -1
004074b8: push     0x620278
004074bd: push     eax
004074be: mov      dword ptr fs:[0], esp
004074c5: sub      esp, 0x10
004074c8: push     ebx
004074c9: push     esi
004074ca: mov      esi, ecx
004074cc: call     0x402cf0
004074d1: xor      ebx, ebx
004074d3: sub      eax, ebx
004074d5: je       0x407662
004074db: dec      eax
004074dc: je       0x4075fd
004074e2: dec      eax
004074e3: je       0x4075b5
004074e9: mov      al, byte ptr [esp + 0x2c]
004074ed: push     ebp
004074ee: push     edi
004074ef: mov      byte ptr [esp + 0x10], al
004074f3: mov      edi, 0x68d350
004074f8: or       ecx, 0xffffffff
004074fb: xor      eax, eax
004074fd: push     1
004074ff: repne scasb al, byte ptr es:[edi]
00407501: not      ecx
00407503: dec      ecx
00407504: mov      dword ptr [esp + 0x18], ebx
00407508: mov      ebp, ecx
0040750a: lea      ecx, [esp + 0x14]
0040750e: push     ebp
0040750f: mov      dword ptr [esp + 0x20], ebx
00407513: mov      dword ptr [esp + 0x24], ebx
00407517: call     0x401940
0040751c: test     al, al
0040751e: je       0x407544
00407520: mov      edi, dword ptr [esp + 0x14]
00407524: mov      ecx, ebp
00407526: mov      edx, ecx
00407528: mov      esi, 0x68d350
0040752d: shr      ecx, 2
00407530: rep movsd dword ptr es:[edi], dword ptr [esi]
00407532: mov      ecx, edx
00407534: and      ecx, 3
00407537: rep movsb byte ptr es:[edi], byte ptr [esi]
00407539: mov      eax, dword ptr [esp + 0x14]
0040753d: mov      dword ptr [esp + 0x18], ebp
00407541: mov      byte ptr [eax + ebp], bl
00407544: lea      ecx, [esp + 0x10]
00407548: mov      dword ptr [esp + 0x28], ebx
0040754c: push     ecx
0040754d: push     0x104
00407552: push     0x68dd98
00407557: push     0x68d2d0
0040755c: call     0x5a07f0
00407561: call     eax
00407563: mov      eax, dword ptr [esp + 0x24]
00407567: add      esp, 0x10
0040756a: cmp      eax, ebx
0040756c: pop      edi
0040756d: pop      ebp
0040756e: je       0x407699
00407574: lea      ecx, [eax - 1]
00407577: mov      al, byte ptr [eax - 1]
0040757a: cmp      al, bl
0040757c: je       0x407599
0040757e: cmp      al, 0xff
00407580: je       0x407599
00407582: dec      al
00407584: pop      esi
00407585: mov      byte ptr [ecx], al
00407587: pop      ebx
00407588: mov      ecx, dword ptr [esp + 0x10]
0040758c: mov      dword ptr fs:[0], ecx
00407593: add      esp, 0x1c
00407596: ret      8
00407599: push     ecx
0040759a: call     0x5fe5f0
0040759f: add      esp, 4
004075a2: pop      esi
004075a3: pop      ebx
004075a4: mov      ecx, dword ptr [esp + 0x10]
004075a8: mov      dword ptr fs:[0], ecx
004075af: add      esp, 0x1c
004075b2: ret      8
004075b5: mov      edx, dword ptr [esp + 0x2c]
004075b9: mov      eax, dword ptr [esp + 0x28]
004075bd: push     edx
004075be: push     eax
004075bf: mov      ecx, esi
004075c1: call     0x402a80
004075c6: mov      ecx, eax
004075c8: call     0x402d20
004075cd: mov      ecx, esi
004075cf: call     0x402a80
004075d4: mov      ecx, eax
004075d6: call     0x402d10
004075db: test     al, al
004075dd: je       0x407699
004075e3: mov      ecx, esi
004075e5: call     0x4076b0
004075ea: pop      esi
004075eb: pop      ebx
004075ec: mov      ecx, dword ptr [esp + 0x10]
004075f0: mov      dword ptr fs:[0], ecx
004075f7: add      esp, 0x1c
004075fa: ret      8
004075fd: mov      ecx, dword ptr [esi + 0x2c]
00407600: call     0x423700
00407605: mov      ecx, eax
00407607: call     0x4a0d00
0040760c: test     al, al
0040760e: je       0x407699
00407614: mov      eax, dword ptr [esi + 0x34]
00407617: mov      ecx, dword ptr [esi + 0x30]
0040761a: cmp      eax, ecx
0040761c: jge      0x407648
0040761e: mov      ecx, dword ptr [esi + 0x2c]
00407621: inc      eax
00407622: mov      dword ptr [esi + 0x34], eax
00407625: call     0x429fd0
0040762a: mov      ecx, dword ptr [eax + 0x30]
0040762d: push     ecx
0040762e: mov      ecx, esi
00407630: call     0x407800
00407635: pop      esi
00407636: pop      ebx
00407637: mov      ecx, dword ptr [esp + 0x10]
0040763b: mov      dword ptr fs:[0], ecx
00407642: add      esp, 0x1c
00407645: ret      8
00407648: mov      ecx, esi
0040764a: call     0x402d00
0040764f: pop      esi
00407650: pop      ebx
00407651: mov      ecx, dword ptr [esp + 0x10]
00407655: mov      dword ptr fs:[0], ecx
0040765c: add      esp, 0x1c
0040765f: ret      8
00407662: mov      ecx, dword ptr [esi + 0x2c]
00407665: call     0x423700
0040766a: mov      ecx, eax
0040766c: call     0x4a1060
00407671: mov      ecx, dword ptr [esi + 0x2c]
00407674: fstp     dword ptr [esp + 0x2c]
00407678: call     0x429fd0
0040767d: fld      dword ptr [esp + 0x2c]
00407681: fcomp    dword ptr [eax + 0x24]
00407684: fnstsw   ax
00407686: test     ah, 1
00407689: jne      0x407699
0040768b: mov      ecx, esi
0040768d: call     0x4076f0
00407692: mov      ecx, esi
00407694: call     0x40a6e0
00407699: mov      ecx, dword ptr [esp + 0x18]
0040769d: pop      esi
0040769e: pop      ebx
0040769f: mov      dword ptr fs:[0], ecx
004076a6: add      esp, 0x1c
004076a9: ret      8
004076ac: nop      
004076ad: nop      
004076ae: nop      
004076af: nop      
004076b0: push     ecx
004076b1: push     esi
004076b2: mov      esi, ecx
004076b4: push     ecx
004076b5: mov      ecx, dword ptr [esi + 0x2c]
004076b8: mov      eax, esp
004076ba: mov      dword ptr [esp + 8], esp
004076be: push     eax
004076bf: call     0x4237d0
004076c4: mov      ecx, dword ptr [esi + 0x2c]
004076c7: call     0x428250
004076cc: mov      ecx, dword ptr [esi + 0x2c]
004076cf: push     0x7f7fffff
004076d4: push     0
004076d6: push     6
004076d8: mov      edx, dword ptr [ecx]
004076da: call     dword ptr [edx + 0x8c]
004076e0: push     0
004076e2: push     0
004076e4: mov      ecx, esi
004076e6: call     0x402a10
004076eb: pop      esi
004076ec: pop      ecx
004076ed: ret      
004076ee: nop      
004076ef: nop      
004076f0: push     -1
004076f2: push     0x620298
004076f7: mov      eax, dword ptr fs:[0]
004076fd: push     eax
004076fe: mov      dword ptr fs:[0], esp
00407705: sub      esp, 0x18
00407708: push     esi
00407709: mov      esi, ecx
0040770b: mov      dword ptr [esp + 8], esi
0040770f: mov      eax, dword ptr [esi + 0x34]
00407712: mov      ecx, dword ptr [esi + 0x30]
00407715: cmp      eax, ecx
00407717: jle      0x4077dd
0040771d: mov      cl, byte ptr [esp + 7]
00407721: push     ebx
00407722: push     ebp
00407723: push     edi
00407724: mov      byte ptr [esp + 0x18], cl
00407728: mov      edi, 0x6b3f70
0040772d: or       ecx, 0xffffffff
00407730: xor      eax, eax
00407732: xor      ebx, ebx
00407734: push     1
00407736: repne scasb al, byte ptr es:[edi]
00407738: not      ecx
0040773a: dec      ecx
0040773b: mov      dword ptr [esp + 0x20], ebx
0040773f: mov      ebp, ecx
00407741: lea      ecx, [esp + 0x1c]
00407745: push     ebp
00407746: mov      dword ptr [esp + 0x28], ebx
0040774a: mov      dword ptr [esp + 0x2c], ebx
0040774e: call     0x401940
00407753: test     al, al
00407755: je       0x40777f
00407757: mov      edi, dword ptr [esp + 0x1c]
0040775b: mov      ecx, ebp
0040775d: mov      edx, ecx
0040775f: mov      esi, 0x6b3f70
00407764: shr      ecx, 2
00407767: rep movsd dword ptr es:[edi], dword ptr [esi]
00407769: mov      ecx, edx
0040776b: and      ecx, 3
0040776e: rep movsb byte ptr es:[edi], byte ptr [esi]
00407770: mov      eax, dword ptr [esp + 0x1c]
00407774: mov      esi, dword ptr [esp + 0x14]
00407778: mov      dword ptr [esp + 0x20], ebp
0040777c: mov      byte ptr [eax + ebp], bl
0040777f: lea      ecx, [esp + 0x18]
00407783: mov      dword ptr [esp + 0x30], ebx
00407787: push     ecx
00407788: push     0x11e
0040778d: push     0x68dd98
00407792: push     0x68d36c
00407797: call     0x5a07f0
0040779c: call     eax
0040779e: mov      eax, dword ptr [esp + 0x2c]
004077a2: add      esp, 0x10
004077a5: cmp      eax, ebx
004077a7: mov      dword ptr [esp + 0x30], 0xffffffff
004077af: je       0x4077ce
004077b1: lea      ecx, [eax - 1]
004077b4: mov      al, byte ptr [eax - 1]
004077b7: cmp      al, bl
004077b9: je       0x4077c5
004077bb: cmp      al, 0xff
004077bd: je       0x4077c5
004077bf: dec      al
004077c1: mov      byte ptr [ecx], al
004077c3: jmp      0x4077ce
004077c5: push     ecx
004077c6: call     0x5fe5f0
004077cb: add      esp, 4
004077ce: pop      edi
004077cf: mov      dword ptr [esp + 0x18], ebx
004077d3: mov      dword ptr [esp + 0x1c], ebx
004077d7: mov      dword ptr [esp + 0x20], ebx
004077db: pop      ebp
004077dc: pop      ebx
004077dd: mov      ecx, dword ptr [esi + 0x2c]
004077e0: mov      edx, dword ptr [ecx]
004077e2: call     dword ptr [edx + 0x90]
004077e8: mov      ecx, dword ptr [esi + 0x2c]
004077eb: call     0x42a220
004077f0: mov      ecx, dword ptr [esp + 0x1c]
004077f4: pop      esi
004077f5: mov      dword ptr fs:[0], ecx
004077fc: add      esp, 0x24
004077ff: ret      
00407800: push     -1
00407802: push     0x6202bb
00407807: mov      eax, dword ptr fs:[0]
0040780d: push     eax
0040780e: mov      dword ptr fs:[0], esp
00407815: push     ecx
00407816: push     esi
00407817: mov      esi, ecx
00407819: push     0x3c
0040781b: call     0x60a0b5
00407820: add      esp, 4
00407823: mov      dword ptr [esp + 4], eax
00407827: test     eax, eax
00407829: mov      dword ptr [esp + 0x10], 0
00407831: je       0x407845
00407833: mov      ecx, dword ptr [esp + 0x18]
00407837: mov      edx, dword ptr [esi + 0x2c]
0040783a: push     ecx
0040783b: push     edx
0040783c: mov      ecx, eax
0040783e: call     0x405c20
00407843: jmp      0x407847
00407845: xor      eax, eax
00407847: push     eax
00407848: push     2
0040784a: mov      ecx, esi
0040784c: mov      dword ptr [esp + 0x18], 0xffffffff
00407854: call     0x402a10
00407859: mov      ecx, dword ptr [esp + 8]
0040785d: pop      esi
0040785e: mov      dword ptr fs:[0], ecx
00407865: add      esp, 0x10
00407868: ret      4
0040786b: nop      
0040786c: nop      
0040786d: nop      
0040786e: nop      
0040786f: nop      
00407870: mov      cl, byte ptr [0x7103a0]
00407876: mov      al, 1
00407878: test     al, cl
0040787a: jne      0x407884
0040787c: or       cl, al
0040787e: mov      byte ptr [0x7103a0], cl
00407884: jmp      0x407890
00407889: nop      
0040788a: nop      
0040788b: nop      
0040788c: nop      
0040788d: nop      
0040788e: nop      
0040788f: nop      
00407890: push     0x401ba0
00407895: call     0x60a57b
0040789a: pop      ecx
0040789b: ret      
0040789c: nop      
0040789d: nop      
0040789e: nop      
0040789f: nop      
004078a0: push     esi
004078a1: push     edi
004078a2: mov      edi, dword ptr [esp + 0xc]
004078a6: mov      esi, ecx
004078a8: push     edi
004078a9: call     0x406da0
004078ae: mov      dword ptr [esi + 0x30], edi
004078b1: mov      dword ptr [esi], 0x64a804
004078b7: mov      eax, esi
004078b9: pop      edi
004078ba: pop      esi
004078bb: ret      4
004078be: nop      
004078bf: nop      
004078c0: push     -1
004078c2: push     0x6202d8
004078c7: mov      eax, dword ptr fs:[0]
004078cd: push     eax
004078ce: mov      dword ptr fs:[0], esp
004078d5: push     ecx
004078d6: push     esi
004078d7: push     edi
004078d8: mov      edi, dword ptr [esp + 0x1c]
004078dc: mov      esi, ecx
004078de: push     edi
004078df: mov      dword ptr [esp + 0xc], esi
004078e3: call     0x406dc0
004078e8: push     -1
004078ea: mov      ecx, edi
004078ec: mov      dword ptr [esp + 0x18], 0
004078f4: mov      dword ptr [esi + 0x34], edi
004078f7: mov      dword ptr [esi], 0x64a814
004078fd: call     0x4288c0
00407902: mov      ecx, eax
00407904: call     0x5966a0
00407909: mov      ecx, dword ptr [esi + 0x34]
0040790c: call     0x428b10
00407911: mov      ecx, dword ptr [esp + 0xc]
00407915: mov      eax, esi
00407917: pop      edi
00407918: pop      esi
00407919: mov      dword ptr fs:[0], ecx
00407920: add      esp, 0x10
00407923: ret      4
00407926: nop      
00407927: nop      
00407928: nop      
00407929: nop      
0040792a: nop      
0040792b: nop      
0040792c: nop      
0040792d: nop      
0040792e: nop      
0040792f: nop      
00407930: push     esi
00407931: mov      esi, ecx
00407933: push     -1
00407935: mov      ecx, dword ptr [esi + 0x34]
00407938: call     0x4288c0
0040793d: mov      ecx, eax
0040793f: call     0x5966a0
00407944: mov      eax, dword ptr [esi]
00407946: mov      ecx, esi
00407948: call     dword ptr [eax + 0x24]
0040794b: pop      esi
0040794c: ret      
0040794d: nop      
0040794e: nop      
0040794f: nop      
00407950: push     -1
00407952: push     0x6202fb
00407957: mov      eax, dword ptr fs:[0]
0040795d: push     eax
0040795e: mov      dword ptr fs:[0], esp
00407965: push     ecx
00407966: push     esi
00407967: mov      esi, ecx
00407969: push     0x2c
0040796b: call     0x60a0b5
00407970: add      esp, 4
00407973: mov      dword ptr [esp + 4], eax
00407977: test     eax, eax
00407979: mov      dword ptr [esp + 0x10], 0
00407981: je       0x407990
00407983: mov      ecx, dword ptr [esi + 0x34]
00407986: push     ecx
00407987: mov      ecx, eax
00407989: call     0x407ba0
0040798e: jmp      0x407992
00407990: xor      eax, eax
00407992: push     eax
00407993: push     2
00407995: mov      ecx, esi
00407997: mov      dword ptr [esp + 0x18], 0xffffffff
0040799f: call     0x402a10
004079a4: mov      ecx, dword ptr [esp + 8]
004079a8: pop      esi
004079a9: mov      dword ptr fs:[0], ecx
004079b0: add      esp, 0x10
004079b3: ret      
004079b4: nop      
004079b5: nop      
004079b6: nop      
004079b7: nop      
004079b8: nop      
004079b9: nop      
004079ba: nop      
004079bb: nop      
004079bc: nop      
004079bd: nop      
004079be: nop      
004079bf: nop      
004079c0: push     -1
004079c2: push     0x62031b
004079c7: mov      eax, dword ptr fs:[0]
004079cd: push     eax
004079ce: mov      dword ptr fs:[0], esp
004079d5: push     ecx
004079d6: push     esi
004079d7: mov      esi, ecx
004079d9: push     0x34
004079db: call     0x60a0b5
004079e0: add      esp, 4
004079e3: mov      dword ptr [esp + 4], eax
004079e7: test     eax, eax
004079e9: mov      dword ptr [esp + 0x10], 0
004079f1: je       0x407a00
004079f3: mov      ecx, dword ptr [esi + 0x34]
004079f6: push     ecx
004079f7: mov      ecx, eax
004079f9: call     0x407ab0
004079fe: jmp      0x407a02
00407a00: xor      eax, eax
00407a02: push     eax
00407a03: push     1
00407a05: mov      ecx, esi
00407a07: mov      dword ptr [esp + 0x18], 0xffffffff
00407a0f: call     0x402a10
00407a14: mov      ecx, dword ptr [esp + 8]
00407a18: pop      esi
00407a19: mov      dword ptr fs:[0], ecx
00407a20: add      esp, 0x10
00407a23: ret      
00407a24: nop      
00407a25: nop      
00407a26: nop      
00407a27: nop      
00407a28: nop      
00407a29: nop      
00407a2a: nop      
00407a2b: nop      
00407a2c: nop      
00407a2d: nop      
00407a2e: nop      
00407a2f: nop      
00407a30: push     -1
00407a32: push     0x62033b
00407a37: mov      eax, dword ptr fs:[0]
00407a3d: push     eax
00407a3e: mov      dword ptr fs:[0], esp
00407a45: push     ecx
00407a46: push     esi
00407a47: mov      esi, ecx
00407a49: call     0x402cf0
00407a4e: cmp      eax, 5
00407a51: jne      0x407a5f
00407a53: mov      ecx, esi
00407a55: call     0x402cf0
00407a5a: cmp      eax, 4
00407a5d: je       0x407a9a
00407a5f: push     0x30
00407a61: call     0x60a0b5
00407a66: add      esp, 4
00407a69: mov      dword ptr [esp + 4], eax
00407a6d: test     eax, eax
00407a6f: mov      dword ptr [esp + 0x10], 0
00407a77: je       0x407a86
00407a79: mov      ecx, dword ptr [esi + 0x34]
00407a7c: push     ecx
00407a7d: mov      ecx, eax
00407a7f: call     0x408830
00407a84: jmp      0x407a88
00407a86: xor      eax, eax
00407a88: push     eax
00407a89: push     4
00407a8b: mov      ecx, esi
00407a8d: mov      dword ptr [esp + 0x18], 0xffffffff
00407a95: call     0x402a10
00407a9a: mov      ecx, dword ptr [esp + 8]
00407a9e: pop      esi
00407a9f: mov      dword ptr fs:[0], ecx
00407aa6: add      esp, 0x10
00407aa9: ret      
00407aaa: nop      
00407aab: nop      
00407aac: nop      
00407aad: nop      
00407aae: nop      
00407aaf: nop      
00407ab0: mov      eax, dword ptr [esp + 4]
00407ab4: push     esi
00407ab5: mov      esi, ecx
00407ab7: push     eax
00407ab8: call     0x4078a0
00407abd: mov      dword ptr [esi], 0x64a848
00407ac3: mov      eax, esi
00407ac5: pop      esi
00407ac6: ret      4
00407ac9: nop      
00407aca: nop      
00407acb: nop      
00407acc: nop      
00407acd: nop      
00407ace: nop      
00407acf: nop      
00407ad0: push     esi
00407ad1: mov      esi, ecx
00407ad3: call     0x407af0
00407ad8: test     byte ptr [esp + 8], 1
00407add: je       0x407ae8
00407adf: push     esi
00407ae0: call     0x5fe5f0
00407ae5: add      esp, 4
00407ae8: mov      eax, esi
00407aea: pop      esi
00407aeb: ret      4
00407aee: nop      
00407aef: nop      
00407af0: push     -1
00407af2: push     0x620358
00407af7: mov      eax, dword ptr fs:[0]
00407afd: push     eax
00407afe: mov      dword ptr fs:[0], esp
00407b05: push     ecx
00407b06: push     esi
00407b07: mov      esi, ecx
00407b09: mov      dword ptr [esp + 4], esi
00407b0d: mov      dword ptr [esi], 0x64a848
00407b13: mov      ecx, dword ptr [esi + 0x30]
00407b16: mov      dword ptr [esp + 0x10], 0
00407b1e: mov      eax, dword ptr [ecx]
00407b20: call     dword ptr [eax + 0xa8]
00407b26: test     al, al
00407b28: je       0x407b50
00407b2a: mov      ecx, dword ptr [esi + 0x30]
00407b2d: mov      edx, dword ptr [ecx]
00407b2f: call     dword ptr [edx + 0x9c]
00407b35: mov      ecx, dword ptr [eax + 0x18]
00407b38: test     ecx, ecx
00407b3a: je       0x407b50
00407b3c: mov      ecx, dword ptr [esi + 0x30]
00407b3f: push     0x7f7fffff
00407b44: push     0
00407b46: push     0
00407b48: mov      eax, dword ptr [ecx]
00407b4a: call     dword ptr [eax + 0x8c]
00407b50: mov      ecx, esi
00407b52: mov      dword ptr [esp + 0x10], 0xffffffff
00407b5a: call     0x4029b0
00407b5f: mov      ecx, dword ptr [esp + 8]
00407b63: pop      esi
00407b64: mov      dword ptr fs:[0], ecx
00407b6b: add      esp, 0x10
00407b6e: ret      
00407b6f: nop      
00407b70: push     esi
00407b71: mov      esi, ecx
00407b73: mov      ecx, dword ptr [esi + 0x30]
00407b76: call     0x423700
00407b7b: mov      ecx, eax
00407b7d: call     0x4a0640
00407b82: test     al, al
00407b84: je       0x407b9a
00407b86: mov      ecx, dword ptr [esi + 0x30]
00407b89: push     0xbf800000
00407b8e: push     0
00407b90: push     0
00407b92: mov      eax, dword ptr [ecx]
00407b94: call     dword ptr [eax + 0x8c]
00407b9a: pop      esi
00407b9b: ret      4
00407b9e: nop      
00407b9f: nop      
00407ba0: push     esi
00407ba1: push     edi
00407ba2: mov      edi, dword ptr [esp + 0xc]
00407ba6: mov      esi, ecx
00407ba8: push     edi
00407ba9: call     0x403610
00407bae: mov      dword ptr [esi + 0x28], edi
00407bb1: mov      dword ptr [esi], 0x64a858
00407bb7: mov      eax, esi
00407bb9: pop      edi
00407bba: pop      esi
00407bbb: ret      4
00407bbe: nop      
00407bbf: nop      
00407bc0: push     esi
00407bc1: mov      esi, ecx
00407bc3: mov      ecx, dword ptr [esi + 0x28]
00407bc6: call     0x423700
00407bcb: mov      ecx, eax
00407bcd: call     0x4a0bc0
00407bd2: test     al, al
00407bd4: jne      0x407bf4
00407bd6: mov      ecx, dword ptr [esi + 0x28]
00407bd9: call     0x423700
00407bde: mov      ecx, eax
00407be0: call     0x4a0d00
00407be5: test     al, al
00407be7: jne      0x407bf4
00407be9: mov      ecx, esi
00407beb: call     0x407db0
00407bf0: pop      esi
00407bf1: ret      4
00407bf4: mov      ecx, esi
00407bf6: call     0x407dc0
00407bfb: pop      esi
00407bfc: ret      4
00407bff: nop      
00407c00: mov      eax, dword ptr fs:[0]
00407c06: push     -1
00407c08: push     0x620378
00407c0d: push     eax
00407c0e: mov      dword ptr fs:[0], esp
00407c15: sub      esp, 0x10
00407c18: push     ebx
00407c19: push     esi
00407c1a: mov      esi, ecx
00407c1c: call     0x402cf0
00407c21: xor      ebx, ebx
00407c23: sub      eax, ebx
00407c25: je       0x407d76
00407c2b: dec      eax
00407c2c: je       0x407d32
00407c32: dec      eax
00407c33: je       0x407d05
00407c39: mov      al, byte ptr [esp + 0x2c]
00407c3d: push     ebp
00407c3e: push     edi
00407c3f: mov      byte ptr [esp + 0x10], al
00407c43: mov      edi, 0x68deb8
00407c48: or       ecx, 0xffffffff
00407c4b: xor      eax, eax
00407c4d: push     1
00407c4f: repne scasb al, byte ptr es:[edi]
00407c51: not      ecx
00407c53: dec      ecx
00407c54: mov      dword ptr [esp + 0x18], ebx
00407c58: mov      ebp, ecx
00407c5a: lea      ecx, [esp + 0x14]
00407c5e: push     ebp
00407c5f: mov      dword ptr [esp + 0x20], ebx
00407c63: mov      dword ptr [esp + 0x24], ebx
00407c67: call     0x401940
00407c6c: test     al, al
00407c6e: je       0x407c94
00407c70: mov      edi, dword ptr [esp + 0x14]
00407c74: mov      ecx, ebp
00407c76: mov      edx, ecx
00407c78: mov      esi, 0x68deb8
00407c7d: shr      ecx, 2
00407c80: rep movsd dword ptr es:[edi], dword ptr [esi]
00407c82: mov      ecx, edx
00407c84: and      ecx, 3
00407c87: rep movsb byte ptr es:[edi], byte ptr [esi]
00407c89: mov      eax, dword ptr [esp + 0x14]
00407c8d: mov      dword ptr [esp + 0x18], ebp
00407c91: mov      byte ptr [eax + ebp], bl
00407c94: lea      ecx, [esp + 0x10]
00407c98: mov      dword ptr [esp + 0x28], ebx
00407c9c: push     ecx
00407c9d: push     0xa4
00407ca2: push     0x68de88
00407ca7: push     0x68d2d0
00407cac: call     0x5a07f0
00407cb1: call     eax
00407cb3: mov      eax, dword ptr [esp + 0x24]
00407cb7: add      esp, 0x10
00407cba: cmp      eax, ebx
00407cbc: pop      edi
00407cbd: pop      ebp
00407cbe: je       0x407d90
00407cc4: lea      ecx, [eax - 1]
00407cc7: mov      al, byte ptr [eax - 1]
00407cca: cmp      al, bl
00407ccc: je       0x407ce9
00407cce: cmp      al, 0xff
00407cd0: je       0x407ce9
00407cd2: dec      al
00407cd4: pop      esi
00407cd5: mov      byte ptr [ecx], al
00407cd7: pop      ebx
00407cd8: mov      ecx, dword ptr [esp + 0x10]
00407cdc: mov      dword ptr fs:[0], ecx
00407ce3: add      esp, 0x1c
00407ce6: ret      8
00407ce9: push     ecx
00407cea: call     0x5fe5f0
00407cef: add      esp, 4
00407cf2: pop      esi
00407cf3: pop      ebx
00407cf4: mov      ecx, dword ptr [esp + 0x10]
00407cf8: mov      dword ptr fs:[0], ecx
00407cff: add      esp, 0x1c
00407d02: ret      8
00407d05: mov      ecx, dword ptr [esi + 0x28]
00407d08: call     0x423700
00407d0d: mov      ecx, eax
00407d0f: call     0x4a0d00
00407d14: test     al, al
00407d16: je       0x407d90
00407d18: mov      ecx, esi
00407d1a: call     0x402d00
00407d1f: pop      esi
00407d20: pop      ebx
00407d21: mov      ecx, dword ptr [esp + 0x10]
00407d25: mov      dword ptr fs:[0], ecx
00407d2c: add      esp, 0x1c
00407d2f: ret      8
00407d32: mov      edx, dword ptr [esp + 0x2c]
00407d36: mov      eax, dword ptr [esp + 0x28]
00407d3a: push     edx
00407d3b: push     eax
00407d3c: mov      ecx, esi
00407d3e: call     0x402a80
00407d43: mov      ecx, eax
00407d45: call     0x402d20
00407d4a: mov      ecx, esi
00407d4c: call     0x402a80
00407d51: mov      ecx, eax
00407d53: call     0x402d10
00407d58: test     al, al
00407d5a: je       0x407d90
00407d5c: mov      ecx, esi
00407d5e: call     0x407e30
00407d63: pop      esi
00407d64: pop      ebx
00407d65: mov      ecx, dword ptr [esp + 0x10]
00407d69: mov      dword ptr fs:[0], ecx
00407d70: add      esp, 0x1c
00407d73: ret      8
00407d76: mov      ecx, dword ptr [esi + 0x28]
00407d79: call     0x423700
00407d7e: mov      ecx, eax
00407d80: call     0x4a0d00
00407d85: test     al, al
00407d87: je       0x407d90
00407d89: mov      ecx, esi
00407d8b: call     0x407dc0
00407d90: mov      ecx, dword ptr [esp + 0x18]
00407d94: pop      esi
00407d95: pop      ebx
00407d96: mov      dword ptr fs:[0], ecx
00407d9d: add      esp, 0x1c
00407da0: ret      8
00407da3: nop      
00407da4: nop      
00407da5: nop      
00407da6: nop      
00407da7: nop      
00407da8: nop      
00407da9: nop      
00407daa: nop      
00407dab: nop      
00407dac: nop      
00407dad: nop      
00407dae: nop      
00407daf: nop      
00407db0: push     0
00407db2: push     0
00407db4: call     0x402a10
00407db9: ret      
00407dba: nop      
00407dbb: nop      
00407dbc: nop      
00407dbd: nop      
00407dbe: nop      
00407dbf: nop      
00407dc0: push     -1
00407dc2: push     0x62039b
00407dc7: mov      eax, dword ptr fs:[0]
00407dcd: push     eax
00407dce: mov      dword ptr fs:[0], esp
00407dd5: push     ecx
00407dd6: push     esi
00407dd7: mov      esi, ecx
00407dd9: push     0x2c
00407ddb: call     0x60a0b5
00407de0: add      esp, 4
00407de3: mov      dword ptr [esp + 4], eax
00407de7: test     eax, eax
00407de9: mov      dword ptr [esp + 0x10], 0
00407df1: je       0x407e00
00407df3: mov      ecx, dword ptr [esi + 0x28]
00407df6: push     ecx
00407df7: mov      ecx, eax
00407df9: call     0x407e40
00407dfe: jmp      0x407e02
00407e00: xor      eax, eax
00407e02: push     eax
00407e03: push     1
00407e05: mov      ecx, esi
00407e07: mov      dword ptr [esp + 0x18], 0xffffffff
00407e0f: call     0x402a10
00407e14: mov      ecx, dword ptr [esp + 8]
00407e18: pop      esi
00407e19: mov      dword ptr fs:[0], ecx
00407e20: add      esp, 0x10
00407e23: ret      
00407e24: nop      
00407e25: nop      
00407e26: nop      
00407e27: nop      
00407e28: nop      
00407e29: nop      
00407e2a: nop      
00407e2b: nop      
00407e2c: nop      
00407e2d: nop      
00407e2e: nop      
00407e2f: nop      
00407e30: jmp      0x402d00
00407e35: nop      
00407e36: nop      
00407e37: nop      
00407e38: nop      
00407e39: nop      
00407e3a: nop      
00407e3b: nop      
00407e3c: nop      
00407e3d: nop      
00407e3e: nop      
00407e3f: nop      
00407e40: push     -1
00407e42: push     0x6203b8
00407e47: mov      eax, dword ptr fs:[0]
00407e4d: push     eax
00407e4e: mov      dword ptr fs:[0], esp
00407e55: push     ecx
00407e56: push     esi
00407e57: push     edi
00407e58: mov      edi, dword ptr [esp + 0x1c]
00407e5c: mov      esi, ecx
00407e5e: push     edi
00407e5f: mov      dword ptr [esp + 0xc], esi
00407e63: call     0x402960
00407e68: mov      ecx, edi
00407e6a: mov      dword ptr [esp + 0x14], 0
00407e72: mov      dword ptr [esi + 0x28], edi
00407e75: mov      dword ptr [esi], 0x64a868
00407e7b: call     0x4288c0
00407e80: mov      ecx, eax
00407e82: call     0x596e40
00407e87: mov      eax, dword ptr [eax]
00407e89: push     ecx
00407e8a: mov      ecx, esp
00407e8c: mov      dword ptr [esp + 0x20], esp
00407e90: test     eax, eax
00407e92: mov      dword ptr [ecx], eax
00407e94: je       0x407e99
00407e96: inc      dword ptr [eax + 0x14]
00407e99: mov      ecx, dword ptr [esi + 0x28]
00407e9c: call     0x428250
00407ea1: mov      ecx, dword ptr [esp + 0xc]
00407ea5: mov      eax, esi
00407ea7: pop      edi
00407ea8: mov      dword ptr fs:[0], ecx
00407eaf: pop      esi
00407eb0: add      esp, 0x10
00407eb3: ret      4
00407eb6: nop      
00407eb7: nop      
00407eb8: nop      
00407eb9: nop      
00407eba: nop      
00407ebb: nop      
00407ebc: nop      
00407ebd: nop      
00407ebe: nop      
00407ebf: nop      
00407ec0: push     esi
00407ec1: mov      esi, ecx
00407ec3: call     0x407ee0
00407ec8: test     byte ptr [esp + 8], 1
00407ecd: je       0x407ed8
00407ecf: push     esi
00407ed0: call     0x5fe5f0
00407ed5: add      esp, 4
00407ed8: mov      eax, esi
00407eda: pop      esi
00407edb: ret      4
00407ede: nop      
00407edf: nop      
00407ee0: push     -1
00407ee2: push     0x6203d8
00407ee7: mov      eax, dword ptr fs:[0]
00407eed: push     eax
00407eee: mov      dword ptr fs:[0], esp
00407ef5: sub      esp, 8
00407ef8: push     esi
00407ef9: mov      esi, ecx
00407efb: mov      dword ptr [esp + 4], esi
00407eff: mov      dword ptr [esi], 0x64a868
00407f05: push     ecx
00407f06: mov      dword ptr [esp + 0x18], 0
00407f0e: mov      eax, esp
00407f10: mov      dword ptr [esp + 0xc], esp
00407f14: mov      dword ptr [eax], 0
00407f1a: mov      ecx, dword ptr [esi + 0x28]
00407f1d: call     0x428250
00407f22: mov      ecx, esi
00407f24: mov      dword ptr [esp + 0x14], 0xffffffff
00407f2c: call     0x4029b0
00407f31: mov      ecx, dword ptr [esp + 0xc]
00407f35: pop      esi
00407f36: mov      dword ptr fs:[0], ecx
00407f3d: add      esp, 0x14
00407f40: ret      
00407f41: nop      
00407f42: nop      
00407f43: nop      
00407f44: nop      
00407f45: nop      
00407f46: nop      
00407f47: nop      
00407f48: nop      
00407f49: nop      
00407f4a: nop      
00407f4b: nop      
00407f4c: nop      
00407f4d: nop      
00407f4e: nop      
00407f4f: nop      
00407f50: call     0x408170
00407f55: ret      4
00407f58: nop      
00407f59: nop      
00407f5a: nop      
00407f5b: nop      
00407f5c: nop      
00407f5d: nop      
00407f5e: nop      
00407f5f: nop      
00407f60: mov      eax, dword ptr fs:[0]
00407f66: push     -1
00407f68: push     0x6203f8
00407f6d: push     eax
00407f6e: mov      dword ptr fs:[0], esp
00407f75: mov      eax, dword ptr [esp + 0x10]
00407f79: sub      esp, 0x10
00407f7c: push     ebx
00407f7d: push     esi
00407f7e: push     edi
00407f7f: mov      edi, dword ptr [esp + 0x30]
00407f83: push     edi
00407f84: mov      ebx, ecx
00407f86: push     eax
00407f87: call     0x402a80
00407f8c: mov      ecx, eax
00407f8e: call     0x402d20
00407f93: mov      ecx, ebx
00407f95: call     0x402cf0
00407f9a: xor      esi, esi
00407f9c: sub      eax, esi
00407f9e: je       0x40806f
00407fa4: dec      eax
00407fa5: je       0x40806f
00407fab: dec      eax
00407fac: je       0x40806f
00407fb2: mov      cl, byte ptr [esp + 0x30]
00407fb6: mov      edi, 0x68df10
00407fbb: mov      byte ptr [esp + 0xc], cl
00407fbf: or       ecx, 0xffffffff
00407fc2: xor      eax, eax
00407fc4: push     ebp
00407fc5: repne scasb al, byte ptr es:[edi]
00407fc7: not      ecx
00407fc9: dec      ecx
00407fca: push     1
00407fcc: mov      ebp, ecx
00407fce: lea      ecx, [esp + 0x14]
00407fd2: push     ebp
00407fd3: mov      dword ptr [esp + 0x1c], esi
00407fd7: mov      dword ptr [esp + 0x20], esi
00407fdb: mov      dword ptr [esp + 0x24], esi
00407fdf: call     0x401940
00407fe4: test     al, al
00407fe6: je       0x40800f
00407fe8: mov      edi, dword ptr [esp + 0x14]
00407fec: mov      ecx, ebp
00407fee: mov      edx, ecx
00407ff0: mov      esi, 0x68df10
00407ff5: shr      ecx, 2
00407ff8: rep movsd dword ptr es:[edi], dword ptr [esi]
00407ffa: mov      ecx, edx
00407ffc: and      ecx, 3
00407fff: rep movsb byte ptr es:[edi], byte ptr [esi]
00408001: mov      eax, dword ptr [esp + 0x14]
00408005: mov      dword ptr [esp + 0x18], ebp
00408009: xor      esi, esi
0040800b: mov      byte ptr [eax + ebp], 0
0040800f: lea      ecx, [esp + 0x10]
00408013: mov      dword ptr [esp + 0x28], esi
00408017: push     ecx
00408018: push     0xec
0040801d: push     0x68de88
00408022: push     0x68d2d0
00408027: call     0x5a07f0
0040802c: call     eax
0040802e: mov      eax, dword ptr [esp + 0x24]
00408032: add      esp, 0x10
00408035: cmp      eax, esi
00408037: mov      dword ptr [esp + 0x28], 0xffffffff
0040803f: pop      ebp
00408040: je       0x40805f
00408042: lea      ecx, [eax - 1]
00408045: mov      al, byte ptr [eax - 1]
00408048: test     al, al
0040804a: je       0x408056
0040804c: cmp      al, 0xff
0040804e: je       0x408056
00408050: dec      al
00408052: mov      byte ptr [ecx], al
00408054: jmp      0x40805f
00408056: push     ecx
00408057: call     0x5fe5f0
0040805c: add      esp, 4
0040805f: mov      edi, dword ptr [esp + 0x30]
00408063: mov      dword ptr [esp + 0x10], esi
00408067: mov      dword ptr [esp + 0x14], esi
0040806b: mov      dword ptr [esp + 0x18], esi
0040806f: mov      ecx, ebx
00408071: call     0x402a80
00408076: mov      ecx, eax
00408078: call     0x402d10
0040807d: test     al, al
0040807f: je       0x408105
00408085: mov      ecx, dword ptr [ebx + 0x28]
00408088: push     edi
00408089: call     0x422f30
0040808e: test     al, al
00408090: jne      0x4080ad
00408092: mov      ecx, ebx
00408094: call     0x402d00
00408099: pop      edi
0040809a: pop      esi
0040809b: pop      ebx
0040809c: mov      ecx, dword ptr [esp + 0x10]
004080a0: mov      dword ptr fs:[0], ecx
004080a7: add      esp, 0x1c
004080aa: ret      8
004080ad: push     edi
004080ae: mov      ecx, ebx
004080b0: call     0x408140
004080b5: test     al, al
004080b7: mov      ecx, ebx
004080b9: je       0x4080d4
004080bb: call     0x4081e0
004080c0: pop      edi
004080c1: pop      esi
004080c2: pop      ebx
004080c3: mov      ecx, dword ptr [esp + 0x10]
004080c7: mov      dword ptr fs:[0], ecx
004080ce: add      esp, 0x1c
004080d1: ret      8
004080d4: call     0x402cf0
004080d9: cmp      eax, 2
004080dc: je       0x408123
004080de: mov      ecx, dword ptr [ebx + 0x28]
004080e1: call     0x429fd0
004080e6: mov      edx, dword ptr [eax + 0x38]
004080e9: mov      ecx, ebx
004080eb: push     edx
004080ec: call     0x408250
004080f1: pop      edi
004080f2: pop      esi
004080f3: pop      ebx
004080f4: mov      ecx, dword ptr [esp + 0x10]
004080f8: mov      dword ptr fs:[0], ecx
004080ff: add      esp, 0x1c
00408102: ret      8
00408105: mov      ecx, ebx
00408107: call     0x402cf0
0040810c: test     eax, eax
0040810e: jne      0x40812a
00408110: mov      ecx, dword ptr [ebx + 0x28]
00408113: call     0x4288c0
00408118: mov      ecx, eax
0040811a: call     0x596d40
0040811f: test     al, al
00408121: je       0x40812a
00408123: mov      ecx, ebx
00408125: call     0x408170
0040812a: mov      ecx, dword ptr [esp + 0x1c]
0040812e: pop      edi
0040812f: pop      esi
00408130: pop      ebx
00408131: mov      dword ptr fs:[0], ecx
00408138: add      esp, 0x1c
0040813b: ret      8
0040813e: nop      
0040813f: nop      
00408140: mov      eax, dword ptr [esp + 4]
00408144: push     esi
00408145: mov      esi, ecx
00408147: push     eax
00408148: mov      ecx, dword ptr [esi + 0x28]
0040814b: call     0x422f30
00408150: test     al, al
00408152: je       0x408169
00408154: mov      ecx, dword ptr [esi + 0x28]
00408157: call     0x428b70
0040815c: test     al, al
0040815e: je       0x408169
00408160: mov      eax, 1
00408165: pop      esi
00408166: ret      4
00408169: xor      eax, eax
0040816b: pop      esi
0040816c: ret      4
0040816f: nop      
00408170: push     -1
00408172: push     0x62041b
00408177: mov      eax, dword ptr fs:[0]
0040817d: push     eax
0040817e: mov      dword ptr fs:[0], esp
00408185: push     ecx
00408186: push     esi
00408187: mov      esi, ecx
00408189: push     0x3c
0040818b: call     0x60a0b5
00408190: add      esp, 4
00408193: mov      dword ptr [esp + 4], eax
00408197: test     eax, eax
00408199: mov      dword ptr [esp + 0x10], 0
004081a1: je       0x4081b0
004081a3: mov      ecx, dword ptr [esi + 0x28]
004081a6: push     ecx
004081a7: mov      ecx, eax
004081a9: call     0x4082c0
004081ae: jmp      0x4081b2
004081b0: xor      eax, eax
004081b2: push     eax
004081b3: push     1
004081b5: mov      ecx, esi
004081b7: mov      dword ptr [esp + 0x18], 0xffffffff
004081bf: call     0x402a10
004081c4: mov      ecx, dword ptr [esp + 8]
004081c8: pop      esi
004081c9: mov      dword ptr fs:[0], ecx
004081d0: add      esp, 0x10
004081d3: ret      
004081d4: nop      
004081d5: nop      
004081d6: nop      
004081d7: nop      
004081d8: nop      
004081d9: nop      
004081da: nop      
004081db: nop      
004081dc: nop      
004081dd: nop      
004081de: nop      
004081df: nop      
004081e0: push     -1
004081e2: push     0x62043b
004081e7: mov      eax, dword ptr fs:[0]
004081ed: push     eax
004081ee: mov      dword ptr fs:[0], esp
004081f5: push     ecx
004081f6: push     esi
004081f7: mov      esi, ecx
004081f9: push     0x34
004081fb: call     0x60a0b5
00408200: add      esp, 4
00408203: mov      dword ptr [esp + 4], eax
00408207: test     eax, eax
00408209: mov      dword ptr [esp + 0x10], 0
00408211: je       0x408220
00408213: mov      ecx, dword ptr [esi + 0x28]
00408216: push     ecx
00408217: mov      ecx, eax
00408219: call     0x408770
0040821e: jmp      0x408222
00408220: xor      eax, eax
00408222: push     eax
00408223: push     0
00408225: mov      ecx, esi
00408227: mov      dword ptr [esp + 0x18], 0xffffffff
0040822f: call     0x402a10
00408234: mov      ecx, dword ptr [esp + 8]
00408238: pop      esi
00408239: mov      dword ptr fs:[0], ecx
00408240: add      esp, 0x10
00408243: ret      
00408244: nop      
00408245: nop      
00408246: nop      
00408247: nop      
00408248: nop      
00408249: nop      
0040824a: nop      
0040824b: nop      
0040824c: nop      
0040824d: nop      
0040824e: nop      
0040824f: nop      
00408250: push     -1
00408252: push     0x62045b
00408257: mov      eax, dword ptr fs:[0]
0040825d: push     eax
0040825e: mov      dword ptr fs:[0], esp
00408265: push     ecx
00408266: push     esi
00408267: mov      esi, ecx
00408269: push     0x3c
0040826b: call     0x60a0b5
00408270: add      esp, 4
00408273: mov      dword ptr [esp + 4], eax
00408277: test     eax, eax
00408279: mov      dword ptr [esp + 0x10], 0
00408281: je       0x408295
00408283: mov      ecx, dword ptr [esp + 0x18]
00408287: mov      edx, dword ptr [esi + 0x28]
0040828a: push     ecx
0040828b: push     edx
0040828c: mov      ecx, eax
0040828e: call     0x405c20
00408293: jmp      0x408297
00408295: xor      eax, eax
00408297: push     eax
00408298: push     2
0040829a: mov      ecx, esi
0040829c: mov      dword ptr [esp + 0x18], 0xffffffff
004082a4: call     0x402a10
004082a9: mov      ecx, dword ptr [esp + 8]
004082ad: pop      esi
004082ae: mov      dword ptr fs:[0], ecx
004082b5: add      esp, 0x10
004082b8: ret      4
004082bb: nop      
004082bc: nop      
004082bd: nop      
004082be: nop      
004082bf: nop      
004082c0: push     -1
004082c2: push     0x620478
004082c7: mov      eax, dword ptr fs:[0]
004082cd: push     eax
004082ce: mov      dword ptr fs:[0], esp
004082d5: push     ecx
004082d6: push     esi
004082d7: push     edi
004082d8: mov      edi, dword ptr [esp + 0x1c]
004082dc: mov      esi, ecx
004082de: push     edi
004082df: mov      dword ptr [esp + 0xc], esi
004082e3: call     0x4078a0
004082e8: mov      ecx, edi
004082ea: mov      dword ptr [esp + 0x14], 0
004082f2: call     0x429fd0
004082f7: mov      eax, dword ptr [eax + 0x2c]
004082fa: mov      ecx, dword ptr [esi + 0x30]
004082fd: push     -1
004082ff: mov      dword ptr [esi + 0x34], eax
00408302: mov      dword ptr [esi + 0x38], 0
00408309: mov      dword ptr [esi], 0x64a878
0040830f: call     0x4288c0
00408314: mov      ecx, eax
00408316: call     0x5966a0
0040831b: mov      ecx, dword ptr [esi + 0x30]
0040831e: call     0x428b10
00408323: mov      ecx, esi
00408325: call     0x4085c0
0040832a: mov      ecx, dword ptr [esp + 0xc]
0040832e: mov      eax, esi
00408330: pop      edi
00408331: pop      esi
00408332: mov      dword ptr fs:[0], ecx
00408339: add      esp, 0x10
0040833c: ret      4
0040833f: nop      
00408340: push     esi
00408341: mov      esi, ecx
00408343: call     0x408360
00408348: test     byte ptr [esp + 8], 1
0040834d: je       0x408358
0040834f: push     esi
00408350: call     0x5fe5f0
00408355: add      esp, 4
00408358: mov      eax, esi
0040835a: pop      esi
0040835b: ret      4
0040835e: nop      
0040835f: nop      
00408360: push     -1
00408362: push     0x620498
00408367: mov      eax, dword ptr fs:[0]
0040836d: push     eax
0040836e: mov      dword ptr fs:[0], esp
00408375: push     ecx
00408376: push     esi
00408377: mov      esi, ecx
00408379: mov      dword ptr [esp + 4], esi
0040837d: mov      dword ptr [esi], 0x64a878
00408383: mov      ecx, dword ptr [esi + 0x30]
00408386: mov      dword ptr [esp + 0x10], 0
0040838e: call     0x428b40
00408393: mov      ecx, esi
00408395: mov      dword ptr [esp + 0x10], 0xffffffff
0040839d: call     0x4029b0
004083a2: mov      ecx, dword ptr [esp + 8]
004083a6: pop      esi
004083a7: mov      dword ptr fs:[0], ecx
004083ae: add      esp, 0x10
004083b1: ret      
004083b2: nop      
004083b3: nop      
004083b4: nop      
004083b5: nop      
004083b6: nop      
004083b7: nop      
004083b8: nop      
004083b9: nop      
004083ba: nop      
004083bb: nop      
004083bc: nop      
004083bd: nop      
004083be: nop      
004083bf: nop      
004083c0: mov      eax, dword ptr fs:[0]
004083c6: push     -1
004083c8: push     0x6204b8
004083cd: push     eax
004083ce: mov      dword ptr fs:[0], esp
004083d5: sub      esp, 0x10
004083d8: push     ebx
004083d9: push     esi
004083da: mov      esi, ecx
004083dc: call     0x402cf0
004083e1: xor      ebx, ebx
004083e3: sub      eax, ebx
004083e5: je       0x408574
004083eb: dec      eax
004083ec: je       0x40850d
004083f2: dec      eax
004083f3: je       0x4084c5
004083f9: mov      al, byte ptr [esp + 0x2c]
004083fd: push     ebp
004083fe: push     edi
004083ff: mov      byte ptr [esp + 0x10], al
00408403: mov      edi, 0x68d350
00408408: or       ecx, 0xffffffff
0040840b: xor      eax, eax
0040840d: push     1
0040840f: repne scasb al, byte ptr es:[edi]
00408411: not      ecx
00408413: dec      ecx
00408414: mov      dword ptr [esp + 0x18], ebx
00408418: mov      ebp, ecx
0040841a: lea      ecx, [esp + 0x14]
0040841e: push     ebp
0040841f: mov      dword ptr [esp + 0x20], ebx
00408423: mov      dword ptr [esp + 0x24], ebx
00408427: call     0x401940
0040842c: test     al, al
0040842e: je       0x408454
00408430: mov      edi, dword ptr [esp + 0x14]
00408434: mov      ecx, ebp
00408436: mov      edx, ecx
00408438: mov      esi, 0x68d350
0040843d: shr      ecx, 2
00408440: rep movsd dword ptr es:[edi], dword ptr [esi]
00408442: mov      ecx, edx
00408444: and      ecx, 3
00408447: rep movsb byte ptr es:[edi], byte ptr [esi]
00408449: mov      eax, dword ptr [esp + 0x14]
0040844d: mov      dword ptr [esp + 0x18], ebp
00408451: mov      byte ptr [eax + ebp], bl
00408454: lea      ecx, [esp + 0x10]
00408458: mov      dword ptr [esp + 0x28], ebx
0040845c: push     ecx
0040845d: push     0x17a
00408462: push     0x68de88
00408467: push     0x68d2d0
0040846c: call     0x5a07f0
00408471: call     eax
00408473: mov      eax, dword ptr [esp + 0x24]
00408477: add      esp, 0x10
0040847a: cmp      eax, ebx
0040847c: pop      edi
0040847d: pop      ebp
0040847e: je       0x4085ab
00408484: lea      ecx, [eax - 1]
00408487: mov      al, byte ptr [eax - 1]
0040848a: cmp      al, bl
0040848c: je       0x4084a9
0040848e: cmp      al, 0xff
00408490: je       0x4084a9
00408492: dec      al
00408494: pop      esi
00408495: mov      byte ptr [ecx], al
00408497: pop      ebx
00408498: mov      ecx, dword ptr [esp + 0x10]
0040849c: mov      dword ptr fs:[0], ecx
004084a3: add      esp, 0x1c
004084a6: ret      8
004084a9: push     ecx
004084aa: call     0x5fe5f0
004084af: add      esp, 4
004084b2: pop      esi
004084b3: pop      ebx
004084b4: mov      ecx, dword ptr [esp + 0x10]
004084b8: mov      dword ptr fs:[0], ecx
004084bf: add      esp, 0x1c
004084c2: ret      8
004084c5: mov      edx, dword ptr [esp + 0x2c]
004084c9: mov      eax, dword ptr [esp + 0x28]
004084cd: push     edx
004084ce: push     eax
004084cf: mov      ecx, esi
004084d1: call     0x402a80
004084d6: mov      ecx, eax
004084d8: call     0x402d20
004084dd: mov      ecx, esi
004084df: call     0x402a80
004084e4: mov      ecx, eax
004084e6: call     0x402d10
004084eb: test     al, al
004084ed: je       0x4085ab
004084f3: mov      ecx, esi
004084f5: call     0x4085c0
004084fa: pop      esi
004084fb: pop      ebx
004084fc: mov      ecx, dword ptr [esp + 0x10]
00408500: mov      dword ptr fs:[0], ecx
00408507: add      esp, 0x1c
0040850a: ret      8
0040850d: mov      ecx, dword ptr [esi + 0x30]
00408510: call     0x423700
00408515: mov      ecx, eax
00408517: call     0x4a0d00
0040851c: test     al, al
0040851e: je       0x4085ab
00408524: mov      edx, dword ptr [esi + 0x38]
00408527: mov      ecx, dword ptr [esi + 0x34]
0040852a: inc      edx
0040852b: mov      eax, edx
0040852d: mov      dword ptr [esi + 0x38], edx
00408530: cmp      eax, ecx
00408532: jge      0x40855a
00408534: mov      ecx, dword ptr [esi + 0x2c]
00408537: call     0x429fd0
0040853c: mov      ecx, dword ptr [eax + 0x30]
0040853f: push     ecx
00408540: mov      ecx, esi
00408542: call     0x408700
00408547: pop      esi
00408548: pop      ebx
00408549: mov      ecx, dword ptr [esp + 0x10]
0040854d: mov      dword ptr fs:[0], ecx
00408554: add      esp, 0x1c
00408557: ret      8
0040855a: mov      ecx, esi
0040855c: call     0x402d00
00408561: pop      esi
00408562: pop      ebx
00408563: mov      ecx, dword ptr [esp + 0x10]
00408567: mov      dword ptr fs:[0], ecx
0040856e: add      esp, 0x1c
00408571: ret      8
00408574: mov      ecx, dword ptr [esi + 0x30]
00408577: call     0x423700
0040857c: mov      ecx, eax
0040857e: call     0x4a1060
00408583: mov      ecx, dword ptr [esi + 0x2c]
00408586: fstp     dword ptr [esp + 0x2c]
0040858a: call     0x429fd0
0040858f: fld      dword ptr [esp + 0x2c]
00408593: fcomp    dword ptr [eax + 0x24]
00408596: fnstsw   ax
00408598: test     ah, 1
0040859b: jne      0x4085ab
0040859d: mov      ecx, esi
0040859f: call     0x4085f0
004085a4: mov      ecx, esi
004085a6: call     0x40a6e0
004085ab: mov      ecx, dword ptr [esp + 0x18]
004085af: pop      esi
004085b0: pop      ebx
004085b1: mov      dword ptr fs:[0], ecx
004085b8: add      esp, 0x1c
004085bb: ret      8
004085be: nop      
004085bf: nop      
004085c0: push     esi
004085c1: mov      esi, ecx
004085c3: push     0x7f7fffff
004085c8: push     0
004085ca: mov      ecx, dword ptr [esi + 0x30]
004085cd: push     6