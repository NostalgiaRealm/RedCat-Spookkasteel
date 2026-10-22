; Retained original RcHcGame.dat disassembly; lines598071-598144 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  5b8fe0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5b8fe4:	53                   	push   ebx
  5b8fe5:	56                   	push   esi
  5b8fe6:	57                   	push   edi
  5b8fe7:	85 c0                	test   eax,eax
  5b8fe9:	0f 8c 9d 00 00 00    	jl     0x5b908c
  5b8fef:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  5b8ff3:	8b 0d 0c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc40c
  5b8ff9:	8b 91 d4 d5 00 00    	mov    edx,DWORD PTR [ecx+0xd5d4]
  5b8fff:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5b9005:	8b 14 82             	mov    edx,DWORD PTR [edx+eax*4]
  5b9008:	8b 31                	mov    esi,DWORD PTR [ecx]
  5b900a:	3b d6                	cmp    edx,esi
  5b900c:	74 0b                	je     0x5b9019
  5b900e:	8b 51 14             	mov    edx,DWORD PTR [ecx+0x14]
  5b9011:	85 d2                	test   edx,edx
  5b9013:	0f 85 ad 00 00 00    	jne    0x5b90c6
  5b9019:	8b 0d 00 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc400
  5b901f:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5b9022:	42                   	inc    edx
  5b9023:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  5b9026:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5b9029:	8d 14 48             	lea    edx,[eax+ecx*2]
  5b902c:	a1 20 c4 6c 00       	mov    eax,ds:0x6cc420
  5b9031:	8b 48 4c             	mov    ecx,DWORD PTR [eax+0x4c]
  5b9034:	8d 34 91             	lea    esi,[ecx+edx*4]
  5b9037:	8b cb                	mov    ecx,ebx
  5b9039:	e8 42 04 01 00       	call   0x5c9480
  5b903e:	8b 0d 20 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc420
  5b9044:	8b d0                	mov    edx,eax
  5b9046:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b9049:	8b 49 64             	mov    ecx,DWORD PTR [ecx+0x64]
  5b904c:	8d 04 80             	lea    eax,[eax+eax*4]
  5b904f:	8d 0c 81             	lea    ecx,[ecx+eax*4]
  5b9052:	e8 99 87 01 00       	call   0x5d17f0
  5b9057:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5b905d:	df e0                	fnstsw ax
  5b905f:	f6 c4 01             	test   ah,0x1
  5b9062:	74 07                	je     0x5b906b
  5b9064:	bf 01 00 00 00       	mov    edi,0x1
  5b9069:	eb 02                	jmp    0x5b906d
  5b906b:	33 ff                	xor    edi,edi
  5b906d:	8b 14 be             	mov    edx,DWORD PTR [esi+edi*4]
  5b9070:	53                   	push   ebx
  5b9071:	52                   	push   edx
  5b9072:	e8 69 ff ff ff       	call   0x5b8fe0
  5b9077:	83 c4 08             	add    esp,0x8
  5b907a:	33 c0                	xor    eax,eax
  5b907c:	85 ff                	test   edi,edi
  5b907e:	0f 94 c0             	sete   al
  5b9081:	8b 04 86             	mov    eax,DWORD PTR [esi+eax*4]
  5b9084:	85 c0                	test   eax,eax
  5b9086:	0f 8d 67 ff ff ff    	jge    0x5b8ff3
  5b908c:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5b9092:	8d 04 40             	lea    eax,[eax+eax*2]
  5b9095:	c1 e0 02             	shl    eax,0x2
  5b9098:	8b 51 18             	mov    edx,DWORD PTR [ecx+0x18]
  5b909b:	8b 8a cc d5 00 00    	mov    ecx,DWORD PTR [edx+0xd5cc]
  5b90a1:	2b c8                	sub    ecx,eax
  5b90a3:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
  5b90a6:	85 c0                	test   eax,eax
  5b90a8:	74 14                	je     0x5b90be
  5b90aa:	8b 0d 00 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc400
  5b90b0:	50                   	push   eax
  5b90b1:	6a 01                	push   0x1
  5b90b3:	ff 41 10             	inc    DWORD PTR [ecx+0x10]
  5b90b6:	e8 d5 ed ff ff       	call   0x5b7e90
  5b90bb:	83 c4 08             	add    esp,0x8
  5b90be:	a1 00 c4 6c 00       	mov    eax,ds:0x6cc400
  5b90c3:	ff 40 0c             	inc    DWORD PTR [eax+0xc]
  5b90c6:	5f                   	pop    edi
  5b90c7:	5e                   	pop    esi
  5b90c8:	5b                   	pop    ebx
  5b90c9:	c3                   	ret
