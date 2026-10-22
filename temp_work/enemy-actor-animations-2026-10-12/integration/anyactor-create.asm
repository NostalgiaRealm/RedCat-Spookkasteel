004a9300: adc      al, 0xc6
004a9302: test     byte ptr [esp + edx*4], ah
004a9305: add      dword ptr [eax], eax
004a9307: add      byte ptr [ebx], al
004a9309: push     ecx
004a930a: push     0x23d
004a930f: push     0x695da4
004a9314: push     0x68d2d0
004a9319: call     0x5a07f0
004a931e: call     eax
004a9320: mov      eax, dword ptr [esp + 0x28]
004a9324: add      esp, 0x10
004a9327: cmp      eax, ebx
004a9329: mov      byte ptr [esp + 0x194], 1
004a9331: je       0x4a935c
004a9333: lea      ecx, [eax - 1]
004a9336: mov      al, byte ptr [eax - 1]
004a9339: cmp      al, bl
004a933b: je       0x4a9353
004a933d: cmp      al, 0xff
004a933f: je       0x4a9353
004a9341: dec      al
004a9343: mov      byte ptr [ecx], al
004a9345: mov      dword ptr [esp + 0x18], ebx
004a9349: mov      dword ptr [esp + 0x1c], ebx
004a934d: mov      dword ptr [esp + 0x20], ebx
004a9351: jmp      0x4a9398
004a9353: push     ecx
004a9354: call     0x5fe5f0
004a9359: add      esp, 4
004a935c: mov      dword ptr [esp + 0x18], ebx
004a9360: mov      dword ptr [esp + 0x1c], ebx
004a9364: mov      dword ptr [esp + 0x20], ebx
004a9368: jmp      0x4a9398
004a936a: fcos     
004a936c: mov      dword ptr [esp + 0x44], 0
004a9374: mov      dword ptr [esp + 0x4c], 0
004a937c: fstp     dword ptr [esp + 0x48]
004a9380: jmp      0x4a9398
004a9382: fld      st(0)
004a9384: fsin     
004a9386: mov      dword ptr [esp + 0x48], 0
004a938e: fstp     dword ptr [esp + 0x44]
004a9392: fcos     
004a9394: fstp     dword ptr [esp + 0x4c]
004a9398: mov      edx, dword ptr [esp + 0x19c]
004a939f: push     ecx
004a93a0: mov      eax, esp
004a93a2: mov      dword ptr [esp + 0x28], esp
004a93a6: mov      dword ptr [eax], edx
004a93a8: mov      eax, dword ptr [esp + 0x1a0]
004a93af: cmp      eax, ebx
004a93b1: je       0x4a93b6
004a93b3: inc      dword ptr [eax + 0x14]
004a93b6: lea      ecx, [esp + 0x98]
004a93bd: call     0x565c30
004a93c2: lea      eax, [esp + 0x88]
004a93c9: lea      edx, [esp + 0x44]
004a93cd: push     eax
004a93ce: push     0x45480000
004a93d3: lea      ecx, [esp + 0x6c]
004a93d7: mov      byte ptr [esp + 0x19c], 4
004a93df: mov      byte ptr [esp + 0xb1], 1
004a93e7: mov      byte ptr [esp + 0xb2], 1
004a93ef: mov      byte ptr [esp + 0xb3], 1
004a93f7: mov      byte ptr [esp + 0xb4], 1
004a93ff: mov      byte ptr [esp + 0xb5], 1
004a9407: call     0x5b3020
004a940c: lea      ecx, [esp + 0x44]
004a9410: call     0x5b3080
004a9415: lea      ecx, [esp + 0x7c]
004a9419: lea      edx, [esp + 0x44]
004a941d: push     ecx
004a941e: push     0x3f800000
004a9423: lea      ecx, [esp + 0x6c]
004a9427: call     0x5b3020
004a942c: lea      edx, [esp + 0x88]
004a9433: lea      eax, [esp + 0x7c]
004a9437: push     edx
004a9438: push     eax
004a9439: lea      ecx, [esp + 0x9c]
004a9440: call     0x565e10
004a9445: test     al, al
004a9447: je       0x4a94c7
004a9449: lea      ecx, [esp + 0x70]
004a944d: lea      edx, [esp + 0x64]
004a9451: push     ecx
004a9452: lea      ecx, [esp + 0x128]
004a9459: call     0x5b2fe0
004a945e: lea      ecx, [esp + 0x70]
004a9462: call     0x5b2fd0
004a9467: cmp      byte ptr [esp + 0x13], bl
004a946b: je       0x4a9478
004a946d: fcom     dword ptr [esp + 0x50]
004a9471: fnstsw   ax
004a9473: test     ah, 1
004a9476: je       0x4a94c5
004a9478: mov      edx, dword ptr [esp + 0x110]
004a947f: mov      eax, dword ptr [esp + 0x114]
004a9486: mov      ecx, dword ptr [esp + 0x118]
004a948d: mov      dword ptr [esp + 0x38], edx
004a9491: mov      edx, dword ptr [esp + 0x124]
004a9498: mov      dword ptr [esp + 0x3c], eax
004a949c: mov      eax, dword ptr [esp + 0x128]
004a94a3: mov      dword ptr [esp + 0x40], ecx
004a94a7: mov      ecx, dword ptr [esp + 0x12c]
004a94ae: mov      dword ptr [esp + 0x2c], edx
004a94b2: fstp     dword ptr [esp + 0x50]
004a94b6: mov      dword ptr [esp + 0x30], eax
004a94ba: mov      dword ptr [esp + 0x34], ecx
004a94be: mov      byte ptr [esp + 0x13], 1
004a94c3: jmp      0x4a94c7
004a94c5: fstp     st(0)
004a94c7: mov      edx, dword ptr [esp + 0x164]
004a94ce: mov      eax, dword ptr [esp + 0x160]
004a94d5: push     edx
004a94d6: push     eax
004a94d7: lea      ecx, [esp + 0x164]
004a94de: mov      byte ptr [esp + 0x19c], 7
004a94e6: call     0x587d50
004a94eb: mov      ecx, dword ptr [esp + 0x160]
004a94f2: push     ecx
004a94f3: call     0x5fe5f0
004a94f8: add      esp, 4
004a94fb: lea      ecx, [esp + 0x14c]
004a9502: mov      dword ptr [esp + 0x160], ebx
004a9509: mov      dword ptr [esp + 0x164], ebx
004a9510: mov      dword ptr [esp + 0x168], ebx
004a9517: mov      byte ptr [esp + 0x194], 6
004a951f: call     0x514430
004a9524: mov      ecx, dword ptr [esp + 0xb4]
004a952b: mov      byte ptr [esp + 0x194], 5
004a9533: cmp      ecx, ebx
004a9535: je       0x4a9543
004a9537: call     0x4098d0
004a953c: mov      dword ptr [esp + 0xb4], ebx
004a9543: lea      ecx, [esp + 0x94]
004a954a: mov      byte ptr [esp + 0x194], 1
004a9552: call     0x5ab4d0
004a9557: mov      eax, dword ptr [esp + 0x28]
004a955b: inc      esi
004a955c: cmp      esi, eax
004a955e: mov      dword ptr [esp + 0x24], esi
004a9562: jl       0x4a92a7
004a9568: cmp      byte ptr [esp + 0x13], bl
004a956c: jne      0x4a95e1
004a956e: mov      edi, 0x695ef4
004a9573: or       ecx, 0xffffffff
004a9576: xor      eax, eax
004a9578: mov      dl, byte ptr [esp + 0x13]
004a957c: repne scasb al, byte ptr es:[edi]
004a957e: not      ecx
004a9580: dec      ecx
004a9581: mov      byte ptr [esp + 0x14], dl
004a9585: push     ecx
004a9586: push     0x695ef4
004a958b: lea      ecx, [esp + 0x1c]
004a958f: mov      dword ptr [esp + 0x20], ebx
004a9593: mov      dword ptr [esp + 0x24], ebx
004a9597: mov      dword ptr [esp + 0x28], ebx
004a959b: call     0x4040f0
004a95a0: lea      eax, [esp + 0x14]
004a95a4: mov      ecx, ebp
004a95a6: push     eax
004a95a7: mov      byte ptr [esp + 0x198], 8
004a95af: call     0x5035a0
004a95b4: mov      eax, dword ptr [esp + 0x18]
004a95b8: mov      byte ptr [esp + 0x194], 1
004a95c0: cmp      eax, ebx
004a95c2: je       0x4a95e1
004a95c4: lea      ecx, [eax - 1]
004a95c7: mov      al, byte ptr [eax - 1]
004a95ca: cmp      al, bl
004a95cc: je       0x4a95d8
004a95ce: cmp      al, 0xff
004a95d0: je       0x4a95d8
004a95d2: dec      al
004a95d4: mov      byte ptr [ecx], al
004a95d6: jmp      0x4a95e1
004a95d8: push     ecx
004a95d9: call     0x5fe5f0
004a95de: add      esp, 4
004a95e1: lea      ecx, [esp + 0x38]
004a95e5: call     0x5b2f20
004a95ea: mov      eax, dword ptr [ebp + 0x308]
004a95f0: dec      eax
004a95f1: fstp     st(0)
004a95f3: je       0x4a96bc
004a95f9: dec      eax
004a95fa: je       0x4a969f
004a9600: mov      cl, byte ptr [esp + 0x13]
004a9604: mov      edi, 0x68d650
004a9609: mov      byte ptr [esp + 0x14], cl
004a960d: or       ecx, 0xffffffff
004a9610: xor      eax, eax
004a9612: mov      dword ptr [esp + 0x18], ebx
004a9616: repne scasb al, byte ptr es:[edi]
004a9618: not      ecx
004a961a: dec      ecx
004a961b: mov      dword ptr [esp + 0x1c], ebx
004a961f: push     ecx
004a9620: push     0x68d650
004a9625: lea      ecx, [esp + 0x1c]
004a9629: mov      dword ptr [esp + 0x28], ebx
004a962d: call     0x4040f0
004a9632: lea      edx, [esp + 0x14]
004a9636: mov      byte ptr [esp + 0x194], 9
004a963e: push     edx
004a963f: push     0x27f
004a9644: push     0x695da4
004a9649: push     0x68d2d0
004a964e: call     0x5a07f0
004a9653: call     eax
004a9655: mov      eax, dword ptr [esp + 0x28]
004a9659: add      esp, 0x10
004a965c: cmp      eax, ebx
004a965e: mov      byte ptr [esp + 0x194], 1
004a9666: je       0x4a9691
004a9668: lea      ecx, [eax - 1]
004a966b: mov      al, byte ptr [eax - 1]
004a966e: cmp      al, bl
004a9670: je       0x4a9688
004a9672: cmp      al, 0xff
004a9674: je       0x4a9688
004a9676: dec      al
004a9678: mov      byte ptr [ecx], al
004a967a: mov      dword ptr [esp + 0x18], ebx
004a967e: mov      dword ptr [esp + 0x1c], ebx
004a9682: mov      dword ptr [esp + 0x20], ebx
004a9686: jmp      0x4a96fc
004a9688: push     ecx
004a9689: call     0x5fe5f0
004a968e: add      esp, 4
004a9691: mov      dword ptr [esp + 0x18], ebx
004a9695: mov      dword ptr [esp + 0x1c], ebx
004a9699: mov      dword ptr [esp + 0x20], ebx
004a969d: jmp      0x4a96fc
004a969f: fld      dword ptr [esp + 0x3c]
004a96a3: fcomp    dword ptr [0x64a450]
004a96a9: fnstsw   ax
004a96ab: test     ah, 1
004a96ae: je       0x4a96fc
004a96b0: mov      ecx, dword ptr [esp + 0x5c]
004a96b4: lea      eax, [esp + 0x2c]
004a96b8: push     eax
004a96b9: push     ecx
004a96ba: jmp      0x4a96ef
004a96bc: fld      dword ptr [esp + 0x38]
004a96c0: fabs     
004a96c2: fld      dword ptr [esp + 0x40]
004a96c6: fabs     
004a96c8: fcompp   
004a96ca: fnstsw   ax
004a96cc: test     ah, 1
004a96cf: je       0x4a96dc
004a96d1: fld      dword ptr [esp + 0x58]
004a96d5: lea      edx, [esp + 0x2c]
004a96d9: push     edx
004a96da: jmp      0x4a96e5
004a96dc: fld      dword ptr [esp + 0x60]
004a96e0: lea      eax, [esp + 0x2c]
004a96e4: push     eax
004a96e5: fmul     qword ptr [0x64c5a0]
004a96eb: push     ecx
004a96ec: fstp     dword ptr [esp]
004a96ef: lea      edx, [esp + 0x40]
004a96f3: lea      ecx, [esp + 0x34]
004a96f7: call     0x5b3020
004a96fc: mov      edx, dword ptr [ebp]
004a96ff: lea      eax, [esp + 0x2c]
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
