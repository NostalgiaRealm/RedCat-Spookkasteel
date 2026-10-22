00424950: push      ecx
00424951: call      0x60a4a0
00424956: cdq       
00424957: mov       ecx, 0x2710
0042495c: idiv      ecx
0042495e: mov       dword ptr [esp], edx
00424962: fild      dword ptr [esp]
00424966: fmul      dword ptr [0x64bd88]
0042496c: fadd      dword ptr [0x64bd84]
00424972: pop       ecx
00424973: ret       
00424974: nop       
00424975: nop       
00424976: nop       
00424977: nop       
00424978: nop       
00424979: nop       
0042497a: nop       
0042497b: nop       
0042497c: nop       
0042497d: nop       
0042497e: nop       
0042497f: nop       
00424980: mov       byte ptr [ecx + 0x100], 1
00424987: ret       
00424988: nop       
00424989: nop       
0042498a: nop       
0042498b: nop       
0042498c: nop       
0042498d: nop       
0042498e: nop       
0042498f: nop       
00424990: mov       byte ptr [ecx + 0x100], 0
00424997: ret       
00424998: nop       
00424999: nop       
0042499a: nop       
0042499b: nop       
0042499c: nop       
0042499d: nop       
0042499e: nop       
0042499f: nop       
004249a0: mov       eax, dword ptr fs:[0]
004249a6: push      -1
004249a8: push      0x622738
004249ad: push      eax
004249ae: mov       dword ptr fs:[0], esp
004249b5: sub       esp, 0x28
004249b8: push      ebx
004249b9: push      esi
004249ba: mov       esi, ecx
004249bc: xor       ebx, ebx
004249be: cmp       dword ptr [esi + 0x18], ebx
004249c1: jne       0x4249d6
004249c3: pop       esi
004249c4: xor       eax, eax
004249c6: pop       ebx
004249c7: mov       ecx, dword ptr [esp + 0x28]
004249cb: mov       dword ptr fs:[0], ecx
004249d2: add       esp, 0x34
004249d5: ret       
004249d6: mov       al, byte ptr [esp + 0xb]
004249da: push      edi
004249db: mov       byte ptr [esp + 0x14], al
004249df: mov       edi, 0x68f9c8
004249e4: or        ecx, 0xffffffff
004249e7: xor       eax, eax
004249e9: repne scasb al, byte ptr es:[edi]
004249eb: not       ecx
004249ed: dec       ecx
004249ee: mov       dword ptr [esp + 0x18], ebx
004249f2: push      ecx
004249f3: push      0x68f9c8
004249f8: lea       ecx, [esp + 0x1c]
004249fc: mov       dword ptr [esp + 0x24], ebx
00424a00: mov       dword ptr [esp + 0x28], ebx
00424a04: call      0x4040f0
00424a09: lea       ecx, [esp + 0x10]
00424a0d: mov       dword ptr [esp + 0x3c], ebx
00424a11: push      ecx
00424a12: mov       ecx, esi
00424a14: call      0x4042e0
00424a19: mov       esi, eax
00424a1b: mov       eax, dword ptr [esi]
