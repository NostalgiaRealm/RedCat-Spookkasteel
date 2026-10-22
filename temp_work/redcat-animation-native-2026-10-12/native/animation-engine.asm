004a0660: mov       eax, dword ptr [esp + 8]
004a0664: push      esi
004a0665: mov       esi, ecx
004a0667: push      eax
004a0668: call      0x4a0bb0
004a066d: fld       dword ptr [esp + 0x10]
004a0671: fcomp     dword ptr [0x64a450]
004a0677: fnstsw    ax
004a0679: test      ah, 1
004a067c: je        0x4a0685
004a067e: mov       eax, 1
004a0683: jmp       0x4a0687
004a0685: xor       eax, eax
004a0687: push      eax
004a0688: mov       ecx, esi
004a068a: call      0x4a0ba0
004a068f: fld       dword ptr [esp + 0x10]
004a0693: push      ecx
004a0694: mov       ecx, esi
004a0696: fabs      
004a0698: fstp      dword ptr [esp]
004a069b: call      0x4a0bd0
004a06a0: mov       ecx, dword ptr [esp + 8]
004a06a4: push      ecx
004a06a5: mov       ecx, esi
004a06a7: call      0x4a06b0
004a06ac: pop       esi
004a06ad: ret       0xc
004a06b0: mov       eax, dword ptr fs:[0]
004a06b6: push      -1
004a06b8: push      0x62cec8
004a06bd: push      eax
004a06be: mov       dword ptr fs:[0], esp
004a06c5: sub       esp, 0x28
004a06c8: push      ebx
004a06c9: push      ebp
004a06ca: mov       ebp, dword ptr [esp + 0x40]
004a06ce: push      esi
004a06cf: mov       esi, ecx
004a06d1: push      edi
004a06d2: xor       edi, edi
004a06d4: mov       byte ptr [esi + 0x44], 0
004a06d8: mov       eax, dword ptr [ebp + 4]
004a06db: mov       ecx, dword ptr [ebp + 8]
004a06de: cmp       eax, edi
004a06e0: lea       ebx, [esi + 0x18]
004a06e3: jne       0x4a06ea
004a06e5: mov       eax, 0x64a3b4
004a06ea: push      ecx
004a06eb: push      eax
004a06ec: mov       eax, dword ptr [ebx + 8]
004a06ef: mov       ecx, ebx
004a06f1: push      eax
004a06f2: push      edi
004a06f3: call      0x4251b0
004a06f8: cmp       eax, edi
004a06fa: je        0x4a09b5
004a0700: mov       ecx, dword ptr [esi + 0x38]
004a0703: cmp       ecx, edi
004a0705: je        0x4a0727
004a0707: fld       dword ptr [esi + 0x58]
004a070a: fcomp     dword ptr [0x64ab98]
004a0710: fnstsw    ax
004a0712: test      ah, 1
004a0715: je        0x4a0727
004a0717: mov       dword ptr [esi + 0x50], ecx
004a071a: mov       ecx, dword ptr [esi + 0x28]
004a071d: mov       dword ptr [esi + 0x54], ecx
004a0720: mov       dword ptr [esi + 0x58], 0x3f800000
004a0727: mov       edx, dword ptr [0x64aba8]
004a072d: mov       ecx, ebx
004a072f: push      edx
004a0730: push      edi
004a0731: push      ebp
004a0732: call      0x40cc00
004a0737: cmp       dword ptr [esi + 0x20], edi
004a073a: jbe       0x4a09b2
004a0740: mov       eax, dword ptr [ebx + 4]
004a0743: mov       dword ptr [esp + 0x48], 0x64a3b4
004a074b: cmp       eax, edi
004a074d: je        0x4a0753
004a074f: mov       dword ptr [esp + 0x48], eax
004a0753: mov       ecx, dword ptr [esi + 0x14]
004a0756: lea       eax, [esp + 0x10]
004a075a: push      eax
004a075b: call      0x421000
004a0760: mov       ebp, eax
004a0762: mov       eax, dword ptr [ebp]
004a0765: mov       dword ptr [esp + 0x40], edi
004a0769: cmp       eax, edi
004a076b: jne       0x4a07d2
004a076d: mov       cl, byte ptr [esp + 0x48]
004a0771: push      edi
004a0772: mov       byte ptr [esp + 0x1c], cl
004a0776: lea       ecx, [esp + 0x1c]
004a077a: call      0x4040a0
004a077f: mov       edi, 0x6b3f70
004a0784: or        ecx, 0xffffffff
004a0787: xor       eax, eax
004a0789: repne scasb al, byte ptr es:[edi]
004a078b: not       ecx
004a078d: dec       ecx
004a078e: push      ecx
004a078f: push      0x6b3f70
004a0794: lea       ecx, [esp + 0x20]
004a0798: call      0x4040f0
004a079d: lea       edx, [esp + 0x18]
004a07a1: mov       byte ptr [esp + 0x40], 1
004a07a6: push      edx
004a07a7: push      0xb6
004a07ac: push      0x68d638
004a07b1: push      0x68d62c
004a07b6: call      0x5a07f0
004a07bb: call      eax
004a07bd: add       esp, 0x10
004a07c0: lea       ecx, [esp + 0x18]
004a07c4: mov       byte ptr [esp + 0x40], 0
004a07c9: push      1
004a07cb: call      0x4040a0
004a07d0: xor       edi, edi
004a07d2: mov       ecx, dword ptr [ebp]
004a07d5: call      0x49f120
004a07da: mov       edx, dword ptr [esp + 0x48]
004a07de: mov       ecx, eax
004a07e0: call      0x5b3f40
004a07e5: mov       ecx, dword ptr [esp + 0x10]
004a07e9: or        ebp, 0xffffffff
004a07ec: cmp       ecx, edi
004a07ee: mov       dword ptr [esi + 0x38], eax
004a07f1: mov       dword ptr [esp + 0x40], ebp
004a07f5: je        0x4a07fc
004a07f7: call      0x4098d0
004a07fc: mov       ecx, dword ptr [esi + 0x38]
004a07ff: cmp       ecx, edi
004a0801: jne       0x4a087a
004a0803: mov       eax, dword ptr [esi + 0x14]
004a0806: push      edi
004a0807: push      0x695310
004a080c: push      0x68ecb8
004a0811: push      edi
004a0812: push      eax
004a0813: call      0x60a6f2
004a0818: add       esp, 0x14
004a081b: test      eax, eax
004a081d: jne       0x4a0871
004a081f: mov       ebx, dword ptr [ebx + 4]
004a0822: cmp       ebx, edi
004a0824: jne       0x4a082b
004a0826: mov       ebx, 0x64a3b4
004a082b: mov       eax, dword ptr [esi + 0x14]
004a082e: add       eax, 0x5c
004a0831: mov       eax, dword ptr [eax + 4]
004a0834: cmp       eax, edi
004a0836: jne       0x4a083d
004a0838: mov       eax, 0x64a3b4
004a083d: push      ebx
004a083e: push      eax
004a083f: lea       ecx, [esp + 0x30]
004a0843: push      0x6952f0
004a0848: push      ecx
004a0849: call      0x5ae390
004a084e: add       esp, 0x10
004a0851: mov       ecx, dword ptr [esi + 0x14]
004a0854: push      eax
004a0855: mov       dword ptr [esp + 0x44], 2
004a085d: call      0x5035a0
004a0862: push      1
004a0864: lea       ecx, [esp + 0x2c]
004a0868: mov       dword ptr [esp + 0x44], ebp
004a086c: call      0x4040a0
004a0871: mov       byte ptr [esi + 0x44], 1
004a0875: jmp       0x4a09b5
004a087a: lea       edx, [esp + 0x14]
004a087e: push      edx
004a087f: lea       edx, [esp + 0x4c]
004a0883: call      0x5bda90
004a0888: test      eax, eax
004a088a: setne     al
004a088d: test      al, al
004a088f: jne       0x4a08ec
004a0891: mov       ebx, dword ptr [ebx + 4]
004a0894: cmp       ebx, edi
004a0896: jne       0x4a089d
004a0898: mov       ebx, 0x64a3b4
004a089d: mov       eax, dword ptr [esi + 0x14]
004a08a0: add       eax, 0x5c
004a08a3: mov       eax, dword ptr [eax + 4]
004a08a6: cmp       eax, edi
004a08a8: jne       0x4a08af
004a08aa: mov       eax, 0x64a3b4
004a08af: push      ebx
004a08b0: push      eax
004a08b1: lea       eax, [esp + 0x30]
004a08b5: push      0x6952b8
004a08ba: push      eax
004a08bb: call      0x5ae390
004a08c0: add       esp, 0x10
004a08c3: mov       ecx, dword ptr [esi + 0x14]
004a08c6: push      eax
004a08c7: mov       dword ptr [esp + 0x44], 3
004a08cf: call      0x5035a0
004a08d4: push      1
004a08d6: lea       ecx, [esp + 0x2c]
004a08da: mov       dword ptr [esp + 0x44], ebp
004a08de: call      0x4040a0
004a08e3: mov       byte ptr [esi + 0x44], 1
004a08e7: jmp       0x4a09b5
004a08ec: fld       dword ptr [esp + 0x48]
004a08f0: fmul      dword ptr [0x64b79c]
004a08f6: call      0x60ab20
004a08fb: fld       dword ptr [esp + 0x14]
004a08ff: fmul      dword ptr [0x64b79c]
004a0905: mov       ebp, eax
004a0907: mov       dword ptr [esi + 0x2c], ebp
004a090a: call      0x60ab20
004a090f: cmp       eax, ebp
004a0911: mov       dword ptr [esi + 0x30], eax
004a0914: jle       0x4a091e
004a0916: cmp       eax, edi
004a0918: jg        0x4a099e
004a091e: mov       ebx, dword ptr [ebx + 4]
004a0921: cmp       ebx, edi
004a0923: jne       0x4a092a
004a0925: mov       ebx, 0x64a3b4
004a092a: mov       eax, dword ptr [esi + 0x14]
004a092d: add       eax, 0x5c
004a0930: mov       eax, dword ptr [eax + 4]
004a0933: cmp       eax, edi
004a0935: jne       0x4a093c
004a0937: mov       eax, 0x64a3b4
004a093c: push      ebx
004a093d: push      eax
004a093e: lea       ecx, [esp + 0x20]
004a0942: push      0x695268
004a0947: push      ecx
004a0948: call      0x5ae390
004a094d: add       esp, 0x10
004a0950: mov       ecx, dword ptr [esi + 0x14]
004a0953: push      eax
004a0954: mov       dword ptr [esp + 0x44], 4
004a095c: call      0x5035a0
004a0961: mov       eax, dword ptr [esp + 0x1c]
004a0965: mov       dword ptr [esp + 0x40], 0xffffffff
004a096d: cmp       eax, edi
004a096f: je        0x4a098e
004a0971: lea       ecx, [eax - 1]
004a0974: mov       al, byte ptr [eax - 1]
004a0977: test      al, al
004a0979: je        0x4a0985
004a097b: cmp       al, 0xff
004a097d: je        0x4a0985
004a097f: dec       al
004a0981: mov       byte ptr [ecx], al
004a0983: jmp       0x4a098e
004a0985: push      ecx
004a0986: call      0x5fe5f0
004a098b: add       esp, 4
004a098e: mov       dword ptr [esp + 0x1c], edi
004a0992: mov       dword ptr [esp + 0x20], edi
004a0996: mov       dword ptr [esp + 0x24], edi
004a099a: mov       byte ptr [esi + 0x44], 1
004a099e: mov       edx, dword ptr [esi + 0x30]
004a09a1: mov       eax, dword ptr [esi + 0x2c]
004a09a4: sub       edx, eax
004a09a6: mov       ecx, esi
004a09a8: mov       dword ptr [esi + 0x34], edx
004a09ab: call      0x4a10a0
004a09b0: jmp       0x4a09b5
004a09b2: mov       dword ptr [esi + 0x38], edi
004a09b5: mov       ecx, esi
004a09b7: call      0x4a0640
004a09bc: test      al, al
004a09be: je        0x4a09ce
004a09c0: mov       al, byte ptr [esi + 0x3c]
004a09c3: test      al, al
004a09c5: jne       0x4a09ce
004a09c7: mov       ecx, esi
004a09c9: call      0x4a10a0
004a09ce: mov       ecx, dword ptr [esp + 0x38]
004a09d2: pop       edi
004a09d3: pop       esi
004a09d4: pop       ebp
004a09d5: pop       ebx
004a09d6: mov       dword ptr fs:[0], ecx
004a09dd: add       esp, 0x34
004a09e0: ret       4
004a09e3: nop       
004a09e4: nop       
004a09e5: nop       
004a09e6: nop       
004a09e7: nop       
004a09e8: nop       
004a09e9: nop       
004a09ea: nop       
004a09eb: nop       
004a09ec: nop       
004a09ed: nop       
004a09ee: nop       
004a09ef: nop       
004a09f0: push      esi
004a09f1: mov       esi, ecx
004a09f3: mov       al, byte ptr [esi + 0x44]
004a09f6: test      al, al
004a09f8: jne       0x4a0aad
004a09fe: mov       eax, dword ptr [esi + 0x38]
004a0a01: test      eax, eax
004a0a03: je        0x4a0aad
004a0a09: mov       al, byte ptr [esi + 0x3d]
004a0a0c: test      al, al
004a0a0e: je        0x4a0a57
004a0a10: fild      dword ptr [esi + 0x28]
004a0a13: fild      dword ptr [esp + 8]
004a0a17: fmul      dword ptr [esi + 0x40]
004a0a1a: fsubp     st(1)
004a0a1c: call      0x60ab20
004a0a21: mov       cl, byte ptr [esi + 0x3c]
004a0a24: mov       dword ptr [esi + 0x28], eax
004a0a27: test      cl, cl
004a0a29: mov       ecx, dword ptr [esi + 0x2c]
004a0a2c: je        0x4a0a51
004a0a2e: cmp       eax, ecx
004a0a30: jge       0x4a0aa1
004a0a32: mov       eax, dword ptr [esi + 0x34]
004a0a35: mov       edx, dword ptr [esi + 0x28]
004a0a38: add       edx, eax
004a0a3a: cmp       edx, ecx
004a0a3c: jl        0x4a0a38
004a0a3e: mov       eax, dword ptr [esp + 8]
004a0a42: mov       ecx, esi
004a0a44: push      eax
004a0a45: mov       dword ptr [esi + 0x28], edx
004a0a48: call      0x4a0ac0
004a0a4d: pop       esi
004a0a4e: ret       4
004a0a51: cmp       eax, ecx
004a0a53: jge       0x4a0aa1
004a0a55: jmp       0x4a0a9a
004a0a57: fild      dword ptr [esp + 8]
004a0a5b: fmul      dword ptr [esi + 0x40]
004a0a5e: fiadd     dword ptr [esi + 0x28]
004a0a61: call      0x60ab20
004a0a66: mov       cl, byte ptr [esi + 0x3c]
004a0a69: mov       dword ptr [esi + 0x28], eax
004a0a6c: test      cl, cl
004a0a6e: mov       ecx, dword ptr [esi + 0x30]
004a0a71: je        0x4a0a96
004a0a73: cmp       eax, ecx
004a0a75: jle       0x4a0aa1
004a0a77: mov       eax, dword ptr [esi + 0x34]
004a0a7a: mov       edx, dword ptr [esi + 0x28]
004a0a7d: sub       edx, eax
004a0a7f: cmp       edx, ecx
004a0a81: jg        0x4a0a7d
004a0a83: mov       eax, dword ptr [esp + 8]
004a0a87: mov       ecx, esi
004a0a89: push      eax
004a0a8a: mov       dword ptr [esi + 0x28], edx
004a0a8d: call      0x4a0ac0
004a0a92: pop       esi
004a0a93: ret       4
004a0a96: cmp       eax, ecx
004a0a98: jle       0x4a0aa1
004a0a9a: mov       dword ptr [esi + 0x28], ecx
004a0a9d: mov       byte ptr [esi + 0x4c], 1
004a0aa1: mov       eax, dword ptr [esp + 8]
004a0aa5: mov       ecx, esi
004a0aa7: push      eax
004a0aa8: call      0x4a0ac0
004a0aad: pop       esi
004a0aae: ret       4
004a0ab1: nop       
004a0ab2: nop       
004a0ab3: nop       
004a0ab4: nop       
004a0ab5: nop       
004a0ab6: nop       
004a0ab7: nop       
004a0ab8: nop       
004a0ab9: nop       
004a0aba: nop       
004a0abb: nop       
004a0abc: nop       
004a0abd: nop       
004a0abe: nop       
004a0abf: nop       
004a0ac0: push      ecx
004a0ac1: push      esi
004a0ac2: mov       esi, ecx
004a0ac4: push      edi
004a0ac5: fld       dword ptr [esi + 0x48]
004a0ac8: fst       dword ptr [esp + 8]
004a0acc: fcomp     dword ptr [0x64a354]
004a0ad2: fnstsw    ax
004a0ad4: test      ah, 0x40
004a0ad7: je        0x4a0afd
004a0ad9: mov       eax, dword ptr [esi + 0x28]
004a0adc: push      0
004a0ade: push      eax
004a0adf: call      0x409e30
004a0ae4: mov       ecx, dword ptr [esi + 0x14]
004a0ae7: mov       edi, dword ptr [esi + 0x38]
004a0aea: fstp      dword ptr [esp]
004a0aed: call      0x4247e0
004a0af2: mov       ecx, eax
004a0af4: mov       edx, edi
004a0af6: call      0x5b3f00
004a0afb: jmp       0x4a0b24
004a0afd: mov       ecx, dword ptr [esp + 8]
004a0b01: mov       edx, dword ptr [esi + 0x28]
004a0b04: push      ecx
004a0b05: push      0
004a0b07: push      edx
004a0b08: call      0x409e30
004a0b0d: mov       ecx, dword ptr [esi + 0x14]
004a0b10: mov       edi, dword ptr [esi + 0x38]
004a0b13: fstp      dword ptr [esp]
004a0b16: call      0x4247e0
004a0b1b: mov       ecx, eax
004a0b1d: mov       edx, edi
004a0b1f: call      0x5b3f20
004a0b24: mov       eax, dword ptr [esi + 0x50]
004a0b27: test      eax, eax
004a0b29: je        0x4a0b94
004a0b2b: fld       dword ptr [esi + 0x58]
004a0b2e: fcomp     dword ptr [0x64a450]
004a0b34: fnstsw    ax
004a0b36: test      ah, 0x41
004a0b39: jne       0x4a0b94
004a0b3b: fld       dword ptr [esi + 0x58]
004a0b3e: fmul      dword ptr [esi + 0x48]
004a0b41: mov       eax, dword ptr [esi + 0x54]
004a0b44: push      ecx
004a0b45: fstp      dword ptr [esp]
004a0b48: push      0
004a0b4a: push      eax
004a0b4b: call      0x409e30
004a0b50: mov       ecx, dword ptr [esi + 0x14]
004a0b53: mov       edi, dword ptr [esi + 0x50]
004a0b56: fstp      dword ptr [esp]
004a0b59: call      0x4247e0
004a0b5e: mov       ecx, eax
004a0b60: mov       edx, edi
004a0b62: call      0x5b3f20
004a0b67: mov       ecx, dword ptr [esp + 0x10]
004a0b6b: push      ecx
004a0b6c: call      0x409e30
004a0b71: fdiv      dword ptr [0x64e858]
004a0b77: add       esp, 4
004a0b7a: fsubr     dword ptr [esi + 0x58]
004a0b7d: fst       dword ptr [esi + 0x58]
004a0b80: fcomp     dword ptr [0x64a450]
004a0b86: fnstsw    ax
004a0b88: test      ah, 1
004a0b8b: je        0x4a0b94
004a0b8d: mov       dword ptr [esi + 0x58], 0
004a0b94: pop       edi
004a0b95: pop       esi
004a0b96: pop       ecx
004a0b97: ret       4
004a0b9a: nop       
004a0b9b: nop       
004a0b9c: nop       
004a0b9d: nop       
004a0b9e: nop       
004a0b9f: nop       
004a0ba0: mov       al, byte ptr [esp + 4]
004a0ba4: mov       byte ptr [ecx + 0x3d], al
004a0ba7: ret       4
004a0baa: nop       
004a0bab: nop       
004a0bac: nop       
004a0bad: nop       
004a0bae: nop       
004a0baf: nop       
004a0bb0: mov       al, byte ptr [esp + 4]
004a0bb4: mov       byte ptr [ecx + 0x3c], al
004a0bb7: ret       4
004a0bba: nop       
004a0bbb: nop       
004a0bbc: nop       
004a0bbd: nop       
004a0bbe: nop       
004a0bbf: nop       
004a0bc0: mov       al, byte ptr [ecx + 0x3c]
004a0bc3: ret       
004a0bc4: nop       
004a0bc5: nop       
004a0bc6: nop       
004a0bc7: nop       
004a0bc8: nop       
004a0bc9: nop       
004a0bca: nop       
004a0bcb: nop       
004a0bcc: nop       
004a0bcd: nop       
004a0bce: nop       
004a0bcf: nop       
004a0bd0: push      -1
004a0bd2: push      0x62cee8
004a0bd7: mov       eax, dword ptr fs:[0]
004a0bdd: push      eax
004a0bde: mov       dword ptr fs:[0], esp
004a0be5: sub       esp, 0x14
004a0be8: fld       dword ptr [esp + 0x24]
004a0bec: fcomp     dword ptr [0x64a450]
004a0bf2: push      ebx
004a0bf3: push      esi
004a0bf4: mov       esi, ecx
004a0bf6: mov       dword ptr [esp + 8], esi
004a0bfa: fnstsw    ax
004a0bfc: test      ah, 1
004a0bff: je        0x4a0c9d
004a0c05: fld       dword ptr [esp + 0x2c]
004a0c09: fabs      
004a0c0b: fstp      dword ptr [esp + 0x2c]
004a0c0f: mov       al, byte ptr [esp + 0x2c]
004a0c13: push      ebp
004a0c14: push      edi
004a0c15: mov       byte ptr [esp + 0x14], al
004a0c19: mov       edi, 0x69536c
004a0c1e: or        ecx, 0xffffffff
004a0c21: xor       eax, eax
004a0c23: xor       ebx, ebx
004a0c25: repne scasb al, byte ptr es:[edi]
004a0c27: not       ecx
004a0c29: dec       ecx
004a0c2a: push      1
004a0c2c: mov       ebp, ecx
004a0c2e: lea       ecx, [esp + 0x18]
004a0c32: push      ebp
004a0c33: mov       dword ptr [esp + 0x20], ebx
004a0c37: mov       dword ptr [esp + 0x24], ebx
004a0c3b: mov       dword ptr [esp + 0x28], ebx
004a0c3f: call      0x401940
004a0c44: test      al, al
004a0c46: je        0x4a0c70
004a0c48: mov       edi, dword ptr [esp + 0x18]
004a0c4c: mov       ecx, ebp
004a0c4e: mov       edx, ecx
004a0c50: mov       esi, 0x69536c
004a0c55: shr       ecx, 2
004a0c58: rep movsd dword ptr es:[edi], dword ptr [esi]
004a0c5a: mov       ecx, edx
004a0c5c: and       ecx, 3
004a0c5f: rep movsb byte ptr es:[edi], byte ptr [esi]
004a0c61: mov       eax, dword ptr [esp + 0x18]
004a0c65: mov       esi, dword ptr [esp + 0x10]
004a0c69: mov       dword ptr [esp + 0x1c], ebp
004a0c6d: mov       byte ptr [eax + ebp], bl
004a0c70: lea       ecx, [esp + 0x14]
004a0c74: mov       dword ptr [esp + 0x2c], ebx
004a0c78: push      ecx
004a0c79: mov       ecx, dword ptr [esi + 0x14]
004a0c7c: call      0x5035a0
004a0c81: mov       eax, dword ptr [esp + 0x18]
004a0c85: pop       edi
004a0c86: cmp       eax, ebx
004a0c88: pop       ebp
004a0c89: je        0x4a0cda
004a0c8b: lea       ecx, [eax - 1]
004a0c8e: mov       al, byte ptr [eax - 1]
004a0c91: cmp       al, bl
004a0c93: je        0x4a0cb7
004a0c95: cmp       al, 0xff
004a0c97: je        0x4a0cb7
004a0c99: dec       al
004a0c9b: mov       byte ptr [ecx], al
004a0c9d: mov       edx, dword ptr [esp + 0x2c]
004a0ca1: mov       dword ptr [esi + 0x40], edx
004a0ca4: pop       esi
004a0ca5: pop       ebx
004a0ca6: mov       ecx, dword ptr [esp + 0x14]
004a0caa: mov       dword ptr fs:[0], ecx
004a0cb1: add       esp, 0x20
004a0cb4: ret       4
004a0cb7: push      ecx
004a0cb8: call      0x5fe5f0
004a0cbd: mov       eax, dword ptr [esp + 0x30]
004a0cc1: add       esp, 4
004a0cc4: mov       dword ptr [esi + 0x40], eax
004a0cc7: pop       esi
004a0cc8: pop       ebx
004a0cc9: mov       ecx, dword ptr [esp + 0x14]
004a0ccd: mov       dword ptr fs:[0], ecx
004a0cd4: add       esp, 0x20
004a0cd7: ret       4
004a0cda: mov       ecx, dword ptr [esp + 0x2c]
004a0cde: mov       dword ptr [esi + 0x40], ecx
004a0ce1: mov       ecx, dword ptr [esp + 0x1c]
004a0ce5: pop       esi
004a0ce6: pop       ebx
004a0ce7: mov       dword ptr fs:[0], ecx
004a0cee: add       esp, 0x20
004a0cf1: ret       4
004a0cf4: nop       
004a0cf5: nop       
004a0cf6: nop       
004a0cf7: nop       
004a0cf8: nop       
004a0cf9: nop       
004a0cfa: nop       
004a0cfb: nop       
004a0cfc: nop       
004a0cfd: nop       
004a0cfe: nop       
004a0cff: nop       
004a0d00: push      -1
004a0d02: push      0x62cf08
004a0d07: mov       eax, dword ptr fs:[0]
004a0d0d: push      eax
004a0d0e: mov       dword ptr fs:[0], esp
004a0d15: sub       esp, 0x18
004a0d18: push      ebx
004a0d19: push      esi
004a0d1a: mov       esi, ecx
004a0d1c: mov       dword ptr [esp + 0xc], esi
004a0d20: call      0x4a0640
004a0d25: xor       ebx, ebx
004a0d27: test      al, al
004a0d29: jne       0x4a0dd7
004a0d2f: mov       al, byte ptr [esp + 0xb]
004a0d33: push      ebp
004a0d34: push      edi
004a0d35: mov       byte ptr [esp + 0x18], al
004a0d39: mov       edi, 0x6b3f70
