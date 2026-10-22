00404550: mov       eax, dword ptr [esp + 4]
00404554: push      esi
00404555: mov       esi, ecx
00404557: push      eax
00404558: call      0x402db0
0040455d: mov       edx, dword ptr [esi]
0040455f: mov       ecx, esi
00404561: call      dword ptr [edx + 0x14]
00404564: pop       esi
00404565: ret       4
00404568: nop       
00404569: nop       
0040456a: nop       
0040456b: nop       
0040456c: nop       
0040456d: nop       
0040456e: nop       
0040456f: nop       
00404570: mov       eax, dword ptr [esp + 8]
00404574: mov       edx, dword ptr [esp + 4]
00404578: push      eax
00404579: push      edx
0040457a: call      0x4030b0
0040457f: ret       8
00404582: nop       
00404583: nop       
00404584: nop       
00404585: nop       
00404586: nop       
00404587: nop       
00404588: nop       
00404589: nop       
0040458a: nop       
0040458b: nop       
0040458c: nop       
0040458d: nop       
0040458e: nop       
0040458f: nop       
00404590: push      -1
00404592: push      0x61fcfb
00404597: mov       eax, dword ptr fs:[0]
0040459d: push      eax
0040459e: mov       dword ptr fs:[0], esp
004045a5: push      ecx
004045a6: push      esi
004045a7: mov       esi, ecx
004045a9: push      0x30
004045ab: call      0x60a0b5
004045b0: add       esp, 4
004045b3: mov       dword ptr [esp + 4], eax
004045b7: test      eax, eax
004045b9: mov       dword ptr [esp + 0x10], 0
004045c1: je        0x4045d0
004045c3: mov       ecx, dword ptr [esi + 0x30]
004045c6: push      ecx
004045c7: mov       ecx, eax
004045c9: call      0x404600
004045ce: jmp       0x4045d2
004045d0: xor       eax, eax
004045d2: push      eax
004045d3: push      2
004045d5: mov       ecx, esi
004045d7: mov       dword ptr [esp + 0x18], 0xffffffff
004045df: call      0x402a10
004045e4: mov       ecx, dword ptr [esp + 8]
004045e8: pop       esi
004045e9: mov       dword ptr fs:[0], ecx
004045f0: add       esp, 0x10
004045f3: ret       
004045f4: nop       
004045f5: nop       
004045f6: nop       
004045f7: nop       
004045f8: nop       
004045f9: nop       
004045fa: nop       
004045fb: nop       
004045fc: nop       
004045fd: nop       
004045fe: nop       
004045ff: nop       
00404600: push      esi
00404601: push      edi
00404602: mov       edi, dword ptr [esp + 0xc]
00404606: mov       esi, ecx
00404608: push      edi
00404609: call      0x40a720
0040460e: mov       dword ptr [esi + 0x2c], edi
00404611: mov       dword ptr [esi], 0x64a50c
00404617: mov       eax, esi
00404619: pop       edi
0040461a: pop       esi
0040461b: ret       4
0040461e: nop       
0040461f: nop       
00404620: call      0x404830
00404625: ret       4
00404628: nop       
00404629: nop       
0040462a: nop       
0040462b: nop       
0040462c: nop       
0040462d: nop       
0040462e: nop       
0040462f: nop       
00404630: mov       eax, dword ptr fs:[0]
00404636: push      -1
00404638: push      0x61fd18
0040463d: push      eax
0040463e: mov       dword ptr fs:[0], esp
00404645: sub       esp, 0x10
00404648: push      ebx
00404649: push      esi
0040464a: mov       esi, ecx
0040464c: call      0x402cf0
00404651: xor       ebx, ebx
00404653: sub       eax, ebx
00404655: je        0x4047d6
0040465b: dec       eax
0040465c: je        0x40472b
00404662: mov       al, byte ptr [esp + 0x2c]
00404666: push      ebp
00404667: push      edi
00404668: mov       byte ptr [esp + 0x10], al
0040466c: mov       edi, 0x68d898
00404671: or        ecx, 0xffffffff
00404674: xor       eax, eax
00404676: push      1
00404678: repne scasb al, byte ptr es:[edi]
0040467a: not       ecx
0040467c: dec       ecx
0040467d: mov       dword ptr [esp + 0x18], ebx
00404681: mov       ebp, ecx
00404683: lea       ecx, [esp + 0x14]
00404687: push      ebp
00404688: mov       dword ptr [esp + 0x20], ebx
0040468c: mov       dword ptr [esp + 0x24], ebx
00404690: call      0x401940
00404695: test      al, al
00404697: je        0x4046bd
00404699: mov       edi, dword ptr [esp + 0x14]
0040469d: mov       ecx, ebp
0040469f: mov       edx, ecx
004046a1: mov       esi, 0x68d898
004046a6: shr       ecx, 2
004046a9: rep movsd dword ptr es:[edi], dword ptr [esi]
004046ab: mov       ecx, edx
004046ad: and       ecx, 3
004046b0: rep movsb byte ptr es:[edi], byte ptr [esi]
004046b2: mov       eax, dword ptr [esp + 0x14]
004046b6: mov       dword ptr [esp + 0x18], ebp
004046ba: mov       byte ptr [eax + ebp], bl
004046bd: lea       ecx, [esp + 0x10]
004046c1: mov       dword ptr [esp + 0x28], ebx
004046c5: push      ecx
004046c6: push      0x62
004046c8: push      0x68d868
004046cd: push      0x68d2d0
004046d2: call      0x5a07f0
004046d7: call      eax
004046d9: mov       eax, dword ptr [esp + 0x24]
004046dd: add       esp, 0x10
004046e0: cmp       eax, ebx
004046e2: pop       edi
004046e3: pop       ebp
004046e4: je        0x404811
004046ea: lea       ecx, [eax - 1]
004046ed: mov       al, byte ptr [eax - 1]
004046f0: cmp       al, bl
004046f2: je        0x40470f
004046f4: cmp       al, 0xff
004046f6: je        0x40470f
004046f8: dec       al
004046fa: pop       esi
004046fb: mov       byte ptr [ecx], al
004046fd: pop       ebx
004046fe: mov       ecx, dword ptr [esp + 0x10]
00404702: mov       dword ptr fs:[0], ecx
00404709: add       esp, 0x1c
0040470c: ret       8
0040470f: push      ecx
00404710: call      0x5fe5f0
00404715: add       esp, 4
00404718: pop       esi
00404719: pop       ebx
0040471a: mov       ecx, dword ptr [esp + 0x10]
0040471e: mov       dword ptr fs:[0], ecx
00404725: add       esp, 0x1c
00404728: ret       8
0040472b: mov       edx, dword ptr [esp + 0x2c]
0040472f: mov       eax, dword ptr [esp + 0x28]
00404733: push      edx
00404734: push      eax
00404735: mov       ecx, esi
00404737: call      0x402a80
0040473c: mov       ecx, eax
0040473e: call      0x402d20
00404743: mov       ecx, esi
00404745: call      0x402a80
0040474a: mov       ecx, eax
0040474c: call      0x402d10
00404751: test      al, al
00404753: je        0x404811
00404759: mov       ecx, dword ptr [esi + 0x2c]
0040475c: mov       edx, dword ptr [ecx + 0x178]
00404762: mov       dword ptr [esp + 0x2c], edx
00404766: fild      dword ptr [esp + 0x2c]
0040476a: fstp      dword ptr [esp + 0x2c]
0040476e: call      0x422d90
00404773: fild      dword ptr [eax + 0x2c]
00404776: fdivr     dword ptr [esp + 0x2c]
0040477a: fstp      dword ptr [esp + 0x28]
0040477e: call      0x60a4a0
00404783: cdq       
00404784: mov       ecx, 0x2710
00404789: idiv      ecx
0040478b: mov       ecx, esi
0040478d: mov       dword ptr [esp + 0x2c], edx
00404791: fild      dword ptr [esp + 0x2c]
00404795: fmul      dword ptr [0x64a2c4]
0040479b: fcomp     dword ptr [esp + 0x28]
0040479f: fnstsw    ax
004047a1: test      ah, 1
004047a4: je        0x4047be
004047a6: call      0x4048a0
004047ab: pop       esi
004047ac: pop       ebx
004047ad: mov       ecx, dword ptr [esp + 0x10]
004047b1: mov       dword ptr fs:[0], ecx
004047b8: add       esp, 0x1c
004047bb: ret       8
004047be: call      0x404830
004047c3: pop       esi
004047c4: pop       ebx
004047c5: mov       ecx, dword ptr [esp + 0x10]
004047c9: mov       dword ptr fs:[0], ecx
004047d0: add       esp, 0x1c
004047d3: ret       8
004047d6: mov       edx, dword ptr [esp + 0x2c]
004047da: mov       eax, dword ptr [esp + 0x28]
004047de: push      edx
004047df: push      eax
004047e0: mov       ecx, esi
004047e2: call      0x402a80
004047e7: mov       ecx, eax
004047e9: call      0x402d20
004047ee: mov       ecx, esi
004047f0: call      0x402a80
004047f5: mov       ecx, eax
004047f7: call      0x402d10
004047fc: test      al, al
004047fe: je        0x404811
00404800: mov       ecx, esi
00404802: call      0x404830
00404807: mov       ecx, dword ptr [esi + 0x2c]
0040480a: push      1
0040480c: call      0x41e820
00404811: mov       ecx, dword ptr [esp + 0x18]
00404815: pop       esi
00404816: pop       ebx
00404817: mov       dword ptr fs:[0], ecx
0040481e: add       esp, 0x1c
00404821: ret       8
00404824: nop       
00404825: nop       
00404826: nop       
00404827: nop       
00404828: nop       
00404829: nop       
0040482a: nop       
0040482b: nop       
0040482c: nop       
0040482d: nop       
0040482e: nop       
0040482f: nop       
00404830: push      -1
00404832: push      0x61fd3b
00404837: mov       eax, dword ptr fs:[0]
0040483d: push      eax
0040483e: mov       dword ptr fs:[0], esp
00404845: push      ecx
00404846: push      esi
00404847: mov       esi, ecx
00404849: push      0x40
0040484b: call      0x60a0b5
00404850: add       esp, 4
00404853: mov       dword ptr [esp + 4], eax
00404857: test      eax, eax
00404859: mov       dword ptr [esp + 0x10], 0
00404861: je        0x404870
00404863: mov       ecx, dword ptr [esi + 0x2c]
00404866: push      ecx
00404867: mov       ecx, eax
00404869: call      0x404910
0040486e: jmp       0x404872
00404870: xor       eax, eax
00404872: push      eax
00404873: push      1
00404875: mov       ecx, esi
00404877: mov       dword ptr [esp + 0x18], 0xffffffff
0040487f: call      0x402a10
00404884: mov       ecx, dword ptr [esp + 8]
00404888: pop       esi
00404889: mov       dword ptr fs:[0], ecx
00404890: add       esp, 0x10
00404893: ret       
00404894: nop       
00404895: nop       
00404896: nop       
00404897: nop       
00404898: nop       
00404899: nop       
0040489a: nop       
0040489b: nop       
0040489c: nop       
0040489d: nop       
0040489e: nop       
0040489f: nop       
004048a0: push      -1
004048a2: push      0x61fd5b
004048a7: mov       eax, dword ptr fs:[0]
004048ad: push      eax
004048ae: mov       dword ptr fs:[0], esp
004048b5: push      ecx
004048b6: push      esi
004048b7: mov       esi, ecx
004048b9: push      0x34
004048bb: call      0x60a0b5
004048c0: add       esp, 4
004048c3: mov       dword ptr [esp + 4], eax
004048c7: test      eax, eax
004048c9: mov       dword ptr [esp + 0x10], 0
004048d1: je        0x4048e0
004048d3: mov       ecx, dword ptr [esi + 0x2c]
004048d6: push      ecx
004048d7: mov       ecx, eax
004048d9: call      0x40a4c0
004048de: jmp       0x4048e2
004048e0: xor       eax, eax
004048e2: push      eax
004048e3: push      0
004048e5: mov       ecx, esi
004048e7: mov       dword ptr [esp + 0x18], 0xffffffff
004048ef: call      0x402a10
004048f4: mov       ecx, dword ptr [esp + 8]
004048f8: pop       esi
004048f9: mov       dword ptr fs:[0], ecx
00404900: add       esp, 0x10
00404903: ret       
00404904: nop       
00404905: nop       
00404906: nop       
00404907: nop       
00404908: nop       
00404909: nop       
0040490a: nop       
0040490b: nop       
0040490c: nop       
0040490d: nop       
0040490e: nop       
0040490f: nop       
00404910: mov       eax, dword ptr fs:[0]
00404916: push      -1
00404918: push      0x61fd78
0040491d: push      eax
0040491e: mov       dword ptr fs:[0], esp
00404925: push      esi
00404926: push      edi
00404927: mov       edi, dword ptr [esp + 0x18]
0040492b: mov       esi, ecx
0040492d: push      edi
0040492e: call      0x40a720
00404933: mov       ecx, dword ptr [esp + 8]
00404937: or        eax, 0xffffffff
0040493a: mov       dword ptr [esi + 0x2c], edi
0040493d: mov       dword ptr [esi + 0x30], eax
00404940: mov       dword ptr [esi + 0x34], eax
00404943: mov       dword ptr [esi + 0x38], 0x3f800000
0040494a: mov       byte ptr [esi + 0x3c], 1
0040494e: mov       dword ptr [esi], 0x64a51c
00404954: mov       eax, esi
00404956: pop       edi
00404957: mov       dword ptr fs:[0], ecx
0040495e: pop       esi
0040495f: add       esp, 0xc
00404962: ret       4
00404965: nop       
00404966: nop       
00404967: nop       
00404968: nop       
00404969: nop       
0040496a: nop       
0040496b: nop       
0040496c: nop       
0040496d: nop       
0040496e: nop       
0040496f: nop       
00404970: mov       eax, dword ptr fs:[0]
00404976: push      -1
00404978: push      0x61fd98
0040497d: push      eax
0040497e: mov       dword ptr fs:[0], esp
00404985: sub       esp, 0x14
00404988: push      ebx
00404989: push      esi
0040498a: mov       esi, ecx
0040498c: call      0x402cf0
00404991: xor       ebx, ebx
00404993: sub       eax, ebx
00404995: je        0x404acc
0040499b: dec       eax
0040499c: je        0x404aa5
004049a2: dec       eax
004049a3: je        0x404a75
004049a9: mov       al, byte ptr [esp + 0xb]
004049ad: push      ebp
004049ae: push      edi
004049af: mov       byte ptr [esp + 0x14], al
004049b3: mov       edi, 0x68d420
004049b8: or        ecx, 0xffffffff
004049bb: xor       eax, eax
004049bd: push      1
004049bf: repne scasb al, byte ptr es:[edi]
004049c1: not       ecx
004049c3: dec       ecx
004049c4: mov       dword ptr [esp + 0x1c], ebx
004049c8: mov       ebp, ecx
004049ca: lea       ecx, [esp + 0x18]
004049ce: push      ebp
004049cf: mov       dword ptr [esp + 0x24], ebx
004049d3: mov       dword ptr [esp + 0x28], ebx
004049d7: call      0x401940
004049dc: test      al, al
004049de: je        0x404a04
004049e0: mov       edi, dword ptr [esp + 0x18]
004049e4: mov       ecx, ebp
004049e6: mov       edx, ecx
004049e8: mov       esi, 0x68d420
004049ed: shr       ecx, 2
004049f0: rep movsd dword ptr es:[edi], dword ptr [esi]
004049f2: mov       ecx, edx
004049f4: and       ecx, 3
004049f7: rep movsb byte ptr es:[edi], byte ptr [esi]
004049f9: mov       eax, dword ptr [esp + 0x18]
004049fd: mov       dword ptr [esp + 0x1c], ebp
00404a01: mov       byte ptr [eax + ebp], bl
00404a04: lea       ecx, [esp + 0x14]
00404a08: mov       dword ptr [esp + 0x2c], ebx
00404a0c: push      ecx
00404a0d: push      0xa0
00404a12: push      0x68d868
00404a17: push      0x68d2d0
00404a1c: call      0x5a07f0
00404a21: call      eax
00404a23: mov       eax, dword ptr [esp + 0x28]
00404a27: add       esp, 0x10
00404a2a: cmp       eax, ebx
00404a2c: pop       edi
00404a2d: pop       ebp
00404a2e: je        0x404ae6
00404a34: lea       ecx, [eax - 1]
00404a37: mov       al, byte ptr [eax - 1]
00404a3a: cmp       al, bl
00404a3c: je        0x404a59
00404a3e: cmp       al, 0xff
00404a40: je        0x404a59
00404a42: dec       al
00404a44: pop       esi
00404a45: mov       byte ptr [ecx], al
00404a47: pop       ebx
00404a48: mov       ecx, dword ptr [esp + 0x14]
00404a4c: mov       dword ptr fs:[0], ecx
00404a53: add       esp, 0x20
00404a56: ret       8
00404a59: push      ecx
00404a5a: call      0x5fe5f0
00404a5f: add       esp, 4
00404a62: pop       esi
00404a63: pop       ebx
00404a64: mov       ecx, dword ptr [esp + 0x14]
00404a68: mov       dword ptr fs:[0], ecx
00404a6f: add       esp, 0x20
00404a72: ret       8
00404a75: mov       ecx, dword ptr [esi + 0x2c]
00404a78: call      0x41e580
00404a7d: cmp       byte ptr [eax + 0x7c], bl
00404a80: jne       0x404ae6
00404a82: mov       ecx, dword ptr [esi + 0x2c]
00404a85: push      ebx
00404a86: call      0x41e820
00404a8b: mov       ecx, esi
00404a8d: call      0x402d00
00404a92: pop       esi
00404a93: pop       ebx
00404a94: mov       ecx, dword ptr [esp + 0x14]
00404a98: mov       dword ptr fs:[0], ecx
00404a9f: add       esp, 0x20
00404aa2: ret       8
00404aa5: mov       ecx, dword ptr [esi + 0x2c]
00404aa8: call      0x41e580
00404aad: cmp       byte ptr [eax + 0x7c], bl
00404ab0: jne       0x404ae6
00404ab2: mov       ecx, esi
00404ab4: call      0x404bd0
00404ab9: pop       esi
00404aba: pop       ebx
00404abb: mov       ecx, dword ptr [esp + 0x14]
00404abf: mov       dword ptr fs:[0], ecx
00404ac6: add       esp, 0x20
00404ac9: ret       8
00404acc: mov       ecx, dword ptr [esi + 0x2c]
00404acf: call      0x423700
00404ad4: mov       ecx, eax
00404ad6: call      0x4a0d00
00404adb: test      al, al
00404add: je        0x404ae6
00404adf: mov       ecx, esi
00404ae1: call      0x404b50
00404ae6: mov       ecx, dword ptr [esp + 0x1c]
00404aea: pop       esi
00404aeb: pop       ebx
00404aec: mov       dword ptr fs:[0], ecx
00404af3: add       esp, 0x20
00404af6: ret       8
00404af9: nop       
00404afa: nop       
00404afb: nop       
00404afc: nop       
00404afd: nop       
00404afe: nop       
00404aff: nop       
00404b00: push      esi
00404b01: mov       esi, ecx
00404b03: push      0x3f800000
00404b08: push      0
00404b0a: mov       ecx, dword ptr [esi + 0x2c]
00404b0d: push      0
00404b0f: call      0x41e6e0
00404b14: mov       ecx, esi
00404b16: call      0x404b20
00404b1b: pop       esi
00404b1c: ret       4
00404b1f: nop       
00404b20: push      esi
00404b21: mov       esi, ecx
00404b23: push      0
00404b25: mov       ecx, dword ptr [esi + 0x2c]
00404b28: mov       eax, dword ptr [ecx]
00404b2a: call      dword ptr [eax + 0x9c]
00404b30: mov       ecx, dword ptr [esi + 0x2c]
00404b33: push      eax
00404b34: call      0x41e580
00404b39: mov       ecx, eax
00404b3b: call      0x477cd0
00404b40: push      0
00404b42: push      0
00404b44: mov       ecx, esi
00404b46: call      0x402a10
00404b4b: pop       esi
00404b4c: ret       
00404b4d: nop       
00404b4e: nop       
00404b4f: nop       
00404b50: sub       esp, 0x18
00404b53: push      esi
00404b54: mov       esi, ecx
00404b56: mov       ecx, dword ptr [esi + 0x2c]
00404b59: call      0x41def0
00404b5e: push      eax
00404b5f: lea       ecx, [esi + 0x30]
00404b62: call      0x4041b0
00404b67: mov       ecx, dword ptr [esi + 0x2c]
00404b6a: lea       edx, [esp + 0x10]
00404b6e: push      edx
00404b6f: mov       eax, dword ptr [ecx]
00404b71: call      dword ptr [eax + 0x48]
00404b74: mov       ecx, dword ptr [eax]
00404b76: mov       dword ptr [esp + 4], ecx
00404b7a: mov       ecx, dword ptr [esi + 0x2c]
00404b7d: mov       edx, dword ptr [eax + 4]
00404b80: mov       dword ptr [esp + 8], edx
00404b84: mov       eax, dword ptr [eax + 8]
00404b87: mov       dword ptr [esp + 0xc], eax
00404b8b: mov       edx, dword ptr [ecx]
00404b8d: call      dword ptr [edx + 0x9c]
00404b93: fld       dword ptr [esp + 8]
00404b97: fld       dword ptr [eax + 0x12c]
00404b9d: fmul      qword ptr [0x64a528]
00404ba3: mov       ecx, dword ptr [esi + 0x2c]
00404ba6: lea       edx, [esp + 4]
00404baa: push      edx
00404bab: fsubp     st(1)
00404bad: fstp      dword ptr [esp + 0xc]
00404bb1: mov       eax, dword ptr [ecx]
00404bb3: call      dword ptr [eax + 0x4c]
00404bb6: push      0
00404bb8: push      1
00404bba: mov       ecx, esi
00404bbc: call      0x402a10
00404bc1: pop       esi
00404bc2: add       esp, 0x18
00404bc5: ret       
00404bc6: nop       
00404bc7: nop       
00404bc8: nop       
00404bc9: nop       
00404bca: nop       
00404bcb: nop       
00404bcc: nop       
00404bcd: nop       
00404bce: nop       
00404bcf: nop       
00404bd0: push      esi
00404bd1: mov       esi, ecx
00404bd3: mov       ecx, dword ptr [esi + 0x2c]
00404bd6: call      0x41e1e0
00404bdb: mov       ecx, dword ptr [esi + 0x2c]
00404bde: push      1
00404be0: mov       eax, dword ptr [ecx]
00404be2: call      dword ptr [eax + 0x9c]
00404be8: mov       ecx, dword ptr [esi + 0x2c]
00404beb: push      eax
00404bec: call      0x41e580
00404bf1: mov       ecx, eax
00404bf3: call      0x477cd0
00404bf8: mov       ecx, dword ptr [esi + 0x2c]
00404bfb: push      0x3f800000
00404c00: push      0
00404c02: push      0
00404c04: call      0x41e6e0
00404c09: push      0
00404c0b: push      2
00404c0d: mov       ecx, esi
00404c0f: call      0x402a10
00404c14: pop       esi
00404c15: ret       
00404c16: nop       
00404c17: nop       
00404c18: nop       
00404c19: nop       
00404c1a: nop       
00404c1b: nop       
00404c1c: nop       
00404c1d: nop       
00404c1e: nop       
00404c1f: nop       
00404c20: mov       cl, byte ptr [0x7103a0]
00404c26: mov       al, 1
00404c28: test      al, cl
00404c2a: jne       0x404c34
00404c2c: or        cl, al
00404c2e: mov       byte ptr [0x7103a0], cl
00404c34: jmp       0x404c40
00404c39: nop       
00404c3a: nop       
00404c3b: nop       
00404c3c: nop       
00404c3d: nop       
00404c3e: nop       
00404c3f: nop       
00404c40: push      0x401ba0
00404c45: call      0x60a57b
00404c4a: pop       ecx
00404c4b: ret       
00404c4c: nop       
00404c4d: nop       
00404c4e: nop       
00404c4f: nop       
00404c50: mov       eax, dword ptr [esp + 4]
00404c54: push      esi
00404c55: mov       esi, ecx
00404c57: push      eax
00404c58: call      0x403610
00404c5d: mov       dword ptr [esi], 0x64a534
00404c63: mov       eax, esi
00404c65: pop       esi
00404c66: ret       4
00404c69: nop       
00404c6a: nop       
00404c6b: nop       
00404c6c: nop       
00404c6d: nop       
00404c6e: nop       
00404c6f: nop       
00404c70: push      esi
00404c71: mov       esi, ecx
00404c73: push      0
00404c75: mov       ecx, dword ptr [esi + 0x24]
00404c78: mov       eax, dword ptr [ecx]
00404c7a: call      dword ptr [eax + 0x88]
00404c80: mov       ecx, dword ptr [esi + 0x24]
00404c83: test      al, al
00404c85: je        0x404ca7
00404c87: mov       edx, dword ptr [ecx]
00404c89: push      0x3fd9999a
00404c8e: push      0
00404c90: push      0
00404c92: call      dword ptr [edx + 0x8c]
00404c98: push      0
00404c9a: push      0
00404c9c: mov       ecx, esi
00404c9e: call      0x402a10
00404ca3: pop       esi
00404ca4: ret       4
00404ca7: mov       eax, dword ptr [ecx]
00404ca9: push      0x7f7fffff
00404cae: push      1
00404cb0: push      1
00404cb2: call      dword ptr [eax + 0x8c]
00404cb8: push      0
00404cba: push      1
00404cbc: mov       ecx, esi
00404cbe: call      0x402a10
00404cc3: pop       esi
00404cc4: ret       4
00404cc7: nop       
00404cc8: nop       
00404cc9: nop       
00404cca: nop       
00404ccb: nop       
00404ccc: nop       
00404ccd: nop       
00404cce: nop       
00404ccf: nop       
00404cd0: mov       eax, dword ptr fs:[0]
00404cd6: push      -1
00404cd8: push      0x61fdb8
00404cdd: push      eax
00404cde: mov       dword ptr fs:[0], esp
00404ce5: sub       esp, 0x10
00404ce8: push      ebx
00404ce9: push      esi
00404cea: push      edi
00404ceb: mov       esi, ecx
00404ced: call      0x402cf0
00404cf2: xor       ebx, ebx
00404cf4: sub       eax, ebx
00404cf6: je        0x404e7c
00404cfc: dec       eax
00404cfd: je        0x404e06
00404d03: dec       eax
00404d04: je        0x404dd3
00404d0a: mov       al, byte ptr [esp + 0x30]
00404d0e: mov       edi, 0x68d934
00404d13: mov       byte ptr [esp + 0xc], al
00404d17: or        ecx, 0xffffffff
00404d1a: xor       eax, eax
00404d1c: push      ebp
00404d1d: repne scasb al, byte ptr es:[edi]
00404d1f: not       ecx
00404d21: dec       ecx
00404d22: push      1
00404d24: mov       ebp, ecx
00404d26: lea       ecx, [esp + 0x14]
00404d2a: push      ebp
00404d2b: mov       dword ptr [esp + 0x1c], ebx
00404d2f: mov       dword ptr [esp + 0x20], ebx
00404d33: mov       dword ptr [esp + 0x24], ebx
00404d37: call      0x401940
00404d3c: test      al, al
00404d3e: je        0x404d64
00404d40: mov       edi, dword ptr [esp + 0x14]
00404d44: mov       ecx, ebp
00404d46: mov       edx, ecx
00404d48: mov       esi, 0x68d934
00404d4d: shr       ecx, 2
00404d50: rep movsd dword ptr es:[edi], dword ptr [esi]
00404d52: mov       ecx, edx
00404d54: and       ecx, 3
00404d57: rep movsb byte ptr es:[edi], byte ptr [esi]
00404d59: mov       eax, dword ptr [esp + 0x14]
00404d5d: mov       dword ptr [esp + 0x18], ebp
00404d61: mov       byte ptr [eax + ebp], bl
00404d64: lea       ecx, [esp + 0x10]
00404d68: mov       dword ptr [esp + 0x28], ebx
00404d6c: push      ecx
00404d6d: push      0x6c
00404d6f: push      0x68d908
00404d74: push      0x68d2d0
00404d79: call      0x5a07f0
00404d7e: call      eax
00404d80: mov       eax, dword ptr [esp + 0x24]
00404d84: add       esp, 0x10
00404d87: cmp       eax, ebx
00404d89: pop       ebp
00404d8a: je        0x404e99
00404d90: lea       ecx, [eax - 1]
00404d93: mov       al, byte ptr [eax - 1]
00404d96: cmp       al, bl
00404d98: je        0x404db6
00404d9a: cmp       al, 0xff
00404d9c: je        0x404db6
00404d9e: dec       al
00404da0: pop       edi
00404da1: pop       esi
00404da2: mov       byte ptr [ecx], al
00404da4: pop       ebx
00404da5: mov       ecx, dword ptr [esp + 0x10]
00404da9: mov       dword ptr fs:[0], ecx
00404db0: add       esp, 0x1c
00404db3: ret       8
00404db6: push      ecx
00404db7: call      0x5fe5f0
00404dbc: add       esp, 4
00404dbf: pop       edi
00404dc0: pop       esi
00404dc1: pop       ebx
00404dc2: mov       ecx, dword ptr [esp + 0x10]
00404dc6: mov       dword ptr fs:[0], ecx
00404dcd: add       esp, 0x1c
00404dd0: ret       8
00404dd3: mov       edx, dword ptr [esp + 0x30]
00404dd7: mov       eax, dword ptr [esp + 0x2c]
00404ddb: push      edx
00404ddc: push      eax
00404ddd: mov       ecx, esi
00404ddf: call      0x402a80
00404de4: mov       ecx, eax
00404de6: call      0x402d20
00404deb: mov       ecx, esi
00404ded: call      0x402a80
00404df2: mov       ecx, eax
00404df4: call      0x402d10
00404df9: test      al, al
00404dfb: je        0x404e99
00404e01: jmp       0x404e8f
00404e06: mov       edi, dword ptr [esp + 0x30]
00404e0a: mov       ecx, dword ptr [esi + 0x24]
00404e0d: push      edi
00404e0e: call      0x422f70
00404e13: test      al, al
00404e15: je        0x404e32
00404e17: mov       edx, dword ptr [esi]
00404e19: mov       ecx, esi
00404e1b: call      dword ptr [edx + 0xc]
00404e1e: pop       edi
00404e1f: pop       esi
00404e20: pop       ebx
00404e21: mov       ecx, dword ptr [esp + 0x10]
00404e25: mov       dword ptr fs:[0], ecx
00404e2c: add       esp, 0x1c
00404e2f: ret       8
00404e32: mov       ecx, dword ptr [esi + 0x24]
00404e35: push      edi
00404e36: call      0x422f30
00404e3b: test      al, al
00404e3d: jne       0x404e99
00404e3f: mov       ecx, dword ptr [esi + 0x24]
00404e42: push      ebx
00404e43: mov       eax, dword ptr [ecx]
00404e45: call      dword ptr [eax + 0x88]
00404e4b: test      al, al
00404e4d: je        0x404e61
00404e4f: mov       ecx, dword ptr [esi + 0x24]
00404e52: push      0xbfd9999a
00404e57: push      ebx
00404e58: push      ebx
00404e59: mov       edx, dword ptr [ecx]
00404e5b: call      dword ptr [edx + 0x8c]
00404e61: mov       ecx, esi
00404e63: call      0x402d00
00404e68: pop       edi
00404e69: pop       esi
00404e6a: pop       ebx
00404e6b: mov       ecx, dword ptr [esp + 0x10]
00404e6f: mov       dword ptr fs:[0], ecx
00404e76: add       esp, 0x1c
00404e79: ret       8
00404e7c: mov       ecx, dword ptr [esi + 0x24]
00404e7f: call      0x423700
00404e84: mov       ecx, eax
00404e86: call      0x4a0d00
00404e8b: test      al, al
00404e8d: je        0x404e99
00404e8f: push      ebx
00404e90: push      1
00404e92: mov       ecx, esi
00404e94: call      0x402a10
00404e99: mov       ecx, dword ptr [esp + 0x1c]
00404e9d: pop       edi
00404e9e: pop       esi
00404e9f: pop       ebx
00404ea0: mov       dword ptr fs:[0], ecx
00404ea7: add       esp, 0x1c
00404eaa: ret       8
00404ead: nop       
00404eae: nop       
00404eaf: nop       
00404eb0: push      esi
00404eb1: push      edi
00404eb2: mov       edi, dword ptr [esp + 0xc]
00404eb6: mov       esi, ecx
00404eb8: push      edi
00404eb9: call      0x40a740
00404ebe: mov       dword ptr [esi + 0x30], edi
00404ec1: mov       dword ptr [esi], 0x64a548
00404ec7: mov       eax, esi
00404ec9: pop       edi
00404eca: pop       esi
00404ecb: ret       4
00404ece: nop       
00404ecf: nop       
00404ed0: mov       eax, dword ptr [ecx]
00404ed2: jmp       dword ptr [eax + 0x24]
00404ed5: nop       
00404ed6: nop       
00404ed7: nop       
00404ed8: nop       
00404ed9: nop       
00404eda: nop       
00404edb: nop       
00404edc: nop       
00404edd: nop       
00404ede: nop       
00404edf: nop       
00404ee0: push      -1
00404ee2: push      0x61fde3
00404ee7: mov       eax, dword ptr fs:[0]
00404eed: push      eax
00404eee: mov       dword ptr fs:[0], esp
00404ef5: push      ecx
00404ef6: push      ebx
00404ef7: push      esi
00404ef8: mov       ebx, ecx
00404efa: push      0x30
00404efc: call      0x60a0b5
00404f01: mov       esi, eax
00404f03: add       esp, 4
00404f06: mov       dword ptr [esp + 8], esi
00404f0a: test      esi, esi
00404f0c: mov       dword ptr [esp + 0x14], 0
00404f14: je        0x404f60
00404f16: push      edi
00404f17: mov       edi, dword ptr [ebx + 0x30]
00404f1a: push      edi
00404f1b: mov       ecx, esi
00404f1d: call      0x40a720
00404f22: push      0
00404f24: mov       ecx, edi
00404f26: mov       byte ptr [esp + 0x1c], 1
00404f2b: mov       dword ptr [esi + 0x2c], edi
00404f2e: mov       dword ptr [esi], 0x64a57c
00404f34: call      0x40e390
00404f39: mov       ecx, dword ptr [esi + 0x2c]
00404f3c: call      0x423700
00404f41: mov       ecx, eax
00404f43: call      0x4a0640
00404f48: test      al, al
00404f4a: pop       edi
00404f4b: je        0x404f62
00404f4d: mov       ecx, dword ptr [esi + 0x2c]
00404f50: push      0
00404f52: call      0x423700
00404f57: mov       ecx, eax
00404f59: call      0x4a0bb0
00404f5e: jmp       0x404f62
00404f60: xor       esi, esi
00404f62: push      esi
00404f63: push      1
00404f65: mov       ecx, ebx
00404f67: mov       dword ptr [esp + 0x1c], 0xffffffff
00404f6f: call      0x402a10
00404f74: mov       ecx, dword ptr [esp + 0xc]
00404f78: pop       esi
00404f79: pop       ebx
00404f7a: mov       dword ptr fs:[0], ecx
00404f81: add       esp, 0x10
00404f84: ret       
00404f85: nop       
00404f86: nop       
00404f87: nop       
00404f88: nop       
00404f89: nop       
00404f8a: nop       
00404f8b: nop       
00404f8c: nop       
00404f8d: nop       
00404f8e: nop       
00404f8f: nop       
00404f90: push      -1
00404f92: push      0x61fdfb
00404f97: mov       eax, dword ptr fs:[0]
00404f9d: push      eax
00404f9e: mov       dword ptr fs:[0], esp
00404fa5: push      ecx
00404fa6: push      esi
00404fa7: mov       esi, ecx
00404fa9: push      0x2c
00404fab: call      0x60a0b5
00404fb0: add       esp, 4
00404fb3: mov       dword ptr [esp + 4], eax
00404fb7: test      eax, eax
00404fb9: mov       dword ptr [esp + 0x10], 0
00404fc1: je        0x404fd0
00404fc3: mov       ecx, dword ptr [esi + 0x30]
00404fc6: push      ecx
00404fc7: mov       ecx, eax
00404fc9: call      0x405000
00404fce: jmp       0x404fd2
00404fd0: xor       eax, eax
00404fd2: push      eax
00404fd3: push      2
00404fd5: mov       ecx, esi
00404fd7: mov       dword ptr [esp + 0x18], 0xffffffff
00404fdf: call      0x402a10
00404fe4: mov       ecx, dword ptr [esp + 8]
00404fe8: pop       esi
00404fe9: mov       dword ptr fs:[0], ecx
00404ff0: add       esp, 0x10
00404ff3: ret       
00404ff4: nop       
00404ff5: nop       
00404ff6: nop       
00404ff7: nop       
00404ff8: nop       
00404ff9: nop       
00404ffa: nop       
00404ffb: nop       
00404ffc: nop       
00404ffd: nop       
00404ffe: nop       
00404fff: nop       
00405000: push      esi
00405001: push      edi
00405002: mov       edi, dword ptr [esp + 0xc]
00405006: mov       esi, ecx
00405008: push      edi
00405009: call      0x404c50
0040500e: mov       dword ptr [esi + 0x28], edi
00405011: mov       dword ptr [esi], 0x64a58c
00405017: mov       eax, esi
00405019: pop       edi
0040501a: pop       esi
0040501b: ret       4
0040501e: nop       
0040501f: nop       
00405020: push      -1
00405022: push      0x61fe1b
00405027: mov       eax, dword ptr fs:[0]
0040502d: push      eax
0040502e: mov       dword ptr fs:[0], esp
00405035: push      ecx
00405036: push      esi
00405037: mov       esi, ecx
00405039: push      0x30
0040503b: call      0x60a0b5
00405040: add       esp, 4
00405043: mov       dword ptr [esp + 4], eax
00405047: test      eax, eax
00405049: mov       dword ptr [esp + 0x10], 0
00405051: je        0x405060
00405053: mov       ecx, dword ptr [esi + 0x28]
00405056: push      ecx
00405057: mov       ecx, eax
00405059: call      0x405090
0040505e: jmp       0x405062
00405060: xor       eax, eax
00405062: push      eax
00405063: push      2
00405065: mov       ecx, esi
00405067: mov       dword ptr [esp + 0x18], 0xffffffff
0040506f: call      0x402a10
00405074: mov       ecx, dword ptr [esp + 8]
00405078: pop       esi
00405079: mov       dword ptr fs:[0], ecx
00405080: add       esp, 0x10
00405083: ret       
00405084: nop       
00405085: nop       
00405086: nop       
00405087: nop       
00405088: nop       
00405089: nop       
0040508a: nop       
0040508b: nop       
0040508c: nop       
0040508d: nop       
0040508e: nop       
0040508f: nop       
00405090: push      esi
00405091: push      edi
00405092: mov       edi, dword ptr [esp + 0xc]
00405096: mov       esi, ecx
00405098: push      edi
00405099: call      0x40ab10
0040509e: mov       dword ptr [esi + 0x28], edi
004050a1: mov       byte ptr [esi + 0x2c], 0
004050a5: mov       dword ptr [esi], 0x64a5a0
004050ab: mov       eax, esi
004050ad: pop       edi
004050ae: pop       esi
004050af: ret       4
004050b2: nop       
004050b3: nop       
004050b4: nop       
004050b5: nop       
004050b6: nop       
004050b7: nop       
004050b8: nop       
004050b9: nop       
004050ba: nop       
004050bb: nop       
004050bc: nop       
004050bd: nop       
004050be: nop       
004050bf: nop       
004050c0: mov       ecx, dword ptr [ecx + 0x28]
004050c3: push      0x3fe66666
004050c8: push      0
004050ca: push      6
004050cc: mov       eax, dword ptr [ecx]
004050ce: call      dword ptr [eax + 0x8c]
004050d4: ret       4
004050d7: nop       
004050d8: nop       
004050d9: nop       
004050da: nop       
004050db: nop       
004050dc: nop       
004050dd: nop       
004050de: nop       
004050df: nop       
004050e0: mov       eax, dword ptr [esp + 8]
004050e4: sub       esp, 0x30
004050e7: push      esi
004050e8: mov       esi, ecx
004050ea: push      eax
004050eb: mov       ecx, dword ptr [esi + 0x28]
004050ee: call      0x422f30
004050f3: test      al, al
004050f5: jne       0x405105
004050f7: mov       ecx, esi
004050f9: call      0x402d00
004050fe: pop       esi
004050ff: add       esp, 0x30
00405102: ret       8
00405105: mov       ecx, dword ptr [esi + 0x28]
00405108: call      0x423700
0040510d: mov       ecx, eax
0040510f: call      0x4a0d00
00405114: test      al, al
00405116: je        0x405137
00405118: mov       ecx, dword ptr [esi + 0x28]
0040511b: mov       byte ptr [esi + 0x2c], 0
0040511f: push      0x3fe66666
00405124: push      0
00405126: mov       edx, dword ptr [ecx]
00405128: push      6
0040512a: call      dword ptr [edx + 0x8c]
00405130: pop       esi
00405131: add       esp, 0x30
00405134: ret       8
00405137: mov       al, byte ptr [esi + 0x2c]
0040513a: test      al, al
0040513c: jne       0x405223
00405142: mov       ecx, dword ptr [esi + 0x28]
00405145: call      0x423700
0040514a: mov       ecx, eax
0040514c: call      0x4a1060
00405151: fstp      dword ptr [esp + 0x3c]
00405155: mov       ecx, dword ptr [esi + 0x28]
00405158: call      0x42bcd0
0040515d: fcomp     dword ptr [esp + 0x3c]
00405161: fnstsw    ax
00405163: test      ah, 1
00405166: je        0x405223
0040516c: mov       ecx, dword ptr [esi + 0x28]
0040516f: call      0x423700
00405174: mov       ecx, eax
00405176: call      0x4a1060
0040517b: fstp      dword ptr [esp + 0x3c]
0040517f: mov       ecx, dword ptr [esi + 0x28]
00405182: call      0x42bce0
00405187: fcomp     dword ptr [esp + 0x3c]
0040518b: fnstsw    ax
0040518d: test      ah, 0x41
00405190: jne       0x405223
00405196: mov       ecx, dword ptr [esi + 0x28]
00405199: lea       eax, [esp + 0x28]
0040519d: push      eax
0040519e: call      0x40e670
004051a3: mov       ecx, dword ptr [eax]
004051a5: mov       dword ptr [esp + 4], ecx
004051a9: mov       ecx, dword ptr [esi + 0x28]
004051ac: mov       edx, dword ptr [eax + 4]
004051af: mov       dword ptr [esp + 8], edx
004051b3: lea       edx, [esp + 0x28]
004051b7: mov       eax, dword ptr [eax + 8]
004051ba: push      edx
004051bb: mov       dword ptr [esp + 0x10], eax
004051bf: mov       eax, dword ptr [ecx]
004051c1: call      dword ptr [eax + 0x9c]
004051c7: mov       ecx, eax
004051c9: call      0x49bc80
004051ce: mov       ecx, dword ptr [eax]
004051d0: mov       dword ptr [esp + 0x10], ecx
004051d4: lea       ecx, [esp + 0x1c]
004051d8: mov       edx, dword ptr [eax + 4]
004051db: push      ecx
004051dc: mov       dword ptr [esp + 0x18], edx
004051e0: lea       edx, [esp + 0x14]
004051e4: mov       eax, dword ptr [eax + 8]
004051e7: lea       ecx, [esp + 8]
004051eb: mov       dword ptr [esp + 0x1c], eax
004051ef: call      0x5b2fe0
004051f4: lea       edx, [esp + 4]
004051f8: lea       ecx, [esp + 4]
004051fc: push      edx
004051fd: push      0x3e99999a
00405202: lea       edx, [esp + 0x24]
00405206: call      0x5b3020
0040520b: mov       ecx, dword ptr [esi + 0x28]
0040520e: lea       edx, [esp + 0x10]
00405212: push      edx
00405213: lea       edx, [esp + 8]
00405217: mov       eax, dword ptr [ecx]
00405219: push      edx
0040521a: call      dword ptr [eax + 0xc0]
00405220: mov       byte ptr [esi + 0x2c], al
00405223: pop       esi
00405224: add       esp, 0x30
00405227: ret       8
0040522a: nop       
0040522b: nop       
0040522c: nop       
0040522d: nop       
0040522e: nop       
0040522f: nop       
00405230: push      esi
00405231: push      edi
00405232: mov       edi, dword ptr [esp + 0xc]
00405236: mov       esi, ecx
00405238: push      edi
00405239: call      0x40a740
0040523e: mov       dword ptr [esi + 0x30], edi
00405241: mov       dword ptr [esi], 0x64a5b0
00405247: mov       eax, esi
00405249: pop       edi
0040524a: pop       esi
0040524b: ret       4
0040524e: nop       
0040524f: nop       
00405250: push      -1
00405252: push      0x61fe43
00405257: mov       eax, dword ptr fs:[0]
0040525d: push      eax
0040525e: mov       dword ptr fs:[0], esp
00405265: push      ecx
00405266: push      ebx
00405267: push      esi
00405268: mov       ebx, ecx
0040526a: push      0x30
0040526c: call      0x60a0b5
00405271: mov       esi, eax
00405273: add       esp, 4
00405276: mov       dword ptr [esp + 8], esi
0040527a: test      esi, esi
0040527c: mov       dword ptr [esp + 0x14], 0
00405284: je        0x4052d0
00405286: push      edi
00405287: mov       edi, dword ptr [ebx + 0x30]
0040528a: push      edi
0040528b: mov       ecx, esi
0040528d: call      0x40a720
00405292: push      0
00405294: mov       ecx, edi
00405296: mov       byte ptr [esp + 0x1c], 1
0040529b: mov       dword ptr [esi + 0x2c], edi
0040529e: mov       dword ptr [esi], 0x64a5e4
004052a4: call      0x40c4f0
004052a9: mov       ecx, dword ptr [esi + 0x2c]
004052ac: call      0x423700
004052b1: mov       ecx, eax
004052b3: call      0x4a0640
004052b8: test      al, al
004052ba: pop       edi
004052bb: je        0x4052d2
004052bd: mov       ecx, dword ptr [esi + 0x2c]
004052c0: push      0
004052c2: call      0x423700
004052c7: mov       ecx, eax
004052c9: call      0x4a0bb0
004052ce: jmp       0x4052d2
004052d0: xor       esi, esi
004052d2: push      esi
004052d3: push      1
004052d5: mov       ecx, ebx
004052d7: mov       dword ptr [esp + 0x1c], 0xffffffff
004052df: call      0x402a10
004052e4: mov       ecx, dword ptr [esp + 0xc]
004052e8: pop       esi
004052e9: pop       ebx
004052ea: mov       dword ptr fs:[0], ecx
004052f1: add       esp, 0x10
004052f4: ret       
004052f5: nop       
004052f6: nop       
004052f7: nop       
004052f8: nop       
004052f9: nop       
004052fa: nop       
004052fb: nop       
004052fc: nop       
004052fd: nop       
004052fe: nop       
004052ff: nop       
00405300: push      -1
00405302: push      0x61fe5b
00405307: mov       eax, dword ptr fs:[0]
0040530d: push      eax
0040530e: mov       dword ptr fs:[0], esp
00405315: push      ecx
00405316: push      esi
00405317: mov       esi, ecx
00405319: push      0x2c
0040531b: call      0x60a0b5
00405320: add       esp, 4
00405323: mov       dword ptr [esp + 4], eax
00405327: test      eax, eax
00405329: mov       dword ptr [esp + 0x10], 0
00405331: je        0x405340
00405333: mov       ecx, dword ptr [esi + 0x30]
00405336: push      ecx
00405337: mov       ecx, eax
00405339: call      0x405370
0040533e: jmp       0x405342
00405340: xor       eax, eax
00405342: push      eax
00405343: push      2
00405345: mov       ecx, esi
00405347: mov       dword ptr [esp + 0x18], 0xffffffff
0040534f: call      0x402a10
00405354: mov       ecx, dword ptr [esp + 8]
00405358: pop       esi
00405359: mov       dword ptr fs:[0], ecx
00405360: add       esp, 0x10
00405363: ret       
00405364: nop       
00405365: nop       
00405366: nop       
00405367: nop       
00405368: nop       
00405369: nop       
0040536a: nop       
0040536b: nop       
0040536c: nop       
0040536d: nop       
0040536e: nop       
0040536f: nop       
00405370: push      esi
00405371: push      edi
00405372: mov       edi, dword ptr [esp + 0xc]
00405376: mov       esi, ecx
00405378: push      edi
00405379: call      0x404c50
0040537e: mov       dword ptr [esi + 0x28], edi
00405381: mov       dword ptr [esi], 0x64a5f4
00405387: mov       eax, esi
00405389: pop       edi
0040538a: pop       esi
0040538b: ret       4
0040538e: nop       
0040538f: nop       
00405390: push      -1
00405392: push      0x61fe7b
00405397: mov       eax, dword ptr fs:[0]
0040539d: push      eax
0040539e: mov       dword ptr fs:[0], esp
004053a5: push      ecx
004053a6: push      esi
004053a7: mov       esi, ecx
004053a9: push      0x2c
004053ab: call      0x60a0b5
004053b0: add       esp, 4
004053b3: mov       dword ptr [esp + 4], eax
004053b7: test      eax, eax
004053b9: mov       dword ptr [esp + 0x10], 0
004053c1: je        0x4053d0
004053c3: mov       ecx, dword ptr [esi + 0x28]
004053c6: push      ecx
004053c7: mov       ecx, eax
004053c9: call      0x40a1d0
004053ce: jmp       0x4053d2
004053d0: xor       eax, eax
004053d2: push      eax
004053d3: push      2
004053d5: mov       ecx, esi
004053d7: mov       dword ptr [esp + 0x18], 0xffffffff
004053df: call      0x402a10
004053e4: mov       ecx, dword ptr [esp + 8]
004053e8: pop       esi
004053e9: mov       dword ptr fs:[0], ecx
004053f0: add       esp, 0x10
004053f3: ret       
004053f4: nop       
004053f5: nop       
004053f6: nop       
004053f7: nop       
004053f8: nop       
004053f9: nop       
004053fa: nop       
004053fb: nop       
004053fc: nop       
004053fd: nop       
004053fe: nop       
004053ff: nop       
00405400: push      esi
00405401: mov       esi, ecx
00405403: call      0x405420
00405408: test      byte ptr [esp + 8], 1
0040540d: je        0x405418
0040540f: push      esi
00405410: call      0x5fe5f0
00405415: add       esp, 4
00405418: mov       eax, esi
0040541a: pop       esi
0040541b: ret       4
0040541e: nop       
0040541f: nop       
00405420: push      -1
00405422: push      0x61fe98
00405427: mov       eax, dword ptr fs:[0]
0040542d: push      eax
0040542e: mov       dword ptr fs:[0], esp
00405435: push      ecx
00405436: push      esi
00405437: mov       esi, ecx
00405439: mov       dword ptr [esp + 4], esi
0040543d: mov       dword ptr [esi], 0x64a57c
00405443: mov       ecx, dword ptr [esi + 0x2c]
00405446: push      1
00405448: mov       dword ptr [esp + 0x14], 0
00405450: call      0x40e390
00405455: mov       ecx, esi
00405457: mov       dword ptr [esp + 0x10], 0xffffffff
0040545f: call      0x4029b0
00405464: mov       ecx, dword ptr [esp + 8]
00405468: pop       esi
00405469: mov       dword ptr fs:[0], ecx
00405470: add       esp, 0x10
00405473: ret       
00405474: nop       
00405475: nop       
00405476: nop       
00405477: nop       
00405478: nop       
00405479: nop       
0040547a: nop       
0040547b: nop       
0040547c: nop       
0040547d: nop       
0040547e: nop       
0040547f: nop       
00405480: push      esi
00405481: mov       esi, ecx
00405483: call      0x4054a0
00405488: test      byte ptr [esp + 8], 1
0040548d: je        0x405498
0040548f: push      esi
00405490: call      0x5fe5f0
00405495: add       esp, 4
00405498: mov       eax, esi
0040549a: pop       esi
0040549b: ret       4
0040549e: nop       
0040549f: nop       
004054a0: push      -1
004054a2: push      0x61feb8
004054a7: mov       eax, dword ptr fs:[0]
004054ad: push      eax
004054ae: mov       dword ptr fs:[0], esp
004054b5: push      ecx
004054b6: push      esi
004054b7: mov       esi, ecx
004054b9: mov       dword ptr [esp + 4], esi
004054bd: mov       dword ptr [esi], 0x64a5e4
004054c3: mov       ecx, dword ptr [esi + 0x2c]
004054c6: push      1
004054c8: mov       dword ptr [esp + 0x14], 0
004054d0: call      0x40c4f0
004054d5: mov       ecx, esi
004054d7: mov       dword ptr [esp + 0x10], 0xffffffff
004054df: call      0x4029b0
004054e4: mov       ecx, dword ptr [esp + 8]
004054e8: pop       esi
004054e9: mov       dword ptr fs:[0], ecx
004054f0: add       esp, 0x10
004054f3: ret       
004054f4: nop       
004054f5: nop       
004054f6: nop       
004054f7: nop       
004054f8: nop       
004054f9: nop       
004054fa: nop       
004054fb: nop       
004054fc: nop       
004054fd: nop       
004054fe: nop       
004054ff: nop       
00405500: mov       cl, byte ptr [0x7103a0]
00405506: mov       al, 1
00405508: test      al, cl
0040550a: jne       0x405514
0040550c: or        cl, al
0040550e: mov       byte ptr [0x7103a0], cl
00405514: jmp       0x405520
00405519: nop       
0040551a: nop       
0040551b: nop       
0040551c: nop       
0040551d: nop       
0040551e: nop       
0040551f: nop       
00405520: push      0x401ba0
00405525: call      0x60a57b
0040552a: pop       ecx
0040552b: ret       
0040552c: nop       
0040552d: nop       
0040552e: nop       
0040552f: nop       
00405530: push      esi
00405531: push      edi
00405532: mov       edi, dword ptr [esp + 0xc]
00405536: mov       esi, ecx
00405538: push      edi
00405539: call      0x402960
0040553e: mov       dword ptr [esi + 0x28], edi
00405541: mov       dword ptr [esi], 0x64a608
00405547: mov       eax, esi
00405549: pop       edi
0040554a: pop       esi
0040554b: ret       4
0040554e: nop       
0040554f: nop       
00405550: push      esi
00405551: push      edi
00405552: mov       edi, dword ptr [esp + 0xc]
00405556: mov       esi, ecx
00405558: push      edi
00405559: call      0x402d70
0040555e: mov       dword ptr [esi + 0x2c], edi
00405561: mov       dword ptr [esi], 0x64a618
00405567: mov       eax, esi
00405569: pop       edi
0040556a: pop       esi
0040556b: ret       4
0040556e: nop       
0040556f: nop       
00405570: push      -1
00405572: push      0x61fedb
00405577: mov       eax, dword ptr fs:[0]
0040557d: push      eax
0040557e: mov       dword ptr fs:[0], esp
00405585: push      ecx
00405586: push      esi
00405587: mov       esi, ecx
00405589: push      0x30
0040558b: call      0x60a0b5
00405590: add       esp, 4
00405593: mov       dword ptr [esp + 4], eax
00405597: test      eax, eax
00405599: mov       dword ptr [esp + 0x10], 0
004055a1: je        0x4055b0
004055a3: mov       ecx, dword ptr [esi + 0x2c]
004055a6: push      ecx
004055a7: mov       ecx, eax
004055a9: call      0x406040
004055ae: jmp       0x4055b2
004055b0: xor       eax, eax
004055b2: push      eax
004055b3: push      0
004055b5: mov       ecx, esi
004055b7: mov       dword ptr [esp + 0x18], 0xffffffff
004055bf: call      0x402a10
004055c4: mov       ecx, dword ptr [esp + 8]
004055c8: pop       esi
004055c9: mov       dword ptr fs:[0], ecx
004055d0: add       esp, 0x10
004055d3: ret       
004055d4: nop       
004055d5: nop       
004055d6: nop       
004055d7: nop       
004055d8: nop       
004055d9: nop       
004055da: nop       
004055db: nop       
004055dc: nop       
004055dd: nop       
004055de: nop       
004055df: nop       
004055e0: push      -1
004055e2: push      0x61fefb
004055e7: mov       eax, dword ptr fs:[0]
004055ed: push      eax
004055ee: mov       dword ptr fs:[0], esp
004055f5: push      ecx
004055f6: push      esi
004055f7: mov       esi, ecx
004055f9: push      0x3c
004055fb: call      0x60a0b5
00405600: add       esp, 4
00405603: mov       dword ptr [esp + 4], eax
00405607: test      eax, eax
00405609: mov       dword ptr [esp + 0x10], 0
00405611: je        0x405620
00405613: mov       ecx, dword ptr [esi + 0x2c]
00405616: push      ecx
00405617: mov       ecx, eax
00405619: call      0x405840
0040561e: jmp       0x405622
00405620: xor       eax, eax
00405622: push      eax
00405623: push      1
00405625: mov       ecx, esi
00405627: mov       dword ptr [esp + 0x18], 0xffffffff
0040562f: call      0x402a10
00405634: mov       ecx, dword ptr [esp + 8]
00405638: pop       esi
00405639: mov       dword ptr fs:[0], ecx
00405640: add       esp, 0x10
00405643: ret       
00405644: nop       
00405645: nop       
00405646: nop       
00405647: nop       
00405648: nop       
00405649: nop       
0040564a: nop       
0040564b: nop       
0040564c: nop       
0040564d: nop       
0040564e: nop       
0040564f: nop       
00405650: push      -1
00405652: push      0x61ff1b
00405657: mov       eax, dword ptr fs:[0]
0040565d: push      eax
0040565e: mov       dword ptr fs:[0], esp
00405665: push      ecx
00405666: push      esi
00405667: mov       esi, ecx
00405669: push      0x2c
0040566b: call      0x60a0b5
00405670: add       esp, 4
00405673: mov       dword ptr [esp + 4], eax
00405677: test      eax, eax
00405679: mov       dword ptr [esp + 0x10], 0
00405681: je        0x405690
00405683: mov       ecx, dword ptr [esi + 0x2c]
00405686: push      ecx
00405687: mov       ecx, eax
00405689: call      0x405a80
0040568e: jmp       0x405692
00405690: xor       eax, eax
00405692: push      eax
00405693: push      2
00405695: mov       ecx, esi
00405697: mov       dword ptr [esp + 0x18], 0xffffffff
0040569f: call      0x402a10
004056a4: mov       ecx, dword ptr [esp + 8]
004056a8: pop       esi
004056a9: mov       dword ptr fs:[0], ecx
004056b0: add       esp, 0x10
004056b3: ret       
004056b4: nop       
004056b5: nop       
004056b6: nop       
004056b7: nop       
004056b8: nop       
004056b9: nop       
004056ba: nop       
004056bb: nop       
004056bc: nop       
004056bd: nop       
004056be: nop       
004056bf: nop       
004056c0: push      -1
004056c2: push      0x61ff3b
004056c7: mov       eax, dword ptr fs:[0]
004056cd: push      eax
004056ce: mov       dword ptr fs:[0], esp
004056d5: push      ecx
004056d6: push      esi
004056d7: mov       esi, ecx
004056d9: call      0x402cf0
004056de: cmp       eax, 5
004056e1: jne       0x4056ef
004056e3: mov       ecx, esi
004056e5: call      0x402cf0
004056ea: cmp       eax, 4
004056ed: je        0x40572a
004056ef: push      0x2c
004056f1: call      0x60a0b5
004056f6: add       esp, 4
004056f9: mov       dword ptr [esp + 4], eax
004056fd: test      eax, eax
004056ff: mov       dword ptr [esp + 0x10], 0
00405707: je        0x405716
00405709: mov       ecx, dword ptr [esi + 0x2c]
0040570c: push      ecx
0040570d: mov       ecx, eax
0040570f: call      0x405b10
00405714: jmp       0x405718
00405716: xor       eax, eax
00405718: push      eax
00405719: push      4
0040571b: mov       ecx, esi
0040571d: mov       dword ptr [esp + 0x18], 0xffffffff
00405725: call      0x402a10
0040572a: mov       ecx, dword ptr [esp + 8]
0040572e: pop       esi
0040572f: mov       dword ptr fs:[0], ecx
00405736: add       esp, 0x10
00405739: ret       
0040573a: nop       
0040573b: nop       
0040573c: nop       
0040573d: nop       
0040573e: nop       
0040573f: nop       
00405740: push      esi
00405741: mov       esi, ecx
00405743: call      0x402cf0
00405748: cmp       eax, 5
0040574b: je        0x405754
0040574d: mov       eax, dword ptr [esi]
0040574f: mov       ecx, esi
00405751: call      dword ptr [eax + 0x28]
00405754: pop       esi
00405755: ret       
00405756: nop       
00405757: nop       
00405758: nop       
00405759: nop       
0040575a: nop       
0040575b: nop       
0040575c: nop       
0040575d: nop       
0040575e: nop       
0040575f: nop       
00405760: push      -1
00405762: push      0x61ff5b
00405767: mov       eax, dword ptr fs:[0]
0040576d: push      eax
0040576e: mov       dword ptr fs:[0], esp
00405775: push      ecx
00405776: push      esi
00405777: mov       esi, ecx
00405779: push      0x3c
0040577b: call      0x60a0b5
00405780: add       esp, 4
00405783: mov       dword ptr [esp + 4], eax
00405787: test      eax, eax
00405789: mov       dword ptr [esp + 0x10], 0
00405791: je        0x4057a0
00405793: mov       ecx, dword ptr [esi + 0x2c]
00405796: push      ecx
00405797: mov       ecx, eax
00405799: call      0x405bd0
0040579e: jmp       0x4057a2
004057a0: xor       eax, eax
004057a2: push      eax
004057a3: push      5
004057a5: mov       ecx, esi
004057a7: mov       dword ptr [esp + 0x18], 0xffffffff
004057af: call      0x402a10
004057b4: mov       ecx, dword ptr [esp + 8]
004057b8: pop       esi
004057b9: mov       dword ptr fs:[0], ecx
004057c0: add       esp, 0x10
004057c3: ret       
004057c4: nop       
004057c5: nop       
004057c6: nop       
004057c7: nop       
004057c8: nop       
004057c9: nop       
004057ca: nop       
004057cb: nop       
004057cc: nop       
004057cd: nop       
004057ce: nop       
004057cf: nop       
004057d0: push      -1
004057d2: push      0x61ff7b
004057d7: mov       eax, dword ptr fs:[0]
004057dd: push      eax
004057de: mov       dword ptr fs:[0], esp
004057e5: push      ecx
004057e6: push      esi
004057e7: mov       esi, ecx
004057e9: push      0x3c
004057eb: call      0x60a0b5
004057f0: add       esp, 4
004057f3: mov       dword ptr [esp + 4], eax
004057f7: test      eax, eax
004057f9: mov       dword ptr [esp + 0x10], 0
00405801: je        0x405815
00405803: mov       ecx, dword ptr [esp + 0x18]
00405807: mov       edx, dword ptr [esi + 0x2c]
0040580a: push      ecx
0040580b: push      edx
0040580c: mov       ecx, eax
0040580e: call      0x405c20
00405813: jmp       0x405817
00405815: xor       eax, eax
00405817: push      eax
00405818: push      4
0040581a: mov       ecx, esi
0040581c: mov       dword ptr [esp + 0x18], 0xffffffff
00405824: call      0x402a10
00405829: mov       ecx, dword ptr [esp + 8]
0040582d: pop       esi
0040582e: mov       dword ptr fs:[0], ecx
00405835: add       esp, 0x10
00405838: ret       4
0040583b: nop       
0040583c: nop       
0040583d: nop       
0040583e: nop       
0040583f: nop       
00405840: push      -1
00405842: push      0x61ffa0
00405847: mov       eax, dword ptr fs:[0]
0040584d: push      eax
0040584e: mov       dword ptr fs:[0], esp
00405855: sub       esp, 0x14
00405858: mov       eax, dword ptr [esp + 0x24]
0040585c: push      ebp
0040585d: push      esi
0040585e: mov       ebp, ecx
00405860: push      eax
00405861: mov       dword ptr [esp + 0xc], ebp
00405865: call      0x405530
0040586a: xor       esi, esi
0040586c: mov       dword ptr [esp + 0x24], esi
00405870: call      0x60a4a0
00405875: cdq       
00405876: mov       ecx, 0x2710
0040587b: idiv      ecx
0040587d: mov       dword ptr [esp + 0x2c], edx
00405881: fild      dword ptr [esp + 0x2c]
00405885: fmul      dword ptr [0x64a658]
0040588b: fadd      dword ptr [0x64a42c]
00405891: call      0x60ab20
00405896: cmp       eax, -1
00405899: mov       dword ptr [esp + 0x2c], eax
0040589d: je        0x405950
004058a3: cmp       eax, esi
004058a5: jge       0x405950
004058ab: push      ebx
004058ac: push      edi
004058ad: mov       edi, 0x6b3f70
004058b2: or        ecx, 0xffffffff
004058b5: xor       eax, eax
004058b7: mov       dl, byte ptr [esp + 0x34]
004058bb: repne scasb al, byte ptr es:[edi]
004058bd: not       ecx
004058bf: dec       ecx
004058c0: push      1
004058c2: mov       ebx, ecx
004058c4: lea       ecx, [esp + 0x18]
004058c8: push      ebx
004058c9: mov       byte ptr [esp + 0x1c], dl
004058cd: mov       dword ptr [esp + 0x20], esi
004058d1: mov       dword ptr [esp + 0x24], esi
004058d5: mov       dword ptr [esp + 0x28], esi
004058d9: call      0x401940
004058de: test      al, al
004058e0: je        0x405909
004058e2: mov       edi, dword ptr [esp + 0x18]
004058e6: mov       ecx, ebx
004058e8: mov       eax, ecx
004058ea: mov       esi, 0x6b3f70
004058ef: shr       ecx, 2
004058f2: rep movsd dword ptr es:[edi], dword ptr [esi]
004058f4: mov       ecx, eax
004058f6: and       ecx, 3
004058f9: rep movsb byte ptr es:[edi], byte ptr [esi]
004058fb: mov       ecx, dword ptr [esp + 0x18]
004058ff: mov       dword ptr [esp + 0x1c], ebx
00405903: xor       esi, esi
00405905: mov       byte ptr [ebx + ecx], 0
00405909: lea       edx, [esp + 0x14]
0040590d: mov       byte ptr [esp + 0x2c], 1
00405912: push      edx
00405913: push      0x56
00405915: push      0x68d4c8
0040591a: push      0x68d490
0040591f: call      0x5a07f0
00405924: call      eax
00405926: mov       eax, dword ptr [esp + 0x28]
0040592a: add       esp, 0x10
0040592d: cmp       eax, esi
0040592f: pop       edi
00405930: pop       ebx
00405931: je        0x405950
00405933: lea       ecx, [eax - 1]
00405936: mov       al, byte ptr [eax - 1]
00405939: test      al, al
0040593b: je        0x405947
0040593d: cmp       al, 0xff
0040593f: je        0x405947
00405941: dec       al
00405943: mov       byte ptr [ecx], al
00405945: jmp       0x405950
00405947: push      ecx
00405948: call      0x5fe5f0
0040594d: add       esp, 4
00405950: mov       eax, dword ptr [esp + 0x2c]
00405954: mov       ecx, dword ptr [esp + 0x1c]
00405958: mov       dword ptr [ebp + 0x2c], eax
0040595b: mov       dword ptr [ebp + 0x30], 0xffffffff
00405962: mov       dword ptr [ebp + 0x34], 0x3f800000
00405969: mov       byte ptr [ebp + 0x38], 1
0040596d: mov       dword ptr [ebp], 0x64a64c
00405974: mov       eax, ebp
00405976: pop       esi
00405977: pop       ebp
00405978: mov       dword ptr fs:[0], ecx
0040597f: add       esp, 0x20
00405982: ret       4
00405985: nop       
00405986: nop       
00405987: nop       
00405988: nop       
00405989: nop       
0040598a: nop       
0040598b: nop       
0040598c: nop       
0040598d: nop       
0040598e: nop       
0040598f: nop       
00405990: push      esi
00405991: mov       esi, ecx
00405993: push      -1
00405995: mov       ecx, dword ptr [esi + 0x28]
00405998: call      0x4288c0
0040599d: mov       ecx, eax
0040599f: call      0x596940
004059a4: mov       ecx, dword ptr [esi + 0x28]
004059a7: call      0x428b40
004059ac: mov       ecx, dword ptr [esi + 0x28]
004059af: push      0x7f7fffff
004059b4: push      1
004059b6: push      2
004059b8: mov       eax, dword ptr [ecx]
004059ba: call      dword ptr [eax + 0x8c]
004059c0: pop       esi
004059c1: ret       4
004059c4: nop       
004059c5: nop       
004059c6: nop       
004059c7: nop       
004059c8: nop       
004059c9: nop       
004059ca: nop       
004059cb: nop       
004059cc: nop       
004059cd: nop       
004059ce: nop       
004059cf: nop       
004059d0: push      ecx
004059d1: push      ebp
004059d2: push      esi
004059d3: push      edi
004059d4: mov       edi, ecx
004059d6: mov       cl, 1
004059d8: mov       edx, dword ptr [edi + 0x2c]
004059db: lea       esi, [edi + 0x2c]
004059de: cmp       edx, -1
004059e1: mov       dword ptr [esp + 0xc], edx
004059e5: je        0x405a32
004059e7: mov       eax, dword ptr [esi + 4]
004059ea: cmp       eax, -1
004059ed: jne       0x405a01
004059ef: mov       eax, dword ptr [esp + 0x18]
004059f3: mov       dword ptr [esi + 8], 0x3f800000
004059fa: add       edx, eax
004059fc: mov       dword ptr [esi + 4], edx
004059ff: jmp       0x405a32
00405a01: mov       ebp, dword ptr [esp + 0x18]
00405a05: cmp       ebp, eax
00405a07: jle       0x405a14
00405a09: mov       dword ptr [esi + 8], 0
00405a10: xor       cl, cl
00405a12: jmp       0x405a32
00405a14: test      edx, edx
00405a16: jle       0x405a2b
00405a18: sub       eax, ebp
00405a1a: mov       dword ptr [esp + 0x18], eax
00405a1e: fild      dword ptr [esp + 0x18]
00405a22: fidiv     dword ptr [esp + 0xc]
00405a26: fstp      dword ptr [esi + 8]
00405a29: jmp       0x405a32
00405a2b: mov       dword ptr [esi + 8], 0
00405a32: test      cl, cl
00405a34: mov       byte ptr [esi + 0xc], cl
00405a37: jne       0x405a74
00405a39: mov       ecx, dword ptr [edi + 0x28]
00405a3c: push      0
00405a3e: mov       edx, dword ptr [ecx]
00405a40: call      dword ptr [edx + 0xbc]
00405a46: call      0x60a4a0
00405a4b: cdq       
00405a4c: mov       ecx, 0x2710
00405a51: idiv      ecx
00405a53: mov       dword ptr [esp + 0x18], edx
00405a57: fild      dword ptr [esp + 0x18]
00405a5b: fmul      dword ptr [0x64a658]
00405a61: fadd      dword ptr [0x64a42c]
00405a67: call      0x60ab20
00405a6c: push      eax
00405a6d: mov       ecx, esi
00405a6f: call      0x4041b0
00405a74: pop       edi
00405a75: pop       esi
00405a76: pop       ebp
00405a77: pop       ecx
00405a78: ret       8
00405a7b: nop       
00405a7c: nop       
00405a7d: nop       
00405a7e: nop       
00405a7f: nop       
00405a80: push      esi
00405a81: push      edi
00405a82: mov       edi, dword ptr [esp + 0xc]
00405a86: mov       esi, ecx
00405a88: push      edi
00405a89: call      0x403610
00405a8e: mov       dword ptr [esi + 0x28], edi
00405a91: mov       dword ptr [esi], 0x64a660
00405a97: mov       eax, esi
00405a99: pop       edi
00405a9a: pop       esi
00405a9b: ret       4
00405a9e: nop       
00405a9f: nop       
00405aa0: push      esi
00405aa1: mov       esi, ecx
00405aa3: call      0x40a1f0
00405aa8: test      byte ptr [esp + 8], 1
00405aad: je        0x405ab8
00405aaf: push      esi
00405ab0: call      0x5fe5f0
00405ab5: add       esp, 4
00405ab8: mov       eax, esi
00405aba: pop       esi
00405abb: ret       4
00405abe: nop       
00405abf: nop       
00405ac0: mov       eax, dword ptr [esp + 4]
00405ac4: push      esi
00405ac5: mov       esi, ecx
00405ac7: push      eax
00405ac8: call      0x403690
00405acd: mov       ecx, dword ptr [esi + 0x28]
00405ad0: call      0x428b40
00405ad5: mov       ecx, dword ptr [esi + 0x28]
00405ad8: push      0x7f7fffff
00405add: push      1
00405adf: push      2
00405ae1: mov       edx, dword ptr [ecx]
00405ae3: call      dword ptr [edx + 0x8c]
00405ae9: pop       esi
00405aea: ret       4
00405aed: nop       
00405aee: nop       
00405aef: nop       
00405af0: mov       eax, dword ptr [esp + 8]
00405af4: push      esi
00405af5: mov       esi, ecx
00405af7: push      eax
00405af8: mov       ecx, dword ptr [esi + 0x28]
00405afb: call      0x422f30
00405b00: test      al, al
00405b02: jne       0x405b0b
00405b04: mov       ecx, esi
00405b06: call      0x402d00
00405b0b: pop       esi
00405b0c: ret       8
00405b0f: nop       
00405b10: push      esi
00405b11: push      edi
00405b12: mov       edi, dword ptr [esp + 0xc]
00405b16: mov       esi, ecx
00405b18: push      edi
00405b19: call      0x403700
00405b1e: mov       dword ptr [esi + 0x28], edi
00405b21: mov       dword ptr [esi], 0x64a670
00405b27: mov       eax, esi
00405b29: pop       edi
00405b2a: pop       esi
00405b2b: ret       4
00405b2e: nop       
00405b2f: nop       
00405b30: push      esi
00405b31: mov       esi, ecx
00405b33: call      0x405b50
00405b38: test      byte ptr [esp + 8], 1
00405b3d: je        0x405b48
00405b3f: push      esi
00405b40: call      0x5fe5f0
00405b45: add       esp, 4
00405b48: mov       eax, esi
00405b4a: pop       esi
00405b4b: ret       4
00405b4e: nop       
00405b4f: nop       
00405b50: push      -1
00405b52: push      0x61ffb8
00405b57: mov       eax, dword ptr fs:[0]
00405b5d: push      eax
00405b5e: mov       dword ptr fs:[0], esp
00405b65: push      ecx
00405b66: push      esi
00405b67: mov       esi, ecx
00405b69: mov       dword ptr [esp + 4], esi
00405b6d: mov       dword ptr [esi], 0x64a670
00405b73: mov       ecx, dword ptr [esi + 0x28]
00405b76: mov       dword ptr [esp + 0x10], 0
00405b7e: call      0x428b40
00405b83: mov       ecx, esi
00405b85: mov       dword ptr [esp + 0x10], 0xffffffff
00405b8d: call      0x403780
00405b92: mov       ecx, dword ptr [esp + 8]
00405b96: pop       esi
00405b97: mov       dword ptr fs:[0], ecx
00405b9e: add       esp, 0x10
00405ba1: ret       
00405ba2: nop       
00405ba3: nop       
00405ba4: nop       
00405ba5: nop       
00405ba6: nop       
00405ba7: nop       
00405ba8: nop       
00405ba9: nop       
00405baa: nop       
00405bab: nop       
00405bac: nop       
00405bad: nop       
00405bae: nop       
00405baf: nop       
00405bb0: mov       eax, dword ptr [esp + 4]
00405bb4: push      esi
00405bb5: mov       esi, ecx
00405bb7: push      eax
00405bb8: call      0x4037e0
00405bbd: mov       ecx, dword ptr [esi + 0x28]
00405bc0: call      0x428b10
00405bc5: pop       esi
00405bc6: ret       4
00405bc9: nop       
00405bca: nop       
00405bcb: nop       
00405bcc: nop       
00405bcd: nop       
00405bce: nop       
00405bcf: nop       
00405bd0: push      esi
00405bd1: push      edi
00405bd2: mov       edi, dword ptr [esp + 0xc]
00405bd6: mov       esi, ecx
00405bd8: push      edi
00405bd9: call      0x403840
00405bde: mov       dword ptr [esi + 0x38], edi
00405be1: mov       dword ptr [esi], 0x64a680
00405be7: mov       eax, esi
00405be9: pop       edi
00405bea: pop       esi
00405beb: ret       4
00405bee: nop       
00405bef: nop       
00405bf0: push      esi
00405bf1: mov       esi, ecx
00405bf3: mov       ecx, dword ptr [esi + 0x38]
00405bf6: call      0x428b10
00405bfb: mov       ecx, dword ptr [esi + 0x38]
00405bfe: push      0x7f7fffff
00405c03: push      0
00405c05: push      5
00405c07: mov       eax, dword ptr [ecx]
00405c09: call      dword ptr [eax + 0x8c]
00405c0f: push      0
00405c11: push      0
00405c13: mov       ecx, esi
00405c15: call      0x402a10
00405c1a: pop       esi
00405c1b: ret       
00405c1c: nop       
00405c1d: nop       
00405c1e: nop       
00405c1f: nop       
00405c20: mov       eax, dword ptr [esp + 8]
00405c24: push      esi
00405c25: push      edi
00405c26: mov       edi, dword ptr [esp + 0xc]
00405c2a: push      eax
00405c2b: mov       esi, ecx
00405c2d: push      edi
00405c2e: call      0x403ed0
00405c33: mov       dword ptr [esi + 0x38], edi
00405c36: mov       dword ptr [esi], 0x64a698
00405c3c: mov       eax, esi
00405c3e: pop       edi
00405c3f: pop       esi
00405c40: ret       8
00405c43: nop       
00405c44: nop       
00405c45: nop       
00405c46: nop       
00405c47: nop       
00405c48: nop       
00405c49: nop       
00405c4a: nop       
00405c4b: nop       
00405c4c: nop       
00405c4d: nop       
00405c4e: nop       
00405c4f: nop       
00405c50: mov       eax, dword ptr [esp + 4]
00405c54: push      esi
00405c55: mov       esi, ecx
00405c57: push      eax
00405c58: call      0x403ff0
00405c5d: fld       dword ptr [esi + 0x30]
00405c60: fild      dword ptr [esi + 0x28]
00405c63: fmul      st(1)
00405c65: call      0x60ab20
00405c6a: mov       ecx, dword ptr [esi + 0x38]
00405c6d: push      eax
00405c6e: fstp      st(0)
00405c70: call      0x4288c0
00405c75: mov       ecx, eax
00405c77: call      0x5966a0
00405c7c: mov       ecx, dword ptr [esi + 0x38]
00405c7f: call      0x428b10
00405c84: pop       esi
00405c85: ret       4
00405c88: nop       
00405c89: nop       
00405c8a: nop       
00405c8b: nop       
00405c8c: nop       
00405c8d: nop       
00405c8e: nop       
00405c8f: nop       
00405c90: push      esi
00405c91: mov       esi, ecx
00405c93: mov       ecx, dword ptr [esi + 0x38]
00405c96: call      0x4288c0
00405c9b: mov       ecx, eax
00405c9d: call      0x596c40
00405ca2: test      al, al
00405ca4: je        0x405cb5
00405ca6: mov       ecx, dword ptr [esi + 0x38]
00405ca9: call      0x428b40
00405cae: mov       ecx, esi
00405cb0: call      0x402d00
00405cb5: pop       esi
00405cb6: ret       8
00405cb9: nop       
00405cba: nop       
00405cbb: nop       
00405cbc: nop       
00405cbd: nop       
00405cbe: nop       
00405cbf: nop       
00405cc0: push      -1
00405cc2: push      0x61ffe0
00405cc7: mov       eax, dword ptr fs:[0]
00405ccd: push      eax
00405cce: mov       dword ptr fs:[0], esp
00405cd5: sub       esp, 0x14
00405cd8: mov       eax, dword ptr [esp + 0x24]
00405cdc: push      ebp
00405cdd: push      esi
00405cde: mov       ebp, ecx
00405ce0: push      eax
00405ce1: mov       dword ptr [esp + 0xc], ebp
00405ce5: call      0x405530
00405cea: mov       eax, dword ptr [esp + 0x30]
00405cee: xor       esi, esi
00405cf0: cmp       eax, -1
00405cf3: mov       dword ptr [esp + 0x24], esi
00405cf7: je        0x405daf
00405cfd: cmp       eax, esi
00405cff: jge       0x405daf
00405d05: mov       cl, byte ptr [esp + 0x30]
00405d09: push      ebx
00405d0a: push      edi
00405d0b: mov       byte ptr [esp + 0x14], cl
00405d0f: mov       edi, 0x6b3f70
00405d14: or        ecx, 0xffffffff
00405d17: xor       eax, eax
00405d19: push      1
00405d1b: repne scasb al, byte ptr es:[edi]
00405d1d: not       ecx
00405d1f: dec       ecx
00405d20: mov       dword ptr [esp + 0x1c], esi
00405d24: mov       ebx, ecx
00405d26: lea       ecx, [esp + 0x18]
00405d2a: push      ebx
00405d2b: mov       dword ptr [esp + 0x24], esi
00405d2f: mov       dword ptr [esp + 0x28], esi
00405d33: call      0x401940
00405d38: test      al, al
00405d3a: je        0x405d63
00405d3c: mov       edi, dword ptr [esp + 0x18]
00405d40: mov       ecx, ebx
00405d42: mov       edx, ecx
00405d44: mov       esi, 0x6b3f70
00405d49: shr       ecx, 2
00405d4c: rep movsd dword ptr es:[edi], dword ptr [esi]
00405d4e: mov       ecx, edx
00405d50: and       ecx, 3
00405d53: rep movsb byte ptr es:[edi], byte ptr [esi]
00405d55: mov       eax, dword ptr [esp + 0x18]
00405d59: mov       dword ptr [esp + 0x1c], ebx
00405d5d: xor       esi, esi
00405d5f: mov       byte ptr [ebx + eax], 0
00405d63: lea       ecx, [esp + 0x14]
00405d67: mov       byte ptr [esp + 0x2c], 1
00405d6c: push      ecx
00405d6d: push      0x56
00405d6f: push      0x68d4c8
00405d74: push      0x68d490
00405d79: call      0x5a07f0
00405d7e: call      eax
00405d80: mov       eax, dword ptr [esp + 0x28]
00405d84: add       esp, 0x10
00405d87: cmp       eax, esi
00405d89: mov       byte ptr [esp + 0x2c], 0
00405d8e: pop       edi
00405d8f: pop       ebx
00405d90: je        0x405daf
00405d92: lea       ecx, [eax - 1]
00405d95: mov       al, byte ptr [eax - 1]
00405d98: test      al, al
00405d9a: je        0x405da6
00405d9c: cmp       al, 0xff
00405d9e: je        0x405da6
00405da0: dec       al
00405da2: mov       byte ptr [ecx], al
00405da4: jmp       0x405daf
00405da6: push      ecx
00405da7: call      0x5fe5f0
00405dac: add       esp, 4
00405daf: mov       edx, dword ptr [esp + 0x30]
00405db3: mov       ecx, dword ptr [esp + 0x2c]
00405db7: mov       dword ptr [ebp + 0x30], edx
00405dba: mov       dword ptr [ebp + 0x34], 0xffffffff
00405dc1: mov       dword ptr [ebp + 0x38], 0x3f800000
00405dc8: mov       byte ptr [ebp + 0x3c], 1
00405dcc: mov       eax, dword ptr [ecx]
00405dce: lea       edx, [esp + 0xc]
00405dd2: push      edx
00405dd3: call      dword ptr [eax + 0x48]
00405dd6: mov       edx, dword ptr [eax]
00405dd8: lea       ecx, [ebp + 0x40]
00405ddb: pop       esi
00405ddc: mov       dword ptr [ecx], edx
00405dde: mov       edx, dword ptr [eax + 4]
00405de1: mov       dword ptr [ecx + 4], edx
00405de4: mov       eax, dword ptr [eax + 8]
00405de7: mov       dword ptr [ebp], 0x64a6b0
00405dee: mov       dword ptr [ecx + 8], eax
00405df1: mov       ecx, dword ptr [esp + 0x18]
00405df5: mov       eax, ebp
00405df7: pop       ebp
00405df8: mov       dword ptr fs:[0], ecx
00405dff: add       esp, 0x20
00405e02: ret       8
00405e05: nop       
00405e06: nop       
00405e07: nop       
00405e08: nop       
00405e09: nop       
00405e0a: nop       
00405e0b: nop       
00405e0c: nop       
00405e0d: nop       
00405e0e: nop       
00405e0f: nop       
00405e10: sub       esp, 0xc
00405e13: push      ebp
00405e14: push      esi
00405e15: mov       esi, ecx
00405e17: mov       ecx, dword ptr [esi + 0x28]
00405e1a: call      0x428b10
00405e1f: mov       ecx, dword ptr [esi + 0x28]
00405e22: call      0x425070
00405e27: mov       ebp, eax
00405e29: test      ebp, ebp
00405e2b: je        0x405e7f
00405e2d: mov       ecx, dword ptr [esi + 0x28]
00405e30: mov       eax, dword ptr [ecx]
00405e32: call      dword ptr [eax + 0xb4]
00405e38: cmp       eax, 0x13
00405e3b: ja        0x405e5c
00405e3d: jmp       dword ptr [eax*4 + 0x405ef4]
00405e44: fld       dword ptr [0x64a434]
00405e4a: jmp       0x405e62
00405e4c: fld       dword ptr [0x64a430]
00405e52: jmp       0x405e62
00405e54: fld       dword ptr [0x64a42c]
00405e5a: jmp       0x405e62
00405e5c: fld       dword ptr [0x64a354]
00405e62: push      edi
00405e63: mov       edi, dword ptr [esi + 0x28]
00405e66: call      0x60ab20
00405e6b: mov       edx, dword ptr [edi]
00405e6d: push      eax
00405e6e: mov       ecx, edi
00405e70: call      dword ptr [edx + 0x9c]
00405e76: push      eax
00405e77: mov       ecx, ebp
00405e79: call      0x46e9f0
00405e7e: pop       edi
00405e7f: mov       ecx, dword ptr [esi + 0x28]
00405e82: mov       eax, dword ptr [ecx]
00405e84: call      dword ptr [eax + 0x9c]
00405e8a: mov       ecx, eax
00405e8c: mov       byte ptr [eax + 0x208], 0
00405e93: call      0x49b8d0
00405e98: mov       ecx, dword ptr [esi + 0x28]
00405e9b: mov       edx, dword ptr [ecx]
00405e9d: call      dword ptr [edx + 0x9c]
00405ea3: mov       ecx, eax
00405ea5: mov       byte ptr [eax + 0x209], 0
00405eac: call      0x49b8d0
00405eb1: mov       ecx, dword ptr [esi + 0x28]
00405eb4: push      0x7f7fffff
00405eb9: push      0
00405ebb: push      5
00405ebd: mov       eax, dword ptr [ecx]
00405ebf: call      dword ptr [eax + 0x8c]
00405ec5: mov       ecx, dword ptr [esi + 0x28]
00405ec8: push      0x6b9760
00405ecd: call      0x505400
00405ed2: lea       ecx, [esi + 0x40]
00405ed5: lea       edx, [esp + 8]
00405ed9: push      ecx
00405eda: mov       ecx, dword ptr [esi + 0x28]
00405edd: push      edx
00405ede: call      0x4298c0
00405ee3: mov       eax, dword ptr [eax + 4]
00405ee6: mov       dword ptr [esi + 0x2c], eax
00405ee9: pop       esi
00405eea: pop       ebp
00405eeb: add       esp, 0xc
00405eee: ret       4
00405ef1: lea       ecx, [ecx]
00405ef4: pop       esp
00405ef5: pop       esi
00405ef6: inc       eax
00405ef7: add       byte ptr [esi + ebx*2 + 0x40], al
00405efb: add       byte ptr [esi + ebx*2 + 0x40], cl
00405eff: add       byte ptr [esi + ebx*2 + 0x40], bl
00405f03: add       byte ptr [esi + ebx*2 + 0x40], al
00405f07: add       byte ptr [esi + ebx*2 + 0x40], cl
00405f0b: add       byte ptr [esi + ebx*2 + 0x40], bl
00405f0f: add       byte ptr [esi + ebx*2 + 0x40], al
00405f13: add       byte ptr [esi + ebx*2 + 0x40], cl
00405f17: add       byte ptr [esi + ebx*2 + 0x40], dl
00405f1b: add       byte ptr [esi + ebx*2 + 0x40], dl
00405f1f: add       byte ptr [esi + ebx*2 + 0x40], dl
00405f23: add       byte ptr [esi + ebx*2 + 0x40], cl
00405f27: add       byte ptr [esi + ebx*2 + 0x40], cl
00405f2b: add       byte ptr [esi + ebx*2 + 0x40], al
00405f2f: add       byte ptr [esi + ebx*2 + 0x40], cl
00405f33: add       byte ptr [esi + ebx*2 + 0x40], dl
00405f37: add       byte ptr [esi + ebx*2 + 0x40], cl
00405f3b: add       byte ptr [esi + ebx*2 + 0x40], bl
00405f3f: add       byte ptr [esi + ebx*2 + 0x40], bl
00405f43: add       byte ptr [eax - 0x6f6f6f70], dl
00405f49: nop       
00405f4a: nop       
00405f4b: nop       
00405f4c: nop       
00405f4d: nop       
00405f4e: nop       
00405f4f: nop       
00405f50: sub       esp, 0x10
00405f53: push      esi
00405f54: mov       esi, ecx
00405f56: push      edi
00405f57: lea       eax, [esi + 0x40]
00405f5a: mov       ecx, dword ptr [esi + 0x40]
00405f5d: mov       dword ptr [esp + 0xc], ecx
00405f61: mov       ecx, dword ptr [esi + 0x30]
00405f64: mov       edx, dword ptr [eax + 4]
00405f67: cmp       ecx, -1
00405f6a: mov       dword ptr [esp + 0x10], edx
00405f6e: mov       dl, 1
00405f70: mov       eax, dword ptr [eax + 8]
00405f73: mov       dword ptr [esp + 8], ecx
00405f77: mov       dword ptr [esp + 0x14], eax
00405f7b: je        0x405fc8
00405f7d: mov       eax, dword ptr [esi + 0x34]
00405f80: cmp       eax, -1
00405f83: jne       0x405f97
00405f85: mov       eax, dword ptr [esp + 0x20]
00405f89: mov       dword ptr [esi + 0x38], 0x3f800000
00405f90: add       ecx, eax
00405f92: mov       dword ptr [esi + 0x34], ecx
00405f95: jmp       0x405fc8
00405f97: mov       edi, dword ptr [esp + 0x20]
00405f9b: cmp       edi, eax
00405f9d: jle       0x405faa
00405f9f: mov       dword ptr [esi + 0x38], 0
00405fa6: xor       dl, dl
00405fa8: jmp       0x405fc8
00405faa: test      ecx, ecx
00405fac: jle       0x405fc1
00405fae: sub       eax, edi
00405fb0: mov       dword ptr [esp + 0x20], eax
00405fb4: fild      dword ptr [esp + 0x20]
00405fb8: fidiv     dword ptr [esp + 8]
00405fbc: fstp      dword ptr [esi + 0x38]
00405fbf: jmp       0x405fc8
00405fc1: mov       dword ptr [esi + 0x38], 0
00405fc8: test      dl, dl
00405fca: mov       byte ptr [esi + 0x3c], dl
00405fcd: je        0x406001
00405fcf: fld       dword ptr [0x64a354]
00405fd5: fsub      dword ptr [esi + 0x38]
00405fd8: mov       ecx, dword ptr [esi + 0x28]
00405fdb: push      ecx
00405fdc: fmul      dword ptr [esi + 0x2c]
00405fdf: fld       dword ptr [esi + 0x44]
00405fe2: fmul      dword ptr [esi + 0x38]
00405fe5: faddp     st(1)
00405fe7: fstp      dword ptr [esp + 0x14]
00405feb: fld       dword ptr [esi + 0x38]
00405fee: fmul      dword ptr [0x64a438]
00405ff4: mov       edx, dword ptr [ecx]
00405ff6: fstp      dword ptr [esp]
00405ff9: call      dword ptr [edx + 0xac]
00405fff: jmp       0x406027
00406001: mov       eax, dword ptr [esi + 0x2c]
00406004: mov       ecx, dword ptr [esi + 0x28]
00406007: mov       dword ptr [esp + 0x10], eax
0040600b: push      0
0040600d: mov       edx, dword ptr [ecx]
0040600f: call      dword ptr [edx + 0xac]
00406015: mov       ecx, dword ptr [esi + 0x28]
00406018: mov       eax, dword ptr [ecx]
0040601a: call      dword ptr [eax + 0xb0]
00406020: mov       ecx, esi
00406022: call      0x402d00
00406027: mov       ecx, dword ptr [esi + 0x28]
0040602a: lea       eax, [esp + 0xc]
0040602e: push      eax
0040602f: mov       edx, dword ptr [ecx]
00406031: call      dword ptr [edx + 0x4c]
00406034: pop       edi
00406035: pop       esi
00406036: add       esp, 0x10
00406039: ret       8
0040603c: nop       
0040603d: nop       
0040603e: nop       
0040603f: nop       
00406040: mov       eax, dword ptr [esp + 4]
00406044: push      esi
00406045: mov       esi, ecx
00406047: push      eax
00406048: call      0x405530
0040604d: mov       dword ptr [esi + 0x2c], 0
00406054: mov       dword ptr [esi], 0x64a6c0
0040605a: mov       eax, esi
0040605c: pop       esi
0040605d: ret       4
00406060: push      esi
00406061: mov       esi, ecx
00406063: call      0x406080
00406068: test      byte ptr [esp + 8], 1
0040606d: je        0x406078
0040606f: push      esi
00406070: call      0x5fe5f0
00406075: add       esp, 4
00406078: mov       eax, esi
0040607a: pop       esi
0040607b: ret       4
0040607e: nop       
0040607f: nop       
00406080: push      -1
00406082: push      0x620000
00406087: mov       eax, dword ptr fs:[0]
0040608d: push      eax
0040608e: mov       dword ptr fs:[0], esp
00406095: sub       esp, 8
00406098: push      esi
00406099: mov       esi, ecx
0040609b: push      edi
0040609c: mov       dword ptr [esp + 0xc], esi
004060a0: mov       dword ptr [esi], 0x64a6c0
004060a6: mov       ecx, dword ptr [esi + 0x28]
004060a9: xor       edi, edi
004060ab: mov       dword ptr [esp + 0x18], edi
004060af: call      0x429970
004060b4: test      al, al
004060b6: je        0x406111
004060b8: mov       ecx, dword ptr [esi + 0x2c]
004060bb: cmp       ecx, edi
004060bd: je        0x406111
004060bf: call      0x598540
004060c4: test      eax, eax
004060c6: jle       0x406111
004060c8: mov       ecx, dword ptr [esi + 0x2c]
004060cb: lea       eax, [esp + 8]
004060cf: push      edi
004060d0: push      eax
004060d1: call      0x598310
004060d6: lea       ecx, [esp + 8]
004060da: mov       byte ptr [esp + 0x18], 1
004060df: call      0x59b1e0
004060e4: cmp       eax, -1
004060e7: je        0x4060f6
004060e9: mov       ecx, dword ptr [esp + 8]
004060ed: push      ecx
004060ee: mov       ecx, dword ptr [esi + 0x2c]
004060f1: call      0x598dd0
004060f6: lea       ecx, [esp + 8]
004060fa: mov       byte ptr [esp + 0x18], 0
004060ff: call      0x5630e0
00406104: mov       ecx, dword ptr [esi + 0x2c]
00406107: inc       edi
00406108: call      0x598540
0040610d: cmp       edi, eax
0040610f: jl        0x4060c8
00406111: mov       ecx, esi
00406113: mov       dword ptr [esp + 0x18], 0xffffffff
0040611b: call      0x4029b0
00406120: mov       ecx, dword ptr [esp + 0x10]
00406124: pop       edi
00406125: pop       esi
00406126: mov       dword ptr fs:[0], ecx
0040612d: add       esp, 0x14
00406130: ret       
00406131: nop       
00406132: nop       
00406133: nop       
00406134: nop       
00406135: nop       
00406136: nop       
00406137: nop       
00406138: nop       
00406139: nop       
0040613a: nop       
0040613b: nop       
0040613c: nop       
0040613d: nop       
0040613e: nop       
0040613f: nop       
00406140: push      -1
00406142: push      0x620030
00406147: mov       eax, dword ptr fs:[0]
0040614d: push      eax
0040614e: mov       dword ptr fs:[0], esp
00406155: sub       esp, 0x1c
00406158: push      ebx
00406159: push      ebp
0040615a: mov       ebp, ecx
0040615c: push      esi
0040615d: push      edi
0040615e: mov       dword ptr [esp + 0x14], ebp
00406162: mov       ecx, dword ptr [ebp + 0x28]
00406165: call      0x429970
0040616a: test      al, al
0040616c: je        0x406340
00406172: mov       ecx, dword ptr [ebp + 0x28]
00406175: lea       eax, [esp + 0x18]
00406179: push      eax
0040617a: call      0x4042e0
0040617f: mov       ebx, eax
00406181: mov       eax, dword ptr [ebx]
00406183: xor       esi, esi
00406185: cmp       eax, esi
00406187: mov       dword ptr [esp + 0x34], esi
0040618b: jne       0x406220
00406191: mov       cl, byte ptr [esp + 0x13]
00406195: push      esi
00406196: mov       byte ptr [esp + 0x20], cl
0040619a: lea       ecx, [esp + 0x20]
0040619e: call      0x4040a0
004061a3: mov       edi, 0x6b3f70
004061a8: or        ecx, 0xffffffff
004061ab: xor       eax, eax
004061ad: push      1
004061af: repne scasb al, byte ptr es:[edi]
004061b1: not       ecx
004061b3: dec       ecx
004061b4: mov       ebp, ecx
004061b6: lea       ecx, [esp + 0x20]
004061ba: push      ebp
004061bb: call      0x401940
004061c0: test      al, al
004061c2: je        0x4061e9
004061c4: mov       edi, dword ptr [esp + 0x20]
004061c8: mov       ecx, ebp
004061ca: mov       edx, ecx
004061cc: mov       esi, 0x6b3f70
004061d1: shr       ecx, 2
004061d4: rep movsd dword ptr es:[edi], dword ptr [esi]
004061d6: mov       ecx, edx
004061d8: push      ebp
004061d9: and       ecx, 3
004061dc: rep movsb byte ptr es:[edi], byte ptr [esi]
004061de: lea       ecx, [esp + 0x20]
004061e2: call      0x404190
004061e7: xor       esi, esi
004061e9: lea       eax, [esp + 0x1c]
004061ed: mov       byte ptr [esp + 0x34], 1
004061f2: push      eax
004061f3: push      0xb6
004061f8: push      0x68d638
004061fd: push      0x68d62c
00406202: call      0x5a07f0
00406207: call      eax
00406209: add       esp, 0x10
0040620c: lea       ecx, [esp + 0x1c]
00406210: mov       byte ptr [esp + 0x34], 0
00406215: push      1
00406217: call      0x4040a0
0040621c: mov       ebp, dword ptr [esp + 0x14]
00406220: mov       ecx, dword ptr [ebx]
00406222: call      0x4f3fd0
00406227: mov       edi, eax
00406229: mov       eax, dword ptr [esp + 0x18]
0040622d: or        ebx, 0xffffffff
00406230: cmp       eax, esi
00406232: mov       dword ptr [esp + 0x34], ebx
00406236: je        0x40624d
00406238: mov       edx, dword ptr [eax + 0x14]
0040623b: mov       ecx, eax
0040623d: add       eax, 0x14
00406240: dec       edx
00406241: cmp       edx, esi
00406243: mov       dword ptr [eax], edx
00406245: jne       0x40624d
00406247: push      esi
00406248: call      0x5abfc0
0040624d: lea       ecx, [esp + 0x18]
00406251: push      ecx
00406252: mov       ecx, dword ptr [ebp + 0x28]
00406255: call      0x429940
0040625a: mov       edx, dword ptr [eax]
0040625c: mov       ecx, edi
0040625e: push      edx
0040625f: mov       dword ptr [esp + 0x38], 2
00406267: call      0x59df90
0040626c: lea       ecx, [esp + 0x18]
00406270: mov       dword ptr [ebp + 0x2c], eax
00406273: mov       dword ptr [esp + 0x34], ebx
00406277: call      0x5630e0
0040627c: cmp       dword ptr [ebp + 0x2c], esi
0040627f: jne       0x406340
00406285: mov       al, byte ptr [esp + 0x13]
00406289: mov       edi, 0x6b3f70
0040628e: mov       byte ptr [esp + 0x1c], al
00406292: mov       ecx, ebx
00406294: xor       eax, eax
00406296: push      1
00406298: repne scasb al, byte ptr es:[edi]
0040629a: not       ecx
0040629c: dec       ecx
0040629d: mov       dword ptr [esp + 0x24], esi
004062a1: mov       ebp, ecx
004062a3: lea       ecx, [esp + 0x20]
004062a7: push      ebp
004062a8: mov       dword ptr [esp + 0x2c], esi
004062ac: mov       dword ptr [esp + 0x30], esi
004062b0: call      0x401940
004062b5: test      al, al
004062b7: je        0x4062e1
004062b9: mov       edi, dword ptr [esp + 0x20]
004062bd: mov       ecx, ebp
004062bf: mov       edx, ecx
004062c1: mov       esi, 0x6b3f70
004062c6: shr       ecx, 2
004062c9: rep movsd dword ptr es:[edi], dword ptr [esi]
004062cb: mov       ecx, edx
004062cd: push      ebp
004062ce: and       ecx, 3
004062d1: rep movsb byte ptr es:[edi], byte ptr [esi]
004062d3: lea       ecx, [esp + 0x20]
004062d7: call      0x404190
004062dc: xor       esi, esi
004062de: or        ebx, 0xffffffff
004062e1: lea       eax, [esp + 0x1c]
004062e5: mov       dword ptr [esp + 0x34], 3
004062ed: push      eax
004062ee: push      0x176
004062f3: push      0x68db7c
004062f8: push      0x68db74
004062fd: call      0x5a07f0
00406302: call      eax
00406304: mov       eax, dword ptr [esp + 0x30]
00406308: add       esp, 0x10
0040630b: cmp       eax, esi
0040630d: mov       dword ptr [esp + 0x34], ebx
00406311: je        0x406330
00406313: lea       ecx, [eax - 1]
00406316: mov       al, byte ptr [eax - 1]
00406319: test      al, al
0040631b: je        0x406327
0040631d: cmp       al, 0xff
0040631f: je        0x406327
00406321: dec       al
00406323: mov       byte ptr [ecx], al
00406325: jmp       0x406330
00406327: push      ecx
00406328: call      0x5fe5f0
0040632d: add       esp, 4
00406330: mov       ebp, dword ptr [esp + 0x14]
00406334: mov       dword ptr [esp + 0x20], esi
00406338: mov       dword ptr [esp + 0x24], esi
0040633c: mov       dword ptr [esp + 0x28], esi
00406340: mov       ecx, ebp
00406342: call      0x4064d0
00406347: mov       ecx, dword ptr [esp + 0x2c]
0040634b: pop       edi
0040634c: pop       esi
0040634d: pop       ebp
0040634e: pop       ebx
0040634f: mov       dword ptr fs:[0], ecx
00406356: add       esp, 0x28
00406359: ret       4
0040635c: nop       
0040635d: nop       
0040635e: nop       
0040635f: nop       
00406360: mov       eax, dword ptr fs:[0]
00406366: push      -1
00406368: push      0x620048
0040636d: push      eax
0040636e: mov       dword ptr fs:[0], esp
00406375: sub       esp, 0x10
00406378: push      ebx
00406379: push      esi
0040637a: mov       esi, ecx
0040637c: call      0x402cf0
00406381: xor       ebx, ebx
00406383: sub       eax, ebx
00406385: je        0x40648b
0040638b: dec       eax
0040638c: je        0x40645e
00406392: mov       al, byte ptr [esp + 0x2c]
00406396: push      ebp
00406397: push      edi
00406398: mov       byte ptr [esp + 0x10], al
0040639c: mov       edi, 0x68dba8
004063a1: or        ecx, 0xffffffff
004063a4: xor       eax, eax
004063a6: push      1
004063a8: repne scasb al, byte ptr es:[edi]
004063aa: not       ecx
004063ac: dec       ecx
004063ad: mov       dword ptr [esp + 0x18], ebx
004063b1: mov       ebp, ecx
004063b3: lea       ecx, [esp + 0x14]
004063b7: push      ebp
004063b8: mov       dword ptr [esp + 0x20], ebx
004063bc: mov       dword ptr [esp + 0x24], ebx
004063c0: call      0x401940
004063c5: test      al, al
004063c7: je        0x4063ed
004063c9: mov       edi, dword ptr [esp + 0x14]
004063cd: mov       ecx, ebp
004063cf: mov       edx, ecx
004063d1: mov       esi, 0x68dba8
004063d6: shr       ecx, 2
004063d9: rep movsd dword ptr es:[edi], dword ptr [esi]
004063db: mov       ecx, edx
004063dd: and       ecx, 3
004063e0: rep movsb byte ptr es:[edi], byte ptr [esi]
004063e2: mov       eax, dword ptr [esp + 0x14]
004063e6: mov       dword ptr [esp + 0x18], ebp
004063ea: mov       byte ptr [eax + ebp], bl
004063ed: lea       ecx, [esp + 0x10]
004063f1: mov       dword ptr [esp + 0x28], ebx
004063f5: push      ecx
004063f6: push      0x191
004063fb: push      0x68db7c
00406400: push      0x68d2d0
00406405: call      0x5a07f0
0040640a: call      eax
0040640c: mov       eax, dword ptr [esp + 0x24]
00406410: add       esp, 0x10
00406413: cmp       eax, ebx
00406415: pop       edi
00406416: pop       ebp
00406417: je        0x4064bc
0040641d: lea       ecx, [eax - 1]
00406420: mov       al, byte ptr [eax - 1]
00406423: cmp       al, bl
00406425: je        0x406442
00406427: cmp       al, 0xff
00406429: je        0x406442
0040642b: dec       al
0040642d: pop       esi
0040642e: mov       byte ptr [ecx], al
00406430: pop       ebx
00406431: mov       ecx, dword ptr [esp + 0x10]
00406435: mov       dword ptr fs:[0], ecx
0040643c: add       esp, 0x1c
0040643f: ret       8
00406442: push      ecx
00406443: call      0x5fe5f0
00406448: add       esp, 4
0040644b: pop       esi
0040644c: pop       ebx
0040644d: mov       ecx, dword ptr [esp + 0x10]
00406451: mov       dword ptr fs:[0], ecx
00406458: add       esp, 0x1c
0040645b: ret       8
0040645e: mov       ecx, dword ptr [esi + 0x28]
00406461: call      0x4288c0
00406466: mov       ecx, eax
00406468: call      0x596c40
0040646d: test      al, al
0040646f: je        0x4064bc
00406471: mov       ecx, esi
00406473: call      0x402d00
00406478: pop       esi
00406479: pop       ebx
0040647a: mov       ecx, dword ptr [esp + 0x10]
0040647e: mov       dword ptr fs:[0], ecx
00406485: add       esp, 0x1c
00406488: ret       8
0040648b: mov       edx, dword ptr [esp + 0x2c]
0040648f: mov       eax, dword ptr [esp + 0x28]
00406493: push      edx
00406494: push      eax
00406495: mov       ecx, esi
00406497: call      0x402a80
0040649c: mov       ecx, eax
0040649e: call      0x402d20
004064a3: mov       ecx, esi
004064a5: call      0x402a80
004064aa: mov       ecx, eax
004064ac: call      0x402d10
004064b1: test      al, al
004064b3: je        0x4064bc
004064b5: mov       ecx, esi
004064b7: call      0x406550
004064bc: mov       ecx, dword ptr [esp + 0x18]
004064c0: pop       esi
004064c1: pop       ebx
004064c2: mov       dword ptr fs:[0], ecx
004064c9: add       esp, 0x1c
004064cc: ret       8
004064cf: nop       
004064d0: push      -1
004064d2: push      0x62006b
004064d7: mov       eax, dword ptr fs:[0]
004064dd: push      eax
004064de: mov       dword ptr fs:[0], esp
004064e5: push      ecx
004064e6: push      esi
004064e7: mov       esi, ecx
004064e9: push      -1
004064eb: mov       ecx, dword ptr [esi + 0x28]
004064ee: call      0x4288c0
004064f3: mov       ecx, eax
004064f5: call      0x5966a0
004064fa: push      0x28
