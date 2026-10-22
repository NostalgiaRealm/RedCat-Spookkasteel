004a8300: leave    
004a8301: jne      0x4a83b2
004a8307: mov      al, byte ptr [esp + 0x13]
004a830b: mov      edi, 0x6b3f70
004a8310: mov      byte ptr [esp + 0x68], al
004a8314: or       ecx, 0xffffffff
004a8317: xor      eax, eax
004a8319: xor      esi, esi
004a831b: repne scasb al, byte ptr es:[edi]
004a831d: not      ecx
004a831f: dec      ecx
004a8320: mov      dword ptr [esp + 0x6c], esi
004a8324: push     ecx
004a8325: push     0x6b3f70
004a832a: lea      ecx, [esp + 0x70]
004a832e: mov      dword ptr [esp + 0x78], esi
004a8332: mov      dword ptr [esp + 0x7c], esi
004a8336: call     0x4040f0
004a833b: lea      ecx, [esp + 0x68]
004a833f: mov      byte ptr [esp + 0x168], 7
004a8347: push     ecx
004a8348: push     0xb6
004a834d: push     0x68d638
004a8352: push     0x68d62c
004a8357: call     0x5a07f0
004a835c: call     eax
004a835e: mov      eax, dword ptr [esp + 0x7c]
004a8362: add      esp, 0x10
004a8365: cmp      eax, esi
004a8367: mov      byte ptr [esp + 0x168], 6
004a836f: je       0x4a83a2
004a8371: lea      ecx, [eax - 1]
004a8374: mov      al, byte ptr [eax - 1]
004a8377: test     al, al
004a8379: je       0x4a8399
004a837b: cmp      al, 0xff
004a837d: je       0x4a8399
004a837f: dec      al
004a8381: mov      byte ptr [ecx], al
004a8383: jmp      0x4a83a2
004a8385: mov      eax, 0x6b8fe0
004a838a: jmp      0x4a82cb
004a838f: mov      eax, 0x6b9008
004a8394: jmp      0x4a82cb
004a8399: push     ecx
004a839a: call     0x5fe5f0
004a839f: add      esp, 4
004a83a2: mov      eax, dword ptr [esp + 0x14]
004a83a6: mov      dword ptr [esp + 0x6c], esi
004a83aa: mov      dword ptr [esp + 0x70], esi
004a83ae: mov      dword ptr [esp + 0x74], esi
004a83b2: mov      ecx, dword ptr [eax]
004a83b4: push     ebp
004a83b5: call     0x4f41c0
004a83ba: mov      eax, dword ptr [esp + 0x44]
004a83be: mov      byte ptr [esp + 0x168], 0
004a83c6: test     eax, eax
004a83c8: je       0x4a83ea
004a83ca: mov      esi, dword ptr [eax + 0x14]
004a83cd: mov      ecx, eax
004a83cf: add      eax, 0x14
004a83d2: dec      esi
004a83d3: mov      edx, esi
004a83d5: test     edx, edx
004a83d7: mov      dword ptr [eax], esi
004a83d9: jne      0x4a83e2
004a83db: push     0
004a83dd: call     0x5abfc0
004a83e2: mov      dword ptr [esp + 0x44], 0
004a83ea: call     0x60a4a0
004a83ef: cdq      
004a83f0: mov      ecx, 0x2710
004a83f5: idiv     ecx
004a83f7: inc      dword ptr [esp + 0x34]
004a83fb: mov      dword ptr [esp + 0x14], edx
004a83ff: fild     dword ptr [esp + 0x14]
004a8403: fmul     dword ptr [0x64e87c]
004a8409: fadd     dword ptr [esp + 0x38]
004a840d: fadd     dword ptr [0x64d670]
004a8413: fstp     dword ptr [esp + 0x38]
004a8417: fild     dword ptr [esp + 0x34]
004a841b: fcomp    dword ptr [ebx + 0xb8]
004a8421: fnstsw   ax
004a8423: test     ah, 1
004a8426: jne      0x4a7d53
004a842c: lea      ecx, [esp + 0x90]
004a8433: mov      dword ptr [esp + 0x168], 0xffffffff
004a843e: call     0x5ae770
004a8443: mov      ecx, dword ptr [esp + 0x160]
004a844a: pop      edi
004a844b: pop      esi
004a844c: pop      ebp
004a844d: pop      ebx
004a844e: mov      dword ptr fs:[0], ecx
004a8455: add      esp, 0x15c
004a845b: ret      
004a845c: nop      
004a845d: nop      
004a845e: nop      
004a845f: nop      
004a8460: push     -1
004a8462: push     0x62dc60
004a8467: mov      eax, dword ptr fs:[0]
004a846d: push     eax
004a846e: mov      dword ptr fs:[0], esp
004a8475: sub      esp, 0x14
004a8478: mov      eax, dword ptr [esp + 0x28]
004a847c: push     ebp
004a847d: mov      ebp, ecx
004a847f: push     esi
004a8480: mov      ecx, dword ptr [esp + 0x2c]
004a8484: push     edi
004a8485: push     eax
004a8486: push     ecx
004a8487: mov      ecx, ebp
004a8489: mov      dword ptr [esp + 0x14], ebp
004a848d: call     0x56f830
004a8492: mov      esi, dword ptr [esp + 0x38]
004a8496: xor      edi, edi
004a8498: cmp      esi, edi
004a849a: mov      dword ptr [esp + 0x28], edi
004a849e: mov      dword ptr [ebp + 0x304], esi
004a84a4: mov      dword ptr [ebp], 0x64e894
004a84ab: jne      0x4a855e
004a84b1: mov      dword ptr [esp + 0x14], edi
004a84b5: mov      dword ptr [esp + 0x18], edi
004a84b9: mov      dword ptr [esp + 0x1c], edi
004a84bd: mov      edi, 0x6b3f70
004a84c2: or       ecx, 0xffffffff
004a84c5: xor      eax, eax
004a84c7: repne scasb al, byte ptr es:[edi]
004a84c9: mov      dl, byte ptr [esp + 0x38]
004a84cd: push     ebx
004a84ce: not      ecx
004a84d0: dec      ecx
004a84d1: push     1
004a84d3: mov      ebx, ecx
004a84d5: lea      ecx, [esp + 0x18]
004a84d9: push     ebx
004a84da: mov      byte ptr [esp + 0x1c], dl
004a84de: call     0x401940
004a84e3: test     al, al
004a84e5: je       0x4a850e
004a84e7: mov      edi, dword ptr [esp + 0x18]
004a84eb: mov      ecx, ebx
004a84ed: mov      eax, ecx
004a84ef: mov      esi, 0x6b3f70
004a84f4: shr      ecx, 2
004a84f7: rep movsd dword ptr es:[edi], dword ptr [esi]
004a84f9: mov      ecx, eax
004a84fb: push     ebx
004a84fc: and      ecx, 3
004a84ff: rep movsb byte ptr es:[edi], byte ptr [esi]
004a8501: lea      ecx, [esp + 0x18]
004a8505: call     0x404190
004a850a: mov      esi, dword ptr [esp + 0x3c]
004a850e: lea      ecx, [esp + 0x14]
004a8512: mov      byte ptr [esp + 0x2c], 1
004a8517: push     ecx
004a8518: push     0x130
004a851d: push     0x695da4
004a8522: push     0x68f604
004a8527: call     0x5a07f0
004a852c: call     eax
004a852e: mov      eax, dword ptr [esp + 0x28]
004a8532: add      esp, 0x10
004a8535: test     eax, eax
004a8537: mov      byte ptr [esp + 0x2c], 0
004a853c: pop      ebx
004a853d: je       0x4a855c
004a853f: lea      ecx, [eax - 1]
004a8542: mov      al, byte ptr [eax - 1]
004a8545: test     al, al
004a8547: je       0x4a8553
004a8549: cmp      al, 0xff
004a854b: je       0x4a8553
004a854d: dec      al
004a854f: mov      byte ptr [ecx], al
004a8551: jmp      0x4a855c
004a8553: push     ecx
004a8554: call     0x5fe5f0
004a8559: add      esp, 4
004a855c: xor      edi, edi
004a855e: push     1
004a8560: mov      ecx, ebp
004a8562: call     0x49df30
004a8567: mov      byte ptr [ebp + 0x2e7], 1
004a856e: mov      byte ptr [ebp + 0x300], 1
004a8575: mov      eax, dword ptr [esi + 0x48]
004a8578: cmp      eax, edi
004a857a: jl       0x4a8581
004a857c: cmp      eax, 2
004a857f: jle      0x4a8584
004a8581: mov      dword ptr [esi + 0x48], edi
004a8584: mov      edx, dword ptr [esi + 0x48]
004a8587: mov      ecx, dword ptr [esp + 0x20]
004a858b: pop      edi
004a858c: mov      dword ptr [ebp + 0x308], edx
004a8592: mov      eax, ebp
004a8594: pop      esi
004a8595: pop      ebp
004a8596: mov      dword ptr fs:[0], ecx
004a859d: add      esp, 0x20
004a85a0: ret      0xc
004a85a3: nop      
004a85a4: nop      
004a85a5: nop      
004a85a6: nop      
004a85a7: nop      
004a85a8: nop      
004a85a9: nop      
004a85aa: nop      
004a85ab: nop      
004a85ac: nop      
004a85ad: nop      
004a85ae: nop      
004a85af: nop      
004a85b0: mov      eax, dword ptr fs:[0]
004a85b6: push     -1
004a85b8: push     0x62dc78
004a85bd: push     eax
004a85be: mov      eax, dword ptr [esp + 0x14]
004a85c2: mov      dword ptr fs:[0], esp
004a85c9: sub      esp, 0x34
004a85cc: push     esi
004a85cd: mov      esi, ecx
004a85cf: mov      ecx, dword ptr [esp + 0x48]
004a85d3: push     edi
004a85d4: push     eax
004a85d5: push     ecx
004a85d6: mov      ecx, esi
004a85d8: call     0x56f9b0
004a85dd: mov      al, byte ptr [esi + 0xa9]
004a85e3: test     al, al
004a85e5: je       0x4a86bd
004a85eb: call     0x517f70
004a85f0: mov      edi, eax
004a85f2: mov      eax, dword ptr [edi + 0x64]
004a85f5: cmp      eax, 0x80000000
004a85fa: jne      0x4a8614
004a85fc: mov      eax, dword ptr [edi + 0x18]
004a85ff: test     eax, eax
004a8601: jne      0x4a8608
004a8603: mov      eax, 0x64a3b4
004a8608: push     eax
004a8609: call     0x60af10
004a860e: add      esp, 4
004a8611: mov      dword ptr [edi + 0x64], eax
004a8614: test     eax, eax
004a8616: je       0x4a86bd
004a861c: mov      edi, dword ptr [esi + 0x60]
004a861f: test     edi, edi
004a8621: jne      0x4a8628
004a8623: mov      edi, 0x64a3b4
004a8628: mov      edx, dword ptr [esi]
004a862a: lea      eax, [esp + 8]
004a862e: push     eax
004a862f: mov      ecx, esi
004a8631: call     dword ptr [edx + 0x48]
004a8634: fld      dword ptr [eax + 8]
004a8637: mov      edx, dword ptr [esi]
004a8639: sub      esp, 8
004a863c: lea      eax, [esp + 0x1c]
004a8640: mov      ecx, esi
004a8642: fstp     qword ptr [esp]
004a8645: push     eax
004a8646: call     dword ptr [edx + 0x48]
004a8649: fld      dword ptr [eax + 4]
004a864c: mov      edx, dword ptr [esi]
004a864e: sub      esp, 8
004a8651: lea      eax, [esp + 0x30]
004a8655: mov      ecx, esi
004a8657: fstp     qword ptr [esp]
004a865a: push     eax
004a865b: call     dword ptr [edx + 0x48]
004a865e: fld      dword ptr [eax]
004a8660: sub      esp, 8
004a8663: lea      ecx, [esp + 0x44]
004a8667: fstp     qword ptr [esp]
004a866a: push     edi
004a866b: push     0x695dd4
004a8670: push     ecx
004a8671: call     0x5ae390
004a8676: push     eax
004a8677: mov      dword ptr [esp + 0x6c], 0
004a867f: call     0x5aff00
004a8684: mov      eax, dword ptr [esp + 0x58]
004a8688: add      esp, 0x28
004a868b: test     eax, eax
004a868d: je       0x4a86bd
004a868f: lea      ecx, [eax - 1]
004a8692: mov      al, byte ptr [eax - 1]
004a8695: test     al, al
004a8697: je       0x4a86b4
004a8699: cmp      al, 0xff
004a869b: je       0x4a86b4
004a869d: dec      al
004a869f: pop      edi
004a86a0: mov      byte ptr [ecx], al
004a86a2: pop      esi
004a86a3: mov      ecx, dword ptr [esp + 0x34]
004a86a7: mov      dword ptr fs:[0], ecx
004a86ae: add      esp, 0x40
004a86b1: ret      8
004a86b4: push     ecx
004a86b5: call     0x5fe5f0
004a86ba: add      esp, 4
004a86bd: mov      ecx, dword ptr [esp + 0x3c]
004a86c1: pop      edi
004a86c2: pop      esi
004a86c3: mov      dword ptr fs:[0], ecx
004a86ca: add      esp, 0x40
004a86cd: ret      8
004a86d0: mov      eax, dword ptr [esp + 4]
004a86d4: mov      byte ptr [eax], 0
004a86d7: ret      4
004a86da: nop      
004a86db: nop      
004a86dc: nop      
004a86dd: nop      
004a86de: nop      
004a86df: nop      
004a86e0: push     -1
004a86e2: push     0x62dca8
004a86e7: mov      eax, dword ptr fs:[0]
004a86ed: push     eax
004a86ee: mov      dword ptr fs:[0], esp
004a86f5: sub      esp, 0xc
004a86f8: push     ebx
004a86f9: push     esi
004a86fa: push     edi
004a86fb: mov      edi, ecx
004a86fd: xor      ebx, ebx
004a86ff: mov      dword ptr [esp + 0x20], ebx
004a8703: mov      esi, dword ptr [esp + 0x2c]
004a8707: push     ecx
004a8708: mov      eax, esp
004a870a: cmp      esi, ebx
004a870c: mov      dword ptr [esp + 0x14], esp
004a8710: mov      dword ptr [eax], esi
004a8712: je       0x4a8717
004a8714: inc      dword ptr [esi + 0x14]
004a8717: push     ecx
004a8718: lea      eax, [esp + 0x30]
004a871c: mov      ecx, esp
004a871e: mov      dword ptr [esp + 0x1c], esp
004a8722: push     eax
004a8723: mov      byte ptr [esp + 0x2c], 2
004a8728: call     0x449760
004a872d: mov      ecx, edi
004a872f: mov      byte ptr [esp + 0x28], 1
004a8734: call     0x49c1b0
004a8739: cmp      esi, ebx
004a873b: je       0x4a8780
004a873d: cmp      dword ptr [edi + 0x308], ebx
004a8743: je       0x4a875c
004a8745: push     ecx
004a8746: mov      ecx, edi
004a8748: mov      eax, esp
004a874a: mov      dword ptr [esp + 0x18], esp
004a874e: mov      dword ptr [eax], esi
004a8750: mov      eax, dword ptr [esi + 0x14]
004a8753: inc      eax
004a8754: mov      dword ptr [esi + 0x14], eax
004a8757: call     0x4a9100
004a875c: mov      ecx, edi
004a875e: call     0x49c5a0
004a8763: mov      edx, dword ptr [edi]
004a8765: lea      eax, [esp + 0xf]
004a8769: push     eax
004a876a: mov      ecx, edi
004a876c: mov      byte ptr [esp + 0x13], bl
004a8770: call     dword ptr [edx + 0x7c]
004a8773: cmp      byte ptr [esp + 0xf], bl
004a8777: je       0x4a8780
004a8779: mov      ecx, esi
004a877b: call     0x4fb080
004a8780: mov      eax, dword ptr [esp + 0x28]
004a8784: mov      byte ptr [esp + 0x20], bl
004a8788: cmp      eax, ebx
004a878a: je       0x4a87a7
004a878c: mov      edi, dword ptr [eax + 0x14]
004a878f: mov      ecx, eax
004a8791: add      eax, 0x14
004a8794: dec      edi
004a8795: mov      edx, edi
004a8797: cmp      edx, ebx
004a8799: mov      dword ptr [eax], edi
004a879b: jne      0x4a87a3
004a879d: push     ebx
004a879e: call     0x5abfc0
004a87a3: mov      dword ptr [esp + 0x28], ebx
004a87a7: cmp      esi, ebx
004a87a9: mov      dword ptr [esp + 0x20], 0xffffffff
004a87b1: je       0x4a87c4
004a87b3: mov      eax, dword ptr [esi + 0x14]
004a87b6: dec      eax
004a87b7: mov      dword ptr [esi + 0x14], eax
004a87ba: jne      0x4a87c4
004a87bc: push     ebx
004a87bd: mov      ecx, esi
004a87bf: call     0x5abfc0
004a87c4: mov      ecx, dword ptr [esp + 0x18]
004a87c8: pop      edi
004a87c9: pop      esi
004a87ca: mov      dword ptr fs:[0], ecx
004a87d1: pop      ebx
004a87d2: add      esp, 0x18
004a87d5: ret      8
004a87d8: nop      
004a87d9: nop      
004a87da: nop      
004a87db: nop      
004a87dc: nop      
004a87dd: nop      
004a87de: nop      
004a87df: nop      
004a87e0: mov      eax, dword ptr fs:[0]
004a87e6: push     -1
004a87e8: push     0x62dd28
004a87ed: push     eax
004a87ee: mov      eax, dword ptr [esp + 0x14]
004a87f2: mov      dword ptr fs:[0], esp
004a87f9: sub      esp, 0x68
004a87fc: test     eax, eax
004a87fe: push     ebx
004a87ff: push     esi
004a8800: push     edi
004a8801: jne      0x4a8870
004a8803: mov      al, byte ptr [esp + 0x88]
004a880a: push     0
004a880c: lea      ecx, [esp + 0x48]
004a8810: mov      byte ptr [esp + 0x48], al
004a8814: call     0x4040a0
004a8819: mov      edi, 0x6b3f70
004a881e: or       ecx, 0xffffffff
004a8821: xor      eax, eax
004a8823: repne scasb al, byte ptr es:[edi]
004a8825: not      ecx
004a8827: dec      ecx
004a8828: push     ecx
004a8829: push     0x6b3f70
004a882e: lea      ecx, [esp + 0x4c]
004a8832: call     0x4040f0
004a8837: lea      ecx, [esp + 0x44]
004a883b: mov      dword ptr [esp + 0x7c], 0
004a8843: push     ecx
004a8844: push     0x17d
004a8849: push     0x695da4
004a884e: push     0x695eb4
004a8853: call     0x5a07f0
004a8858: call     eax
004a885a: add      esp, 0x10
004a885d: lea      ecx, [esp + 0x44]
004a8861: mov      dword ptr [esp + 0x7c], 0xffffffff
004a8869: push     1
004a886b: call     0x4040a0
004a8870: mov      ebx, dword ptr [esp + 0x84]
004a8877: mov      esi, dword ptr [ebx + 0x14]
004a887a: test     esi, esi
004a887c: je       0x4a8ed5
004a8882: mov      edi, esi
004a8884: or       ecx, 0xffffffff
004a8887: xor      eax, eax
004a8889: repne scasb al, byte ptr es:[edi]
004a888b: not      ecx
004a888d: dec      ecx
004a888e: je       0x4a8ed5
004a8894: mov      dl, byte ptr [esp + 0x88]
004a889b: push     ebp
004a889c: push     eax
004a889d: lea      ecx, [esp + 0x3c]
004a88a1: mov      byte ptr [esp + 0x3c], dl
004a88a5: call     0x4040a0
004a88aa: mov      edi, esi
004a88ac: or       ecx, 0xffffffff
004a88af: xor      eax, eax
004a88b1: push     1
004a88b3: repne scasb al, byte ptr es:[edi]
004a88b5: not      ecx
004a88b7: dec      ecx
004a88b8: mov      ebp, ecx
004a88ba: lea      ecx, [esp + 0x3c]
004a88be: push     ebp
004a88bf: call     0x401940
004a88c4: test     al, al
004a88c6: je       0x4a88e6
004a88c8: mov      edi, dword ptr [esp + 0x3c]
004a88cc: mov      ecx, ebp
004a88ce: mov      eax, ecx
004a88d0: push     ebp
004a88d1: shr      ecx, 2
004a88d4: rep movsd dword ptr es:[edi], dword ptr [esi]
004a88d6: mov      ecx, eax
004a88d8: and      ecx, 3
004a88db: rep movsb byte ptr es:[edi], byte ptr [esi]
004a88dd: lea      ecx, [esp + 0x3c]
004a88e1: call     0x404190
004a88e6: mov      ecx, dword ptr [ebx + 0xc]
004a88e9: push     0x68f590
004a88ee: lea      edx, [esp + 0x5c]
004a88f2: push     ecx
004a88f3: push     edx
004a88f4: mov      dword ptr [esp + 0x8c], 2
004a88ff: call     0x5033f0
004a8904: lea      ecx, [esp + 0x44]
004a8908: push     ebx
004a8909: push     ecx
004a890a: push     eax
004a890b: mov      byte ptr [esp + 0x98], 3
004a8913: call     dword ptr [esp + 0xa4]
004a891a: add      esp, 0x18
004a891d: lea      ecx, [esp + 0x58]
004a8921: mov      ebp, eax
004a8923: mov      byte ptr [esp + 0x80], 2
004a892b: push     1
004a892d: call     0x4040a0
004a8932: mov      dl, byte ptr [esp + 0x8c]
004a8939: mov      esi, dword ptr [ebx + 0xc]
004a893c: push     0
004a893e: lea      ecx, [esp + 0x2c]
004a8942: mov      byte ptr [esp + 0x2c], dl
004a8946: call     0x4040a0
004a894b: test     esi, esi
004a894d: mov      byte ptr [esp + 0x80], 4
004a8955: jne      0x4a896e
004a8957: mov      edi, 0x6b3f70
004a895c: or       ecx, 0xffffffff
004a895f: xor      eax, eax
004a8961: repne scasb al, byte ptr es:[edi]
004a8963: not      ecx
004a8965: dec      ecx
004a8966: push     ecx
004a8967: push     0x6b3f70
004a896c: jmp      0x4a897c
004a896e: mov      edi, esi
004a8970: or       ecx, 0xffffffff
004a8973: xor      eax, eax
004a8975: repne scasb al, byte ptr es:[edi]
004a8977: not      ecx
004a8979: dec      ecx
004a897a: push     ecx
004a897b: push     esi
004a897c: lea      ecx, [esp + 0x30]
004a8980: call     0x4040f0
004a8985: lea      eax, [esp + 0x28]
004a8989: mov      ecx, ebp
004a898b: push     eax
004a898c: call     0x503ae0
004a8991: push     1
004a8993: lea      ecx, [esp + 0x2c]
004a8997: mov      byte ptr [esp + 0x84], 2
004a899f: call     0x4040a0
004a89a4: mov      cl, byte ptr [esp + 0x8c]
004a89ab: mov      esi, dword ptr [ebx + 0x10]
004a89ae: mov      byte ptr [esp + 0x48], cl
004a89b2: push     0
004a89b4: lea      ecx, [esp + 0x4c]
004a89b8: call     0x4040a0
004a89bd: test     esi, esi
004a89bf: mov      byte ptr [esp + 0x80], 5
004a89c7: je       0x4a89e0
004a89c9: mov      edi, esi
004a89cb: or       ecx, 0xffffffff
004a89ce: xor      eax, eax
004a89d0: repne scasb al, byte ptr es:[edi]
004a89d2: not      ecx
004a89d4: dec      ecx
004a89d5: push     ecx
004a89d6: push     esi
004a89d7: lea      ecx, [esp + 0x50]
004a89db: call     0x4040f0
004a89e0: mov      edx, dword ptr [0x64aba8]
004a89e6: lea      eax, [esp + 0x48]
004a89ea: push     edx
004a89eb: push     0
004a89ed: push     eax
004a89ee: lea      ecx, [ebp + 0x90]
004a89f4: call     0x40cc00
004a89f9: push     1
004a89fb: lea      ecx, [esp + 0x4c]
004a89ff: mov      byte ptr [esp + 0x84], 2
004a8a07: call     0x4040a0
004a8a0c: fld      dword ptr [ebx + 0x20]
004a8a0f: fst      dword ptr [esp + 0x8c]
004a8a16: fcomp    dword ptr [0x64a450]
004a8a1c: fnstsw   ax
004a8a1e: test     ah, 0x41
004a8a21: jne      0x4a8a34
004a8a23: mov      eax, dword ptr [esp + 0x8c]
004a8a2a: mov      ecx, ebp
004a8a2c: push     eax
004a8a2d: push     eax
004a8a2e: push     eax
004a8a2f: call     0x49cca0
004a8a34: mov      edx, dword ptr [ebp]
004a8a37: push     ebx
004a8a38: mov      ecx, ebp
004a8a3a: call     dword ptr [edx + 0x4c]
004a8a3d: fld      dword ptr [ebx + 0x24]
004a8a40: fmul     dword ptr [0x64d658]
004a8a46: push     ecx
004a8a47: mov      ecx, ebp
004a8a49: fstp     dword ptr [esp]
004a8a4c: call     0x49ccf0
004a8a51: fld      dword ptr [ebx + 0x28]
004a8a54: fmul     dword ptr [0x64d658]
004a8a5a: push     ecx
004a8a5b: mov      ecx, ebp
004a8a5d: fstp     dword ptr [esp]
004a8a60: call     0x49cd90
004a8a65: fld      dword ptr [ebx + 0x2c]
004a8a68: fmul     dword ptr [0x64d658]
004a8a6e: push     ecx
004a8a6f: mov      ecx, ebp
004a8a71: fstp     dword ptr [esp]
004a8a74: call     0x49ce30
004a8a79: mov      edx, dword ptr [ebx + 0x18]
004a8a7c: test     edx, edx
004a8a7e: je       0x4a8bc0
004a8a84: mov      edi, edx
004a8a86: or       ecx, 0xffffffff
004a8a89: xor      eax, eax
004a8a8b: repne scasb al, byte ptr es:[edi]
004a8a8d: not      ecx
004a8a8f: dec      ecx
004a8a90: je       0x4a8bc0
004a8a96: push     0x695eac
004a8a9b: push     edx
004a8a9c: call     0x6195f0
004a8aa1: add      esp, 8
004a8aa4: test     eax, eax
004a8aa6: je       0x4a8bc0
004a8aac: mov      al, byte ptr [esp + 0x8c]
004a8ab3: mov      esi, dword ptr [ebx + 0x18]
004a8ab6: push     0
004a8ab8: lea      ecx, [esp + 0x2c]
004a8abc: mov      byte ptr [esp + 0x2c], al
004a8ac0: call     0x4040a0
004a8ac5: mov      edi, esi
004a8ac7: or       ecx, 0xffffffff
004a8aca: xor      eax, eax
004a8acc: push     1
004a8ace: repne scasb al, byte ptr es:[edi]
004a8ad0: not      ecx
004a8ad2: dec      ecx
004a8ad3: mov      edi, ecx
004a8ad5: lea      ecx, [esp + 0x2c]
004a8ad9: push     edi
004a8ada: mov      dword ptr [esp + 0x94], edi
004a8ae1: call     0x401940
004a8ae6: test     al, al
004a8ae8: je       0x4a8b0a
004a8aea: mov      ecx, edi
004a8aec: mov      edi, dword ptr [esp + 0x2c]
004a8af0: mov      edx, ecx
004a8af2: shr      ecx, 2
004a8af5: rep movsd dword ptr es:[edi], dword ptr [esi]
004a8af7: mov      ecx, edx
004a8af9: mov      eax, edx
004a8afb: and      ecx, 3
004a8afe: push     eax
004a8aff: rep movsb byte ptr es:[edi], byte ptr [esi]
004a8b01: lea      ecx, [esp + 0x2c]
004a8b05: call     0x404190
004a8b0a: lea      ecx, [esp + 0x28]
004a8b0e: lea      esi, [ebp + 0x19c]
004a8b14: push     ecx
004a8b15: mov      ecx, esi
004a8b17: mov      byte ptr [esp + 0x84], 6
004a8b1f: call     0x4a06b0
004a8b24: push     1
004a8b26: lea      ecx, [esp + 0x2c]
004a8b2a: mov      byte ptr [esp + 0x84], 2
004a8b32: call     0x4040a0
004a8b37: fld      dword ptr [ebx + 0x1c]
004a8b3a: mov      dword ptr [esp + 0x8c], 0x3f800000
004a8b45: fst      qword ptr [esp + 0x10]
004a8b49: fcomp    qword ptr [0x64d300]
004a8b4f: fnstsw   ax
004a8b51: test     ah, 1
004a8b54: jne      0x4a8b72
004a8b56: fld      dword ptr [ebx + 0x1c]
004a8b59: fcomp    dword ptr [0x64b79c]
004a8b5f: fnstsw   ax
004a8b61: test     ah, 1
004a8b64: je       0x4a8b72
004a8b66: mov      edx, dword ptr [ebx + 0x1c]
004a8b69: mov      dword ptr [esp + 0x8c], edx
004a8b70: jmp      0x4a8bb1
004a8b72: mov      eax, dword ptr [esp + 0x14]
004a8b76: mov      ecx, dword ptr [esp + 0x10]
004a8b7a: push     eax
004a8b7b: push     ecx
004a8b7c: lea      edx, [esp + 0x50]
004a8b80: push     0x695e94
004a8b85: push     edx
004a8b86: call     0x5ae390
004a8b8b: add      esp, 0x10
004a8b8e: push     eax
004a8b8f: mov      ecx, ebp
004a8b91: mov      byte ptr [esp + 0x84], 7
004a8b99: call     0x5035a0
004a8b9e: push     1
004a8ba0: lea      ecx, [esp + 0x4c]
004a8ba4: mov      byte ptr [esp + 0x84], 2
004a8bac: call     0x4040a0
004a8bb1: mov      eax, dword ptr [esp + 0x8c]
004a8bb8: mov      ecx, esi
004a8bba: push     eax
004a8bbb: call     0x4a0bd0
004a8bc0: mov      eax, dword ptr [ebx + 0x4c]
004a8bc3: test     eax, eax
004a8bc5: je       0x4a8bcd
004a8bc7: mov      dword ptr [ebp + 0x240], eax
004a8bcd: mov      eax, dword ptr [ebp + 0x108]
004a8bd3: test     eax, eax
004a8bd5: jne      0x4a8c44
004a8bd7: mov      cl, byte ptr [esp + 0x8c]
004a8bde: push     0
004a8be0: mov      byte ptr [esp + 0x4c], cl
004a8be4: lea      ecx, [esp + 0x4c]
004a8be8: call     0x4040a0
004a8bed: mov      edi, 0x6b3f70
004a8bf2: or       ecx, 0xffffffff
004a8bf5: xor      eax, eax
004a8bf7: repne scasb al, byte ptr es:[edi]
004a8bf9: not      ecx
004a8bfb: dec      ecx
004a8bfc: push     ecx
004a8bfd: push     0x6b3f70
004a8c02: lea      ecx, [esp + 0x50]
004a8c06: call     0x4040f0
004a8c0b: lea      edx, [esp + 0x48]
004a8c0f: mov      byte ptr [esp + 0x80], 8
004a8c17: push     edx
004a8c18: push     0x141
004a8c1d: push     0x694bcc
004a8c22: push     0x68f8a0
004a8c27: call     0x5a07f0
004a8c2c: call     eax
004a8c2e: add      esp, 0x10
004a8c31: lea      ecx, [esp + 0x48]
004a8c35: mov      byte ptr [esp + 0x80], 2
004a8c3d: push     1
004a8c3f: call     0x4040a0
004a8c44: mov      eax, dword ptr [ebp + 0x108]
004a8c4a: mov      cl, byte ptr [eax + 0x56]
004a8c4d: test     cl, cl
004a8c4f: je       0x4a8d4a
004a8c55: test     eax, eax
004a8c57: jne      0x4a8cc6
004a8c59: mov      al, byte ptr [esp + 0x8c]
004a8c60: push     0
004a8c62: lea      ecx, [esp + 0x4c]
004a8c66: mov      byte ptr [esp + 0x4c], al
004a8c6a: call     0x4040a0
004a8c6f: mov      edi, 0x6b3f70
004a8c74: or       ecx, 0xffffffff
004a8c77: xor      eax, eax
004a8c79: repne scasb al, byte ptr es:[edi]
004a8c7b: not      ecx
004a8c7d: dec      ecx
004a8c7e: push     ecx
004a8c7f: push     0x6b3f70
004a8c84: lea      ecx, [esp + 0x50]
004a8c88: call     0x4040f0
004a8c8d: lea      ecx, [esp + 0x48]
004a8c91: mov      byte ptr [esp + 0x80], 9
004a8c99: push     ecx
004a8c9a: push     0x141
004a8c9f: push     0x694bcc
004a8ca4: push     0x68f8a0
004a8ca9: call     0x5a07f0
004a8cae: call     eax
004a8cb0: add      esp, 0x10
004a8cb3: lea      ecx, [esp + 0x48]
004a8cb7: mov      byte ptr [esp + 0x80], 2
004a8cbf: push     1
004a8cc1: call     0x4040a0
004a8cc6: mov      eax, dword ptr [ebp + 0x108]
004a8ccc: mov      ecx, dword ptr [eax + 0x64]
004a8ccf: test     ecx, ecx
004a8cd1: jle      0x4a8d4a
004a8cd3: call     0x517f70
004a8cd8: mov      esi, eax
004a8cda: mov      eax, dword ptr [esi + 0x64]
004a8cdd: cmp      eax, 0x80000000
004a8ce2: jne      0x4a8cfc
004a8ce4: mov      eax, dword ptr [esi + 0x18]
004a8ce7: test     eax, eax
004a8ce9: jne      0x4a8cf0
004a8ceb: mov      eax, 0x64a3b4
004a8cf0: push     eax
004a8cf1: call     0x60af10
004a8cf6: add      esp, 4
004a8cf9: mov      dword ptr [esi + 0x64], eax
004a8cfc: test     eax, eax
004a8cfe: je       0x4a8d37
004a8d00: mov      edx, dword ptr [ebx + 0xc]
004a8d03: lea      eax, [esp + 0x48]
004a8d07: push     edx
004a8d08: push     0x695e74
004a8d0d: push     eax
004a8d0e: call     0x5ae390
004a8d13: push     eax
004a8d14: mov      byte ptr [esp + 0x90], 0xa
004a8d1c: call     0x5aff00
004a8d21: add      esp, 0x10
004a8d24: lea      ecx, [esp + 0x48]
004a8d28: mov      byte ptr [esp + 0x80], 2
004a8d30: push     1
004a8d32: call     0x4040a0
004a8d37: mov      byte ptr [ebp + 0x200], 1
004a8d3e: mov      dword ptr [ebp + 0x204], 0x4a7940
004a8d48: jmp      0x4a8dae
004a8d4a: call     0x517f70
004a8d4f: mov      esi, eax
004a8d51: mov      eax, dword ptr [esi + 0x64]
004a8d54: cmp      eax, 0x80000000
004a8d59: jne      0x4a8d73
004a8d5b: mov      eax, dword ptr [esi + 0x18]
004a8d5e: test     eax, eax
004a8d60: jne      0x4a8d67
004a8d62: mov      eax, 0x64a3b4
004a8d67: push     eax
004a8d68: call     0x60af10
004a8d6d: add      esp, 4
004a8d70: mov      dword ptr [esi + 0x64], eax
004a8d73: test     eax, eax
004a8d75: je       0x4a8dae
004a8d77: mov      ecx, dword ptr [ebx + 0xc]
004a8d7a: lea      edx, [esp + 0x48]
004a8d7e: push     ecx
004a8d7f: push     0x695e50
004a8d84: push     edx
004a8d85: call     0x5ae390
004a8d8a: push     eax
004a8d8b: mov      byte ptr [esp + 0x90], 0xb
004a8d93: call     0x5aff00
004a8d98: add      esp, 0x10
004a8d9b: lea      ecx, [esp + 0x48]
004a8d9f: mov      byte ptr [esp + 0x80], 2
004a8da7: push     1
004a8da9: call     0x4040a0
004a8dae: call     0x517f70
004a8db3: mov      esi, eax
004a8db5: mov      eax, dword ptr [esi + 0x64]
004a8db8: cmp      eax, 0x80000000
004a8dbd: jne      0x4a8dd7
004a8dbf: mov      eax, dword ptr [esi + 0x18]
004a8dc2: test     eax, eax
004a8dc4: jne      0x4a8dcb
004a8dc6: mov      eax, 0x64a3b4
004a8dcb: push     eax
004a8dcc: call     0x60af10
004a8dd1: add      esp, 4
004a8dd4: mov      dword ptr [esi + 0x64], eax
004a8dd7: test     eax, eax
004a8dd9: je       0x4a8e80
004a8ddf: mov      esi, dword ptr [ebp + 0x60]
004a8de2: test     esi, esi
004a8de4: jne      0x4a8deb
004a8de6: mov      esi, 0x64a3b4
004a8deb: mov      eax, dword ptr [ebp]
004a8dee: lea      ecx, [esp + 0x10]
004a8df2: push     ecx
004a8df3: mov      ecx, ebp
004a8df5: call     dword ptr [eax + 0x48]
004a8df8: fld      dword ptr [eax + 8]
004a8dfb: mov      edx, dword ptr [ebp]
004a8dfe: sub      esp, 8
004a8e01: lea      eax, [esp + 0x24]
004a8e05: mov      ecx, ebp
004a8e07: fstp     qword ptr [esp]
004a8e0a: push     eax
004a8e0b: call     dword ptr [edx + 0x48]
004a8e0e: fld      dword ptr [eax + 4]
004a8e11: mov      edx, dword ptr [ebp]
004a8e14: sub      esp, 8
004a8e17: lea      eax, [esp + 0x38]
004a8e1b: mov      ecx, ebp
004a8e1d: fstp     qword ptr [esp]
004a8e20: push     eax
004a8e21: call     dword ptr [edx + 0x48]
004a8e24: fld      dword ptr [eax]
004a8e26: sub      esp, 8
004a8e29: lea      ecx, [esp + 0x80]
004a8e30: fstp     qword ptr [esp]
004a8e33: push     esi
004a8e34: push     0x695e28
004a8e39: push     ecx
004a8e3a: call     0x5ae390
004a8e3f: push     eax
004a8e40: mov      byte ptr [esp + 0xa8], 0xc
004a8e48: call     0x5aff00
004a8e4d: mov      eax, dword ptr [esp + 0x94]
004a8e54: add      esp, 0x28
004a8e57: test     eax, eax
004a8e59: mov      byte ptr [esp + 0x80], 2
004a8e61: je       0x4a8e80
004a8e63: lea      ecx, [eax - 1]
004a8e66: mov      al, byte ptr [eax - 1]
004a8e69: test     al, al
004a8e6b: je       0x4a8e77
004a8e6d: cmp      al, 0xff
004a8e6f: je       0x4a8e77
004a8e71: dec      al
004a8e73: mov      byte ptr [ecx], al
004a8e75: jmp      0x4a8e80
004a8e77: push     ecx
004a8e78: call     0x5fe5f0
004a8e7d: add      esp, 4
004a8e80: push     1
004a8e82: mov      ecx, ebp
004a8e84: call     0x502350
004a8e89: mov      ecx, dword ptr [esp + 0x3c]
004a8e8d: test     ecx, ecx
004a8e8f: je       0x4a8ec0
004a8e91: mov      al, byte ptr [ecx - 1]
004a8e94: test     al, al
004a8e96: je       0x4a8eb6
004a8e98: cmp      al, 0xff
004a8e9a: je       0x4a8eb6
004a8e9c: dec      al
004a8e9e: mov      byte ptr [ecx - 1], al
004a8ea1: mov      eax, ebp
004a8ea3: pop      ebp
004a8ea4: pop      edi
004a8ea5: pop      esi
004a8ea6: pop      ebx
004a8ea7: mov      ecx, dword ptr [esp + 0x68]
004a8eab: mov      dword ptr fs:[0], ecx
004a8eb2: add      esp, 0x74
004a8eb5: ret      
004a8eb6: dec      ecx
004a8eb7: push     ecx
004a8eb8: call     0x5fe5f0
004a8ebd: add      esp, 4
004a8ec0: mov      eax, ebp
004a8ec2: pop      ebp
004a8ec3: pop      edi
004a8ec4: pop      esi
004a8ec5: pop      ebx
004a8ec6: mov      ecx, dword ptr [esp + 0x68]
004a8eca: mov      dword ptr fs:[0], ecx
004a8ed1: add      esp, 0x74
004a8ed4: ret      
004a8ed5: mov      eax, dword ptr [0x6b915c]
004a8eda: test     eax, eax
004a8edc: jne      0x4a8ee3
004a8ede: call     0x4bc480
004a8ee3: fld      dword ptr [ebx + 8]
004a8ee6: call     0x60ab20
004a8eeb: fld      dword ptr [ebx + 4]
004a8eee: push     eax
004a8eef: call     0x60ab20
004a8ef4: fld      dword ptr [ebx]
004a8ef6: push     eax
004a8ef7: call     0x60ab20
004a8efc: push     eax
004a8efd: lea      edx, [esp + 0x60]
004a8f01: push     0x695df8
004a8f06: push     edx
004a8f07: call     0x5ae390
004a8f0c: push     eax
004a8f0d: mov      dword ptr [esp + 0x94], 1
004a8f18: call     0x4c43e0
004a8f1d: add      esp, 0x18
004a8f20: lea      ecx, [esp + 0x54]
004a8f24: mov      dword ptr [esp + 0x7c], 0xffffffff
004a8f2c: push     1
004a8f2e: call     0x4040a0
004a8f33: mov      ecx, dword ptr [esp + 0x74]
004a8f37: pop      edi
004a8f38: pop      esi
004a8f39: xor      eax, eax
004a8f3b: pop      ebx
004a8f3c: mov      dword ptr fs:[0], ecx
004a8f43: add      esp, 0x74
004a8f46: ret      
004a8f47: nop      
004a8f48: nop      
004a8f49: nop      
004a8f4a: nop      
004a8f4b: nop      
004a8f4c: nop      
004a8f4d: nop      
004a8f4e: nop      
004a8f4f: nop      
004a8f50: push     0x6b95e8
004a8f55: call     0x505400
004a8f5a: ret      
004a8f5b: nop      
004a8f5c: nop      
004a8f5d: nop      
004a8f5e: nop      
004a8f5f: nop      
004a8f60: push     esi
004a8f61: mov      esi, ecx
004a8f63: call     0x5630e0
004a8f68: mov      eax, dword ptr [esi]
004a8f6a: mov      ecx, esi
004a8f6c: call     dword ptr [eax + 0x80]
004a8f72: pop      esi
004a8f73: ret      
004a8f74: nop      
004a8f75: nop      
004a8f76: nop      
004a8f77: nop      
004a8f78: nop      
004a8f79: nop      
004a8f7a: nop      
004a8f7b: nop      
004a8f7c: nop      
004a8f7d: nop      
004a8f7e: nop      
004a8f7f: nop      
004a8f80: mov      eax, dword ptr fs:[0]
004a8f86: push     -1
004a8f88: push     0x62dd48
004a8f8d: push     eax
004a8f8e: mov      dword ptr fs:[0], esp
004a8f95: sub      esp, 0x10
004a8f98: push     ebx
004a8f99: push     esi
004a8f9a: mov      esi, dword ptr [esp + 0x28]
004a8f9e: xor      ebx, ebx
004a8fa0: push     edi
004a8fa1: mov      edi, ecx
004a8fa3: mov      eax, dword ptr [esi + 4]
004a8fa6: cmp      eax, ebx
004a8fa8: jne      0x4a8faf
004a8faa: mov      eax, 0x64a3b4
004a8faf: push     0x695eec
004a8fb4: push     eax
004a8fb5: call     0x6195f0
004a8fba: add      esp, 8
004a8fbd: test     eax, eax
004a8fbf: jne      0x4a90cb
004a8fc5: call     0x517f70
004a8fca: mov      esi, eax
004a8fcc: mov      eax, dword ptr [esi + 0x64]
004a8fcf: cmp      eax, 0x80000000
004a8fd4: jne      0x4a8fee
004a8fd6: mov      eax, dword ptr [esi + 0x18]
004a8fd9: cmp      eax, ebx
004a8fdb: jne      0x4a8fe2
004a8fdd: mov      eax, 0x64a3b4
004a8fe2: push     eax
004a8fe3: call     0x60af10
004a8fe8: add      esp, 4
004a8feb: mov      dword ptr [esi + 0x64], eax
004a8fee: cmp      eax, ebx
004a8ff0: je       0x4a90ab
004a8ff6: mov      ecx, dword ptr [esp + 0x30]
004a8ffa: cmp      ecx, ebx
004a8ffc: jne      0x4a9007
004a8ffe: mov      esi, 0x6920fc
004a9003: mov      edx, esi
004a9005: jmp      0x4a9025
004a9007: mov      eax, dword ptr [ecx + 0x70]
004a900a: cmp      eax, ebx
004a900c: jne      0x4a9092
004a9012: mov      esi, 0x64a3b4
004a9017: mov      eax, dword ptr [ecx + 0x60]
004a901a: mov      edx, 0x64a3b4
004a901f: cmp      eax, ebx
004a9021: je       0x4a9025
004a9023: mov      edx, eax
004a9025: mov      ecx, dword ptr [edi + 0x70]
004a9028: cmp      ecx, ebx
004a902a: jne      0x4a9031
004a902c: mov      ecx, 0x64a3b4
004a9031: mov      eax, dword ptr [edi + 0x60]
004a9034: cmp      eax, ebx
004a9036: jne      0x4a903d
004a9038: mov      eax, 0x64a3b4
004a903d: push     esi
004a903e: push     edx
004a903f: push     ecx
004a9040: push     eax
004a9041: push     edi
004a9042: call     0x60a613
004a9047: add      esp, 4
004a904a: mov      ecx, eax
004a904c: call     0x60b060
004a9051: push     eax
004a9052: lea      eax, [esp + 0x20]
004a9056: push     0x695ec0
004a905b: push     eax
004a905c: call     0x5ae390
004a9061: push     eax
004a9062: mov      dword ptr [esp + 0x44], ebx
004a9066: call     0x5aff00
004a906b: mov      eax, dword ptr [esp + 0x30]
004a906f: add      esp, 0x20
004a9072: cmp      eax, ebx
004a9074: mov      dword ptr [esp + 0x24], 0xffffffff
004a907c: je       0x4a909f
004a907e: lea      ecx, [eax - 1]
004a9081: mov      al, byte ptr [eax - 1]
004a9084: cmp      al, bl
004a9086: je       0x4a9096
004a9088: cmp      al, 0xff
004a908a: je       0x4a9096
004a908c: dec      al
004a908e: mov      byte ptr [ecx], al
004a9090: jmp      0x4a909f
004a9092: mov      esi, eax
004a9094: jmp      0x4a9017
004a9096: push     ecx
004a9097: call     0x5fe5f0
004a909c: add      esp, 4
004a909f: mov      dword ptr [esp + 0x10], ebx
004a90a3: mov      dword ptr [esp + 0x14], ebx
004a90a7: mov      dword ptr [esp + 0x18], ebx
004a90ab: push     1
004a90ad: push     ebx
004a90ae: mov      ecx, edi
004a90b0: call     0x571140
004a90b5: pop      edi
004a90b6: pop      esi
004a90b7: mov      al, 1
004a90b9: pop      ebx
004a90ba: mov      ecx, dword ptr [esp + 0x10]
004a90be: mov      dword ptr fs:[0], ecx
004a90c5: add      esp, 0x1c
004a90c8: ret      0xc
004a90cb: mov      ecx, dword ptr [esp + 0x34]
004a90cf: mov      edx, dword ptr [esp + 0x30]
004a90d3: push     ecx
004a90d4: push     edx
004a90d5: push     esi
004a90d6: mov      ecx, edi
004a90d8: call     0x49e310
004a90dd: mov      ecx, dword ptr [esp + 0x1c]
004a90e1: pop      edi
004a90e2: pop      esi
004a90e3: pop      ebx
004a90e4: mov      dword ptr fs:[0], ecx
004a90eb: add      esp, 0x1c
004a90ee: ret      0xc
004a90f1: nop      
004a90f2: nop      
004a90f3: nop      
004a90f4: nop      
004a90f5: nop      
004a90f6: nop      
004a90f7: nop      
004a90f8: nop      
004a90f9: nop      
004a90fa: nop      
004a90fb: nop      
004a90fc: nop      
004a90fd: nop      
004a90fe: nop      
004a90ff: nop      
004a9100: push     -1
004a9102: push     0x62ddc5
004a9107: mov      eax, dword ptr fs:[0]
004a910d: push     eax
004a910e: mov      dword ptr fs:[0], esp
004a9115: sub      esp, 0x17c
004a911b: push     ebx
004a911c: push     ebp
004a911d: push     esi
004a911e: push     edi
004a911f: mov      ebp, ecx
004a9121: mov      eax, dword ptr [ebp]
004a9124: xor      ebx, ebx
004a9126: mov      dword ptr [esp + 0x194], ebx
004a912d: mov      byte ptr [esp + 0x13], bl
004a9131: mov      dword ptr [esp + 0x50], 0x459c4000
004a9139: call     dword ptr [eax + 0x64]
004a913c: lea      ecx, [ebp + 0x134]
004a9142: lea      edx, [esp + 0x19c]
004a9149: push     ecx
004a914a: push     ecx
004a914b: mov      ecx, esp
004a914d: mov      dword ptr [esp + 0x5c], esp
004a9151: push     edx
004a9152: call     0x449760
004a9157: lea      ecx, [esp + 0x174]
004a915e: call     0x5545f0
004a9163: lea      eax, [esp + 0x70]
004a9167: lea      ecx, [esp + 0x16c]
004a916e: push     eax
004a916f: mov      byte ptr [esp + 0x198], 1
004a9177: call     0x554a50
004a917c: mov      ecx, dword ptr [eax]
004a917e: push     ebx
004a917f: mov      dword ptr [esp + 0x5c], ecx
004a9183: push     0x3f800000
004a9188: mov      edx, dword ptr [eax + 4]
004a918b: push     ebx
004a918c: lea      ecx, [esp + 0x44]
004a9190: mov      dword ptr [esp + 0x68], edx
004a9194: mov      eax, dword ptr [eax + 8]
004a9197: mov      dword ptr [esp + 0x6c], eax
004a919b: call     0x5b2e20
004a91a0: mov      edx, dword ptr [ebp]
004a91a3: lea      eax, [esp + 0x70]
004a91a7: push     eax
004a91a8: mov      ecx, ebp
004a91aa: call     dword ptr [edx + 0x48]
004a91ad: mov      edx, eax
004a91af: mov      eax, dword ptr [edx]
004a91b1: mov      dword ptr [esp + 0x64], eax
004a91b5: mov      ecx, dword ptr [edx + 4]
004a91b8: mov      dword ptr [esp + 0x68], ecx
004a91bc: mov      edx, dword ptr [edx + 8]
004a91bf: mov      dword ptr [esp + 0x2c], eax
004a91c3: mov      eax, dword ptr [ebp + 0x308]
004a91c9: mov      dword ptr [esp + 0x6c], edx
004a91cd: dec      eax
004a91ce: mov      dword ptr [esp + 0x30], ecx
004a91d2: mov      dword ptr [esp + 0x34], edx
004a91d6: je       0x4a9285
004a91dc: dec      eax
004a91dd: je       0x4a927b
004a91e3: mov      al, byte ptr [esp + 0x13]
004a91e7: push     ebx
004a91e8: lea      ecx, [esp + 0x18]
004a91ec: mov      byte ptr [esp + 0x18], al
004a91f0: call     0x4040a0
004a91f5: mov      edi, 0x68d650
004a91fa: or       ecx, 0xffffffff
004a91fd: xor      eax, eax
004a91ff: push     1
004a9201: repne scasb al, byte ptr es:[edi]
004a9203: not      ecx
004a9205: dec      ecx
004a9206: mov      esi, ecx
004a9208: lea      ecx, [esp + 0x18]
004a920c: push     esi
004a920d: mov      dword ptr [esp + 0x2c], esi
004a9211: call     0x401940
004a9216: test     al, al
004a9218: je       0x4a9240
004a921a: mov      edi, dword ptr [esp + 0x18]
004a921e: mov      ecx, esi
004a9220: mov      edx, ecx
004a9222: mov      esi, 0x68d650
004a9227: shr      ecx, 2
004a922a: rep movsd dword ptr es:[edi], dword ptr [esi]
004a922c: mov      ecx, edx
004a922e: mov      eax, edx
004a9230: and      ecx, 3
004a9233: rep movsb byte ptr es:[edi], byte ptr [esi]
004a9235: mov      ecx, dword ptr [esp + 0x18]
004a9239: mov      dword ptr [esp + 0x1c], eax
004a923d: mov      byte ptr [ecx + eax], bl
004a9240: lea      edx, [esp + 0x14]
004a9244: mov      byte ptr [esp + 0x194], 2
004a924c: push     edx
004a924d: push     0x221
004a9252: push     0x695da4
004a9257: push     0x68d2d0
004a925c: call     0x5a07f0
004a9261: call     eax
004a9263: add      esp, 0x10
004a9266: lea      ecx, [esp + 0x14]
004a926a: mov      byte ptr [esp + 0x194], 1
004a9272: push     1
004a9274: call     0x4040a0
004a9279: jmp      0x4a928d
004a927b: mov      dword ptr [esp + 0x28], 2
004a9283: jmp      0x4a928d
004a9285: mov      dword ptr [esp + 0x28], 4
004a928d: mov      eax, dword ptr [esp + 0x28]
004a9291: xor      esi, esi
004a9293: cmp      eax, ebx
004a9295: mov      dword ptr [esp + 0x24], esi
004a9299: jle      0x4a956e
004a929f: fild     dword ptr [esp + 0x28]
004a92a3: fstp     dword ptr [esp + 0x54]
004a92a7: fild     dword ptr [esp + 0x24]
004a92ab: mov      eax, dword ptr [ebp + 0x308]
004a92b1: dec      eax
004a92b2: fmul     dword ptr [0x64b1d8]
004a92b8: fdiv     dword ptr [esp + 0x54]
004a92bc: je       0x4a9382
004a92c2: dec      eax
004a92c3: je       0x4a936a
004a92c9: mov      al, byte ptr [esp + 0x13]
004a92cd: mov      edi, 0x68d650
004a92d2: mov      byte ptr [esp + 0x14], al
004a92d6: or       ecx, 0xffffffff
004a92d9: xor      eax, eax
004a92db: mov      dword ptr [esp + 0x18], ebx
004a92df: repne scasb al, byte ptr es:[edi]
004a92e1: fstp     st(0)
004a92e3: not      ecx
004a92e5: dec      ecx
004a92e6: mov      dword ptr [esp + 0x1c], ebx
004a92ea: push     ecx
004a92eb: push     0x68d650
004a92f0: lea      ecx, [esp + 0x1c]
004a92f4: mov      dword ptr [esp + 0x28], ebx
004a92f8: call     0x4040f0
