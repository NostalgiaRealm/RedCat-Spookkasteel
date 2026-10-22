0049b240: push     -1
0049b242: push     0x62c862
0049b247: mov      eax, dword ptr fs:[0]
0049b24d: push     eax
0049b24e: mov      dword ptr fs:[0], esp
0049b255: sub      esp, 0x28
0049b258: mov      eax, dword ptr [esp + 0x38]
0049b25c: push     ebx
0049b25d: push     ebp
0049b25e: push     esi
0049b25f: push     edi
0049b260: mov      esi, ecx
0049b262: push     eax
0049b263: mov      dword ptr [esp + 0x18], esi
0049b267: call     0x501cb0
0049b26c: mov      ebp, dword ptr [esp + 0x4c]
0049b270: lea      edi, [esi + 0xf8]
0049b276: xor      ebx, ebx
0049b278: mov      cl, byte ptr [ebp]
0049b27b: push     ebx
0049b27c: mov      byte ptr [edi], cl
0049b27e: mov      ecx, edi
0049b280: mov      dword ptr [esp + 0x44], ebx
0049b284: call     0x4040a0
0049b289: mov      edx, dword ptr [0x64aba8]
0049b28f: mov      ecx, edi
0049b291: push     edx
0049b292: push     ebx
0049b293: push     ebp
0049b294: call     0x40cc00
0049b299: mov      dword ptr [esi + 0x108], ebx
0049b29f: mov      byte ptr [esi + 0x10c], bl
0049b2a5: mov      dword ptr [esi + 0x110], ebx
0049b2ab: push     esi
0049b2ac: lea      ecx, [esi + 0x19c]
0049b2b2: mov      byte ptr [esp + 0x44], 2
0049b2b7: mov      dword ptr [esi + 0x114], ebx
0049b2bd: mov      byte ptr [esi + 0x118], bl
0049b2c3: mov      dword ptr [esi + 0x14c], 9
0049b2cd: mov      dword ptr [esi + 0x15c], ebx
0049b2d3: mov      dword ptr [esi + 0x160], ebx
0049b2d9: mov      dword ptr [esi + 0x164], ebx
0049b2df: mov      byte ptr [esi + 0x198], 1
0049b2e6: call     0x4a04a0
0049b2eb: lea      ecx, [esi + 0x220]
0049b2f1: push     ebx
0049b2f2: mov      byte ptr [esp + 0x44], 3
0049b2f7: mov      dword ptr [esi + 0x1fc], ebx
0049b2fd: mov      dword ptr [esi + 0x204], ebx
0049b303: mov      byte ptr [esi + 0x209], 1
0049b30a: mov      byte ptr [esi + 0x20d], 1
0049b311: mov      dword ptr [esi + 0x210], 0x437f0000
0049b31b: mov      byte ptr [esi + 0x214], 1
0049b322: mov      dword ptr [esi + 0x218], ebx
0049b328: mov      dword ptr [esi + 0x21c], ebx
0049b32e: call     0x4041b0
0049b333: push     ebp
0049b334: mov      byte ptr [esi + 0x23c], bl
0049b33a: mov      dword ptr [esi + 0x240], ebx
0049b340: mov      dword ptr [esi + 0x280], ebx
0049b346: mov      dword ptr [esi + 0x284], ebx
0049b34c: mov      dword ptr [esi], 0x64e7b4
0049b352: call     0x4a1c80
0049b357: add      esp, 4
0049b35a: cmp      eax, ebx
0049b35c: mov      dword ptr [esi + 0x108], eax
0049b362: jne      0x49b3c7
0049b364: mov      al, byte ptr [esp + 0x48]
0049b368: push     ebx
0049b369: lea      ecx, [esp + 0x2c]
0049b36d: mov      byte ptr [esp + 0x2c], al
0049b371: call     0x4040a0
0049b376: mov      edi, 0x6b3f70
0049b37b: or       ecx, 0xffffffff
0049b37e: xor      eax, eax
0049b380: repne scasb al, byte ptr es:[edi]
0049b382: not      ecx
0049b384: dec      ecx
0049b385: push     ecx
0049b386: push     0x6b3f70
0049b38b: lea      ecx, [esp + 0x30]
0049b38f: call     0x4040f0
0049b394: lea      ecx, [esp + 0x28]
0049b398: mov      byte ptr [esp + 0x40], 4
0049b39d: push     ecx
0049b39e: push     0x141
0049b3a3: push     0x694bcc
0049b3a8: push     0x68f8a0
0049b3ad: call     0x5a07f0
0049b3b2: call     eax
0049b3b4: add      esp, 0x10
0049b3b7: lea      ecx, [esp + 0x28]
0049b3bb: mov      byte ptr [esp + 0x40], 3
0049b3c0: push     1
0049b3c2: call     0x4040a0
0049b3c7: mov      ebp, dword ptr [esi + 0x108]
0049b3cd: mov      dl, byte ptr [ebp + 0x18]
0049b3d0: mov      byte ptr [esi + 0x208], dl
0049b3d6: mov      al, byte ptr [ebp + 0x54]
0049b3d9: mov      byte ptr [esi + 0x20a], al
0049b3df: mov      cl, byte ptr [ebp + 0x54]
0049b3e2: mov      byte ptr [esi + 0x20b], cl
0049b3e8: mov      dl, byte ptr [ebp + 0x55]
0049b3eb: mov      byte ptr [esi + 0x20c], dl
0049b3f1: mov      al, byte ptr [ebp + 0x56]
0049b3f4: mov      byte ptr [esi + 0x200], al
0049b3fa: mov      ecx, dword ptr [ebp + 0x5c]
0049b3fd: mov      edx, dword ptr [ebp + 0x58]
0049b400: mov      dword ptr [esp + 0x10], ecx
0049b404: mov      dword ptr [esp + 0x48], edx
0049b408: call     0x60a4a0
0049b40d: cdq      
0049b40e: mov      ecx, 0x2710
0049b413: idiv     ecx
0049b415: mov      dword ptr [esp + 0x4c], edx
0049b419: fild     dword ptr [esp + 0x4c]
0049b41d: fld      dword ptr [esp + 0x10]
0049b421: fsub     dword ptr [esp + 0x48]
0049b425: fmulp    st(1)
0049b427: fmul     dword ptr [0x64a2c4]
0049b42d: fadd     dword ptr [esp + 0x48]
0049b431: fcom     dword ptr [0x64a354]
0049b437: fst      dword ptr [esi + 0x1f8]
0049b43d: fnstsw   ax
0049b43f: test     ah, 1
0049b442: je       0x49b485
0049b444: sub      esp, 8
0049b447: lea      edx, [esp + 0x20]
0049b44b: fstp     qword ptr [esp]
0049b44e: push     0x694bb0
0049b453: push     edx
0049b454: call     0x5ae390
0049b459: add      esp, 0x10
0049b45c: push     eax
0049b45d: mov      ecx, esi
0049b45f: mov      byte ptr [esp + 0x44], 5
0049b464: call     0x5035a0
0049b469: push     1
0049b46b: lea      ecx, [esp + 0x1c]
0049b46f: mov      byte ptr [esp + 0x44], 3
0049b474: call     0x4040a0
0049b479: mov      dword ptr [esi + 0x1f8], 0x3f800000
0049b483: jmp      0x49b487
0049b485: fstp     st(0)
0049b487: call     0x5171f0
0049b48c: mov      edi, eax
0049b48e: mov      eax, dword ptr [edi + 0x64]
0049b491: cmp      eax, 0x80000000
0049b496: jne      0x49b4b0
0049b498: mov      eax, dword ptr [edi + 0x18]
0049b49b: cmp      eax, ebx
0049b49d: jne      0x49b4a4
0049b49f: mov      eax, 0x64a3b4
0049b4a4: push     eax
0049b4a5: call     0x60af10
0049b4aa: add      esp, 4
0049b4ad: mov      dword ptr [edi + 0x64], eax
0049b4b0: cmp      eax, ebx
0049b4b2: je       0x49b53a
0049b4b8: mov      al, byte ptr [esi + 0x200]
0049b4be: mov      edx, 0x694ba8
0049b4c3: cmp      al, bl
0049b4c5: jne      0x49b4cc
0049b4c7: mov      edx, 0x694ba0
0049b4cc: mov      ecx, dword ptr [esi + 0x70]
0049b4cf: cmp      ecx, ebx
0049b4d1: jne      0x49b4d8
0049b4d3: mov      ecx, 0x64a3b4
0049b4d8: mov      eax, dword ptr [esi + 0x60]
0049b4db: cmp      eax, ebx
0049b4dd: jne      0x49b4e4
0049b4df: mov      eax, 0x64a3b4
0049b4e4: fld      dword ptr [esi + 0x1f8]
0049b4ea: sub      esp, 8
0049b4ed: fstp     qword ptr [esp]
0049b4f0: push     edx
0049b4f1: push     ecx
0049b4f2: push     eax
0049b4f3: lea      eax, [esp + 0x2c]
0049b4f7: push     0x694b6c
0049b4fc: push     eax
0049b4fd: call     0x5ae390
0049b502: push     eax
0049b503: mov      byte ptr [esp + 0x60], 6
0049b508: call     0x5aff00
0049b50d: mov      eax, dword ptr [esp + 0x3c]
0049b511: add      esp, 0x20
0049b514: cmp      eax, ebx
0049b516: mov      byte ptr [esp + 0x40], 3
0049b51b: je       0x49b53a
0049b51d: lea      ecx, [eax - 1]
0049b520: mov      al, byte ptr [eax - 1]
0049b523: cmp      al, bl
0049b525: je       0x49b531
0049b527: cmp      al, 0xff
0049b529: je       0x49b531
0049b52b: dec      al
0049b52d: mov      byte ptr [ecx], al
0049b52f: jmp      0x49b53a
0049b531: push     ecx
0049b532: call     0x5fe5f0
0049b537: add      esp, 4
0049b53a: mov      ecx, dword ptr [ebp + 0x1c]
0049b53d: lea      edi, [esi + 0x134]
0049b543: mov      dword ptr [esi + 0x150], ecx
0049b549: mov      edx, dword ptr [ebp + 0x1c]
0049b54c: mov      dword ptr [esi + 0x154], edx
0049b552: mov      eax, dword ptr [ebp + 0x1c]
0049b555: mov      dword ptr [esi + 0x158], eax
0049b55b: mov      ecx, 6
0049b560: xor      eax, eax
0049b562: rep stosd dword ptr es:[edi], eax
0049b564: mov      ecx, 6
0049b569: lea      edi, [esi + 0x11c]
0049b56f: rep stosd dword ptr es:[edi], eax
0049b571: lea      eax, [esi + 0x230]
0049b577: xor      ecx, ecx
0049b579: mov      dword ptr [eax], ecx
0049b57b: mov      dword ptr [eax + 4], ecx
0049b57e: mov      dword ptr [eax + 8], ecx
0049b581: lea      ecx, [esi + 0x168]
0049b587: call     0x5b30c0
0049b58c: lea      ecx, [esi + 0x244]
0049b592: call     0x5b30c0
0049b597: lea      ecx, [esi + 0x288]
0049b59d: call     0x5b3070
0049b5a2: lea      eax, [esi + 0x274]
0049b5a8: xor      edx, edx
0049b5aa: mov      dword ptr [eax], edx
0049b5ac: mov      dword ptr [eax + 4], edx
0049b5af: mov      dword ptr [eax + 8], edx
0049b5b2: mov      eax, dword ptr [esi + 0x108]
0049b5b8: cmp      eax, ebx
0049b5ba: jne      0x49b61f
0049b5bc: mov      cl, byte ptr [esp + 0x48]
0049b5c0: push     ebx
0049b5c1: mov      byte ptr [esp + 0x1c], cl
0049b5c5: lea      ecx, [esp + 0x1c]
0049b5c9: call     0x4040a0
0049b5ce: mov      edi, 0x6b3f70
0049b5d3: or       ecx, 0xffffffff
0049b5d6: xor      eax, eax
0049b5d8: repne scasb al, byte ptr es:[edi]
0049b5da: not      ecx
0049b5dc: dec      ecx
0049b5dd: push     ecx
0049b5de: push     0x6b3f70
0049b5e3: lea      ecx, [esp + 0x20]
0049b5e7: call     0x4040f0
0049b5ec: lea      edx, [esp + 0x18]
0049b5f0: mov      byte ptr [esp + 0x40], 7
0049b5f5: push     edx
0049b5f6: push     0x141
0049b5fb: push     0x694bcc
0049b600: push     0x68f8a0
0049b605: call     0x5a07f0
0049b60a: call     eax
0049b60c: add      esp, 0x10
0049b60f: lea      ecx, [esp + 0x18]
0049b613: mov      byte ptr [esp + 0x40], 3
0049b618: push     1
0049b61a: call     0x4040a0
0049b61f: mov      eax, dword ptr [esi + 0x108]
0049b625: mov      ecx, esi
0049b627: add      eax, 0xf4
0049b62c: push     eax
0049b62d: call     0x49c5f0
0049b632: fld      dword ptr [ebp + 0x68]
0049b635: fmul     dword ptr [0x64d658]
0049b63b: push     ecx
0049b63c: mov      ecx, esi
0049b63e: fstp     dword ptr [esp]
0049b641: call     0x49ccf0
0049b646: fld      dword ptr [ebp + 0x6c]
0049b649: fmul     dword ptr [0x64d658]
0049b64f: push     ecx
0049b650: mov      ecx, esi
0049b652: fstp     dword ptr [esp]
0049b655: call     0x49cd90
0049b65a: fld      dword ptr [ebp + 0x70]
0049b65d: fmul     dword ptr [0x64d658]
0049b663: push     ecx
0049b664: mov      ecx, esi
0049b666: fstp     dword ptr [esp]
0049b669: call     0x49ce30
0049b66e: fld      dword ptr [ebp + 0x74]
0049b671: fstp     dword ptr [esp + 0x18]
0049b675: fld      dword ptr [ebp + 0x78]
0049b678: fstp     dword ptr [esp + 0x1c]
0049b67c: fld      dword ptr [ebp + 0x7c]
0049b67f: mov      ecx, dword ptr [esp + 0x18]
0049b683: mov      edx, dword ptr [esp + 0x1c]
0049b687: fstp     dword ptr [esp + 0x20]
0049b68b: fld      dword ptr [esp + 0x18]
0049b68f: fcomp    dword ptr [0x64a450]
0049b695: mov      eax, dword ptr [esp + 0x20]
0049b699: mov      dword ptr [esi + 0x230], ecx
0049b69f: mov      dword ptr [esi + 0x234], edx
0049b6a5: mov      dword ptr [esi + 0x238], eax
0049b6ab: fnstsw   ax
0049b6ad: test     ah, 0x40
0049b6b0: je       0x49b6d4
0049b6b2: fld      dword ptr [esp + 0x1c]
0049b6b6: fcomp    dword ptr [0x64a450]
0049b6bc: fnstsw   ax
0049b6be: test     ah, 0x40
0049b6c1: je       0x49b6d4
0049b6c3: fld      dword ptr [esp + 0x20]
0049b6c7: fcomp    dword ptr [0x64a450]
0049b6cd: fnstsw   ax
0049b6cf: test     ah, 0x40
0049b6d2: jne      0x49b6d9
0049b6d4: mov      ebx, 1
0049b6d9: mov      ecx, esi
0049b6db: mov      byte ptr [esi + 0x23c], bl
0049b6e1: call     0x49b8d0
0049b6e6: mov      ecx, dword ptr [esp + 0x38]
0049b6ea: mov      eax, esi
0049b6ec: pop      edi
0049b6ed: pop      esi
0049b6ee: pop      ebp
0049b6ef: pop      ebx
0049b6f0: mov      dword ptr fs:[0], ecx
0049b6f7: add      esp, 0x34
0049b6fa: ret      8
0049b6fd: nop      
0049b6fe: nop      
0049b6ff: nop      
0049b700: push     esi
0049b701: mov      esi, ecx
0049b703: call     0x49b720
0049b708: test     byte ptr [esp + 8], 1
0049b70d: je       0x49b718
0049b70f: push     esi
0049b710: call     0x5fe5f0
0049b715: add      esp, 4
0049b718: mov      eax, esi
0049b71a: pop      esi
0049b71b: ret      4
0049b71e: nop      
0049b71f: nop      
0049b720: push     -1
0049b722: push     0x62c8b2
0049b727: mov      eax, dword ptr fs:[0]
0049b72d: push     eax
0049b72e: mov      dword ptr fs:[0], esp
0049b735: sub      esp, 0x18
0049b738: push     ebp
0049b739: push     esi
0049b73a: mov      esi, ecx
0049b73c: push     edi
0049b73d: mov      dword ptr [esp + 0xc], esi
0049b741: mov      dword ptr [esi], 0x64e7b4
0049b747: mov      al, byte ptr [esi + 0x118]
0049b74d: mov      dword ptr [esp + 0x2c], 3
0049b755: test     al, al
0049b757: je       0x49b76d
0049b759: push     ecx
0049b75a: mov      eax, esp
0049b75c: mov      dword ptr [esp + 0x14], esp
0049b760: push     eax
0049b761: call     0x4042e0
0049b766: mov      ecx, esi
0049b768: call     0x49c880
0049b76d: mov      ecx, esi
0049b76f: call     0x49c280
0049b774: xor      ebp, ebp
0049b776: mov      dword ptr [esp + 0x10], ebp
0049b77a: mov      ecx, dword ptr [esi + 0x110]
0049b780: mov      byte ptr [esp + 0x2c], 4
0049b785: cmp      ecx, ebp
0049b787: je       0x49b79e
0049b789: mov      eax, dword ptr [ecx + 0x14]
0049b78c: dec      eax
0049b78d: mov      dword ptr [ecx + 0x14], eax
0049b790: jne      0x49b798
0049b792: push     ebp
0049b793: call     0x5abfc0
0049b798: mov      dword ptr [esi + 0x110], ebp
0049b79e: mov      byte ptr [esp + 0x2c], 3
0049b7a3: mov      byte ptr [esi + 0x10c], 0
0049b7aa: call     0x517d30
0049b7af: mov      edi, eax
0049b7b1: mov      eax, dword ptr [edi + 0x64]
0049b7b4: cmp      eax, 0x80000000
0049b7b9: jne      0x49b7d3
0049b7bb: mov      eax, dword ptr [edi + 0x18]
0049b7be: cmp      eax, ebp
0049b7c0: jne      0x49b7c7
0049b7c2: mov      eax, 0x64a3b4
0049b7c7: push     eax
0049b7c8: call     0x60af10
0049b7cd: add      esp, 4
0049b7d0: mov      dword ptr [edi + 0x64], eax
0049b7d3: cmp      eax, ebp
0049b7d5: je       0x49b840
0049b7d7: mov      eax, dword ptr [esi + 0x60]
0049b7da: cmp      eax, ebp
0049b7dc: jne      0x49b7e3
0049b7de: mov      eax, 0x64a3b4
0049b7e3: mov      ecx, dword ptr [esi + 0x284]
0049b7e9: mov      edx, dword ptr [esi + 0x280]
0049b7ef: push     ecx
0049b7f0: push     edx
0049b7f1: push     eax
0049b7f2: lea      eax, [esp + 0x20]
0049b7f6: push     0x694bf4
0049b7fb: push     eax
0049b7fc: call     0x5ae390
0049b801: push     eax
0049b802: mov      byte ptr [esp + 0x44], 5
0049b807: call     0x5aff00
0049b80c: mov      eax, dword ptr [esp + 0x30]
0049b810: add      esp, 0x18
0049b813: cmp      eax, ebp
0049b815: je       0x49b834
0049b817: lea      ecx, [eax - 1]
0049b81a: mov      al, byte ptr [eax - 1]
0049b81d: test     al, al
0049b81f: je       0x49b82b
0049b821: cmp      al, 0xff
0049b823: je       0x49b82b
0049b825: dec      al
0049b827: mov      byte ptr [ecx], al
0049b829: jmp      0x49b834
0049b82b: push     ecx
0049b82c: call     0x5fe5f0
0049b831: add      esp, 4
0049b834: mov      dword ptr [esp + 0x18], ebp
0049b838: mov      dword ptr [esp + 0x1c], ebp
0049b83c: mov      dword ptr [esp + 0x20], ebp
0049b840: lea      ecx, [esi + 0x19c]
0049b846: mov      byte ptr [esp + 0x2c], 2
0049b84b: call     0x4a05f0
0049b850: mov      ecx, dword ptr [esi + 0x110]
0049b856: mov      byte ptr [esp + 0x2c], 1
0049b85b: cmp      ecx, ebp
0049b85d: je       0x49b874
0049b85f: mov      eax, dword ptr [ecx + 0x14]
0049b862: dec      eax
0049b863: mov      dword ptr [ecx + 0x14], eax
0049b866: jne      0x49b86e
0049b868: push     ebp
0049b869: call     0x5abfc0
0049b86e: mov      dword ptr [esi + 0x110], ebp
0049b874: mov      eax, dword ptr [esi + 0xfc]
0049b87a: cmp      eax, ebp
0049b87c: je       0x49b89b
0049b87e: lea      ecx, [eax - 1]
0049b881: mov      al, byte ptr [eax - 1]
0049b884: test     al, al
0049b886: je       0x49b892
0049b888: cmp      al, 0xff
0049b88a: je       0x49b892
0049b88c: dec      al
0049b88e: mov      byte ptr [ecx], al
0049b890: jmp      0x49b89b
0049b892: push     ecx
0049b893: call     0x5fe5f0
0049b898: add      esp, 4
0049b89b: mov      ecx, esi
0049b89d: mov      dword ptr [esi + 0xfc], ebp
0049b8a3: mov      dword ptr [esi + 0x100], ebp
0049b8a9: mov      dword ptr [esi + 0x104], ebp
0049b8af: mov      dword ptr [esp + 0x2c], 0xffffffff
0049b8b7: call     0x501f40
0049b8bc: mov      ecx, dword ptr [esp + 0x24]
0049b8c0: pop      edi
0049b8c1: pop      esi
0049b8c2: mov      dword ptr fs:[0], ecx
0049b8c9: pop      ebp
0049b8ca: add      esp, 0x24
0049b8cd: ret      
0049b8ce: nop      
0049b8cf: nop      
0049b8d0: mov      eax, dword ptr fs:[0]
0049b8d6: push     -1
0049b8d8: push     0x62c8d8
0049b8dd: push     eax
0049b8de: mov      dword ptr fs:[0], esp
0049b8e5: sub      esp, 0x30
0049b8e8: push     ebx
0049b8e9: mov      ebx, ecx
0049b8eb: push     esi
0049b8ec: push     edi
0049b8ed: mov      eax, dword ptr [ebx + 0x18]
0049b8f0: xor      edi, edi
0049b8f2: cmp      eax, edi
0049b8f4: je       0x49baf0
0049b8fa: mov      al, byte ptr [ebx + 0x208]
0049b900: mov      dword ptr [esp + 0x10], edi
0049b904: test     al, al
0049b906: je       0x49b910
0049b908: mov      dword ptr [esp + 0x10], 1
0049b910: mov      al, byte ptr [ebx + 0x20a]
0049b916: test     al, al
0049b918: je       0x49b924
0049b91a: mov      eax, dword ptr [esp + 0x10]
0049b91e: or       al, 4
0049b920: mov      dword ptr [esp + 0x10], eax
0049b924: mov      al, byte ptr [ebx + 0x20b]
0049b92a: test     al, al
0049b92c: je       0x49b938
0049b92e: mov      eax, dword ptr [esp + 0x10]
0049b932: or       al, 8
0049b934: mov      dword ptr [esp + 0x10], eax
0049b938: mov      al, byte ptr [ebx + 0x209]
0049b93e: test     al, al
0049b940: je       0x49b94c
0049b942: mov      eax, dword ptr [esp + 0x10]
0049b946: or       al, 2
0049b948: mov      dword ptr [esp + 0x10], eax
0049b94c: mov      al, byte ptr [ebx + 0x20c]
0049b952: test     al, al
0049b954: je       0x49b960
0049b956: mov      eax, dword ptr [esp + 0x10]
0049b95a: or       al, 0x10
0049b95c: mov      dword ptr [esp + 0x10], eax
0049b960: lea      eax, [esp + 0x18]
0049b964: push     ebp
0049b965: push     eax
0049b966: mov      ecx, ebx
0049b968: call     0x4042e0
0049b96d: mov      esi, eax
0049b96f: mov      dword ptr [esp + 0x18], esi
0049b973: mov      eax, dword ptr [esi]
0049b975: mov      dword ptr [esp + 0x48], edi
0049b979: cmp      eax, edi
0049b97b: jne      0x49ba0e
0049b981: mov      cl, byte ptr [esp + 0x13]
0049b985: push     edi
0049b986: mov      byte ptr [esp + 0x34], cl
0049b98a: lea      ecx, [esp + 0x34]
0049b98e: call     0x4040a0
0049b993: mov      edi, 0x6b3f70
0049b998: or       ecx, 0xffffffff
0049b99b: xor      eax, eax
0049b99d: push     1
0049b99f: repne scasb al, byte ptr es:[edi]
0049b9a1: not      ecx
0049b9a3: dec      ecx
0049b9a4: mov      ebp, ecx
0049b9a6: lea      ecx, [esp + 0x34]
0049b9aa: push     ebp
0049b9ab: call     0x401940
0049b9b0: test     al, al
0049b9b2: je       0x49b9db
0049b9b4: mov      edi, dword ptr [esp + 0x34]
0049b9b8: mov      ecx, ebp
0049b9ba: mov      edx, ecx
0049b9bc: mov      esi, 0x6b3f70
0049b9c1: shr      ecx, 2
0049b9c4: rep movsd dword ptr es:[edi], dword ptr [esi]
0049b9c6: mov      ecx, edx
0049b9c8: push     ebp
0049b9c9: and      ecx, 3
0049b9cc: rep movsb byte ptr es:[edi], byte ptr [esi]
0049b9ce: lea      ecx, [esp + 0x34]
0049b9d2: call     0x404190
0049b9d7: mov      esi, dword ptr [esp + 0x18]
0049b9db: lea      eax, [esp + 0x30]
0049b9df: mov      byte ptr [esp + 0x48], 1
0049b9e4: push     eax
0049b9e5: push     0xb6
0049b9ea: push     0x68d638
0049b9ef: push     0x68d62c
0049b9f4: call     0x5a07f0
0049b9f9: call     eax
0049b9fb: add      esp, 0x10
0049b9fe: lea      ecx, [esp + 0x30]
0049ba02: mov      byte ptr [esp + 0x48], 0
0049ba07: push     1
0049ba09: call     0x4040a0
0049ba0e: mov      esi, dword ptr [esi]
0049ba10: mov      dword ptr [esp + 0x18], esi
0049ba14: mov      eax, dword ptr [esi + 0x5c]
0049ba17: test     eax, eax
0049ba19: jne      0x49baaf
0049ba1f: mov      cl, byte ptr [esp + 0x13]
0049ba23: push     0
0049ba25: mov      byte ptr [esp + 0x24], cl
0049ba29: lea      ecx, [esp + 0x24]
0049ba2d: call     0x4040a0
0049ba32: mov      edi, 0x6b3f70
0049ba37: or       ecx, 0xffffffff
0049ba3a: xor      eax, eax
0049ba3c: push     1
0049ba3e: repne scasb al, byte ptr es:[edi]
0049ba40: not      ecx
0049ba42: dec      ecx
0049ba43: mov      ebp, ecx
0049ba45: lea      ecx, [esp + 0x24]
0049ba49: push     ebp
0049ba4a: call     0x401940
0049ba4f: test     al, al
0049ba51: je       0x49ba7c
0049ba53: mov      edi, dword ptr [esp + 0x24]
0049ba57: mov      ecx, ebp
0049ba59: mov      edx, ecx
0049ba5b: mov      esi, 0x6b3f70
0049ba60: shr      ecx, 2
0049ba63: rep movsd dword ptr es:[edi], dword ptr [esi]
0049ba65: mov      ecx, edx
0049ba67: and      ecx, 3
0049ba6a: rep movsb byte ptr es:[edi], byte ptr [esi]
0049ba6c: mov      eax, dword ptr [esp + 0x24]
0049ba70: mov      esi, dword ptr [esp + 0x18]
0049ba74: mov      dword ptr [esp + 0x28], ebp
0049ba78: mov      byte ptr [eax + ebp], 0
0049ba7c: lea      ecx, [esp + 0x20]
0049ba80: mov      byte ptr [esp + 0x48], 2
0049ba85: push     ecx
0049ba86: push     0x144
0049ba8b: push     0x68e1b8
0049ba90: push     0x68e1a8
0049ba95: call     0x5a07f0
0049ba9a: call     eax
0049ba9c: add      esp, 0x10
0049ba9f: lea      ecx, [esp + 0x20]
0049baa3: mov      byte ptr [esp + 0x48], 0
0049baa8: push     1
0049baaa: call     0x4040a0
0049baaf: mov      edx, dword ptr [esp + 0x14]
0049bab3: mov      ecx, dword ptr [ebx + 0x114]
0049bab9: mov      eax, dword ptr [esi + 0x5c]
0049babc: push     edx
0049babd: push     ecx
0049babe: push     eax
0049babf: call     0x5b9b70
0049bac4: mov      eax, dword ptr [esp + 0x28]
0049bac8: add      esp, 0xc
0049bacb: test     eax, eax
0049bacd: mov      dword ptr [esp + 0x48], 0xffffffff
0049bad5: pop      ebp
0049bad6: je       0x49baf0
0049bad8: mov      esi, dword ptr [eax + 0x14]
0049badb: mov      ecx, eax
0049badd: add      eax, 0x14
0049bae0: dec      esi
0049bae1: mov      edx, esi
0049bae3: test     edx, edx
0049bae5: mov      dword ptr [eax], esi
0049bae7: jne      0x49baf0
0049bae9: push     0
0049baeb: call     0x5abfc0
0049baf0: mov      ecx, dword ptr [esp + 0x3c]
0049baf4: pop      edi
0049baf5: pop      esi
0049baf6: pop      ebx
0049baf7: mov      dword ptr fs:[0], ecx
0049bafe: add      esp, 0x3c
0049bb01: ret      
0049bb02: nop      
0049bb03: nop      
0049bb04: nop      
0049bb05: nop      
0049bb06: nop      
0049bb07: nop      
0049bb08: nop      
0049bb09: nop      
0049bb0a: nop      
0049bb0b: nop      
0049bb0c: nop      
0049bb0d: nop      
0049bb0e: nop      
0049bb0f: nop      
0049bb10: mov      eax, dword ptr [esp + 0xc]
0049bb14: mov      edx, dword ptr [esp + 8]
0049bb18: push     esi
0049bb19: mov      esi, ecx
0049bb1b: mov      ecx, dword ptr [eax]
0049bb1d: mov      eax, dword ptr [edx]
0049bb1f: push     ecx
0049bb20: mov      ecx, dword ptr [esp + 0xc]
0049bb24: push     eax
0049bb25: mov      edx, dword ptr [ecx]
0049bb27: lea      ecx, [esi + 0x18c]
0049bb2d: push     edx
0049bb2e: call     0x5b2e20
0049bb33: push     1
0049bb35: mov      ecx, esi
0049bb37: call     0x49d5e0
0049bb3c: lea      eax, [esi + 0x168]
0049bb42: mov      ecx, esi
0049bb44: push     eax
0049bb45: mov      byte ptr [esi + 0x198], 1
0049bb4c: call     0x4247e0
0049bb51: mov      ecx, eax
0049bb53: xor      edx, edx
0049bb55: call     0x5b50a0
0049bb5a: push     0
0049bb5c: mov      ecx, esi
0049bb5e: call     0x4337a0
0049bb63: pop      esi
0049bb64: ret      0xc
0049bb67: nop      
0049bb68: nop      
0049bb69: nop      
0049bb6a: nop      
0049bb6b: nop      
0049bb6c: nop      
0049bb6d: nop      
0049bb6e: nop      
0049bb6f: nop      
