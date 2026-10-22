0040b520: push      0x40b530
0040b525: call      0x60a57b
0040b52a: pop       ecx
0040b52b: ret       
0040b52c: nop       
0040b52d: nop       
0040b52e: nop       
0040b52f: nop       
0040b530: mov       cl, byte ptr [0x6b4040]
0040b536: mov       al, 4
0040b538: test      al, cl
0040b53a: jne       0x40b54e
0040b53c: or        cl, al
0040b53e: mov       byte ptr [0x6b4040], cl
0040b544: mov       ecx, 0x6b3ff0
0040b549: jmp       0x429cc0
0040b54e: ret       
0040b54f: nop       
0040b550: call      0x40b560
0040b555: jmp       0x40b630
0040b55a: nop       
0040b55b: nop       
0040b55c: nop       
0040b55d: nop       
0040b55e: nop       
0040b55f: nop       
0040b560: sub       esp, 8
0040b563: push      ebx
0040b564: mov       al, byte ptr [esp + 7]
0040b568: push      ebp
0040b569: push      esi
0040b56a: push      edi
0040b56b: xor       esi, esi
0040b56d: sub       esp, 0x10
0040b570: mov       edi, 0x68e428
0040b575: mov       ebp, esp
0040b577: or        ecx, 0xffffffff
0040b57a: mov       dword ptr [esp + 0x24], esp
0040b57e: mov       byte ptr [ebp], al
0040b581: xor       eax, eax
0040b583: mov       dword ptr [ebp + 4], esi
0040b586: mov       dword ptr [ebp + 8], esi
0040b589: mov       dword ptr [ebp + 0xc], esi
0040b58c: repne scasb al, byte ptr es:[edi]
0040b58e: not       ecx
0040b590: dec       ecx
0040b591: mov       ebx, ecx
0040b593: cmp       ebx, -3
0040b596: jbe       0x40b59d
0040b598: call      0x5fe5fb
0040b59d: mov       ecx, dword ptr [ebp + 4]
0040b5a0: cmp       ecx, esi
0040b5a2: je        0x40b5c2
0040b5a4: mov       al, byte ptr [ecx - 1]
0040b5a7: test      al, al
0040b5a9: je        0x40b5c2
0040b5ab: cmp       al, 0xff
0040b5ad: je        0x40b5c2
0040b5af: cmp       ebx, esi
0040b5b1: jne       0x40b5e6
0040b5b3: dec       al
0040b5b5: push      esi
0040b5b6: mov       byte ptr [ecx - 1], al
0040b5b9: mov       ecx, ebp
0040b5bb: call      0x4040a0
0040b5c0: jmp       0x40b610
0040b5c2: cmp       ebx, esi
0040b5c4: jne       0x40b5d1
0040b5c6: push      1
0040b5c8: mov       ecx, ebp
0040b5ca: call      0x4040a0
0040b5cf: jmp       0x40b610
0040b5d1: mov       eax, dword ptr [ebp + 0xc]
0040b5d4: cmp       eax, 0x1f
0040b5d7: ja        0x40b5dd
0040b5d9: cmp       eax, ebx
0040b5db: jae       0x40b5ee
0040b5dd: push      1
0040b5df: mov       ecx, ebp
0040b5e1: call      0x4040a0
0040b5e6: push      ebx
0040b5e7: mov       ecx, ebp
0040b5e9: call      0x401a60
0040b5ee: mov       edi, dword ptr [ebp + 4]
0040b5f1: mov       ecx, ebx
0040b5f3: mov       edx, ecx
0040b5f5: mov       esi, 0x68e428
0040b5fa: shr       ecx, 2
0040b5fd: rep movsd dword ptr es:[edi], dword ptr [esi]
0040b5ff: mov       ecx, edx
0040b601: and       ecx, 3
0040b604: rep movsb byte ptr es:[edi], byte ptr [esi]
0040b606: mov       eax, dword ptr [ebp + 4]
0040b609: mov       dword ptr [ebp + 8], ebx
0040b60c: mov       byte ptr [eax + ebx], 0
0040b610: push      0x6b8df0
0040b615: mov       ecx, 0x6b3fc8
0040b61a: call      0x40c860
0040b61f: pop       edi
0040b620: pop       esi
0040b621: pop       ebp
0040b622: pop       ebx
0040b623: add       esp, 8
0040b626: ret       
0040b627: nop       
0040b628: nop       
0040b629: nop       
0040b62a: nop       
0040b62b: nop       
0040b62c: nop       
0040b62d: nop       
0040b62e: nop       
0040b62f: nop       
0040b630: push      0x40b640
0040b635: call      0x60a57b
0040b63a: pop       ecx
0040b63b: ret       
0040b63c: nop       
0040b63d: nop       
0040b63e: nop       
0040b63f: nop       
0040b640: mov       cl, byte ptr [0x6b4040]
0040b646: mov       al, 8
0040b648: test      al, cl
0040b64a: jne       0x40b65e
0040b64c: or        cl, al
0040b64e: mov       byte ptr [0x6b4040], cl
0040b654: mov       ecx, 0x6b3fc8
0040b659: jmp       0x429cc0
0040b65e: ret       
0040b65f: nop       
0040b660: call      0x40b670
0040b665: jmp       0x40b740
0040b66a: nop       
0040b66b: nop       
0040b66c: nop       
0040b66d: nop       
0040b66e: nop       
0040b66f: nop       
0040b670: sub       esp, 8
0040b673: push      ebx
0040b674: mov       al, byte ptr [esp + 7]
0040b678: push      ebp
0040b679: push      esi
0040b67a: push      edi
0040b67b: xor       esi, esi
0040b67d: sub       esp, 0x10
0040b680: mov       edi, 0x68e438
0040b685: mov       ebp, esp
0040b687: or        ecx, 0xffffffff
0040b68a: mov       dword ptr [esp + 0x24], esp
0040b68e: mov       byte ptr [ebp], al
0040b691: xor       eax, eax
0040b693: mov       dword ptr [ebp + 4], esi
0040b696: mov       dword ptr [ebp + 8], esi
0040b699: mov       dword ptr [ebp + 0xc], esi
0040b69c: repne scasb al, byte ptr es:[edi]
0040b69e: not       ecx
0040b6a0: dec       ecx
0040b6a1: mov       ebx, ecx
0040b6a3: cmp       ebx, -3
0040b6a6: jbe       0x40b6ad
0040b6a8: call      0x5fe5fb
0040b6ad: mov       ecx, dword ptr [ebp + 4]
0040b6b0: cmp       ecx, esi
0040b6b2: je        0x40b6d2
0040b6b4: mov       al, byte ptr [ecx - 1]
0040b6b7: test      al, al
0040b6b9: je        0x40b6d2
0040b6bb: cmp       al, 0xff
0040b6bd: je        0x40b6d2
0040b6bf: cmp       ebx, esi
0040b6c1: jne       0x40b6f6
0040b6c3: dec       al
0040b6c5: push      esi
0040b6c6: mov       byte ptr [ecx - 1], al
0040b6c9: mov       ecx, ebp
0040b6cb: call      0x4040a0
0040b6d0: jmp       0x40b720
0040b6d2: cmp       ebx, esi
0040b6d4: jne       0x40b6e1
0040b6d6: push      1
0040b6d8: mov       ecx, ebp
0040b6da: call      0x4040a0
0040b6df: jmp       0x40b720
0040b6e1: mov       eax, dword ptr [ebp + 0xc]
0040b6e4: cmp       eax, 0x1f
0040b6e7: ja        0x40b6ed
0040b6e9: cmp       eax, ebx
0040b6eb: jae       0x40b6fe
0040b6ed: push      1
0040b6ef: mov       ecx, ebp
0040b6f1: call      0x4040a0
0040b6f6: push      ebx
0040b6f7: mov       ecx, ebp
0040b6f9: call      0x401a60
0040b6fe: mov       edi, dword ptr [ebp + 4]
0040b701: mov       ecx, ebx
0040b703: mov       edx, ecx
0040b705: mov       esi, 0x68e438
0040b70a: shr       ecx, 2
0040b70d: rep movsd dword ptr es:[edi], dword ptr [esi]
0040b70f: mov       ecx, edx
0040b711: and       ecx, 3
0040b714: rep movsb byte ptr es:[edi], byte ptr [esi]
0040b716: mov       eax, dword ptr [ebp + 4]
0040b719: mov       dword ptr [ebp + 8], ebx
0040b71c: mov       byte ptr [eax + ebx], 0
0040b720: push      0x6b8df0
0040b725: mov       ecx, 0x6b3fa0
0040b72a: call      0x40c860
0040b72f: pop       edi
0040b730: pop       esi
0040b731: pop       ebp
0040b732: pop       ebx
0040b733: add       esp, 8
0040b736: ret       
0040b737: nop       
0040b738: nop       
0040b739: nop       
0040b73a: nop       
0040b73b: nop       
0040b73c: nop       
0040b73d: nop       
0040b73e: nop       
0040b73f: nop       
0040b740: push      0x40b750
0040b745: call      0x60a57b
0040b74a: pop       ecx
0040b74b: ret       
0040b74c: nop       
0040b74d: nop       
0040b74e: nop       
0040b74f: nop       
0040b750: mov       cl, byte ptr [0x6b4040]
0040b756: mov       al, 0x10
0040b758: test      al, cl
0040b75a: jne       0x40b76e
0040b75c: or        cl, al
0040b75e: mov       byte ptr [0x6b4040], cl
0040b764: mov       ecx, 0x6b3fa0
0040b769: jmp       0x429cc0
0040b76e: ret       
0040b76f: nop       
0040b770: call      0x40b780
0040b775: jmp       0x40b850
0040b77a: nop       
0040b77b: nop       
0040b77c: nop       
0040b77d: nop       
0040b77e: nop       
0040b77f: nop       
0040b780: sub       esp, 8
0040b783: push      ebx
0040b784: mov       al, byte ptr [esp + 7]
0040b788: push      ebp
0040b789: push      esi
0040b78a: push      edi
0040b78b: xor       esi, esi
0040b78d: sub       esp, 0x10
0040b790: mov       edi, 0x68e448
0040b795: mov       ebp, esp
0040b797: or        ecx, 0xffffffff
0040b79a: mov       dword ptr [esp + 0x24], esp
0040b79e: mov       byte ptr [ebp], al
0040b7a1: xor       eax, eax
0040b7a3: mov       dword ptr [ebp + 4], esi
0040b7a6: mov       dword ptr [ebp + 8], esi
0040b7a9: mov       dword ptr [ebp + 0xc], esi
0040b7ac: repne scasb al, byte ptr es:[edi]
0040b7ae: not       ecx
0040b7b0: dec       ecx
0040b7b1: mov       ebx, ecx
0040b7b3: cmp       ebx, -3
0040b7b6: jbe       0x40b7bd
0040b7b8: call      0x5fe5fb
0040b7bd: mov       ecx, dword ptr [ebp + 4]
0040b7c0: cmp       ecx, esi
0040b7c2: je        0x40b7e2
0040b7c4: mov       al, byte ptr [ecx - 1]
0040b7c7: test      al, al
0040b7c9: je        0x40b7e2
0040b7cb: cmp       al, 0xff
0040b7cd: je        0x40b7e2
0040b7cf: cmp       ebx, esi
0040b7d1: jne       0x40b806
0040b7d3: dec       al
0040b7d5: push      esi
0040b7d6: mov       byte ptr [ecx - 1], al
0040b7d9: mov       ecx, ebp
0040b7db: call      0x4040a0
0040b7e0: jmp       0x40b830
0040b7e2: cmp       ebx, esi
0040b7e4: jne       0x40b7f1
0040b7e6: push      1
0040b7e8: mov       ecx, ebp
0040b7ea: call      0x4040a0
0040b7ef: jmp       0x40b830
0040b7f1: mov       eax, dword ptr [ebp + 0xc]
0040b7f4: cmp       eax, 0x1f
0040b7f7: ja        0x40b7fd
0040b7f9: cmp       eax, ebx
0040b7fb: jae       0x40b80e
0040b7fd: push      1
0040b7ff: mov       ecx, ebp
0040b801: call      0x4040a0
0040b806: push      ebx
0040b807: mov       ecx, ebp
0040b809: call      0x401a60
0040b80e: mov       edi, dword ptr [ebp + 4]
0040b811: mov       ecx, ebx
0040b813: mov       edx, ecx
0040b815: mov       esi, 0x68e448
0040b81a: shr       ecx, 2
0040b81d: rep movsd dword ptr es:[edi], dword ptr [esi]
0040b81f: mov       ecx, edx
0040b821: and       ecx, 3
0040b824: rep movsb byte ptr es:[edi], byte ptr [esi]
0040b826: mov       eax, dword ptr [ebp + 4]
0040b829: mov       dword ptr [ebp + 8], ebx
0040b82c: mov       byte ptr [eax + ebx], 0
0040b830: push      0x6b8df0
0040b835: mov       ecx, 0x6b3f78
0040b83a: call      0x40c860
0040b83f: pop       edi
0040b840: pop       esi
0040b841: pop       ebp
0040b842: pop       ebx
0040b843: add       esp, 8
0040b846: ret       
0040b847: nop       
0040b848: nop       
0040b849: nop       
0040b84a: nop       
0040b84b: nop       
0040b84c: nop       
0040b84d: nop       
0040b84e: nop       
0040b84f: nop       
0040b850: push      0x40b860
0040b855: call      0x60a57b
0040b85a: pop       ecx
0040b85b: ret       
0040b85c: nop       
0040b85d: nop       
0040b85e: nop       
0040b85f: nop       
0040b860: mov       cl, byte ptr [0x6b4040]
0040b866: mov       al, 0x20
0040b868: test      al, cl
0040b86a: jne       0x40b87e
0040b86c: or        cl, al
0040b86e: mov       byte ptr [0x6b4040], cl
0040b874: mov       ecx, 0x6b3f78
0040b879: jmp       0x429cc0
0040b87e: ret       
0040b87f: nop       
0040b880: push      -1
0040b882: push      0x6209c1
0040b887: mov       eax, dword ptr fs:[0]
0040b88d: push      eax
0040b88e: mov       dword ptr fs:[0], esp
0040b895: sub       esp, 0x48
0040b898: mov       al, byte ptr [esp + 0x5c]
0040b89c: push      ebx
0040b89d: push      ebp
0040b89e: push      esi
0040b89f: mov       esi, dword ptr [0x64aab4]
0040b8a5: mov       ebx, ecx
0040b8a7: push      edi
0040b8a8: push      0
0040b8aa: lea       ecx, [esp + 0x1c]
0040b8ae: mov       dword ptr [esp + 0x18], ebx
0040b8b2: mov       dword ptr [esp + 0x14], 0
0040b8ba: mov       byte ptr [esp + 0x1c], al
0040b8be: call      0x4040a0
0040b8c3: mov       edi, esi
0040b8c5: or        ecx, 0xffffffff
0040b8c8: xor       eax, eax
0040b8ca: push      1
0040b8cc: repne scasb al, byte ptr es:[edi]
0040b8ce: not       ecx
0040b8d0: dec       ecx
0040b8d1: mov       ebp, ecx
0040b8d3: lea       ecx, [esp + 0x1c]
0040b8d7: push      ebp
0040b8d8: call      0x401940
0040b8dd: test      al, al
0040b8df: je        0x40b901
0040b8e1: mov       edi, dword ptr [esp + 0x1c]
0040b8e5: mov       ecx, ebp
0040b8e7: mov       edx, ecx
0040b8e9: shr       ecx, 2
0040b8ec: rep movsd dword ptr es:[edi], dword ptr [esi]
0040b8ee: mov       ecx, edx
0040b8f0: and       ecx, 3
0040b8f3: rep movsb byte ptr es:[edi], byte ptr [esi]
0040b8f5: mov       eax, dword ptr [esp + 0x1c]
0040b8f9: mov       dword ptr [esp + 0x20], ebp
0040b8fd: mov       byte ptr [eax + ebp], 0
0040b901: mov       cl, byte ptr [esp + 0x6c]
0040b905: mov       esi, dword ptr [0x64aab0]
0040b90b: mov       byte ptr [esp + 0x28], cl
0040b90f: push      0
0040b911: lea       ecx, [esp + 0x2c]
0040b915: mov       dword ptr [esp + 0x64], 0
0040b91d: call      0x4040a0
0040b922: mov       edi, esi
0040b924: or        ecx, 0xffffffff
0040b927: xor       eax, eax
0040b929: push      1
0040b92b: repne scasb al, byte ptr es:[edi]
0040b92d: not       ecx
0040b92f: dec       ecx
0040b930: mov       ebp, ecx
0040b932: lea       ecx, [esp + 0x2c]
0040b936: push      ebp
0040b937: call      0x401940
0040b93c: test      al, al
0040b93e: je        0x40b95e
0040b940: mov       edi, dword ptr [esp + 0x2c]
0040b944: mov       ecx, ebp
0040b946: mov       edx, ecx
0040b948: push      ebp
0040b949: shr       ecx, 2
0040b94c: rep movsd dword ptr es:[edi], dword ptr [esi]
0040b94e: mov       ecx, edx
0040b950: and       ecx, 3
0040b953: rep movsb byte ptr es:[edi], byte ptr [esi]
0040b955: lea       ecx, [esp + 0x2c]
0040b959: call      0x404190
0040b95e: mov       ecx, dword ptr [esp + 0x6c]
0040b962: lea       eax, [esp + 0x18]
0040b966: push      eax
0040b967: mov       eax, dword ptr [esp + 0x6c]
0040b96b: lea       edx, [esp + 0x2c]
0040b96f: push      ecx
0040b970: push      edx
0040b971: push      eax
0040b972: mov       ecx, ebx
0040b974: mov       byte ptr [esp + 0x70], 1
0040b979: call      0x42b270
0040b97e: push      1
0040b980: lea       ecx, [esp + 0x2c]
0040b984: mov       byte ptr [esp + 0x64], 4
0040b989: call      0x4040a0
0040b98e: push      1
0040b990: lea       ecx, [esp + 0x1c]
0040b994: mov       byte ptr [esp + 0x64], 3
0040b999: call      0x4040a0
0040b99e: push      0x15e0
0040b9a3: mov       byte ptr [ebx + 0x230], 0
0040b9aa: mov       dword ptr [ebx + 0x234], 0
0040b9b4: mov       dword ptr [ebx], 0x64aac4
0040b9ba: call      0x60a0b5
0040b9bf: mov       esi, eax
0040b9c1: add       esp, 4
0040b9c4: mov       dword ptr [esp + 0x6c], esi
0040b9c8: xor       edi, edi
0040b9ca: mov       byte ptr [esp + 0x60], 5
0040b9cf: cmp       esi, edi
0040b9d1: je        0x40ba1b
0040b9d3: lea       ecx, [ebx + 0x6c]
0040b9d6: push      0x68e4d4
0040b9db: lea       edx, [esp + 0x4c]
0040b9df: push      ecx
0040b9e0: push      edx
0040b9e1: call      0x40cad0
0040b9e6: mov       dword ptr [esp + 0x1c], 1
0040b9ee: push      eax
0040b9ef: lea       eax, [esp + 0x48]
0040b9f3: push      eax
0040b9f4: mov       byte ptr [esp + 0x74], 6
0040b9f9: call      0x5033a0
0040b9fe: add       esp, 0x14
0040ba01: mov       dword ptr [esp + 0x10], 3
0040ba09: push      eax
0040ba0a: mov       ecx, esi
0040ba0c: mov       dword ptr [esp + 0x64], 7
0040ba14: call      0x45dca0
0040ba19: jmp       0x40ba1d
0040ba1b: xor       eax, eax
0040ba1d: mov       dword ptr [ebx + 0x234], eax
0040ba23: mov       al, byte ptr [esp + 0x10]
0040ba27: test      al, 2
0040ba29: je        0x40ba67
0040ba2b: mov       edx, dword ptr [esp + 0x10]
0040ba2f: mov       eax, dword ptr [esp + 0x3c]
0040ba33: and       edx, 0xfffffffd
0040ba36: cmp       eax, edi
0040ba38: mov       dword ptr [esp + 0x10], edx
0040ba3c: je        0x40ba5b
0040ba3e: lea       ecx, [eax - 1]
0040ba41: mov       al, byte ptr [eax - 1]
0040ba44: test      al, al
0040ba46: je        0x40ba52
0040ba48: cmp       al, 0xff
0040ba4a: je        0x40ba52
0040ba4c: dec       al
0040ba4e: mov       byte ptr [ecx], al
0040ba50: jmp       0x40ba5b
0040ba52: push      ecx
0040ba53: call      0x5fe5f0
0040ba58: add       esp, 4
0040ba5b: mov       dword ptr [esp + 0x3c], edi
0040ba5f: mov       dword ptr [esp + 0x40], edi
0040ba63: mov       dword ptr [esp + 0x44], edi
0040ba67: test      byte ptr [esp + 0x10], 1
0040ba6c: je        0x40ba93
0040ba6e: mov       eax, dword ptr [esp + 0x4c]
0040ba72: cmp       eax, edi
0040ba74: je        0x40ba93
0040ba76: lea       ecx, [eax - 1]
0040ba79: mov       al, byte ptr [eax - 1]
0040ba7c: test      al, al
0040ba7e: je        0x40ba8a
0040ba80: cmp       al, 0xff
0040ba82: je        0x40ba8a
0040ba84: dec       al
0040ba86: mov       byte ptr [ecx], al
0040ba88: jmp       0x40ba93
0040ba8a: push      ecx
0040ba8b: call      0x5fe5f0
0040ba90: add       esp, 4
0040ba93: mov       ecx, dword ptr [esp + 0x58]
0040ba97: pop       edi
0040ba98: pop       esi
0040ba99: mov       eax, ebx
0040ba9b: pop       ebp
0040ba9c: pop       ebx
0040ba9d: mov       dword ptr fs:[0], ecx
0040baa4: add       esp, 0x54
0040baa7: ret       8
0040baaa: nop       
0040baab: nop       
0040baac: nop       
0040baad: nop       
0040baae: nop       
0040baaf: nop       
0040bab0: push      esi
0040bab1: mov       esi, ecx
0040bab3: call      0x40bbe0
0040bab8: test      byte ptr [esp + 8], 1
0040babd: je        0x40bac8
0040babf: push      esi
0040bac0: call      0x5fe5f0
0040bac5: add       esp, 4
0040bac8: mov       eax, esi
0040baca: pop       esi
0040bacb: ret       4
0040bace: nop       
0040bacf: nop       
0040bad0: push      -1
0040bad2: push      0x6209ee
0040bad7: mov       eax, dword ptr fs:[0]
0040badd: push      eax
0040bade: mov       dword ptr fs:[0], esp
0040bae5: push      ecx
0040bae6: push      ebx
0040bae7: push      esi
0040bae8: push      edi
0040bae9: mov       edi, ecx
0040baeb: mov       dword ptr [esp + 0xc], edi
0040baef: mov       eax, dword ptr [edi + 0x208]
0040baf5: lea       esi, [edi + 0x1f0]
0040bafb: xor       ebx, ebx
0040bafd: cmp       eax, ebx
0040baff: mov       dword ptr [esp + 0x18], ebx
0040bb03: je        0x40bb22
0040bb05: lea       ecx, [eax - 1]
0040bb08: mov       al, byte ptr [eax - 1]
0040bb0b: cmp       al, bl
0040bb0d: je        0x40bb19
0040bb0f: cmp       al, 0xff
0040bb11: je        0x40bb19
0040bb13: dec       al
0040bb15: mov       byte ptr [ecx], al
0040bb17: jmp       0x40bb22
0040bb19: push      ecx
0040bb1a: call      0x5fe5f0
0040bb1f: add       esp, 4
0040bb22: mov       ecx, esi
0040bb24: mov       dword ptr [esi + 0x18], ebx
0040bb27: mov       dword ptr [esi + 0x1c], ebx
0040bb2a: mov       dword ptr [esi + 0x20], ebx
0040bb2d: call      0x5ab4d0
0040bb32: mov       eax, dword ptr [edi + 0x1d8]
0040bb38: lea       esi, [edi + 0x1c0]
0040bb3e: cmp       eax, ebx
0040bb40: mov       dword ptr [esp + 0x18], 2
0040bb48: je        0x40bb67
0040bb4a: lea       ecx, [eax - 1]
0040bb4d: mov       al, byte ptr [eax - 1]
0040bb50: cmp       al, bl
0040bb52: je        0x40bb5e
0040bb54: cmp       al, 0xff
0040bb56: je        0x40bb5e
0040bb58: dec       al
0040bb5a: mov       byte ptr [ecx], al
0040bb5c: jmp       0x40bb67
0040bb5e: push      ecx
0040bb5f: call      0x5fe5f0
0040bb64: add       esp, 4
0040bb67: mov       ecx, esi
0040bb69: mov       dword ptr [esi + 0x18], ebx
0040bb6c: mov       dword ptr [esi + 0x1c], ebx
0040bb6f: mov       dword ptr [esi + 0x20], ebx
0040bb72: call      0x5ab4d0
0040bb77: mov       eax, dword ptr [edi + 0x19c]
0040bb7d: lea       esi, [edi + 0x184]
0040bb83: cmp       eax, ebx
0040bb85: mov       byte ptr [esp + 0x18], 1
0040bb8a: je        0x40bba9
0040bb8c: lea       ecx, [eax - 1]
0040bb8f: mov       al, byte ptr [eax - 1]
0040bb92: cmp       al, bl
0040bb94: je        0x40bba0
0040bb96: cmp       al, 0xff
0040bb98: je        0x40bba0
0040bb9a: dec       al
0040bb9c: mov       byte ptr [ecx], al
0040bb9e: jmp       0x40bba9
0040bba0: push      ecx
0040bba1: call      0x5fe5f0
0040bba6: add       esp, 4
0040bba9: mov       ecx, esi
0040bbab: mov       dword ptr [esi + 0x18], ebx
0040bbae: mov       dword ptr [esi + 0x1c], ebx
0040bbb1: mov       dword ptr [esi + 0x20], ebx
0040bbb4: call      0x5ab4d0
0040bbb9: mov       ecx, edi
0040bbbb: mov       dword ptr [esp + 0x18], 0xffffffff
0040bbc3: call      0x4228d0
0040bbc8: mov       ecx, dword ptr [esp + 0x10]
0040bbcc: pop       edi
0040bbcd: pop       esi
0040bbce: pop       ebx
0040bbcf: mov       dword ptr fs:[0], ecx
0040bbd6: add       esp, 0x10
0040bbd9: ret       
0040bbda: nop       
0040bbdb: nop       
0040bbdc: nop       
0040bbdd: nop       
0040bbde: nop       
0040bbdf: nop       
0040bbe0: push      -1
0040bbe2: push      0x620a1e
0040bbe7: mov       eax, dword ptr fs:[0]
0040bbed: push      eax
0040bbee: mov       dword ptr fs:[0], esp
0040bbf5: push      ecx
0040bbf6: push      ebx
0040bbf7: push      esi
0040bbf8: push      edi
0040bbf9: mov       edi, ecx
0040bbfb: mov       dword ptr [esp + 0xc], edi
0040bbff: mov       eax, dword ptr [edi + 0x208]
0040bc05: lea       esi, [edi + 0x1f0]
0040bc0b: xor       ebx, ebx
0040bc0d: cmp       eax, ebx
0040bc0f: mov       dword ptr [esp + 0x18], ebx
0040bc13: je        0x40bc32
0040bc15: lea       ecx, [eax - 1]
0040bc18: mov       al, byte ptr [eax - 1]
0040bc1b: cmp       al, bl
0040bc1d: je        0x40bc29
0040bc1f: cmp       al, 0xff
0040bc21: je        0x40bc29
0040bc23: dec       al
0040bc25: mov       byte ptr [ecx], al
0040bc27: jmp       0x40bc32
0040bc29: push      ecx
0040bc2a: call      0x5fe5f0
0040bc2f: add       esp, 4
0040bc32: mov       ecx, esi
0040bc34: mov       dword ptr [esi + 0x18], ebx
0040bc37: mov       dword ptr [esi + 0x1c], ebx
0040bc3a: mov       dword ptr [esi + 0x20], ebx
0040bc3d: call      0x5ab4d0
0040bc42: mov       eax, dword ptr [edi + 0x1d8]
0040bc48: lea       esi, [edi + 0x1c0]
0040bc4e: cmp       eax, ebx
0040bc50: mov       dword ptr [esp + 0x18], 2
0040bc58: je        0x40bc77
0040bc5a: lea       ecx, [eax - 1]
0040bc5d: mov       al, byte ptr [eax - 1]
0040bc60: cmp       al, bl
0040bc62: je        0x40bc6e
0040bc64: cmp       al, 0xff
0040bc66: je        0x40bc6e
0040bc68: dec       al
0040bc6a: mov       byte ptr [ecx], al
0040bc6c: jmp       0x40bc77
0040bc6e: push      ecx
0040bc6f: call      0x5fe5f0
0040bc74: add       esp, 4
0040bc77: mov       ecx, esi
0040bc79: mov       dword ptr [esi + 0x18], ebx
0040bc7c: mov       dword ptr [esi + 0x1c], ebx
0040bc7f: mov       dword ptr [esi + 0x20], ebx
0040bc82: call      0x5ab4d0
0040bc87: mov       eax, dword ptr [edi + 0x19c]
0040bc8d: lea       esi, [edi + 0x184]
0040bc93: cmp       eax, ebx
0040bc95: mov       byte ptr [esp + 0x18], 1
0040bc9a: je        0x40bcb9
0040bc9c: lea       ecx, [eax - 1]
0040bc9f: mov       al, byte ptr [eax - 1]
0040bca2: cmp       al, bl
0040bca4: je        0x40bcb0
0040bca6: cmp       al, 0xff
0040bca8: je        0x40bcb0
0040bcaa: dec       al
0040bcac: mov       byte ptr [ecx], al
0040bcae: jmp       0x40bcb9
0040bcb0: push      ecx
0040bcb1: call      0x5fe5f0
0040bcb6: add       esp, 4
0040bcb9: mov       ecx, esi
0040bcbb: mov       dword ptr [esi + 0x18], ebx
0040bcbe: mov       dword ptr [esi + 0x1c], ebx
0040bcc1: mov       dword ptr [esi + 0x20], ebx
0040bcc4: call      0x5ab4d0
0040bcc9: mov       ecx, edi
0040bccb: mov       dword ptr [esp + 0x18], 0xffffffff
0040bcd3: call      0x4228d0
0040bcd8: mov       ecx, dword ptr [esp + 0x10]
0040bcdc: pop       edi
0040bcdd: pop       esi
0040bcde: pop       ebx
0040bcdf: mov       dword ptr fs:[0], ecx
0040bce6: add       esp, 0x10
0040bce9: ret       
0040bcea: nop       
0040bceb: nop       
0040bcec: nop       
0040bced: nop       
0040bcee: nop       
0040bcef: nop       
0040bcf0: push      -1
0040bcf2: push      0x620a46
0040bcf7: mov       eax, dword ptr fs:[0]
0040bcfd: push      eax
0040bcfe: mov       dword ptr fs:[0], esp
0040bd05: push      ecx
0040bd06: push      ebx
0040bd07: push      esi
0040bd08: push      edi
0040bd09: mov       edi, ecx
0040bd0b: mov       dword ptr [esp + 0xc], edi
0040bd0f: mov       eax, dword ptr [edi + 0x1d8]
0040bd15: lea       esi, [edi + 0x1c0]
0040bd1b: xor       ebx, ebx
0040bd1d: mov       dword ptr [esp + 0x18], 1
0040bd25: cmp       eax, ebx
0040bd27: je        0x40bd46
0040bd29: lea       ecx, [eax - 1]
0040bd2c: mov       al, byte ptr [eax - 1]
0040bd2f: cmp       al, bl
0040bd31: je        0x40bd3d
0040bd33: cmp       al, 0xff
0040bd35: je        0x40bd3d
0040bd37: dec       al
0040bd39: mov       byte ptr [ecx], al
0040bd3b: jmp       0x40bd46
0040bd3d: push      ecx
0040bd3e: call      0x5fe5f0
0040bd43: add       esp, 4
0040bd46: mov       ecx, esi
0040bd48: mov       dword ptr [esi + 0x18], ebx
0040bd4b: mov       dword ptr [esi + 0x1c], ebx
0040bd4e: mov       dword ptr [esi + 0x20], ebx
0040bd51: call      0x5ab4d0
0040bd56: mov       eax, dword ptr [edi + 0x19c]
0040bd5c: lea       esi, [edi + 0x184]
0040bd62: cmp       eax, ebx
0040bd64: mov       byte ptr [esp + 0x18], bl
0040bd68: je        0x40bd87
0040bd6a: lea       ecx, [eax - 1]
0040bd6d: mov       al, byte ptr [eax - 1]
0040bd70: cmp       al, bl
0040bd72: je        0x40bd7e
0040bd74: cmp       al, 0xff
0040bd76: je        0x40bd7e
0040bd78: dec       al
0040bd7a: mov       byte ptr [ecx], al
0040bd7c: jmp       0x40bd87
0040bd7e: push      ecx
0040bd7f: call      0x5fe5f0
0040bd84: add       esp, 4
0040bd87: mov       ecx, esi
0040bd89: mov       dword ptr [esi + 0x18], ebx
0040bd8c: mov       dword ptr [esi + 0x1c], ebx
0040bd8f: mov       dword ptr [esi + 0x20], ebx
0040bd92: call      0x5ab4d0
0040bd97: mov       ecx, edi
0040bd99: mov       dword ptr [esp + 0x18], 0xffffffff
0040bda1: call      0x4228d0
0040bda6: mov       ecx, dword ptr [esp + 0x10]
0040bdaa: pop       edi
0040bdab: pop       esi
0040bdac: pop       ebx
0040bdad: mov       dword ptr fs:[0], ecx
0040bdb4: add       esp, 0x10
0040bdb7: ret       
0040bdb8: nop       
0040bdb9: nop       
0040bdba: nop       
0040bdbb: nop       
0040bdbc: nop       
0040bdbd: nop       
0040bdbe: nop       
0040bdbf: nop       
0040bdc0: push      -1
0040bdc2: push      0x620a5b
0040bdc7: mov       eax, dword ptr fs:[0]
0040bdcd: push      eax
0040bdce: mov       dword ptr fs:[0], esp
0040bdd5: push      ecx
0040bdd6: push      esi
0040bdd7: mov       esi, ecx
0040bdd9: push      0x34
0040bddb: call      0x60a0b5
0040bde0: add       esp, 4
0040bde3: mov       dword ptr [esp + 4], eax
0040bde7: test      eax, eax
0040bde9: mov       dword ptr [esp + 0x10], 0
0040bdf1: je        0x40bdfd
0040bdf3: push      esi
0040bdf4: mov       ecx, eax
0040bdf6: call      0x405230
0040bdfb: jmp       0x40bdff
0040bdfd: xor       eax, eax
0040bdff: push      eax
0040be00: mov       ecx, esi
0040be02: mov       dword ptr [esp + 0x14], 0xffffffff
0040be0a: call      0x423710
0040be0f: mov       ecx, dword ptr [esp + 8]
0040be13: pop       esi
0040be14: mov       dword ptr fs:[0], ecx
0040be1b: add       esp, 0x10
0040be1e: ret       
0040be1f: nop       
0040be20: push      -1
0040be22: push      0x620a88
0040be27: mov       eax, dword ptr fs:[0]
0040be2d: push      eax
0040be2e: mov       dword ptr fs:[0], esp
0040be35: sub       esp, 0x18
0040be38: push      ebx
0040be39: push      ebp
0040be3a: push      esi
0040be3b: mov       esi, ecx
0040be3d: push      edi
0040be3e: mov       dword ptr [esp + 0x10], esi
0040be42: mov       ebx, dword ptr [esp + 0x38]
0040be46: push      ecx
0040be47: xor       ebp, ebp
0040be49: mov       eax, esp
0040be4b: cmp       ebx, ebp
0040be4d: mov       dword ptr [esp + 0x34], ebp
0040be51: mov       dword ptr [esp + 0x18], esp
0040be55: mov       dword ptr [eax], ebx
0040be57: je        0x40be5c
0040be59: inc       dword ptr [ebx + 0x14]
0040be5c: mov       ecx, esi
0040be5e: call      0x42aa20
0040be63: cmp       dword ptr [esi + 0x234], ebp
0040be69: jne       0x40bee5
0040be6b: mov       al, byte ptr [esp + 0x38]
0040be6f: mov       edi, 0x6b3f70
0040be74: mov       byte ptr [esp + 0x18], al
0040be78: or        ecx, 0xffffffff
0040be7b: xor       eax, eax
0040be7d: mov       dword ptr [esp + 0x1c], ebp
0040be81: repne scasb al, byte ptr es:[edi]
0040be83: not       ecx
0040be85: dec       ecx
0040be86: mov       dword ptr [esp + 0x20], ebp
0040be8a: push      ecx
0040be8b: push      0x6b3f70
0040be90: lea       ecx, [esp + 0x20]
0040be94: mov       dword ptr [esp + 0x2c], ebp
0040be98: call      0x4040f0
0040be9d: lea       ecx, [esp + 0x18]
0040bea1: mov       byte ptr [esp + 0x30], 1
0040bea6: push      ecx
0040bea7: push      0x32
0040bea9: push      0x68e4e8
0040beae: push      0x68e4dc
0040beb3: call      0x5a07f0
0040beb8: call      eax
0040beba: mov       ecx, dword ptr [esp + 0x2c]
0040bebe: add       esp, 0x10
0040bec1: cmp       ecx, ebp
0040bec3: mov       byte ptr [esp + 0x30], 0
0040bec8: je        0x40bee5
0040beca: mov       al, byte ptr [ecx - 1]
0040becd: dec       ecx
0040bece: test      al, al
0040bed0: je        0x40bedc
0040bed2: cmp       al, 0xff
0040bed4: je        0x40bedc
0040bed6: dec       al
0040bed8: mov       byte ptr [ecx], al
0040beda: jmp       0x40bee5
0040bedc: push      ecx
0040bedd: call      0x5fe5f0
0040bee2: add       esp, 4
0040bee5: cmp       ebx, ebp
0040bee7: jne       0x40bf7c
0040beed: mov       dl, byte ptr [esp + 0x38]
0040bef1: push      ebp
0040bef2: lea       ecx, [esp + 0x1c]
0040bef6: mov       byte ptr [esp + 0x1c], dl
0040befa: call      0x4040a0
0040beff: mov       edi, 0x6b3f70
0040bf04: or        ecx, 0xffffffff
0040bf07: xor       eax, eax
0040bf09: push      1
0040bf0b: repne scasb al, byte ptr es:[edi]
0040bf0d: not       ecx
0040bf0f: dec       ecx
0040bf10: mov       ebp, ecx
0040bf12: lea       ecx, [esp + 0x1c]
0040bf16: push      ebp
0040bf17: call      0x401940
0040bf1c: test      al, al
0040bf1e: je        0x40bf47
0040bf20: mov       edi, dword ptr [esp + 0x1c]
0040bf24: mov       ecx, ebp
0040bf26: mov       eax, ecx
0040bf28: mov       esi, 0x6b3f70
0040bf2d: shr       ecx, 2
0040bf30: rep movsd dword ptr es:[edi], dword ptr [esi]
0040bf32: mov       ecx, eax
0040bf34: push      ebp
0040bf35: and       ecx, 3
0040bf38: rep movsb byte ptr es:[edi], byte ptr [esi]
0040bf3a: lea       ecx, [esp + 0x1c]
0040bf3e: call      0x404190
0040bf43: mov       esi, dword ptr [esp + 0x10]
0040bf47: lea       ecx, [esp + 0x18]
0040bf4b: mov       byte ptr [esp + 0x30], 2
0040bf50: push      ecx
0040bf51: push      0xb6
0040bf56: push      0x68d638
0040bf5b: push      0x68d62c
0040bf60: call      0x5a07f0
0040bf65: call      eax
0040bf67: add       esp, 0x10
0040bf6a: lea       ecx, [esp + 0x18]
0040bf6e: mov       byte ptr [esp + 0x30], 0
0040bf73: push      1
0040bf75: call      0x4040a0
0040bf7a: xor       ebp, ebp
0040bf7c: mov       edx, dword ptr [esi + 0x234]
0040bf82: mov       ecx, ebx
0040bf84: push      edx
0040bf85: call      0x4f41c0
0040bf8a: cmp       ebx, ebp
0040bf8c: mov       dword ptr [esp + 0x30], 0xffffffff
0040bf94: je        0x40bfa7
0040bf96: mov       eax, dword ptr [ebx + 0x14]
0040bf99: dec       eax
0040bf9a: mov       dword ptr [ebx + 0x14], eax
0040bf9d: jne       0x40bfa7
0040bf9f: push      ebp
0040bfa0: mov       ecx, ebx
0040bfa2: call      0x5abfc0
0040bfa7: mov       ecx, dword ptr [esp + 0x28]
0040bfab: pop       edi
0040bfac: pop       esi
0040bfad: pop       ebp
0040bfae: mov       dword ptr fs:[0], ecx
0040bfb5: pop       ebx
0040bfb6: add       esp, 0x24
0040bfb9: ret       4
0040bfbc: nop       
0040bfbd: nop       
0040bfbe: nop       
0040bfbf: nop       
0040bfc0: push      esi
0040bfc1: mov       esi, ecx
0040bfc3: mov       al, byte ptr [esi + 0x230]
0040bfc9: test      al, al
0040bfcb: je        0x40bfe7
0040bfcd: mov       eax, dword ptr [esp + 0x10]
0040bfd1: mov       ecx, dword ptr [esp + 0xc]
0040bfd5: mov       edx, dword ptr [esp + 8]
0040bfd9: push      eax
0040bfda: push      ecx
0040bfdb: push      edx
0040bfdc: mov       ecx, esi
0040bfde: call      0x4232a0
0040bfe3: pop       esi
0040bfe4: ret       0xc
0040bfe7: mov       eax, dword ptr [0x6b915c]
0040bfec: test      eax, eax
0040bfee: jne       0x40bff5
0040bff0: call      0x4bc480
0040bff5: mov       ecx, eax
0040bff7: call      0x40cf10
0040bffc: mov       ecx, 0x6b9950
0040c001: call      0x565870
0040c006: mov       dword ptr [esi + 0x168], eax
0040c00c: call      0x60a4a0
0040c011: and       eax, 0x80000001
0040c016: jns       0x40c01d
0040c018: dec       eax
0040c019: or        eax, 0xfffffffe
0040c01c: inc       eax
0040c01d: jne       0x40c031
0040c01f: mov       ecx, esi
0040c021: call      0x424e90
0040c026: mov       edx, dword ptr [eax]
0040c028: mov       ecx, eax
0040c02a: call      dword ptr [edx + 0x20]
0040c02d: pop       esi
0040c02e: ret       0xc
0040c031: mov       eax, dword ptr [esi]
0040c033: push      3
0040c035: mov       ecx, esi
0040c037: call      dword ptr [eax + 0xbc]
0040c03d: pop       esi
0040c03e: ret       0xc
0040c041: nop       
0040c042: nop       
0040c043: nop       
0040c044: nop       
0040c045: nop       
0040c046: nop       
0040c047: nop       
0040c048: nop       
0040c049: nop       
0040c04a: nop       
0040c04b: nop       
0040c04c: nop       
0040c04d: nop       
0040c04e: nop       
0040c04f: nop       
0040c050: sub       esp, 0x24
0040c053: push      ebx
0040c054: mov       ebx, ecx
0040c056: push      esi
0040c057: push      edi
0040c058: mov       eax, dword ptr [ebx]
0040c05a: call      dword ptr [eax + 0x9c]
0040c060: mov       edx, dword ptr [ebx]
0040c062: lea       esi, [eax + 0x11c]
0040c068: mov       ecx, 6
0040c06d: lea       edi, [esp + 0x18]
0040c071: rep movsd dword ptr es:[edi], dword ptr [esi]
0040c073: mov       ecx, ebx
0040c075: call      dword ptr [edx + 0x9c]
0040c07b: fld       dword ptr [eax + 0x150]
0040c081: fmul      dword ptr [0x64aab8]
0040c087: mov       ecx, dword ptr [eax + 0x154]
0040c08d: mov       edx, dword ptr [eax + 0x158]
0040c093: mov       dword ptr [esp + 0x10], ecx
0040c097: mov       dword ptr [esp + 0x14], edx
0040c09b: fld       st(0)
0040c09d: fchs      
0040c09f: fstp      dword ptr [esp + 0x18]
0040c0a3: mov       eax, dword ptr [ebx]
0040c0a5: mov       ecx, ebx
0040c0a7: fstp      dword ptr [esp + 0x24]
0040c0ab: fld       dword ptr [0x64aabc]
0040c0b1: fmul      dword ptr [esp + 0x10]
0040c0b5: fld       st(0)
0040c0b7: fmul      dword ptr [0x64ab98]
0040c0bd: fstp      dword ptr [esp + 0x1c]
0040c0c1: fstp      dword ptr [esp + 0x28]
0040c0c5: fld       dword ptr [0x64aab8]
0040c0cb: fmul      dword ptr [esp + 0x14]
0040c0cf: fld       st(0)
0040c0d1: fchs      
0040c0d3: fstp      dword ptr [esp + 0x20]
0040c0d7: fstp      dword ptr [esp + 0x2c]
0040c0db: call      dword ptr [eax + 0x9c]
0040c0e1: mov       edi, eax
0040c0e3: mov       ecx, 6
0040c0e8: add       edi, 0x11c
0040c0ee: lea       esi, [esp + 0x18]
0040c0f2: rep movsd dword ptr es:[edi], dword ptr [esi]
0040c0f4: pop       edi
0040c0f5: pop       esi
0040c0f6: pop       ebx
0040c0f7: add       esp, 0x24
0040c0fa: ret       
0040c0fb: nop       
0040c0fc: nop       
0040c0fd: nop       
0040c0fe: nop       
0040c0ff: nop       
0040c100: mov       eax, dword ptr fs:[0]
0040c106: push      -1
0040c108: push      0x620ab0
0040c10d: push      eax
0040c10e: mov       dword ptr fs:[0], esp
0040c115: sub       esp, 0x58
0040c118: lea       eax, [esp + 0xc]
0040c11c: push      ebx
0040c11d: push      ebp
0040c11e: push      esi
0040c11f: push      edi
0040c120: mov       ebp, ecx
0040c122: push      eax
0040c123: call      0x4237d0
0040c128: mov       ecx, dword ptr [eax]
0040c12a: xor       esi, esi
0040c12c: cmp       ecx, esi
0040c12e: mov       ecx, dword ptr [esp + 0x1c]
0040c132: sete      bl
0040c135: cmp       ecx, esi
0040c137: je        0x40c13e
0040c139: call      0x4098d0
0040c13e: test      bl, bl
0040c140: jne       0x40c45f
0040c146: push      ecx
0040c147: mov       ecx, esp
0040c149: mov       dword ptr [esp + 0x24], esp
0040c14d: push      ecx
0040c14e: mov       ecx, ebp
0040c150: call      0x4237d0
0040c155: call      0x40b060
0040c15a: mov       ebx, eax
0040c15c: add       esp, 4
0040c15f: cmp       ebx, esi
0040c161: jne       0x40c1f7
0040c167: mov       dl, byte ptr [esp + 0x13]
0040c16b: push      esi
0040c16c: lea       ecx, [esp + 0x50]
0040c170: mov       byte ptr [esp + 0x50], dl
0040c174: call      0x4040a0
0040c179: mov       edi, 0x6b3f70
0040c17e: or        ecx, 0xffffffff
0040c181: xor       eax, eax
0040c183: push      1
0040c185: repne scasb al, byte ptr es:[edi]
0040c187: not       ecx
0040c189: dec       ecx
0040c18a: mov       edi, ecx
0040c18c: lea       ecx, [esp + 0x50]
0040c190: push      edi
0040c191: mov       dword ptr [esp + 0x24], edi
0040c195: call      0x401940
0040c19a: test      al, al
0040c19c: je        0x40c1c5
0040c19e: mov       ecx, edi
0040c1a0: mov       edi, dword ptr [esp + 0x50]
0040c1a4: mov       eax, ecx
0040c1a6: mov       esi, 0x6b3f70
0040c1ab: shr       ecx, 2
0040c1ae: rep movsd dword ptr es:[edi], dword ptr [esi]
0040c1b0: mov       ecx, eax
0040c1b2: and       ecx, 3
0040c1b5: rep movsb byte ptr es:[edi], byte ptr [esi]
0040c1b7: mov       ecx, eax
0040c1b9: push      ecx
0040c1ba: lea       ecx, [esp + 0x50]
0040c1be: call      0x404190
0040c1c3: xor       esi, esi
0040c1c5: lea       edx, [esp + 0x4c]
0040c1c9: mov       dword ptr [esp + 0x70], esi
0040c1cd: push      edx
0040c1ce: push      0x70
0040c1d0: push      0x68e4e8
0040c1d5: push      0x68e514
0040c1da: call      0x5a07f0
0040c1df: call      eax
0040c1e1: add       esp, 0x10
0040c1e4: lea       ecx, [esp + 0x4c]
0040c1e8: mov       dword ptr [esp + 0x70], 0xffffffff
0040c1f0: push      1
0040c1f2: call      0x4040a0
0040c1f7: mov       eax, dword ptr [ebx]
0040c1f9: lea       ecx, [esp + 0x4c]
0040c1fd: push      ecx
0040c1fe: mov       ecx, ebx
