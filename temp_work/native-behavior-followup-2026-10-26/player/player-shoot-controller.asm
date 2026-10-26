
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00432420 <.text+0x31420>:
  432420:	6a ff                	push   0xffffffff
  432422:	68 25 3b 62 00       	push   0x623b25
  432427:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  43242d:	50                   	push   eax
  43242e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  432435:	81 ec 14 01 00 00    	sub    esp,0x114
  43243b:	55                   	push   ebp
  43243c:	8b e9                	mov    ebp,ecx
  43243e:	68 e8 01 00 00       	push   0x1e8
  432443:	68 28 03 69 00       	push   0x690328
  432448:	8d 8c 24 98 00 00 00 	lea    ecx,[esp+0x98]
  43244f:	e8 9c c1 17 00       	call   0x5ae5f0
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
  4329ff:	a3 64 58 6b 00       	mov    ds:0x6b5864,eax
  432a04:	0f 95 c1             	setne  cl
  432a07:	84 c9                	test   cl,cl
  432a09:	0f 84 33 07 00 00    	je     0x433142
  432a0f:	a0 45 58 6b 00       	mov    al,ds:0x6b5845
  432a14:	84 c0                	test   al,al
  432a16:	0f 85 26 07 00 00    	jne    0x433142
  432a1c:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  432a20:	84 c0                	test   al,al
  432a22:	0f 85 1a 07 00 00    	jne    0x433142
  432a28:	8a 85 72 03 00 00    	mov    al,BYTE PTR [ebp+0x372]
  432a2e:	84 c0                	test   al,al
  432a30:	0f 85 1a 07 00 00    	jne    0x433150
  432a36:	8b 85 40 03 00 00    	mov    eax,DWORD PTR [ebp+0x340]
  432a3c:	48                   	dec    eax
  432a3d:	83 f8 0e             	cmp    eax,0xe
  432a40:	0f 87 fc 06 00 00    	ja     0x433142
  432a46:	ff 24 85 58 37 43 00 	jmp    DWORD PTR [eax*4+0x433758]
  432a4d:	8a 4c 24 11          	mov    cl,BYTE PTR [esp+0x11]
  432a51:	8b 35 5c 01 69 00    	mov    esi,DWORD PTR ds:0x69015c
  432a57:	88 8c 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],cl
  432a5e:	6a 00                	push   0x0
  432a60:	8d 8c 24 b8 00 00 00 	lea    ecx,[esp+0xb8]
  432a67:	e8 34 16 fd ff       	call   0x4040a0
  432a6c:	8b fe                	mov    edi,esi
  432a6e:	83 c9 ff             	or     ecx,0xffffffff
  432a71:	33 c0                	xor    eax,eax
  432a73:	6a 01                	push   0x1
  432a75:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432a77:	f7 d1                	not    ecx
  432a79:	49                   	dec    ecx
  432a7a:	8b d9                	mov    ebx,ecx
  432a7c:	8d 8c 24 b8 00 00 00 	lea    ecx,[esp+0xb8]
  432a83:	53                   	push   ebx
  432a84:	e8 b7 ee fc ff       	call   0x401940
  432a89:	84 c0                	test   al,al
  432a8b:	74 24                	je     0x432ab1
  432a8d:	8b bc 24 b8 00 00 00 	mov    edi,DWORD PTR [esp+0xb8]
  432a94:	8b cb                	mov    ecx,ebx
  432a96:	8b d1                	mov    edx,ecx
  432a98:	53                   	push   ebx
  432a99:	c1 e9 02             	shr    ecx,0x2
  432a9c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432a9e:	8b ca                	mov    ecx,edx
  432aa0:	83 e1 03             	and    ecx,0x3
  432aa3:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432aa5:	8d 8c 24 b8 00 00 00 	lea    ecx,[esp+0xb8]
  432aac:	e8 df 16 fd ff       	call   0x404190
  432ab1:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432ab7:	68 00 00 c0 3f       	push   0x3fc00000
  432abc:	8d 84 24 b8 00 00 00 	lea    eax,[esp+0xb8]
  432ac3:	6a 00                	push   0x0
  432ac5:	50                   	push   eax
  432ac6:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x3
  432acd:	03 
  432ace:	e8 6d b7 ff ff       	call   0x42e240
  432ad3:	6a 01                	push   0x1
  432ad5:	8d 8c 24 b8 00 00 00 	lea    ecx,[esp+0xb8]
  432adc:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432ae3:	02 
  432ae4:	e8 b7 15 fd ff       	call   0x4040a0
  432ae9:	e9 54 06 00 00       	jmp    0x433142
  432aee:	8a 4c 24 11          	mov    cl,BYTE PTR [esp+0x11]
  432af2:	8b 35 64 01 69 00    	mov    esi,DWORD PTR ds:0x690164
  432af8:	88 8c 24 d4 00 00 00 	mov    BYTE PTR [esp+0xd4],cl
  432aff:	6a 00                	push   0x0
  432b01:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  432b08:	e8 93 15 fd ff       	call   0x4040a0
  432b0d:	8b fe                	mov    edi,esi
  432b0f:	83 c9 ff             	or     ecx,0xffffffff
  432b12:	33 c0                	xor    eax,eax
  432b14:	6a 01                	push   0x1
  432b16:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432b18:	f7 d1                	not    ecx
  432b1a:	49                   	dec    ecx
  432b1b:	8b d9                	mov    ebx,ecx
  432b1d:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  432b24:	53                   	push   ebx
  432b25:	e8 16 ee fc ff       	call   0x401940
  432b2a:	84 c0                	test   al,al
  432b2c:	74 24                	je     0x432b52
  432b2e:	8b bc 24 d8 00 00 00 	mov    edi,DWORD PTR [esp+0xd8]
  432b35:	8b cb                	mov    ecx,ebx
  432b37:	8b d1                	mov    edx,ecx
  432b39:	53                   	push   ebx
  432b3a:	c1 e9 02             	shr    ecx,0x2
  432b3d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432b3f:	8b ca                	mov    ecx,edx
  432b41:	83 e1 03             	and    ecx,0x3
  432b44:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432b46:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  432b4d:	e8 3e 16 fd ff       	call   0x404190
  432b52:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432b58:	68 cd cc cc 3f       	push   0x3fcccccd
  432b5d:	8d 84 24 d8 00 00 00 	lea    eax,[esp+0xd8]
  432b64:	6a 00                	push   0x0
  432b66:	50                   	push   eax
  432b67:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x4
  432b6e:	04 
  432b6f:	e8 cc b6 ff ff       	call   0x42e240
  432b74:	6a 01                	push   0x1
  432b76:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  432b7d:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432b84:	02 
  432b85:	e8 16 15 fd ff       	call   0x4040a0
  432b8a:	e9 b3 05 00 00       	jmp    0x433142
  432b8f:	8a 4c 24 11          	mov    cl,BYTE PTR [esp+0x11]
  432b93:	8b 35 30 01 69 00    	mov    esi,DWORD PTR ds:0x690130
  432b99:	88 8c 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],cl
  432ba0:	6a 00                	push   0x0
  432ba2:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  432ba9:	e8 f2 14 fd ff       	call   0x4040a0
  432bae:	8b fe                	mov    edi,esi
  432bb0:	83 c9 ff             	or     ecx,0xffffffff
  432bb3:	33 c0                	xor    eax,eax
  432bb5:	6a 01                	push   0x1
  432bb7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432bb9:	f7 d1                	not    ecx
  432bbb:	49                   	dec    ecx
  432bbc:	8b d9                	mov    ebx,ecx
  432bbe:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  432bc5:	53                   	push   ebx
  432bc6:	e8 75 ed fc ff       	call   0x401940
  432bcb:	84 c0                	test   al,al
  432bcd:	74 24                	je     0x432bf3
  432bcf:	8b bc 24 c8 00 00 00 	mov    edi,DWORD PTR [esp+0xc8]
  432bd6:	8b cb                	mov    ecx,ebx
  432bd8:	8b d1                	mov    edx,ecx
  432bda:	53                   	push   ebx
  432bdb:	c1 e9 02             	shr    ecx,0x2
  432bde:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432be0:	8b ca                	mov    ecx,edx
  432be2:	83 e1 03             	and    ecx,0x3
  432be5:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432be7:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  432bee:	e8 9d 15 fd ff       	call   0x404190
  432bf3:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432bf9:	68 00 00 80 3f       	push   0x3f800000
  432bfe:	8d 84 24 c8 00 00 00 	lea    eax,[esp+0xc8]
  432c05:	6a 01                	push   0x1
  432c07:	50                   	push   eax
  432c08:	81 c1 9c 01 00 00    	add    ecx,0x19c
  432c0e:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x5
  432c15:	05 
  432c16:	e8 45 da 06 00       	call   0x4a0660
  432c1b:	6a 01                	push   0x1
  432c1d:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  432c24:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432c2b:	02 
  432c2c:	e8 6f 14 fd ff       	call   0x4040a0
  432c31:	e9 0c 05 00 00       	jmp    0x433142
  432c36:	8a 4c 24 11          	mov    cl,BYTE PTR [esp+0x11]
  432c3a:	8b 35 38 01 69 00    	mov    esi,DWORD PTR ds:0x690138
  432c40:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  432c44:	6a 00                	push   0x0
  432c46:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  432c4a:	e8 51 14 fd ff       	call   0x4040a0
  432c4f:	8b fe                	mov    edi,esi
  432c51:	83 c9 ff             	or     ecx,0xffffffff
  432c54:	33 c0                	xor    eax,eax
  432c56:	6a 01                	push   0x1
  432c58:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432c5a:	f7 d1                	not    ecx
  432c5c:	49                   	dec    ecx
  432c5d:	8b d9                	mov    ebx,ecx
  432c5f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  432c63:	53                   	push   ebx
  432c64:	e8 d7 ec fc ff       	call   0x401940
  432c69:	84 c0                	test   al,al
  432c6b:	74 1e                	je     0x432c8b
  432c6d:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  432c71:	8b cb                	mov    ecx,ebx
  432c73:	8b d1                	mov    edx,ecx
  432c75:	53                   	push   ebx
  432c76:	c1 e9 02             	shr    ecx,0x2
  432c79:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432c7b:	8b ca                	mov    ecx,edx
  432c7d:	83 e1 03             	and    ecx,0x3
  432c80:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432c82:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  432c86:	e8 05 15 fd ff       	call   0x404190
  432c8b:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432c91:	68 cd cc 0c 40       	push   0x400ccccd
  432c96:	8d 44 24 28          	lea    eax,[esp+0x28]
  432c9a:	6a 01                	push   0x1
  432c9c:	50                   	push   eax
  432c9d:	81 c1 9c 01 00 00    	add    ecx,0x19c
  432ca3:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x6
  432caa:	06 
  432cab:	e8 b0 d9 06 00       	call   0x4a0660
  432cb0:	6a 01                	push   0x1
  432cb2:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  432cb6:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432cbd:	02 
  432cbe:	e8 dd 13 fd ff       	call   0x4040a0
  432cc3:	e9 7a 04 00 00       	jmp    0x433142
  432cc8:	8a 4c 24 11          	mov    cl,BYTE PTR [esp+0x11]
  432ccc:	8b 35 34 01 69 00    	mov    esi,DWORD PTR ds:0x690134
  432cd2:	88 4c 24 58          	mov    BYTE PTR [esp+0x58],cl
  432cd6:	6a 00                	push   0x0
  432cd8:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  432cdc:	e8 bf 13 fd ff       	call   0x4040a0
  432ce1:	8b fe                	mov    edi,esi
  432ce3:	83 c9 ff             	or     ecx,0xffffffff
  432ce6:	33 c0                	xor    eax,eax
  432ce8:	6a 01                	push   0x1
  432cea:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432cec:	f7 d1                	not    ecx
  432cee:	49                   	dec    ecx
  432cef:	8b d9                	mov    ebx,ecx
  432cf1:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  432cf5:	53                   	push   ebx
  432cf6:	e8 45 ec fc ff       	call   0x401940
  432cfb:	84 c0                	test   al,al
  432cfd:	74 20                	je     0x432d1f
  432cff:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
  432d03:	8b cb                	mov    ecx,ebx
  432d05:	8b d1                	mov    edx,ecx
  432d07:	c1 e9 02             	shr    ecx,0x2
  432d0a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432d0c:	8b ca                	mov    ecx,edx
  432d0e:	83 e1 03             	and    ecx,0x3
  432d11:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432d13:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  432d17:	89 5c 24 60          	mov    DWORD PTR [esp+0x60],ebx
  432d1b:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  432d1f:	68 00 00 80 3f       	push   0x3f800000
  432d24:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  432d28:	6a 01                	push   0x1
  432d2a:	51                   	push   ecx
  432d2b:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432d31:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x7
  432d38:	07 
  432d39:	81 c1 9c 01 00 00    	add    ecx,0x19c
  432d3f:	e8 1c d9 06 00       	call   0x4a0660
  432d44:	6a 01                	push   0x1
  432d46:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  432d4a:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432d51:	02 
  432d52:	e8 49 13 fd ff       	call   0x4040a0
  432d57:	e9 e6 03 00 00       	jmp    0x433142
  432d5c:	8a 54 24 11          	mov    dl,BYTE PTR [esp+0x11]
  432d60:	8b 35 40 01 69 00    	mov    esi,DWORD PTR ds:0x690140
  432d66:	6a 00                	push   0x0
  432d68:	8d 8c 24 a4 00 00 00 	lea    ecx,[esp+0xa4]
  432d6f:	88 94 24 a4 00 00 00 	mov    BYTE PTR [esp+0xa4],dl
  432d76:	e8 25 13 fd ff       	call   0x4040a0
  432d7b:	8b fe                	mov    edi,esi
  432d7d:	83 c9 ff             	or     ecx,0xffffffff
  432d80:	33 c0                	xor    eax,eax
  432d82:	6a 01                	push   0x1
  432d84:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432d86:	f7 d1                	not    ecx
  432d88:	49                   	dec    ecx
  432d89:	8b d9                	mov    ebx,ecx
  432d8b:	8d 8c 24 a4 00 00 00 	lea    ecx,[esp+0xa4]
  432d92:	53                   	push   ebx
  432d93:	e8 a8 eb fc ff       	call   0x401940
  432d98:	84 c0                	test   al,al
  432d9a:	74 29                	je     0x432dc5
  432d9c:	8b bc 24 a4 00 00 00 	mov    edi,DWORD PTR [esp+0xa4]
  432da3:	8b cb                	mov    ecx,ebx
  432da5:	8b c1                	mov    eax,ecx
  432da7:	c1 e9 02             	shr    ecx,0x2
  432daa:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432dac:	8b c8                	mov    ecx,eax
  432dae:	83 e1 03             	and    ecx,0x3
  432db1:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432db3:	8b 8c 24 a4 00 00 00 	mov    ecx,DWORD PTR [esp+0xa4]
  432dba:	89 9c 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],ebx
  432dc1:	c6 04 19 00          	mov    BYTE PTR [ecx+ebx*1],0x0
  432dc5:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432dcb:	68 33 33 b3 3f       	push   0x3fb33333
  432dd0:	8d 94 24 a4 00 00 00 	lea    edx,[esp+0xa4]
  432dd7:	6a 01                	push   0x1
  432dd9:	52                   	push   edx
  432dda:	81 c1 9c 01 00 00    	add    ecx,0x19c
  432de0:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x8
  432de7:	08 
  432de8:	e8 73 d8 06 00       	call   0x4a0660
  432ded:	6a 01                	push   0x1
  432def:	8d 8c 24 a4 00 00 00 	lea    ecx,[esp+0xa4]
  432df6:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432dfd:	02 
  432dfe:	e8 9d 12 fd ff       	call   0x4040a0
  432e03:	c6 05 46 58 6b 00 01 	mov    BYTE PTR ds:0x6b5846,0x1
  432e0a:	8a 85 70 03 00 00    	mov    al,BYTE PTR [ebp+0x370]
  432e10:	84 c0                	test   al,al
  432e12:	0f 84 2a 03 00 00    	je     0x433142
  432e18:	8a 44 24 11          	mov    al,BYTE PTR [esp+0x11]
  432e1c:	8b 35 48 01 69 00    	mov    esi,DWORD PTR ds:0x690148
  432e22:	6a 00                	push   0x0
  432e24:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  432e2b:	88 84 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],al
  432e32:	e8 69 12 fd ff       	call   0x4040a0
  432e37:	8b fe                	mov    edi,esi
  432e39:	83 c9 ff             	or     ecx,0xffffffff
  432e3c:	33 c0                	xor    eax,eax
  432e3e:	6a 01                	push   0x1
  432e40:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432e42:	f7 d1                	not    ecx
  432e44:	49                   	dec    ecx
  432e45:	8b d9                	mov    ebx,ecx
  432e47:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  432e4e:	53                   	push   ebx
  432e4f:	e8 ec ea fc ff       	call   0x401940
  432e54:	84 c0                	test   al,al
  432e56:	74 29                	je     0x432e81
  432e58:	8b bc 24 90 00 00 00 	mov    edi,DWORD PTR [esp+0x90]
  432e5f:	8b cb                	mov    ecx,ebx
  432e61:	8b d1                	mov    edx,ecx
  432e63:	c1 e9 02             	shr    ecx,0x2
  432e66:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432e68:	8b ca                	mov    ecx,edx
  432e6a:	83 e1 03             	and    ecx,0x3
  432e6d:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432e6f:	8b 84 24 90 00 00 00 	mov    eax,DWORD PTR [esp+0x90]
  432e76:	89 9c 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],ebx
  432e7d:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  432e81:	68 66 66 a6 3f       	push   0x3fa66666
  432e86:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  432e8d:	6a 01                	push   0x1
  432e8f:	51                   	push   ecx
  432e90:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432e96:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x9
  432e9d:	09 
  432e9e:	e8 9d b3 ff ff       	call   0x42e240
  432ea3:	6a 01                	push   0x1
  432ea5:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  432eac:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432eb3:	02 
  432eb4:	e8 e7 11 fd ff       	call   0x4040a0
  432eb9:	c6 85 70 03 00 00 00 	mov    BYTE PTR [ebp+0x370],0x0
  432ec0:	e9 7d 02 00 00       	jmp    0x433142
  432ec5:	8a 54 24 11          	mov    dl,BYTE PTR [esp+0x11]
  432ec9:	8b 35 50 01 69 00    	mov    esi,DWORD PTR ds:0x690150
  432ecf:	6a 00                	push   0x0
  432ed1:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  432ed5:	88 54 24 6c          	mov    BYTE PTR [esp+0x6c],dl
  432ed9:	e8 c2 11 fd ff       	call   0x4040a0
  432ede:	8b fe                	mov    edi,esi
  432ee0:	83 c9 ff             	or     ecx,0xffffffff
  432ee3:	33 c0                	xor    eax,eax
  432ee5:	6a 01                	push   0x1
  432ee7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432ee9:	f7 d1                	not    ecx
  432eeb:	49                   	dec    ecx
  432eec:	8b d9                	mov    ebx,ecx
  432eee:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  432ef2:	53                   	push   ebx
  432ef3:	e8 48 ea fc ff       	call   0x401940
  432ef8:	84 c0                	test   al,al
  432efa:	74 20                	je     0x432f1c
  432efc:	8b 7c 24 6c          	mov    edi,DWORD PTR [esp+0x6c]
  432f00:	8b cb                	mov    ecx,ebx
  432f02:	8b c1                	mov    eax,ecx
  432f04:	c1 e9 02             	shr    ecx,0x2
  432f07:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432f09:	8b c8                	mov    ecx,eax
  432f0b:	83 e1 03             	and    ecx,0x3
  432f0e:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432f10:	8b 4c 24 6c          	mov    ecx,DWORD PTR [esp+0x6c]
  432f14:	89 5c 24 70          	mov    DWORD PTR [esp+0x70],ebx
  432f18:	c6 04 19 00          	mov    BYTE PTR [ecx+ebx*1],0x0
  432f1c:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432f22:	68 9a 99 19 40       	push   0x4019999a
  432f27:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  432f2b:	6a 01                	push   0x1
  432f2d:	52                   	push   edx
  432f2e:	81 c1 9c 01 00 00    	add    ecx,0x19c
  432f34:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0xa
  432f3b:	0a 
  432f3c:	e8 1f d7 06 00       	call   0x4a0660
  432f41:	6a 01                	push   0x1
  432f43:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  432f47:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432f4e:	02 
  432f4f:	e8 4c 11 fd ff       	call   0x4040a0
  432f54:	e9 e9 01 00 00       	jmp    0x433142
  432f59:	8a 44 24 11          	mov    al,BYTE PTR [esp+0x11]
  432f5d:	8b 35 54 01 69 00    	mov    esi,DWORD PTR ds:0x690154
  432f63:	6a 00                	push   0x0
  432f65:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  432f6c:	88 84 24 80 00 00 00 	mov    BYTE PTR [esp+0x80],al
  432f73:	e8 28 11 fd ff       	call   0x4040a0
  432f78:	8b fe                	mov    edi,esi
  432f7a:	83 c9 ff             	or     ecx,0xffffffff
  432f7d:	33 c0                	xor    eax,eax
  432f7f:	6a 01                	push   0x1
  432f81:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  432f83:	f7 d1                	not    ecx
  432f85:	49                   	dec    ecx
  432f86:	8b d9                	mov    ebx,ecx
  432f88:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  432f8f:	53                   	push   ebx
  432f90:	e8 ab e9 fc ff       	call   0x401940
  432f95:	84 c0                	test   al,al
  432f97:	74 29                	je     0x432fc2
  432f99:	8b bc 24 80 00 00 00 	mov    edi,DWORD PTR [esp+0x80]
  432fa0:	8b cb                	mov    ecx,ebx
  432fa2:	8b d1                	mov    edx,ecx
  432fa4:	c1 e9 02             	shr    ecx,0x2
  432fa7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  432fa9:	8b ca                	mov    ecx,edx
  432fab:	83 e1 03             	and    ecx,0x3
  432fae:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  432fb0:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
  432fb7:	89 9c 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],ebx
  432fbe:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  432fc2:	68 9a 99 19 40       	push   0x4019999a
  432fc7:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  432fce:	6a 01                	push   0x1
  432fd0:	51                   	push   ecx
  432fd1:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  432fd7:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0xb
  432fde:	0b 
  432fdf:	81 c1 9c 01 00 00    	add    ecx,0x19c
  432fe5:	e8 76 d6 06 00       	call   0x4a0660
  432fea:	6a 01                	push   0x1
  432fec:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  432ff3:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  432ffa:	02 
  432ffb:	e8 a0 10 fd ff       	call   0x4040a0
  433000:	e9 3d 01 00 00       	jmp    0x433142
  433005:	8a 44 24 11          	mov    al,BYTE PTR [esp+0x11]
  433009:	8b 15 60 01 69 00    	mov    edx,DWORD PTR ds:0x690160
  43300f:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  433013:	33 db                	xor    ebx,ebx
  433015:	8b fa                	mov    edi,edx
  433017:	83 c9 ff             	or     ecx,0xffffffff
  43301a:	33 c0                	xor    eax,eax
  43301c:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  433020:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  433024:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  433028:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  43302a:	f7 d1                	not    ecx
  43302c:	49                   	dec    ecx
  43302d:	51                   	push   ecx
  43302e:	52                   	push   edx
  43302f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433033:	e8 b8 10 fd ff       	call   0x4040f0
  433038:	53                   	push   ebx
  433039:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  43303d:	53                   	push   ebx
  43303e:	51                   	push   ecx
  43303f:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  433045:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0xc
  43304c:	0c 
  43304d:	81 c1 9c 01 00 00    	add    ecx,0x19c
  433053:	e8 08 d6 06 00       	call   0x4a0660
  433058:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  43305c:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x2
  433063:	02 
  433064:	3b c3                	cmp    eax,ebx
  433066:	74 1d                	je     0x433085
  433068:	8d 48 ff             	lea    ecx,[eax-0x1]
  43306b:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  43306e:	84 c0                	test   al,al
  433070:	74 0a                	je     0x43307c
  433072:	3c ff                	cmp    al,0xff
  433074:	74 06                	je     0x43307c
  433076:	fe c8                	dec    al
  433078:	88 01                	mov    BYTE PTR [ecx],al
  43307a:	eb 09                	jmp    0x433085
  43307c:	51                   	push   ecx
  43307d:	e8 6e b5 1c 00       	call   0x5fe5f0
  433082:	83 c4 04             	add    esp,0x4
  433085:	8b cd                	mov    ecx,ebp
  433087:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  43308b:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  43308f:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  433093:	e8 98 1d 00 00       	call   0x434e30
  433098:	8b f0                	mov    esi,eax
  43309a:	8b cd                	mov    ecx,ebp
  43309c:	56                   	push   esi
  43309d:	e8 5e e9 ff ff       	call   0x431a00
  4330a2:	83 fe 0b             	cmp    esi,0xb
  4330a5:	8b cd                	mov    ecx,ebp
  4330a7:	75 07                	jne    0x4330b0
  4330a9:	e8 92 3a 00 00       	call   0x436b40
  4330ae:	eb 05                	jmp    0x4330b5
  4330b0:	e8 7b 39 00 00       	call   0x436a30
  4330b5:	83 bc 24 34 01 00 00 	cmp    DWORD PTR [esp+0x134],0xffffffff
  4330bc:	ff 
  4330bd:	75 69                	jne    0x433128
  4330bf:	8a 54 24 11          	mov    dl,BYTE PTR [esp+0x11]
  4330c3:	53                   	push   ebx
  4330c4:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4330c8:	88 54 24 4c          	mov    BYTE PTR [esp+0x4c],dl
  4330cc:	e8 cf 0f fd ff       	call   0x4040a0
  4330d1:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4330d6:	83 c9 ff             	or     ecx,0xffffffff
  4330d9:	33 c0                	xor    eax,eax
  4330db:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4330dd:	f7 d1                	not    ecx
  4330df:	49                   	dec    ecx
  4330e0:	51                   	push   ecx
  4330e1:	68 70 3f 6b 00       	push   0x6b3f70
  4330e6:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4330ea:	e8 01 10 fd ff       	call   0x4040f0
  4330ef:	8d 44 24 48          	lea    eax,[esp+0x48]
  4330f3:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0xd
  4330fa:	0d 
  4330fb:	50                   	push   eax
  4330fc:	68 8a 00 00 00       	push   0x8a
  433101:	68 2c e2 68 00       	push   0x68e22c
  433106:	68 14 e2 68 00       	push   0x68e214
  43310b:	e8 e0 d6 16 00       	call   0x5a07f0
  433110:	ff d0                	call   eax
  433112:	83 c4 10             	add    esp,0x10
  433115:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  433119:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x2
  433120:	02 
  433121:	6a 01                	push   0x1
  433123:	e8 78 0f fd ff       	call   0x4040a0
  433128:	db 84 24 34 01 00 00 	fild   DWORD PTR [esp+0x134]
  43312f:	89 9d 6c 03 00 00    	mov    DWORD PTR [ebp+0x36c],ebx
  433135:	d9 9d 68 03 00 00    	fstp   DWORD PTR [ebp+0x368]
  43313b:	c6 05 45 58 6b 00 01 	mov    BYTE PTR ds:0x6b5845,0x1
  433142:	8a 85 72 03 00 00    	mov    al,BYTE PTR [ebp+0x372]
  433148:	84 c0                	test   al,al
  43314a:	0f 84 75 01 00 00    	je     0x4332c5
  433150:	8b 84 24 e8 00 00 00 	mov    eax,DWORD PTR [esp+0xe8]
  433157:	85 c0                	test   eax,eax
  433159:	75 05                	jne    0x433160
  43315b:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  433160:	8b 15 44 01 69 00    	mov    edx,DWORD PTR ds:0x690144
  433166:	8b f2                	mov    esi,edx
  433168:	8a 18                	mov    bl,BYTE PTR [eax]
  43316a:	8a cb                	mov    cl,bl
  43316c:	3a 1e                	cmp    bl,BYTE PTR [esi]
  43316e:	75 1e                	jne    0x43318e
  433170:	84 c9                	test   cl,cl
  433172:	74 14                	je     0x433188
  433174:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
  433177:	8a cb                	mov    cl,bl
  433179:	3a 5e 01             	cmp    bl,BYTE PTR [esi+0x1]
  43317c:	75 10                	jne    0x43318e
  43317e:	83 c0 02             	add    eax,0x2
  433181:	83 c6 02             	add    esi,0x2
  433184:	84 c9                	test   cl,cl
  433186:	75 e0                	jne    0x433168
  433188:	33 f6                	xor    esi,esi
  43318a:	33 c0                	xor    eax,eax
  43318c:	eb 07                	jmp    0x433195
  43318e:	1b c0                	sbb    eax,eax
  433190:	83 d8 ff             	sbb    eax,0xffffffff
  433193:	33 f6                	xor    esi,esi
  433195:	3b c6                	cmp    eax,esi
  433197:	0f 85 b0 00 00 00    	jne    0x43324d
  43319d:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  4331a3:	81 c1 9c 01 00 00    	add    ecx,0x19c
  4331a9:	e8 52 db 06 00       	call   0x4a0d00
  4331ae:	84 c0                	test   al,al
  4331b0:	0f 84 11 01 00 00    	je     0x4332c7
  4331b6:	8a 4c 24 11          	mov    cl,BYTE PTR [esp+0x11]
  4331ba:	8b 15 30 01 69 00    	mov    edx,DWORD PTR ds:0x690130
  4331c0:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  4331c4:	8b fa                	mov    edi,edx
  4331c6:	83 c9 ff             	or     ecx,0xffffffff
  4331c9:	33 c0                	xor    eax,eax
  4331cb:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  4331cf:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  4331d3:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  4331d7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4331d9:	f7 d1                	not    ecx
  4331db:	49                   	dec    ecx
  4331dc:	51                   	push   ecx
  4331dd:	52                   	push   edx
  4331de:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4331e2:	e8 09 0f fd ff       	call   0x4040f0
  4331e7:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  4331ed:	68 9a 99 d9 3f       	push   0x3fd9999a
  4331f2:	8d 54 24 28          	lea    edx,[esp+0x28]
  4331f6:	6a 01                	push   0x1
  4331f8:	52                   	push   edx
  4331f9:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0xe
  433200:	0e 
  433201:	e8 3a b0 ff ff       	call   0x42e240
  433206:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  43320a:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x2
  433211:	02 
  433212:	3b c6                	cmp    eax,esi
  433214:	74 1d                	je     0x433233
  433216:	8d 48 ff             	lea    ecx,[eax-0x1]
  433219:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  43321c:	84 c0                	test   al,al
  43321e:	74 0a                	je     0x43322a
  433220:	3c ff                	cmp    al,0xff
  433222:	74 06                	je     0x43322a
  433224:	fe c8                	dec    al
  433226:	88 01                	mov    BYTE PTR [ecx],al
  433228:	eb 09                	jmp    0x433233
  43322a:	51                   	push   ecx
  43322b:	e8 c0 b3 1c 00       	call   0x5fe5f0
  433230:	83 c4 04             	add    esp,0x4
  433233:	c6 85 04 01 00 00 01 	mov    BYTE PTR [ebp+0x104],0x1
  43323a:	c7 85 40 03 00 00 01 	mov    DWORD PTR [ebp+0x340],0x1
  433241:	00 00 00 
  433244:	c6 85 72 03 00 00 00 	mov    BYTE PTR [ebp+0x372],0x0
  43324b:	eb 7a                	jmp    0x4332c7
  43324d:	8a 44 24 11          	mov    al,BYTE PTR [esp+0x11]
  433251:	8b fa                	mov    edi,edx
  433253:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  433257:	83 c9 ff             	or     ecx,0xffffffff
  43325a:	33 c0                	xor    eax,eax
  43325c:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  433260:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  433264:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  433268:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  43326a:	f7 d1                	not    ecx
  43326c:	49                   	dec    ecx
  43326d:	51                   	push   ecx
  43326e:	52                   	push   edx
  43326f:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  433273:	e8 78 0e fd ff       	call   0x4040f0
  433278:	68 00 00 80 3f       	push   0x3f800000
  43327d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  433281:	56                   	push   esi
  433282:	51                   	push   ecx
  433283:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  433289:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0xf
  433290:	0f 
  433291:	e8 aa af ff ff       	call   0x42e240
  433296:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  43329a:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x2
  4332a1:	02 
  4332a2:	3b c6                	cmp    eax,esi
  4332a4:	74 21                	je     0x4332c7
  4332a6:	8d 48 ff             	lea    ecx,[eax-0x1]
  4332a9:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4332ac:	84 c0                	test   al,al
  4332ae:	74 0a                	je     0x4332ba
  4332b0:	3c ff                	cmp    al,0xff
  4332b2:	74 06                	je     0x4332ba
  4332b4:	fe c8                	dec    al
  4332b6:	88 01                	mov    BYTE PTR [ecx],al
  4332b8:	eb 0d                	jmp    0x4332c7
  4332ba:	51                   	push   ecx
  4332bb:	e8 30 b3 1c 00       	call   0x5fe5f0
  4332c0:	83 c4 04             	add    esp,0x4
  4332c3:	eb 02                	jmp    0x4332c7
  4332c5:	33 f6                	xor    esi,esi
  4332c7:	a0 45 58 6b 00       	mov    al,ds:0x6b5845
  4332cc:	84 c0                	test   al,al
  4332ce:	74 68                	je     0x433338
  4332d0:	8a 85 04 01 00 00    	mov    al,BYTE PTR [ebp+0x104]
  4332d6:	84 c0                	test   al,al
  4332d8:	74 5e                	je     0x433338
  4332da:	8a 85 71 03 00 00    	mov    al,BYTE PTR [ebp+0x371]
  4332e0:	84 c0                	test   al,al
  4332e2:	75 54                	jne    0x433338
  4332e4:	8b 95 54 03 00 00    	mov    edx,DWORD PTR [ebp+0x354]
  4332ea:	8b 84 24 34 01 00 00 	mov    eax,DWORD PTR [esp+0x134]
  4332f1:	3b d6                	cmp    edx,esi
  4332f3:	50                   	push   eax
  4332f4:	0f 95 c2             	setne  dl
  4332f7:	8b cd                	mov    ecx,ebp
  4332f9:	88 95 64 03 00 00    	mov    BYTE PTR [ebp+0x364],dl
  4332ff:	e8 fc 15 00 00       	call   0x434900
  433304:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  43330a:	81 c1 9c 01 00 00    	add    ecx,0x19c
  433310:	e8 4b dd 06 00       	call   0x4a1060
  433315:	dc 1d 68 c5 64 00    	fcomp  QWORD PTR ds:0x64c568
  43331b:	df e0                	fnstsw ax
  43331d:	f6 c4 01             	test   ah,0x1
  433320:	75 5b                	jne    0x43337d
  433322:	8b cd                	mov    ecx,ebp
  433324:	e8 f7 e4 ff ff       	call   0x431820
  433329:	89 35 64 58 6b 00    	mov    DWORD PTR ds:0x6b5864,esi
  43332f:	c6 05 45 58 6b 00 00 	mov    BYTE PTR ds:0x6b5845,0x0
  433336:	eb 45                	jmp    0x43337d
  433338:	8b 8c 24 34 01 00 00 	mov    ecx,DWORD PTR [esp+0x134]
  43333f:	51                   	push   ecx
  433340:	8b cd                	mov    ecx,ebp
  433342:	e8 69 0e 00 00       	call   0x4341b0
  433347:	84 c0                	test   al,al
  433349:	75 32                	jne    0x43337d
  43334b:	a2 45 58 6b 00       	mov    ds:0x6b5845,al
  433350:	8b 8d 38 03 00 00    	mov    ecx,DWORD PTR [ebp+0x338]
  433356:	56                   	push   esi
  433357:	88 85 64 03 00 00    	mov    BYTE PTR [ebp+0x364],al
  43335d:	e8 7e 09 02 00       	call   0x453ce0
  433362:	a0 44 58 6b 00       	mov    al,ds:0x6b5844
  433367:	84 c0                	test   al,al
  433369:	74 12                	je     0x43337d
  43336b:	8b 8d 50 02 00 00    	mov    ecx,DWORD PTR [ebp+0x250]
  433371:	e8 1a 5c 02 00       	call   0x458f90
  433376:	c6 05 44 58 6b 00 00 	mov    BYTE PTR ds:0x6b5844,0x0
  43337d:	83 bd 40 03 00 00 06 	cmp    DWORD PTR [ebp+0x340],0x6
  433384:	0f 84 6c 01 00 00    	je     0x4334f6
  43338a:	a0 46 58 6b 00       	mov    al,ds:0x6b5846
  43338f:	84 c0                	test   al,al
  433391:	0f 85 5f 01 00 00    	jne    0x4334f6
  433397:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  43339b:	84 c0                	test   al,al
  43339d:	0f 84 a2 00 00 00    	je     0x433445
  4333a3:	8b 35 4c 01 69 00    	mov    esi,DWORD PTR ds:0x69014c
  4333a9:	8a 54 24 11          	mov    dl,BYTE PTR [esp+0x11]
  4333ad:	33 c0                	xor    eax,eax
  4333af:	8b fe                	mov    edi,esi
  4333b1:	83 c9 ff             	or     ecx,0xffffffff
  4333b4:	88 54 24 14          	mov    BYTE PTR [esp+0x14],dl
  4333b8:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  4333bc:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  4333c0:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  4333c4:	6a 01                	push   0x1
  4333c6:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4333c8:	f7 d1                	not    ecx
  4333ca:	49                   	dec    ecx
  4333cb:	8b d9                	mov    ebx,ecx
  4333cd:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4333d1:	53                   	push   ebx
  4333d2:	e8 69 e5 fc ff       	call   0x401940
  4333d7:	84 c0                	test   al,al
  4333d9:	74 1e                	je     0x4333f9
  4333db:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4333df:	8b cb                	mov    ecx,ebx
  4333e1:	8b c1                	mov    eax,ecx
  4333e3:	53                   	push   ebx
  4333e4:	c1 e9 02             	shr    ecx,0x2
  4333e7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4333e9:	8b c8                	mov    ecx,eax
  4333eb:	83 e1 03             	and    ecx,0x3
  4333ee:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4333f0:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4333f4:	e8 97 0d fd ff       	call   0x404190
  4333f9:	68 00 00 c0 3f       	push   0x3fc00000
  4333fe:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433402:	6a 00                	push   0x0
  433404:	51                   	push   ecx
  433405:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  43340b:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x10
  433412:	10 
  433413:	e8 28 ae ff ff       	call   0x42e240
  433418:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  43341c:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x2
  433423:	02 
  433424:	85 c0                	test   eax,eax
  433426:	74 1d                	je     0x433445
  433428:	8d 48 ff             	lea    ecx,[eax-0x1]
  43342b:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  43342e:	84 c0                	test   al,al
  433430:	74 0a                	je     0x43343c
  433432:	3c ff                	cmp    al,0xff
  433434:	74 06                	je     0x43343c
  433436:	fe c8                	dec    al
  433438:	88 01                	mov    BYTE PTR [ecx],al
  43343a:	eb 09                	jmp    0x433445
  43343c:	51                   	push   ecx
  43343d:	e8 ae b1 1c 00       	call   0x5fe5f0
  433442:	83 c4 04             	add    esp,0x4
  433445:	83 bd 4c 03 00 00 0c 	cmp    DWORD PTR [ebp+0x34c],0xc
  43344c:	0f 85 a4 00 00 00    	jne    0x4334f6
  433452:	8b 35 68 01 69 00    	mov    esi,DWORD PTR ds:0x690168
  433458:	8a 54 24 11          	mov    dl,BYTE PTR [esp+0x11]
  43345c:	33 c0                	xor    eax,eax
  43345e:	8b fe                	mov    edi,esi
  433460:	83 c9 ff             	or     ecx,0xffffffff
  433463:	88 54 24 14          	mov    BYTE PTR [esp+0x14],dl
  433467:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  43346b:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  43346f:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  433473:	6a 01                	push   0x1
  433475:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433477:	f7 d1                	not    ecx
  433479:	49                   	dec    ecx
  43347a:	8b d9                	mov    ebx,ecx
  43347c:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433480:	53                   	push   ebx
  433481:	e8 ba e4 fc ff       	call   0x401940
  433486:	84 c0                	test   al,al
  433488:	74 20                	je     0x4334aa
  43348a:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  43348e:	8b cb                	mov    ecx,ebx
  433490:	8b c1                	mov    eax,ecx
  433492:	c1 e9 02             	shr    ecx,0x2
  433495:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  433497:	8b c8                	mov    ecx,eax
  433499:	83 e1 03             	and    ecx,0x3
  43349c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  43349e:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  4334a2:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  4334a6:	c6 04 19 00          	mov    BYTE PTR [ecx+ebx*1],0x0
  4334aa:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  4334b0:	68 00 00 c0 3f       	push   0x3fc00000
  4334b5:	8d 54 24 18          	lea    edx,[esp+0x18]
  4334b9:	6a 00                	push   0x0
  4334bb:	52                   	push   edx
  4334bc:	c6 84 24 38 01 00 00 	mov    BYTE PTR [esp+0x138],0x11
  4334c3:	11 
  4334c4:	e8 77 ad ff ff       	call   0x42e240
  4334c9:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4334cd:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x2
  4334d4:	02 
  4334d5:	85 c0                	test   eax,eax
  4334d7:	74 1d                	je     0x4334f6
  4334d9:	8d 48 ff             	lea    ecx,[eax-0x1]
  4334dc:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4334df:	84 c0                	test   al,al
  4334e1:	74 0a                	je     0x4334ed
  4334e3:	3c ff                	cmp    al,0xff
  4334e5:	74 06                	je     0x4334ed
  4334e7:	fe c8                	dec    al
  4334e9:	88 01                	mov    BYTE PTR [ecx],al
  4334eb:	eb 09                	jmp    0x4334f6
  4334ed:	51                   	push   ecx
  4334ee:	e8 fd b0 1c 00       	call   0x5fe5f0
  4334f3:	83 c4 04             	add    esp,0x4
  4334f6:	8d 85 98 01 00 00    	lea    eax,[ebp+0x198]
  4334fc:	8b 8d 98 01 00 00    	mov    ecx,DWORD PTR [ebp+0x198]
  433502:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
  433506:	8d 8d d0 01 00 00    	lea    ecx,[ebp+0x1d0]
  43350c:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  43350f:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  433513:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  433516:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  43351a:	e8 01 15 12 00       	call   0x554a20
  43351f:	d9 40 04             	fld    DWORD PTR [eax+0x4]
  433522:	d8 85 9c 01 00 00    	fadd   DWORD PTR [ebp+0x19c]
  433528:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  43352e:	8d 44 24 14          	lea    eax,[esp+0x14]
  433532:	50                   	push   eax
  433533:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
  433537:	8b 11                	mov    edx,DWORD PTR [ecx]
  433539:	ff 52 28             	call   DWORD PTR [edx+0x28]
  43353c:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  43353f:	8d 54 24 38          	lea    edx,[esp+0x38]
  433543:	51                   	push   ecx
  433544:	8d 84 24 f8 00 00 00 	lea    eax,[esp+0xf8]
  43354b:	52                   	push   edx
  43354c:	50                   	push   eax
  43354d:	e8 6e d5 ff ff       	call   0x430ac0
  433552:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  433558:	83 c4 0c             	add    esp,0xc
  43355b:	e8 f0 af ff ff       	call   0x42e550
  433560:	84 c0                	test   al,al
  433562:	0f 85 bb 00 00 00    	jne    0x433623
  433568:	8b 9d 54 02 00 00    	mov    ebx,DWORD PTR [ebp+0x254]
  43356e:	b9 0c 00 00 00       	mov    ecx,0xc
  433573:	8d b4 24 f4 00 00 00 	lea    esi,[esp+0xf4]
  43357a:	6a 01                	push   0x1
  43357c:	8d bb 68 01 00 00    	lea    edi,[ebx+0x168]
  433582:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  433584:	8b cb                	mov    ecx,ebx
  433586:	e8 55 a0 06 00       	call   0x49d5e0
  43358b:	8b 83 14 01 00 00    	mov    eax,DWORD PTR [ebx+0x114]
  433591:	c6 83 98 01 00 00 01 	mov    BYTE PTR [ebx+0x198],0x1
  433598:	85 c0                	test   eax,eax
  43359a:	75 6a                	jne    0x433606
  43359c:	8a 4c 24 11          	mov    cl,BYTE PTR [esp+0x11]
  4335a0:	6a 00                	push   0x0
  4335a2:	88 4c 24 4c          	mov    BYTE PTR [esp+0x4c],cl
  4335a6:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4335aa:	e8 f1 0a fd ff       	call   0x4040a0
  4335af:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4335b4:	83 c9 ff             	or     ecx,0xffffffff
  4335b7:	33 c0                	xor    eax,eax
  4335b9:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4335bb:	f7 d1                	not    ecx
  4335bd:	49                   	dec    ecx
  4335be:	51                   	push   ecx
  4335bf:	68 70 3f 6b 00       	push   0x6b3f70
  4335c4:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4335c8:	e8 23 0b fd ff       	call   0x4040f0
  4335cd:	8d 54 24 48          	lea    edx,[esp+0x48]
  4335d1:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x12
  4335d8:	12 
  4335d9:	52                   	push   edx
  4335da:	68 8d 01 00 00       	push   0x18d
  4335df:	68 78 e7 68 00       	push   0x68e778
  4335e4:	68 68 e7 68 00       	push   0x68e768
  4335e9:	e8 02 d2 16 00       	call   0x5a07f0
  4335ee:	ff d0                	call   eax
  4335f0:	83 c4 10             	add    esp,0x10
  4335f3:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4335f7:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x2
  4335fe:	02 
  4335ff:	6a 01                	push   0x1
  433601:	e8 9a 0a fd ff       	call   0x4040a0
  433606:	8b 8b 14 01 00 00    	mov    ecx,DWORD PTR [ebx+0x114]
  43360c:	8d 83 68 01 00 00    	lea    eax,[ebx+0x168]
  433612:	50                   	push   eax
  433613:	33 d2                	xor    edx,edx
  433615:	e8 86 1a 18 00       	call   0x5b50a0
  43361a:	6a 00                	push   0x0
  43361c:	8b cb                	mov    ecx,ebx
  43361e:	e8 7d 01 00 00       	call   0x4337a0
  433623:	8b 94 24 38 01 00 00 	mov    edx,DWORD PTR [esp+0x138]
  43362a:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  433630:	52                   	push   edx
  433631:	8b 94 24 38 01 00 00 	mov    edx,DWORD PTR [esp+0x138]
  433638:	8b 01                	mov    eax,DWORD PTR [ecx]
  43363a:	52                   	push   edx
  43363b:	ff 50 08             	call   DWORD PTR [eax+0x8]
  43363e:	8b 84 24 e8 00 00 00 	mov    eax,DWORD PTR [esp+0xe8]
  433645:	c6 84 24 2c 01 00 00 	mov    BYTE PTR [esp+0x12c],0x0
  43364c:	00 
  43364d:	85 c0                	test   eax,eax
  43364f:	74 1d                	je     0x43366e
  433651:	8d 48 ff             	lea    ecx,[eax-0x1]
  433654:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  433657:	84 c0                	test   al,al
  433659:	74 0a                	je     0x433665
  43365b:	3c ff                	cmp    al,0xff
  43365d:	74 06                	je     0x433665
  43365f:	fe c8                	dec    al
  433661:	88 01                	mov    BYTE PTR [ecx],al
  433663:	eb 09                	jmp    0x43366e
  433665:	51                   	push   ecx
  433666:	e8 85 af 1c 00       	call   0x5fe5f0
  43366b:	83 c4 04             	add    esp,0x4
  43366e:	8b 8d 34 03 00 00    	mov    ecx,DWORD PTR [ebp+0x334]
  433674:	5f                   	pop    edi
  433675:	5e                   	pop    esi
  433676:	5b                   	pop    ebx
  433677:	85 c9                	test   ecx,ecx
  433679:	74 40                	je     0x4336bb
  43367b:	8b 94 24 2c 01 00 00 	mov    edx,DWORD PTR [esp+0x12c]
  433682:	8b 01                	mov    eax,DWORD PTR [ecx]
  433684:	52                   	push   edx
  433685:	8b 94 24 2c 01 00 00 	mov    edx,DWORD PTR [esp+0x12c]
  43368c:	52                   	push   edx
  43368d:	ff 50 08             	call   DWORD PTR [eax+0x8]
  433690:	8b 85 34 03 00 00    	mov    eax,DWORD PTR [ebp+0x334]
  433696:	8a 88 64 03 00 00    	mov    cl,BYTE PTR [eax+0x364]
  43369c:	84 c9                	test   cl,cl
  43369e:	75 1b                	jne    0x4336bb
  4336a0:	a0 44 58 6b 00       	mov    al,ds:0x6b5844
  4336a5:	84 c0                	test   al,al
  4336a7:	74 12                	je     0x4336bb
  4336a9:	8b 8d 50 02 00 00    	mov    ecx,DWORD PTR [ebp+0x250]
  4336af:	e8 dc 58 02 00       	call   0x458f90
  4336b4:	c6 05 44 58 6b 00 00 	mov    BYTE PTR ds:0x6b5844,0x0
  4336bb:	8b 85 98 03 00 00    	mov    eax,DWORD PTR [ebp+0x398]
  4336c1:	85 c0                	test   eax,eax
  4336c3:	74 42                	je     0x433707
  4336c5:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  4336c9:	51                   	push   ecx
  4336ca:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  4336d0:	e8 ab 85 06 00       	call   0x49bc80
  4336d5:	8b 10                	mov    edx,DWORD PTR [eax]
  4336d7:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  4336db:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  4336de:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  4336e2:	8b 8d 98 03 00 00    	mov    ecx,DWORD PTR [ebp+0x398]
  4336e8:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
  4336ec:	d8 05 64 c5 64 00    	fadd   DWORD PTR ds:0x64c564
  4336f2:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  4336f5:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  4336f9:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4336fd:	52                   	push   edx
  4336fe:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  433702:	8b 01                	mov    eax,DWORD PTR [ecx]
  433704:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  433707:	8b ad 50 02 00 00    	mov    ebp,DWORD PTR [ebp+0x250]
  43370d:	85 ed                	test   ebp,ebp
  43370f:	74 18                	je     0x433729
  433711:	8b 8c 24 2c 01 00 00 	mov    ecx,DWORD PTR [esp+0x12c]
  433718:	8b 94 24 28 01 00 00 	mov    edx,DWORD PTR [esp+0x128]
  43371f:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  433722:	51                   	push   ecx
  433723:	52                   	push   edx
  433724:	8b cd                	mov    ecx,ebp
  433726:	ff 50 08             	call   DWORD PTR [eax+0x8]
  433729:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  433730:	c7 84 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],0xffffffff
  433737:	ff ff ff ff 
  43373b:	e8 30 b0 17 00       	call   0x5ae770
  433740:	8b 8c 24 18 01 00 00 	mov    ecx,DWORD PTR [esp+0x118]
  433747:	5d                   	pop    ebp
  433748:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  43374f:	81 c4 20 01 00 00    	add    esp,0x120
  433755:	c2 08 00             	ret    0x8
  433758:	8f                   	(bad)
  433759:	2b 43 00             	sub    eax,DWORD PTR [ebx+0x0]
  43375c:	4d                   	dec    ebp
  43375d:	2a 43 00             	sub    al,BYTE PTR [ebx+0x0]
  433760:	42                   	inc    edx
  433761:	31 43 00             	xor    DWORD PTR [ebx+0x0],eax
  433764:	c8 2c 43 00          	enter  0x432c,0x0
  433768:	36 2c 43             	ss sub al,0x43
  43376b:	00 5c 2d 43          	add    BYTE PTR [ebp+ebp*1+0x43],bl
  43376f:	00 42 31             	add    BYTE PTR [edx+0x31],al
  433772:	43                   	inc    ebx
  433773:	00 42 31             	add    BYTE PTR [edx+0x31],al
  433776:	43                   	inc    ebx
  433777:	00 c5                	add    ch,al
  433779:	2e 43                	cs inc ebx
  43377b:	00 59 2f             	add    BYTE PTR [ecx+0x2f],bl
  43377e:	43                   	inc    ebx
  43377f:	00 ee                	add    dh,ch
  433781:	2a 43 00             	sub    al,BYTE PTR [ebx+0x0]
  433784:	42                   	inc    edx
  433785:	31 43 00             	xor    DWORD PTR [ebx+0x0],eax
  433788:	42                   	inc    edx
  433789:	31 43 00             	xor    DWORD PTR [ebx+0x0],eax
  43378c:	4d                   	dec    ebp
  43378d:	2a 43 00             	sub    al,BYTE PTR [ebx+0x0]
  433790:	05 30 43 00 90       	add    eax,0x90004330
  433795:	90                   	nop
  433796:	90                   	nop
  433797:	90                   	nop
  433798:	90                   	nop
  433799:	90                   	nop
  43379a:	90                   	nop
  43379b:	90                   	nop
  43379c:	90                   	nop
  43379d:	90                   	nop
  43379e:	90                   	nop
  43379f:	90                   	nop
  4337a0:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
  4337a4:	56                   	push   esi
  4337a5:	8b f1                	mov    esi,ecx
  4337a7:	84 c0                	test   al,al
  4337a9:	88 86 98 01 00 00    	mov    BYTE PTR [esi+0x198],al
  4337af:	74 1c                	je     0x4337cd
  4337b1:	8d 86 68 01 00 00    	lea    eax,[esi+0x168]
  4337b7:	50                   	push   eax
  4337b8:	e8 23 10 ff ff       	call   0x4247e0
  4337bd:	8b c8                	mov    ecx,eax
  4337bf:	33 d2                	xor    edx,edx
  4337c1:	e8 da 18 18 00       	call   0x5b50a0
  4337c6:	c6 86 98 01 00 00 00 	mov    BYTE PTR [esi+0x198],0x0
  4337cd:	5e                   	pop    esi
  4337ce:	c2 04 00             	ret    0x4
  4337d1:	90                   	nop
  4337d2:	90                   	nop
  4337d3:	90                   	nop
  4337d4:	90                   	nop
  4337d5:	90                   	nop
  4337d6:	90                   	nop
  4337d7:	90                   	nop
  4337d8:	90                   	nop
  4337d9:	90                   	nop
  4337da:	90                   	nop
  4337db:	90                   	nop
  4337dc:	90                   	nop
  4337dd:	90                   	nop
  4337de:	90                   	nop
  4337df:	90                   	nop
  4337e0:	56                   	push   esi
  4337e1:	8b f1                	mov    esi,ecx
  4337e3:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  4337e6:	3d 00 00 00 80       	cmp    eax,0x80000000
  4337eb:	75 18                	jne    0x433805
  4337ed:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  4337f0:	85 c0                	test   eax,eax
  4337f2:	75 05                	jne    0x4337f9
  4337f4:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4337f9:	50                   	push   eax
  4337fa:	e8 11 77 1d 00       	call   0x60af10
  4337ff:	83 c4 04             	add    esp,0x4
  433802:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  433805:	5e                   	pop    esi
  433806:	c3                   	ret
  433807:	90                   	nop
  433808:	90                   	nop
  433809:	90                   	nop
  43380a:	90                   	nop
  43380b:	90                   	nop
  43380c:	90                   	nop
  43380d:	90                   	nop
  43380e:	90                   	nop
  43380f:	90                   	nop
  433810:	8b 89 34 03 00 00    	mov    ecx,DWORD PTR [ecx+0x334]
  433816:	85 c9                	test   ecx,ecx
  433818:	74 05                	je     0x43381f
  43381a:	8b 01                	mov    eax,DWORD PTR [ecx]
  43381c:	ff 60 0c             	jmp    DWORD PTR [eax+0xc]
  43381f:	c3                   	ret
  433820:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  433826:	6a ff                	push   0xffffffff
  433828:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  43382c:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  433832:	68 90 3b 62 00       	push   0x623b90
  433837:	50                   	push   eax
  433838:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  43383f:	81 ec a8 00 00 00    	sub    esp,0xa8
  433845:	df e0                	fnstsw ax
  433847:	53                   	push   ebx
  433848:	55                   	push   ebp
  433849:	56                   	push   esi
  43384a:	57                   	push   edi
  43384b:	f6 c4 01             	test   ah,0x1
  43384e:	8b f1                	mov    esi,ecx
  433850:	74 70                	je     0x4338c2
  433852:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433856:	6a 00                	push   0x0
  433858:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  43385c:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  433860:	e8 3b 08 fd ff       	call   0x4040a0
  433865:	83 cd ff             	or     ebp,0xffffffff
  433868:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  43386d:	8b cd                	mov    ecx,ebp
  43386f:	33 c0                	xor    eax,eax
  433871:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433873:	f7 d1                	not    ecx
  433875:	49                   	dec    ecx
  433876:	51                   	push   ecx
  433877:	68 70 3f 6b 00       	push   0x6b3f70
  43387c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433880:	e8 6b 08 fd ff       	call   0x4040f0
  433885:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433889:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x0
  433890:	00 00 00 00 
  433894:	51                   	push   ecx
  433895:	68 58 03 00 00       	push   0x358
  43389a:	68 28 03 69 00       	push   0x690328
  43389f:	68 a0 04 69 00       	push   0x6904a0
  4338a4:	e8 47 cf 16 00       	call   0x5a07f0
  4338a9:	ff d0                	call   eax
  4338ab:	83 c4 10             	add    esp,0x10
  4338ae:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4338b2:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  4338b9:	6a 01                	push   0x1
  4338bb:	e8 e0 07 fd ff       	call   0x4040a0
  4338c0:	eb 03                	jmp    0x4338c5
  4338c2:	83 cd ff             	or     ebp,0xffffffff
  4338c5:	8b bc 24 cc 00 00 00 	mov    edi,DWORD PTR [esp+0xcc]
  4338cc:	85 ff                	test   edi,edi
  4338ce:	0f 84 7e 02 00 00    	je     0x433b52
  4338d4:	8b 17                	mov    edx,DWORD PTR [edi]
  4338d6:	8d 44 24 60          	lea    eax,[esp+0x60]
  4338da:	50                   	push   eax
  4338db:	8b cf                	mov    ecx,edi
  4338dd:	ff 52 48             	call   DWORD PTR [edx+0x48]
  4338e0:	8b c8                	mov    ecx,eax
  4338e2:	e8 e9 f6 17 00       	call   0x5b2fd0
  4338e7:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4338ed:	df e0                	fnstsw ax
  4338ef:	f6 c4 41             	test   ah,0x41
  4338f2:	0f 85 5a 02 00 00    	jne    0x433b52
  4338f8:	8b 17                	mov    edx,DWORD PTR [edi]
  4338fa:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4338fe:	50                   	push   eax
  4338ff:	8b cf                	mov    ecx,edi
  433901:	ff 52 48             	call   DWORD PTR [edx+0x48]
  433904:	8b 16                	mov    edx,DWORD PTR [esi]
  433906:	50                   	push   eax
  433907:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  43390b:	8b ce                	mov    ecx,esi
  43390d:	50                   	push   eax
  43390e:	ff 52 48             	call   DWORD PTR [edx+0x48]
  433911:	50                   	push   eax
  433912:	e8 e9 dc 17 00       	call   0x5b1600
  433917:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  43391b:	83 c4 08             	add    esp,0x8
  43391e:	8b ce                	mov    ecx,esi
  433920:	e8 3b 30 0a 00       	call   0x4d6960
  433925:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  433929:	d8 e1                	fsub   st,st(1)
  43392b:	51                   	push   ecx
  43392c:	d9 1c 24             	fstp   DWORD PTR [esp]
  43392f:	dd d8                	fstp   st(0)
  433931:	e8 fa dc 17 00       	call   0x5b1630
  433936:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  43393a:	d9 05 20 c4 64 00    	fld    DWORD PTR ds:0x64c420
  433940:	d8 8c 24 cc 00 00 00 	fmul   DWORD PTR [esp+0xcc]
  433947:	8b 16                	mov    edx,DWORD PTR [esi]
  433949:	83 c4 04             	add    esp,0x4
  43394c:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  433950:	8d 44 24 18          	lea    eax,[esp+0x18]
  433954:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  43395a:	51                   	push   ecx
  43395b:	50                   	push   eax
  43395c:	8b ce                	mov    ecx,esi
  43395e:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  433962:	ff 52 48             	call   DWORD PTR [edx+0x48]
  433965:	8b 17                	mov    edx,DWORD PTR [edi]
  433967:	8b d8                	mov    ebx,eax
  433969:	8d 44 24 30          	lea    eax,[esp+0x30]
  43396d:	8b cf                	mov    ecx,edi
  43396f:	50                   	push   eax
  433970:	ff 52 48             	call   DWORD PTR [edx+0x48]
  433973:	8b c8                	mov    ecx,eax
  433975:	8b d3                	mov    edx,ebx
  433977:	e8 64 f6 17 00       	call   0x5b2fe0
  43397c:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  433980:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  433984:	51                   	push   ecx
  433985:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  433989:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
  433990:	00 
  433991:	c7 44 24 4c 00 00 80 	mov    DWORD PTR [esp+0x4c],0x3f800000
  433998:	3f 
  433999:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
  4339a0:	00 
  4339a1:	e8 ba f4 17 00       	call   0x5b2e60
  4339a6:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  4339aa:	e8 21 f6 17 00       	call   0x5b2fd0
  4339af:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  4339b5:	df e0                	fnstsw ax
  4339b7:	f6 c4 40             	test   ah,0x40
  4339ba:	74 34                	je     0x4339f0
  4339bc:	c7 44 24 2c 00 00 80 	mov    DWORD PTR [esp+0x2c],0x3f800000
  4339c3:	3f 
  4339c4:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  4339c8:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  4339cf:	00 
  4339d0:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  4339d4:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
  4339db:	00 
  4339dc:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4339e0:	dd d8                	fstp   st(0)
  4339e2:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  4339e6:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  4339ea:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  4339ee:	eb 1b                	jmp    0x433a0b
  4339f0:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  4339f6:	d8 f1                	fdiv   st,st(1)
  4339f8:	51                   	push   ecx
  4339f9:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  4339fd:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  433a01:	d9 1c 24             	fstp   DWORD PTR [esp]
  433a04:	dd d8                	fstp   st(0)
  433a06:	e8 95 f5 17 00       	call   0x5b2fa0
  433a0b:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  433a0f:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  433a13:	52                   	push   edx
  433a14:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  433a18:	e8 23 1b 18 00       	call   0x5b5540
  433a1d:	8d 94 24 88 00 00 00 	lea    edx,[esp+0x88]
  433a24:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  433a28:	e8 f3 1e 18 00       	call   0x5b5920
  433a2d:	8d 54 24 60          	lea    edx,[esp+0x60]
  433a31:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  433a38:	e8 63 fd 17 00       	call   0x5b37a0
  433a3d:	8b 86 f0 01 00 00    	mov    eax,DWORD PTR [esi+0x1f0]
  433a43:	85 c0                	test   eax,eax
  433a45:	75 6b                	jne    0x433ab2
  433a47:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433a4b:	6a 00                	push   0x0
  433a4d:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433a51:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  433a55:	e8 46 06 fd ff       	call   0x4040a0
  433a5a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433a5f:	8b cd                	mov    ecx,ebp
  433a61:	33 c0                	xor    eax,eax
  433a63:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433a65:	f7 d1                	not    ecx
  433a67:	49                   	dec    ecx
  433a68:	51                   	push   ecx
  433a69:	68 70 3f 6b 00       	push   0x6b3f70
  433a6e:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433a72:	e8 79 06 fd ff       	call   0x4040f0
  433a77:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433a7b:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x1
  433a82:	01 00 00 00 
  433a86:	51                   	push   ecx
  433a87:	68 5b 01 00 00       	push   0x15b
  433a8c:	68 88 f9 68 00       	push   0x68f988
  433a91:	68 70 f9 68 00       	push   0x68f970
  433a96:	e8 55 cd 16 00       	call   0x5a07f0
  433a9b:	ff d0                	call   eax
  433a9d:	83 c4 10             	add    esp,0x10
  433aa0:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433aa4:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433aab:	6a 01                	push   0x1
  433aad:	e8 ee 05 fd ff       	call   0x4040a0
  433ab2:	8b 8e f0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f0]
  433ab8:	e8 53 f2 fc ff       	call   0x402d10
  433abd:	84 c0                	test   al,al
  433abf:	75 0c                	jne    0x433acd
  433ac1:	8d 54 24 60          	lea    edx,[esp+0x60]
  433ac5:	8b ce                	mov    ecx,esi
  433ac7:	52                   	push   edx
  433ac8:	e8 f3 59 0a 00       	call   0x4d94c0
  433acd:	8b 86 f4 01 00 00    	mov    eax,DWORD PTR [esi+0x1f4]
  433ad3:	85 c0                	test   eax,eax
  433ad5:	75 6b                	jne    0x433b42
  433ad7:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433adb:	6a 00                	push   0x0
  433add:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433ae1:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  433ae5:	e8 b6 05 fd ff       	call   0x4040a0
  433aea:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433aef:	8b cd                	mov    ecx,ebp
  433af1:	33 c0                	xor    eax,eax
  433af3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433af5:	f7 d1                	not    ecx
  433af7:	49                   	dec    ecx
  433af8:	51                   	push   ecx
  433af9:	68 70 3f 6b 00       	push   0x6b3f70
  433afe:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433b02:	e8 e9 05 fd ff       	call   0x4040f0
  433b07:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433b0b:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x2
  433b12:	02 00 00 00 
  433b16:	51                   	push   ecx
  433b17:	68 61 01 00 00       	push   0x161
  433b1c:	68 88 f9 68 00       	push   0x68f988
  433b21:	68 10 04 69 00       	push   0x690410
  433b26:	e8 c5 cc 16 00       	call   0x5a07f0
  433b2b:	ff d0                	call   eax
  433b2d:	83 c4 10             	add    esp,0x10
  433b30:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433b34:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433b3b:	6a 01                	push   0x1
  433b3d:	e8 5e 05 fd ff       	call   0x4040a0
  433b42:	8b 8e f4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f4]
  433b48:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  433b4c:	50                   	push   eax
  433b4d:	8b 11                	mov    edx,DWORD PTR [ecx]
  433b4f:	ff 52 20             	call   DWORD PTR [edx+0x20]
  433b52:	8b ce                	mov    ecx,esi
  433b54:	e8 27 98 0a 00       	call   0x4dd380
  433b59:	84 c0                	test   al,al
  433b5b:	0f 85 49 04 00 00    	jne    0x433faa
  433b61:	8a 86 3c 02 00 00    	mov    al,BYTE PTR [esi+0x23c]
  433b67:	84 c0                	test   al,al
  433b69:	0f 85 3b 04 00 00    	jne    0x433faa
  433b6f:	8b 86 f0 01 00 00    	mov    eax,DWORD PTR [esi+0x1f0]
  433b75:	85 c0                	test   eax,eax
  433b77:	75 4e                	jne    0x433bc7
  433b79:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  433b7d:	51                   	push   ecx
  433b7e:	68 70 3f 6b 00       	push   0x6b3f70
  433b83:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433b87:	e8 84 5c fd ff       	call   0x409810
  433b8c:	8d 54 24 18          	lea    edx,[esp+0x18]
  433b90:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x3
  433b97:	03 00 00 00 
  433b9b:	52                   	push   edx
  433b9c:	68 5b 01 00 00       	push   0x15b
  433ba1:	68 88 f9 68 00       	push   0x68f988
  433ba6:	68 70 f9 68 00       	push   0x68f970
  433bab:	e8 40 cc 16 00       	call   0x5a07f0
  433bb0:	ff d0                	call   eax
  433bb2:	83 c4 10             	add    esp,0x10
  433bb5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433bb9:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433bc0:	6a 01                	push   0x1
  433bc2:	e8 d9 04 fd ff       	call   0x4040a0
  433bc7:	8b 8e f0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f0]
  433bcd:	6a 00                	push   0x0
  433bcf:	d9 84 24 cc 00 00 00 	fld    DWORD PTR [esp+0xcc]
  433bd6:	8b 01                	mov    eax,DWORD PTR [ecx]
  433bd8:	6a 00                	push   0x0
  433bda:	51                   	push   ecx
  433bdb:	d9 e0                	fchs
  433bdd:	d9 1c 24             	fstp   DWORD PTR [esp]
  433be0:	ff 50 20             	call   DWORD PTR [eax+0x20]
  433be3:	84 c0                	test   al,al
  433be5:	0f 84 bf 03 00 00    	je     0x433faa
  433beb:	8b ce                	mov    ecx,esi
  433bed:	e8 8e 97 0a 00       	call   0x4dd380
  433bf2:	84 c0                	test   al,al
  433bf4:	0f 84 18 01 00 00    	je     0x433d12
  433bfa:	8b 8e 50 02 00 00    	mov    ecx,DWORD PTR [esi+0x250]
  433c00:	6a 05                	push   0x5
  433c02:	e8 c9 53 02 00       	call   0x458fd0
  433c07:	a1 48 58 6b 00       	mov    eax,ds:0x6b5848
  433c0c:	85 c0                	test   eax,eax
  433c0e:	0f 85 bd 00 00 00    	jne    0x433cd1
  433c14:	8b 1d e0 8d 6c 00    	mov    ebx,DWORD PTR ds:0x6c8de0
  433c1a:	85 db                	test   ebx,ebx
  433c1c:	75 07                	jne    0x433c25
  433c1e:	e8 5d 76 12 00       	call   0x55b280
  433c23:	8b d8                	mov    ebx,eax
  433c25:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  433c2b:	85 c0                	test   eax,eax
  433c2d:	75 6b                	jne    0x433c9a
  433c2f:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  433c33:	6a 00                	push   0x0
  433c35:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  433c39:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433c3d:	e8 5e 04 fd ff       	call   0x4040a0
  433c42:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433c47:	8b cd                	mov    ecx,ebp
  433c49:	33 c0                	xor    eax,eax
  433c4b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433c4d:	f7 d1                	not    ecx
  433c4f:	49                   	dec    ecx
  433c50:	51                   	push   ecx
  433c51:	68 70 3f 6b 00       	push   0x6b3f70
  433c56:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433c5a:	e8 91 04 fd ff       	call   0x4040f0
  433c5f:	8d 54 24 18          	lea    edx,[esp+0x18]
  433c63:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x4
  433c6a:	04 00 00 00 
  433c6e:	52                   	push   edx
  433c6f:	68 8f 01 00 00       	push   0x18f
  433c74:	68 58 eb 68 00       	push   0x68eb58
  433c79:	68 ec f8 68 00       	push   0x68f8ec
  433c7e:	e8 6d cb 16 00       	call   0x5a07f0
  433c83:	ff d0                	call   eax
  433c85:	83 c4 10             	add    esp,0x10
  433c88:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433c8c:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433c93:	6a 01                	push   0x1
  433c95:	e8 06 04 fd ff       	call   0x4040a0
  433c9a:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  433ca0:	6a 00                	push   0x0
  433ca2:	6a 00                	push   0x0
  433ca4:	68 00 00 80 3f       	push   0x3f800000
  433ca9:	6a 00                	push   0x0
  433cab:	8d 44 24 38          	lea    eax,[esp+0x38]
  433caf:	68 60 53 6b 00       	push   0x6b5360
  433cb4:	50                   	push   eax
  433cb5:	e8 26 c3 11 00       	call   0x54ffe0
  433cba:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  433cbe:	85 c9                	test   ecx,ecx
  433cc0:	74 05                	je     0x433cc7
  433cc2:	e8 09 5c fd ff       	call   0x4098d0
  433cc7:	c7 05 48 58 6b 00 01 	mov    DWORD PTR ds:0x6b5848,0x1
  433cce:	00 00 00 
  433cd1:	b8 e8 03 00 00       	mov    eax,0x3e8
  433cd6:	b9 00 00 80 3f       	mov    ecx,0x3f800000
  433cdb:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
  433ce1:	89 ae 14 01 00 00    	mov    DWORD PTR [esi+0x114],ebp
  433ce7:	89 8e 18 01 00 00    	mov    DWORD PTR [esi+0x118],ecx
  433ced:	c6 86 1c 01 00 00 01 	mov    BYTE PTR [esi+0x11c],0x1
  433cf4:	89 86 20 01 00 00    	mov    DWORD PTR [esi+0x120],eax
  433cfa:	89 ae 24 01 00 00    	mov    DWORD PTR [esi+0x124],ebp
  433d00:	89 8e 28 01 00 00    	mov    DWORD PTR [esi+0x128],ecx
  433d06:	c6 86 2c 01 00 00 01 	mov    BYTE PTR [esi+0x12c],0x1
  433d0d:	e9 98 02 00 00       	jmp    0x433faa
  433d12:	8d 9e 14 02 00 00    	lea    ebx,[esi+0x214]
  433d18:	c7 05 48 58 6b 00 00 	mov    DWORD PTR ds:0x6b5848,0x0
  433d1f:	00 00 00 
  433d22:	8b 03                	mov    eax,DWORD PTR [ebx]
  433d24:	85 c0                	test   eax,eax
  433d26:	74 61                	je     0x433d89
  433d28:	85 c0                	test   eax,eax
  433d2a:	75 4e                	jne    0x433d7a
  433d2c:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  433d30:	51                   	push   ecx
  433d31:	68 70 3f 6b 00       	push   0x6b3f70
  433d36:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433d3a:	e8 d1 5a fd ff       	call   0x409810
  433d3f:	8d 54 24 18          	lea    edx,[esp+0x18]
  433d43:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x7
  433d4a:	07 00 00 00 
  433d4e:	52                   	push   edx
  433d4f:	68 b6 00 00 00       	push   0xb6
  433d54:	68 38 d6 68 00       	push   0x68d638
  433d59:	68 2c d6 68 00       	push   0x68d62c
  433d5e:	e8 8d ca 16 00       	call   0x5a07f0
  433d63:	ff d0                	call   eax
  433d65:	83 c4 10             	add    esp,0x10
  433d68:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433d6c:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433d73:	6a 01                	push   0x1
  433d75:	e8 26 03 fd ff       	call   0x4040a0
  433d7a:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  433d7c:	e8 5f f3 11 00       	call   0x5530e0
  433d81:	84 c0                	test   al,al
  433d83:	0f 85 21 02 00 00    	jne    0x433faa
  433d89:	8a 86 24 02 00 00    	mov    al,BYTE PTR [esi+0x224]
  433d8f:	84 c0                	test   al,al
  433d91:	0f 85 13 02 00 00    	jne    0x433faa
  433d97:	d9 84 24 c8 00 00 00 	fld    DWORD PTR [esp+0xc8]
  433d9e:	d8 1d 1c c4 64 00    	fcomp  DWORD PTR ds:0x64c41c
  433da4:	df e0                	fnstsw ax
  433da6:	f6 c4 01             	test   ah,0x1
  433da9:	75 0a                	jne    0x433db5
  433dab:	c7 44 24 14 88 53 6b 	mov    DWORD PTR [esp+0x14],0x6b5388
  433db2:	00 
  433db3:	eb 3e                	jmp    0x433df3
  433db5:	d9 84 24 c8 00 00 00 	fld    DWORD PTR [esp+0xc8]
  433dbc:	d8 1d 18 c4 64 00    	fcomp  DWORD PTR ds:0x64c418
  433dc2:	df e0                	fnstsw ax
  433dc4:	f6 c4 01             	test   ah,0x1
  433dc7:	75 0a                	jne    0x433dd3
  433dc9:	c7 44 24 14 b0 53 6b 	mov    DWORD PTR [esp+0x14],0x6b53b0
  433dd0:	00 
  433dd1:	eb 20                	jmp    0x433df3
  433dd3:	d9 84 24 c8 00 00 00 	fld    DWORD PTR [esp+0xc8]
  433dda:	d8 1d 14 c4 64 00    	fcomp  DWORD PTR ds:0x64c414
  433de0:	df e0                	fnstsw ax
  433de2:	f6 c4 01             	test   ah,0x1
  433de5:	0f 85 bf 01 00 00    	jne    0x433faa
  433deb:	c7 44 24 14 d8 53 6b 	mov    DWORD PTR [esp+0x14],0x6b53d8
  433df2:	00 
  433df3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  433df7:	85 c0                	test   eax,eax
  433df9:	0f 84 ab 01 00 00    	je     0x433faa
  433dff:	8b 2d e0 8d 6c 00    	mov    ebp,DWORD PTR ds:0x6c8de0
  433e05:	85 ed                	test   ebp,ebp
  433e07:	75 07                	jne    0x433e10
  433e09:	e8 72 74 12 00       	call   0x55b280
  433e0e:	8b e8                	mov    ebp,eax
  433e10:	8b 85 fc 00 00 00    	mov    eax,DWORD PTR [ebp+0xfc]
  433e16:	85 c0                	test   eax,eax
  433e18:	75 70                	jne    0x433e8a
  433e1a:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433e1e:	6a 00                	push   0x0
  433e20:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433e24:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  433e28:	e8 73 02 fd ff       	call   0x4040a0
  433e2d:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433e32:	83 c9 ff             	or     ecx,0xffffffff
  433e35:	33 c0                	xor    eax,eax
  433e37:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433e39:	f7 d1                	not    ecx
  433e3b:	49                   	dec    ecx
  433e3c:	51                   	push   ecx
  433e3d:	68 70 3f 6b 00       	push   0x6b3f70
  433e42:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433e46:	e8 a5 02 fd ff       	call   0x4040f0
  433e4b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433e4f:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x8
  433e56:	08 00 00 00 
  433e5a:	51                   	push   ecx
  433e5b:	68 8f 01 00 00       	push   0x18f
  433e60:	68 58 eb 68 00       	push   0x68eb58
  433e65:	68 ec f8 68 00       	push   0x68f8ec
  433e6a:	e8 81 c9 16 00       	call   0x5a07f0
  433e6f:	ff d0                	call   eax
  433e71:	83 c4 10             	add    esp,0x10
  433e74:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433e78:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0xffffffff
  433e7f:	ff ff ff ff 
  433e83:	6a 01                	push   0x1
  433e85:	e8 16 02 fd ff       	call   0x4040a0
  433e8a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  433e8e:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  433e94:	6a 00                	push   0x0
  433e96:	6a 00                	push   0x0
  433e98:	68 00 00 80 3f       	push   0x3f800000
  433e9d:	6a 00                	push   0x0
  433e9f:	8d 44 24 38          	lea    eax,[esp+0x38]
  433ea3:	52                   	push   edx
  433ea4:	50                   	push   eax
  433ea5:	e8 36 c1 11 00       	call   0x54ffe0
  433eaa:	8b f8                	mov    edi,eax
  433eac:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  433eae:	8b 07                	mov    eax,DWORD PTR [edi]
  433eb0:	3b c8                	cmp    ecx,eax
  433eb2:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x9
  433eb9:	09 00 00 00 
  433ebd:	74 1f                	je     0x433ede
  433ebf:	85 c9                	test   ecx,ecx
  433ec1:	74 10                	je     0x433ed3
  433ec3:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  433ec6:	48                   	dec    eax
  433ec7:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  433eca:	75 07                	jne    0x433ed3
  433ecc:	6a 00                	push   0x0
  433ece:	e8 ed 80 17 00       	call   0x5abfc0
  433ed3:	8b 0f                	mov    ecx,DWORD PTR [edi]
  433ed5:	89 0b                	mov    DWORD PTR [ebx],ecx
  433ed7:	8b cb                	mov    ecx,ebx
  433ed9:	e8 d2 05 15 00       	call   0x5844b0
  433ede:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  433ee2:	83 cb ff             	or     ebx,0xffffffff
  433ee5:	85 c9                	test   ecx,ecx
  433ee7:	89 9c 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebx
  433eee:	74 05                	je     0x433ef5
  433ef0:	e8 db 59 fd ff       	call   0x4098d0
  433ef5:	e8 a6 65 1d 00       	call   0x60a4a0
  433efa:	99                   	cdq
  433efb:	b9 10 27 00 00       	mov    ecx,0x2710
  433f00:	f7 f9                	idiv   ecx
  433f02:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  433f06:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  433f0a:	d8 0d 70 c5 64 00    	fmul   DWORD PTR ds:0x64c570
  433f10:	d8 05 9c b7 64 00    	fadd   DWORD PTR ds:0x64b79c
  433f16:	e8 05 6c 1d 00       	call   0x60ab20
  433f1b:	8b e8                	mov    ebp,eax
  433f1d:	3b eb                	cmp    ebp,ebx
  433f1f:	74 6c                	je     0x433f8d
  433f21:	85 ed                	test   ebp,ebp
  433f23:	7d 68                	jge    0x433f8d
  433f25:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  433f29:	6a 00                	push   0x0
  433f2b:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  433f2f:	88 54 24 54          	mov    BYTE PTR [esp+0x54],dl
  433f33:	e8 68 01 fd ff       	call   0x4040a0
  433f38:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433f3d:	8b cb                	mov    ecx,ebx
  433f3f:	33 c0                	xor    eax,eax
  433f41:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433f43:	f7 d1                	not    ecx
  433f45:	49                   	dec    ecx
  433f46:	51                   	push   ecx
  433f47:	68 70 3f 6b 00       	push   0x6b3f70
  433f4c:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  433f50:	e8 9b 01 fd ff       	call   0x4040f0
  433f55:	8d 44 24 50          	lea    eax,[esp+0x50]
  433f59:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0xa
  433f60:	0a 00 00 00 
  433f64:	50                   	push   eax
  433f65:	6a 56                	push   0x56
  433f67:	68 c8 d4 68 00       	push   0x68d4c8
  433f6c:	68 90 d4 68 00       	push   0x68d490
  433f71:	e8 7a c8 16 00       	call   0x5a07f0
  433f76:	ff d0                	call   eax
  433f78:	83 c4 10             	add    esp,0x10
  433f7b:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  433f7f:	89 9c 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebx
  433f86:	6a 01                	push   0x1
  433f88:	e8 13 01 fd ff       	call   0x4040a0
  433f8d:	89 ae 18 02 00 00    	mov    DWORD PTR [esi+0x218],ebp
  433f93:	89 9e 1c 02 00 00    	mov    DWORD PTR [esi+0x21c],ebx
  433f99:	c7 86 20 02 00 00 00 	mov    DWORD PTR [esi+0x220],0x3f800000
  433fa0:	00 80 3f 
  433fa3:	c6 86 24 02 00 00 01 	mov    BYTE PTR [esi+0x224],0x1
  433faa:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  433fb1:	5f                   	pop    edi
  433fb2:	5e                   	pop    esi
  433fb3:	5d                   	pop    ebp
  433fb4:	5b                   	pop    ebx
  433fb5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  433fbc:	81 c4 b4 00 00 00    	add    esp,0xb4
  433fc2:	c2 0c 00             	ret    0xc
  433fc5:	90                   	nop
  433fc6:	90                   	nop
  433fc7:	90                   	nop
  433fc8:	90                   	nop
  433fc9:	90                   	nop
  433fca:	90                   	nop
  433fcb:	90                   	nop
  433fcc:	90                   	nop
  433fcd:	90                   	nop
  433fce:	90                   	nop
  433fcf:	90                   	nop
  433fd0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  433fd6:	6a ff                	push   0xffffffff
  433fd8:	68 b0 3b 62 00       	push   0x623bb0
  433fdd:	50                   	push   eax
  433fde:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  433fe5:	83 ec 20             	sub    esp,0x20
  433fe8:	53                   	push   ebx
  433fe9:	55                   	push   ebp
  433fea:	56                   	push   esi
  433feb:	8b f1                	mov    esi,ecx
  433fed:	33 db                	xor    ebx,ebx
  433fef:	57                   	push   edi
  433ff0:	39 9e f0 01 00 00    	cmp    DWORD PTR [esi+0x1f0],ebx
  433ff6:	75 65                	jne    0x43405d
  433ff8:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433ffc:	53                   	push   ebx
  433ffd:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  434001:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  434005:	e8 96 00 fd ff       	call   0x4040a0
  43400a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  43400f:	83 c9 ff             	or     ecx,0xffffffff
  434012:	33 c0                	xor    eax,eax
  434014:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  434016:	f7 d1                	not    ecx
  434018:	49                   	dec    ecx
  434019:	51                   	push   ecx
  43401a:	68 70 3f 6b 00       	push   0x6b3f70
  43401f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  434023:	e8 c8 00 fd ff       	call   0x4040f0
  434028:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  43402c:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  434030:	51                   	push   ecx
  434031:	68 5b 01 00 00       	push   0x15b
  434036:	68 88 f9 68 00       	push   0x68f988
  43403b:	68 70 f9 68 00       	push   0x68f970
  434040:	e8 ab c7 16 00       	call   0x5a07f0
  434045:	ff d0                	call   eax
  434047:	83 c4 10             	add    esp,0x10
  43404a:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  43404e:	c7 44 24 38 ff ff ff 	mov    DWORD PTR [esp+0x38],0xffffffff
  434055:	ff 
  434056:	6a 01                	push   0x1
  434058:	e8 43 00 fd ff       	call   0x4040a0
  43405d:	8b 86 f0 01 00 00    	mov    eax,DWORD PTR [esi+0x1f0]
  434063:	53                   	push   ebx
  434064:	68 40 f9 68 00       	push   0x68f940
  434069:	68 18 f9 68 00       	push   0x68f918
  43406e:	53                   	push   ebx
  43406f:	50                   	push   eax
  434070:	e8 7d 66 1d 00       	call   0x60a6f2
  434075:	8b e8                	mov    ebp,eax
  434077:	83 c4 14             	add    esp,0x14
  43407a:	3b eb                	cmp    ebp,ebx
  43407c:	0f 85 85 00 00 00    	jne    0x434107
  434082:	bf c4 04 69 00       	mov    edi,0x6904c4
  434087:	83 c9 ff             	or     ecx,0xffffffff
  43408a:	33 c0                	xor    eax,eax
  43408c:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  434090:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  434092:	f7 d1                	not    ecx
  434094:	49                   	dec    ecx
  434095:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
  434099:	51                   	push   ecx
  43409a:	68 c4 04 69 00       	push   0x6904c4
  43409f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4340a3:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  4340a7:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  4340ab:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  4340af:	e8 3c 00 fd ff       	call   0x4040f0
  4340b4:	8d 44 24 20          	lea    eax,[esp+0x20]
  4340b8:	c7 44 24 38 01 00 00 	mov    DWORD PTR [esp+0x38],0x1
  4340bf:	00 
  4340c0:	50                   	push   eax
  4340c1:	68 cb 03 00 00       	push   0x3cb
  4340c6:	68 28 03 69 00       	push   0x690328
  4340cb:	68 b4 04 69 00       	push   0x6904b4
  4340d0:	e8 1b c7 16 00       	call   0x5a07f0
  4340d5:	ff d0                	call   eax
  4340d7:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  4340db:	83 c4 10             	add    esp,0x10
  4340de:	3b c3                	cmp    eax,ebx
  4340e0:	c7 44 24 38 ff ff ff 	mov    DWORD PTR [esp+0x38],0xffffffff
  4340e7:	ff 
  4340e8:	74 1d                	je     0x434107
  4340ea:	8d 48 ff             	lea    ecx,[eax-0x1]
  4340ed:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4340f0:	3a c3                	cmp    al,bl
  4340f2:	74 0a                	je     0x4340fe
  4340f4:	3c ff                	cmp    al,0xff
  4340f6:	74 06                	je     0x4340fe
  4340f8:	fe c8                	dec    al
  4340fa:	88 01                	mov    BYTE PTR [ecx],al
  4340fc:	eb 09                	jmp    0x434107
  4340fe:	51                   	push   ecx
  4340ff:	e8 ec a4 1c 00       	call   0x5fe5f0
  434104:	83 c4 04             	add    esp,0x4
  434107:	8b cd                	mov    ecx,ebp
  434109:	e8 c2 5b 00 00       	call   0x439cd0
  43410e:	85 c0                	test   eax,eax
  434110:	0f 8c 81 00 00 00    	jl     0x434197
  434116:	6a ff                	push   0xffffffff
  434118:	8b cd                	mov    ecx,ebp
  43411a:	e8 c1 5b 00 00       	call   0x439ce0
  43411f:	84 c0                	test   al,al
  434121:	74 44                	je     0x434167
  434123:	8b 3e                	mov    edi,DWORD PTR [esi]
  434125:	8b cd                	mov    ecx,ebp
  434127:	89 9e 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],ebx
  43412d:	89 9e 78 01 00 00    	mov    DWORD PTR [esi+0x178],ebx
  434133:	89 9e 74 01 00 00    	mov    DWORD PTR [esi+0x174],ebx
  434139:	e8 42 6f 00 00       	call   0x43b080
  43413e:	51                   	push   ecx
  43413f:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  434143:	d9 1c 24             	fstp   DWORD PTR [esp]
  434146:	51                   	push   ecx
  434147:	8b cd                	mov    ecx,ebp
  434149:	e8 12 6f 00 00       	call   0x43b060
  43414e:	50                   	push   eax
  43414f:	8b ce                	mov    ecx,esi
  434151:	ff 57 70             	call   DWORD PTR [edi+0x70]
  434154:	5f                   	pop    edi
  434155:	5e                   	pop    esi
  434156:	5d                   	pop    ebp
  434157:	5b                   	pop    ebx
  434158:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  43415c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  434163:	83 c4 2c             	add    esp,0x2c
  434166:	c3                   	ret
  434167:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  43416c:	3b c3                	cmp    eax,ebx
  43416e:	75 05                	jne    0x434175
  434170:	e8 0b 83 08 00       	call   0x4bc480
  434175:	6a 01                	push   0x1
  434177:	68 08 03 69 00       	push   0x690308
  43417c:	68 e8 02 69 00       	push   0x6902e8
  434181:	53                   	push   ebx
  434182:	50                   	push   eax
  434183:	e8 6a 65 1d 00       	call   0x60a6f2
  434188:	83 c4 14             	add    esp,0x14
  43418b:	e8 00 e0 05 00       	call   0x492190
  434190:	c6 80 a4 00 00 00 01 	mov    BYTE PTR [eax+0xa4],0x1
  434197:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  43419b:	5f                   	pop    edi
  43419c:	5e                   	pop    esi
  43419d:	5d                   	pop    ebp
  43419e:	5b                   	pop    ebx
  43419f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4341a6:	83 c4 2c             	add    esp,0x2c
  4341a9:	c3                   	ret
  4341aa:	90                   	nop
  4341ab:	90                   	nop
  4341ac:	90                   	nop
  4341ad:	90                   	nop
  4341ae:	90                   	nop
  4341af:	90                   	nop
  4341b0:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  4341b5:	56                   	push   esi
  4341b6:	85 c0                	test   eax,eax
  4341b8:	8b f1                	mov    esi,ecx
  4341ba:	75 05                	jne    0x4341c1
  4341bc:	e8 bf 82 08 00       	call   0x4bc480
  4341c1:	6a 01                	push   0x1
  4341c3:	68 08 03 69 00       	push   0x690308
  4341c8:	68 e8 02 69 00       	push   0x6902e8
  4341cd:	6a 00                	push   0x0
  4341cf:	50                   	push   eax
  4341d0:	e8 1d 65 1d 00       	call   0x60a6f2
  4341d5:	83 c4 14             	add    esp,0x14
  4341d8:	8b c8                	mov    ecx,eax
  4341da:	e8 81 e1 05 00       	call   0x492360
  4341df:	8b 10                	mov    edx,DWORD PTR [eax]
  4341e1:	8b c8                	mov    ecx,eax
  4341e3:	ff 52 0c             	call   DWORD PTR [edx+0xc]
  4341e6:	84 c0                	test   al,al
  4341e8:	75 35                	jne    0x43421f
  4341ea:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  4341ee:	50                   	push   eax
  4341ef:	e8 3c 5c fd ff       	call   0x409e30
  4341f4:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  4341fa:	83 c4 04             	add    esp,0x4
  4341fd:	d8 a6 68 03 00 00    	fsub   DWORD PTR [esi+0x368]
  434203:	d8 1d 78 c5 64 00    	fcomp  DWORD PTR ds:0x64c578
  434209:	df e0                	fnstsw ax
  43420b:	f6 c4 01             	test   ah,0x1
  43420e:	74 09                	je     0x434219
  434210:	b8 01 00 00 00       	mov    eax,0x1
  434215:	5e                   	pop    esi
  434216:	c2 04 00             	ret    0x4
  434219:	33 c0                	xor    eax,eax
  43421b:	5e                   	pop    esi
  43421c:	c2 04 00             	ret    0x4
  43421f:	b0 01                	mov    al,0x1
  434221:	5e                   	pop    esi
  434222:	c2 04 00             	ret    0x4
  434225:	90                   	nop
  434226:	90                   	nop
  434227:	90                   	nop
  434228:	90                   	nop
  434229:	90                   	nop
  43422a:	90                   	nop
  43422b:	90                   	nop
  43422c:	90                   	nop
  43422d:	90                   	nop
  43422e:	90                   	nop
  43422f:	90                   	nop
  434230:	6a ff                	push   0xffffffff
  434232:	68 04 3c 62 00       	push   0x623c04
  434237:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  43423d:	50                   	push   eax
  43423e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  434245:	83 ec 30             	sub    esp,0x30
  434248:	53                   	push   ebx
  434249:	55                   	push   ebp
  43424a:	56                   	push   esi
  43424b:	57                   	push   edi
  43424c:	8b f9                	mov    edi,ecx
  43424e:	33 db                	xor    ebx,ebx
  434250:	68 2c 05 00 00       	push   0x52c
  434255:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  434259:	33 f6                	xor    esi,esi
  43425b:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  43425f:	e8 51 5e 1d 00       	call   0x60a0b5
  434264:	83 c4 04             	add    esp,0x4
  434267:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  43426b:	3b c6                	cmp    eax,esi
  43426d:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  434271:	74 0a                	je     0x43427d
  434273:	57                   	push   edi
  434274:	8b c8                	mov    ecx,eax
  434276:	e8 85 3b 02 00       	call   0x457e00
  43427b:	eb 02                	jmp    0x43427f
  43427d:	33 c0                	xor    eax,eax
  43427f:	68 ac 02 00 00       	push   0x2ac
  434284:	c7 44 24 4c ff ff ff 	mov    DWORD PTR [esp+0x4c],0xffffffff
  43428b:	ff 
  43428c:	89 87 50 02 00 00    	mov    DWORD PTR [edi+0x250],eax
  434292:	e8 1e 5e 1d 00       	call   0x60a0b5
  434297:	8b e8                	mov    ebp,eax
  434299:	83 c4 04             	add    esp,0x4
  43429c:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  4342a0:	3b ee                	cmp    ebp,esi
  4342a2:	c7 44 24 48 01 00 00 	mov    DWORD PTR [esp+0x48],0x1
  4342a9:	00 
  4342aa:	0f 84 bd 00 00 00    	je     0x43436d
  4342b0:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4342b4:	bf f0 04 69 00       	mov    edi,0x6904f0
  4342b9:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  4342bd:	83 c9 ff             	or     ecx,0xffffffff
  4342c0:	33 c0                	xor    eax,eax
  4342c2:	6a 01                	push   0x1
  4342c4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4342c6:	f7 d1                	not    ecx
  4342c8:	49                   	dec    ecx
  4342c9:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  4342cd:	8b d9                	mov    ebx,ecx
  4342cf:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4342d3:	53                   	push   ebx
  4342d4:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  4342d8:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  4342dc:	e8 5f d6 fc ff       	call   0x401940
  4342e1:	84 c0                	test   al,al
  4342e3:	74 25                	je     0x43430a
  4342e5:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  4342e9:	8b cb                	mov    ecx,ebx
  4342eb:	8b d1                	mov    edx,ecx
  4342ed:	be f0 04 69 00       	mov    esi,0x6904f0
  4342f2:	c1 e9 02             	shr    ecx,0x2
  4342f5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4342f7:	8b ca                	mov    ecx,edx
  4342f9:	53                   	push   ebx
  4342fa:	83 e1 03             	and    ecx,0x3
  4342fd:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4342ff:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  434303:	e8 88 fe fc ff       	call   0x404190
  434308:	33 f6                	xor    esi,esi
  43430a:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
  434311:	00 
  434312:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  434316:	bf e8 04 69 00       	mov    edi,0x6904e8
  43431b:	88 44 24 30          	mov    BYTE PTR [esp+0x30],al
  43431f:	83 c9 ff             	or     ecx,0xffffffff
  434322:	33 c0                	xor    eax,eax
  434324:	c6 44 24 48 02       	mov    BYTE PTR [esp+0x48],0x2
  434329:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  43432b:	f7 d1                	not    ecx
  43432d:	49                   	dec    ecx
  43432e:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  434332:	51                   	push   ecx
  434333:	68 e8 04 69 00       	push   0x6904e8
  434338:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  43433c:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
  434340:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
  434344:	e8 a7 fd fc ff       	call   0x4040f0
  434349:	bb 03 00 00 00       	mov    ebx,0x3
  43434e:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  434352:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  434356:	8d 54 24 30          	lea    edx,[esp+0x30]
  43435a:	51                   	push   ecx
  43435b:	52                   	push   edx
  43435c:	8b cd                	mov    ecx,ebp
  43435e:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
  434362:	e8 39 9c ff ff       	call   0x42dfa0
  434367:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  43436b:	eb 02                	jmp    0x43436f
  43436d:	33 c0                	xor    eax,eax
  43436f:	8d af 54 02 00 00    	lea    ebp,[edi+0x254]
  434375:	f6 c3 02             	test   bl,0x2
  434378:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
  43437b:	74 34                	je     0x4343b1
  43437d:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  434381:	83 e3 fd             	and    ebx,0xfffffffd
  434384:	3b c6                	cmp    eax,esi
  434386:	74 1d                	je     0x4343a5
  434388:	8d 48 ff             	lea    ecx,[eax-0x1]
  43438b:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  43438e:	84 c0                	test   al,al
  434390:	74 0a                	je     0x43439c
  434392:	3c ff                	cmp    al,0xff
  434394:	74 06                	je     0x43439c
  434396:	fe c8                	dec    al
  434398:	88 01                	mov    BYTE PTR [ecx],al
  43439a:	eb 09                	jmp    0x4343a5
  43439c:	51                   	push   ecx
  43439d:	e8 4e a2 1c 00       	call   0x5fe5f0
  4343a2:	83 c4 04             	add    esp,0x4
  4343a5:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  4343a9:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
  4343ad:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
  4343b1:	f6 c3 01             	test   bl,0x1
  4343b4:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  4343bb:	ff 
  4343bc:	74 31                	je     0x4343ef
  4343be:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  4343c2:	3b c6                	cmp    eax,esi
  4343c4:	74 1d                	je     0x4343e3
  4343c6:	8d 48 ff             	lea    ecx,[eax-0x1]
  4343c9:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4343cc:	84 c0                	test   al,al
  4343ce:	74 0a                	je     0x4343da
  4343d0:	3c ff                	cmp    al,0xff
  4343d2:	74 06                	je     0x4343da
  4343d4:	fe c8                	dec    al
  4343d6:	88 01                	mov    BYTE PTR [ecx],al
  4343d8:	eb 09                	jmp    0x4343e3
  4343da:	51                   	push   ecx
  4343db:	e8 10 a2 1c 00       	call   0x5fe5f0
  4343e0:	83 c4 04             	add    esp,0x4
  4343e3:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  4343e7:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  4343eb:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  4343ef:	8d 87 50 02 00 00    	lea    eax,[edi+0x250]
  4343f5:	8b cf                	mov    ecx,edi
  4343f7:	50                   	push   eax
  4343f8:	8b 00                	mov    eax,DWORD PTR [eax]
  4343fa:	50                   	push   eax
  4343fb:	e8 90 56 0d 00       	call   0x509a90
  434400:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  434403:	55                   	push   ebp
  434404:	51                   	push   ecx
  434405:	8b cf                	mov    ecx,edi
  434407:	e8 84 56 0d 00       	call   0x509a90
  43440c:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  434410:	5f                   	pop    edi
  434411:	5e                   	pop    esi
  434412:	5d                   	pop    ebp
  434413:	b0 01                	mov    al,0x1
  434415:	5b                   	pop    ebx
  434416:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  43441d:	83 c4 3c             	add    esp,0x3c
  434420:	c3                   	ret
  434421:	90                   	nop
  434422:	90                   	nop
  434423:	90                   	nop
  434424:	90                   	nop
  434425:	90                   	nop
  434426:	90                   	nop
  434427:	90                   	nop
  434428:	90                   	nop
  434429:	90                   	nop
  43442a:	90                   	nop
  43442b:	90                   	nop
  43442c:	90                   	nop
  43442d:	90                   	nop
  43442e:	90                   	nop
  43442f:	90                   	nop
  434430:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  434435:	81 ec 88 00 00 00    	sub    esp,0x88
  43443b:	85 c0                	test   eax,eax
  43443d:	53                   	push   ebx
  43443e:	55                   	push   ebp
  43443f:	56                   	push   esi
  434440:	57                   	push   edi
  434441:	8b f1                	mov    esi,ecx
  434443:	75 05                	jne    0x43444a
  434445:	e8 36 80 08 00       	call   0x4bc480
  43444a:	8b 84 24 a8 00 00 00 	mov    eax,DWORD PTR [esp+0xa8]
  434451:	6a 00                	push   0x0
  434453:	68 80 04 69 00       	push   0x690480
  434458:	68 60 04 69 00       	push   0x690460
  43445d:	6a 00                	push   0x0
  43445f:	50                   	push   eax
  434460:	e8 8d 62 1d 00       	call   0x60a6f2
  434465:	8b f8                	mov    edi,eax
  434467:	83 c4 14             	add    esp,0x14
  43446a:	8b cf                	mov    ecx,edi
  43446c:	8b 17                	mov    edx,DWORD PTR [edi]
  43446e:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
  434471:	8b ce                	mov    ecx,esi
  434473:	8a d8                	mov    bl,al
  434475:	e8 56 24 00 00       	call   0x4368d0
  43447a:	8b 86 f0 01 00 00    	mov    eax,DWORD PTR [esi+0x1f0]
  434480:	6a 00                	push   0x0
  434482:	68 40 f9 68 00       	push   0x68f940
  434487:	68 18 f9 68 00       	push   0x68f918
  43448c:	6a 00                	push   0x0
  43448e:	50                   	push   eax
  43448f:	e8 5e 62 1d 00       	call   0x60a6f2
  434494:	8b 17                	mov    edx,DWORD PTR [edi]
  434496:	83 c4 14             	add    esp,0x14
  434499:	8b cf                	mov    ecx,edi
  43449b:	8b e8                	mov    ebp,eax
  43449d:	ff 52 34             	call   DWORD PTR [edx+0x34]
  4344a0:	84 c0                	test   al,al
  4344a2:	0f 84 29 04 00 00    	je     0x4348d1
  4344a8:	8a 86 04 01 00 00    	mov    al,BYTE PTR [esi+0x104]
  4344ae:	84 c0                	test   al,al
  4344b0:	0f 84 1b 04 00 00    	je     0x4348d1
  4344b6:	8a 86 71 03 00 00    	mov    al,BYTE PTR [esi+0x371]
  4344bc:	84 c0                	test   al,al
  4344be:	0f 85 0d 04 00 00    	jne    0x4348d1
  4344c4:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4344c7:	8b cd                	mov    ecx,ebp
  4344c9:	ff 50 24             	call   DWORD PTR [eax+0x24]
  4344cc:	84 c0                	test   al,al
  4344ce:	0f 85 fd 03 00 00    	jne    0x4348d1
  4344d4:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4344d8:	57                   	push   edi
  4344d9:	51                   	push   ecx
  4344da:	8b ce                	mov    ecx,esi
  4344dc:	e8 3f 0a 00 00       	call   0x434f20
  4344e1:	8b 10                	mov    edx,DWORD PTR [eax]
  4344e3:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  4344e7:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  4344ea:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
  4344ee:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4344f2:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  4344f5:	89 54 24 58          	mov    DWORD PTR [esp+0x58],edx
  4344f9:	e8 72 eb 17 00       	call   0x5b3070
  4344fe:	8d 44 24 50          	lea    eax,[esp+0x50]
  434502:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  434506:	50                   	push   eax
  434507:	51                   	push   ecx
  434508:	e8 f3 d0 17 00       	call   0x5b1600
  43450d:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
  434511:	83 c4 04             	add    esp,0x4
  434514:	e8 17 d1 17 00       	call   0x5b1630
  434519:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  43451d:	83 c4 04             	add    esp,0x4
  434520:	8b ce                	mov    ecx,esi
  434522:	e8 39 24 0a 00       	call   0x4d6960
  434527:	51                   	push   ecx
  434528:	d9 1c 24             	fstp   DWORD PTR [esp]
  43452b:	e8 00 d1 17 00       	call   0x5b1630
  434530:	8a 86 64 03 00 00    	mov    al,BYTE PTR [esi+0x364]
  434536:	83 c4 04             	add    esp,0x4
  434539:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  43453d:	84 c0                	test   al,al
  43453f:	0f 84 e4 00 00 00    	je     0x434629
  434545:	8b 86 5c 03 00 00    	mov    eax,DWORD PTR [esi+0x35c]
  43454b:	85 c0                	test   eax,eax
  43454d:	75 12                	jne    0x434561
  43454f:	8b 8e 60 03 00 00    	mov    ecx,DWORD PTR [esi+0x360]
  434555:	85 c9                	test   ecx,ecx
  434557:	0f 84 cc 00 00 00    	je     0x434629
  43455d:	85 c0                	test   eax,eax
  43455f:	74 5e                	je     0x4345bf
  434561:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434567:	8d 44 24 34          	lea    eax,[esp+0x34]
  43456b:	50                   	push   eax
  43456c:	8b 11                	mov    edx,DWORD PTR [ecx]
  43456e:	ff 52 48             	call   DWORD PTR [edx+0x48]
  434571:	8b 08                	mov    ecx,DWORD PTR [eax]
  434573:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  434577:	8b 8e 5c 03 00 00    	mov    ecx,DWORD PTR [esi+0x35c]
  43457d:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  434580:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  434584:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  434587:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  43458b:	8b 11                	mov    edx,DWORD PTR [ecx]
  43458d:	8d 44 24 34          	lea    eax,[esp+0x34]
  434591:	50                   	push   eax
  434592:	ff 52 48             	call   DWORD PTR [edx+0x48]
  434595:	8b 08                	mov    ecx,DWORD PTR [eax]
  434597:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  43459b:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  43459f:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4345a2:	51                   	push   ecx
  4345a3:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  4345a7:	8d 54 24 20          	lea    edx,[esp+0x20]
  4345ab:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4345ae:	52                   	push   edx
  4345af:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  4345b3:	e8 48 d0 17 00       	call   0x5b1600
  4345b8:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  4345bc:	83 c4 08             	add    esp,0x8
  4345bf:	8b 86 60 03 00 00    	mov    eax,DWORD PTR [esi+0x360]
  4345c5:	85 c0                	test   eax,eax
  4345c7:	0f 84 8c 00 00 00    	je     0x434659
  4345cd:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  4345d3:	8d 54 24 34          	lea    edx,[esp+0x34]
  4345d7:	52                   	push   edx
  4345d8:	8b 01                	mov    eax,DWORD PTR [ecx]
  4345da:	ff 50 48             	call   DWORD PTR [eax+0x48]
  4345dd:	8b 08                	mov    ecx,DWORD PTR [eax]
  4345df:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  4345e3:	8b 8e 60 03 00 00    	mov    ecx,DWORD PTR [esi+0x360]
  4345e9:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4345ec:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  4345f0:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4345f3:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  4345f7:	8b 11                	mov    edx,DWORD PTR [ecx]
  4345f9:	8d 44 24 34          	lea    eax,[esp+0x34]
  4345fd:	50                   	push   eax
  4345fe:	ff 52 48             	call   DWORD PTR [edx+0x48]
  434601:	8b 08                	mov    ecx,DWORD PTR [eax]
  434603:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  434607:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  43460b:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  43460e:	51                   	push   ecx
  43460f:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  434613:	8d 54 24 20          	lea    edx,[esp+0x20]
  434617:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  43461a:	52                   	push   edx
  43461b:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  43461f:	e8 dc cf 17 00       	call   0x5b1600
  434624:	83 c4 08             	add    esp,0x8
  434627:	eb 2c                	jmp    0x434655
  434629:	84 db                	test   bl,bl
  43462b:	74 0a                	je     0x434637
  43462d:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  434631:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  434635:	eb 22                	jmp    0x434659
  434637:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  43463b:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  43463f:	51                   	push   ecx
  434640:	52                   	push   edx
  434641:	e8 ba cf 17 00       	call   0x5b1600
  434646:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
  43464a:	83 c4 04             	add    esp,0x4
  43464d:	e8 de cf 17 00       	call   0x5b1630
  434652:	83 c4 04             	add    esp,0x4
  434655:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  434659:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  43465d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  434663:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  43466a:	00 
  43466b:	c7 44 24 44 00 00 80 	mov    DWORD PTR [esp+0x44],0x3f800000
  434672:	3f 
  434673:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
  43467a:	00 
  43467b:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  434682:	00 
  434683:	df e0                	fnstsw ax
  434685:	f6 c4 01             	test   ah,0x1
  434688:	75 5b                	jne    0x4346e5
  43468a:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  43468e:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  434694:	df e0                	fnstsw ax
  434696:	f6 c4 01             	test   ah,0x1
  434699:	74 35                	je     0x4346d0
  43469b:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  43469f:	dc 1d 90 c5 64 00    	fcomp  QWORD PTR ds:0x64c590
  4346a5:	df e0                	fnstsw ax
  4346a7:	f6 c4 01             	test   ah,0x1
  4346aa:	74 24                	je     0x4346d0
  4346ac:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  4346b0:	d8 05 d4 b1 64 00    	fadd   DWORD PTR ds:0x64b1d4
  4346b6:	c7 44 24 18 db 0f c9 	mov    DWORD PTR [esp+0x18],0x3fc90fdb
  4346bd:	3f 
  4346be:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  4346c2:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  4346c6:	d8 05 d4 b1 64 00    	fadd   DWORD PTR ds:0x64b1d4
  4346cc:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  4346d0:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  4346d4:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4346da:	df e0                	fnstsw ax
  4346dc:	f6 c4 01             	test   ah,0x1
  4346df:	0f 84 80 00 00 00    	je     0x434765
  4346e5:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  4346e9:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4346ef:	df e0                	fnstsw ax
  4346f1:	f6 c4 01             	test   ah,0x1
  4346f4:	75 35                	jne    0x43472b
  4346f6:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  4346fa:	dc 1d 88 c5 64 00    	fcomp  QWORD PTR ds:0x64c588
  434700:	df e0                	fnstsw ax
  434702:	f6 c4 41             	test   ah,0x41
  434705:	75 24                	jne    0x43472b
  434707:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  43470b:	d8 05 d4 b1 64 00    	fadd   DWORD PTR ds:0x64b1d4
  434711:	c7 44 24 18 db 0f c9 	mov    DWORD PTR [esp+0x18],0x3fc90fdb
  434718:	3f 
  434719:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  43471d:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  434721:	d8 05 d4 b1 64 00    	fadd   DWORD PTR ds:0x64b1d4
  434727:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  43472b:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  43472f:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  434735:	df e0                	fnstsw ax
  434737:	f6 c4 01             	test   ah,0x1
  43473a:	74 29                	je     0x434765
  43473c:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  434740:	d8 05 d8 b1 64 00    	fadd   DWORD PTR ds:0x64b1d8
  434746:	d9 54 24 14          	fst    DWORD PTR [esp+0x14]
  43474a:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  434750:	df e0                	fnstsw ax
  434752:	f6 c4 01             	test   ah,0x1
  434755:	74 0e                	je     0x434765
  434757:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  43475b:	d8 05 d8 b1 64 00    	fadd   DWORD PTR ds:0x64b1d8
  434761:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  434765:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  434769:	8d 54 24 40          	lea    edx,[esp+0x40]
  43476d:	50                   	push   eax
  43476e:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
  434775:	e8 c6 0d 18 00       	call   0x5b5540
  43477a:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  43477e:	8d 54 24 40          	lea    edx,[esp+0x40]
  434782:	51                   	push   ecx
  434783:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  434787:	e8 b4 0d 18 00       	call   0x5b5540
  43478c:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  434790:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  434794:	d9 e1                	fabs
  434796:	dc 1d 80 c5 64 00    	fcomp  QWORD PTR ds:0x64c580
  43479c:	df e0                	fnstsw ax
  43479e:	f6 c4 01             	test   ah,0x1
  4347a1:	75 55                	jne    0x4347f8
  4347a3:	8b 15 24 c4 64 00    	mov    edx,DWORD PTR ds:0x64c424
  4347a9:	8b 07                	mov    eax,DWORD PTR [edi]
  4347ab:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4347af:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  4347b3:	51                   	push   ecx
  4347b4:	8b cf                	mov    ecx,edi
  4347b6:	ff 50 24             	call   DWORD PTR [eax+0x24]
  4347b9:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  4347bc:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4347c2:	df e0                	fnstsw ax
  4347c4:	f6 c4 40             	test   ah,0x40
  4347c7:	75 0a                	jne    0x4347d3
  4347c9:	8b 15 28 c4 64 00    	mov    edx,DWORD PTR ds:0x64c428
  4347cf:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  4347d3:	8b 84 24 a0 00 00 00 	mov    eax,DWORD PTR [esp+0xa0]
  4347da:	50                   	push   eax
  4347db:	e8 50 56 fd ff       	call   0x409e30
  4347e0:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  4347e4:	83 c4 04             	add    esp,0x4
  4347e7:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
  4347eb:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  4347f1:	df e0                	fnstsw ax
  4347f3:	f6 c4 41             	test   ah,0x41
  4347f6:	75 08                	jne    0x434800
  4347f8:	c7 44 24 10 00 00 80 	mov    DWORD PTR [esp+0x10],0x3f800000
  4347ff:	3f 
  434800:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  434804:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  434808:	51                   	push   ecx
  434809:	52                   	push   edx
  43480a:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  434811:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  434818:	e8 d3 11 18 00       	call   0x5b59f0
  43481d:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  434821:	e8 5a 15 18 00       	call   0x5b5d80
  434826:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  43482a:	8d 54 24 40          	lea    edx,[esp+0x40]
  43482e:	50                   	push   eax
  43482f:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  434833:	dd d8                	fstp   st(0)
  434835:	e8 36 0d 18 00       	call   0x5b5570
  43483a:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
  43483e:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  434842:	51                   	push   ecx
  434843:	d9 1c 24             	fstp   DWORD PTR [esp]
  434846:	e8 e5 cd 17 00       	call   0x5b1630
  43484b:	8b 17                	mov    edx,DWORD PTR [edi]
  43484d:	83 c4 04             	add    esp,0x4
  434850:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  434854:	8d 44 24 34          	lea    eax,[esp+0x34]
  434858:	8b cf                	mov    ecx,edi
  43485a:	50                   	push   eax
  43485b:	ff 52 24             	call   DWORD PTR [edx+0x24]
  43485e:	8b d0                	mov    edx,eax
  434860:	8b 02                	mov    eax,DWORD PTR [edx]
  434862:	a3 70 01 69 00       	mov    ds:0x690170,eax
  434867:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  43486a:	89 0d 74 01 69 00    	mov    DWORD PTR ds:0x690174,ecx
  434870:	8b 72 08             	mov    esi,DWORD PTR [edx+0x8]
  434873:	8a 15 c4 52 6b 00    	mov    dl,BYTE PTR ds:0x6b52c4
  434879:	f6 c2 01             	test   dl,0x1
  43487c:	89 35 78 01 69 00    	mov    DWORD PTR ds:0x690178,esi
  434882:	75 1a                	jne    0x43489e
  434884:	80 ca 01             	or     dl,0x1
  434887:	a3 b8 52 6b 00       	mov    ds:0x6b52b8,eax
  43488c:	88 15 c4 52 6b 00    	mov    BYTE PTR ds:0x6b52c4,dl
  434892:	89 0d bc 52 6b 00    	mov    DWORD PTR ds:0x6b52bc,ecx
  434898:	89 35 c0 52 6b 00    	mov    DWORD PTR ds:0x6b52c0,esi
  43489e:	84 db                	test   bl,bl
  4348a0:	75 06                	jne    0x4348a8
  4348a2:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  4348a6:	eb 04                	jmp    0x4348ac
  4348a8:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  4348ac:	dc 25 90 c5 64 00    	fsub   QWORD PTR ds:0x64c590
  4348b2:	68 b8 52 6b 00       	push   0x6b52b8
  4348b7:	8b cf                	mov    ecx,edi
  4348b9:	d9 1d bc 52 6b 00    	fstp   DWORD PTR ds:0x6b52bc
  4348bf:	e8 8c 2e 00 00       	call   0x437750
  4348c4:	5f                   	pop    edi
  4348c5:	5e                   	pop    esi
  4348c6:	5d                   	pop    ebp
  4348c7:	5b                   	pop    ebx
  4348c8:	81 c4 88 00 00 00    	add    esp,0x88
  4348ce:	c2 10 00             	ret    0x10
  4348d1:	8b 8c 24 a4 00 00 00 	mov    ecx,DWORD PTR [esp+0xa4]
  4348d8:	8d 54 24 34          	lea    edx,[esp+0x34]
  4348dc:	52                   	push   edx
  4348dd:	8b 01                	mov    eax,DWORD PTR [ecx]
  4348df:	ff 50 28             	call   DWORD PTR [eax+0x28]
  4348e2:	50                   	push   eax
  4348e3:	8b cf                	mov    ecx,edi
  4348e5:	e8 66 2e 00 00       	call   0x437750
  4348ea:	5f                   	pop    edi
  4348eb:	5e                   	pop    esi
  4348ec:	5d                   	pop    ebp
  4348ed:	5b                   	pop    ebx
  4348ee:	81 c4 88 00 00 00    	add    esp,0x88
  4348f4:	c2 10 00             	ret    0x10
  4348f7:	90                   	nop
  4348f8:	90                   	nop
  4348f9:	90                   	nop
  4348fa:	90                   	nop
  4348fb:	90                   	nop
  4348fc:	90                   	nop
  4348fd:	90                   	nop
  4348fe:	90                   	nop
  4348ff:	90                   	nop
  434900:	a0 b0 52 6b 00       	mov    al,ds:0x6b52b0
  434905:	83 ec 44             	sub    esp,0x44
  434908:	a8 01                	test   al,0x1
  43490a:	53                   	push   ebx
  43490b:	55                   	push   ebp
  43490c:	56                   	push   esi
  43490d:	57                   	push   edi
  43490e:	8b f1                	mov    esi,ecx
  434910:	75 36                	jne    0x434948
  434912:	8a d0                	mov    dl,al
  434914:	83 c8 ff             	or     eax,0xffffffff
  434917:	80 ca 01             	or     dl,0x1
  43491a:	68 20 4e 43 00       	push   0x434e20
  43491f:	88 15 b0 52 6b 00    	mov    BYTE PTR ds:0x6b52b0,dl
  434925:	a3 a0 52 6b 00       	mov    ds:0x6b52a0,eax
  43492a:	a3 a4 52 6b 00       	mov    ds:0x6b52a4,eax
  43492f:	c7 05 a8 52 6b 00 00 	mov    DWORD PTR ds:0x6b52a8,0x3f800000
  434936:	00 80 3f 
  434939:	c6 05 ac 52 6b 00 01 	mov    BYTE PTR ds:0x6b52ac,0x1
  434940:	e8 36 5c 1d 00       	call   0x60a57b
  434945:	83 c4 04             	add    esp,0x4
  434948:	8b 86 5c 03 00 00    	mov    eax,DWORD PTR [esi+0x35c]
  43494e:	33 db                	xor    ebx,ebx
  434950:	3b c3                	cmp    eax,ebx
  434952:	75 3e                	jne    0x434992
  434954:	39 9e 60 03 00 00    	cmp    DWORD PTR [esi+0x360],ebx
  43495a:	75 36                	jne    0x434992
  43495c:	8b 8e 34 03 00 00    	mov    ecx,DWORD PTR [esi+0x334]
  434962:	e8 d9 c7 03 00       	call   0x471140
  434967:	8b 8e 38 03 00 00    	mov    ecx,DWORD PTR [esi+0x338]
  43496d:	53                   	push   ebx
  43496e:	e8 6d f3 01 00       	call   0x453ce0
  434973:	38 1d 44 58 6b 00    	cmp    BYTE PTR ds:0x6b5844,bl
  434979:	74 11                	je     0x43498c
  43497b:	8b 8e 50 02 00 00    	mov    ecx,DWORD PTR [esi+0x250]
  434981:	e8 0a 46 02 00       	call   0x458f90
  434986:	88 1d 44 58 6b 00    	mov    BYTE PTR ds:0x6b5844,bl
  43498c:	88 9e 64 03 00 00    	mov    BYTE PTR [esi+0x364],bl
  434992:	38 9e 64 03 00 00    	cmp    BYTE PTR [esi+0x364],bl
  434998:	0f 84 2d 01 00 00    	je     0x434acb
  43499e:	8b 86 5c 03 00 00    	mov    eax,DWORD PTR [esi+0x35c]
  4349a4:	3b c3                	cmp    eax,ebx
  4349a6:	0f 84 99 00 00 00    	je     0x434a45
  4349ac:	53                   	push   ebx
  4349ad:	68 70 f7 68 00       	push   0x68f770
  4349b2:	68 b8 ec 68 00       	push   0x68ecb8
  4349b7:	53                   	push   ebx
  4349b8:	50                   	push   eax
  4349b9:	e8 34 5d 1d 00       	call   0x60a6f2
  4349be:	83 c4 14             	add    esp,0x14
  4349c1:	3b c3                	cmp    eax,ebx
  4349c3:	74 0a                	je     0x4349cf
  4349c5:	8b c8                	mov    ecx,eax
  4349c7:	e8 a4 d9 fe ff       	call   0x422370
  4349cc:	50                   	push   eax
  4349cd:	eb 2a                	jmp    0x4349f9
  4349cf:	8b 86 5c 03 00 00    	mov    eax,DWORD PTR [esi+0x35c]
  4349d5:	53                   	push   ebx
  4349d6:	68 60 ff 68 00       	push   0x68ff60
  4349db:	68 b8 ec 68 00       	push   0x68ecb8
  4349e0:	53                   	push   ebx
  4349e1:	50                   	push   eax
  4349e2:	e8 0b 5d 1d 00       	call   0x60a6f2
  4349e7:	83 c4 14             	add    esp,0x14
  4349ea:	3b c3                	cmp    eax,ebx
  4349ec:	74 0a                	je     0x4349f8
  4349ee:	8b c8                	mov    ecx,eax
  4349f0:	e8 9b 5b ff ff       	call   0x42a590
  4349f5:	50                   	push   eax
  4349f6:	eb 01                	jmp    0x4349f9
  4349f8:	53                   	push   ebx
  4349f9:	8b 8e 38 03 00 00    	mov    ecx,DWORD PTR [esi+0x338]
  4349ff:	e8 dc f2 01 00       	call   0x453ce0
  434a04:	8b 96 5c 03 00 00    	mov    edx,DWORD PTR [esi+0x35c]
  434a0a:	8b 8e 50 02 00 00    	mov    ecx,DWORD PTR [esi+0x250]
  434a10:	6a 01                	push   0x1
  434a12:	52                   	push   edx
  434a13:	6a 09                	push   0x9
  434a15:	e8 56 48 02 00       	call   0x459270
  434a1a:	8d 44 24 38          	lea    eax,[esp+0x38]
  434a1e:	c6 05 44 58 6b 00 01 	mov    BYTE PTR ds:0x6b5844,0x1
  434a25:	8b 8e 5c 03 00 00    	mov    ecx,DWORD PTR [esi+0x35c]
  434a2b:	50                   	push   eax
  434a2c:	e8 4f 72 06 00       	call   0x49bc80
  434a31:	8b 08                	mov    ecx,DWORD PTR [eax]
  434a33:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  434a37:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  434a3a:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  434a3e:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  434a41:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  434a45:	8b 86 60 03 00 00    	mov    eax,DWORD PTR [esi+0x360]
  434a4b:	3b c3                	cmp    eax,ebx
  434a4d:	74 46                	je     0x434a95
  434a4f:	8b 8e 50 02 00 00    	mov    ecx,DWORD PTR [esi+0x250]
  434a55:	53                   	push   ebx
  434a56:	50                   	push   eax
  434a57:	6a 09                	push   0x9
  434a59:	e8 12 48 02 00       	call   0x459270
  434a5e:	c6 05 44 58 6b 00 01 	mov    BYTE PTR ds:0x6b5844,0x1
  434a65:	8b 8e 60 03 00 00    	mov    ecx,DWORD PTR [esi+0x360]
  434a6b:	8d 44 24 38          	lea    eax,[esp+0x38]
  434a6f:	8b 11                	mov    edx,DWORD PTR [ecx]
  434a71:	50                   	push   eax
  434a72:	ff 52 48             	call   DWORD PTR [edx+0x48]
  434a75:	8b 08                	mov    ecx,DWORD PTR [eax]
  434a77:	53                   	push   ebx
  434a78:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  434a7c:	8b 8e 38 03 00 00    	mov    ecx,DWORD PTR [esi+0x338]
  434a82:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  434a85:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  434a89:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  434a8c:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  434a90:	e8 4b f2 01 00       	call   0x453ce0
  434a95:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  434a99:	8d 54 24 38          	lea    edx,[esp+0x38]
  434a9d:	51                   	push   ecx
  434a9e:	52                   	push   edx
  434a9f:	8b ce                	mov    ecx,esi
  434aa1:	e8 da 03 00 00       	call   0x434e80
  434aa6:	8b d0                	mov    edx,eax
  434aa8:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  434aac:	e8 2f e5 17 00       	call   0x5b2fe0
  434ab1:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  434ab5:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  434ab9:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  434abd:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  434ac1:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  434ac5:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  434ac9:	eb 59                	jmp    0x434b24
  434acb:	8b ce                	mov    ecx,esi
  434acd:	e8 8e 1e 0a 00       	call   0x4d6960
  434ad2:	51                   	push   ecx
  434ad3:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  434ad7:	d9 1c 24             	fstp   DWORD PTR [esp]
  434ada:	50                   	push   eax
  434adb:	e8 c0 cb 17 00       	call   0x5b16a0
  434ae0:	8b 08                	mov    ecx,DWORD PTR [eax]
  434ae2:	83 c4 08             	add    esp,0x8
  434ae5:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  434ae9:	8b 8e 38 03 00 00    	mov    ecx,DWORD PTR [esi+0x338]
  434aef:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  434af2:	53                   	push   ebx
  434af3:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  434af7:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
  434afe:	00 
  434aff:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  434b02:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  434b06:	e8 d5 f1 01 00       	call   0x453ce0
  434b0b:	38 1d 44 58 6b 00    	cmp    BYTE PTR ds:0x6b5844,bl
  434b11:	74 11                	je     0x434b24
  434b13:	8b 8e 50 02 00 00    	mov    ecx,DWORD PTR [esi+0x250]
  434b19:	e8 72 44 02 00       	call   0x458f90
  434b1e:	88 1d 44 58 6b 00    	mov    BYTE PTR ds:0x6b5844,bl
  434b24:	8b ce                	mov    ecx,esi
  434b26:	e8 05 03 00 00       	call   0x434e30
  434b2b:	8b e8                	mov    ebp,eax
  434b2d:	83 fd 0b             	cmp    ebp,0xb
  434b30:	0f 85 ef 00 00 00    	jne    0x434c25
  434b36:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  434b3a:	51                   	push   ecx
  434b3b:	8b ce                	mov    ecx,esi
  434b3d:	e8 de 1b 00 00       	call   0x436720
  434b42:	d9 54 24 58          	fst    DWORD PTR [esp+0x58]
  434b46:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  434b4c:	df e0                	fnstsw ax
  434b4e:	f6 c4 41             	test   ah,0x41
  434b51:	75 0a                	jne    0x434b5d
  434b53:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
  434b57:	89 15 7c 01 69 00    	mov    DWORD PTR ds:0x69017c,edx
  434b5d:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  434b62:	3b c3                	cmp    eax,ebx
  434b64:	75 05                	jne    0x434b6b
  434b66:	e8 15 79 08 00       	call   0x4bc480
  434b6b:	6a 01                	push   0x1
  434b6d:	68 08 03 69 00       	push   0x690308
  434b72:	68 e8 02 69 00       	push   0x6902e8
  434b77:	53                   	push   ebx
  434b78:	50                   	push   eax
  434b79:	e8 74 5b 1d 00       	call   0x60a6f2
  434b7e:	83 c4 14             	add    esp,0x14
  434b81:	8b c8                	mov    ecx,eax
  434b83:	e8 d8 d7 05 00       	call   0x492360
  434b88:	8b 10                	mov    edx,DWORD PTR [eax]
  434b8a:	8b c8                	mov    ecx,eax
  434b8c:	ff 52 0c             	call   DWORD PTR [edx+0xc]
  434b8f:	84 c0                	test   al,al
  434b91:	75 38                	jne    0x434bcb
  434b93:	8b ce                	mov    ecx,esi
  434b95:	e8 96 1e 00 00       	call   0x436a30
  434b9a:	39 1d 4c 58 6b 00    	cmp    DWORD PTR ds:0x6b584c,ebx
  434ba0:	0f 85 a9 00 00 00    	jne    0x434c4f
  434ba6:	c7 05 4c 58 6b 00 01 	mov    DWORD PTR ds:0x6b584c,0x1
  434bad:	00 00 00 
  434bb0:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434bb6:	68 33 33 f3 3f       	push   0x3ff33333
  434bbb:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434bc1:	e8 0a c0 06 00       	call   0x4a0bd0
  434bc6:	e9 84 00 00 00       	jmp    0x434c4f
  434bcb:	39 1d 4c 58 6b 00    	cmp    DWORD PTR ds:0x6b584c,ebx
  434bd1:	75 07                	jne    0x434bda
  434bd3:	8b ce                	mov    ecx,esi
  434bd5:	e8 66 1f 00 00       	call   0x436b40
  434bda:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434be0:	68 b8 1e 85 3e       	push   0x3e851eb8
  434be5:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434beb:	e8 30 c2 06 00       	call   0x4a0e20
  434bf0:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434bf6:	53                   	push   ebx
  434bf7:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434bfd:	e8 ce bf 06 00       	call   0x4a0bd0
  434c02:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
  434c06:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  434c0c:	51                   	push   ecx
  434c0d:	8b ce                	mov    ecx,esi
  434c0f:	d9 1c 24             	fstp   DWORD PTR [esp]
  434c12:	e8 a9 cc ff ff       	call   0x4318c0
  434c17:	89 9e 6c 03 00 00    	mov    DWORD PTR [esi+0x36c],ebx
  434c1d:	89 1d 4c 58 6b 00    	mov    DWORD PTR ds:0x6b584c,ebx
  434c23:	eb 2a                	jmp    0x434c4f
  434c25:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434c2b:	68 33 33 f3 3f       	push   0x3ff33333
  434c30:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434c36:	e8 95 bf 06 00       	call   0x4a0bd0
  434c3b:	c7 05 7c 01 69 00 00 	mov    DWORD PTR ds:0x69017c,0x42c80000
  434c42:	00 c8 42 
  434c45:	c7 05 4c 58 6b 00 01 	mov    DWORD PTR ds:0x6b584c,0x1
  434c4c:	00 00 00 
  434c4f:	8d 44 24 38          	lea    eax,[esp+0x38]
  434c53:	8b ce                	mov    ecx,esi
  434c55:	50                   	push   eax
  434c56:	e8 25 02 00 00       	call   0x434e80
  434c5b:	8b 08                	mov    ecx,DWORD PTR [eax]
  434c5d:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  434c61:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  434c64:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  434c68:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  434c6b:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  434c6f:	8a 86 94 03 00 00    	mov    al,BYTE PTR [esi+0x394]
  434c75:	3a c3                	cmp    al,bl
  434c77:	74 7e                	je     0x434cf7
  434c79:	39 9e 90 03 00 00    	cmp    DWORD PTR [esi+0x390],ebx
  434c7f:	74 62                	je     0x434ce3
  434c81:	8b 3d 5c 91 6b 00    	mov    edi,DWORD PTR ds:0x6b915c
  434c87:	3b fb                	cmp    edi,ebx
  434c89:	75 07                	jne    0x434c92
  434c8b:	e8 f0 77 08 00       	call   0x4bc480
  434c90:	8b f8                	mov    edi,eax
  434c92:	8b 87 e8 04 00 00    	mov    eax,DWORD PTR [edi+0x4e8]
  434c98:	3d 00 00 00 80       	cmp    eax,0x80000000
  434c9d:	75 1e                	jne    0x434cbd
  434c9f:	8b 87 9c 04 00 00    	mov    eax,DWORD PTR [edi+0x49c]
  434ca5:	3b c3                	cmp    eax,ebx
  434ca7:	75 05                	jne    0x434cae
  434ca9:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  434cae:	50                   	push   eax
  434caf:	e8 5c 62 1d 00       	call   0x60af10
  434cb4:	83 c4 04             	add    esp,0x4
  434cb7:	89 87 e8 04 00 00    	mov    DWORD PTR [edi+0x4e8],eax
  434cbd:	3b c3                	cmp    eax,ebx
  434cbf:	75 22                	jne    0x434ce3
  434cc1:	8b 8e 90 03 00 00    	mov    ecx,DWORD PTR [esi+0x390]
  434cc7:	8d 54 24 38          	lea    edx,[esp+0x38]
  434ccb:	52                   	push   edx
  434ccc:	8b 39                	mov    edi,DWORD PTR [ecx]
  434cce:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434cd4:	e8 a7 6f 06 00       	call   0x49bc80
  434cd9:	8b 8e 90 03 00 00    	mov    ecx,DWORD PTR [esi+0x390]
  434cdf:	50                   	push   eax
  434ce0:	ff 57 4c             	call   DWORD PTR [edi+0x4c]
  434ce3:	8b 8e 30 03 00 00    	mov    ecx,DWORD PTR [esi+0x330]
  434ce9:	3b cb                	cmp    ecx,ebx
  434ceb:	74 0a                	je     0x434cf7
  434ced:	8b 01                	mov    eax,DWORD PTR [ecx]
  434cef:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  434cf3:	52                   	push   edx
  434cf4:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  434cf7:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434cfd:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434d03:	e8 58 c3 06 00       	call   0x4a1060
  434d08:	d8 1d 98 c5 64 00    	fcomp  DWORD PTR ds:0x64c598
  434d0e:	df e0                	fnstsw ax
  434d10:	f6 c4 41             	test   ah,0x41
  434d13:	0f 85 fb 00 00 00    	jne    0x434e14
  434d19:	39 1d 4c 58 6b 00    	cmp    DWORD PTR ds:0x6b584c,ebx
  434d1f:	0f 84 ef 00 00 00    	je     0x434e14
  434d25:	d9 86 6c 03 00 00    	fld    DWORD PTR [esi+0x36c]
  434d2b:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  434d31:	df e0                	fnstsw ax
  434d33:	f6 c4 40             	test   ah,0x40
  434d36:	0f 84 d8 00 00 00    	je     0x434e14
  434d3c:	83 fd 0b             	cmp    ebp,0xb
  434d3f:	8b ce                	mov    ecx,esi
  434d41:	75 07                	jne    0x434d4a
  434d43:	e8 e8 1c 00 00       	call   0x436a30
  434d48:	eb 05                	jmp    0x434d4f
  434d4a:	e8 f1 1d 00 00       	call   0x436b40
  434d4f:	8b ce                	mov    ecx,esi
  434d51:	e8 ca ca ff ff       	call   0x431820
  434d56:	8d 44 24 58          	lea    eax,[esp+0x58]
  434d5a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  434d5e:	50                   	push   eax
  434d5f:	6a 01                	push   0x1
  434d61:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  434d65:	83 ec 0c             	sub    esp,0xc
  434d68:	8b cc                	mov    ecx,esp
  434d6a:	89 11                	mov    DWORD PTR [ecx],edx
  434d6c:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  434d70:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  434d73:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  434d77:	50                   	push   eax
  434d78:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  434d7b:	8b ce                	mov    ecx,esi
  434d7d:	e8 fe 00 00 00       	call   0x434e80
  434d82:	8b 10                	mov    edx,DWORD PTR [eax]
  434d84:	83 ec 0c             	sub    esp,0xc
  434d87:	8b cc                	mov    ecx,esp
  434d89:	55                   	push   ebp
  434d8a:	89 11                	mov    DWORD PTR [ecx],edx
  434d8c:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  434d8f:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  434d92:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  434d95:	51                   	push   ecx
  434d96:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  434d99:	8b cc                	mov    ecx,esp
  434d9b:	89 64 24 38          	mov    DWORD PTR [esp+0x38],esp
  434d9f:	51                   	push   ecx
  434da0:	8b ce                	mov    ecx,esi
  434da2:	e8 39 f5 fc ff       	call   0x4042e0
  434da7:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  434dab:	52                   	push   edx
  434dac:	e8 af 84 01 00       	call   0x44d260
  434db1:	d9 05 7c 01 69 00    	fld    DWORD PTR ds:0x69017c
  434db7:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  434dbd:	8b 8c 24 84 00 00 00 	mov    ecx,DWORD PTR [esp+0x84]
  434dc4:	83 c4 2c             	add    esp,0x2c
  434dc7:	d8 89 d8 01 00 00    	fmul   DWORD PTR [ecx+0x1d8]
  434dcd:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  434dd3:	df e0                	fnstsw ax
  434dd5:	f6 c4 01             	test   ah,0x1
  434dd8:	74 08                	je     0x434de2
  434dda:	dd d8                	fstp   st(0)
  434ddc:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  434de2:	d9 99 d8 01 00 00    	fstp   DWORD PTR [ecx+0x1d8]
  434de8:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  434dec:	d9 80 d8 01 00 00    	fld    DWORD PTR [eax+0x1d8]
  434df2:	d8 0d 78 be 64 00    	fmul   DWORD PTR ds:0x64be78
  434df8:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  434dfe:	d9 98 d8 01 00 00    	fstp   DWORD PTR [eax+0x1d8]
  434e04:	c7 86 6c 03 00 00 00 	mov    DWORD PTR [esi+0x36c],0x3f800000
  434e0b:	00 80 3f 
  434e0e:	89 1d 4c 58 6b 00    	mov    DWORD PTR ds:0x6b584c,ebx
  434e14:	5f                   	pop    edi
  434e15:	5e                   	pop    esi
  434e16:	5d                   	pop    ebp
  434e17:	5b                   	pop    ebx
  434e18:	83 c4 44             	add    esp,0x44
  434e1b:	c2 04 00             	ret    0x4
  434e1e:	90                   	nop
  434e1f:	90                   	nop
  434e20:	c3                   	ret
  434e21:	90                   	nop
  434e22:	90                   	nop
  434e23:	90                   	nop
  434e24:	90                   	nop
  434e25:	90                   	nop
  434e26:	90                   	nop
  434e27:	90                   	nop
  434e28:	90                   	nop
  434e29:	90                   	nop
  434e2a:	90                   	nop
  434e2b:	90                   	nop
  434e2c:	90                   	nop
  434e2d:	90                   	nop
  434e2e:	90                   	nop
  434e2f:	90                   	nop
