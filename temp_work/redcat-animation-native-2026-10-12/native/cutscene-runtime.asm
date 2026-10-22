004819f0: push      -1
004819f2: push      0x629438
004819f7: mov       eax, dword ptr fs:[0]
004819fd: push      eax
004819fe: mov       dword ptr fs:[0], esp
00481a05: sub       esp, 0x14
00481a08: push      ebx
00481a09: push      esi
00481a0a: mov       esi, ecx
00481a0c: xor       ebx, ebx
00481a0e: mov       dword ptr [esp + 8], esi
00481a12: cmp       dword ptr [esi + 0x54], ebx
00481a15: jne       0x481ad7
00481a1b: mov       al, byte ptr [esp + 0x2c]
00481a1f: push      ebp
00481a20: push      edi
00481a21: mov       byte ptr [esp + 0x14], al
00481a25: mov       edi, 0x6b3f70
00481a2a: or        ecx, 0xffffffff
00481a2d: xor       eax, eax
00481a2f: push      1
00481a31: repne scasb al, byte ptr es:[edi]
00481a33: not       ecx
00481a35: dec       ecx
00481a36: mov       dword ptr [esp + 0x1c], ebx
00481a3a: mov       ebp, ecx
00481a3c: lea       ecx, [esp + 0x18]
00481a40: push      ebp
00481a41: mov       dword ptr [esp + 0x24], ebx
00481a45: mov       dword ptr [esp + 0x28], ebx
00481a49: call      0x401940
00481a4e: test      al, al
00481a50: je        0x481a7a
00481a52: mov       edi, dword ptr [esp + 0x18]
00481a56: mov       ecx, ebp
00481a58: mov       edx, ecx
00481a5a: mov       esi, 0x6b3f70
00481a5f: shr       ecx, 2
00481a62: rep movsd dword ptr es:[edi], dword ptr [esi]
00481a64: mov       ecx, edx
00481a66: and       ecx, 3
00481a69: rep movsb byte ptr es:[edi], byte ptr [esi]
00481a6b: mov       eax, dword ptr [esp + 0x18]
00481a6f: mov       esi, dword ptr [esp + 0x10]
00481a73: mov       dword ptr [esp + 0x1c], ebp
00481a77: mov       byte ptr [eax + ebp], bl
00481a7a: lea       ecx, [esp + 0x14]
00481a7e: mov       dword ptr [esp + 0x2c], ebx
00481a82: push      ecx
00481a83: push      0x176
00481a88: push      0x693130
00481a8d: push      0x693224
00481a92: call      0x5a07f0
00481a97: call      eax
00481a99: mov       eax, dword ptr [esp + 0x28]
00481a9d: add       esp, 0x10
00481aa0: cmp       eax, ebx
00481aa2: mov       dword ptr [esp + 0x2c], 0xffffffff
00481aaa: pop       edi
00481aab: pop       ebp
00481aac: je        0x481acb
00481aae: lea       ecx, [eax - 1]
00481ab1: mov       al, byte ptr [eax - 1]
00481ab4: cmp       al, bl
00481ab6: je        0x481ac2
00481ab8: cmp       al, 0xff
00481aba: je        0x481ac2
00481abc: dec       al
00481abe: mov       byte ptr [ecx], al
00481ac0: jmp       0x481acb
00481ac2: push      ecx
00481ac3: call      0x5fe5f0
00481ac8: add       esp, 4
00481acb: mov       dword ptr [esp + 0x10], ebx
00481acf: mov       dword ptr [esp + 0x14], ebx
00481ad3: mov       dword ptr [esp + 0x18], ebx
00481ad7: fld       dword ptr [esp + 0x2c]
00481adb: fmul      dword ptr [0x64b79c]
00481ae1: mov       dword ptr [esi + 0xa8], 1
00481aeb: mov       dword ptr [esi + 0x28], ebx
00481aee: mov       dword ptr [esi + 0x2c], ebx
00481af1: call      0x60ab20
00481af6: mov       ecx, esi
00481af8: mov       dword ptr [esi + 0x14], eax
00481afb: call      0x480dc0
00481b00: mov       ecx, dword ptr [esp + 0x1c]
00481b04: pop       esi
00481b05: mov       al, 1
00481b07: pop       ebx
00481b08: mov       dword ptr fs:[0], ecx
00481b0f: add       esp, 0x20
00481b12: ret       4
00481b15: nop       
00481b16: nop       
00481b17: nop       
00481b18: nop       
00481b19: nop       
00481b1a: nop       
00481b1b: nop       
00481b1c: nop       
00481b1d: nop       
00481b1e: nop       
00481b1f: nop       
00481b20: mov       eax, dword ptr fs:[0]
00481b26: push      -1
00481b28: push      0x629458
00481b2d: push      eax
00481b2e: mov       dword ptr fs:[0], esp
00481b35: sub       esp, 0x10
00481b38: push      ebx
00481b39: mov       ebx, ecx
00481b3b: push      esi
00481b3c: xor       esi, esi
00481b3e: cmp       dword ptr [ebx + 0x54], esi
00481b41: jne       0x481bec
00481b47: mov       al, byte ptr [esp + 0x28]
00481b4b: push      ebp
00481b4c: push      edi
00481b4d: mov       byte ptr [esp + 0x10], al
00481b51: mov       edi, 0x6b3f70
00481b56: or        ecx, 0xffffffff
00481b59: xor       eax, eax
00481b5b: push      1
00481b5d: repne scasb al, byte ptr es:[edi]
00481b5f: not       ecx
00481b61: dec       ecx
00481b62: mov       dword ptr [esp + 0x18], esi
00481b66: mov       ebp, ecx
00481b68: lea       ecx, [esp + 0x14]
00481b6c: push      ebp
00481b6d: mov       dword ptr [esp + 0x20], esi
00481b71: mov       dword ptr [esp + 0x24], esi
00481b75: call      0x401940
00481b7a: test      al, al
00481b7c: je        0x481ba5
00481b7e: mov       edi, dword ptr [esp + 0x14]
00481b82: mov       ecx, ebp
00481b84: mov       edx, ecx
00481b86: mov       esi, 0x6b3f70
00481b8b: shr       ecx, 2
00481b8e: rep movsd dword ptr es:[edi], dword ptr [esi]
00481b90: mov       ecx, edx
00481b92: and       ecx, 3
00481b95: rep movsb byte ptr es:[edi], byte ptr [esi]
00481b97: mov       eax, dword ptr [esp + 0x14]
00481b9b: mov       dword ptr [esp + 0x18], ebp
00481b9f: xor       esi, esi
00481ba1: mov       byte ptr [eax + ebp], 0
00481ba5: lea       ecx, [esp + 0x10]
00481ba9: mov       dword ptr [esp + 0x28], esi
00481bad: push      ecx
00481bae: push      0x185
00481bb3: push      0x693130
00481bb8: push      0x693224
00481bbd: call      0x5a07f0
00481bc2: call      eax
00481bc4: mov       ecx, dword ptr [esp + 0x24]
00481bc8: add       esp, 0x10
00481bcb: cmp       ecx, esi
00481bcd: pop       edi
00481bce: pop       ebp
00481bcf: je        0x481bec
00481bd1: mov       al, byte ptr [ecx - 1]
00481bd4: dec       ecx
00481bd5: test      al, al
00481bd7: je        0x481be3
00481bd9: cmp       al, 0xff
00481bdb: je        0x481be3
00481bdd: dec       al
00481bdf: mov       byte ptr [ecx], al
00481be1: jmp       0x481bec
00481be3: push      ecx
00481be4: call      0x5fe5f0
00481be9: add       esp, 4
00481bec: fld       dword ptr [esp + 0x28]
00481bf0: fmul      dword ptr [0x64b79c]
00481bf6: mov       dword ptr [ebx + 0x28], 0x437f0000
00481bfd: mov       dword ptr [ebx + 0x2c], esi
00481c00: mov       dword ptr [ebx + 0xa8], 3
00481c0a: call      0x60ab20
00481c0f: mov       ecx, dword ptr [esp + 0x18]
00481c13: mov       dword ptr [ebx + 0x14], eax
00481c16: pop       esi
00481c17: pop       ebx
00481c18: mov       dword ptr fs:[0], ecx
00481c1f: add       esp, 0x1c
00481c22: ret       4
00481c25: nop       
00481c26: nop       
00481c27: nop       
00481c28: nop       
00481c29: nop       
00481c2a: nop       
00481c2b: nop       
00481c2c: nop       
00481c2d: nop       
00481c2e: nop       
00481c2f: nop       
00481c30: push      -1
00481c32: push      0x629487
00481c37: mov       eax, dword ptr fs:[0]
00481c3d: push      eax
00481c3e: mov       dword ptr fs:[0], esp
00481c45: sub       esp, 0x14
00481c48: push      ebx
00481c49: push      ebp
00481c4a: mov       ebp, ecx
00481c4c: xor       eax, eax
00481c4e: push      esi
00481c4f: push      edi
00481c50: mov       cl, byte ptr [ebp + 0xb4]
00481c56: mov       dword ptr [esp + 0x10], eax
00481c5a: test      cl, cl
00481c5c: je        0x481c64
