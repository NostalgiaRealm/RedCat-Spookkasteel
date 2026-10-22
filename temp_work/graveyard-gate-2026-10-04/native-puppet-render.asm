
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005cd400 <.text+0x1cc400>:
  5cd400:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  5cd403:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5cd406:	ff 60 48             	jmp    DWORD PTR [eax+0x48]
  5cd409:	90                   	nop
  5cd40a:	90                   	nop
  5cd40b:	90                   	nop
  5cd40c:	90                   	nop
  5cd40d:	90                   	nop
  5cd40e:	90                   	nop
  5cd40f:	90                   	nop
  5cd410:	51                   	push   ecx
  5cd411:	53                   	push   ebx
  5cd412:	8b d9                	mov    ebx,ecx
  5cd414:	8d 04 d5 00 00 00 00 	lea    eax,[edx*8+0x0]
  5cd41b:	56                   	push   esi
  5cd41c:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
  5cd41f:	2b c2                	sub    eax,edx
  5cd421:	57                   	push   edi
  5cd422:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  5cd426:	8b 54 81 10          	mov    edx,DWORD PTR [ecx+eax*4+0x10]
  5cd42a:	8d 34 81             	lea    esi,[ecx+eax*4]
  5cd42d:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5cd431:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5cd435:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  5cd439:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5cd43d:	89 7e 10             	mov    DWORD PTR [esi+0x10],edi
  5cd440:	89 06                	mov    DWORD PTR [esi],eax
  5cd442:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  5cd445:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  5cd448:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5cd44c:	3b c7                	cmp    eax,edi
  5cd44e:	74 6c                	je     0x5cd4bc
  5cd450:	85 c0                	test   eax,eax
  5cd452:	74 16                	je     0x5cd46a
  5cd454:	50                   	push   eax
  5cd455:	8b 43 60             	mov    eax,DWORD PTR [ebx+0x60]
  5cd458:	50                   	push   eax
  5cd459:	e8 72 d1 fe ff       	call   0x5ba5d0
  5cd45e:	83 c4 08             	add    esp,0x8
  5cd461:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  5cd465:	e8 46 2e ff ff       	call   0x5c02b0
  5cd46a:	85 ff                	test   edi,edi
  5cd46c:	c7 46 0c 00 00 00 00 	mov    DWORD PTR [esi+0xc],0x0
  5cd473:	74 47                	je     0x5cd4bc
  5cd475:	8b cf                	mov    ecx,edi
  5cd477:	e8 44 2d ff ff       	call   0x5c01c0
  5cd47c:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
  5cd483:	8b 4b 60             	mov    ecx,DWORD PTR [ebx+0x60]
  5cd486:	57                   	push   edi
  5cd487:	51                   	push   ecx
  5cd488:	e8 d3 d0 fe ff       	call   0x5ba560
  5cd48d:	83 c4 08             	add    esp,0x8
  5cd490:	85 c0                	test   eax,eax
  5cd492:	75 28                	jne    0x5cd4bc
  5cd494:	50                   	push   eax
  5cd495:	68 70 3f 6b 00       	push   0x6b3f70
  5cd49a:	68 fe 00 00 00       	push   0xfe
  5cd49f:	68 f4 a4 6a 00       	push   0x6aa4f4
  5cd4a4:	68 70 3f 6b 00       	push   0x6b3f70
  5cd4a9:	6a ff                	push   0xffffffff
  5cd4ab:	e8 70 1d 00 00       	call   0x5cf220
  5cd4b0:	83 c4 18             	add    esp,0x18
  5cd4b3:	33 c0                	xor    eax,eax
  5cd4b5:	5f                   	pop    edi
  5cd4b6:	5e                   	pop    esi
  5cd4b7:	5b                   	pop    ebx
  5cd4b8:	59                   	pop    ecx
  5cd4b9:	c2 10 00             	ret    0x10
  5cd4bc:	5f                   	pop    edi
  5cd4bd:	5e                   	pop    esi
  5cd4be:	b8 01 00 00 00       	mov    eax,0x1
  5cd4c3:	5b                   	pop    ebx
  5cd4c4:	59                   	pop    ecx
  5cd4c5:	c2 10 00             	ret    0x10
  5cd4c8:	90                   	nop
  5cd4c9:	90                   	nop
  5cd4ca:	90                   	nop
  5cd4cb:	90                   	nop
  5cd4cc:	90                   	nop
  5cd4cd:	90                   	nop
  5cd4ce:	90                   	nop
  5cd4cf:	90                   	nop
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
  5cd8b0:	8b 41 30             	mov    eax,DWORD PTR [ecx+0x30]
  5cd8b3:	56                   	push   esi
  5cd8b4:	89 02                	mov    DWORD PTR [edx],eax
  5cd8b6:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5cd8ba:	8d 51 18             	lea    edx,[ecx+0x18]
  5cd8bd:	8b 71 18             	mov    esi,DWORD PTR [ecx+0x18]
  5cd8c0:	89 30                	mov    DWORD PTR [eax],esi
  5cd8c2:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  5cd8c5:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
  5cd8c8:	5e                   	pop    esi
  5cd8c9:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5cd8cc:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  5cd8cf:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5cd8d3:	d9 41 24             	fld    DWORD PTR [ecx+0x24]
  5cd8d6:	d8 0d 38 a4 64 00    	fmul   DWORD PTR ds:0x64a438
  5cd8dc:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  5cd8e0:	d9 18                	fstp   DWORD PTR [eax]
  5cd8e2:	d9 41 28             	fld    DWORD PTR [ecx+0x28]
  5cd8e5:	d8 0d 38 a4 64 00    	fmul   DWORD PTR ds:0x64a438
  5cd8eb:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cd8ef:	d9 1a                	fstp   DWORD PTR [edx]
  5cd8f1:	d9 41 2c             	fld    DWORD PTR [ecx+0x2c]
  5cd8f4:	d8 0d 38 a4 64 00    	fmul   DWORD PTR ds:0x64a438
  5cd8fa:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5cd8fe:	d9 18                	fstp   DWORD PTR [eax]
  5cd900:	d9 41 34             	fld    DWORD PTR [ecx+0x34]
  5cd903:	d8 0d 38 a4 64 00    	fmul   DWORD PTR ds:0x64a438
  5cd909:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5cd90d:	d9 1a                	fstp   DWORD PTR [edx]
  5cd90f:	d9 41 38             	fld    DWORD PTR [ecx+0x38]
  5cd912:	d8 0d 38 a4 64 00    	fmul   DWORD PTR ds:0x64a438
  5cd918:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  5cd91c:	d9 18                	fstp   DWORD PTR [eax]
  5cd91e:	d9 41 3c             	fld    DWORD PTR [ecx+0x3c]
  5cd921:	d8 0d 38 a4 64 00    	fmul   DWORD PTR ds:0x64a438
  5cd927:	d9 1a                	fstp   DWORD PTR [edx]
  5cd929:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5cd92d:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
  5cd930:	89 02                	mov    DWORD PTR [edx],eax
  5cd932:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  5cd936:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
  5cd939:	89 02                	mov    DWORD PTR [edx],eax
  5cd93b:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  5cd93f:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  5cd942:	89 02                	mov    DWORD PTR [edx],eax
  5cd944:	8b 41 44             	mov    eax,DWORD PTR [ecx+0x44]
  5cd947:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  5cd94b:	89 01                	mov    DWORD PTR [ecx],eax
  5cd94d:	c2 2c 00             	ret    0x2c
  5cd950:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  5cd954:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5cd95a:	89 51 30             	mov    DWORD PTR [ecx+0x30],edx
  5cd95d:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5cd961:	56                   	push   esi
  5cd962:	8d 41 18             	lea    eax,[ecx+0x18]
  5cd965:	8b 32                	mov    esi,DWORD PTR [edx]
  5cd967:	89 30                	mov    DWORD PTR [eax],esi
  5cd969:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  5cd96c:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
  5cd96f:	5e                   	pop    esi
  5cd970:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5cd973:	d9 59 24             	fstp   DWORD PTR [ecx+0x24]
  5cd976:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  5cd97a:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5cd980:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  5cd983:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  5cd987:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  5cd98b:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
  5cd98e:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  5cd992:	89 51 10             	mov    DWORD PTR [ecx+0x10],edx
  5cd995:	d9 59 28             	fstp   DWORD PTR [ecx+0x28]
  5cd998:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  5cd99c:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5cd9a2:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  5cd9a6:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  5cd9a9:	89 51 44             	mov    DWORD PTR [ecx+0x44],edx
  5cd9ac:	d9 59 2c             	fstp   DWORD PTR [ecx+0x2c]
  5cd9af:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5cd9b3:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5cd9b9:	d9 59 34             	fstp   DWORD PTR [ecx+0x34]
  5cd9bc:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5cd9c0:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5cd9c6:	d9 59 38             	fstp   DWORD PTR [ecx+0x38]
  5cd9c9:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  5cd9cd:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5cd9d3:	d9 59 3c             	fstp   DWORD PTR [ecx+0x3c]
  5cd9d6:	c2 2c 00             	ret    0x2c
  5cd9d9:	90                   	nop
  5cd9da:	90                   	nop
  5cd9db:	90                   	nop
  5cd9dc:	90                   	nop
  5cd9dd:	90                   	nop
  5cd9de:	90                   	nop
  5cd9df:	90                   	nop
  5cd9e0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5cd9e4:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
  5cd9e7:	c2 04 00             	ret    0x4
  5cd9ea:	90                   	nop
  5cd9eb:	90                   	nop
  5cd9ec:	90                   	nop
  5cd9ed:	90                   	nop
  5cd9ee:	90                   	nop
  5cd9ef:	90                   	nop
  5cd9f0:	b8 98 11 00 00       	mov    eax,0x1198
  5cd9f5:	e8 76 05 04 00       	call   0x60df70
  5cd9fa:	53                   	push   ebx
  5cd9fb:	55                   	push   ebp
  5cd9fc:	8b da                	mov    ebx,edx
  5cd9fe:	8b e9                	mov    ebp,ecx
  5cda00:	56                   	push   esi
  5cda01:	57                   	push   edi
  5cda02:	8b cb                	mov    ecx,ebx
  5cda04:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  5cda08:	e8 43 27 00 00       	call   0x5d0150
  5cda0d:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  5cda11:	8b cb                	mov    ecx,ebx
  5cda13:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  5cda17:	e8 44 27 00 00       	call   0x5d0160
  5cda1c:	8b b4 24 ac 11 00 00 	mov    esi,DWORD PTR [esp+0x11ac]
  5cda23:	8b 84 24 bc 11 00 00 	mov    eax,DWORD PTR [esp+0x11bc]
  5cda2a:	b9 06 00 00 00       	mov    ecx,0x6
  5cda2f:	8d 7c 24 44          	lea    edi,[esp+0x44]
  5cda33:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cda35:	8b 08                	mov    ecx,DWORD PTR [eax]
  5cda37:	33 ff                	xor    edi,edi
  5cda39:	85 c9                	test   ecx,ecx
  5cda3b:	c7 44 24 28 ff ff 00 	mov    DWORD PTR [esp+0x28],0xffff
  5cda42:	00 
  5cda43:	8d 70 04             	lea    esi,[eax+0x4]
  5cda46:	7e 49                	jle    0x5cda91
  5cda48:	8d 44 24 50          	lea    eax,[esp+0x50]
  5cda4c:	56                   	push   esi
  5cda4d:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5cda51:	50                   	push   eax
  5cda52:	51                   	push   ecx
  5cda53:	c7 46 10 06 00 00 00 	mov    DWORD PTR [esi+0x10],0x6
  5cda5a:	e8 f1 cf ff ff       	call   0x5caa50
  5cda5f:	83 c4 0c             	add    esp,0xc
  5cda62:	83 f8 02             	cmp    eax,0x2
  5cda65:	0f 84 64 05 00 00    	je     0x5cdfcf
  5cda6b:	83 f8 01             	cmp    eax,0x1
  5cda6e:	75 12                	jne    0x5cda82
  5cda70:	8b d0                	mov    edx,eax
  5cda72:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  5cda76:	8b cf                	mov    ecx,edi
  5cda78:	d3 e2                	shl    edx,cl
  5cda7a:	f7 d2                	not    edx
  5cda7c:	23 c2                	and    eax,edx
  5cda7e:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  5cda82:	8b 84 24 bc 11 00 00 	mov    eax,DWORD PTR [esp+0x11bc]
  5cda89:	47                   	inc    edi
  5cda8a:	83 c6 14             	add    esi,0x14
  5cda8d:	3b 38                	cmp    edi,DWORD PTR [eax]
  5cda8f:	7c b7                	jl     0x5cda48
  5cda91:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  5cda95:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  5cda98:	6a 00                	push   0x0
  5cda9a:	6a 00                	push   0x0
  5cda9c:	57                   	push   edi
  5cda9d:	8d 54 24 68          	lea    edx,[esp+0x68]
  5cdaa1:	e8 3a 24 01 00       	call   0x5dfee0
  5cdaa6:	8b f0                	mov    esi,eax
  5cdaa8:	85 f6                	test   esi,esi
  5cdaaa:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  5cdaae:	75 2e                	jne    0x5cdade
  5cdab0:	50                   	push   eax
  5cdab1:	68 70 3f 6b 00       	push   0x6b3f70
  5cdab6:	68 6e 04 00 00       	push   0x46e
  5cdabb:	68 f4 a4 6a 00       	push   0x6aa4f4
  5cdac0:	68 70 3f 6b 00       	push   0x6b3f70
  5cdac5:	6a 67                	push   0x67
  5cdac7:	e8 54 17 00 00       	call   0x5cf220
  5cdacc:	83 c4 18             	add    esp,0x18
  5cdacf:	33 c0                	xor    eax,eax
  5cdad1:	5f                   	pop    edi
  5cdad2:	5e                   	pop    esi
  5cdad3:	5d                   	pop    ebp
  5cdad4:	5b                   	pop    ebx
  5cdad5:	81 c4 98 11 00 00    	add    esp,0x1198
  5cdadb:	c2 14 00             	ret    0x14
  5cdade:	8b 4d 30             	mov    ecx,DWORD PTR [ebp+0x30]
  5cdae1:	8d 55 18             	lea    edx,[ebp+0x18]
  5cdae4:	89 0d e0 03 72 00    	mov    DWORD PTR ds:0x7203e0,ecx
  5cdaea:	8b 02                	mov    eax,DWORD PTR [edx]
  5cdaec:	a3 e4 03 72 00       	mov    ds:0x7203e4,eax
  5cdaf1:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  5cdaf4:	89 0d e8 03 72 00    	mov    DWORD PTR ds:0x7203e8,ecx
  5cdafa:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5cdafd:	89 15 ec 03 72 00    	mov    DWORD PTR ds:0x7203ec,edx
  5cdb03:	8b 45 24             	mov    eax,DWORD PTR [ebp+0x24]
  5cdb06:	a3 fc 03 72 00       	mov    ds:0x7203fc,eax
  5cdb0b:	8b 4d 28             	mov    ecx,DWORD PTR [ebp+0x28]
  5cdb0e:	89 0d 00 04 72 00    	mov    DWORD PTR ds:0x720400,ecx
  5cdb14:	8b 55 2c             	mov    edx,DWORD PTR [ebp+0x2c]
  5cdb17:	89 15 04 04 72 00    	mov    DWORD PTR ds:0x720404,edx
  5cdb1d:	8b 45 44             	mov    eax,DWORD PTR [ebp+0x44]
  5cdb20:	8d 8c 24 98 00 00 00 	lea    ecx,[esp+0x98]
  5cdb27:	a3 24 08 72 00       	mov    ds:0x720824,eax
  5cdb2c:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
  5cdb2f:	51                   	push   ecx
  5cdb30:	8b cb                	mov    ecx,ebx
  5cdb32:	e8 69 1e 00 00       	call   0x5cf9a0
  5cdb37:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5cdb3a:	85 c0                	test   eax,eax
  5cdb3c:	0f 8e f4 00 00 00    	jle    0x5cdc36
  5cdb42:	8b 45 44             	mov    eax,DWORD PTR [ebp+0x44]
  5cdb45:	85 c0                	test   eax,eax
  5cdb47:	0f 84 c7 00 00 00    	je     0x5cdc14
  5cdb4d:	8d 54 24 14          	lea    edx,[esp+0x14]
  5cdb51:	8b cf                	mov    ecx,edi
  5cdb53:	e8 28 2a 01 00       	call   0x5e0580
  5cdb58:	8b d8                	mov    ebx,eax
  5cdb5a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5cdb5e:	85 c0                	test   eax,eax
  5cdb60:	0f 8e da 00 00 00    	jle    0x5cdc40
  5cdb66:	39 05 e4 c5 6c 00    	cmp    DWORD PTR ds:0x6cc5e4,eax
  5cdb6c:	7d 5d                	jge    0x5cdbcb
  5cdb6e:	8b d0                	mov    edx,eax
  5cdb70:	c1 e2 08             	shl    edx,0x8
  5cdb73:	03 d0                	add    edx,eax
  5cdb75:	a1 e0 c5 6c 00       	mov    eax,ds:0x6cc5e0
  5cdb7a:	c1 e2 02             	shl    edx,0x2
  5cdb7d:	52                   	push   edx
  5cdb7e:	50                   	push   eax
  5cdb7f:	e8 8c 18 00 00       	call   0x5cf410
  5cdb84:	83 c4 08             	add    esp,0x8
  5cdb87:	85 c0                	test   eax,eax
  5cdb89:	75 32                	jne    0x5cdbbd
  5cdb8b:	68 24 a5 6a 00       	push   0x6aa524
  5cdb90:	68 70 3f 6b 00       	push   0x6b3f70
  5cdb95:	68 92 04 00 00       	push   0x492
  5cdb9a:	68 f4 a4 6a 00       	push   0x6aa4f4
  5cdb9f:	68 70 3f 6b 00       	push   0x6b3f70
  5cdba4:	6a 67                	push   0x67
  5cdba6:	e8 75 16 00 00       	call   0x5cf220
  5cdbab:	83 c4 18             	add    esp,0x18
  5cdbae:	33 c0                	xor    eax,eax
  5cdbb0:	5f                   	pop    edi
  5cdbb1:	5e                   	pop    esi
  5cdbb2:	5d                   	pop    ebp
  5cdbb3:	5b                   	pop    ebx
  5cdbb4:	81 c4 98 11 00 00    	add    esp,0x1198
  5cdbba:	c2 14 00             	ret    0x14
  5cdbbd:	a3 e0 c5 6c 00       	mov    ds:0x6cc5e0,eax
  5cdbc2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5cdbc6:	a3 e4 c5 6c 00       	mov    ds:0x6cc5e4,eax
  5cdbcb:	33 ff                	xor    edi,edi
  5cdbcd:	85 c0                	test   eax,eax
  5cdbcf:	7e 6f                	jle    0x5cdc40
  5cdbd1:	33 f6                	xor    esi,esi
  5cdbd3:	83 c3 24             	add    ebx,0x24
  5cdbd6:	8b 0d e0 c5 6c 00    	mov    ecx,DWORD PTR ds:0x6cc5e0
  5cdbdc:	53                   	push   ebx
  5cdbdd:	8d 14 0e             	lea    edx,[esi+ecx*1]
  5cdbe0:	8b cd                	mov    ecx,ebp
  5cdbe2:	52                   	push   edx
  5cdbe3:	8b 94 24 bc 11 00 00 	mov    edx,DWORD PTR [esp+0x11bc]
  5cdbea:	e8 01 04 00 00       	call   0x5cdff0
  5cdbef:	8b 0d e0 c5 6c 00    	mov    ecx,DWORD PTR ds:0x6cc5e0
  5cdbf5:	47                   	inc    edi
  5cdbf6:	83 c3 30             	add    ebx,0x30
  5cdbf9:	89 84 0e 00 04 00 00 	mov    DWORD PTR [esi+ecx*1+0x400],eax
  5cdc00:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5cdc04:	81 c6 04 04 00 00    	add    esi,0x404
  5cdc0a:	3b f8                	cmp    edi,eax
  5cdc0c:	7c c8                	jl     0x5cdbd6
  5cdc0e:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
  5cdc12:	eb 2c                	jmp    0x5cdc40
  5cdc14:	8d 94 24 bc 00 00 00 	lea    edx,[esp+0xbc]
  5cdc1b:	8b cd                	mov    ecx,ebp
  5cdc1d:	52                   	push   edx
  5cdc1e:	8b 94 24 b8 11 00 00 	mov    edx,DWORD PTR [esp+0x11b8]
  5cdc25:	68 20 04 72 00       	push   0x720420
  5cdc2a:	e8 c1 03 00 00       	call   0x5cdff0
  5cdc2f:	a3 20 08 72 00       	mov    ds:0x720820,eax
  5cdc34:	eb 0a                	jmp    0x5cdc40
  5cdc36:	c7 05 20 08 72 00 00 	mov    DWORD PTR ds:0x720820,0x0
  5cdc3d:	00 00 00 
  5cdc40:	8b 94 24 b4 11 00 00 	mov    edx,DWORD PTR [esp+0x11b4]
  5cdc47:	8d 84 24 bc 00 00 00 	lea    eax,[esp+0xbc]
  5cdc4e:	50                   	push   eax
  5cdc4f:	68 08 04 72 00       	push   0x720408
  5cdc54:	8b cd                	mov    ecx,ebp
  5cdc56:	e8 35 05 00 00       	call   0x5ce190
  5cdc5b:	0f bf 46 10          	movsx  eax,WORD PTR [esi+0x10]
  5cdc5f:	8b 5e 18             	mov    ebx,DWORD PTR [esi+0x18]
  5cdc62:	85 c0                	test   eax,eax
  5cdc64:	0f 8e 65 03 00 00    	jle    0x5cdfcf
  5cdc6a:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  5cdc6e:	eb 04                	jmp    0x5cdc74
  5cdc70:	8b 6c 24 20          	mov    ebp,DWORD PTR [esp+0x20]
  5cdc74:	66 8b 43 02          	mov    ax,WORD PTR [ebx+0x2]
  5cdc78:	83 c3 02             	add    ebx,0x2
  5cdc7b:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
  5cdc7e:	83 c3 02             	add    ebx,0x2
  5cdc81:	0f bf c0             	movsx  eax,ax
  5cdc84:	8d ac 24 c8 00 00 00 	lea    ebp,[esp+0xc8]
  5cdc8b:	8d b4 24 14 0c 00 00 	lea    esi,[esp+0xc14]
  5cdc92:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
  5cdc99:	2b c8                	sub    ecx,eax
  5cdc9b:	8d 04 8a             	lea    eax,[edx+ecx*4]
  5cdc9e:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  5cdca2:	8b 08                	mov    ecx,DWORD PTR [eax]
  5cdca4:	89 0d f0 03 72 00    	mov    DWORD PTR ds:0x7203f0,ecx
  5cdcaa:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5cdcad:	89 15 f4 03 72 00    	mov    DWORD PTR ds:0x7203f4,edx
  5cdcb3:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5cdcb6:	a3 f8 03 72 00       	mov    ds:0x7203f8,eax
  5cdcbb:	b8 03 00 00 00       	mov    eax,0x3
  5cdcc0:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5cdcc4:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5cdcc8:	0f bf 03             	movsx  eax,WORD PTR [ebx]
  5cdccb:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  5cdccf:	83 c3 02             	add    ebx,0x2
  5cdcd2:	8d 0c 40             	lea    ecx,[eax+eax*2]
  5cdcd5:	83 c3 02             	add    ebx,0x2
  5cdcd8:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
  5cdcdb:	8b d5                	mov    edx,ebp
  5cdcdd:	8d 3c c8             	lea    edi,[eax+ecx*8]
  5cdce0:	8b cf                	mov    ecx,edi
  5cdce2:	8b 01                	mov    eax,DWORD PTR [ecx]
  5cdce4:	89 02                	mov    DWORD PTR [edx],eax
  5cdce6:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  5cdce9:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  5cdcec:	0f bf 43 fe          	movsx  eax,WORD PTR [ebx-0x2]
  5cdcf0:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5cdcf3:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  5cdcf6:	8d 14 40             	lea    edx,[eax+eax*2]
  5cdcf9:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5cdcfd:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
  5cdd00:	8d 14 91             	lea    edx,[ecx+edx*4]
  5cdd03:	8b 02                	mov    eax,DWORD PTR [edx]
  5cdd05:	a3 14 04 72 00       	mov    ds:0x720414,eax
  5cdd0a:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  5cdd0e:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  5cdd11:	89 0d 18 04 72 00    	mov    DWORD PTR ds:0x720418,ecx
  5cdd17:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5cdd1a:	89 15 1c 04 72 00    	mov    DWORD PTR ds:0x72041c,edx
  5cdd20:	8b 48 5c             	mov    ecx,DWORD PTR [eax+0x5c]
  5cdd23:	8b 57 14             	mov    edx,DWORD PTR [edi+0x14]
  5cdd26:	51                   	push   ecx
  5cdd27:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  5cdd2b:	e8 80 06 00 00       	call   0x5ce3b0
  5cdd30:	83 c5 0c             	add    ebp,0xc
  5cdd33:	83 c6 18             	add    esi,0x18
  5cdd36:	8b 94 24 88 00 00 00 	mov    edx,DWORD PTR [esp+0x88]
  5cdd3d:	8b 84 24 8c 00 00 00 	mov    eax,DWORD PTR [esp+0x8c]
  5cdd44:	8b 8c 24 90 00 00 00 	mov    ecx,DWORD PTR [esp+0x90]
  5cdd4b:	89 56 e4             	mov    DWORD PTR [esi-0x1c],edx
  5cdd4e:	89 46 e8             	mov    DWORD PTR [esi-0x18],eax
  5cdd51:	89 4e ec             	mov    DWORD PTR [esi-0x14],ecx
  5cdd54:	8b 57 0c             	mov    edx,DWORD PTR [edi+0xc]
  5cdd57:	89 56 dc             	mov    DWORD PTR [esi-0x24],edx
  5cdd5a:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
  5cdd5d:	89 46 e0             	mov    DWORD PTR [esi-0x20],eax
  5cdd60:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cdd64:	48                   	dec    eax
  5cdd65:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5cdd69:	0f 85 59 ff ff ff    	jne    0x5cdcc8
  5cdd6f:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  5cdd73:	8d 94 24 d4 00 00 00 	lea    edx,[esp+0xd4]
  5cdd7a:	51                   	push   ecx
  5cdd7b:	8d 8c 24 e4 00 00 00 	lea    ecx,[esp+0xe4]
  5cdd82:	e8 59 52 fe ff       	call   0x5b2fe0
  5cdd87:	8d 54 24 68          	lea    edx,[esp+0x68]
  5cdd8b:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  5cdd92:	52                   	push   edx
  5cdd93:	8d 94 24 d8 00 00 00 	lea    edx,[esp+0xd8]
  5cdd9a:	e8 41 52 fe ff       	call   0x5b2fe0
  5cdd9f:	8d 44 24 38          	lea    eax,[esp+0x38]
  5cdda3:	8d 54 24 68          	lea    edx,[esp+0x68]
  5cdda7:	50                   	push   eax
  5cdda8:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5cddac:	e8 af 50 fe ff       	call   0x5b2e60
  5cddb1:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  5cddb5:	e8 66 51 fe ff       	call   0x5b2f20
  5cddba:	dd d8                	fstp   st(0)
  5cddbc:	8d 94 24 c8 00 00 00 	lea    edx,[esp+0xc8]
  5cddc3:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  5cddc7:	e8 74 50 fe ff       	call   0x5b2e40
  5cddcc:	8b 8c 24 b8 11 00 00 	mov    ecx,DWORD PTR [esp+0x11b8]
  5cddd3:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  5cddd7:	e8 a4 b6 ff ff       	call   0x5c9480
  5cdddc:	8b d0                	mov    edx,eax
  5cddde:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  5cdde2:	e8 59 50 fe ff       	call   0x5b2e40
  5cdde7:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
  5cddeb:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5cddf1:	df e0                	fnstsw ax
  5cddf3:	f6 c4 41             	test   ah,0x41
  5cddf6:	0f 85 c4 01 00 00    	jne    0x5cdfc0
  5cddfc:	8b 94 24 bc 11 00 00 	mov    edx,DWORD PTR [esp+0x11bc]
  5cde03:	8d 8c 24 08 0c 00 00 	lea    ecx,[esp+0xc08]
  5cde0a:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  5cde0e:	8d b4 24 c8 00 00 00 	lea    esi,[esp+0xc8]
  5cde15:	8b 2a                	mov    ebp,DWORD PTR [edx]
  5cde17:	8d 4a 04             	lea    ecx,[edx+0x4]
  5cde1a:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  5cde1e:	33 c9                	xor    ecx,ecx
  5cde20:	85 ed                	test   ebp,ebp
  5cde22:	8d bc 24 30 02 00 00 	lea    edi,[esp+0x230]
  5cde29:	8d 84 24 00 05 00 00 	lea    eax,[esp+0x500]
  5cde30:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5cde34:	0f 8e aa 00 00 00    	jle    0x5cdee4
  5cde3a:	8b 6c 24 28          	mov    ebp,DWORD PTR [esp+0x28]
  5cde3e:	ba 01 00 00 00       	mov    edx,0x1
  5cde43:	d3 e2                	shl    edx,cl
  5cde45:	85 d5                	test   ebp,edx
  5cde47:	74 7c                	je     0x5cdec5
  5cde49:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
  5cde4d:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5cde51:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5cde55:	51                   	push   ecx
  5cde56:	55                   	push   ebp
  5cde57:	50                   	push   eax
  5cde58:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  5cde5c:	52                   	push   edx
  5cde5d:	57                   	push   edi
  5cde5e:	56                   	push   esi
  5cde5f:	50                   	push   eax
  5cde60:	e8 9b 32 00 00       	call   0x5d1100
  5cde65:	83 c4 1c             	add    esp,0x1c
  5cde68:	85 c0                	test   eax,eax
  5cde6a:	74 7e                	je     0x5cdeea
  5cde6c:	8d 8c 24 30 02 00 00 	lea    ecx,[esp+0x230]
  5cde73:	3b f1                	cmp    esi,ecx
  5cde75:	75 22                	jne    0x5cde99
  5cde77:	8d 94 24 d8 0e 00 00 	lea    edx,[esp+0xed8]
  5cde7e:	8d b4 24 98 03 00 00 	lea    esi,[esp+0x398]
  5cde85:	8d bc 24 30 02 00 00 	lea    edi,[esp+0x230]
  5cde8c:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  5cde90:	8d 84 24 00 05 00 00 	lea    eax,[esp+0x500]
  5cde97:	eb 20                	jmp    0x5cdeb9
  5cde99:	8d 84 24 00 05 00 00 	lea    eax,[esp+0x500]
  5cdea0:	8d b4 24 30 02 00 00 	lea    esi,[esp+0x230]
  5cdea7:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5cdeab:	8d bc 24 98 03 00 00 	lea    edi,[esp+0x398]
  5cdeb2:	8d 84 24 d8 0e 00 00 	lea    eax,[esp+0xed8]
  5cdeb9:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  5cdebd:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  5cdec1:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cdec5:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  5cdec9:	41                   	inc    ecx
  5cdeca:	83 c2 14             	add    edx,0x14
  5cdecd:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5cded1:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  5cded5:	8b 94 24 bc 11 00 00 	mov    edx,DWORD PTR [esp+0x11bc]
  5cdedc:	3b 0a                	cmp    ecx,DWORD PTR [edx]
  5cdede:	0f 8c 56 ff ff ff    	jl     0x5cde3a
  5cdee4:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
  5cdee8:	eb 04                	jmp    0x5cdeee
  5cdeea:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cdeee:	8b 84 24 bc 11 00 00 	mov    eax,DWORD PTR [esp+0x11bc]
  5cdef5:	3b 08                	cmp    ecx,DWORD PTR [eax]
  5cdef7:	0f 85 c3 00 00 00    	jne    0x5cdfc0
  5cdefd:	83 fd 03             	cmp    ebp,0x3
  5cdf00:	0f 8c ba 00 00 00    	jl     0x5cdfc0
  5cdf06:	85 ed                	test   ebp,ebp
  5cdf08:	7e 31                	jle    0x5cdf3b
  5cdf0a:	8b c7                	mov    eax,edi
  5cdf0c:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  5cdf10:	2b c6                	sub    eax,esi
  5cdf12:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5cdf16:	eb 04                	jmp    0x5cdf1c
  5cdf18:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5cdf1c:	8b 8c 24 b8 11 00 00 	mov    ecx,DWORD PTR [esp+0x11b8]
  5cdf23:	03 c6                	add    eax,esi
  5cdf25:	50                   	push   eax
  5cdf26:	8b d6                	mov    edx,esi
  5cdf28:	e8 e3 b4 ff ff       	call   0x5c9410
  5cdf2d:	83 c6 0c             	add    esi,0xc
  5cdf30:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cdf34:	48                   	dec    eax
  5cdf35:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5cdf39:	75 dd                	jne    0x5cdf18
  5cdf3b:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  5cdf3f:	d9 46 5c             	fld    DWORD PTR [esi+0x5c]
  5cdf42:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
  5cdf46:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5cdf4c:	df e0                	fnstsw ax
  5cdf4e:	f6 c4 41             	test   ah,0x41
  5cdf51:	75 26                	jne    0x5cdf79
  5cdf53:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cdf57:	8b 94 24 b8 11 00 00 	mov    edx,DWORD PTR [esp+0x11b8]
  5cdf5e:	51                   	push   ecx
  5cdf5f:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5cdf63:	52                   	push   edx
  5cdf64:	8d 84 24 d8 07 00 00 	lea    eax,[esp+0x7d8]
  5cdf6b:	55                   	push   ebp
  5cdf6c:	50                   	push   eax
  5cdf6d:	51                   	push   ecx
  5cdf6e:	57                   	push   edi
  5cdf6f:	e8 fc 35 00 00       	call   0x5d1570
  5cdf74:	83 c4 18             	add    esp,0x18
  5cdf77:	eb 1f                	jmp    0x5cdf98
  5cdf79:	8b 94 24 b8 11 00 00 	mov    edx,DWORD PTR [esp+0x11b8]
  5cdf80:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5cdf84:	52                   	push   edx
  5cdf85:	8d 84 24 d4 07 00 00 	lea    eax,[esp+0x7d4]
  5cdf8c:	55                   	push   ebp
  5cdf8d:	50                   	push   eax
  5cdf8e:	51                   	push   ecx
  5cdf8f:	57                   	push   edi
  5cdf90:	e8 6b 36 00 00       	call   0x5d1600
  5cdf95:	83 c4 14             	add    esp,0x14
  5cdf98:	8b 56 58             	mov    edx,DWORD PTR [esi+0x58]
  5cdf9b:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  5cdf9f:	89 94 24 f0 07 00 00 	mov    DWORD PTR [esp+0x7f0],edx
  5cdfa6:	6a 00                	push   0x0
  5cdfa8:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  5cdfab:	8d 94 24 d4 07 00 00 	lea    edx,[esp+0x7d4]
  5cdfb2:	51                   	push   ecx
  5cdfb3:	8b 8c 24 b8 11 00 00 	mov    ecx,DWORD PTR [esp+0x11b8]
  5cdfba:	55                   	push   ebp
  5cdfbb:	e8 a0 da fe ff       	call   0x5bba60
  5cdfc0:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5cdfc4:	48                   	dec    eax
  5cdfc5:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  5cdfc9:	0f 85 a1 fc ff ff    	jne    0x5cdc70
  5cdfcf:	5f                   	pop    edi
  5cdfd0:	5e                   	pop    esi
  5cdfd1:	5d                   	pop    ebp
  5cdfd2:	b8 01 00 00 00       	mov    eax,0x1
  5cdfd7:	5b                   	pop    ebx
  5cdfd8:	81 c4 98 11 00 00    	add    esp,0x1198
  5cdfde:	c2 14 00             	ret    0x14
  5cdfe1:	90                   	nop
  5cdfe2:	90                   	nop
  5cdfe3:	90                   	nop
  5cdfe4:	90                   	nop
  5cdfe5:	90                   	nop
  5cdfe6:	90                   	nop
  5cdfe7:	90                   	nop
  5cdfe8:	90                   	nop
  5cdfe9:	90                   	nop
  5cdfea:	90                   	nop
  5cdfeb:	90                   	nop
  5cdfec:	90                   	nop
  5cdfed:	90                   	nop
  5cdfee:	90                   	nop
  5cdfef:	90                   	nop
  5cdff0:	83 ec 30             	sub    esp,0x30
  5cdff3:	8b 92 b0 03 00 00    	mov    edx,DWORD PTR [edx+0x3b0]
  5cdff9:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  5cdffd:	53                   	push   ebx
  5cdffe:	55                   	push   ebp
  5cdfff:	56                   	push   esi
  5ce000:	57                   	push   edi
  5ce001:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5ce005:	33 ed                	xor    ebp,ebp
  5ce007:	8d 78 0c             	lea    edi,[eax+0xc]
  5ce00a:	8d b2 f8 03 00 00    	lea    esi,[edx+0x3f8]
  5ce010:	bb 20 00 00 00       	mov    ebx,0x20
  5ce015:	8b 46 ec             	mov    eax,DWORD PTR [esi-0x14]
  5ce018:	85 c0                	test   eax,eax
  5ce01a:	74 77                	je     0x5ce093
  5ce01c:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
  5ce020:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5ce024:	51                   	push   ecx
  5ce025:	8b ce                	mov    ecx,esi
  5ce027:	e8 b4 4f fe ff       	call   0x5b2fe0
  5ce02c:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  5ce030:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
  5ce034:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5ce038:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
  5ce03c:	de c1                	faddp  st(1),st
  5ce03e:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5ce042:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  5ce046:	de c1                	faddp  st(1),st
  5ce048:	d9 57 0c             	fst    DWORD PTR [edi+0xc]
  5ce04b:	d9 46 0c             	fld    DWORD PTR [esi+0xc]
  5ce04e:	d9 c0                	fld    st(0)
  5ce050:	d8 c9                	fmul   st,st(1)
  5ce052:	d9 c9                	fxch   st(1)
  5ce054:	d9 ca                	fxch   st(2)
  5ce056:	de d9                	fcompp
  5ce058:	df e0                	fnstsw ax
  5ce05a:	f6 c4 01             	test   ah,0x1
  5ce05d:	dd d8                	fstp   st(0)
  5ce05f:	74 32                	je     0x5ce093
  5ce061:	8b 56 f0             	mov    edx,DWORD PTR [esi-0x10]
  5ce064:	45                   	inc    ebp
  5ce065:	89 17                	mov    DWORD PTR [edi],edx
  5ce067:	8b 46 f4             	mov    eax,DWORD PTR [esi-0xc]
  5ce06a:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
  5ce06d:	8b 4e f8             	mov    ecx,DWORD PTR [esi-0x8]
  5ce070:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
  5ce073:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
  5ce076:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5ce07a:	8d 47 f4             	lea    eax,[edi-0xc]
  5ce07d:	89 57 10             	mov    DWORD PTR [edi+0x10],edx
  5ce080:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5ce084:	89 08                	mov    DWORD PTR [eax],ecx
  5ce086:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5ce08a:	83 c7 20             	add    edi,0x20
  5ce08d:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  5ce090:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  5ce093:	83 c6 34             	add    esi,0x34
  5ce096:	4b                   	dec    ebx
  5ce097:	0f 85 78 ff ff ff    	jne    0x5ce015
  5ce09d:	85 ed                	test   ebp,ebp
  5ce09f:	7e 58                	jle    0x5ce0f9
  5ce0a1:	89 6c 24 48          	mov    DWORD PTR [esp+0x48],ebp
  5ce0a5:	8d 5d ff             	lea    ebx,[ebp-0x1]
  5ce0a8:	85 db                	test   ebx,ebx
  5ce0aa:	7e 42                	jle    0x5ce0ee
  5ce0ac:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  5ce0b0:	83 c2 20             	add    edx,0x20
  5ce0b3:	d9 42 f8             	fld    DWORD PTR [edx-0x8]
  5ce0b6:	d8 5a 18             	fcomp  DWORD PTR [edx+0x18]
  5ce0b9:	df e0                	fnstsw ax
  5ce0bb:	f6 c4 41             	test   ah,0x41
  5ce0be:	75 28                	jne    0x5ce0e8
  5ce0c0:	8d 42 e0             	lea    eax,[edx-0x20]
  5ce0c3:	b9 08 00 00 00       	mov    ecx,0x8
  5ce0c8:	8b f0                	mov    esi,eax
  5ce0ca:	8d 7c 24 20          	lea    edi,[esp+0x20]
  5ce0ce:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5ce0d0:	b9 08 00 00 00       	mov    ecx,0x8
  5ce0d5:	8b f2                	mov    esi,edx
  5ce0d7:	8b f8                	mov    edi,eax
  5ce0d9:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5ce0db:	b9 08 00 00 00       	mov    ecx,0x8
  5ce0e0:	8d 74 24 20          	lea    esi,[esp+0x20]
  5ce0e4:	8b fa                	mov    edi,edx
  5ce0e6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5ce0e8:	83 c2 20             	add    edx,0x20
  5ce0eb:	4b                   	dec    ebx
  5ce0ec:	75 c5                	jne    0x5ce0b3
  5ce0ee:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  5ce0f2:	48                   	dec    eax
  5ce0f3:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  5ce0f7:	75 ac                	jne    0x5ce0a5
  5ce0f9:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5ce0fd:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  5ce100:	3b e8                	cmp    ebp,eax
  5ce102:	7e 02                	jle    0x5ce106
  5ce104:	8b e8                	mov    ebp,eax
  5ce106:	85 ed                	test   ebp,ebp
  5ce108:	7e 6f                	jle    0x5ce179
  5ce10a:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  5ce10e:	8b d5                	mov    edx,ebp
  5ce110:	83 c1 08             	add    ecx,0x8
  5ce113:	d9 41 10             	fld    DWORD PTR [ecx+0x10]
  5ce116:	d9 fa                	fsqrt
  5ce118:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  5ce11e:	df e0                	fnstsw ax
  5ce120:	f6 c4 01             	test   ah,0x1
  5ce123:	74 08                	je     0x5ce12d
  5ce125:	dd d8                	fstp   st(0)
  5ce127:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  5ce12d:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  5ce133:	d8 f1                	fdiv   st,st(1)
  5ce135:	83 c1 20             	add    ecx,0x20
  5ce138:	4a                   	dec    edx
  5ce139:	d9 c0                	fld    st(0)
  5ce13b:	d8 49 d8             	fmul   DWORD PTR [ecx-0x28]
  5ce13e:	d9 59 d8             	fstp   DWORD PTR [ecx-0x28]
  5ce141:	d9 c0                	fld    st(0)
  5ce143:	d8 49 dc             	fmul   DWORD PTR [ecx-0x24]
  5ce146:	d9 59 dc             	fstp   DWORD PTR [ecx-0x24]
  5ce149:	d8 49 e0             	fmul   DWORD PTR [ecx-0x20]
  5ce14c:	d9 59 e0             	fstp   DWORD PTR [ecx-0x20]
  5ce14f:	d9 51 f0             	fst    DWORD PTR [ecx-0x10]
  5ce152:	d8 71 f4             	fdiv   DWORD PTR [ecx-0xc]
  5ce155:	d8 2d 54 a3 64 00    	fsubr  DWORD PTR ds:0x64a354
  5ce15b:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5ce161:	d9 c0                	fld    st(0)
  5ce163:	d8 49 e4             	fmul   DWORD PTR [ecx-0x1c]
  5ce166:	d9 59 e4             	fstp   DWORD PTR [ecx-0x1c]
  5ce169:	d9 c0                	fld    st(0)
  5ce16b:	d8 49 e8             	fmul   DWORD PTR [ecx-0x18]
  5ce16e:	d9 59 e8             	fstp   DWORD PTR [ecx-0x18]
  5ce171:	d8 49 ec             	fmul   DWORD PTR [ecx-0x14]
  5ce174:	d9 59 ec             	fstp   DWORD PTR [ecx-0x14]
  5ce177:	75 9a                	jne    0x5ce113
  5ce179:	5f                   	pop    edi
  5ce17a:	8b c5                	mov    eax,ebp
  5ce17c:	5e                   	pop    esi
  5ce17d:	5d                   	pop    ebp
  5ce17e:	5b                   	pop    ebx
  5ce17f:	83 c4 30             	add    esp,0x30
  5ce182:	c2 08 00             	ret    0x8
  5ce185:	90                   	nop
  5ce186:	90                   	nop
  5ce187:	90                   	nop
  5ce188:	90                   	nop
  5ce189:	90                   	nop
  5ce18a:	90                   	nop
  5ce18b:	90                   	nop
  5ce18c:	90                   	nop
  5ce18d:	90                   	nop
  5ce18e:	90                   	nop
  5ce18f:	90                   	nop
  5ce190:	83 ec 38             	sub    esp,0x38
  5ce193:	53                   	push   ebx
  5ce194:	55                   	push   ebp
  5ce195:	8b e9                	mov    ebp,ecx
  5ce197:	56                   	push   esi
  5ce198:	57                   	push   edi
  5ce199:	8b f2                	mov    esi,edx
  5ce19b:	8b 45 40             	mov    eax,DWORD PTR [ebp+0x40]
  5ce19e:	85 c0                	test   eax,eax
  5ce1a0:	0f 84 de 01 00 00    	je     0x5ce384
  5ce1a6:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  5ce1a9:	6a 00                	push   0x0
  5ce1ab:	8b 98 14 01 00 00    	mov    ebx,DWORD PTR [eax+0x114]
  5ce1b1:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  5ce1b5:	8b c8                	mov    ecx,eax
  5ce1b7:	8b 11                	mov    edx,DWORD PTR [ecx]
  5ce1b9:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  5ce1bd:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5ce1c0:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  5ce1c4:	8b 10                	mov    edx,DWORD PTR [eax]
  5ce1c6:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5ce1c9:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  5ce1cd:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  5ce1d0:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  5ce1d4:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  5ce1d7:	8d 44 24 14          	lea    eax,[esp+0x14]
  5ce1db:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  5ce1df:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  5ce1e3:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  5ce1e7:	d8 25 5c 09 65 00    	fsub   DWORD PTR ds:0x65095c
  5ce1ed:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  5ce1f1:	50                   	push   eax
  5ce1f2:	8d 54 24 34          	lea    edx,[esp+0x34]
  5ce1f6:	51                   	push   ecx
  5ce1f7:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  5ce1fb:	52                   	push   edx
  5ce1fc:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  5ce200:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5ce204:	50                   	push   eax
  5ce205:	51                   	push   ecx
  5ce206:	56                   	push   esi
  5ce207:	e8 a4 c4 ff ff       	call   0x5ca6b0
  5ce20c:	8b f8                	mov    edi,eax
  5ce20e:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  5ce212:	6a 00                	push   0x0
  5ce214:	8d 44 24 70          	lea    eax,[esp+0x70]
  5ce218:	52                   	push   edx
  5ce219:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  5ce21d:	50                   	push   eax
  5ce21e:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  5ce222:	51                   	push   ecx
  5ce223:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  5ce227:	52                   	push   edx
  5ce228:	50                   	push   eax
  5ce229:	56                   	push   esi
  5ce22a:	e8 81 c4 ff ff       	call   0x5ca6b0
  5ce22f:	33 d2                	xor    edx,edx
  5ce231:	83 c4 38             	add    esp,0x38
  5ce234:	3b fa                	cmp    edi,edx
  5ce236:	0f 85 26 01 00 00    	jne    0x5ce362
  5ce23c:	3b c2                	cmp    eax,edx
  5ce23e:	0f 84 1e 01 00 00    	je     0x5ce362
  5ce244:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  5ce248:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5ce24b:	8d 04 48             	lea    eax,[eax+ecx*2]
  5ce24e:	8d 0c 83             	lea    ecx,[ebx+eax*4]
  5ce251:	8b 44 83 0c          	mov    eax,DWORD PTR [ebx+eax*4+0xc]
  5ce255:	8b f8                	mov    edi,eax
  5ce257:	c1 e7 04             	shl    edi,0x4
  5ce25a:	03 f8                	add    edi,eax
  5ce25c:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  5ce25f:	8b 80 c0 01 00 00    	mov    eax,DWORD PTR [eax+0x1c0]
  5ce265:	8d 34 f8             	lea    esi,[eax+edi*8]
  5ce268:	8b 44 f8 14          	mov    eax,DWORD PTR [eax+edi*8+0x14]
  5ce26c:	3b c2                	cmp    eax,edx
  5ce26e:	7d 16                	jge    0x5ce286
  5ce270:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  5ce274:	5f                   	pop    edi
  5ce275:	5e                   	pop    esi
  5ce276:	5d                   	pop    ebp
  5ce277:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  5ce27a:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  5ce27d:	89 10                	mov    DWORD PTR [eax],edx
  5ce27f:	5b                   	pop    ebx
  5ce280:	83 c4 38             	add    esp,0x38
  5ce283:	c2 08 00             	ret    0x8
  5ce286:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
  5ce289:	33 ff                	xor    edi,edi
  5ce28b:	3b c2                	cmp    eax,edx
  5ce28d:	0f 8e 09 01 00 00    	jle    0x5ce39c
  5ce293:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  5ce297:	68 00 00 a0 41       	push   0x41a00000
  5ce29c:	51                   	push   ecx
  5ce29d:	56                   	push   esi
  5ce29e:	e8 dd 65 00 00       	call   0x5d4880
  5ce2a3:	83 c4 0c             	add    esp,0xc
  5ce2a6:	85 c0                	test   eax,eax
  5ce2a8:	74 1f                	je     0x5ce2c9
  5ce2aa:	6a 00                	push   0x0
  5ce2ac:	56                   	push   esi
  5ce2ad:	e8 6e 3d 00 00       	call   0x5d2020
  5ce2b2:	8d 54 24 40          	lea    edx,[esp+0x40]
  5ce2b6:	8d 44 24 34          	lea    eax,[esp+0x34]
  5ce2ba:	52                   	push   edx
  5ce2bb:	50                   	push   eax
  5ce2bc:	56                   	push   esi
  5ce2bd:	e8 7e 58 00 00       	call   0x5d3b40
  5ce2c2:	83 c4 14             	add    esp,0x14
  5ce2c5:	85 c0                	test   eax,eax
  5ce2c7:	75 21                	jne    0x5ce2ea
  5ce2c9:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  5ce2cd:	81 c6 88 00 00 00    	add    esi,0x88
  5ce2d3:	47                   	inc    edi
  5ce2d4:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5ce2d7:	8d 14 48             	lea    edx,[eax+ecx*2]
  5ce2da:	3b 7c 93 08          	cmp    edi,DWORD PTR [ebx+edx*4+0x8]
  5ce2de:	7c b3                	jl     0x5ce293
  5ce2e0:	5f                   	pop    edi
  5ce2e1:	5e                   	pop    esi
  5ce2e2:	5d                   	pop    ebp
  5ce2e3:	5b                   	pop    ebx
  5ce2e4:	83 c4 38             	add    esp,0x38
  5ce2e7:	c2 08 00             	ret    0x8
  5ce2ea:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  5ce2ee:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5ce2f4:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  5ce2f8:	ba 9a 99 99 3e       	mov    edx,0x3e99999a
  5ce2fd:	d9 54 24 50          	fst    DWORD PTR [esp+0x50]
  5ce301:	d9 19                	fstp   DWORD PTR [ecx]
  5ce303:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  5ce307:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5ce30d:	d9 51 04             	fst    DWORD PTR [ecx+0x4]
  5ce310:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
  5ce314:	d8 0d 58 09 65 00    	fmul   DWORD PTR ds:0x650958
  5ce31a:	d9 54 24 4c          	fst    DWORD PTR [esp+0x4c]
  5ce31e:	d9 59 08             	fstp   DWORD PTR [ecx+0x8]
  5ce321:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  5ce325:	d8 1d 74 b8 64 00    	fcomp  DWORD PTR ds:0x64b874
  5ce32b:	df e0                	fnstsw ax
  5ce32d:	f6 c4 41             	test   ah,0x41
  5ce330:	75 02                	jne    0x5ce334
  5ce332:	89 11                	mov    DWORD PTR [ecx],edx
  5ce334:	d8 1d 74 b8 64 00    	fcomp  DWORD PTR ds:0x64b874
  5ce33a:	df e0                	fnstsw ax
  5ce33c:	f6 c4 41             	test   ah,0x41
  5ce33f:	75 03                	jne    0x5ce344
  5ce341:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  5ce344:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
  5ce348:	d8 1d 74 b8 64 00    	fcomp  DWORD PTR ds:0x64b874
  5ce34e:	df e0                	fnstsw ax
  5ce350:	f6 c4 41             	test   ah,0x41
  5ce353:	75 47                	jne    0x5ce39c
  5ce355:	5f                   	pop    edi
  5ce356:	5e                   	pop    esi
  5ce357:	5d                   	pop    ebp
  5ce358:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  5ce35b:	5b                   	pop    ebx
  5ce35c:	83 c4 38             	add    esp,0x38
  5ce35f:	c2 08 00             	ret    0x8
  5ce362:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  5ce366:	83 c5 34             	add    ebp,0x34
  5ce369:	5f                   	pop    edi
  5ce36a:	5e                   	pop    esi
  5ce36b:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  5ce36e:	89 08                	mov    DWORD PTR [eax],ecx
  5ce370:	8b 55 04             	mov    edx,DWORD PTR [ebp+0x4]
  5ce373:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  5ce376:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  5ce379:	5d                   	pop    ebp
  5ce37a:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  5ce37d:	5b                   	pop    ebx
  5ce37e:	83 c4 38             	add    esp,0x38
  5ce381:	c2 08 00             	ret    0x8
  5ce384:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
  5ce388:	83 c5 34             	add    ebp,0x34
  5ce38b:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  5ce38e:	89 02                	mov    DWORD PTR [edx],eax
  5ce390:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  5ce393:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  5ce396:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5ce399:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  5ce39c:	5f                   	pop    edi
  5ce39d:	5e                   	pop    esi
  5ce39e:	5d                   	pop    ebp
  5ce39f:	5b                   	pop    ebx
  5ce3a0:	83 c4 38             	add    esp,0x38
  5ce3a3:	c2 08 00             	ret    0x8
  5ce3a6:	90                   	nop
  5ce3a7:	90                   	nop
  5ce3a8:	90                   	nop
  5ce3a9:	90                   	nop
  5ce3aa:	90                   	nop
  5ce3ab:	90                   	nop
  5ce3ac:	90                   	nop
  5ce3ad:	90                   	nop
  5ce3ae:	90                   	nop
  5ce3af:	90                   	nop
  5ce3b0:	83 ec 08             	sub    esp,0x8
  5ce3b3:	d9 05 08 04 72 00    	fld    DWORD PTR ds:0x720408
  5ce3b9:	d9 05 0c 04 72 00    	fld    DWORD PTR ds:0x72040c
  5ce3bf:	a1 e0 03 72 00       	mov    eax,ds:0x7203e0
  5ce3c4:	d9 54 24 00          	fst    DWORD PTR [esp+0x0]
  5ce3c8:	d9 05 10 04 72 00    	fld    DWORD PTR ds:0x720410
  5ce3ce:	85 c0                	test   eax,eax
  5ce3d0:	d9 54 24 04          	fst    DWORD PTR [esp+0x4]
  5ce3d4:	74 65                	je     0x5ce43b
  5ce3d6:	d9 05 1c 04 72 00    	fld    DWORD PTR ds:0x72041c
  5ce3dc:	d8 0d ec 03 72 00    	fmul   DWORD PTR ds:0x7203ec
  5ce3e2:	d9 05 18 04 72 00    	fld    DWORD PTR ds:0x720418
  5ce3e8:	d8 0d e8 03 72 00    	fmul   DWORD PTR ds:0x7203e8
  5ce3ee:	de c1                	faddp  st(1),st
  5ce3f0:	d9 05 14 04 72 00    	fld    DWORD PTR ds:0x720414
  5ce3f6:	d8 0d e4 03 72 00    	fmul   DWORD PTR ds:0x7203e4
  5ce3fc:	de c1                	faddp  st(1),st
  5ce3fe:	dc 15 00 d3 64 00    	fcom   QWORD PTR ds:0x64d300
  5ce404:	df e0                	fnstsw ax
  5ce406:	f6 c4 41             	test   ah,0x41
  5ce409:	75 2e                	jne    0x5ce439
  5ce40b:	d9 05 fc 03 72 00    	fld    DWORD PTR ds:0x7203fc
  5ce411:	d8 c9                	fmul   st,st(1)
  5ce413:	de c4                	faddp  st(4),st
  5ce415:	d9 05 00 04 72 00    	fld    DWORD PTR ds:0x720400
  5ce41b:	d8 c9                	fmul   st,st(1)
  5ce41d:	de c3                	faddp  st(3),st
  5ce41f:	d9 ca                	fxch   st(2)
  5ce421:	d9 54 24 00          	fst    DWORD PTR [esp+0x0]
  5ce425:	d9 ca                	fxch   st(2)
  5ce427:	d9 05 04 04 72 00    	fld    DWORD PTR ds:0x720404
  5ce42d:	d8 c9                	fmul   st,st(1)
  5ce42f:	de c2                	faddp  st(2),st
  5ce431:	d9 c9                	fxch   st(1)
  5ce433:	d9 54 24 04          	fst    DWORD PTR [esp+0x4]
  5ce437:	d9 c9                	fxch   st(1)
  5ce439:	dd d8                	fstp   st(0)
  5ce43b:	a1 24 08 72 00       	mov    eax,ds:0x720824
  5ce440:	56                   	push   esi
  5ce441:	85 c0                	test   eax,eax
  5ce443:	0f 84 a5 00 00 00    	je     0x5ce4ee
  5ce449:	8b c2                	mov    eax,edx
  5ce44b:	c1 e0 08             	shl    eax,0x8
  5ce44e:	03 c2                	add    eax,edx
  5ce450:	8b 15 e0 c5 6c 00    	mov    edx,DWORD PTR ds:0x6cc5e0
  5ce456:	8b b4 82 00 04 00 00 	mov    esi,DWORD PTR [edx+eax*4+0x400]
  5ce45d:	8d 04 82             	lea    eax,[edx+eax*4]
  5ce460:	85 f6                	test   esi,esi
  5ce462:	0f 8e e2 00 00 00    	jle    0x5ce54a
  5ce468:	8d 50 04             	lea    edx,[eax+0x4]
  5ce46b:	d9 05 1c 04 72 00    	fld    DWORD PTR ds:0x72041c
  5ce471:	d8 4a 04             	fmul   DWORD PTR [edx+0x4]
  5ce474:	d9 05 14 04 72 00    	fld    DWORD PTR ds:0x720414
  5ce47a:	d8 4a fc             	fmul   DWORD PTR [edx-0x4]
  5ce47d:	de c1                	faddp  st(1),st
  5ce47f:	d9 05 18 04 72 00    	fld    DWORD PTR ds:0x720418
  5ce485:	d8 0a                	fmul   DWORD PTR [edx]
  5ce487:	de c1                	faddp  st(1),st
  5ce489:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  5ce48f:	df e0                	fnstsw ax
  5ce491:	f6 c4 41             	test   ah,0x41
  5ce494:	75 15                	jne    0x5ce4ab
  5ce496:	d9 c0                	fld    st(0)
  5ce498:	d8 4a 08             	fmul   DWORD PTR [edx+0x8]
  5ce49b:	de c4                	faddp  st(4),st
  5ce49d:	d9 c0                	fld    st(0)
  5ce49f:	d8 4a 0c             	fmul   DWORD PTR [edx+0xc]
  5ce4a2:	de c3                	faddp  st(3),st
  5ce4a4:	d8 4a 10             	fmul   DWORD PTR [edx+0x10]
  5ce4a7:	de c1                	faddp  st(1),st
  5ce4a9:	eb 02                	jmp    0x5ce4ad
  5ce4ab:	dd d8                	fstp   st(0)
  5ce4ad:	83 c2 20             	add    edx,0x20
  5ce4b0:	4e                   	dec    esi
  5ce4b1:	75 b8                	jne    0x5ce46b
  5ce4b3:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  5ce4b7:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
  5ce4bb:	d8 0d f0 03 72 00    	fmul   DWORD PTR ds:0x7203f0
  5ce4c1:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  5ce4c5:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5ce4cb:	5e                   	pop    esi
  5ce4cc:	df e0                	fnstsw ax
  5ce4ce:	f6 c4 41             	test   ah,0x41
  5ce4d1:	75 04                	jne    0x5ce4d7
  5ce4d3:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
  5ce4d7:	d8 15 38 a4 64 00    	fcom   DWORD PTR ds:0x64a438
  5ce4dd:	df e0                	fnstsw ax
  5ce4df:	f6 c4 41             	test   ah,0x41
  5ce4e2:	75 6f                	jne    0x5ce553
  5ce4e4:	dd d8                	fstp   st(0)
  5ce4e6:	d9 05 38 a4 64 00    	fld    DWORD PTR ds:0x64a438
  5ce4ec:	eb 7a                	jmp    0x5ce568
  5ce4ee:	8b 35 20 08 72 00    	mov    esi,DWORD PTR ds:0x720820
  5ce4f4:	85 f6                	test   esi,esi
  5ce4f6:	7e 52                	jle    0x5ce54a
  5ce4f8:	ba 24 04 72 00       	mov    edx,0x720424
  5ce4fd:	d9 05 1c 04 72 00    	fld    DWORD PTR ds:0x72041c
  5ce503:	d8 4a 04             	fmul   DWORD PTR [edx+0x4]
  5ce506:	d9 05 14 04 72 00    	fld    DWORD PTR ds:0x720414
  5ce50c:	d8 4a fc             	fmul   DWORD PTR [edx-0x4]
  5ce50f:	de c1                	faddp  st(1),st
  5ce511:	d9 05 18 04 72 00    	fld    DWORD PTR ds:0x720418
  5ce517:	d8 0a                	fmul   DWORD PTR [edx]
  5ce519:	de c1                	faddp  st(1),st
  5ce51b:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  5ce521:	df e0                	fnstsw ax
  5ce523:	f6 c4 41             	test   ah,0x41
  5ce526:	75 15                	jne    0x5ce53d
  5ce528:	d9 c0                	fld    st(0)
  5ce52a:	d8 4a 08             	fmul   DWORD PTR [edx+0x8]
  5ce52d:	de c4                	faddp  st(4),st
  5ce52f:	d9 c0                	fld    st(0)
  5ce531:	d8 4a 0c             	fmul   DWORD PTR [edx+0xc]
  5ce534:	de c3                	faddp  st(3),st
  5ce536:	d8 4a 10             	fmul   DWORD PTR [edx+0x10]
  5ce539:	de c1                	faddp  st(1),st
  5ce53b:	eb 02                	jmp    0x5ce53f
  5ce53d:	dd d8                	fstp   st(0)
  5ce53f:	83 c2 20             	add    edx,0x20
  5ce542:	4e                   	dec    esi
  5ce543:	75 b8                	jne    0x5ce4fd
  5ce545:	e9 69 ff ff ff       	jmp    0x5ce4b3
  5ce54a:	dd d8                	fstp   st(0)
  5ce54c:	dd d8                	fstp   st(0)
  5ce54e:	e9 68 ff ff ff       	jmp    0x5ce4bb
  5ce553:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  5ce559:	df e0                	fnstsw ax
  5ce55b:	f6 c4 01             	test   ah,0x1
  5ce55e:	74 08                	je     0x5ce568
  5ce560:	dd d8                	fstp   st(0)
  5ce562:	d9 05 50 a4 64 00    	fld    DWORD PTR ds:0x64a450
  5ce568:	d9 59 14             	fstp   DWORD PTR [ecx+0x14]
  5ce56b:	d9 05 f4 03 72 00    	fld    DWORD PTR ds:0x7203f4
  5ce571:	d8 4c 24 00          	fmul   DWORD PTR [esp+0x0]
  5ce575:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  5ce579:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5ce57f:	df e0                	fnstsw ax
  5ce581:	f6 c4 41             	test   ah,0x41
  5ce584:	75 04                	jne    0x5ce58a
  5ce586:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
  5ce58a:	d8 15 38 a4 64 00    	fcom   DWORD PTR ds:0x64a438
  5ce590:	df e0                	fnstsw ax
  5ce592:	f6 c4 41             	test   ah,0x41
  5ce595:	75 0a                	jne    0x5ce5a1
  5ce597:	dd d8                	fstp   st(0)
  5ce599:	d9 05 38 a4 64 00    	fld    DWORD PTR ds:0x64a438
  5ce59f:	eb 15                	jmp    0x5ce5b6
  5ce5a1:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  5ce5a7:	df e0                	fnstsw ax
  5ce5a9:	f6 c4 01             	test   ah,0x1
  5ce5ac:	74 08                	je     0x5ce5b6
  5ce5ae:	dd d8                	fstp   st(0)
  5ce5b0:	d9 05 50 a4 64 00    	fld    DWORD PTR ds:0x64a450
  5ce5b6:	d9 59 18             	fstp   DWORD PTR [ecx+0x18]
  5ce5b9:	d9 05 f8 03 72 00    	fld    DWORD PTR ds:0x7203f8
  5ce5bf:	d8 4c 24 04          	fmul   DWORD PTR [esp+0x4]
  5ce5c3:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  5ce5c7:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5ce5cd:	df e0                	fnstsw ax
  5ce5cf:	f6 c4 41             	test   ah,0x41
  5ce5d2:	75 04                	jne    0x5ce5d8
  5ce5d4:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
  5ce5d8:	d8 15 38 a4 64 00    	fcom   DWORD PTR ds:0x64a438
  5ce5de:	df e0                	fnstsw ax
  5ce5e0:	f6 c4 41             	test   ah,0x41
  5ce5e3:	75 0f                	jne    0x5ce5f4
  5ce5e5:	dd d8                	fstp   st(0)
  5ce5e7:	c7 41 1c 00 00 7f 43 	mov    DWORD PTR [ecx+0x1c],0x437f0000
  5ce5ee:	83 c4 08             	add    esp,0x8
  5ce5f1:	c2 04 00             	ret    0x4
  5ce5f4:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  5ce5fa:	df e0                	fnstsw ax
  5ce5fc:	f6 c4 01             	test   ah,0x1
  5ce5ff:	74 0f                	je     0x5ce610
  5ce601:	dd d8                	fstp   st(0)
  5ce603:	c7 41 1c 00 00 00 00 	mov    DWORD PTR [ecx+0x1c],0x0
  5ce60a:	83 c4 08             	add    esp,0x8
  5ce60d:	c2 04 00             	ret    0x4
  5ce610:	d9 59 1c             	fstp   DWORD PTR [ecx+0x1c]
  5ce613:	83 c4 08             	add    esp,0x8
  5ce616:	c2 04 00             	ret    0x4
  5ce619:	90                   	nop
  5ce61a:	90                   	nop
  5ce61b:	90                   	nop
  5ce61c:	90                   	nop
  5ce61d:	90                   	nop
  5ce61e:	90                   	nop
  5ce61f:	90                   	nop
  5ce620:	81 ec 24 01 00 00    	sub    esp,0x124
  5ce626:	53                   	push   ebx
  5ce627:	8b 9c 24 34 01 00 00 	mov    ebx,DWORD PTR [esp+0x134]
  5ce62e:	55                   	push   ebp
  5ce62f:	56                   	push   esi
  5ce630:	57                   	push   edi
  5ce631:	8b fa                	mov    edi,edx
  5ce633:	8b e9                	mov    ebp,ecx
  5ce635:	8d 54 24 48          	lea    edx,[esp+0x48]
  5ce639:	8b cb                	mov    ecx,ebx
  5ce63b:	89 7c 24 2c          	mov    DWORD PTR [esp+0x2c],edi
  5ce63f:	89 6c 24 58          	mov    DWORD PTR [esp+0x58],ebp
  5ce643:	e8 b8 a9 ff ff       	call   0x5c9000
  5ce648:	8b 84 24 44 01 00 00 	mov    eax,DWORD PTR [esp+0x144]
  5ce64f:	85 c0                	test   eax,eax
  5ce651:	0f 84 a1 02 00 00    	je     0x5ce8f8
  5ce657:	8b c8                	mov    ecx,eax
  5ce659:	8b 11                	mov    edx,DWORD PTR [ecx]
  5ce65b:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
  5ce65f:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5ce662:	89 54 24 60          	mov    DWORD PTR [esp+0x60],edx
  5ce666:	8b d0                	mov    edx,eax
  5ce668:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5ce66b:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
  5ce66f:	8b 0a                	mov    ecx,DWORD PTR [edx]
  5ce671:	89 4c 24 68          	mov    DWORD PTR [esp+0x68],ecx
  5ce675:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  5ce678:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
  5ce67c:	8d 48 0c             	lea    ecx,[eax+0xc]
  5ce67f:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5ce682:	89 54 24 70          	mov    DWORD PTR [esp+0x70],edx
  5ce686:	8b 11                	mov    edx,DWORD PTR [ecx]
  5ce688:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
  5ce68c:	8b d0                	mov    edx,eax
  5ce68e:	8b 32                	mov    esi,DWORD PTR [edx]
  5ce690:	89 74 24 74          	mov    DWORD PTR [esp+0x74],esi
  5ce694:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  5ce697:	89 74 24 78          	mov    DWORD PTR [esp+0x78],esi
  5ce69b:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5ce69e:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
  5ce6a2:	8b 50 10             	mov    edx,DWORD PTR [eax+0x10]
  5ce6a5:	89 54 24 78          	mov    DWORD PTR [esp+0x78],edx
  5ce6a9:	8b d0                	mov    edx,eax
  5ce6ab:	8b 32                	mov    esi,DWORD PTR [edx]
  5ce6ad:	89 b4 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],esi
  5ce6b4:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  5ce6b7:	89 b4 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],esi
  5ce6be:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5ce6c1:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
  5ce6c8:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  5ce6cb:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
  5ce6d2:	8b d1                	mov    edx,ecx
  5ce6d4:	8b 32                	mov    esi,DWORD PTR [edx]
  5ce6d6:	89 b4 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],esi
  5ce6dd:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  5ce6e0:	89 b4 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],esi
  5ce6e7:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5ce6ea:	89 94 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],edx
  5ce6f1:	8b d1                	mov    edx,ecx
  5ce6f3:	8b 32                	mov    esi,DWORD PTR [edx]
  5ce6f5:	89 b4 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],esi
  5ce6fc:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  5ce6ff:	89 b4 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],esi
  5ce706:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5ce709:	89 94 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],edx
  5ce710:	8b 10                	mov    edx,DWORD PTR [eax]
  5ce712:	89 94 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],edx
  5ce719:	8b d1                	mov    edx,ecx
  5ce71b:	8b 32                	mov    esi,DWORD PTR [edx]
  5ce71d:	89 b4 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],esi
  5ce724:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  5ce727:	89 b4 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],esi
  5ce72e:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5ce731:	89 94 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],edx
  5ce738:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5ce73b:	89 94 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],edx
  5ce742:	8b 11                	mov    edx,DWORD PTR [ecx]
  5ce744:	89 94 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],edx
  5ce74b:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5ce74e:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5ce751:	89 94 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],edx
  5ce758:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  5ce75b:	89 8c 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],ecx
  5ce762:	8b cb                	mov    ecx,ebx
  5ce764:	89 94 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],edx
  5ce76b:	e8 d0 d6 fc ff       	call   0x59be40
  5ce770:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5ce774:	8b f8                	mov    edi,eax
  5ce776:	68 e1 66 b8 d1       	push   0xd1b866e1
  5ce77b:	68 e1 66 b8 d1       	push   0xd1b866e1
  5ce780:	68 e1 66 b8 d1       	push   0xd1b866e1
  5ce785:	e8 96 46 fe ff       	call   0x5b2e20
  5ce78a:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5ce78e:	68 e1 66 b8 51       	push   0x51b866e1
  5ce793:	68 e1 66 b8 51       	push   0x51b866e1
  5ce798:	68 e1 66 b8 51       	push   0x51b866e1
  5ce79d:	e8 7e 46 fe ff       	call   0x5b2e20
  5ce7a2:	8d 74 24 5c          	lea    esi,[esp+0x5c]
  5ce7a6:	bb 08 00 00 00       	mov    ebx,0x8
  5ce7ab:	56                   	push   esi
  5ce7ac:	8b d6                	mov    edx,esi
  5ce7ae:	8b cf                	mov    ecx,edi
  5ce7b0:	e8 bb 4c fe ff       	call   0x5b3470
  5ce7b5:	8d 44 24 20          	lea    eax,[esp+0x20]
  5ce7b9:	8b d6                	mov    edx,esi
  5ce7bb:	8b 8c 24 40 01 00 00 	mov    ecx,DWORD PTR [esp+0x140]
  5ce7c2:	50                   	push   eax
  5ce7c3:	e8 c8 aa ff ff       	call   0x5c9290
  5ce7c8:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  5ce7cc:	d8 5c 24 3c          	fcomp  DWORD PTR [esp+0x3c]
  5ce7d0:	df e0                	fnstsw ax
  5ce7d2:	f6 c4 41             	test   ah,0x41
  5ce7d5:	75 08                	jne    0x5ce7df
  5ce7d7:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  5ce7db:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
  5ce7df:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  5ce7e3:	d8 5c 24 30          	fcomp  DWORD PTR [esp+0x30]
  5ce7e7:	df e0                	fnstsw ax
  5ce7e9:	f6 c4 01             	test   ah,0x1
  5ce7ec:	74 08                	je     0x5ce7f6
  5ce7ee:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5ce7f2:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  5ce7f6:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  5ce7fa:	d8 5c 24 40          	fcomp  DWORD PTR [esp+0x40]
  5ce7fe:	df e0                	fnstsw ax
  5ce800:	f6 c4 41             	test   ah,0x41
  5ce803:	75 08                	jne    0x5ce80d
  5ce805:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5ce809:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  5ce80d:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  5ce811:	d8 5c 24 34          	fcomp  DWORD PTR [esp+0x34]
  5ce815:	df e0                	fnstsw ax
  5ce817:	f6 c4 01             	test   ah,0x1
  5ce81a:	74 08                	je     0x5ce824
  5ce81c:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  5ce820:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  5ce824:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  5ce828:	d8 5c 24 44          	fcomp  DWORD PTR [esp+0x44]
  5ce82c:	df e0                	fnstsw ax
  5ce82e:	f6 c4 41             	test   ah,0x41
  5ce831:	75 08                	jne    0x5ce83b
  5ce833:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  5ce837:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  5ce83b:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  5ce83f:	d8 5c 24 38          	fcomp  DWORD PTR [esp+0x38]
  5ce843:	df e0                	fnstsw ax
  5ce845:	f6 c4 01             	test   ah,0x1
  5ce848:	74 08                	je     0x5ce852
  5ce84a:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  5ce84e:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  5ce852:	83 c6 0c             	add    esi,0xc
  5ce855:	4b                   	dec    ebx
  5ce856:	0f 85 4f ff ff ff    	jne    0x5ce7ab
  5ce85c:	db 44 24 48          	fild   DWORD PTR [esp+0x48]
  5ce860:	d8 5c 24 3c          	fcomp  DWORD PTR [esp+0x3c]
  5ce864:	df e0                	fnstsw ax
  5ce866:	f6 c4 41             	test   ah,0x41
  5ce869:	0f 84 74 05 00 00    	je     0x5cede3
  5ce86f:	db 44 24 4c          	fild   DWORD PTR [esp+0x4c]
  5ce873:	d8 5c 24 30          	fcomp  DWORD PTR [esp+0x30]
  5ce877:	df e0                	fnstsw ax
  5ce879:	f6 c4 01             	test   ah,0x1
  5ce87c:	0f 85 61 05 00 00    	jne    0x5cede3
  5ce882:	db 44 24 50          	fild   DWORD PTR [esp+0x50]
  5ce886:	d8 5c 24 40          	fcomp  DWORD PTR [esp+0x40]
  5ce88a:	df e0                	fnstsw ax
  5ce88c:	f6 c4 41             	test   ah,0x41
  5ce88f:	0f 84 4e 05 00 00    	je     0x5cede3
  5ce895:	db 44 24 54          	fild   DWORD PTR [esp+0x54]
  5ce899:	d8 5c 24 34          	fcomp  DWORD PTR [esp+0x34]
  5ce89d:	df e0                	fnstsw ax
  5ce89f:	f6 c4 01             	test   ah,0x1
  5ce8a2:	0f 85 3b 05 00 00    	jne    0x5cede3
  5ce8a8:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  5ce8ac:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  5ce8b2:	df e0                	fnstsw ax
  5ce8b4:	f6 c4 01             	test   ah,0x1
  5ce8b7:	0f 85 26 05 00 00    	jne    0x5cede3
  5ce8bd:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5ce8c1:	8d 54 24 10          	lea    edx,[esp+0x10]
  5ce8c5:	51                   	push   ecx
  5ce8c6:	8b 8c 24 44 01 00 00 	mov    ecx,DWORD PTR [esp+0x144]
  5ce8cd:	e8 0e a7 ff ff       	call   0x5c8fe0
  5ce8d2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5ce8d6:	85 c0                	test   eax,eax
  5ce8d8:	74 13                	je     0x5ce8ed
  5ce8da:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  5ce8de:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
  5ce8e2:	df e0                	fnstsw ax
  5ce8e4:	f6 c4 41             	test   ah,0x41
  5ce8e7:	0f 84 f6 04 00 00    	je     0x5cede3
  5ce8ed:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  5ce8f1:	8b 9c 24 40 01 00 00 	mov    ebx,DWORD PTR [esp+0x140]
  5ce8f8:	8b 8c 24 38 01 00 00 	mov    ecx,DWORD PTR [esp+0x138]
  5ce8ff:	68 00 00 80 3f       	push   0x3f800000
  5ce904:	db 44 24 58          	fild   DWORD PTR [esp+0x58]
  5ce908:	51                   	push   ecx
  5ce909:	8b 81 98 36 03 00    	mov    eax,DWORD PTR [ecx+0x33698]
  5ce90f:	40                   	inc    eax
  5ce910:	d9 1c 24             	fstp   DWORD PTR [esp]
  5ce913:	db 44 24 58          	fild   DWORD PTR [esp+0x58]
  5ce917:	51                   	push   ecx
  5ce918:	89 81 98 36 03 00    	mov    DWORD PTR [ecx+0x33698],eax
  5ce91e:	d9 1c 24             	fstp   DWORD PTR [esp]
  5ce921:	db 44 24 58          	fild   DWORD PTR [esp+0x58]
  5ce925:	51                   	push   ecx
  5ce926:	d9 1c 24             	fstp   DWORD PTR [esp]
  5ce929:	db 44 24 58          	fild   DWORD PTR [esp+0x58]
  5ce92d:	51                   	push   ecx
  5ce92e:	d9 1c 24             	fstp   DWORD PTR [esp]
  5ce931:	e8 ca 1c 01 00       	call   0x5e0600
  5ce936:	8b cf                	mov    ecx,edi
  5ce938:	e8 13 18 00 00       	call   0x5d0150
  5ce93d:	8d 94 24 bc 00 00 00 	lea    edx,[esp+0xbc]
  5ce944:	8b cf                	mov    ecx,edi
  5ce946:	8b f0                	mov    esi,eax
  5ce948:	e8 13 18 00 00       	call   0x5d0160
  5ce94d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  5ce950:	8d 94 24 bc 00 00 00 	lea    edx,[esp+0xbc]
  5ce957:	53                   	push   ebx
  5ce958:	6a 00                	push   0x0
  5ce95a:	56                   	push   esi
  5ce95b:	e8 80 15 01 00       	call   0x5dfee0
  5ce960:	8b d8                	mov    ebx,eax
  5ce962:	85 db                	test   ebx,ebx
  5ce964:	75 2e                	jne    0x5ce994
  5ce966:	50                   	push   eax
  5ce967:	68 70 3f 6b 00       	push   0x6b3f70
  5ce96c:	68 e3 05 00 00       	push   0x5e3
  5ce971:	68 f4 a4 6a 00       	push   0x6aa4f4
  5ce976:	68 70 3f 6b 00       	push   0x6b3f70
  5ce97b:	6a 67                	push   0x67
  5ce97d:	e8 9e 08 00 00       	call   0x5cf220
  5ce982:	83 c4 18             	add    esp,0x18
  5ce985:	33 c0                	xor    eax,eax
  5ce987:	5f                   	pop    edi
  5ce988:	5e                   	pop    esi
  5ce989:	5d                   	pop    ebp
  5ce98a:	5b                   	pop    ebx
  5ce98b:	81 c4 24 01 00 00    	add    esp,0x124
  5ce991:	c2 10 00             	ret    0x10
  5ce994:	db 44 24 48          	fild   DWORD PTR [esp+0x48]
  5ce998:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5ce99c:	d9 43 1c             	fld    DWORD PTR [ebx+0x1c]
  5ce99f:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
  5ce9a3:	df e0                	fnstsw ax
  5ce9a5:	f6 c4 01             	test   ah,0x1
  5ce9a8:	0f 85 35 04 00 00    	jne    0x5cede3
  5ce9ae:	db 44 24 4c          	fild   DWORD PTR [esp+0x4c]
  5ce9b2:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  5ce9b6:	d9 43 28             	fld    DWORD PTR [ebx+0x28]
  5ce9b9:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  5ce9bd:	df e0                	fnstsw ax
  5ce9bf:	f6 c4 41             	test   ah,0x41
  5ce9c2:	0f 84 1b 04 00 00    	je     0x5cede3
  5ce9c8:	db 44 24 50          	fild   DWORD PTR [esp+0x50]
  5ce9cc:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  5ce9d0:	d9 43 20             	fld    DWORD PTR [ebx+0x20]
  5ce9d3:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
  5ce9d7:	df e0                	fnstsw ax
  5ce9d9:	f6 c4 01             	test   ah,0x1
  5ce9dc:	0f 85 01 04 00 00    	jne    0x5cede3
  5ce9e2:	db 44 24 54          	fild   DWORD PTR [esp+0x54]
  5ce9e6:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  5ce9ea:	d9 43 2c             	fld    DWORD PTR [ebx+0x2c]
  5ce9ed:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
  5ce9f1:	df e0                	fnstsw ax
  5ce9f3:	f6 c4 41             	test   ah,0x41
  5ce9f6:	0f 84 e7 03 00 00    	je     0x5cede3
  5ce9fc:	d9 43 24             	fld    DWORD PTR [ebx+0x24]
  5ce9ff:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  5cea05:	df e0                	fnstsw ax
  5cea07:	f6 c4 01             	test   ah,0x1
  5cea0a:	0f 85 d3 03 00 00    	jne    0x5cede3
  5cea10:	d9 43 1c             	fld    DWORD PTR [ebx+0x1c]
  5cea13:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  5cea17:	df e0                	fnstsw ax
  5cea19:	f6 c4 01             	test   ah,0x1
  5cea1c:	74 42                	je     0x5cea60
  5cea1e:	d9 43 28             	fld    DWORD PTR [ebx+0x28]
  5cea21:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
  5cea25:	df e0                	fnstsw ax
  5cea27:	f6 c4 41             	test   ah,0x41
  5cea2a:	75 34                	jne    0x5cea60
  5cea2c:	d9 43 20             	fld    DWORD PTR [ebx+0x20]
  5cea2f:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
  5cea33:	df e0                	fnstsw ax
  5cea35:	f6 c4 01             	test   ah,0x1
  5cea38:	74 26                	je     0x5cea60
  5cea3a:	d9 43 2c             	fld    DWORD PTR [ebx+0x2c]
  5cea3d:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
  5cea41:	df e0                	fnstsw ax
  5cea43:	f6 c4 41             	test   ah,0x41
  5cea46:	75 18                	jne    0x5cea60
  5cea48:	d9 43 30             	fld    DWORD PTR [ebx+0x30]
  5cea4b:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  5cea51:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
  5cea58:	00 
  5cea59:	df e0                	fnstsw ax
  5cea5b:	f6 c4 41             	test   ah,0x41
  5cea5e:	74 08                	je     0x5cea68
  5cea60:	c7 44 24 1c 01 00 00 	mov    DWORD PTR [esp+0x1c],0x1
  5cea67:	00 
  5cea68:	8b 55 30             	mov    edx,DWORD PTR [ebp+0x30]
  5cea6b:	8d 45 18             	lea    eax,[ebp+0x18]
  5cea6e:	89 15 e0 03 72 00    	mov    DWORD PTR ds:0x7203e0,edx
  5cea74:	8b 08                	mov    ecx,DWORD PTR [eax]
  5cea76:	89 0d e4 03 72 00    	mov    DWORD PTR ds:0x7203e4,ecx
  5cea7c:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5cea7f:	89 15 e8 03 72 00    	mov    DWORD PTR ds:0x7203e8,edx
  5cea85:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5cea88:	a3 ec 03 72 00       	mov    ds:0x7203ec,eax
  5cea8d:	8b 4d 24             	mov    ecx,DWORD PTR [ebp+0x24]
  5cea90:	89 0d fc 03 72 00    	mov    DWORD PTR ds:0x7203fc,ecx
  5cea96:	8b 55 28             	mov    edx,DWORD PTR [ebp+0x28]
  5cea99:	89 15 00 04 72 00    	mov    DWORD PTR ds:0x720400,edx
  5cea9f:	8b 45 2c             	mov    eax,DWORD PTR [ebp+0x2c]
  5ceaa2:	a3 04 04 72 00       	mov    ds:0x720404,eax
  5ceaa7:	8b 4d 44             	mov    ecx,DWORD PTR [ebp+0x44]
  5ceaaa:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  5ceaae:	89 0d 24 08 72 00    	mov    DWORD PTR ds:0x720824,ecx
  5ceab4:	52                   	push   edx
  5ceab5:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
  5ceab8:	8b cf                	mov    ecx,edi
  5ceaba:	e8 e1 0e 00 00       	call   0x5cf9a0
  5ceabf:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5ceac2:	85 c0                	test   eax,eax
  5ceac4:	0f 8e 05 01 00 00    	jle    0x5cebcf
  5ceaca:	8b 45 44             	mov    eax,DWORD PTR [ebp+0x44]
  5ceacd:	85 c0                	test   eax,eax
  5ceacf:	0f 84 d8 00 00 00    	je     0x5cebad
  5cead5:	8d 54 24 14          	lea    edx,[esp+0x14]
  5cead9:	8b ce                	mov    ecx,esi
  5ceadb:	e8 a0 1a 01 00       	call   0x5e0580
  5ceae0:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5ceae4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5ceae8:	33 f6                	xor    esi,esi
  5ceaea:	3b c6                	cmp    eax,esi
  5ceaec:	0f 8e e7 00 00 00    	jle    0x5cebd9
  5ceaf2:	39 05 e4 c5 6c 00    	cmp    DWORD PTR ds:0x6cc5e4,eax
  5ceaf8:	7d 5e                	jge    0x5ceb58
  5ceafa:	8b 15 e0 c5 6c 00    	mov    edx,DWORD PTR ds:0x6cc5e0
  5ceb00:	8b c8                	mov    ecx,eax
  5ceb02:	c1 e1 08             	shl    ecx,0x8
  5ceb05:	03 c8                	add    ecx,eax
  5ceb07:	c1 e1 02             	shl    ecx,0x2
  5ceb0a:	51                   	push   ecx
  5ceb0b:	52                   	push   edx
  5ceb0c:	e8 ff 08 00 00       	call   0x5cf410
  5ceb11:	83 c4 08             	add    esp,0x8
  5ceb14:	3b c6                	cmp    eax,esi
  5ceb16:	75 32                	jne    0x5ceb4a
  5ceb18:	68 24 a5 6a 00       	push   0x6aa524
  5ceb1d:	68 70 3f 6b 00       	push   0x6b3f70
  5ceb22:	68 2e 06 00 00       	push   0x62e
  5ceb27:	68 f4 a4 6a 00       	push   0x6aa4f4
  5ceb2c:	68 70 3f 6b 00       	push   0x6b3f70
  5ceb31:	6a 67                	push   0x67
  5ceb33:	e8 e8 06 00 00       	call   0x5cf220
  5ceb38:	83 c4 18             	add    esp,0x18
  5ceb3b:	33 c0                	xor    eax,eax
  5ceb3d:	5f                   	pop    edi
  5ceb3e:	5e                   	pop    esi
  5ceb3f:	5d                   	pop    ebp
  5ceb40:	5b                   	pop    ebx
  5ceb41:	81 c4 24 01 00 00    	add    esp,0x124
  5ceb47:	c2 10 00             	ret    0x10
  5ceb4a:	a3 e0 c5 6c 00       	mov    ds:0x6cc5e0,eax
  5ceb4f:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5ceb53:	a3 e4 c5 6c 00       	mov    ds:0x6cc5e4,eax
  5ceb58:	3b c6                	cmp    eax,esi
  5ceb5a:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  5ceb5e:	7e 79                	jle    0x5cebd9
  5ceb60:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5ceb64:	8d 78 24             	lea    edi,[eax+0x24]
  5ceb67:	8b 0d e0 c5 6c 00    	mov    ecx,DWORD PTR ds:0x6cc5e0
  5ceb6d:	57                   	push   edi
  5ceb6e:	8d 14 0e             	lea    edx,[esi+ecx*1]
  5ceb71:	8b cd                	mov    ecx,ebp
  5ceb73:	52                   	push   edx
  5ceb74:	8b 94 24 44 01 00 00 	mov    edx,DWORD PTR [esp+0x144]
  5ceb7b:	e8 70 f4 ff ff       	call   0x5cdff0
  5ceb80:	8b 0d e0 c5 6c 00    	mov    ecx,DWORD PTR ds:0x6cc5e0
  5ceb86:	83 c7 30             	add    edi,0x30
  5ceb89:	89 84 0e 00 04 00 00 	mov    DWORD PTR [esi+ecx*1+0x400],eax
  5ceb90:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5ceb94:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5ceb98:	40                   	inc    eax
  5ceb99:	81 c6 04 04 00 00    	add    esi,0x404
  5ceb9f:	3b c1                	cmp    eax,ecx
  5ceba1:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5ceba5:	7c c0                	jl     0x5ceb67
  5ceba7:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  5cebab:	eb 2c                	jmp    0x5cebd9
  5cebad:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  5cebb4:	8b cd                	mov    ecx,ebp
  5cebb6:	52                   	push   edx
  5cebb7:	8b 94 24 40 01 00 00 	mov    edx,DWORD PTR [esp+0x140]
  5cebbe:	68 20 04 72 00       	push   0x720420
  5cebc3:	e8 28 f4 ff ff       	call   0x5cdff0
  5cebc8:	a3 20 08 72 00       	mov    ds:0x720820,eax
  5cebcd:	eb 0a                	jmp    0x5cebd9
  5cebcf:	c7 05 20 08 72 00 00 	mov    DWORD PTR ds:0x720820,0x0
  5cebd6:	00 00 00 
  5cebd9:	8b 94 24 3c 01 00 00 	mov    edx,DWORD PTR [esp+0x13c]
  5cebe0:	8d 84 24 80 00 00 00 	lea    eax,[esp+0x80]
  5cebe7:	50                   	push   eax
  5cebe8:	68 08 04 72 00       	push   0x720408
  5cebed:	8b cd                	mov    ecx,ebp
  5cebef:	e8 9c f5 ff ff       	call   0x5ce190
  5cebf4:	0f bf 43 10          	movsx  eax,WORD PTR [ebx+0x10]
  5cebf8:	d9 45 58             	fld    DWORD PTR [ebp+0x58]
  5cebfb:	d9 94 24 30 01 00 00 	fst    DWORD PTR [esp+0x130]
  5cec02:	d9 94 24 0c 01 00 00 	fst    DWORD PTR [esp+0x10c]
  5cec09:	8b 73 18             	mov    esi,DWORD PTR [ebx+0x18]
  5cec0c:	d9 9c 24 e8 00 00 00 	fstp   DWORD PTR [esp+0xe8]
  5cec13:	85 c0                	test   eax,eax
  5cec15:	0f 8e 92 01 00 00    	jle    0x5cedad
  5cec1b:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5cec1f:	66 8b 7e 02          	mov    di,WORD PTR [esi+0x2]
  5cec23:	83 c6 02             	add    esi,0x2
  5cec26:	83 c6 02             	add    esi,0x2
  5cec29:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
  5cec2c:	0f bf 0e             	movsx  ecx,WORD PTR [esi]
  5cec2f:	0f bf 56 04          	movsx  edx,WORD PTR [esi+0x4]
  5cec33:	8d 0c 49             	lea    ecx,[ecx+ecx*2]
  5cec36:	8d 14 52             	lea    edx,[edx+edx*2]
  5cec39:	d9 04 c8             	fld    DWORD PTR [eax+ecx*8]
  5cec3c:	d9 44 c8 04          	fld    DWORD PTR [eax+ecx*8+0x4]
  5cec40:	8d 0c c8             	lea    ecx,[eax+ecx*8]
  5cec43:	8d 14 d0             	lea    edx,[eax+edx*8]
  5cec46:	8d 4e 04             	lea    ecx,[esi+0x4]
  5cec49:	d9 02                	fld    DWORD PTR [edx]
  5cec4b:	d8 e2                	fsub   st,st(2)
  5cec4d:	d9 42 04             	fld    DWORD PTR [edx+0x4]
  5cec50:	0f bf 51 04          	movsx  edx,WORD PTR [ecx+0x4]
  5cec54:	d8 e2                	fsub   st,st(2)
  5cec56:	83 c1 04             	add    ecx,0x4
  5cec59:	8d 14 52             	lea    edx,[edx+edx*2]
  5cec5c:	d9 44 d0 04          	fld    DWORD PTR [eax+edx*8+0x4]
  5cec60:	8d 04 d0             	lea    eax,[eax+edx*8]
  5cec63:	d8 e3                	fsub   st,st(3)
  5cec65:	d8 ca                	fmul   st,st(2)
  5cec67:	d9 00                	fld    DWORD PTR [eax]
  5cec69:	d8 e5                	fsub   st,st(5)
  5cec6b:	d8 ca                	fmul   st,st(2)
  5cec6d:	de e9                	fsubp  st(1),st
  5cec6f:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5cec75:	dd d8                	fstp   st(0)
  5cec77:	dd d8                	fstp   st(0)
  5cec79:	df e0                	fnstsw ax
  5cec7b:	dd d8                	fstp   st(0)
  5cec7d:	f6 c4 41             	test   ah,0x41
  5cec80:	dd d8                	fstp   st(0)
  5cec82:	75 08                	jne    0x5cec8c
  5cec84:	8d 71 04             	lea    esi,[ecx+0x4]
  5cec87:	e9 0e 01 00 00       	jmp    0x5ced9a
  5cec8c:	66 83 ff ff          	cmp    di,0xffff
  5cec90:	74 37                	je     0x5cecc9
  5cec92:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
  5cec95:	0f bf c7             	movsx  eax,di
  5cec98:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
  5cec9f:	2b c8                	sub    ecx,eax
  5ceca1:	8d 3c 8a             	lea    edi,[edx+ecx*4]
  5ceca4:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  5ceca8:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
  5cecab:	e8 10 19 01 00       	call   0x5e05c0
  5cecb0:	8b 07                	mov    eax,DWORD PTR [edi]
  5cecb2:	a3 f0 03 72 00       	mov    ds:0x7203f0,eax
  5cecb7:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
  5cecba:	89 0d f4 03 72 00    	mov    DWORD PTR ds:0x7203f4,ecx
  5cecc0:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
  5cecc3:	89 15 f8 03 72 00    	mov    DWORD PTR ds:0x7203f8,edx
  5cecc9:	8d bc 24 d0 00 00 00 	lea    edi,[esp+0xd0]
  5cecd0:	c7 44 24 10 03 00 00 	mov    DWORD PTR [esp+0x10],0x3
  5cecd7:	00 
  5cecd8:	0f bf 06             	movsx  eax,WORD PTR [esi]
  5cecdb:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  5cecde:	83 c6 02             	add    esi,0x2
  5cece1:	8d 04 40             	lea    eax,[eax+eax*2]
  5cece4:	8b 6b 0c             	mov    ebp,DWORD PTR [ebx+0xc]
  5cece7:	83 c6 02             	add    esi,0x2
  5cecea:	8b 14 c1             	mov    edx,DWORD PTR [ecx+eax*8]
  5ceced:	8d 04 c1             	lea    eax,[ecx+eax*8]
  5cecf0:	8d 4f f8             	lea    ecx,[edi-0x8]
  5cecf3:	89 11                	mov    DWORD PTR [ecx],edx
  5cecf5:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5cecf8:	89 57 fc             	mov    DWORD PTR [edi-0x4],edx
  5cecfb:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  5cecfe:	89 17                	mov    DWORD PTR [edi],edx
  5ced00:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
  5ced03:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
  5ced06:	8b 50 10             	mov    edx,DWORD PTR [eax+0x10]
  5ced09:	89 57 08             	mov    DWORD PTR [edi+0x8],edx
  5ced0c:	0f bf 56 fe          	movsx  edx,WORD PTR [esi-0x2]
  5ced10:	8d 14 52             	lea    edx,[edx+edx*2]
  5ced13:	8d 54 95 00          	lea    edx,[ebp+edx*4+0x0]
  5ced17:	8b 2a                	mov    ebp,DWORD PTR [edx]
  5ced19:	89 2d 14 04 72 00    	mov    DWORD PTR ds:0x720414,ebp
  5ced1f:	8b 6a 04             	mov    ebp,DWORD PTR [edx+0x4]
  5ced22:	89 2d 18 04 72 00    	mov    DWORD PTR ds:0x720418,ebp
  5ced28:	8b 6c 24 58          	mov    ebp,DWORD PTR [esp+0x58]
  5ced2c:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5ced2f:	89 15 1c 04 72 00    	mov    DWORD PTR ds:0x72041c,edx
  5ced35:	8b 55 5c             	mov    edx,DWORD PTR [ebp+0x5c]
  5ced38:	52                   	push   edx
  5ced39:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  5ced3c:	e8 6f f6 ff ff       	call   0x5ce3b0
  5ced41:	83 c7 24             	add    edi,0x24
  5ced44:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5ced48:	48                   	dec    eax
  5ced49:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5ced4d:	75 89                	jne    0x5cecd8
  5ced4f:	8b bc 24 38 01 00 00 	mov    edi,DWORD PTR [esp+0x138]
  5ced56:	6a 02                	push   0x2
  5ced58:	ff 87 9c 36 03 00    	inc    DWORD PTR [edi+0x3369c]
  5ced5e:	e8 bd 90 fe ff       	call   0x5b7e20
  5ced63:	83 c4 04             	add    esp,0x4
  5ced66:	85 c0                	test   eax,eax
  5ced68:	74 30                	je     0x5ced9a
  5ced6a:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5ced6e:	85 c0                	test   eax,eax
  5ced70:	74 0e                	je     0x5ced80
  5ced72:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  5ced79:	e8 e2 18 01 00       	call   0x5e0660
  5ced7e:	eb 1a                	jmp    0x5ced9a
  5ced80:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5ced84:	6a 00                	push   0x0
  5ced86:	8d 94 24 cc 00 00 00 	lea    edx,[esp+0xcc]
  5ced8d:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  5ced90:	51                   	push   ecx
  5ced91:	6a 03                	push   0x3
  5ced93:	8b cf                	mov    ecx,edi
  5ced95:	e8 c6 cc fe ff       	call   0x5bba60
  5ced9a:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5ced9e:	48                   	dec    eax
  5ced9f:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5ceda3:	0f 85 76 fe ff ff    	jne    0x5cec1f
  5ceda9:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  5cedad:	6a 40                	push   0x40
  5cedaf:	e8 6c 90 fe ff       	call   0x5b7e20
  5cedb4:	83 c4 04             	add    esp,0x4
  5cedb7:	85 c0                	test   eax,eax
  5cedb9:	74 28                	je     0x5cede3
  5cedbb:	8b 45 48             	mov    eax,DWORD PTR [ebp+0x48]
  5cedbe:	85 c0                	test   eax,eax
  5cedc0:	74 21                	je     0x5cede3
  5cedc2:	8b 94 24 40 01 00 00 	mov    edx,DWORD PTR [esp+0x140]
  5cedc9:	8b 84 24 3c 01 00 00 	mov    eax,DWORD PTR [esp+0x13c]
  5cedd0:	8b 8c 24 38 01 00 00 	mov    ecx,DWORD PTR [esp+0x138]
  5cedd7:	52                   	push   edx
  5cedd8:	50                   	push   eax
  5cedd9:	51                   	push   ecx
  5cedda:	8b d7                	mov    edx,edi
  5ceddc:	8b cd                	mov    ecx,ebp
  5cedde:	e8 1d 00 00 00       	call   0x5cee00
  5cede3:	5f                   	pop    edi
  5cede4:	5e                   	pop    esi
  5cede5:	5d                   	pop    ebp
  5cede6:	b8 01 00 00 00       	mov    eax,0x1
  5cedeb:	5b                   	pop    ebx
  5cedec:	81 c4 24 01 00 00    	add    esp,0x124
  5cedf2:	c2 10 00             	ret    0x10
  5cedf5:	90                   	nop
  5cedf6:	90                   	nop
  5cedf7:	90                   	nop
  5cedf8:	90                   	nop
  5cedf9:	90                   	nop
  5cedfa:	90                   	nop
  5cedfb:	90                   	nop
  5cedfc:	90                   	nop
  5cedfd:	90                   	nop
  5cedfe:	90                   	nop
  5cedff:	90                   	nop
  5cee00:	81 ec 4c 01 00 00    	sub    esp,0x14c
  5cee06:	53                   	push   ebx
  5cee07:	8b d9                	mov    ebx,ecx
  5cee09:	55                   	push   ebp
  5cee0a:	56                   	push   esi
  5cee0b:	8d 8c 24 00 01 00 00 	lea    ecx,[esp+0x100]
  5cee12:	57                   	push   edi
  5cee13:	8b c2                	mov    eax,edx
  5cee15:	51                   	push   ecx
  5cee16:	8b 53 54             	mov    edx,DWORD PTR [ebx+0x54]
  5cee19:	8b c8                	mov    ecx,eax
  5cee1b:	e8 80 0b 00 00       	call   0x5cf9a0
  5cee20:	d9 84 24 2c 01 00 00 	fld    DWORD PTR [esp+0x12c]
  5cee27:	8b 94 24 30 01 00 00 	mov    edx,DWORD PTR [esp+0x130]
  5cee2e:	8b 84 24 28 01 00 00 	mov    eax,DWORD PTR [esp+0x128]
  5cee35:	8b 8c 24 2c 01 00 00 	mov    ecx,DWORD PTR [esp+0x12c]
  5cee3c:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  5cee40:	d8 25 5c 09 65 00    	fsub   DWORD PTR ds:0x65095c
  5cee46:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  5cee4a:	6a 00                	push   0x0
  5cee4c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5cee50:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  5cee54:	6a 00                	push   0x0
  5cee56:	8d 54 24 30          	lea    edx,[esp+0x30]
  5cee5a:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  5cee5e:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  5cee62:	6a 00                	push   0x0
  5cee64:	8d 84 24 50 01 00 00 	lea    eax,[esp+0x150]
  5cee6b:	52                   	push   edx
  5cee6c:	8d 8c 24 50 01 00 00 	lea    ecx,[esp+0x150]
  5cee73:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  5cee77:	50                   	push   eax
  5cee78:	8d 94 24 5c 01 00 00 	lea    edx,[esp+0x15c]
  5cee7f:	51                   	push   ecx
  5cee80:	8d 44 24 44          	lea    eax,[esp+0x44]
  5cee84:	52                   	push   edx
  5cee85:	50                   	push   eax
  5cee86:	8b 84 24 84 01 00 00 	mov    eax,DWORD PTR [esp+0x184]
  5cee8d:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5cee91:	6a 02                	push   0x2
  5cee93:	8d 54 24 34          	lea    edx,[esp+0x34]
  5cee97:	51                   	push   ecx
  5cee98:	52                   	push   edx
  5cee99:	50                   	push   eax
  5cee9a:	e8 91 b1 ff ff       	call   0x5ca030
  5cee9f:	d9 44 24 60          	fld    DWORD PTR [esp+0x60]
  5ceea3:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  5ceea9:	83 c4 30             	add    esp,0x30
  5ceeac:	8d 8c 24 34 01 00 00 	lea    ecx,[esp+0x134]
  5ceeb3:	8d 94 24 28 01 00 00 	lea    edx,[esp+0x128]
  5ceeba:	c7 44 24 68 00 00 00 	mov    DWORD PTR [esp+0x68],0x0
  5ceec1:	00 
  5ceec2:	51                   	push   ecx
  5ceec3:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5ceec7:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  5ceecb:	c7 44 24 70 00 00 00 	mov    DWORD PTR [esp+0x70],0x0
  5ceed2:	00 
  5ceed3:	c7 44 24 74 00 00 00 	mov    DWORD PTR [esp+0x74],0x0
  5ceeda:	00 
  5ceedb:	e8 00 41 fe ff       	call   0x5b2fe0
  5ceee0:	8d 8c 24 34 01 00 00 	lea    ecx,[esp+0x134]
  5ceee7:	e8 34 40 fe ff       	call   0x5b2f20
  5ceeec:	8d 54 24 10          	lea    edx,[esp+0x10]
  5ceef0:	8d 8c 24 48 01 00 00 	lea    ecx,[esp+0x148]
  5ceef7:	52                   	push   edx
  5ceef8:	8d 94 24 38 01 00 00 	lea    edx,[esp+0x138]
  5ceeff:	dd d8                	fstp   st(0)
  5cef01:	e8 5a 3f fe ff       	call   0x5b2e60
  5cef06:	8d 54 24 68          	lea    edx,[esp+0x68]
  5cef0a:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5cef0e:	68 6f 12 83 3a       	push   0x3a83126f
  5cef13:	e8 a8 3f fe ff       	call   0x5b2ec0
  5cef18:	85 c0                	test   eax,eax
  5cef1a:	74 10                	je     0x5cef2c
  5cef1c:	8d 54 24 10          	lea    edx,[esp+0x10]
  5cef20:	8d 8c 24 04 01 00 00 	lea    ecx,[esp+0x104]
  5cef27:	e8 04 47 fe ff       	call   0x5b3630
  5cef2c:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  5cef30:	8d 94 24 48 01 00 00 	lea    edx,[esp+0x148]
  5cef37:	50                   	push   eax
  5cef38:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5cef3c:	e8 1f 3f fe ff       	call   0x5b2e60
  5cef41:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5cef45:	e8 d6 3f fe ff       	call   0x5b2f20
  5cef4a:	dd d8                	fstp   st(0)
  5cef4c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5cef50:	e8 cb 3f fe ff       	call   0x5b2f20
  5cef55:	8b 4b 4c             	mov    ecx,DWORD PTR [ebx+0x4c]
  5cef58:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  5cef5c:	51                   	push   ecx
  5cef5d:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5cef61:	dd d8                	fstp   st(0)
  5cef63:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x0
  5cef6a:	00 00 00 00 
  5cef6e:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x0
  5cef75:	00 00 00 00 
  5cef79:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x0
  5cef80:	00 00 00 00 
  5cef84:	c7 84 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],0x0
  5cef8b:	00 00 00 00 
  5cef8f:	c7 84 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],0x0
  5cef96:	00 00 00 00 
  5cef9a:	c7 84 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],0x0
  5cefa1:	00 00 00 00 
  5cefa5:	c7 84 24 d8 00 00 00 	mov    DWORD PTR [esp+0xd8],0x0
  5cefac:	00 00 00 00 
  5cefb0:	c7 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],0x0
  5cefb7:	00 00 00 00 
  5cefbb:	c7 84 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],0x0
  5cefc2:	00 00 00 00 
  5cefc6:	c7 84 24 fc 00 00 00 	mov    DWORD PTR [esp+0xfc],0x0
  5cefcd:	00 00 00 00 
  5cefd1:	c7 84 24 00 01 00 00 	mov    DWORD PTR [esp+0x100],0x0
  5cefd8:	00 00 00 00 
  5cefdc:	c7 84 24 f8 00 00 00 	mov    DWORD PTR [esp+0xf8],0x0
  5cefe3:	00 00 00 00 
  5cefe7:	e8 b4 3f fe ff       	call   0x5b2fa0
  5cefec:	8b 43 4c             	mov    eax,DWORD PTR [ebx+0x4c]
  5cefef:	8d 54 24 10          	lea    edx,[esp+0x10]
  5ceff3:	50                   	push   eax
  5ceff4:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5ceff8:	e8 a3 3f fe ff       	call   0x5b2fa0
  5ceffd:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  5cf001:	d8 84 24 28 01 00 00 	fadd   DWORD PTR [esp+0x128]
  5cf008:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  5cf00c:	c7 84 24 00 01 00 00 	mov    DWORD PTR [esp+0x100],0x43200000
  5cf013:	00 00 20 43 
  5cf017:	8b d1                	mov    edx,ecx
  5cf019:	8b c1                	mov    eax,ecx
  5cf01b:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  5cf01f:	c7 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],0x43200000
  5cf026:	00 00 20 43 
  5cf02a:	c7 84 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],0x43200000
  5cf031:	00 00 20 43 
  5cf035:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x43200000
  5cf03c:	00 00 20 43 
  5cf040:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x0
  5cf047:	00 00 00 00 
  5cf04b:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0x0
  5cf052:	00 00 00 00 
  5cf056:	c7 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],0x3f800000
  5cf05d:	00 00 80 3f 
  5cf061:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  5cf065:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5cf069:	d8 84 24 30 01 00 00 	fadd   DWORD PTR [esp+0x130]
  5cf070:	c7 84 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],0x0
  5cf077:	00 00 00 00 
  5cf07b:	c7 84 24 c8 00 00 00 	mov    DWORD PTR [esp+0xc8],0x3f800000
  5cf082:	00 00 80 3f 
  5cf086:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0x3f800000
  5cf08d:	00 00 80 3f 
  5cf091:	c7 84 24 ec 00 00 00 	mov    DWORD PTR [esp+0xec],0x0
  5cf098:	00 00 00 00 
  5cf09c:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
  5cf0a0:	c7 84 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],0x3f800000
  5cf0a7:	00 00 80 3f 
  5cf0ab:	89 4c 24 60          	mov    DWORD PTR [esp+0x60],ecx
  5cf0af:	89 54 24 54          	mov    DWORD PTR [esp+0x54],edx
  5cf0b3:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  5cf0b7:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
  5cf0bb:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
  5cf0bf:	d9 84 24 28 01 00 00 	fld    DWORD PTR [esp+0x128]
  5cf0c6:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
  5cf0ca:	d9 c0                	fld    st(0)
  5cf0cc:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  5cf0d0:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
  5cf0d4:	d9 84 24 30 01 00 00 	fld    DWORD PTR [esp+0x130]
  5cf0db:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  5cf0df:	d9 54 24 28          	fst    DWORD PTR [esp+0x28]
  5cf0e3:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
  5cf0e7:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
  5cf0eb:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  5cf0ef:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
  5cf0f3:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  5cf0f7:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
  5cf0fb:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
  5cf0ff:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  5cf103:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  5cf107:	d8 84 24 28 01 00 00 	fadd   DWORD PTR [esp+0x128]
  5cf10e:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
  5cf112:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  5cf116:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  5cf11a:	d8 84 24 30 01 00 00 	fadd   DWORD PTR [esp+0x130]
  5cf121:	8b bc 24 68 01 00 00 	mov    edi,DWORD PTR [esp+0x168]
  5cf128:	8d 74 24 38          	lea    esi,[esp+0x38]
  5cf12c:	bd 04 00 00 00       	mov    ebp,0x4
  5cf131:	d9 5c 24 64          	fstp   DWORD PTR [esp+0x64]
  5cf135:	56                   	push   esi
  5cf136:	8b d6                	mov    edx,esi
  5cf138:	8b cf                	mov    ecx,edi
  5cf13a:	e8 d1 a2 ff ff       	call   0x5c9410
  5cf13f:	8b d6                	mov    edx,esi
  5cf141:	8b cf                	mov    ecx,edi
  5cf143:	56                   	push   esi
  5cf144:	e8 47 a1 ff ff       	call   0x5c9290
  5cf149:	83 c6 0c             	add    esi,0xc
  5cf14c:	4d                   	dec    ebp
  5cf14d:	75 e6                	jne    0x5cf135
  5cf14f:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  5cf153:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
  5cf157:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  5cf15b:	89 4c 24 7c          	mov    DWORD PTR [esp+0x7c],ecx
  5cf15f:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  5cf163:	89 54 24 74          	mov    DWORD PTR [esp+0x74],edx
  5cf167:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  5cf16b:	89 44 24 78          	mov    DWORD PTR [esp+0x78],eax
  5cf16f:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  5cf173:	89 8c 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],ecx
  5cf17a:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  5cf17e:	89 94 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],edx
  5cf185:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
  5cf189:	89 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],eax
  5cf190:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  5cf194:	89 8c 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],ecx
  5cf19b:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  5cf19f:	89 94 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],edx
  5cf1a6:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  5cf1aa:	89 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],eax
  5cf1b1:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  5cf1b5:	89 8c 24 e8 00 00 00 	mov    DWORD PTR [esp+0xe8],ecx
  5cf1bc:	8b 4b 50             	mov    ecx,DWORD PTR [ebx+0x50]
  5cf1bf:	89 94 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],edx
  5cf1c6:	89 84 24 e4 00 00 00 	mov    DWORD PTR [esp+0xe4],eax
  5cf1cd:	e8 ee 13 01 00       	call   0x5e05c0
  5cf1d2:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  5cf1d6:	e8 85 14 01 00       	call   0x5e0660
  5cf1db:	b9 09 00 00 00       	mov    ecx,0x9
  5cf1e0:	8d b4 24 bc 00 00 00 	lea    esi,[esp+0xbc]
  5cf1e7:	8d bc 24 98 00 00 00 	lea    edi,[esp+0x98]
  5cf1ee:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cf1f0:	b9 09 00 00 00       	mov    ecx,0x9
  5cf1f5:	8d b4 24 e0 00 00 00 	lea    esi,[esp+0xe0]
  5cf1fc:	8d bc 24 bc 00 00 00 	lea    edi,[esp+0xbc]
  5cf203:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cf205:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  5cf209:	e8 52 14 01 00       	call   0x5e0660
  5cf20e:	5f                   	pop    edi
  5cf20f:	5e                   	pop    esi
  5cf210:	5d                   	pop    ebp
  5cf211:	5b                   	pop    ebx
  5cf212:	81 c4 4c 01 00 00    	add    esp,0x14c
  5cf218:	c2 0c 00             	ret    0xc
  5cf21b:	90                   	nop
  5cf21c:	90                   	nop
  5cf21d:	90                   	nop
  5cf21e:	90                   	nop
  5cf21f:	90                   	nop
  5cf220:	a1 60 a5 6a 00       	mov    eax,ds:0x6aa560
  5cf225:	83 ec 14             	sub    esp,0x14
  5cf228:	83 f8 1e             	cmp    eax,0x1e
  5cf22b:	7c 31                	jl     0x5cf25e
  5cf22d:	a1 64 a5 6a 00       	mov    eax,ds:0x6aa564
  5cf232:	8b c8                	mov    ecx,eax
  5cf234:	c1 e1 05             	shl    ecx,0x5
  5cf237:	03 c8                	add    ecx,eax
  5cf239:	8d 14 cd f8 fe ff ff 	lea    edx,[ecx*8-0x108]
  5cf240:	52                   	push   edx
  5cf241:	68 70 a6 6a 00       	push   0x6aa670
  5cf246:	68 68 a5 6a 00       	push   0x6aa568
  5cf24b:	e8 00 b9 03 00       	call   0x60ab50
  5cf250:	a1 64 a5 6a 00       	mov    eax,ds:0x6aa564
  5cf255:	83 c4 0c             	add    esp,0xc
  5cf258:	48                   	dec    eax
  5cf259:	a3 60 a5 6a 00       	mov    ds:0x6aa560,eax
  5cf25e:	8b c8                	mov    ecx,eax
  5cf260:	56                   	push   esi
  5cf261:	c1 e1 05             	shl    ecx,0x5
  5cf264:	03 c8                	add    ecx,eax
  5cf266:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  5cf26a:	85 c0                	test   eax,eax
  5cf26c:	8d 34 cd 6c a5 6a 00 	lea    esi,[ecx*8+0x6aa56c]
  5cf273:	74 0f                	je     0x5cf284
  5cf275:	68 80 00 00 00       	push   0x80
  5cf27a:	50                   	push   eax
  5cf27b:	56                   	push   esi
  5cf27c:	e8 6f ed 03 00       	call   0x60dff0
  5cf281:	83 c4 0c             	add    esp,0xc
  5cf284:	57                   	push   edi
  5cf285:	68 80 00 00 00       	push   0x80
  5cf28a:	68 60 34 69 00       	push   0x693460
  5cf28f:	56                   	push   esi
  5cf290:	e8 db ee 03 00       	call   0x60e170
  5cf295:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
  5cf299:	83 c4 0c             	add    esp,0xc
  5cf29c:	85 ff                	test   edi,edi
  5cf29e:	74 33                	je     0x5cf2d3
  5cf2a0:	6a 5c                	push   0x5c
  5cf2a2:	57                   	push   edi
  5cf2a3:	e8 c8 e5 03 00       	call   0x60d870
  5cf2a8:	83 c4 08             	add    esp,0x8
  5cf2ab:	85 c0                	test   eax,eax
  5cf2ad:	75 04                	jne    0x5cf2b3
  5cf2af:	8b c7                	mov    eax,edi
  5cf2b1:	eb 01                	jmp    0x5cf2b4
  5cf2b3:	40                   	inc    eax
  5cf2b4:	68 80 00 00 00       	push   0x80
  5cf2b9:	50                   	push   eax
  5cf2ba:	56                   	push   esi
  5cf2bb:	e8 b0 ee 03 00       	call   0x60e170
  5cf2c0:	68 80 00 00 00       	push   0x80
  5cf2c5:	68 60 34 69 00       	push   0x693460
  5cf2ca:	56                   	push   esi
  5cf2cb:	e8 a0 ee 03 00       	call   0x60e170
  5cf2d0:	83 c4 18             	add    esp,0x18
  5cf2d3:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  5cf2d7:	8d 54 24 08          	lea    edx,[esp+0x8]
  5cf2db:	6a 0a                	push   0xa
  5cf2dd:	52                   	push   edx
  5cf2de:	50                   	push   eax
  5cf2df:	e8 ba e9 04 00       	call   0x61dc9e
  5cf2e4:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5cf2e8:	68 80 00 00 00       	push   0x80
  5cf2ed:	51                   	push   ecx
  5cf2ee:	56                   	push   esi
  5cf2ef:	e8 7c ee 03 00       	call   0x60e170
  5cf2f4:	8b 7c 24 48          	mov    edi,DWORD PTR [esp+0x48]
  5cf2f8:	83 c4 18             	add    esp,0x18
  5cf2fb:	85 ff                	test   edi,edi
  5cf2fd:	74 24                	je     0x5cf323
  5cf2ff:	80 3f 00             	cmp    BYTE PTR [edi],0x0
  5cf302:	74 1f                	je     0x5cf323
  5cf304:	68 80 00 00 00       	push   0x80
  5cf309:	68 60 34 69 00       	push   0x693460
  5cf30e:	56                   	push   esi
  5cf30f:	e8 5c ee 03 00       	call   0x60e170
  5cf314:	68 80 00 00 00       	push   0x80
  5cf319:	57                   	push   edi
  5cf31a:	56                   	push   esi
  5cf31b:	e8 50 ee 03 00       	call   0x60e170
  5cf320:	83 c4 18             	add    esp,0x18
  5cf323:	8b 15 60 a5 6a 00    	mov    edx,DWORD PTR ds:0x6aa560
  5cf329:	b9 20 00 00 00       	mov    ecx,0x20
  5cf32e:	8b fa                	mov    edi,edx
  5cf330:	33 c0                	xor    eax,eax
  5cf332:	c1 e7 05             	shl    edi,0x5
  5cf335:	03 fa                	add    edi,edx
  5cf337:	8d 3c fd ed a5 6a 00 	lea    edi,[edi*8+0x6aa5ed]
  5cf33e:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  5cf340:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  5cf344:	5f                   	pop    edi
  5cf345:	85 c0                	test   eax,eax
  5cf347:	74 14                	je     0x5cf35d
  5cf349:	80 38 00             	cmp    BYTE PTR [eax],0x0
  5cf34c:	74 0f                	je     0x5cf35d
  5cf34e:	68 80 00 00 00       	push   0x80
  5cf353:	50                   	push   eax
  5cf354:	56                   	push   esi
  5cf355:	e8 16 ee 03 00       	call   0x60e170
  5cf35a:	83 c4 0c             	add    esp,0xc
  5cf35d:	a1 60 a5 6a 00       	mov    eax,ds:0x6aa560
  5cf362:	5e                   	pop    esi
  5cf363:	40                   	inc    eax
  5cf364:	a3 60 a5 6a 00       	mov    ds:0x6aa560,eax
  5cf369:	83 c4 14             	add    esp,0x14
  5cf36c:	c3                   	ret
  5cf36d:	90                   	nop
  5cf36e:	90                   	nop
  5cf36f:	90                   	nop
  5cf370:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5cf374:	56                   	push   esi
  5cf375:	8d 70 03             	lea    esi,[eax+0x3]
  5cf378:	83 e6 fc             	and    esi,0xfffffffc
  5cf37b:	56                   	push   esi
  5cf37c:	e8 2f 00 00 00       	call   0x5cf3b0
  5cf381:	8b d0                	mov    edx,eax
  5cf383:	83 c4 04             	add    esp,0x4
  5cf386:	85 d2                	test   edx,edx
  5cf388:	74 18                	je     0x5cf3a2
  5cf38a:	8b ce                	mov    ecx,esi
  5cf38c:	57                   	push   edi
  5cf38d:	33 c0                	xor    eax,eax
  5cf38f:	8b fa                	mov    edi,edx
  5cf391:	c1 e9 02             	shr    ecx,0x2
  5cf394:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  5cf396:	8b ce                	mov    ecx,esi
  5cf398:	83 e1 03             	and    ecx,0x3
  5cf39b:	f3 aa                	rep stos BYTE PTR es:[edi],al
  5cf39d:	5f                   	pop    edi
  5cf39e:	8b c2                	mov    eax,edx
  5cf3a0:	5e                   	pop    esi
  5cf3a1:	c3                   	ret
  5cf3a2:	8b c2                	mov    eax,edx
  5cf3a4:	5e                   	pop    esi
  5cf3a5:	c3                   	ret
  5cf3a6:	90                   	nop
  5cf3a7:	90                   	nop
  5cf3a8:	90                   	nop
  5cf3a9:	90                   	nop
  5cf3aa:	90                   	nop
  5cf3ab:	90                   	nop
  5cf3ac:	90                   	nop
  5cf3ad:	90                   	nop
  5cf3ae:	90                   	nop
  5cf3af:	90                   	nop
  5cf3b0:	56                   	push   esi
  5cf3b1:	57                   	push   edi
  5cf3b2:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  5cf3b6:	57                   	push   edi
  5cf3b7:	e8 10 de 03 00       	call   0x60d1cc
  5cf3bc:	8b f0                	mov    esi,eax
  5cf3be:	83 c4 04             	add    esp,0x4
  5cf3c1:	85 f6                	test   esi,esi
  5cf3c3:	75 09                	jne    0x5cf3ce
  5cf3c5:	e8 16 00 00 00       	call   0x5cf3e0
  5cf3ca:	85 c0                	test   eax,eax
  5cf3cc:	75 e8                	jne    0x5cf3b6
  5cf3ce:	8b c6                	mov    eax,esi
  5cf3d0:	5f                   	pop    edi
  5cf3d1:	5e                   	pop    esi
  5cf3d2:	c3                   	ret
  5cf3d3:	90                   	nop
  5cf3d4:	90                   	nop
  5cf3d5:	90                   	nop
  5cf3d6:	90                   	nop
  5cf3d7:	90                   	nop
  5cf3d8:	90                   	nop
  5cf3d9:	90                   	nop
  5cf3da:	90                   	nop
  5cf3db:	90                   	nop
  5cf3dc:	90                   	nop
  5cf3dd:	90                   	nop
  5cf3de:	90                   	nop
  5cf3df:	90                   	nop
  5cf3e0:	a1 ec c5 6c 00       	mov    eax,ds:0x6cc5ec
  5cf3e5:	85 c0                	test   eax,eax
  5cf3e7:	74 0b                	je     0x5cf3f4
  5cf3e9:	a1 f0 c5 6c 00       	mov    eax,ds:0x6cc5f0
  5cf3ee:	85 c0                	test   eax,eax
  5cf3f0:	74 02                	je     0x5cf3f4
  5cf3f2:	ff e0                	jmp    eax
  5cf3f4:	33 c0                	xor    eax,eax
  5cf3f6:	c3                   	ret
  5cf3f7:	90                   	nop
  5cf3f8:	90                   	nop
  5cf3f9:	90                   	nop
  5cf3fa:	90                   	nop
  5cf3fb:	90                   	nop
  5cf3fc:	90                   	nop
  5cf3fd:	90                   	nop
  5cf3fe:	90                   	nop
  5cf3ff:	90                   	nop
  5cf400:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5cf404:	50                   	push   eax
  5cf405:	e8 53 be 03 00       	call   0x60b25d
  5cf40a:	59                   	pop    ecx
  5cf40b:	c3                   	ret
  5cf40c:	90                   	nop
  5cf40d:	90                   	nop
  5cf40e:	90                   	nop
  5cf40f:	90                   	nop
  5cf410:	53                   	push   ebx
  5cf411:	57                   	push   edi
  5cf412:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  5cf416:	85 ff                	test   edi,edi
  5cf418:	75 10                	jne    0x5cf42a
  5cf41a:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5cf41e:	50                   	push   eax
  5cf41f:	e8 8c ff ff ff       	call   0x5cf3b0
  5cf424:	83 c4 04             	add    esp,0x4
  5cf427:	5f                   	pop    edi
  5cf428:	5b                   	pop    ebx
  5cf429:	c3                   	ret
  5cf42a:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
  5cf42e:	85 db                	test   ebx,ebx
  5cf430:	75 14                	jne    0x5cf446
  5cf432:	57                   	push   edi
  5cf433:	e8 c8 ff ff ff       	call   0x5cf400
  5cf438:	83 c4 04             	add    esp,0x4
  5cf43b:	89 1d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,ebx
  5cf441:	33 c0                	xor    eax,eax
  5cf443:	5f                   	pop    edi
  5cf444:	5b                   	pop    ebx
  5cf445:	c3                   	ret
  5cf446:	56                   	push   esi
  5cf447:	53                   	push   ebx
  5cf448:	57                   	push   edi
  5cf449:	e8 45 ee 03 00       	call   0x60e293
  5cf44e:	8b f0                	mov    esi,eax
  5cf450:	83 c4 08             	add    esp,0x8
  5cf453:	85 f6                	test   esi,esi
  5cf455:	75 09                	jne    0x5cf460
  5cf457:	e8 84 ff ff ff       	call   0x5cf3e0
  5cf45c:	85 c0                	test   eax,eax
  5cf45e:	75 e7                	jne    0x5cf447
  5cf460:	8b c6                	mov    eax,esi
  5cf462:	5e                   	pop    esi
  5cf463:	5f                   	pop    edi
  5cf464:	5b                   	pop    ebx
  5cf465:	c3                   	ret
  5cf466:	90                   	nop
  5cf467:	90                   	nop
  5cf468:	90                   	nop
  5cf469:	90                   	nop
  5cf46a:	90                   	nop
  5cf46b:	90                   	nop
  5cf46c:	90                   	nop
  5cf46d:	90                   	nop
  5cf46e:	90                   	nop
  5cf46f:	90                   	nop
  5cf470:	53                   	push   ebx
  5cf471:	56                   	push   esi
  5cf472:	57                   	push   edi
  5cf473:	68 20 01 00 00       	push   0x120
  5cf478:	e8 33 ff ff ff       	call   0x5cf3b0
  5cf47d:	8b f0                	mov    esi,eax
  5cf47f:	33 ff                	xor    edi,edi
  5cf481:	83 c4 04             	add    esp,0x4
  5cf484:	3b f7                	cmp    esi,edi
  5cf486:	75 25                	jne    0x5cf4ad
  5cf488:	57                   	push   edi
  5cf489:	68 70 3f 6b 00       	push   0x6b3f70
  5cf48e:	68 b6 00 00 00       	push   0xb6
  5cf493:	68 cc c4 6a 00       	push   0x6ac4cc
  5cf498:	68 70 3f 6b 00       	push   0x6b3f70
  5cf49d:	6a 51                	push   0x51
  5cf49f:	e8 7c fd ff ff       	call   0x5cf220
  5cf4a4:	83 c4 18             	add    esp,0x18
  5cf4a7:	33 c0                	xor    eax,eax
  5cf4a9:	5f                   	pop    edi
  5cf4aa:	5e                   	pop    esi
  5cf4ab:	5b                   	pop    ebx
  5cf4ac:	c3                   	ret
  5cf4ad:	89 3e                	mov    DWORD PTR [esi],edi
  5cf4af:	c7 86 1c 01 00 00 fe 	mov    DWORD PTR [esi+0x11c],0xfffffffe
  5cf4b6:	ff ff ff 
  5cf4b9:	e8 42 24 00 00       	call   0x5d1900
  5cf4be:	8d 5e 0c             	lea    ebx,[esi+0xc]
  5cf4c1:	3b c7                	cmp    eax,edi
  5cf4c3:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
  5cf4c6:	89 03                	mov    DWORD PTR [ebx],eax
  5cf4c8:	75 0d                	jne    0x5cf4d7
  5cf4ca:	57                   	push   edi
  5cf4cb:	68 70 3f 6b 00       	push   0x6b3f70
  5cf4d0:	68 bf 00 00 00       	push   0xbf
  5cf4d5:	eb 22                	jmp    0x5cf4f9
  5cf4d7:	68 8c 00 00 00       	push   0x8c
  5cf4dc:	e8 cf fe ff ff       	call   0x5cf3b0
  5cf4e1:	83 c4 04             	add    esp,0x4
  5cf4e4:	3b c7                	cmp    eax,edi
  5cf4e6:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
  5cf4ec:	75 60                	jne    0x5cf54e
  5cf4ee:	57                   	push   edi
  5cf4ef:	68 70 3f 6b 00       	push   0x6b3f70
  5cf4f4:	68 c5 00 00 00       	push   0xc5
  5cf4f9:	68 cc c4 6a 00       	push   0x6ac4cc
  5cf4fe:	68 70 3f 6b 00       	push   0x6b3f70
  5cf503:	6a 51                	push   0x51
  5cf505:	e8 16 fd ff ff       	call   0x5cf220
  5cf50a:	8b 03                	mov    eax,DWORD PTR [ebx]
  5cf50c:	83 c4 18             	add    esp,0x18
  5cf50f:	3b c7                	cmp    eax,edi
  5cf511:	74 07                	je     0x5cf51a
  5cf513:	8b cb                	mov    ecx,ebx
  5cf515:	e8 66 9a ff ff       	call   0x5c8f80
  5cf51a:	8b 86 18 01 00 00    	mov    eax,DWORD PTR [esi+0x118]
  5cf520:	3b c7                	cmp    eax,edi
  5cf522:	74 15                	je     0x5cf539
  5cf524:	50                   	push   eax
  5cf525:	e8 d6 fe ff ff       	call   0x5cf400
  5cf52a:	89 be 18 01 00 00    	mov    DWORD PTR [esi+0x118],edi
  5cf530:	83 c4 04             	add    esp,0x4
  5cf533:	89 3d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,edi
  5cf539:	56                   	push   esi
  5cf53a:	e8 c1 fe ff ff       	call   0x5cf400
  5cf53f:	83 c4 04             	add    esp,0x4
  5cf542:	89 3d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,edi
  5cf548:	33 c0                	xor    eax,eax
  5cf54a:	5f                   	pop    edi
  5cf54b:	5e                   	pop    esi
  5cf54c:	5b                   	pop    ebx
  5cf54d:	c3                   	ret
  5cf54e:	56                   	push   esi
  5cf54f:	89 be 14 01 00 00    	mov    DWORD PTR [esi+0x114],edi
  5cf555:	89 7e 1c             	mov    DWORD PTR [esi+0x1c],edi
  5cf558:	89 7e 24             	mov    DWORD PTR [esi+0x24],edi
  5cf55b:	e8 30 00 00 00       	call   0x5cf590
  5cf560:	83 c4 04             	add    esp,0x4
  5cf563:	83 ca ff             	or     edx,0xffffffff
  5cf566:	8d 4e 28             	lea    ecx,[esi+0x28]
  5cf569:	57                   	push   edi
  5cf56a:	e8 81 00 00 00       	call   0x5cf5f0
  5cf56f:	b8 00 00 80 3f       	mov    eax,0x3f800000
  5cf574:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
  5cf577:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  5cf57a:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5cf57d:	8b c6                	mov    eax,esi
  5cf57f:	5f                   	pop    edi
  5cf580:	5e                   	pop    esi
  5cf581:	5b                   	pop    ebx
  5cf582:	c3                   	ret
  5cf583:	90                   	nop
  5cf584:	90                   	nop
  5cf585:	90                   	nop
  5cf586:	90                   	nop
  5cf587:	90                   	nop
  5cf588:	90                   	nop
  5cf589:	90                   	nop
  5cf58a:	90                   	nop
  5cf58b:	90                   	nop
  5cf58c:	90                   	nop
  5cf58d:	90                   	nop
  5cf58e:	90                   	nop
  5cf58f:	90                   	nop
  5cf590:	56                   	push   esi
  5cf591:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5cf595:	57                   	push   edi
  5cf596:	8b 3e                	mov    edi,DWORD PTR [esi]
  5cf598:	85 ff                	test   edi,edi
  5cf59a:	7e 48                	jle    0x5cf5e4
  5cf59c:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
  5cf5a2:	8d 54 24 0c          	lea    edx,[esp+0xc]
  5cf5a6:	e8 d5 0f 01 00       	call   0x5e0580
  5cf5ab:	85 ff                	test   edi,edi
  5cf5ad:	7e 29                	jle    0x5cf5d8
  5cf5af:	33 c9                	xor    ecx,ecx
  5cf5b1:	8b d7                	mov    edx,edi
  5cf5b3:	8b be 18 01 00 00    	mov    edi,DWORD PTR [esi+0x118]
  5cf5b9:	81 c1 8c 00 00 00    	add    ecx,0x8c
  5cf5bf:	89 84 0f 78 ff ff ff 	mov    DWORD PTR [edi+ecx*1-0x88],eax
  5cf5c6:	83 c0 30             	add    eax,0x30
  5cf5c9:	4a                   	dec    edx
  5cf5ca:	75 e7                	jne    0x5cf5b3
  5cf5cc:	8d 86 e4 00 00 00    	lea    eax,[esi+0xe4]
  5cf5d2:	5f                   	pop    edi
  5cf5d3:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
  5cf5d6:	5e                   	pop    esi
  5cf5d7:	c3                   	ret
  5cf5d8:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
  5cf5de:	5f                   	pop    edi
  5cf5df:	89 4e 2c             	mov    DWORD PTR [esi+0x2c],ecx
  5cf5e2:	5e                   	pop    esi
  5cf5e3:	c3                   	ret
  5cf5e4:	8d 96 e4 00 00 00    	lea    edx,[esi+0xe4]
  5cf5ea:	5f                   	pop    edi
  5cf5eb:	89 56 2c             	mov    DWORD PTR [esi+0x2c],edx
  5cf5ee:	5e                   	pop    esi
  5cf5ef:	c3                   	ret
  5cf5f0:	53                   	push   ebx
  5cf5f1:	56                   	push   esi
  5cf5f2:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
  5cf5f6:	8b d9                	mov    ebx,ecx
  5cf5f8:	85 f6                	test   esi,esi
  5cf5fa:	89 13                	mov    DWORD PTR [ebx],edx
  5cf5fc:	74 2e                	je     0x5cf62c
  5cf5fe:	57                   	push   edi
  5cf5ff:	8d 53 24             	lea    edx,[ebx+0x24]
  5cf602:	8b ce                	mov    ecx,esi
  5cf604:	e8 d7 5f fe ff       	call   0x5b55e0
  5cf609:	8d 7b 34             	lea    edi,[ebx+0x34]
  5cf60c:	b9 0c 00 00 00       	mov    ecx,0xc
  5cf611:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cf613:	8d 43 58             	lea    eax,[ebx+0x58]
  5cf616:	8d 4b 18             	lea    ecx,[ebx+0x18]
  5cf619:	5f                   	pop    edi
  5cf61a:	8b 10                	mov    edx,DWORD PTR [eax]
  5cf61c:	89 11                	mov    DWORD PTR [ecx],edx
  5cf61e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5cf621:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  5cf624:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5cf627:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  5cf62a:	eb 26                	jmp    0x5cf652
  5cf62c:	8d 4b 24             	lea    ecx,[ebx+0x24]
  5cf62f:	e8 9c 69 fe ff       	call   0x5b5fd0
  5cf634:	8d 4b 34             	lea    ecx,[ebx+0x34]
  5cf637:	e8 84 3a fe ff       	call   0x5b30c0
  5cf63c:	8d 4b 58             	lea    ecx,[ebx+0x58]
  5cf63f:	8d 53 18             	lea    edx,[ebx+0x18]
  5cf642:	8b 01                	mov    eax,DWORD PTR [ecx]
  5cf644:	89 02                	mov    DWORD PTR [edx],eax
  5cf646:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  5cf649:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  5cf64c:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5cf64f:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  5cf652:	8d 73 70             	lea    esi,[ebx+0x70]
  5cf655:	8b ce                	mov    ecx,esi
  5cf657:	e8 74 69 fe ff       	call   0x5b5fd0
  5cf65c:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  5cf65f:	e8 5c 3a fe ff       	call   0x5b30c0
  5cf664:	8d 4b 08             	lea    ecx,[ebx+0x8]
  5cf667:	e8 64 69 fe ff       	call   0x5b5fd0
  5cf66c:	8d 4b 64             	lea    ecx,[ebx+0x64]
  5cf66f:	6a 00                	push   0x0
  5cf671:	6a 00                	push   0x0
  5cf673:	6a 00                	push   0x0
  5cf675:	e8 a6 37 fe ff       	call   0x5b2e20
  5cf67a:	8b ce                	mov    ecx,esi
  5cf67c:	e8 4f 69 fe ff       	call   0x5b5fd0
  5cf681:	8b cb                	mov    ecx,ebx
  5cf683:	c7 83 80 00 00 00 01 	mov    DWORD PTR [ebx+0x80],0x1
  5cf68a:	00 00 00 
  5cf68d:	e8 0e 00 00 00       	call   0x5cf6a0
  5cf692:	5e                   	pop    esi
  5cf693:	5b                   	pop    ebx
  5cf694:	c2 04 00             	ret    0x4
  5cf697:	90                   	nop
  5cf698:	90                   	nop
  5cf699:	90                   	nop
  5cf69a:	90                   	nop
  5cf69b:	90                   	nop
  5cf69c:	90                   	nop
  5cf69d:	90                   	nop
  5cf69e:	90                   	nop
  5cf69f:	90                   	nop
  5cf6a0:	83 ec 10             	sub    esp,0x10
  5cf6a3:	8d 41 24             	lea    eax,[ecx+0x24]
  5cf6a6:	8b 51 24             	mov    edx,DWORD PTR [ecx+0x24]
  5cf6a9:	89 54 24 00          	mov    DWORD PTR [esp+0x0],edx
  5cf6ad:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5cf6b0:	89 54 24 04          	mov    DWORD PTR [esp+0x4],edx
  5cf6b4:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5cf6b8:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  5cf6bb:	dc 1d 68 09 65 00    	fcomp  QWORD PTR ds:0x650968
  5cf6c1:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  5cf6c4:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  5cf6c8:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  5cf6cc:	df e0                	fnstsw ax
  5cf6ce:	f6 c4 01             	test   ah,0x1
  5cf6d1:	74 63                	je     0x5cf736
  5cf6d3:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5cf6d7:	dc 1d 60 09 65 00    	fcomp  QWORD PTR ds:0x650960
  5cf6dd:	df e0                	fnstsw ax
  5cf6df:	f6 c4 41             	test   ah,0x41
  5cf6e2:	75 52                	jne    0x5cf736
  5cf6e4:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  5cf6e8:	dc 1d 68 09 65 00    	fcomp  QWORD PTR ds:0x650968
  5cf6ee:	df e0                	fnstsw ax
  5cf6f0:	f6 c4 01             	test   ah,0x1
  5cf6f3:	74 41                	je     0x5cf736
  5cf6f5:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  5cf6f9:	dc 1d 60 09 65 00    	fcomp  QWORD PTR ds:0x650960
  5cf6ff:	df e0                	fnstsw ax
  5cf701:	f6 c4 41             	test   ah,0x41
  5cf704:	75 30                	jne    0x5cf736
  5cf706:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  5cf70a:	dc 1d 68 09 65 00    	fcomp  QWORD PTR ds:0x650968
  5cf710:	df e0                	fnstsw ax
  5cf712:	f6 c4 01             	test   ah,0x1
  5cf715:	74 1f                	je     0x5cf736
  5cf717:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  5cf71b:	dc 1d 60 09 65 00    	fcomp  QWORD PTR ds:0x650960
  5cf721:	df e0                	fnstsw ax
  5cf723:	f6 c4 41             	test   ah,0x41
  5cf726:	75 0e                	jne    0x5cf736
  5cf728:	c7 81 84 00 00 00 01 	mov    DWORD PTR [ecx+0x84],0x1
  5cf72f:	00 00 00 
  5cf732:	83 c4 10             	add    esp,0x10
  5cf735:	c3                   	ret
  5cf736:	c7 81 84 00 00 00 00 	mov    DWORD PTR [ecx+0x84],0x0
  5cf73d:	00 00 00 
  5cf740:	83 c4 10             	add    esp,0x10
  5cf743:	c3                   	ret
  5cf744:	90                   	nop
  5cf745:	90                   	nop
  5cf746:	90                   	nop
  5cf747:	90                   	nop
  5cf748:	90                   	nop
  5cf749:	90                   	nop
  5cf74a:	90                   	nop
  5cf74b:	90                   	nop
  5cf74c:	90                   	nop
  5cf74d:	90                   	nop
  5cf74e:	90                   	nop
  5cf74f:	90                   	nop
  5cf750:	56                   	push   esi
  5cf751:	8b f1                	mov    esi,ecx
  5cf753:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5cf755:	83 c1 0c             	add    ecx,0xc
  5cf758:	e8 23 98 ff ff       	call   0x5c8f80
  5cf75d:	8b 06                	mov    eax,DWORD PTR [esi]
  5cf75f:	8d 88 14 01 00 00    	lea    ecx,[eax+0x114]
  5cf765:	8b 80 14 01 00 00    	mov    eax,DWORD PTR [eax+0x114]
  5cf76b:	85 c0                	test   eax,eax
  5cf76d:	74 05                	je     0x5cf774
  5cf76f:	e8 bc 0d 01 00       	call   0x5e0530
  5cf774:	8b 06                	mov    eax,DWORD PTR [esi]
  5cf776:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  5cf77c:	85 c0                	test   eax,eax
  5cf77e:	74 22                	je     0x5cf7a2
  5cf780:	50                   	push   eax
  5cf781:	e8 7a fc ff ff       	call   0x5cf400
  5cf786:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5cf788:	83 c4 04             	add    esp,0x4
  5cf78b:	c7 81 18 01 00 00 00 	mov    DWORD PTR [ecx+0x118],0x0
  5cf792:	00 00 00 
  5cf795:	8b 16                	mov    edx,DWORD PTR [esi]
  5cf797:	8b 82 18 01 00 00    	mov    eax,DWORD PTR [edx+0x118]
  5cf79d:	a3 c0 03 72 00       	mov    ds:0x7203c0,eax
  5cf7a2:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5cf7a4:	51                   	push   ecx
  5cf7a5:	e8 56 fc ff ff       	call   0x5cf400
  5cf7aa:	83 c4 04             	add    esp,0x4
  5cf7ad:	c7 05 c0 03 72 00 00 	mov    DWORD PTR ds:0x7203c0,0x0
  5cf7b4:	00 00 00 
  5cf7b7:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
  5cf7bd:	5e                   	pop    esi
  5cf7be:	c3                   	ret
  5cf7bf:	90                   	nop
  5cf7c0:	51                   	push   ecx
  5cf7c1:	53                   	push   ebx
  5cf7c2:	56                   	push   esi
  5cf7c3:	8b f1                	mov    esi,ecx
  5cf7c5:	57                   	push   edi
  5cf7c6:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  5cf7ca:	8b 3e                	mov    edi,DWORD PTR [esi]
  5cf7cc:	8b 8e 18 01 00 00    	mov    ecx,DWORD PTR [esi+0x118]
  5cf7d2:	8d 5f 01             	lea    ebx,[edi+0x1]
  5cf7d5:	8d 04 dd 00 00 00 00 	lea    eax,[ebx*8+0x0]
  5cf7dc:	2b c3                	sub    eax,ebx
  5cf7de:	8d 04 80             	lea    eax,[eax+eax*4]
  5cf7e1:	c1 e0 02             	shl    eax,0x2
  5cf7e4:	50                   	push   eax
  5cf7e5:	51                   	push   ecx
  5cf7e6:	e8 25 fc ff ff       	call   0x5cf410
  5cf7eb:	83 c4 08             	add    esp,0x8
  5cf7ee:	85 c0                	test   eax,eax
  5cf7f0:	75 28                	jne    0x5cf81a
  5cf7f2:	50                   	push   eax
  5cf7f3:	68 70 3f 6b 00       	push   0x6b3f70
  5cf7f8:	68 25 02 00 00       	push   0x225
  5cf7fd:	68 cc c4 6a 00       	push   0x6ac4cc
  5cf802:	68 70 3f 6b 00       	push   0x6b3f70
  5cf807:	6a 52                	push   0x52
  5cf809:	e8 12 fa ff ff       	call   0x5cf220
  5cf80e:	83 c4 18             	add    esp,0x18
  5cf811:	33 c0                	xor    eax,eax
  5cf813:	5f                   	pop    edi
  5cf814:	5e                   	pop    esi
  5cf815:	5b                   	pop    ebx
  5cf816:	59                   	pop    ecx
  5cf817:	c2 0c 00             	ret    0xc
  5cf81a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5cf81e:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
  5cf824:	85 d2                	test   edx,edx
  5cf826:	75 05                	jne    0x5cf82d
  5cf828:	ba 70 3f 6b 00       	mov    edx,0x6b3f70
  5cf82d:	8d 4e 0c             	lea    ecx,[esi+0xc]
  5cf830:	e8 ab 21 00 00       	call   0x5d19e0
  5cf835:	85 c0                	test   eax,eax
  5cf837:	75 28                	jne    0x5cf861
  5cf839:	50                   	push   eax
  5cf83a:	68 70 3f 6b 00       	push   0x6b3f70
  5cf83f:	68 30 02 00 00       	push   0x230
  5cf844:	68 cc c4 6a 00       	push   0x6ac4cc
  5cf849:	68 70 3f 6b 00       	push   0x6b3f70
  5cf84e:	6a 52                	push   0x52
  5cf850:	e8 cb f9 ff ff       	call   0x5cf220
  5cf855:	83 c4 18             	add    esp,0x18
  5cf858:	33 c0                	xor    eax,eax
  5cf85a:	5f                   	pop    edi
  5cf85b:	5e                   	pop    esi
  5cf85c:	5b                   	pop    ebx
  5cf85d:	59                   	pop    ecx
  5cf85e:	c2 0c 00             	ret    0xc
  5cf861:	8b cb                	mov    ecx,ebx
  5cf863:	e8 18 0c 01 00       	call   0x5e0480
  5cf868:	85 c0                	test   eax,eax
  5cf86a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5cf86e:	75 28                	jne    0x5cf898
  5cf870:	50                   	push   eax
  5cf871:	68 70 3f 6b 00       	push   0x6b3f70
  5cf876:	68 3a 02 00 00       	push   0x23a
  5cf87b:	68 cc c4 6a 00       	push   0x6ac4cc
  5cf880:	68 70 3f 6b 00       	push   0x6b3f70
  5cf885:	6a 52                	push   0x52
  5cf887:	e8 94 f9 ff ff       	call   0x5cf220
  5cf88c:	83 c4 18             	add    esp,0x18
  5cf88f:	33 c0                	xor    eax,eax
  5cf891:	5f                   	pop    edi
  5cf892:	5e                   	pop    esi
  5cf893:	5b                   	pop    ebx
  5cf894:	59                   	pop    ecx
  5cf895:	c2 0c 00             	ret    0xc
  5cf898:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
  5cf89e:	55                   	push   ebp
  5cf89f:	8d ae 14 01 00 00    	lea    ebp,[esi+0x114]
  5cf8a5:	85 c9                	test   ecx,ecx
  5cf8a7:	74 0b                	je     0x5cf8b4
  5cf8a9:	8b cd                	mov    ecx,ebp
  5cf8ab:	e8 80 0c 01 00       	call   0x5e0530
  5cf8b0:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5cf8b4:	56                   	push   esi
  5cf8b5:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
  5cf8b8:	89 1e                	mov    DWORD PTR [esi],ebx
  5cf8ba:	e8 d1 fc ff ff       	call   0x5cf590
  5cf8bf:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5cf8c3:	8b 8e 18 01 00 00    	mov    ecx,DWORD PTR [esi+0x118]
  5cf8c9:	8d 04 fd 00 00 00 00 	lea    eax,[edi*8+0x0]
  5cf8d0:	83 c4 04             	add    esp,0x4
  5cf8d3:	2b c7                	sub    eax,edi
  5cf8d5:	52                   	push   edx
  5cf8d6:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5cf8da:	8d 04 80             	lea    eax,[eax+eax*4]
  5cf8dd:	8d 0c 81             	lea    ecx,[ecx+eax*4]
  5cf8e0:	e8 0b fd ff ff       	call   0x5cf5f0
  5cf8e5:	c7 46 08 01 00 00 00 	mov    DWORD PTR [esi+0x8],0x1
  5cf8ec:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5cf8f0:	89 3a                	mov    DWORD PTR [edx],edi
  5cf8f2:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
  5cf8f5:	e8 a6 1f 00 00       	call   0x5d18a0
  5cf8fa:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  5cf8fd:	b8 01 00 00 00       	mov    eax,0x1
  5cf902:	5d                   	pop    ebp
  5cf903:	5f                   	pop    edi
  5cf904:	5e                   	pop    esi
  5cf905:	5b                   	pop    ebx
  5cf906:	59                   	pop    ecx
  5cf907:	c2 0c 00             	ret    0xc
  5cf90a:	90                   	nop
  5cf90b:	90                   	nop
  5cf90c:	90                   	nop
  5cf90d:	90                   	nop
  5cf90e:	90                   	nop
  5cf90f:	90                   	nop
  5cf910:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5cf914:	83 f9 ff             	cmp    ecx,0xffffffff
  5cf917:	75 08                	jne    0x5cf921
  5cf919:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5cf91d:	83 c0 28             	add    eax,0x28
  5cf920:	c3                   	ret
  5cf921:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5cf925:	8d 04 cd 00 00 00 00 	lea    eax,[ecx*8+0x0]
  5cf92c:	2b c1                	sub    eax,ecx
  5cf92e:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5cf931:	8b 82 18 01 00 00    	mov    eax,DWORD PTR [edx+0x118]
  5cf937:	8d 04 88             	lea    eax,[eax+ecx*4]
  5cf93a:	c3                   	ret
  5cf93b:	90                   	nop
  5cf93c:	90                   	nop
  5cf93d:	90                   	nop
  5cf93e:	90                   	nop
  5cf93f:	90                   	nop
  5cf940:	53                   	push   ebx
  5cf941:	55                   	push   ebp
  5cf942:	56                   	push   esi
  5cf943:	57                   	push   edi
  5cf944:	8b e9                	mov    ebp,ecx
  5cf946:	52                   	push   edx
  5cf947:	55                   	push   ebp
  5cf948:	e8 c3 ff ff ff       	call   0x5cf910
  5cf94d:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
  5cf951:	8b d8                	mov    ebx,eax
  5cf953:	83 c4 08             	add    esp,0x8
  5cf956:	8b ce                	mov    ecx,esi
  5cf958:	8d 53 24             	lea    edx,[ebx+0x24]
  5cf95b:	e8 80 5c fe ff       	call   0x5b55e0
  5cf960:	8d 7b 34             	lea    edi,[ebx+0x34]
  5cf963:	b9 0c 00 00 00       	mov    ecx,0xc
  5cf968:	c7 83 80 00 00 00 01 	mov    DWORD PTR [ebx+0x80],0x1
  5cf96f:	00 00 00 
  5cf972:	8d 43 58             	lea    eax,[ebx+0x58]
  5cf975:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cf977:	8b 10                	mov    edx,DWORD PTR [eax]
  5cf979:	8d 4b 18             	lea    ecx,[ebx+0x18]
  5cf97c:	89 53 18             	mov    DWORD PTR [ebx+0x18],edx
  5cf97f:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5cf982:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5cf985:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  5cf988:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  5cf98b:	8b cb                	mov    ecx,ebx
  5cf98d:	e8 0e fd ff ff       	call   0x5cf6a0
  5cf992:	c7 45 08 01 00 00 00 	mov    DWORD PTR [ebp+0x8],0x1
  5cf999:	5f                   	pop    edi
  5cf99a:	5e                   	pop    esi
  5cf99b:	5d                   	pop    ebp
  5cf99c:	5b                   	pop    ebx
  5cf99d:	c2 04 00             	ret    0x4
  5cf9a0:	56                   	push   esi
  5cf9a1:	57                   	push   edi
  5cf9a2:	8b fa                	mov    edi,edx
  5cf9a4:	8b f1                	mov    esi,ecx
  5cf9a6:	e8 25 00 00 00       	call   0x5cf9d0
  5cf9ab:	57                   	push   edi
  5cf9ac:	56                   	push   esi
  5cf9ad:	e8 5e ff ff ff       	call   0x5cf910
  5cf9b2:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
  5cf9b5:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  5cf9b9:	b9 0c 00 00 00       	mov    ecx,0xc
  5cf9be:	83 c4 08             	add    esp,0x8
  5cf9c1:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cf9c3:	5f                   	pop    edi
  5cf9c4:	5e                   	pop    esi
  5cf9c5:	c2 04 00             	ret    0x4
  5cf9c8:	90                   	nop
  5cf9c9:	90                   	nop
  5cf9ca:	90                   	nop
  5cf9cb:	90                   	nop
  5cf9cc:	90                   	nop
  5cf9cd:	90                   	nop
  5cf9ce:	90                   	nop
  5cf9cf:	90                   	nop
  5cf9d0:	81 ec 90 00 00 00    	sub    esp,0x90
  5cf9d6:	53                   	push   ebx
  5cf9d7:	8b d9                	mov    ebx,ecx
  5cf9d9:	55                   	push   ebp
  5cf9da:	56                   	push   esi
  5cf9db:	8b 4b 24             	mov    ecx,DWORD PTR [ebx+0x24]
  5cf9de:	57                   	push   edi
  5cf9df:	85 c9                	test   ecx,ecx
  5cf9e1:	bd 01 00 00 00       	mov    ebp,0x1
  5cf9e6:	74 69                	je     0x5cfa51
  5cf9e8:	e8 e3 ff ff ff       	call   0x5cf9d0
  5cf9ed:	8b 43 24             	mov    eax,DWORD PTR [ebx+0x24]
  5cf9f0:	8d bb b4 00 00 00    	lea    edi,[ebx+0xb4]
  5cf9f6:	8b d7                	mov    edx,edi
  5cf9f8:	8b 48 2c             	mov    ecx,DWORD PTR [eax+0x2c]
  5cf9fb:	e8 b0 02 00 00       	call   0x5cfcb0
  5cfa00:	85 c0                	test   eax,eax
  5cfa02:	74 16                	je     0x5cfa1a
  5cfa04:	8b 53 24             	mov    edx,DWORD PTR [ebx+0x24]
  5cfa07:	89 6b 08             	mov    DWORD PTR [ebx+0x8],ebp
  5cfa0a:	89 ab a8 00 00 00    	mov    DWORD PTR [ebx+0xa8],ebp
  5cfa10:	b9 0c 00 00 00       	mov    ecx,0xc
  5cfa15:	8b 72 2c             	mov    esi,DWORD PTR [edx+0x2c]
  5cfa18:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cfa1a:	8b 43 1c             	mov    eax,DWORD PTR [ebx+0x1c]
  5cfa1d:	85 c0                	test   eax,eax
  5cfa1f:	75 1e                	jne    0x5cfa3f
  5cfa21:	8b 43 28             	mov    eax,DWORD PTR [ebx+0x28]
  5cfa24:	8b 4b 24             	mov    ecx,DWORD PTR [ebx+0x24]
  5cfa27:	8d 73 28             	lea    esi,[ebx+0x28]
  5cfa2a:	50                   	push   eax
  5cfa2b:	51                   	push   ecx
  5cfa2c:	e8 df fe ff ff       	call   0x5cf910
  5cfa31:	83 c4 08             	add    esp,0x8
  5cfa34:	8b d6                	mov    edx,esi
  5cfa36:	8b c8                	mov    ecx,eax
  5cfa38:	e8 d3 01 00 00       	call   0x5cfc10
  5cfa3d:	eb 4d                	jmp    0x5cfa8c
  5cfa3f:	8b 4b 2c             	mov    ecx,DWORD PTR [ebx+0x2c]
  5cfa42:	e8 79 36 fe ff       	call   0x5b30c0
  5cfa47:	8d 4b 30             	lea    ecx,[ebx+0x30]
  5cfa4a:	e8 81 65 fe ff       	call   0x5b5fd0
  5cfa4f:	eb 3b                	jmp    0x5cfa8c
  5cfa51:	8b 83 a8 00 00 00    	mov    eax,DWORD PTR [ebx+0xa8]
  5cfa57:	85 c0                	test   eax,eax
  5cfa59:	74 31                	je     0x5cfa8c
  5cfa5b:	8d 73 30             	lea    esi,[ebx+0x30]
  5cfa5e:	8d 93 98 00 00 00    	lea    edx,[ebx+0x98]
  5cfa64:	56                   	push   esi
  5cfa65:	8d 4b 4c             	lea    ecx,[ebx+0x4c]
  5cfa68:	e8 23 62 fe ff       	call   0x5b5c90
  5cfa6d:	8b 53 2c             	mov    edx,DWORD PTR [ebx+0x2c]
  5cfa70:	8b ce                	mov    ecx,esi
  5cfa72:	e8 a9 5e fe ff       	call   0x5b5920
  5cfa77:	8b 53 2c             	mov    edx,DWORD PTR [ebx+0x2c]
  5cfa7a:	8d 4b 5c             	lea    ecx,[ebx+0x5c]
  5cfa7d:	83 c2 24             	add    edx,0x24
  5cfa80:	52                   	push   edx
  5cfa81:	8d 93 8c 00 00 00    	lea    edx,[ebx+0x8c]
  5cfa87:	e8 e4 39 fe ff       	call   0x5b3470
  5cfa8c:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  5cfa8f:	85 c0                	test   eax,eax
  5cfa91:	0f 84 60 01 00 00    	je     0x5cfbf7
  5cfa97:	8b 93 1c 01 00 00    	mov    edx,DWORD PTR [ebx+0x11c]
  5cfa9d:	83 fa ff             	cmp    edx,0xffffffff
  5cfaa0:	7c 09                	jl     0x5cfaab
  5cfaa2:	8b cb                	mov    ecx,ebx
  5cfaa4:	e8 d7 02 00 00       	call   0x5cfd80
  5cfaa9:	eb 77                	jmp    0x5cfb22
  5cfaab:	8b 03                	mov    eax,DWORD PTR [ebx]
  5cfaad:	8b b3 18 01 00 00    	mov    esi,DWORD PTR [ebx+0x118]
  5cfab3:	33 ff                	xor    edi,edi
  5cfab5:	85 c0                	test   eax,eax
  5cfab7:	7e 3c                	jle    0x5cfaf5
  5cfab9:	8b 06                	mov    eax,DWORD PTR [esi]
  5cfabb:	50                   	push   eax
  5cfabc:	53                   	push   ebx
  5cfabd:	e8 4e fe ff ff       	call   0x5cf910
  5cfac2:	8b c8                	mov    ecx,eax
  5cfac4:	8b 86 80 00 00 00    	mov    eax,DWORD PTR [esi+0x80]
  5cfaca:	83 c4 08             	add    esp,0x8
  5cfacd:	3b c5                	cmp    eax,ebp
  5cfacf:	74 10                	je     0x5cfae1
  5cfad1:	8b 81 80 00 00 00    	mov    eax,DWORD PTR [ecx+0x80]
  5cfad7:	85 c0                	test   eax,eax
  5cfad9:	74 0d                	je     0x5cfae8
  5cfadb:	89 ae 80 00 00 00    	mov    DWORD PTR [esi+0x80],ebp
  5cfae1:	8b d6                	mov    edx,esi
  5cfae3:	e8 28 01 00 00       	call   0x5cfc10
  5cfae8:	8b 03                	mov    eax,DWORD PTR [ebx]
  5cfaea:	47                   	inc    edi
  5cfaeb:	81 c6 8c 00 00 00    	add    esi,0x8c
  5cfaf1:	3b f8                	cmp    edi,eax
  5cfaf3:	7c c4                	jl     0x5cfab9
  5cfaf5:	8b 13                	mov    edx,DWORD PTR [ebx]
  5cfaf7:	8b 8b 18 01 00 00    	mov    ecx,DWORD PTR [ebx+0x118]
  5cfafd:	33 c0                	xor    eax,eax
  5cfaff:	3b d0                	cmp    edx,eax
  5cfb01:	89 83 a8 00 00 00    	mov    DWORD PTR [ebx+0xa8],eax
  5cfb07:	7e 19                	jle    0x5cfb22
  5cfb09:	81 c1 80 00 00 00    	add    ecx,0x80
  5cfb0f:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
  5cfb15:	8b 13                	mov    edx,DWORD PTR [ebx]
  5cfb17:	40                   	inc    eax
  5cfb18:	81 c1 8c 00 00 00    	add    ecx,0x8c
  5cfb1e:	3b c2                	cmp    eax,edx
  5cfb20:	7c ed                	jl     0x5cfb0f
  5cfb22:	8b 43 1c             	mov    eax,DWORD PTR [ebx+0x1c]
  5cfb25:	85 c0                	test   eax,eax
  5cfb27:	0f 84 c3 00 00 00    	je     0x5cfbf0
  5cfb2d:	8b 4b 28             	mov    ecx,DWORD PTR [ebx+0x28]
  5cfb30:	8b 53 24             	mov    edx,DWORD PTR [ebx+0x24]
  5cfb33:	8d 04 cd 00 00 00 00 	lea    eax,[ecx*8+0x0]
  5cfb3a:	2b c1                	sub    eax,ecx
  5cfb3c:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5cfb3f:	8b 82 18 01 00 00    	mov    eax,DWORD PTR [edx+0x118]
  5cfb45:	8d 54 24 70          	lea    edx,[esp+0x70]
  5cfb49:	8b 74 88 04          	mov    esi,DWORD PTR [eax+ecx*4+0x4]
  5cfb4d:	8b 4b 20             	mov    ecx,DWORD PTR [ebx+0x20]
  5cfb50:	8d 04 cd 00 00 00 00 	lea    eax,[ecx*8+0x0]
  5cfb57:	2b c1                	sub    eax,ecx
  5cfb59:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5cfb5c:	8b 83 18 01 00 00    	mov    eax,DWORD PTR [ebx+0x118]
  5cfb62:	8b 4c 88 04          	mov    ecx,DWORD PTR [eax+ecx*4+0x4]
  5cfb66:	e8 25 3b fe ff       	call   0x5b3690
  5cfb6b:	8d 54 24 40          	lea    edx,[esp+0x40]
  5cfb6f:	8d 4b 4c             	lea    ecx,[ebx+0x4c]
  5cfb72:	e8 a9 5d fe ff       	call   0x5b5920
  5cfb77:	8d 8b 80 00 00 00    	lea    ecx,[ebx+0x80]
  5cfb7d:	8b 93 80 00 00 00    	mov    edx,DWORD PTR [ebx+0x80]
  5cfb83:	89 54 24 64          	mov    DWORD PTR [esp+0x64],edx
  5cfb87:	8d 54 24 10          	lea    edx,[esp+0x10]
  5cfb8b:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  5cfb8e:	52                   	push   edx
  5cfb8f:	8d 54 24 44          	lea    edx,[esp+0x44]
  5cfb93:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
  5cfb97:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5cfb9a:	89 4c 24 70          	mov    DWORD PTR [esp+0x70],ecx
  5cfb9e:	8b ce                	mov    ecx,esi
  5cfba0:	e8 1b 37 fe ff       	call   0x5b32c0
  5cfba5:	8b 7b 2c             	mov    edi,DWORD PTR [ebx+0x2c]
  5cfba8:	b9 0c 00 00 00       	mov    ecx,0xc
  5cfbad:	8d 74 24 10          	lea    esi,[esp+0x10]
  5cfbb1:	8d 44 24 10          	lea    eax,[esp+0x10]
  5cfbb5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cfbb7:	50                   	push   eax
  5cfbb8:	8d 54 24 74          	lea    edx,[esp+0x74]
  5cfbbc:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5cfbc0:	e8 fb 36 fe ff       	call   0x5b32c0
  5cfbc5:	8b 03                	mov    eax,DWORD PTR [ebx]
  5cfbc7:	33 f6                	xor    esi,esi
  5cfbc9:	85 c0                	test   eax,eax
  5cfbcb:	7e 23                	jle    0x5cfbf0
  5cfbcd:	33 ff                	xor    edi,edi
  5cfbcf:	8b 8b 18 01 00 00    	mov    ecx,DWORD PTR [ebx+0x118]
  5cfbd5:	8b 54 39 04          	mov    edx,DWORD PTR [ecx+edi*1+0x4]
  5cfbd9:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5cfbdd:	52                   	push   edx
  5cfbde:	e8 dd 36 fe ff       	call   0x5b32c0
  5cfbe3:	8b 03                	mov    eax,DWORD PTR [ebx]
  5cfbe5:	46                   	inc    esi
  5cfbe6:	81 c7 8c 00 00 00    	add    edi,0x8c
  5cfbec:	3b f0                	cmp    esi,eax
  5cfbee:	7c df                	jl     0x5cfbcf
  5cfbf0:	c7 43 08 00 00 00 00 	mov    DWORD PTR [ebx+0x8],0x0
  5cfbf7:	5f                   	pop    edi
  5cfbf8:	5e                   	pop    esi
  5cfbf9:	5d                   	pop    ebp
  5cfbfa:	5b                   	pop    ebx
  5cfbfb:	81 c4 90 00 00 00    	add    esp,0x90
  5cfc01:	c3                   	ret
  5cfc02:	90                   	nop
  5cfc03:	90                   	nop
  5cfc04:	90                   	nop
  5cfc05:	90                   	nop
  5cfc06:	90                   	nop
  5cfc07:	90                   	nop
  5cfc08:	90                   	nop
  5cfc09:	90                   	nop
  5cfc0a:	90                   	nop
  5cfc0b:	90                   	nop
  5cfc0c:	90                   	nop
  5cfc0d:	90                   	nop
  5cfc0e:	90                   	nop
  5cfc0f:	90                   	nop
  5cfc10:	83 ec 10             	sub    esp,0x10
  5cfc13:	53                   	push   ebx
  5cfc14:	55                   	push   ebp
  5cfc15:	56                   	push   esi
  5cfc16:	8b f2                	mov    esi,edx
  5cfc18:	57                   	push   edi
  5cfc19:	8b d9                	mov    ebx,ecx
  5cfc1b:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  5cfc1e:	8b 86 84 00 00 00    	mov    eax,DWORD PTR [esi+0x84]
  5cfc24:	83 c7 24             	add    edi,0x24
  5cfc27:	85 c0                	test   eax,eax
  5cfc29:	74 38                	je     0x5cfc63
  5cfc2b:	8d 6e 08             	lea    ebp,[esi+0x8]
  5cfc2e:	8d 56 70             	lea    edx,[esi+0x70]
  5cfc31:	55                   	push   ebp
  5cfc32:	8d 4b 08             	lea    ecx,[ebx+0x8]
  5cfc35:	e8 56 60 fe ff       	call   0x5b5c90
  5cfc3a:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
  5cfc3d:	8b cd                	mov    ecx,ebp
  5cfc3f:	e8 dc 5c fe ff       	call   0x5b5920
  5cfc44:	8d 56 58             	lea    edx,[esi+0x58]
  5cfc47:	8d 4e 64             	lea    ecx,[esi+0x64]
  5cfc4a:	57                   	push   edi
  5cfc4b:	e8 b0 33 fe ff       	call   0x5b3000
  5cfc50:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  5cfc53:	8b d7                	mov    edx,edi
  5cfc55:	57                   	push   edi
  5cfc56:	e8 15 38 fe ff       	call   0x5b3470
  5cfc5b:	5f                   	pop    edi
  5cfc5c:	5e                   	pop    esi
  5cfc5d:	5d                   	pop    ebp
  5cfc5e:	5b                   	pop    ebx
  5cfc5f:	83 c4 10             	add    esp,0x10
  5cfc62:	c3                   	ret
  5cfc63:	8d 44 24 10          	lea    eax,[esp+0x10]
  5cfc67:	8d 56 24             	lea    edx,[esi+0x24]
  5cfc6a:	50                   	push   eax
  5cfc6b:	8d 4b 08             	lea    ecx,[ebx+0x8]
  5cfc6e:	e8 1d 60 fe ff       	call   0x5b5c90
  5cfc73:	8d 6e 08             	lea    ebp,[esi+0x8]
  5cfc76:	8d 56 70             	lea    edx,[esi+0x70]
  5cfc79:	55                   	push   ebp
  5cfc7a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5cfc7e:	e8 0d 60 fe ff       	call   0x5b5c90
  5cfc83:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
  5cfc86:	8b cd                	mov    ecx,ebp
  5cfc88:	e8 93 5c fe ff       	call   0x5b5920
  5cfc8d:	8d 56 64             	lea    edx,[esi+0x64]
  5cfc90:	8d 4e 34             	lea    ecx,[esi+0x34]
  5cfc93:	57                   	push   edi
  5cfc94:	e8 d7 37 fe ff       	call   0x5b3470
  5cfc99:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  5cfc9c:	8b d7                	mov    edx,edi
  5cfc9e:	57                   	push   edi
  5cfc9f:	e8 cc 37 fe ff       	call   0x5b3470
  5cfca4:	5f                   	pop    edi
  5cfca5:	5e                   	pop    esi
  5cfca6:	5d                   	pop    ebp
  5cfca7:	5b                   	pop    ebx
  5cfca8:	83 c4 10             	add    esp,0x10
  5cfcab:	c3                   	ret
  5cfcac:	90                   	nop
  5cfcad:	90                   	nop
  5cfcae:	90                   	nop
  5cfcaf:	90                   	nop
  5cfcb0:	d9 01                	fld    DWORD PTR [ecx]
  5cfcb2:	d8 1a                	fcomp  DWORD PTR [edx]
  5cfcb4:	df e0                	fnstsw ax
  5cfcb6:	f6 c4 40             	test   ah,0x40
  5cfcb9:	75 03                	jne    0x5cfcbe
  5cfcbb:	33 c0                	xor    eax,eax
  5cfcbd:	c3                   	ret
  5cfcbe:	d9 41 0c             	fld    DWORD PTR [ecx+0xc]
  5cfcc1:	d8 5a 0c             	fcomp  DWORD PTR [edx+0xc]
  5cfcc4:	df e0                	fnstsw ax
  5cfcc6:	f6 c4 40             	test   ah,0x40
  5cfcc9:	75 03                	jne    0x5cfcce
  5cfccb:	33 c0                	xor    eax,eax
  5cfccd:	c3                   	ret
  5cfcce:	d9 41 18             	fld    DWORD PTR [ecx+0x18]
  5cfcd1:	d8 5a 18             	fcomp  DWORD PTR [edx+0x18]
  5cfcd4:	df e0                	fnstsw ax
  5cfcd6:	f6 c4 40             	test   ah,0x40
  5cfcd9:	75 03                	jne    0x5cfcde
  5cfcdb:	33 c0                	xor    eax,eax
  5cfcdd:	c3                   	ret
  5cfcde:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
  5cfce1:	d8 5a 04             	fcomp  DWORD PTR [edx+0x4]
  5cfce4:	df e0                	fnstsw ax
  5cfce6:	f6 c4 40             	test   ah,0x40
  5cfce9:	75 03                	jne    0x5cfcee
  5cfceb:	33 c0                	xor    eax,eax
  5cfced:	c3                   	ret
  5cfcee:	d9 41 10             	fld    DWORD PTR [ecx+0x10]
  5cfcf1:	d8 5a 10             	fcomp  DWORD PTR [edx+0x10]
  5cfcf4:	df e0                	fnstsw ax
  5cfcf6:	f6 c4 40             	test   ah,0x40
  5cfcf9:	75 03                	jne    0x5cfcfe
  5cfcfb:	33 c0                	xor    eax,eax
  5cfcfd:	c3                   	ret
  5cfcfe:	d9 41 1c             	fld    DWORD PTR [ecx+0x1c]
  5cfd01:	d8 5a 1c             	fcomp  DWORD PTR [edx+0x1c]
  5cfd04:	df e0                	fnstsw ax
  5cfd06:	f6 c4 40             	test   ah,0x40
  5cfd09:	75 03                	jne    0x5cfd0e
  5cfd0b:	33 c0                	xor    eax,eax
  5cfd0d:	c3                   	ret
  5cfd0e:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
  5cfd11:	d8 5a 08             	fcomp  DWORD PTR [edx+0x8]
  5cfd14:	df e0                	fnstsw ax
  5cfd16:	f6 c4 40             	test   ah,0x40
  5cfd19:	75 03                	jne    0x5cfd1e
  5cfd1b:	33 c0                	xor    eax,eax
  5cfd1d:	c3                   	ret
  5cfd1e:	d9 41 14             	fld    DWORD PTR [ecx+0x14]
  5cfd21:	d8 5a 14             	fcomp  DWORD PTR [edx+0x14]
  5cfd24:	df e0                	fnstsw ax
  5cfd26:	f6 c4 40             	test   ah,0x40
  5cfd29:	75 03                	jne    0x5cfd2e
  5cfd2b:	33 c0                	xor    eax,eax
  5cfd2d:	c3                   	ret
  5cfd2e:	d9 41 20             	fld    DWORD PTR [ecx+0x20]
  5cfd31:	d8 5a 20             	fcomp  DWORD PTR [edx+0x20]
  5cfd34:	df e0                	fnstsw ax
  5cfd36:	f6 c4 40             	test   ah,0x40
  5cfd39:	75 03                	jne    0x5cfd3e
  5cfd3b:	33 c0                	xor    eax,eax
  5cfd3d:	c3                   	ret
  5cfd3e:	d9 41 24             	fld    DWORD PTR [ecx+0x24]
  5cfd41:	d8 5a 24             	fcomp  DWORD PTR [edx+0x24]
  5cfd44:	df e0                	fnstsw ax
  5cfd46:	f6 c4 40             	test   ah,0x40
  5cfd49:	75 03                	jne    0x5cfd4e
  5cfd4b:	33 c0                	xor    eax,eax
  5cfd4d:	c3                   	ret
  5cfd4e:	d9 41 28             	fld    DWORD PTR [ecx+0x28]
  5cfd51:	d8 5a 28             	fcomp  DWORD PTR [edx+0x28]
  5cfd54:	df e0                	fnstsw ax
  5cfd56:	f6 c4 40             	test   ah,0x40
  5cfd59:	75 03                	jne    0x5cfd5e
  5cfd5b:	33 c0                	xor    eax,eax
  5cfd5d:	c3                   	ret
  5cfd5e:	d9 41 2c             	fld    DWORD PTR [ecx+0x2c]
  5cfd61:	d8 5a 2c             	fcomp  DWORD PTR [edx+0x2c]
  5cfd64:	df e0                	fnstsw ax
  5cfd66:	f6 c4 40             	test   ah,0x40
  5cfd69:	75 03                	jne    0x5cfd6e
  5cfd6b:	33 c0                	xor    eax,eax
  5cfd6d:	c3                   	ret
  5cfd6e:	b8 01 00 00 00       	mov    eax,0x1
  5cfd73:	c3                   	ret
  5cfd74:	90                   	nop
  5cfd75:	90                   	nop
  5cfd76:	90                   	nop
  5cfd77:	90                   	nop
  5cfd78:	90                   	nop
  5cfd79:	90                   	nop
  5cfd7a:	90                   	nop
  5cfd7b:	90                   	nop
  5cfd7c:	90                   	nop
  5cfd7d:	90                   	nop
  5cfd7e:	90                   	nop
  5cfd7f:	90                   	nop
  5cfd80:	8d 04 d5 00 00 00 00 	lea    eax,[edx*8+0x0]
  5cfd87:	56                   	push   esi
  5cfd88:	8b f1                	mov    esi,ecx
  5cfd8a:	2b c2                	sub    eax,edx
  5cfd8c:	57                   	push   edi
  5cfd8d:	8b 8e 18 01 00 00    	mov    ecx,DWORD PTR [esi+0x118]
  5cfd93:	8d 04 80             	lea    eax,[eax+eax*4]
  5cfd96:	8b 14 81             	mov    edx,DWORD PTR [ecx+eax*4]
  5cfd99:	8d 3c 81             	lea    edi,[ecx+eax*4]
  5cfd9c:	83 fa ff             	cmp    edx,0xffffffff
  5cfd9f:	74 07                	je     0x5cfda8
  5cfda1:	8b ce                	mov    ecx,esi
  5cfda3:	e8 d8 ff ff ff       	call   0x5cfd80
  5cfda8:	8b 17                	mov    edx,DWORD PTR [edi]
  5cfdaa:	52                   	push   edx
  5cfdab:	56                   	push   esi
  5cfdac:	e8 5f fb ff ff       	call   0x5cf910
  5cfdb1:	83 c4 08             	add    esp,0x8
  5cfdb4:	8b d7                	mov    edx,edi
  5cfdb6:	8b c8                	mov    ecx,eax
  5cfdb8:	5f                   	pop    edi
  5cfdb9:	5e                   	pop    esi
  5cfdba:	e9 51 fe ff ff       	jmp    0x5cfc10
  5cfdbf:	90                   	nop
  5cfdc0:	56                   	push   esi
  5cfdc1:	57                   	push   edi
  5cfdc2:	8b f2                	mov    esi,edx
  5cfdc4:	8b f9                	mov    edi,ecx
  5cfdc6:	8b ce                	mov    ecx,esi
  5cfdc8:	e8 63 b4 fc ff       	call   0x59b230
  5cfdcd:	85 c0                	test   eax,eax
  5cfdcf:	74 16                	je     0x5cfde7
  5cfdd1:	8b ce                	mov    ecx,esi
  5cfdd3:	e8 b8 d8 fe ff       	call   0x5bd690
  5cfdd8:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
  5cfddb:	33 c9                	xor    ecx,ecx
  5cfddd:	3b c2                	cmp    eax,edx
  5cfddf:	5f                   	pop    edi
  5cfde0:	0f 94 c1             	sete   cl
  5cfde3:	8b c1                	mov    eax,ecx
  5cfde5:	5e                   	pop    esi
  5cfde6:	c3                   	ret
  5cfde7:	5f                   	pop    edi
  5cfde8:	33 c0                	xor    eax,eax
  5cfdea:	5e                   	pop    esi
  5cfdeb:	c3                   	ret
  5cfdec:	90                   	nop
  5cfded:	90                   	nop
  5cfdee:	90                   	nop
  5cfdef:	90                   	nop
  5cfdf0:	83 ec 34             	sub    esp,0x34
  5cfdf3:	53                   	push   ebx
  5cfdf4:	8b d9                	mov    ebx,ecx
  5cfdf6:	55                   	push   ebp
  5cfdf7:	56                   	push   esi
  5cfdf8:	8b 43 24             	mov    eax,DWORD PTR [ebx+0x24]
  5cfdfb:	57                   	push   edi
  5cfdfc:	8b fa                	mov    edi,edx
  5cfdfe:	c7 83 1c 01 00 00 fe 	mov    DWORD PTR [ebx+0x11c],0xfffffffe
  5cfe05:	ff ff ff 
  5cfe08:	85 c0                	test   eax,eax
  5cfe0a:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  5cfe0e:	75 76                	jne    0x5cfe86
  5cfe10:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  5cfe14:	8d 54 24 14          	lea    edx,[esp+0x14]
  5cfe18:	50                   	push   eax
  5cfe19:	8b cf                	mov    ecx,edi
  5cfe1b:	e8 10 de fe ff       	call   0x5bdc30
  5cfe20:	85 c0                	test   eax,eax
  5cfe22:	74 18                	je     0x5cfe3c
  5cfe24:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  5cfe28:	85 c9                	test   ecx,ecx
  5cfe2a:	74 27                	je     0x5cfe53
  5cfe2c:	8d 54 24 14          	lea    edx,[esp+0x14]
  5cfe30:	52                   	push   edx
  5cfe31:	8d 54 24 18          	lea    edx,[esp+0x18]
  5cfe35:	e8 86 34 fe ff       	call   0x5b32c0
  5cfe3a:	eb 17                	jmp    0x5cfe53
  5cfe3c:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
  5cfe40:	85 f6                	test   esi,esi
  5cfe42:	74 42                	je     0x5cfe86
  5cfe44:	b9 0c 00 00 00       	mov    ecx,0xc
  5cfe49:	8d 7c 24 14          	lea    edi,[esp+0x14]
  5cfe4d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cfe4f:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  5cfe53:	8d 93 98 00 00 00    	lea    edx,[ebx+0x98]
  5cfe59:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5cfe5d:	e8 7e 57 fe ff       	call   0x5b55e0
  5cfe62:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  5cfe66:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  5cfe6a:	8d 83 8c 00 00 00    	lea    eax,[ebx+0x8c]
  5cfe70:	c7 83 a8 00 00 00 01 	mov    DWORD PTR [ebx+0xa8],0x1
  5cfe77:	00 00 00 
  5cfe7a:	89 08                	mov    DWORD PTR [eax],ecx
  5cfe7c:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  5cfe80:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  5cfe83:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  5cfe86:	85 ff                	test   edi,edi
  5cfe88:	0f 84 98 00 00 00    	je     0x5cff26
  5cfe8e:	8b d7                	mov    edx,edi
  5cfe90:	8b cb                	mov    ecx,ebx
  5cfe92:	e8 29 ff ff ff       	call   0x5cfdc0
  5cfe97:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  5cfe99:	48                   	dec    eax
  5cfe9a:	8b b3 18 01 00 00    	mov    esi,DWORD PTR [ebx+0x118]
  5cfea0:	c7 43 08 01 00 00 00 	mov    DWORD PTR [ebx+0x8],0x1
  5cfea7:	f7 d8                	neg    eax
  5cfea9:	1b c0                	sbb    eax,eax
  5cfeab:	33 ed                	xor    ebp,ebp
  5cfead:	f7 d8                	neg    eax
  5cfeaf:	85 c9                	test   ecx,ecx
  5cfeb1:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
  5cfeb5:	7e 6f                	jle    0x5cff26
  5cfeb7:	83 c6 64             	add    esi,0x64
  5cfeba:	eb 04                	jmp    0x5cfec0
  5cfebc:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  5cfec0:	8d 7e 0c             	lea    edi,[esi+0xc]
  5cfec3:	56                   	push   esi
  5cfec4:	85 c0                	test   eax,eax
  5cfec6:	57                   	push   edi
  5cfec7:	75 12                	jne    0x5cfedb
  5cfec9:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
  5cfecd:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5cfed1:	52                   	push   edx
  5cfed2:	8b d5                	mov    edx,ebp
  5cfed4:	e8 a7 d8 fe ff       	call   0x5bd780
  5cfed9:	eb 1e                	jmp    0x5cfef9
  5cfedb:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  5cfedf:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
  5cfee2:	50                   	push   eax
  5cfee3:	8b d5                	mov    edx,ebp
  5cfee5:	e8 26 1c 00 00       	call   0x5d1b10
  5cfeea:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5cfeee:	8b d0                	mov    edx,eax
  5cfef0:	e8 db d9 fe ff       	call   0x5bd8d0
  5cfef5:	85 c0                	test   eax,eax
  5cfef7:	74 20                	je     0x5cff19
  5cfef9:	c7 47 10 01 00 00 00 	mov    DWORD PTR [edi+0x10],0x1
  5cff00:	d9 43 10             	fld    DWORD PTR [ebx+0x10]
  5cff03:	d8 0e                	fmul   DWORD PTR [esi]
  5cff05:	d9 1e                	fstp   DWORD PTR [esi]
  5cff07:	d9 43 14             	fld    DWORD PTR [ebx+0x14]
  5cff0a:	d8 4e 04             	fmul   DWORD PTR [esi+0x4]
  5cff0d:	d9 5e 04             	fstp   DWORD PTR [esi+0x4]
  5cff10:	d9 43 18             	fld    DWORD PTR [ebx+0x18]
  5cff13:	d8 4e 08             	fmul   DWORD PTR [esi+0x8]
  5cff16:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
  5cff19:	8b 03                	mov    eax,DWORD PTR [ebx]
  5cff1b:	45                   	inc    ebp
  5cff1c:	81 c6 8c 00 00 00    	add    esi,0x8c
  5cff22:	3b e8                	cmp    ebp,eax
  5cff24:	7c 96                	jl     0x5cfebc
  5cff26:	5f                   	pop    edi
  5cff27:	5e                   	pop    esi
  5cff28:	5d                   	pop    ebp
  5cff29:	5b                   	pop    ebx
  5cff2a:	83 c4 34             	add    esp,0x34
  5cff2d:	c2 08 00             	ret    0x8
  5cff30:	83 ec 50             	sub    esp,0x50
  5cff33:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  5cff37:	53                   	push   ebx
  5cff38:	55                   	push   ebp
  5cff39:	56                   	push   esi
  5cff3a:	57                   	push   edi
  5cff3b:	8b d9                	mov    ebx,ecx
  5cff3d:	bd 01 00 00 00       	mov    ebp,0x1
  5cff42:	8b fa                	mov    edi,edx
  5cff44:	3b c5                	cmp    eax,ebp
  5cff46:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  5cff4a:	c7 83 1c 01 00 00 fe 	mov    DWORD PTR [ebx+0x11c],0xfffffffe
  5cff51:	ff ff ff 
  5cff54:	75 20                	jne    0x5cff76
  5cff56:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
  5cff5a:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
  5cff5e:	d9 c0                	fld    st(0)
  5cff60:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
  5cff64:	d9 c9                	fxch   st(1)
  5cff66:	d8 0d 30 a4 64 00    	fmul   DWORD PTR ds:0x64a430
  5cff6c:	d8 e1                	fsub   st,st(1)
  5cff6e:	d8 e1                	fsub   st,st(1)
  5cff70:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
  5cff74:	dd d8                	fstp   st(0)
  5cff76:	8b 43 24             	mov    eax,DWORD PTR [ebx+0x24]
  5cff79:	85 c0                	test   eax,eax
  5cff7b:	0f 85 da 00 00 00    	jne    0x5d005b
  5cff81:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  5cff85:	8d 54 24 30          	lea    edx,[esp+0x30]
  5cff89:	50                   	push   eax
  5cff8a:	8b cf                	mov    ecx,edi
  5cff8c:	e8 9f dc fe ff       	call   0x5bdc30
  5cff91:	85 c0                	test   eax,eax
  5cff93:	74 18                	je     0x5cffad
  5cff95:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
  5cff99:	85 c9                	test   ecx,ecx
  5cff9b:	74 30                	je     0x5cffcd
  5cff9d:	8d 54 24 30          	lea    edx,[esp+0x30]
  5cffa1:	52                   	push   edx
  5cffa2:	8d 54 24 34          	lea    edx,[esp+0x34]
  5cffa6:	e8 15 33 fe ff       	call   0x5b32c0
  5cffab:	eb 20                	jmp    0x5cffcd
  5cffad:	8b 74 24 68          	mov    esi,DWORD PTR [esp+0x68]
  5cffb1:	85 f6                	test   esi,esi
  5cffb3:	0f 84 a2 00 00 00    	je     0x5d005b
  5cffb9:	b9 0c 00 00 00       	mov    ecx,0xc
  5cffbe:	8d 7c 24 30          	lea    edi,[esp+0x30]
  5cffc2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cffc4:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  5cffc8:	bd 01 00 00 00       	mov    ebp,0x1
  5cffcd:	8d 54 24 20          	lea    edx,[esp+0x20]
  5cffd1:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5cffd5:	e8 06 56 fe ff       	call   0x5b55e0
  5cffda:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  5cffde:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  5cffe2:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  5cffe6:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  5cffea:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5cffee:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
  5cfff2:	8d 8b 98 00 00 00    	lea    ecx,[ebx+0x98]
  5cfff8:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  5cfffc:	51                   	push   ecx
  5cfffd:	50                   	push   eax
  5cfffe:	8d 54 24 28          	lea    edx,[esp+0x28]
  5d0002:	e8 e9 59 fe ff       	call   0x5b59f0
  5d0007:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5d000b:	d8 a3 8c 00 00 00    	fsub   DWORD PTR [ebx+0x8c]
  5d0011:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
  5d0015:	d8 83 8c 00 00 00    	fadd   DWORD PTR [ebx+0x8c]
  5d001b:	d9 9b 8c 00 00 00    	fstp   DWORD PTR [ebx+0x8c]
  5d0021:	d9 83 90 00 00 00    	fld    DWORD PTR [ebx+0x90]
  5d0027:	d8 6c 24 18          	fsubr  DWORD PTR [esp+0x18]
  5d002b:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
  5d002f:	d8 83 90 00 00 00    	fadd   DWORD PTR [ebx+0x90]
  5d0035:	d9 9b 90 00 00 00    	fstp   DWORD PTR [ebx+0x90]
  5d003b:	d9 83 94 00 00 00    	fld    DWORD PTR [ebx+0x94]
  5d0041:	d8 6c 24 1c          	fsubr  DWORD PTR [esp+0x1c]
  5d0045:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
  5d0049:	d8 83 94 00 00 00    	fadd   DWORD PTR [ebx+0x94]
  5d004f:	d9 9b 94 00 00 00    	fstp   DWORD PTR [ebx+0x94]
  5d0055:	89 ab a8 00 00 00    	mov    DWORD PTR [ebx+0xa8],ebp
  5d005b:	85 ff                	test   edi,edi
  5d005d:	0f 84 dc 00 00 00    	je     0x5d013f
  5d0063:	8b d7                	mov    edx,edi
  5d0065:	8b cb                	mov    ecx,ebx
  5d0067:	e8 54 fd ff ff       	call   0x5cfdc0
  5d006c:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  5d006e:	8b f8                	mov    edi,eax
  5d0070:	4f                   	dec    edi
  5d0071:	8b 83 18 01 00 00    	mov    eax,DWORD PTR [ebx+0x118]
  5d0077:	f7 df                	neg    edi
  5d0079:	1b ff                	sbb    edi,edi
  5d007b:	89 6b 08             	mov    DWORD PTR [ebx+0x8],ebp
  5d007e:	f7 df                	neg    edi
  5d0080:	33 ed                	xor    ebp,ebp
  5d0082:	85 c9                	test   ecx,ecx
  5d0084:	0f 8e b5 00 00 00    	jle    0x5d013f
  5d008a:	8d 70 6c             	lea    esi,[eax+0x6c]
  5d008d:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  5d0091:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5d0095:	8d 54 24 20          	lea    edx,[esp+0x20]
  5d0099:	51                   	push   ecx
  5d009a:	85 ff                	test   edi,edi
  5d009c:	52                   	push   edx
  5d009d:	50                   	push   eax
  5d009e:	8b d5                	mov    edx,ebp
  5d00a0:	75 0b                	jne    0x5d00ad
  5d00a2:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5d00a6:	e8 d5 d6 fe ff       	call   0x5bd780
  5d00ab:	eb 17                	jmp    0x5d00c4
  5d00ad:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
  5d00b0:	e8 5b 1a 00 00       	call   0x5d1b10
  5d00b5:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5d00b9:	8b d0                	mov    edx,eax
  5d00bb:	e8 10 d8 fe ff       	call   0x5bd8d0
  5d00c0:	85 c0                	test   eax,eax
  5d00c2:	74 6a                	je     0x5d012e
  5d00c4:	c7 46 14 01 00 00 00 	mov    DWORD PTR [esi+0x14],0x1
  5d00cb:	8b 54 24 6c          	mov    edx,DWORD PTR [esp+0x6c]
  5d00cf:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5d00d3:	d8 4b 10             	fmul   DWORD PTR [ebx+0x10]
  5d00d6:	8d 4e 04             	lea    ecx,[esi+0x4]
  5d00d9:	51                   	push   ecx
  5d00da:	52                   	push   edx
  5d00db:	8d 54 24 28          	lea    edx,[esp+0x28]
  5d00df:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  5d00e3:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  5d00e7:	d8 4b 14             	fmul   DWORD PTR [ebx+0x14]
  5d00ea:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  5d00ee:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  5d00f2:	d8 4b 18             	fmul   DWORD PTR [ebx+0x18]
  5d00f5:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  5d00f9:	e8 f2 58 fe ff       	call   0x5b59f0
  5d00fe:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5d0102:	d8 66 f8             	fsub   DWORD PTR [esi-0x8]
  5d0105:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
  5d0109:	d8 46 f8             	fadd   DWORD PTR [esi-0x8]
  5d010c:	d9 5e f8             	fstp   DWORD PTR [esi-0x8]
  5d010f:	d9 46 fc             	fld    DWORD PTR [esi-0x4]
  5d0112:	d8 6c 24 18          	fsubr  DWORD PTR [esp+0x18]
  5d0116:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
  5d011a:	d8 46 fc             	fadd   DWORD PTR [esi-0x4]
  5d011d:	d9 5e fc             	fstp   DWORD PTR [esi-0x4]
  5d0120:	d9 06                	fld    DWORD PTR [esi]
  5d0122:	d8 6c 24 1c          	fsubr  DWORD PTR [esp+0x1c]
  5d0126:	d8 4c 24 6c          	fmul   DWORD PTR [esp+0x6c]
  5d012a:	d8 06                	fadd   DWORD PTR [esi]
  5d012c:	d9 1e                	fstp   DWORD PTR [esi]
  5d012e:	8b 03                	mov    eax,DWORD PTR [ebx]
  5d0130:	45                   	inc    ebp
  5d0131:	81 c6 8c 00 00 00    	add    esi,0x8c
  5d0137:	3b e8                	cmp    ebp,eax
  5d0139:	0f 8c 4e ff ff ff    	jl     0x5d008d
  5d013f:	5f                   	pop    edi
  5d0140:	5e                   	pop    esi
  5d0141:	5d                   	pop    ebp
  5d0142:	5b                   	pop    ebx
  5d0143:	83 c4 50             	add    esp,0x50
  5d0146:	c2 10 00             	ret    0x10
  5d0149:	90                   	nop
  5d014a:	90                   	nop
  5d014b:	90                   	nop
  5d014c:	90                   	nop
  5d014d:	90                   	nop
  5d014e:	90                   	nop
  5d014f:	90                   	nop
  5d0150:	56                   	push   esi
  5d0151:	8b f1                	mov    esi,ecx
  5d0153:	e8 78 f8 ff ff       	call   0x5cf9d0
  5d0158:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
  5d015e:	5e                   	pop    esi
  5d015f:	c3                   	ret
  5d0160:	83 c1 10             	add    ecx,0x10
  5d0163:	8b 01                	mov    eax,DWORD PTR [ecx]
  5d0165:	89 02                	mov    DWORD PTR [edx],eax
  5d0167:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  5d016a:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  5d016d:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5d0170:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  5d0173:	c3                   	ret
  5d0174:	90                   	nop
  5d0175:	90                   	nop
  5d0176:	90                   	nop
  5d0177:	90                   	nop
  5d0178:	90                   	nop
  5d0179:	90                   	nop
  5d017a:	90                   	nop
  5d017b:	90                   	nop
  5d017c:	90                   	nop
  5d017d:	90                   	nop
  5d017e:	90                   	nop
  5d017f:	90                   	nop
  5d0180:	56                   	push   esi
  5d0181:	8b f2                	mov    esi,edx
  5d0183:	57                   	push   edi
  5d0184:	8d 41 10             	lea    eax,[ecx+0x10]
  5d0187:	8b 3e                	mov    edi,DWORD PTR [esi]
  5d0189:	89 38                	mov    DWORD PTR [eax],edi
  5d018b:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  5d018e:	89 78 04             	mov    DWORD PTR [eax+0x4],edi
  5d0191:	8b 39                	mov    edi,DWORD PTR [ecx]
  5d0193:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
  5d0196:	89 70 08             	mov    DWORD PTR [eax+0x8],esi
  5d0199:	8b 81 18 01 00 00    	mov    eax,DWORD PTR [ecx+0x118]
  5d019f:	33 f6                	xor    esi,esi
  5d01a1:	85 ff                	test   edi,edi
  5d01a3:	7e 44                	jle    0x5d01e9
  5d01a5:	83 c0 58             	add    eax,0x58
  5d01a8:	bf 01 00 00 00       	mov    edi,0x1
  5d01ad:	d9 40 c0             	fld    DWORD PTR [eax-0x40]
  5d01b0:	d8 0a                	fmul   DWORD PTR [edx]
  5d01b2:	46                   	inc    esi
  5d01b3:	05 8c 00 00 00       	add    eax,0x8c
  5d01b8:	d9 98 74 ff ff ff    	fstp   DWORD PTR [eax-0x8c]
  5d01be:	d9 80 38 ff ff ff    	fld    DWORD PTR [eax-0xc8]
  5d01c4:	d8 4a 04             	fmul   DWORD PTR [edx+0x4]
  5d01c7:	d9 98 78 ff ff ff    	fstp   DWORD PTR [eax-0x88]
  5d01cd:	d9 80 3c ff ff ff    	fld    DWORD PTR [eax-0xc4]
  5d01d3:	d8 4a 08             	fmul   DWORD PTR [edx+0x8]
  5d01d6:	89 78 9c             	mov    DWORD PTR [eax-0x64],edi
  5d01d9:	d9 98 7c ff ff ff    	fstp   DWORD PTR [eax-0x84]
  5d01df:	3b 31                	cmp    esi,DWORD PTR [ecx]
  5d01e1:	7c ca                	jl     0x5d01ad
  5d01e3:	89 79 08             	mov    DWORD PTR [ecx+0x8],edi
  5d01e6:	5f                   	pop    edi
  5d01e7:	5e                   	pop    esi
  5d01e8:	c3                   	ret
  5d01e9:	5f                   	pop    edi
  5d01ea:	c7 41 08 01 00 00 00 	mov    DWORD PTR [ecx+0x8],0x1
  5d01f1:	5e                   	pop    esi
  5d01f2:	c3                   	ret
  5d01f3:	90                   	nop
  5d01f4:	90                   	nop
  5d01f5:	90                   	nop
  5d01f6:	90                   	nop
  5d01f7:	90                   	nop
  5d01f8:	90                   	nop
  5d01f9:	90                   	nop
  5d01fa:	90                   	nop
  5d01fb:	90                   	nop
  5d01fc:	90                   	nop
  5d01fd:	90                   	nop
  5d01fe:	90                   	nop
  5d01ff:	90                   	nop
  5d0200:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5d0204:	d8 54 24 10          	fcom   DWORD PTR [esp+0x10]
  5d0208:	df e0                	fnstsw ax
  5d020a:	f6 c4 41             	test   ah,0x41
  5d020d:	75 0b                	jne    0x5d021a
  5d020f:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5d0213:	d9 59 0c             	fstp   DWORD PTR [ecx+0xc]
  5d0216:	89 01                	mov    DWORD PTR [ecx],eax
  5d0218:	eb 09                	jmp    0x5d0223
  5d021a:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5d021e:	d9 19                	fstp   DWORD PTR [ecx]
  5d0220:	89 51 0c             	mov    DWORD PTR [ecx+0xc],edx
  5d0223:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  5d0227:	d8 54 24 14          	fcom   DWORD PTR [esp+0x14]
  5d022b:	df e0                	fnstsw ax
  5d022d:	f6 c4 41             	test   ah,0x41
  5d0230:	75 0c                	jne    0x5d023e
  5d0232:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5d0236:	d9 59 10             	fstp   DWORD PTR [ecx+0x10]
  5d0239:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  5d023c:	eb 0a                	jmp    0x5d0248
  5d023e:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5d0242:	d9 59 04             	fstp   DWORD PTR [ecx+0x4]
  5d0245:	89 51 10             	mov    DWORD PTR [ecx+0x10],edx
  5d0248:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  5d024c:	d8 54 24 18          	fcom   DWORD PTR [esp+0x18]
  5d0250:	df e0                	fnstsw ax
  5d0252:	f6 c4 41             	test   ah,0x41
  5d0255:	75 0d                	jne    0x5d0264
  5d0257:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5d025b:	d9 59 14             	fstp   DWORD PTR [ecx+0x14]
  5d025e:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  5d0261:	c2 18 00             	ret    0x18
  5d0264:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5d0268:	d9 59 08             	fstp   DWORD PTR [ecx+0x8]
  5d026b:	89 51 14             	mov    DWORD PTR [ecx+0x14],edx
  5d026e:	c2 18 00             	ret    0x18
  5d0271:	90                   	nop
  5d0272:	90                   	nop
  5d0273:	90                   	nop
  5d0274:	90                   	nop
  5d0275:	90                   	nop
  5d0276:	90                   	nop
  5d0277:	90                   	nop
  5d0278:	90                   	nop
  5d0279:	90                   	nop
  5d027a:	90                   	nop
  5d027b:	90                   	nop
  5d027c:	90                   	nop
  5d027d:	90                   	nop
  5d027e:	90                   	nop
  5d027f:	90                   	nop
  5d0280:	d9 41 14             	fld    DWORD PTR [ecx+0x14]
  5d0283:	d8 41 08             	fadd   DWORD PTR [ecx+0x8]
  5d0286:	51                   	push   ecx
  5d0287:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  5d028d:	d9 1c 24             	fstp   DWORD PTR [esp]
  5d0290:	d9 41 10             	fld    DWORD PTR [ecx+0x10]
  5d0293:	d8 41 04             	fadd   DWORD PTR [ecx+0x4]
  5d0296:	51                   	push   ecx
  5d0297:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  5d029d:	d9 1c 24             	fstp   DWORD PTR [esp]
  5d02a0:	d9 41 0c             	fld    DWORD PTR [ecx+0xc]
  5d02a3:	d8 01                	fadd   DWORD PTR [ecx]
  5d02a5:	51                   	push   ecx
  5d02a6:	8b ca                	mov    ecx,edx
  5d02a8:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  5d02ae:	d9 1c 24             	fstp   DWORD PTR [esp]
  5d02b1:	e8 6a 2b fe ff       	call   0x5b2e20
  5d02b6:	c3                   	ret
  5d02b7:	90                   	nop
  5d02b8:	90                   	nop
  5d02b9:	90                   	nop
  5d02ba:	90                   	nop
  5d02bb:	90                   	nop
  5d02bc:	90                   	nop
  5d02bd:	90                   	nop
  5d02be:	90                   	nop
  5d02bf:	90                   	nop
  5d02c0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5d02c4:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5d02c8:	83 ec 0c             	sub    esp,0xc
  5d02cb:	56                   	push   esi
  5d02cc:	8b f1                	mov    esi,ecx
  5d02ce:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5d02d2:	50                   	push   eax
  5d02d3:	51                   	push   ecx
  5d02d4:	52                   	push   edx
  5d02d5:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5d02d9:	e8 42 2b fe ff       	call   0x5b2e20
  5d02de:	8d 54 24 04          	lea    edx,[esp+0x4]
  5d02e2:	8b ce                	mov    ecx,esi
  5d02e4:	56                   	push   esi
  5d02e5:	e8 16 2d fe ff       	call   0x5b3000
  5d02ea:	8d 4e 0c             	lea    ecx,[esi+0xc]
  5d02ed:	8d 54 24 04          	lea    edx,[esp+0x4]
  5d02f1:	51                   	push   ecx
  5d02f2:	e8 09 2d fe ff       	call   0x5b3000
  5d02f7:	5e                   	pop    esi
  5d02f8:	83 c4 0c             	add    esp,0xc
  5d02fb:	c2 0c 00             	ret    0xc
  5d02fe:	90                   	nop
  5d02ff:	90                   	nop
