; Retained original RcHcGame.dat disassembly; lines280729-280742 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  4cd470:	6a 01                	push   0x1
  4cd472:	e8 29 6c f3 ff       	call   0x4040a0
  4cd477:	8b 8b 38 01 00 00    	mov    ecx,DWORD PTR [ebx+0x138]
  4cd47d:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
  4cd480:	33 d2                	xor    edx,edx
  4cd482:	8a 93 68 01 00 00    	mov    dl,BYTE PTR [ebx+0x168]
  4cd488:	52                   	push   edx
  4cd489:	51                   	push   ecx
  4cd48a:	50                   	push   eax
  4cd48b:	e8 a0 c3 0e 00       	call   0x5b9830
  4cd490:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4cd494:	83 c4 0c             	add    esp,0xc
  4cd497:	85 c0                	test   eax,eax
  4cd499:	5f                   	pop    edi
