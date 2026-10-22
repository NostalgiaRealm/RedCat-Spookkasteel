  51f7d0:	e8 0b 00 00 00       	call   0x51f7e0
  51f7d5:	e9 d6 00 00 00       	jmp    0x51f8b0
  51f7da:	90                   	nop
  51f7db:	90                   	nop
  51f7dc:	90                   	nop
  51f7dd:	90                   	nop
  51f7de:	90                   	nop
  51f7df:	90                   	nop
  51f7e0:	83 ec 08             	sub    esp,0x8
  51f7e3:	53                   	push   ebx
  51f7e4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  51f7e8:	55                   	push   ebp
  51f7e9:	56                   	push   esi
  51f7ea:	57                   	push   edi
  51f7eb:	33 f6                	xor    esi,esi
  51f7ed:	83 ec 10             	sub    esp,0x10
  51f7f0:	bf 18 f8 69 00       	mov    edi,0x69f818
  51f7f5:	8b ec                	mov    ebp,esp
  51f7f7:	83 c9 ff             	or     ecx,0xffffffff
  51f7fa:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  51f7fe:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  51f801:	33 c0                	xor    eax,eax
  51f803:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  51f806:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  51f809:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  51f80c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  51f80e:	f7 d1                	not    ecx
  51f810:	49                   	dec    ecx
  51f811:	8b d9                	mov    ebx,ecx
  51f813:	83 fb fd             	cmp    ebx,0xfffffffd
  51f816:	76 05                	jbe    0x51f81d
  51f818:	e8 de ed 0d 00       	call   0x5fe5fb
  51f81d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  51f820:	3b ce                	cmp    ecx,esi
  51f822:	74 1e                	je     0x51f842
  51f824:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  51f827:	84 c0                	test   al,al
  51f829:	74 17                	je     0x51f842
  51f82b:	3c ff                	cmp    al,0xff
  51f82d:	74 13                	je     0x51f842
  51f82f:	3b de                	cmp    ebx,esi
  51f831:	75 33                	jne    0x51f866
  51f833:	fe c8                	dec    al
  51f835:	56                   	push   esi
  51f836:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  51f839:	8b cd                	mov    ecx,ebp
  51f83b:	e8 60 48 ee ff       	call   0x4040a0
  51f840:	eb 4e                	jmp    0x51f890
  51f842:	3b de                	cmp    ebx,esi
  51f844:	75 0b                	jne    0x51f851
  51f846:	6a 01                	push   0x1
  51f848:	8b cd                	mov    ecx,ebp
  51f84a:	e8 51 48 ee ff       	call   0x4040a0
  51f84f:	eb 3f                	jmp    0x51f890
  51f851:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  51f854:	83 f8 1f             	cmp    eax,0x1f
  51f857:	77 04                	ja     0x51f85d
  51f859:	3b c3                	cmp    eax,ebx
  51f85b:	73 11                	jae    0x51f86e
  51f85d:	6a 01                	push   0x1
  51f85f:	8b cd                	mov    ecx,ebp
  51f861:	e8 3a 48 ee ff       	call   0x4040a0
  51f866:	53                   	push   ebx
  51f867:	8b cd                	mov    ecx,ebp
  51f869:	e8 f2 21 ee ff       	call   0x401a60
  51f86e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  51f871:	8b cb                	mov    ecx,ebx
  51f873:	8b d1                	mov    edx,ecx
  51f875:	be 18 f8 69 00       	mov    esi,0x69f818
  51f87a:	c1 e9 02             	shr    ecx,0x2
  51f87d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  51f87f:	8b ca                	mov    ecx,edx
  51f881:	83 e1 03             	and    ecx,0x3
  51f884:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  51f886:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  51f889:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  51f88c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  51f890:	68 f0 8d 6b 00       	push   0x6b8df0
  51f895:	b9 a0 a1 6b 00       	mov    ecx,0x6ba1a0
  51f89a:	e8 c1 cf ee ff       	call   0x40c860
  51f89f:	5f                   	pop    edi
  51f8a0:	5e                   	pop    esi
  51f8a1:	5d                   	pop    ebp
  51f8a2:	5b                   	pop    ebx
  51f8a3:	83 c4 08             	add    esp,0x8
  51f8a6:	c3                   	ret
  51f8a7:	90                   	nop
  51f8a8:	90                   	nop
  51f8a9:	90                   	nop
  51f8aa:	90                   	nop
  51f8ab:	90                   	nop
  51f8ac:	90                   	nop
  51f8ad:	90                   	nop
  51f8ae:	90                   	nop
  51f8af:	90                   	nop
  51f8b0:	68 c0 f8 51 00       	push   0x51f8c0
  51f8b5:	e8 c1 ac 0e 00       	call   0x60a57b
  51f8ba:	59                   	pop    ecx
  51f8bb:	c3                   	ret
  51f8bc:	90                   	nop
  51f8bd:	90                   	nop
  51f8be:	90                   	nop
  51f8bf:	90                   	nop
  51f8c0:	8a 0d 68 a2 6b 00    	mov    cl,BYTE PTR ds:0x6ba268
  51f8c6:	b0 20                	mov    al,0x20
  51f8c8:	84 c8                	test   al,cl
  51f8ca:	75 12                	jne    0x51f8de
  51f8cc:	0a c8                	or     cl,al
  51f8ce:	88 0d 68 a2 6b 00    	mov    BYTE PTR ds:0x6ba268,cl
  51f8d4:	b9 a0 a1 6b 00       	mov    ecx,0x6ba1a0
  51f8d9:	e9 e2 a3 f0 ff       	jmp    0x429cc0
  51f8de:	c3                   	ret
  51f8df:	90                   	nop
  51f8e0:	e8 0b 00 00 00       	call   0x51f8f0
  51f8e5:	e9 d6 00 00 00       	jmp    0x51f9c0
  51f8ea:	90                   	nop
  51f8eb:	90                   	nop
  51f8ec:	90                   	nop
  51f8ed:	90                   	nop
  51f8ee:	90                   	nop
  51f8ef:	90                   	nop
  51f8f0:	83 ec 08             	sub    esp,0x8
  51f8f3:	53                   	push   ebx
  51f8f4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  51f8f8:	55                   	push   ebp
  51f8f9:	56                   	push   esi
  51f8fa:	57                   	push   edi
  51f8fb:	33 f6                	xor    esi,esi
  51f8fd:	83 ec 10             	sub    esp,0x10
