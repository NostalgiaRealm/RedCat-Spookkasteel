004363a0: mov       al, byte ptr [0x6b5298]
004363a5: push      esi
004363a6: test      al, 1
004363a8: mov       esi, ecx
004363aa: jne       0x4363be
004363ac: or        al, 1
004363ae: mov       byte ptr [0x6b5298], al
004363b3: call      0x4d67f0
004363b8: fstp      dword ptr [0x6b5294]
004363be: mov       ecx, esi
004363c0: call      0x4d6720
004363c5: mov       ecx, esi
004363c7: call      0x4d67f0
004363cc: fcom      dword ptr [0x64a450]
004363d2: pop       esi
004363d3: fnstsw    ax
004363d5: test      ah, 0x41
004363d8: jne       0x436401
004363da: fld       st(0)
004363dc: fsub      dword ptr [0x6b5294]
004363e2: fcomp     dword ptr [0x64c40c]
004363e8: fnstsw    ax
004363ea: test      ah, 0x41
004363ed: jne       0x4363f8
004363ef: mov       al, 1
004363f1: fstp      dword ptr [0x6b5294]
004363f7: ret       
004363f8: xor       al, al
004363fa: fstp      dword ptr [0x6b5294]
00436400: ret       
00436401: fstp      st(0)
00436403: xor       al, al
00436405: ret       
00436406: nop       
00436407: nop       
00436408: nop       
00436409: nop       
0043640a: nop       
0043640b: nop       
0043640c: nop       
0043640d: nop       
0043640e: nop       
0043640f: nop       
00436410: push      -1
00436412: push      0x623c5b
00436417: mov       eax, dword ptr fs:[0]
0043641d: push      eax
0043641e: mov       dword ptr fs:[0], esp
00436425: push      ecx
00436426: push      0x34
00436428: call      0x60a0b5
0043642d: add       esp, 4
00436430: mov       dword ptr [esp], eax
00436434: test      eax, eax
00436436: mov       dword ptr [esp + 0xc], 0
0043643e: je        0x436456
00436440: mov       ecx, eax
00436442: call      0x4374a0
00436447: mov       ecx, dword ptr [esp + 4]
0043644b: mov       dword ptr fs:[0], ecx
00436452: add       esp, 0x10
00436455: ret       
00436456: mov       ecx, dword ptr [esp + 4]
0043645a: xor       eax, eax
0043645c: mov       dword ptr fs:[0], ecx
00436463: add       esp, 0x10
00436466: ret       
00436467: nop       
00436468: nop       
00436469: nop       
0043646a: nop       
0043646b: nop       
0043646c: nop       
0043646d: nop       
0043646e: nop       
0043646f: nop       
00436470: push      -1
00436472: push      0x623c7b
00436477: mov       eax, dword ptr fs:[0]
0043647d: push      eax
0043647e: mov       dword ptr fs:[0], esp
00436485: push      ecx
00436486: push      esi
00436487: mov       esi, ecx
00436489: push      0x3ec
0043648e: call      0x60a0b5
00436493: add       esp, 4
00436496: mov       dword ptr [esp + 4], eax
0043649a: test      eax, eax
0043649c: mov       dword ptr [esp + 0x10], 0
004364a4: je        0x4364be
004364a6: push      esi
004364a7: mov       ecx, eax
004364a9: call      0x439010
004364ae: pop       esi
004364af: mov       ecx, dword ptr [esp + 4]
004364b3: mov       dword ptr fs:[0], ecx
004364ba: add       esp, 0x10
004364bd: ret       
004364be: mov       ecx, dword ptr [esp + 8]
004364c2: xor       eax, eax
004364c4: pop       esi
004364c5: mov       dword ptr fs:[0], ecx
004364cc: add       esp, 0x10
004364cf: ret       
004364d0: mov       eax, dword ptr fs:[0]
004364d6: push      -1
004364d8: push      0x623cab
004364dd: push      eax
004364de: mov       dword ptr fs:[0], esp
004364e5: sub       esp, 0x28
004364e8: push      ebx
004364e9: mov       ebx, ecx
004364eb: push      ebp
004364ec: push      esi
004364ed: mov       eax, dword ptr [ebx + 0x1f0]
004364f3: xor       esi, esi
004364f5: cmp       eax, esi
004364f7: push      edi
004364f8: jne       0x43658d
004364fe: mov       al, byte ptr [esp + 0x13]
00436502: push      esi
00436503: lea       ecx, [esp + 0x2c]
00436507: mov       byte ptr [esp + 0x2c], al
0043650b: call      0x4040a0
00436510: mov       edi, 0x6b3f70
00436515: or        ecx, 0xffffffff
00436518: xor       eax, eax
0043651a: push      1
0043651c: repne scasb al, byte ptr es:[edi]
0043651e: not       ecx
00436520: dec       ecx
00436521: mov       ebp, ecx
00436523: lea       ecx, [esp + 0x2c]
00436527: push      ebp
00436528: call      0x401940
0043652d: test      al, al
0043652f: je        0x436558
00436531: mov       edi, dword ptr [esp + 0x2c]
00436535: mov       ecx, ebp
00436537: mov       edx, ecx
00436539: mov       esi, 0x6b3f70
0043653e: shr       ecx, 2
00436541: rep movsd dword ptr es:[edi], dword ptr [esi]
00436543: mov       ecx, edx
00436545: and       ecx, 3
00436548: rep movsb byte ptr es:[edi], byte ptr [esi]
0043654a: mov       eax, dword ptr [esp + 0x2c]
0043654e: mov       dword ptr [esp + 0x30], ebp
00436552: xor       esi, esi
00436554: mov       byte ptr [eax + ebp], 0
00436558: lea       ecx, [esp + 0x28]
0043655c: mov       dword ptr [esp + 0x40], esi
00436560: push      ecx
00436561: push      0x15b
00436566: push      0x68f988
0043656b: push      0x68f970
00436570: call      0x5a07f0
00436575: call      eax
00436577: add       esp, 0x10
0043657a: lea       ecx, [esp + 0x28]
0043657e: mov       dword ptr [esp + 0x40], 0xffffffff
00436586: push      1
00436588: call      0x4040a0
0043658d: mov       ebx, dword ptr [ebx + 0x1f0]
00436593: push      esi
00436594: push      0x68f940
00436599: push      0x68f918
0043659e: push      esi
0043659f: push      ebx
004365a0: call      0x60a6f2
004365a5: mov       ebx, eax
004365a7: add       esp, 0x14
004365aa: cmp       ebx, esi
004365ac: jne       0x43666b
004365b2: mov       edi, 0x6b3f70
004365b7: or        ecx, 0xffffffff
004365ba: xor       eax, eax
004365bc: mov       dl, byte ptr [esp + 0x13]
004365c0: repne scasb al, byte ptr es:[edi]
004365c2: not       ecx
004365c4: dec       ecx
004365c5: push      1
004365c7: mov       ebp, ecx
004365c9: lea       ecx, [esp + 0x1c]
004365cd: push      ebp
004365ce: mov       byte ptr [esp + 0x20], dl
004365d2: mov       dword ptr [esp + 0x24], esi
004365d6: mov       dword ptr [esp + 0x28], esi
004365da: mov       dword ptr [esp + 0x2c], esi
004365de: call      0x401940
004365e3: test      al, al
004365e5: je        0x43660e
004365e7: mov       edi, dword ptr [esp + 0x1c]
004365eb: mov       ecx, ebp
004365ed: mov       eax, ecx
004365ef: mov       esi, 0x6b3f70
004365f4: shr       ecx, 2
004365f7: rep movsd dword ptr es:[edi], dword ptr [esi]
004365f9: mov       ecx, eax
004365fb: and       ecx, 3
004365fe: rep movsb byte ptr es:[edi], byte ptr [esi]
00436600: mov       ecx, dword ptr [esp + 0x1c]
00436604: mov       dword ptr [esp + 0x20], ebp
00436608: xor       esi, esi
0043660a: mov       byte ptr [ecx + ebp], 0
0043660e: lea       edx, [esp + 0x18]
00436612: mov       dword ptr [esp + 0x40], 1
0043661a: push      edx
0043661b: push      0x7c5
00436620: push      0x690328
00436625: push      0x68f908
0043662a: call      0x5a07f0
0043662f: call      eax
00436631: mov       ecx, dword ptr [esp + 0x2c]
00436635: add       esp, 0x10
00436638: cmp       ecx, esi
0043663a: mov       dword ptr [esp + 0x40], 0xffffffff
00436642: je        0x43665f
00436644: mov       al, byte ptr [ecx - 1]
00436647: dec       ecx
00436648: test      al, al
0043664a: je        0x436656
0043664c: cmp       al, 0xff
0043664e: je        0x436656
00436650: dec       al
00436652: mov       byte ptr [ecx], al
00436654: jmp       0x43665f
00436656: push      ecx
00436657: call      0x5fe5f0
0043665c: add       esp, 4
0043665f: mov       dword ptr [esp + 0x1c], esi
00436663: mov       dword ptr [esp + 0x20], esi
00436667: mov       dword ptr [esp + 0x24], esi
0043666b: push      0xb4
00436670: call      0x60a0b5
00436675: add       esp, 4
00436678: mov       dword ptr [esp + 0x14], eax
0043667c: cmp       eax, esi
0043667e: mov       dword ptr [esp + 0x40], 2
00436686: je        0x436692
00436688: push      ebx
00436689: mov       ecx, eax
0043668b: call      0x451a80
00436690: jmp       0x436694
00436692: xor       eax, eax
00436694: mov       ecx, dword ptr [esp + 0x38]
00436698: pop       edi
00436699: pop       esi
0043669a: pop       ebp
0043669b: pop       ebx
0043669c: mov       dword ptr fs:[0], ecx
004366a3: add       esp, 0x34
004366a6: ret       4
004366a9: nop       
004366aa: nop       
004366ab: nop       
004366ac: nop       
004366ad: nop       
004366ae: nop       
004366af: nop       
