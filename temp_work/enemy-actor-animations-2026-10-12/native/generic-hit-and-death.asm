00403700: push      -1
00403702: push      0x61fbb8
00403707: mov       eax, dword ptr fs:[0]
0040370d: push      eax
0040370e: mov       dword ptr fs:[0], esp
00403715: push      ecx
00403716: mov       eax, dword ptr [esp + 0x14]
0040371a: push      esi
0040371b: mov       esi, ecx
0040371d: push      eax
0040371e: mov       dword ptr [esp + 8], esi
00403722: call      0x402960
00403727: mov       ecx, dword ptr [esi + 0x24]
0040372a: mov       dword ptr [esi], 0x64a408
00403730: mov       dword ptr [esp + 0x10], 0
00403738: mov       edx, dword ptr [ecx]
0040373a: call      dword ptr [edx + 0x54]
0040373d: mov       ecx, dword ptr [esp + 8]
00403741: mov       eax, esi
00403743: pop       esi
00403744: mov       dword ptr fs:[0], ecx
0040374b: add       esp, 0x10
0040374e: ret       4
00403751: nop       
00403752: nop       
00403753: nop       
00403754: nop       
00403755: nop       
00403756: nop       
00403757: nop       
00403758: nop       
00403759: nop       
0040375a: nop       
0040375b: nop       
0040375c: nop       
0040375d: nop       
0040375e: nop       
0040375f: nop       
00403760: push      esi
00403761: mov       esi, ecx
00403763: call      0x403780
00403768: test      byte ptr [esp + 8], 1
0040376d: je        0x403778
0040376f: push      esi
00403770: call      0x5fe5f0
00403775: add       esp, 4
00403778: mov       eax, esi
0040377a: pop       esi
0040377b: ret       4
0040377e: nop       
0040377f: nop       
00403780: push      -1
00403782: push      0x61fbd8
00403787: mov       eax, dword ptr fs:[0]
0040378d: push      eax
0040378e: mov       dword ptr fs:[0], esp
00403795: push      ecx
00403796: push      esi
00403797: mov       esi, ecx
00403799: mov       dword ptr [esp + 4], esi
0040379d: mov       dword ptr [esi], 0x64a408
004037a3: mov       ecx, dword ptr [esi + 0x24]
004037a6: mov       dword ptr [esp + 0x10], 0
004037ae: mov       eax, dword ptr [ecx]
004037b0: call      dword ptr [eax + 0x58]
004037b3: mov       ecx, esi
004037b5: mov       dword ptr [esp + 0x10], 0xffffffff
004037bd: call      0x4029b0
004037c2: mov       ecx, dword ptr [esp + 8]
004037c6: pop       esi
004037c7: mov       dword ptr fs:[0], ecx
004037ce: add       esp, 0x10
004037d1: ret       
004037d2: nop       
004037d3: nop       
004037d4: nop       
004037d5: nop       
004037d6: nop       
004037d7: nop       
004037d8: nop       
004037d9: nop       
004037da: nop       
004037db: nop       
004037dc: nop       
004037dd: nop       
004037de: nop       
004037df: nop       
004037e0: push      esi
004037e1: mov       esi, ecx
004037e3: push      3
004037e5: mov       ecx, dword ptr [esi + 0x24]
004037e8: mov       eax, dword ptr [ecx]
004037ea: call      dword ptr [eax + 0xbc]
004037f0: mov       ecx, dword ptr [esi + 0x24]
004037f3: push      0x7f7fffff
004037f8: push      0
004037fa: push      4
004037fc: mov       edx, dword ptr [ecx]
004037fe: call      dword ptr [edx + 0x8c]
00403804: pop       esi
00403805: ret       4
00403808: nop       
00403809: nop       
0040380a: nop       
0040380b: nop       
0040380c: nop       
0040380d: nop       
0040380e: nop       
0040380f: nop       
00403810: push      esi
00403811: mov       esi, ecx
00403813: mov       ecx, dword ptr [esi + 0x24]
00403816: call      0x423700
0040381b: mov       ecx, eax
0040381d: call      0x4a0d00
00403822: test      al, al
00403824: je        0x40382d
00403826: mov       ecx, esi
00403828: call      0x402d00
0040382d: pop       esi
0040382e: ret       8
00403831: nop       
00403832: nop       
00403833: nop       
00403834: nop       
00403835: nop       
00403836: nop       
00403837: nop       
00403838: nop       
00403839: nop       
0040383a: nop       
0040383b: nop       
0040383c: nop       
0040383d: nop       
0040383e: nop       
0040383f: nop       
00403840: mov       eax, dword ptr fs:[0]
00403846: push      -1
00403848: push      0x61fbf8
0040384d: push      eax
0040384e: mov       eax, dword ptr [esp + 0x10]
00403852: mov       dword ptr fs:[0], esp
00403859: push      esi
0040385a: mov       esi, ecx
0040385c: push      eax
0040385d: call      0x402960
00403862: mov       ecx, dword ptr [esp + 4]
00403866: or        eax, 0xffffffff
00403869: mov       dword ptr [esi + 0x28], eax
0040386c: mov       dword ptr [esi + 0x2c], eax
0040386f: mov       dword ptr [esi + 0x30], 0x3f800000
00403876: mov       byte ptr [esi + 0x34], 1
0040387a: mov       dword ptr [esi], 0x64a418
00403880: mov       eax, esi
00403882: mov       dword ptr fs:[0], ecx
00403889: pop       esi
0040388a: add       esp, 0xc
0040388d: ret       4
00403890: push      ebx
00403891: push      esi
00403892: mov       esi, ecx
00403894: mov       ecx, dword ptr [esi + 0x24]
00403897: call      0x425070
0040389c: mov       ebx, eax
0040389e: test      ebx, ebx
004038a0: je        0x4038f4
004038a2: mov       ecx, dword ptr [esi + 0x24]
004038a5: mov       eax, dword ptr [ecx]
004038a7: call      dword ptr [eax + 0xb4]
004038ad: cmp       eax, 0x13
004038b0: ja        0x4038d1
004038b2: jmp       dword ptr [eax*4 + 0x403900]
004038b9: fld       dword ptr [0x64a434]
004038bf: jmp       0x4038d7
004038c1: fld       dword ptr [0x64a430]
004038c7: jmp       0x4038d7
004038c9: fld       dword ptr [0x64a42c]
004038cf: jmp       0x4038d7
004038d1: fld       dword ptr [0x64a354]
004038d7: push      edi
004038d8: mov       edi, dword ptr [esi + 0x24]
004038db: call      0x60ab20
004038e0: mov       edx, dword ptr [edi]
004038e2: push      eax
004038e3: mov       ecx, edi
004038e5: call      dword ptr [edx + 0x9c]
004038eb: push      eax
004038ec: mov       ecx, ebx
004038ee: call      0x46e9f0
004038f3: pop       edi
004038f4: mov       eax, dword ptr [esi]
004038f6: mov       ecx, esi
004038f8: call      dword ptr [eax + 0xc]
004038fb: pop       esi
004038fc: pop       ebx
004038fd: ret       4
00403900: sar       dword ptr [eax], 1
00403902: inc       eax
00403903: add       byte ptr [ecx - 0x3effbfc8], bh
00403909: cmp       byte ptr [eax], al
0040390c: sar       dword ptr [eax], 1
0040390e: inc       eax
0040390f: add       byte ptr [ecx - 0x3effbfc8], bh
00403915: cmp       byte ptr [eax], al
00403918: sar       dword ptr [eax], 1
0040391a: inc       eax
0040391b: add       byte ptr [ecx - 0x3effbfc8], bh
00403921: cmp       byte ptr [eax], al
00403924: leave     
00403925: cmp       byte ptr [eax], al
00403928: leave     
00403929: cmp       byte ptr [eax], al
0040392c: leave     
0040392d: cmp       byte ptr [eax], al
00403930: sar       dword ptr [eax], 0x40
00403933: add       cl, al
00403935: cmp       byte ptr [eax], al
00403938: mov       ecx, 0xc1004038
0040393d: cmp       byte ptr [eax], al
00403940: leave     
00403941: cmp       byte ptr [eax], al
00403944: sar       dword ptr [eax], 0x40
00403947: add       cl, dl
00403949: cmp       byte ptr [eax], al
0040394c: sar       dword ptr [eax], 1
0040394e: inc       eax
0040394f: add       byte ptr [ecx], ah
00403953: add       byte ptr [eax], al
00403955: add       byte ptr [edx - 1], ch
00403958: push      0x61fc18
0040395d: push      eax
0040395e: mov       dword ptr fs:[0], esp
00403965: sub       esp, 0x14
00403968: push      ebx
00403969: push      esi
0040396a: push      edi
0040396b: mov       esi, ecx
0040396d: call      0x402cf0
00403972: xor       ebx, ebx
00403974: sub       eax, ebx
00403976: je        0x403aef
0040397c: dec       eax
0040397d: je        0x403a4f
00403983: mov       al, byte ptr [esp + 0x34]
00403987: mov       edi, 0x68d6cc
0040398c: mov       byte ptr [esp + 0x10], al
00403990: or        ecx, 0xffffffff
00403993: xor       eax, eax
00403995: push      ebp
00403996: repne scasb al, byte ptr es:[edi]
00403998: not       ecx
0040399a: dec       ecx
0040399b: push      1
0040399d: mov       ebp, ecx
0040399f: lea       ecx, [esp + 0x18]
004039a3: push      ebp
004039a4: mov       dword ptr [esp + 0x20], ebx
004039a8: mov       dword ptr [esp + 0x24], ebx
004039ac: mov       dword ptr [esp + 0x28], ebx
004039b0: call      0x401940
004039b5: test      al, al
004039b7: je        0x4039dd
004039b9: mov       edi, dword ptr [esp + 0x18]
004039bd: mov       ecx, ebp
004039bf: mov       edx, ecx
004039c1: mov       esi, 0x68d6cc
004039c6: shr       ecx, 2
004039c9: rep movsd dword ptr es:[edi], dword ptr [esi]
004039cb: mov       ecx, edx
004039cd: and       ecx, 3
004039d0: rep movsb byte ptr es:[edi], byte ptr [esi]
004039d2: mov       eax, dword ptr [esp + 0x18]
004039d6: mov       dword ptr [esp + 0x1c], ebp
004039da: mov       byte ptr [eax + ebp], bl
004039dd: lea       ecx, [esp + 0x14]
004039e1: mov       dword ptr [esp + 0x2c], ebx
004039e5: push      ecx
004039e6: push      0x1ec
004039eb: push      0x68d584
004039f0: push      0x68d2d0
004039f5: call      0x5a07f0
004039fa: call      eax
004039fc: mov       eax, dword ptr [esp + 0x28]
00403a00: add       esp, 0x10
00403a03: cmp       eax, ebx
00403a05: pop       ebp
00403a06: je        0x403b09
00403a0c: lea       ecx, [eax - 1]
00403a0f: mov       al, byte ptr [eax - 1]
00403a12: cmp       al, bl
00403a14: je        0x403a32
00403a16: cmp       al, 0xff
00403a18: je        0x403a32
00403a1a: dec       al
00403a1c: pop       edi
00403a1d: pop       esi
00403a1e: mov       byte ptr [ecx], al
00403a20: pop       ebx
00403a21: mov       ecx, dword ptr [esp + 0x14]
00403a25: mov       dword ptr fs:[0], ecx
00403a2c: add       esp, 0x20
00403a2f: ret       8
00403a32: push      ecx
00403a33: call      0x5fe5f0
00403a38: add       esp, 4
00403a3b: pop       edi
00403a3c: pop       esi
00403a3d: pop       ebx
00403a3e: mov       ecx, dword ptr [esp + 0x14]
00403a42: mov       dword ptr fs:[0], ecx
00403a49: add       esp, 0x20
00403a4c: ret       8
00403a4f: mov       ecx, dword ptr [esi + 0x28]
00403a52: mov       dl, 1
00403a54: cmp       ecx, -1
00403a57: mov       dword ptr [esp + 0xc], ecx
00403a5b: je        0x403aa0
00403a5d: mov       eax, dword ptr [esi + 0x2c]
00403a60: cmp       eax, -1
00403a63: jne       0x403a77
00403a65: mov       eax, dword ptr [esp + 0x34]
00403a69: mov       dword ptr [esi + 0x30], 0x3f800000
00403a70: add       ecx, eax
00403a72: mov       dword ptr [esi + 0x2c], ecx
00403a75: jmp       0x403aa0
00403a77: mov       edi, dword ptr [esp + 0x34]
00403a7b: cmp       edi, eax
00403a7d: jle       0x403a86
00403a7f: mov       dword ptr [esi + 0x30], ebx
00403a82: xor       dl, dl
00403a84: jmp       0x403aa0
00403a86: cmp       ecx, ebx
00403a88: jle       0x403a9d
00403a8a: sub       eax, edi
00403a8c: mov       dword ptr [esp + 0x34], eax
00403a90: fild      dword ptr [esp + 0x34]
00403a94: fidiv     dword ptr [esp + 0xc]
00403a98: fstp      dword ptr [esi + 0x30]
00403a9b: jmp       0x403aa0
00403a9d: mov       dword ptr [esi + 0x30], ebx
00403aa0: mov       byte ptr [esi + 0x34], dl
00403aa3: mov       ecx, dword ptr [esi + 0x24]
00403aa6: cmp       dl, bl
00403aa8: je        0x403ad3
00403aaa: fld       dword ptr [esi + 0x30]
00403aad: fmul      dword ptr [0x64a438]
00403ab3: mov       edx, dword ptr [ecx]
00403ab5: push      ecx
00403ab6: fstp      dword ptr [esp]
00403ab9: call      dword ptr [edx + 0xac]
00403abf: pop       edi
00403ac0: pop       esi
00403ac1: pop       ebx
00403ac2: mov       ecx, dword ptr [esp + 0x14]
00403ac6: mov       dword ptr fs:[0], ecx
00403acd: add       esp, 0x20
00403ad0: ret       8
00403ad3: mov       eax, dword ptr [ecx]
00403ad5: call      dword ptr [eax + 0xb0]
00403adb: pop       edi
00403adc: pop       esi
00403add: pop       ebx
00403ade: mov       ecx, dword ptr [esp + 0x14]
00403ae2: mov       dword ptr fs:[0], ecx
00403ae9: add       esp, 0x20
00403aec: ret       8
00403aef: mov       ecx, dword ptr [esi + 0x24]
00403af2: call      0x423700
00403af7: mov       ecx, eax
00403af9: call      0x4a0d00
00403afe: test      al, al
00403b00: je        0x403b09
00403b02: mov       edx, dword ptr [esi]
00403b04: mov       ecx, esi
00403b06: call      dword ptr [edx + 0x10]
00403b09: mov       ecx, dword ptr [esp + 0x20]
00403b0d: pop       edi
00403b0e: pop       esi
00403b0f: pop       ebx
00403b10: mov       dword ptr fs:[0], ecx
00403b17: add       esp, 0x20
00403b1a: ret       8
00403b1d: nop       
00403b1e: nop       
00403b1f: nop       
00403b20: push      esi
00403b21: mov       esi, ecx
00403b23: push      0x7f7fffff
00403b28: push      0
00403b2a: mov       ecx, dword ptr [esi + 0x24]
00403b2d: push      5
00403b2f: mov       eax, dword ptr [ecx]
00403b31: call      dword ptr [eax + 0x8c]
00403b37: push      0
00403b39: push      0
00403b3b: mov       ecx, esi
00403b3d: call      0x402a10
00403b42: pop       esi
00403b43: ret       
00403b44: nop       
00403b45: nop       
00403b46: nop       
00403b47: nop       
00403b48: nop       
00403b49: nop       
00403b4a: nop       
00403b4b: nop       
00403b4c: nop       
00403b4d: nop       
00403b4e: nop       
00403b4f: nop       
00403b50: push      esi
00403b51: mov       esi, ecx
00403b53: mov       ecx, dword ptr [esi + 0x24]
00403b56: mov       eax, dword ptr [ecx]
00403b58: call      dword ptr [eax + 0x9c]
00403b5e: mov       ecx, eax
00403b60: mov       byte ptr [eax + 0x208], 0
00403b67: call      0x49b8d0
00403b6c: mov       ecx, dword ptr [esi + 0x24]
00403b6f: mov       edx, dword ptr [ecx]
00403b71: call      dword ptr [edx + 0x9c]
00403b77: mov       ecx, eax
00403b79: mov       byte ptr [eax + 0x209], 0
00403b80: call      0x49b8d0
00403b85: mov       ecx, dword ptr [esi + 0x24]
00403b88: push      0x6b9760
00403b8d: call      0x505400
00403b92: push      0x1388
00403b97: lea       ecx, [esi + 0x28]
00403b9a: call      0x4041b0
00403b9f: push      0
00403ba1: push      1
00403ba3: mov       ecx, esi
00403ba5: call      0x402a10
00403baa: pop       esi
00403bab: ret       
00403bac: nop       
00403bad: nop       
00403bae: nop       
00403baf: nop       
00403bb0: push      -1
00403bb2: push      0x61fc40
00403bb7: mov       eax, dword ptr fs:[0]
00403bbd: push      eax
00403bbe: mov       dword ptr fs:[0], esp
00403bc5: sub       esp, 0x14
00403bc8: push      ebx
00403bc9: push      esi
00403bca: push      edi
00403bcb: mov       edi, dword ptr [esp + 0x30]
00403bcf: mov       ebx, ecx
00403bd1: push      edi
00403bd2: mov       dword ptr [esp + 0x10], ebx
00403bd6: call      0x402960
00403bdb: xor       esi, esi
00403bdd: mov       ecx, edi
00403bdf: mov       dword ptr [esp + 0x28], esi
00403be3: mov       dword ptr [ebx], 0x64a440
00403be9: call      0x422da0
00403bee: cmp       dword ptr [eax + 0x64], esi
00403bf1: jg        0x403c9d
00403bf7: mov       al, byte ptr [esp + 0x30]
00403bfb: mov       edi, 0x6b3f70
00403c00: mov       byte ptr [esp + 0x10], al
00403c04: or        ecx, 0xffffffff
00403c07: xor       eax, eax
00403c09: push      ebp
00403c0a: repne scasb al, byte ptr es:[edi]
00403c0c: not       ecx
00403c0e: dec       ecx
00403c0f: push      1
00403c11: mov       ebp, ecx
00403c13: lea       ecx, [esp + 0x18]
00403c17: push      ebp
00403c18: mov       dword ptr [esp + 0x20], esi
00403c1c: mov       dword ptr [esp + 0x24], esi
00403c20: mov       dword ptr [esp + 0x28], esi
00403c24: call      0x401940
00403c29: test      al, al
00403c2b: je        0x403c54
00403c2d: mov       edi, dword ptr [esp + 0x18]
00403c31: mov       ecx, ebp
00403c33: mov       edx, ecx
00403c35: mov       esi, 0x6b3f70
00403c3a: shr       ecx, 2
00403c3d: rep movsd dword ptr es:[edi], dword ptr [esi]
00403c3f: mov       ecx, edx
00403c41: and       ecx, 3
00403c44: rep movsb byte ptr es:[edi], byte ptr [esi]
00403c46: mov       eax, dword ptr [esp + 0x18]
00403c4a: mov       dword ptr [esp + 0x1c], ebp
00403c4e: xor       esi, esi
00403c50: mov       byte ptr [eax + ebp], 0
00403c54: lea       ecx, [esp + 0x14]
00403c58: mov       byte ptr [esp + 0x2c], 1
00403c5d: push      ecx
00403c5e: push      0x20b
00403c63: push      0x68d584
00403c68: push      0x68d704
00403c6d: call      0x5a07f0
00403c72: call      eax
00403c74: mov       eax, dword ptr [esp + 0x28]
00403c78: add       esp, 0x10
00403c7b: cmp       eax, esi
00403c7d: pop       ebp
00403c7e: je        0x403c9d
00403c80: lea       ecx, [eax - 1]
00403c83: mov       al, byte ptr [eax - 1]
00403c86: test      al, al
00403c88: je        0x403c94
00403c8a: cmp       al, 0xff
00403c8c: je        0x403c94
00403c8e: dec       al
00403c90: mov       byte ptr [ecx], al
00403c92: jmp       0x403c9d
00403c94: push      ecx
00403c95: call      0x5fe5f0
00403c9a: add       esp, 4
00403c9d: mov       ecx, dword ptr [esp + 0x20]
00403ca1: pop       edi
00403ca2: mov       eax, ebx
00403ca4: pop       esi
00403ca5: pop       ebx
00403ca6: mov       dword ptr fs:[0], ecx
00403cad: add       esp, 0x20
00403cb0: ret       4
00403cb3: nop       
00403cb4: nop       
00403cb5: nop       
00403cb6: nop       
00403cb7: nop       
00403cb8: nop       
00403cb9: nop       
00403cba: nop       
00403cbb: nop       
00403cbc: nop       
00403cbd: nop       
00403cbe: nop       
00403cbf: nop       
00403cc0: push      ebx
00403cc1: push      esi
00403cc2: mov       esi, ecx
00403cc4: mov       ecx, dword ptr [esi + 0x24]
00403cc7: call      0x425070
00403ccc: mov       ebx, eax
00403cce: test      ebx, ebx
00403cd0: je        0x403d24
00403cd2: mov       ecx, dword ptr [esi + 0x24]
00403cd5: mov       eax, dword ptr [ecx]
00403cd7: call      dword ptr [eax + 0xb4]
00403cdd: cmp       eax, 0x13
00403ce0: ja        0x403d01
00403ce2: jmp       dword ptr [eax*4 + 0x403d48]
00403ce9: fld       dword ptr [0x64a434]
00403cef: jmp       0x403d07
00403cf1: fld       dword ptr [0x64a430]
00403cf7: jmp       0x403d07
00403cf9: fld       dword ptr [0x64a42c]
00403cff: jmp       0x403d07
00403d01: fld       dword ptr [0x64a354]
00403d07: push      edi
00403d08: mov       edi, dword ptr [esi + 0x24]
00403d0b: call      0x60ab20
00403d10: mov       edx, dword ptr [edi]
00403d12: push      eax
00403d13: mov       ecx, edi
00403d15: call      dword ptr [edx + 0x9c]
00403d1b: push      eax
00403d1c: mov       ecx, ebx
00403d1e: call      0x46e9f0
00403d23: pop       edi
00403d24: mov       eax, dword ptr [esi]
00403d26: mov       ecx, esi
00403d28: call      dword ptr [eax + 0xc]
00403d2b: mov       ecx, dword ptr [esi + 0x24]
00403d2e: push      0x6b9760
00403d33: call      0x505400
00403d38: mov       ecx, dword ptr [esi + 0x24]
00403d3b: mov       edx, dword ptr [ecx]
00403d3d: call      dword ptr [edx + 0xb0]
00403d43: pop       esi
00403d44: pop       ebx
00403d45: ret       4
00403d48: add       dword ptr [0x3ce90040], edi
00403d4e: inc       eax
00403d4f: add       cl, dh
00403d51: cmp       al, 0x40
00403d53: add       byte ptr [ecx], al
00403d55: cmp       eax, 0x3ce90040
00403d5a: inc       eax
00403d5b: add       cl, dh
00403d5d: cmp       al, 0x40
00403d5f: add       byte ptr [ecx], al
00403d61: cmp       eax, 0x3ce90040
00403d66: inc       eax
00403d67: add       cl, dh
00403d69: cmp       al, 0x40
00403d6b: add       cl, bh
00403d6d: cmp       al, 0x40
00403d6f: add       cl, bh
00403d71: cmp       al, 0x40
00403d73: add       cl, bh
00403d75: cmp       al, 0x40
00403d77: add       cl, dh
00403d79: cmp       al, 0x40
00403d7b: add       cl, dh
00403d7d: cmp       al, 0x40
00403d7f: add       cl, ch
00403d81: cmp       al, 0x40
00403d83: add       cl, dh
00403d85: cmp       al, 0x40
00403d87: add       cl, bh
00403d89: cmp       al, 0x40
00403d8b: add       cl, dh
00403d8d: cmp       al, 0x40
00403d8f: add       byte ptr [ecx], al
00403d91: cmp       eax, 0x3d010040
00403d96: inc       eax
00403d97: add       byte ptr [eax - 0x6f6f6f70], dl
00403d9d: nop       
00403d9e: nop       
00403d9f: nop       
00403da0: sub       esp, 0x1c
00403da3: push      ebx
00403da4: push      ebp
00403da5: push      esi
00403da6: mov       esi, dword ptr [0x6b915c]
00403dac: test      esi, esi
00403dae: mov       ebp, ecx
00403db0: jne       0x403db9
00403db2: call      0x4bc480
00403db7: mov       esi, eax
00403db9: fld       dword ptr [esi + 0x478]
00403dbf: fcomp     dword ptr [0x64a450]
00403dc5: fnstsw    ax
00403dc7: test      ah, 0x40
00403dca: je        0x403de6
00403dcc: lea       eax, [esp + 0xf]
00403dd0: lea       ecx, [esi + 0x42c]
00403dd6: push      eax
00403dd7: push      ecx
00403dd8: call      0x5ad390
00403ddd: fstp      dword ptr [esi + 0x478]
00403de3: add       esp, 8
00403de6: mov       ecx, dword ptr [ebp + 0x24]
00403de9: call      0x422da0
00403dee: mov       ebx, eax
00403df0: xor       eax, eax
00403df2: mov       dword ptr [esp + 0x18], ebx
00403df6: mov       dword ptr [esp + 0x10], eax
00403dfa: mov       ecx, dword ptr [ebx + 0x64]
00403dfd: test      ecx, ecx
00403dff: jle       0x403eb8
00403e05: push      edi
00403e06: mov       edx, dword ptr [ebx + 0x150]
00403e0c: mov       eax, dword ptr [edx + eax*4]
00403e0f: mov       edi, dword ptr [eax + 0x28]
00403e12: mov       esi, dword ptr [eax + 0x24]
00403e15: cmp       esi, edi
00403e17: jge       0x403e28
00403e19: call      0x60a4a0
00403e1e: sub       edi, esi
00403e20: cdq       
00403e21: inc       edi
00403e22: idiv      edi
00403e24: add       edx, esi
00403e26: jmp       0x403e3b
00403e28: jle       0x403e39
00403e2a: call      0x60a4a0
00403e2f: sub       esi, edi
00403e31: cdq       
00403e32: inc       esi
00403e33: idiv      esi
00403e35: add       edx, edi
00403e37: jmp       0x403e3b
00403e39: mov       edx, esi
00403e3b: test      edx, edx
00403e3d: jle       0x403ea3
00403e3f: mov       dword ptr [esp + 0x18], edx
00403e43: mov       ecx, dword ptr [ebp + 0x24]
00403e46: mov       edi, dword ptr [ebx + 0x150]
00403e4c: mov       eax, dword ptr [ecx]
00403e4e: call      dword ptr [eax + 0x9c]
00403e54: mov       esi, dword ptr [ebp + 0x24]
00403e57: lea       ecx, [esp + 0x20]
00403e5b: push      0
00403e5d: push      ecx
00403e5e: mov       edx, dword ptr [esi]
00403e60: mov       ecx, esi
00403e62: mov       ebx, eax
00403e64: call      dword ptr [edx + 0xa4]
00403e6a: mov       ecx, eax
00403e6c: call      0x49bc80
00403e71: mov       edx, dword ptr [esi]
00403e73: push      eax
00403e74: mov       eax, dword ptr [esp + 0x1c]
00403e78: add       ebx, 0x11c
00403e7e: mov       ecx, dword ptr [edi + eax*4]
00403e81: push      ecx
00403e82: push      ebx
00403e83: mov       ecx, esi
00403e85: call      dword ptr [edx + 0x9c]
00403e8b: push      eax
00403e8c: call      0x4a7360
00403e91: mov       eax, dword ptr [esp + 0x2c]
00403e95: mov       ebx, dword ptr [esp + 0x30]
00403e99: add       esp, 0x14
00403e9c: dec       eax
00403e9d: mov       dword ptr [esp + 0x18], eax
00403ea1: jne       0x403e43
00403ea3: mov       eax, dword ptr [esp + 0x14]
00403ea7: mov       ecx, dword ptr [ebx + 0x64]
00403eaa: inc       eax
00403eab: cmp       eax, ecx
00403ead: mov       dword ptr [esp + 0x14], eax
00403eb1: jl        0x403e06
00403eb7: pop       edi
00403eb8: pop       esi
00403eb9: pop       ebp
00403eba: pop       ebx
00403ebb: add       esp, 0x1c
00403ebe: ret       
00403ebf: nop       
00403ec0: ret       8
00403ec3: nop       
00403ec4: nop       
00403ec5: nop       
00403ec6: nop       
00403ec7: nop       
00403ec8: nop       
00403ec9: nop       
00403eca: nop       
00403ecb: nop       
00403ecc: nop       
00403ecd: nop       
00403ece: nop       
00403ecf: nop       
