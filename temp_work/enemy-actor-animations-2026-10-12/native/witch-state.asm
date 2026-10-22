0040b1a0: push      esi
0040b1a1: push      edi
0040b1a2: mov       edi, dword ptr [esp + 0xc]
0040b1a6: mov       esi, ecx
0040b1a8: push      edi
0040b1a9: call      0x406dc0
0040b1ae: mov       dword ptr [esi + 0x34], edi
0040b1b1: mov       dword ptr [esi], 0x64aa80
0040b1b7: mov       eax, esi
0040b1b9: pop       edi
0040b1ba: pop       esi
0040b1bb: ret       4
0040b1be: nop       
0040b1bf: nop       
0040b1c0: push      esi
0040b1c1: mov       esi, ecx
0040b1c3: push      0x6b9760
0040b1c8: mov       ecx, dword ptr [esi + 0x2c]
0040b1cb: call      0x505400
0040b1d0: mov       ecx, dword ptr [esi + 0x34]
0040b1d3: mov       eax, dword ptr [ecx]
0040b1d5: call      dword ptr [eax + 0xb0]
0040b1db: mov       ecx, esi
0040b1dd: call      0x402a80
0040b1e2: push      eax
0040b1e3: push      5
0040b1e5: mov       ecx, esi
0040b1e7: call      0x402a10
0040b1ec: pop       esi
0040b1ed: ret       
0040b1ee: nop       
0040b1ef: nop       
0040b1f0: mov       cl, byte ptr [0x7103a0]
0040b1f6: mov       al, 1
0040b1f8: test      al, cl
0040b1fa: jne       0x40b204
0040b1fc: or        cl, al
0040b1fe: mov       byte ptr [0x7103a0], cl
0040b204: jmp       0x40b210
0040b209: nop       
0040b20a: nop       
0040b20b: nop       
0040b20c: nop       
0040b20d: nop       
0040b20e: nop       
0040b20f: nop       
0040b210: push      0x401ba0
0040b215: call      0x60a57b
0040b21a: pop       ecx
0040b21b: ret       
0040b21c: nop       
0040b21d: nop       
0040b21e: nop       
0040b21f: nop       
0040b220: call      0x40b230
0040b225: jmp       0x40b300
0040b22a: nop       
0040b22b: nop       
0040b22c: nop       
0040b22d: nop       
0040b22e: nop       
0040b22f: nop       
0040b230: sub       esp, 8
0040b233: push      ebx
0040b234: mov       al, byte ptr [esp + 7]
0040b238: push      ebp
0040b239: push      esi
0040b23a: push      edi
0040b23b: xor       esi, esi
0040b23d: sub       esp, 0x10
0040b240: mov       edi, 0x68e3f8
0040b245: mov       ebp, esp
0040b247: or        ecx, 0xffffffff
0040b24a: mov       dword ptr [esp + 0x24], esp
0040b24e: mov       byte ptr [ebp], al
0040b251: xor       eax, eax
0040b253: mov       dword ptr [ebp + 4], esi
0040b256: mov       dword ptr [ebp + 8], esi
0040b259: mov       dword ptr [ebp + 0xc], esi
0040b25c: repne scasb al, byte ptr es:[edi]
0040b25e: not       ecx
0040b260: dec       ecx
0040b261: mov       ebx, ecx
0040b263: cmp       ebx, -3
0040b266: jbe       0x40b26d
0040b268: call      0x5fe5fb
0040b26d: mov       ecx, dword ptr [ebp + 4]
0040b270: cmp       ecx, esi
0040b272: je        0x40b292
0040b274: mov       al, byte ptr [ecx - 1]
0040b277: test      al, al
0040b279: je        0x40b292
0040b27b: cmp       al, 0xff
0040b27d: je        0x40b292
0040b27f: cmp       ebx, esi
0040b281: jne       0x40b2b6
0040b283: dec       al
0040b285: push      esi
0040b286: mov       byte ptr [ecx - 1], al
0040b289: mov       ecx, ebp
0040b28b: call      0x4040a0
0040b290: jmp       0x40b2e0
0040b292: cmp       ebx, esi
0040b294: jne       0x40b2a1
0040b296: push      1
0040b298: mov       ecx, ebp
0040b29a: call      0x4040a0
0040b29f: jmp       0x40b2e0
0040b2a1: mov       eax, dword ptr [ebp + 0xc]
0040b2a4: cmp       eax, 0x1f
0040b2a7: ja        0x40b2ad
0040b2a9: cmp       eax, ebx
0040b2ab: jae       0x40b2be
0040b2ad: push      1
0040b2af: mov       ecx, ebp
0040b2b1: call      0x4040a0
0040b2b6: push      ebx
0040b2b7: mov       ecx, ebp
0040b2b9: call      0x401a60
0040b2be: mov       edi, dword ptr [ebp + 4]
0040b2c1: mov       ecx, ebx
0040b2c3: mov       edx, ecx
0040b2c5: mov       esi, 0x68e3f8
0040b2ca: shr       ecx, 2
0040b2cd: rep movsd dword ptr es:[edi], dword ptr [esi]
0040b2cf: mov       ecx, edx
0040b2d1: and       ecx, 3
0040b2d4: rep movsb byte ptr es:[edi], byte ptr [esi]
0040b2d6: mov       eax, dword ptr [ebp + 4]
0040b2d9: mov       dword ptr [ebp + 8], ebx
0040b2dc: mov       byte ptr [eax + ebx], 0
0040b2e0: push      0x6b8df0
0040b2e5: mov       ecx, 0x6b4048
0040b2ea: call      0x40c860
0040b2ef: pop       edi
0040b2f0: pop       esi
0040b2f1: pop       ebp
0040b2f2: pop       ebx
0040b2f3: add       esp, 8
0040b2f6: ret       
0040b2f7: nop       
0040b2f8: nop       
0040b2f9: nop       
0040b2fa: nop       
0040b2fb: nop       
0040b2fc: nop       
0040b2fd: nop       
0040b2fe: nop       
0040b2ff: nop       
0040b300: push      0x40b310
0040b305: call      0x60a57b
0040b30a: pop       ecx
0040b30b: ret       
0040b30c: nop       
0040b30d: nop       
0040b30e: nop       
0040b30f: nop       
0040b310: mov       cl, byte ptr [0x6b4040]
0040b316: mov       al, 1
0040b318: test      al, cl
0040b31a: jne       0x40b32e
0040b31c: or        cl, al
0040b31e: mov       byte ptr [0x6b4040], cl
0040b324: mov       ecx, 0x6b4048
0040b329: jmp       0x429cc0
0040b32e: ret       
0040b32f: nop       
0040b330: call      0x40b340
0040b335: jmp       0x40b410
0040b33a: nop       
0040b33b: nop       
0040b33c: nop       
0040b33d: nop       
0040b33e: nop       
0040b33f: nop       
0040b340: sub       esp, 8
0040b343: push      ebx
0040b344: mov       al, byte ptr [esp + 7]
0040b348: push      ebp
0040b349: push      esi
0040b34a: push      edi
0040b34b: xor       esi, esi
0040b34d: sub       esp, 0x10
0040b350: mov       edi, 0x68e408
0040b355: mov       ebp, esp
0040b357: or        ecx, 0xffffffff
0040b35a: mov       dword ptr [esp + 0x24], esp
0040b35e: mov       byte ptr [ebp], al
0040b361: xor       eax, eax
0040b363: mov       dword ptr [ebp + 4], esi
0040b366: mov       dword ptr [ebp + 8], esi
0040b369: mov       dword ptr [ebp + 0xc], esi
0040b36c: repne scasb al, byte ptr es:[edi]
0040b36e: not       ecx
0040b370: dec       ecx
0040b371: mov       ebx, ecx
0040b373: cmp       ebx, -3
0040b376: jbe       0x40b37d
0040b378: call      0x5fe5fb
0040b37d: mov       ecx, dword ptr [ebp + 4]
0040b380: cmp       ecx, esi
0040b382: je        0x40b3a2
0040b384: mov       al, byte ptr [ecx - 1]
0040b387: test      al, al
0040b389: je        0x40b3a2
0040b38b: cmp       al, 0xff
0040b38d: je        0x40b3a2
0040b38f: cmp       ebx, esi
0040b391: jne       0x40b3c6
0040b393: dec       al
0040b395: push      esi
0040b396: mov       byte ptr [ecx - 1], al
0040b399: mov       ecx, ebp
0040b39b: call      0x4040a0
0040b3a0: jmp       0x40b3f0
0040b3a2: cmp       ebx, esi
0040b3a4: jne       0x40b3b1
0040b3a6: push      1
0040b3a8: mov       ecx, ebp
0040b3aa: call      0x4040a0
0040b3af: jmp       0x40b3f0
0040b3b1: mov       eax, dword ptr [ebp + 0xc]
0040b3b4: cmp       eax, 0x1f
0040b3b7: ja        0x40b3bd
0040b3b9: cmp       eax, ebx
0040b3bb: jae       0x40b3ce
0040b3bd: push      1
0040b3bf: mov       ecx, ebp
0040b3c1: call      0x4040a0
0040b3c6: push      ebx
0040b3c7: mov       ecx, ebp
0040b3c9: call      0x401a60
0040b3ce: mov       edi, dword ptr [ebp + 4]
0040b3d1: mov       ecx, ebx
0040b3d3: mov       edx, ecx
0040b3d5: mov       esi, 0x68e408
0040b3da: shr       ecx, 2
0040b3dd: rep movsd dword ptr es:[edi], dword ptr [esi]
0040b3df: mov       ecx, edx
0040b3e1: and       ecx, 3
0040b3e4: rep movsb byte ptr es:[edi], byte ptr [esi]
0040b3e6: mov       eax, dword ptr [ebp + 4]
0040b3e9: mov       dword ptr [ebp + 8], ebx
0040b3ec: mov       byte ptr [eax + ebx], 0
0040b3f0: push      0x6b8df0
0040b3f5: mov       ecx, 0x6b4018
0040b3fa: call      0x40c860
0040b3ff: pop       edi
0040b400: pop       esi
0040b401: pop       ebp
0040b402: pop       ebx
0040b403: add       esp, 8
0040b406: ret       
0040b407: nop       
0040b408: nop       
0040b409: nop       
0040b40a: nop       
0040b40b: nop       
0040b40c: nop       
0040b40d: nop       
0040b40e: nop       
0040b40f: nop       
0040b410: push      0x40b420
0040b415: call      0x60a57b
0040b41a: pop       ecx
0040b41b: ret       
0040b41c: nop       
0040b41d: nop       
0040b41e: nop       
0040b41f: nop       
0040b420: mov       cl, byte ptr [0x6b4040]
0040b426: mov       al, 2
0040b428: test      al, cl
0040b42a: jne       0x40b43e
0040b42c: or        cl, al
0040b42e: mov       byte ptr [0x6b4040], cl
0040b434: mov       ecx, 0x6b4018
0040b439: jmp       0x429cc0
0040b43e: ret       
0040b43f: nop       
0040b440: call      0x40b450
0040b445: jmp       0x40b520
0040b44a: nop       
0040b44b: nop       
0040b44c: nop       
0040b44d: nop       
0040b44e: nop       
0040b44f: nop       
0040b450: sub       esp, 8
0040b453: push      ebx
0040b454: mov       al, byte ptr [esp + 7]
0040b458: push      ebp
0040b459: push      esi
0040b45a: push      edi
0040b45b: xor       esi, esi
0040b45d: sub       esp, 0x10
0040b460: mov       edi, 0x68e418
0040b465: mov       ebp, esp
0040b467: or        ecx, 0xffffffff
0040b46a: mov       dword ptr [esp + 0x24], esp
0040b46e: mov       byte ptr [ebp], al
0040b471: xor       eax, eax
0040b473: mov       dword ptr [ebp + 4], esi
0040b476: mov       dword ptr [ebp + 8], esi
0040b479: mov       dword ptr [ebp + 0xc], esi
0040b47c: repne scasb al, byte ptr es:[edi]
0040b47e: not       ecx
0040b480: dec       ecx
0040b481: mov       ebx, ecx
0040b483: cmp       ebx, -3
0040b486: jbe       0x40b48d
0040b488: call      0x5fe5fb
0040b48d: mov       ecx, dword ptr [ebp + 4]
0040b490: cmp       ecx, esi
0040b492: je        0x40b4b2
0040b494: mov       al, byte ptr [ecx - 1]
0040b497: test      al, al
0040b499: je        0x40b4b2
0040b49b: cmp       al, 0xff
0040b49d: je        0x40b4b2
0040b49f: cmp       ebx, esi
0040b4a1: jne       0x40b4d6
0040b4a3: dec       al
0040b4a5: push      esi
0040b4a6: mov       byte ptr [ecx - 1], al
0040b4a9: mov       ecx, ebp
0040b4ab: call      0x4040a0
0040b4b0: jmp       0x40b500
0040b4b2: cmp       ebx, esi
0040b4b4: jne       0x40b4c1
0040b4b6: push      1
0040b4b8: mov       ecx, ebp
0040b4ba: call      0x4040a0
0040b4bf: jmp       0x40b500
0040b4c1: mov       eax, dword ptr [ebp + 0xc]
0040b4c4: cmp       eax, 0x1f
0040b4c7: ja        0x40b4cd
0040b4c9: cmp       eax, ebx
0040b4cb: jae       0x40b4de
0040b4cd: push      1
0040b4cf: mov       ecx, ebp
0040b4d1: call      0x4040a0
0040b4d6: push      ebx
0040b4d7: mov       ecx, ebp
0040b4d9: call      0x401a60
0040b4de: mov       edi, dword ptr [ebp + 4]
0040b4e1: mov       ecx, ebx
0040b4e3: mov       edx, ecx
0040b4e5: mov       esi, 0x68e418
0040b4ea: shr       ecx, 2
0040b4ed: rep movsd dword ptr es:[edi], dword ptr [esi]
0040b4ef: mov       ecx, edx
0040b4f1: and       ecx, 3
0040b4f4: rep movsb byte ptr es:[edi], byte ptr [esi]
0040b4f6: mov       eax, dword ptr [ebp + 4]
0040b4f9: mov       dword ptr [ebp + 8], ebx
0040b4fc: mov       byte ptr [eax + ebx], 0
0040b500: push      0x6b8df0
0040b505: mov       ecx, 0x6b3ff0
0040b50a: call      0x40c860
0040b50f: pop       edi
0040b510: pop       esi
0040b511: pop       ebp
0040b512: pop       ebx
0040b513: add       esp, 8
0040b516: ret       
0040b517: nop       
0040b518: nop       
0040b519: nop       
0040b51a: nop       
0040b51b: nop       
0040b51c: nop       
0040b51d: nop       
0040b51e: nop       
0040b51f: nop       
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
