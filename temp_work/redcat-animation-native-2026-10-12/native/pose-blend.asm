005cff30: sub       esp, 0x50
005cff33: mov       eax, dword ptr [esp + 0x60]
005cff37: push      ebx
005cff38: push      ebp
005cff39: push      esi
005cff3a: push      edi
005cff3b: mov       ebx, ecx
005cff3d: mov       ebp, 1
005cff42: mov       edi, edx
005cff44: cmp       eax, ebp
005cff46: mov       dword ptr [esp + 0x10], edi
005cff4a: mov       dword ptr [ebx + 0x11c], 0xfffffffe
005cff54: jne       0x5cff76
005cff56: fld       dword ptr [esp + 0x6c]
005cff5a: fmul      dword ptr [esp + 0x6c]
005cff5e: fld       st(0)
005cff60: fmul      dword ptr [esp + 0x6c]
005cff64: fxch      st(1)
005cff66: fmul      dword ptr [0x64a430]
005cff6c: fsub      st(1)
005cff6e: fsub      st(1)
005cff70: fstp      dword ptr [esp + 0x6c]
005cff74: fstp      st(0)
005cff76: mov       eax, dword ptr [ebx + 0x24]
005cff79: test      eax, eax
005cff7b: jne       0x5d005b
005cff81: mov       eax, dword ptr [esp + 0x64]
005cff85: lea       edx, [esp + 0x30]
005cff89: push      eax
005cff8a: mov       ecx, edi
005cff8c: call      0x5bdc30
005cff91: test      eax, eax
005cff93: je        0x5cffad
005cff95: mov       ecx, dword ptr [esp + 0x68]
005cff99: test      ecx, ecx
005cff9b: je        0x5cffcd
005cff9d: lea       edx, [esp + 0x30]
005cffa1: push      edx
005cffa2: lea       edx, [esp + 0x34]
005cffa6: call      0x5b32c0
005cffab: jmp       0x5cffcd
005cffad: mov       esi, dword ptr [esp + 0x68]
005cffb1: test      esi, esi
005cffb3: je        0x5d005b
005cffb9: mov       ecx, 0xc
005cffbe: lea       edi, [esp + 0x30]
005cffc2: rep movsd dword ptr es:[edi], dword ptr [esi]
005cffc4: mov       edi, dword ptr [esp + 0x10]
005cffc8: mov       ebp, 1
005cffcd: lea       edx, [esp + 0x20]
005cffd1: lea       ecx, [esp + 0x30]
005cffd5: call      0x5b55e0
005cffda: mov       ecx, dword ptr [esp + 0x58]
005cffde: mov       eax, dword ptr [esp + 0x54]
005cffe2: mov       edx, dword ptr [esp + 0x5c]
005cffe6: mov       dword ptr [esp + 0x18], ecx
005cffea: mov       dword ptr [esp + 0x14], eax
005cffee: mov       eax, dword ptr [esp + 0x6c]
005cfff2: lea       ecx, [ebx + 0x98]
005cfff8: mov       dword ptr [esp + 0x1c], edx
005cfffc: push      ecx
005cfffd: push      eax
005cfffe: lea       edx, [esp + 0x28]
005d0002: call      0x5b59f0
005d0007: fld       dword ptr [esp + 0x14]
005d000b: fsub      dword ptr [ebx + 0x8c]
005d0011: fmul      dword ptr [esp + 0x6c]
005d0015: fadd      dword ptr [ebx + 0x8c]
005d001b: fstp      dword ptr [ebx + 0x8c]
005d0021: fld       dword ptr [ebx + 0x90]
005d0027: fsubr     dword ptr [esp + 0x18]
005d002b: fmul      dword ptr [esp + 0x6c]
005d002f: fadd      dword ptr [ebx + 0x90]
005d0035: fstp      dword ptr [ebx + 0x90]
005d003b: fld       dword ptr [ebx + 0x94]
005d0041: fsubr     dword ptr [esp + 0x1c]
005d0045: fmul      dword ptr [esp + 0x6c]
005d0049: fadd      dword ptr [ebx + 0x94]
005d004f: fstp      dword ptr [ebx + 0x94]
005d0055: mov       dword ptr [ebx + 0xa8], ebp
005d005b: test      edi, edi
005d005d: je        0x5d013f
005d0063: mov       edx, edi
005d0065: mov       ecx, ebx
005d0067: call      0x5cfdc0
005d006c: mov       ecx, dword ptr [ebx]
005d006e: mov       edi, eax
005d0070: dec       edi
005d0071: mov       eax, dword ptr [ebx + 0x118]
005d0077: neg       edi
005d0079: sbb       edi, edi
005d007b: mov       dword ptr [ebx + 8], ebp
005d007e: neg       edi
005d0080: xor       ebp, ebp
005d0082: test      ecx, ecx
005d0084: jle       0x5d013f
005d008a: lea       esi, [eax + 0x6c]
005d008d: mov       eax, dword ptr [esp + 0x64]
005d0091: lea       ecx, [esp + 0x14]
005d0095: lea       edx, [esp + 0x20]
005d0099: push      ecx
005d009a: test      edi, edi
005d009c: push      edx
005d009d: push      eax
005d009e: mov       edx, ebp
005d00a0: jne       0x5d00ad
005d00a2: mov       ecx, dword ptr [esp + 0x1c]
005d00a6: call      0x5bd780
005d00ab: jmp       0x5d00c4
005d00ad: mov       ecx, dword ptr [ebx + 0xc]
005d00b0: call      0x5d1b10
005d00b5: mov       ecx, dword ptr [esp + 0x1c]
005d00b9: mov       edx, eax
005d00bb: call      0x5bd8d0
005d00c0: test      eax, eax
005d00c2: je        0x5d012e
005d00c4: mov       dword ptr [esi + 0x14], 1
005d00cb: mov       edx, dword ptr [esp + 0x6c]
005d00cf: fld       dword ptr [esp + 0x14]
005d00d3: fmul      dword ptr [ebx + 0x10]
005d00d6: lea       ecx, [esi + 4]
005d00d9: push      ecx
005d00da: push      edx
005d00db: lea       edx, [esp + 0x28]
005d00df: fstp      dword ptr [esp + 0x1c]
005d00e3: fld       dword ptr [esp + 0x20]
005d00e7: fmul      dword ptr [ebx + 0x14]
005d00ea: fstp      dword ptr [esp + 0x20]
005d00ee: fld       dword ptr [esp + 0x24]
005d00f2: fmul      dword ptr [ebx + 0x18]
005d00f5: fstp      dword ptr [esp + 0x24]
005d00f9: call      0x5b59f0
005d00fe: fld       dword ptr [esp + 0x14]
005d0102: fsub      dword ptr [esi - 8]
005d0105: fmul      dword ptr [esp + 0x6c]
005d0109: fadd      dword ptr [esi - 8]
005d010c: fstp      dword ptr [esi - 8]
005d010f: fld       dword ptr [esi - 4]
005d0112: fsubr     dword ptr [esp + 0x18]
005d0116: fmul      dword ptr [esp + 0x6c]
005d011a: fadd      dword ptr [esi - 4]
005d011d: fstp      dword ptr [esi - 4]
005d0120: fld       dword ptr [esi]
005d0122: fsubr     dword ptr [esp + 0x1c]
005d0126: fmul      dword ptr [esp + 0x6c]
005d012a: fadd      dword ptr [esi]
005d012c: fstp      dword ptr [esi]
005d012e: mov       eax, dword ptr [ebx]
005d0130: inc       ebp
005d0131: add       esi, 0x8c
005d0137: cmp       ebp, eax
005d0139: jl        0x5d008d
005d013f: pop       edi
005d0140: pop       esi
005d0141: pop       ebp
005d0142: pop       ebx
005d0143: add       esp, 0x50
005d0146: ret       0x10
005d0149: nop       
005d014a: nop       
005d014b: nop       
005d014c: nop       
005d014d: nop       
005d014e: nop       
005d014f: nop       
005d0150: push      esi
005d0151: mov       esi, ecx
005d0153: call      0x5cf9d0
005d0158: mov       eax, dword ptr [esi + 0x114]
005d015e: pop       esi
005d015f: ret       
005d0160: add       ecx, 0x10
005d0163: mov       eax, dword ptr [ecx]
005d0165: mov       dword ptr [edx], eax
005d0167: mov       eax, dword ptr [ecx + 4]
005d016a: mov       dword ptr [edx + 4], eax
005d016d: mov       ecx, dword ptr [ecx + 8]
005d0170: mov       dword ptr [edx + 8], ecx
005d0173: ret       
005d0174: nop       
005d0175: nop       
005d0176: nop       
005d0177: nop       
005d0178: nop       
005d0179: nop       
005d017a: nop       
005d017b: nop       
005d017c: nop       
005d017d: nop       
005d017e: nop       
005d017f: nop       
005d0180: push      esi
005d0181: mov       esi, edx
005d0183: push      edi
005d0184: lea       eax, [ecx + 0x10]
005d0187: mov       edi, dword ptr [esi]
005d0189: mov       dword ptr [eax], edi
005d018b: mov       edi, dword ptr [esi + 4]
005d018e: mov       dword ptr [eax + 4], edi
005d0191: mov       edi, dword ptr [ecx]
005d0193: mov       esi, dword ptr [esi + 8]
005d0196: mov       dword ptr [eax + 8], esi
005d0199: mov       eax, dword ptr [ecx + 0x118]
005d019f: xor       esi, esi
005d01a1: test      edi, edi
005d01a3: jle       0x5d01e9
005d01a5: add       eax, 0x58
005d01a8: mov       edi, 1
005d01ad: fld       dword ptr [eax - 0x40]
005d01b0: fmul      dword ptr [edx]
005d01b2: inc       esi
005d01b3: add       eax, 0x8c
005d01b8: fstp      dword ptr [eax - 0x8c]
005d01be: fld       dword ptr [eax - 0xc8]
005d01c4: fmul      dword ptr [edx + 4]
005d01c7: fstp      dword ptr [eax - 0x88]
005d01cd: fld       dword ptr [eax - 0xc4]
005d01d3: fmul      dword ptr [edx + 8]
005d01d6: mov       dword ptr [eax - 0x64], edi
005d01d9: fstp      dword ptr [eax - 0x84]
005d01df: cmp       esi, dword ptr [ecx]
005d01e1: jl        0x5d01ad
005d01e3: mov       dword ptr [ecx + 8], edi
005d01e6: pop       edi
005d01e7: pop       esi
005d01e8: ret       
005d01e9: pop       edi
005d01ea: mov       dword ptr [ecx + 8], 1
005d01f1: pop       esi
005d01f2: ret       
005d01f3: nop       
005d01f4: nop       
005d01f5: nop       
005d01f6: nop       
005d01f7: nop       
005d01f8: nop       
005d01f9: nop       
005d01fa: nop       
005d01fb: nop       
005d01fc: nop       
005d01fd: nop       
005d01fe: nop       
005d01ff: nop       
005d0200: fld       dword ptr [esp + 4]
005d0204: fcom      dword ptr [esp + 0x10]
005d0208: fnstsw    ax
005d020a: test      ah, 0x41
005d020d: jne       0x5d021a
005d020f: mov       eax, dword ptr [esp + 0x10]
005d0213: fstp      dword ptr [ecx + 0xc]
005d0216: mov       dword ptr [ecx], eax
005d0218: jmp       0x5d0223
005d021a: mov       edx, dword ptr [esp + 0x10]
005d021e: fstp      dword ptr [ecx]
005d0220: mov       dword ptr [ecx + 0xc], edx
005d0223: fld       dword ptr [esp + 8]
005d0227: fcom      dword ptr [esp + 0x14]
005d022b: fnstsw    ax
005d022d: test      ah, 0x41
005d0230: jne       0x5d023e
005d0232: mov       eax, dword ptr [esp + 0x14]
005d0236: fstp      dword ptr [ecx + 0x10]
005d0239: mov       dword ptr [ecx + 4], eax
005d023c: jmp       0x5d0248
005d023e: mov       edx, dword ptr [esp + 0x14]
005d0242: fstp      dword ptr [ecx + 4]
005d0245: mov       dword ptr [ecx + 0x10], edx
005d0248: fld       dword ptr [esp + 0xc]
005d024c: fcom      dword ptr [esp + 0x18]
