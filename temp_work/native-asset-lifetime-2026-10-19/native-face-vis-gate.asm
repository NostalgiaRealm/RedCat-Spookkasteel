  5b8df1:	f7 d0                	not    eax
  5b8df3:	23 c8                	and    ecx,eax
  5b8df5:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
  5b8df9:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b8dfd:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5b8e01:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  5b8e05:	83 c1 04             	add    ecx,0x4
  5b8e08:	45                   	inc    ebp
  5b8e09:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5b8e0d:	8b 08                	mov    ecx,DWORD PTR [eax]
  5b8e0f:	83 c7 14             	add    edi,0x14
  5b8e12:	83 c3 14             	add    ebx,0x14
  5b8e15:	3b e9                	cmp    ebp,ecx
  5b8e17:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  5b8e1b:	0f 8c 2b ff ff ff    	jl     0x5b8d4c
  5b8e21:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
  5b8e25:	8b 0f                	mov    ecx,DWORD PTR [edi]
  5b8e27:	e8 54 06 01 00       	call   0x5c9480
  5b8e2c:	8b d0                	mov    edx,eax
  5b8e2e:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b8e31:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5b8e34:	a1 20 c4 6c 00       	mov    eax,ds:0x6cc420
  5b8e39:	8b 40 64             	mov    eax,DWORD PTR [eax+0x64]
  5b8e3c:	8d 0c 88             	lea    ecx,[eax+ecx*4]
  5b8e3f:	e8 ac 89 01 00       	call   0x5d17f0
  5b8e44:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  5b8e47:	8b 15 08 c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc408
  5b8e4d:	8b c8                	mov    ecx,eax
  5b8e4f:	c7 44 24 30 01 00 00 	mov    DWORD PTR [esp+0x30],0x1
  5b8e56:	00 
  5b8e57:	c1 e1 04             	shl    ecx,0x4
  5b8e5a:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5b8e60:	03 c8                	add    ecx,eax
  5b8e62:	8d 04 c0             	lea    eax,[eax+eax*8]
  5b8e65:	8d 1c ca             	lea    ebx,[edx+ecx*8]
  5b8e68:	8b 0d 20 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc420
  5b8e6e:	8b 51 68             	mov    edx,DWORD PTR [ecx+0x68]
  5b8e71:	8d 2c 82             	lea    ebp,[edx+eax*4]
  5b8e74:	df e0                	fnstsw ax
  5b8e76:	f6 c4 01             	test   ah,0x1
  5b8e79:	75 08                	jne    0x5b8e83
  5b8e7b:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  5d5711:	c1 e3 04             	shl    ebx,0x4
  5d5714:	03 d8                	add    ebx,eax
  5d5716:	8b 06                	mov    eax,DWORD PTR [esi]
  5d5718:	42                   	inc    edx
  5d5719:	89 44 dd 58          	mov    DWORD PTR [ebp+ebx*8+0x58],eax
  5d571d:	8b 47 f0             	mov    eax,DWORD PTR [edi-0x10]
  5d5720:	3b d0                	cmp    edx,eax
  5d5722:	7c e2                	jl     0x5d5706
  5d5724:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
  5d5728:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
  5d572c:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5d5730:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  5d5734:	83 c1 0c             	add    ecx,0xc
  5d5737:	40                   	inc    eax
  5d5738:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5d573c:	8b 4d 38             	mov    ecx,DWORD PTR [ebp+0x38]
  5d573f:	83 c7 3c             	add    edi,0x3c
  5d5742:	3b c1                	cmp    eax,ecx
  5d5744:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  5d5748:	0f 8c 5d ff ff ff    	jl     0x5d56ab
  5d574e:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  5d5751:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
  5d5754:	bd 01 00 00 00       	mov    ebp,0x1
  5d5759:	89 91 88 02 00 00    	mov    DWORD PTR [ecx+0x288],edx
  5d575f:	8b 7e 18             	mov    edi,DWORD PTR [esi+0x18]
  5d5762:	8b 83 a0 00 00 00    	mov    eax,DWORD PTR [ebx+0xa0]
  5d5768:	81 c7 a0 02 00 00    	add    edi,0x2a0
  5d576e:	3b c5                	cmp    eax,ebp
  5d5770:	7e 33                	jle    0x5d57a5
  5d5772:	57                   	push   edi
  5d5773:	56                   	push   esi
  5d5774:	e8 67 fd ff ff       	call   0x5d54e0
  5d5779:	83 c4 08             	add    esp,0x8
  5d577c:	85 c0                	test   eax,eax
  5d577e:	74 09                	je     0x5d5789
