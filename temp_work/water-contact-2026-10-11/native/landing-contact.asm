
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004dc480 <.text+0xdb480>:
  4dc480:	04 0f                	add    al,0xf
  4dc482:	85 8e 01 00 00 8a    	test   DWORD PTR [esi-0x75ffffff],ecx
  4dc488:	54                   	push   esp
  4dc489:	24 13                	and    al,0x13
  4dc48b:	0c 04                	or     al,0x4
  4dc48d:	6a 00                	push   0x0
  4dc48f:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc493:	a2 74 92 6b 00       	mov    ds:0x6b9274,al
  4dc498:	88 54 24 4c          	mov    BYTE PTR [esp+0x4c],dl
  4dc49c:	e8 ff 7b f2 ff       	call   0x4040a0
  4dc4a1:	bf e0 02 69 00       	mov    edi,0x6902e0
  4dc4a6:	83 c9 ff             	or     ecx,0xffffffff
  4dc4a9:	33 c0                	xor    eax,eax
  4dc4ab:	6a 01                	push   0x1
  4dc4ad:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc4af:	f7 d1                	not    ecx
  4dc4b1:	49                   	dec    ecx
  4dc4b2:	8b e9                	mov    ebp,ecx
  4dc4b4:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc4b8:	55                   	push   ebp
  4dc4b9:	e8 82 54 f2 ff       	call   0x401940
  4dc4be:	84 c0                	test   al,al
  4dc4c0:	74 23                	je     0x4dc4e5
  4dc4c2:	8b 7c 24 4c          	mov    edi,DWORD PTR [esp+0x4c]
  4dc4c6:	8b cd                	mov    ecx,ebp
  4dc4c8:	8b c1                	mov    eax,ecx
  4dc4ca:	be e0 02 69 00       	mov    esi,0x6902e0
  4dc4cf:	c1 e9 02             	shr    ecx,0x2
  4dc4d2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dc4d4:	8b c8                	mov    ecx,eax
  4dc4d6:	55                   	push   ebp
  4dc4d7:	83 e1 03             	and    ecx,0x3
  4dc4da:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dc4dc:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc4e0:	e8 ab 7c f2 ff       	call   0x404190
  4dc4e5:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4dc4e9:	6a 00                	push   0x0
  4dc4eb:	88 4c 24 5c          	mov    BYTE PTR [esp+0x5c],cl
  4dc4ef:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc4f3:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0x9
  4dc4fa:	09 00 00 00 
  4dc4fe:	e8 9d 7b f2 ff       	call   0x4040a0
  4dc503:	bf 6c 9e 69 00       	mov    edi,0x699e6c
  4dc508:	83 c9 ff             	or     ecx,0xffffffff
  4dc50b:	33 c0                	xor    eax,eax
  4dc50d:	6a 01                	push   0x1
  4dc50f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc511:	f7 d1                	not    ecx
  4dc513:	49                   	dec    ecx
  4dc514:	8b e9                	mov    ebp,ecx
  4dc516:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc51a:	55                   	push   ebp
  4dc51b:	e8 20 54 f2 ff       	call   0x401940
  4dc520:	84 c0                	test   al,al
  4dc522:	74 23                	je     0x4dc547
  4dc524:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
  4dc528:	8b cd                	mov    ecx,ebp
  4dc52a:	8b d1                	mov    edx,ecx
  4dc52c:	be 6c 9e 69 00       	mov    esi,0x699e6c
  4dc531:	c1 e9 02             	shr    ecx,0x2
  4dc534:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dc536:	8b ca                	mov    ecx,edx
  4dc538:	55                   	push   ebp
  4dc539:	83 e1 03             	and    ecx,0x3
  4dc53c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dc53e:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc542:	e8 49 7c f2 ff       	call   0x404190
  4dc547:	8d 84 24 c8 00 00 00 	lea    eax,[esp+0xc8]
  4dc54e:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0xa
  4dc555:	0a 
  4dc556:	50                   	push   eax
  4dc557:	e8 34 aa f5 ff       	call   0x436f90
  4dc55c:	83 c4 04             	add    esp,0x4
  4dc55f:	6a 00                	push   0x0
  4dc561:	50                   	push   eax
  4dc562:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4dc566:	68 00 00 c8 42       	push   0x42c80000
  4dc56b:	8d 54 24 64          	lea    edx,[esp+0x64]
  4dc56f:	b3 0b                	mov    bl,0xb
  4dc571:	51                   	push   ecx
  4dc572:	52                   	push   edx
  4dc573:	8d 8c 24 c4 01 00 00 	lea    ecx,[esp+0x1c4]
  4dc57a:	88 9c 24 38 02 00 00 	mov    BYTE PTR [esp+0x238],bl
  4dc581:	e8 2a 03 0d 00       	call   0x5ac8b0
  4dc586:	8b f0                	mov    esi,eax
  4dc588:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc58b:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4dc591:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0xc
  4dc598:	0c 
  4dc599:	df e0                	fnstsw ax
  4dc59b:	f6 c4 40             	test   ah,0x40
  4dc59e:	74 16                	je     0x4dc5b6
  4dc5a0:	8d 44 24 13          	lea    eax,[esp+0x13]
  4dc5a4:	8d 4e 14             	lea    ecx,[esi+0x14]
  4dc5a7:	50                   	push   eax
  4dc5a8:	51                   	push   ecx
  4dc5a9:	e8 e2 0d 0d 00       	call   0x5ad390
  4dc5ae:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4dc5b1:	83 c4 08             	add    esp,0x8
  4dc5b4:	eb 03                	jmp    0x4dc5b9
  4dc5b6:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc5b9:	d9 1d 68 92 6b 00    	fstp   DWORD PTR ds:0x6b9268
  4dc5bf:	8d 8c 24 b0 01 00 00 	lea    ecx,[esp+0x1b0]
  4dc5c6:	88 9c 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],bl
  4dc5cd:	e8 ce 06 0d 00       	call   0x5acca0
  4dc5d2:	6a 01                	push   0x1
  4dc5d4:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  4dc5db:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0xa
  4dc5e2:	0a 
  4dc5e3:	e8 b8 7a f2 ff       	call   0x4040a0
  4dc5e8:	6a 01                	push   0x1
  4dc5ea:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc5ee:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x9
  4dc5f5:	09 
  4dc5f6:	e8 a5 7a f2 ff       	call   0x4040a0
  4dc5fb:	6a 01                	push   0x1
  4dc5fd:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc601:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0xffffffff
  4dc608:	ff ff ff ff 
  4dc60c:	e8 8f 7a f2 ff       	call   0x4040a0
  4dc611:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc615:	d9 05 e0 96 69 00    	fld    DWORD PTR ds:0x6996e0
  4dc61b:	d8 8e 78 01 00 00    	fmul   DWORD PTR [esi+0x178]
  4dc621:	c7 86 78 01 00 00 00 	mov    DWORD PTR [esi+0x178],0x0
  4dc628:	00 00 00 
  4dc62b:	d9 e0                	fchs
  4dc62d:	d8 15 70 92 6b 00    	fcom   DWORD PTR ds:0x6b9270
  4dc633:	df e0                	fnstsw ax
  4dc635:	f6 c4 01             	test   ah,0x1
  4dc638:	0f 85 d3 02 00 00    	jne    0x4dc911
  4dc63e:	d8 35 6c 92 6b 00    	fdiv   DWORD PTR ds:0x6b926c
  4dc644:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
  4dc648:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  4dc64e:	df e0                	fnstsw ax
  4dc650:	f6 c4 41             	test   ah,0x41
  4dc653:	75 39                	jne    0x4dc68e
  4dc655:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  4dc659:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  4dc65f:	6a 00                	push   0x0
  4dc661:	56                   	push   esi
  4dc662:	51                   	push   ecx
  4dc663:	8b ce                	mov    ecx,esi
  4dc665:	d8 0d 68 92 6b 00    	fmul   DWORD PTR ds:0x6b9268
  4dc66b:	d9 1c 24             	fstp   DWORD PTR [esp]
  4dc66e:	e8 4d 79 02 00       	call   0x503fc0
  4dc673:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  4dc679:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
  4dc67d:	df e0                	fnstsw ax
  4dc67f:	f6 c4 01             	test   ah,0x1
  4dc682:	74 0a                	je     0x4dc68e
  4dc684:	c7 44 24 18 00 00 80 	mov    DWORD PTR [esp+0x18],0x3f800000
  4dc68b:	3f 
  4dc68c:	eb 08                	jmp    0x4dc696
  4dc68e:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  4dc692:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4dc696:	8b 84 24 38 02 00 00 	mov    eax,DWORD PTR [esp+0x238]
  4dc69d:	a9 00 00 02 00       	test   eax,0x20000
  4dc6a2:	74 4b                	je     0x4dc6ef
  4dc6a4:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4dc6a8:	6a 00                	push   0x0
  4dc6aa:	6a 00                	push   0x0
  4dc6ac:	50                   	push   eax
  4dc6ad:	6a 00                	push   0x0
  4dc6af:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4dc6b3:	68 18 56 6b 00       	push   0x6b5618
  4dc6b8:	51                   	push   ecx
  4dc6b9:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4dc6bd:	e8 1e 39 07 00       	call   0x54ffe0
  4dc6c2:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  4dc6c6:	85 c0                	test   eax,eax
  4dc6c8:	0f 84 45 02 00 00    	je     0x4dc913
  4dc6ce:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc6d1:	8b c8                	mov    ecx,eax
  4dc6d3:	83 c0 14             	add    eax,0x14
  4dc6d6:	4e                   	dec    esi
  4dc6d7:	8b d6                	mov    edx,esi
  4dc6d9:	85 d2                	test   edx,edx
  4dc6db:	89 30                	mov    DWORD PTR [eax],esi
  4dc6dd:	0f 85 30 02 00 00    	jne    0x4dc913
  4dc6e3:	6a 00                	push   0x0
  4dc6e5:	e8 d6 f8 0c 00       	call   0x5abfc0
  4dc6ea:	e9 24 02 00 00       	jmp    0x4dc913
  4dc6ef:	a9 00 00 01 00       	test   eax,0x10000
  4dc6f4:	6a 00                	push   0x0
  4dc6f6:	6a 00                	push   0x0
  4dc6f8:	74 47                	je     0x4dc741
  4dc6fa:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  4dc6fe:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  4dc702:	52                   	push   edx
  4dc703:	6a 00                	push   0x0
  4dc705:	8d 44 24 40          	lea    eax,[esp+0x40]
  4dc709:	68 20 55 6b 00       	push   0x6b5520
  4dc70e:	50                   	push   eax
  4dc70f:	e8 cc 38 07 00       	call   0x54ffe0
  4dc714:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  4dc718:	85 c0                	test   eax,eax
  4dc71a:	0f 84 f3 01 00 00    	je     0x4dc913
  4dc720:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc723:	8b c8                	mov    ecx,eax
  4dc725:	83 c0 14             	add    eax,0x14
  4dc728:	4e                   	dec    esi
  4dc729:	8b d6                	mov    edx,esi
  4dc72b:	85 d2                	test   edx,edx
  4dc72d:	89 30                	mov    DWORD PTR [eax],esi
  4dc72f:	0f 85 de 01 00 00    	jne    0x4dc913
  4dc735:	6a 00                	push   0x0
  4dc737:	e8 84 f8 0c 00       	call   0x5abfc0
  4dc73c:	e9 d2 01 00 00       	jmp    0x4dc913
  4dc741:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  4dc745:	8d 54 24 40          	lea    edx,[esp+0x40]
  4dc749:	51                   	push   ecx
  4dc74a:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  4dc74e:	6a 00                	push   0x0
  4dc750:	68 08 57 6b 00       	push   0x6b5708
  4dc755:	52                   	push   edx
  4dc756:	e8 85 38 07 00       	call   0x54ffe0
  4dc75b:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4dc75f:	85 c0                	test   eax,eax
  4dc761:	0f 84 ac 01 00 00    	je     0x4dc913
  4dc767:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc76a:	8b c8                	mov    ecx,eax
  4dc76c:	83 c0 14             	add    eax,0x14
  4dc76f:	4e                   	dec    esi
  4dc770:	8b d6                	mov    edx,esi
  4dc772:	85 d2                	test   edx,edx
  4dc774:	89 30                	mov    DWORD PTR [eax],esi
  4dc776:	0f 85 97 01 00 00    	jne    0x4dc913
  4dc77c:	6a 00                	push   0x0
  4dc77e:	e8 3d f8 0c 00       	call   0x5abfc0
  4dc783:	e9 8b 01 00 00       	jmp    0x4dc913
