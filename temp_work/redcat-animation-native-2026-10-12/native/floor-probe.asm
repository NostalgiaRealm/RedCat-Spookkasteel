004d6720: sub       esp, 0x44
004d6723: push      esi
004d6724: mov       esi, ecx
004d6726: mov       edx, dword ptr [esi]
004d6728: mov       dword ptr [esi + 0x22c], 0
004d6732: mov       eax, dword ptr [0x64f0f0]
004d6737: mov       dword ptr [esi + 0x230], eax
004d673d: lea       eax, [esp + 0x10]
004d6741: push      eax
004d6742: call      dword ptr [edx + 0x48]
004d6745: mov       ecx, dword ptr [eax]
004d6747: mov       dword ptr [esp + 4], ecx
004d674b: lea       ecx, [esp + 0x1c]
004d674f: mov       edx, dword ptr [eax + 4]
004d6752: push      ecx
004d6753: mov       dword ptr [esp + 0xc], edx
004d6757: lea       edx, [esp + 8]
004d675b: fld       dword ptr [esp + 0xc]
004d675f: mov       eax, dword ptr [eax + 8]
004d6762: push      1
004d6764: fsub      dword ptr [0x64f0f0]
004d676a: lea       ecx, [esp + 0x18]
004d676e: mov       dword ptr [esp + 0x14], eax
004d6772: mov       eax, dword ptr [esi]
004d6774: push      edx
004d6775: push      ecx
004d6776: mov       ecx, esi
004d6778: fstp      dword ptr [esp + 0x18]
004d677c: call      dword ptr [eax + 0x48]
004d677f: push      eax
004d6780: lea       ecx, [esi + 0x1d0]
004d6786: call      0x554ab0
004d678b: test      al, al
004d678d: je        0x4d67bf
004d678f: mov       edx, dword ptr [esi]
004d6791: lea       eax, [esp + 0x10]
004d6795: push      eax
004d6796: mov       ecx, esi
004d6798: call      dword ptr [edx + 0x48]
004d679b: fld       dword ptr [eax + 4]
004d679e: fsub      dword ptr [esp + 0x2c]
004d67a2: mov       eax, dword ptr [esp + 0x1c]
004d67a6: test      eax, eax
004d67a8: fstp      dword ptr [esi + 0x230]
004d67ae: je        0x4d67bf
004d67b0: push      eax
004d67b1: call      0x4d0570
004d67b6: add       esp, 4
004d67b9: mov       dword ptr [esi + 0x22c], eax
004d67bf: pop       esi
004d67c0: add       esp, 0x44
004d67c3: ret       
004d67c4: nop       
004d67c5: nop       
004d67c6: nop       
004d67c7: nop       
004d67c8: nop       
004d67c9: nop       
004d67ca: nop       
004d67cb: nop       
004d67cc: nop       
004d67cd: nop       
004d67ce: nop       
004d67cf: nop       
004d67d0: mov       ecx, dword ptr [ecx + 0x22c]
004d67d6: mov       edx, dword ptr [esp + 4]
004d67da: xor       eax, eax
004d67dc: cmp       ecx, edx
004d67de: sete      al
004d67e1: ret       4
004d67e4: nop       
004d67e5: nop       
004d67e6: nop       
004d67e7: nop       
004d67e8: nop       
004d67e9: nop       
004d67ea: nop       
004d67eb: nop       
004d67ec: nop       
004d67ed: nop       
004d67ee: nop       
004d67ef: nop       
004d67f0: fld       dword ptr [ecx + 0x230]
004d67f6: ret       
004d67f7: nop       
004d67f8: nop       
004d67f9: nop       
004d67fa: nop       
004d67fb: nop       
004d67fc: nop       
004d67fd: nop       
004d67fe: nop       
004d67ff: nop       
004d6800: sub       esp, 0x30
004d6803: push      ebx
004d6804: push      esi
004d6805: mov       esi, ecx
004d6807: lea       ecx, [esp + 0x20]
004d680b: mov       eax, dword ptr [esi]
004d680d: push      ecx
004d680e: mov       ecx, esi
004d6810: call      dword ptr [eax + 0x48]
004d6813: mov       edx, dword ptr [eax]
004d6815: mov       dword ptr [esp + 8], edx
004d6819: mov       ecx, dword ptr [eax + 4]
004d681c: mov       dword ptr [esp + 0xc], ecx
