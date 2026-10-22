004266a1: mov       al, byte ptr [esp + 0x13]
004266a5: push      esi
004266a6: lea       ecx, [esp + 0x18]
004266aa: mov       byte ptr [esp + 0x18], al
004266ae: call      0x4040a0
004266b3: mov       edi, 0x68fba4
004266b8: or        ecx, 0xffffffff
004266bb: xor       eax, eax
004266bd: push      1
004266bf: repne scasb al, byte ptr es:[edi]
004266c1: not       ecx
004266c3: dec       ecx
004266c4: mov       ebp, ecx
004266c6: lea       ecx, [esp + 0x18]
004266ca: push      ebp
004266cb: call      0x401940
004266d0: test      al, al
004266d2: je        0x4266fb
004266d4: mov       edi, dword ptr [esp + 0x18]
004266d8: mov       ecx, ebp
004266da: mov       edx, ecx
004266dc: mov       esi, 0x68fba4
004266e1: shr       ecx, 2
004266e4: rep movsd dword ptr es:[edi], dword ptr [esi]
004266e6: mov       ecx, edx
004266e8: and       ecx, 3
004266eb: rep movsb byte ptr es:[edi], byte ptr [esi]
004266ed: mov       eax, dword ptr [esp + 0x18]
004266f1: mov       dword ptr [esp + 0x1c], ebp
004266f5: xor       esi, esi
004266f7: mov       byte ptr [eax + ebp], 0
004266fb: lea       ecx, [esp + 0x34]
004266ff: push      esi
00426700: push      ecx
00426701: lea       edx, [esp + 0x2c]
00426705: push      0x3f800000
0042670a: lea       eax, [esp + 0x20]
0042670e: push      edx
0042670f: push      eax
00426710: lea       ecx, [esp + 0x5c]
00426714: mov       byte ptr [esp + 0xd0], 5
0042671c: call      0x5ac8b0
00426721: mov       edi, eax
00426723: fld       dword ptr [edi + 0x60]
00426726: fcomp     dword ptr [0x64a450]
0042672c: mov       byte ptr [esp + 0xbc], 6
00426734: fnstsw    ax
00426736: test      ah, 0x40
00426739: je        0x426751
0042673b: lea       ecx, [esp + 0x13]
0042673f: lea       edx, [edi + 0x14]
00426742: push      ecx
00426743: push      edx
00426744: call      0x5ad390
00426749: fst       dword ptr [edi + 0x60]
0042674c: add       esp, 8
0042674f: jmp       0x426754
00426751: fld       dword ptr [edi + 0x60]
00426754: fstp      dword ptr [ebx + 0x28]
00426757: lea       ecx, [esp + 0x48]
0042675b: mov       byte ptr [esp + 0xbc], 5
00426763: call      0x5acca0
00426768: mov       eax, dword ptr [esp + 0x18]
0042676c: cmp       eax, esi
0042676e: je        0x42678d
00426770: lea       ecx, [eax - 1]
00426773: mov       al, byte ptr [eax - 1]
00426776: test      al, al
00426778: je        0x426784
0042677a: cmp       al, 0xff
0042677c: je        0x426784
0042677e: dec       al
00426780: mov       byte ptr [ecx], al
00426782: jmp       0x42678d
00426784: push      ecx
00426785: call      0x5fe5f0
0042678a: add       esp, 4
0042678d: mov       ecx, dword ptr [esp + 0x28]
00426791: cmp       ecx, esi
00426793: je        0x4267b1
00426795: mov       al, byte ptr [ecx - 1]
00426798: test      al, al
0042679a: je        0x4267a7
0042679c: cmp       al, 0xff
