; Retained original RcHcGame.dat disassembly; lines286915-286928 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  4d1f70:	6a 01                	push   0x1
  4d1f72:	e8 29 21 f3 ff       	call   0x4040a0
  4d1f77:	8b 8b 38 01 00 00    	mov    ecx,DWORD PTR [ebx+0x138]
  4d1f7d:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
  4d1f80:	33 d2                	xor    edx,edx
  4d1f82:	8a 93 34 01 00 00    	mov    dl,BYTE PTR [ebx+0x134]
  4d1f88:	52                   	push   edx
  4d1f89:	51                   	push   ecx
  4d1f8a:	50                   	push   eax
  4d1f8b:	e8 a0 78 0e 00       	call   0x5b9830
  4d1f90:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4d1f94:	83 c4 0c             	add    esp,0xc
  4d1f97:	85 c0                	test   eax,eax
  4d1f99:	5f                   	pop    edi
