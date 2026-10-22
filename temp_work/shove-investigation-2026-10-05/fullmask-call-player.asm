
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00432450 <.text+0x31450>:
  432450:	9c                   	pushf
  432451:	c1 17 00             	rcl    DWORD PTR [edi],0x0
  432454:	a0 cc 52 6b 00       	mov    al,ds:0x6b52cc
  432459:	c7 84 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],0x0
  432460:	00 00 00 00 
  432464:	a8 01                	test   al,0x1
  432466:	c6 44 24 07 00       	mov    BYTE PTR [esp+0x7],0x0
  43246b:	75 18                	jne    0x432485
  43246d:	0c 01                	or     al,0x1
  43246f:	a2 cc 52 6b 00       	mov    ds:0x6b52cc,al
  432474:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  43247a:	8b 01                	mov    eax,DWORD PTR [ecx]
  43247c:	ff 50 28             	call   DWORD PTR [eax+0x28]
  43247f:	d9 1d c8 52 6b 00    	fstp   DWORD PTR ds:0x6b52c8
  432485:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  43248b:	6a 00                	push   0x0
  43248d:	68 40 f9 68 00       	push   0x68f940
  432492:	68 18 f9 68 00       	push   0x68f918
  432497:	6a 00                	push   0x0
  432499:	51                   	push   ecx
  43249a:	e8 53 82 1d 00       	call   0x60a6f2
  43249f:	83 c4 14             	add    esp,0x14
  4324a2:	8b c8                	mov    ecx,eax
  4324a4:	e8 87 7a 00 00       	call   0x439f30
  4324a9:	8b 95 f8 00 00 00    	mov    edx,DWORD PTR [ebp+0xf8]
  4324af:	6a 00                	push   0x0
  4324b1:	68 80 04 69 00       	push   0x690480
  4324b6:	68 60 04 69 00       	push   0x690460
  4324bb:	6a 00                	push   0x0
  4324bd:	52                   	push   edx
  4324be:	89 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],eax
  4324c5:	e8 28 82 1d 00       	call   0x60a6f2
  4324ca:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  4324ce:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  4324d3:	83 c4 14             	add    esp,0x14
  4324d6:	85 c0                	test   eax,eax
  4324d8:	75 05                	jne    0x4324df
  4324da:	e8 a1 9f 08 00       	call   0x4bc480
  4324df:	53                   	push   ebx
  4324e0:	56                   	push   esi
  4324e1:	57                   	push   edi
  4324e2:	6a 01                	push   0x1
  4324e4:	68 08 03 69 00       	push   0x690308
  4324e9:	68 e8 02 69 00       	push   0x6902e8
  4324ee:	6a 00                	push   0x0
  4324f0:	50                   	push   eax
  4324f1:	e8 fc 81 1d 00       	call   0x60a6f2
  4324f6:	83 c4 14             	add    esp,0x14
  4324f9:	8b c8                	mov    ecx,eax
  4324fb:	e8 60 fe 05 00       	call   0x492360
  432500:	8b d8                	mov    ebx,eax
  432502:	8b cd                	mov    ecx,ebp
  432504:	89 9c 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],ebx
  43250b:	e8 30 2f 00 00       	call   0x435440
  432510:	8b 84 24 38 01 00 00 	mov    eax,DWORD PTR [esp+0x138]
  432517:	8b 8c 24 34 01 00 00 	mov    ecx,DWORD PTR [esp+0x134]
  43251e:	50                   	push   eax
  43251f:	51                   	push   ecx
  432520:	8b cd                	mov    ecx,ebp
  432522:	e8 49 84 0a 00       	call   0x4da970
  432527:	8b cd                	mov    ecx,ebp
  432529:	e8 f2 41 0a 00       	call   0x4d6720
  43252e:	8b cd                	mov    ecx,ebp
  432530:	e8 bb 42 0a 00       	call   0x4d67f0
  432535:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  43253b:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
  43253f:	85 c0                	test   eax,eax
  432541:	75 6a                	jne    0x4325ad
  432543:	8a 54 24 11          	mov    dl,BYTE PTR [esp+0x11]
  432547:	6a 00                	push   0x0
  432549:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  43254d:	88 54 24 28          	mov    BYTE PTR [esp+0x28],dl
  432551:	e8 4a 1b fd ff       	call   0x4040a0
  432556:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  43255b:	83 c9 ff             	or     ecx,0xffffffff
  43255e:	33 c0                	xor    eax,eax
  432560:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432562:	f7 d1                	not    ecx
  432564:	49                   	dec    ecx
  432565:	51                   	push   ecx
  432566:	68 70 3f 6b 00       	push   0x6b3f70
  43256b:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  43256f:	e8 7c 1b fd ff       	call   0x4040f0
  432574:	8d 44 24 24          	lea    eax,[esp+0x24]
  432578:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x1
  43257f:	01 
  432580:	50                   	push   eax
  432581:	68 b6 00 00 00       	push   0xb6
  432586:	68 38 d6 68 00       	push   0x68d638
  43258b:	68 2c d6 68 00       	push   0x68d62c
  432590:	e8 5b e2 16 00       	call   0x5a07f0
  432595:	ff d0                	call   eax
  432597:	83 c4 10             	add    esp,0x10
  43259a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  43259e:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x0
  4325a5:	00 
  4325a6:	6a 01                	push   0x1
  4325a8:	e8 f3 1a fd ff       	call   0x4040a0
  4325ad:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4325b3:	b9 0c 00 00 00       	mov    ecx,0xc
  4325b8:	8d bc 24 f4 00 00 00 	lea    edi,[esp+0xf4]
  4325bf:	8d b0 e0 01 00 00    	lea    esi,[eax+0x1e0]
  4325c5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4325c7:	8b cb                	mov    ecx,ebx
  4325c9:	e8 b2 11 05 00       	call   0x483780
  4325ce:	83 f8 ff             	cmp    eax,0xffffffff
  4325d1:	7e 0c                	jle    0x4325df
  4325d3:	8b 8d 50 02 00 00    	mov    ecx,DWORD PTR [ebp+0x250]
  4325d9:	50                   	push   eax
  4325da:	e8 61 68 02 00       	call   0x458e40
  4325df:	8b 84 24 38 01 00 00 	mov    eax,DWORD PTR [esp+0x138]
  4325e6:	8b 95 58 02 00 00    	mov    edx,DWORD PTR [ebp+0x258]
  4325ec:	8d 8d 58 02 00 00    	lea    ecx,[ebp+0x258]
  4325f2:	50                   	push   eax
  4325f3:	8b 84 24 38 01 00 00 	mov    eax,DWORD PTR [esp+0x138]
  4325fa:	50                   	push   eax
  4325fb:	ff 52 04             	call   DWORD PTR [edx+0x4]
  4325fe:	8b 85 54 02 00 00    	mov    eax,DWORD PTR [ebp+0x254]
  432604:	85 c0                	test   eax,eax
  432606:	0f 84 62 10 00 00    	je     0x43366e
  43260c:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  432612:	8b 11                	mov    edx,DWORD PTR [ecx]
  432614:	ff 52 28             	call   DWORD PTR [edx+0x28]
  432617:	d8 1d c8 52 6b 00    	fcomp  DWORD PTR ds:0x6b52c8
  43261d:	c6 44 24 12 01       	mov    BYTE PTR [esp+0x12],0x1
  432622:	df e0                	fnstsw ax
  432624:	f6 c4 01             	test   ah,0x1
  432627:	75 05                	jne    0x43262e
  432629:	c6 44 24 12 00       	mov    BYTE PTR [esp+0x12],0x0
  43262e:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  432634:	8b 01                	mov    eax,DWORD PTR [ecx]
  432636:	ff 50 24             	call   DWORD PTR [eax+0x24]
  432639:	8b 95 08 01 00 00    	mov    edx,DWORD PTR [ebp+0x108]
  43263f:	8b b5 54 02 00 00    	mov    esi,DWORD PTR [ebp+0x254]
  432645:	f7 c2 00 00 01 00    	test   edx,0x10000
  43264b:	8a 8e b4 01 00 00    	mov    cl,BYTE PTR [esi+0x1b4]
  432651:	6a 00                	push   0x0
  432653:	0f 9f 44 24 15       	setg   BYTE PTR [esp+0x15]
  432658:	81 c6 b4 01 00 00    	add    esi,0x1b4
  43265e:	88 8c 24 e8 00 00 00 	mov    BYTE PTR [esp+0xe8],cl
  432665:	8d 8c 24 e8 00 00 00 	lea    ecx,[esp+0xe8]
  43266c:	8a d8                	mov    bl,al
  43266e:	e8 2d 1a fd ff       	call   0x4040a0
  432673:	8b 15 a8 ab 64 00    	mov    edx,DWORD PTR ds:0x64aba8
  432679:	8d 8c 24 e4 00 00 00 	lea    ecx,[esp+0xe4]
  432680:	52                   	push   edx
  432681:	6a 00                	push   0x0
  432683:	56                   	push   esi
  432684:	e8 77 a5 fd ff       	call   0x40cc00
  432689:	84 db                	test   bl,bl
  43268b:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x2
  432692:	02 
  432693:	be 0b 00 00 00       	mov    esi,0xb
  432698:	bf 0e 00 00 00       	mov    edi,0xe
  43269d:	75 20                	jne    0x4326bf
  43269f:	8a 44 24 12          	mov    al,BYTE PTR [esp+0x12]
  4326a3:	84 c0                	test   al,al
  4326a5:	75 18                	jne    0x4326bf
  4326a7:	8a 85 04 01 00 00    	mov    al,BYTE PTR [ebp+0x104]
  4326ad:	84 c0                	test   al,al
  4326af:	74 0e                	je     0x4326bf
  4326b1:	8a 85 71 03 00 00    	mov    al,BYTE PTR [ebp+0x371]
  4326b7:	84 c0                	test   al,al
  4326b9:	0f 84 9d 00 00 00    	je     0x43275c
  4326bf:	8a 44 24 11          	mov    al,BYTE PTR [esp+0x11]
  4326c3:	84 c0                	test   al,al
  4326c5:	75 75                	jne    0x43273c
  4326c7:	8b cd                	mov    ecx,ebp
  4326c9:	e8 52 f1 ff ff       	call   0x431820
  4326ce:	84 db                	test   bl,bl
  4326d0:	74 11                	je     0x4326e3
  4326d2:	89 b5 40 03 00 00    	mov    DWORD PTR [ebp+0x340],esi
  4326d8:	89 b5 44 03 00 00    	mov    DWORD PTR [ebp+0x344],esi
  4326de:	e9 0e 03 00 00       	jmp    0x4329f1
  4326e3:	8a 44 24 12          	mov    al,BYTE PTR [esp+0x12]
  4326e7:	84 c0                	test   al,al
  4326e9:	74 23                	je     0x43270e
  4326eb:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  4326f1:	8b 01                	mov    eax,DWORD PTR [ecx]
  4326f3:	ff 50 28             	call   DWORD PTR [eax+0x28]
  4326f6:	d9 1d c8 52 6b 00    	fstp   DWORD PTR ds:0x6b52c8
  4326fc:	c6 05 45 58 6b 00 00 	mov    BYTE PTR ds:0x6b5845,0x0
  432703:	89 bd 40 03 00 00    	mov    DWORD PTR [ebp+0x340],edi
  432709:	e9 e3 02 00 00       	jmp    0x4329f1
  43270e:	8a 85 04 01 00 00    	mov    al,BYTE PTR [ebp+0x104]
  432714:	84 c0                	test   al,al
  432716:	74 0e                	je     0x432726
  432718:	8a 85 71 03 00 00    	mov    al,BYTE PTR [ebp+0x371]
  43271e:	84 c0                	test   al,al
  432720:	0f 84 cb 02 00 00    	je     0x4329f1
  432726:	b8 01 00 00 00       	mov    eax,0x1
  43272b:	89 85 40 03 00 00    	mov    DWORD PTR [ebp+0x340],eax
  432731:	89 85 44 03 00 00    	mov    DWORD PTR [ebp+0x344],eax
  432737:	e9 b5 02 00 00       	jmp    0x4329f1
  43273c:	8a 44 24 12          	mov    al,BYTE PTR [esp+0x12]
  432740:	84 c0                	test   al,al
  432742:	74 18                	je     0x43275c
  432744:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  43274a:	8b 11                	mov    edx,DWORD PTR [ecx]
  43274c:	ff 52 28             	call   DWORD PTR [edx+0x28]
  43274f:	d9 1d c8 52 6b 00    	fstp   DWORD PTR ds:0x6b52c8
  432755:	c6 05 45 58 6b 00 00 	mov    BYTE PTR ds:0x6b5845,0x0
  43275c:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  432762:	8b 01                	mov    eax,DWORD PTR [ecx]
  432764:	ff 50 30             	call   DWORD PTR [eax+0x30]
  432767:	84 c0                	test   al,al
  432769:	74 1a                	je     0x432785
  43276b:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
  43276f:	b8 06 00 00 00       	mov    eax,0x6
  432774:	89 85 40 03 00 00    	mov    DWORD PTR [ebp+0x340],eax
  43277a:	89 85 44 03 00 00    	mov    DWORD PTR [ebp+0x344],eax
  432780:	e9 ed 00 00 00       	jmp    0x432872
  432785:	a0 46 58 6b 00       	mov    al,ds:0x6b5846
  43278a:	84 c0                	test   al,al
  43278c:	74 07                	je     0x432795
  43278e:	c6 05 46 58 6b 00 00 	mov    BYTE PTR ds:0x6b5846,0x0
  432795:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  43279b:	8b 11                	mov    edx,DWORD PTR [ecx]
  43279d:	ff 52 34             	call   DWORD PTR [edx+0x34]
  4327a0:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
  4327a4:	84 c0                	test   al,al
  4327a6:	74 69                	je     0x432811
  4327a8:	8b 06                	mov    eax,DWORD PTR [esi]
  4327aa:	8b ce                	mov    ecx,esi
  4327ac:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
  4327af:	84 c0                	test   al,al
  4327b1:	75 5e                	jne    0x432811
  4327b3:	8b 16                	mov    edx,DWORD PTR [esi]
  4327b5:	8d 44 24 14          	lea    eax,[esp+0x14]
  4327b9:	50                   	push   eax
  4327ba:	8b ce                	mov    ecx,esi
  4327bc:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4327bf:	d9 00                	fld    DWORD PTR [eax]
  4327c1:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4327c7:	df e0                	fnstsw ax
  4327c9:	f6 c4 40             	test   ah,0x40
  4327cc:	74 43                	je     0x432811
  4327ce:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  4327d2:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4327d8:	df e0                	fnstsw ax
  4327da:	f6 c4 40             	test   ah,0x40
  4327dd:	0f 84 8f 00 00 00    	je     0x432872
  4327e3:	8b 16                	mov    edx,DWORD PTR [esi]
  4327e5:	8d 44 24 14          	lea    eax,[esp+0x14]
  4327e9:	50                   	push   eax
  4327ea:	8b ce                	mov    ecx,esi
  4327ec:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4327ef:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  4327f2:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4327f8:	df e0                	fnstsw ax
  4327fa:	f6 c4 01             	test   ah,0x1
  4327fd:	b8 04 00 00 00       	mov    eax,0x4
  432802:	75 05                	jne    0x432809
  432804:	b8 05 00 00 00       	mov    eax,0x5
  432809:	89 85 40 03 00 00    	mov    DWORD PTR [ebp+0x340],eax
  43280f:	eb 61                	jmp    0x432872
  432811:	8b 16                	mov    edx,DWORD PTR [esi]
  432813:	8b ce                	mov    ecx,esi
  432815:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
  432818:	84 c0                	test   al,al
  43281a:	75 0a                	jne    0x432826
  43281c:	8b 85 54 03 00 00    	mov    eax,DWORD PTR [ebp+0x354]
  432822:	85 c0                	test   eax,eax
  432824:	74 4c                	je     0x432872
  432826:	8b 06                	mov    eax,DWORD PTR [esi]
  432828:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  43282c:	51                   	push   ecx
  43282d:	8b ce                	mov    ecx,esi
  43282f:	ff 50 24             	call   DWORD PTR [eax+0x24]
  432832:	d9 00                	fld    DWORD PTR [eax]
  432834:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  43283a:	df e0                	fnstsw ax
  43283c:	f6 c4 01             	test   ah,0x1
  43283f:	74 0c                	je     0x43284d
  432841:	c7 85 40 03 00 00 09 	mov    DWORD PTR [ebp+0x340],0x9
  432848:	00 00 00 
  43284b:	eb 25                	jmp    0x432872
  43284d:	8b 16                	mov    edx,DWORD PTR [esi]
  43284f:	8d 44 24 14          	lea    eax,[esp+0x14]
  432853:	50                   	push   eax
  432854:	8b ce                	mov    ecx,esi
  432856:	ff 52 24             	call   DWORD PTR [edx+0x24]
  432859:	d9 00                	fld    DWORD PTR [eax]
  43285b:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  432861:	df e0                	fnstsw ax
  432863:	f6 c4 41             	test   ah,0x41
  432866:	75 0a                	jne    0x432872
  432868:	c7 85 40 03 00 00 0a 	mov    DWORD PTR [ebp+0x340],0xa
  43286f:	00 00 00 
  432872:	8b cd                	mov    ecx,ebp
  432874:	e8 27 3b 00 00       	call   0x4363a0
  432879:	8b 16                	mov    edx,DWORD PTR [esi]
  43287b:	8a d8                	mov    bl,al
  43287d:	8b ce                	mov    ecx,esi
  43287f:	88 5c 24 13          	mov    BYTE PTR [esp+0x13],bl
  432883:	ff 52 34             	call   DWORD PTR [edx+0x34]
  432886:	84 c0                	test   al,al
  432888:	75 35                	jne    0x4328bf
  43288a:	a0 46 58 6b 00       	mov    al,ds:0x6b5846
  43288f:	84 c0                	test   al,al
  432891:	75 2c                	jne    0x4328bf
  432893:	39 bd 40 03 00 00    	cmp    DWORD PTR [ebp+0x340],edi
  432899:	74 2c                	je     0x4328c7
  43289b:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  43289f:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4328a5:	df e0                	fnstsw ax
  4328a7:	f6 c4 40             	test   ah,0x40
  4328aa:	74 3a                	je     0x4328e6
  4328ac:	b8 01 00 00 00       	mov    eax,0x1
  4328b1:	89 85 40 03 00 00    	mov    DWORD PTR [ebp+0x340],eax
  4328b7:	89 85 44 03 00 00    	mov    DWORD PTR [ebp+0x344],eax
  4328bd:	eb 27                	jmp    0x4328e6
  4328bf:	39 bd 40 03 00 00    	cmp    DWORD PTR [ebp+0x340],edi
  4328c5:	75 1f                	jne    0x4328e6
  4328c7:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  4328cd:	81 c1 9c 01 00 00    	add    ecx,0x19c
  4328d3:	e8 28 e4 06 00       	call   0x4a0d00
  4328d8:	84 c0                	test   al,al
  4328da:	74 0a                	je     0x4328e6
  4328dc:	c7 85 40 03 00 00 01 	mov    DWORD PTR [ebp+0x340],0x1
  4328e3:	00 00 00 
  4328e6:	8b 8c 24 b0 00 00 00 	mov    ecx,DWORD PTR [esp+0xb0]
  4328ed:	8b 01                	mov    eax,DWORD PTR [ecx]
  4328ef:	ff 50 0c             	call   DWORD PTR [eax+0xc]
  4328f2:	3c 01                	cmp    al,0x1
  4328f4:	0f 85 d7 00 00 00    	jne    0x4329d1
  4328fa:	39 bd 40 03 00 00    	cmp    DWORD PTR [ebp+0x340],edi
  432900:	0f 84 cb 00 00 00    	je     0x4329d1
  432906:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
  43290a:	85 c0                	test   eax,eax
  43290c:	0f 84 bf 00 00 00    	je     0x4329d1
  432912:	8a 85 94 03 00 00    	mov    al,BYTE PTR [ebp+0x394]
  432918:	84 c0                	test   al,al
  43291a:	0f 84 a7 00 00 00    	je     0x4329c7
  432920:	8b 85 90 03 00 00    	mov    eax,DWORD PTR [ebp+0x390]
  432926:	85 c0                	test   eax,eax
  432928:	74 6d                	je     0x432997
  43292a:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  432930:	85 f6                	test   esi,esi
  432932:	75 07                	jne    0x43293b
  432934:	e8 47 9b 08 00       	call   0x4bc480
  432939:	8b f0                	mov    esi,eax
  43293b:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  432941:	3d 00 00 00 80       	cmp    eax,0x80000000
  432946:	75 1e                	jne    0x432966
  432948:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  43294e:	85 c0                	test   eax,eax
  432950:	75 05                	jne    0x432957
  432952:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  432957:	50                   	push   eax
  432958:	e8 b3 85 1d 00       	call   0x60af10
  43295d:	83 c4 04             	add    esp,0x4
  432960:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  432966:	85 c0                	test   eax,eax
  432968:	75 2d                	jne    0x432997
  43296a:	8b 0d 04 c4 64 00    	mov    ecx,DWORD PTR ds:0x64c404
  432970:	51                   	push   ecx
  432971:	8b 8d 90 03 00 00    	mov    ecx,DWORD PTR [ebp+0x390]
  432977:	e8 e4 03 0b 00       	call   0x4e2d60
  43297c:	8b 94 24 38 01 00 00 	mov    edx,DWORD PTR [esp+0x138]
  432983:	8b 84 24 34 01 00 00 	mov    eax,DWORD PTR [esp+0x134]
  43298a:	8b 8d 90 03 00 00    	mov    ecx,DWORD PTR [ebp+0x390]
  432990:	52                   	push   edx
  432991:	50                   	push   eax
  432992:	e8 a9 04 0d 00       	call   0x502e40
  432997:	8b 8d 30 03 00 00    	mov    ecx,DWORD PTR [ebp+0x330]
  43299d:	85 c9                	test   ecx,ecx
  43299f:	74 26                	je     0x4329c7
  4329a1:	6a 01                	push   0x1
  4329a3:	e8 a8 f9 0c 00       	call   0x502350
  4329a8:	8b 85 30 03 00 00    	mov    eax,DWORD PTR [ebp+0x330]
  4329ae:	c6 80 a8 00 00 00 01 	mov    BYTE PTR [eax+0xa8],0x1
  4329b5:	8b 85 30 03 00 00    	mov    eax,DWORD PTR [ebp+0x330]
  4329bb:	d9 05 00 c4 64 00    	fld    DWORD PTR ds:0x64c400
  4329c1:	d9 98 30 01 00 00    	fstp   DWORD PTR [eax+0x130]
  4329c7:	c7 85 40 03 00 00 0f 	mov    DWORD PTR [ebp+0x340],0xf
  4329ce:	00 00 00 
  4329d1:	84 db                	test   bl,bl
  4329d3:	74 1c                	je     0x4329f1
  4329d5:	83 bd 40 03 00 00 06 	cmp    DWORD PTR [ebp+0x340],0x6
  4329dc:	74 13                	je     0x4329f1
  4329de:	a0 46 58 6b 00       	mov    al,ds:0x6b5846
  4329e3:	84 c0                	test   al,al
  4329e5:	75 0a                	jne    0x4329f1
  4329e7:	c7 85 40 03 00 00 0d 	mov    DWORD PTR [ebp+0x340],0xd
  4329ee:	00 00 00 
  4329f1:	8b 85 40 03 00 00    	mov    eax,DWORD PTR [ebp+0x340]
  4329f7:	8b 0d 64 58 6b 00    	mov    ecx,DWORD PTR ds:0x6b5864
  4329fd:	3b c8                	cmp    ecx,eax
  4329ff:	a3                   	.byte 0xa3
