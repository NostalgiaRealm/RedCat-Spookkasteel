0056b510: push      -1
0056b512: push      0x64086f
0056b517: mov       eax, dword ptr fs:[0]
0056b51d: push      eax
0056b51e: mov       dword ptr fs:[0], esp
0056b525: sub       esp, 0x2c
0056b528: push      esi
0056b529: mov       esi, dword ptr [0x6b915c]
0056b52f: test      esi, esi
0056b531: push      edi
0056b532: mov       dword ptr [esp + 0x10], 0
0056b53a: jne       0x56b543
0056b53c: call      0x4bc480
0056b541: mov       esi, eax
0056b543: mov       eax, dword ptr [esi + 0x3a4]
0056b549: test      eax, eax
0056b54b: jne       0x56b5b4
0056b54d: mov       al, byte ptr [esp + 0x48]
0056b551: push      0
0056b553: lea       ecx, [esp + 0x28]
0056b557: mov       byte ptr [esp + 0x28], al
0056b55b: call      0x4040a0
0056b560: mov       edi, 0x6b3f70
0056b565: or        ecx, 0xffffffff
0056b568: xor       eax, eax
0056b56a: repne scasb al, byte ptr es:[edi]
0056b56c: not       ecx
0056b56e: dec       ecx
0056b56f: push      ecx
0056b570: push      0x6b3f70
0056b575: lea       ecx, [esp + 0x2c]
0056b579: call      0x4040f0
0056b57e: lea       ecx, [esp + 0x24]
0056b582: mov       dword ptr [esp + 0x3c], 1
0056b58a: push      ecx
0056b58b: push      0x130
0056b590: push      0x68e58c
0056b595: push      0x68e584
0056b59a: call      0x5a07f0
0056b59f: call      eax
0056b5a1: add       esp, 0x10
0056b5a4: lea       ecx, [esp + 0x24]
0056b5a8: mov       byte ptr [esp + 0x3c], 0
0056b5ad: push      1
0056b5af: call      0x4040a0
0056b5b4: mov       ecx, dword ptr [esi + 0x3a4]
0056b5ba: lea       edx, [esp + 8]
0056b5be: push      edx
0056b5bf: call      0x453d20
0056b5c4: mov       eax, dword ptr [esp + 8]
0056b5c8: mov       dword ptr [esp + 0x3c], 2
0056b5d0: test      eax, eax
0056b5d2: jne       0x56b638
0056b5d4: mov       al, byte ptr [esp + 0x48]
0056b5d8: push      0
0056b5da: lea       ecx, [esp + 0x18]
0056b5de: mov       byte ptr [esp + 0x18], al
0056b5e2: call      0x4040a0
0056b5e7: mov       edi, 0x6b3f70
0056b5ec: or        ecx, 0xffffffff
0056b5ef: xor       eax, eax
0056b5f1: repne scasb al, byte ptr es:[edi]
0056b5f3: not       ecx
0056b5f5: dec       ecx
0056b5f6: push      ecx
0056b5f7: push      0x6b3f70
0056b5fc: lea       ecx, [esp + 0x1c]
0056b600: call      0x4040f0
0056b605: lea       ecx, [esp + 0x14]
0056b609: mov       byte ptr [esp + 0x3c], 3
0056b60e: push      ecx
0056b60f: push      0xb6
0056b614: push      0x68d638
0056b619: push      0x68d62c
0056b61e: call      0x5a07f0
0056b623: call      eax
0056b625: add       esp, 0x10
0056b628: lea       ecx, [esp + 0x14]
0056b62c: mov       byte ptr [esp + 0x3c], 2
0056b631: push      1
0056b633: call      0x4040a0
0056b638: mov       edx, dword ptr [esp + 8]
0056b63c: push      ebx
0056b63d: push      ebp
0056b63e: push      0
0056b640: mov       eax, dword ptr [edx + 0x360]
0056b646: push      0x68d608
0056b64b: push      0x68d5e8
0056b650: push      0
0056b652: push      eax
0056b653: call      0x60a6f2
0056b658: mov       ebx, dword ptr [esp + 0x64]
0056b65c: add       esp, 0x14
0056b65f: mov       ebp, eax
0056b661: mov       esi, dword ptr [ebx + 4]
0056b664: mov       dword ptr [esp + 0x14], ebp
0056b668: test      esi, esi
0056b66a: je        0x56b691
0056b66c: mov       ecx, dword ptr [ebx + 8]
0056b66f: mov       eax, 0x2aaaaaab
0056b674: sub       ecx, esi
0056b676: imul      ecx
0056b678: sar       edx, 2
0056b67b: mov       eax, edx
0056b67d: shr       eax, 0x1f
0056b680: add       edx, eax
0056b682: cmp       edx, 1
0056b685: jne       0x56b691
0056b687: cmp       dword ptr [esi + 8], 2
0056b68b: je        0x56b71f
0056b691: mov       cl, byte ptr [esp + 0x50]
0056b695: push      0
0056b697: mov       byte ptr [esp + 0x20], cl
0056b69b: lea       ecx, [esp + 0x20]
0056b69f: call      0x4040a0
0056b6a4: mov       edi, 0x6b3f70
0056b6a9: or        ecx, 0xffffffff
0056b6ac: xor       eax, eax
0056b6ae: push      1
0056b6b0: repne scasb al, byte ptr es:[edi]
0056b6b2: not       ecx
0056b6b4: dec       ecx
0056b6b5: mov       ebp, ecx
0056b6b7: lea       ecx, [esp + 0x20]
0056b6bb: push      ebp
0056b6bc: call      0x401940
0056b6c1: test      al, al
0056b6c3: je        0x56b6e8
0056b6c5: mov       edi, dword ptr [esp + 0x20]
0056b6c9: mov       ecx, ebp
0056b6cb: mov       edx, ecx
0056b6cd: mov       esi, 0x6b3f70
0056b6d2: shr       ecx, 2
0056b6d5: rep movsd dword ptr es:[edi], dword ptr [esi]
0056b6d7: mov       ecx, edx
0056b6d9: push      ebp
0056b6da: and       ecx, 3
0056b6dd: rep movsb byte ptr es:[edi], byte ptr [esi]
0056b6df: lea       ecx, [esp + 0x20]
0056b6e3: call      0x404190
0056b6e8: lea       eax, [esp + 0x1c]
0056b6ec: mov       byte ptr [esp + 0x44], 4
0056b6f1: push      eax
0056b6f2: push      0x141
0056b6f7: push      0x6a4280
0056b6fc: push      0x6a4340
0056b701: call      0x5a07f0
0056b706: call      eax
0056b708: add       esp, 0x10
0056b70b: lea       ecx, [esp + 0x1c]
0056b70f: mov       byte ptr [esp + 0x44], 2
0056b714: push      1
0056b716: call      0x4040a0
0056b71b: mov       ebp, dword ptr [esp + 0x14]
0056b71f: test      ebp, ebp
0056b721: je        0x56b798
0056b723: mov       ebx, dword ptr [ebx + 4]
0056b726: cmp       dword ptr [ebx + 8], 2
0056b72a: je        0x56b78d
0056b72c: mov       cl, byte ptr [esp + 0x50]
0056b730: push      0
0056b732: mov       byte ptr [esp + 0x20], cl
0056b736: lea       ecx, [esp + 0x20]
0056b73a: call      0x4040a0
0056b73f: mov       edi, 0x6b3f70
0056b744: or        ecx, 0xffffffff
0056b747: xor       eax, eax
0056b749: repne scasb al, byte ptr es:[edi]
0056b74b: not       ecx
0056b74d: dec       ecx
0056b74e: push      ecx
0056b74f: push      0x6b3f70
0056b754: lea       ecx, [esp + 0x24]
0056b758: call      0x4040f0
0056b75d: lea       edx, [esp + 0x1c]
0056b761: mov       byte ptr [esp + 0x44], 5
0056b766: push      edx
0056b767: push      0x42
0056b769: push      0x692284
0056b76e: push      0x69e134
0056b773: call      0x5a07f0
0056b778: call      eax
0056b77a: add       esp, 0x10
0056b77d: lea       ecx, [esp + 0x1c]
0056b781: mov       byte ptr [esp + 0x44], 2
0056b786: push      1
0056b788: call      0x4040a0
0056b78d: mov       ebx, dword ptr [ebx + 0x10]
0056b790: mov       ecx, ebp
0056b792: push      ebx
0056b793: call      0x436f40
0056b798: mov       esi, dword ptr [esp + 0x4c]
0056b79c: mov       dword ptr [esp + 0x18], 1
0056b7a4: mov       dword ptr [esi], 0x64f00c
0056b7aa: mov       dword ptr [esi + 8], 0
0056b7b1: mov       eax, dword ptr [esp + 0x10]
0056b7b5: pop       ebp
0056b7b6: test      eax, eax
0056b7b8: mov       byte ptr [esp + 0x40], 0
0056b7bd: pop       ebx
0056b7be: je        0x56b7d8
0056b7c0: mov       edi, dword ptr [eax + 0x14]
0056b7c3: mov       ecx, eax
0056b7c5: add       eax, 0x14
0056b7c8: dec       edi
0056b7c9: mov       edx, edi
0056b7cb: test      edx, edx
0056b7cd: mov       dword ptr [eax], edi
0056b7cf: jne       0x56b7d8
0056b7d1: push      0
0056b7d3: call      0x5abfc0
0056b7d8: mov       ecx, dword ptr [esp + 0x34]
0056b7dc: mov       eax, esi
0056b7de: pop       edi
0056b7df: pop       esi
