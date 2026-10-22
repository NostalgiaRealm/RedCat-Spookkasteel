; Retained original RcHcGame.dat disassembly; lines598750-598779 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  5b9830:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5b9834:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  5b9838:	39 90 c8 00 00 00    	cmp    DWORD PTR [eax+0xc8],edx
  5b983e:	75 06                	jne    0x5b9846
  5b9840:	b8 01 00 00 00       	mov    eax,0x1
  5b9845:	c3                   	ret
  5b9846:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  5b984a:	89 90 c8 00 00 00    	mov    DWORD PTR [eax+0xc8],edx
  5b9850:	56                   	push   esi
  5b9851:	57                   	push   edi
  5b9852:	c7 41 10 01 00 00 00 	mov    DWORD PTR [ecx+0x10],0x1
  5b9859:	8b 40 40             	mov    eax,DWORD PTR [eax+0x40]
  5b985c:	8b 49 18             	mov    ecx,DWORD PTR [ecx+0x18]
  5b985f:	8d 04 80             	lea    eax,[eax+eax*4]
  5b9862:	8b b1 10 01 00 00    	mov    esi,DWORD PTR [ecx+0x110]
  5b9868:	c1 e0 04             	shl    eax,0x4
  5b986b:	03 c6                	add    eax,esi
  5b986d:	8b 70 44             	mov    esi,DWORD PTR [eax+0x44]
  5b9870:	8b 40 48             	mov    eax,DWORD PTR [eax+0x48]
  5b9873:	8b fe                	mov    edi,esi
  5b9875:	c1 e7 08             	shl    edi,0x8
  5b9878:	03 f8                	add    edi,eax
  5b987a:	c1 e0 08             	shl    eax,0x8
  5b987d:	03 c6                	add    eax,esi
  5b987f:	88 94 0f dc d5 00 00 	mov    BYTE PTR [edi+ecx*1+0xd5dc],dl
  5b9886:	5f                   	pop    edi
  5b9887:	5e                   	pop    esi
  5b9888:	88 94 08 dc d5 00 00 	mov    BYTE PTR [eax+ecx*1+0xd5dc],dl
  5b988f:	b8 01 00 00 00       	mov    eax,0x1
  5b9894:	c3                   	ret
