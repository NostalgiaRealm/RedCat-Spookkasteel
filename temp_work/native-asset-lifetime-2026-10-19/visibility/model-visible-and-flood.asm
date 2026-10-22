; Retained original RcHcGame.dat disassembly; lines639232-639291 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  5d54e0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5d54e4:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5d54e8:	8d 88 98 00 00 00    	lea    ecx,[eax+0x98]
  5d54ee:	05 8c 00 00 00       	add    eax,0x8c
  5d54f3:	51                   	push   ecx
  5d54f4:	50                   	push   eax
  5d54f5:	52                   	push   edx
  5d54f6:	e8 25 62 ff ff       	call   0x5cb720
  5d54fb:	83 c4 0c             	add    esp,0xc
  5d54fe:	c3                   	ret
  5d54ff:	90                   	nop
  5d5500:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  5d5504:	53                   	push   ebx
  5d5505:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
  5d5509:	55                   	push   ebp
  5d550a:	56                   	push   esi
  5d550b:	57                   	push   edi
  5d550c:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
  5d550f:	8b 88 d8 d5 00 00    	mov    ecx,DWORD PTR [eax+0xd5d8]
  5d5515:	8b 34 91             	mov    esi,DWORD PTR [ecx+edx*4]
  5d5518:	8d 04 91             	lea    eax,[ecx+edx*4]
  5d551b:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  5d551d:	3b f1                	cmp    esi,ecx
  5d551f:	74 53                	je     0x5d5574
  5d5521:	89 08                	mov    DWORD PTR [eax],ecx
  5d5523:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
  5d5526:	05 c8 00 00 00       	add    eax,0xc8
  5d552b:	33 ed                	xor    ebp,ebp
  5d552d:	8b 48 5c             	mov    ecx,DWORD PTR [eax+0x5c]
  5d5530:	8b 40 60             	mov    eax,DWORD PTR [eax+0x60]
  5d5533:	8d 3c d1             	lea    edi,[ecx+edx*8]
  5d5536:	8b 54 d1 04          	mov    edx,DWORD PTR [ecx+edx*8+0x4]
  5d553a:	8d 34 d0             	lea    esi,[eax+edx*8]
  5d553d:	8b 07                	mov    eax,DWORD PTR [edi]
  5d553f:	85 c0                	test   eax,eax
  5d5541:	7e 31                	jle    0x5d5574
  5d5543:	8b 06                	mov    eax,DWORD PTR [esi]
  5d5545:	8b 53 18             	mov    edx,DWORD PTR [ebx+0x18]
  5d5548:	8d 0c 40             	lea    ecx,[eax+eax*2]
  5d554b:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
  5d554e:	d1 e1                	shl    ecx,1
  5d5550:	2b c8                	sub    ecx,eax
  5d5552:	8b 84 8a 94 02 00 00 	mov    eax,DWORD PTR [edx+ecx*4+0x294]
  5d5559:	85 c0                	test   eax,eax
  5d555b:	74 0d                	je     0x5d556a
  5d555d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  5d5560:	50                   	push   eax
  5d5561:	53                   	push   ebx
  5d5562:	e8 99 ff ff ff       	call   0x5d5500
  5d5567:	83 c4 08             	add    esp,0x8
  5d556a:	8b 07                	mov    eax,DWORD PTR [edi]
  5d556c:	45                   	inc    ebp
  5d556d:	83 c6 08             	add    esi,0x8
  5d5570:	3b e8                	cmp    ebp,eax
  5d5572:	7c cf                	jl     0x5d5543
  5d5574:	5f                   	pop    edi
  5d5575:	5e                   	pop    esi
  5d5576:	5d                   	pop    ebp
  5d5577:	5b                   	pop    ebx
  5d5578:	c3                   	ret
