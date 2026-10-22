0049c1b0: push     -1
0049c1b2: push     0x62c950
0049c1b7: mov      eax, dword ptr fs:[0]
0049c1bd: push     eax
0049c1be: mov      dword ptr fs:[0], esp
0049c1c5: push     ecx
0049c1c6: push     ebx
0049c1c7: push     esi
0049c1c8: push     edi
0049c1c9: mov      esi, ecx
0049c1cb: mov      ebx, dword ptr [esp + 0x20]
0049c1cf: mov      dword ptr [esp + 0x18], 1
0049c1d7: test     ebx, ebx
0049c1d9: je       0x49c1f0
0049c1db: push     ecx
0049c1dc: mov      eax, esp
0049c1de: mov      dword ptr [esp + 0x10], esp
0049c1e2: mov      dword ptr [eax], ebx
0049c1e4: mov      eax, dword ptr [ebx + 0x14]
0049c1e7: inc      eax
0049c1e8: mov      dword ptr [ebx + 0x14], eax
0049c1eb: call     0x49c880
0049c1f0: mov      edi, dword ptr [esp + 0x24]
0049c1f4: test     edi, edi
0049c1f6: je       0x49c22a
0049c1f8: push     ecx
0049c1f9: mov      ecx, esi
0049c1fb: mov      eax, esp
0049c1fd: mov      dword ptr [esp + 0x10], esp
0049c201: mov      dword ptr [eax], edi
0049c203: mov      eax, dword ptr [edi + 0x14]
0049c206: inc      eax
0049c207: mov      dword ptr [edi + 0x14], eax
0049c20a: call     0x49ca60
0049c20f: push     1
0049c211: mov      ecx, esi
0049c213: call     0x49d5e0
0049c218: mov      eax, dword ptr [esi + 0x210]
0049c21e: mov      ecx, dword ptr [esi + 0x114]
0049c224: push     eax
0049c225: call     0x5b3ae0
0049c22a: test     ebx, ebx
0049c22c: mov      byte ptr [esp + 0x18], 0
0049c231: je       0x49c245
0049c233: mov      eax, dword ptr [ebx + 0x14]
0049c236: dec      eax
0049c237: mov      dword ptr [ebx + 0x14], eax
0049c23a: jne      0x49c245
0049c23c: push     0
0049c23e: mov      ecx, ebx
0049c240: call     0x5abfc0
0049c245: test     edi, edi
0049c247: mov      dword ptr [esp + 0x18], 0xffffffff
0049c24f: je       0x49c263
0049c251: mov      eax, dword ptr [edi + 0x14]
0049c254: dec      eax
0049c255: mov      dword ptr [edi + 0x14], eax
0049c258: jne      0x49c263
0049c25a: push     0
0049c25c: mov      ecx, edi
0049c25e: call     0x5abfc0
0049c263: mov      ecx, dword ptr [esp + 0x10]
0049c267: pop      edi
0049c268: pop      esi
0049c269: mov      dword ptr fs:[0], ecx
0049c270: pop      ebx
0049c271: add      esp, 0x10
0049c274: ret      8
0049c277: nop      
0049c278: nop      
0049c279: nop      
0049c27a: nop      
0049c27b: nop      
0049c27c: nop      
0049c27d: nop      
0049c27e: nop      
0049c27f: nop      
0049c280: mov      eax, dword ptr [ecx + 0x114]
0049c286: push     esi
0049c287: lea      esi, [ecx + 0x114]
0049c28d: test     eax, eax
0049c28f: je       0x49c29e
0049c291: mov      ecx, esi
0049c293: call     0x5b3e10
0049c298: mov      dword ptr [esi], 0
0049c29e: pop      esi
0049c29f: ret      
0049c2a0: push     -1
0049c2a2: push     0x62c980
0049c2a7: mov      eax, dword ptr fs:[0]
0049c2ad: push     eax
0049c2ae: mov      dword ptr fs:[0], esp
0049c2b5: sub      esp, 0x28
0049c2b8: push     ebx
0049c2b9: push     ebp
0049c2ba: push     esi
0049c2bb: mov      esi, ecx
0049c2bd: xor      ebx, ebx
0049c2bf: push     edi
0049c2c0: mov      eax, dword ptr [esi + 0x114]
0049c2c6: mov      dword ptr [esp + 0x14], esi
0049c2ca: cmp      eax, ebx
0049c2cc: je       0x49c363
0049c2d2: mov      al, byte ptr [esp + 0x13]
0049c2d6: push     ebx
0049c2d7: lea      ecx, [esp + 0x1c]
0049c2db: mov      byte ptr [esp + 0x1c], al
0049c2df: call     0x4040a0
0049c2e4: mov      edi, 0x6b3f70
0049c2e9: or       ecx, 0xffffffff
0049c2ec: xor      eax, eax
0049c2ee: push     1
0049c2f0: repne scasb al, byte ptr es:[edi]
0049c2f2: not      ecx
0049c2f4: dec      ecx
0049c2f5: mov      ebp, ecx
0049c2f7: lea      ecx, [esp + 0x1c]
0049c2fb: push     ebp
0049c2fc: call     0x401940
0049c301: test     al, al
0049c303: je       0x49c32d
0049c305: mov      edi, dword ptr [esp + 0x1c]
0049c309: mov      ecx, ebp
0049c30b: mov      edx, ecx
0049c30d: mov      esi, 0x6b3f70
0049c312: shr      ecx, 2
0049c315: rep movsd dword ptr es:[edi], dword ptr [esi]
0049c317: mov      ecx, edx
0049c319: and      ecx, 3
0049c31c: rep movsb byte ptr es:[edi], byte ptr [esi]
0049c31e: mov      eax, dword ptr [esp + 0x1c]
0049c322: mov      esi, dword ptr [esp + 0x14]
0049c326: mov      dword ptr [esp + 0x20], ebp
0049c32a: mov      byte ptr [eax + ebp], bl
0049c32d: lea      ecx, [esp + 0x18]
0049c331: mov      dword ptr [esp + 0x40], ebx
0049c335: push     ecx
0049c336: push     0x15f
0049c33b: push     0x694c70
0049c340: push     0x694c64
0049c345: call     0x5a07f0
0049c34a: call     eax
0049c34c: add      esp, 0x10
0049c34f: or       ebp, 0xffffffff
0049c352: lea      ecx, [esp + 0x18]
0049c356: mov      dword ptr [esp + 0x40], ebp
0049c35a: push     1
0049c35c: call     0x4040a0
0049c361: jmp      0x49c366
0049c363: or       ebp, 0xffffffff
0049c366: cmp      dword ptr [esi + 0x110], ebx
0049c36c: jne      0x49c45e
0049c372: mov      edi, 0x6b3f70
0049c377: mov      ecx, ebp
0049c379: xor      eax, eax
0049c37b: mov      dl, byte ptr [esp + 0x13]
0049c37f: repne scasb al, byte ptr es:[edi]
0049c381: not      ecx
0049c383: dec      ecx
0049c384: mov      byte ptr [esp + 0x18], dl
0049c388: push     ecx
0049c389: push     0x6b3f70
0049c38e: lea      ecx, [esp + 0x20]
0049c392: mov      dword ptr [esp + 0x24], ebx
0049c396: mov      dword ptr [esp + 0x28], ebx
0049c39a: mov      dword ptr [esp + 0x2c], ebx
0049c39e: call     0x4040f0
0049c3a3: lea      eax, [esp + 0x18]
0049c3a7: mov      dword ptr [esp + 0x40], 1
0049c3af: push     eax
0049c3b0: push     0x160
0049c3b5: push     0x694c70
0049c3ba: push     0x694c4c
0049c3bf: call     0x5a07f0
0049c3c4: call     eax
0049c3c6: mov      eax, dword ptr [esp + 0x2c]
0049c3ca: add      esp, 0x10
0049c3cd: cmp      eax, ebx
0049c3cf: mov      dword ptr [esp + 0x40], ebp
0049c3d3: je       0x49c3f2
0049c3d5: lea      ecx, [eax - 1]
0049c3d8: mov      al, byte ptr [eax - 1]
0049c3db: cmp      al, bl
0049c3dd: je       0x49c3e9
0049c3df: cmp      al, 0xff
0049c3e1: je       0x49c3e9
0049c3e3: dec      al
0049c3e5: mov      byte ptr [ecx], al
0049c3e7: jmp      0x49c3f2
0049c3e9: push     ecx
0049c3ea: call     0x5fe5f0
0049c3ef: add      esp, 4
0049c3f2: cmp      dword ptr [esi + 0x110], ebx
0049c3f8: jne      0x49c45e
0049c3fa: mov      cl, byte ptr [esp + 0x13]
0049c3fe: push     ebx
0049c3ff: mov      byte ptr [esp + 0x1c], cl
0049c403: lea      ecx, [esp + 0x1c]
0049c407: call     0x4040a0
0049c40c: mov      edi, 0x6b3f70
0049c411: mov      ecx, ebp
0049c413: xor      eax, eax
0049c415: repne scasb al, byte ptr es:[edi]
0049c417: not      ecx
0049c419: dec      ecx
0049c41a: push     ecx
0049c41b: push     0x6b3f70
0049c420: lea      ecx, [esp + 0x20]
0049c424: call     0x4040f0
0049c429: lea      edx, [esp + 0x18]
0049c42d: mov      dword ptr [esp + 0x40], 2
0049c435: push     edx
0049c436: push     0xb6
0049c43b: push     0x68d638
0049c440: push     0x68d62c
0049c445: call     0x5a07f0
0049c44a: call     eax
0049c44c: add      esp, 0x10
0049c44f: lea      ecx, [esp + 0x18]
0049c453: mov      dword ptr [esp + 0x40], ebp
0049c457: push     1
0049c459: call     0x4040a0
0049c45e: mov      ecx, dword ptr [esi + 0x110]
0049c464: call     0x49f120
0049c469: mov      ecx, eax
0049c46b: call     0x5b3b90
0049c470: cmp      eax, ebx
0049c472: mov      dword ptr [esi + 0x114], eax
0049c478: jne      0x49c511
0049c47e: mov      al, byte ptr [esp + 0x13]
0049c482: push     ebx
0049c483: lea      ecx, [esp + 0x2c]
0049c487: mov      byte ptr [esp + 0x2c], al
0049c48b: call     0x4040a0
0049c490: mov      edi, 0x6b3f70
0049c495: mov      ecx, ebp
0049c497: xor      eax, eax
0049c499: push     1
0049c49b: repne scasb al, byte ptr es:[edi]
0049c49d: not      ecx
0049c49f: dec      ecx
0049c4a0: mov      ebp, ecx
0049c4a2: lea      ecx, [esp + 0x2c]
0049c4a6: push     ebp
0049c4a7: call     0x401940
0049c4ac: test     al, al
0049c4ae: je       0x49c4d8
0049c4b0: mov      edi, dword ptr [esp + 0x2c]
0049c4b4: mov      ecx, ebp
0049c4b6: mov      edx, ecx
0049c4b8: mov      esi, 0x6b3f70
0049c4bd: shr      ecx, 2
0049c4c0: rep movsd dword ptr es:[edi], dword ptr [esi]
0049c4c2: mov      ecx, edx
0049c4c4: and      ecx, 3
0049c4c7: rep movsb byte ptr es:[edi], byte ptr [esi]
0049c4c9: mov      eax, dword ptr [esp + 0x2c]
0049c4cd: mov      esi, dword ptr [esp + 0x14]
0049c4d1: mov      dword ptr [esp + 0x30], ebp
0049c4d5: mov      byte ptr [eax + ebp], bl
0049c4d8: lea      ecx, [esp + 0x28]
0049c4dc: mov      dword ptr [esp + 0x40], 3
0049c4e4: push     ecx
0049c4e5: push     0x165
0049c4ea: push     0x694c70
0049c4ef: push     0x68e768
0049c4f4: call     0x5a07f0
0049c4f9: call     eax
0049c4fb: add      esp, 0x10
0049c4fe: lea      ecx, [esp + 0x28]
0049c502: mov      dword ptr [esp + 0x40], 0xffffffff
0049c50a: push     1
0049c50c: call     0x4040a0
0049c511: mov      ecx, dword ptr [esi + 0x114]
0049c517: mov      edx, esi
0049c519: call     0x5b4a70
0049c51e: mov      ecx, dword ptr [esp + 0x38]
0049c522: pop      edi
0049c523: pop      esi
0049c524: pop      ebp
0049c525: pop      ebx
0049c526: mov      dword ptr fs:[0], ecx
0049c52d: add      esp, 0x34
0049c530: ret      
0049c531: nop      
0049c532: nop      
0049c533: nop      
0049c534: nop      
0049c535: nop      
0049c536: nop      
0049c537: nop      
0049c538: nop      
0049c539: nop      
0049c53a: nop      
0049c53b: nop      
0049c53c: nop      
0049c53d: nop      
0049c53e: nop      
0049c53f: nop      
0049c540: sub      esp, 0x18
0049c543: lea      eax, [esp]
0049c547: push     esi
0049c548: push     edi
0049c549: mov      edi, ecx
0049c54b: push     eax
0049c54c: call     0x49bc00
0049c551: add      edi, 0x134
0049c557: mov      ecx, 6
0049c55c: mov      esi, eax
0049c55e: rep movsd dword ptr es:[edi], dword ptr [esi]
0049c560: pop      edi
0049c561: pop      esi
0049c562: add      esp, 0x18
0049c565: ret      
0049c566: nop      
0049c567: nop      
0049c568: nop      
0049c569: nop      
0049c56a: nop      
0049c56b: nop      
0049c56c: nop      
0049c56d: nop      
0049c56e: nop      
0049c56f: nop      
0049c570: sub      esp, 0x18
0049c573: lea      eax, [esp]
0049c577: push     esi
0049c578: push     edi
0049c579: mov      edi, ecx
0049c57b: push     eax
0049c57c: call     0x49bc00
0049c581: add      edi, 0x11c
0049c587: mov      ecx, 6
0049c58c: mov      esi, eax
0049c58e: rep movsd dword ptr es:[edi], dword ptr [esi]
0049c590: pop      edi
0049c591: pop      esi
0049c592: add      esp, 0x18
0049c595: ret      
0049c596: nop      
0049c597: nop      
0049c598: nop      
0049c599: nop      
0049c59a: nop      
0049c59b: nop      
0049c59c: nop      
0049c59d: nop      
0049c59e: nop      
0049c59f: nop      
0049c5a0: push     esi
0049c5a1: mov      esi, ecx
0049c5a3: push     edi
0049c5a4: mov      eax, dword ptr [esi]
0049c5a6: call     dword ptr [eax + 0x64]
0049c5a9: mov      edx, dword ptr [esi]
0049c5ab: mov      ecx, esi
0049c5ad: call     dword ptr [edx + 0x68]
0049c5b0: push     0
0049c5b2: mov      ecx, esi
0049c5b4: lea      edi, [esi + 0x134]
0049c5ba: call     0x4247e0
0049c5bf: mov      ecx, eax
0049c5c1: mov      edx, edi
0049c5c3: call     0x5b4990
0049c5c8: push     0
0049c5ca: mov      ecx, esi
0049c5cc: lea      edi, [esi + 0x11c]
0049c5d2: call     0x4247e0
0049c5d7: mov      ecx, eax
0049c5d9: mov      edx, edi
0049c5db: call     0x5b48b0
0049c5e0: pop      edi
0049c5e1: pop      esi
0049c5e2: ret      
0049c5e3: nop      
0049c5e4: nop      
0049c5e5: nop      
0049c5e6: nop      
0049c5e7: nop      
0049c5e8: nop      
0049c5e9: nop      
0049c5ea: nop      
0049c5eb: nop      
0049c5ec: nop      
0049c5ed: nop      
0049c5ee: nop      
0049c5ef: nop      
0049c5f0: push     -1
0049c5f2: push     0x62c9b8
0049c5f7: mov      eax, dword ptr fs:[0]
0049c5fd: push     eax
0049c5fe: mov      dword ptr fs:[0], esp
0049c605: sub      esp, 0x1c
0049c608: push     ebx
0049c609: push     ebp
0049c60a: push     esi
0049c60b: push     edi
0049c60c: mov      esi, ecx
0049c60e: push     0x190
0049c613: push     0x694c70
0049c618: lea      ecx, [esp + 0x20]
0049c61c: mov      dword ptr [esp + 0x18], esi
0049c620: call     0x5ae5f0
0049c625: mov      al, byte ptr [esi + 0x10c]
0049c62b: xor      ebx, ebx
0049c62d: cmp      al, bl
0049c62f: mov      dword ptr [esp + 0x34], ebx
0049c633: je       0x49c6c1
0049c639: mov      al, byte ptr [esp + 0x3c]
0049c63d: push     ebx
0049c63e: lea      ecx, [esp + 0x20]
0049c642: mov      byte ptr [esp + 0x20], al
0049c646: call     0x4040a0
0049c64b: mov      edi, 0x6b3f70
0049c650: or       ecx, 0xffffffff
0049c653: xor      eax, eax
0049c655: push     1
0049c657: repne scasb al, byte ptr es:[edi]
0049c659: not      ecx
0049c65b: dec      ecx
0049c65c: mov      ebp, ecx
0049c65e: lea      ecx, [esp + 0x20]
0049c662: push     ebp
0049c663: call     0x401940
0049c668: test     al, al
0049c66a: je       0x49c68f
0049c66c: mov      edi, dword ptr [esp + 0x20]
0049c670: mov      ecx, ebp
0049c672: mov      edx, ecx
0049c674: mov      esi, 0x6b3f70
0049c679: shr      ecx, 2
0049c67c: rep movsd dword ptr es:[edi], dword ptr [esi]
0049c67e: mov      ecx, edx
0049c680: push     ebp
0049c681: and      ecx, 3
0049c684: rep movsb byte ptr es:[edi], byte ptr [esi]
0049c686: lea      ecx, [esp + 0x20]
0049c68a: call     0x404190
0049c68f: lea      eax, [esp + 0x1c]
0049c693: mov      byte ptr [esp + 0x34], 1
0049c698: push     eax
0049c699: push     0x191
0049c69e: push     0x694c70
0049c6a3: push     0x694cac
0049c6a8: call     0x5a07f0
0049c6ad: call     eax
0049c6af: add      esp, 0x10
0049c6b2: lea      ecx, [esp + 0x1c]
0049c6b6: mov      byte ptr [esp + 0x34], bl
0049c6ba: push     1
0049c6bc: call     0x4040a0
0049c6c1: mov      esi, dword ptr [0x6c8de0]
0049c6c7: cmp      esi, ebx
0049c6c9: jne      0x49c6d2
0049c6cb: call     0x55b280
0049c6d0: mov      esi, eax
0049c6d2: cmp      dword ptr [esi + 0xf8], ebx
0049c6d8: jne      0x49c73c
0049c6da: mov      cl, byte ptr [esp + 0x3c]
0049c6de: push     ebx
0049c6df: mov      byte ptr [esp + 0x20], cl
0049c6e3: lea      ecx, [esp + 0x20]
0049c6e7: call     0x4040a0
0049c6ec: mov      edi, 0x6b3f70
0049c6f1: or       ecx, 0xffffffff
0049c6f4: xor      eax, eax
0049c6f6: repne scasb al, byte ptr es:[edi]
0049c6f8: not      ecx
0049c6fa: dec      ecx
0049c6fb: push     ecx
0049c6fc: push     0x6b3f70
0049c701: lea      ecx, [esp + 0x24]
0049c705: call     0x4040f0
0049c70a: lea      edx, [esp + 0x1c]
0049c70e: mov      byte ptr [esp + 0x34], 2
0049c713: push     edx
0049c714: push     0x182
0049c719: push     0x68eb58
0049c71e: push     0x694c9c
0049c723: call     0x5a07f0
0049c728: call     eax
0049c72a: add      esp, 0x10
0049c72d: lea      ecx, [esp + 0x1c]
0049c731: mov      byte ptr [esp + 0x34], bl
0049c735: push     1
0049c737: call     0x4040a0
0049c73c: mov      eax, dword ptr [esp + 0x3c]
