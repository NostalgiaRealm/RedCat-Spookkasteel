0056a4a0: push      -1
0056a4a2: push      0x640677
0056a4a7: mov       eax, dword ptr fs:[0]
0056a4ad: push      eax
0056a4ae: mov       dword ptr fs:[0], esp
0056a4b5: sub       esp, 0x18
0056a4b8: push      ebx
0056a4b9: push      esi
0056a4ba: mov       esi, dword ptr [0x6b915c]
0056a4c0: xor       ebx, ebx
0056a4c2: cmp       esi, ebx
0056a4c4: push      edi
0056a4c5: mov       dword ptr [esp + 0x10], ebx
0056a4c9: jne       0x56a4d2
0056a4cb: call      0x4bc480
0056a4d0: mov       esi, eax
0056a4d2: cmp       dword ptr [esi + 0x3a4], ebx
0056a4d8: jne       0x56a53f
0056a4da: mov       al, byte ptr [esp + 0x34]
0056a4de: push      ebx
0056a4df: lea       ecx, [esp + 0x18]
0056a4e3: mov       byte ptr [esp + 0x18], al
0056a4e7: call      0x4040a0
0056a4ec: mov       edi, 0x6b3f70
0056a4f1: or        ecx, 0xffffffff
0056a4f4: xor       eax, eax
0056a4f6: repne scasb al, byte ptr es:[edi]
0056a4f8: not       ecx
0056a4fa: dec       ecx
0056a4fb: push      ecx
0056a4fc: push      0x6b3f70
0056a501: lea       ecx, [esp + 0x1c]
0056a505: call      0x4040f0
0056a50a: lea       ecx, [esp + 0x14]
0056a50e: mov       dword ptr [esp + 0x2c], 1
0056a516: push      ecx
0056a517: push      0x130
0056a51c: push      0x68e58c
0056a521: push      0x68e584
0056a526: call      0x5a07f0
0056a52b: call      eax
0056a52d: add       esp, 0x10
0056a530: lea       ecx, [esp + 0x14]
0056a534: mov       byte ptr [esp + 0x2c], bl
0056a538: push      1
0056a53a: call      0x4040a0
0056a53f: mov       ecx, dword ptr [esi + 0x3a4]
0056a545: lea       edx, [esp + 0xc]
0056a549: push      edx
0056a54a: call      0x453d20
0056a54f: mov       eax, dword ptr [esp + 0xc]
0056a553: mov       dword ptr [esp + 0x2c], 2
0056a55b: cmp       eax, ebx
0056a55d: je        0x56a592
0056a55f: mov       eax, dword ptr [eax + 0x360]
0056a565: push      ebx
0056a566: push      0x68d608
0056a56b: push      0x68d5e8
0056a570: push      ebx
0056a571: push      eax
0056a572: call      0x60a6f2
0056a577: add       esp, 0x14
0056a57a: cmp       eax, ebx
0056a57c: je        0x56a58e
0056a57e: mov       ecx, eax
0056a580: call      0x431170
0056a585: mov       edx, dword ptr [eax]
0056a587: push      1
0056a589: mov       ecx, eax
0056a58b: call      dword ptr [edx + 0x2c]
0056a58e: mov       eax, dword ptr [esp + 0xc]
0056a592: mov       esi, dword ptr [esp + 0x34]
0056a596: mov       dword ptr [esp + 0x10], 1
0056a59e: mov       dword ptr [esi], 0x64f00c
0056a5a4: mov       dword ptr [esi + 8], ebx
0056a5a7: cmp       eax, ebx
0056a5a9: mov       byte ptr [esp + 0x2c], bl
0056a5ad: je        0x56a5c6
0056a5af: mov       edi, dword ptr [eax + 0x14]
0056a5b2: mov       ecx, eax
0056a5b4: add       eax, 0x14
0056a5b7: dec       edi
0056a5b8: mov       edx, edi
0056a5ba: cmp       edx, ebx
0056a5bc: mov       dword ptr [eax], edi
0056a5be: jne       0x56a5c6
0056a5c0: push      ebx
0056a5c1: call      0x5abfc0
0056a5c6: mov       ecx, dword ptr [esp + 0x24]
0056a5ca: mov       eax, esi
0056a5cc: pop       edi
0056a5cd: pop       esi
0056a5ce: pop       ebx
0056a5cf: mov       dword ptr fs:[0], ecx
0056a5d6: add       esp, 0x24
0056a5d9: ret       
0056a5da: nop       
0056a5db: nop       
0056a5dc: nop       
0056a5dd: nop       
0056a5de: nop       
0056a5df: nop       
0056a5e0: push      -1
0056a5e2: push      0x6406b7
0056a5e7: mov       eax, dword ptr fs:[0]
0056a5ed: push      eax
0056a5ee: mov       dword ptr fs:[0], esp
0056a5f5: sub       esp, 0x18
0056a5f8: push      ebx
0056a5f9: push      esi
0056a5fa: mov       esi, dword ptr [0x6b915c]
0056a600: xor       ebx, ebx
0056a602: cmp       esi, ebx
0056a604: push      edi
0056a605: mov       dword ptr [esp + 0x10], ebx
0056a609: jne       0x56a612
0056a60b: call      0x4bc480
0056a610: mov       esi, eax
0056a612: cmp       dword ptr [esi + 0x3a4], ebx
0056a618: jne       0x56a67f
0056a61a: mov       al, byte ptr [esp + 0x34]
0056a61e: push      ebx
0056a61f: lea       ecx, [esp + 0x18]
0056a623: mov       byte ptr [esp + 0x18], al
0056a627: call      0x4040a0
0056a62c: mov       edi, 0x6b3f70
0056a631: or        ecx, 0xffffffff
0056a634: xor       eax, eax
0056a636: repne scasb al, byte ptr es:[edi]
0056a638: not       ecx
0056a63a: dec       ecx
0056a63b: push      ecx
0056a63c: push      0x6b3f70
0056a641: lea       ecx, [esp + 0x1c]
0056a645: call      0x4040f0
0056a64a: lea       ecx, [esp + 0x14]
0056a64e: mov       dword ptr [esp + 0x2c], 1
0056a656: push      ecx
0056a657: push      0x130
0056a65c: push      0x68e58c
0056a661: push      0x68e584
0056a666: call      0x5a07f0
0056a66b: call      eax
0056a66d: add       esp, 0x10
0056a670: lea       ecx, [esp + 0x14]
0056a674: mov       byte ptr [esp + 0x2c], bl
0056a678: push      1
0056a67a: call      0x4040a0
0056a67f: mov       ecx, dword ptr [esi + 0x3a4]
0056a685: lea       edx, [esp + 0xc]
0056a689: push      edx
0056a68a: call      0x453d20
0056a68f: mov       eax, dword ptr [esp + 0xc]
0056a693: mov       dword ptr [esp + 0x2c], 2
0056a69b: cmp       eax, ebx
0056a69d: je        0x56a6d0
0056a69f: mov       eax, dword ptr [eax + 0x360]
0056a6a5: push      ebx
0056a6a6: push      0x68d608
0056a6ab: push      0x68d5e8
0056a6b0: push      ebx
0056a6b1: push      eax
0056a6b2: call      0x60a6f2
0056a6b7: add       esp, 0x14
0056a6ba: cmp       eax, ebx
0056a6bc: je        0x56a6cc
0056a6be: mov       ecx, eax
0056a6c0: call      0x431170
0056a6c5: mov       edx, dword ptr [eax]
0056a6c7: mov       ecx, eax
0056a6c9: call      dword ptr [edx + 0x30]
0056a6cc: mov       eax, dword ptr [esp + 0xc]
0056a6d0: mov       esi, dword ptr [esp + 0x34]
0056a6d4: mov       dword ptr [esp + 0x10], 1
0056a6dc: mov       dword ptr [esi], 0x64f00c
0056a6e2: mov       dword ptr [esi + 8], ebx
0056a6e5: cmp       eax, ebx
0056a6e7: mov       byte ptr [esp + 0x2c], bl
0056a6eb: je        0x56a704
0056a6ed: mov       edi, dword ptr [eax + 0x14]
0056a6f0: mov       ecx, eax
0056a6f2: add       eax, 0x14
0056a6f5: dec       edi
0056a6f6: mov       edx, edi
0056a6f8: cmp       edx, ebx
0056a6fa: mov       dword ptr [eax], edi
0056a6fc: jne       0x56a704
0056a6fe: push      ebx
0056a6ff: call      0x5abfc0
0056a704: mov       ecx, dword ptr [esp + 0x24]
0056a708: mov       eax, esi
0056a70a: pop       edi
0056a70b: pop       esi
0056a70c: pop       ebx
0056a70d: mov       dword ptr fs:[0], ecx
0056a714: add       esp, 0x24
0056a717: ret       
0056a718: nop       
0056a719: nop       
0056a71a: nop       
0056a71b: nop       
0056a71c: nop       
0056a71d: nop       
0056a71e: nop       
0056a71f: nop       
0056a720: push      ebp
0056a721: mov       ebp, esp
0056a723: push      -1
0056a725: push      0x640710
0056a72a: mov       eax, dword ptr fs:[0]
0056a730: push      eax
0056a731: mov       dword ptr fs:[0], esp
0056a738: sub       esp, 0x60
0056a73b: push      ebx
0056a73c: push      esi
0056a73d: mov       esi, dword ptr [0x6b915c]
0056a743: push      edi
0056a744: xor       edi, edi
0056a746: mov       dword ptr [ebp - 0x10], esp
0056a749: cmp       esi, edi
0056a74b: mov       dword ptr [ebp - 0x2c], edi
0056a74e: mov       dword ptr [ebp - 4], edi
0056a751: jne       0x56a75a
0056a753: call      0x4bc480
0056a758: mov       esi, eax
0056a75a: cmp       dword ptr [esi + 0x3a4], edi
0056a760: jne       0x56a7a2
0056a762: lea       eax, [ebp - 0x11]
0056a765: lea       ecx, [ebp - 0x5c]
0056a768: push      eax
0056a769: push      0x6b3f70
0056a76e: call      0x409810
0056a773: mov       byte ptr [ebp - 4], 1
0056a777: call      0x5a07f0
0056a77c: lea       ecx, [ebp - 0x5c]
0056a77f: push      ecx
0056a780: push      0x130
0056a785: push      0x68e58c
0056a78a: push      0x68e584
0056a78f: call      eax
0056a791: add       esp, 0x10
0056a794: lea       ecx, [ebp - 0x5c]
0056a797: mov       byte ptr [ebp - 4], 0
0056a79b: push      1
0056a79d: call      0x4040a0
0056a7a2: mov       ecx, dword ptr [esi + 0x3a4]
0056a7a8: lea       edx, [ebp - 0x18]
0056a7ab: push      edx
0056a7ac: call      0x453d20
0056a7b1: mov       ebx, dword ptr [ebp + 0xc]
0056a7b4: mov       byte ptr [ebp - 4], 2
0056a7b8: mov       esi, dword ptr [ebx + 4]
0056a7bb: cmp       esi, edi
0056a7bd: je        0x56a7e5
0056a7bf: mov       ecx, dword ptr [ebx + 8]
0056a7c2: mov       eax, 0x2aaaaaab
0056a7c7: sub       ecx, esi
0056a7c9: imul      ecx
0056a7cb: sar       edx, 2
0056a7ce: mov       eax, edx
0056a7d0: shr       eax, 0x1f
0056a7d3: add       edx, eax
0056a7d5: cmp       edx, 2
0056a7d8: jne       0x56a7e5
0056a7da: cmp       dword ptr [esi + 8], 3
0056a7de: jne       0x56a7e5
0056a7e0: cmp       dword ptr [esi + 0x20], edx
0056a7e3: je        0x56a840
0056a7e5: mov       cl, byte ptr [ebp + 0xf]
0056a7e8: push      edi
0056a7e9: mov       byte ptr [ebp - 0x4c], cl
0056a7ec: lea       ecx, [ebp - 0x4c]
0056a7ef: call      0x4040a0
0056a7f4: mov       edi, 0x6b3f70
0056a7f9: or        ecx, 0xffffffff
0056a7fc: xor       eax, eax
0056a7fe: repne scasb al, byte ptr es:[edi]
0056a800: not       ecx
0056a802: dec       ecx
0056a803: push      ecx
0056a804: push      0x6b3f70
0056a809: lea       ecx, [ebp - 0x4c]
0056a80c: call      0x4040f0
0056a811: mov       byte ptr [ebp - 4], 3
0056a815: call      0x5a07f0
0056a81a: lea       edx, [ebp - 0x4c]
0056a81d: push      edx
0056a81e: push      0x97
0056a823: push      0x6a4280
0056a828: push      0x6a42d4
0056a82d: call      eax
0056a82f: add       esp, 0x10
0056a832: lea       ecx, [ebp - 0x4c]
0056a835: mov       byte ptr [ebp - 4], 2
0056a839: push      1
0056a83b: call      0x4040a0
0056a840: mov       eax, dword ptr [ebp - 0x18]
0056a843: test      eax, eax
0056a845: je        0x56aa44
0056a84b: mov       eax, dword ptr [eax + 0x360]
0056a851: push      0
0056a853: push      0x68d608
0056a858: push      0x68d5e8
0056a85d: push      0
0056a85f: push      eax
0056a860: call      0x60a6f2
0056a865: add       esp, 0x14
0056a868: mov       dword ptr [ebp - 0x24], eax
0056a86b: test      eax, eax
0056a86d: je        0x56aa41
0056a873: mov       ecx, dword ptr [ebx + 4]
0056a876: lea       eax, [ebp - 0x6c]
0056a879: push      eax
0056a87a: call      0x45da10
0056a87f: mov       esi, dword ptr [ebx + 4]
0056a882: mov       byte ptr [ebp - 4], 5
0056a886: cmp       dword ptr [esi + 0x20], 2
0056a88a: je        0x56a8c9
0056a88c: lea       ecx, [ebp + 0xf]
0056a88f: push      ecx
0056a890: push      0x6b3f70
0056a895: lea       ecx, [ebp - 0x4c]
0056a898: call      0x409810
0056a89d: mov       byte ptr [ebp - 4], 6
0056a8a1: call      0x5a07f0
0056a8a6: lea       edx, [ebp - 0x4c]
0056a8a9: push      edx
0056a8aa: push      0x42
0056a8ac: push      0x692284
0056a8b1: push      0x69e134
0056a8b6: call      eax
0056a8b8: add       esp, 0x10
0056a8bb: lea       ecx, [ebp - 0x4c]
0056a8be: mov       byte ptr [ebp - 4], 5
0056a8c2: push      1
0056a8c4: call      0x4040a0
0056a8c9: mov       eax, dword ptr [esi + 0x28]
0056a8cc: mov       dword ptr [ebp - 0x2c], eax
0056a8cf: mov       eax, dword ptr [ebp - 0x18]
0056a8d2: test      eax, eax
0056a8d4: jne       0x56a916
0056a8d6: lea       ecx, [ebp + 0xf]
0056a8d9: push      ecx
0056a8da: push      0x6b3f70
0056a8df: lea       ecx, [ebp - 0x4c]
0056a8e2: call      0x409810
0056a8e7: mov       byte ptr [ebp - 4], 7
0056a8eb: call      0x5a07f0
0056a8f0: lea       edx, [ebp - 0x4c]
0056a8f3: push      edx
0056a8f4: push      0xb6
0056a8f9: push      0x68d638
0056a8fe: push      0x68d62c
0056a903: call      eax
0056a905: add       esp, 0x10
0056a908: lea       ecx, [ebp - 0x4c]
0056a90b: mov       byte ptr [ebp - 4], 5
0056a90f: push      1
0056a911: call      0x4040a0
0056a916: mov       ecx, dword ptr [ebp - 0x18]
0056a919: push      0x6c8df0
0056a91e: call      0x4f3d30
0056a923: mov       dword ptr [ebp - 0x20], eax
0056a926: xor       esi, esi
0056a928: mov       eax, dword ptr [ebp - 0x20]
0056a92b: mov       dword ptr [ebp - 0x1c], esi
0056a92e: cmp       esi, eax
0056a930: jge       0x56aa33
0056a936: mov       eax, dword ptr [ebp - 0x18]
0056a939: test      eax, eax
0056a93b: jne       0x56a97d
0056a93d: lea       eax, [ebp + 0xf]
0056a940: lea       ecx, [ebp - 0x3c]
0056a943: push      eax
0056a944: push      0x6b3f70
0056a949: call      0x409810
0056a94e: mov       byte ptr [ebp - 4], 8
0056a952: call      0x5a07f0
0056a957: lea       ecx, [ebp - 0x3c]
0056a95a: push      ecx
0056a95b: push      0xb6
0056a960: push      0x68d638
0056a965: push      0x68d62c
0056a96a: call      eax
0056a96c: add       esp, 0x10
0056a96f: lea       ecx, [ebp - 0x3c]
0056a972: mov       byte ptr [ebp - 4], 5
0056a976: push      1
0056a978: call      0x4040a0
0056a97d: mov       ecx, dword ptr [ebp - 0x18]
0056a980: push      esi
0056a981: push      0x6c8df0
0056a986: call      0x4f3d50
0056a98b: test      eax, eax
0056a98d: mov       dword ptr [ebp - 0x28], eax
0056a990: je        0x56aa88
0056a996: mov       dl, byte ptr [ebp + 0xf]
0056a999: mov       esi, dword ptr [eax + 0xc]
0056a99c: push      0
0056a99e: lea       ecx, [ebp - 0x4c]
0056a9a1: mov       byte ptr [ebp - 0x4c], dl
0056a9a4: call      0x4040a0
0056a9a9: mov       edi, esi
0056a9ab: or        ecx, 0xffffffff
0056a9ae: xor       eax, eax
0056a9b0: repne scasb al, byte ptr es:[edi]
0056a9b2: not       ecx
0056a9b4: dec       ecx
0056a9b5: push      ecx
0056a9b6: push      esi
0056a9b7: lea       ecx, [ebp - 0x4c]
0056a9ba: call      0x4040f0
0056a9bf: lea       eax, [ebp - 0x6c]
0056a9c2: lea       ecx, [ebp - 0x4c]
0056a9c5: push      eax
0056a9c6: push      ecx
0056a9c7: mov       byte ptr [ebp - 4], 9
0056a9cb: call      0x5affe0
0056a9d0: add       esp, 8
0056a9d3: cmp       eax, 1
0056a9d6: lea       ecx, [ebp - 0x4c]
0056a9d9: mov       byte ptr [ebp - 4], 5
0056a9dd: push      1
0056a9df: sete      bl
0056a9e2: call      0x4040a0
0056a9e7: test      bl, bl
0056a9e9: je        0x56aa85
0056a9ef: mov       esi, dword ptr [ebp - 0x24]
0056a9f2: mov       ecx, esi
0056a9f4: call      0x431170
0056a9f9: mov       edx, dword ptr [eax]
0056a9fb: mov       ecx, eax
0056a9fd: call      dword ptr [edx + 0x30]
0056aa00: mov       eax, dword ptr [ebp - 0x28]
0056aa03: lea       ecx, [ebp - 0x48]
0056aa06: push      eax
0056aa07: push      ecx
0056aa08: call      0x4dbe60
0056aa0d: mov       edx, dword ptr [eax]
0056aa0f: add       esp, 8
0056aa12: fild      dword ptr [ebp - 0x2c]
0056aa15: mov       dword ptr [ebp - 0x38], edx
0056aa18: mov       ecx, dword ptr [eax + 4]
0056aa1b: mov       dword ptr [ebp - 0x34], ecx
0056aa1e: mov       edx, dword ptr [eax + 8]
0056aa21: push      ecx
0056aa22: lea       eax, [ebp - 0x38]
0056aa25: mov       ecx, esi
0056aa27: mov       dword ptr [ebp - 0x30], edx
0056aa2a: fstp      dword ptr [esp]
0056aa2d: push      eax
0056aa2e: call      0x4d60f0
0056aa33: push      1
0056aa35: lea       ecx, [ebp - 0x6c]
0056aa38: mov       byte ptr [ebp - 4], 2
0056aa3c: call      0x4040a0
0056aa41: mov       eax, dword ptr [ebp - 0x18]
0056aa44: test      eax, eax
0056aa46: mov       byte ptr [ebp - 4], 0
0056aa4a: je        0x56aa64
0056aa4c: mov       esi, dword ptr [eax + 0x14]
0056aa4f: mov       ecx, eax
0056aa51: add       eax, 0x14
0056aa54: dec       esi
0056aa55: mov       edx, esi
0056aa57: test      edx, edx
0056aa59: mov       dword ptr [eax], esi
0056aa5b: jne       0x56aa64
0056aa5d: push      0
0056aa5f: call      0x5abfc0
0056aa64: mov       eax, dword ptr [ebp + 8]
0056aa67: mov       ecx, dword ptr [ebp - 0xc]
0056aa6a: pop       edi
0056aa6b: pop       esi
0056aa6c: mov       dword ptr [eax], 0x64f00c
0056aa72: mov       dword ptr [eax + 8], 0
0056aa79: mov       dword ptr fs:[0], ecx
0056aa80: pop       ebx
0056aa81: mov       esp, ebp
0056aa83: pop       ebp
0056aa84: ret       
0056aa85: mov       esi, dword ptr [ebp - 0x1c]
0056aa88: inc       esi
0056aa89: jmp       0x56a928
0056aa8e: push      0x6a42ac
0056aa93: call      0x5afe30
0056aa98: add       esp, 4
0056aa9b: push      0
0056aa9d: push      0
0056aa9f: call      0x60b40f
0056aaa4: nop       
0056aaa5: nop       
0056aaa6: nop       
0056aaa7: nop       
0056aaa8: nop       
0056aaa9: nop       
0056aaaa: nop       
0056aaab: nop       
0056aaac: nop       
0056aaad: nop       
0056aaae: nop       
0056aaaf: nop       
