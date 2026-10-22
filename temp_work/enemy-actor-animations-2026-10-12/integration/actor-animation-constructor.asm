004a0080: mov      edx, dword ptr [esp + 0x14]
004a0084: mov      ecx, dword ptr [esp + 0x48]
004a0088: lea      eax, [edi + edx]
004a008b: cdq      
004a008c: sub      eax, edx
004a008e: mov      esi, eax
004a0090: mov      eax, dword ptr [ebp + 4]
004a0093: sar      esi, 1
004a0095: lea      eax, [eax + esi*4]
004a0098: push     eax
004a0099: push     ecx
004a009a: call     dword ptr [ebp + 0x14]
004a009d: add      esp, 8
004a00a0: cmp      eax, 1
004a00a3: je       0x4a0122
004a00a5: cmp      eax, ebx
004a00a7: jne      0x4a00b0
004a00a9: inc      esi
004a00aa: mov      dword ptr [esp + 0x14], esi
004a00ae: jmp      0x4a00b3
004a00b0: lea      edi, [esi - 1]
004a00b3: cmp      dword ptr [esp + 0x14], edi
004a00b7: jle      0x4a0080
004a00b9: mov      esi, dword ptr [esp + 0x18]
004a00bd: mov      edx, dword ptr [esp + 0x48]
004a00c1: lea      eax, [esp + 0x48]
004a00c5: push     edx
004a00c6: push     eax
004a00c7: mov      ecx, esi
004a00c9: call     0x49f690
004a00ce: mov      esi, eax
004a00d0: mov      eax, dword ptr [esp + 0x10]
004a00d4: mov      ecx, dword ptr [esi]
004a00d6: cmp      eax, ecx
004a00d8: mov      byte ptr [esp + 0x3c], 4
004a00dd: je       0x4a010e
004a00df: test     eax, eax
004a00e1: je       0x4a00fb
004a00e3: mov      edi, dword ptr [eax + 0x14]
004a00e6: mov      ecx, eax
004a00e8: add      eax, 0x14
004a00eb: dec      edi
004a00ec: mov      edx, edi
004a00ee: test     edx, edx
004a00f0: mov      dword ptr [eax], edi
004a00f2: jne      0x4a00fb
004a00f4: push     0
004a00f6: call     0x5abfc0
004a00fb: mov      ecx, dword ptr [esi]
004a00fd: mov      dword ptr [esp + 0x10], ecx
004a0101: lea      ecx, [esp + 0x10]
004a0105: call     0x5844b0
004a010a: mov      eax, dword ptr [esp + 0x10]
004a010e: mov      ecx, dword ptr [esp + 0x48]
004a0112: mov      byte ptr [esp + 0x3c], 2
004a0117: test     ecx, ecx
004a0119: je       0x4a0162
004a011b: call     0x4098d0
004a0120: jmp      0x4a015e
004a0122: mov      edx, dword ptr [esp + 0x18]
004a0126: mov      eax, dword ptr [esp + 0x10]
004a012a: mov      edi, dword ptr [edx + 0x18]
004a012d: cmp      eax, dword ptr [edi + esi*4]
004a0130: je       0x4a0162
004a0132: test     eax, eax
004a0134: je       0x4a014e
004a0136: mov      ebx, dword ptr [eax + 0x14]
004a0139: mov      ecx, eax
004a013b: add      eax, 0x14
004a013e: dec      ebx
004a013f: mov      edx, ebx
004a0141: test     edx, edx
004a0143: mov      dword ptr [eax], ebx
004a0145: jne      0x4a014e
004a0147: push     0
004a0149: call     0x5abfc0
004a014e: mov      eax, dword ptr [edi + esi*4]
004a0151: lea      ecx, [esp + 0x10]
004a0155: mov      dword ptr [esp + 0x10], eax
004a0159: call     0x5844b0
004a015e: mov      eax, dword ptr [esp + 0x10]
004a0162: mov      esi, dword ptr [esp + 0x44]
004a0166: test     eax, eax
004a0168: mov      dword ptr [esi], eax
004a016a: je       0x4a0177
004a016c: mov      ecx, dword ptr [eax + 0x14]
004a016f: inc      ecx
004a0170: mov      dword ptr [eax + 0x14], ecx
004a0173: mov      eax, dword ptr [esp + 0x10]
004a0177: mov      dword ptr [esp + 0x1c], 1
004a017f: test     eax, eax
004a0181: mov      byte ptr [esp + 0x3c], 1
004a0186: je       0x4a01a8
004a0188: mov      edi, dword ptr [eax + 0x14]
004a018b: mov      ecx, eax
004a018d: add      eax, 0x14
004a0190: dec      edi
004a0191: mov      edx, edi
004a0193: test     edx, edx
004a0195: mov      dword ptr [eax], edi
004a0197: jne      0x4a01a0
004a0199: push     0
004a019b: call     0x5abfc0
004a01a0: mov      dword ptr [esp + 0x10], 0
004a01a8: lea      ecx, [esp + 0x20]
004a01ac: mov      byte ptr [esp + 0x3c], 0
004a01b1: call     0x5ae770
004a01b6: mov      ecx, dword ptr [esp + 0x34]
004a01ba: mov      eax, esi
004a01bc: pop      edi
004a01bd: pop      esi
004a01be: pop      ebp
004a01bf: pop      ebx
004a01c0: mov      dword ptr fs:[0], ecx
004a01c7: add      esp, 0x30
004a01ca: ret      8
004a01cd: nop      
004a01ce: nop      
004a01cf: nop      
004a01d0: mov      edx, dword ptr [ecx + 0x18]
004a01d3: test     edx, edx
004a01d5: jne      0x4a01da
004a01d7: xor      eax, eax
004a01d9: ret      
004a01da: mov      eax, dword ptr [ecx + 0x1c]
004a01dd: sub      eax, edx
004a01df: sar      eax, 2
004a01e2: ret      
004a01e3: nop      
004a01e4: nop      
004a01e5: nop      
004a01e6: nop      
004a01e7: nop      
004a01e8: nop      
004a01e9: nop      
004a01ea: nop      
004a01eb: nop      
004a01ec: nop      
004a01ed: nop      
004a01ee: nop      
004a01ef: nop      
004a01f0: push     ecx
004a01f1: mov      eax, dword ptr [ecx + 0x18]
004a01f4: mov      ecx, dword ptr [esp + 0xc]
004a01f8: mov      dword ptr [esp], 0
004a0200: mov      ecx, dword ptr [eax + ecx*4]
004a0203: mov      eax, dword ptr [esp + 8]
004a0207: test     ecx, ecx
004a0209: mov      dword ptr [eax], ecx
004a020b: je       0x4a0210
004a020d: inc      dword ptr [ecx + 0x14]
004a0210: pop      ecx
004a0211: ret      8
004a0214: nop      
004a0215: nop      
004a0216: nop      
004a0217: nop      
004a0218: nop      
004a0219: nop      
004a021a: nop      
004a021b: nop      
004a021c: nop      
004a021d: nop      
004a021e: nop      
004a021f: nop      
004a0220: push     -1
004a0222: push     0x62ce48
004a0227: mov      eax, dword ptr fs:[0]
004a022d: push     eax
004a022e: mov      dword ptr fs:[0], esp
004a0235: sub      esp, 8
004a0238: push     ebx
004a0239: push     ebp
004a023a: push     esi
004a023b: push     edi
004a023c: mov      edi, ecx
004a023e: mov      dword ptr [esp + 0x14], edi
004a0242: xor      ebp, ebp
004a0244: push     0x2d
004a0246: push     0x690798
004a024b: lea      ecx, [esp + 0x18]
004a024f: mov      dword ptr [esp + 0x28], ebp
004a0253: call     0x5ae5f0
004a0258: lea      ecx, [esp + 0x10]
004a025c: call     0x5ae770
004a0261: mov      ebx, dword ptr [edi + 8]
004a0264: mov      esi, dword ptr [edi + 4]
004a0267: cmp      esi, ebx
004a0269: mov      dword ptr [esp + 0x20], 0xffffffff
004a0271: je       0x4a0291
004a0273: mov      ecx, dword ptr [esi]
004a0275: cmp      ecx, ebp
004a0277: je       0x4a028a
004a0279: mov      eax, dword ptr [ecx + 0x14]
004a027c: dec      eax
004a027d: mov      dword ptr [ecx + 0x14], eax
004a0280: jne      0x4a0288
004a0282: push     ebp
004a0283: call     0x5abfc0
004a0288: mov      dword ptr [esi], ebp
004a028a: add      esi, 4
004a028d: cmp      esi, ebx
004a028f: jne      0x4a0273
004a0291: mov      eax, dword ptr [edi + 4]
004a0294: push     eax
004a0295: call     0x5fe5f0
004a029a: mov      ecx, dword ptr [esp + 0x1c]
004a029e: add      esp, 4
004a02a1: mov      dword ptr [edi + 4], ebp
004a02a4: mov      dword ptr [edi + 8], ebp
004a02a7: mov      dword ptr [edi + 0xc], ebp
004a02aa: pop      edi
004a02ab: pop      esi
004a02ac: pop      ebp
004a02ad: pop      ebx
004a02ae: mov      dword ptr fs:[0], ecx
004a02b5: add      esp, 0x14
004a02b8: ret      
004a02b9: nop      
004a02ba: nop      
004a02bb: nop      
004a02bc: nop      
004a02bd: nop      
004a02be: nop      
004a02bf: nop      
004a02c0: mov      eax, dword ptr fs:[0]
004a02c6: push     -1
004a02c8: push     0x62ce68
004a02cd: push     eax
004a02ce: mov      dword ptr fs:[0], esp
004a02d5: sub      esp, 0x14
004a02d8: push     ebx
004a02d9: push     ebp
004a02da: mov      ebp, ecx
004a02dc: push     esi
004a02dd: xor      esi, esi
004a02df: push     edi
004a02e0: cmp      dword ptr [ebp + 0x14], esi
004a02e3: jne      0x4a0376
004a02e9: mov      al, byte ptr [esp + 0x38]
004a02ed: mov      edi, 0x6b3f70
004a02f2: mov      byte ptr [esp + 0x14], al
004a02f6: or       ecx, 0xffffffff
004a02f9: xor      eax, eax
004a02fb: mov      dword ptr [esp + 0x18], esi
004a02ff: repne scasb al, byte ptr es:[edi]
004a0301: not      ecx
004a0303: dec      ecx
004a0304: mov      dword ptr [esp + 0x1c], esi
004a0308: push     ecx
004a0309: push     0x6b3f70
004a030e: lea      ecx, [esp + 0x1c]
004a0312: mov      dword ptr [esp + 0x28], esi
004a0316: call     0x4040f0
004a031b: lea      ecx, [esp + 0x14]
004a031f: mov      dword ptr [esp + 0x2c], esi
004a0323: push     ecx
004a0324: push     0xb9
004a0329: push     0x690798
004a032e: push     0x69522c
004a0333: call     0x5a07f0
004a0338: call     eax
004a033a: mov      eax, dword ptr [esp + 0x28]
004a033e: add      esp, 0x10
004a0341: cmp      eax, esi
004a0343: mov      dword ptr [esp + 0x2c], 0xffffffff
004a034b: je       0x4a036a
004a034d: lea      ecx, [eax - 1]
004a0350: mov      al, byte ptr [eax - 1]
004a0353: test     al, al
004a0355: je       0x4a0361
004a0357: cmp      al, 0xff
004a0359: je       0x4a0361
004a035b: dec      al
004a035d: mov      byte ptr [ecx], al
004a035f: jmp      0x4a036a
004a0361: push     ecx
004a0362: call     0x5fe5f0
004a0367: add      esp, 4
004a036a: mov      dword ptr [esp + 0x18], esi
004a036e: mov      dword ptr [esp + 0x1c], esi
004a0372: mov      dword ptr [esp + 0x20], esi
004a0376: mov      eax, dword ptr [ebp + 4]
004a0379: cmp      eax, esi
004a037b: je       0x4a0387
004a037d: mov      ebx, dword ptr [ebp + 8]
004a0380: sub      ebx, eax
004a0382: sar      ebx, 2
004a0385: jne      0x4a0391
004a0387: mov      edx, dword ptr [esp + 0x38]
004a038b: xor      eax, eax
004a038d: mov      byte ptr [edx], al
004a038f: jmp      0x4a0408
004a0391: mov      edi, dword ptr [ebp + 0x10]
004a0394: mov      eax, dword ptr [esp + 0x38]
004a0398: neg      edi
004a039a: sbb      edi, edi
004a039c: mov      dword ptr [esp + 0x10], esi
004a03a0: and      edi, 0xfffffffe
004a03a3: mov      byte ptr [eax], 0
004a03a6: add      edi, 2
004a03a9: dec      ebx
004a03aa: mov      ecx, dword ptr [esp + 0x10]
004a03ae: lea      eax, [ebx + ecx]
004a03b1: cdq      
004a03b2: sub      eax, edx
004a03b4: mov      esi, eax
004a03b6: mov      eax, dword ptr [ebp + 4]
004a03b9: sar      esi, 1
004a03bb: lea      edx, [eax + esi*4]
004a03be: mov      eax, dword ptr [esp + 0x34]
004a03c2: push     edx
004a03c3: push     eax
004a03c4: call     dword ptr [ebp + 0x14]
004a03c7: add      esp, 8
004a03ca: cmp      eax, 1
004a03cd: jne      0x4a03d7
004a03cf: mov      ecx, dword ptr [esp + 0x38]
004a03d3: mov      byte ptr [ecx], al
004a03d5: jmp      0x4a03e7
004a03d7: cmp      eax, edi
004a03d9: jne      0x4a03e4
004a03db: lea      edx, [esi + 1]
004a03de: mov      dword ptr [esp + 0x10], edx
004a03e2: jmp      0x4a03e7
004a03e4: lea      ebx, [esi - 1]
004a03e7: mov      ecx, dword ptr [esp + 0x38]
004a03eb: cmp      byte ptr [ecx], 0
004a03ee: jne      0x4a03f6
004a03f0: cmp      dword ptr [esp + 0x10], ebx
004a03f4: jle      0x4a03aa
004a03f6: mov      edx, dword ptr [esp + 0x38]
004a03fa: cmp      byte ptr [edx], 0
004a03fd: jne      0x4a0406
004a03ff: cmp      eax, edi
004a0401: lea      eax, [esi + 1]
004a0404: je       0x4a0408
004a0406: mov      eax, esi
004a0408: mov      ecx, dword ptr [esp + 0x24]
004a040c: pop      edi
004a040d: pop      esi
004a040e: pop      ebp
004a040f: pop      ebx
004a0410: mov      dword ptr fs:[0], ecx
004a0417: add      esp, 0x20
004a041a: ret      8
004a041d: nop      
004a041e: nop      
004a041f: nop      
004a0420: push     ebx
004a0421: mov      ebx, dword ptr [esp + 0xc]
004a0425: push     esi
004a0426: mov      esi, dword ptr [esp + 0xc]
004a042a: cmp      esi, ebx
004a042c: je       0x4a0462
004a042e: push     edi
004a042f: mov      edi, dword ptr [esp + 0x18]
004a0433: mov      ecx, dword ptr [esi]
004a0435: mov      eax, dword ptr [edi]
004a0437: cmp      ecx, eax
004a0439: je       0x4a045a
004a043b: test     ecx, ecx
004a043d: je       0x4a044f
004a043f: mov      eax, dword ptr [ecx + 0x14]
004a0442: dec      eax
004a0443: mov      dword ptr [ecx + 0x14], eax
004a0446: jne      0x4a044f
004a0448: push     0
004a044a: call     0x5abfc0
004a044f: mov      eax, dword ptr [edi]
004a0451: test     eax, eax
004a0453: mov      dword ptr [esi], eax
004a0455: je       0x4a045a
004a0457: inc      dword ptr [eax + 0x14]
004a045a: add      esi, 4
004a045d: cmp      esi, ebx
004a045f: jne      0x4a0433
004a0461: pop      edi
004a0462: pop      esi
004a0463: pop      ebx
004a0464: ret      
004a0465: nop      
004a0466: nop      
004a0467: nop      
004a0468: nop      
004a0469: nop      
004a046a: nop      
004a046b: nop      
004a046c: nop      
004a046d: nop      
004a046e: nop      
004a046f: nop      
004a0470: mov      cl, byte ptr [0x7103a0]
004a0476: mov      al, 1
004a0478: test     al, cl
004a047a: jne      0x4a0484
004a047c: or       cl, al
004a047e: mov      byte ptr [0x7103a0], cl
004a0484: jmp      0x4a0490
004a0489: nop      
004a048a: nop      
004a048b: nop      
004a048c: nop      
004a048d: nop      
004a048e: nop      
004a048f: nop      
004a0490: push     0x401ba0
004a0495: call     0x60a57b
004a049a: pop      ecx
004a049b: ret      
004a049c: nop      
004a049d: nop      
004a049e: nop      
004a049f: nop      
004a04a0: push     -1
004a04a2: push     0x62ce88
004a04a7: mov      eax, dword ptr fs:[0]
004a04ad: push     eax
004a04ae: mov      dword ptr fs:[0], esp
004a04b5: push     ecx
004a04b6: push     ebx
004a04b7: push     ebp
004a04b8: push     esi
004a04b9: mov      ebp, ecx
004a04bb: push     edi
004a04bc: mov      dword ptr [esp + 0x10], ebp
004a04c0: call     0x5ab4a0
004a04c5: mov      eax, dword ptr [esp + 0x24]
004a04c9: mov      cl, byte ptr [esp + 0x24]
004a04cd: lea      ebx, [ebp + 0x18]
004a04d0: mov      dword ptr [ebp + 0x14], eax
004a04d3: xor      esi, esi
004a04d5: mov      edi, 0x6b3f70
004a04da: mov      byte ptr [ebx], cl
004a04dc: or       ecx, 0xffffffff
004a04df: xor      eax, eax
004a04e1: mov      dword ptr [ebx + 4], esi
004a04e4: mov      dword ptr [ebx + 8], esi
004a04e7: mov      dword ptr [ebx + 0xc], esi
004a04ea: repne scasb al, byte ptr es:[edi]
004a04ec: not      ecx
004a04ee: dec      ecx
004a04ef: mov      dword ptr [esp + 0x1c], esi
004a04f3: mov      edi, ecx
004a04f5: cmp      edi, -3
004a04f8: mov      dword ptr [esp + 0x24], edi
004a04fc: jbe      0x4a0503
004a04fe: call     0x5fe5fb
004a0503: mov      ecx, dword ptr [ebx + 4]
004a0506: cmp      ecx, esi
004a0508: je       0x4a0528
004a050a: mov      al, byte ptr [ecx - 1]
004a050d: test     al, al
004a050f: je       0x4a0528
004a0511: cmp      al, 0xff
004a0513: je       0x4a0528
004a0515: cmp      edi, esi
004a0517: jne      0x4a054c
004a0519: dec      al
004a051b: push     esi
004a051c: mov      byte ptr [ecx - 1], al
004a051f: mov      ecx, ebx
004a0521: call     0x4040a0
004a0526: jmp      0x4a057c
004a0528: cmp      edi, esi
004a052a: jne      0x4a0537
004a052c: push     1
004a052e: mov      ecx, ebx
004a0530: call     0x4040a0
004a0535: jmp      0x4a057c
004a0537: mov      eax, dword ptr [ebx + 0xc]
004a053a: cmp      eax, 0x1f
004a053d: ja       0x4a0543
004a053f: cmp      eax, edi
004a0541: jae      0x4a0554
004a0543: push     1
004a0545: mov      ecx, ebx
004a0547: call     0x4040a0
004a054c: push     edi
004a054d: mov      ecx, ebx
004a054f: call     0x401a60
004a0554: mov      ecx, edi
004a0556: mov      edi, dword ptr [ebx + 4]
004a0559: mov      edx, ecx
004a055b: mov      esi, 0x6b3f70
004a0560: shr      ecx, 2
004a0563: rep movsd dword ptr es:[edi], dword ptr [esi]
004a0565: mov      eax, dword ptr [esp + 0x24]
004a0569: mov      ecx, edx
004a056b: and      ecx, 3
004a056e: rep movsb byte ptr es:[edi], byte ptr [esi]
004a0570: mov      ecx, dword ptr [ebx + 4]
004a0573: mov      dword ptr [ebx + 8], eax
004a0576: xor      esi, esi
004a0578: mov      byte ptr [ecx + eax], 0
004a057c: or       eax, 0xffffffff
004a057f: mov      ecx, 0x3f800000
004a0584: mov      dword ptr [ebp + 0x28], esi
004a0587: mov      dword ptr [ebp + 0x2c], eax
004a058a: mov      dword ptr [ebp + 0x30], eax
004a058d: mov      dword ptr [ebp + 0x34], eax
004a0590: mov      dword ptr [ebp + 0x38], esi
004a0593: mov      dword ptr [ebp + 0x40], ecx
004a0596: mov      dword ptr [ebp + 0x48], ecx
004a0599: mov      ecx, dword ptr [esp + 0x14]
004a059d: mov      dword ptr [ebp + 0x50], esi
004a05a0: mov      dword ptr [ebp + 0x54], eax
004a05a3: mov      dword ptr [ebp + 0x58], esi
004a05a6: pop      edi
004a05a7: mov      byte ptr [ebp + 0x3c], 1
004a05ab: mov      byte ptr [ebp + 0x3d], 0
004a05af: mov      byte ptr [ebp + 0x44], 0
004a05b3: mov      byte ptr [ebp + 0x4c], 0
004a05b7: mov      dword ptr [ebp], 0x64e860
004a05be: mov      eax, ebp
004a05c0: pop      esi
004a05c1: pop      ebp
004a05c2: pop      ebx
004a05c3: mov      dword ptr fs:[0], ecx
004a05ca: add      esp, 0x10
004a05cd: ret      4
004a05d0: push     esi
004a05d1: mov      esi, ecx
004a05d3: call     0x4a05f0
004a05d8: test     byte ptr [esp + 8], 1
004a05dd: je       0x4a05e8
004a05df: push     esi
004a05e0: call     0x5fe5f0
004a05e5: add      esp, 4
004a05e8: mov      eax, esi
004a05ea: pop      esi
004a05eb: ret      4
004a05ee: nop      
004a05ef: nop      
004a05f0: push     esi
004a05f1: mov      esi, ecx
004a05f3: mov      dword ptr [esi], 0x64e860
004a05f9: mov      eax, dword ptr [esi + 0x1c]
004a05fc: test     eax, eax
004a05fe: je       0x4a061d
004a0600: lea      ecx, [eax - 1]
004a0603: mov      al, byte ptr [eax - 1]
004a0606: test     al, al
004a0608: je       0x4a0614
004a060a: cmp      al, 0xff
004a060c: je       0x4a0614
004a060e: dec      al
004a0610: mov      byte ptr [ecx], al
004a0612: jmp      0x4a061d
004a0614: push     ecx
004a0615: call     0x5fe5f0
004a061a: add      esp, 4
004a061d: mov      ecx, esi
004a061f: mov      dword ptr [esi + 0x1c], 0
004a0626: mov      dword ptr [esi + 0x20], 0
004a062d: mov      dword ptr [esi + 0x24], 0
004a0634: call     0x5ab4d0
004a0639: pop      esi
004a063a: ret      
004a063b: nop      
004a063c: nop      
004a063d: nop      
004a063e: nop      
004a063f: nop      
004a0640: mov      eax, dword ptr [ecx + 0x38]
004a0643: test     eax, eax
004a0645: je       0x4a0654
004a0647: mov      al, byte ptr [ecx + 0x44]
004a064a: test     al, al
004a064c: jne      0x4a0654
004a064e: mov      eax, 1
004a0653: ret      
004a0654: xor      eax, eax
004a0656: ret      
004a0657: nop      
004a0658: nop      
004a0659: nop      
004a065a: nop      
004a065b: nop      
004a065c: nop      
004a065d: nop      
004a065e: nop      
004a065f: nop      
004a0660: mov      eax, dword ptr [esp + 8]
004a0664: push     esi
004a0665: mov      esi, ecx
004a0667: push     eax
004a0668: call     0x4a0bb0
