00428890: call      0x4284e0
00428895: fld       dword ptr [eax + 0xc]
00428898: ret       
00428899: nop       
0042889a: nop       
0042889b: nop       
0042889c: nop       
0042889d: nop       
0042889e: nop       
0042889f: nop       
004288a0: call      0x4284e0
004288a5: fld       dword ptr [eax + 4]
004288a8: ret       
004288a9: nop       
004288aa: nop       
004288ab: nop       
004288ac: nop       
004288ad: nop       
004288ae: nop       
004288af: nop       
004288b0: call      0x4284e0
004288b5: fld       dword ptr [eax + 8]
004288b8: ret       
004288b9: nop       
004288ba: nop       
004288bb: nop       
004288bc: nop       
004288bd: nop       
004288be: nop       
004288bf: nop       
004288c0: call      0x4282e0
004288c5: mov       ecx, eax
004288c7: jmp       0x596090
004288cc: nop       
004288cd: nop       
004288ce: nop       
004288cf: nop       
004288d0: sub       esp, 8
004288d3: push      edi
004288d4: mov       edi, ecx
004288d6: mov       dword ptr [esp + 8], edi
004288da: mov       al, byte ptr [edi + 0x181]
004288e0: test      al, al
004288e2: jne       0x428a80
004288e8: mov       eax, dword ptr [edi]
004288ea: call      dword ptr [eax + 0xa8]
004288f0: test      al, al
004288f2: je        0x428a80
004288f8: push      ebx
004288f9: push      ebp
004288fa: push      esi
004288fb: mov       ecx, edi
004288fd: mov       byte ptr [edi + 0x181], 1
00428904: call      0x4282e0
00428909: mov       ecx, eax
0042890b: call      0x422350
00428910: mov       edx, dword ptr [edi]
00428912: mov       ecx, edi
00428914: call      dword ptr [edx + 0x9c]
0042891a: add       eax, 0x19c
0042891f: mov       ecx, dword ptr [0x64aba8]
00428925: mov       dword ptr [esp + 0x10], eax
00428929: lea       ebp, [edi + 0x184]
0042892f: lea       esi, [eax + 0x18]
00428932: mov       eax, dword ptr [eax + 0x20]
00428935: mov       ebx, eax
00428937: cmp       ecx, ebx
00428939: jae       0x42893d
0042893b: mov       ebx, ecx
0042893d: cmp       ebp, esi
0042893f: jne       0x4289a1
00428941: mov       eax, dword ptr [ebp + 8]
00428944: mov       esi, ecx
00428946: cmp       eax, ebx
00428948: jae       0x42894f
0042894a: call      0x5fe747
0042894f: mov       ecx, ebp
00428951: call      0x40ce10
00428956: mov       eax, dword ptr [ebp + 8]
00428959: sub       eax, ebx
0042895b: cmp       eax, esi
0042895d: jae       0x428961
0042895f: mov       esi, eax
00428961: test      esi, esi
00428963: jbe       0x428995
00428965: mov       ecx, dword ptr [ebp + 4]
00428968: sub       eax, esi
0042896a: add       ebx, ecx
0042896c: push      eax
0042896d: lea       edx, [ebx + esi]
00428970: push      edx
00428971: push      ebx
00428972: call      0x60ab50
00428977: mov       ebx, dword ptr [ebp + 8]
0042897a: add       esp, 0xc
0042897d: sub       ebx, esi
0042897f: mov       ecx, ebp
00428981: push      0
00428983: push      ebx
00428984: call      0x401940
00428989: test      al, al
0042898b: je        0x428995
0042898d: push      ebx
0042898e: mov       ecx, ebp
00428990: call      0x404190
00428995: mov       ecx, ebp
00428997: call      0x40ce10
0042899c: jmp       0x428a4c
004289a1: xor       edx, edx
004289a3: cmp       ebx, edx
004289a5: jbe       0x428a11
004289a7: cmp       ebx, eax
004289a9: jne       0x428a11
004289ab: mov       eax, dword ptr [esi + 4]
004289ae: cmp       eax, edx
004289b0: jne       0x4289b7
004289b2: mov       eax, 0x64a3b4
004289b7: cmp       byte ptr [eax - 1], 0xfe
004289bb: jae       0x428a11
004289bd: mov       eax, dword ptr [ebp + 4]
004289c0: cmp       eax, edx
004289c2: je        0x4289e3
004289c4: lea       ecx, [eax - 1]
004289c7: mov       al, byte ptr [eax - 1]
004289ca: test      al, al
004289cc: je        0x4289d8
004289ce: cmp       al, 0xff
004289d0: je        0x4289d8
004289d2: dec       al
004289d4: mov       byte ptr [ecx], al
004289d6: jmp       0x4289e3
004289d8: push      ecx
004289d9: call      0x5fe5f0
004289de: add       esp, 4
004289e1: xor       edx, edx
004289e3: mov       dword ptr [ebp + 4], edx
004289e6: mov       dword ptr [ebp + 8], edx
004289e9: mov       dword ptr [ebp + 0xc], edx
004289ec: mov       eax, dword ptr [esi + 4]
004289ef: cmp       eax, edx
004289f1: jne       0x4289f8
004289f3: mov       eax, 0x64a3b4
004289f8: mov       dword ptr [ebp + 4], eax
004289fb: mov       ecx, dword ptr [esi + 8]
004289fe: mov       dword ptr [ebp + 8], ecx
00428a01: mov       edx, dword ptr [esi + 0xc]
00428a04: mov       dword ptr [ebp + 0xc], edx
00428a07: mov       cl, byte ptr [eax - 1]
00428a0a: inc       cl
00428a0c: mov       byte ptr [eax - 1], cl
00428a0f: jmp       0x428a4c
00428a11: push      1
00428a13: push      ebx
00428a14: mov       ecx, ebp
00428a16: call      0x401940
00428a1b: test      al, al
00428a1d: je        0x428a4c
00428a1f: mov       esi, dword ptr [esi + 4]
00428a22: test      esi, esi
00428a24: jne       0x428a2b
00428a26: mov       esi, 0x64a3b4
00428a2b: mov       edi, dword ptr [ebp + 4]
00428a2e: mov       ecx, ebx
00428a30: mov       eax, ecx
00428a32: shr       ecx, 2
00428a35: rep movsd dword ptr es:[edi], dword ptr [esi]
00428a37: mov       ecx, eax
00428a39: and       ecx, 3
00428a3c: rep movsb byte ptr es:[edi], byte ptr [esi]
00428a3e: mov       ecx, dword ptr [ebp + 4]
00428a41: mov       edi, dword ptr [esp + 0x14]
00428a45: mov       dword ptr [ebp + 8], ebx
00428a48: mov       byte ptr [ebx + ecx], 0
00428a4c: mov       ecx, dword ptr [esp + 0x10]
00428a50: call      0x4a0bc0
00428a55: mov       ecx, dword ptr [esp + 0x10]
00428a59: mov       byte ptr [edi + 0x194], al
00428a5f: call      0x439bc0
00428a64: mov       edx, dword ptr [edi]
00428a66: push      0x3f800000
00428a6b: fstp      dword ptr [edi + 0x198]
00428a71: push      0
00428a73: push      1
00428a75: mov       ecx, edi
00428a77: call      dword ptr [edx + 0x8c]
00428a7d: pop       esi
00428a7e: pop       ebp
00428a7f: pop       ebx
00428a80: pop       edi
00428a81: add       esp, 8
00428a84: ret       
00428a85: nop       
00428a86: nop       
00428a87: nop       
00428a88: nop       
00428a89: nop       
00428a8a: nop       
00428a8b: nop       
00428a8c: nop       
00428a8d: nop       
00428a8e: nop       
00428a8f: nop       
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
