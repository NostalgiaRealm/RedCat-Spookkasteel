00429150: push      -1
00429152: push      0x622e58
00429157: mov       eax, dword ptr fs:[0]
0042915d: push      eax
0042915e: mov       dword ptr fs:[0], esp
00429165: sub       esp, 0x28
00429168: fild      dword ptr [esp + 0x38]
0042916c: push      ebx
0042916d: push      esi
0042916e: mov       esi, ecx
00429170: push      edi
00429171: fst       dword ptr [esp + 0x20]
00429175: fcomp     dword ptr [0x64a450]
0042917b: mov       dword ptr [esp + 0x1c], esi
0042917f: fnstsw    ax
00429181: test      ah, 0x40
00429184: jne       0x429333
0042918a: lea       eax, [esp + 0x18]
0042918e: push      eax
0042918f: call      0x4237d0
00429194: mov       edx, dword ptr [eax]
00429196: mov       eax, dword ptr [esp + 0x18]
0042919a: xor       ebx, ebx
0042919c: cmp       edx, ebx
0042919e: sete      byte ptr [esp + 0xf]
004291a3: cmp       eax, ebx
004291a5: je        0x4291be
004291a7: mov       edi, dword ptr [eax + 0x14]
004291aa: mov       ecx, eax
004291ac: add       eax, 0x14
004291af: dec       edi
004291b0: mov       edx, edi
004291b2: cmp       edx, ebx
004291b4: mov       dword ptr [eax], edi
004291b6: jne       0x4291be
004291b8: push      ebx
004291b9: call      0x5abfc0
004291be: cmp       byte ptr [esp + 0xf], bl
004291c2: jne       0x429333
004291c8: mov       ecx, esi
004291ca: call      0x4282e0
004291cf: mov       ecx, eax
004291d1: call      0x595d60
004291d6: push      eax
004291d7: call      0x5b15f0
004291dc: fstp      dword ptr [esp + 0x1c]
004291e0: fld       dword ptr [esi + 0x160]
004291e6: fsub      dword ptr [esp + 0x1c]
004291ea: fstp      dword ptr [esp + 0x14]
004291ee: mov       ecx, dword ptr [esp + 0x14]
004291f2: push      ecx
004291f3: call      0x5b1630
004291f8: mov       eax, dword ptr [esp + 0x4c]
004291fc: or        ecx, 0xffffffff
004291ff: fstp      dword ptr [esp + 0x1c]
00429203: add       esp, 8
00429206: cmp       eax, ecx
00429208: jne       0x4292c5
0042920e: mov       edi, 0x6b3f70
00429213: xor       eax, eax
00429215: repne scasb al, byte ptr es:[edi]
00429217: mov       dl, byte ptr [esp + 0x44]
0042921b: push      ebp
0042921c: not       ecx
0042921e: dec       ecx
0042921f: push      1
00429221: mov       ebp, ecx
00429223: lea       ecx, [esp + 0x2c]
00429227: push      ebp
00429228: mov       byte ptr [esp + 0x30], dl
0042922c: mov       dword ptr [esp + 0x34], ebx
00429230: mov       dword ptr [esp + 0x38], ebx
00429234: mov       dword ptr [esp + 0x3c], ebx
00429238: call      0x401940
0042923d: test      al, al
0042923f: je        0x429269
00429241: mov       edi, dword ptr [esp + 0x2c]
00429245: mov       ecx, ebp
00429247: mov       eax, ecx
00429249: mov       esi, 0x6b3f70
0042924e: shr       ecx, 2
00429251: rep movsd dword ptr es:[edi], dword ptr [esi]
00429253: mov       ecx, eax
00429255: and       ecx, 3
00429258: rep movsb byte ptr es:[edi], byte ptr [esi]
0042925a: mov       ecx, dword ptr [esp + 0x2c]
0042925e: mov       esi, dword ptr [esp + 0x20]
00429262: mov       dword ptr [esp + 0x30], ebp
00429266: mov       byte ptr [ecx + ebp], bl
00429269: lea       edx, [esp + 0x28]
0042926d: mov       dword ptr [esp + 0x40], ebx
00429271: push      edx
00429272: push      0x8a
00429277: push      0x68e22c
0042927c: push      0x68e214
00429281: call      0x5a07f0
00429286: call      eax
00429288: mov       eax, dword ptr [esp + 0x3c]
0042928c: add       esp, 0x10
0042928f: cmp       eax, ebx
00429291: mov       dword ptr [esp + 0x40], 0xffffffff
00429299: pop       ebp
0042929a: je        0x4292b9
0042929c: lea       ecx, [eax - 1]
0042929f: mov       al, byte ptr [eax - 1]
004292a2: cmp       al, bl
004292a4: je        0x4292b0
004292a6: cmp       al, 0xff
004292a8: je        0x4292b0
004292aa: dec       al
004292ac: mov       byte ptr [ecx], al
004292ae: jmp       0x4292b9
004292b0: push      ecx
004292b1: call      0x5fe5f0
004292b6: add       esp, 4
004292b9: mov       dword ptr [esp + 0x28], ebx
004292bd: mov       dword ptr [esp + 0x2c], ebx
004292c1: mov       dword ptr [esp + 0x30], ebx
004292c5: fld       dword ptr [esp + 0x20]
004292c9: fmul      dword ptr [esi + 0x148]
004292cf: fmul      dword ptr [0x64a95c]
004292d5: fstp      dword ptr [esp + 0x44]
004292d9: fld       dword ptr [esp + 0x14]
004292dd: fabs      
004292df: fld       dword ptr [esp + 0x44]
004292e3: fcompp    
004292e5: fnstsw    ax
004292e7: test      ah, 0x41
004292ea: jne       0x4292f2
004292ec: fld       dword ptr [esp + 0x10]
004292f0: jmp       0x42931c
004292f2: fld       dword ptr [esp + 0x14]
004292f6: fcomp     dword ptr [0x64a450]
004292fc: fnstsw    ax
004292fe: test      ah, 1
00429301: jne       0x42930a
00429303: mov       eax, dword ptr [esp + 0x44]
00429307: push      eax
00429308: jmp       0x429314
0042930a: fld       dword ptr [esp + 0x44]
0042930e: push      ecx
0042930f: fchs      
00429311: fstp      dword ptr [esp]
00429314: call      0x5b1630
00429319: add       esp, 4
0042931c: fadd      dword ptr [esp + 0x18]
00429320: push      ebx
00429321: push      ecx
00429322: mov       ecx, esi
00429324: fstp      dword ptr [esp]
00429327: call      0x4282e0
0042932c: mov       ecx, eax
0042932e: call      0x595ec0
00429333: mov       ecx, dword ptr [esp + 0x34]
00429337: pop       edi
00429338: pop       esi
00429339: pop       ebx
0042933a: mov       dword ptr fs:[0], ecx
00429341: add       esp, 0x34
00429344: ret       4
00429347: nop       
00429348: nop       
00429349: nop       
0042934a: nop       
0042934b: nop       
0042934c: nop       
0042934d: nop       
0042934e: nop       
0042934f: nop       
00429350: fild      dword ptr [esp + 8]
00429354: sub       esp, 0x20
00429357: fcomp     dword ptr [0x64a450]
0042935d: push      esi
0042935e: mov       esi, ecx
00429360: fnstsw    ax
00429362: test      ah, 0x40
00429365: jne       0x429432
0042936b: call      0x4282e0
00429370: mov       ecx, eax
00429372: call      0x595d60
00429377: push      eax
00429378: call      0x5b15f0
0042937d: mov       edx, dword ptr [esi]
0042937f: add       esp, 4
00429382: fstp      dword ptr [esp + 8]
00429386: lea       eax, [esp + 0xc]
0042938a: mov       ecx, esi
0042938c: push      eax
0042938d: lea       eax, [esp + 0x1c]
00429391: push      eax
00429392: call      dword ptr [edx + 0x48]
00429395: mov       ecx, dword ptr [esp + 0x2c]
00429399: mov       edx, eax
0042939b: call      0x5b2fe0
004293a0: lea       ecx, [esp + 0xc]
004293a4: push      ecx
004293a5: call      0x5b15f0
004293aa: fsub      dword ptr [esp + 0xc]
004293ae: fstp      dword ptr [esp + 0x2c]
004293b2: mov       edx, dword ptr [esp + 0x2c]
004293b6: push      edx
004293b7: call      0x5b1630
004293bc: mov       eax, dword ptr [esp + 0x34]
004293c0: fstp      dword ptr [esp + 0xc]
004293c4: push      eax
004293c5: call      0x409e30
004293ca: fmul      dword ptr [esi + 0x148]
004293d0: add       esp, 0xc
004293d3: fstp      dword ptr [esp + 0x2c]
004293d7: fld       dword ptr [esp + 4]
004293db: fabs      
004293dd: fld       dword ptr [esp + 0x2c]
004293e1: fcompp    
004293e3: fnstsw    ax
004293e5: test      ah, 0x41
004293e8: jne       0x4293f0
004293ea: fld       dword ptr [esp + 0x28]
004293ee: jmp       0x42941a
