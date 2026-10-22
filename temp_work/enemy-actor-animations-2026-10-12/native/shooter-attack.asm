0040a1c0: add       esp, 0x10
0040a1c3: ret       
0040a1c4: nop       
0040a1c5: nop       
0040a1c6: nop       
0040a1c7: nop       
0040a1c8: nop       
0040a1c9: nop       
0040a1ca: nop       
0040a1cb: nop       
0040a1cc: nop       
0040a1cd: nop       
0040a1ce: nop       
0040a1cf: nop       
0040a1d0: push      esi
0040a1d1: push      edi
0040a1d2: mov       edi, dword ptr [esp + 0xc]
0040a1d6: mov       esi, ecx
0040a1d8: push      edi
0040a1d9: call      0x40ab10
0040a1de: mov       dword ptr [esi + 0x28], edi
0040a1e1: mov       dword ptr [esi], 0x64a9ac
0040a1e7: mov       eax, esi
0040a1e9: pop       edi
0040a1ea: pop       esi
0040a1eb: ret       4
0040a1ee: nop       
0040a1ef: nop       
0040a1f0: jmp       0x4036a0
0040a1f5: nop       
0040a1f6: nop       
0040a1f7: nop       
0040a1f8: nop       
0040a1f9: nop       
0040a1fa: nop       
0040a1fb: nop       
0040a1fc: nop       
0040a1fd: nop       
0040a1fe: nop       
0040a1ff: nop       
0040a200: mov       eax, dword ptr fs:[0]
0040a206: push      -1
0040a208: push      0x6207d8
0040a20d: push      eax
0040a20e: mov       dword ptr fs:[0], esp
0040a215: mov       eax, dword ptr [esp + 0x10]
0040a219: sub       esp, 0x10
0040a21c: push      ebx
0040a21d: push      esi
0040a21e: push      edi
0040a21f: mov       edi, dword ptr [esp + 0x30]
0040a223: push      edi
0040a224: mov       esi, ecx
0040a226: push      eax
0040a227: call      0x402a80
0040a22c: mov       ecx, eax
0040a22e: call      0x402d20
0040a233: mov       ecx, esi
0040a235: call      0x402cf0
0040a23a: xor       ebx, ebx
0040a23c: sub       eax, ebx
0040a23e: je        0x40a370
0040a244: dec       eax
0040a245: je        0x40a317
0040a24b: mov       cl, byte ptr [esp + 0x30]
0040a24f: mov       edi, 0x68e2b4
0040a254: mov       byte ptr [esp + 0xc], cl
0040a258: or        ecx, 0xffffffff
0040a25b: xor       eax, eax
0040a25d: push      ebp
0040a25e: repne scasb al, byte ptr es:[edi]
0040a260: not       ecx
0040a262: dec       ecx
0040a263: push      1
0040a265: mov       ebp, ecx
0040a267: lea       ecx, [esp + 0x14]
0040a26b: push      ebp
0040a26c: mov       dword ptr [esp + 0x1c], ebx
0040a270: mov       dword ptr [esp + 0x20], ebx
0040a274: mov       dword ptr [esp + 0x24], ebx
0040a278: call      0x401940
0040a27d: test      al, al
0040a27f: je        0x40a2a5
0040a281: mov       edi, dword ptr [esp + 0x14]
0040a285: mov       ecx, ebp
0040a287: mov       edx, ecx
0040a289: mov       esi, 0x68e2b4
0040a28e: shr       ecx, 2
0040a291: rep movsd dword ptr es:[edi], dword ptr [esi]
0040a293: mov       ecx, edx
0040a295: and       ecx, 3
0040a298: rep movsb byte ptr es:[edi], byte ptr [esi]
0040a29a: mov       eax, dword ptr [esp + 0x14]
0040a29e: mov       dword ptr [esp + 0x18], ebp
0040a2a2: mov       byte ptr [eax + ebp], bl
0040a2a5: lea       ecx, [esp + 0x10]
0040a2a9: mov       dword ptr [esp + 0x28], ebx
0040a2ad: push      ecx
0040a2ae: push      0x8a
0040a2b3: push      0x68e248
0040a2b8: push      0x68d2d0
0040a2bd: call      0x5a07f0
0040a2c2: call      eax
0040a2c4: mov       eax, dword ptr [esp + 0x24]
0040a2c8: add       esp, 0x10
0040a2cb: cmp       eax, ebx
0040a2cd: pop       ebp
0040a2ce: je        0x40a3b1
0040a2d4: lea       ecx, [eax - 1]
0040a2d7: mov       al, byte ptr [eax - 1]
0040a2da: cmp       al, bl
0040a2dc: je        0x40a2fa
0040a2de: cmp       al, 0xff
0040a2e0: je        0x40a2fa
0040a2e2: dec       al
0040a2e4: pop       edi
0040a2e5: pop       esi
0040a2e6: mov       byte ptr [ecx], al
0040a2e8: pop       ebx
0040a2e9: mov       ecx, dword ptr [esp + 0x10]
0040a2ed: mov       dword ptr fs:[0], ecx
0040a2f4: add       esp, 0x1c
0040a2f7: ret       8
0040a2fa: push      ecx
0040a2fb: call      0x5fe5f0
0040a300: add       esp, 4
0040a303: pop       edi
0040a304: pop       esi
0040a305: pop       ebx
0040a306: mov       ecx, dword ptr [esp + 0x10]
0040a30a: mov       dword ptr fs:[0], ecx
0040a311: add       esp, 0x1c
0040a314: ret       8
0040a317: mov       ecx, esi
0040a319: call      0x402a80
0040a31e: mov       ecx, eax
0040a320: call      0x402d10
0040a325: test      al, al
0040a327: je        0x40a3b1
0040a32d: mov       ecx, dword ptr [esi + 0x28]
0040a330: push      edi
0040a331: call      0x422f30
0040a336: test      al, al
0040a338: jne       0x40a355
0040a33a: mov       ecx, esi
0040a33c: call      0x402d00
0040a341: pop       edi
0040a342: pop       esi
0040a343: pop       ebx
0040a344: mov       ecx, dword ptr [esp + 0x10]
0040a348: mov       dword ptr fs:[0], ecx
0040a34f: add       esp, 0x1c
0040a352: ret       8
0040a355: mov       edx, dword ptr [esi]
0040a357: mov       ecx, esi
0040a359: call      dword ptr [edx + 0x10]
0040a35c: pop       edi
0040a35d: pop       esi
0040a35e: pop       ebx
0040a35f: mov       ecx, dword ptr [esp + 0x10]
0040a363: mov       dword ptr fs:[0], ecx
0040a36a: add       esp, 0x1c
0040a36d: ret       8
0040a370: mov       ecx, esi
0040a372: call      0x402a80
0040a377: mov       ecx, eax
0040a379: call      0x402d10
0040a37e: test      al, al
0040a380: je        0x40a3b1
0040a382: mov       ecx, dword ptr [esi + 0x28]
0040a385: push      edi
0040a386: call      0x422f30
0040a38b: test      al, al
0040a38d: jne       0x40a3aa
0040a38f: mov       ecx, esi
0040a391: call      0x402d00
0040a396: pop       edi
0040a397: pop       esi
0040a398: pop       ebx
0040a399: mov       ecx, dword ptr [esp + 0x10]
0040a39d: mov       dword ptr fs:[0], ecx
0040a3a4: add       esp, 0x1c
0040a3a7: ret       8
0040a3aa: mov       eax, dword ptr [esi]
0040a3ac: mov       ecx, esi
0040a3ae: call      dword ptr [eax + 0xc]
0040a3b1: mov       ecx, dword ptr [esp + 0x1c]
0040a3b5: pop       edi
0040a3b6: pop       esi
0040a3b7: pop       ebx
0040a3b8: mov       dword ptr fs:[0], ecx
0040a3bf: add       esp, 0x1c
0040a3c2: ret       8
0040a3c5: nop       
0040a3c6: nop       
0040a3c7: nop       
0040a3c8: nop       
0040a3c9: nop       
0040a3ca: nop       
0040a3cb: nop       
0040a3cc: nop       
0040a3cd: nop       
0040a3ce: nop       
0040a3cf: nop       
0040a3d0: push      -1
0040a3d2: push      0x6207fb
0040a3d7: mov       eax, dword ptr fs:[0]
0040a3dd: push      eax
0040a3de: mov       dword ptr fs:[0], esp
0040a3e5: push      ecx
0040a3e6: push      esi
0040a3e7: mov       esi, ecx
0040a3e9: push      0x34
0040a3eb: call      0x60a0b5
0040a3f0: add       esp, 4
0040a3f3: mov       dword ptr [esp + 4], eax
0040a3f7: test      eax, eax
0040a3f9: mov       dword ptr [esp + 0x10], 0
0040a401: je        0x40a410
0040a403: mov       ecx, dword ptr [esi + 0x28]
0040a406: push      ecx
0040a407: mov       ecx, eax
0040a409: call      0x40a4c0
0040a40e: jmp       0x40a412
0040a410: xor       eax, eax
0040a412: push      eax
0040a413: push      1
0040a415: mov       ecx, esi
0040a417: mov       dword ptr [esp + 0x18], 0xffffffff
0040a41f: call      0x402a10
0040a424: mov       ecx, dword ptr [esp + 8]
0040a428: pop       esi
0040a429: mov       dword ptr fs:[0], ecx
0040a430: add       esp, 0x10
0040a433: ret       
0040a434: nop       
0040a435: nop       
0040a436: nop       
0040a437: nop       
0040a438: nop       
0040a439: nop       
0040a43a: nop       
0040a43b: nop       
0040a43c: nop       
0040a43d: nop       
0040a43e: nop       
0040a43f: nop       
0040a440: push      -1
0040a442: push      0x62081b
0040a447: mov       eax, dword ptr fs:[0]
0040a44d: push      eax
0040a44e: mov       dword ptr fs:[0], esp
0040a455: push      ecx
0040a456: push      esi
0040a457: push      edi
0040a458: mov       esi, ecx
0040a45a: push      0x38
0040a45c: call      0x60a0b5
0040a461: mov       edi, eax
0040a463: add       esp, 4
0040a466: mov       dword ptr [esp + 8], edi
0040a46a: test      edi, edi
0040a46c: mov       dword ptr [esp + 0x14], 0
0040a474: je        0x40a48f
0040a476: mov       ecx, dword ptr [esi + 0x28]
0040a479: call      0x42b300
0040a47e: mov       eax, dword ptr [eax + 0x38]
0040a481: mov       ecx, dword ptr [esi + 0x28]
0040a484: push      eax
0040a485: push      ecx
0040a486: mov       ecx, edi
0040a488: call      0x403ed0
0040a48d: jmp       0x40a491
0040a48f: xor       eax, eax
0040a491: push      eax
0040a492: push      0
0040a494: mov       ecx, esi
0040a496: mov       dword ptr [esp + 0x1c], 0xffffffff
0040a49e: call      0x402a10
0040a4a3: mov       ecx, dword ptr [esp + 0xc]
0040a4a7: pop       edi
0040a4a8: pop       esi
0040a4a9: mov       dword ptr fs:[0], ecx
0040a4b0: add       esp, 0x10
0040a4b3: ret       
0040a4b4: nop       
0040a4b5: nop       
0040a4b6: nop       
0040a4b7: nop       
0040a4b8: nop       
0040a4b9: nop       
0040a4ba: nop       
0040a4bb: nop       
0040a4bc: nop       
0040a4bd: nop       
0040a4be: nop       
0040a4bf: nop       
0040a4c0: push      esi
0040a4c1: push      edi
0040a4c2: mov       edi, dword ptr [esp + 0xc]
0040a4c6: mov       esi, ecx
0040a4c8: push      edi
0040a4c9: call      0x40a720
0040a4ce: mov       dword ptr [esi + 0x2c], edi
0040a4d1: mov       dword ptr [esi + 0x30], 0
0040a4d8: mov       dword ptr [esi], 0x64a9c4
0040a4de: mov       eax, esi
0040a4e0: pop       edi
0040a4e1: pop       esi
0040a4e2: ret       4
0040a4e5: nop       
0040a4e6: nop       
0040a4e7: nop       
0040a4e8: nop       
0040a4e9: nop       
0040a4ea: nop       
0040a4eb: nop       
0040a4ec: nop       
0040a4ed: nop       
0040a4ee: nop       
0040a4ef: nop       
0040a4f0: mov       eax, dword ptr fs:[0]
0040a4f6: push      -1
0040a4f8: push      0x620838
0040a4fd: push      eax
0040a4fe: mov       dword ptr fs:[0], esp
0040a505: sub       esp, 0x18
0040a508: push      ebx
0040a509: push      esi
0040a50a: mov       esi, ecx
0040a50c: call      0x402cf0
0040a511: xor       ebx, ebx
0040a513: sub       eax, ebx
0040a515: je        0x40a649
0040a51b: dec       eax
0040a51c: je        0x40a5ee
0040a522: mov       al, byte ptr [esp + 0xb]
0040a526: push      ebp
0040a527: push      edi
0040a528: mov       byte ptr [esp + 0x18], al
0040a52c: mov       edi, 0x68d420
0040a531: or        ecx, 0xffffffff
0040a534: xor       eax, eax
0040a536: push      1
0040a538: repne scasb al, byte ptr es:[edi]
0040a53a: not       ecx
0040a53c: dec       ecx
0040a53d: mov       dword ptr [esp + 0x20], ebx
0040a541: mov       ebp, ecx
0040a543: lea       ecx, [esp + 0x1c]
0040a547: push      ebp
0040a548: mov       dword ptr [esp + 0x28], ebx
0040a54c: mov       dword ptr [esp + 0x2c], ebx
0040a550: call      0x401940
0040a555: test      al, al
0040a557: je        0x40a57d
0040a559: mov       edi, dword ptr [esp + 0x1c]
0040a55d: mov       ecx, ebp
0040a55f: mov       edx, ecx
0040a561: mov       esi, 0x68d420
0040a566: shr       ecx, 2
0040a569: rep movsd dword ptr es:[edi], dword ptr [esi]
0040a56b: mov       ecx, edx
0040a56d: and       ecx, 3
0040a570: rep movsb byte ptr es:[edi], byte ptr [esi]
0040a572: mov       eax, dword ptr [esp + 0x1c]
0040a576: mov       dword ptr [esp + 0x20], ebp
0040a57a: mov       byte ptr [eax + ebp], bl
0040a57d: lea       ecx, [esp + 0x18]
0040a581: mov       dword ptr [esp + 0x30], ebx
0040a585: push      ecx
0040a586: push      0xc6
0040a58b: push      0x68e248
0040a590: push      0x68d2d0
0040a595: call      0x5a07f0
0040a59a: call      eax
0040a59c: mov       eax, dword ptr [esp + 0x2c]
0040a5a0: add       esp, 0x10
0040a5a3: cmp       eax, ebx
0040a5a5: pop       edi
0040a5a6: pop       ebp
0040a5a7: je        0x40a687
0040a5ad: lea       ecx, [eax - 1]
0040a5b0: mov       al, byte ptr [eax - 1]
0040a5b3: cmp       al, bl
0040a5b5: je        0x40a5d2
0040a5b7: cmp       al, 0xff
0040a5b9: je        0x40a5d2
0040a5bb: dec       al
0040a5bd: pop       esi
0040a5be: mov       byte ptr [ecx], al
0040a5c0: pop       ebx
0040a5c1: mov       ecx, dword ptr [esp + 0x18]
0040a5c5: mov       dword ptr fs:[0], ecx
0040a5cc: add       esp, 0x24
0040a5cf: ret       8
0040a5d2: push      ecx
0040a5d3: call      0x5fe5f0
0040a5d8: add       esp, 4
0040a5db: pop       esi
0040a5dc: pop       ebx
0040a5dd: mov       ecx, dword ptr [esp + 0x18]
0040a5e1: mov       dword ptr fs:[0], ecx
0040a5e8: add       esp, 0x24
0040a5eb: ret       8
0040a5ee: mov       ecx, dword ptr [esi + 0x2c]
0040a5f1: call      0x423700
0040a5f6: mov       ecx, eax
0040a5f8: call      0x4a0d00
0040a5fd: test      al, al
0040a5ff: je        0x40a687
0040a605: mov       ecx, dword ptr [esi + 0x2c]
0040a608: call      0x42b300
0040a60d: mov       edx, dword ptr [esi + 0x30]
0040a610: mov       ecx, dword ptr [eax + 0x2c]
0040a613: cmp       edx, ecx
0040a615: mov       ecx, esi
0040a617: jl        0x40a631
0040a619: call      0x402d00
0040a61e: pop       esi
0040a61f: pop       ebx
0040a620: mov       ecx, dword ptr [esp + 0x18]
0040a624: mov       dword ptr fs:[0], ecx
0040a62b: add       esp, 0x24
0040a62e: ret       8
0040a631: call      0x40a6b0
0040a636: pop       esi
0040a637: pop       ebx
0040a638: mov       ecx, dword ptr [esp + 0x18]
0040a63c: mov       dword ptr fs:[0], ecx
0040a643: add       esp, 0x24
0040a646: ret       8
0040a649: mov       ecx, dword ptr [esi + 0x2c]
0040a64c: call      0x423700
0040a651: mov       ecx, eax
0040a653: call      0x4a1060
0040a658: mov       ecx, dword ptr [esi + 0x2c]
0040a65b: fstp      dword ptr [esp + 0xc]
0040a65f: call      0x42b300
0040a664: fld       dword ptr [esp + 0xc]
0040a668: fcomp     dword ptr [eax + 0x24]
0040a66b: fnstsw    ax
0040a66d: test      ah, 1
0040a670: jne       0x40a687
0040a672: mov       ecx, esi
0040a674: call      0x4022a0
0040a679: mov       eax, dword ptr [esi + 0x30]
0040a67c: mov       ecx, esi
0040a67e: inc       eax
0040a67f: mov       dword ptr [esi + 0x30], eax
0040a682: call      0x40a6e0
0040a687: mov       ecx, dword ptr [esp + 0x20]
0040a68b: pop       esi
0040a68c: pop       ebx
0040a68d: mov       dword ptr fs:[0], ecx
0040a694: add       esp, 0x24
0040a697: ret       8
0040a69a: nop       
0040a69b: nop       
0040a69c: nop       
0040a69d: nop       
0040a69e: nop       
0040a69f: nop       
0040a6a0: call      0x40a6b0
0040a6a5: ret       4
0040a6a8: nop       
0040a6a9: nop       
0040a6aa: nop       
0040a6ab: nop       
0040a6ac: nop       
0040a6ad: nop       
0040a6ae: nop       
0040a6af: nop       
0040a6b0: push      esi
0040a6b1: push      0
0040a6b3: mov       esi, ecx
0040a6b5: push      0
0040a6b7: call      0x402a10
0040a6bc: mov       ecx, dword ptr [esi + 0x2c]
0040a6bf: push      0x7f7fffff
0040a6c4: push      0
0040a6c6: push      6
0040a6c8: mov       eax, dword ptr [ecx]
0040a6ca: call      dword ptr [eax + 0x8c]
0040a6d0: pop       esi
0040a6d1: ret       
0040a6d2: nop       
0040a6d3: nop       
0040a6d4: nop       
0040a6d5: nop       
0040a6d6: nop       
0040a6d7: nop       
0040a6d8: nop       
0040a6d9: nop       
0040a6da: nop       
0040a6db: nop       
0040a6dc: nop       
0040a6dd: nop       
0040a6de: nop       
0040a6df: nop       
0040a6e0: push      0
0040a6e2: push      1
0040a6e4: call      0x402a10
0040a6e9: ret       
0040a6ea: nop       
0040a6eb: nop       
0040a6ec: nop       
0040a6ed: nop       
0040a6ee: nop       
0040a6ef: nop       
0040a6f0: mov       cl, byte ptr [0x7103a0]
0040a6f6: mov       al, 1
0040a6f8: test      al, cl
0040a6fa: jne       0x40a704
0040a6fc: or        cl, al
0040a6fe: mov       byte ptr [0x7103a0], cl
0040a704: jmp       0x40a710
0040a709: nop       
0040a70a: nop       
0040a70b: nop       
0040a70c: nop       
0040a70d: nop       
0040a70e: nop       
0040a70f: nop       
0040a710: push      0x401ba0
0040a715: call      0x60a57b
0040a71a: pop       ecx
0040a71b: ret       
0040a71c: nop       
0040a71d: nop       
0040a71e: nop       
0040a71f: nop       
