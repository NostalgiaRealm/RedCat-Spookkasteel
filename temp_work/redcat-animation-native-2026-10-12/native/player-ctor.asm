00430640: dec       esp
00430641: and       al, 0x18
00430643: pop       edi
00430644: pop       esi
00430645: pop       ebp
00430646: mov       dword ptr fs:[0], ecx
0043064d: pop       ebx
0043064e: add       esp, 0x14
00430651: ret       
00430652: nop       
00430653: nop       
00430654: nop       
00430655: nop       
00430656: nop       
00430657: nop       
00430658: nop       
00430659: nop       
0043065a: nop       
0043065b: nop       
0043065c: nop       
0043065d: nop       
0043065e: nop       
0043065f: nop       
00430660: push      0x430670
00430665: call      0x60a57b
0043066a: pop       ecx
0043066b: ret       
0043066c: nop       
0043066d: nop       
0043066e: nop       
0043066f: nop       
00430670: mov       cl, byte ptr [0x6b5358]
00430676: mov       al, 1
00430678: test      al, cl
0043067a: jne       0x43068e
0043067c: or        cl, al
0043067e: mov       byte ptr [0x6b5358], cl
00430684: mov       ecx, 0x6b5360
00430689: jmp       0x429cc0
0043068e: ret       
0043068f: nop       
00430690: call      0x4306a0
00430695: jmp       0x430770
0043069a: nop       
0043069b: nop       
0043069c: nop       
0043069d: nop       
0043069e: nop       
0043069f: nop       
004306a0: sub       esp, 8
004306a3: push      ebx
004306a4: mov       al, byte ptr [esp + 7]
004306a8: push      ebp
004306a9: push      esi
004306aa: push      edi
004306ab: xor       esi, esi
004306ad: sub       esp, 0x10
004306b0: mov       edi, 0x690294
004306b5: mov       ebp, esp
004306b7: or        ecx, 0xffffffff
004306ba: mov       dword ptr [esp + 0x24], esp
004306be: mov       byte ptr [ebp], al
004306c1: xor       eax, eax
004306c3: mov       dword ptr [ebp + 4], esi
004306c6: mov       dword ptr [ebp + 8], esi
004306c9: mov       dword ptr [ebp + 0xc], esi
004306cc: repne scasb al, byte ptr es:[edi]
004306ce: not       ecx
004306d0: dec       ecx
004306d1: mov       ebx, ecx
004306d3: cmp       ebx, -3
004306d6: jbe       0x4306dd
004306d8: call      0x5fe5fb
004306dd: mov       ecx, dword ptr [ebp + 4]
004306e0: cmp       ecx, esi
004306e2: je        0x430702
004306e4: mov       al, byte ptr [ecx - 1]
004306e7: test      al, al
004306e9: je        0x430702
004306eb: cmp       al, 0xff
004306ed: je        0x430702
004306ef: cmp       ebx, esi
004306f1: jne       0x430726
004306f3: dec       al
004306f5: push      esi
004306f6: mov       byte ptr [ecx - 1], al
004306f9: mov       ecx, ebp
004306fb: call      0x4040a0
00430700: jmp       0x430750
00430702: cmp       ebx, esi
00430704: jne       0x430711
00430706: push      1
00430708: mov       ecx, ebp
0043070a: call      0x4040a0
0043070f: jmp       0x430750
00430711: mov       eax, dword ptr [ebp + 0xc]
00430714: cmp       eax, 0x1f
00430717: ja        0x43071d
00430719: cmp       eax, ebx
0043071b: jae       0x43072e
0043071d: push      1
0043071f: mov       ecx, ebp
00430721: call      0x4040a0
00430726: push      ebx
00430727: mov       ecx, ebp
00430729: call      0x401a60
0043072e: mov       edi, dword ptr [ebp + 4]
00430731: mov       ecx, ebx
00430733: mov       edx, ecx
00430735: mov       esi, 0x690294
0043073a: shr       ecx, 2
0043073d: rep movsd dword ptr es:[edi], dword ptr [esi]
0043073f: mov       ecx, edx
00430741: and       ecx, 3
00430744: rep movsb byte ptr es:[edi], byte ptr [esi]
00430746: mov       eax, dword ptr [ebp + 4]
00430749: mov       dword ptr [ebp + 8], ebx
0043074c: mov       byte ptr [eax + ebx], 0
00430750: push      0x6b8df0
00430755: mov       ecx, 0x6b5330
0043075a: call      0x40c860
0043075f: pop       edi
00430760: pop       esi
00430761: pop       ebp
00430762: pop       ebx
00430763: add       esp, 8
00430766: ret       
00430767: nop       
00430768: nop       
00430769: nop       
0043076a: nop       
0043076b: nop       
0043076c: nop       
0043076d: nop       
0043076e: nop       
0043076f: nop       
00430770: push      0x430780
00430775: call      0x60a57b
0043077a: pop       ecx
0043077b: ret       
0043077c: nop       
0043077d: nop       
0043077e: nop       
0043077f: nop       
00430780: mov       cl, byte ptr [0x6b5358]
00430786: mov       al, 2
00430788: test      al, cl
0043078a: jne       0x43079e
0043078c: or        cl, al
0043078e: mov       byte ptr [0x6b5358], cl
00430794: mov       ecx, 0x6b5330
00430799: jmp       0x429cc0
0043079e: ret       
0043079f: nop       
004307a0: call      0x4307b0
004307a5: jmp       0x430880
004307aa: nop       
004307ab: nop       
004307ac: nop       
004307ad: nop       
004307ae: nop       
004307af: nop       
004307b0: sub       esp, 8
004307b3: push      ebx
004307b4: mov       al, byte ptr [esp + 7]
004307b8: push      ebp
004307b9: push      esi
004307ba: push      edi
004307bb: xor       esi, esi
004307bd: sub       esp, 0x10
004307c0: mov       edi, 0x6902a4
004307c5: mov       ebp, esp
004307c7: or        ecx, 0xffffffff
004307ca: mov       dword ptr [esp + 0x24], esp
004307ce: mov       byte ptr [ebp], al
004307d1: xor       eax, eax
004307d3: mov       dword ptr [ebp + 4], esi
004307d6: mov       dword ptr [ebp + 8], esi
004307d9: mov       dword ptr [ebp + 0xc], esi
004307dc: repne scasb al, byte ptr es:[edi]
004307de: not       ecx
004307e0: dec       ecx
004307e1: mov       ebx, ecx
004307e3: cmp       ebx, -3
004307e6: jbe       0x4307ed
004307e8: call      0x5fe5fb
004307ed: mov       ecx, dword ptr [ebp + 4]
004307f0: cmp       ecx, esi
004307f2: je        0x430812
004307f4: mov       al, byte ptr [ecx - 1]
004307f7: test      al, al
004307f9: je        0x430812
004307fb: cmp       al, 0xff
004307fd: je        0x430812
004307ff: cmp       ebx, esi
00430801: jne       0x430836
00430803: dec       al
00430805: push      esi
00430806: mov       byte ptr [ecx - 1], al
00430809: mov       ecx, ebp
0043080b: call      0x4040a0
00430810: jmp       0x430860
00430812: cmp       ebx, esi
00430814: jne       0x430821
00430816: push      1
00430818: mov       ecx, ebp
0043081a: call      0x4040a0
0043081f: jmp       0x430860
00430821: mov       eax, dword ptr [ebp + 0xc]
00430824: cmp       eax, 0x1f
00430827: ja        0x43082d
00430829: cmp       eax, ebx
0043082b: jae       0x43083e
0043082d: push      1
0043082f: mov       ecx, ebp
00430831: call      0x4040a0
00430836: push      ebx
00430837: mov       ecx, ebp
00430839: call      0x401a60
0043083e: mov       edi, dword ptr [ebp + 4]
00430841: mov       ecx, ebx
00430843: mov       edx, ecx
00430845: mov       esi, 0x6902a4
0043084a: shr       ecx, 2
0043084d: rep movsd dword ptr es:[edi], dword ptr [esi]
0043084f: mov       ecx, edx
00430851: and       ecx, 3
00430854: rep movsb byte ptr es:[edi], byte ptr [esi]
00430856: mov       eax, dword ptr [ebp + 4]
00430859: mov       dword ptr [ebp + 8], ebx
0043085c: mov       byte ptr [eax + ebx], 0
00430860: push      0x6b8df0
00430865: mov       ecx, 0x6b5308
0043086a: call      0x40c860
0043086f: pop       edi
00430870: pop       esi
00430871: pop       ebp
00430872: pop       ebx
00430873: add       esp, 8
00430876: ret       
00430877: nop       
00430878: nop       
00430879: nop       
0043087a: nop       
0043087b: nop       
0043087c: nop       
0043087d: nop       
0043087e: nop       
0043087f: nop       
00430880: push      0x430890
00430885: call      0x60a57b
0043088a: pop       ecx
0043088b: ret       
0043088c: nop       
0043088d: nop       
0043088e: nop       
0043088f: nop       
00430890: mov       cl, byte ptr [0x6b5358]
00430896: mov       al, 4
00430898: test      al, cl
0043089a: jne       0x4308ae
0043089c: or        cl, al
0043089e: mov       byte ptr [0x6b5358], cl
004308a4: mov       ecx, 0x6b5308
004308a9: jmp       0x429cc0
004308ae: ret       
004308af: nop       
004308b0: call      0x4308c0
004308b5: jmp       0x430990
004308ba: nop       
004308bb: nop       
004308bc: nop       
004308bd: nop       
004308be: nop       
004308bf: nop       
004308c0: sub       esp, 8
004308c3: push      ebx
004308c4: mov       al, byte ptr [esp + 7]
004308c8: push      ebp
004308c9: push      esi
004308ca: push      edi
004308cb: xor       esi, esi
004308cd: sub       esp, 0x10
004308d0: mov       edi, 0x6902b4
004308d5: mov       ebp, esp
004308d7: or        ecx, 0xffffffff
004308da: mov       dword ptr [esp + 0x24], esp
004308de: mov       byte ptr [ebp], al
004308e1: xor       eax, eax
004308e3: mov       dword ptr [ebp + 4], esi
004308e6: mov       dword ptr [ebp + 8], esi
004308e9: mov       dword ptr [ebp + 0xc], esi
004308ec: repne scasb al, byte ptr es:[edi]
004308ee: not       ecx
004308f0: dec       ecx
004308f1: mov       ebx, ecx
004308f3: cmp       ebx, -3
004308f6: jbe       0x4308fd
004308f8: call      0x5fe5fb
004308fd: mov       ecx, dword ptr [ebp + 4]
00430900: cmp       ecx, esi
00430902: je        0x430922
00430904: mov       al, byte ptr [ecx - 1]
00430907: test      al, al
00430909: je        0x430922
0043090b: cmp       al, 0xff
0043090d: je        0x430922
0043090f: cmp       ebx, esi
00430911: jne       0x430946
00430913: dec       al
00430915: push      esi
00430916: mov       byte ptr [ecx - 1], al
00430919: mov       ecx, ebp
0043091b: call      0x4040a0
00430920: jmp       0x430970
00430922: cmp       ebx, esi
00430924: jne       0x430931
00430926: push      1
00430928: mov       ecx, ebp
0043092a: call      0x4040a0
0043092f: jmp       0x430970
00430931: mov       eax, dword ptr [ebp + 0xc]
00430934: cmp       eax, 0x1f
00430937: ja        0x43093d
00430939: cmp       eax, ebx
0043093b: jae       0x43094e
0043093d: push      1
0043093f: mov       ecx, ebp
00430941: call      0x4040a0
00430946: push      ebx
00430947: mov       ecx, ebp
00430949: call      0x401a60
0043094e: mov       edi, dword ptr [ebp + 4]
00430951: mov       ecx, ebx
00430953: mov       edx, ecx
00430955: mov       esi, 0x6902b4
0043095a: shr       ecx, 2
0043095d: rep movsd dword ptr es:[edi], dword ptr [esi]
0043095f: mov       ecx, edx
00430961: and       ecx, 3
00430964: rep movsb byte ptr es:[edi], byte ptr [esi]
00430966: mov       eax, dword ptr [ebp + 4]
00430969: mov       dword ptr [ebp + 8], ebx
0043096c: mov       byte ptr [eax + ebx], 0
00430970: push      0x6b8df0
00430975: mov       ecx, 0x6b52e0
0043097a: call      0x40c860
0043097f: pop       edi
00430980: pop       esi
00430981: pop       ebp
00430982: pop       ebx
00430983: add       esp, 8
00430986: ret       
00430987: nop       
00430988: nop       
00430989: nop       
0043098a: nop       
0043098b: nop       
0043098c: nop       
0043098d: nop       
0043098e: nop       
0043098f: nop       
00430990: push      0x4309a0
00430995: call      0x60a57b
0043099a: pop       ecx
0043099b: ret       
0043099c: nop       
0043099d: nop       
0043099e: nop       
0043099f: nop       
004309a0: mov       cl, byte ptr [0x6b5358]
004309a6: mov       al, 8
004309a8: test      al, cl
004309aa: jne       0x4309be
004309ac: or        cl, al
004309ae: mov       byte ptr [0x6b5358], cl
004309b4: mov       ecx, 0x6b52e0
004309b9: jmp       0x429cc0
004309be: ret       
004309bf: nop       
004309c0: sub       esp, 0x54
004309c3: mov       eax, dword ptr [esp + 0x60]
004309c7: push      esi
004309c8: mov       esi, dword ptr [esp + 0x5c]
004309cc: mov       dword ptr [esp + 0x10], 0
004309d4: mov       ecx, dword ptr [eax]
004309d6: mov       dword ptr [esp + 0x14], 0x3f800000
004309de: mov       dword ptr [esp + 4], ecx
004309e2: mov       ecx, esi
004309e4: mov       edx, dword ptr [eax + 4]
004309e7: mov       dword ptr [esp + 0x18], 0
004309ef: mov       dword ptr [esp + 8], edx
004309f3: lea       edx, [esp + 4]
004309f7: mov       eax, dword ptr [eax + 8]
004309fa: mov       dword ptr [esp + 0xc], eax
004309fe: call      0x5b3670
00430a03: fld       dword ptr [esp + 4]
00430a07: fcomp     dword ptr [0x64a450]
00430a0d: fnstsw    ax
00430a0f: test      ah, 0x40
00430a12: je        0x430a2d
00430a14: fld       dword ptr [esp + 0xc]
00430a18: fcomp     dword ptr [0x64a450]
00430a1e: fnstsw    ax
00430a20: test      ah, 0x40
00430a23: je        0x430a2d
00430a25: mov       dword ptr [esp + 4], 0x3f800000
00430a2d: lea       ecx, [esp + 4]
00430a31: mov       dword ptr [esp + 8], 0
00430a39: call      0x5b2f20
00430a3e: lea       ecx, [esp + 0x1c]
00430a42: lea       edx, [esp + 4]
00430a46: push      ecx
00430a47: lea       ecx, [esp + 0x14]
00430a4b: fstp      st(0)
00430a4d: call      0x5b2e60
00430a52: lea       edx, [esp + 4]
00430a56: lea       eax, [esp + 0x10]
00430a5a: push      edx
00430a5b: push      eax
00430a5c: lea       edx, [esp + 0x24]
00430a60: mov       ecx, esi
00430a62: call      0x5b38e0
00430a67: mov       edx, dword ptr [esp + 0x60]
00430a6b: lea       ecx, [esi + 0x24]
00430a6e: push      0xbfc90fdb
00430a73: mov       eax, dword ptr [edx]
00430a75: mov       dword ptr [ecx], eax
00430a77: mov       eax, dword ptr [edx + 4]
00430a7a: mov       dword ptr [ecx + 4], eax
00430a7d: mov       edx, dword ptr [edx + 8]
00430a80: mov       dword ptr [ecx + 8], edx
00430a83: lea       ecx, [esp + 0x2c]
00430a87: call      0x5b30f0
00430a8c: push      esi
00430a8d: lea       edx, [esp + 0x2c]
00430a91: mov       ecx, esi
00430a93: call      0x5b32c0
00430a98: push      0x40490fdb
00430a9d: lea       ecx, [esp + 0x2c]
00430aa1: call      0x5b3170
00430aa6: push      esi
00430aa7: lea       edx, [esp + 0x2c]
00430aab: mov       ecx, esi
00430aad: call      0x5b32c0
00430ab2: pop       esi
00430ab3: add       esp, 0x54
00430ab6: ret       
00430ab7: nop       
00430ab8: nop       
00430ab9: nop       
00430aba: nop       
00430abb: nop       
00430abc: nop       
00430abd: nop       
00430abe: nop       
00430abf: nop       
00430ac0: sub       esp, 0xc
00430ac3: fld       dword ptr [esp + 0x18]
00430ac7: fsin      
00430ac9: mov       ecx, dword ptr [esp + 0x14]
00430acd: mov       edx, dword ptr [esp + 0x10]
00430ad1: lea       eax, [esp]
00430ad5: mov       dword ptr [esp + 4], 0
00430add: push      eax
00430ade: push      ecx
00430adf: push      edx
00430ae0: fstp      dword ptr [esp + 0xc]
00430ae4: fld       dword ptr [esp + 0x24]
00430ae8: fcos      
00430aea: fstp      dword ptr [esp + 0x14]
00430aee: call      0x4309c0
00430af3: add       esp, 0x18
00430af6: ret       
00430af7: nop       
00430af8: nop       
00430af9: nop       
00430afa: nop       
00430afb: nop       
00430afc: nop       
00430afd: nop       
00430afe: nop       
00430aff: nop       
00430b00: push      -1
00430b02: push      0x623822
00430b07: mov       eax, dword ptr fs:[0]
00430b0d: push      eax
00430b0e: mov       dword ptr fs:[0], esp
00430b15: sub       esp, 0xc0
00430b1b: push      ebx
00430b1c: push      ebp
00430b1d: push      esi
00430b1e: mov       ebp, ecx
00430b20: xor       ebx, ebx
00430b22: push      edi
00430b23: mov       dword ptr [esp + 0x50], ebp
00430b27: mov       dword ptr [esp + 0x14], ebx
00430b2b: call      0x4d57b0
00430b30: push      ebp
00430b31: lea       ecx, [ebp + 0x258]
00430b37: mov       dword ptr [esp + 0xdc], ebx
00430b3e: mov       dword ptr [ebp + 0x250], ebx
00430b44: mov       dword ptr [ebp + 0x254], ebx
00430b4a: call      0x47f010
00430b4f: lea       ecx, [ebp + 0x314]
00430b55: mov       byte ptr [esp + 0xd8], 1
00430b5d: call      0x491860
00430b62: mov       esi, 1
00430b67: mov       dword ptr [ebp + 0x330], ebx
00430b6d: mov       dword ptr [ebp + 0x334], ebx
00430b73: mov       dword ptr [ebp + 0x338], ebx
00430b79: mov       dword ptr [ebp + 0x340], esi
00430b7f: mov       dword ptr [ebp + 0x344], esi
00430b85: mov       dword ptr [ebp + 0x34c], ebx
00430b8b: mov       dword ptr [ebp + 0x35c], ebx
00430b91: mov       dword ptr [ebp + 0x360], ebx
00430b97: mov       byte ptr [ebp + 0x364], bl
00430b9d: mov       dword ptr [ebp + 0x368], ebx
00430ba3: mov       dword ptr [ebp + 0x36c], ebx
00430ba9: mov       byte ptr [ebp + 0x370], bl
00430baf: mov       byte ptr [ebp + 0x372], bl
00430bb5: mov       dword ptr [ebp + 0x390], ebx
00430bbb: mov       byte ptr [ebp + 0x394], 1
00430bc2: mov       dword ptr [ebp + 0x398], ebx
00430bc8: mov       dword ptr [ebp + 0x3a0], ebx
00430bce: mov       byte ptr [esp + 0xd8], 3
00430bd6: mov       dword ptr [ebp], 0x64c430
00430bdd: call      0x431050
00430be2: mov       edi, eax
00430be4: call      0x431000
00430be9: fmul      dword ptr [edi + 0x818]
00430bef: fstp      dword ptr [ebp + 0x374]
00430bf5: call      0x431050
00430bfa: mov       edi, eax
00430bfc: call      0x431000
00430c01: fmul      dword ptr [edi + 0x81c]
00430c07: fstp      dword ptr [ebp + 0x378]
00430c0d: call      0x431050
00430c12: mov       eax, dword ptr [eax + 0x820]
00430c18: mov       dword ptr [ebp + 0x37c], eax
00430c1e: call      0x431050
00430c23: mov       ecx, dword ptr [eax + 0x824]
00430c29: mov       dword ptr [ebp + 0x380], ecx
00430c2f: call      0x431050
00430c34: mov       edx, dword ptr [eax + 0x828]
00430c3a: mov       dword ptr [ebp + 0x384], edx
00430c40: call      0x431050
00430c45: mov       eax, dword ptr [eax + 0x82c]
00430c4b: mov       byte ptr [ebp + 0x104], 1
00430c52: mov       dword ptr [ebp + 0x388], eax
00430c58: mov       eax, dword ptr [0x6b915c]
00430c5d: cmp       eax, ebx
00430c5f: jne       0x430c66
00430c61: call      0x4bc480
00430c66: push      esi
00430c67: push      0x690308
00430c6c: push      0x6902e8
00430c71: push      ebx
00430c72: push      eax
00430c73: call      0x60a6f2
00430c78: mov       ecx, dword ptr [eax + 0x3a4]
00430c7e: add       esp, 0x14
00430c81: cmp       ecx, ebx
00430c83: jne       0x430ced
00430c85: mov       cl, byte ptr [esp + 0x13]
00430c89: push      ebx
00430c8a: mov       byte ptr [esp + 0x44], cl
00430c8e: lea       ecx, [esp + 0x44]
00430c92: call      0x4040a0
00430c97: mov       edi, 0x6b3f70
00430c9c: or        ecx, 0xffffffff
00430c9f: xor       eax, eax
00430ca1: repne scasb al, byte ptr es:[edi]
00430ca3: not       ecx
00430ca5: dec       ecx
00430ca6: push      ecx
00430ca7: push      0x6b3f70
00430cac: lea       ecx, [esp + 0x48]
00430cb0: call      0x4040f0
00430cb5: lea       edx, [esp + 0x40]
00430cb9: mov       byte ptr [esp + 0xd8], 4
00430cc1: push      edx
00430cc2: push      0x130
00430cc7: push      0x68e58c
00430ccc: push      0x68e584
00430cd1: call      0x5a07f0
00430cd6: call      eax
00430cd8: add       esp, 0x10
00430cdb: lea       ecx, [esp + 0x40]
00430cdf: mov       byte ptr [esp + 0xd8], 3
00430ce7: push      esi
00430ce8: call      0x4040a0
00430ced: mov       al, byte ptr [esp + 0x13]
00430cf1: push      ebx
00430cf2: lea       ecx, [esp + 0x34]
00430cf6: mov       byte ptr [esp + 0x34], al
00430cfa: call      0x4040a0
00430cff: mov       edi, 0x6902e0
00430d04: or        ecx, 0xffffffff
00430d07: xor       eax, eax
00430d09: push      esi
00430d0a: repne scasb al, byte ptr es:[edi]
00430d0c: not       ecx
00430d0e: dec       ecx
00430d0f: mov       edi, ecx
00430d11: lea       ecx, [esp + 0x34]
00430d15: push      edi
00430d16: mov       dword ptr [esp + 0x20], edi
00430d1a: call      0x401940
00430d1f: test      al, al
00430d21: je        0x430d48
00430d23: mov       ecx, edi
00430d25: mov       edi, dword ptr [esp + 0x34]
00430d29: mov       edx, ecx
00430d2b: mov       esi, 0x6902e0
00430d30: shr       ecx, 2
00430d33: rep movsd dword ptr es:[edi], dword ptr [esi]
00430d35: mov       ecx, edx
00430d37: mov       eax, edx
00430d39: and       ecx, 3
00430d3c: push      eax
00430d3d: rep movsb byte ptr es:[edi], byte ptr [esi]
00430d3f: lea       ecx, [esp + 0x34]
00430d43: call      0x404190
00430d48: mov       cl, byte ptr [esp + 0x13]
00430d4c: push      ebx
00430d4d: mov       byte ptr [esp + 0x20], cl
00430d51: lea       ecx, [esp + 0x20]
00430d55: mov       byte ptr [esp + 0xdc], 5
00430d5d: call      0x4040a0
00430d62: mov       edi, 0x6902d4
00430d67: or        ecx, 0xffffffff
00430d6a: xor       eax, eax
00430d6c: push      1
00430d6e: repne scasb al, byte ptr es:[edi]
00430d70: not       ecx
00430d72: dec       ecx
00430d73: mov       esi, ecx
00430d75: lea       ecx, [esp + 0x20]
00430d79: push      esi
00430d7a: mov       dword ptr [esp + 0x20], esi
00430d7e: call      0x401940
00430d83: test      al, al
00430d85: je        0x430dac
00430d87: mov       edi, dword ptr [esp + 0x20]
00430d8b: mov       ecx, esi
00430d8d: mov       edx, ecx
00430d8f: mov       esi, 0x6902d4
00430d94: shr       ecx, 2
00430d97: rep movsd dword ptr es:[edi], dword ptr [esi]
00430d99: mov       ecx, edx
00430d9b: mov       eax, edx
00430d9d: and       ecx, 3
00430da0: push      eax
00430da1: rep movsb byte ptr es:[edi], byte ptr [esi]
00430da3: lea       ecx, [esp + 0x20]
00430da7: call      0x404190
00430dac: lea       ecx, [esp + 0x54]
00430db0: mov       byte ptr [esp + 0xd8], 6
00430db8: push      ecx
00430db9: call      0x436f90
00430dbe: add       esp, 4
00430dc1: push      ebx
00430dc2: push      eax
00430dc3: lea       edx, [esp + 0x38]
00430dc7: push      ebx
00430dc8: lea       eax, [esp + 0x28]
00430dcc: push      edx
00430dcd: push      eax
00430dce: lea       ecx, [esp + 0x78]
00430dd2: mov       byte ptr [esp + 0xec], 7
00430dda: call      0x5ac9d0
00430ddf: mov       esi, eax
00430de1: mov       eax, dword ptr [esi + 0x64]
00430de4: cmp       eax, 0x80000000
00430de9: jne       0x430e03
00430deb: mov       eax, dword ptr [esi + 0x18]
00430dee: cmp       eax, ebx
00430df0: jne       0x430df7
00430df2: mov       eax, 0x64a3b4
00430df7: push      eax
00430df8: call      0x60af10
00430dfd: add       esp, 4
00430e00: mov       dword ptr [esi + 0x64], eax
00430e03: lea       ecx, [esp + 0x64]
00430e07: mov       dword ptr [ebp + 0x33c], eax
00430e0d: call      0x5acca0
00430e12: push      1
00430e14: lea       ecx, [esp + 0x58]
00430e18: mov       byte ptr [esp + 0xdc], 6
00430e20: call      0x4040a0
00430e25: push      1
00430e27: lea       ecx, [esp + 0x20]
00430e2b: mov       byte ptr [esp + 0xdc], 5
00430e33: call      0x4040a0
00430e38: push      1
00430e3a: lea       ecx, [esp + 0x34]
00430e3e: mov       byte ptr [esp + 0xdc], 3
00430e46: call      0x4040a0
00430e4b: mov       ecx, ebp
00430e4d: call      0x431260
00430e52: push      0x388
00430e57: call      0x60a0b5
00430e5c: mov       esi, eax
00430e5e: add       esp, 4
00430e61: mov       dword ptr [esp + 0x2c], esi
00430e65: cmp       esi, ebx
00430e67: mov       byte ptr [esp + 0xd8], 8
00430e6f: je        0x430f15
00430e75: mov       cl, byte ptr [esp + 0x13]
00430e79: push      ebx
00430e7a: mov       byte ptr [esp + 0x20], cl
00430e7e: lea       ecx, [esp + 0x20]
00430e82: call      0x4040a0
00430e87: mov       edi, 0x6902c4
00430e8c: or        ecx, 0xffffffff
00430e8f: xor       eax, eax
00430e91: push      1
00430e93: repne scasb al, byte ptr es:[edi]
00430e95: not       ecx
00430e97: dec       ecx
00430e98: mov       edi, ecx
00430e9a: lea       ecx, [esp + 0x20]
00430e9e: push      edi
00430e9f: mov       dword ptr [esp + 0x20], edi
00430ea3: call      0x401940
00430ea8: test      al, al
00430eaa: je        0x430ed6
00430eac: mov       ecx, edi
00430eae: mov       edi, dword ptr [esp + 0x20]
00430eb2: mov       edx, ecx
00430eb4: mov       esi, 0x6902c4
00430eb9: shr       ecx, 2
00430ebc: rep movsd dword ptr es:[edi], dword ptr [esi]
00430ebe: mov       ecx, edx
00430ec0: mov       eax, edx
00430ec2: and       ecx, 3
00430ec5: rep movsb byte ptr es:[edi], byte ptr [esi]
00430ec7: mov       ecx, dword ptr [esp + 0x20]
00430ecb: mov       esi, dword ptr [esp + 0x2c]
00430ecf: mov       dword ptr [esp + 0x24], eax
00430ed3: mov       byte ptr [ecx + eax], bl
00430ed6: mov       dword ptr [esp + 0x14], 1
00430ede: lea       edx, [esp + 0x1c]
00430ee2: lea       eax, [esp + 0x54]
00430ee6: push      edx
00430ee7: push      eax
00430ee8: mov       byte ptr [esp + 0xe0], 9
00430ef0: call      0x5033a0
00430ef5: add       esp, 8
00430ef8: mov       dword ptr [esp + 0x14], 3
00430f00: push      eax
00430f01: mov       ecx, esi
00430f03: mov       dword ptr [esp + 0xdc], 0xa
00430f0e: call      0x46fe10
00430f13: jmp       0x430f17
00430f15: xor       eax, eax
00430f17: lea       esi, [ebp + 0x334]
00430f1d: mov       dword ptr [esp + 0xd8], 0xb
00430f28: mov       dword ptr [esi], eax
00430f2a: mov       al, byte ptr [esp + 0x14]
00430f2e: test      al, 2
00430f30: je        0x430f48
00430f32: mov       ecx, dword ptr [esp + 0x14]
00430f36: push      1
00430f38: and       ecx, 0xfffffffd
00430f3b: mov       dword ptr [esp + 0x18], ecx
00430f3f: lea       ecx, [esp + 0x58]
00430f43: call      0x4040a0
00430f48: mov       al, byte ptr [esp + 0x14]
00430f4c: mov       dword ptr [esp + 0xd8], 3
00430f57: test      al, 1
00430f59: je        0x430f80
00430f5b: mov       eax, dword ptr [esp + 0x20]
00430f5f: cmp       eax, ebx
00430f61: je        0x430f80
00430f63: lea       ecx, [eax - 1]
00430f66: mov       al, byte ptr [eax - 1]
00430f69: cmp       al, bl
00430f6b: je        0x430f77
00430f6d: cmp       al, 0xff
00430f6f: je        0x430f77
00430f71: dec       al
00430f73: mov       byte ptr [ecx], al
00430f75: jmp       0x430f80
00430f77: push      ecx
00430f78: call      0x5fe5f0
00430f7d: add       esp, 4
00430f80: mov       eax, dword ptr [esi]
00430f82: cmp       eax, ebx
00430f84: je        0x430f8f
00430f86: push      esi
00430f87: push      eax
00430f88: mov       ecx, ebp
00430f8a: call      0x509a90
00430f8f: mov       esi, dword ptr [0x6b915c]
00430f95: cmp       esi, ebx
00430f97: jne       0x430fa0
00430f99: call      0x4bc480
00430f9e: mov       esi, eax
00430fa0: mov       eax, dword ptr [esi + 0x4e8]
00430fa6: cmp       eax, 0x80000000
00430fab: jne       0x430fcb
00430fad: mov       eax, dword ptr [esi + 0x49c]
00430fb3: cmp       eax, ebx
00430fb5: jne       0x430fbc
00430fb7: mov       eax, 0x64a3b4
00430fbc: push      eax
00430fbd: call      0x60af10
00430fc2: add       esp, 4
00430fc5: mov       dword ptr [esi + 0x4e8], eax
00430fcb: cmp       eax, ebx
00430fcd: jne       0x430fd6
00430fcf: mov       ecx, ebp
00430fd1: call      0x431dc0
00430fd6: mov       ecx, dword ptr [esp + 0xd0]
00430fdd: pop       edi
00430fde: mov       eax, ebp
00430fe0: pop       esi
00430fe1: pop       ebp
00430fe2: pop       ebx
00430fe3: mov       dword ptr fs:[0], ecx
00430fea: add       esp, 0xcc
00430ff0: ret       
00430ff1: nop       
00430ff2: nop       
00430ff3: nop       
00430ff4: nop       
00430ff5: nop       
00430ff6: nop       
00430ff7: nop       
00430ff8: nop       
00430ff9: nop       
00430ffa: nop       
00430ffb: nop       
00430ffc: nop       
00430ffd: nop       
00430ffe: nop       
00430fff: nop       
00431000: push      ecx
00431001: push      esi
00431002: mov       esi, dword ptr [0x6b915c]
00431008: test      esi, esi
0043100a: jne       0x431013
0043100c: call      0x4bc480
00431011: mov       esi, eax
00431013: fld       dword ptr [esi + 0x478]
00431019: fcomp     dword ptr [0x64a450]
0043101f: fnstsw    ax
00431021: test      ah, 0x40
00431024: je        0x431043
00431026: lea       eax, [esp + 7]
0043102a: lea       ecx, [esi + 0x42c]
00431030: push      eax
00431031: push      ecx
00431032: call      0x5ad390
00431037: fst       dword ptr [esi + 0x478]
0043103d: add       esp, 8
00431040: pop       esi
00431041: pop       ecx
00431042: ret       
00431043: fld       dword ptr [esi + 0x478]
00431049: pop       esi
0043104a: pop       ecx
0043104b: ret       
0043104c: nop       
0043104d: nop       
0043104e: nop       
0043104f: nop       
