  579401:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  579405:	d8 44 24 54          	fadd   DWORD PTR [esp+0x54]
  579409:	d9 5d 50             	fstp   DWORD PTR [ebp+0x50]
  57940c:	74 38                	je     0x579446
  57940e:	8b 95 9c 00 00 00    	mov    edx,DWORD PTR [ebp+0x9c]
  579414:	8b 85 a0 00 00 00    	mov    eax,DWORD PTR [ebp+0xa0]
  57941a:	8b 8d a4 00 00 00    	mov    ecx,DWORD PTR [ebp+0xa4]
  579420:	89 55 00             	mov    DWORD PTR [ebp+0x0],edx
  579423:	8b 95 b4 00 00 00    	mov    edx,DWORD PTR [ebp+0xb4]
  579429:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
  57942c:	8b 85 b8 00 00 00    	mov    eax,DWORD PTR [ebp+0xb8]
  579432:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
  579435:	8b 8d bc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xbc]
  57943b:	89 55 6c             	mov    DWORD PTR [ebp+0x6c],edx
  57943e:	89 45 70             	mov    DWORD PTR [ebp+0x70],eax
  579441:	89 4d 74             	mov    DWORD PTR [ebp+0x74],ecx
  579444:	eb 46                	jmp    0x57948c
  579446:	d9 07                	fld    DWORD PTR [edi]
  579448:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
  57944c:	d9 5d 00             	fstp   DWORD PTR [ebp+0x0]
  57944f:	d9 85 94 00 00 00    	fld    DWORD PTR [ebp+0x94]
  579455:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
  579459:	d9 5d 04             	fstp   DWORD PTR [ebp+0x4]
  57945c:	d9 85 98 00 00 00    	fld    DWORD PTR [ebp+0x98]
  579462:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
  579466:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
  579469:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  57946d:	d8 07                	fadd   DWORD PTR [edi]
  57946f:	d9 5d 6c             	fstp   DWORD PTR [ebp+0x6c]
  579472:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
  579476:	d8 85 94 00 00 00    	fadd   DWORD PTR [ebp+0x94]
  57947c:	d9 5d 70             	fstp   DWORD PTR [ebp+0x70]
  57947f:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  579483:	d8 85 98 00 00 00    	fadd   DWORD PTR [ebp+0x98]
  579489:	d9 5d 74             	fstp   DWORD PTR [ebp+0x74]
  57948c:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  579490:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  579494:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  579498:	52                   	push   edx
  579499:	50                   	push   eax
  57949a:	51                   	push   ecx
  57949b:	8d 8d 9c 00 00 00    	lea    ecx,[ebp+0x9c]
  5794a1:	e8 7a 99 03 00       	call   0x5b2e20
  5794a6:	8b 55 50             	mov    edx,DWORD PTR [ebp+0x50]
  5794a9:	8b 45 4c             	mov    eax,DWORD PTR [ebp+0x4c]
  5794ac:	8b 4d 48             	mov    ecx,DWORD PTR [ebp+0x48]
  5794af:	52                   	push   edx
  5794b0:	50                   	push   eax
  5794b1:	51                   	push   ecx
  5794b2:	8d 8d b4 00 00 00    	lea    ecx,[ebp+0xb4]
  5794b8:	e8 63 99 03 00       	call   0x5b2e20
  5794bd:	39 b3 10 01 00 00    	cmp    DWORD PTR [ebx+0x110],esi
  5794c3:	0f 85 c1 00 00 00    	jne    0x57958a
  5794c9:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  5794ce:	83 c9 ff             	or     ecx,0xffffffff
  5794d1:	33 c0                	xor    eax,eax
  5794d3:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  5794d7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5794d9:	f7 d1                	not    ecx
  5794db:	49                   	dec    ecx
  5794dc:	6a 01                	push   0x1
  5794de:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  5794e2:	51                   	push   ecx
  5794e3:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  5794e7:	88 54 24 24          	mov    BYTE PTR [esp+0x24],dl
  5794eb:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  5794ef:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  5794f3:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  5794f7:	e8 44 84 e8 ff       	call   0x401940
  5794fc:	84 c0                	test   al,al
  5794fe:	74 2b                	je     0x57952b
  579500:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  579504:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  579508:	8b c8                	mov    ecx,eax
  57950a:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  57950f:	8b d1                	mov    edx,ecx
  579511:	c1 e9 02             	shr    ecx,0x2
  579514:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  579516:	8b ca                	mov    ecx,edx
  579518:	83 e1 03             	and    ecx,0x3
  57951b:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  57951d:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  579521:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  579525:	33 f6                	xor    esi,esi
  579527:	c6 04 01 00          	mov    BYTE PTR [ecx+eax*1],0x0
  57952b:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  57952f:	c6 84 24 80 01 00 00 	mov    BYTE PTR [esp+0x180],0xb
  579536:	0b 
  579537:	52                   	push   edx
  579538:	68 b6 00 00 00       	push   0xb6
  57953d:	68 38 d6 68 00       	push   0x68d638
  579542:	68 2c d6 68 00       	push   0x68d62c
  579547:	e8 a4 72 02 00       	call   0x5a07f0
  57954c:	ff d0                	call   eax
  57954e:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  579552:	83 c4 10             	add    esp,0x10
  579555:	3b c6                	cmp    eax,esi
  579557:	c6 84 24 80 01 00 00 	mov    BYTE PTR [esp+0x180],0x8
  57955e:	08 
  57955f:	74 1d                	je     0x57957e
  579561:	8d 48 ff             	lea    ecx,[eax-0x1]
  579564:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  579567:	84 c0                	test   al,al
  579569:	74 0a                	je     0x579575
  57956b:	3c ff                	cmp    al,0xff
  57956d:	74 06                	je     0x579575
  57956f:	fe c8                	dec    al
  579571:	88 01                	mov    BYTE PTR [ecx],al
  579573:	eb 09                	jmp    0x57957e
  579575:	51                   	push   ecx
  579576:	e8 75 50 08 00       	call   0x5fe5f0
  57957b:	83 c4 04             	add    esp,0x4
  57957e:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  579582:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  579586:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  57958a:	8b 8b 10 01 00 00    	mov    ecx,DWORD PTR [ebx+0x110]
  579590:	68 00 00 80 3f       	push   0x3f800000
  579595:	6a 08                	push   0x8
  579597:	56                   	push   esi
  579598:	e8 d3 14 f9 ff       	call   0x50aa70
  57959d:	50                   	push   eax
  57959e:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  5795a2:	6a 04                	push   0x4
  5795a4:	55                   	push   ebp
  5795a5:	50                   	push   eax
  5795a6:	e8 b5 d7 03 00       	call   0x5b6d60
  5795ab:	8b 8d d0 00 00 00    	mov    ecx,DWORD PTR [ebp+0xd0]
  5795b1:	8b 95 d4 00 00 00    	mov    edx,DWORD PTR [ebp+0xd4]
  5795b7:	8b f8                	mov    edi,eax
  5795b9:	83 c4 1c             	add    esp,0x1c
  5795bc:	8b 04 8a             	mov    eax,DWORD PTR [edx+ecx*4]
  5795bf:	3b c6                	cmp    eax,esi
  5795c1:	74 1b                	je     0x5795de
  5795c3:	50                   	push   eax
  5795c4:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  5795c8:	50                   	push   eax
  5795c9:	e8 12 d9 03 00       	call   0x5b6ee0
  5795ce:	8b 85 cc 00 00 00    	mov    eax,DWORD PTR [ebp+0xcc]
  5795d4:	83 c4 08             	add    esp,0x8
  5795d7:	48                   	dec    eax
  5795d8:	89 85 cc 00 00 00    	mov    DWORD PTR [ebp+0xcc],eax
  5795de:	8b 8d d0 00 00 00    	mov    ecx,DWORD PTR [ebp+0xd0]
  5795e4:	8b 95 d4 00 00 00    	mov    edx,DWORD PTR [ebp+0xd4]
  5795ea:	89 3c 8a             	mov    DWORD PTR [edx+ecx*4],edi
  5795ed:	8b 83 0c 01 00 00    	mov    eax,DWORD PTR [ebx+0x10c]
  5795f3:	8b 8d d0 00 00 00    	mov    ecx,DWORD PTR [ebp+0xd0]
  5795f9:	8b 95 d8 00 00 00    	mov    edx,DWORD PTR [ebp+0xd8]
  5795ff:	8b 40 30             	mov    eax,DWORD PTR [eax+0x30]
  579602:	89 04 8a             	mov    DWORD PTR [edx+ecx*4],eax
  579605:	8b 85 cc 00 00 00    	mov    eax,DWORD PTR [ebp+0xcc]
  57960b:	8b bd d0 00 00 00    	mov    edi,DWORD PTR [ebp+0xd0]
  579611:	40                   	inc    eax
  579612:	47                   	inc    edi
  579613:	89 85 cc 00 00 00    	mov    DWORD PTR [ebp+0xcc],eax
  579619:	89 bd d0 00 00 00    	mov    DWORD PTR [ebp+0xd0],edi
  57961f:	8b 8b 0c 01 00 00    	mov    ecx,DWORD PTR [ebx+0x10c]
  579625:	8b c7                	mov    eax,edi
  579627:	3b 41 2c             	cmp    eax,DWORD PTR [ecx+0x2c]
  57962a:	7c 06                	jl     0x579632
  57962c:	89 b5 d0 00 00 00    	mov    DWORD PTR [ebp+0xd0],esi
  579632:	8d bd 90 00 00 00    	lea    edi,[ebp+0x90]
  579638:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  57963c:	8b d7                	mov    edx,edi
  57963e:	e8 0d 9a 03 00       	call   0x5b3050
  579643:	d9 85 dc 00 00 00    	fld    DWORD PTR [ebp+0xdc]
  579649:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  57964f:	df e0                	fnstsw ax
  579651:	f6 c4 41             	test   ah,0x41
  579654:	0f 84 56 fb ff ff    	je     0x5791b0
  57965a:	8b 94 24 6c 01 00 00 	mov    edx,DWORD PTR [esp+0x16c]
  579661:	c7 84 24 80 01 00 00 	mov    DWORD PTR [esp+0x180],0xc
  579668:	0c 00 00 00 
  57966c:	52                   	push   edx
  57966d:	e8 7e 4f 08 00       	call   0x5fe5f0
  579672:	8b 84 24 60 01 00 00 	mov    eax,DWORD PTR [esp+0x160]
  579679:	33 f6                	xor    esi,esi
  57967b:	50                   	push   eax
  57967c:	89 b4 24 74 01 00 00 	mov    DWORD PTR [esp+0x174],esi
  579683:	89 b4 24 78 01 00 00 	mov    DWORD PTR [esp+0x178],esi
  57968a:	89 b4 24 7c 01 00 00 	mov    DWORD PTR [esp+0x17c],esi
  579691:	e8 5a 4f 08 00       	call   0x5fe5f0
  579696:	8b 84 24 c8 00 00 00 	mov    eax,DWORD PTR [esp+0xc8]
  57969d:	83 c4 08             	add    esp,0x8
  5796a0:	3b c6                	cmp    eax,esi
  5796a2:	89 b4 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],esi
  5796a9:	89 b4 24 60 01 00 00 	mov    DWORD PTR [esp+0x160],esi
  5796b0:	89 b4 24 64 01 00 00 	mov    DWORD PTR [esp+0x164],esi
  5796b7:	74 1e                	je     0x5796d7
  5796b9:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  5796bc:	8b c8                	mov    ecx,eax
  5796be:	83 c0 14             	add    eax,0x14
  5796c1:	4f                   	dec    edi
  5796c2:	8b d7                	mov    edx,edi
  5796c4:	3b d6                	cmp    edx,esi
  5796c6:	89 38                	mov    DWORD PTR [eax],edi
  5796c8:	75 06                	jne    0x5796d0
  5796ca:	56                   	push   esi
  5796cb:	e8 f0 28 03 00       	call   0x5abfc0
  5796d0:	89 b4 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],esi
  5796d7:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  5796de:	c7 84 24 80 01 00 00 	mov    DWORD PTR [esp+0x180],0xffffffff
  5796e5:	ff ff ff ff 
  5796e9:	e8 e2 1d 03 00       	call   0x5ab4d0
  5796ee:	bf 01 00 00 00       	mov    edi,0x1
  5796f3:	8b c7                	mov    eax,edi
  5796f5:	8b 8c 24 78 01 00 00 	mov    ecx,DWORD PTR [esp+0x178]
  5796fc:	5f                   	pop    edi
  5796fd:	5e                   	pop    esi
  5796fe:	5d                   	pop    ebp
  5796ff:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  579706:	5b                   	pop    ebx
  579707:	81 c4 74 01 00 00    	add    esp,0x174
  57970d:	c2 04 00             	ret    0x4
  579710:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  579716:	6a ff                	push   0xffffffff
  579718:	68 d8 1a 64 00       	push   0x641ad8
  57971d:	50                   	push   eax
  57971e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  579725:	83 ec 20             	sub    esp,0x20
  579728:	53                   	push   ebx
  579729:	56                   	push   esi
  57972a:	8b 74 24 38          	mov    esi,DWORD PTR [esp+0x38]
  57972e:	8b d9                	mov    ebx,ecx
  579730:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  579733:	85 c0                	test   eax,eax
  579735:	75 05                	jne    0x57973c
  579737:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  57973c:	68 e4 f0 68 00       	push   0x68f0e4
  579741:	50                   	push   eax
  579742:	e8 a9 fe 09 00       	call   0x6195f0
  579747:	83 c4 08             	add    esp,0x8
  57974a:	85 c0                	test   eax,eax
  57974c:	75 1e                	jne    0x57976c
  57974e:	6a 01                	push   0x1
  579750:	8b cb                	mov    ecx,ebx
  579752:	e8 f9 8b f8 ff       	call   0x502350
  579757:	5e                   	pop    esi
  579758:	b0 01                	mov    al,0x1
  57975a:	5b                   	pop    ebx
  57975b:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  57975f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  579766:	83 c4 2c             	add    esp,0x2c
  579769:	c2 0c 00             	ret    0xc
  57976c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  57976f:	85 c0                	test   eax,eax
  579771:	75 05                	jne    0x579778
  579773:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  579778:	68 dc f0 68 00       	push   0x68f0dc
  57977d:	50                   	push   eax
  57977e:	e8 6d fe 09 00       	call   0x6195f0
  579783:	83 c4 08             	add    esp,0x8
  579786:	85 c0                	test   eax,eax
  579788:	0f 85 00 02 00 00    	jne    0x57998e
  57978e:	55                   	push   ebp
  57978f:	57                   	push   edi
  579790:	50                   	push   eax
  579791:	8b cb                	mov    ecx,ebx
  579793:	e8 b8 8b f8 ff       	call   0x502350
  579798:	8d 44 24 48          	lea    eax,[esp+0x48]
  57979c:	8b cb                	mov    ecx,ebx
  57979e:	50                   	push   eax
  57979f:	e8 3c ab e8 ff       	call   0x4042e0
  5797a4:	8b f0                	mov    esi,eax
  5797a6:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
  5797aa:	8b 06                	mov    eax,DWORD PTR [esi]
  5797ac:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  5797b3:	00 
  5797b4:	85 c0                	test   eax,eax
  5797b6:	0f 85 8e 00 00 00    	jne    0x57984a
  5797bc:	8a 4c 24 40          	mov    cl,BYTE PTR [esp+0x40]
  5797c0:	6a 00                	push   0x0
  5797c2:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  5797c6:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  5797ca:	e8 d1 a8 e8 ff       	call   0x4040a0
  5797cf:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  5797d4:	83 c9 ff             	or     ecx,0xffffffff
  5797d7:	33 c0                	xor    eax,eax
  5797d9:	6a 01                	push   0x1
  5797db:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5797dd:	f7 d1                	not    ecx
  5797df:	49                   	dec    ecx
  5797e0:	8b e9                	mov    ebp,ecx
  5797e2:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  5797e6:	55                   	push   ebp
  5797e7:	e8 54 81 e8 ff       	call   0x401940
  5797ec:	84 c0                	test   al,al
  5797ee:	74 27                	je     0x579817
  5797f0:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  5797f4:	8b cd                	mov    ecx,ebp
  5797f6:	8b d1                	mov    edx,ecx
  5797f8:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  5797fd:	c1 e9 02             	shr    ecx,0x2
  579800:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  579802:	8b ca                	mov    ecx,edx
  579804:	55                   	push   ebp
  579805:	83 e1 03             	and    ecx,0x3
  579808:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  57980a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  57980e:	e8 7d a9 e8 ff       	call   0x404190
  579813:	8b 74 24 40          	mov    esi,DWORD PTR [esp+0x40]
  579817:	8d 44 24 20          	lea    eax,[esp+0x20]
  57981b:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
  579820:	50                   	push   eax
  579821:	68 b6 00 00 00       	push   0xb6
  579826:	68 38 d6 68 00       	push   0x68d638
  57982b:	68 2c d6 68 00       	push   0x68d62c
  579830:	e8 bb 6f 02 00       	call   0x5a07f0
  579835:	ff d0                	call   eax
  579837:	83 c4 10             	add    esp,0x10
  57983a:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  57983e:	c6 44 24 38 00       	mov    BYTE PTR [esp+0x38],0x0
  579843:	6a 01                	push   0x1
  579845:	e8 56 a8 e8 ff       	call   0x4040a0
  57984a:	8b 36                	mov    esi,DWORD PTR [esi]
  57984c:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
  579850:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
  579853:	85 c0                	test   eax,eax
  579855:	0f 85 90 00 00 00    	jne    0x5798eb
  57985b:	8a 4c 24 40          	mov    cl,BYTE PTR [esp+0x40]
  57985f:	6a 00                	push   0x0
  579861:	88 4c 24 14          	mov    BYTE PTR [esp+0x14],cl
  579865:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  579869:	e8 32 a8 e8 ff       	call   0x4040a0
  57986e:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  579873:	83 c9 ff             	or     ecx,0xffffffff
  579876:	33 c0                	xor    eax,eax
  579878:	6a 01                	push   0x1
  57987a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57987c:	f7 d1                	not    ecx
  57987e:	49                   	dec    ecx
  57987f:	8b e9                	mov    ebp,ecx
  579881:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  579885:	55                   	push   ebp
  579886:	e8 b5 80 e8 ff       	call   0x401940
  57988b:	84 c0                	test   al,al
  57988d:	74 29                	je     0x5798b8
  57988f:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  579893:	8b cd                	mov    ecx,ebp
  579895:	8b d1                	mov    edx,ecx
  579897:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  57989c:	c1 e9 02             	shr    ecx,0x2
  57989f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5798a1:	8b ca                	mov    ecx,edx
  5798a3:	83 e1 03             	and    ecx,0x3
  5798a6:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5798a8:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5798ac:	8b 74 24 40          	mov    esi,DWORD PTR [esp+0x40]
  5798b0:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  5798b4:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  5798b8:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5798bc:	c6 44 24 38 02       	mov    BYTE PTR [esp+0x38],0x2
  5798c1:	51                   	push   ecx
  5798c2:	68 44 01 00 00       	push   0x144
  5798c7:	68 b8 e1 68 00       	push   0x68e1b8
  5798cc:	68 a8 e1 68 00       	push   0x68e1a8
  5798d1:	e8 1a 6f 02 00       	call   0x5a07f0
  5798d6:	ff d0                	call   eax
  5798d8:	83 c4 10             	add    esp,0x10
  5798db:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5798df:	c6 44 24 38 00       	mov    BYTE PTR [esp+0x38],0x0
  5798e4:	6a 01                	push   0x1
  5798e6:	e8 b5 a7 e8 ff       	call   0x4040a0
  5798eb:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  5798ef:	8b 7e 5c             	mov    edi,DWORD PTR [esi+0x5c]
  5798f2:	85 c0                	test   eax,eax
  5798f4:	c7 44 24 38 ff ff ff 	mov    DWORD PTR [esp+0x38],0xffffffff
  5798fb:	ff 
  5798fc:	74 18                	je     0x579916
  5798fe:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  579901:	8b c8                	mov    ecx,eax
  579903:	83 c0 14             	add    eax,0x14
  579906:	4e                   	dec    esi
  579907:	8b d6                	mov    edx,esi
  579909:	85 d2                	test   edx,edx
  57990b:	89 30                	mov    DWORD PTR [eax],esi
  57990d:	75 07                	jne    0x579916
  57990f:	6a 00                	push   0x0
  579911:	e8 aa 26 03 00       	call   0x5abfc0
  579916:	8b 83 0c 01 00 00    	mov    eax,DWORD PTR [ebx+0x10c]
  57991c:	33 ed                	xor    ebp,ebp
  57991e:	33 f6                	xor    esi,esi
  579920:	39 68 2c             	cmp    DWORD PTR [eax+0x2c],ebp
  579923:	7e 36                	jle    0x57995b
  579925:	8b 10                	mov    edx,DWORD PTR [eax]
  579927:	8b 82 d4 00 00 00    	mov    eax,DWORD PTR [edx+0xd4]
  57992d:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  579930:	3b c5                	cmp    eax,ebp
  579932:	74 1b                	je     0x57994f
  579934:	50                   	push   eax
  579935:	57                   	push   edi
  579936:	e8 a5 d5 03 00       	call   0x5b6ee0
  57993b:	8b 8b 0c 01 00 00    	mov    ecx,DWORD PTR [ebx+0x10c]
  579941:	83 c4 08             	add    esp,0x8
  579944:	8b 11                	mov    edx,DWORD PTR [ecx]
  579946:	8b 82 d4 00 00 00    	mov    eax,DWORD PTR [edx+0xd4]
  57994c:	89 2c b0             	mov    DWORD PTR [eax+esi*4],ebp
  57994f:	8b 83 0c 01 00 00    	mov    eax,DWORD PTR [ebx+0x10c]
  579955:	46                   	inc    esi
  579956:	3b 70 2c             	cmp    esi,DWORD PTR [eax+0x2c]
  579959:	7c ca                	jl     0x579925
  57995b:	8b 8b 0c 01 00 00    	mov    ecx,DWORD PTR [ebx+0x10c]
  579961:	5f                   	pop    edi
  579962:	8b 11                	mov    edx,DWORD PTR [ecx]
  579964:	89 aa cc 00 00 00    	mov    DWORD PTR [edx+0xcc],ebp
  57996a:	8b 83 0c 01 00 00    	mov    eax,DWORD PTR [ebx+0x10c]
  579970:	8b 08                	mov    ecx,DWORD PTR [eax]
  579972:	b0 01                	mov    al,0x1
  579974:	89 a9 d0 00 00 00    	mov    DWORD PTR [ecx+0xd0],ebp
  57997a:	5d                   	pop    ebp
  57997b:	5e                   	pop    esi
  57997c:	5b                   	pop    ebx
  57997d:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  579981:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  579988:	83 c4 2c             	add    esp,0x2c
  57998b:	c2 0c 00             	ret    0xc
  57998e:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
  579992:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  579996:	52                   	push   edx
  579997:	50                   	push   eax
  579998:	56                   	push   esi
  579999:	8b cb                	mov    ecx,ebx
  57999b:	e8 30 8e f8 ff       	call   0x5027d0
  5799a0:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  5799a4:	5e                   	pop    esi
  5799a5:	5b                   	pop    ebx
  5799a6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5799ad:	83 c4 2c             	add    esp,0x2c
  5799b0:	c2 0c 00             	ret    0xc
  5799b3:	90                   	nop
  5799b4:	90                   	nop
  5799b5:	90                   	nop
  5799b6:	90                   	nop
  5799b7:	90                   	nop
  5799b8:	90                   	nop
  5799b9:	90                   	nop
  5799ba:	90                   	nop
  5799bb:	90                   	nop
  5799bc:	90                   	nop
  5799bd:	90                   	nop
  5799be:	90                   	nop
  5799bf:	90                   	nop
  5799c0:	6a ff                	push   0xffffffff
  5799c2:	68 22 1b 64 00       	push   0x641b22
  5799c7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5799cd:	50                   	push   eax
  5799ce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5799d5:	83 ec 28             	sub    esp,0x28
  5799d8:	53                   	push   ebx
  5799d9:	55                   	push   ebp
  5799da:	56                   	push   esi
  5799db:	57                   	push   edi
  5799dc:	33 db                	xor    ebx,ebx
  5799de:	68 18 01 00 00       	push   0x118
  5799e3:	33 ff                	xor    edi,edi
  5799e5:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  5799e9:	e8 c7 06 09 00       	call   0x60a0b5
  5799ee:	8b f0                	mov    esi,eax
  5799f0:	83 c4 04             	add    esp,0x4
  5799f3:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  5799f7:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
  5799fb:	3b f7                	cmp    esi,edi
  5799fd:	89 7c 24 40          	mov    DWORD PTR [esp+0x40],edi
  579a01:	74 32                	je     0x579a35
  579a03:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  579a06:	68 f4 4e 6a 00       	push   0x6a4ef4
  579a0b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  579a0f:	50                   	push   eax
  579a10:	51                   	push   ecx
  579a11:	e8 da 99 f8 ff       	call   0x5033f0
  579a16:	bb 01 00 00 00       	mov    ebx,0x1
  579a1b:	83 c4 0c             	add    esp,0xc
  579a1e:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  579a22:	55                   	push   ebp
  579a23:	50                   	push   eax
  579a24:	8b ce                	mov    ecx,esi
  579a26:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
  579a2a:	e8 a1 e2 ff ff       	call   0x577cd0
  579a2f:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  579a33:	eb 04                	jmp    0x579a39
  579a35:	89 7c 24 48          	mov    DWORD PTR [esp+0x48],edi
  579a39:	f6 c3 01             	test   bl,0x1
  579a3c:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  579a43:	ff 
  579a44:	74 25                	je     0x579a6b
  579a46:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  579a4a:	3b c7                	cmp    eax,edi
  579a4c:	74 1d                	je     0x579a6b
  579a4e:	8d 48 ff             	lea    ecx,[eax-0x1]
  579a51:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  579a54:	84 c0                	test   al,al
  579a56:	74 0a                	je     0x579a62
  579a58:	3c ff                	cmp    al,0xff
  579a5a:	74 06                	je     0x579a62
  579a5c:	fe c8                	dec    al
  579a5e:	88 01                	mov    BYTE PTR [ecx],al
  579a60:	eb 09                	jmp    0x579a6b
  579a62:	51                   	push   ecx
  579a63:	e8 88 4b 08 00       	call   0x5fe5f0
  579a68:	83 c4 04             	add    esp,0x4
  579a6b:	8a 54 24 48          	mov    dl,BYTE PTR [esp+0x48]
  579a6f:	8b 75 00             	mov    esi,DWORD PTR [ebp+0x0]
  579a72:	57                   	push   edi
  579a73:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  579a77:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  579a7b:	e8 20 a6 e8 ff       	call   0x4040a0
  579a80:	3b f7                	cmp    esi,edi
  579a82:	c7 44 24 40 03 00 00 	mov    DWORD PTR [esp+0x40],0x3
  579a89:	00 
  579a8a:	75 46                	jne    0x579ad2
  579a8c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  579a91:	83 c9 ff             	or     ecx,0xffffffff
  579a94:	33 c0                	xor    eax,eax
  579a96:	6a 01                	push   0x1
  579a98:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  579a9a:	f7 d1                	not    ecx
  579a9c:	49                   	dec    ecx
  579a9d:	8b d9                	mov    ebx,ecx
  579a9f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  579aa3:	53                   	push   ebx
  579aa4:	e8 97 7e e8 ff       	call   0x401940
  579aa9:	84 c0                	test   al,al
  579aab:	74 63                	je     0x579b10
  579aad:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  579ab1:	8b cb                	mov    ecx,ebx
  579ab3:	8b c1                	mov    eax,ecx
  579ab5:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  579aba:	c1 e9 02             	shr    ecx,0x2
  579abd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  579abf:	8b c8                	mov    ecx,eax
  579ac1:	53                   	push   ebx
  579ac2:	83 e1 03             	and    ecx,0x3
  579ac5:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  579ac7:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  579acb:	e8 c0 a6 e8 ff       	call   0x404190
  579ad0:	eb 3e                	jmp    0x579b10
  579ad2:	8b fe                	mov    edi,esi
  579ad4:	83 c9 ff             	or     ecx,0xffffffff
  579ad7:	33 c0                	xor    eax,eax
  579ad9:	6a 01                	push   0x1
  579adb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  579add:	f7 d1                	not    ecx
  579adf:	49                   	dec    ecx
  579ae0:	8b d9                	mov    ebx,ecx
  579ae2:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  579ae6:	53                   	push   ebx
  579ae7:	e8 54 7e e8 ff       	call   0x401940
  579aec:	84 c0                	test   al,al
  579aee:	74 20                	je     0x579b10
  579af0:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  579af4:	8b cb                	mov    ecx,ebx
  579af6:	8b d1                	mov    edx,ecx
  579af8:	c1 e9 02             	shr    ecx,0x2
  579afb:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  579afd:	8b ca                	mov    ecx,edx
  579aff:	83 e1 03             	and    ecx,0x3
  579b02:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  579b04:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  579b08:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  579b0c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  579b10:	8b 7c 24 48          	mov    edi,DWORD PTR [esp+0x48]
  579b14:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  579b18:	51                   	push   ecx
  579b19:	8b cf                	mov    ecx,edi
  579b1b:	e8 c0 9f f8 ff       	call   0x503ae0
  579b20:	6a 01                	push   0x1
  579b22:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  579b26:	c7 44 24 44 ff ff ff 	mov    DWORD PTR [esp+0x44],0xffffffff
  579b2d:	ff 
  579b2e:	e8 6d a5 e8 ff       	call   0x4040a0
  579b33:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
  579b36:	8b cf                	mov    ecx,edi
  579b38:	85 db                	test   ebx,ebx
  579b3a:	0f 95 c2             	setne  dl
  579b3d:	52                   	push   edx
  579b3e:	e8 0d 88 f8 ff       	call   0x502350
  579b43:	8a 44 24 48          	mov    al,BYTE PTR [esp+0x48]
  579b47:	8b 75 04             	mov    esi,DWORD PTR [ebp+0x4]
  579b4a:	6a 00                	push   0x0
  579b4c:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  579b50:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  579b54:	e8 47 a5 e8 ff       	call   0x4040a0
  579b59:	85 f6                	test   esi,esi
  579b5b:	c7 44 24 40 04 00 00 	mov    DWORD PTR [esp+0x40],0x4
  579b62:	00 
  579b63:	74 42                	je     0x579ba7
  579b65:	8b fe                	mov    edi,esi
  579b67:	83 c9 ff             	or     ecx,0xffffffff
  579b6a:	33 c0                	xor    eax,eax
  579b6c:	6a 01                	push   0x1
  579b6e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  579b70:	f7 d1                	not    ecx
  579b72:	49                   	dec    ecx
  579b73:	8b d9                	mov    ebx,ecx
  579b75:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  579b79:	53                   	push   ebx
  579b7a:	e8 c1 7d e8 ff       	call   0x401940
  579b7f:	84 c0                	test   al,al
  579b81:	74 20                	je     0x579ba3
  579b83:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  579b87:	8b cb                	mov    ecx,ebx
  579b89:	8b d1                	mov    edx,ecx
  579b8b:	c1 e9 02             	shr    ecx,0x2
  579b8e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  579b90:	8b ca                	mov    ecx,edx
  579b92:	83 e1 03             	and    ecx,0x3
  579b95:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  579b97:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  579b9b:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  579b9f:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  579ba3:	8b 7c 24 48          	mov    edi,DWORD PTR [esp+0x48]
  579ba7:	8b 0d a8 ab 64 00    	mov    ecx,DWORD PTR ds:0x64aba8
  579bad:	8d 54 24 28          	lea    edx,[esp+0x28]
  579bb1:	51                   	push   ecx
  579bb2:	6a 00                	push   0x0
  579bb4:	52                   	push   edx
  579bb5:	8d 8f 90 00 00 00    	lea    ecx,[edi+0x90]
  579bbb:	e8 40 30 e9 ff       	call   0x40cc00
  579bc0:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  579bc4:	85 c9                	test   ecx,ecx
  579bc6:	74 1c                	je     0x579be4
  579bc8:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  579bcb:	84 c0                	test   al,al
  579bcd:	74 0b                	je     0x579bda
  579bcf:	3c ff                	cmp    al,0xff
  579bd1:	74 07                	je     0x579bda
  579bd3:	fe c8                	dec    al
  579bd5:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  579bd8:	eb 0a                	jmp    0x579be4
  579bda:	49                   	dec    ecx
  579bdb:	51                   	push   ecx
  579bdc:	e8 0f 4a 08 00       	call   0x5fe5f0
  579be1:	83 c4 04             	add    esp,0x4
  579be4:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  579be8:	8b c7                	mov    eax,edi
  579bea:	5f                   	pop    edi
  579beb:	5e                   	pop    esi
  579bec:	5d                   	pop    ebp
  579bed:	5b                   	pop    ebx
  579bee:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  579bf5:	83 c4 34             	add    esp,0x34
  579bf8:	c3                   	ret
  579bf9:	90                   	nop
  579bfa:	90                   	nop
  579bfb:	90                   	nop
  579bfc:	90                   	nop
  579bfd:	90                   	nop
  579bfe:	90                   	nop
  579bff:	90                   	nop
  579c00:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  579c06:	b0 01                	mov    al,0x1
  579c08:	84 c8                	test   al,cl
  579c0a:	75 08                	jne    0x579c14
  579c0c:	0a c8                	or     cl,al
  579c0e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  579c14:	e9 07 00 00 00       	jmp    0x579c20
  579c19:	90                   	nop
  579c1a:	90                   	nop
  579c1b:	90                   	nop
  579c1c:	90                   	nop
  579c1d:	90                   	nop
  579c1e:	90                   	nop
  579c1f:	90                   	nop
  579c20:	68 a0 1b 40 00       	push   0x401ba0
  579c25:	e8 51 09 09 00       	call   0x60a57b
  579c2a:	59                   	pop    ecx
  579c2b:	c3                   	ret
  579c2c:	90                   	nop
  579c2d:	90                   	nop
  579c2e:	90                   	nop
  579c2f:	90                   	nop
  579c30:	e8 0b 00 00 00       	call   0x579c40
  579c35:	e9 e6 00 00 00       	jmp    0x579d20
  579c3a:	90                   	nop
  579c3b:	90                   	nop
  579c3c:	90                   	nop
  579c3d:	90                   	nop
  579c3e:	90                   	nop
  579c3f:	90                   	nop
  579c40:	6a ff                	push   0xffffffff
  579c42:	68 38 1b 64 00       	push   0x641b38
  579c47:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  579c4d:	50                   	push   eax
  579c4e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  579c55:	83 ec 14             	sub    esp,0x14
  579c58:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  579c5c:	53                   	push   ebx
  579c5d:	55                   	push   ebp
  579c5e:	57                   	push   edi
  579c5f:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  579c63:	bf 00 4f 6a 00       	mov    edi,0x6a4f00
  579c68:	83 c9 ff             	or     ecx,0xffffffff
  579c6b:	33 c0                	xor    eax,eax
  579c6d:	33 db                	xor    ebx,ebx
  579c6f:	6a 01                	push   0x1
  579c71:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  579c73:	f7 d1                	not    ecx
  579c75:	49                   	dec    ecx
  579c76:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  579c7a:	8b e9                	mov    ebp,ecx
  579c7c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  579c80:	55                   	push   ebp
  579c81:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  579c85:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  579c89:	e8 b2 7c e8 ff       	call   0x401940
  579c8e:	84 c0                	test   al,al
  579c90:	74 26                	je     0x579cb8
  579c92:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  579c96:	8b cd                	mov    ecx,ebp
  579c98:	8b d1                	mov    edx,ecx
  579c9a:	56                   	push   esi
  579c9b:	be 00 4f 6a 00       	mov    esi,0x6a4f00
  579ca0:	c1 e9 02             	shr    ecx,0x2
  579ca3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  579ca5:	8b ca                	mov    ecx,edx
  579ca7:	83 e1 03             	and    ecx,0x3
  579caa:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  579cac:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  579cb0:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  579cb4:	5e                   	pop    esi
  579cb5:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  579cb8:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  579cbc:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  579cc0:	51                   	push   ecx
  579cc1:	b9 f8 8f 6c 00       	mov    ecx,0x6c8ff8
  579cc6:	e8 d5 d4 fe ff       	call   0x5671a0
  579ccb:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  579ccf:	3b c3                	cmp    eax,ebx
  579cd1:	74 2d                	je     0x579d00
  579cd3:	8d 48 ff             	lea    ecx,[eax-0x1]
  579cd6:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  579cd9:	3a c3                	cmp    al,bl
  579cdb:	74 1a                	je     0x579cf7
  579cdd:	3c ff                	cmp    al,0xff
  579cdf:	74 16                	je     0x579cf7
  579ce1:	fe c8                	dec    al
  579ce3:	5f                   	pop    edi
  579ce4:	5d                   	pop    ebp
  579ce5:	88 01                	mov    BYTE PTR [ecx],al
  579ce7:	5b                   	pop    ebx
  579ce8:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  579cec:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  579cf3:	83 c4 20             	add    esp,0x20
  579cf6:	c3                   	ret
  579cf7:	51                   	push   ecx
  579cf8:	e8 f3 48 08 00       	call   0x5fe5f0
  579cfd:	83 c4 04             	add    esp,0x4
  579d00:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  579d04:	5f                   	pop    edi
  579d05:	5d                   	pop    ebp
  579d06:	5b                   	pop    ebx
  579d07:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  579d0e:	83 c4 20             	add    esp,0x20
  579d11:	c3                   	ret
  579d12:	90                   	nop
  579d13:	90                   	nop
  579d14:	90                   	nop
  579d15:	90                   	nop
  579d16:	90                   	nop
  579d17:	90                   	nop
  579d18:	90                   	nop
  579d19:	90                   	nop
  579d1a:	90                   	nop
  579d1b:	90                   	nop
  579d1c:	90                   	nop
  579d1d:	90                   	nop
  579d1e:	90                   	nop
  579d1f:	90                   	nop
  579d20:	68 30 9d 57 00       	push   0x579d30
  579d25:	e8 51 08 09 00       	call   0x60a57b
  579d2a:	59                   	pop    ecx
  579d2b:	c3                   	ret
  579d2c:	90                   	nop
  579d2d:	90                   	nop
  579d2e:	90                   	nop
  579d2f:	90                   	nop
  579d30:	8a 0d f0 8f 6c 00    	mov    cl,BYTE PTR ds:0x6c8ff0
  579d36:	b0 01                	mov    al,0x1
  579d38:	84 c8                	test   al,cl
  579d3a:	75 12                	jne    0x579d4e
  579d3c:	0a c8                	or     cl,al
  579d3e:	88 0d f0 8f 6c 00    	mov    BYTE PTR ds:0x6c8ff0,cl
  579d44:	b9 f8 8f 6c 00       	mov    ecx,0x6c8ff8
  579d49:	e9 b2 d5 fe ff       	jmp    0x567300
  579d4e:	c3                   	ret
  579d4f:	90                   	nop
  579d50:	6a ff                	push   0xffffffff
  579d52:	68 c6 1b 64 00       	push   0x641bc6
  579d57:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  579d5d:	50                   	push   eax
  579d5e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  579d65:	83 ec 34             	sub    esp,0x34
  579d68:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  579d6c:	53                   	push   ebx
  579d6d:	55                   	push   ebp
  579d6e:	56                   	push   esi
  579d6f:	57                   	push   edi
  579d70:	8b d9                	mov    ebx,ecx
  579d72:	50                   	push   eax
  579d73:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  579d77:	e8 34 7f f8 ff       	call   0x501cb0
  579d7c:	8b 6c 24 58          	mov    ebp,DWORD PTR [esp+0x58]
  579d80:	33 f6                	xor    esi,esi
  579d82:	89 ab f8 00 00 00    	mov    DWORD PTR [ebx+0xf8],ebp
  579d88:	89 74 24 4c          	mov    DWORD PTR [esp+0x4c],esi
  579d8c:	89 b3 00 01 00 00    	mov    DWORD PTR [ebx+0x100],esi
  579d92:	c7 03 b4 fa 64 00    	mov    DWORD PTR [ebx],0x64fab4
  579d98:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
  579d9b:	3b c6                	cmp    eax,esi
  579d9d:	c6 44 24 4c 01       	mov    BYTE PTR [esp+0x4c],0x1
  579da2:	75 58                	jne    0x579dfc
  579da4:	8a 4c 24 54          	mov    cl,BYTE PTR [esp+0x54]
  579da8:	56                   	push   esi
  579da9:	88 4c 24 28          	mov    BYTE PTR [esp+0x28],cl
  579dad:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579db1:	e8 ea a2 e8 ff       	call   0x4040a0
  579db6:	bf fc 4f 6a 00       	mov    edi,0x6a4ffc
  579dbb:	83 c9 ff             	or     ecx,0xffffffff
  579dbe:	33 c0                	xor    eax,eax
  579dc0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  579dc2:	f7 d1                	not    ecx
  579dc4:	49                   	dec    ecx
  579dc5:	51                   	push   ecx
  579dc6:	68 fc 4f 6a 00       	push   0x6a4ffc
  579dcb:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  579dcf:	e8 1c a3 e8 ff       	call   0x4040f0
  579dd4:	8d 54 24 24          	lea    edx,[esp+0x24]
  579dd8:	8b cb                	mov    ecx,ebx
  579dda:	52                   	push   edx
  579ddb:	c6 44 24 50 02       	mov    BYTE PTR [esp+0x50],0x2
  579de0:	e8 bb 97 f8 ff       	call   0x5035a0
  579de5:	6a 01                	push   0x1
  579de7:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579deb:	c6 44 24 50 01       	mov    BYTE PTR [esp+0x50],0x1
  579df0:	e8 ab a2 e8 ff       	call   0x4040a0
  579df5:	c7 45 3c e8 f8 69 00 	mov    DWORD PTR [ebp+0x3c],0x69f8e8
  579dfc:	d9 45 1c             	fld    DWORD PTR [ebp+0x1c]
  579dff:	d8 5d 18             	fcomp  DWORD PTR [ebp+0x18]
  579e02:	df e0                	fnstsw ax
  579e04:	f6 c4 01             	test   ah,0x1
  579e07:	75 20                	jne    0x579e29
  579e09:	d9 45 1c             	fld    DWORD PTR [ebp+0x1c]
  579e0c:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  579e12:	df e0                	fnstsw ax
  579e14:	f6 c4 41             	test   ah,0x41
  579e17:	75 10                	jne    0x579e29
  579e19:	d9 45 18             	fld    DWORD PTR [ebp+0x18]
  579e1c:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  579e22:	df e0                	fnstsw ax
  579e24:	f6 c4 41             	test   ah,0x41
  579e27:	74 5f                	je     0x579e88
  579e29:	8a 44 24 54          	mov    al,BYTE PTR [esp+0x54]
  579e2d:	56                   	push   esi
  579e2e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579e32:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  579e36:	e8 65 a2 e8 ff       	call   0x4040a0
  579e3b:	bf b4 4f 6a 00       	mov    edi,0x6a4fb4
  579e40:	83 c9 ff             	or     ecx,0xffffffff
  579e43:	33 c0                	xor    eax,eax
  579e45:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  579e47:	f7 d1                	not    ecx
  579e49:	49                   	dec    ecx
  579e4a:	51                   	push   ecx
  579e4b:	68 b4 4f 6a 00       	push   0x6a4fb4
  579e50:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  579e54:	e8 97 a2 e8 ff       	call   0x4040f0
  579e59:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  579e5d:	c6 44 24 4c 03       	mov    BYTE PTR [esp+0x4c],0x3
  579e62:	51                   	push   ecx
  579e63:	8b cb                	mov    ecx,ebx
  579e65:	e8 36 97 f8 ff       	call   0x5035a0
  579e6a:	6a 01                	push   0x1
  579e6c:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579e70:	c6 44 24 50 01       	mov    BYTE PTR [esp+0x50],0x1
  579e75:	e8 26 a2 e8 ff       	call   0x4040a0
  579e7a:	c7 45 18 00 00 80 3f 	mov    DWORD PTR [ebp+0x18],0x3f800000
  579e81:	c7 45 1c 00 00 20 41 	mov    DWORD PTR [ebp+0x1c],0x41200000
  579e88:	d9 45 24             	fld    DWORD PTR [ebp+0x24]
  579e8b:	d8 5d 20             	fcomp  DWORD PTR [ebp+0x20]
  579e8e:	df e0                	fnstsw ax
  579e90:	f6 c4 01             	test   ah,0x1
  579e93:	75 20                	jne    0x579eb5
  579e95:	d9 45 24             	fld    DWORD PTR [ebp+0x24]
  579e98:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  579e9e:	df e0                	fnstsw ax
  579ea0:	f6 c4 41             	test   ah,0x41
  579ea3:	75 10                	jne    0x579eb5
  579ea5:	d9 45 20             	fld    DWORD PTR [ebp+0x20]
  579ea8:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  579eae:	df e0                	fnstsw ax
  579eb0:	f6 c4 41             	test   ah,0x41
  579eb3:	74 5f                	je     0x579f14
  579eb5:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  579eb9:	56                   	push   esi
  579eba:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579ebe:	88 54 24 28          	mov    BYTE PTR [esp+0x28],dl
  579ec2:	e8 d9 a1 e8 ff       	call   0x4040a0
  579ec7:	bf 64 4f 6a 00       	mov    edi,0x6a4f64
  579ecc:	83 c9 ff             	or     ecx,0xffffffff
  579ecf:	33 c0                	xor    eax,eax
  579ed1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  579ed3:	f7 d1                	not    ecx
  579ed5:	49                   	dec    ecx
  579ed6:	51                   	push   ecx
  579ed7:	68 64 4f 6a 00       	push   0x6a4f64
  579edc:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  579ee0:	e8 0b a2 e8 ff       	call   0x4040f0
  579ee5:	8d 44 24 24          	lea    eax,[esp+0x24]
  579ee9:	8b cb                	mov    ecx,ebx
  579eeb:	50                   	push   eax
  579eec:	c6 44 24 50 04       	mov    BYTE PTR [esp+0x50],0x4
  579ef1:	e8 aa 96 f8 ff       	call   0x5035a0
  579ef6:	6a 01                	push   0x1
  579ef8:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579efc:	c6 44 24 50 01       	mov    BYTE PTR [esp+0x50],0x1
  579f01:	e8 9a a1 e8 ff       	call   0x4040a0
  579f06:	c7 45 20 00 00 c8 42 	mov    DWORD PTR [ebp+0x20],0x42c80000
  579f0d:	c7 45 24 00 00 7a 44 	mov    DWORD PTR [ebp+0x24],0x447a0000
  579f14:	6a 48                	push   0x48
  579f16:	e8 b1 32 09 00       	call   0x60d1cc
  579f1b:	83 c4 04             	add    esp,0x4
  579f1e:	3b c6                	cmp    eax,esi
  579f20:	89 83 fc 00 00 00    	mov    DWORD PTR [ebx+0xfc],eax
  579f26:	75 7f                	jne    0x579fa7
  579f28:	8a 4c 24 54          	mov    cl,BYTE PTR [esp+0x54]
  579f2c:	56                   	push   esi
  579f2d:	88 4c 24 28          	mov    BYTE PTR [esp+0x28],cl
  579f31:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579f35:	e8 66 a1 e8 ff       	call   0x4040a0
  579f3a:	bf 14 4f 6a 00       	mov    edi,0x6a4f14
  579f3f:	83 c9 ff             	or     ecx,0xffffffff
  579f42:	33 c0                	xor    eax,eax
  579f44:	6a 01                	push   0x1
  579f46:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  579f48:	f7 d1                	not    ecx
  579f4a:	49                   	dec    ecx
  579f4b:	8b f9                	mov    edi,ecx
  579f4d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579f51:	57                   	push   edi
  579f52:	89 7c 24 60          	mov    DWORD PTR [esp+0x60],edi
  579f56:	e8 e5 79 e8 ff       	call   0x401940
  579f5b:	84 c0                	test   al,al
  579f5d:	74 27                	je     0x579f86
  579f5f:	8b cf                	mov    ecx,edi
  579f61:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  579f65:	8b d1                	mov    edx,ecx
  579f67:	be 14 4f 6a 00       	mov    esi,0x6a4f14
  579f6c:	c1 e9 02             	shr    ecx,0x2
  579f6f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  579f71:	8b ca                	mov    ecx,edx
  579f73:	8b c2                	mov    eax,edx
  579f75:	83 e1 03             	and    ecx,0x3
  579f78:	50                   	push   eax
  579f79:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  579f7b:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579f7f:	e8 0c a2 e8 ff       	call   0x404190
  579f84:	33 f6                	xor    esi,esi
  579f86:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  579f8a:	c6 44 24 4c 05       	mov    BYTE PTR [esp+0x4c],0x5
  579f8f:	51                   	push   ecx
  579f90:	8b cb                	mov    ecx,ebx
  579f92:	e8 09 96 f8 ff       	call   0x5035a0
  579f97:	6a 01                	push   0x1
  579f99:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  579f9d:	c6 44 24 50 01       	mov    BYTE PTR [esp+0x50],0x1
  579fa2:	e8 f9 a0 e8 ff       	call   0x4040a0
  579fa7:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  579fad:	8b 45 28             	mov    eax,DWORD PTR [ebp+0x28]
  579fb0:	6a 00                	push   0x0
  579fb2:	89 42 2c             	mov    DWORD PTR [edx+0x2c],eax
  579fb5:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  579fbb:	8b 55 18             	mov    edx,DWORD PTR [ebp+0x18]
  579fbe:	89 51 30             	mov    DWORD PTR [ecx+0x30],edx
  579fc1:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  579fc7:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  579fca:	89 48 34             	mov    DWORD PTR [eax+0x34],ecx
  579fcd:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  579fd3:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  579fd6:	89 42 3c             	mov    DWORD PTR [edx+0x3c],eax
  579fd9:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  579fdf:	8b 55 24             	mov    edx,DWORD PTR [ebp+0x24]
  579fe2:	89 51 38             	mov    DWORD PTR [ecx+0x38],edx
  579fe5:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  579feb:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  579fee:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  579ff1:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  579ff7:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  579ffa:	89 42 0c             	mov    DWORD PTR [edx+0xc],eax
  579ffd:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  57a003:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  57a006:	89 51 10             	mov    DWORD PTR [ecx+0x10],edx
  57a009:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57a00f:	8b 4d 2c             	mov    ecx,DWORD PTR [ebp+0x2c]
  57a012:	89 48 1c             	mov    DWORD PTR [eax+0x1c],ecx
  57a015:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  57a01b:	8b 45 30             	mov    eax,DWORD PTR [ebp+0x30]
  57a01e:	89 42 20             	mov    DWORD PTR [edx+0x20],eax
  57a021:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  57a027:	8b 55 34             	mov    edx,DWORD PTR [ebp+0x34]
  57a02a:	89 51 24             	mov    DWORD PTR [ecx+0x24],edx
  57a02d:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57a033:	c7 40 28 00 00 7f 43 	mov    DWORD PTR [eax+0x28],0x437f0000
  57a03a:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  57a040:	89 71 18             	mov    DWORD PTR [ecx+0x18],esi
  57a043:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  57a049:	89 72 14             	mov    DWORD PTR [edx+0x14],esi
  57a04c:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57a052:	89 30                	mov    DWORD PTR [eax],esi
  57a054:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  57a05a:	c7 41 44 00 00 80 3f 	mov    DWORD PTR [ecx+0x44],0x3f800000
  57a061:	8a 54 24 58          	mov    dl,BYTE PTR [esp+0x58]
  57a065:	8b 75 3c             	mov    esi,DWORD PTR [ebp+0x3c]
  57a068:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57a06c:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  57a070:	e8 2b a0 e8 ff       	call   0x4040a0
  57a075:	8b fe                	mov    edi,esi
  57a077:	83 c9 ff             	or     ecx,0xffffffff
  57a07a:	33 c0                	xor    eax,eax
  57a07c:	6a 01                	push   0x1
  57a07e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a080:	f7 d1                	not    ecx
  57a082:	49                   	dec    ecx
  57a083:	8b e9                	mov    ebp,ecx
  57a085:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57a089:	55                   	push   ebp
  57a08a:	e8 b1 78 e8 ff       	call   0x401940
  57a08f:	84 c0                	test   al,al
  57a091:	74 1e                	je     0x57a0b1
  57a093:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  57a097:	8b cd                	mov    ecx,ebp
  57a099:	8b c1                	mov    eax,ecx
  57a09b:	55                   	push   ebp
  57a09c:	c1 e9 02             	shr    ecx,0x2
  57a09f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  57a0a1:	8b c8                	mov    ecx,eax
  57a0a3:	83 e1 03             	and    ecx,0x3
  57a0a6:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  57a0a8:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57a0ac:	e8 df a0 e8 ff       	call   0x404190
  57a0b1:	c7 44 24 54 00 00 00 	mov    DWORD PTR [esp+0x54],0x0
  57a0b8:	00 
  57a0b9:	8a 4c 24 54          	mov    cl,BYTE PTR [esp+0x54]
  57a0bd:	6a 00                	push   0x0
  57a0bf:	88 4c 24 38          	mov    BYTE PTR [esp+0x38],cl
  57a0c3:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  57a0c7:	c6 44 24 50 07       	mov    BYTE PTR [esp+0x50],0x7
  57a0cc:	e8 cf 9f e8 ff       	call   0x4040a0
  57a0d1:	bf 5c 2c 69 00       	mov    edi,0x692c5c
  57a0d6:	83 c9 ff             	or     ecx,0xffffffff
  57a0d9:	33 c0                	xor    eax,eax
  57a0db:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a0dd:	f7 d1                	not    ecx
  57a0df:	49                   	dec    ecx
  57a0e0:	51                   	push   ecx
  57a0e1:	68 5c 2c 69 00       	push   0x692c5c
  57a0e6:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  57a0ea:	e8 01 a0 e8 ff       	call   0x4040f0
  57a0ef:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  57a0f5:	c6 44 24 4c 08       	mov    BYTE PTR [esp+0x4c],0x8
  57a0fa:	85 f6                	test   esi,esi
  57a0fc:	75 07                	jne    0x57a105
  57a0fe:	e8 7d 11 fe ff       	call   0x55b280
  57a103:	8b f0                	mov    esi,eax
  57a105:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  57a10b:	85 c0                	test   eax,eax
  57a10d:	75 64                	jne    0x57a173
  57a10f:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  57a113:	6a 00                	push   0x0
  57a115:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  57a119:	88 54 24 28          	mov    BYTE PTR [esp+0x28],dl
  57a11d:	e8 7e 9f e8 ff       	call   0x4040a0
  57a122:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a127:	83 c9 ff             	or     ecx,0xffffffff
  57a12a:	33 c0                	xor    eax,eax
  57a12c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a12e:	f7 d1                	not    ecx
  57a130:	49                   	dec    ecx
  57a131:	51                   	push   ecx
  57a132:	68 70 3f 6b 00       	push   0x6b3f70
  57a137:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  57a13b:	e8 b0 9f e8 ff       	call   0x4040f0
  57a140:	8d 44 24 24          	lea    eax,[esp+0x24]
  57a144:	c6 44 24 4c 09       	mov    BYTE PTR [esp+0x4c],0x9
  57a149:	50                   	push   eax
  57a14a:	68 88 01 00 00       	push   0x188
  57a14f:	68 58 eb 68 00       	push   0x68eb58
  57a154:	68 4c eb 68 00       	push   0x68eb4c
  57a159:	e8 92 66 02 00       	call   0x5a07f0
  57a15e:	ff d0                	call   eax
  57a160:	83 c4 10             	add    esp,0x10
  57a163:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  57a167:	c6 44 24 4c 08       	mov    BYTE PTR [esp+0x4c],0x8
  57a16c:	6a 01                	push   0x1
  57a16e:	e8 2d 9f e8 ff       	call   0x4040a0
  57a173:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  57a179:	8d 54 24 34          	lea    edx,[esp+0x34]
  57a17d:	8d 44 24 58          	lea    eax,[esp+0x58]
  57a181:	52                   	push   edx
  57a182:	50                   	push   eax
  57a183:	e8 f8 37 f9 ff       	call   0x50d980
  57a188:	8b f0                	mov    esi,eax
  57a18a:	8b 8b 00 01 00 00    	mov    ecx,DWORD PTR [ebx+0x100]
  57a190:	8b 06                	mov    eax,DWORD PTR [esi]
  57a192:	8d ab 00 01 00 00    	lea    ebp,[ebx+0x100]
  57a198:	3b c8                	cmp    ecx,eax
  57a19a:	c6 44 24 4c 0a       	mov    BYTE PTR [esp+0x4c],0xa
  57a19f:	74 20                	je     0x57a1c1
  57a1a1:	85 c9                	test   ecx,ecx
  57a1a3:	74 10                	je     0x57a1b5
  57a1a5:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  57a1a8:	48                   	dec    eax
  57a1a9:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  57a1ac:	75 07                	jne    0x57a1b5
  57a1ae:	6a 00                	push   0x0
  57a1b0:	e8 0b 1e 03 00       	call   0x5abfc0
  57a1b5:	8b 0e                	mov    ecx,DWORD PTR [esi]
  57a1b7:	89 4d 00             	mov    DWORD PTR [ebp+0x0],ecx
  57a1ba:	8b cd                	mov    ecx,ebp
  57a1bc:	e8 ef a2 00 00       	call   0x5844b0
  57a1c1:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  57a1c5:	c6 44 24 4c 08       	mov    BYTE PTR [esp+0x4c],0x8
  57a1ca:	85 c9                	test   ecx,ecx
  57a1cc:	74 0d                	je     0x57a1db
  57a1ce:	e8 fd f6 e8 ff       	call   0x4098d0
  57a1d3:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
  57a1da:	00 
  57a1db:	6a 01                	push   0x1
  57a1dd:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  57a1e1:	c6 44 24 50 07       	mov    BYTE PTR [esp+0x50],0x7
  57a1e6:	e8 b5 9e e8 ff       	call   0x4040a0
  57a1eb:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  57a1ef:	85 c0                	test   eax,eax
  57a1f1:	0f 86 e6 00 00 00    	jbe    0x57a2dd
  57a1f7:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  57a1fd:	85 f6                	test   esi,esi
  57a1ff:	75 07                	jne    0x57a208
  57a201:	e8 7a 10 fe ff       	call   0x55b280
  57a206:	8b f0                	mov    esi,eax
  57a208:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  57a20e:	85 c0                	test   eax,eax
  57a210:	75 64                	jne    0x57a276
  57a212:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  57a216:	6a 00                	push   0x0
  57a218:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  57a21c:	88 54 24 38          	mov    BYTE PTR [esp+0x38],dl
  57a220:	e8 7b 9e e8 ff       	call   0x4040a0
  57a225:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a22a:	83 c9 ff             	or     ecx,0xffffffff
  57a22d:	33 c0                	xor    eax,eax
  57a22f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a231:	f7 d1                	not    ecx
  57a233:	49                   	dec    ecx
  57a234:	51                   	push   ecx
  57a235:	68 70 3f 6b 00       	push   0x6b3f70
  57a23a:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  57a23e:	e8 ad 9e e8 ff       	call   0x4040f0
  57a243:	8d 44 24 34          	lea    eax,[esp+0x34]
  57a247:	c6 44 24 4c 0b       	mov    BYTE PTR [esp+0x4c],0xb
  57a24c:	50                   	push   eax
  57a24d:	68 88 01 00 00       	push   0x188
  57a252:	68 58 eb 68 00       	push   0x68eb58
  57a257:	68 4c eb 68 00       	push   0x68eb4c
  57a25c:	e8 8f 65 02 00       	call   0x5a07f0
  57a261:	ff d0                	call   eax
  57a263:	83 c4 10             	add    esp,0x10
  57a266:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  57a26a:	c6 44 24 4c 07       	mov    BYTE PTR [esp+0x4c],0x7
  57a26f:	6a 01                	push   0x1
  57a271:	e8 2a 9e e8 ff       	call   0x4040a0
  57a276:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  57a27c:	8d 54 24 14          	lea    edx,[esp+0x14]
  57a280:	8d 44 24 58          	lea    eax,[esp+0x58]
  57a284:	52                   	push   edx
  57a285:	50                   	push   eax
  57a286:	e8 f5 36 f9 ff       	call   0x50d980
  57a28b:	8b f0                	mov    esi,eax
  57a28d:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  57a291:	8b 0e                	mov    ecx,DWORD PTR [esi]
  57a293:	3b c1                	cmp    eax,ecx
  57a295:	c6 44 24 4c 0c       	mov    BYTE PTR [esp+0x4c],0xc
  57a29a:	74 2f                	je     0x57a2cb
  57a29c:	85 c0                	test   eax,eax
  57a29e:	74 18                	je     0x57a2b8
  57a2a0:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  57a2a3:	8b c8                	mov    ecx,eax
  57a2a5:	83 c0 14             	add    eax,0x14
  57a2a8:	4f                   	dec    edi
  57a2a9:	8b d7                	mov    edx,edi
  57a2ab:	85 d2                	test   edx,edx
  57a2ad:	89 38                	mov    DWORD PTR [eax],edi
  57a2af:	75 07                	jne    0x57a2b8
  57a2b1:	6a 00                	push   0x0
  57a2b3:	e8 08 1d 03 00       	call   0x5abfc0
  57a2b8:	8b 0e                	mov    ecx,DWORD PTR [esi]
  57a2ba:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
  57a2be:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  57a2c2:	e8 e9 a1 00 00       	call   0x5844b0
  57a2c7:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  57a2cb:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  57a2cf:	c6 44 24 4c 07       	mov    BYTE PTR [esp+0x4c],0x7
  57a2d4:	85 c9                	test   ecx,ecx
  57a2d6:	74 09                	je     0x57a2e1
  57a2d8:	e8 f3 f5 e8 ff       	call   0x4098d0
  57a2dd:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  57a2e1:	83 7d 00 00          	cmp    DWORD PTR [ebp+0x0],0x0
  57a2e5:	74 2f                	je     0x57a316
  57a2e7:	85 c0                	test   eax,eax
  57a2e9:	74 2b                	je     0x57a316
  57a2eb:	51                   	push   ecx
  57a2ec:	8b cc                	mov    ecx,esp
  57a2ee:	89 64 24 5c          	mov    DWORD PTR [esp+0x5c],esp
  57a2f2:	89 01                	mov    DWORD PTR [ecx],eax
  57a2f4:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  57a2f8:	85 c0                	test   eax,eax
  57a2fa:	74 03                	je     0x57a2ff
  57a2fc:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  57a2ff:	8b cd                	mov    ecx,ebp
  57a301:	c6 44 24 50 07       	mov    BYTE PTR [esp+0x50],0x7
  57a306:	e8 d5 8a e9 ff       	call   0x412de0
  57a30b:	8b c8                	mov    ecx,eax
  57a30d:	e8 8e 0b f9 ff       	call   0x50aea0
  57a312:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  57a316:	85 c0                	test   eax,eax
  57a318:	c6 44 24 4c 06       	mov    BYTE PTR [esp+0x4c],0x6
  57a31d:	74 20                	je     0x57a33f
  57a31f:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  57a322:	8b c8                	mov    ecx,eax
  57a324:	83 c0 14             	add    eax,0x14
  57a327:	4e                   	dec    esi
  57a328:	8b d6                	mov    edx,esi
  57a32a:	85 d2                	test   edx,edx
  57a32c:	89 30                	mov    DWORD PTR [eax],esi
  57a32e:	75 07                	jne    0x57a337
  57a330:	6a 00                	push   0x0
  57a332:	e8 89 1c 03 00       	call   0x5abfc0
  57a337:	c7 44 24 54 00 00 00 	mov    DWORD PTR [esp+0x54],0x0
  57a33e:	00 
  57a33f:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  57a343:	85 c9                	test   ecx,ecx
  57a345:	74 1c                	je     0x57a363
  57a347:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  57a34a:	84 c0                	test   al,al
  57a34c:	74 0b                	je     0x57a359
  57a34e:	3c ff                	cmp    al,0xff
  57a350:	74 07                	je     0x57a359
  57a352:	fe c8                	dec    al
  57a354:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  57a357:	eb 0a                	jmp    0x57a363
  57a359:	49                   	dec    ecx
  57a35a:	51                   	push   ecx
  57a35b:	e8 90 42 08 00       	call   0x5fe5f0
  57a360:	83 c4 04             	add    esp,0x4
  57a363:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  57a367:	5f                   	pop    edi
  57a368:	5e                   	pop    esi
  57a369:	8b c3                	mov    eax,ebx
  57a36b:	5d                   	pop    ebp
  57a36c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  57a373:	5b                   	pop    ebx
  57a374:	83 c4 40             	add    esp,0x40
  57a377:	c2 08 00             	ret    0x8
  57a37a:	90                   	nop
  57a37b:	90                   	nop
  57a37c:	90                   	nop
  57a37d:	90                   	nop
  57a37e:	90                   	nop
  57a37f:	90                   	nop
  57a380:	56                   	push   esi
  57a381:	8b f1                	mov    esi,ecx
  57a383:	e8 18 00 00 00       	call   0x57a3a0
  57a388:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  57a38d:	74 09                	je     0x57a398
  57a38f:	56                   	push   esi
  57a390:	e8 5b 42 08 00       	call   0x5fe5f0
  57a395:	83 c4 04             	add    esp,0x4
  57a398:	8b c6                	mov    eax,esi
  57a39a:	5e                   	pop    esi
  57a39b:	c2 04 00             	ret    0x4
  57a39e:	90                   	nop
  57a39f:	90                   	nop
  57a3a0:	6a ff                	push   0xffffffff
  57a3a2:	68 d8 1b 64 00       	push   0x641bd8
  57a3a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  57a3ad:	50                   	push   eax
  57a3ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  57a3b5:	51                   	push   ecx
  57a3b6:	56                   	push   esi
  57a3b7:	8b f1                	mov    esi,ecx
  57a3b9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  57a3bd:	c7 06 b4 fa 64 00    	mov    DWORD PTR [esi],0x64fab4
  57a3c3:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  57a3c9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  57a3d0:	00 
  57a3d1:	50                   	push   eax
  57a3d2:	e8 86 0e 09 00       	call   0x60b25d
  57a3d7:	c7 86 fc 00 00 00 00 	mov    DWORD PTR [esi+0xfc],0x0
  57a3de:	00 00 00 
  57a3e1:	8b 8e 00 01 00 00    	mov    ecx,DWORD PTR [esi+0x100]
  57a3e7:	83 c4 04             	add    esp,0x4
  57a3ea:	85 c9                	test   ecx,ecx
  57a3ec:	74 1a                	je     0x57a408
  57a3ee:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  57a3f1:	48                   	dec    eax
  57a3f2:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  57a3f5:	75 07                	jne    0x57a3fe
  57a3f7:	6a 00                	push   0x0
  57a3f9:	e8 c2 1b 03 00       	call   0x5abfc0
  57a3fe:	c7 86 00 01 00 00 00 	mov    DWORD PTR [esi+0x100],0x0
  57a405:	00 00 00 
  57a408:	8b ce                	mov    ecx,esi
  57a40a:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  57a411:	ff 
  57a412:	e8 29 7b f8 ff       	call   0x501f40
  57a417:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  57a41b:	5e                   	pop    esi
  57a41c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  57a423:	83 c4 10             	add    esp,0x10
  57a426:	c3                   	ret
  57a427:	90                   	nop
  57a428:	90                   	nop
  57a429:	90                   	nop
  57a42a:	90                   	nop
  57a42b:	90                   	nop
  57a42c:	90                   	nop
  57a42d:	90                   	nop
  57a42e:	90                   	nop
  57a42f:	90                   	nop
  57a430:	6a ff                	push   0xffffffff
  57a432:	68 f8 1b 64 00       	push   0x641bf8
  57a437:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  57a43d:	50                   	push   eax
  57a43e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  57a445:	83 ec 20             	sub    esp,0x20
  57a448:	53                   	push   ebx
  57a449:	56                   	push   esi
  57a44a:	8b f1                	mov    esi,ecx
  57a44c:	33 db                	xor    ebx,ebx
  57a44e:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  57a452:	39 9e fc 00 00 00    	cmp    DWORD PTR [esi+0xfc],ebx
  57a458:	0f 85 a5 00 00 00    	jne    0x57a503
  57a45e:	8a 44 24 38          	mov    al,BYTE PTR [esp+0x38]
  57a462:	55                   	push   ebp
  57a463:	57                   	push   edi
  57a464:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  57a468:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a46d:	83 c9 ff             	or     ecx,0xffffffff
  57a470:	33 c0                	xor    eax,eax
  57a472:	6a 01                	push   0x1
  57a474:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a476:	f7 d1                	not    ecx
  57a478:	49                   	dec    ecx
  57a479:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  57a47d:	8b e9                	mov    ebp,ecx
  57a47f:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  57a483:	55                   	push   ebp
  57a484:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  57a488:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  57a48c:	e8 af 74 e8 ff       	call   0x401940
  57a491:	84 c0                	test   al,al
  57a493:	74 28                	je     0x57a4bd
  57a495:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  57a499:	8b cd                	mov    ecx,ebp
  57a49b:	8b d1                	mov    edx,ecx
  57a49d:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  57a4a2:	c1 e9 02             	shr    ecx,0x2
  57a4a5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  57a4a7:	8b ca                	mov    ecx,edx
  57a4a9:	83 e1 03             	and    ecx,0x3
  57a4ac:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  57a4ae:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  57a4b2:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  57a4b6:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
  57a4ba:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  57a4bd:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  57a4c1:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  57a4c5:	51                   	push   ecx
  57a4c6:	6a 5c                	push   0x5c
  57a4c8:	68 50 50 6a 00       	push   0x6a5050
  57a4cd:	68 44 50 6a 00       	push   0x6a5044
  57a4d2:	e8 19 63 02 00       	call   0x5a07f0
  57a4d7:	ff d0                	call   eax
  57a4d9:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  57a4dd:	83 c4 10             	add    esp,0x10
  57a4e0:	3b c3                	cmp    eax,ebx
  57a4e2:	5f                   	pop    edi
  57a4e3:	5d                   	pop    ebp
  57a4e4:	74 1d                	je     0x57a503
  57a4e6:	8d 48 ff             	lea    ecx,[eax-0x1]
  57a4e9:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  57a4ec:	3a c3                	cmp    al,bl
  57a4ee:	74 0a                	je     0x57a4fa
  57a4f0:	3c ff                	cmp    al,0xff
  57a4f2:	74 06                	je     0x57a4fa
  57a4f4:	fe c8                	dec    al
  57a4f6:	88 01                	mov    BYTE PTR [ecx],al
  57a4f8:	eb 09                	jmp    0x57a503
  57a4fa:	51                   	push   ecx
  57a4fb:	e8 f0 40 08 00       	call   0x5fe5f0
  57a500:	83 c4 04             	add    esp,0x4
  57a503:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  57a509:	8b 50 10             	mov    edx,DWORD PTR [eax+0x10]
  57a50c:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
  57a50f:	52                   	push   edx
  57a510:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  57a513:	51                   	push   ecx
  57a514:	52                   	push   edx
  57a515:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57a519:	e8 02 89 03 00       	call   0x5b2e20
  57a51e:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  57a522:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  57a526:	8b c8                	mov    ecx,eax
  57a528:	5e                   	pop    esi
  57a529:	5b                   	pop    ebx
  57a52a:	89 11                	mov    DWORD PTR [ecx],edx
  57a52c:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  57a530:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  57a533:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  57a537:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  57a53a:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  57a53e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  57a545:	83 c4 2c             	add    esp,0x2c
  57a548:	c2 04 00             	ret    0x4
  57a54b:	90                   	nop
  57a54c:	90                   	nop
  57a54d:	90                   	nop
  57a54e:	90                   	nop
  57a54f:	90                   	nop
  57a550:	57                   	push   edi
  57a551:	8b f9                	mov    edi,ecx
  57a553:	e8 08 70 ea ff       	call   0x421560
  57a558:	84 c0                	test   al,al
  57a55a:	74 47                	je     0x57a5a3
  57a55c:	56                   	push   esi
  57a55d:	e8 8e e7 f9 ff       	call   0x518cf0
  57a562:	8b f0                	mov    esi,eax
  57a564:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  57a567:	3d 00 00 00 80       	cmp    eax,0x80000000
  57a56c:	75 18                	jne    0x57a586
  57a56e:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  57a571:	85 c0                	test   eax,eax
  57a573:	75 05                	jne    0x57a57a
  57a575:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  57a57a:	50                   	push   eax
  57a57b:	e8 90 09 09 00       	call   0x60af10
  57a580:	83 c4 04             	add    esp,0x4
  57a583:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  57a586:	85 c0                	test   eax,eax
  57a588:	5e                   	pop    esi
  57a589:	75 18                	jne    0x57a5a3
  57a58b:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  57a58f:	85 c0                	test   eax,eax
  57a591:	74 10                	je     0x57a5a3
  57a593:	50                   	push   eax
  57a594:	e8 97 f8 e8 ff       	call   0x409e30
  57a599:	d9 1c 24             	fstp   DWORD PTR [esp]
  57a59c:	8b cf                	mov    ecx,edi
  57a59e:	e8 0d 00 00 00       	call   0x57a5b0
  57a5a3:	5f                   	pop    edi
  57a5a4:	c2 08 00             	ret    0x8
  57a5a7:	90                   	nop
  57a5a8:	90                   	nop
  57a5a9:	90                   	nop
  57a5aa:	90                   	nop
  57a5ab:	90                   	nop
  57a5ac:	90                   	nop
  57a5ad:	90                   	nop
  57a5ae:	90                   	nop
  57a5af:	90                   	nop
  57a5b0:	6a ff                	push   0xffffffff
