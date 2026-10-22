0040ab80: push      esi
0040ab81: push      edi
0040ab82: mov       edi, dword ptr [esp + 0xc]
0040ab86: mov       esi, ecx
0040ab88: push      edi
0040ab89: call      0x405550
0040ab8e: mov       dword ptr [esi + 0x30], edi
0040ab91: mov       dword ptr [esi], 0x64aa38
0040ab97: mov       eax, esi
0040ab99: pop       edi
0040ab9a: pop       esi
0040ab9b: ret       4
0040ab9e: nop       
0040ab9f: nop       
0040aba0: push      -1
0040aba2: push      0x6208fb
0040aba7: mov       eax, dword ptr fs:[0]
0040abad: push      eax
0040abae: mov       dword ptr fs:[0], esp
0040abb5: push      ecx
0040abb6: push      esi
0040abb7: mov       esi, ecx
0040abb9: push      0x2c
0040abbb: call      0x60a0b5
0040abc0: add       esp, 4
0040abc3: mov       dword ptr [esp + 4], eax
0040abc7: test      eax, eax
0040abc9: mov       dword ptr [esp + 0x10], 0
0040abd1: je        0x40abe0
0040abd3: mov       ecx, dword ptr [esi + 0x30]
0040abd6: push      ecx
0040abd7: mov       ecx, eax
0040abd9: call      0x40ac10
0040abde: jmp       0x40abe2
0040abe0: xor       eax, eax
0040abe2: push      eax
0040abe3: push      2
0040abe5: mov       ecx, esi
0040abe7: mov       dword ptr [esp + 0x18], 0xffffffff
0040abef: call      0x402a10
0040abf4: mov       ecx, dword ptr [esp + 8]
0040abf8: pop       esi
0040abf9: mov       dword ptr fs:[0], ecx
0040ac00: add       esp, 0x10
0040ac03: ret       
0040ac04: nop       
0040ac05: nop       
0040ac06: nop       
0040ac07: nop       
0040ac08: nop       
0040ac09: nop       
0040ac0a: nop       
0040ac0b: nop       
0040ac0c: nop       
0040ac0d: nop       
0040ac0e: nop       
0040ac0f: nop       
0040ac10: push      esi
0040ac11: push      edi
0040ac12: mov       edi, dword ptr [esp + 0xc]
0040ac16: mov       esi, ecx
0040ac18: push      edi
0040ac19: call      0x403610
0040ac1e: mov       dword ptr [esi + 0x28], edi
0040ac21: mov       dword ptr [esi], 0x64aa6c
0040ac27: mov       eax, esi
0040ac29: pop       edi
0040ac2a: pop       esi
0040ac2b: ret       4
0040ac2e: nop       
0040ac2f: nop       
0040ac30: mov       eax, dword ptr [esp + 4]
0040ac34: push      esi
0040ac35: mov       esi, ecx
0040ac37: push      eax
0040ac38: call      0x403690
0040ac3d: mov       ecx, dword ptr [esi + 0x28]
0040ac40: push      0x7f7fffff
0040ac45: push      1
0040ac47: push      2
0040ac49: mov       edx, dword ptr [ecx]
0040ac4b: call      dword ptr [edx + 0x8c]
0040ac51: mov       ecx, esi
0040ac53: call      0x40ae70
0040ac58: pop       esi
0040ac59: ret       4
0040ac5c: nop       
0040ac5d: nop       
0040ac5e: nop       
0040ac5f: nop       
0040ac60: mov       eax, dword ptr fs:[0]
0040ac66: push      -1
0040ac68: push      0x620923
0040ac6d: push      eax
0040ac6e: mov       dword ptr fs:[0], esp
0040ac75: sub       esp, 0x10
0040ac78: push      ebx
0040ac79: push      esi
0040ac7a: push      edi
0040ac7b: mov       edi, dword ptr [esp + 0x30]
0040ac7f: mov       esi, ecx
0040ac81: push      edi
0040ac82: mov       ecx, dword ptr [esi + 0x28]
0040ac85: call      0x422f30
0040ac8a: test      al, al
0040ac8c: mov       ecx, esi
0040ac8e: jne       0x40aca9
0040ac90: call      0x402d00
0040ac95: pop       edi
0040ac96: pop       esi
0040ac97: pop       ebx
0040ac98: mov       ecx, dword ptr [esp + 0x10]
0040ac9c: mov       dword ptr fs:[0], ecx
0040aca3: add       esp, 0x1c
0040aca6: ret       8
0040aca9: call      0x402cf0
0040acae: xor       ebx, ebx
0040acb0: sub       eax, ebx
0040acb2: je        0x40add1
0040acb8: dec       eax
0040acb9: je        0x40ad8c
0040acbf: mov       al, byte ptr [esp + 0x30]
0040acc3: mov       edi, 0x68d308
0040acc8: mov       byte ptr [esp + 0xc], al
0040accc: or        ecx, 0xffffffff
0040accf: xor       eax, eax
0040acd1: push      ebp
0040acd2: repne scasb al, byte ptr es:[edi]
0040acd4: not       ecx
0040acd6: dec       ecx
0040acd7: push      1
0040acd9: mov       ebp, ecx
0040acdb: lea       ecx, [esp + 0x14]
0040acdf: push      ebp
0040ace0: mov       dword ptr [esp + 0x1c], ebx
0040ace4: mov       dword ptr [esp + 0x20], ebx
0040ace8: mov       dword ptr [esp + 0x24], ebx
0040acec: call      0x401940
0040acf1: test      al, al
0040acf3: je        0x40ad19
0040acf5: mov       edi, dword ptr [esp + 0x14]
0040acf9: mov       ecx, ebp
0040acfb: mov       edx, ecx
