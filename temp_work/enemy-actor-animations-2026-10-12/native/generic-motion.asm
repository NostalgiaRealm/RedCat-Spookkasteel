0042e240: push      -1
0042e242: push      0x623608
0042e247: mov       eax, dword ptr fs:[0]
0042e24d: push      eax
0042e24e: mov       dword ptr fs:[0], esp
0042e255: sub       esp, 0x14
0042e258: mov       eax, dword ptr [esp + 0x24]
0042e25c: push      ebx
0042e25d: push      esi
0042e25e: xor       ebx, ebx
0042e260: mov       esi, dword ptr [eax + 4]
0042e263: mov       dword ptr [esp + 8], ecx
0042e267: cmp       esi, ebx
0042e269: jne       0x42e270
0042e26b: mov       esi, 0x64a3b4
0042e270: mov       cl, byte ptr [esp + 0x2c]
0042e274: push      ebp
0042e275: push      edi
0042e276: mov       byte ptr [esp + 0x14], cl
0042e27a: mov       edi, esi
0042e27c: or        ecx, 0xffffffff
0042e27f: xor       eax, eax
0042e281: mov       dword ptr [esp + 0x18], ebx
0042e285: mov       dword ptr [esp + 0x1c], ebx
0042e289: mov       dword ptr [esp + 0x20], ebx
0042e28d: repne scasb al, byte ptr es:[edi]
0042e28f: not       ecx
0042e291: dec       ecx
0042e292: push      1
0042e294: mov       ebp, ecx
0042e296: lea       ecx, [esp + 0x18]
0042e29a: push      ebp
0042e29b: call      0x401940
0042e2a0: test      al, al
0042e2a2: je        0x42e2c3
0042e2a4: mov       edi, dword ptr [esp + 0x18]
0042e2a8: mov       ecx, ebp
0042e2aa: mov       edx, ecx
0042e2ac: shr       ecx, 2
0042e2af: rep movsd dword ptr es:[edi], dword ptr [esi]
0042e2b1: mov       ecx, edx
0042e2b3: and       ecx, 3
0042e2b6: rep movsb byte ptr es:[edi], byte ptr [esi]
0042e2b8: mov       eax, dword ptr [esp + 0x18]
0042e2bc: mov       dword ptr [esp + 0x1c], ebp
0042e2c0: mov       byte ptr [eax + ebp], bl
0042e2c3: mov       ecx, dword ptr [esp + 0x3c]
0042e2c7: mov       edx, dword ptr [esp + 0x38]
0042e2cb: push      ecx
0042e2cc: mov       ecx, dword ptr [esp + 0x14]
0042e2d0: lea       eax, [esp + 0x18]
0042e2d4: push      edx
0042e2d5: push      eax
0042e2d6: add       ecx, 0x19c
0042e2dc: mov       dword ptr [esp + 0x38], ebx
0042e2e0: call      0x4a0660
0042e2e5: mov       eax, dword ptr [esp + 0x18]
0042e2e9: pop       edi
0042e2ea: cmp       eax, ebx
0042e2ec: pop       ebp
0042e2ed: je        0x42e31d
0042e2ef: lea       ecx, [eax - 1]
0042e2f2: mov       al, byte ptr [eax - 1]
0042e2f5: cmp       al, bl
0042e2f7: je        0x42e314
0042e2f9: cmp       al, 0xff
0042e2fb: je        0x42e314
0042e2fd: dec       al
0042e2ff: pop       esi
0042e300: mov       byte ptr [ecx], al
0042e302: pop       ebx
0042e303: mov       ecx, dword ptr [esp + 0x14]
0042e307: mov       dword ptr fs:[0], ecx
0042e30e: add       esp, 0x20
0042e311: ret       0xc
0042e314: push      ecx
0042e315: call      0x5fe5f0
0042e31a: add       esp, 4
0042e31d: mov       ecx, dword ptr [esp + 0x1c]
0042e321: pop       esi
0042e322: pop       ebx
0042e323: mov       dword ptr fs:[0], ecx
0042e32a: add       esp, 0x20
0042e32d: ret       0xc
0042e330: push      ebx
0042e331: mov       ebx, dword ptr [esp + 8]
0042e335: push      esi
0042e336: push      edi
0042e337: mov       edi, dword ptr [esp + 0x14]
0042e33b: mov       esi, ecx
0042e33d: push      edi
0042e33e: push      ebx
0042e33f: call      0x49d890
0042e344: mov       ecx, dword ptr [esi + 0x294]
0042e34a: test      ecx, ecx
0042e34c: je        0x42e355
0042e34e: mov       eax, dword ptr [ecx]
0042e350: push      edi
0042e351: push      ebx
0042e352: call      dword ptr [eax + 8]
0042e355: pop       edi
0042e356: pop       esi
0042e357: pop       ebx
0042e358: ret       8
0042e35b: nop       
0042e35c: nop       
0042e35d: nop       
0042e35e: nop       
0042e35f: nop       
0042e360: push      -1
0042e362: push      0x623648
0042e367: mov       eax, dword ptr fs:[0]
0042e36d: push      eax
0042e36e: mov       dword ptr fs:[0], esp
0042e375: sub       esp, 0x1c
0042e378: push      ebp
0042e379: push      esi
0042e37a: push      edi
0042e37b: mov       esi, ecx
0042e37d: mov       edi, dword ptr [esp + 0x3c]
0042e381: mov       dword ptr [esp + 0x30], 1
0042e389: test      edi, edi
0042e38b: je        0x42e467
0042e391: mov       eax, dword ptr [esi + 0x294]
0042e397: test      eax, eax
0042e399: je        0x42e467
0042e39f: lea       eax, [esp + 0xc]
0042e3a3: push      eax
0042e3a4: call      0x4042e0
0042e3a9: mov       ebp, eax
0042e3ab: mov       eax, dword ptr [ebp]
0042e3ae: mov       byte ptr [esp + 0x30], 2
0042e3b3: test      eax, eax
0042e3b5: jne       0x42e41f
0042e3b7: mov       cl, byte ptr [esp + 0x38]
0042e3bb: push      0
0042e3bd: mov       byte ptr [esp + 0x1c], cl
0042e3c1: lea       ecx, [esp + 0x1c]
0042e3c5: call      0x4040a0
0042e3ca: mov       edi, 0x6b3f70
0042e3cf: or        ecx, 0xffffffff
0042e3d2: xor       eax, eax
0042e3d4: repne scasb al, byte ptr es:[edi]
0042e3d6: not       ecx
0042e3d8: dec       ecx
0042e3d9: push      ecx
0042e3da: push      0x6b3f70
0042e3df: lea       ecx, [esp + 0x20]
0042e3e3: call      0x4040f0
0042e3e8: lea       edx, [esp + 0x18]
0042e3ec: mov       byte ptr [esp + 0x30], 3
0042e3f1: push      edx
0042e3f2: push      0xb6
0042e3f7: push      0x68d638
0042e3fc: push      0x68d62c
0042e401: call      0x5a07f0
0042e406: call      eax
0042e408: add       esp, 0x10
0042e40b: lea       ecx, [esp + 0x18]
0042e40f: mov       byte ptr [esp + 0x30], 2
0042e414: push      1
0042e416: call      0x4040a0
0042e41b: mov       edi, dword ptr [esp + 0x3c]
0042e41f: mov       eax, dword ptr [esi + 0x294]
0042e425: mov       ecx, dword ptr [ebp]
0042e428: push      eax
0042e429: call      0x4f41c0
0042e42e: mov       eax, dword ptr [esp + 0xc]
0042e432: mov       byte ptr [esp + 0x30], 1
0042e437: test      eax, eax
0042e439: je        0x42e45b
0042e43b: mov       ebp, dword ptr [eax + 0x14]
0042e43e: mov       ecx, eax
0042e440: add       eax, 0x14
0042e443: dec       ebp
0042e444: mov       edx, ebp
0042e446: test      edx, edx
0042e448: mov       dword ptr [eax], ebp
0042e44a: jne       0x42e453
0042e44c: push      0
0042e44e: call      0x5abfc0
0042e453: mov       dword ptr [esp + 0xc], 0
0042e45b: mov       ecx, dword ptr [esi + 0x294]
0042e461: push      esi
0042e462: call      0x46da20
0042e467: push      ecx
0042e468: mov       eax, esp
0042e46a: mov       dword ptr [esp + 0x14], esp
0042e46e: test      edi, edi
0042e470: mov       dword ptr [eax], edi
0042e472: je        0x42e477
0042e474: inc       dword ptr [edi + 0x14]
0042e477: push      ecx
0042e478: lea       edx, [esp + 0x40]
0042e47c: mov       ecx, esp
0042e47e: mov       dword ptr [esp + 0x1c], esp
0042e482: push      edx
0042e483: mov       byte ptr [esp + 0x3c], 4
0042e488: call      0x449760
0042e48d: mov       ecx, esi
0042e48f: mov       byte ptr [esp + 0x38], 1
0042e494: call      0x49c1b0
0042e499: mov       eax, dword ptr [esp + 0x38]
0042e49d: mov       byte ptr [esp + 0x30], 0
0042e4a2: test      eax, eax
0042e4a4: je        0x42e4c6
0042e4a6: mov       esi, dword ptr [eax + 0x14]
0042e4a9: mov       ecx, eax
0042e4ab: add       eax, 0x14
0042e4ae: dec       esi
0042e4af: mov       edx, esi
0042e4b1: test      edx, edx
0042e4b3: mov       dword ptr [eax], esi
0042e4b5: jne       0x42e4be
0042e4b7: push      0
0042e4b9: call      0x5abfc0
0042e4be: mov       dword ptr [esp + 0x38], 0
0042e4c6: test      edi, edi
0042e4c8: mov       dword ptr [esp + 0x30], 0xffffffff
0042e4d0: je        0x42e4e4
0042e4d2: mov       eax, dword ptr [edi + 0x14]
0042e4d5: dec       eax
0042e4d6: mov       dword ptr [edi + 0x14], eax
0042e4d9: jne       0x42e4e4
0042e4db: push      0
0042e4dd: mov       ecx, edi
0042e4df: call      0x5abfc0
0042e4e4: mov       ecx, dword ptr [esp + 0x28]
0042e4e8: pop       edi
0042e4e9: pop       esi
0042e4ea: mov       dword ptr fs:[0], ecx
0042e4f1: pop       ebp
0042e4f2: add       esp, 0x28
0042e4f5: ret       8
0042e4f8: nop       
0042e4f9: nop       
0042e4fa: nop       
0042e4fb: nop       
0042e4fc: nop       
0042e4fd: nop       
0042e4fe: nop       
0042e4ff: nop       
0042e500: jmp       0x49d210
0042e505: nop       
0042e506: nop       
0042e507: nop       
0042e508: nop       
0042e509: nop       
0042e50a: nop       
0042e50b: nop       
0042e50c: nop       
0042e50d: nop       
0042e50e: nop       
0042e50f: nop       
0042e510: mov       eax, dword ptr [esp + 4]
0042e514: push      esi
0042e515: mov       esi, ecx
0042e517: push      eax
0042e518: call      0x502680
0042e51d: mov       byte ptr [esi + 0x2a8], 1
0042e524: pop       esi
0042e525: ret       4
0042e528: nop       
0042e529: nop       
0042e52a: nop       
0042e52b: nop       
0042e52c: nop       
0042e52d: nop       
0042e52e: nop       
0042e52f: nop       
0042e530: push      esi
0042e531: mov       esi, ecx
0042e533: call      0x502710
0042e538: mov       byte ptr [esi + 0x2a8], 0
0042e53f: pop       esi
0042e540: ret       
0042e541: nop       
0042e542: nop       
0042e543: nop       
0042e544: nop       
0042e545: nop       
0042e546: nop       
0042e547: nop       
0042e548: nop       
0042e549: nop       
0042e54a: nop       
0042e54b: nop       
0042e54c: nop       
0042e54d: nop       
0042e54e: nop       
0042e54f: nop       
0042e550: mov       al, byte ptr [ecx + 0x2a8]
0042e556: ret       
0042e557: nop       
0042e558: nop       
0042e559: nop       
0042e55a: nop       
0042e55b: nop       
0042e55c: nop       
0042e55d: nop       
0042e55e: nop       
0042e55f: nop       
0042e560: push      -1
0042e562: push      0x623678
0042e567: mov       eax, dword ptr fs:[0]
0042e56d: push      eax
0042e56e: mov       dword ptr fs:[0], esp
0042e575: sub       esp, 0x18
0042e578: push      ebx
0042e579: push      esi
0042e57a: lea       eax, [esp + 0xc]
0042e57e: push      edi
0042e57f: mov       esi, ecx
0042e581: push      eax
0042e582: call      0x4042e0
0042e587: mov       edx, dword ptr [eax]
0042e589: mov       eax, dword ptr [esp + 0x10]
0042e58d: xor       ebx, ebx
0042e58f: cmp       edx, ebx
0042e591: setne     byte ptr [esp + 0xf]
0042e596: cmp       eax, ebx
0042e598: je        0x42e5b1
0042e59a: mov       edi, dword ptr [eax + 0x14]
0042e59d: mov       ecx, eax
0042e59f: add       eax, 0x14
0042e5a2: dec       edi
0042e5a3: mov       edx, edi
0042e5a5: cmp       edx, ebx
0042e5a7: mov       dword ptr [eax], edi
0042e5a9: jne       0x42e5b1
0042e5ab: push      ebx
0042e5ac: call      0x5abfc0
0042e5b1: cmp       byte ptr [esp + 0xf], bl
0042e5b5: je        0x42e713
0042e5bb: lea       ecx, [esp + 0x10]
0042e5bf: push      ecx
0042e5c0: mov       ecx, esi
0042e5c2: call      0x4042e0
0042e5c7: mov       esi, eax
0042e5c9: mov       eax, dword ptr [esi]
0042e5cb: mov       dword ptr [esp + 0x2c], ebx
0042e5cf: cmp       eax, ebx
0042e5d1: jne       0x42e635
0042e5d3: mov       dl, byte ptr [esp + 0x3c]
0042e5d7: push      ebx
0042e5d8: lea       ecx, [esp + 0x18]
0042e5dc: mov       byte ptr [esp + 0x18], dl
0042e5e0: call      0x4040a0
0042e5e5: mov       edi, 0x6b3f70
0042e5ea: or        ecx, 0xffffffff
0042e5ed: xor       eax, eax
0042e5ef: repne scasb al, byte ptr es:[edi]
0042e5f1: not       ecx
0042e5f3: dec       ecx
0042e5f4: push      ecx
0042e5f5: push      0x6b3f70
0042e5fa: lea       ecx, [esp + 0x1c]
0042e5fe: call      0x4040f0
0042e603: lea       eax, [esp + 0x14]
0042e607: mov       byte ptr [esp + 0x2c], 1
0042e60c: push      eax
0042e60d: push      0xb6
0042e612: push      0x68d638
0042e617: push      0x68d62c
0042e61c: call      0x5a07f0
0042e621: call      eax
0042e623: add       esp, 0x10
0042e626: lea       ecx, [esp + 0x14]
0042e62a: mov       byte ptr [esp + 0x2c], bl
0042e62e: push      1
0042e630: call      0x4040a0
0042e635: mov       esi, dword ptr [esi]
0042e637: mov       eax, dword ptr [esp + 0x10]
0042e63b: cmp       eax, ebx
0042e63d: mov       dword ptr [esp + 0x2c], 0xffffffff
0042e645: mov       esi, dword ptr [esi + 0x360]
0042e64b: je        0x42e664
0042e64d: mov       edi, dword ptr [eax + 0x14]
0042e650: mov       ecx, eax
0042e652: add       eax, 0x14
0042e655: dec       edi
0042e656: mov       edx, edi
0042e658: cmp       edx, ebx
0042e65a: mov       dword ptr [eax], edi
0042e65c: jne       0x42e664
0042e65e: push      ebx
0042e65f: call      0x5abfc0
0042e664: cmp       esi, ebx
0042e666: jne       0x42e6fd
0042e66c: mov       cl, byte ptr [esp + 0x3c]
0042e670: mov       edi, 0x6b3f70
0042e675: mov       byte ptr [esp + 0x14], cl
0042e679: or        ecx, 0xffffffff
0042e67c: xor       eax, eax
0042e67e: mov       dword ptr [esp + 0x18], ebx
0042e682: repne scasb al, byte ptr es:[edi]
0042e684: not       ecx
0042e686: dec       ecx
0042e687: mov       dword ptr [esp + 0x1c], ebx
0042e68b: push      ecx
0042e68c: push      0x6b3f70
0042e691: lea       ecx, [esp + 0x1c]
0042e695: mov       dword ptr [esp + 0x28], ebx
0042e699: call      0x4040f0
0042e69e: lea       edx, [esp + 0x14]
0042e6a2: mov       dword ptr [esp + 0x2c], 2
0042e6aa: push      edx
0042e6ab: push      0xa7
0042e6b0: push      0x690104
0042e6b5: push      0x68d620
0042e6ba: call      0x5a07f0
0042e6bf: call      eax
0042e6c1: mov       eax, dword ptr [esp + 0x28]
0042e6c5: add       esp, 0x10
0042e6c8: cmp       eax, ebx
0042e6ca: mov       dword ptr [esp + 0x2c], 0xffffffff
0042e6d2: je        0x42e6f1
0042e6d4: lea       ecx, [eax - 1]
0042e6d7: mov       al, byte ptr [eax - 1]
0042e6da: cmp       al, bl
0042e6dc: je        0x42e6e8
0042e6de: cmp       al, 0xff
0042e6e0: je        0x42e6e8
0042e6e2: dec       al
0042e6e4: mov       byte ptr [ecx], al
0042e6e6: jmp       0x42e6f1
0042e6e8: push      ecx
0042e6e9: call      0x5fe5f0
0042e6ee: add       esp, 4
0042e6f1: mov       dword ptr [esp + 0x18], ebx
0042e6f5: mov       dword ptr [esp + 0x1c], ebx
0042e6f9: mov       dword ptr [esp + 0x20], ebx
0042e6fd: mov       eax, dword ptr [esp + 0x3c]
0042e701: mov       ecx, dword ptr [esp + 0x38]
0042e705: mov       edx, dword ptr [esp + 0x34]
0042e709: push      eax
0042e70a: push      ecx
0042e70b: push      edx
0042e70c: mov       ecx, esi
0042e70e: call      0x503fc0
0042e713: mov       ecx, dword ptr [esp + 0x24]
0042e717: pop       edi
0042e718: pop       esi
0042e719: pop       ebx
0042e71a: mov       dword ptr fs:[0], ecx
0042e721: add       esp, 0x24
0042e724: ret       0xc
0042e727: nop       
0042e728: nop       
0042e729: nop       
0042e72a: nop       
0042e72b: nop       
0042e72c: nop       
0042e72d: nop       
0042e72e: nop       
0042e72f: nop       
0042e730: mov       cl, byte ptr [0x7103a0]
0042e736: mov       al, 1
0042e738: test      al, cl
0042e73a: jne       0x42e744
0042e73c: or        cl, al
0042e73e: mov       byte ptr [0x7103a0], cl
0042e744: jmp       0x42e750
0042e749: nop       
0042e74a: nop       
0042e74b: nop       
0042e74c: nop       
0042e74d: nop       
0042e74e: nop       
0042e74f: nop       
0042e750: push      0x401ba0
0042e755: call      0x60a57b
0042e75a: pop       ecx
0042e75b: ret       
0042e75c: nop       
0042e75d: nop       
0042e75e: nop       
0042e75f: nop       
0042e760: call      0x42e770
0042e765: jmp       0x42e930
0042e76a: nop       
0042e76b: nop       
0042e76c: nop       
0042e76d: nop       
0042e76e: nop       
0042e76f: nop       
0042e770: push      -1
0042e772: push      0x6236a8
0042e777: mov       eax, dword ptr fs:[0]
0042e77d: push      eax
0042e77e: mov       dword ptr fs:[0], esp
0042e785: sub       esp, 0x34
0042e788: mov       al, byte ptr [esp + 3]
0042e78c: push      ebx
0042e78d: push      ebp
0042e78e: push      esi
0042e78f: push      edi
0042e790: mov       byte ptr [esp + 0x34], al
0042e794: mov       edi, 0x6b3f70
0042e799: or        ecx, 0xffffffff
0042e79c: xor       eax, eax
0042e79e: xor       ebx, ebx
0042e7a0: repne scasb al, byte ptr es:[edi]
0042e7a2: not       ecx
0042e7a4: dec       ecx
0042e7a5: mov       dword ptr [esp + 0x38], ebx
0042e7a9: push      ecx
0042e7aa: push      0x6b3f70
0042e7af: lea       ecx, [esp + 0x3c]
0042e7b3: mov       dword ptr [esp + 0x44], ebx
0042e7b7: mov       dword ptr [esp + 0x48], ebx
0042e7bb: call      0x4040f0
0042e7c0: mov       cl, byte ptr [esp + 0x13]
0042e7c4: push      ebx
0042e7c5: mov       byte ptr [esp + 0x18], cl
0042e7c9: lea       ecx, [esp + 0x18]
0042e7cd: mov       dword ptr [esp + 0x50], ebx
0042e7d1: call      0x4040a0
0042e7d6: mov       edi, 0x6901ec
0042e7db: or        ecx, 0xffffffff
0042e7de: xor       eax, eax
0042e7e0: push      1
0042e7e2: repne scasb al, byte ptr es:[edi]
0042e7e4: not       ecx
0042e7e6: dec       ecx
0042e7e7: mov       ebp, ecx
0042e7e9: lea       ecx, [esp + 0x18]
0042e7ed: push      ebp
0042e7ee: call      0x401940
0042e7f3: test      al, al
0042e7f5: je        0x42e81b
0042e7f7: mov       edi, dword ptr [esp + 0x18]
0042e7fb: mov       ecx, ebp
0042e7fd: mov       edx, ecx
