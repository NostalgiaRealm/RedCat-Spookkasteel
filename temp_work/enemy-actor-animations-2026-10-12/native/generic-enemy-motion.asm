00424040: push      edx
00424041: call      0x422f30
00424046: test      al, al
00424048: je        0x424056
0042404a: mov       ecx, dword ptr [esp + 0x2c]
0042404e: mov       eax, dword ptr [esi]
00424050: push      ecx
00424051: mov       ecx, esi
00424053: call      dword ptr [eax + 0x70]
00424056: mov       ecx, dword ptr [esp + 0x18]
0042405a: pop       esi
0042405b: mov       dword ptr fs:[0], ecx
00424062: add       esp, 0x20
00424065: ret       8
00424068: nop       
00424069: nop       
0042406a: nop       
0042406b: nop       
0042406c: nop       
0042406d: nop       
0042406e: nop       
0042406f: nop       
00424070: push      -1
00424072: push      0x6226d0
00424077: mov       eax, dword ptr fs:[0]
0042407d: push      eax
0042407e: mov       dword ptr fs:[0], esp
00424085: sub       esp, 0x2c
00424088: push      ebp
00424089: mov       ebp, ecx
0042408b: push      4
0042408d: mov       dword ptr [esp + 0xc], ebp
00424091: mov       eax, dword ptr [ebp]
00424094: call      dword ptr [eax + 0xbc]
0042409a: mov       ecx, dword ptr [ebp + 0xfc]
004240a0: test      ecx, ecx
004240a2: je        0x4240a9
004240a4: mov       edx, dword ptr [ecx]
004240a6: call      dword ptr [edx + 0x1c]
004240a9: mov       al, byte ptr [ebp + 0x170]
004240af: test      al, al
004240b1: je        0x424405
004240b7: push      ebx
004240b8: push      esi
004240b9: lea       eax, [esp + 0x14]
004240bd: push      edi
004240be: push      eax
004240bf: mov       ecx, ebp
004240c1: call      0x4042e0
004240c6: mov       esi, eax
004240c8: mov       eax, dword ptr [esi]
004240ca: mov       dword ptr [esp + 0x44], 0
004240d2: test      eax, eax
004240d4: jne       0x42413a
004240d6: mov       cl, byte ptr [esp + 0x13]
004240da: push      0
004240dc: mov       byte ptr [esp + 0x20], cl
004240e0: lea       ecx, [esp + 0x20]
004240e4: call      0x4040a0
004240e9: mov       edi, 0x6b3f70
004240ee: or        ecx, 0xffffffff
004240f1: xor       eax, eax
004240f3: repne scasb al, byte ptr es:[edi]
004240f5: not       ecx
004240f7: dec       ecx
004240f8: push      ecx
004240f9: push      0x6b3f70
004240fe: lea       ecx, [esp + 0x24]
00424102: call      0x4040f0
00424107: lea       edx, [esp + 0x1c]
0042410b: mov       byte ptr [esp + 0x44], 1
00424110: push      edx
00424111: push      0xb6
00424116: push      0x68d638
0042411b: push      0x68d62c
00424120: call      0x5a07f0
00424125: call      eax
00424127: add       esp, 0x10
0042412a: lea       ecx, [esp + 0x1c]
0042412e: mov       byte ptr [esp + 0x44], 0
00424133: push      1
00424135: call      0x4040a0
0042413a: mov       esi, dword ptr [esi]
0042413c: mov       ecx, dword ptr [esp + 0x18]
00424140: test      ecx, ecx
00424142: mov       ebx, dword ptr [esi + 0x360]
00424148: mov       dword ptr [esp + 0x44], 0xffffffff
00424150: je        0x42415f
00424152: call      0x4098d0
00424157: mov       dword ptr [esp + 0x18], 0
0042415f: test      ebx, ebx
00424161: jne       0x4241fa
00424167: mov       al, byte ptr [esp + 0x13]
0042416b: push      ebx
0042416c: lea       ecx, [esp + 0x30]
00424170: mov       byte ptr [esp + 0x30], al
00424174: call      0x4040a0
00424179: mov       edi, 0x6b3f70
0042417e: or        ecx, 0xffffffff
00424181: xor       eax, eax
00424183: push      1
00424185: repne scasb al, byte ptr es:[edi]
00424187: not       ecx
00424189: dec       ecx
0042418a: mov       ebp, ecx
0042418c: lea       ecx, [esp + 0x30]
00424190: push      ebp
00424191: call      0x401940
00424196: test      al, al
00424198: je        0x4241bd
0042419a: mov       edi, dword ptr [esp + 0x30]
0042419e: mov       ecx, ebp
004241a0: mov       edx, ecx
004241a2: mov       esi, 0x6b3f70
004241a7: shr       ecx, 2
004241aa: rep movsd dword ptr es:[edi], dword ptr [esi]
004241ac: mov       ecx, edx
004241ae: push      ebp
004241af: and       ecx, 3
004241b2: rep movsb byte ptr es:[edi], byte ptr [esi]
004241b4: lea       ecx, [esp + 0x30]
004241b8: call      0x404190
004241bd: lea       eax, [esp + 0x2c]
004241c1: mov       dword ptr [esp + 0x44], 2
004241c9: push      eax
004241ca: push      0x290
004241cf: push      0x68f7f4
004241d4: push      0x68d620
004241d9: call      0x5a07f0
004241de: call      eax
004241e0: add       esp, 0x10
004241e3: lea       ecx, [esp + 0x2c]
004241e7: mov       dword ptr [esp + 0x44], 0xffffffff
004241ef: push      1
004241f1: call      0x4040a0
004241f6: mov       ebp, dword ptr [esp + 0x14]
004241fa: mov       eax, dword ptr [ebx + 0x1f0]
00424200: test      eax, eax
00424202: jne       0x42426e
00424204: mov       cl, byte ptr [esp + 0x13]
00424208: push      0
0042420a: mov       byte ptr [esp + 0x30], cl
0042420e: lea       ecx, [esp + 0x30]
00424212: call      0x4040a0
00424217: mov       edi, 0x6b3f70
0042421c: or        ecx, 0xffffffff
0042421f: xor       eax, eax
00424221: repne scasb al, byte ptr es:[edi]
00424223: not       ecx
00424225: dec       ecx
00424226: push      ecx
00424227: push      0x6b3f70
0042422c: lea       ecx, [esp + 0x34]
00424230: call      0x4040f0
00424235: lea       edx, [esp + 0x2c]
00424239: mov       dword ptr [esp + 0x44], 3
00424241: push      edx
00424242: push      0x15b
00424247: push      0x68f988
0042424c: push      0x68f970
00424251: call      0x5a07f0
00424256: call      eax
00424258: add       esp, 0x10
0042425b: lea       ecx, [esp + 0x2c]
0042425f: mov       dword ptr [esp + 0x44], 0xffffffff
00424267: push      1
00424269: call      0x4040a0
0042426e: mov       ebx, dword ptr [ebx + 0x1f0]
00424274: test      ebx, ebx
00424276: jne       0x42430f
0042427c: mov       al, byte ptr [esp + 0x13]
00424280: push      ebx
00424281: lea       ecx, [esp + 0x30]
00424285: mov       byte ptr [esp + 0x30], al
00424289: call      0x4040a0
0042428e: mov       edi, 0x6b3f70
00424293: or        ecx, 0xffffffff
00424296: xor       eax, eax
00424298: push      1
0042429a: repne scasb al, byte ptr es:[edi]
0042429c: not       ecx
0042429e: dec       ecx
0042429f: mov       ebp, ecx
004242a1: lea       ecx, [esp + 0x30]
004242a5: push      ebp
004242a6: call      0x401940
004242ab: test      al, al
004242ad: je        0x4242d2
004242af: mov       edi, dword ptr [esp + 0x30]
004242b3: mov       ecx, ebp
004242b5: mov       edx, ecx
004242b7: mov       esi, 0x6b3f70
004242bc: shr       ecx, 2
004242bf: rep movsd dword ptr es:[edi], dword ptr [esi]
004242c1: mov       ecx, edx
004242c3: push      ebp
004242c4: and       ecx, 3
004242c7: rep movsb byte ptr es:[edi], byte ptr [esi]
004242c9: lea       ecx, [esp + 0x30]
004242cd: call      0x404190
004242d2: lea       eax, [esp + 0x2c]
004242d6: mov       dword ptr [esp + 0x44], 4
004242de: push      eax
004242df: push      0x292
004242e4: push      0x68f7f4
004242e9: push      0x68f964
004242ee: call      0x5a07f0
004242f3: call      eax
004242f5: add       esp, 0x10
004242f8: lea       ecx, [esp + 0x2c]
004242fc: mov       dword ptr [esp + 0x44], 0xffffffff
00424304: push      1
00424306: call      0x4040a0
0042430b: mov       ebp, dword ptr [esp + 0x14]
0042430f: push      0
00424311: push      0x68f940
00424316: push      0x68f918
0042431b: push      0
0042431d: push      ebx
0042431e: call      0x60a6f2
00424323: mov       ebx, eax
00424325: add       esp, 0x14
00424328: test      ebx, ebx
0042432a: jne       0x4243eb
00424330: mov       cl, byte ptr [esp + 0x13]
00424334: push      eax
00424335: mov       byte ptr [esp + 0x20], cl
00424339: lea       ecx, [esp + 0x20]
0042433d: call      0x4040a0
00424342: mov       edi, 0x6b3f70
00424347: or        ecx, 0xffffffff
0042434a: xor       eax, eax
0042434c: push      1
0042434e: repne scasb al, byte ptr es:[edi]
00424350: not       ecx
00424352: dec       ecx
00424353: mov       ebp, ecx
00424355: lea       ecx, [esp + 0x20]
00424359: push      ebp
0042435a: call      0x401940
0042435f: test      al, al
00424361: je        0x424386
00424363: mov       edi, dword ptr [esp + 0x20]
00424367: mov       ecx, ebp
00424369: mov       edx, ecx
0042436b: mov       esi, 0x6b3f70
00424370: shr       ecx, 2
00424373: rep movsd dword ptr es:[edi], dword ptr [esi]
00424375: mov       ecx, edx
00424377: push      ebp
00424378: and       ecx, 3
0042437b: rep movsb byte ptr es:[edi], byte ptr [esi]
0042437d: lea       ecx, [esp + 0x20]
00424381: call      0x404190
00424386: lea       eax, [esp + 0x1c]
0042438a: mov       dword ptr [esp + 0x44], 5
00424392: push      eax
00424393: push      0x294
00424398: push      0x68f7f4
0042439d: push      0x68f908
004243a2: call      0x5a07f0
004243a7: call      eax
004243a9: mov       eax, dword ptr [esp + 0x30]
004243ad: xor       esi, esi
004243af: add       esp, 0x10
004243b2: cmp       eax, esi
004243b4: mov       dword ptr [esp + 0x44], 0xffffffff
004243bc: je        0x4243db
004243be: lea       ecx, [eax - 1]
004243c1: mov       al, byte ptr [eax - 1]
004243c4: test      al, al
004243c6: je        0x4243d2
004243c8: cmp       al, 0xff
004243ca: je        0x4243d2
004243cc: dec       al
004243ce: mov       byte ptr [ecx], al
004243d0: jmp       0x4243db
004243d2: push      ecx
004243d3: call      0x5fe5f0
004243d8: add       esp, 4
004243db: mov       ebp, dword ptr [esp + 0x14]
004243df: mov       dword ptr [esp + 0x20], esi
004243e3: mov       dword ptr [esp + 0x24], esi
004243e7: mov       dword ptr [esp + 0x28], esi
004243eb: push      1
004243ed: mov       ecx, ebx
004243ef: call      0x439e00
004243f4: mov       ecx, dword ptr [ebp + 0x158]
004243fa: push      ecx
004243fb: mov       ecx, ebx
004243fd: call      0x439d20
00424402: pop       edi
00424403: pop       esi
00424404: pop       ebx
00424405: mov       ecx, dword ptr [esp + 0x30]
00424409: pop       ebp
0042440a: mov       dword ptr fs:[0], ecx
00424411: add       esp, 0x38
00424414: ret       
00424415: nop       
00424416: nop       
00424417: nop       
00424418: nop       
00424419: nop       
0042441a: nop       
0042441b: nop       
0042441c: nop       
0042441d: nop       
0042441e: nop       
0042441f: nop       
00424420: mov       edx, dword ptr [ecx + 0x178]
00424426: xor       eax, eax
00424428: test      edx, edx
0042442a: setle     al
0042442d: ret       
0042442e: nop       
0042442f: nop       
