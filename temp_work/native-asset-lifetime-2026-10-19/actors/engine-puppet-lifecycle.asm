  5cd4d0:	51                   	push   ecx
  5cd4d1:	53                   	push   ebx
  5cd4d2:	55                   	push   ebp
  5cd4d3:	56                   	push   esi
  5cd4d4:	57                   	push   edi
  5cd4d5:	8b f2                	mov    esi,edx
  5cd4d7:	8b e9                	mov    ebp,ecx
  5cd4d9:	6a 64                	push   0x64
  5cd4db:	e8 d0 1e 00 00       	call   0x5cf3b0
  5cd4e0:	8b f8                	mov    edi,eax
  5cd4e2:	33 db                	xor    ebx,ebx
  5cd4e4:	83 c4 04             	add    esp,0x4
  5cd4e7:	3b fb                	cmp    edi,ebx
  5cd4e9:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  5cd4ed:	75 29                	jne    0x5cd518
  5cd4ef:	53                   	push   ebx
  5cd4f0:	68 70 3f 6b 00       	push   0x6b3f70
  5cd4f5:	68 13 01 00 00       	push   0x113
  5cd4fa:	68 f4 a4 6a 00       	push   0x6aa4f4
  5cd4ff:	68 70 3f 6b 00       	push   0x6b3f70
  5cd504:	6a 66                	push   0x66
  5cd506:	e8 15 1d 00 00       	call   0x5cf220
  5cd50b:	83 c4 18             	add    esp,0x18
  5cd50e:	33 c0                	xor    eax,eax
  5cd510:	5f                   	pop    edi
  5cd511:	5e                   	pop    esi
  5cd512:	5d                   	pop    ebp
  5cd513:	5b                   	pop    ebx
  5cd514:	59                   	pop    ecx
  5cd515:	c2 04 00             	ret    0x4
  5cd518:	b9 19 00 00 00       	mov    ecx,0x19
  5cd51d:	33 c0                	xor    eax,eax
  5cd51f:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  5cd521:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd525:	83 cf ff             	or     edi,0xffffffff
  5cd528:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
  5cd52b:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd52f:	c7 41 10 03 00 00 00 	mov    DWORD PTR [ecx+0x10],0x3
  5cd536:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd53a:	89 7a 14             	mov    DWORD PTR [edx+0x14],edi
  5cd53d:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd541:	c7 40 18 cd cc 4c be 	mov    DWORD PTR [eax+0x18],0xbe4ccccd
  5cd548:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd54c:	c7 41 1c 00 00 80 3f 	mov    DWORD PTR [ecx+0x1c],0x3f800000
  5cd553:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd557:	c7 42 20 cd cc cc 3e 	mov    DWORD PTR [edx+0x20],0x3ecccccd
  5cd55e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd562:	8d 48 18             	lea    ecx,[eax+0x18]
  5cd565:	e8 b6 59 fe ff       	call   0x5b2f20
  5cd56a:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd56e:	b8 00 00 80 3e       	mov    eax,0x3e800000
  5cd573:	dd d8                	fstp   st(0)
  5cd575:	89 41 24             	mov    DWORD PTR [ecx+0x24],eax
  5cd578:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd57c:	89 42 28             	mov    DWORD PTR [edx+0x28],eax
  5cd57f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd583:	89 41 2c             	mov    DWORD PTR [ecx+0x2c],eax
  5cd586:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd58a:	b9 01 00 00 00       	mov    ecx,0x1
  5cd58f:	89 4a 30             	mov    DWORD PTR [edx+0x30],ecx
  5cd592:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd596:	c7 40 58 00 00 7f 43 	mov    DWORD PTR [eax+0x58],0x437f0000
  5cd59d:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd5a1:	b8 cd cc cc 3d       	mov    eax,0x3dcccccd
  5cd5a6:	c7 42 5c 00 00 80 bf 	mov    DWORD PTR [edx+0x5c],0xbf800000
  5cd5ad:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd5b1:	89 42 34             	mov    DWORD PTR [edx+0x34],eax
  5cd5b4:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd5b8:	89 42 38             	mov    DWORD PTR [edx+0x38],eax
  5cd5bb:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd5bf:	89 42 3c             	mov    DWORD PTR [edx+0x3c],eax
  5cd5c2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd5c6:	89 48 40             	mov    DWORD PTR [eax+0x40],ecx
  5cd5c9:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd5cd:	89 59 48             	mov    DWORD PTR [ecx+0x48],ebx
  5cd5d0:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd5d4:	89 5a 4c             	mov    DWORD PTR [edx+0x4c],ebx
  5cd5d7:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd5db:	89 78 54             	mov    DWORD PTR [eax+0x54],edi
  5cd5de:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd5e2:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5cd5e6:	89 29                	mov    DWORD PTR [ecx],ebp
  5cd5e8:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd5ec:	89 42 60             	mov    DWORD PTR [edx+0x60],eax
  5cd5ef:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd5f3:	8b d6                	mov    edx,esi
  5cd5f5:	e8 86 00 00 00       	call   0x5cd680
  5cd5fa:	85 c0                	test   eax,eax
  5cd5fc:	75 1d                	jne    0x5cd61b
  5cd5fe:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd602:	51                   	push   ecx
  5cd603:	e8 f8 1d 00 00       	call   0x5cf400
  5cd608:	83 c4 04             	add    esp,0x4
  5cd60b:	89 1d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,ebx
  5cd611:	33 c0                	xor    eax,eax
  5cd613:	5f                   	pop    edi
  5cd614:	5e                   	pop    esi
  5cd615:	5d                   	pop    ebp
  5cd616:	5b                   	pop    ebx
  5cd617:	59                   	pop    ecx
  5cd618:	c2 04 00             	ret    0x4
  5cd61b:	8b ce                	mov    ecx,esi
  5cd61d:	e8 ee 27 01 00       	call   0x5dfe10
  5cd622:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5cd626:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  5cd629:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd62d:	39 58 04             	cmp    DWORD PTR [eax+0x4],ebx
  5cd630:	75 32                	jne    0x5cd664
  5cd632:	53                   	push   ebx
  5cd633:	68 70 3f 6b 00       	push   0x6b3f70
  5cd638:	68 3e 01 00 00       	push   0x13e
  5cd63d:	68 f4 a4 6a 00       	push   0x6aa4f4
  5cd642:	68 70 3f 6b 00       	push   0x6b3f70
  5cd647:	6a 66                	push   0x66
  5cd649:	e8 d2 1b 00 00       	call   0x5cf220
  5cd64e:	83 c4 18             	add    esp,0x18
  5cd651:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5cd655:	e8 56 01 00 00       	call   0x5cd7b0
  5cd65a:	33 c0                	xor    eax,eax
  5cd65c:	5f                   	pop    edi
  5cd65d:	5e                   	pop    esi
  5cd65e:	5d                   	pop    ebp
  5cd65f:	5b                   	pop    ebx
  5cd660:	59                   	pop    ecx
  5cd661:	c2 04 00             	ret    0x4
  5cd664:	8b 0d e8 c5 6c 00    	mov    ecx,DWORD PTR ds:0x6cc5e8
  5cd66a:	5f                   	pop    edi
  5cd66b:	41                   	inc    ecx
  5cd66c:	5e                   	pop    esi
  5cd66d:	5d                   	pop    ebp
  5cd66e:	89 0d e8 c5 6c 00    	mov    DWORD PTR ds:0x6cc5e8,ecx
  5cd674:	5b                   	pop    ebx
  5cd675:	59                   	pop    ecx
  5cd676:	c2 04 00             	ret    0x4
  5cd679:	90                   	nop
  5cd67a:	90                   	nop
  5cd67b:	90                   	nop
  5cd67c:	90                   	nop
  5cd67d:	90                   	nop
  5cd67e:	90                   	nop
  5cd67f:	90                   	nop
  5cd680:	83 ec 0c             	sub    esp,0xc
  5cd683:	53                   	push   ebx
  5cd684:	55                   	push   ebp
  5cd685:	56                   	push   esi
  5cd686:	57                   	push   edi
  5cd687:	8b f9                	mov    edi,ecx
  5cd689:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  5cd68d:	8b ca                	mov    ecx,edx
  5cd68f:	e8 fc 9b fe ff       	call   0x5b7290
  5cd694:	85 c0                	test   eax,eax
  5cd696:	89 47 08             	mov    DWORD PTR [edi+0x8],eax
  5cd699:	0f 8e ba 00 00 00    	jle    0x5cd759
  5cd69f:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
  5cd6a6:	2b c8                	sub    ecx,eax
  5cd6a8:	c1 e1 02             	shl    ecx,0x2
  5cd6ab:	51                   	push   ecx
  5cd6ac:	e8 ff 1c 00 00       	call   0x5cf3b0
  5cd6b1:	83 c4 04             	add    esp,0x4
  5cd6b4:	89 47 0c             	mov    DWORD PTR [edi+0xc],eax
  5cd6b7:	85 c0                	test   eax,eax
  5cd6b9:	75 29                	jne    0x5cd6e4
  5cd6bb:	50                   	push   eax
  5cd6bc:	68 70 3f 6b 00       	push   0x6b3f70
  5cd6c1:	68 95 00 00 00       	push   0x95
  5cd6c6:	68 f4 a4 6a 00       	push   0x6aa4f4
  5cd6cb:	68 70 3f 6b 00       	push   0x6b3f70
  5cd6d0:	6a 66                	push   0x66
  5cd6d2:	e8 49 1b 00 00       	call   0x5cf220
  5cd6d7:	83 c4 18             	add    esp,0x18
  5cd6da:	33 c0                	xor    eax,eax
  5cd6dc:	5f                   	pop    edi
  5cd6dd:	5e                   	pop    esi
  5cd6de:	5d                   	pop    ebp
  5cd6df:	5b                   	pop    ebx
  5cd6e0:	83 c4 0c             	add    esp,0xc
  5cd6e3:	c3                   	ret
  5cd6e4:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
  5cd6e7:	33 db                	xor    ebx,ebx
  5cd6e9:	85 c0                	test   eax,eax
  5cd6eb:	7e 6c                	jle    0x5cd759
  5cd6ed:	33 ed                	xor    ebp,ebp
  5cd6ef:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
  5cd6f2:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5cd6f6:	03 f5                	add    esi,ebp
  5cd6f8:	8d 56 08             	lea    edx,[esi+0x8]
  5cd6fb:	8d 46 04             	lea    eax,[esi+0x4]
  5cd6fe:	52                   	push   edx
  5cd6ff:	50                   	push   eax
  5cd700:	56                   	push   esi
  5cd701:	8d 54 24 24          	lea    edx,[esp+0x24]
  5cd705:	51                   	push   ecx
  5cd706:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  5cd70a:	52                   	push   edx
  5cd70b:	8b d3                	mov    edx,ebx
  5cd70d:	e8 8e 9b fe ff       	call   0x5b72a0
  5cd712:	33 c0                	xor    eax,eax
  5cd714:	39 44 24 10          	cmp    DWORD PTR [esp+0x10],eax
  5cd718:	75 08                	jne    0x5cd722
  5cd71a:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5cd71d:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  5cd720:	eb 2c                	jmp    0x5cd74e
  5cd722:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
  5cd729:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd72d:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5cd730:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd734:	e8 87 2a ff ff       	call   0x5c01c0
  5cd739:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd73d:	8b 57 60             	mov    edx,DWORD PTR [edi+0x60]
  5cd740:	51                   	push   ecx
  5cd741:	52                   	push   edx
  5cd742:	e8 19 ce fe ff       	call   0x5ba560
  5cd747:	83 c4 08             	add    esp,0x8
  5cd74a:	85 c0                	test   eax,eax
  5cd74c:	74 18                	je     0x5cd766
  5cd74e:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
  5cd751:	43                   	inc    ebx
  5cd752:	83 c5 1c             	add    ebp,0x1c
  5cd755:	3b d8                	cmp    ebx,eax
  5cd757:	7c 96                	jl     0x5cd6ef
  5cd759:	5f                   	pop    edi
  5cd75a:	5e                   	pop    esi
  5cd75b:	5d                   	pop    ebp
  5cd75c:	b8 01 00 00 00       	mov    eax,0x1
  5cd761:	5b                   	pop    ebx
  5cd762:	83 c4 0c             	add    esp,0xc
  5cd765:	c3                   	ret
  5cd766:	33 f6                	xor    esi,esi
  5cd768:	56                   	push   esi
  5cd769:	68 70 3f 6b 00       	push   0x6b3f70
  5cd76e:	68 b0 00 00 00       	push   0xb0
  5cd773:	68 f4 a4 6a 00       	push   0x6aa4f4
  5cd778:	68 70 3f 6b 00       	push   0x6b3f70
  5cd77d:	6a ff                	push   0xffffffff
  5cd77f:	e8 9c 1a 00 00       	call   0x5cf220
  5cd784:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
  5cd787:	50                   	push   eax
  5cd788:	e8 73 1c 00 00       	call   0x5cf400
  5cd78d:	83 c4 1c             	add    esp,0x1c
  5cd790:	89 35 c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,esi
  5cd796:	89 77 0c             	mov    DWORD PTR [edi+0xc],esi
  5cd799:	89 77 08             	mov    DWORD PTR [edi+0x8],esi
  5cd79c:	5f                   	pop    edi
  5cd79d:	5e                   	pop    esi
  5cd79e:	5d                   	pop    ebp
  5cd79f:	33 c0                	xor    eax,eax
  5cd7a1:	5b                   	pop    ebx
  5cd7a2:	83 c4 0c             	add    esp,0xc
  5cd7a5:	c3                   	ret
  5cd7a6:	90                   	nop
  5cd7a7:	90                   	nop
  5cd7a8:	90                   	nop
  5cd7a9:	90                   	nop
  5cd7aa:	90                   	nop
  5cd7ab:	90                   	nop
  5cd7ac:	90                   	nop
  5cd7ad:	90                   	nop
  5cd7ae:	90                   	nop
  5cd7af:	90                   	nop
  5cd7b0:	51                   	push   ecx
  5cd7b1:	53                   	push   ebx
  5cd7b2:	57                   	push   edi
  5cd7b3:	8b f9                	mov    edi,ecx
  5cd7b5:	33 db                	xor    ebx,ebx
  5cd7b7:	8b 07                	mov    eax,DWORD PTR [edi]
  5cd7b9:	8d 48 04             	lea    ecx,[eax+0x4]
  5cd7bc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  5cd7bf:	3b c3                	cmp    eax,ebx
  5cd7c1:	74 0a                	je     0x5cd7cd
  5cd7c3:	e8 a8 26 01 00       	call   0x5dfe70
  5cd7c8:	8b 07                	mov    eax,DWORD PTR [edi]
  5cd7ca:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
  5cd7cd:	8b 07                	mov    eax,DWORD PTR [edi]
  5cd7cf:	39 58 0c             	cmp    DWORD PTR [eax+0xc],ebx
  5cd7d2:	74 76                	je     0x5cd84a
  5cd7d4:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
  5cd7d7:	89 5c 24 08          	mov    DWORD PTR [esp+0x8],ebx
  5cd7db:	3b cb                	cmp    ecx,ebx
  5cd7dd:	7e 48                	jle    0x5cd827
  5cd7df:	55                   	push   ebp
  5cd7e0:	56                   	push   esi
  5cd7e1:	33 ed                	xor    ebp,ebp
  5cd7e3:	8b 70 0c             	mov    esi,DWORD PTR [eax+0xc]
  5cd7e6:	03 f5                	add    esi,ebp
  5cd7e8:	39 5e 0c             	cmp    DWORD PTR [esi+0xc],ebx
  5cd7eb:	74 23                	je     0x5cd810
  5cd7ed:	8b 4e 10             	mov    ecx,DWORD PTR [esi+0x10]
  5cd7f0:	8b 50 60             	mov    edx,DWORD PTR [eax+0x60]
  5cd7f3:	8d 5e 10             	lea    ebx,[esi+0x10]
  5cd7f6:	51                   	push   ecx
  5cd7f7:	52                   	push   edx
  5cd7f8:	e8 d3 cd fe ff       	call   0x5ba5d0
  5cd7fd:	83 c4 08             	add    esp,0x8
  5cd800:	8b cb                	mov    ecx,ebx
  5cd802:	e8 a9 2a ff ff       	call   0x5c02b0
  5cd807:	c7 46 0c 00 00 00 00 	mov    DWORD PTR [esi+0xc],0x0
  5cd80e:	33 db                	xor    ebx,ebx
  5cd810:	8b 07                	mov    eax,DWORD PTR [edi]
  5cd812:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cd816:	41                   	inc    ecx
  5cd817:	83 c5 1c             	add    ebp,0x1c
  5cd81a:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  5cd81d:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5cd821:	3b ca                	cmp    ecx,edx
  5cd823:	7c be                	jl     0x5cd7e3
  5cd825:	5e                   	pop    esi
  5cd826:	5d                   	pop    ebp
  5cd827:	8b 07                	mov    eax,DWORD PTR [edi]
  5cd829:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
  5cd82c:	51                   	push   ecx
  5cd82d:	e8 ce 1b 00 00       	call   0x5cf400
  5cd832:	8b 17                	mov    edx,DWORD PTR [edi]
  5cd834:	83 c4 04             	add    esp,0x4
  5cd837:	89 5a 0c             	mov    DWORD PTR [edx+0xc],ebx
  5cd83a:	8b 07                	mov    eax,DWORD PTR [edi]
  5cd83c:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
  5cd83f:	89 0d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,ecx
  5cd845:	8b 17                	mov    edx,DWORD PTR [edi]
  5cd847:	89 5a 04             	mov    DWORD PTR [edx+0x4],ebx
  5cd84a:	8b 07                	mov    eax,DWORD PTR [edi]
  5cd84c:	8d 48 50             	lea    ecx,[eax+0x50]
  5cd84f:	8b 40 50             	mov    eax,DWORD PTR [eax+0x50]
  5cd852:	3b c3                	cmp    eax,ebx
  5cd854:	74 0a                	je     0x5cd860
  5cd856:	e8 55 2a ff ff       	call   0x5c02b0
  5cd85b:	8b 07                	mov    eax,DWORD PTR [edi]
  5cd85d:	89 58 50             	mov    DWORD PTR [eax+0x50],ebx
  5cd860:	8b 0f                	mov    ecx,DWORD PTR [edi]
  5cd862:	51                   	push   ecx
  5cd863:	e8 98 1b 00 00       	call   0x5cf400
  5cd868:	89 1d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,ebx
  5cd86e:	89 1f                	mov    DWORD PTR [edi],ebx
  5cd870:	a1 e8 c5 6c 00       	mov    eax,ds:0x6cc5e8
  5cd875:	83 c4 04             	add    esp,0x4
  5cd878:	48                   	dec    eax
  5cd879:	a3 e8 c5 6c 00       	mov    ds:0x6cc5e8,eax
  5cd87e:	75 24                	jne    0x5cd8a4
  5cd880:	a1 e0 c5 6c 00       	mov    eax,ds:0x6cc5e0
  5cd885:	3b c3                	cmp    eax,ebx
  5cd887:	74 0f                	je     0x5cd898
  5cd889:	50                   	push   eax
  5cd88a:	e8 71 1b 00 00       	call   0x5cf400
  5cd88f:	83 c4 04             	add    esp,0x4
  5cd892:	89 1d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,ebx
  5cd898:	89 1d e0 c5 6c 00    	mov    DWORD PTR ds:0x6cc5e0,ebx
  5cd89e:	89 1d e4 c5 6c 00    	mov    DWORD PTR ds:0x6cc5e4,ebx
  5cd8a4:	5f                   	pop    edi
  5cd8a5:	5b                   	pop    ebx
  5cd8a6:	59                   	pop    ecx
  5cd8a7:	c3                   	ret
  5cd8a8:	90                   	nop
  5cd8a9:	90                   	nop
  5cd8aa:	90                   	nop
  5cd8ab:	90                   	nop
  5cd8ac:	90                   	nop
  5cd8ad:	90                   	nop
  5cd8ae:	90                   	nop
  5cd8af:	90                   	nop
