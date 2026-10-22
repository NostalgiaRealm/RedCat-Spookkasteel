00407ad0: push      esi
00407ad1: mov       esi, ecx
00407ad3: call      0x407af0
00407ad8: test      byte ptr [esp + 8], 1
00407add: je        0x407ae8
00407adf: push      esi
00407ae0: call      0x5fe5f0
00407ae5: add       esp, 4
00407ae8: mov       eax, esi
00407aea: pop       esi
00407aeb: ret       4
00407aee: nop       
00407aef: nop       
00407af0: push      -1
00407af2: push      0x620358
00407af7: mov       eax, dword ptr fs:[0]
00407afd: push      eax
00407afe: mov       dword ptr fs:[0], esp
00407b05: push      ecx
00407b06: push      esi
00407b07: mov       esi, ecx
00407b09: mov       dword ptr [esp + 4], esi
00407b0d: mov       dword ptr [esi], 0x64a848
00407b13: mov       ecx, dword ptr [esi + 0x30]
00407b16: mov       dword ptr [esp + 0x10], 0
00407b1e: mov       eax, dword ptr [ecx]
00407b20: call      dword ptr [eax + 0xa8]
00407b26: test      al, al
00407b28: je        0x407b50
00407b2a: mov       ecx, dword ptr [esi + 0x30]
00407b2d: mov       edx, dword ptr [ecx]
00407b2f: call      dword ptr [edx + 0x9c]
00407b35: mov       ecx, dword ptr [eax + 0x18]
00407b38: test      ecx, ecx
00407b3a: je        0x407b50
00407b3c: mov       ecx, dword ptr [esi + 0x30]
00407b3f: push      0x7f7fffff
00407b44: push      0
00407b46: push      0
00407b48: mov       eax, dword ptr [ecx]
00407b4a: call      dword ptr [eax + 0x8c]
00407b50: mov       ecx, esi
00407b52: mov       dword ptr [esp + 0x10], 0xffffffff
00407b5a: call      0x4029b0
00407b5f: mov       ecx, dword ptr [esp + 8]
00407b63: pop       esi
00407b64: mov       dword ptr fs:[0], ecx
00407b6b: add       esp, 0x10
00407b6e: ret       
00407b6f: nop       
00407b70: push      esi
00407b71: mov       esi, ecx
00407b73: mov       ecx, dword ptr [esi + 0x30]
00407b76: call      0x423700
00407b7b: mov       ecx, eax
00407b7d: call      0x4a0640
00407b82: test      al, al
00407b84: je        0x407b9a
00407b86: mov       ecx, dword ptr [esi + 0x30]
00407b89: push      0xbf800000
00407b8e: push      0
00407b90: push      0
00407b92: mov       eax, dword ptr [ecx]
00407b94: call      dword ptr [eax + 0x8c]
00407b9a: pop       esi
00407b9b: ret       4
00407b9e: nop       
00407b9f: nop       
00407ba0: push      esi
00407ba1: push      edi
00407ba2: mov       edi, dword ptr [esp + 0xc]
00407ba6: mov       esi, ecx
00407ba8: push      edi
00407ba9: call      0x403610
00407bae: mov       dword ptr [esi + 0x28], edi
00407bb1: mov       dword ptr [esi], 0x64a858
00407bb7: mov       eax, esi
00407bb9: pop       edi
00407bba: pop       esi
00407bbb: ret       4
00407bbe: nop       
00407bbf: nop       
00407bc0: push      esi
00407bc1: mov       esi, ecx
00407bc3: mov       ecx, dword ptr [esi + 0x28]
00407bc6: call      0x423700
00407bcb: mov       ecx, eax
00407bcd: call      0x4a0bc0
00407bd2: test      al, al
00407bd4: jne       0x407bf4
00407bd6: mov       ecx, dword ptr [esi + 0x28]
00407bd9: call      0x423700
00407bde: mov       ecx, eax
00407be0: call      0x4a0d00
00407be5: test      al, al
00407be7: jne       0x407bf4
00407be9: mov       ecx, esi
00407beb: call      0x407db0
00407bf0: pop       esi
00407bf1: ret       4
00407bf4: mov       ecx, esi
00407bf6: call      0x407dc0
00407bfb: pop       esi
00407bfc: ret       4
00407bff: nop       
00407c00: mov       eax, dword ptr fs:[0]
00407c06: push      -1
00407c08: push      0x620378
00407c0d: push      eax
00407c0e: mov       dword ptr fs:[0], esp
00407c15: sub       esp, 0x10
00407c18: push      ebx
00407c19: push      esi
00407c1a: mov       esi, ecx
00407c1c: call      0x402cf0
00407c21: xor       ebx, ebx
00407c23: sub       eax, ebx
00407c25: je        0x407d76
00407c2b: dec       eax
00407c2c: je        0x407d32
00407c32: dec       eax
00407c33: je        0x407d05
00407c39: mov       al, byte ptr [esp + 0x2c]
00407c3d: push      ebp
00407c3e: push      edi
00407c3f: mov       byte ptr [esp + 0x10], al
00407c43: mov       edi, 0x68deb8
00407c48: or        ecx, 0xffffffff
00407c4b: xor       eax, eax
00407c4d: push      1
00407c4f: repne scasb al, byte ptr es:[edi]
00407c51: not       ecx
00407c53: dec       ecx
00407c54: mov       dword ptr [esp + 0x18], ebx
00407c58: mov       ebp, ecx
00407c5a: lea       ecx, [esp + 0x14]
00407c5e: push      ebp
00407c5f: mov       dword ptr [esp + 0x20], ebx
00407c63: mov       dword ptr [esp + 0x24], ebx
00407c67: call      0x401940
00407c6c: test      al, al
00407c6e: je        0x407c94
00407c70: mov       edi, dword ptr [esp + 0x14]
00407c74: mov       ecx, ebp
00407c76: mov       edx, ecx
00407c78: mov       esi, 0x68deb8
00407c7d: shr       ecx, 2
00407c80: rep movsd dword ptr es:[edi], dword ptr [esi]
00407c82: mov       ecx, edx
00407c84: and       ecx, 3
00407c87: rep movsb byte ptr es:[edi], byte ptr [esi]
00407c89: mov       eax, dword ptr [esp + 0x14]
00407c8d: mov       dword ptr [esp + 0x18], ebp
00407c91: mov       byte ptr [eax + ebp], bl
00407c94: lea       ecx, [esp + 0x10]
00407c98: mov       dword ptr [esp + 0x28], ebx
00407c9c: push      ecx
00407c9d: push      0xa4
00407ca2: push      0x68de88
00407ca7: push      0x68d2d0
00407cac: call      0x5a07f0
00407cb1: call      eax
00407cb3: mov       eax, dword ptr [esp + 0x24]
00407cb7: add       esp, 0x10
00407cba: cmp       eax, ebx
00407cbc: pop       edi
00407cbd: pop       ebp
00407cbe: je        0x407d90
00407cc4: lea       ecx, [eax - 1]
00407cc7: mov       al, byte ptr [eax - 1]
00407cca: cmp       al, bl
00407ccc: je        0x407ce9
00407cce: cmp       al, 0xff
00407cd0: je        0x407ce9
00407cd2: dec       al
00407cd4: pop       esi
00407cd5: mov       byte ptr [ecx], al
00407cd7: pop       ebx
00407cd8: mov       ecx, dword ptr [esp + 0x10]
00407cdc: mov       dword ptr fs:[0], ecx
00407ce3: add       esp, 0x1c
00407ce6: ret       8
00407ce9: push      ecx
00407cea: call      0x5fe5f0
00407cef: add       esp, 4
00407cf2: pop       esi
00407cf3: pop       ebx
00407cf4: mov       ecx, dword ptr [esp + 0x10]
00407cf8: mov       dword ptr fs:[0], ecx
00407cff: add       esp, 0x1c
00407d02: ret       8
00407d05: mov       ecx, dword ptr [esi + 0x28]
00407d08: call      0x423700
00407d0d: mov       ecx, eax
00407d0f: call      0x4a0d00
00407d14: test      al, al
00407d16: je        0x407d90
00407d18: mov       ecx, esi
00407d1a: call      0x402d00
00407d1f: pop       esi
00407d20: pop       ebx
00407d21: mov       ecx, dword ptr [esp + 0x10]
00407d25: mov       dword ptr fs:[0], ecx
00407d2c: add       esp, 0x1c
00407d2f: ret       8
00407d32: mov       edx, dword ptr [esp + 0x2c]
00407d36: mov       eax, dword ptr [esp + 0x28]
00407d3a: push      edx
00407d3b: push      eax
00407d3c: mov       ecx, esi
00407d3e: call      0x402a80
00407d43: mov       ecx, eax
00407d45: call      0x402d20
00407d4a: mov       ecx, esi
00407d4c: call      0x402a80
00407d51: mov       ecx, eax
00407d53: call      0x402d10
00407d58: test      al, al
00407d5a: je        0x407d90
00407d5c: mov       ecx, esi
00407d5e: call      0x407e30
00407d63: pop       esi
00407d64: pop       ebx
00407d65: mov       ecx, dword ptr [esp + 0x10]
00407d69: mov       dword ptr fs:[0], ecx
00407d70: add       esp, 0x1c
00407d73: ret       8
00407d76: mov       ecx, dword ptr [esi + 0x28]
00407d79: call      0x423700
00407d7e: mov       ecx, eax
00407d80: call      0x4a0d00
00407d85: test      al, al
00407d87: je        0x407d90
00407d89: mov       ecx, esi
00407d8b: call      0x407dc0
00407d90: mov       ecx, dword ptr [esp + 0x18]
00407d94: pop       esi
00407d95: pop       ebx
00407d96: mov       dword ptr fs:[0], ecx
00407d9d: add       esp, 0x1c
00407da0: ret       8
00407da3: nop       
00407da4: nop       
00407da5: nop       
00407da6: nop       
00407da7: nop       
00407da8: nop       
00407da9: nop       
00407daa: nop       
00407dab: nop       
00407dac: nop       
00407dad: nop       
00407dae: nop       
00407daf: nop       
00407db0: push      0
00407db2: push      0
00407db4: call      0x402a10
00407db9: ret       
00407dba: nop       
00407dbb: nop       
00407dbc: nop       
00407dbd: nop       
00407dbe: nop       
00407dbf: nop       
00407dc0: push      -1
00407dc2: push      0x62039b
00407dc7: mov       eax, dword ptr fs:[0]
00407dcd: push      eax
00407dce: mov       dword ptr fs:[0], esp
00407dd5: push      ecx
00407dd6: push      esi
00407dd7: mov       esi, ecx
00407dd9: push      0x2c
00407ddb: call      0x60a0b5
00407de0: add       esp, 4
00407de3: mov       dword ptr [esp + 4], eax
00407de7: test      eax, eax
00407de9: mov       dword ptr [esp + 0x10], 0
00407df1: je        0x407e00
00407df3: mov       ecx, dword ptr [esi + 0x28]
00407df6: push      ecx
00407df7: mov       ecx, eax
00407df9: call      0x407e40
00407dfe: jmp       0x407e02
00407e00: xor       eax, eax
00407e02: push      eax
00407e03: push      1
00407e05: mov       ecx, esi
00407e07: mov       dword ptr [esp + 0x18], 0xffffffff
00407e0f: call      0x402a10
00407e14: mov       ecx, dword ptr [esp + 8]
00407e18: pop       esi
00407e19: mov       dword ptr fs:[0], ecx
00407e20: add       esp, 0x10
00407e23: ret       
00407e24: nop       
00407e25: nop       
00407e26: nop       
00407e27: nop       
00407e28: nop       
00407e29: nop       
00407e2a: nop       
00407e2b: nop       
00407e2c: nop       
00407e2d: nop       
00407e2e: nop       
00407e2f: nop       
00407e30: jmp       0x402d00
00407e35: nop       
00407e36: nop       
00407e37: nop       
00407e38: nop       
00407e39: nop       
00407e3a: nop       
00407e3b: nop       
00407e3c: nop       
00407e3d: nop       
00407e3e: nop       
00407e3f: nop       
