0041e680: aam       0x83
0041e682: in        al, dx
0041e683: or        al, 0x89
0041e685: xor       cl, byte ptr [ebx + 0x408b0470]
0041e68b: or        byte ptr [ecx + 0x42890472], cl
0041e691: or        byte ptr [ebx - 0x74cbdbac], cl
0041e697: les       ebp, ptr [edx + 4]
0041e69a: mov       esi, dword ptr [edx]
0041e69c: push      ecx
0041e69d: mov       dword ptr [eax], esi
0041e69f: mov       dword ptr [esp + 0x40], esp
0041e6a3: mov       esi, dword ptr [edx + 4]
0041e6a6: mov       dword ptr [eax + 4], esi
0041e6a9: mov       edx, dword ptr [edx + 8]
0041e6ac: mov       dword ptr [eax + 8], edx
0041e6af: mov       eax, esp
0041e6b1: push      eax
0041e6b2: call      0x4042e0
0041e6b7: lea       ecx, [esp + 0x28]
0041e6bb: push      ecx
0041e6bc: call      0x44d180
0041e6c1: add       esp, 0x28
0041e6c4: pop       esi
0041e6c5: add       esp, 0x10
0041e6c8: ret       8
0041e6cb: nop       
0041e6cc: nop       
0041e6cd: nop       
0041e6ce: nop       
0041e6cf: nop       
0041e6d0: mov       eax, 0x68f4a8
0041e6d5: ret       
0041e6d6: nop       
0041e6d7: nop       
0041e6d8: nop       
0041e6d9: nop       
0041e6da: nop       
0041e6db: nop       
0041e6dc: nop       
0041e6dd: nop       
0041e6de: nop       
0041e6df: nop       
0041e6e0: push      -1
0041e6e2: push      0x621e28
0041e6e7: mov       eax, dword ptr fs:[0]
0041e6ed: push      eax
0041e6ee: mov       dword ptr fs:[0], esp
0041e6f5: sub       esp, 0x14
0041e6f8: mov       eax, dword ptr [esp + 0x24]
0041e6fc: push      ebx
0041e6fd: mov       dword ptr [esp + 4], ecx
0041e701: push      ebp
0041e702: mov       cl, byte ptr [esp + 0x2c]
0041e706: push      esi
0041e707: mov       esi, dword ptr [eax*4 + 0x64b884]
0041e70e: push      edi
0041e70f: mov       byte ptr [esp + 0x14], cl
0041e713: xor       ebx, ebx
0041e715: mov       edi, esi
0041e717: or        ecx, 0xffffffff
0041e71a: xor       eax, eax
0041e71c: mov       dword ptr [esp + 0x18], ebx
0041e720: mov       dword ptr [esp + 0x1c], ebx
0041e724: mov       dword ptr [esp + 0x20], ebx
0041e728: repne scasb al, byte ptr es:[edi]
0041e72a: not       ecx
0041e72c: dec       ecx
0041e72d: push      1
0041e72f: mov       ebp, ecx
0041e731: lea       ecx, [esp + 0x18]
0041e735: push      ebp
0041e736: call      0x401940
0041e73b: test      al, al
0041e73d: je        0x41e75e
0041e73f: mov       edi, dword ptr [esp + 0x18]
0041e743: mov       ecx, ebp
0041e745: mov       edx, ecx
0041e747: shr       ecx, 2
0041e74a: rep movsd dword ptr es:[edi], dword ptr [esi]
0041e74c: mov       ecx, edx
0041e74e: and       ecx, 3
0041e751: rep movsb byte ptr es:[edi], byte ptr [esi]
0041e753: mov       eax, dword ptr [esp + 0x18]
0041e757: mov       dword ptr [esp + 0x1c], ebp
0041e75b: mov       byte ptr [eax + ebp], bl
0041e75e: mov       ecx, dword ptr [esp + 0x3c]
0041e762: mov       edx, dword ptr [esp + 0x38]
0041e766: push      ecx
0041e767: mov       ecx, dword ptr [esp + 0x14]
0041e76b: lea       eax, [esp + 0x18]
0041e76f: push      edx
0041e770: push      eax
0041e771: mov       dword ptr [esp + 0x38], ebx
0041e775: call      0x423700
0041e77a: mov       ecx, eax
0041e77c: call      0x4a0660
0041e781: mov       eax, dword ptr [esp + 0x18]
0041e785: cmp       eax, ebx
0041e787: je        0x41e7a6
0041e789: lea       ecx, [eax - 1]
0041e78c: mov       al, byte ptr [eax - 1]
0041e78f: cmp       al, bl
0041e791: je        0x41e79d
0041e793: cmp       al, 0xff
0041e795: je        0x41e79d
0041e797: dec       al
0041e799: mov       byte ptr [ecx], al
0041e79b: jmp       0x41e7a6
0041e79d: push      ecx
0041e79e: call      0x5fe5f0
0041e7a3: add       esp, 4
0041e7a6: mov       ecx, dword ptr [esp + 0x24]
0041e7aa: pop       edi
0041e7ab: pop       esi
0041e7ac: pop       ebp
0041e7ad: pop       ebx
0041e7ae: mov       dword ptr fs:[0], ecx
0041e7b5: add       esp, 0x20
0041e7b8: ret       0xc
0041e7bb: nop       
0041e7bc: nop       
0041e7bd: nop       
0041e7be: nop       
0041e7bf: nop       
0041e7c0: mov       eax, dword ptr [esp + 4]
0041e7c4: sub       eax, 2
0041e7c7: je        0x41e7f7
0041e7c9: dec       eax
0041e7ca: je        0x41e7e3
0041e7cc: dec       eax
0041e7cd: jne       0x41e808
0041e7cf: push      0x3f800000
0041e7d4: push      0
0041e7d6: push      0x6b4f80
0041e7db: call      0x423be0
0041e7e0: ret       4
0041e7e3: push      0x3f800000
0041e7e8: push      0
0041e7ea: push      0x6b4fa8
0041e7ef: call      0x423be0
0041e7f4: ret       4
0041e7f7: push      0x3f800000
0041e7fc: push      0
0041e7fe: push      0x6b4fd0
0041e803: call      0x423be0
0041e808: ret       4
0041e80b: nop       
0041e80c: nop       
0041e80d: nop       
0041e80e: nop       
0041e80f: nop       
0041e810: mov       eax, 0xa
0041e815: ret       
0041e816: nop       
0041e817: nop       
0041e818: nop       
0041e819: nop       
0041e81a: nop       
0041e81b: nop       
0041e81c: nop       
0041e81d: nop       
0041e81e: nop       
0041e81f: nop       
0041e820: mov       al, byte ptr [esp + 4]
0041e824: mov       byte ptr [ecx + 0x250], al
0041e82a: ret       4
0041e82d: nop       
0041e82e: nop       
0041e82f: nop       
0041e830: mov       al, byte ptr [ecx + 0x250]
0041e836: ret       
0041e837: nop       
0041e838: nop       
0041e839: nop       
0041e83a: nop       
0041e83b: nop       
0041e83c: nop       
0041e83d: nop       
0041e83e: nop       
0041e83f: nop       
0041e840: push      esi
0041e841: mov       esi, ecx
0041e843: mov       al, byte ptr [esi + 0x100]
0041e849: test      al, al
0041e84b: jne       0x41e8d8
0041e851: call      0x41e830
0041e856: test      al, al
0041e858: jne       0x41e8d8
0041e85a: mov       eax, dword ptr [0x6b915c]
0041e85f: test      eax, eax
0041e861: jne       0x41e868
0041e863: call      0x4bc480
0041e868: mov       ecx, eax
0041e86a: call      0x40cf10
0041e86f: mov       ecx, 0x6b9950
0041e874: call      0x565870
0041e879: mov       ecx, esi
0041e87b: mov       dword ptr [esi + 0x168], eax
0041e881: call      0x424420
0041e886: test      al, al
0041e888: jne       0x41e8d8
0041e88a: fld       dword ptr [esp + 8]
0041e88e: call      0x60ab20
0041e893: sub       dword ptr [esi + 0x178], eax
0041e899: call      0x60a4a0
0041e89e: cdq       
0041e89f: mov       ecx, 3
0041e8a4: idiv      ecx
0041e8a6: test      edx, edx
0041e8a8: jne       0x41e8bb
0041e8aa: mov       ecx, dword ptr [esi + 0xfc]
0041e8b0: test      ecx, ecx
0041e8b2: je        0x41e8bb
0041e8b4: mov       edx, dword ptr [ecx]
0041e8b6: call      dword ptr [edx + 0x20]
0041e8b9: jmp       0x41e8c7
0041e8bb: mov       eax, dword ptr [esi]
0041e8bd: push      3
0041e8bf: mov       ecx, esi
0041e8c1: call      dword ptr [eax + 0xbc]
0041e8c7: mov       eax, dword ptr [esi + 0x178]
0041e8cd: test      eax, eax
0041e8cf: jg        0x41e8d8
0041e8d1: mov       edx, dword ptr [esi]
0041e8d3: mov       ecx, esi
0041e8d5: call      dword ptr [edx + 0x60]
0041e8d8: pop       esi
0041e8d9: ret       0xc
0041e8dc: nop       
0041e8dd: nop       
0041e8de: nop       
0041e8df: nop       
0041e8e0: push      -1
0041e8e2: push      0x621e50
0041e8e7: mov       eax, dword ptr fs:[0]
0041e8ed: push      eax
0041e8ee: mov       dword ptr fs:[0], esp
0041e8f5: sub       esp, 0x10
0041e8f8: push      ebx
0041e8f9: push      esi
0041e8fa: push      edi
0041e8fb: mov       esi, dword ptr [esp + 0x2c]
0041e8ff: xor       ebx, ebx
0041e901: cmp       esi, ebx
0041e903: mov       dword ptr [esp + 0x24], ebx
0041e907: jne       0x41e997
0041e90d: mov       al, byte ptr [esp + 0x2c]
0041e911: mov       edi, 0x6b3f70
0041e916: mov       byte ptr [esp + 0xc], al
0041e91a: or        ecx, 0xffffffff
0041e91d: xor       eax, eax
0041e91f: mov       dword ptr [esp + 0x10], ebx
0041e923: repne scasb al, byte ptr es:[edi]
0041e925: not       ecx
0041e927: dec       ecx
0041e928: mov       dword ptr [esp + 0x14], ebx
0041e92c: push      ecx
0041e92d: push      0x6b3f70
0041e932: lea       ecx, [esp + 0x14]
0041e936: mov       dword ptr [esp + 0x20], ebx
0041e93a: call      0x4040f0
0041e93f: lea       ecx, [esp + 0xc]
0041e943: mov       byte ptr [esp + 0x24], 1
0041e948: push      ecx
0041e949: push      0xb6
0041e94e: push      0x68d638
0041e953: push      0x68d62c
0041e958: call      0x5a07f0
0041e95d: call      eax
0041e95f: mov       eax, dword ptr [esp + 0x20]
0041e963: add       esp, 0x10
0041e966: cmp       eax, ebx
0041e968: mov       byte ptr [esp + 0x24], bl
0041e96c: je        0x41e98b
0041e96e: lea       ecx, [eax - 1]
0041e971: mov       al, byte ptr [eax - 1]
0041e974: cmp       al, bl
0041e976: je        0x41e982
0041e978: cmp       al, 0xff
0041e97a: je        0x41e982
0041e97c: dec       al
0041e97e: mov       byte ptr [ecx], al
0041e980: jmp       0x41e98b
0041e982: push      ecx
0041e983: call      0x5fe5f0
0041e988: add       esp, 4
0041e98b: mov       dword ptr [esp + 0x10], ebx
0041e98f: mov       dword ptr [esp + 0x14], ebx
0041e993: mov       dword ptr [esp + 0x18], ebx
0041e997: mov       edx, dword ptr [esp + 0x30]
0041e99b: mov       ecx, esi
0041e99d: push      edx
0041e99e: call      0x4f3d30
0041e9a3: cmp       esi, ebx
0041e9a5: mov       edi, eax
0041e9a7: mov       dword ptr [esp + 0x24], 0xffffffff
0041e9af: je        0x41e9c2
0041e9b1: mov       eax, dword ptr [esi + 0x14]
0041e9b4: dec       eax
0041e9b5: mov       dword ptr [esi + 0x14], eax
0041e9b8: jne       0x41e9c2
0041e9ba: push      ebx
0041e9bb: mov       ecx, esi
0041e9bd: call      0x5abfc0
0041e9c2: mov       ecx, dword ptr [esp + 0x1c]
0041e9c6: mov       eax, edi
0041e9c8: pop       edi
0041e9c9: pop       esi
0041e9ca: pop       ebx
0041e9cb: mov       dword ptr fs:[0], ecx
0041e9d2: add       esp, 0x1c
0041e9d5: ret       
0041e9d6: nop       
0041e9d7: nop       
0041e9d8: nop       
0041e9d9: nop       
0041e9da: nop       
0041e9db: nop       
0041e9dc: nop       
0041e9dd: nop       
0041e9de: nop       
0041e9df: nop       
0041e9e0: push      ecx
0041e9e1: push      ebx
0041e9e2: push      esi
0041e9e3: mov       esi, ecx
0041e9e5: mov       eax, dword ptr [esi + 4]
0041e9e8: test      eax, eax
0041e9ea: jne       0x41e9f0
0041e9ec: xor       edx, edx
0041e9ee: jmp       0x41ea05
0041e9f0: mov       ecx, dword ptr [esi + 0xc]
0041e9f3: sub       ecx, eax
0041e9f5: mov       eax, 0x2aaaaaab
0041e9fa: imul      ecx
0041e9fc: sar       edx, 1
0041e9fe: mov       eax, edx
0041ea00: shr       eax, 0x1f
0041ea03: add       edx, eax
0041ea05: mov       ebx, dword ptr [esp + 0x10]
0041ea09: cmp       edx, ebx
0041ea0b: jae       0x41eabe
0041ea11: test      ebx, ebx
0041ea13: mov       eax, ebx
0041ea15: jge       0x41ea19
0041ea17: xor       eax, eax
0041ea19: lea       ecx, [eax + eax*2]
0041ea1c: push      edi
0041ea1d: shl       ecx, 2
0041ea20: push      ecx
0041ea21: call      0x60a0b5
0041ea26: mov       edx, dword ptr [esi + 8]
0041ea29: mov       edi, eax
0041ea2b: mov       eax, dword ptr [esi + 4]
0041ea2e: add       esp, 4
0041ea31: cmp       eax, edx
0041ea33: mov       dword ptr [esp + 0xc], edi
0041ea37: mov       ecx, edi
0041ea39: je        0x41ea67
0041ea3b: push      ebp
0041ea3c: test      ecx, ecx
0041ea3e: je        0x41ea5c
0041ea40: mov       edi, eax
0041ea42: mov       ebx, ecx
0041ea44: mov       ebp, dword ptr [edi]
0041ea46: mov       dword ptr [ebx], ebp
0041ea48: mov       ebp, dword ptr [edi + 4]
0041ea4b: mov       dword ptr [ebx + 4], ebp
0041ea4e: mov       edi, dword ptr [edi + 8]
0041ea51: mov       dword ptr [ebx + 8], edi
0041ea54: mov       ebx, dword ptr [esp + 0x18]
0041ea58: mov       edi, dword ptr [esp + 0x10]
0041ea5c: add       eax, 0xc
0041ea5f: add       ecx, 0xc
0041ea62: cmp       eax, edx
0041ea64: jne       0x41ea3c
0041ea66: pop       ebp
0041ea67: mov       eax, dword ptr [esi + 4]
0041ea6a: push      eax
0041ea6b: mov       dword ptr [esp + 0x18], eax
0041ea6f: call      0x5fe5f0
0041ea74: lea       edx, [ebx + ebx*2]
0041ea77: add       esp, 4
0041ea7a: lea       eax, [edi + edx*4]
0041ea7d: mov       dword ptr [esi + 0xc], eax
0041ea80: mov       eax, dword ptr [esi + 4]
0041ea83: test      eax, eax
0041ea85: jne       0x41ea9c
0041ea87: xor       edx, edx
0041ea89: mov       dword ptr [esi + 4], edi
0041ea8c: lea       edx, [edx + edx*2]
0041ea8f: lea       eax, [edi + edx*4]
0041ea92: pop       edi
0041ea93: mov       dword ptr [esi + 8], eax
0041ea96: pop       esi
0041ea97: pop       ebx
0041ea98: pop       ecx
0041ea99: ret       4
0041ea9c: mov       ecx, dword ptr [esi + 8]
0041ea9f: mov       dword ptr [esi + 4], edi
0041eaa2: sub       ecx, eax
0041eaa4: mov       eax, 0x2aaaaaab
0041eaa9: imul      ecx
0041eaab: sar       edx, 1
0041eaad: mov       ecx, edx
0041eaaf: shr       ecx, 0x1f
0041eab2: add       edx, ecx
0041eab4: lea       edx, [edx + edx*2]
0041eab7: lea       eax, [edi + edx*4]
0041eaba: pop       edi
0041eabb: mov       dword ptr [esi + 8], eax
0041eabe: pop       esi
0041eabf: pop       ebx
0041eac0: pop       ecx
0041eac1: ret       4
0041eac4: nop       
0041eac5: nop       
0041eac6: nop       
0041eac7: nop       
0041eac8: nop       
0041eac9: nop       
0041eaca: nop       
0041eacb: nop       
0041eacc: nop       
0041eacd: nop       
0041eace: nop       
0041eacf: nop       
0041ead0: mov       eax, dword ptr [ecx + 4]
0041ead3: test      eax, eax
0041ead5: jne       0x41ead8
0041ead7: ret       
0041ead8: mov       ecx, dword ptr [ecx + 8]
0041eadb: sub       ecx, eax
0041eadd: mov       eax, 0x2aaaaaab
0041eae2: imul      ecx
0041eae4: sar       edx, 1
0041eae6: mov       eax, edx
0041eae8: shr       eax, 0x1f
0041eaeb: add       edx, eax
0041eaed: mov       eax, edx
0041eaef: ret       
0041eaf0: sub       esp, 8
0041eaf3: push      ebx
0041eaf4: push      ebp
0041eaf5: push      esi
0041eaf6: push      edi
0041eaf7: mov       edi, dword ptr [esp + 0x1c]
0041eafb: mov       esi, ecx
0041eafd: mov       ecx, edi
