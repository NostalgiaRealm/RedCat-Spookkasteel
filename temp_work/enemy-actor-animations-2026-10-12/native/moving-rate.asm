00428a90: push      esi
00428a91: mov       esi, ecx
00428a93: mov       al, byte ptr [esi + 0x181]
00428a99: test      al, al
00428a9b: je        0x428b08
00428a9d: mov       eax, dword ptr [esi]
00428a9f: call      dword ptr [eax + 0xa8]
00428aa5: test      al, al
00428aa7: je        0x428b08
00428aa9: mov       ecx, esi
00428aab: call      0x4282e0
00428ab0: mov       ecx, eax
00428ab2: add       ecx, 0x19c
00428ab8: call      0x4a0d00
00428abd: test      al, al
00428abf: je        0x428af0
00428ac1: mov       ecx, esi
00428ac3: call      0x4282e0
00428ac8: mov       ecx, dword ptr [esi + 0x198]
00428ace: mov       dl, byte ptr [esi + 0x194]
00428ad4: push      ecx
00428ad5: lea       ecx, [esi + 0x184]
00428adb: add       eax, 0x19c
00428ae0: push      edx
00428ae1: push      ecx
00428ae2: mov       ecx, eax
00428ae4: call      0x4a0660
00428ae9: mov       byte ptr [esi + 0x181], 0
00428af0: mov       al, byte ptr [esi + 0x180]
00428af6: test      al, al
00428af8: jne       0x428b08
00428afa: mov       ecx, esi
00428afc: call      0x4282e0
00428b01: mov       ecx, eax
00428b03: call      0x422360
00428b08: pop       esi
00428b09: ret       
00428b0a: nop       
00428b0b: nop       
00428b0c: nop       
00428b0d: nop       
00428b0e: nop       
00428b0f: nop       
00428b10: push      esi
00428b11: mov       esi, ecx
00428b13: mov       eax, dword ptr [esi]
00428b15: mov       byte ptr [esi + 0x180], 1
00428b1c: call      dword ptr [eax + 0xa8]
00428b22: test      al, al
00428b24: je        0x428b34
00428b26: mov       ecx, esi
00428b28: call      0x4282e0
00428b2d: mov       ecx, eax
00428b2f: call      0x422350
00428b34: pop       esi
00428b35: ret       
00428b36: nop       
00428b37: nop       
00428b38: nop       
00428b39: nop       
00428b3a: nop       
00428b3b: nop       
00428b3c: nop       
00428b3d: nop       
00428b3e: nop       
00428b3f: nop       
00428b40: push      esi
00428b41: mov       esi, ecx
00428b43: mov       al, byte ptr [esi + 0x181]
00428b49: mov       byte ptr [esi + 0x180], 0
00428b50: test      al, al
00428b52: jne       0x428b6e
00428b54: mov       eax, dword ptr [esi]
00428b56: call      dword ptr [eax + 0xa8]
00428b5c: test      al, al
00428b5e: je        0x428b6e
00428b60: mov       ecx, esi
00428b62: call      0x4282e0
00428b67: mov       ecx, eax
00428b69: call      0x422360
00428b6e: pop       esi
00428b6f: ret       
00428b70: push      esi
00428b71: mov       esi, ecx
00428b73: call      0x4284e0
00428b78: fld       dword ptr [esi + 0x15c]
00428b7e: fcomp     dword ptr [eax + 0x10]
00428b81: pop       esi
00428b82: fnstsw    ax
00428b84: test      ah, 1
00428b87: je        0x428b8f
00428b89: mov       eax, 1
00428b8e: ret       
00428b8f: xor       eax, eax
00428b91: ret       
00428b92: nop       
00428b93: nop       
00428b94: nop       
00428b95: nop       
00428b96: nop       
00428b97: nop       
00428b98: nop       
00428b99: nop       
00428b9a: nop       
00428b9b: nop       
00428b9c: nop       
00428b9d: nop       
00428b9e: nop       
00428b9f: nop       
00428ba0: mov       eax, dword ptr fs:[0]
00428ba6: push      -1
00428ba8: push      0x622e3f
00428bad: push      eax
00428bae: mov       dword ptr fs:[0], esp
00428bb5: sub       esp, 0x30
00428bb8: push      ebx
00428bb9: push      ebp
00428bba: mov       ebp, dword ptr [esp + 0x4c]
00428bbe: push      esi
00428bbf: xor       ebx, ebx
00428bc1: or        esi, 0xffffffff
00428bc4: cmp       ebp, ebx
00428bc6: push      edi
00428bc7: jne       0x428c5c
