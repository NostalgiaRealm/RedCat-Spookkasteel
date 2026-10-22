0056f830: push     -1
0056f832: push     0x640f8f
0056f837: mov      eax, dword ptr fs:[0]
0056f83d: push     eax
0056f83e: mov      dword ptr fs:[0], esp
0056f845: sub      esp, 0x18
0056f848: push     ebx
0056f849: push     ebp
0056f84a: push     esi
0056f84b: mov      esi, ecx
0056f84d: mov      ecx, dword ptr [esp + 0x34]
0056f851: xor      ebp, ebp
0056f853: xor      ebx, ebx
0056f855: push     edi
0056f856: mov      eax, dword ptr [ecx + 8]
0056f859: mov      edi, dword ptr [esp + 0x3c]
0056f85d: cmp      eax, ebp
0056f85f: mov      dword ptr [esp + 0x14], esi
0056f863: mov      dword ptr [esp + 0x10], ebx
0056f867: jne      0x56f886
0056f869: lea      eax, [esp + 0x18]
0056f86d: push     edi
0056f86e: push     eax
0056f86f: call     0x5033a0
0056f874: mov      ebx, 1
0056f879: add      esp, 8
0056f87c: mov      dword ptr [esp + 0x10], ebx
0056f880: mov      dword ptr [esp + 0x30], ebp
0056f884: jmp      0x56f888
0056f886: mov      eax, ecx
0056f888: push     edi
0056f889: push     eax
0056f88a: mov      ecx, esi
0056f88c: call     0x49b240
0056f891: test     bl, 1
0056f894: mov      dword ptr [esp + 0x30], 2
0056f89c: je       0x56f8cf
0056f89e: mov      eax, dword ptr [esp + 0x1c]
0056f8a2: cmp      eax, ebp
0056f8a4: je       0x56f8c3
0056f8a6: lea      ecx, [eax - 1]
0056f8a9: mov      al, byte ptr [eax - 1]
0056f8ac: test     al, al
0056f8ae: je       0x56f8ba
0056f8b0: cmp      al, 0xff
0056f8b2: je       0x56f8ba
0056f8b4: dec      al
0056f8b6: mov      byte ptr [ecx], al
0056f8b8: jmp      0x56f8c3
0056f8ba: push     ecx
0056f8bb: call     0x5fe5f0
0056f8c0: add      esp, 4
0056f8c3: mov      dword ptr [esp + 0x1c], ebp
0056f8c7: mov      dword ptr [esp + 0x20], ebp
0056f8cb: mov      dword ptr [esp + 0x24], ebp
0056f8cf: or       eax, 0xffffffff
0056f8d2: mov      ecx, 0x3f800000
0056f8d7: mov      dword ptr [esi + 0x2a0], eax
0056f8dd: mov      dword ptr [esi + 0x2a4], eax
0056f8e3: mov      dword ptr [esi + 0x2a8], ecx
0056f8e9: mov      byte ptr [esi + 0x2ac], 1
0056f8f0: mov      dword ptr [esi + 0x2e0], ebp
0056f8f6: mov      byte ptr [esi + 0x2e4], 0
0056f8fd: mov      byte ptr [esi + 0x2e5], 0
0056f904: mov      byte ptr [esi + 0x2e6], 0
0056f90b: mov      byte ptr [esi + 0x2e7], 0
0056f912: mov      dword ptr [esi + 0x2e8], 0x42c80000
0056f91c: mov      dword ptr [esi + 0x2ec], ebp
0056f922: mov      dword ptr [esi + 0x2f0], eax
0056f928: mov      dword ptr [esi + 0x2f4], eax
0056f92e: mov      dword ptr [esi + 0x2f8], ecx
0056f934: mov      byte ptr [esi + 0x2fc], 1
0056f93b: mov      ecx, 6
0056f940: xor      eax, eax
0056f942: lea      edi, [esi + 0x2bc]
0056f948: mov      byte ptr [esi + 0x300], 0
0056f94f: mov      dword ptr [esi], 0x64f8f8
0056f955: rep stosd dword ptr es:[edi], eax
0056f957: lea      edx, [esi + 0x2d4]
0056f95d: xor      ecx, ecx
0056f95f: push     ebp
0056f960: mov      dword ptr [edx], ecx
0056f962: mov      dword ptr [edx + 4], ecx
0056f965: mov      dword ptr [edx + 8], ecx
0056f968: lea      ecx, [esi + 0x294]
0056f96e: mov      dword ptr [esi + 0x294], eax
0056f974: mov      dword ptr [ecx + 4], eax
0056f977: mov      dword ptr [ecx + 8], eax
0056f97a: mov      ecx, esi
0056f97c: call     0x49df30
0056f981: mov      ecx, dword ptr [esp + 0x28]
0056f985: mov      eax, esi
0056f987: pop      edi
0056f988: pop      esi
0056f989: pop      ebp
0056f98a: pop      ebx
0056f98b: mov      dword ptr fs:[0], ecx
0056f992: add      esp, 0x24
0056f995: ret      8
0056f998: nop      
0056f999: nop      
0056f99a: nop      
0056f99b: nop      
0056f99c: nop      
0056f99d: nop      
0056f99e: nop      
0056f99f: nop      
0056f9a0: xor      al, al
0056f9a2: ret      
0056f9a3: nop      
0056f9a4: nop      
0056f9a5: nop      
0056f9a6: nop      
0056f9a7: nop      
0056f9a8: nop      
0056f9a9: nop      
0056f9aa: nop      
0056f9ab: nop      
0056f9ac: nop      
0056f9ad: nop      
0056f9ae: nop      
0056f9af: nop      
0056f9b0: push     ecx
0056f9b1: push     ebx
0056f9b2: push     esi
0056f9b3: mov      esi, ecx
0056f9b5: xor      ebx, ebx
0056f9b7: push     edi
0056f9b8: mov      edi, dword ptr [esp + 0x14]
0056f9bc: mov      eax, dword ptr [esi + 0x2a0]
0056f9c2: mov      dl, 1
0056f9c4: cmp      eax, -1
0056f9c7: mov      dword ptr [esp + 0xc], eax
0056f9cb: je       0x56fa1a
0056f9cd: mov      ecx, dword ptr [esi + 0x2a4]
0056f9d3: cmp      ecx, -1
0056f9d6: jne      0x56f9ec
0056f9d8: add      eax, edi
0056f9da: mov      dword ptr [esi + 0x2a8], 0x3f800000
0056f9e4: mov      dword ptr [esi + 0x2a4], eax
0056f9ea: jmp      0x56fa1a
0056f9ec: cmp      edi, ecx
0056f9ee: jle      0x56f9fa
0056f9f0: mov      dword ptr [esi + 0x2a8], ebx
0056f9f6: xor      dl, dl
0056f9f8: jmp      0x56fa1a
0056f9fa: cmp      eax, ebx
0056f9fc: jle      0x56fa14
0056f9fe: sub      ecx, edi
0056fa00: mov      dword ptr [esp + 0x14], ecx
0056fa04: fild     dword ptr [esp + 0x14]
0056fa08: fidiv    dword ptr [esp + 0xc]
0056fa0c: fstp     dword ptr [esi + 0x2a8]
0056fa12: jmp      0x56fa1a
0056fa14: mov      dword ptr [esi + 0x2a8], ebx
0056fa1a: cmp      dl, bl
0056fa1c: mov      byte ptr [esi + 0x2ac], dl
0056fa22: jne      0x56fa32
0056fa24: mov      ecx, esi
0056fa26: call     0x502220
0056fa2b: pop      edi
0056fa2c: pop      esi
0056fa2d: pop      ebx
0056fa2e: pop      ecx
0056fa2f: ret      8
0056fa32: mov      eax, dword ptr [esp + 0x18]
0056fa36: mov      ecx, esi
0056fa38: push     eax
0056fa39: push     edi
0056fa3a: call     0x49d890
0056fa3f: cmp      byte ptr [esi + 0x2e5], bl
0056fa45: je       0x56fb16
0056fa4b: mov      ecx, dword ptr [esi + 0x2f0]
0056fa51: mov      dl, 1
0056fa53: cmp      ecx, -1
0056fa56: mov      dword ptr [esp + 0xc], ecx
0056fa5a: je       0x56faa9
0056fa5c: mov      eax, dword ptr [esi + 0x2f4]
0056fa62: cmp      eax, -1
0056fa65: jne      0x56fa7b
0056fa67: add      ecx, edi
0056fa69: mov      dword ptr [esi + 0x2f8], 0x3f800000
0056fa73: mov      dword ptr [esi + 0x2f4], ecx
0056fa79: jmp      0x56faa9
0056fa7b: cmp      edi, eax
0056fa7d: jle      0x56fa89
0056fa7f: mov      dword ptr [esi + 0x2f8], ebx
0056fa85: xor      dl, dl
0056fa87: jmp      0x56faa9
0056fa89: cmp      ecx, ebx
0056fa8b: jle      0x56faa3
0056fa8d: sub      eax, edi
0056fa8f: mov      dword ptr [esp + 0x14], eax
0056fa93: fild     dword ptr [esp + 0x14]
0056fa97: fidiv    dword ptr [esp + 0xc]
0056fa9b: fstp     dword ptr [esi + 0x2f8]
0056faa1: jmp      0x56faa9
0056faa3: mov      dword ptr [esi + 0x2f8], ebx
0056faa9: cmp      dl, bl
0056faab: mov      byte ptr [esi + 0x2fc], dl
0056fab1: jne      0x56fab9
0056fab3: mov      byte ptr [esi + 0x2e5], bl
0056fab9: fld      dword ptr [0x64a354]
0056fabf: fsub     dword ptr [esi + 0x2f8]
0056fac5: fmul     dword ptr [esi + 0x2ec]
0056facb: fld      dword ptr [esi + 0x2e8]
0056fad1: fmul     dword ptr [esi + 0x2f8]
0056fad7: faddp    st(1)
0056fad9: fmul     qword ptr [0x64e328]
0056fadf: fstp     dword ptr [esp + 0x14]
0056fae3: fld      dword ptr [esi + 0x210]
0056fae9: fcomp    dword ptr [esp + 0x14]
0056faed: fnstsw   ax
0056faef: test     ah, 0x40
0056faf2: jne      0x56fb16
0056faf4: mov      eax, dword ptr [esi + 0x18]
0056faf7: mov      ecx, dword ptr [esp + 0x14]
0056fafb: cmp      eax, ebx
0056fafd: mov      dword ptr [esi + 0x210], ecx
0056fb03: je       0x56fb16
0056fb05: mov      edx, ecx
0056fb07: mov      ecx, esi
0056fb09: push     edx
0056fb0a: call     0x4247e0
0056fb0f: mov      ecx, eax
0056fb11: call     0x5b3ae0
0056fb16: cmp      byte ptr [esi + 0x2e6], bl
0056fb1c: je       0x56fb2a
0056fb1e: mov      eax, dword ptr [esp + 0x18]
0056fb22: mov      ecx, esi
0056fb24: push     eax
0056fb25: call     0x56fef0
0056fb2a: pop      edi
0056fb2b: pop      esi
0056fb2c: pop      ebx
0056fb2d: pop      ecx
0056fb2e: ret      8
0056fb31: nop      
0056fb32: nop      
0056fb33: nop      
0056fb34: nop      
0056fb35: nop      
0056fb36: nop      
0056fb37: nop      
0056fb38: nop      
0056fb39: nop      
0056fb3a: nop      
0056fb3b: nop      
0056fb3c: nop      
0056fb3d: nop      
0056fb3e: nop      
0056fb3f: nop      
0056fb40: mov      eax, dword ptr fs:[0]
0056fb46: push     -1
0056fb48: push     0x640fb0
0056fb4d: push     eax
0056fb4e: mov      dword ptr fs:[0], esp
0056fb55: sub      esp, 0x48
0056fb58: push     ebx
0056fb59: push     ebp
0056fb5a: push     esi
0056fb5b: mov      esi, dword ptr [0x6b915c]
0056fb61: xor      ebx, ebx
0056fb63: push     edi
0056fb64: cmp      esi, ebx
0056fb66: mov      ebp, ecx
0056fb68: jne      0x56fb71
0056fb6a: call     0x4bc480
0056fb6f: mov      esi, eax
0056fb71: mov      eax, dword ptr [esi + 0x5c0]
0056fb77: cmp      eax, 0x80000000
0056fb7c: jne      0x56fb9c
0056fb7e: mov      eax, dword ptr [esi + 0x574]
0056fb84: cmp      eax, ebx
0056fb86: jne      0x56fb8d
0056fb88: mov      eax, 0x64a3b4
0056fb8d: push     eax
0056fb8e: call     0x60af10
0056fb93: add      esp, 4
0056fb96: mov      dword ptr [esi + 0x5c0], eax
0056fb9c: cmp      eax, ebx
0056fb9e: je       0x56fcbd
0056fba4: mov      eax, dword ptr [ebp + 0x108]
0056fbaa: or       esi, 0xffffffff
0056fbad: cmp      eax, ebx
0056fbaf: jne      0x56fc3d
0056fbb5: mov      al, byte ptr [esp + 0x13]
0056fbb9: mov      edi, 0x6b3f70
0056fbbe: mov      byte ptr [esp + 0x18], al
0056fbc2: mov      ecx, esi
0056fbc4: xor      eax, eax
0056fbc6: mov      dword ptr [esp + 0x1c], ebx
0056fbca: repne scasb al, byte ptr es:[edi]
0056fbcc: not      ecx
0056fbce: dec      ecx
0056fbcf: mov      dword ptr [esp + 0x20], ebx
0056fbd3: push     ecx
0056fbd4: push     0x6b3f70
0056fbd9: lea      ecx, [esp + 0x20]
0056fbdd: mov      dword ptr [esp + 0x2c], ebx
0056fbe1: call     0x4040f0
0056fbe6: lea      ecx, [esp + 0x18]
0056fbea: mov      dword ptr [esp + 0x60], ebx
0056fbee: push     ecx
0056fbef: push     0x141
0056fbf4: push     0x694bcc
0056fbf9: push     0x68f8a0
0056fbfe: call     0x5a07f0
0056fc03: call     eax
0056fc05: mov      eax, dword ptr [esp + 0x2c]
0056fc09: add      esp, 0x10
0056fc0c: cmp      eax, ebx
0056fc0e: mov      dword ptr [esp + 0x60], esi
0056fc12: je       0x56fc31
0056fc14: lea      ecx, [eax - 1]
0056fc17: mov      al, byte ptr [eax - 1]
0056fc1a: cmp      al, bl
0056fc1c: je       0x56fc28
0056fc1e: cmp      al, 0xff
0056fc20: je       0x56fc28
0056fc22: dec      al
0056fc24: mov      byte ptr [ecx], al
0056fc26: jmp      0x56fc31
0056fc28: push     ecx
0056fc29: call     0x5fe5f0
0056fc2e: add      esp, 4
0056fc31: mov      dword ptr [esp + 0x1c], ebx
0056fc35: mov      dword ptr [esp + 0x20], ebx
0056fc39: mov      dword ptr [esp + 0x24], ebx
0056fc3d: mov      eax, dword ptr [ebp + 0x108]
0056fc43: cmp      byte ptr [eax + 0x85], bl
0056fc49: je       0x56fcbd
0056fc4b: push     ecx
0056fc4c: mov      ecx, ebp
0056fc4e: mov      edx, esp
0056fc50: mov      dword ptr [esp + 0x18], esp
0056fc54: push     edx
0056fc55: call     0x4042e0
0056fc5a: lea      ecx, [esp + 0x3c]
