004a7360: push       -1
004a7362: push       0x62dbcb
004a7367: mov        eax, dword ptr fs:[0]
004a736d: push       eax
004a736e: mov        dword ptr fs:[0], esp
004a7375: sub        esp, 0x90
004a737b: push       ebx
004a737c: mov        ebx, dword ptr [esp + 0xa4]
004a7383: push       ebp
004a7384: mov        ebp, dword ptr [esp + 0xb0]
004a738b: push       edi
004a738c: xor        edi, edi
004a738e: mov        eax, dword ptr [ebp + 0x38]
004a7391: mov        dword ptr [esp + 0x14], edi
004a7395: cmp        eax, edi
004a7397: jne        0x4a7404
004a7399: mov        al, byte ptr [ebp + 0x3c]
004a739c: test       al, al
004a739e: je         0x4a7404
004a73a0: mov        eax, dword ptr [ebp + 0x18]
004a73a3: mov        edx, 0x64a3b4
004a73a8: cmp        eax, edi
004a73aa: je         0x4a73ae
004a73ac: mov        edx, eax
004a73ae: mov        ecx, dword ptr [ebx + 0x60]
004a73b1: cmp        ecx, edi
004a73b3: jne        0x4a73ba
004a73b5: mov        ecx, 0x64a3b4
004a73ba: mov        eax, dword ptr [ebx + 0x70]
004a73bd: cmp        eax, edi
004a73bf: jne        0x4a73c6
004a73c1: mov        eax, 0x64a3b4
004a73c6: push       edx
004a73c7: push       ecx
004a73c8: push       eax
004a73c9: lea        eax, [esp + 0x44]
004a73cd: push       0x695d28
004a73d2: push       eax
004a73d3: call       0x5ae390
004a73d8: add        esp, 0x14
004a73db: push       eax
004a73dc: mov        ecx, ebx
004a73de: mov        dword ptr [esp + 0xa8], edi
004a73e5: call       0x5035a0
004a73ea: push       1
004a73ec: lea        ecx, [esp + 0x3c]
004a73f0: mov        dword ptr [esp + 0xa8], 0xffffffff
004a73fb: call       0x4040a0
004a7400: mov        byte ptr [ebp + 0x3c], 0
004a7404: lea        ecx, [esp + 0x18]
004a7408: push       ecx
004a7409: mov        ecx, ebp
004a740b: call       0x4a19b0
004a7410: mov        ecx, dword ptr [eax]
004a7412: cmp        ecx, edi
004a7414: mov        ecx, dword ptr [esp + 0x18]
004a7418: setne      byte ptr [esp + 0x13]
004a741d: cmp        ecx, edi
004a741f: je         0x4a7426
004a7421: call       0x4098d0
004a7426: mov        al, byte ptr [esp + 0x13]
004a742a: test       al, al
004a742c: je         0x4a7891
004a7432: push       esi
004a7433: push       0x304
004a7438: call       0x60a0b5
004a743d: mov        esi, eax
004a743f: add        esp, 4
004a7442: mov        dword ptr [esp + 0x20], esi
004a7446: cmp        esi, edi
004a7448: mov        dword ptr [esp + 0xa8], 1
004a7453: je         0x4a74a9
004a7455: mov        dl, byte ptr [esp + 0x17]
004a7459: push       edi
004a745a: lea        ecx, [esp + 0x40]
004a745e: mov        byte ptr [esp + 0x40], dl
004a7462: call       0x4040a0
004a7467: mov        edi, 0x6b3f70
004a746c: or         ecx, 0xffffffff
004a746f: xor        eax, eax
004a7471: repne scasb al, byte ptr es:[edi]
004a7473: not        ecx
004a7475: dec        ecx
004a7476: push       ecx
004a7477: push       0x6b3f70
004a747c: lea        ecx, [esp + 0x44]
004a7480: call       0x4040f0
004a7485: mov        dword ptr [esp + 0x18], 1
004a748d: lea        eax, [ebp + 0x14]
004a7490: lea        ecx, [esp + 0x3c]
004a7494: push       eax
004a7495: push       ecx
004a7496: mov        ecx, esi
004a7498: mov        byte ptr [esp + 0xb0], 2
004a74a0: call       0x56f830
004a74a5: mov        esi, eax
004a74a7: jmp        0x4a74ab
004a74a9: xor        esi, esi
004a74ab: mov        al, byte ptr [esp + 0x18]
004a74af: mov        dword ptr [esp + 0xa8], 0xffffffff
004a74ba: test       al, 1
004a74bc: je         0x4a74c9
004a74be: push       1
004a74c0: lea        ecx, [esp + 0x40]
004a74c4: call       0x4040a0
004a74c9: mov        eax, dword ptr [esp + 0xbc]
004a74d0: test       eax, eax
004a74d2: je         0x4a74df
004a74d4: mov        edx, dword ptr [eax]
004a74d6: mov        ecx, dword ptr [eax + 4]
004a74d9: mov        dword ptr [esp + 0x24], edx
004a74dd: jmp        0x4a74f4
004a74df: mov        eax, dword ptr [ebx]
004a74e1: lea        ecx, [esp + 0x4c]
004a74e5: push       ecx
004a74e6: mov        ecx, ebx
004a74e8: call       dword ptr [eax + 0x48]
004a74eb: mov        edx, dword ptr [eax]
004a74ed: mov        dword ptr [esp + 0x24], edx
004a74f1: mov        ecx, dword ptr [eax + 4]
004a74f4: mov        edi, dword ptr [esp + 0xb4]
004a74fb: mov        dword ptr [esp + 0x28], ecx
004a74ff: mov        edx, dword ptr [eax + 8]
004a7502: mov        eax, dword ptr [edi + 0x10]
004a7505: mov        ecx, dword ptr [edi + 4]
004a7508: mov        dword ptr [esp + 0x2c], edx
004a750c: mov        dword ptr [esp + 0x10], eax
004a7510: mov        dword ptr [esp + 0x18], ecx
004a7514: call       0x60a4a0
004a7519: cdq        
004a751a: mov        ecx, 0x2710
004a751f: idiv       ecx
004a7521: mov        eax, dword ptr [edi]
004a7523: mov        dword ptr [esp + 0x1c], edx
004a7527: mov        edx, dword ptr [edi + 0xc]
004a752a: fild       dword ptr [esp + 0x1c]
004a752e: fld        dword ptr [esp + 0x10]
004a7532: fsub       dword ptr [esp + 0x18]
004a7536: mov        dword ptr [esp + 0x1c], edx
004a753a: fmulp      st(1)
004a753c: fmul       dword ptr [0x64a2c4] ; 9.999999747378752e-05
004a7542: fadd       dword ptr [esp + 0x18]
004a7546: mov        dword ptr [esp + 0x18], eax
004a754a: fadd       dword ptr [esp + 0x28]
004a754e: fstp       dword ptr [esp + 0x28]
004a7552: call       0x60a4a0
004a7557: cdq        
004a7558: mov        ecx, 0x2710
004a755d: idiv       ecx
004a755f: mov        eax, dword ptr [edi + 8]
004a7562: mov        dword ptr [esp + 0x10], edx
004a7566: mov        edx, dword ptr [edi + 0x14]
004a7569: fild       dword ptr [esp + 0x10]
004a756d: fld        dword ptr [esp + 0x1c]
004a7571: fsub       dword ptr [esp + 0x18]
004a7575: mov        dword ptr [esp + 0x1c], edx
004a7579: fmulp      st(1)
004a757b: fmul       dword ptr [0x64a2c4] ; 9.999999747378752e-05
004a7581: fadd       dword ptr [esp + 0x18]
004a7585: mov        dword ptr [esp + 0x18], eax
004a7589: fadd       dword ptr [esp + 0x24]
004a758d: fstp       dword ptr [esp + 0x24]
004a7591: call       0x60a4a0
004a7596: cdq        
004a7597: mov        ecx, 0x2710
004a759c: idiv       ecx
004a759e: lea        eax, [esp + 0x24]
004a75a2: mov        ecx, esi
004a75a4: push       eax
004a75a5: mov        dword ptr [esp + 0x14], edx
004a75a9: fild       dword ptr [esp + 0x14]
004a75ad: fld        dword ptr [esp + 0x20]
004a75b1: fsub       dword ptr [esp + 0x1c]
004a75b5: fmulp      st(1)
004a75b7: fmul       dword ptr [0x64a2c4] ; 9.999999747378752e-05
004a75bd: fadd       dword ptr [esp + 0x1c]
004a75c1: fadd       dword ptr [esp + 0x30]
004a75c5: fstp       dword ptr [esp + 0x30]
004a75c9: mov        edx, dword ptr [esi]
004a75cb: call       dword ptr [edx + 0x4c]
004a75ce: mov        ecx, dword ptr [ebx + 0x150]
004a75d4: mov        eax, dword ptr [ebx + 0x158]
004a75da: mov        edx, dword ptr [ebx + 0x154]
004a75e0: mov        dword ptr [esp + 0x4c], ecx
004a75e4: mov        ecx, eax
004a75e6: mov        dword ptr [esp + 0x54], eax
004a75ea: mov        eax, dword ptr [esp + 0x4c]
004a75ee: push       ecx
004a75ef: push       edx
004a75f0: push       eax
004a75f1: mov        ecx, esi
004a75f3: mov        dword ptr [esp + 0x5c], edx
004a75f7: call       0x49cca0
004a75fc: mov        edi, dword ptr [esp + 0xc0]
004a7603: mov        dword ptr [esp + 0x1c], 0x3f800000
004a760b: test       edi, edi
004a760d: jne        0x4a767c
004a760f: call       0x60a4a0
004a7614: cdq        
004a7615: mov        ecx, 0x2710
004a761a: idiv       ecx
004a761c: mov        dword ptr [esp + 0x10], edx
004a7620: fild       dword ptr [esp + 0x10]
004a7624: fmul       dword ptr [0x64e878] ; 0.006000000052154064
004a762a: fsub       dword ptr [0x64bb98] ; 30.0
004a7630: fstp       dword ptr [esp + 0x30]
004a7634: call       0x60a4a0
004a7639: cdq        
004a763a: mov        ecx, 0x2710
004a763f: idiv       ecx
004a7641: mov        dword ptr [esp + 0x10], edx
004a7645: fild       dword ptr [esp + 0x10]
004a7649: fmul       dword ptr [0x64e874] ; 0.0020000000949949026
004a764f: fadd       dword ptr [0x64ad58] ; 50.0
004a7655: fstp       dword ptr [esp + 0x34]
004a7659: call       0x60a4a0
004a765e: cdq        
004a765f: mov        ecx, 0x2710
004a7664: idiv       ecx
004a7666: mov        dword ptr [esp + 0x10], edx
004a766a: fild       dword ptr [esp + 0x10]
004a766e: fmul       dword ptr [0x64e878] ; 0.006000000052154064
004a7674: fsub       dword ptr [0x64bb98] ; 30.0
004a767a: jmp        0x4a76e7
004a767c: call       0x60a4a0
004a7681: cdq        
004a7682: mov        ecx, 0x2710
004a7687: idiv       ecx
004a7689: mov        dword ptr [esp + 0x10], edx
004a768d: fild       dword ptr [esp + 0x10]
004a7691: fmul       dword ptr [0x64d7fc] ; 0.00800000037997961
004a7697: fsub       dword ptr [0x64d7f8] ; 40.0
004a769d: fstp       dword ptr [esp + 0x30]
004a76a1: call       0x60a4a0
004a76a6: cdq        
004a76a7: mov        ecx, 0x2710
004a76ac: idiv       ecx
004a76ae: mov        dword ptr [esp + 0x10], edx
004a76b2: fild       dword ptr [esp + 0x10]
004a76b6: fmul       dword ptr [0x64d7fc] ; 0.00800000037997961
004a76bc: fsub       dword ptr [0x64d7f8] ; 40.0
004a76c2: fstp       dword ptr [esp + 0x34]
004a76c6: call       0x60a4a0
004a76cb: cdq        
004a76cc: mov        ecx, 0x2710
004a76d1: idiv       ecx
004a76d3: mov        dword ptr [esp + 0x10], edx
004a76d7: fild       dword ptr [esp + 0x10]
004a76db: fmul       dword ptr [0x64d7fc] ; 0.00800000037997961
004a76e1: fsub       dword ptr [0x64d7f8] ; 40.0
004a76e7: fstp       dword ptr [esp + 0x38]
004a76eb: lea        ecx, [esp + 0x30]
004a76ef: call       0x5b2f20
004a76f4: test       edi, edi
004a76f6: fstp       st(0)
004a76f8: je         0x4a771a
004a76fa: mov        edx, edi
004a76fc: lea        ecx, [esp + 0x30]
004a7700: call       0x5b2e40
004a7705: fcomp      dword ptr [0x64a450] ; 0.0
004a770b: fnstsw     ax
004a770d: test       ah, 1
004a7710: je         0x4a771a
004a7712: mov        dword ptr [esp + 0x1c], 0xbf800000
004a771a: mov        edx, dword ptr [ebp + 0x30]
004a771d: mov        eax, dword ptr [ebp + 0x2c]
004a7720: mov        dword ptr [esp + 0x20], edx
004a7724: mov        dword ptr [esp + 0x18], eax
004a7728: lea        edi, [esp + 0x30]
004a772c: call       0x60a4a0
004a7731: cdq        
004a7732: mov        ecx, 0x2710
004a7737: idiv       ecx
004a7739: push       ecx
004a773a: lea        ecx, [esp + 0x34]
004a773e: mov        dword ptr [esp + 0x14], edx
004a7742: mov        edx, edi
004a7744: fild       dword ptr [esp + 0x14]
004a7748: fld        dword ptr [esp + 0x24]
004a774c: fsub       dword ptr [esp + 0x1c]
004a7750: fmulp      st(1)
004a7752: fmul       dword ptr [0x64a2c4] ; 9.999999747378752e-05
004a7758: fadd       dword ptr [esp + 0x1c]
004a775c: fmul       dword ptr [esp + 0x20]
004a7760: fstp       dword ptr [esp]
004a7763: call       0x5b2fa0
004a7768: mov        eax, dword ptr [esp + 0x30]
004a776c: lea        edx, [esi + 0x294]
004a7772: push       1
004a7774: mov        dword ptr [edx], eax
004a7776: mov        ecx, dword ptr [esp + 0x38]
004a777a: mov        dword ptr [edx + 4], ecx
004a777d: mov        eax, dword ptr [esp + 0x3c]
004a7781: mov        ecx, esi
004a7783: mov        dword ptr [edx + 8], eax
004a7786: call       0x502350
004a778b: push       1
004a778d: push       1
004a778f: mov        ecx, esi
004a7791: call       0x571140
004a7796: lea        ecx, [esp + 0x20]
004a779a: mov        dword ptr [esi + 0x21c], 0xffffffff
004a77a4: push       ecx
004a77a5: mov        ecx, ebx
004a77a7: call       0x4042e0
004a77ac: mov        ebp, eax
004a77ae: mov        eax, dword ptr [ebp]
004a77b1: mov        dword ptr [esp + 0xa8], 4
004a77bc: test       eax, eax
004a77be: jne        0x4a782a
004a77c0: mov        dl, byte ptr [esp + 0x17]
004a77c4: push       0
004a77c6: lea        ecx, [esp + 0x40]
004a77ca: mov        byte ptr [esp + 0x40], dl
004a77ce: call       0x4040a0
004a77d3: mov        edi, 0x6b3f70
004a77d8: or         ecx, 0xffffffff
004a77db: xor        eax, eax
004a77dd: repne scasb al, byte ptr es:[edi]
004a77df: not        ecx
004a77e1: dec        ecx
004a77e2: push       ecx
004a77e3: push       0x6b3f70
004a77e8: lea        ecx, [esp + 0x44]
004a77ec: call       0x4040f0
004a77f1: lea        eax, [esp + 0x3c]
004a77f5: mov        byte ptr [esp + 0xa8], 5
004a77fd: push       eax
004a77fe: push       0xb6
004a7803: push       0x68d638
004a7808: push       0x68d62c
004a780d: call       0x5a07f0
004a7812: call       eax
004a7814: add        esp, 0x10
004a7817: lea        ecx, [esp + 0x3c]
004a781b: mov        byte ptr [esp + 0xa8], 4
004a7823: push       1
004a7825: call       0x4040a0
004a782a: mov        ebp, dword ptr [ebp]
004a782d: push       esi
004a782e: mov        ecx, ebp
004a7830: call       0x4f41c0
004a7835: mov        eax, dword ptr [esp + 0x20]
004a7839: mov        dword ptr [esp + 0xa8], 0xffffffff
004a7844: test       eax, eax
004a7846: je         0x4a7860
004a7848: mov        edi, dword ptr [eax + 0x14]
004a784b: mov        ecx, eax
004a784d: add        eax, 0x14
004a7850: dec        edi
004a7851: mov        edx, edi
004a7853: test       edx, edx
004a7855: mov        dword ptr [eax], edi
004a7857: jne        0x4a7860
004a7859: push       0
004a785b: call       0x5abfc0
004a7860: lea        ecx, [esp + 0x68]
004a7864: push       ecx
004a7865: mov        ecx, ebx
004a7867: call       0x49d310
004a786c: lea        edx, [esp + 0x68]
004a7870: mov        ecx, esi
004a7872: push       edx
004a7873: call       0x49d480
004a7878: pop        esi
004a7879: pop        edi
004a787a: pop        ebp
004a787b: pop        ebx
004a787c: mov        ecx, dword ptr [esp + 0x90]
004a7883: mov        dword ptr fs:[0], ecx
004a788a: add        esp, 0x9c
004a7890: ret        
004a7891: mov        ebp, dword ptr [ebp + 0x18]
004a7894: cmp        ebp, edi
004a7896: jne        0x4a789d
004a7898: mov        ebp, 0x64a3b4
004a789d: mov        eax, dword ptr [ebx + 0x60]
004a78a0: mov        ecx, 0x64a3b4
004a78a5: cmp        eax, edi
004a78a7: je         0x4a78ab
004a78a9: mov        ecx, eax
004a78ab: mov        eax, dword ptr [ebx + 0x70]
004a78ae: cmp        eax, edi
004a78b0: jne        0x4a78b7
004a78b2: mov        eax, 0x64a3b4
004a78b7: push       ebp
004a78b8: push       ecx
004a78b9: push       eax
004a78ba: lea        eax, [esp + 0x60]
004a78be: push       0x695cd0
004a78c3: push       eax
004a78c4: call       0x5ae390
004a78c9: add        esp, 0x14
004a78cc: push       eax
004a78cd: mov        ecx, ebx
004a78cf: mov        dword ptr [esp + 0xa8], 6
004a78da: call       0x5035a0
004a78df: mov        eax, dword ptr [esp + 0x58]
004a78e3: cmp        eax, edi
004a78e5: je         0x4a791a
004a78e7: lea        ecx, [eax - 1]
004a78ea: mov        al, byte ptr [eax - 1]
004a78ed: test       al, al
004a78ef: je         0x4a7911
004a78f1: cmp        al, 0xff
004a78f3: je         0x4a7911
004a78f5: dec        al
004a78f7: pop        edi
004a78f8: pop        ebp
004a78f9: mov        byte ptr [ecx], al
004a78fb: pop        ebx
004a78fc: mov        ecx, dword ptr [esp + 0x90]
004a7903: mov        dword ptr fs:[0], ecx
004a790a: add        esp, 0x9c
004a7910: ret        
004a7911: push       ecx
004a7912: call       0x5fe5f0
004a7917: add        esp, 4
004a791a: mov        ecx, dword ptr [esp + 0x9c]
004a7921: pop        edi
004a7922: pop        ebp
004a7923: pop        ebx
004a7924: mov        dword ptr fs:[0], ecx
004a792b: add        esp, 0x9c
004a7931: ret        
004a7932: nop        
004a7933: nop        
004a7934: nop        
004a7935: nop        
004a7936: nop        
004a7937: nop        
004a7938: nop        
004a7939: nop        
004a793a: nop        
004a793b: nop        
004a793c: nop        
004a793d: nop        
004a793e: nop        
004a793f: nop        
004a7940: push       -1
004a7942: push       0x62dc38
004a7947: mov        eax, dword ptr fs:[0]
004a794d: push       eax
004a794e: mov        dword ptr fs:[0], esp
004a7955: sub        esp, 0x150
004a795b: push       ebx
004a795c: push       ebp
004a795d: push       esi
004a795e: push       edi
004a795f: push       0x91
004a7964: push       0x695da4
004a7969: lea        ecx, [esp + 0x98]
004a7970: call       0x5ae5f0
004a7975: mov        ebx, dword ptr [esp + 0x170]
004a797c: lea        eax, [esp + 0x124]
004a7983: xor        ebp, ebp
004a7985: push       eax
004a7986: mov        ecx, ebx
004a7988: mov        dword ptr [esp + 0x16c], ebp
004a798f: call       0x49bc00
004a7994: mov        esi, eax
004a7996: mov        eax, dword ptr [ebx + 0x108]
004a799c: mov        ecx, 6
004a79a1: lea        edi, [esp + 0x78]
004a79a5: cmp        eax, ebp
004a79a7: rep movsd  dword ptr es:[edi], dword ptr [esi]
004a79a9: jne        0x4a7a14
004a79ab: mov        cl, byte ptr [esp + 0x13]
004a79af: push       ebp
004a79b0: mov        byte ptr [esp + 0x4c], cl
004a79b4: lea        ecx, [esp + 0x4c]
004a79b8: call       0x4040a0
004a79bd: mov        edi, 0x6b3f70
004a79c2: or         ecx, 0xffffffff
004a79c5: xor        eax, eax
004a79c7: repne scasb al, byte ptr es:[edi]
004a79c9: not        ecx
004a79cb: dec        ecx
004a79cc: push       ecx
004a79cd: push       0x6b3f70
004a79d2: lea        ecx, [esp + 0x50]
004a79d6: call       0x4040f0
004a79db: lea        edx, [esp + 0x48]
004a79df: mov        byte ptr [esp + 0x168], 1
004a79e7: push       edx
004a79e8: push       0x141
004a79ed: push       0x694bcc
004a79f2: push       0x68f8a0
004a79f7: call       0x5a07f0
004a79fc: call       eax
004a79fe: add        esp, 0x10
004a7a01: lea        ecx, [esp + 0x48]
004a7a05: mov        byte ptr [esp + 0x168], 0
004a7a0d: push       1
004a7a0f: call       0x4040a0
004a7a14: mov        ebx, dword ptr [ebx + 0x108]
004a7a1a: mov        dword ptr [esp + 0x28], ebx
004a7a1e: cmp        dword ptr [ebx + 0x64], ebp
004a7a21: jle        0x4a7b59
004a7a27: mov        eax, dword ptr [esp + 0x28]
004a7a2b: mov        eax, dword ptr [eax + 0x150]
004a7a31: mov        ecx, dword ptr [eax + ebp*4]
004a7a34: mov        edx, ecx
004a7a36: mov        edi, dword ptr [ecx + 0x24]
004a7a39: mov        ebx, dword ptr [edx + 0x28]
004a7a3c: call       0x557970
004a7a41: mov        esi, eax
004a7a43: mov        eax, dword ptr [esi + 0x64]
004a7a46: cmp        eax, 0x80000000
004a7a4b: jne        0x4a7a65
004a7a4d: mov        eax, dword ptr [esi + 0x18]
004a7a50: test       eax, eax
004a7a52: jne        0x4a7a59
004a7a54: mov        eax, 0x64a3b4
004a7a59: push       eax
004a7a5a: call       0x60af10