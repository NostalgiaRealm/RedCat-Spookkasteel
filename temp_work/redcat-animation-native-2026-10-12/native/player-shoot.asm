004348b0: add       byte ptr fs:[eax - 0x48], ch
004348b4: push      edx
004348b5: imul      eax, dword ptr [eax], -0x75
004348b8: iretd     
004348b9: fstp      dword ptr [0x6b52bc]
004348bf: call      0x437750
004348c4: pop       edi
004348c5: pop       esi
004348c6: pop       ebp
004348c7: pop       ebx
004348c8: add       esp, 0x88
004348ce: ret       0x10
004348d1: mov       ecx, dword ptr [esp + 0xa4]
004348d8: lea       edx, [esp + 0x34]
004348dc: push      edx
004348dd: mov       eax, dword ptr [ecx]
004348df: call      dword ptr [eax + 0x28]
004348e2: push      eax
004348e3: mov       ecx, edi
004348e5: call      0x437750
004348ea: pop       edi
004348eb: pop       esi
004348ec: pop       ebp
004348ed: pop       ebx
004348ee: add       esp, 0x88
004348f4: ret       0x10
004348f7: nop       
004348f8: nop       
004348f9: nop       
004348fa: nop       
004348fb: nop       
004348fc: nop       
004348fd: nop       
004348fe: nop       
004348ff: nop       
00434900: mov       al, byte ptr [0x6b52b0]
00434905: sub       esp, 0x44
00434908: test      al, 1
0043490a: push      ebx
0043490b: push      ebp
0043490c: push      esi
0043490d: push      edi
0043490e: mov       esi, ecx
00434910: jne       0x434948
00434912: mov       dl, al
00434914: or        eax, 0xffffffff
00434917: or        dl, 1
0043491a: push      0x434e20
0043491f: mov       byte ptr [0x6b52b0], dl
00434925: mov       dword ptr [0x6b52a0], eax
0043492a: mov       dword ptr [0x6b52a4], eax
0043492f: mov       dword ptr [0x6b52a8], 0x3f800000
00434939: mov       byte ptr [0x6b52ac], 1
00434940: call      0x60a57b
00434945: add       esp, 4
00434948: mov       eax, dword ptr [esi + 0x35c]
0043494e: xor       ebx, ebx
00434950: cmp       eax, ebx
00434952: jne       0x434992
00434954: cmp       dword ptr [esi + 0x360], ebx
0043495a: jne       0x434992
0043495c: mov       ecx, dword ptr [esi + 0x334]
00434962: call      0x471140
00434967: mov       ecx, dword ptr [esi + 0x338]
0043496d: push      ebx
0043496e: call      0x453ce0
00434973: cmp       byte ptr [0x6b5844], bl
00434979: je        0x43498c
0043497b: mov       ecx, dword ptr [esi + 0x250]
00434981: call      0x458f90
00434986: mov       byte ptr [0x6b5844], bl
0043498c: mov       byte ptr [esi + 0x364], bl
00434992: cmp       byte ptr [esi + 0x364], bl
00434998: je        0x434acb
0043499e: mov       eax, dword ptr [esi + 0x35c]
004349a4: cmp       eax, ebx
004349a6: je        0x434a45
004349ac: push      ebx
004349ad: push      0x68f770
004349b2: push      0x68ecb8
004349b7: push      ebx
004349b8: push      eax
004349b9: call      0x60a6f2
004349be: add       esp, 0x14
004349c1: cmp       eax, ebx
004349c3: je        0x4349cf
004349c5: mov       ecx, eax
004349c7: call      0x422370
004349cc: push      eax
004349cd: jmp       0x4349f9
004349cf: mov       eax, dword ptr [esi + 0x35c]
004349d5: push      ebx
004349d6: push      0x68ff60
004349db: push      0x68ecb8
004349e0: push      ebx
004349e1: push      eax
004349e2: call      0x60a6f2
004349e7: add       esp, 0x14
004349ea: cmp       eax, ebx
004349ec: je        0x4349f8
004349ee: mov       ecx, eax
004349f0: call      0x42a590
004349f5: push      eax
004349f6: jmp       0x4349f9
004349f8: push      ebx
004349f9: mov       ecx, dword ptr [esi + 0x338]
004349ff: call      0x453ce0
00434a04: mov       edx, dword ptr [esi + 0x35c]
00434a0a: mov       ecx, dword ptr [esi + 0x250]
00434a10: push      1
00434a12: push      edx
00434a13: push      9
00434a15: call      0x459270
00434a1a: lea       eax, [esp + 0x38]
00434a1e: mov       byte ptr [0x6b5844], 1
00434a25: mov       ecx, dword ptr [esi + 0x35c]
00434a2b: push      eax
00434a2c: call      0x49bc80
00434a31: mov       ecx, dword ptr [eax]
00434a33: mov       dword ptr [esp + 0x14], ecx
00434a37: mov       edx, dword ptr [eax + 4]
00434a3a: mov       dword ptr [esp + 0x18], edx
00434a3e: mov       eax, dword ptr [eax + 8]
00434a41: mov       dword ptr [esp + 0x1c], eax
00434a45: mov       eax, dword ptr [esi + 0x360]
00434a4b: cmp       eax, ebx
00434a4d: je        0x434a95
00434a4f: mov       ecx, dword ptr [esi + 0x250]
00434a55: push      ebx
00434a56: push      eax
00434a57: push      9
00434a59: call      0x459270
00434a5e: mov       byte ptr [0x6b5844], 1
00434a65: mov       ecx, dword ptr [esi + 0x360]
00434a6b: lea       eax, [esp + 0x38]
00434a6f: mov       edx, dword ptr [ecx]
00434a71: push      eax
00434a72: call      dword ptr [edx + 0x48]
00434a75: mov       ecx, dword ptr [eax]
00434a77: push      ebx
00434a78: mov       dword ptr [esp + 0x18], ecx
00434a7c: mov       ecx, dword ptr [esi + 0x338]
00434a82: mov       edx, dword ptr [eax + 4]
00434a85: mov       dword ptr [esp + 0x1c], edx
00434a89: mov       eax, dword ptr [eax + 8]
00434a8c: mov       dword ptr [esp + 0x20], eax
00434a90: call      0x453ce0
00434a95: lea       ecx, [esp + 0x20]
00434a99: lea       edx, [esp + 0x38]
00434a9d: push      ecx
00434a9e: push      edx
00434a9f: mov       ecx, esi
00434aa1: call      0x434e80
00434aa6: mov       edx, eax
00434aa8: lea       ecx, [esp + 0x18]
00434aac: call      0x5b2fe0
00434ab1: mov       eax, dword ptr [esp + 0x20]
00434ab5: mov       ecx, dword ptr [esp + 0x24]
00434ab9: mov       edx, dword ptr [esp + 0x28]
00434abd: mov       dword ptr [esp + 0x14], eax
00434ac1: mov       dword ptr [esp + 0x18], ecx
00434ac5: mov       dword ptr [esp + 0x1c], edx
00434ac9: jmp       0x434b24
00434acb: mov       ecx, esi
00434acd: call      0x4d6960
00434ad2: push      ecx
00434ad3: lea       eax, [esp + 0x3c]
00434ad7: fstp      dword ptr [esp]
00434ada: push      eax
00434adb: call      0x5b16a0
00434ae0: mov       ecx, dword ptr [eax]
00434ae2: add       esp, 8
00434ae5: mov       dword ptr [esp + 0x14], ecx
00434ae9: mov       ecx, dword ptr [esi + 0x338]
00434aef: mov       edx, dword ptr [eax + 4]
00434af2: push      ebx
00434af3: mov       dword ptr [esp + 0x1c], edx
00434af7: mov       dword ptr [esp + 0x1c], 0
00434aff: mov       eax, dword ptr [eax + 8]
00434b02: mov       dword ptr [esp + 0x20], eax
00434b06: call      0x453ce0
00434b0b: cmp       byte ptr [0x6b5844], bl
00434b11: je        0x434b24
00434b13: mov       ecx, dword ptr [esi + 0x250]
00434b19: call      0x458f90
00434b1e: mov       byte ptr [0x6b5844], bl
00434b24: mov       ecx, esi
00434b26: call      0x434e30
00434b2b: mov       ebp, eax
00434b2d: cmp       ebp, 0xb
00434b30: jne       0x434c25
00434b36: mov       ecx, dword ptr [esp + 0x58]
00434b3a: push      ecx
00434b3b: mov       ecx, esi
00434b3d: call      0x436720
00434b42: fst       dword ptr [esp + 0x58]
00434b46: fcomp     dword ptr [0x64a450]
00434b4c: fnstsw    ax
00434b4e: test      ah, 0x41
00434b51: jne       0x434b5d
00434b53: mov       edx, dword ptr [esp + 0x58]
00434b57: mov       dword ptr [0x69017c], edx
00434b5d: mov       eax, dword ptr [0x6b915c]
00434b62: cmp       eax, ebx
00434b64: jne       0x434b6b
00434b66: call      0x4bc480
00434b6b: push      1
00434b6d: push      0x690308
00434b72: push      0x6902e8
00434b77: push      ebx
00434b78: push      eax
00434b79: call      0x60a6f2
00434b7e: add       esp, 0x14
00434b81: mov       ecx, eax
00434b83: call      0x492360
00434b88: mov       edx, dword ptr [eax]
00434b8a: mov       ecx, eax
00434b8c: call      dword ptr [edx + 0xc]
00434b8f: test      al, al
00434b91: jne       0x434bcb
00434b93: mov       ecx, esi
00434b95: call      0x436a30
00434b9a: cmp       dword ptr [0x6b584c], ebx
00434ba0: jne       0x434c4f
00434ba6: mov       dword ptr [0x6b584c], 1
00434bb0: mov       ecx, dword ptr [esi + 0x254]
00434bb6: push      0x3ff33333
00434bbb: add       ecx, 0x19c
00434bc1: call      0x4a0bd0
00434bc6: jmp       0x434c4f
00434bcb: cmp       dword ptr [0x6b584c], ebx
00434bd1: jne       0x434bda
00434bd3: mov       ecx, esi
00434bd5: call      0x436b40
00434bda: mov       ecx, dword ptr [esi + 0x254]
00434be0: push      0x3e851eb8
00434be5: add       ecx, 0x19c
00434beb: call      0x4a0e20
00434bf0: mov       ecx, dword ptr [esi + 0x254]
00434bf6: push      ebx
00434bf7: add       ecx, 0x19c
00434bfd: call      0x4a0bd0
00434c02: fld       dword ptr [esp + 0x58]
00434c06: fmul      dword ptr [0x64c574]
00434c0c: push      ecx
00434c0d: mov       ecx, esi
00434c0f: fstp      dword ptr [esp]
00434c12: call      0x4318c0
00434c17: mov       dword ptr [esi + 0x36c], ebx
00434c1d: mov       dword ptr [0x6b584c], ebx
00434c23: jmp       0x434c4f
00434c25: mov       ecx, dword ptr [esi + 0x254]
00434c2b: push      0x3ff33333
00434c30: add       ecx, 0x19c
00434c36: call      0x4a0bd0
00434c3b: mov       dword ptr [0x69017c], 0x42c80000
00434c45: mov       dword ptr [0x6b584c], 1
00434c4f: lea       eax, [esp + 0x38]
00434c53: mov       ecx, esi
00434c55: push      eax
00434c56: call      0x434e80
00434c5b: mov       ecx, dword ptr [eax]
00434c5d: mov       dword ptr [esp + 0x2c], ecx
00434c61: mov       edx, dword ptr [eax + 4]
00434c64: mov       dword ptr [esp + 0x30], edx
00434c68: mov       eax, dword ptr [eax + 8]
00434c6b: mov       dword ptr [esp + 0x34], eax
00434c6f: mov       al, byte ptr [esi + 0x394]
00434c75: cmp       al, bl
00434c77: je        0x434cf7
00434c79: cmp       dword ptr [esi + 0x390], ebx
00434c7f: je        0x434ce3
00434c81: mov       edi, dword ptr [0x6b915c]
00434c87: cmp       edi, ebx
00434c89: jne       0x434c92
00434c8b: call      0x4bc480
00434c90: mov       edi, eax
00434c92: mov       eax, dword ptr [edi + 0x4e8]
00434c98: cmp       eax, 0x80000000
00434c9d: jne       0x434cbd
00434c9f: mov       eax, dword ptr [edi + 0x49c]
00434ca5: cmp       eax, ebx
00434ca7: jne       0x434cae
00434ca9: mov       eax, 0x64a3b4
00434cae: push      eax
00434caf: call      0x60af10
00434cb4: add       esp, 4
00434cb7: mov       dword ptr [edi + 0x4e8], eax
00434cbd: cmp       eax, ebx
00434cbf: jne       0x434ce3
00434cc1: mov       ecx, dword ptr [esi + 0x390]
00434cc7: lea       edx, [esp + 0x38]
00434ccb: push      edx
00434ccc: mov       edi, dword ptr [ecx]
00434cce: mov       ecx, dword ptr [esi + 0x254]
00434cd4: call      0x49bc80
00434cd9: mov       ecx, dword ptr [esi + 0x390]
00434cdf: push      eax
00434ce0: call      dword ptr [edi + 0x4c]
00434ce3: mov       ecx, dword ptr [esi + 0x330]
00434ce9: cmp       ecx, ebx
00434ceb: je        0x434cf7
00434ced: mov       eax, dword ptr [ecx]
00434cef: lea       edx, [esp + 0x2c]
00434cf3: push      edx
00434cf4: call      dword ptr [eax + 0x4c]
00434cf7: mov       ecx, dword ptr [esi + 0x254]
00434cfd: add       ecx, 0x19c
00434d03: call      0x4a1060
00434d08: fcomp     dword ptr [0x64c598]
00434d0e: fnstsw    ax
00434d10: test      ah, 0x41
00434d13: jne       0x434e14
00434d19: cmp       dword ptr [0x6b584c], ebx
00434d1f: je        0x434e14
00434d25: fld       dword ptr [esi + 0x36c]
00434d2b: fcomp     dword ptr [0x64a450]
00434d31: fnstsw    ax
00434d33: test      ah, 0x40
00434d36: je        0x434e14
00434d3c: cmp       ebp, 0xb
00434d3f: mov       ecx, esi
00434d41: jne       0x434d4a
00434d43: call      0x436a30
00434d48: jmp       0x434d4f
00434d4a: call      0x436b40
00434d4f: mov       ecx, esi
00434d51: call      0x431820
00434d56: lea       eax, [esp + 0x58]
00434d5a: mov       edx, dword ptr [esp + 0x14]
00434d5e: push      eax
00434d5f: push      1
00434d61: mov       eax, dword ptr [esp + 0x20]
00434d65: sub       esp, 0xc
00434d68: mov       ecx, esp
00434d6a: mov       dword ptr [ecx], edx
00434d6c: mov       edx, dword ptr [esp + 0x30]
00434d70: mov       dword ptr [ecx + 4], eax
00434d73: lea       eax, [esp + 0x4c]
00434d77: push      eax
00434d78: mov       dword ptr [ecx + 8], edx
00434d7b: mov       ecx, esi
00434d7d: call      0x434e80
00434d82: mov       edx, dword ptr [eax]
00434d84: sub       esp, 0xc
00434d87: mov       ecx, esp
00434d89: push      ebp
00434d8a: mov       dword ptr [ecx], edx
00434d8c: mov       edx, dword ptr [eax + 4]
00434d8f: mov       eax, dword ptr [eax + 8]
00434d92: mov       dword ptr [ecx + 4], edx
00434d95: push      ecx
00434d96: mov       dword ptr [ecx + 8], eax
00434d99: mov       ecx, esp
00434d9b: mov       dword ptr [esp + 0x38], esp
00434d9f: push      ecx
00434da0: mov       ecx, esi
00434da2: call      0x4042e0
00434da7: lea       edx, [esp + 0x6c]
00434dab: push      edx
00434dac: call      0x44d260
00434db1: fld       dword ptr [0x69017c]
00434db7: fmul      dword ptr [0x64c574]
00434dbd: mov       ecx, dword ptr [esp + 0x84]
00434dc4: add       esp, 0x2c
00434dc7: fmul      dword ptr [ecx + 0x1d8]
00434dcd: fcom      dword ptr [0x64a354]
00434dd3: fnstsw    ax
00434dd5: test      ah, 1
00434dd8: je        0x434de2
00434dda: fstp      st(0)
00434ddc: fld       dword ptr [0x64a354]
00434de2: fstp      dword ptr [ecx + 0x1d8]
00434de8: mov       eax, dword ptr [esp + 0x58]
00434dec: fld       dword ptr [eax + 0x1d8]
00434df2: fmul      dword ptr [0x64be78]
00434df8: fmul      dword ptr [0x64c574]
00434dfe: fstp      dword ptr [eax + 0x1d8]
00434e04: mov       dword ptr [esi + 0x36c], 0x3f800000
00434e0e: mov       dword ptr [0x6b584c], ebx
00434e14: pop       edi
00434e15: pop       esi
00434e16: pop       ebp
00434e17: pop       ebx
00434e18: add       esp, 0x44
00434e1b: ret       4
00434e1e: nop       
00434e1f: nop       
00434e20: ret       
00434e21: nop       
00434e22: nop       
00434e23: nop       
00434e24: nop       
00434e25: nop       
00434e26: nop       
00434e27: nop       
00434e28: nop       
00434e29: nop       
00434e2a: nop       
00434e2b: nop       
00434e2c: nop       
00434e2d: nop       
00434e2e: nop       
00434e2f: nop       
00434e30: mov       eax, dword ptr [ecx + 0x1f0]
00434e36: push      esi
00434e37: push      0
00434e39: push      0x68f940
00434e3e: push      0x68f918
00434e43: push      0
00434e45: push      eax
00434e46: call      0x60a6f2
00434e4b: add       esp, 0x14
00434e4e: mov       esi, eax
00434e50: mov       ecx, esi
00434e52: push      4
00434e54: call      0x439f10
00434e59: test      al, al
00434e5b: je        0x434e64
00434e5d: mov       eax, 0xb
00434e62: pop       esi
00434e63: ret       
00434e64: push      2
00434e66: mov       ecx, esi
00434e68: call      0x439f10
00434e6d: neg       al
00434e6f: sbb       eax, eax
00434e71: pop       esi
00434e72: add       eax, 9
00434e75: ret       
00434e76: nop       
00434e77: nop       
00434e78: nop       
00434e79: nop       
00434e7a: nop       
00434e7b: nop       
00434e7c: nop       
00434e7d: nop       
00434e7e: nop       
00434e7f: nop       
00434e80: sub       esp, 0x48
00434e83: mov       ecx, dword ptr [ecx + 0x254]
00434e89: push      esi
00434e8a: mov       dword ptr [esp + 4], 0
00434e92: mov       dword ptr [esp + 8], 0
00434e9a: mov       dword ptr [esp + 0xc], 0
00434ea2: call      0x4247e0
00434ea7: mov       esi, eax
00434ea9: mov       ecx, esi
00434eab: call      0x5b3af0
00434eb0: mov       ecx, eax
00434eb2: mov       edx, 0x6904fc
00434eb7: call      0x5b3fb0
00434ebc: test      eax, eax
00434ebe: je        0x434efb
00434ec0: lea       eax, [esp + 0x1c]
00434ec4: mov       edx, 0x6904fc
00434ec9: push      eax
00434eca: mov       ecx, esi
00434ecc: call      0x5b44a0
00434ed1: lea       ecx, [esp + 4]
00434ed5: lea       edx, [esp + 0x10]
00434ed9: push      ecx
00434eda: lea       ecx, [esp + 0x20]
00434ede: mov       dword ptr [esp + 0x14], 0
00434ee6: mov       dword ptr [esp + 0x18], 0
00434eee: mov       dword ptr [esp + 0x1c], 0
00434ef6: call      0x5b3470
00434efb: mov       eax, dword ptr [esp + 0x50]
00434eff: mov       ecx, dword ptr [esp + 4]
00434f03: mov       edx, eax
00434f05: pop       esi
00434f06: mov       dword ptr [edx], ecx
00434f08: mov       ecx, dword ptr [esp + 4]
00434f0c: mov       dword ptr [edx + 4], ecx
00434f0f: mov       ecx, dword ptr [esp + 8]
00434f13: mov       dword ptr [edx + 8], ecx
00434f16: add       esp, 0x48
00434f19: ret       4
00434f1c: nop       
00434f1d: nop       
00434f1e: nop       
00434f1f: nop       
