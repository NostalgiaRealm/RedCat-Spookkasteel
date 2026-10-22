004a9700: inc      esp
004a9701: and      al, 0x2c
004a9703: push     eax
004a9704: mov      ecx, ebp
004a9706: call     dword ptr [edx + 0x4c]
004a9709: lea      ecx, [esp + 0x16c]
004a9710: mov      byte ptr [esp + 0x194], bl
004a9717: call     0x554630
004a971c: mov      eax, dword ptr [esp + 0x19c]
004a9723: mov      dword ptr [esp + 0x194], 0xffffffff
004a972e: cmp      eax, ebx
004a9730: je       0x4a9749
004a9732: mov      esi, dword ptr [eax + 0x14]
004a9735: mov      ecx, eax
004a9737: add      eax, 0x14
004a973a: dec      esi
004a973b: mov      edx, esi
004a973d: cmp      edx, ebx
004a973f: mov      dword ptr [eax], esi
004a9741: jne      0x4a9749
004a9743: push     ebx
004a9744: call     0x5abfc0
004a9749: mov      ecx, dword ptr [esp + 0x18c]
004a9750: pop      edi
004a9751: pop      esi
004a9752: pop      ebp
004a9753: mov      dword ptr fs:[0], ecx
004a975a: pop      ebx
004a975b: add      esp, 0x188
004a9761: ret      4
004a9764: nop      
004a9765: nop      
004a9766: nop      
004a9767: nop      
004a9768: nop      
004a9769: nop      
004a976a: nop      
004a976b: nop      
004a976c: nop      
004a976d: nop      
004a976e: nop      
004a976f: nop      
004a9770: mov      eax, dword ptr [esp + 4]
004a9774: push     eax
004a9775: call     0x49e280
004a977a: ret      4
004a977d: nop      
004a977e: nop      
004a977f: nop      
004a9780: mov      cl, byte ptr [0x7103a0]
004a9786: mov      al, 1
004a9788: test     al, cl
004a978a: jne      0x4a9794
004a978c: or       cl, al
004a978e: mov      byte ptr [0x7103a0], cl
004a9794: jmp      0x4a97a0
004a9799: nop      
004a979a: nop      
004a979b: nop      
004a979c: nop      
004a979d: nop      
004a979e: nop      
004a979f: nop      
004a97a0: push     0x401ba0
004a97a5: call     0x60a57b
004a97aa: pop      ecx
004a97ab: ret      
004a97ac: nop      
004a97ad: nop      
004a97ae: nop      
004a97af: nop      
004a97b0: call     0x4a97c0
004a97b5: jmp      0x4a98a0
004a97ba: nop      
004a97bb: nop      
004a97bc: nop      
004a97bd: nop      
004a97be: nop      
004a97bf: nop      
004a97c0: push     -1
004a97c2: push     0x62ddd8
004a97c7: mov      eax, dword ptr fs:[0]
004a97cd: push     eax
004a97ce: mov      dword ptr fs:[0], esp
004a97d5: sub      esp, 0x14
004a97d8: mov      al, byte ptr [esp + 3]
004a97dc: push     ebx
004a97dd: push     ebp
004a97de: push     edi
004a97df: mov      byte ptr [esp + 0x10], al
004a97e3: mov      edi, 0x68f590
004a97e8: or       ecx, 0xffffffff
004a97eb: xor      eax, eax
004a97ed: xor      ebx, ebx
004a97ef: push     1
004a97f1: repne scasb al, byte ptr es:[edi]
004a97f3: not      ecx
004a97f5: dec      ecx
004a97f6: mov      dword ptr [esp + 0x18], ebx
004a97fa: mov      ebp, ecx
004a97fc: lea      ecx, [esp + 0x14]
004a9800: push     ebp
004a9801: mov      dword ptr [esp + 0x20], ebx
004a9805: mov      dword ptr [esp + 0x24], ebx
004a9809: call     0x401940
004a980e: test     al, al
004a9810: je       0x4a9838
004a9812: mov      edi, dword ptr [esp + 0x14]
004a9816: mov      ecx, ebp
004a9818: mov      edx, ecx
004a981a: push     esi
004a981b: mov      esi, 0x68f590
004a9820: shr      ecx, 2
004a9823: rep movsd dword ptr es:[edi], dword ptr [esi]
004a9825: mov      ecx, edx
004a9827: and      ecx, 3
004a982a: rep movsb byte ptr es:[edi], byte ptr [esi]
004a982c: mov      eax, dword ptr [esp + 0x18]
004a9830: mov      dword ptr [esp + 0x1c], ebp
004a9834: pop      esi
004a9835: mov      byte ptr [eax + ebp], bl
004a9838: lea      ecx, [esp + 0x10]
004a983c: mov      dword ptr [esp + 0x28], ebx
004a9840: push     ecx
004a9841: mov      ecx, 0x6b9068
004a9846: call     0x5671a0
004a984b: mov      eax, dword ptr [esp + 0x14]
004a984f: cmp      eax, ebx
004a9851: je       0x4a9880
004a9853: lea      ecx, [eax - 1]
004a9856: mov      al, byte ptr [eax - 1]
004a9859: cmp      al, bl
004a985b: je       0x4a9877
004a985d: cmp      al, 0xff
004a985f: je       0x4a9877
004a9861: dec      al
004a9863: pop      edi
004a9864: pop      ebp
004a9865: mov      byte ptr [ecx], al
004a9867: pop      ebx
004a9868: mov      ecx, dword ptr [esp + 0x14]
004a986c: mov      dword ptr fs:[0], ecx
004a9873: add      esp, 0x20
004a9876: ret      
004a9877: push     ecx
004a9878: call     0x5fe5f0
004a987d: add      esp, 4
004a9880: mov      ecx, dword ptr [esp + 0x20]
004a9884: pop      edi
004a9885: pop      ebp
004a9886: pop      ebx
004a9887: mov      dword ptr fs:[0], ecx
004a988e: add      esp, 0x20
004a9891: ret      
004a9892: nop      
004a9893: nop      
004a9894: nop      
004a9895: nop      
004a9896: nop      
004a9897: nop      
004a9898: nop      
004a9899: nop      
004a989a: nop      
004a989b: nop      
004a989c: nop      
004a989d: nop      
004a989e: nop      
004a989f: nop      
004a98a0: push     0x4a98b0
004a98a5: call     0x60a57b
004a98aa: pop      ecx
004a98ab: ret      
004a98ac: nop      
004a98ad: nop      
004a98ae: nop      
004a98af: nop      
004a98b0: mov      cl, byte ptr [0x6b9060]
004a98b6: mov      al, 1
004a98b8: test     al, cl
004a98ba: jne      0x4a98ce
004a98bc: or       cl, al
004a98be: mov      byte ptr [0x6b9060], cl
004a98c4: mov      ecx, 0x6b9068
004a98c9: jmp      0x567300
004a98ce: ret      
004a98cf: nop      
004a98d0: mov      cl, byte ptr [0x7103a0]
004a98d6: mov      al, 1
004a98d8: test     al, cl
004a98da: jne      0x4a98e4
004a98dc: or       cl, al
004a98de: mov      byte ptr [0x7103a0], cl
004a98e4: jmp      0x4a98f0
004a98e9: nop      
004a98ea: nop      
004a98eb: nop      
004a98ec: nop      
004a98ed: nop      
004a98ee: nop      
004a98ef: nop      
004a98f0: push     0x401ba0
004a98f5: call     0x60a57b
004a98fa: pop      ecx
004a98fb: ret      
004a98fc: nop      
004a98fd: nop      
004a98fe: nop      
004a98ff: nop      
004a9900: push     -1
004a9902: push     0x62de5c
004a9907: mov      eax, dword ptr fs:[0]
004a990d: push     eax
004a990e: mov      dword ptr fs:[0], esp
004a9915: sub      esp, 0xc0
004a991b: push     ebx
004a991c: push     ebp
004a991d: push     esi
004a991e: push     edi
004a991f: lea      eax, [esp + 0x4c]
004a9923: mov      ebp, ecx
004a9925: push     0x695f78
004a992a: push     eax
004a992b: mov      dword ptr [esp + 0x4c], ebp
004a992f: call     0x5ae390
004a9934: add      esp, 8
004a9937: xor      esi, esi
004a9939: push     eax
004a993a: mov      ecx, ebp
004a993c: mov      dword ptr [esp + 0xdc], esi
004a9943: call     0x501cb0
004a9948: push     1
004a994a: lea      ecx, [esp + 0x50]
004a994e: mov      byte ptr [esp + 0xdc], 2
004a9956: call     0x4040a0
004a995b: push     ebp
004a995c: lea      ecx, [ebp + 0xf8]
004a9962: call     0x4ad120
004a9967: mov      ecx, dword ptr [esp + 0xe0]
004a996e: mov      edx, dword ptr [esp + 0xe4]
004a9975: mov      al, byte ptr [esp + 0x13]
004a9979: mov      dword ptr [ebp + 0x12c], ecx
004a997f: or       ebx, 0xffffffff
004a9982: lea      ecx, [ebp + 0x140]
004a9988: mov      dword ptr [ebp + 0x130], edx
004a998e: mov      dword ptr [ebp + 0x134], ebx
004a9994: mov      dword ptr [ebp + 0x138], ebx
004a999a: mov      dword ptr [ebp + 0x13c], esi
004a99a0: mov      dword ptr [esp + 0x48], ecx
004a99a4: mov      byte ptr [ecx], al
004a99a6: mov      dword ptr [ecx + 4], esi
004a99a9: mov      dword ptr [ecx + 8], esi
004a99ac: mov      dword ptr [ecx + 0xc], esi
004a99af: push     esi
004a99b0: mov      byte ptr [esp + 0xdc], 4
004a99b8: call     0x4aa550
004a99bd: mov      cl, byte ptr [esp + 0x13]
004a99c1: push     esi
004a99c2: mov      byte ptr [esp + 0x28], cl
004a99c6: lea      ecx, [esp + 0x28]
004a99ca: mov      byte ptr [esp + 0xdc], 5
004a99d2: call     0x4040a0
004a99d7: mov      edi, 0x6b3f70
004a99dc: mov      ecx, ebx
004a99de: xor      eax, eax
004a99e0: push     1
004a99e2: repne scasb al, byte ptr es:[edi]
004a99e4: not      ecx
004a99e6: dec      ecx
004a99e7: mov      ebx, ecx
004a99e9: lea      ecx, [esp + 0x28]
004a99ed: push     ebx
004a99ee: call     0x401940
004a99f3: test     al, al
004a99f5: je       0x4a9a1c
004a99f7: mov      edi, dword ptr [esp + 0x28]
004a99fb: mov      ecx, ebx
004a99fd: mov      edx, ecx
004a99ff: mov      esi, 0x6b3f70
004a9a04: shr      ecx, 2
004a9a07: rep movsd dword ptr es:[edi], dword ptr [esi]
004a9a09: mov      ecx, edx
004a9a0b: push     ebx
004a9a0c: and      ecx, 3
004a9a0f: rep movsb byte ptr es:[edi], byte ptr [esi]
004a9a11: lea      ecx, [esp + 0x28]
004a9a15: call     0x404190
004a9a1a: xor      esi, esi
004a9a1c: mov      al, byte ptr [esp + 0x13]
004a9a20: push     esi
004a9a21: lea      ecx, [esp + 0x18]
004a9a25: mov      byte ptr [esp + 0xdc], 6
004a9a2d: mov      byte ptr [esp + 0x18], al
004a9a31: call     0x4040a0
004a9a36: mov      edi, 0x695f68
004a9a3b: or       ecx, 0xffffffff
004a9a3e: xor      eax, eax
004a9a40: push     1
004a9a42: repne scasb al, byte ptr es:[edi]
004a9a44: not      ecx
004a9a46: dec      ecx
004a9a47: mov      ebx, ecx
004a9a49: lea      ecx, [esp + 0x18]
004a9a4d: push     ebx
004a9a4e: call     0x401940
004a9a53: test     al, al
004a9a55: je       0x4a9a7c
004a9a57: mov      edi, dword ptr [esp + 0x18]
004a9a5b: mov      ecx, ebx
004a9a5d: mov      edx, ecx
004a9a5f: mov      esi, 0x695f68
004a9a64: shr      ecx, 2
004a9a67: rep movsd dword ptr es:[edi], dword ptr [esi]
004a9a69: mov      ecx, edx
004a9a6b: push     ebx
004a9a6c: and      ecx, 3
004a9a6f: rep movsb byte ptr es:[edi], byte ptr [esi]
004a9a71: lea      ecx, [esp + 0x18]
004a9a75: call     0x404190
004a9a7a: xor      esi, esi
004a9a7c: lea      eax, [esp + 0x34]
004a9a80: mov      byte ptr [esp + 0xd8], 7
004a9a88: push     eax
004a9a89: call     0x4a9bc0
004a9a8e: add      esp, 4
004a9a91: lea      ecx, [esp + 0x24]
004a9a95: lea      edx, [esp + 0x14]
004a9a99: push     ecx
004a9a9a: push     0x3f800000
004a9a9f: push     esi
004a9aa0: push     0x3dcccccd
004a9aa5: mov      bl, 8
004a9aa7: push     eax
004a9aa8: push     edx
004a9aa9: lea      ecx, [esp + 0x74]
004a9aad: mov      byte ptr [esp + 0xf0], bl
004a9ab4: call     0x5a3d10
004a9ab9: mov      edi, eax
004a9abb: fld      dword ptr [edi + 0x60]
004a9abe: fcomp    dword ptr [0x64a450]
004a9ac4: mov      byte ptr [esp + 0xd8], 9
004a9acc: fnstsw   ax
004a9ace: test     ah, 0x40
004a9ad1: je       0x4a9ae9
004a9ad3: lea      eax, [esp + 0x13]
004a9ad7: lea      ecx, [edi + 0x14]
004a9ada: push     eax
004a9adb: push     ecx
