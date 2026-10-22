00406a50: add       esp, 0x10
00406a53: ret       
00406a54: nop       
00406a55: nop       
00406a56: nop       
00406a57: nop       
00406a58: nop       
00406a59: nop       
00406a5a: nop       
00406a5b: nop       
00406a5c: nop       
00406a5d: nop       
00406a5e: nop       
00406a5f: nop       
00406a60: mov       eax, dword ptr [esp + 4]
00406a64: push      esi
00406a65: mov       esi, ecx
00406a67: push      eax
00406a68: call      0x40a720
00406a6d: mov       dword ptr [esi], 0x64a738
00406a73: mov       eax, esi
00406a75: pop       esi
00406a76: ret       4
00406a79: nop       
00406a7a: nop       
00406a7b: nop       
00406a7c: nop       
00406a7d: nop       
00406a7e: nop       
00406a7f: nop       
00406a80: push      ecx
00406a81: push      esi
00406a82: mov       esi, ecx
00406a84: push      edi
00406a85: mov       eax, dword ptr [esi + 0x28]
00406a88: mov       edi, dword ptr [eax]
00406a8a: call      0x60a4a0
00406a8f: cdq       
00406a90: mov       ecx, 0x2710
00406a95: idiv      ecx
00406a97: push      ecx
00406a98: mov       ecx, dword ptr [esi + 0x28]
00406a9b: mov       dword ptr [esp + 0xc], edx
00406a9f: fild      dword ptr [esp + 0xc]
00406aa3: fmul      dword ptr [0x64a744]
00406aa9: fadd      dword ptr [0x64a2c8]
00406aaf: fstp      dword ptr [esp]
00406ab2: push      0
00406ab4: push      1
00406ab6: call      dword ptr [edi + 0x8c]
00406abc: pop       edi
00406abd: pop       esi
00406abe: pop       ecx
00406abf: ret       4
00406ac2: nop       
00406ac3: nop       
00406ac4: nop       
00406ac5: nop       
00406ac6: nop       
00406ac7: nop       
00406ac8: nop       
00406ac9: nop       
00406aca: nop       
00406acb: nop       
00406acc: nop       
00406acd: nop       
00406ace: nop       
00406acf: nop       
00406ad0: push      ecx
00406ad1: push      esi
00406ad2: mov       esi, ecx
00406ad4: mov       ecx, dword ptr [esi + 0x28]
00406ad7: call      0x423700
00406adc: mov       ecx, eax
00406ade: call      0x4a0d00
00406ae3: test      al, al
00406ae5: je        0x406b20
00406ae7: mov       eax, dword ptr [esi + 0x28]
00406aea: push      edi
00406aeb: mov       edi, dword ptr [eax]
00406aed: call      0x60a4a0
00406af2: cdq       
00406af3: mov       ecx, 0x2710
00406af8: idiv      ecx
00406afa: push      ecx
00406afb: mov       ecx, dword ptr [esi + 0x28]
00406afe: mov       dword ptr [esp + 0xc], edx
00406b02: fild      dword ptr [esp + 0xc]
00406b06: fmul      dword ptr [0x64a744]
00406b0c: fadd      dword ptr [0x64a2c8]
00406b12: fstp      dword ptr [esp]
00406b15: push      0
00406b17: push      1
00406b19: call      dword ptr [edi + 0x8c]
00406b1f: pop       edi
00406b20: pop       esi
00406b21: pop       ecx
00406b22: ret       8
00406b25: nop       
00406b26: nop       
00406b27: nop       
00406b28: nop       
00406b29: nop       
00406b2a: nop       
00406b2b: nop       
00406b2c: nop       
00406b2d: nop       
00406b2e: nop       
00406b2f: nop       
00406b30: mov       eax, dword ptr [esp + 4]
00406b34: push      esi
00406b35: mov       esi, ecx
00406b37: push      eax
00406b38: call      0x409fd0
00406b3d: mov       dword ptr [esi], 0x64a74c
00406b43: mov       eax, esi
00406b45: pop       esi
00406b46: ret       4
00406b49: nop       
00406b4a: nop       
00406b4b: nop       
00406b4c: nop       
00406b4d: nop       
00406b4e: nop       
00406b4f: nop       
