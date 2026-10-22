00405b10: push      esi
00405b11: push      edi
00405b12: mov       edi, dword ptr [esp + 0xc]
00405b16: mov       esi, ecx
00405b18: push      edi
00405b19: call      0x403700
00405b1e: mov       dword ptr [esi + 0x28], edi
00405b21: mov       dword ptr [esi], 0x64a670
00405b27: mov       eax, esi
00405b29: pop       edi
00405b2a: pop       esi
00405b2b: ret       4
00405b2e: nop       
00405b2f: nop       
00405b30: push      esi
00405b31: mov       esi, ecx
00405b33: call      0x405b50
00405b38: test      byte ptr [esp + 8], 1
00405b3d: je        0x405b48
00405b3f: push      esi
00405b40: call      0x5fe5f0
00405b45: add       esp, 4
00405b48: mov       eax, esi
00405b4a: pop       esi
00405b4b: ret       4
00405b4e: nop       
00405b4f: nop       
00405b50: push      -1
00405b52: push      0x61ffb8
00405b57: mov       eax, dword ptr fs:[0]
00405b5d: push      eax
00405b5e: mov       dword ptr fs:[0], esp
00405b65: push      ecx
00405b66: push      esi
00405b67: mov       esi, ecx
00405b69: mov       dword ptr [esp + 4], esi
00405b6d: mov       dword ptr [esi], 0x64a670
00405b73: mov       ecx, dword ptr [esi + 0x28]
00405b76: mov       dword ptr [esp + 0x10], 0
00405b7e: call      0x428b40
00405b83: mov       ecx, esi
00405b85: mov       dword ptr [esp + 0x10], 0xffffffff
00405b8d: call      0x403780
00405b92: mov       ecx, dword ptr [esp + 8]
00405b96: pop       esi
00405b97: mov       dword ptr fs:[0], ecx
00405b9e: add       esp, 0x10
00405ba1: ret       
00405ba2: nop       
00405ba3: nop       
00405ba4: nop       
00405ba5: nop       
00405ba6: nop       
00405ba7: nop       
00405ba8: nop       
00405ba9: nop       
00405baa: nop       
00405bab: nop       
00405bac: nop       
00405bad: nop       
00405bae: nop       
00405baf: nop       
00405bb0: mov       eax, dword ptr [esp + 4]
00405bb4: push      esi
00405bb5: mov       esi, ecx
00405bb7: push      eax
00405bb8: call      0x4037e0
00405bbd: mov       ecx, dword ptr [esi + 0x28]
00405bc0: call      0x428b10
00405bc5: pop       esi
00405bc6: ret       4
00405bc9: nop       
00405bca: nop       
00405bcb: nop       
00405bcc: nop       
00405bcd: nop       
00405bce: nop       
00405bcf: nop       
