00436f40: mov       eax, dword ptr [esp + 4]
00436f44: test      eax, eax
00436f46: jl        0x436f53
00436f48: cmp       eax, 0xf
00436f4b: jg        0x436f53
00436f4d: mov       dword ptr [ecx + 0x34c], eax
00436f53: ret       4
00436f56: nop       
00436f57: nop       
00436f58: nop       
00436f59: nop       
00436f5a: nop       
00436f5b: nop       
00436f5c: nop       
00436f5d: nop       
00436f5e: nop       
00436f5f: nop       
00436f60: push      esi
00436f61: mov       esi, ecx
00436f63: mov       al, byte ptr [esi + 0x372]
00436f69: test      al, al
00436f6b: jne       0x436f8c
00436f6d: mov       eax, dword ptr [esp + 0xc]
00436f71: mov       ecx, dword ptr [esp + 8]
00436f75: push      eax
00436f76: push      ecx
00436f77: mov       ecx, esi
00436f79: call      0x4dd650
00436f7e: mov       byte ptr [esi + 0x104], 0
00436f85: mov       byte ptr [esi + 0x372], 1
00436f8c: pop       esi
00436f8d: ret       8
00436f90: push      ecx
00436f91: mov       al, byte ptr [esp + 8]
00436f95: push      ebx
00436f96: push      ebp
00436f97: mov       ebp, dword ptr [esp + 0x10]
00436f9b: push      esi
00436f9c: push      edi
00436f9d: xor       esi, esi
00436f9f: mov       byte ptr [ebp], al
00436fa2: mov       edi, 0x690620
00436fa7: or        ecx, 0xffffffff
00436faa: xor       eax, eax
00436fac: mov       dword ptr [ebp + 4], esi
00436faf: mov       dword ptr [ebp + 8], esi
00436fb2: mov       dword ptr [ebp + 0xc], esi
00436fb5: repne scasb al, byte ptr es:[edi]
00436fb7: not       ecx
00436fb9: dec       ecx
00436fba: mov       dword ptr [esp + 0x10], esi
00436fbe: mov       ebx, ecx
00436fc0: cmp       ebx, -3
00436fc3: jbe       0x436fca
00436fc5: call      0x5fe5fb
00436fca: mov       ecx, dword ptr [ebp + 4]
00436fcd: cmp       ecx, esi
00436fcf: je        0x436ff5
00436fd1: mov       al, byte ptr [ecx - 1]
00436fd4: test      al, al
00436fd6: je        0x436ff5
00436fd8: cmp       al, 0xff
00436fda: je        0x436ff5
00436fdc: cmp       ebx, esi
00436fde: jne       0x43701f
00436fe0: dec       al
00436fe2: push      esi
00436fe3: mov       byte ptr [ecx - 1], al
00436fe6: mov       ecx, ebp
00436fe8: call      0x4040a0
00436fed: pop       edi
00436fee: mov       eax, ebp
00436ff0: pop       esi
00436ff1: pop       ebp
00436ff2: pop       ebx
00436ff3: pop       ecx
00436ff4: ret       
00436ff5: cmp       ebx, esi
00436ff7: jne       0x43700a
00436ff9: push      1
00436ffb: mov       ecx, ebp
00436ffd: call      0x4040a0
00437002: pop       edi
00437003: mov       eax, ebp
00437005: pop       esi
00437006: pop       ebp
00437007: pop       ebx
00437008: pop       ecx
00437009: ret       
0043700a: mov       eax, dword ptr [ebp + 0xc]
0043700d: cmp       eax, 0x1f
00437010: ja        0x437016
00437012: cmp       eax, ebx
00437014: jae       0x437027
00437016: push      1
00437018: mov       ecx, ebp
0043701a: call      0x4040a0
0043701f: push      ebx
00437020: mov       ecx, ebp
00437022: call      0x401a60
00437027: mov       edi, dword ptr [ebp + 4]
0043702a: mov       ecx, ebx
0043702c: mov       edx, ecx
0043702e: mov       esi, 0x690620
00437033: shr       ecx, 2
00437036: rep movsd dword ptr es:[edi], dword ptr [esi]
00437038: mov       ecx, edx
0043703a: and       ecx, 3
0043703d: rep movsb byte ptr es:[edi], byte ptr [esi]
0043703f: mov       eax, dword ptr [ebp + 4]
00437042: mov       dword ptr [ebp + 8], ebx
00437045: pop       edi
00437046: pop       esi
00437047: mov       byte ptr [eax + ebx], 0
0043704b: mov       eax, ebp
0043704d: pop       ebp
0043704e: pop       ebx
0043704f: pop       ecx
00437050: ret       
00437051: nop       
00437052: nop       
00437053: nop       
00437054: nop       
00437055: nop       
00437056: nop       
00437057: nop       
00437058: nop       
00437059: nop       
0043705a: nop       
0043705b: nop       
0043705c: nop       
0043705d: nop       
0043705e: nop       
0043705f: nop       
