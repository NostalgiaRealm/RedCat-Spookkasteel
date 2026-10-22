00415990: push      -1
00415992: push      0x621228
00415997: mov       eax, dword ptr fs:[0]
0041599d: push      eax
0041599e: mov       dword ptr fs:[0], esp
004159a5: sub       esp, 0x14
004159a8: fld       dword ptr [esp + 0x2c]
004159ac: fcomp     dword ptr [0x64ab9c]
004159b2: push      ebx
004159b3: push      esi
004159b4: mov       esi, ecx
004159b6: mov       dword ptr [esp + 8], esi
004159ba: fnstsw    ax
004159bc: test      ah, 1
004159bf: jne       0x4159ca
004159c1: call      0x424950
004159c6: fstp      dword ptr [esp + 0x34]
004159ca: mov       eax, dword ptr [esp + 0x2c]
004159ce: cmp       eax, 1
004159d1: je        0x4159f8
004159d3: mov       ecx, dword ptr [esp + 0x34]
004159d7: mov       edx, dword ptr [esp + 0x30]
004159db: push      ecx
004159dc: push      edx
004159dd: push      eax
004159de: mov       ecx, esi
004159e0: call      0x4233e0
004159e5: pop       esi
004159e6: pop       ebx
004159e7: mov       ecx, dword ptr [esp + 0x14]
004159eb: mov       dword ptr fs:[0], ecx
004159f2: add       esp, 0x20
004159f5: ret       0xc
004159f8: mov       al, byte ptr [esp + 0x34]
004159fc: push      ebp
004159fd: push      edi
004159fe: mov       byte ptr [esp + 0x14], al
00415a02: mov       edi, 0x68e9fc
00415a07: or        ecx, 0xffffffff
00415a0a: xor       eax, eax
00415a0c: xor       ebx, ebx
00415a0e: repne scasb al, byte ptr es:[edi]
00415a10: not       ecx
00415a12: dec       ecx
00415a13: push      1
00415a15: mov       ebp, ecx
00415a17: lea       ecx, [esp + 0x18]
00415a1b: push      ebp
00415a1c: mov       dword ptr [esp + 0x20], ebx
00415a20: mov       dword ptr [esp + 0x24], ebx
00415a24: mov       dword ptr [esp + 0x28], ebx
00415a28: call      0x401940
00415a2d: test      al, al
00415a2f: je        0x415a59
00415a31: mov       edi, dword ptr [esp + 0x18]
00415a35: mov       ecx, ebp
00415a37: mov       edx, ecx
00415a39: mov       esi, 0x68e9fc
00415a3e: shr       ecx, 2
00415a41: rep movsd dword ptr es:[edi], dword ptr [esi]
00415a43: mov       ecx, edx
00415a45: and       ecx, 3
00415a48: rep movsb byte ptr es:[edi], byte ptr [esi]
00415a4a: mov       eax, dword ptr [esp + 0x18]
00415a4e: mov       esi, dword ptr [esp + 0x10]
00415a52: mov       dword ptr [esp + 0x1c], ebp
00415a56: mov       byte ptr [eax + ebp], bl
00415a59: mov       edx, dword ptr [esi]
00415a5b: mov       ecx, esi
00415a5d: mov       dword ptr [esp + 0x2c], ebx
00415a61: call      dword ptr [edx + 0x9c]
00415a67: mov       ecx, dword ptr [esp + 0x3c]
00415a6b: mov       edx, dword ptr [esp + 0x38]
00415a6f: push      ecx
00415a70: lea       ecx, [esp + 0x18]
00415a74: push      edx
00415a75: push      ecx
00415a76: lea       ecx, [eax + 0x19c]
00415a7c: call      0x4a0660
00415a81: mov       eax, dword ptr [esp + 0x18]
00415a85: pop       edi
00415a86: cmp       eax, ebx
00415a88: pop       ebp
00415a89: je        0x415ab9
00415a8b: lea       ecx, [eax - 1]
00415a8e: mov       al, byte ptr [eax - 1]
00415a91: cmp       al, bl
00415a93: je        0x415ab0
00415a95: cmp       al, 0xff
00415a97: je        0x415ab0
00415a99: dec       al
00415a9b: pop       esi
00415a9c: mov       byte ptr [ecx], al
00415a9e: pop       ebx
00415a9f: mov       ecx, dword ptr [esp + 0x14]
00415aa3: mov       dword ptr fs:[0], ecx
00415aaa: add       esp, 0x20
00415aad: ret       0xc
00415ab0: push      ecx
00415ab1: call      0x5fe5f0
00415ab6: add       esp, 4
00415ab9: mov       ecx, dword ptr [esp + 0x1c]
00415abd: pop       esi
00415abe: pop       ebx
