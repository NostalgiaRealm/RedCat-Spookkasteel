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
