00432420: push      -1
00432422: push      0x623b25
00432427: mov       eax, dword ptr fs:[0]
0043242d: push      eax
0043242e: mov       dword ptr fs:[0], esp
00432435: sub       esp, 0x114
0043243b: push      ebp
0043243c: mov       ebp, ecx
0043243e: push      0x1e8
00432443: push      0x690328
00432448: lea       ecx, [esp + 0x98]
0043244f: call      0x5ae5f0
00432454: mov       al, byte ptr [0x6b52cc]
00432459: mov       dword ptr [esp + 0x120], 0
00432464: test      al, 1
00432466: mov       byte ptr [esp + 7], 0
0043246b: jne       0x432485
0043246d: or        al, 1
0043246f: mov       byte ptr [0x6b52cc], al
00432474: mov       ecx, dword ptr [ebp + 0x1f0]
0043247a: mov       eax, dword ptr [ecx]
0043247c: call      dword ptr [eax + 0x28]
0043247f: fstp      dword ptr [0x6b52c8]
00432485: mov       ecx, dword ptr [ebp + 0x1f0]
0043248b: push      0
0043248d: push      0x68f940
00432492: push      0x68f918
00432497: push      0
00432499: push      ecx
0043249a: call      0x60a6f2
0043249f: add       esp, 0x14
004324a2: mov       ecx, eax
004324a4: call      0x439f30
004324a9: mov       edx, dword ptr [ebp + 0xf8]
004324af: push      0
004324b1: push      0x690480
004324b6: push      0x690460
004324bb: push      0
004324bd: push      edx
004324be: mov       dword ptr [esp + 0x80], eax
004324c5: call      0x60a6f2
004324ca: mov       dword ptr [esp + 0x3c], eax
004324ce: mov       eax, dword ptr [0x6b915c]
004324d3: add       esp, 0x14
004324d6: test      eax, eax
004324d8: jne       0x4324df
004324da: call      0x4bc480
004324df: push      ebx
004324e0: push      esi
004324e1: push      edi
004324e2: push      1
004324e4: push      0x690308
004324e9: push      0x6902e8
004324ee: push      0
004324f0: push      eax
004324f1: call      0x60a6f2
004324f6: add       esp, 0x14
004324f9: mov       ecx, eax
004324fb: call      0x492360
00432500: mov       ebx, eax
00432502: mov       ecx, ebp
00432504: mov       dword ptr [esp + 0xb0], ebx
0043250b: call      0x435440
00432510: mov       eax, dword ptr [esp + 0x138]
00432517: mov       ecx, dword ptr [esp + 0x134]
0043251e: push      eax
0043251f: push      ecx
00432520: mov       ecx, ebp
00432522: call      0x4da970
00432527: mov       ecx, ebp
00432529: call      0x4d6720
0043252e: mov       ecx, ebp
00432530: call      0x4d67f0
00432535: mov       eax, dword ptr [ebp + 0x10c]
0043253b: fstp      dword ptr [esp + 0x44]
0043253f: test      eax, eax
00432541: jne       0x4325ad
00432543: mov       dl, byte ptr [esp + 0x11]
00432547: push      0
00432549: lea       ecx, [esp + 0x28]
0043254d: mov       byte ptr [esp + 0x28], dl
00432551: call      0x4040a0
00432556: mov       edi, 0x6b3f70
0043255b: or        ecx, 0xffffffff
0043255e: xor       eax, eax
00432560: repne scasb al, byte ptr es:[edi]
00432562: not       ecx
00432564: dec       ecx
00432565: push      ecx
00432566: push      0x6b3f70
0043256b: lea       ecx, [esp + 0x2c]
0043256f: call      0x4040f0
00432574: lea       eax, [esp + 0x24]
00432578: mov       byte ptr [esp + 0x12c], 1
00432580: push      eax
00432581: push      0xb6
00432586: push      0x68d638
0043258b: push      0x68d62c
00432590: call      0x5a07f0
00432595: call      eax
00432597: add       esp, 0x10
0043259a: lea       ecx, [esp + 0x24]
0043259e: mov       byte ptr [esp + 0x12c], 0
004325a6: push      1
004325a8: call      0x4040a0
004325ad: mov       eax, dword ptr [ebp + 0x10c]
004325b3: mov       ecx, 0xc
004325b8: lea       edi, [esp + 0xf4]
004325bf: lea       esi, [eax + 0x1e0]
004325c5: rep movsd dword ptr es:[edi], dword ptr [esi]
004325c7: mov       ecx, ebx
004325c9: call      0x483780
004325ce: cmp       eax, -1
004325d1: jle       0x4325df
004325d3: mov       ecx, dword ptr [ebp + 0x250]
004325d9: push      eax
004325da: call      0x458e40
004325df: mov       eax, dword ptr [esp + 0x138]
004325e6: mov       edx, dword ptr [ebp + 0x258]
004325ec: lea       ecx, [ebp + 0x258]
004325f2: push      eax
004325f3: mov       eax, dword ptr [esp + 0x138]
004325fa: push      eax
004325fb: call      dword ptr [edx + 4]
004325fe: mov       eax, dword ptr [ebp + 0x254]
00432604: test      eax, eax
00432606: je        0x43366e
0043260c: mov       ecx, dword ptr [ebp + 0x1f0]
00432612: mov       edx, dword ptr [ecx]
00432614: call      dword ptr [edx + 0x28]
00432617: fcomp     dword ptr [0x6b52c8]
0043261d: mov       byte ptr [esp + 0x12], 1
00432622: fnstsw    ax
00432624: test      ah, 1
00432627: jne       0x43262e
00432629: mov       byte ptr [esp + 0x12], 0
0043262e: mov       ecx, dword ptr [ebp + 0x1f0]
00432634: mov       eax, dword ptr [ecx]
00432636: call      dword ptr [eax + 0x24]
00432639: mov       edx, dword ptr [ebp + 0x108]
0043263f: mov       esi, dword ptr [ebp + 0x254]
00432645: test      edx, 0x10000
0043264b: mov       cl, byte ptr [esi + 0x1b4]
00432651: push      0
00432653: setg      byte ptr [esp + 0x15]
00432658: add       esi, 0x1b4
0043265e: mov       byte ptr [esp + 0xe8], cl
00432665: lea       ecx, [esp + 0xe8]
0043266c: mov       bl, al
0043266e: call      0x4040a0
00432673: mov       edx, dword ptr [0x64aba8]
00432679: lea       ecx, [esp + 0xe4]
00432680: push      edx
00432681: push      0
00432683: push      esi
00432684: call      0x40cc00
00432689: test      bl, bl
0043268b: mov       byte ptr [esp + 0x12c], 2
00432693: mov       esi, 0xb
00432698: mov       edi, 0xe
0043269d: jne       0x4326bf
0043269f: mov       al, byte ptr [esp + 0x12]
004326a3: test      al, al
004326a5: jne       0x4326bf
004326a7: mov       al, byte ptr [ebp + 0x104]
004326ad: test      al, al
004326af: je        0x4326bf
004326b1: mov       al, byte ptr [ebp + 0x371]
004326b7: test      al, al
004326b9: je        0x43275c
004326bf: mov       al, byte ptr [esp + 0x11]
004326c3: test      al, al
004326c5: jne       0x43273c
004326c7: mov       ecx, ebp
004326c9: call      0x431820
004326ce: test      bl, bl
004326d0: je        0x4326e3
004326d2: mov       dword ptr [ebp + 0x340], esi
004326d8: mov       dword ptr [ebp + 0x344], esi
004326de: jmp       0x4329f1
004326e3: mov       al, byte ptr [esp + 0x12]
004326e7: test      al, al
004326e9: je        0x43270e
004326eb: mov       ecx, dword ptr [ebp + 0x1f0]
004326f1: mov       eax, dword ptr [ecx]
004326f3: call      dword ptr [eax + 0x28]
004326f6: fstp      dword ptr [0x6b52c8]
004326fc: mov       byte ptr [0x6b5845], 0
00432703: mov       dword ptr [ebp + 0x340], edi
00432709: jmp       0x4329f1
0043270e: mov       al, byte ptr [ebp + 0x104]
00432714: test      al, al
00432716: je        0x432726
00432718: mov       al, byte ptr [ebp + 0x371]
0043271e: test      al, al
00432720: je        0x4329f1
00432726: mov       eax, 1
0043272b: mov       dword ptr [ebp + 0x340], eax
00432731: mov       dword ptr [ebp + 0x344], eax
00432737: jmp       0x4329f1
0043273c: mov       al, byte ptr [esp + 0x12]
00432740: test      al, al
00432742: je        0x43275c
00432744: mov       ecx, dword ptr [ebp + 0x1f0]
0043274a: mov       edx, dword ptr [ecx]
0043274c: call      dword ptr [edx + 0x28]
0043274f: fstp      dword ptr [0x6b52c8]
00432755: mov       byte ptr [0x6b5845], 0
0043275c: mov       ecx, dword ptr [ebp + 0xf8]
00432762: mov       eax, dword ptr [ecx]
00432764: call      dword ptr [eax + 0x30]
00432767: test      al, al
00432769: je        0x432785
0043276b: mov       esi, dword ptr [esp + 0x34]
0043276f: mov       eax, 6
00432774: mov       dword ptr [ebp + 0x340], eax
0043277a: mov       dword ptr [ebp + 0x344], eax
00432780: jmp       0x432872
00432785: mov       al, byte ptr [0x6b5846]
0043278a: test      al, al
0043278c: je        0x432795
0043278e: mov       byte ptr [0x6b5846], 0
00432795: mov       ecx, dword ptr [ebp + 0xf8]
0043279b: mov       edx, dword ptr [ecx]
0043279d: call      dword ptr [edx + 0x34]
004327a0: mov       esi, dword ptr [esp + 0x34]
004327a4: test      al, al
004327a6: je        0x432811
004327a8: mov       eax, dword ptr [esi]
004327aa: mov       ecx, esi
004327ac: call      dword ptr [eax + 0x3c]
004327af: test      al, al
004327b1: jne       0x432811
004327b3: mov       edx, dword ptr [esi]
004327b5: lea       eax, [esp + 0x14]
004327b9: push      eax
004327ba: mov       ecx, esi
004327bc: call      dword ptr [edx + 0x24]
004327bf: fld       dword ptr [eax]
004327c1: fcomp     dword ptr [0x64a450]
004327c7: fnstsw    ax
004327c9: test      ah, 0x40
004327cc: je        0x432811
004327ce: fld       dword ptr [esp + 0x44]
004327d2: fcomp     dword ptr [0x64a450]
004327d8: fnstsw    ax
004327da: test      ah, 0x40
004327dd: je        0x432872
004327e3: mov       edx, dword ptr [esi]
004327e5: lea       eax, [esp + 0x14]
004327e9: push      eax
004327ea: mov       ecx, esi
004327ec: call      dword ptr [edx + 0x24]
004327ef: fld       dword ptr [eax + 8]
004327f2: fcomp     dword ptr [0x64a450]
004327f8: fnstsw    ax
004327fa: test      ah, 1
004327fd: mov       eax, 4
00432802: jne       0x432809
00432804: mov       eax, 5
00432809: mov       dword ptr [ebp + 0x340], eax
0043280f: jmp       0x432872
00432811: mov       edx, dword ptr [esi]
00432813: mov       ecx, esi
00432815: call      dword ptr [edx + 0x3c]
00432818: test      al, al
0043281a: jne       0x432826
0043281c: mov       eax, dword ptr [ebp + 0x354]
00432822: test      eax, eax
00432824: je        0x432872
00432826: mov       eax, dword ptr [esi]
00432828: lea       ecx, [esp + 0x14]
0043282c: push      ecx
0043282d: mov       ecx, esi
0043282f: call      dword ptr [eax + 0x24]
00432832: fld       dword ptr [eax]
00432834: fcomp     dword ptr [0x64a450]
0043283a: fnstsw    ax
0043283c: test      ah, 1
0043283f: je        0x43284d
00432841: mov       dword ptr [ebp + 0x340], 9
0043284b: jmp       0x432872
0043284d: mov       edx, dword ptr [esi]
0043284f: lea       eax, [esp + 0x14]
00432853: push      eax
00432854: mov       ecx, esi
00432856: call      dword ptr [edx + 0x24]
00432859: fld       dword ptr [eax]
0043285b: fcomp     dword ptr [0x64a450]
00432861: fnstsw    ax
00432863: test      ah, 0x41
00432866: jne       0x432872
00432868: mov       dword ptr [ebp + 0x340], 0xa
00432872: mov       ecx, ebp
00432874: call      0x4363a0
00432879: mov       edx, dword ptr [esi]
0043287b: mov       bl, al
0043287d: mov       ecx, esi
0043287f: mov       byte ptr [esp + 0x13], bl
00432883: call      dword ptr [edx + 0x34]
00432886: test      al, al
00432888: jne       0x4328bf
0043288a: mov       al, byte ptr [0x6b5846]
0043288f: test      al, al
00432891: jne       0x4328bf
00432893: cmp       dword ptr [ebp + 0x340], edi
00432899: je        0x4328c7
0043289b: fld       dword ptr [esp + 0x44]
0043289f: fcomp     dword ptr [0x64a450]
004328a5: fnstsw    ax
004328a7: test      ah, 0x40
004328aa: je        0x4328e6
004328ac: mov       eax, 1
004328b1: mov       dword ptr [ebp + 0x340], eax
004328b7: mov       dword ptr [ebp + 0x344], eax
004328bd: jmp       0x4328e6
004328bf: cmp       dword ptr [ebp + 0x340], edi
004328c5: jne       0x4328e6
004328c7: mov       ecx, dword ptr [ebp + 0x254]
004328cd: add       ecx, 0x19c
004328d3: call      0x4a0d00
004328d8: test      al, al
004328da: je        0x4328e6
004328dc: mov       dword ptr [ebp + 0x340], 1
004328e6: mov       ecx, dword ptr [esp + 0xb0]
004328ed: mov       eax, dword ptr [ecx]
004328ef: call      dword ptr [eax + 0xc]
004328f2: cmp       al, 1
004328f4: jne       0x4329d1
004328fa: cmp       dword ptr [ebp + 0x340], edi
00432900: je        0x4329d1
00432906: mov       eax, dword ptr [esp + 0x78]
0043290a: test      eax, eax
0043290c: je        0x4329d1
00432912: mov       al, byte ptr [ebp + 0x394]
00432918: test      al, al
0043291a: je        0x4329c7
00432920: mov       eax, dword ptr [ebp + 0x390]
00432926: test      eax, eax
00432928: je        0x432997
0043292a: mov       esi, dword ptr [0x6b915c]
00432930: test      esi, esi
00432932: jne       0x43293b
00432934: call      0x4bc480
00432939: mov       esi, eax
0043293b: mov       eax, dword ptr [esi + 0x4e8]
00432941: cmp       eax, 0x80000000
00432946: jne       0x432966
00432948: mov       eax, dword ptr [esi + 0x49c]
0043294e: test      eax, eax
00432950: jne       0x432957
00432952: mov       eax, 0x64a3b4
00432957: push      eax
00432958: call      0x60af10
0043295d: add       esp, 4
00432960: mov       dword ptr [esi + 0x4e8], eax
00432966: test      eax, eax
00432968: jne       0x432997
0043296a: mov       ecx, dword ptr [0x64c404]
00432970: push      ecx
00432971: mov       ecx, dword ptr [ebp + 0x390]
00432977: call      0x4e2d60
0043297c: mov       edx, dword ptr [esp + 0x138]
00432983: mov       eax, dword ptr [esp + 0x134]
0043298a: mov       ecx, dword ptr [ebp + 0x390]
00432990: push      edx
00432991: push      eax
00432992: call      0x502e40
00432997: mov       ecx, dword ptr [ebp + 0x330]
0043299d: test      ecx, ecx
0043299f: je        0x4329c7
004329a1: push      1
004329a3: call      0x502350
004329a8: mov       eax, dword ptr [ebp + 0x330]
004329ae: mov       byte ptr [eax + 0xa8], 1
004329b5: mov       eax, dword ptr [ebp + 0x330]
004329bb: fld       dword ptr [0x64c400]
004329c1: fstp      dword ptr [eax + 0x130]
004329c7: mov       dword ptr [ebp + 0x340], 0xf
004329d1: test      bl, bl
004329d3: je        0x4329f1
004329d5: cmp       dword ptr [ebp + 0x340], 6
004329dc: je        0x4329f1
004329de: mov       al, byte ptr [0x6b5846]
004329e3: test      al, al
004329e5: jne       0x4329f1
004329e7: mov       dword ptr [ebp + 0x340], 0xd
004329f1: mov       eax, dword ptr [ebp + 0x340]
004329f7: mov       ecx, dword ptr [0x6b5864]
004329fd: cmp       ecx, eax
004329ff: mov       dword ptr [0x6b5864], eax
00432a04: setne     cl
00432a07: test      cl, cl
00432a09: je        0x433142
00432a0f: mov       al, byte ptr [0x6b5845]
00432a14: test      al, al
00432a16: jne       0x433142
00432a1c: mov       al, byte ptr [esp + 0x13]
00432a20: test      al, al
00432a22: jne       0x433142
00432a28: mov       al, byte ptr [ebp + 0x372]
00432a2e: test      al, al
00432a30: jne       0x433150
00432a36: mov       eax, dword ptr [ebp + 0x340]
00432a3c: dec       eax
00432a3d: cmp       eax, 0xe
00432a40: ja        0x433142
00432a46: jmp       dword ptr [eax*4 + 0x433758]
00432a4d: mov       cl, byte ptr [esp + 0x11]
00432a51: mov       esi, dword ptr [0x69015c]
00432a57: mov       byte ptr [esp + 0xb4], cl
00432a5e: push      0
00432a60: lea       ecx, [esp + 0xb8]
00432a67: call      0x4040a0
00432a6c: mov       edi, esi
00432a6e: or        ecx, 0xffffffff
00432a71: xor       eax, eax
00432a73: push      1
00432a75: repne scasb al, byte ptr es:[edi]
00432a77: not       ecx
00432a79: dec       ecx
00432a7a: mov       ebx, ecx
00432a7c: lea       ecx, [esp + 0xb8]
00432a83: push      ebx
00432a84: call      0x401940
00432a89: test      al, al
00432a8b: je        0x432ab1
00432a8d: mov       edi, dword ptr [esp + 0xb8]
00432a94: mov       ecx, ebx
00432a96: mov       edx, ecx
00432a98: push      ebx
00432a99: shr       ecx, 2
00432a9c: rep movsd dword ptr es:[edi], dword ptr [esi]
00432a9e: mov       ecx, edx
00432aa0: and       ecx, 3
00432aa3: rep movsb byte ptr es:[edi], byte ptr [esi]
00432aa5: lea       ecx, [esp + 0xb8]
00432aac: call      0x404190
00432ab1: mov       ecx, dword ptr [ebp + 0x254]
00432ab7: push      0x3fc00000
00432abc: lea       eax, [esp + 0xb8]
00432ac3: push      0
00432ac5: push      eax
00432ac6: mov       byte ptr [esp + 0x138], 3
00432ace: call      0x42e240
00432ad3: push      1
00432ad5: lea       ecx, [esp + 0xb8]
00432adc: mov       byte ptr [esp + 0x130], 2
00432ae4: call      0x4040a0
00432ae9: jmp       0x433142
00432aee: mov       cl, byte ptr [esp + 0x11]
00432af2: mov       esi, dword ptr [0x690164]
00432af8: mov       byte ptr [esp + 0xd4], cl
00432aff: push      0
00432b01: lea       ecx, [esp + 0xd8]
00432b08: call      0x4040a0
00432b0d: mov       edi, esi
00432b0f: or        ecx, 0xffffffff
00432b12: xor       eax, eax
00432b14: push      1
00432b16: repne scasb al, byte ptr es:[edi]
00432b18: not       ecx
00432b1a: dec       ecx
00432b1b: mov       ebx, ecx
00432b1d: lea       ecx, [esp + 0xd8]
00432b24: push      ebx
00432b25: call      0x401940
00432b2a: test      al, al
00432b2c: je        0x432b52
00432b2e: mov       edi, dword ptr [esp + 0xd8]
00432b35: mov       ecx, ebx
00432b37: mov       edx, ecx
00432b39: push      ebx
00432b3a: shr       ecx, 2
00432b3d: rep movsd dword ptr es:[edi], dword ptr [esi]
00432b3f: mov       ecx, edx
00432b41: and       ecx, 3
00432b44: rep movsb byte ptr es:[edi], byte ptr [esi]
00432b46: lea       ecx, [esp + 0xd8]
00432b4d: call      0x404190
00432b52: mov       ecx, dword ptr [ebp + 0x254]
00432b58: push      0x3fcccccd
00432b5d: lea       eax, [esp + 0xd8]
00432b64: push      0
00432b66: push      eax
00432b67: mov       byte ptr [esp + 0x138], 4
00432b6f: call      0x42e240
00432b74: push      1
00432b76: lea       ecx, [esp + 0xd8]
00432b7d: mov       byte ptr [esp + 0x130], 2
00432b85: call      0x4040a0
00432b8a: jmp       0x433142
00432b8f: mov       cl, byte ptr [esp + 0x11]
00432b93: mov       esi, dword ptr [0x690130]
00432b99: mov       byte ptr [esp + 0xc4], cl
00432ba0: push      0
00432ba2: lea       ecx, [esp + 0xc8]
00432ba9: call      0x4040a0
00432bae: mov       edi, esi
00432bb0: or        ecx, 0xffffffff
00432bb3: xor       eax, eax
00432bb5: push      1
00432bb7: repne scasb al, byte ptr es:[edi]
00432bb9: not       ecx
00432bbb: dec       ecx
00432bbc: mov       ebx, ecx
00432bbe: lea       ecx, [esp + 0xc8]
00432bc5: push      ebx
00432bc6: call      0x401940
00432bcb: test      al, al
00432bcd: je        0x432bf3
00432bcf: mov       edi, dword ptr [esp + 0xc8]
00432bd6: mov       ecx, ebx
00432bd8: mov       edx, ecx
00432bda: push      ebx
00432bdb: shr       ecx, 2
00432bde: rep movsd dword ptr es:[edi], dword ptr [esi]
00432be0: mov       ecx, edx
00432be2: and       ecx, 3
00432be5: rep movsb byte ptr es:[edi], byte ptr [esi]
00432be7: lea       ecx, [esp + 0xc8]
00432bee: call      0x404190
00432bf3: mov       ecx, dword ptr [ebp + 0x254]
00432bf9: push      0x3f800000
00432bfe: lea       eax, [esp + 0xc8]
00432c05: push      1
00432c07: push      eax
00432c08: add       ecx, 0x19c
00432c0e: mov       byte ptr [esp + 0x138], 5
00432c16: call      0x4a0660
00432c1b: push      1
00432c1d: lea       ecx, [esp + 0xc8]
00432c24: mov       byte ptr [esp + 0x130], 2
00432c2c: call      0x4040a0
00432c31: jmp       0x433142
00432c36: mov       cl, byte ptr [esp + 0x11]
00432c3a: mov       esi, dword ptr [0x690138]
00432c40: mov       byte ptr [esp + 0x24], cl
00432c44: push      0
00432c46: lea       ecx, [esp + 0x28]
00432c4a: call      0x4040a0
00432c4f: mov       edi, esi
00432c51: or        ecx, 0xffffffff
00432c54: xor       eax, eax
00432c56: push      1
00432c58: repne scasb al, byte ptr es:[edi]
00432c5a: not       ecx
00432c5c: dec       ecx
00432c5d: mov       ebx, ecx
00432c5f: lea       ecx, [esp + 0x28]
00432c63: push      ebx
00432c64: call      0x401940
00432c69: test      al, al
00432c6b: je        0x432c8b
00432c6d: mov       edi, dword ptr [esp + 0x28]
00432c71: mov       ecx, ebx
00432c73: mov       edx, ecx
00432c75: push      ebx
00432c76: shr       ecx, 2
00432c79: rep movsd dword ptr es:[edi], dword ptr [esi]
00432c7b: mov       ecx, edx
00432c7d: and       ecx, 3
00432c80: rep movsb byte ptr es:[edi], byte ptr [esi]
00432c82: lea       ecx, [esp + 0x28]
00432c86: call      0x404190
00432c8b: mov       ecx, dword ptr [ebp + 0x254]
00432c91: push      0x400ccccd
00432c96: lea       eax, [esp + 0x28]
00432c9a: push      1
00432c9c: push      eax
00432c9d: add       ecx, 0x19c
00432ca3: mov       byte ptr [esp + 0x138], 6
00432cab: call      0x4a0660
00432cb0: push      1
00432cb2: lea       ecx, [esp + 0x28]
00432cb6: mov       byte ptr [esp + 0x130], 2
00432cbe: call      0x4040a0
00432cc3: jmp       0x433142
00432cc8: mov       cl, byte ptr [esp + 0x11]
00432ccc: mov       esi, dword ptr [0x690134]
00432cd2: mov       byte ptr [esp + 0x58], cl
00432cd6: push      0
00432cd8: lea       ecx, [esp + 0x5c]
00432cdc: call      0x4040a0
00432ce1: mov       edi, esi
00432ce3: or        ecx, 0xffffffff
00432ce6: xor       eax, eax
00432ce8: push      1
00432cea: repne scasb al, byte ptr es:[edi]
00432cec: not       ecx
00432cee: dec       ecx
00432cef: mov       ebx, ecx
00432cf1: lea       ecx, [esp + 0x5c]
00432cf5: push      ebx
00432cf6: call      0x401940
00432cfb: test      al, al
00432cfd: je        0x432d1f
00432cff: mov       edi, dword ptr [esp + 0x5c]
00432d03: mov       ecx, ebx
00432d05: mov       edx, ecx
00432d07: shr       ecx, 2
00432d0a: rep movsd dword ptr es:[edi], dword ptr [esi]
00432d0c: mov       ecx, edx
00432d0e: and       ecx, 3
00432d11: rep movsb byte ptr es:[edi], byte ptr [esi]
00432d13: mov       eax, dword ptr [esp + 0x5c]
00432d17: mov       dword ptr [esp + 0x60], ebx
00432d1b: mov       byte ptr [eax + ebx], 0
00432d1f: push      0x3f800000
00432d24: lea       ecx, [esp + 0x5c]
00432d28: push      1
00432d2a: push      ecx
00432d2b: mov       ecx, dword ptr [ebp + 0x254]
00432d31: mov       byte ptr [esp + 0x138], 7
00432d39: add       ecx, 0x19c
00432d3f: call      0x4a0660
00432d44: push      1
00432d46: lea       ecx, [esp + 0x5c]
00432d4a: mov       byte ptr [esp + 0x130], 2
00432d52: call      0x4040a0
00432d57: jmp       0x433142
00432d5c: mov       dl, byte ptr [esp + 0x11]
00432d60: mov       esi, dword ptr [0x690140]
00432d66: push      0
00432d68: lea       ecx, [esp + 0xa4]
00432d6f: mov       byte ptr [esp + 0xa4], dl
00432d76: call      0x4040a0
00432d7b: mov       edi, esi
00432d7d: or        ecx, 0xffffffff
00432d80: xor       eax, eax
00432d82: push      1
00432d84: repne scasb al, byte ptr es:[edi]
00432d86: not       ecx
00432d88: dec       ecx
00432d89: mov       ebx, ecx
00432d8b: lea       ecx, [esp + 0xa4]
00432d92: push      ebx
00432d93: call      0x401940
00432d98: test      al, al
00432d9a: je        0x432dc5
00432d9c: mov       edi, dword ptr [esp + 0xa4]
00432da3: mov       ecx, ebx
00432da5: mov       eax, ecx
00432da7: shr       ecx, 2
00432daa: rep movsd dword ptr es:[edi], dword ptr [esi]
00432dac: mov       ecx, eax
00432dae: and       ecx, 3
00432db1: rep movsb byte ptr es:[edi], byte ptr [esi]
00432db3: mov       ecx, dword ptr [esp + 0xa4]
00432dba: mov       dword ptr [esp + 0xa8], ebx
00432dc1: mov       byte ptr [ecx + ebx], 0
00432dc5: mov       ecx, dword ptr [ebp + 0x254]
00432dcb: push      0x3fb33333
00432dd0: lea       edx, [esp + 0xa4]
00432dd7: push      1
00432dd9: push      edx
00432dda: add       ecx, 0x19c
00432de0: mov       byte ptr [esp + 0x138], 8
00432de8: call      0x4a0660
00432ded: push      1
00432def: lea       ecx, [esp + 0xa4]
00432df6: mov       byte ptr [esp + 0x130], 2
00432dfe: call      0x4040a0
00432e03: mov       byte ptr [0x6b5846], 1
00432e0a: mov       al, byte ptr [ebp + 0x370]
00432e10: test      al, al
00432e12: je        0x433142
00432e18: mov       al, byte ptr [esp + 0x11]
00432e1c: mov       esi, dword ptr [0x690148]
00432e22: push      0
00432e24: lea       ecx, [esp + 0x90]
00432e2b: mov       byte ptr [esp + 0x90], al
00432e32: call      0x4040a0
00432e37: mov       edi, esi
00432e39: or        ecx, 0xffffffff
00432e3c: xor       eax, eax
00432e3e: push      1
00432e40: repne scasb al, byte ptr es:[edi]
00432e42: not       ecx
00432e44: dec       ecx
00432e45: mov       ebx, ecx
00432e47: lea       ecx, [esp + 0x90]
00432e4e: push      ebx
00432e4f: call      0x401940
00432e54: test      al, al
00432e56: je        0x432e81
00432e58: mov       edi, dword ptr [esp + 0x90]
00432e5f: mov       ecx, ebx
00432e61: mov       edx, ecx
00432e63: shr       ecx, 2
00432e66: rep movsd dword ptr es:[edi], dword ptr [esi]
00432e68: mov       ecx, edx
00432e6a: and       ecx, 3
00432e6d: rep movsb byte ptr es:[edi], byte ptr [esi]
00432e6f: mov       eax, dword ptr [esp + 0x90]
00432e76: mov       dword ptr [esp + 0x94], ebx
00432e7d: mov       byte ptr [eax + ebx], 0
00432e81: push      0x3fa66666
00432e86: lea       ecx, [esp + 0x90]
00432e8d: push      1
00432e8f: push      ecx
00432e90: mov       ecx, dword ptr [ebp + 0x254]
00432e96: mov       byte ptr [esp + 0x138], 9
00432e9e: call      0x42e240
00432ea3: push      1
00432ea5: lea       ecx, [esp + 0x90]
00432eac: mov       byte ptr [esp + 0x130], 2
00432eb4: call      0x4040a0
00432eb9: mov       byte ptr [ebp + 0x370], 0
00432ec0: jmp       0x433142
00432ec5: mov       dl, byte ptr [esp + 0x11]
00432ec9: mov       esi, dword ptr [0x690150]
00432ecf: push      0
00432ed1: lea       ecx, [esp + 0x6c]
00432ed5: mov       byte ptr [esp + 0x6c], dl
00432ed9: call      0x4040a0
00432ede: mov       edi, esi
00432ee0: or        ecx, 0xffffffff
00432ee3: xor       eax, eax
00432ee5: push      1
00432ee7: repne scasb al, byte ptr es:[edi]
00432ee9: not       ecx
00432eeb: dec       ecx
00432eec: mov       ebx, ecx
00432eee: lea       ecx, [esp + 0x6c]
00432ef2: push      ebx
00432ef3: call      0x401940
00432ef8: test      al, al
00432efa: je        0x432f1c
00432efc: mov       edi, dword ptr [esp + 0x6c]
00432f00: mov       ecx, ebx
00432f02: mov       eax, ecx
00432f04: shr       ecx, 2
00432f07: rep movsd dword ptr es:[edi], dword ptr [esi]
00432f09: mov       ecx, eax
00432f0b: and       ecx, 3
00432f0e: rep movsb byte ptr es:[edi], byte ptr [esi]
00432f10: mov       ecx, dword ptr [esp + 0x6c]
00432f14: mov       dword ptr [esp + 0x70], ebx
00432f18: mov       byte ptr [ecx + ebx], 0
00432f1c: mov       ecx, dword ptr [ebp + 0x254]
00432f22: push      0x4019999a
00432f27: lea       edx, [esp + 0x6c]
00432f2b: push      1
00432f2d: push      edx
00432f2e: add       ecx, 0x19c
00432f34: mov       byte ptr [esp + 0x138], 0xa
00432f3c: call      0x4a0660
00432f41: push      1
00432f43: lea       ecx, [esp + 0x6c]
00432f47: mov       byte ptr [esp + 0x130], 2
00432f4f: call      0x4040a0
00432f54: jmp       0x433142
00432f59: mov       al, byte ptr [esp + 0x11]
00432f5d: mov       esi, dword ptr [0x690154]
00432f63: push      0
00432f65: lea       ecx, [esp + 0x80]
00432f6c: mov       byte ptr [esp + 0x80], al
00432f73: call      0x4040a0
00432f78: mov       edi, esi
00432f7a: or        ecx, 0xffffffff
00432f7d: xor       eax, eax
00432f7f: push      1
00432f81: repne scasb al, byte ptr es:[edi]
00432f83: not       ecx
00432f85: dec       ecx
00432f86: mov       ebx, ecx
00432f88: lea       ecx, [esp + 0x80]
00432f8f: push      ebx
00432f90: call      0x401940
00432f95: test      al, al
00432f97: je        0x432fc2
00432f99: mov       edi, dword ptr [esp + 0x80]
00432fa0: mov       ecx, ebx
00432fa2: mov       edx, ecx
00432fa4: shr       ecx, 2
00432fa7: rep movsd dword ptr es:[edi], dword ptr [esi]
00432fa9: mov       ecx, edx
00432fab: and       ecx, 3
00432fae: rep movsb byte ptr es:[edi], byte ptr [esi]
00432fb0: mov       eax, dword ptr [esp + 0x80]
00432fb7: mov       dword ptr [esp + 0x84], ebx
00432fbe: mov       byte ptr [eax + ebx], 0
00432fc2: push      0x4019999a
00432fc7: lea       ecx, [esp + 0x80]
00432fce: push      1
00432fd0: push      ecx
00432fd1: mov       ecx, dword ptr [ebp + 0x254]
00432fd7: mov       byte ptr [esp + 0x138], 0xb
00432fdf: add       ecx, 0x19c
00432fe5: call      0x4a0660
00432fea: push      1
00432fec: lea       ecx, [esp + 0x80]
00432ff3: mov       byte ptr [esp + 0x130], 2
00432ffb: call      0x4040a0
00433000: jmp       0x433142
00433005: mov       al, byte ptr [esp + 0x11]
00433009: mov       edx, dword ptr [0x690160]
0043300f: mov       byte ptr [esp + 0x14], al
00433013: xor       ebx, ebx
00433015: mov       edi, edx
00433017: or        ecx, 0xffffffff
0043301a: xor       eax, eax
0043301c: mov       dword ptr [esp + 0x18], ebx
00433020: mov       dword ptr [esp + 0x1c], ebx
00433024: mov       dword ptr [esp + 0x20], ebx
00433028: repne scasb al, byte ptr es:[edi]
0043302a: not       ecx
0043302c: dec       ecx
0043302d: push      ecx
0043302e: push      edx
0043302f: lea       ecx, [esp + 0x1c]
00433033: call      0x4040f0
00433038: push      ebx
00433039: lea       ecx, [esp + 0x18]
0043303d: push      ebx
0043303e: push      ecx
0043303f: mov       ecx, dword ptr [ebp + 0x254]
00433045: mov       byte ptr [esp + 0x138], 0xc
0043304d: add       ecx, 0x19c
00433053: call      0x4a0660
00433058: mov       eax, dword ptr [esp + 0x18]
0043305c: mov       byte ptr [esp + 0x12c], 2
00433064: cmp       eax, ebx
00433066: je        0x433085
00433068: lea       ecx, [eax - 1]
0043306b: mov       al, byte ptr [eax - 1]
0043306e: test      al, al
00433070: je        0x43307c
00433072: cmp       al, 0xff
00433074: je        0x43307c
00433076: dec       al
00433078: mov       byte ptr [ecx], al
0043307a: jmp       0x433085
0043307c: push      ecx
0043307d: call      0x5fe5f0
00433082: add       esp, 4
00433085: mov       ecx, ebp
00433087: mov       dword ptr [esp + 0x18], ebx
0043308b: mov       dword ptr [esp + 0x1c], ebx
0043308f: mov       dword ptr [esp + 0x20], ebx
00433093: call      0x434e30
00433098: mov       esi, eax
0043309a: mov       ecx, ebp
0043309c: push      esi
0043309d: call      0x431a00
004330a2: cmp       esi, 0xb
004330a5: mov       ecx, ebp
004330a7: jne       0x4330b0
004330a9: call      0x436b40
004330ae: jmp       0x4330b5
004330b0: call      0x436a30
004330b5: cmp       dword ptr [esp + 0x134], -1
004330bd: jne       0x433128
004330bf: mov       dl, byte ptr [esp + 0x11]
004330c3: push      ebx
004330c4: lea       ecx, [esp + 0x4c]
004330c8: mov       byte ptr [esp + 0x4c], dl
004330cc: call      0x4040a0
004330d1: mov       edi, 0x6b3f70
004330d6: or        ecx, 0xffffffff
004330d9: xor       eax, eax
004330db: repne scasb al, byte ptr es:[edi]
004330dd: not       ecx
004330df: dec       ecx
004330e0: push      ecx
004330e1: push      0x6b3f70
004330e6: lea       ecx, [esp + 0x50]
004330ea: call      0x4040f0
004330ef: lea       eax, [esp + 0x48]
004330f3: mov       byte ptr [esp + 0x12c], 0xd
004330fb: push      eax
004330fc: push      0x8a
00433101: push      0x68e22c
00433106: push      0x68e214
0043310b: call      0x5a07f0
00433110: call      eax
00433112: add       esp, 0x10
00433115: lea       ecx, [esp + 0x48]
00433119: mov       byte ptr [esp + 0x12c], 2
00433121: push      1
00433123: call      0x4040a0
00433128: fild      dword ptr [esp + 0x134]
0043312f: mov       dword ptr [ebp + 0x36c], ebx
00433135: fstp      dword ptr [ebp + 0x368]
0043313b: mov       byte ptr [0x6b5845], 1
00433142: mov       al, byte ptr [ebp + 0x372]
00433148: test      al, al
0043314a: je        0x4332c5
00433150: mov       eax, dword ptr [esp + 0xe8]
00433157: test      eax, eax
00433159: jne       0x433160
0043315b: mov       eax, 0x64a3b4
00433160: mov       edx, dword ptr [0x690144]
00433166: mov       esi, edx
00433168: mov       bl, byte ptr [eax]
0043316a: mov       cl, bl
0043316c: cmp       bl, byte ptr [esi]
0043316e: jne       0x43318e
00433170: test      cl, cl
00433172: je        0x433188
00433174: mov       bl, byte ptr [eax + 1]
00433177: mov       cl, bl
00433179: cmp       bl, byte ptr [esi + 1]
0043317c: jne       0x43318e
0043317e: add       eax, 2
00433181: add       esi, 2
00433184: test      cl, cl
00433186: jne       0x433168
00433188: xor       esi, esi
0043318a: xor       eax, eax
0043318c: jmp       0x433195
0043318e: sbb       eax, eax
00433190: sbb       eax, -1
00433193: xor       esi, esi
00433195: cmp       eax, esi
00433197: jne       0x43324d
0043319d: mov       ecx, dword ptr [ebp + 0x254]
004331a3: add       ecx, 0x19c
004331a9: call      0x4a0d00
004331ae: test      al, al
004331b0: je        0x4332c7
004331b6: mov       cl, byte ptr [esp + 0x11]
004331ba: mov       edx, dword ptr [0x690130]
004331c0: mov       byte ptr [esp + 0x24], cl
004331c4: mov       edi, edx
004331c6: or        ecx, 0xffffffff
004331c9: xor       eax, eax
004331cb: mov       dword ptr [esp + 0x28], esi
004331cf: mov       dword ptr [esp + 0x2c], esi
004331d3: mov       dword ptr [esp + 0x30], esi
004331d7: repne scasb al, byte ptr es:[edi]
004331d9: not       ecx
004331db: dec       ecx
004331dc: push      ecx
004331dd: push      edx
004331de: lea       ecx, [esp + 0x2c]
004331e2: call      0x4040f0
004331e7: mov       ecx, dword ptr [ebp + 0x254]
004331ed: push      0x3fd9999a
004331f2: lea       edx, [esp + 0x28]
004331f6: push      1
004331f8: push      edx
004331f9: mov       byte ptr [esp + 0x138], 0xe
00433201: call      0x42e240
00433206: mov       eax, dword ptr [esp + 0x28]
0043320a: mov       byte ptr [esp + 0x12c], 2
00433212: cmp       eax, esi
00433214: je        0x433233
00433216: lea       ecx, [eax - 1]
00433219: mov       al, byte ptr [eax - 1]
0043321c: test      al, al
0043321e: je        0x43322a
00433220: cmp       al, 0xff
00433222: je        0x43322a
00433224: dec       al
00433226: mov       byte ptr [ecx], al
00433228: jmp       0x433233
0043322a: push      ecx
0043322b: call      0x5fe5f0
00433230: add       esp, 4
00433233: mov       byte ptr [ebp + 0x104], 1
0043323a: mov       dword ptr [ebp + 0x340], 1
00433244: mov       byte ptr [ebp + 0x372], 0
0043324b: jmp       0x4332c7
0043324d: mov       al, byte ptr [esp + 0x11]
00433251: mov       edi, edx
00433253: mov       byte ptr [esp + 0x24], al
00433257: or        ecx, 0xffffffff
0043325a: xor       eax, eax
0043325c: mov       dword ptr [esp + 0x28], esi
00433260: mov       dword ptr [esp + 0x2c], esi
00433264: mov       dword ptr [esp + 0x30], esi
00433268: repne scasb al, byte ptr es:[edi]
0043326a: not       ecx
0043326c: dec       ecx
0043326d: push      ecx
0043326e: push      edx
0043326f: lea       ecx, [esp + 0x2c]
00433273: call      0x4040f0
00433278: push      0x3f800000
0043327d: lea       ecx, [esp + 0x28]
00433281: push      esi
00433282: push      ecx
00433283: mov       ecx, dword ptr [ebp + 0x254]
00433289: mov       byte ptr [esp + 0x138], 0xf
00433291: call      0x42e240
00433296: mov       eax, dword ptr [esp + 0x28]
0043329a: mov       byte ptr [esp + 0x12c], 2
004332a2: cmp       eax, esi
004332a4: je        0x4332c7
004332a6: lea       ecx, [eax - 1]
004332a9: mov       al, byte ptr [eax - 1]
004332ac: test      al, al
004332ae: je        0x4332ba
004332b0: cmp       al, 0xff
004332b2: je        0x4332ba
004332b4: dec       al
004332b6: mov       byte ptr [ecx], al
004332b8: jmp       0x4332c7
004332ba: push      ecx
004332bb: call      0x5fe5f0
004332c0: add       esp, 4
004332c3: jmp       0x4332c7
004332c5: xor       esi, esi
004332c7: mov       al, byte ptr [0x6b5845]
004332cc: test      al, al
004332ce: je        0x433338
004332d0: mov       al, byte ptr [ebp + 0x104]
004332d6: test      al, al
004332d8: je        0x433338
004332da: mov       al, byte ptr [ebp + 0x371]
004332e0: test      al, al
004332e2: jne       0x433338
004332e4: mov       edx, dword ptr [ebp + 0x354]
004332ea: mov       eax, dword ptr [esp + 0x134]
004332f1: cmp       edx, esi
004332f3: push      eax
004332f4: setne     dl
004332f7: mov       ecx, ebp
004332f9: mov       byte ptr [ebp + 0x364], dl
004332ff: call      0x434900
00433304: mov       ecx, dword ptr [ebp + 0x254]
0043330a: add       ecx, 0x19c
00433310: call      0x4a1060
00433315: fcomp     qword ptr [0x64c568]
0043331b: fnstsw    ax
0043331d: test      ah, 1
00433320: jne       0x43337d
00433322: mov       ecx, ebp
00433324: call      0x431820
00433329: mov       dword ptr [0x6b5864], esi
0043332f: mov       byte ptr [0x6b5845], 0
00433336: jmp       0x43337d
00433338: mov       ecx, dword ptr [esp + 0x134]
0043333f: push      ecx
00433340: mov       ecx, ebp
00433342: call      0x4341b0
00433347: test      al, al
00433349: jne       0x43337d
0043334b: mov       byte ptr [0x6b5845], al
00433350: mov       ecx, dword ptr [ebp + 0x338]
00433356: push      esi
00433357: mov       byte ptr [ebp + 0x364], al
0043335d: call      0x453ce0
00433362: mov       al, byte ptr [0x6b5844]
00433367: test      al, al
00433369: je        0x43337d
0043336b: mov       ecx, dword ptr [ebp + 0x250]
00433371: call      0x458f90
00433376: mov       byte ptr [0x6b5844], 0
0043337d: cmp       dword ptr [ebp + 0x340], 6
00433384: je        0x4334f6
0043338a: mov       al, byte ptr [0x6b5846]
0043338f: test      al, al
00433391: jne       0x4334f6
00433397: mov       al, byte ptr [esp + 0x13]
0043339b: test      al, al
0043339d: je        0x433445
004333a3: mov       esi, dword ptr [0x69014c]
004333a9: mov       dl, byte ptr [esp + 0x11]
004333ad: xor       eax, eax
004333af: mov       edi, esi
004333b1: or        ecx, 0xffffffff
004333b4: mov       byte ptr [esp + 0x14], dl
004333b8: mov       dword ptr [esp + 0x18], eax
004333bc: mov       dword ptr [esp + 0x1c], eax
004333c0: mov       dword ptr [esp + 0x20], eax
004333c4: push      1
004333c6: repne scasb al, byte ptr es:[edi]
004333c8: not       ecx
004333ca: dec       ecx
004333cb: mov       ebx, ecx
004333cd: lea       ecx, [esp + 0x18]
004333d1: push      ebx
004333d2: call      0x401940
004333d7: test      al, al
004333d9: je        0x4333f9
004333db: mov       edi, dword ptr [esp + 0x18]
004333df: mov       ecx, ebx
004333e1: mov       eax, ecx
004333e3: push      ebx
004333e4: shr       ecx, 2
004333e7: rep movsd dword ptr es:[edi], dword ptr [esi]
004333e9: mov       ecx, eax
004333eb: and       ecx, 3
004333ee: rep movsb byte ptr es:[edi], byte ptr [esi]
004333f0: lea       ecx, [esp + 0x18]
004333f4: call      0x404190
004333f9: push      0x3fc00000
004333fe: lea       ecx, [esp + 0x18]
00433402: push      0
00433404: push      ecx
00433405: mov       ecx, dword ptr [ebp + 0x254]
0043340b: mov       byte ptr [esp + 0x138], 0x10
00433413: call      0x42e240
00433418: mov       eax, dword ptr [esp + 0x18]
0043341c: mov       byte ptr [esp + 0x12c], 2
00433424: test      eax, eax
00433426: je        0x433445
00433428: lea       ecx, [eax - 1]
0043342b: mov       al, byte ptr [eax - 1]
0043342e: test      al, al
00433430: je        0x43343c
00433432: cmp       al, 0xff
00433434: je        0x43343c
00433436: dec       al
00433438: mov       byte ptr [ecx], al
0043343a: jmp       0x433445
0043343c: push      ecx
0043343d: call      0x5fe5f0
00433442: add       esp, 4
00433445: cmp       dword ptr [ebp + 0x34c], 0xc
0043344c: jne       0x4334f6
00433452: mov       esi, dword ptr [0x690168]
00433458: mov       dl, byte ptr [esp + 0x11]
0043345c: xor       eax, eax
0043345e: mov       edi, esi
00433460: or        ecx, 0xffffffff
00433463: mov       byte ptr [esp + 0x14], dl
00433467: mov       dword ptr [esp + 0x18], eax
0043346b: mov       dword ptr [esp + 0x1c], eax
0043346f: mov       dword ptr [esp + 0x20], eax
00433473: push      1
00433475: repne scasb al, byte ptr es:[edi]
00433477: not       ecx
00433479: dec       ecx
0043347a: mov       ebx, ecx
0043347c: lea       ecx, [esp + 0x18]
00433480: push      ebx
00433481: call      0x401940
00433486: test      al, al
00433488: je        0x4334aa
0043348a: mov       edi, dword ptr [esp + 0x18]
0043348e: mov       ecx, ebx
00433490: mov       eax, ecx
00433492: shr       ecx, 2
00433495: rep movsd dword ptr es:[edi], dword ptr [esi]
00433497: mov       ecx, eax
00433499: and       ecx, 3
0043349c: rep movsb byte ptr es:[edi], byte ptr [esi]
0043349e: mov       ecx, dword ptr [esp + 0x18]
004334a2: mov       dword ptr [esp + 0x1c], ebx
004334a6: mov       byte ptr [ecx + ebx], 0
004334aa: mov       ecx, dword ptr [ebp + 0x254]
004334b0: push      0x3fc00000
004334b5: lea       edx, [esp + 0x18]
004334b9: push      0
004334bb: push      edx
004334bc: mov       byte ptr [esp + 0x138], 0x11
004334c4: call      0x42e240
004334c9: mov       eax, dword ptr [esp + 0x18]
004334cd: mov       byte ptr [esp + 0x12c], 2
004334d5: test      eax, eax
004334d7: je        0x4334f6
004334d9: lea       ecx, [eax - 1]
004334dc: mov       al, byte ptr [eax - 1]
004334df: test      al, al
004334e1: je        0x4334ed
004334e3: cmp       al, 0xff
004334e5: je        0x4334ed
004334e7: dec       al
004334e9: mov       byte ptr [ecx], al
004334eb: jmp       0x4334f6
004334ed: push      ecx
004334ee: call      0x5fe5f0
004334f3: add       esp, 4
004334f6: lea       eax, [ebp + 0x198]
004334fc: mov       ecx, dword ptr [ebp + 0x198]
00433502: mov       dword ptr [esp + 0x38], ecx
00433506: lea       ecx, [ebp + 0x1d0]
0043350c: mov       edx, dword ptr [eax + 4]
0043350f: mov       dword ptr [esp + 0x3c], edx
00433513: mov       eax, dword ptr [eax + 8]
00433516: mov       dword ptr [esp + 0x40], eax
0043351a: call      0x554a20
0043351f: fld       dword ptr [eax + 4]
00433522: fadd      dword ptr [ebp + 0x19c]
00433528: mov       ecx, dword ptr [ebp + 0xf8]
0043352e: lea       eax, [esp + 0x14]
00433532: push      eax
00433533: fstp      dword ptr [esp + 0x40]
00433537: mov       edx, dword ptr [ecx]
00433539: call      dword ptr [edx + 0x28]
0043353c: mov       ecx, dword ptr [eax + 4]
0043353f: lea       edx, [esp + 0x38]
00433543: push      ecx
00433544: lea       eax, [esp + 0xf8]
0043354b: push      edx
0043354c: push      eax
0043354d: call      0x430ac0
00433552: mov       ecx, dword ptr [ebp + 0x254]
00433558: add       esp, 0xc
0043355b: call      0x42e550
00433560: test      al, al
00433562: jne       0x433623
00433568: mov       ebx, dword ptr [ebp + 0x254]
0043356e: mov       ecx, 0xc
00433573: lea       esi, [esp + 0xf4]
0043357a: push      1
0043357c: lea       edi, [ebx + 0x168]
00433582: rep movsd dword ptr es:[edi], dword ptr [esi]
00433584: mov       ecx, ebx
00433586: call      0x49d5e0
0043358b: mov       eax, dword ptr [ebx + 0x114]
00433591: mov       byte ptr [ebx + 0x198], 1
00433598: test      eax, eax
0043359a: jne       0x433606
0043359c: mov       cl, byte ptr [esp + 0x11]
004335a0: push      0
004335a2: mov       byte ptr [esp + 0x4c], cl
004335a6: lea       ecx, [esp + 0x4c]
004335aa: call      0x4040a0
004335af: mov       edi, 0x6b3f70
004335b4: or        ecx, 0xffffffff
004335b7: xor       eax, eax
004335b9: repne scasb al, byte ptr es:[edi]
004335bb: not       ecx
004335bd: dec       ecx
004335be: push      ecx
004335bf: push      0x6b3f70
004335c4: lea       ecx, [esp + 0x50]
004335c8: call      0x4040f0
004335cd: lea       edx, [esp + 0x48]
004335d1: mov       byte ptr [esp + 0x12c], 0x12
004335d9: push      edx
004335da: push      0x18d
004335df: push      0x68e778
004335e4: push      0x68e768
004335e9: call      0x5a07f0
004335ee: call      eax
004335f0: add       esp, 0x10
004335f3: lea       ecx, [esp + 0x48]
004335f7: mov       byte ptr [esp + 0x12c], 2
004335ff: push      1
00433601: call      0x4040a0
00433606: mov       ecx, dword ptr [ebx + 0x114]
0043360c: lea       eax, [ebx + 0x168]
00433612: push      eax
00433613: xor       edx, edx
00433615: call      0x5b50a0
0043361a: push      0
0043361c: mov       ecx, ebx
0043361e: call      0x4337a0
00433623: mov       edx, dword ptr [esp + 0x138]
0043362a: mov       ecx, dword ptr [ebp + 0x254]
00433630: push      edx
00433631: mov       edx, dword ptr [esp + 0x138]
00433638: mov       eax, dword ptr [ecx]
0043363a: push      edx
0043363b: call      dword ptr [eax + 8]
0043363e: mov       eax, dword ptr [esp + 0xe8]
00433645: mov       byte ptr [esp + 0x12c], 0
0043364d: test      eax, eax
0043364f: je        0x43366e
00433651: lea       ecx, [eax - 1]
00433654: mov       al, byte ptr [eax - 1]
00433657: test      al, al
00433659: je        0x433665
0043365b: cmp       al, 0xff
0043365d: je        0x433665
0043365f: dec       al
00433661: mov       byte ptr [ecx], al
00433663: jmp       0x43366e
00433665: push      ecx
00433666: call      0x5fe5f0
0043366b: add       esp, 4
0043366e: mov       ecx, dword ptr [ebp + 0x334]
00433674: pop       edi
00433675: pop       esi
00433676: pop       ebx
00433677: test      ecx, ecx
00433679: je        0x4336bb
0043367b: mov       edx, dword ptr [esp + 0x12c]
00433682: mov       eax, dword ptr [ecx]
00433684: push      edx
00433685: mov       edx, dword ptr [esp + 0x12c]
0043368c: push      edx
0043368d: call      dword ptr [eax + 8]
00433690: mov       eax, dword ptr [ebp + 0x334]
00433696: mov       cl, byte ptr [eax + 0x364]
0043369c: test      cl, cl
0043369e: jne       0x4336bb
004336a0: mov       al, byte ptr [0x6b5844]
004336a5: test      al, al
004336a7: je        0x4336bb
004336a9: mov       ecx, dword ptr [ebp + 0x250]
004336af: call      0x458f90
004336b4: mov       byte ptr [0x6b5844], 0
004336bb: mov       eax, dword ptr [ebp + 0x398]
004336c1: test      eax, eax
004336c3: je        0x433707
004336c5: lea       ecx, [esp + 8]
004336c9: push      ecx
004336ca: mov       ecx, dword ptr [ebp + 0x254]
004336d0: call      0x49bc80
004336d5: mov       edx, dword ptr [eax]
004336d7: mov       dword ptr [esp + 0x2c], edx
004336db: mov       ecx, dword ptr [eax + 4]
004336de: mov       dword ptr [esp + 0x30], ecx
004336e2: mov       ecx, dword ptr [ebp + 0x398]
004336e8: fld       dword ptr [esp + 0x30]
004336ec: fadd      dword ptr [0x64c564]
004336f2: mov       edx, dword ptr [eax + 8]
004336f5: mov       dword ptr [esp + 0x34], edx
004336f9: lea       edx, [esp + 0x2c]
004336fd: push      edx
004336fe: fstp      dword ptr [esp + 0x34]
00433702: mov       eax, dword ptr [ecx]
00433704: call      dword ptr [eax + 0x4c]
00433707: mov       ebp, dword ptr [ebp + 0x250]
0043370d: test      ebp, ebp
0043370f: je        0x433729
00433711: mov       ecx, dword ptr [esp + 0x12c]
00433718: mov       edx, dword ptr [esp + 0x128]
0043371f: mov       eax, dword ptr [ebp]
00433722: push      ecx
00433723: push      edx
00433724: mov       ecx, ebp
00433726: call      dword ptr [eax + 8]
00433729: lea       ecx, [esp + 0x90]
00433730: mov       dword ptr [esp + 0x120], 0xffffffff
0043373b: call      0x5ae770
00433740: mov       ecx, dword ptr [esp + 0x118]
00433747: pop       ebp
00433748: mov       dword ptr fs:[0], ecx
0043374f: add       esp, 0x120
00433755: ret       8
