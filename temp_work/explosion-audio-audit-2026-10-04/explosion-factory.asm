  58d500:	6a ff                	push   0xffffffff
  58d502:	68 70 31 64 00       	push   0x643170
  58d507:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  58d50d:	50                   	push   eax
  58d50e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  58d515:	83 ec 24             	sub    esp,0x24
  58d518:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  58d51c:	53                   	push   ebx
  58d51d:	55                   	push   ebp
  58d51e:	56                   	push   esi
  58d51f:	8b e9                	mov    ebp,ecx
  58d521:	57                   	push   edi
  58d522:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  58d526:	bf 18 62 6a 00       	mov    edi,0x6a6218
  58d52b:	83 c9 ff             	or     ecx,0xffffffff
  58d52e:	33 c0                	xor    eax,eax
  58d530:	33 f6                	xor    esi,esi
  58d532:	6a 01                	push   0x1
  58d534:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  58d536:	f7 d1                	not    ecx
  58d538:	49                   	dec    ecx
  58d539:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  58d53d:	8b d9                	mov    ebx,ecx
  58d53f:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  58d543:	53                   	push   ebx
  58d544:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  58d548:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  58d54c:	e8 ef 43 e7 ff       	call   0x401940
  58d551:	84 c0                	test   al,al
  58d553:	74 27                	je     0x58d57c
  58d555:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  58d559:	8b cb                	mov    ecx,ebx
  58d55b:	8b d1                	mov    edx,ecx
  58d55d:	be 18 62 6a 00       	mov    esi,0x6a6218
  58d562:	c1 e9 02             	shr    ecx,0x2
  58d565:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  58d567:	8b ca                	mov    ecx,edx
  58d569:	83 e1 03             	and    ecx,0x3
  58d56c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  58d56e:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  58d572:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  58d576:	33 f6                	xor    esi,esi
  58d578:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  58d57c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  58d580:	8d 54 24 24          	lea    edx,[esp+0x24]
  58d584:	51                   	push   ecx
  58d585:	52                   	push   edx
  58d586:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
  58d58a:	e8 11 5e f7 ff       	call   0x5033a0
  58d58f:	83 c4 08             	add    esp,0x8
  58d592:	50                   	push   eax
  58d593:	8b cd                	mov    ecx,ebp
  58d595:	c6 44 24 40 01       	mov    BYTE PTR [esp+0x40],0x1
  58d59a:	e8 41 f8 f1 ff       	call   0x4acde0
  58d59f:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  58d5a3:	3b c6                	cmp    eax,esi
  58d5a5:	74 1d                	je     0x58d5c4
  58d5a7:	8d 48 ff             	lea    ecx,[eax-0x1]
  58d5aa:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  58d5ad:	84 c0                	test   al,al
  58d5af:	74 0a                	je     0x58d5bb
  58d5b1:	3c ff                	cmp    al,0xff
  58d5b3:	74 06                	je     0x58d5bb
  58d5b5:	fe c8                	dec    al
  58d5b7:	88 01                	mov    BYTE PTR [ecx],al
  58d5b9:	eb 09                	jmp    0x58d5c4
  58d5bb:	51                   	push   ecx
  58d5bc:	e8 2f 10 07 00       	call   0x5fe5f0
  58d5c1:	83 c4 04             	add    esp,0x4
  58d5c4:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  58d5c8:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  58d5cc:	3b c6                	cmp    eax,esi
  58d5ce:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  58d5d2:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  58d5d6:	74 1d                	je     0x58d5f5
  58d5d8:	8d 48 ff             	lea    ecx,[eax-0x1]
  58d5db:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  58d5de:	84 c0                	test   al,al
  58d5e0:	74 0a                	je     0x58d5ec
  58d5e2:	3c ff                	cmp    al,0xff
  58d5e4:	74 06                	je     0x58d5ec
  58d5e6:	fe c8                	dec    al
  58d5e8:	88 01                	mov    BYTE PTR [ecx],al
  58d5ea:	eb 09                	jmp    0x58d5f5
  58d5ec:	51                   	push   ecx
  58d5ed:	e8 fe 0f 07 00       	call   0x5fe5f0
  58d5f2:	83 c4 04             	add    esp,0x4
  58d5f5:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  58d5f9:	b8 00 00 c8 41       	mov    eax,0x41c80000
  58d5fe:	89 b5 78 01 00 00    	mov    DWORD PTR [ebp+0x178],esi
  58d604:	89 85 80 01 00 00    	mov    DWORD PTR [ebp+0x180],eax
  58d60a:	89 85 84 01 00 00    	mov    DWORD PTR [ebp+0x184],eax
  58d610:	5f                   	pop    edi
  58d611:	c6 85 74 01 00 00 00 	mov    BYTE PTR [ebp+0x174],0x0
  58d618:	c6 85 75 01 00 00 00 	mov    BYTE PTR [ebp+0x175],0x0
  58d61f:	c7 85 7c 01 00 00 01 	mov    DWORD PTR [ebp+0x17c],0x1
  58d626:	00 00 00 
  58d629:	c7 45 00 24 fe 64 00 	mov    DWORD PTR [ebp+0x0],0x64fe24
  58d630:	8b c5                	mov    eax,ebp
  58d632:	5e                   	pop    esi
  58d633:	5d                   	pop    ebp
  58d634:	5b                   	pop    ebx
  58d635:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  58d63c:	83 c4 30             	add    esp,0x30
  58d63f:	c3                   	ret
  58d640:	56                   	push   esi
  58d641:	8b f1                	mov    esi,ecx
  58d643:	e8 18 00 00 00       	call   0x58d660
  58d648:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  58d64d:	74 09                	je     0x58d658
  58d64f:	56                   	push   esi
  58d650:	e8 9b 0f 07 00       	call   0x5fe5f0
  58d655:	83 c4 04             	add    esp,0x4
  58d658:	8b c6                	mov    eax,esi
  58d65a:	5e                   	pop    esi
  58d65b:	c2 04 00             	ret    0x4
  58d65e:	90                   	nop
  58d65f:	90                   	nop
  58d660:	6a ff                	push   0xffffffff
  58d662:	68 98 31 64 00       	push   0x643198
  58d667:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  58d66d:	50                   	push   eax
  58d66e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  58d675:	51                   	push   ecx
  58d676:	56                   	push   esi
  58d677:	8b f1                	mov    esi,ecx
  58d679:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  58d67d:	c7 06 24 fe 64 00    	mov    DWORD PTR [esi],0x64fe24
  58d683:	6a 00                	push   0x0
  58d685:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  58d68c:	00 
  58d68d:	e8 9e 18 00 00       	call   0x58ef30
  58d692:	8d 8e 40 01 00 00    	lea    ecx,[esi+0x140]
  58d698:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
  58d69f:	00 
  58d6a0:	e8 cb fb f1 ff       	call   0x4ad270
  58d6a5:	c7 06 0c c5 64 00    	mov    DWORD PTR [esi],0x64c50c
  58d6ab:	8b 0d cc 93 6b 00    	mov    ecx,DWORD PTR ds:0x6b93cc
  58d6b1:	c7 44 24 10 02 00 00 	mov    DWORD PTR [esp+0x10],0x2
  58d6b8:	00 
  58d6b9:	49                   	dec    ecx
  58d6ba:	89 0d cc 93 6b 00    	mov    DWORD PTR ds:0x6b93cc,ecx
  58d6c0:	8b 8e 3c 01 00 00    	mov    ecx,DWORD PTR [esi+0x13c]
  58d6c6:	85 c9                	test   ecx,ecx
  58d6c8:	74 1a                	je     0x58d6e4
  58d6ca:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  58d6cd:	48                   	dec    eax
  58d6ce:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  58d6d1:	75 07                	jne    0x58d6da
  58d6d3:	6a 00                	push   0x0
  58d6d5:	e8 e6 e8 01 00       	call   0x5abfc0
  58d6da:	c7 86 3c 01 00 00 00 	mov    DWORD PTR [esi+0x13c],0x0
  58d6e1:	00 00 00 
  58d6e4:	8b ce                	mov    ecx,esi
  58d6e6:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  58d6ed:	ff 
  58d6ee:	e8 4d 48 f7 ff       	call   0x501f40
  58d6f3:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  58d6f7:	5e                   	pop    esi
  58d6f8:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  58d6ff:	83 c4 10             	add    esp,0x10
  58d702:	c3                   	ret
  58d703:	90                   	nop
  58d704:	90                   	nop
  58d705:	90                   	nop
  58d706:	90                   	nop
  58d707:	90                   	nop
  58d708:	90                   	nop
  58d709:	90                   	nop
  58d70a:	90                   	nop
  58d70b:	90                   	nop
  58d70c:	90                   	nop
  58d70d:	90                   	nop
  58d70e:	90                   	nop
  58d70f:	90                   	nop
  58d710:	6a ff                	push   0xffffffff
  58d712:	68 72 33 64 00       	push   0x643372
  58d717:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  58d71d:	50                   	push   eax
  58d71e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  58d725:	83 ec 60             	sub    esp,0x60
  58d728:	53                   	push   ebx
  58d729:	55                   	push   ebp
  58d72a:	8b e9                	mov    ebp,ecx
  58d72c:	56                   	push   esi
  58d72d:	57                   	push   edi
  58d72e:	83 cb ff             	or     ebx,0xffffffff
  58d731:	d9 85 84 01 00 00    	fld    DWORD PTR [ebp+0x184]
  58d737:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  58d73d:	8a 85 75 01 00 00    	mov    al,BYTE PTR [ebp+0x175]
  58d743:	33 ff                	xor    edi,edi
  58d745:	84 c0                	test   al,al
  58d747:	d9 c0                	fld    st(0)
  58d749:	d8 0d 90 fe 64 00    	fmul   DWORD PTR ds:0x64fe90
  58d74f:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  58d753:	d9 85 80 01 00 00    	fld    DWORD PTR [ebp+0x180]
  58d759:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  58d75f:	d8 0d 8c fe 64 00    	fmul   DWORD PTR ds:0x64fe8c
  58d765:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  58d769:	d9 c0                	fld    st(0)
  58d76b:	d8 0d 64 c5 64 00    	fmul   DWORD PTR ds:0x64c564
  58d771:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  58d775:	d8 0d bc d0 64 00    	fmul   DWORD PTR ds:0x64d0bc
  58d77b:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  58d77f:	0f 85 c2 00 00 00    	jne    0x58d847
  58d785:	8b 85 7c 01 00 00    	mov    eax,DWORD PTR [ebp+0x17c]
  58d78b:	83 e8 02             	sub    eax,0x2
  58d78e:	74 3d                	je     0x58d7cd
  58d790:	48                   	dec    eax
  58d791:	0f 85 b0 00 00 00    	jne    0x58d847
  58d797:	68 a4 00 00 00       	push   0xa4
  58d79c:	e8 14 c9 07 00       	call   0x60a0b5
  58d7a1:	83 c4 04             	add    esp,0x4
  58d7a4:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58d7a8:	3b c7                	cmp    eax,edi
  58d7aa:	c7 44 24 78 05 00 00 	mov    DWORD PTR [esp+0x78],0x5
  58d7b1:	00 
  58d7b2:	74 47                	je     0x58d7fb
  58d7b4:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58d7b7:	68 60 93 6c 00       	push   0x6c9360
  58d7bc:	51                   	push   ecx
  58d7bd:	68 90 01 00 00       	push   0x190
  58d7c2:	8b c8                	mov    ecx,eax
  58d7c4:	e8 a7 6f f2 ff       	call   0x4b4770
  58d7c9:	8b f0                	mov    esi,eax
  58d7cb:	eb 30                	jmp    0x58d7fd
  58d7cd:	68 a4 00 00 00       	push   0xa4
  58d7d2:	e8 de c8 07 00       	call   0x60a0b5
  58d7d7:	83 c4 04             	add    esp,0x4
  58d7da:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58d7de:	3b c7                	cmp    eax,edi
  58d7e0:	89 7c 24 78          	mov    DWORD PTR [esp+0x78],edi
  58d7e4:	74 15                	je     0x58d7fb
  58d7e6:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58d7e9:	68 00 9e 6b 00       	push   0x6b9e00
  58d7ee:	52                   	push   edx
  58d7ef:	57                   	push   edi
  58d7f0:	8b c8                	mov    ecx,eax
  58d7f2:	e8 79 6f f2 ff       	call   0x4b4770
  58d7f7:	8b f0                	mov    esi,eax
  58d7f9:	eb 02                	jmp    0x58d7fd
  58d7fb:	33 f6                	xor    esi,esi
  58d7fd:	56                   	push   esi
  58d7fe:	8b cd                	mov    ecx,ebp
  58d800:	89 5c 24 7c          	mov    DWORD PTR [esp+0x7c],ebx
  58d804:	e8 d7 f8 f1 ff       	call   0x4ad0e0
  58d809:	8b c8                	mov    ecx,eax
  58d80b:	e8 d0 fa f1 ff       	call   0x4ad2e0
  58d810:	e8 8b cc 07 00       	call   0x60a4a0
  58d815:	68 58 02 00 00       	push   0x258
  58d81a:	8d 4e 60             	lea    ecx,[esi+0x60]
  58d81d:	e8 8e 69 e7 ff       	call   0x4041b0
  58d822:	c7 46 70 cd cc cc 3d 	mov    DWORD PTR [esi+0x70],0x3dcccccd
  58d829:	c7 46 74 00 00 80 40 	mov    DWORD PTR [esi+0x74],0x40800000
  58d830:	68 58 02 00 00       	push   0x258
  58d835:	c7 46 78 00 00 7f 43 	mov    DWORD PTR [esi+0x78],0x437f0000
  58d83c:	57                   	push   edi
  58d83d:	8b ce                	mov    ecx,esi
  58d83f:	89 7e 7c             	mov    DWORD PTR [esi+0x7c],edi
  58d842:	e8 59 01 f2 ff       	call   0x4ad9a0
  58d847:	6a 78                	push   0x78
  58d849:	e8 67 c8 07 00       	call   0x60a0b5
  58d84e:	83 c4 04             	add    esp,0x4
  58d851:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58d855:	3b c7                	cmp    eax,edi
  58d857:	c7 44 24 78 0a 00 00 	mov    DWORD PTR [esp+0x78],0xa
  58d85e:	00 
  58d85f:	74 15                	je     0x58d876
  58d861:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  58d865:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58d868:	51                   	push   ecx
  58d869:	52                   	push   edx
  58d86a:	57                   	push   edi
  58d86b:	8b c8                	mov    ecx,eax
  58d86d:	e8 0e 15 f2 ff       	call   0x4aed80
  58d872:	8b f0                	mov    esi,eax
  58d874:	eb 02                	jmp    0x58d878
  58d876:	33 f6                	xor    esi,esi
  58d878:	56                   	push   esi
  58d879:	8b cd                	mov    ecx,ebp
  58d87b:	89 5c 24 7c          	mov    DWORD PTR [esp+0x7c],ebx
  58d87f:	e8 5c f8 f1 ff       	call   0x4ad0e0
  58d884:	8b c8                	mov    ecx,eax
  58d886:	e8 55 fa f1 ff       	call   0x4ad2e0
  58d88b:	8b 8d 78 01 00 00    	mov    ecx,DWORD PTR [ebp+0x178]
  58d891:	3b cf                	cmp    ecx,edi
  58d893:	74 08                	je     0x58d89d
  58d895:	8b 01                	mov    eax,DWORD PTR [ecx]
  58d897:	ff 50 08             	call   DWORD PTR [eax+0x8]
  58d89a:	50                   	push   eax
  58d89b:	eb 01                	jmp    0x58d89e
  58d89d:	57                   	push   edi
  58d89e:	8b ce                	mov    ecx,esi
  58d8a0:	e8 4b 27 f2 ff       	call   0x4afff0
  58d8a5:	8d 9d 88 01 00 00    	lea    ebx,[ebp+0x188]
  58d8ab:	83 ec 0c             	sub    esp,0xc
  58d8ae:	8b cb                	mov    ecx,ebx
  58d8b0:	8b d4                	mov    edx,esp
  58d8b2:	8b 01                	mov    eax,DWORD PTR [ecx]
  58d8b4:	89 02                	mov    DWORD PTR [edx],eax
  58d8b6:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  58d8b9:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  58d8bc:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  58d8bf:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  58d8c2:	8b ce                	mov    ecx,esi
  58d8c4:	e8 c7 17 f2 ff       	call   0x4af090
  58d8c9:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  58d8cd:	e8 4e d2 07 00       	call   0x60ab20
  58d8d2:	50                   	push   eax
  58d8d3:	8b ce                	mov    ecx,esi
  58d8d5:	e8 c6 16 f2 ff       	call   0x4aefa0
  58d8da:	68 90 01 00 00       	push   0x190
  58d8df:	57                   	push   edi
  58d8e0:	8b ce                	mov    ecx,esi
  58d8e2:	e8 b9 00 f2 ff       	call   0x4ad9a0
  58d8e7:	6a 6c                	push   0x6c
  58d8e9:	e8 c7 c7 07 00       	call   0x60a0b5
  58d8ee:	83 c4 04             	add    esp,0x4
  58d8f1:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58d8f5:	3b c7                	cmp    eax,edi
  58d8f7:	c7 44 24 78 0b 00 00 	mov    DWORD PTR [esp+0x78],0xb
  58d8fe:	00 
  58d8ff:	74 15                	je     0x58d916
  58d901:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58d904:	68 a0 a1 6b 00       	push   0x6ba1a0
  58d909:	52                   	push   edx
  58d90a:	57                   	push   edi
  58d90b:	8b c8                	mov    ecx,eax
  58d90d:	e8 0e e8 f1 ff       	call   0x4ac120
  58d912:	8b f0                	mov    esi,eax
  58d914:	eb 02                	jmp    0x58d918
  58d916:	33 f6                	xor    esi,esi
  58d918:	56                   	push   esi
  58d919:	8b cd                	mov    ecx,ebp
  58d91b:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58d922:	ff 
  58d923:	e8 b8 f7 f1 ff       	call   0x4ad0e0
  58d928:	8b c8                	mov    ecx,eax
  58d92a:	e8 b1 f9 f1 ff       	call   0x4ad2e0
  58d92f:	d9 85 84 01 00 00    	fld    DWORD PTR [ebp+0x184]
  58d935:	d8 0d 08 d8 64 00    	fmul   DWORD PTR ds:0x64d808
  58d93b:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
  58d93f:	d8 1d 9c c5 64 00    	fcomp  DWORD PTR ds:0x64c59c
  58d945:	df e0                	fnstsw ax
  58d947:	f6 c4 01             	test   ah,0x1
  58d94a:	74 0a                	je     0x58d956
  58d94c:	c7 44 24 18 cd cc cc 	mov    DWORD PTR [esp+0x18],0x3ecccccd
  58d953:	3e 
  58d954:	eb 19                	jmp    0x58d96f
  58d956:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  58d95a:	d8 1d 04 d8 64 00    	fcomp  DWORD PTR ds:0x64d804
  58d960:	df e0                	fnstsw ax
  58d962:	f6 c4 41             	test   ah,0x41
  58d965:	75 08                	jne    0x58d96f
  58d967:	c7 44 24 18 48 e1 7a 	mov    DWORD PTR [esp+0x18],0x3f7ae148
  58d96e:	3f 
  58d96f:	8a 85 75 01 00 00    	mov    al,BYTE PTR [ebp+0x175]
  58d975:	84 c0                	test   al,al
  58d977:	74 08                	je     0x58d981
  58d979:	c7 44 24 18 cd cc cc 	mov    DWORD PTR [esp+0x18],0x3ecccccd
  58d980:	3e 
  58d981:	8d 44 24 18          	lea    eax,[esp+0x18]
  58d985:	8b ce                	mov    ecx,esi
  58d987:	50                   	push   eax
  58d988:	e8 d3 ec f1 ff       	call   0x4ac660
  58d98d:	6a 78                	push   0x78
  58d98f:	e8 21 c7 07 00       	call   0x60a0b5
  58d994:	83 c4 04             	add    esp,0x4
  58d997:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58d99b:	3b c7                	cmp    eax,edi
  58d99d:	c7 44 24 78 0c 00 00 	mov    DWORD PTR [esp+0x78],0xc
  58d9a4:	00 
  58d9a5:	74 22                	je     0x58d9c9
  58d9a7:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  58d9ab:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  58d9b1:	51                   	push   ecx
  58d9b2:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58d9b5:	d9 1c 24             	fstp   DWORD PTR [esp]
  58d9b8:	51                   	push   ecx
  58d9b9:	68 90 01 00 00       	push   0x190
  58d9be:	8b c8                	mov    ecx,eax
  58d9c0:	e8 bb 13 f2 ff       	call   0x4aed80
  58d9c5:	8b f0                	mov    esi,eax
  58d9c7:	eb 02                	jmp    0x58d9cb
  58d9c9:	33 f6                	xor    esi,esi
  58d9cb:	56                   	push   esi
  58d9cc:	8b cd                	mov    ecx,ebp
  58d9ce:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58d9d5:	ff 
  58d9d6:	e8 05 f7 f1 ff       	call   0x4ad0e0
  58d9db:	8b c8                	mov    ecx,eax
  58d9dd:	e8 fe f8 f1 ff       	call   0x4ad2e0
  58d9e2:	8b 8d 78 01 00 00    	mov    ecx,DWORD PTR [ebp+0x178]
  58d9e8:	3b cf                	cmp    ecx,edi
  58d9ea:	74 08                	je     0x58d9f4
  58d9ec:	8b 11                	mov    edx,DWORD PTR [ecx]
  58d9ee:	ff 52 08             	call   DWORD PTR [edx+0x8]
  58d9f1:	50                   	push   eax
  58d9f2:	eb 01                	jmp    0x58d9f5
  58d9f4:	57                   	push   edi
  58d9f5:	8b ce                	mov    ecx,esi
  58d9f7:	e8 f4 25 f2 ff       	call   0x4afff0
  58d9fc:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  58d9fe:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  58da01:	83 ec 0c             	sub    esp,0xc
  58da04:	8b c4                	mov    eax,esp
  58da06:	89 08                	mov    DWORD PTR [eax],ecx
  58da08:	8b 4b 08             	mov    ecx,DWORD PTR [ebx+0x8]
  58da0b:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  58da0e:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  58da11:	8b ce                	mov    ecx,esi
  58da13:	e8 78 16 f2 ff       	call   0x4af090
  58da18:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  58da1c:	d8 0d 84 bd 64 00    	fmul   DWORD PTR ds:0x64bd84
  58da22:	e8 f9 d0 07 00       	call   0x60ab20
  58da27:	50                   	push   eax
  58da28:	8b ce                	mov    ecx,esi
  58da2a:	e8 71 15 f2 ff       	call   0x4aefa0
  58da2f:	68 90 01 00 00       	push   0x190
  58da34:	57                   	push   edi
  58da35:	8b ce                	mov    ecx,esi
  58da37:	e8 64 ff f1 ff       	call   0x4ad9a0
  58da3c:	8a 85 74 01 00 00    	mov    al,BYTE PTR [ebp+0x174]
  58da42:	84 c0                	test   al,al
  58da44:	0f 84 87 01 00 00    	je     0x58dbd1
  58da4a:	e8 21 9f fc ff       	call   0x557970
  58da4f:	8b f0                	mov    esi,eax
  58da51:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  58da54:	3d 00 00 00 80       	cmp    eax,0x80000000
  58da59:	75 18                	jne    0x58da73
  58da5b:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  58da5e:	3b c7                	cmp    eax,edi
  58da60:	75 05                	jne    0x58da67
  58da62:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  58da67:	50                   	push   eax
  58da68:	e8 a3 d4 07 00       	call   0x60af10
  58da6d:	83 c4 04             	add    esp,0x4
  58da70:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  58da73:	83 f8 03             	cmp    eax,0x3
  58da76:	0f 85 55 01 00 00    	jne    0x58dbd1
  58da7c:	e8 1f ca 07 00       	call   0x60a4a0
  58da81:	99                   	cdq
  58da82:	b9 10 27 00 00       	mov    ecx,0x2710
  58da87:	f7 f9                	idiv   ecx
  58da89:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  58da8d:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  58da91:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  58da97:	d8 05 98 bb 64 00    	fadd   DWORD PTR ds:0x64bb98
  58da9d:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  58daa1:	e8 fa c9 07 00       	call   0x60a4a0
  58daa6:	25 01 00 00 80       	and    eax,0x80000001
  58daab:	79 05                	jns    0x58dab2
  58daad:	48                   	dec    eax
  58daae:	83 c8 fe             	or     eax,0xfffffffe
  58dab1:	40                   	inc    eax
  58dab2:	f7 d8                	neg    eax
  58dab4:	1b c0                	sbb    eax,eax
  58dab6:	24 fe                	and    al,0xfe
  58dab8:	40                   	inc    eax
  58dab9:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  58dabd:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  58dac1:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
  58dac5:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  58dac9:	e8 d2 c9 07 00       	call   0x60a4a0
  58dace:	99                   	cdq
  58dacf:	b9 10 27 00 00       	mov    ecx,0x2710
  58dad4:	f7 f9                	idiv   ecx
  58dad6:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  58dada:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  58dade:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  58dae4:	d8 05 00 d8 64 00    	fadd   DWORD PTR ds:0x64d800
  58daea:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  58daee:	e8 ad c9 07 00       	call   0x60a4a0
  58daf3:	99                   	cdq
  58daf4:	b9 10 27 00 00       	mov    ecx,0x2710
  58daf9:	68 00 00 00 3f       	push   0x3f000000
  58dafe:	f7 f9                	idiv   ecx
  58db00:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  58db04:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  58db08:	8d 54 24 30          	lea    edx,[esp+0x30]
  58db0c:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  58db10:	d8 0d fc d7 64 00    	fmul   DWORD PTR ds:0x64d7fc
  58db16:	d8 25 f8 d7 64 00    	fsub   DWORD PTR ds:0x64d7f8
  58db1c:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  58db20:	e8 7b 54 02 00       	call   0x5b2fa0
  58db25:	68 8c 00 00 00       	push   0x8c
  58db2a:	e8 86 c5 07 00       	call   0x60a0b5
  58db2f:	8b f0                	mov    esi,eax
  58db31:	83 c4 04             	add    esp,0x4
  58db34:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  58db38:	3b f7                	cmp    esi,edi
  58db3a:	c7 44 24 78 0d 00 00 	mov    DWORD PTR [esp+0x78],0xd
  58db41:	00 
  58db42:	74 4c                	je     0x58db90
  58db44:	6a 00                	push   0x0
  58db46:	8b ce                	mov    ecx,esi
  58db48:	8d 7d 5c             	lea    edi,[ebp+0x5c]
  58db4b:	e8 80 fc f1 ff       	call   0x4ad7d0
  58db50:	8a 17                	mov    dl,BYTE PTR [edi]
  58db52:	8d 5e 50             	lea    ebx,[esi+0x50]
  58db55:	6a 00                	push   0x0
  58db57:	8b cb                	mov    ecx,ebx
  58db59:	c6 44 24 7c 0e       	mov    BYTE PTR [esp+0x7c],0xe
  58db5e:	88 13                	mov    BYTE PTR [ebx],dl
  58db60:	e8 3b 65 e7 ff       	call   0x4040a0
  58db65:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  58db6a:	8b cb                	mov    ecx,ebx
  58db6c:	50                   	push   eax
  58db6d:	6a 00                	push   0x0
  58db6f:	57                   	push   edi
  58db70:	e8 8b f0 e7 ff       	call   0x40cc00
  58db75:	c7 86 84 00 00 00 cd 	mov    DWORD PTR [esi+0x84],0x411ccccd
  58db7c:	cc 1c 41 
  58db7f:	c6 86 88 00 00 00 00 	mov    BYTE PTR [esi+0x88],0x0
  58db86:	c7 06 dc d7 64 00    	mov    DWORD PTR [esi],0x64d7dc
  58db8c:	33 ff                	xor    edi,edi
  58db8e:	eb 02                	jmp    0x58db92
  58db90:	33 f6                	xor    esi,esi
  58db92:	56                   	push   esi
  58db93:	8b cd                	mov    ecx,ebp
  58db95:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58db9c:	ff 
  58db9d:	e8 3e f5 f1 ff       	call   0x4ad0e0
  58dba2:	8b c8                	mov    ecx,eax
  58dba4:	e8 37 f7 f1 ff       	call   0x4ad2e0
  58dba9:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  58dbad:	8d 4e 78             	lea    ecx,[esi+0x78]
  58dbb0:	68 bb 02 00 00       	push   0x2bb
  58dbb5:	68 2c 01 00 00       	push   0x12c
  58dbba:	89 11                	mov    DWORD PTR [ecx],edx
  58dbbc:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  58dbc0:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  58dbc3:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  58dbc7:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  58dbca:	8b ce                	mov    ecx,esi
  58dbcc:	e8 cf fd f1 ff       	call   0x4ad9a0
  58dbd1:	8a 85 75 01 00 00    	mov    al,BYTE PTR [ebp+0x175]
  58dbd7:	84 c0                	test   al,al
  58dbd9:	0f 85 9b 0c 00 00    	jne    0x58e87a
  58dbdf:	d9 85 84 01 00 00    	fld    DWORD PTR [ebp+0x184]
  58dbe5:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  58dbeb:	68 d4 00 00 00       	push   0xd4
  58dbf0:	d8 0d 88 fe 64 00    	fmul   DWORD PTR ds:0x64fe88
  58dbf6:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  58dbfa:	e8 b6 c4 07 00       	call   0x60a0b5
  58dbff:	83 c4 04             	add    esp,0x4
  58dc02:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58dc06:	3b c7                	cmp    eax,edi
  58dc08:	c7 44 24 78 0f 00 00 	mov    DWORD PTR [esp+0x78],0xf
  58dc0f:	00 
  58dc10:	74 10                	je     0x58dc22
  58dc12:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58dc15:	51                   	push   ecx
  58dc16:	57                   	push   edi
  58dc17:	8b c8                	mov    ecx,eax
  58dc19:	e8 42 09 f2 ff       	call   0x4ae560
  58dc1e:	8b d8                	mov    ebx,eax
  58dc20:	eb 02                	jmp    0x58dc24
  58dc22:	33 db                	xor    ebx,ebx
  58dc24:	53                   	push   ebx
  58dc25:	8b cd                	mov    ecx,ebp
  58dc27:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58dc2e:	ff 
  58dc2f:	e8 ac f4 f1 ff       	call   0x4ad0e0
  58dc34:	8b c8                	mov    ecx,eax
  58dc36:	e8 a5 f6 f1 ff       	call   0x4ad2e0
  58dc3b:	8b 85 7c 01 00 00    	mov    eax,DWORD PTR [ebp+0x17c]
  58dc41:	48                   	dec    eax
  58dc42:	74 3a                	je     0x58dc7e
  58dc44:	48                   	dec    eax
  58dc45:	74 1d                	je     0x58dc64
  58dc47:	48                   	dec    eax
  58dc48:	75 34                	jne    0x58dc7e
  58dc4a:	c7 44 24 60 00 00 a0 	mov    DWORD PTR [esp+0x60],0x42a00000
  58dc51:	42 
  58dc52:	c7 44 24 64 00 00 75 	mov    DWORD PTR [esp+0x64],0x43750000
  58dc59:	43 
  58dc5a:	c7 44 24 68 00 00 5c 	mov    DWORD PTR [esp+0x68],0x435c0000
  58dc61:	43 
  58dc62:	eb 32                	jmp    0x58dc96
  58dc64:	c7 44 24 60 00 00 08 	mov    DWORD PTR [esp+0x60],0x42080000
  58dc6b:	42 
  58dc6c:	c7 44 24 64 00 00 5a 	mov    DWORD PTR [esp+0x64],0x435a0000
  58dc73:	43 
  58dc74:	c7 44 24 68 00 00 20 	mov    DWORD PTR [esp+0x68],0x42200000
  58dc7b:	42 
  58dc7c:	eb 18                	jmp    0x58dc96
  58dc7e:	c7 44 24 60 00 00 7f 	mov    DWORD PTR [esp+0x60],0x437f0000
  58dc85:	43 
  58dc86:	c7 44 24 64 00 00 40 	mov    DWORD PTR [esp+0x64],0x43400000
  58dc8d:	43 
  58dc8e:	c7 44 24 68 00 00 00 	mov    DWORD PTR [esp+0x68],0x0
  58dc95:	00 
  58dc96:	8d 54 24 60          	lea    edx,[esp+0x60]
  58dc9a:	8b cb                	mov    ecx,ebx
  58dc9c:	52                   	push   edx
  58dc9d:	c7 44 24 70 00 00 7f 	mov    DWORD PTR [esp+0x70],0x437f0000
  58dca4:	43 
  58dca5:	e8 96 0d f2 ff       	call   0x4aea40
  58dcaa:	68 e8 03 00 00       	push   0x3e8
  58dcaf:	8b cb                	mov    ecx,ebx
  58dcb1:	e8 0a a4 01 00       	call   0x5a80c0
  58dcb6:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  58dcba:	e8 61 ce 07 00       	call   0x60ab20
  58dcbf:	8b f0                	mov    esi,eax
  58dcc1:	8b cb                	mov    ecx,ebx
  58dcc3:	56                   	push   esi
  58dcc4:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  58dcc8:	e8 83 0c f2 ff       	call   0x4ae950
  58dccd:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  58dcd1:	6a 00                	push   0x0
  58dcd3:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  58dcd7:	88 44 24 54          	mov    BYTE PTR [esp+0x54],al
  58dcdb:	e8 c0 63 e7 ff       	call   0x4040a0
  58dce0:	bf b8 28 69 00       	mov    edi,0x6928b8
  58dce5:	83 c9 ff             	or     ecx,0xffffffff
  58dce8:	33 c0                	xor    eax,eax
  58dcea:	6a 01                	push   0x1
  58dcec:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  58dcee:	f7 d1                	not    ecx
  58dcf0:	49                   	dec    ecx
  58dcf1:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  58dcf5:	51                   	push   ecx
  58dcf6:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  58dcfa:	e8 41 3c e7 ff       	call   0x401940
  58dcff:	84 c0                	test   al,al
  58dd01:	74 2b                	je     0x58dd2e
  58dd03:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  58dd07:	8b 7c 24 54          	mov    edi,DWORD PTR [esp+0x54]
  58dd0b:	8b c8                	mov    ecx,eax
  58dd0d:	be b8 28 69 00       	mov    esi,0x6928b8
  58dd12:	8b d1                	mov    edx,ecx
  58dd14:	50                   	push   eax
  58dd15:	c1 e9 02             	shr    ecx,0x2
  58dd18:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  58dd1a:	8b ca                	mov    ecx,edx
  58dd1c:	83 e1 03             	and    ecx,0x3
  58dd1f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  58dd21:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  58dd25:	e8 66 64 e7 ff       	call   0x404190
  58dd2a:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
  58dd2e:	6a 00                	push   0x0
  58dd30:	56                   	push   esi
  58dd31:	8d 44 24 58          	lea    eax,[esp+0x58]
  58dd35:	6a 00                	push   0x0
  58dd37:	50                   	push   eax
  58dd38:	68 00 00 80 3f       	push   0x3f800000
  58dd3d:	8b cb                	mov    ecx,ebx
  58dd3f:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x10
  58dd46:	10 00 00 00 
  58dd4a:	e8 b1 0a f2 ff       	call   0x4ae800
  58dd4f:	6a 01                	push   0x1
  58dd51:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  58dd55:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58dd5c:	ff 
  58dd5d:	e8 3e 63 e7 ff       	call   0x4040a0
  58dd62:	8a 85 75 01 00 00    	mov    al,BYTE PTR [ebp+0x175]
  58dd68:	84 c0                	test   al,al
  58dd6a:	0f 85 0a 0b 00 00    	jne    0x58e87a
  58dd70:	8b 85 7c 01 00 00    	mov    eax,DWORD PTR [ebp+0x17c]
  58dd76:	48                   	dec    eax
  58dd77:	0f 84 ed 07 00 00    	je     0x58e56a
  58dd7d:	48                   	dec    eax
  58dd7e:	0f 84 0b 05 00 00    	je     0x58e28f
  58dd84:	48                   	dec    eax
  58dd85:	6a 6c                	push   0x6c
  58dd87:	0f 84 e7 02 00 00    	je     0x58e074
  58dd8d:	e8 23 c3 07 00       	call   0x60a0b5
  58dd92:	83 c4 04             	add    esp,0x4
  58dd95:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58dd99:	85 c0                	test   eax,eax
  58dd9b:	c7 44 24 78 27 00 00 	mov    DWORD PTR [esp+0x78],0x27
  58dda2:	00 
  58dda3:	74 1b                	je     0x58ddc0
  58dda5:	68 48 9e 6c 00       	push   0x6c9e48
  58ddaa:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58ddad:	68 10 9e 6c 00       	push   0x6c9e10
  58ddb2:	51                   	push   ecx
  58ddb3:	6a 00                	push   0x0
  58ddb5:	8b c8                	mov    ecx,eax
  58ddb7:	e8 e4 e8 f1 ff       	call   0x4ac6a0
  58ddbc:	8b f0                	mov    esi,eax
  58ddbe:	eb 02                	jmp    0x58ddc2
  58ddc0:	33 f6                	xor    esi,esi
  58ddc2:	83 cf ff             	or     edi,0xffffffff
  58ddc5:	56                   	push   esi
  58ddc6:	8b cd                	mov    ecx,ebp
  58ddc8:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58ddcc:	e8 0f f3 f1 ff       	call   0x4ad0e0
  58ddd1:	8b c8                	mov    ecx,eax
  58ddd3:	e8 08 f5 f1 ff       	call   0x4ad2e0
  58ddd8:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58dddc:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  58dde2:	51                   	push   ecx
  58dde3:	8b ce                	mov    ecx,esi
  58dde5:	d9 1c 24             	fstp   DWORD PTR [esp]
  58dde8:	e8 23 ea f1 ff       	call   0x4ac810
  58dded:	6a 6c                	push   0x6c
  58ddef:	e8 c1 c2 07 00       	call   0x60a0b5
  58ddf4:	83 c4 04             	add    esp,0x4
  58ddf7:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58ddfb:	85 c0                	test   eax,eax
  58ddfd:	c7 44 24 78 28 00 00 	mov    DWORD PTR [esp+0x78],0x28
  58de04:	00 
  58de05:	74 1b                	je     0x58de22
  58de07:	68 d8 9d 6c 00       	push   0x6c9dd8
  58de0c:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58de0f:	68 a0 9d 6c 00       	push   0x6c9da0
  58de14:	52                   	push   edx
  58de15:	6a 64                	push   0x64
  58de17:	8b c8                	mov    ecx,eax
  58de19:	e8 82 e8 f1 ff       	call   0x4ac6a0
  58de1e:	8b f0                	mov    esi,eax
  58de20:	eb 02                	jmp    0x58de24
  58de22:	33 f6                	xor    esi,esi
  58de24:	56                   	push   esi
  58de25:	8b cd                	mov    ecx,ebp
  58de27:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58de2b:	e8 b0 f2 f1 ff       	call   0x4ad0e0
  58de30:	8b c8                	mov    ecx,eax
  58de32:	e8 a9 f4 f1 ff       	call   0x4ad2e0
  58de37:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58de3b:	d8 0d 34 b7 64 00    	fmul   DWORD PTR ds:0x64b734
  58de41:	51                   	push   ecx
  58de42:	8b ce                	mov    ecx,esi
  58de44:	d9 1c 24             	fstp   DWORD PTR [esp]
  58de47:	e8 c4 e9 f1 ff       	call   0x4ac810
  58de4c:	6a 6c                	push   0x6c
  58de4e:	e8 62 c2 07 00       	call   0x60a0b5
  58de53:	83 c4 04             	add    esp,0x4
  58de56:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58de5a:	85 c0                	test   eax,eax
  58de5c:	c7 44 24 78 29 00 00 	mov    DWORD PTR [esp+0x78],0x29
  58de63:	00 
  58de64:	74 1e                	je     0x58de84
  58de66:	68 68 9d 6c 00       	push   0x6c9d68
  58de6b:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58de6e:	68 28 9d 6c 00       	push   0x6c9d28
  58de73:	51                   	push   ecx
  58de74:	68 c8 00 00 00       	push   0xc8
  58de79:	8b c8                	mov    ecx,eax
  58de7b:	e8 20 e8 f1 ff       	call   0x4ac6a0
  58de80:	8b f0                	mov    esi,eax
  58de82:	eb 02                	jmp    0x58de86
  58de84:	33 f6                	xor    esi,esi
  58de86:	56                   	push   esi
  58de87:	8b cd                	mov    ecx,ebp
  58de89:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58de8d:	e8 4e f2 f1 ff       	call   0x4ad0e0
  58de92:	8b c8                	mov    ecx,eax
  58de94:	e8 47 f4 f1 ff       	call   0x4ad2e0
  58de99:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58de9d:	d8 0d 84 bd 64 00    	fmul   DWORD PTR ds:0x64bd84
  58dea3:	8b ce                	mov    ecx,esi
  58dea5:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  58dea9:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  58dead:	52                   	push   edx
  58deae:	e8 5d e9 f1 ff       	call   0x4ac810
  58deb3:	6a 6c                	push   0x6c
  58deb5:	e8 fb c1 07 00       	call   0x60a0b5
  58deba:	83 c4 04             	add    esp,0x4
  58debd:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58dec1:	85 c0                	test   eax,eax
  58dec3:	c7 44 24 78 2a 00 00 	mov    DWORD PTR [esp+0x78],0x2a
  58deca:	00 
  58decb:	74 1e                	je     0x58deeb
  58decd:	68 f0 9c 6c 00       	push   0x6c9cf0
  58ded2:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58ded5:	68 b8 9c 6c 00       	push   0x6c9cb8
  58deda:	51                   	push   ecx
  58dedb:	68 2c 01 00 00       	push   0x12c
  58dee0:	8b c8                	mov    ecx,eax
  58dee2:	e8 b9 e7 f1 ff       	call   0x4ac6a0
  58dee7:	8b f0                	mov    esi,eax
  58dee9:	eb 02                	jmp    0x58deed
  58deeb:	33 f6                	xor    esi,esi
  58deed:	56                   	push   esi
  58deee:	8b cd                	mov    ecx,ebp
  58def0:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58def4:	e8 e7 f1 f1 ff       	call   0x4ad0e0
  58def9:	8b c8                	mov    ecx,eax
  58defb:	e8 e0 f3 f1 ff       	call   0x4ad2e0
  58df00:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58df04:	d8 0d c8 a2 64 00    	fmul   DWORD PTR ds:0x64a2c8
  58df0a:	8b ce                	mov    ecx,esi
  58df0c:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  58df10:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
  58df14:	53                   	push   ebx
  58df15:	e8 f6 e8 f1 ff       	call   0x4ac810
  58df1a:	6a 6c                	push   0x6c
  58df1c:	e8 94 c1 07 00       	call   0x60a0b5
  58df21:	83 c4 04             	add    esp,0x4
  58df24:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58df28:	85 c0                	test   eax,eax
  58df2a:	c7 44 24 78 2b 00 00 	mov    DWORD PTR [esp+0x78],0x2b
  58df31:	00 
  58df32:	74 1e                	je     0x58df52
  58df34:	68 80 9c 6c 00       	push   0x6c9c80
  58df39:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58df3c:	68 48 9c 6c 00       	push   0x6c9c48
  58df41:	52                   	push   edx
  58df42:	68 90 01 00 00       	push   0x190
  58df47:	8b c8                	mov    ecx,eax
  58df49:	e8 52 e7 f1 ff       	call   0x4ac6a0
  58df4e:	8b f0                	mov    esi,eax
  58df50:	eb 02                	jmp    0x58df54
  58df52:	33 f6                	xor    esi,esi
  58df54:	56                   	push   esi
  58df55:	8b cd                	mov    ecx,ebp
  58df57:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58df5b:	e8 80 f1 f1 ff       	call   0x4ad0e0
  58df60:	8b c8                	mov    ecx,eax
  58df62:	e8 79 f3 f1 ff       	call   0x4ad2e0
  58df67:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58df6b:	d8 0d d0 d7 64 00    	fmul   DWORD PTR ds:0x64d7d0
  58df71:	51                   	push   ecx
  58df72:	8b ce                	mov    ecx,esi
  58df74:	d9 1c 24             	fstp   DWORD PTR [esp]
  58df77:	e8 94 e8 f1 ff       	call   0x4ac810
  58df7c:	6a 6c                	push   0x6c
  58df7e:	e8 32 c1 07 00       	call   0x60a0b5
  58df83:	83 c4 04             	add    esp,0x4
  58df86:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58df8a:	85 c0                	test   eax,eax
  58df8c:	c7 44 24 78 2c 00 00 	mov    DWORD PTR [esp+0x78],0x2c
  58df93:	00 
  58df94:	74 1e                	je     0x58dfb4
  58df96:	68 10 9c 6c 00       	push   0x6c9c10
  58df9b:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58df9e:	68 d8 9b 6c 00       	push   0x6c9bd8
  58dfa3:	51                   	push   ecx
  58dfa4:	68 f4 01 00 00       	push   0x1f4
  58dfa9:	8b c8                	mov    ecx,eax
  58dfab:	e8 f0 e6 f1 ff       	call   0x4ac6a0
  58dfb0:	8b f0                	mov    esi,eax
  58dfb2:	eb 02                	jmp    0x58dfb6
  58dfb4:	33 f6                	xor    esi,esi
  58dfb6:	56                   	push   esi
  58dfb7:	8b cd                	mov    ecx,ebp
  58dfb9:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58dfbd:	e8 1e f1 f1 ff       	call   0x4ad0e0
  58dfc2:	8b c8                	mov    ecx,eax
  58dfc4:	e8 17 f3 f1 ff       	call   0x4ad2e0
  58dfc9:	53                   	push   ebx
  58dfca:	8b ce                	mov    ecx,esi
  58dfcc:	e8 3f e8 f1 ff       	call   0x4ac810
  58dfd1:	6a 6c                	push   0x6c
  58dfd3:	e8 dd c0 07 00       	call   0x60a0b5
  58dfd8:	83 c4 04             	add    esp,0x4
  58dfdb:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58dfdf:	85 c0                	test   eax,eax
  58dfe1:	c7 44 24 78 2d 00 00 	mov    DWORD PTR [esp+0x78],0x2d
  58dfe8:	00 
  58dfe9:	74 1e                	je     0x58e009
  58dfeb:	68 a0 9b 6c 00       	push   0x6c9ba0
  58dff0:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58dff3:	68 60 9b 6c 00       	push   0x6c9b60
  58dff8:	52                   	push   edx
  58dff9:	68 58 02 00 00       	push   0x258
  58dffe:	8b c8                	mov    ecx,eax
  58e000:	e8 9b e6 f1 ff       	call   0x4ac6a0
  58e005:	8b f0                	mov    esi,eax
  58e007:	eb 02                	jmp    0x58e00b
  58e009:	33 f6                	xor    esi,esi
  58e00b:	56                   	push   esi
  58e00c:	8b cd                	mov    ecx,ebp
  58e00e:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e012:	e8 c9 f0 f1 ff       	call   0x4ad0e0
  58e017:	8b c8                	mov    ecx,eax
  58e019:	e8 c2 f2 f1 ff       	call   0x4ad2e0
  58e01e:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  58e022:	8b ce                	mov    ecx,esi
  58e024:	50                   	push   eax
  58e025:	e8 e6 e7 f1 ff       	call   0x4ac810
  58e02a:	6a 6c                	push   0x6c
  58e02c:	e8 84 c0 07 00       	call   0x60a0b5
  58e031:	83 c4 04             	add    esp,0x4
  58e034:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e038:	85 c0                	test   eax,eax
  58e03a:	c7 44 24 78 2e 00 00 	mov    DWORD PTR [esp+0x78],0x2e
  58e041:	00 
  58e042:	74 25                	je     0x58e069
  58e044:	68 28 9b 6c 00       	push   0x6c9b28
  58e049:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e04c:	68 f0 9a 6c 00       	push   0x6c9af0
  58e051:	51                   	push   ecx
  58e052:	68 bb 02 00 00       	push   0x2bb
  58e057:	8b c8                	mov    ecx,eax
  58e059:	e8 42 e6 f1 ff       	call   0x4ac6a0
  58e05e:	8b f0                	mov    esi,eax
  58e060:	89 7c 24 78          	mov    DWORD PTR [esp+0x78],edi
  58e064:	e9 ed 07 00 00       	jmp    0x58e856
  58e069:	33 f6                	xor    esi,esi
  58e06b:	89 7c 24 78          	mov    DWORD PTR [esp+0x78],edi
  58e06f:	e9 e2 07 00 00       	jmp    0x58e856
  58e074:	e8 3c c0 07 00       	call   0x60a0b5
  58e079:	83 c4 04             	add    esp,0x4
  58e07c:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e080:	85 c0                	test   eax,eax
  58e082:	c7 44 24 78 21 00 00 	mov    DWORD PTR [esp+0x78],0x21
  58e089:	00 
  58e08a:	74 1b                	je     0x58e0a7
  58e08c:	68 28 97 6c 00       	push   0x6c9728
  58e091:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e094:	68 f0 96 6c 00       	push   0x6c96f0
  58e099:	52                   	push   edx
  58e09a:	6a 00                	push   0x0
  58e09c:	8b c8                	mov    ecx,eax
  58e09e:	e8 fd e5 f1 ff       	call   0x4ac6a0
  58e0a3:	8b f0                	mov    esi,eax
  58e0a5:	eb 02                	jmp    0x58e0a9
  58e0a7:	33 f6                	xor    esi,esi
  58e0a9:	83 cf ff             	or     edi,0xffffffff
  58e0ac:	56                   	push   esi
  58e0ad:	8b cd                	mov    ecx,ebp
  58e0af:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e0b3:	e8 28 f0 f1 ff       	call   0x4ad0e0
  58e0b8:	8b c8                	mov    ecx,eax
  58e0ba:	e8 21 f2 f1 ff       	call   0x4ad2e0
  58e0bf:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e0c3:	d8 0d 9c c5 64 00    	fmul   DWORD PTR ds:0x64c59c
  58e0c9:	8b ce                	mov    ecx,esi
  58e0cb:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  58e0cf:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
  58e0d3:	53                   	push   ebx
  58e0d4:	e8 37 e7 f1 ff       	call   0x4ac810
  58e0d9:	6a 6c                	push   0x6c
  58e0db:	e8 d5 bf 07 00       	call   0x60a0b5
  58e0e0:	83 c4 04             	add    esp,0x4
  58e0e3:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e0e7:	85 c0                	test   eax,eax
  58e0e9:	c7 44 24 78 22 00 00 	mov    DWORD PTR [esp+0x78],0x22
  58e0f0:	00 
  58e0f1:	74 1b                	je     0x58e10e
  58e0f3:	68 b8 96 6c 00       	push   0x6c96b8
  58e0f8:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e0fb:	68 80 96 6c 00       	push   0x6c9680
  58e100:	51                   	push   ecx
  58e101:	6a 64                	push   0x64
  58e103:	8b c8                	mov    ecx,eax
  58e105:	e8 96 e5 f1 ff       	call   0x4ac6a0
  58e10a:	8b f0                	mov    esi,eax
  58e10c:	eb 02                	jmp    0x58e110
  58e10e:	33 f6                	xor    esi,esi
  58e110:	56                   	push   esi
  58e111:	8b cd                	mov    ecx,ebp
  58e113:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e117:	e8 c4 ef f1 ff       	call   0x4ad0e0
  58e11c:	8b c8                	mov    ecx,eax
  58e11e:	e8 bd f1 f1 ff       	call   0x4ad2e0
  58e123:	53                   	push   ebx
  58e124:	8b ce                	mov    ecx,esi
  58e126:	e8 e5 e6 f1 ff       	call   0x4ac810
  58e12b:	6a 6c                	push   0x6c
  58e12d:	e8 83 bf 07 00       	call   0x60a0b5
  58e132:	83 c4 04             	add    esp,0x4
  58e135:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e139:	85 c0                	test   eax,eax
  58e13b:	c7 44 24 78 23 00 00 	mov    DWORD PTR [esp+0x78],0x23
  58e142:	00 
  58e143:	74 1e                	je     0x58e163
  58e145:	68 48 96 6c 00       	push   0x6c9648
  58e14a:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e14d:	68 08 96 6c 00       	push   0x6c9608
  58e152:	52                   	push   edx
  58e153:	68 c8 00 00 00       	push   0xc8
  58e158:	8b c8                	mov    ecx,eax
  58e15a:	e8 41 e5 f1 ff       	call   0x4ac6a0
  58e15f:	8b f0                	mov    esi,eax
  58e161:	eb 02                	jmp    0x58e165
  58e163:	33 f6                	xor    esi,esi
  58e165:	56                   	push   esi
  58e166:	8b cd                	mov    ecx,ebp
  58e168:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e16c:	e8 6f ef f1 ff       	call   0x4ad0e0
  58e171:	8b c8                	mov    ecx,eax
  58e173:	e8 68 f1 f1 ff       	call   0x4ad2e0
  58e178:	53                   	push   ebx
  58e179:	8b ce                	mov    ecx,esi
  58e17b:	e8 90 e6 f1 ff       	call   0x4ac810
  58e180:	6a 6c                	push   0x6c
  58e182:	e8 2e bf 07 00       	call   0x60a0b5
  58e187:	83 c4 04             	add    esp,0x4
  58e18a:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e18e:	85 c0                	test   eax,eax
  58e190:	c7 44 24 78 24 00 00 	mov    DWORD PTR [esp+0x78],0x24
  58e197:	00 
  58e198:	74 1e                	je     0x58e1b8
  58e19a:	68 d0 95 6c 00       	push   0x6c95d0
  58e19f:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e1a2:	68 98 95 6c 00       	push   0x6c9598
  58e1a7:	51                   	push   ecx
  58e1a8:	68 2c 01 00 00       	push   0x12c
  58e1ad:	8b c8                	mov    ecx,eax
  58e1af:	e8 ec e4 f1 ff       	call   0x4ac6a0
  58e1b4:	8b f0                	mov    esi,eax
  58e1b6:	eb 02                	jmp    0x58e1ba
  58e1b8:	33 f6                	xor    esi,esi
  58e1ba:	56                   	push   esi
  58e1bb:	8b cd                	mov    ecx,ebp
  58e1bd:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e1c1:	e8 1a ef f1 ff       	call   0x4ad0e0
  58e1c6:	8b c8                	mov    ecx,eax
  58e1c8:	e8 13 f1 f1 ff       	call   0x4ad2e0
  58e1cd:	53                   	push   ebx
  58e1ce:	8b ce                	mov    ecx,esi
  58e1d0:	e8 3b e6 f1 ff       	call   0x4ac810
  58e1d5:	6a 6c                	push   0x6c
  58e1d7:	e8 d9 be 07 00       	call   0x60a0b5
  58e1dc:	83 c4 04             	add    esp,0x4
  58e1df:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e1e3:	85 c0                	test   eax,eax
  58e1e5:	c7 44 24 78 25 00 00 	mov    DWORD PTR [esp+0x78],0x25
  58e1ec:	00 
  58e1ed:	74 1e                	je     0x58e20d
  58e1ef:	68 60 95 6c 00       	push   0x6c9560
  58e1f4:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e1f7:	68 28 95 6c 00       	push   0x6c9528
  58e1fc:	52                   	push   edx
  58e1fd:	68 90 01 00 00       	push   0x190
  58e202:	8b c8                	mov    ecx,eax
  58e204:	e8 97 e4 f1 ff       	call   0x4ac6a0
  58e209:	8b f0                	mov    esi,eax
  58e20b:	eb 02                	jmp    0x58e20f
  58e20d:	33 f6                	xor    esi,esi
  58e20f:	56                   	push   esi
  58e210:	8b cd                	mov    ecx,ebp
  58e212:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e216:	e8 c5 ee f1 ff       	call   0x4ad0e0
  58e21b:	8b c8                	mov    ecx,eax
  58e21d:	e8 be f0 f1 ff       	call   0x4ad2e0
  58e222:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e226:	d8 0d cc d7 64 00    	fmul   DWORD PTR ds:0x64d7cc
  58e22c:	8b ce                	mov    ecx,esi
  58e22e:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  58e232:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
  58e236:	53                   	push   ebx
  58e237:	e8 d4 e5 f1 ff       	call   0x4ac810
  58e23c:	6a 6c                	push   0x6c
  58e23e:	e8 72 be 07 00       	call   0x60a0b5
  58e243:	83 c4 04             	add    esp,0x4
  58e246:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e24a:	85 c0                	test   eax,eax
  58e24c:	c7 44 24 78 26 00 00 	mov    DWORD PTR [esp+0x78],0x26
  58e253:	00 
  58e254:	74 1e                	je     0x58e274
  58e256:	68 f0 94 6c 00       	push   0x6c94f0
  58e25b:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e25e:	68 b8 94 6c 00       	push   0x6c94b8
  58e263:	51                   	push   ecx
  58e264:	68 e8 03 00 00       	push   0x3e8
  58e269:	8b c8                	mov    ecx,eax
  58e26b:	e8 30 e4 f1 ff       	call   0x4ac6a0
  58e270:	8b f0                	mov    esi,eax
  58e272:	eb 02                	jmp    0x58e276
  58e274:	33 f6                	xor    esi,esi
  58e276:	56                   	push   esi
  58e277:	8b cd                	mov    ecx,ebp
  58e279:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e27d:	e8 5e ee f1 ff       	call   0x4ad0e0
  58e282:	8b c8                	mov    ecx,eax
  58e284:	e8 57 f0 f1 ff       	call   0x4ad2e0
  58e289:	53                   	push   ebx
  58e28a:	e9 e4 05 00 00       	jmp    0x58e873
  58e28f:	6a 6c                	push   0x6c
  58e291:	e8 1f be 07 00       	call   0x60a0b5
  58e296:	83 c4 04             	add    esp,0x4
  58e299:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e29d:	85 c0                	test   eax,eax
  58e29f:	c7 44 24 78 19 00 00 	mov    DWORD PTR [esp+0x78],0x19
  58e2a6:	00 
  58e2a7:	74 1b                	je     0x58e2c4
  58e2a9:	68 b8 9a 6c 00       	push   0x6c9ab8
  58e2ae:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e2b1:	68 80 9a 6c 00       	push   0x6c9a80
  58e2b6:	52                   	push   edx
  58e2b7:	6a 00                	push   0x0
  58e2b9:	8b c8                	mov    ecx,eax
  58e2bb:	e8 e0 e3 f1 ff       	call   0x4ac6a0
  58e2c0:	8b f0                	mov    esi,eax
  58e2c2:	eb 02                	jmp    0x58e2c6
  58e2c4:	33 f6                	xor    esi,esi
  58e2c6:	83 cf ff             	or     edi,0xffffffff
  58e2c9:	56                   	push   esi
  58e2ca:	8b cd                	mov    ecx,ebp
  58e2cc:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e2d0:	e8 0b ee f1 ff       	call   0x4ad0e0
  58e2d5:	8b c8                	mov    ecx,eax
  58e2d7:	e8 04 f0 f1 ff       	call   0x4ad2e0
  58e2dc:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e2e0:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  58e2e6:	51                   	push   ecx
  58e2e7:	8b ce                	mov    ecx,esi
  58e2e9:	d9 1c 24             	fstp   DWORD PTR [esp]
  58e2ec:	e8 1f e5 f1 ff       	call   0x4ac810
  58e2f1:	6a 6c                	push   0x6c
  58e2f3:	e8 bd bd 07 00       	call   0x60a0b5
  58e2f8:	83 c4 04             	add    esp,0x4
  58e2fb:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e2ff:	85 c0                	test   eax,eax
  58e301:	c7 44 24 78 1a 00 00 	mov    DWORD PTR [esp+0x78],0x1a
  58e308:	00 
  58e309:	74 1b                	je     0x58e326
  58e30b:	68 48 9a 6c 00       	push   0x6c9a48
  58e310:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e313:	68 10 9a 6c 00       	push   0x6c9a10
  58e318:	51                   	push   ecx
  58e319:	6a 64                	push   0x64
  58e31b:	8b c8                	mov    ecx,eax
  58e31d:	e8 7e e3 f1 ff       	call   0x4ac6a0
  58e322:	8b f0                	mov    esi,eax
  58e324:	eb 02                	jmp    0x58e328
  58e326:	33 f6                	xor    esi,esi
  58e328:	56                   	push   esi
  58e329:	8b cd                	mov    ecx,ebp
  58e32b:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e32f:	e8 ac ed f1 ff       	call   0x4ad0e0
  58e334:	8b c8                	mov    ecx,eax
  58e336:	e8 a5 ef f1 ff       	call   0x4ad2e0
  58e33b:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e33f:	d8 0d 34 b7 64 00    	fmul   DWORD PTR ds:0x64b734
  58e345:	51                   	push   ecx
  58e346:	8b ce                	mov    ecx,esi
  58e348:	d9 1c 24             	fstp   DWORD PTR [esp]
  58e34b:	e8 c0 e4 f1 ff       	call   0x4ac810
  58e350:	6a 6c                	push   0x6c
  58e352:	e8 5e bd 07 00       	call   0x60a0b5
  58e357:	83 c4 04             	add    esp,0x4
  58e35a:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e35e:	85 c0                	test   eax,eax
  58e360:	c7 44 24 78 1b 00 00 	mov    DWORD PTR [esp+0x78],0x1b
  58e367:	00 
  58e368:	74 1e                	je     0x58e388
  58e36a:	68 d8 99 6c 00       	push   0x6c99d8
  58e36f:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e372:	68 98 99 6c 00       	push   0x6c9998
  58e377:	52                   	push   edx
  58e378:	68 c8 00 00 00       	push   0xc8
  58e37d:	8b c8                	mov    ecx,eax
  58e37f:	e8 1c e3 f1 ff       	call   0x4ac6a0
  58e384:	8b f0                	mov    esi,eax
  58e386:	eb 02                	jmp    0x58e38a
  58e388:	33 f6                	xor    esi,esi
  58e38a:	56                   	push   esi
  58e38b:	8b cd                	mov    ecx,ebp
  58e38d:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e394:	ff 
  58e395:	e8 46 ed f1 ff       	call   0x4ad0e0
  58e39a:	8b c8                	mov    ecx,eax
  58e39c:	e8 3f ef f1 ff       	call   0x4ad2e0
  58e3a1:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e3a5:	d8 0d 84 bd 64 00    	fmul   DWORD PTR ds:0x64bd84
  58e3ab:	8b ce                	mov    ecx,esi
  58e3ad:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  58e3b1:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  58e3b5:	57                   	push   edi
  58e3b6:	e8 55 e4 f1 ff       	call   0x4ac810
  58e3bb:	6a 6c                	push   0x6c
  58e3bd:	e8 f3 bc 07 00       	call   0x60a0b5
  58e3c2:	83 c4 04             	add    esp,0x4
  58e3c5:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e3c9:	85 c0                	test   eax,eax
  58e3cb:	c7 44 24 78 1c 00 00 	mov    DWORD PTR [esp+0x78],0x1c
  58e3d2:	00 
  58e3d3:	74 1e                	je     0x58e3f3
  58e3d5:	68 60 99 6c 00       	push   0x6c9960
  58e3da:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e3dd:	68 28 99 6c 00       	push   0x6c9928
  58e3e2:	51                   	push   ecx
  58e3e3:	68 2c 01 00 00       	push   0x12c
  58e3e8:	8b c8                	mov    ecx,eax
  58e3ea:	e8 b1 e2 f1 ff       	call   0x4ac6a0
  58e3ef:	8b f0                	mov    esi,eax
  58e3f1:	eb 02                	jmp    0x58e3f5
  58e3f3:	33 f6                	xor    esi,esi
  58e3f5:	56                   	push   esi
  58e3f6:	8b cd                	mov    ecx,ebp
  58e3f8:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e3ff:	ff 
  58e400:	e8 db ec f1 ff       	call   0x4ad0e0
  58e405:	8b c8                	mov    ecx,eax
  58e407:	e8 d4 ee f1 ff       	call   0x4ad2e0
  58e40c:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e410:	d8 0d c8 a2 64 00    	fmul   DWORD PTR ds:0x64a2c8
  58e416:	8b ce                	mov    ecx,esi
  58e418:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  58e41c:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
  58e420:	53                   	push   ebx
  58e421:	e8 ea e3 f1 ff       	call   0x4ac810
  58e426:	6a 6c                	push   0x6c
  58e428:	e8 88 bc 07 00       	call   0x60a0b5
  58e42d:	83 c4 04             	add    esp,0x4
  58e430:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e434:	85 c0                	test   eax,eax
  58e436:	c7 44 24 78 1d 00 00 	mov    DWORD PTR [esp+0x78],0x1d
  58e43d:	00 
  58e43e:	74 1e                	je     0x58e45e
  58e440:	68 f0 98 6c 00       	push   0x6c98f0
  58e445:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e448:	68 b8 98 6c 00       	push   0x6c98b8
  58e44d:	52                   	push   edx
  58e44e:	68 90 01 00 00       	push   0x190
  58e453:	8b c8                	mov    ecx,eax
  58e455:	e8 46 e2 f1 ff       	call   0x4ac6a0
  58e45a:	8b f0                	mov    esi,eax
  58e45c:	eb 02                	jmp    0x58e460
  58e45e:	33 f6                	xor    esi,esi
  58e460:	56                   	push   esi
  58e461:	8b cd                	mov    ecx,ebp
  58e463:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e46a:	ff 
  58e46b:	e8 70 ec f1 ff       	call   0x4ad0e0
  58e470:	8b c8                	mov    ecx,eax
  58e472:	e8 69 ee f1 ff       	call   0x4ad2e0
  58e477:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e47b:	d8 0d d0 d7 64 00    	fmul   DWORD PTR ds:0x64d7d0
  58e481:	51                   	push   ecx
  58e482:	8b ce                	mov    ecx,esi
  58e484:	d9 1c 24             	fstp   DWORD PTR [esp]
  58e487:	e8 84 e3 f1 ff       	call   0x4ac810
  58e48c:	6a 6c                	push   0x6c
  58e48e:	e8 22 bc 07 00       	call   0x60a0b5
  58e493:	83 c4 04             	add    esp,0x4
  58e496:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e49a:	85 c0                	test   eax,eax
  58e49c:	c7 44 24 78 1e 00 00 	mov    DWORD PTR [esp+0x78],0x1e
  58e4a3:	00 
  58e4a4:	74 1e                	je     0x58e4c4
  58e4a6:	68 80 98 6c 00       	push   0x6c9880
  58e4ab:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e4ae:	68 48 98 6c 00       	push   0x6c9848
  58e4b3:	51                   	push   ecx
  58e4b4:	68 f4 01 00 00       	push   0x1f4
  58e4b9:	8b c8                	mov    ecx,eax
  58e4bb:	e8 e0 e1 f1 ff       	call   0x4ac6a0
  58e4c0:	8b f0                	mov    esi,eax
  58e4c2:	eb 02                	jmp    0x58e4c6
  58e4c4:	33 f6                	xor    esi,esi
  58e4c6:	56                   	push   esi
  58e4c7:	8b cd                	mov    ecx,ebp
  58e4c9:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e4d0:	ff 
  58e4d1:	e8 0a ec f1 ff       	call   0x4ad0e0
  58e4d6:	8b c8                	mov    ecx,eax
  58e4d8:	e8 03 ee f1 ff       	call   0x4ad2e0
  58e4dd:	53                   	push   ebx
  58e4de:	8b ce                	mov    ecx,esi
  58e4e0:	e8 2b e3 f1 ff       	call   0x4ac810
  58e4e5:	6a 6c                	push   0x6c
  58e4e7:	e8 c9 bb 07 00       	call   0x60a0b5
  58e4ec:	83 c4 04             	add    esp,0x4
  58e4ef:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e4f3:	85 c0                	test   eax,eax
  58e4f5:	c7 44 24 78 1f 00 00 	mov    DWORD PTR [esp+0x78],0x1f
  58e4fc:	00 
  58e4fd:	74 1e                	je     0x58e51d
  58e4ff:	68 10 98 6c 00       	push   0x6c9810
  58e504:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e507:	68 d0 97 6c 00       	push   0x6c97d0
  58e50c:	52                   	push   edx
  58e50d:	68 58 02 00 00       	push   0x258
  58e512:	8b c8                	mov    ecx,eax
  58e514:	e8 87 e1 f1 ff       	call   0x4ac6a0
  58e519:	8b f0                	mov    esi,eax
  58e51b:	eb 02                	jmp    0x58e51f
  58e51d:	33 f6                	xor    esi,esi
  58e51f:	83 cb ff             	or     ebx,0xffffffff
  58e522:	56                   	push   esi
  58e523:	8b cd                	mov    ecx,ebp
  58e525:	89 5c 24 7c          	mov    DWORD PTR [esp+0x7c],ebx
  58e529:	e8 b2 eb f1 ff       	call   0x4ad0e0
  58e52e:	8b c8                	mov    ecx,eax
  58e530:	e8 ab ed f1 ff       	call   0x4ad2e0
  58e535:	57                   	push   edi
  58e536:	8b ce                	mov    ecx,esi
  58e538:	e8 d3 e2 f1 ff       	call   0x4ac810
  58e53d:	6a 6c                	push   0x6c
  58e53f:	e8 71 bb 07 00       	call   0x60a0b5
  58e544:	83 c4 04             	add    esp,0x4
  58e547:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e54b:	85 c0                	test   eax,eax
  58e54d:	c7 44 24 78 20 00 00 	mov    DWORD PTR [esp+0x78],0x20
  58e554:	00 
  58e555:	0f 84 f5 02 00 00    	je     0x58e850
  58e55b:	68 98 97 6c 00       	push   0x6c9798
  58e560:	68 60 97 6c 00       	push   0x6c9760
  58e565:	e9 d2 02 00 00       	jmp    0x58e83c
  58e56a:	6a 6c                	push   0x6c
  58e56c:	e8 44 bb 07 00       	call   0x60a0b5
  58e571:	83 c4 04             	add    esp,0x4
  58e574:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e578:	85 c0                	test   eax,eax
  58e57a:	c7 44 24 78 11 00 00 	mov    DWORD PTR [esp+0x78],0x11
  58e581:	00 
  58e582:	74 1b                	je     0x58e59f
  58e584:	68 48 9e 6c 00       	push   0x6c9e48
  58e589:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e58c:	68 10 9e 6c 00       	push   0x6c9e10
  58e591:	52                   	push   edx
  58e592:	6a 00                	push   0x0
  58e594:	8b c8                	mov    ecx,eax
  58e596:	e8 05 e1 f1 ff       	call   0x4ac6a0
  58e59b:	8b f0                	mov    esi,eax
  58e59d:	eb 02                	jmp    0x58e5a1
  58e59f:	33 f6                	xor    esi,esi
  58e5a1:	83 cf ff             	or     edi,0xffffffff
  58e5a4:	56                   	push   esi
  58e5a5:	8b cd                	mov    ecx,ebp
  58e5a7:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e5ab:	e8 30 eb f1 ff       	call   0x4ad0e0
  58e5b0:	8b c8                	mov    ecx,eax
  58e5b2:	e8 29 ed f1 ff       	call   0x4ad2e0
  58e5b7:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e5bb:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  58e5c1:	51                   	push   ecx
  58e5c2:	8b ce                	mov    ecx,esi
  58e5c4:	d9 1c 24             	fstp   DWORD PTR [esp]
  58e5c7:	e8 44 e2 f1 ff       	call   0x4ac810
  58e5cc:	6a 6c                	push   0x6c
  58e5ce:	e8 e2 ba 07 00       	call   0x60a0b5
  58e5d3:	83 c4 04             	add    esp,0x4
  58e5d6:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e5da:	85 c0                	test   eax,eax
  58e5dc:	c7 44 24 78 12 00 00 	mov    DWORD PTR [esp+0x78],0x12
  58e5e3:	00 
  58e5e4:	74 1b                	je     0x58e601
  58e5e6:	68 d8 9d 6c 00       	push   0x6c9dd8
  58e5eb:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e5ee:	68 a0 9d 6c 00       	push   0x6c9da0
  58e5f3:	51                   	push   ecx
  58e5f4:	6a 64                	push   0x64
  58e5f6:	8b c8                	mov    ecx,eax
  58e5f8:	e8 a3 e0 f1 ff       	call   0x4ac6a0
  58e5fd:	8b f0                	mov    esi,eax
  58e5ff:	eb 02                	jmp    0x58e603
  58e601:	33 f6                	xor    esi,esi
  58e603:	56                   	push   esi
  58e604:	8b cd                	mov    ecx,ebp
  58e606:	89 7c 24 7c          	mov    DWORD PTR [esp+0x7c],edi
  58e60a:	e8 d1 ea f1 ff       	call   0x4ad0e0
  58e60f:	8b c8                	mov    ecx,eax
  58e611:	e8 ca ec f1 ff       	call   0x4ad2e0
  58e616:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e61a:	d8 0d 34 b7 64 00    	fmul   DWORD PTR ds:0x64b734
  58e620:	51                   	push   ecx
  58e621:	8b ce                	mov    ecx,esi
  58e623:	d9 1c 24             	fstp   DWORD PTR [esp]
  58e626:	e8 e5 e1 f1 ff       	call   0x4ac810
  58e62b:	6a 6c                	push   0x6c
  58e62d:	e8 83 ba 07 00       	call   0x60a0b5
  58e632:	83 c4 04             	add    esp,0x4
  58e635:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e639:	85 c0                	test   eax,eax
  58e63b:	c7 44 24 78 13 00 00 	mov    DWORD PTR [esp+0x78],0x13
  58e642:	00 
  58e643:	74 1e                	je     0x58e663
  58e645:	68 68 9d 6c 00       	push   0x6c9d68
  58e64a:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e64d:	68 28 9d 6c 00       	push   0x6c9d28
  58e652:	52                   	push   edx
  58e653:	68 c8 00 00 00       	push   0xc8
  58e658:	8b c8                	mov    ecx,eax
  58e65a:	e8 41 e0 f1 ff       	call   0x4ac6a0
  58e65f:	8b f0                	mov    esi,eax
  58e661:	eb 02                	jmp    0x58e665
  58e663:	33 f6                	xor    esi,esi
  58e665:	56                   	push   esi
  58e666:	8b cd                	mov    ecx,ebp
  58e668:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e66f:	ff 
  58e670:	e8 6b ea f1 ff       	call   0x4ad0e0
  58e675:	8b c8                	mov    ecx,eax
  58e677:	e8 64 ec f1 ff       	call   0x4ad2e0
  58e67c:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e680:	d8 0d 84 bd 64 00    	fmul   DWORD PTR ds:0x64bd84
  58e686:	8b ce                	mov    ecx,esi
  58e688:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  58e68c:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  58e690:	57                   	push   edi
  58e691:	e8 7a e1 f1 ff       	call   0x4ac810
  58e696:	6a 6c                	push   0x6c
  58e698:	e8 18 ba 07 00       	call   0x60a0b5
  58e69d:	83 c4 04             	add    esp,0x4
  58e6a0:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e6a4:	85 c0                	test   eax,eax
  58e6a6:	c7 44 24 78 14 00 00 	mov    DWORD PTR [esp+0x78],0x14
  58e6ad:	00 
  58e6ae:	74 1e                	je     0x58e6ce
  58e6b0:	68 f0 9c 6c 00       	push   0x6c9cf0
  58e6b5:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e6b8:	68 b8 9c 6c 00       	push   0x6c9cb8
  58e6bd:	51                   	push   ecx
  58e6be:	68 2c 01 00 00       	push   0x12c
  58e6c3:	8b c8                	mov    ecx,eax
  58e6c5:	e8 d6 df f1 ff       	call   0x4ac6a0
  58e6ca:	8b f0                	mov    esi,eax
  58e6cc:	eb 02                	jmp    0x58e6d0
  58e6ce:	33 f6                	xor    esi,esi
  58e6d0:	56                   	push   esi
  58e6d1:	8b cd                	mov    ecx,ebp
  58e6d3:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e6da:	ff 
  58e6db:	e8 00 ea f1 ff       	call   0x4ad0e0
  58e6e0:	8b c8                	mov    ecx,eax
  58e6e2:	e8 f9 eb f1 ff       	call   0x4ad2e0
  58e6e7:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e6eb:	d8 0d c8 a2 64 00    	fmul   DWORD PTR ds:0x64a2c8
  58e6f1:	8b ce                	mov    ecx,esi
  58e6f3:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  58e6f7:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
  58e6fb:	53                   	push   ebx
  58e6fc:	e8 0f e1 f1 ff       	call   0x4ac810
  58e701:	6a 6c                	push   0x6c
  58e703:	e8 ad b9 07 00       	call   0x60a0b5
  58e708:	83 c4 04             	add    esp,0x4
  58e70b:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e70f:	85 c0                	test   eax,eax
  58e711:	c7 44 24 78 15 00 00 	mov    DWORD PTR [esp+0x78],0x15
  58e718:	00 
  58e719:	74 1e                	je     0x58e739
  58e71b:	68 80 9c 6c 00       	push   0x6c9c80
  58e720:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e723:	68 48 9c 6c 00       	push   0x6c9c48
  58e728:	52                   	push   edx
  58e729:	68 90 01 00 00       	push   0x190
  58e72e:	8b c8                	mov    ecx,eax
  58e730:	e8 6b df f1 ff       	call   0x4ac6a0
  58e735:	8b f0                	mov    esi,eax
  58e737:	eb 02                	jmp    0x58e73b
  58e739:	33 f6                	xor    esi,esi
  58e73b:	56                   	push   esi
  58e73c:	8b cd                	mov    ecx,ebp
  58e73e:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e745:	ff 
  58e746:	e8 95 e9 f1 ff       	call   0x4ad0e0
  58e74b:	8b c8                	mov    ecx,eax
  58e74d:	e8 8e eb f1 ff       	call   0x4ad2e0
  58e752:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e756:	d8 0d d0 d7 64 00    	fmul   DWORD PTR ds:0x64d7d0
  58e75c:	51                   	push   ecx
  58e75d:	8b ce                	mov    ecx,esi
  58e75f:	d9 1c 24             	fstp   DWORD PTR [esp]
  58e762:	e8 a9 e0 f1 ff       	call   0x4ac810
  58e767:	6a 6c                	push   0x6c
  58e769:	e8 47 b9 07 00       	call   0x60a0b5
  58e76e:	83 c4 04             	add    esp,0x4
  58e771:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e775:	85 c0                	test   eax,eax
  58e777:	c7 44 24 78 16 00 00 	mov    DWORD PTR [esp+0x78],0x16
  58e77e:	00 
  58e77f:	74 1e                	je     0x58e79f
  58e781:	68 10 9c 6c 00       	push   0x6c9c10
  58e786:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e789:	68 d8 9b 6c 00       	push   0x6c9bd8
  58e78e:	51                   	push   ecx
  58e78f:	68 f4 01 00 00       	push   0x1f4
  58e794:	8b c8                	mov    ecx,eax
  58e796:	e8 05 df f1 ff       	call   0x4ac6a0
  58e79b:	8b f0                	mov    esi,eax
  58e79d:	eb 02                	jmp    0x58e7a1
  58e79f:	33 f6                	xor    esi,esi
  58e7a1:	56                   	push   esi
  58e7a2:	8b cd                	mov    ecx,ebp
  58e7a4:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e7ab:	ff 
  58e7ac:	e8 2f e9 f1 ff       	call   0x4ad0e0
  58e7b1:	8b c8                	mov    ecx,eax
  58e7b3:	e8 28 eb f1 ff       	call   0x4ad2e0
  58e7b8:	53                   	push   ebx
  58e7b9:	8b ce                	mov    ecx,esi
  58e7bb:	e8 50 e0 f1 ff       	call   0x4ac810
  58e7c0:	6a 6c                	push   0x6c
  58e7c2:	e8 ee b8 07 00       	call   0x60a0b5
  58e7c7:	83 c4 04             	add    esp,0x4
  58e7ca:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e7ce:	85 c0                	test   eax,eax
  58e7d0:	c7 44 24 78 17 00 00 	mov    DWORD PTR [esp+0x78],0x17
  58e7d7:	00 
  58e7d8:	74 1e                	je     0x58e7f8
  58e7da:	68 a0 9b 6c 00       	push   0x6c9ba0
  58e7df:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e7e2:	68 60 9b 6c 00       	push   0x6c9b60
  58e7e7:	52                   	push   edx
  58e7e8:	68 58 02 00 00       	push   0x258
  58e7ed:	8b c8                	mov    ecx,eax
  58e7ef:	e8 ac de f1 ff       	call   0x4ac6a0
  58e7f4:	8b f0                	mov    esi,eax
  58e7f6:	eb 02                	jmp    0x58e7fa
  58e7f8:	33 f6                	xor    esi,esi
  58e7fa:	83 cb ff             	or     ebx,0xffffffff
  58e7fd:	56                   	push   esi
  58e7fe:	8b cd                	mov    ecx,ebp
  58e800:	89 5c 24 7c          	mov    DWORD PTR [esp+0x7c],ebx
  58e804:	e8 d7 e8 f1 ff       	call   0x4ad0e0
  58e809:	8b c8                	mov    ecx,eax
  58e80b:	e8 d0 ea f1 ff       	call   0x4ad2e0
  58e810:	57                   	push   edi
  58e811:	8b ce                	mov    ecx,esi
  58e813:	e8 f8 df f1 ff       	call   0x4ac810
  58e818:	6a 6c                	push   0x6c
  58e81a:	e8 96 b8 07 00       	call   0x60a0b5
  58e81f:	83 c4 04             	add    esp,0x4
  58e822:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  58e826:	85 c0                	test   eax,eax
  58e828:	c7 44 24 78 18 00 00 	mov    DWORD PTR [esp+0x78],0x18
  58e82f:	00 
  58e830:	74 1e                	je     0x58e850
  58e832:	68 28 9b 6c 00       	push   0x6c9b28
  58e837:	68 f0 9a 6c 00       	push   0x6c9af0
  58e83c:	8d 4d 5c             	lea    ecx,[ebp+0x5c]
  58e83f:	51                   	push   ecx
  58e840:	68 bb 02 00 00       	push   0x2bb
  58e845:	8b c8                	mov    ecx,eax
  58e847:	e8 54 de f1 ff       	call   0x4ac6a0
  58e84c:	8b f0                	mov    esi,eax
  58e84e:	eb 02                	jmp    0x58e852
  58e850:	33 f6                	xor    esi,esi
  58e852:	89 5c 24 78          	mov    DWORD PTR [esp+0x78],ebx
  58e856:	56                   	push   esi
  58e857:	8b cd                	mov    ecx,ebp
  58e859:	e8 82 e8 f1 ff       	call   0x4ad0e0
  58e85e:	8b c8                	mov    ecx,eax
  58e860:	e8 7b ea f1 ff       	call   0x4ad2e0
  58e865:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e869:	d8 0d 78 b8 64 00    	fmul   DWORD PTR ds:0x64b878
  58e86f:	51                   	push   ecx
  58e870:	d9 1c 24             	fstp   DWORD PTR [esp]
  58e873:	8b ce                	mov    ecx,esi
  58e875:	e8 96 df f1 ff       	call   0x4ac810
  58e87a:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  58e87e:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
  58e885:	00 
  58e886:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  58e88a:	8b c2                	mov    eax,edx
  58e88c:	8b ca                	mov    ecx,edx
  58e88e:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  58e892:	8b 85 7c 01 00 00    	mov    eax,DWORD PTR [ebp+0x17c]
  58e898:	d9 e0                	fchs
  58e89a:	d9 54 24 2c          	fst    DWORD PTR [esp+0x2c]
  58e89e:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  58e8a2:	83 f8 03             	cmp    eax,0x3
  58e8a5:	c7 44 24 48 00 00 80 	mov    DWORD PTR [esp+0x48],0x3f800000
  58e8ac:	3f 
  58e8ad:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
  58e8b4:	00 
  58e8b5:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  58e8bc:	00 
  58e8bd:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  58e8c1:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  58e8c5:	0f 84 b5 02 00 00    	je     0x58eb80
  58e8cb:	68 c8 00 00 00       	push   0xc8
  58e8d0:	e8 e0 b7 07 00       	call   0x60a0b5
  58e8d5:	8b f0                	mov    esi,eax
  58e8d7:	83 c4 04             	add    esp,0x4
  58e8da:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  58e8de:	85 f6                	test   esi,esi
  58e8e0:	c7 44 24 78 2f 00 00 	mov    DWORD PTR [esp+0x78],0x2f
  58e8e7:	00 
  58e8e8:	74 3d                	je     0x58e927
  58e8ea:	8b 85 7c 01 00 00    	mov    eax,DWORD PTR [ebp+0x17c]
  58e8f0:	83 f8 02             	cmp    eax,0x2
  58e8f3:	b8 80 9e 6c 00       	mov    eax,0x6c9e80
  58e8f8:	74 05                	je     0x58e8ff
  58e8fa:	b8 f0 9e 6c 00       	mov    eax,0x6c9ef0
  58e8ff:	8d 54 24 44          	lea    edx,[esp+0x44]
  58e903:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  58e907:	52                   	push   edx
  58e908:	50                   	push   eax
  58e909:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  58e90c:	51                   	push   ecx
  58e90d:	8b cd                	mov    ecx,ebp
  58e90f:	ff 50 48             	call   DWORD PTR [eax+0x48]
  58e912:	8d 55 5c             	lea    edx,[ebp+0x5c]
  58e915:	50                   	push   eax
  58e916:	52                   	push   edx
  58e917:	68 c8 00 00 00       	push   0xc8
  58e91c:	8b ce                	mov    ecx,esi
  58e91e:	e8 0d 40 f2 ff       	call   0x4b2930
  58e923:	8b d8                	mov    ebx,eax
  58e925:	eb 02                	jmp    0x58e929
  58e927:	33 db                	xor    ebx,ebx
  58e929:	53                   	push   ebx
  58e92a:	8b cd                	mov    ecx,ebp
  58e92c:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58e933:	ff 
  58e934:	e8 a7 e7 f1 ff       	call   0x4ad0e0
  58e939:	8b c8                	mov    ecx,eax
  58e93b:	e8 a0 e9 f1 ff       	call   0x4ad2e0
  58e940:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58e944:	dc 0d 80 fe 64 00    	fmul   QWORD PTR ds:0x64fe80
  58e94a:	b8 01 00 00 00       	mov    eax,0x1
  58e94f:	c7 43 60 b0 04 00 00 	mov    DWORD PTR [ebx+0x60],0x4b0
  58e956:	89 83 8c 00 00 00    	mov    DWORD PTR [ebx+0x8c],eax
  58e95c:	89 83 90 00 00 00    	mov    DWORD PTR [ebx+0x90],eax
  58e962:	c7 43 64 07 07 00 00 	mov    DWORD PTR [ebx+0x64],0x707
  58e969:	d9 54 24 24          	fst    DWORD PTR [esp+0x24]
  58e96d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  58e973:	df e0                	fnstsw ax
  58e975:	f6 c4 01             	test   ah,0x1
  58e978:	0f 84 ae 00 00 00    	je     0x58ea2c
  58e97e:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  58e982:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  58e987:	88 44 24 50          	mov    BYTE PTR [esp+0x50],al
  58e98b:	83 c9 ff             	or     ecx,0xffffffff
  58e98e:	33 c0                	xor    eax,eax
  58e990:	33 f6                	xor    esi,esi
  58e992:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  58e994:	f7 d1                	not    ecx
  58e996:	49                   	dec    ecx
  58e997:	6a 01                	push   0x1
  58e999:	8b e9                	mov    ebp,ecx
  58e99b:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  58e99f:	55                   	push   ebp
  58e9a0:	89 74 24 5c          	mov    DWORD PTR [esp+0x5c],esi
  58e9a4:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  58e9a8:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
  58e9ac:	e8 8f 2f e7 ff       	call   0x401940
  58e9b1:	84 c0                	test   al,al
  58e9b3:	74 25                	je     0x58e9da
  58e9b5:	8b 7c 24 54          	mov    edi,DWORD PTR [esp+0x54]
  58e9b9:	8b cd                	mov    ecx,ebp
  58e9bb:	8b d1                	mov    edx,ecx
  58e9bd:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  58e9c2:	c1 e9 02             	shr    ecx,0x2
  58e9c5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  58e9c7:	8b ca                	mov    ecx,edx
  58e9c9:	55                   	push   ebp
  58e9ca:	83 e1 03             	and    ecx,0x3
  58e9cd:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  58e9cf:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  58e9d3:	e8 b8 57 e7 ff       	call   0x404190
  58e9d8:	33 f6                	xor    esi,esi
  58e9da:	8d 44 24 50          	lea    eax,[esp+0x50]
  58e9de:	c7 44 24 78 30 00 00 	mov    DWORD PTR [esp+0x78],0x30
  58e9e5:	00 
  58e9e6:	50                   	push   eax
  58e9e7:	6a 5b                	push   0x5b
  58e9e9:	68 24 62 6a 00       	push   0x6a6224
  58e9ee:	68 68 62 69 00       	push   0x696268
  58e9f3:	e8 f8 1d 01 00       	call   0x5a07f0
  58e9f8:	ff d0                	call   eax
  58e9fa:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  58e9fe:	83 c4 10             	add    esp,0x10
  58ea01:	3b c6                	cmp    eax,esi
  58ea03:	c7 44 24 78 ff ff ff 	mov    DWORD PTR [esp+0x78],0xffffffff
  58ea0a:	ff 
  58ea0b:	74 21                	je     0x58ea2e
  58ea0d:	8d 48 ff             	lea    ecx,[eax-0x1]
  58ea10:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  58ea13:	84 c0                	test   al,al
  58ea15:	74 0a                	je     0x58ea21
  58ea17:	3c ff                	cmp    al,0xff
  58ea19:	74 06                	je     0x58ea21
  58ea1b:	fe c8                	dec    al
  58ea1d:	88 01                	mov    BYTE PTR [ecx],al
  58ea1f:	eb 0d                	jmp    0x58ea2e
  58ea21:	51                   	push   ecx
  58ea22:	e8 c9 fb 06 00       	call   0x5fe5f0
  58ea27:	83 c4 04             	add    esp,0x4
  58ea2a:	eb 02                	jmp    0x58ea2e
  58ea2c:	33 f6                	xor    esi,esi
  58ea2e:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  58ea32:	dc 0d 68 c5 64 00    	fmul   QWORD PTR ds:0x64c568
  58ea38:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  58ea3c:	89 4b 68             	mov    DWORD PTR [ebx+0x68],ecx
  58ea3f:	d9 54 24 24          	fst    DWORD PTR [esp+0x24]
  58ea43:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  58ea49:	df e0                	fnstsw ax
  58ea4b:	f6 c4 01             	test   ah,0x1
  58ea4e:	0f 84 aa 00 00 00    	je     0x58eafe
  58ea54:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  58ea59:	83 c9 ff             	or     ecx,0xffffffff
  58ea5c:	33 c0                	xor    eax,eax
  58ea5e:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  58ea62:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  58ea64:	f7 d1                	not    ecx
  58ea66:	49                   	dec    ecx
  58ea67:	6a 01                	push   0x1
  58ea69:	8b e9                	mov    ebp,ecx
  58ea6b:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  58ea6f:	55                   	push   ebp
  58ea70:	88 54 24 58          	mov    BYTE PTR [esp+0x58],dl
  58ea74:	89 74 24 5c          	mov    DWORD PTR [esp+0x5c],esi
  58ea78:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  58ea7c:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
  58ea80:	e8 bb 2e e7 ff       	call   0x401940
  58ea85:	84 c0                	test   al,al
  58ea87:	74 25                	je     0x58eaae
  58ea89:	8b 7c 24 54          	mov    edi,DWORD PTR [esp+0x54]
  58ea8d:	8b cd                	mov    ecx,ebp
  58ea8f:	8b c1                	mov    eax,ecx
  58ea91:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  58ea96:	c1 e9 02             	shr    ecx,0x2
  58ea99:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  58ea9b:	8b c8                	mov    ecx,eax
  58ea9d:	55                   	push   ebp
  58ea9e:	83 e1 03             	and    ecx,0x3
  58eaa1:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  58eaa3:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  58eaa7:	e8 e4 56 e7 ff       	call   0x404190
  58eaac:	33 f6                	xor    esi,esi
  58eaae:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  58eab2:	c7 44 24 78 31 00 00 	mov    DWORD PTR [esp+0x78],0x31
  58eab9:	00 
  58eaba:	51                   	push   ecx
  58eabb:	6a 61                	push   0x61
  58eabd:	68 24 62 6a 00       	push   0x6a6224
  58eac2:	68 68 62 69 00       	push   0x696268
  58eac7:	e8 24 1d 01 00       	call   0x5a07f0
  58eacc:	ff d0                	call   eax
  58eace:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  58ead2:	83 c4 10             	add    esp,0x10
  58ead5:	3b c6                	cmp    eax,esi
  58ead7:	c7 44 24 78 ff ff ff 	mov    DWORD PTR [esp+0x78],0xffffffff
  58eade:	ff 
  58eadf:	74 1d                	je     0x58eafe
  58eae1:	8d 48 ff             	lea    ecx,[eax-0x1]
  58eae4:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  58eae7:	84 c0                	test   al,al
  58eae9:	74 0a                	je     0x58eaf5
  58eaeb:	3c ff                	cmp    al,0xff
  58eaed:	74 06                	je     0x58eaf5
  58eaef:	fe c8                	dec    al
  58eaf1:	88 01                	mov    BYTE PTR [ecx],al
  58eaf3:	eb 09                	jmp    0x58eafe
  58eaf5:	51                   	push   ecx
  58eaf6:	e8 f5 fa 06 00       	call   0x5fe5f0
  58eafb:	83 c4 04             	add    esp,0x4
  58eafe:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  58eb02:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  58eb06:	8d 83 bc 00 00 00    	lea    eax,[ebx+0xbc]
  58eb0c:	89 53 6c             	mov    DWORD PTR [ebx+0x6c],edx
  58eb0f:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  58eb13:	68 e8 03 00 00       	push   0x3e8
  58eb18:	89 08                	mov    DWORD PTR [eax],ecx
  58eb1a:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  58eb1e:	68 90 01 00 00       	push   0x190
  58eb23:	c7 83 84 00 00 00 00 	mov    DWORD PTR [ebx+0x84],0x41c80000
  58eb2a:	00 c8 41 
  58eb2d:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  58eb30:	8d 93 b0 00 00 00    	lea    edx,[ebx+0xb0]
  58eb36:	c7 83 88 00 00 00 00 	mov    DWORD PTR [ebx+0x88],0x42200000
  58eb3d:	00 20 42 
  58eb40:	c7 43 70 00 00 48 42 	mov    DWORD PTR [ebx+0x70],0x42480000
  58eb47:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  58eb4a:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
  58eb4e:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  58eb52:	89 02                	mov    DWORD PTR [edx],eax
  58eb54:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  58eb58:	c7 43 74 00 00 c8 42 	mov    DWORD PTR [ebx+0x74],0x42c80000
  58eb5f:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  58eb62:	8b cb                	mov    ecx,ebx
  58eb64:	c7 43 78 00 00 a0 42 	mov    DWORD PTR [ebx+0x78],0x42a00000
  58eb6b:	c7 43 7c 00 00 20 41 	mov    DWORD PTR [ebx+0x7c],0x41200000
  58eb72:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  58eb75:	89 b3 80 00 00 00    	mov    DWORD PTR [ebx+0x80],esi
  58eb7b:	e8 20 ee f1 ff       	call   0x4ad9a0
  58eb80:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  58eb84:	5f                   	pop    edi
  58eb85:	5e                   	pop    esi
  58eb86:	5d                   	pop    ebp
  58eb87:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  58eb8e:	5b                   	pop    ebx
  58eb8f:	83 c4 6c             	add    esp,0x6c
  58eb92:	c3                   	ret
  58eb93:	90                   	nop
  58eb94:	90                   	nop
  58eb95:	90                   	nop
  58eb96:	90                   	nop
  58eb97:	90                   	nop
  58eb98:	90                   	nop
  58eb99:	90                   	nop
  58eb9a:	90                   	nop
  58eb9b:	90                   	nop
  58eb9c:	90                   	nop
  58eb9d:	90                   	nop
  58eb9e:	90                   	nop
  58eb9f:	90                   	nop
  58eba0:	6a ff                	push   0xffffffff
  58eba2:	68 c3 33 64 00       	push   0x6433c3
  58eba7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  58ebad:	50                   	push   eax
  58ebae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  58ebb5:	83 ec 2c             	sub    esp,0x2c
  58ebb8:	56                   	push   esi
  58ebb9:	33 f6                	xor    esi,esi
  58ebbb:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  58ebbf:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
  58ebc3:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  58ebc7:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  58ebcc:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
  58ebd1:	3b c6                	cmp    eax,esi
  58ebd3:	75 05                	jne    0x58ebda
  58ebd5:	e8 a6 c6 fc ff       	call   0x55b280
  58ebda:	53                   	push   ebx
  58ebdb:	55                   	push   ebp
  58ebdc:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  58ebe0:	57                   	push   edi
  58ebe1:	51                   	push   ecx
  58ebe2:	8b c8                	mov    ecx,eax
  58ebe4:	e8 67 2b e9 ff       	call   0x421750
  58ebe9:	8b f8                	mov    edi,eax
  58ebeb:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  58ebef:	8b 0f                	mov    ecx,DWORD PTR [edi]
  58ebf1:	3b c1                	cmp    eax,ecx
  58ebf3:	c6 44 24 44 02       	mov    BYTE PTR [esp+0x44],0x2
  58ebf8:	74 2a                	je     0x58ec24
  58ebfa:	3b c6                	cmp    eax,esi
  58ebfc:	74 17                	je     0x58ec15
  58ebfe:	8b 58 14             	mov    ebx,DWORD PTR [eax+0x14]
  58ec01:	8b c8                	mov    ecx,eax
  58ec03:	83 c0 14             	add    eax,0x14
  58ec06:	4b                   	dec    ebx
  58ec07:	8b d3                	mov    edx,ebx
  58ec09:	3b d6                	cmp    edx,esi
  58ec0b:	89 18                	mov    DWORD PTR [eax],ebx
  58ec0d:	75 06                	jne    0x58ec15
  58ec0f:	56                   	push   esi
  58ec10:	e8 ab d3 01 00       	call   0x5abfc0
  58ec15:	8b 17                	mov    edx,DWORD PTR [edi]
  58ec17:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  58ec1b:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  58ec1f:	e8 8c 58 ff ff       	call   0x5844b0
  58ec24:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  58ec28:	c6 44 24 44 01       	mov    BYTE PTR [esp+0x44],0x1
  58ec2d:	e8 de e6 fe ff       	call   0x57d310
  58ec32:	8b 3d 5c 91 6b 00    	mov    edi,DWORD PTR ds:0x6b915c
  58ec38:	3b fe                	cmp    edi,esi
  58ec3a:	75 07                	jne    0x58ec43
  58ec3c:	e8 3f d8 f2 ff       	call   0x4bc480
  58ec41:	8b f8                	mov    edi,eax
  58ec43:	39 b7 a4 03 00 00    	cmp    DWORD PTR [edi+0x3a4],esi
  58ec49:	75 46                	jne    0x58ec91
  58ec4b:	8d 44 24 13          	lea    eax,[esp+0x13]
  58ec4f:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  58ec53:	50                   	push   eax
  58ec54:	68 70 3f 6b 00       	push   0x6b3f70
  58ec59:	e8 b2 ab e7 ff       	call   0x409810
  58ec5e:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  58ec62:	c6 44 24 44 03       	mov    BYTE PTR [esp+0x44],0x3
  58ec67:	51                   	push   ecx
  58ec68:	68 30 01 00 00       	push   0x130
  58ec6d:	68 8c e5 68 00       	push   0x68e58c
  58ec72:	68 84 e5 68 00       	push   0x68e584
  58ec77:	e8 74 1b 01 00       	call   0x5a07f0
  58ec7c:	ff d0                	call   eax
  58ec7e:	83 c4 10             	add    esp,0x10
  58ec81:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  58ec85:	c6 44 24 44 01       	mov    BYTE PTR [esp+0x44],0x1
  58ec8a:	6a 01                	push   0x1
  58ec8c:	e8 0f 54 e7 ff       	call   0x4040a0
  58ec91:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
  58ec97:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  58ec9b:	52                   	push   edx
  58ec9c:	e8 7f 50 ec ff       	call   0x453d20
  58eca1:	8b f8                	mov    edi,eax
  58eca3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  58eca7:	8b 0f                	mov    ecx,DWORD PTR [edi]
  58eca9:	3b c1                	cmp    eax,ecx
  58ecab:	c6 44 24 44 04       	mov    BYTE PTR [esp+0x44],0x4
  58ecb0:	74 2a                	je     0x58ecdc
  58ecb2:	3b c6                	cmp    eax,esi
  58ecb4:	74 17                	je     0x58eccd
  58ecb6:	8b 58 14             	mov    ebx,DWORD PTR [eax+0x14]
  58ecb9:	8b c8                	mov    ecx,eax
  58ecbb:	83 c0 14             	add    eax,0x14
  58ecbe:	4b                   	dec    ebx
  58ecbf:	8b d3                	mov    edx,ebx
  58ecc1:	3b d6                	cmp    edx,esi
  58ecc3:	89 18                	mov    DWORD PTR [eax],ebx
  58ecc5:	75 06                	jne    0x58eccd
  58ecc7:	56                   	push   esi
  58ecc8:	e8 f3 d2 01 00       	call   0x5abfc0
  58eccd:	8b 07                	mov    eax,DWORD PTR [edi]
  58eccf:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  58ecd3:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  58ecd7:	e8 d4 57 ff ff       	call   0x5844b0
  58ecdc:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  58ece0:	c6 44 24 44 01       	mov    BYTE PTR [esp+0x44],0x1
  58ece5:	e8 26 e6 fe ff       	call   0x57d310
  58ecea:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  58ecee:	3b ce                	cmp    ecx,esi
  58ecf0:	74 7e                	je     0x58ed70
  58ecf2:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  58ecf6:	68 00 00 48 43       	push   0x43480000
  58ecfb:	52                   	push   edx
  58ecfc:	e8 3f 7b fc ff       	call   0x556840
  58ed01:	8b 08                	mov    ecx,DWORD PTR [eax]
  58ed03:	83 ec 08             	sub    esp,0x8
  58ed06:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  58ed0a:	83 ec 08             	sub    esp,0x8
  58ed0d:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  58ed10:	83 ec 08             	sub    esp,0x8
  58ed13:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  58ed17:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  58ed1b:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  58ed1e:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  58ed22:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
  58ed26:	dd 5c 24 10          	fstp   QWORD PTR [esp+0x10]
  58ed2a:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  58ed2e:	dd 5c 24 08          	fstp   QWORD PTR [esp+0x8]
  58ed32:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  58ed36:	dd 1c 24             	fstp   QWORD PTR [esp]
  58ed39:	68 6c 62 6a 00       	push   0x6a626c
  58ed3e:	51                   	push   ecx
  58ed3f:	e8 4c f6 01 00       	call   0x5ae390
  58ed44:	83 c4 20             	add    esp,0x20
  58ed47:	8b 15 a8 ab 64 00    	mov    edx,DWORD PTR ds:0x64aba8
  58ed4d:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  58ed51:	52                   	push   edx
  58ed52:	56                   	push   esi
  58ed53:	50                   	push   eax
  58ed54:	c6 44 24 50 06       	mov    BYTE PTR [esp+0x50],0x6
  58ed59:	e8 a2 de e7 ff       	call   0x40cc00
  58ed5e:	6a 01                	push   0x1
  58ed60:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  58ed64:	c6 44 24 48 01       	mov    BYTE PTR [esp+0x48],0x1
  58ed69:	e8 32 53 e7 ff       	call   0x4040a0
  58ed6e:	eb 51                	jmp    0x58edc1
  58ed70:	33 c0                	xor    eax,eax
  58ed72:	bf 54 62 6a 00       	mov    edi,0x6a6254
  58ed77:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  58ed7b:	83 c9 ff             	or     ecx,0xffffffff
  58ed7e:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  58ed82:	8b 5c 24 4c          	mov    ebx,DWORD PTR [esp+0x4c]
  58ed86:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  58ed88:	f7 d1                	not    ecx
  58ed8a:	49                   	dec    ecx
  58ed8b:	6a 01                	push   0x1
  58ed8d:	8b e9                	mov    ebp,ecx
  58ed8f:	8b cb                	mov    ecx,ebx
  58ed91:	55                   	push   ebp
  58ed92:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  58ed96:	e8 a5 2b e7 ff       	call   0x401940
  58ed9b:	84 c0                	test   al,al
  58ed9d:	74 22                	je     0x58edc1
  58ed9f:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
  58eda2:	8b cd                	mov    ecx,ebp
  58eda4:	8b d1                	mov    edx,ecx
  58eda6:	be 54 62 6a 00       	mov    esi,0x6a6254
  58edab:	c1 e9 02             	shr    ecx,0x2
  58edae:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  58edb0:	8b ca                	mov    ecx,edx
  58edb2:	55                   	push   ebp
  58edb3:	83 e1 03             	and    ecx,0x3
  58edb6:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  58edb8:	8b cb                	mov    ecx,ebx
  58edba:	e8 d1 53 e7 ff       	call   0x404190
  58edbf:	33 f6                	xor    esi,esi
  58edc1:	68 94 01 00 00       	push   0x194
  58edc6:	e8 ea b2 07 00       	call   0x60a0b5
  58edcb:	83 c4 04             	add    esp,0x4
  58edce:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
  58edd2:	5f                   	pop    edi
  58edd3:	5d                   	pop    ebp
  58edd4:	3b c6                	cmp    eax,esi
  58edd6:	c6 44 24 3c 07       	mov    BYTE PTR [esp+0x3c],0x7
  58eddb:	5b                   	pop    ebx
  58eddc:	74 09                	je     0x58ede7
  58edde:	8b c8                	mov    ecx,eax
  58ede0:	e8 1b e7 ff ff       	call   0x58d500
  58ede5:	8b f0                	mov    esi,eax
  58ede7:	8b 06                	mov    eax,DWORD PTR [esi]
  58ede9:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  58eded:	51                   	push   ecx
  58edee:	8b ce                	mov    ecx,esi
  58edf0:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  58edf5:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  58edf8:	6a 01                	push   0x1
  58edfa:	8b ce                	mov    ecx,esi
  58edfc:	e8 4f 35 f7 ff       	call   0x502350
  58ee01:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  58ee05:	85 c0                	test   eax,eax
  58ee07:	75 46                	jne    0x58ee4f
  58ee09:	8d 54 24 40          	lea    edx,[esp+0x40]
  58ee0d:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  58ee11:	52                   	push   edx
  58ee12:	68 70 3f 6b 00       	push   0x6b3f70
  58ee17:	e8 f4 a9 e7 ff       	call   0x409810
  58ee1c:	8d 44 24 20          	lea    eax,[esp+0x20]
  58ee20:	c6 44 24 38 08       	mov    BYTE PTR [esp+0x38],0x8
  58ee25:	50                   	push   eax
  58ee26:	68 b6 00 00 00       	push   0xb6
  58ee2b:	68 38 d6 68 00       	push   0x68d638
  58ee30:	68 2c d6 68 00       	push   0x68d62c
  58ee35:	e8 b6 19 01 00       	call   0x5a07f0
  58ee3a:	ff d0                	call   eax
  58ee3c:	83 c4 10             	add    esp,0x10
  58ee3f:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  58ee43:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
  58ee48:	6a 01                	push   0x1
  58ee4a:	e8 51 52 e7 ff       	call   0x4040a0
  58ee4f:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  58ee53:	56                   	push   esi
  58ee54:	e8 67 53 f6 ff       	call   0x4f41c0
  58ee59:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  58ee5d:	c6 44 24 38 00       	mov    BYTE PTR [esp+0x38],0x0
  58ee62:	85 c9                	test   ecx,ecx
  58ee64:	74 0d                	je     0x58ee73
  58ee66:	e8 65 aa e7 ff       	call   0x4098d0
  58ee6b:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
  58ee72:	00 
  58ee73:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  58ee77:	c7 44 24 38 ff ff ff 	mov    DWORD PTR [esp+0x38],0xffffffff
  58ee7e:	ff 
  58ee7f:	85 c0                	test   eax,eax
  58ee81:	74 18                	je     0x58ee9b
  58ee83:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  58ee86:	8b c8                	mov    ecx,eax
  58ee88:	83 c0 14             	add    eax,0x14
  58ee8b:	4e                   	dec    esi
  58ee8c:	8b d6                	mov    edx,esi
  58ee8e:	85 d2                	test   edx,edx
  58ee90:	89 30                	mov    DWORD PTR [eax],esi
  58ee92:	75 07                	jne    0x58ee9b
  58ee94:	6a 00                	push   0x0
  58ee96:	e8 25 d1 01 00       	call   0x5abfc0
  58ee9b:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  58ee9f:	b0 01                	mov    al,0x1
  58eea1:	5e                   	pop    esi
  58eea2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  58eea9:	83 c4 38             	add    esp,0x38
  58eeac:	c3                   	ret
  58eead:	90                   	nop
  58eeae:	90                   	nop
  58eeaf:	90                   	nop
  58eeb0:	6a ff                	push   0xffffffff
  58eeb2:	68 db 33 64 00       	push   0x6433db
  58eeb7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  58eebd:	50                   	push   eax
  58eebe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  58eec5:	51                   	push   ecx
  58eec6:	56                   	push   esi
  58eec7:	57                   	push   edi
  58eec8:	8b f9                	mov    edi,ecx
  58eeca:	6a 6c                	push   0x6c
  58eecc:	e8 e4 b1 07 00       	call   0x60a0b5
  58eed1:	8b f0                	mov    esi,eax
  58eed3:	83 c4 04             	add    esp,0x4
  58eed6:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  58eeda:	33 c0                	xor    eax,eax
  58eedc:	3b f0                	cmp    esi,eax
  58eede:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  58eee2:	74 20                	je     0x58ef04
  58eee4:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  58eee8:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  58eeec:	8d 4f 5c             	lea    ecx,[edi+0x5c]
  58eeef:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  58eef5:	50                   	push   eax
  58eef6:	51                   	push   ecx
  58eef7:	e8 24 bc 07 00       	call   0x60ab20
  58eefc:	50                   	push   eax
  58eefd:	8b ce                	mov    ecx,esi
  58eeff:	e8 1c d2 f1 ff       	call   0x4ac120
  58ef04:	50                   	push   eax
  58ef05:	8b cf                	mov    ecx,edi
  58ef07:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  58ef0e:	ff 
  58ef0f:	e8 cc e1 f1 ff       	call   0x4ad0e0
  58ef14:	8b c8                	mov    ecx,eax
  58ef16:	e8 c5 e3 f1 ff       	call   0x4ad2e0
  58ef1b:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  58ef1f:	5f                   	pop    edi
  58ef20:	5e                   	pop    esi
  58ef21:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  58ef28:	83 c4 10             	add    esp,0x10
  58ef2b:	c2 08 00             	ret    0x8
  58ef2e:	90                   	nop
  58ef2f:	90                   	nop
