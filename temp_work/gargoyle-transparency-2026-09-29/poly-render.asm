  5b6483:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b6487:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  5b648b:	8d 54 24 48          	lea    edx,[esp+0x48]
  5b648f:	50                   	push   eax
  5b6490:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5b6494:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
  5b6498:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5b649c:	e8 ff ca ff ff       	call   0x5b2fa0
  5b64a1:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5b64a5:	8d 54 24 38          	lea    edx,[esp+0x38]
  5b64a9:	51                   	push   ecx
  5b64aa:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5b64ae:	e8 ed ca ff ff       	call   0x5b2fa0
  5b64b3:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  5b64b7:	d8 64 24 48          	fsub   DWORD PTR [esp+0x48]
  5b64bb:	33 c9                	xor    ecx,ecx
  5b64bd:	8d 43 24             	lea    eax,[ebx+0x24]
  5b64c0:	89 4b 0c             	mov    DWORD PTR [ebx+0xc],ecx
  5b64c3:	89 4b 10             	mov    DWORD PTR [ebx+0x10],ecx
  5b64c6:	d9 c0                	fld    st(0)
  5b64c8:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  5b64cc:	d9 1b                	fstp   DWORD PTR [ebx]
  5b64ce:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  5b64d2:	d8 64 24 4c          	fsub   DWORD PTR [esp+0x4c]
  5b64d6:	d9 54 24 14          	fst    DWORD PTR [esp+0x14]
  5b64da:	d8 44 24 3c          	fadd   DWORD PTR [esp+0x3c]
  5b64de:	d9 5b 04             	fstp   DWORD PTR [ebx+0x4]
  5b64e1:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  5b64e5:	d8 64 24 50          	fsub   DWORD PTR [esp+0x50]
  5b64e9:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
  5b64ed:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
  5b64f1:	d9 5b 08             	fstp   DWORD PTR [ebx+0x8]
  5b64f4:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  5b64f8:	d8 44 24 48          	fadd   DWORD PTR [esp+0x48]
  5b64fc:	ba 00 00 80 3f       	mov    edx,0x3f800000
  5b6501:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
  5b6504:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
  5b6507:	83 c0 24             	add    eax,0x24
  5b650a:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
  5b650e:	83 c0 24             	add    eax,0x24
  5b6511:	57                   	push   edi
  5b6512:	d9 58 b8             	fstp   DWORD PTR [eax-0x48]
  5b6515:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
  5b6519:	d8 44 24 50          	fadd   DWORD PTR [esp+0x50]
  5b651d:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  5b6521:	d9 58 bc             	fstp   DWORD PTR [eax-0x44]
  5b6524:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  5b6528:	d8 44 24 54          	fadd   DWORD PTR [esp+0x54]
  5b652c:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  5b6530:	d9 58 c0             	fstp   DWORD PTR [eax-0x40]
  5b6533:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
  5b6537:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  5b653b:	89 50 e8             	mov    DWORD PTR [eax-0x18],edx
  5b653e:	89 50 ec             	mov    DWORD PTR [eax-0x14],edx
  5b6541:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
  5b6545:	d9 58 dc             	fstp   DWORD PTR [eax-0x24]
  5b6548:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  5b654c:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  5b6550:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
  5b6554:	d9 58 e0             	fstp   DWORD PTR [eax-0x20]
  5b6557:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
  5b655b:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  5b655f:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
  5b6563:	d9 58 e4             	fstp   DWORD PTR [eax-0x1c]
  5b6566:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
  5b6569:	8b 94 24 18 01 00 00 	mov    edx,DWORD PTR [esp+0x118]
  5b6570:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
  5b6574:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
  5b6577:	52                   	push   edx
  5b6578:	55                   	push   ebp
  5b6579:	d9 18                	fstp   DWORD PTR [eax]
  5b657b:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  5b657f:	d8 64 24 48          	fsub   DWORD PTR [esp+0x48]
  5b6583:	d9 58 04             	fstp   DWORD PTR [eax+0x4]
  5b6586:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  5b658a:	d8 64 24 4c          	fsub   DWORD PTR [esp+0x4c]
  5b658e:	d9 58 08             	fstp   DWORD PTR [eax+0x8]
  5b6591:	8b 84 24 18 01 00 00 	mov    eax,DWORD PTR [esp+0x118]
  5b6598:	50                   	push   eax
  5b6599:	e8 42 04 00 00       	call   0x5b69e0
  5b659e:	83 c4 10             	add    esp,0x10
  5b65a1:	b9 09 00 00 00       	mov    ecx,0x9
  5b65a6:	8d b4 24 e4 00 00 00 	lea    esi,[esp+0xe4]
  5b65ad:	8b fb                	mov    edi,ebx
  5b65af:	c7 85 9c 00 00 00 01 	mov    DWORD PTR [ebp+0x9c],0x1
  5b65b6:	00 00 00 
  5b65b9:	5d                   	pop    ebp
  5b65ba:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5b65bc:	5b                   	pop    ebx
  5b65bd:	5f                   	pop    edi
  5b65be:	b8 01 00 00 00       	mov    eax,0x1
  5b65c3:	5e                   	pop    esi
  5b65c4:	81 c4 f8 00 00 00    	add    esp,0xf8
  5b65ca:	c3                   	ret
  5b65cb:	8b b4 24 08 01 00 00 	mov    esi,DWORD PTR [esp+0x108]
  5b65d2:	8b bc 24 10 01 00 00 	mov    edi,DWORD PTR [esp+0x110]
  5b65d9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  5b65dc:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
  5b65df:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  5b65e2:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  5b65e6:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  5b65ea:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  5b65ee:	51                   	push   ecx
  5b65ef:	8d 54 24 20          	lea    edx,[esp+0x20]
  5b65f3:	8b cf                	mov    ecx,edi
  5b65f5:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  5b65f9:	e8 12 2e 01 00       	call   0x5c9410
  5b65fe:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  5b6602:	8b cf                	mov    ecx,edi
  5b6604:	52                   	push   edx
  5b6605:	8d 54 24 44          	lea    edx,[esp+0x44]
  5b6609:	e8 82 2c 01 00       	call   0x5c9290
  5b660e:	8d 44 24 50          	lea    eax,[esp+0x50]
  5b6612:	b9 04 00 00 00       	mov    ecx,0x4
  5b6617:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  5b661b:	89 50 fc             	mov    DWORD PTR [eax-0x4],edx
  5b661e:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5b6622:	89 10                	mov    DWORD PTR [eax],edx
  5b6624:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  5b6628:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  5b662b:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
  5b662e:	89 50 10             	mov    DWORD PTR [eax+0x10],edx
  5b6631:	8b 56 1c             	mov    edx,DWORD PTR [esi+0x1c]
  5b6634:	89 50 14             	mov    DWORD PTR [eax+0x14],edx
  5b6637:	8b 56 20             	mov    edx,DWORD PTR [esi+0x20]
  5b663a:	89 50 18             	mov    DWORD PTR [eax+0x18],edx
  5b663d:	8b 56 24             	mov    edx,DWORD PTR [esi+0x24]
  5b6640:	89 50 1c             	mov    DWORD PTR [eax+0x1c],edx
  5b6643:	83 c0 24             	add    eax,0x24
  5b6646:	49                   	dec    ecx
  5b6647:	75 ce                	jne    0x5b6617
  5b6649:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
  5b664d:	d9 e0                	fchs
  5b664f:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
  5b6653:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  5b6659:	df e0                	fnstsw ax
  5b665b:	f6 c4 01             	test   ah,0x1
  5b665e:	0f 85 68 03 00 00    	jne    0x5b69cc
  5b6664:	8d 54 24 30          	lea    edx,[esp+0x30]
  5b6668:	8b cf                	mov    ecx,edi
  5b666a:	e8 91 29 01 00       	call   0x5c9000
  5b666f:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
  5b6673:	8b cf                	mov    ecx,edi
  5b6675:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  5b6679:	db 44 24 34          	fild   DWORD PTR [esp+0x34]
  5b667d:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  5b6683:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  5b6687:	db 44 24 38          	fild   DWORD PTR [esp+0x38]
  5b668b:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  5b668f:	db 44 24 3c          	fild   DWORD PTR [esp+0x3c]
  5b6693:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  5b6699:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
  5b669d:	e8 be 29 01 00       	call   0x5c9060
  5b66a2:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
  5b66a6:	8b be a0 00 00 00    	mov    edi,DWORD PTR [esi+0xa0]
  5b66ac:	8b cf                	mov    ecx,edi
  5b66ae:	d8 8e ac 00 00 00    	fmul   DWORD PTR [esi+0xac]
  5b66b4:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  5b66b8:	e8 63 4b fe ff       	call   0x59b220
  5b66bd:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5b66c1:	8b cf                	mov    ecx,edi
  5b66c3:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  5b66c7:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
  5b66cb:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5b66cf:	e8 5c 4b fe ff       	call   0x59b230
  5b66d4:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
  5b66d8:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  5b66db:	db 44 24 08          	fild   DWORD PTR [esp+0x8]
  5b66df:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b66e2:	8b d1                	mov    edx,ecx
  5b66e4:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
  5b66e8:	89 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],eax
  5b66ef:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
  5b66f3:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
  5b66f7:	89 94 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],edx
  5b66fe:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  5b6702:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5b6706:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  5b670c:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  5b6710:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  5b6716:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  5b671a:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
  5b671e:	d8 e1                	fsub   st,st(1)
  5b6720:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
  5b6724:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  5b6728:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  5b672c:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
  5b6730:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
  5b6734:	d8 c1                	fadd   st,st(1)
  5b6736:	d9 5c 24 70          	fstp   DWORD PTR [esp+0x70]
  5b673a:	d9 44 24 74          	fld    DWORD PTR [esp+0x74]
  5b673e:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  5b6742:	d9 5c 24 74          	fstp   DWORD PTR [esp+0x74]
  5b6746:	d9 84 24 94 00 00 00 	fld    DWORD PTR [esp+0x94]
  5b674d:	d8 c1                	fadd   st,st(1)
  5b674f:	d9 9c 24 94 00 00 00 	fstp   DWORD PTR [esp+0x94]
  5b6756:	d9 84 24 98 00 00 00 	fld    DWORD PTR [esp+0x98]
  5b675d:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
  5b6761:	d9 9c 24 98 00 00 00 	fstp   DWORD PTR [esp+0x98]
  5b6768:	d9 84 24 b8 00 00 00 	fld    DWORD PTR [esp+0xb8]
  5b676f:	d8 e1                	fsub   st,st(1)
  5b6771:	d9 9c 24 b8 00 00 00 	fstp   DWORD PTR [esp+0xb8]
  5b6778:	dd d8                	fstp   st(0)
  5b677a:	d9 84 24 bc 00 00 00 	fld    DWORD PTR [esp+0xbc]
  5b6781:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
  5b6785:	d9 9c 24 bc 00 00 00 	fstp   DWORD PTR [esp+0xbc]
  5b678c:	d9 46 10             	fld    DWORD PTR [esi+0x10]
  5b678f:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  5b6795:	d9 54 24 7c          	fst    DWORD PTR [esp+0x7c]
  5b6799:	d9 9c 24 a0 00 00 00 	fstp   DWORD PTR [esp+0xa0]
  5b67a0:	d9 46 14             	fld    DWORD PTR [esi+0x14]
  5b67a3:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  5b67a9:	d9 94 24 a4 00 00 00 	fst    DWORD PTR [esp+0xa4]
  5b67b0:	d9 9c 24 c8 00 00 00 	fstp   DWORD PTR [esp+0xc8]
  5b67b7:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
  5b67bb:	d8 5c 24 28          	fcomp  DWORD PTR [esp+0x28]
  5b67bf:	df e0                	fnstsw ax
  5b67c1:	f6 c4 01             	test   ah,0x1
  5b67c4:	74 60                	je     0x5b6826
  5b67c6:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
  5b67ca:	d8 5c 24 28          	fcomp  DWORD PTR [esp+0x28]
  5b67ce:	df e0                	fnstsw ax
  5b67d0:	f6 c4 41             	test   ah,0x41
  5b67d3:	0f 85 f3 01 00 00    	jne    0x5b69cc
  5b67d9:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  5b67dd:	d8 64 24 4c          	fsub   DWORD PTR [esp+0x4c]
  5b67e1:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  5b67e5:	8b d1                	mov    edx,ecx
  5b67e7:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
  5b67eb:	d9 c0                	fld    st(0)
  5b67ed:	d8 74 24 18          	fdiv   DWORD PTR [esp+0x18]
  5b67f1:	89 94 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],edx
  5b67f8:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  5b67fc:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5b6800:	d8 e1                	fsub   st,st(1)
  5b6802:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5b6806:	dd d8                	fstp   st(0)
  5b6808:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  5b680c:	d8 44 24 58          	fadd   DWORD PTR [esp+0x58]
  5b6810:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
  5b6814:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  5b6818:	d8 84 24 c4 00 00 00 	fadd   DWORD PTR [esp+0xc4]
  5b681f:	d9 9c 24 c4 00 00 00 	fstp   DWORD PTR [esp+0xc4]
  5b6826:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  5b682a:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
  5b682e:	df e0                	fnstsw ax
  5b6830:	f6 c4 01             	test   ah,0x1
  5b6833:	74 60                	je     0x5b6895
  5b6835:	d9 84 24 98 00 00 00 	fld    DWORD PTR [esp+0x98]
  5b683c:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
  5b6840:	df e0                	fnstsw ax
  5b6842:	f6 c4 41             	test   ah,0x41
  5b6845:	0f 85 81 01 00 00    	jne    0x5b69cc
  5b684b:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  5b684f:	d8 64 24 50          	fsub   DWORD PTR [esp+0x50]
  5b6853:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  5b6857:	8b c8                	mov    ecx,eax
  5b6859:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
  5b685d:	d9 c0                	fld    st(0)
  5b685f:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
  5b6863:	89 4c 24 74          	mov    DWORD PTR [esp+0x74],ecx
  5b6867:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  5b686b:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  5b686f:	d8 e1                	fsub   st,st(1)
  5b6871:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  5b6875:	dd d8                	fstp   st(0)
  5b6877:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  5b687b:	d8 44 24 5c          	fadd   DWORD PTR [esp+0x5c]
  5b687f:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
  5b6883:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  5b6887:	d8 84 24 80 00 00 00 	fadd   DWORD PTR [esp+0x80]
  5b688e:	d9 9c 24 80 00 00 00 	fstp   DWORD PTR [esp+0x80]
  5b6895:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
  5b6899:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  5b689d:	df e0                	fnstsw ax
  5b689f:	f6 c4 01             	test   ah,0x1
  5b68a2:	75 50                	jne    0x5b68f4
  5b68a4:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
  5b68a8:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  5b68ac:	df e0                	fnstsw ax
  5b68ae:	f6 c4 01             	test   ah,0x1
  5b68b1:	0f 84 15 01 00 00    	je     0x5b69cc
  5b68b7:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
  5b68bb:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  5b68bf:	d8 74 24 18          	fdiv   DWORD PTR [esp+0x18]
  5b68c3:	d9 44 24 7c          	fld    DWORD PTR [esp+0x7c]
  5b68c7:	d8 e1                	fsub   st,st(1)
  5b68c9:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
  5b68cd:	d9 84 24 a0 00 00 00 	fld    DWORD PTR [esp+0xa0]
  5b68d4:	d8 e1                	fsub   st,st(1)
  5b68d6:	d9 9c 24 a0 00 00 00 	fstp   DWORD PTR [esp+0xa0]
  5b68dd:	dd d8                	fstp   st(0)
  5b68df:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5b68e3:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  5b68e9:	d9 54 24 70          	fst    DWORD PTR [esp+0x70]
  5b68ed:	d9 9c 24 94 00 00 00 	fstp   DWORD PTR [esp+0x94]
  5b68f4:	d9 84 24 98 00 00 00 	fld    DWORD PTR [esp+0x98]
  5b68fb:	d8 5c 24 0c          	fcomp  DWORD PTR [esp+0xc]
  5b68ff:	df e0                	fnstsw ax
  5b6901:	f6 c4 01             	test   ah,0x1
  5b6904:	75 5c                	jne    0x5b6962
  5b6906:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  5b690a:	d8 5c 24 0c          	fcomp  DWORD PTR [esp+0xc]
  5b690e:	df e0                	fnstsw ax
  5b6910:	f6 c4 01             	test   ah,0x1
  5b6913:	0f 84 b3 00 00 00    	je     0x5b69cc
  5b6919:	d9 84 24 98 00 00 00 	fld    DWORD PTR [esp+0x98]
  5b6920:	d8 64 24 0c          	fsub   DWORD PTR [esp+0xc]
  5b6924:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
  5b6928:	d9 84 24 a4 00 00 00 	fld    DWORD PTR [esp+0xa4]
  5b692f:	d8 e1                	fsub   st,st(1)
  5b6931:	d9 9c 24 a4 00 00 00 	fstp   DWORD PTR [esp+0xa4]
  5b6938:	d9 84 24 c8 00 00 00 	fld    DWORD PTR [esp+0xc8]
  5b693f:	d8 e1                	fsub   st,st(1)
  5b6941:	d9 9c 24 c8 00 00 00 	fstp   DWORD PTR [esp+0xc8]
  5b6948:	dd d8                	fstp   st(0)
  5b694a:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  5b694e:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  5b6954:	d9 94 24 98 00 00 00 	fst    DWORD PTR [esp+0x98]
  5b695b:	d9 9c 24 bc 00 00 00 	fstp   DWORD PTR [esp+0xbc]
  5b6962:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  5b6965:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  5b6968:	8b 56 24             	mov    edx,DWORD PTR [esi+0x24]
  5b696b:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
  5b696f:	8b 8e a8 00 00 00    	mov    ecx,DWORD PTR [esi+0xa8]
  5b6975:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
  5b6979:	0f be c1             	movsx  eax,cl
  5b697c:	83 e0 01             	and    eax,0x1
  5b697f:	89 54 24 6c          	mov    DWORD PTR [esp+0x6c],edx
  5b6983:	8b 56 20             	mov    edx,DWORD PTR [esi+0x20]
  5b6986:	c1 e0 03             	shl    eax,0x3
  5b6989:	f6 c1 02             	test   cl,0x2
  5b698c:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
  5b6990:	74 02                	je     0x5b6994
  5b6992:	0c 04                	or     al,0x4
  5b6994:	81 7e 24 00 00 7f 43 	cmp    DWORD PTR [esi+0x24],0x437f0000
  5b699b:	74 02                	je     0x5b699f
  5b699d:	0c 01                	or     al,0x1
  5b699f:	f6 c1 08             	test   cl,0x8
  5b69a2:	74 02                	je     0x5b69a6
  5b69a4:	0c 02                	or     al,0x2
  5b69a6:	f6 c1 10             	test   cl,0x10
  5b69a9:	74 02                	je     0x5b69ad
  5b69ab:	0c 10                	or     al,0x10
  5b69ad:	50                   	push   eax
  5b69ae:	8b cf                	mov    ecx,edi
  5b69b0:	e8 4b cc e9 ff       	call   0x453600
  5b69b5:	50                   	push   eax
  5b69b6:	8b 84 24 0c 01 00 00 	mov    eax,DWORD PTR [esp+0x10c]
  5b69bd:	ba 04 00 00 00       	mov    edx,0x4
  5b69c2:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  5b69c6:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
  5b69cc:	5f                   	pop    edi
  5b69cd:	b8 01 00 00 00       	mov    eax,0x1
  5b69d2:	5e                   	pop    esi
  5b69d3:	81 c4 f8 00 00 00    	add    esp,0xf8
  5b69d9:	c3                   	ret
  5b69da:	90                   	nop
  5b69db:	90                   	nop
  5b69dc:	90                   	nop
  5b69dd:	90                   	nop
  5b69de:	90                   	nop
  5b69df:	90                   	nop
  5b69e0:	b8 28 15 00 00       	mov    eax,0x1528
  5b69e5:	e8 86 75 05 00       	call   0x60df70
  5b69ea:	8b 8c 24 30 15 00 00 	mov    ecx,DWORD PTR [esp+0x1530]
  5b69f1:	8b 84 24 34 15 00 00 	mov    eax,DWORD PTR [esp+0x1534]
  5b69f8:	53                   	push   ebx
  5b69f9:	83 c0 04             	add    eax,0x4
  5b69fc:	8b 91 9c 00 00 00    	mov    edx,DWORD PTR [ecx+0x9c]
  5b6a02:	55                   	push   ebp
  5b6a03:	56                   	push   esi
  5b6a04:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  5b6a08:	85 d2                	test   edx,edx
  5b6a0a:	57                   	push   edi
  5b6a0b:	8d 41 04             	lea    eax,[ecx+0x4]
  5b6a0e:	7e 46                	jle    0x5b6a56
  5b6a10:	8d 8c 24 90 01 00 00 	lea    ecx,[esp+0x190]
  5b6a17:	8d 74 24 28          	lea    esi,[esp+0x28]
  5b6a1b:	8b fa                	mov    edi,edx
  5b6a1d:	8b 18                	mov    ebx,DWORD PTR [eax]
  5b6a1f:	83 c0 24             	add    eax,0x24
  5b6a22:	89 5e f8             	mov    DWORD PTR [esi-0x8],ebx
  5b6a25:	8b 58 e0             	mov    ebx,DWORD PTR [eax-0x20]
  5b6a28:	89 5e fc             	mov    DWORD PTR [esi-0x4],ebx
  5b6a2b:	8b 58 e4             	mov    ebx,DWORD PTR [eax-0x1c]
  5b6a2e:	89 1e                	mov    DWORD PTR [esi],ebx
  5b6a30:	8b 58 e8             	mov    ebx,DWORD PTR [eax-0x18]
  5b6a33:	89 59 f8             	mov    DWORD PTR [ecx-0x8],ebx
  5b6a36:	8b 58 ec             	mov    ebx,DWORD PTR [eax-0x14]
  5b6a39:	89 59 fc             	mov    DWORD PTR [ecx-0x4],ebx
  5b6a3c:	8b 58 f0             	mov    ebx,DWORD PTR [eax-0x10]
  5b6a3f:	89 19                	mov    DWORD PTR [ecx],ebx
  5b6a41:	8b 58 f4             	mov    ebx,DWORD PTR [eax-0xc]
  5b6a44:	89 59 04             	mov    DWORD PTR [ecx+0x4],ebx
  5b6a47:	8b 58 f8             	mov    ebx,DWORD PTR [eax-0x8]
  5b6a4a:	89 59 08             	mov    DWORD PTR [ecx+0x8],ebx
  5b6a4d:	83 c6 0c             	add    esi,0xc
  5b6a50:	83 c1 18             	add    ecx,0x18
  5b6a53:	4f                   	dec    edi
  5b6a54:	75 c7                	jne    0x5b6a1d
  5b6a56:	8b 8c 24 44 15 00 00 	mov    ecx,DWORD PTR [esp+0x1544]
  5b6a5d:	8b c2                	mov    eax,edx
  5b6a5f:	8d 7c 24 20          	lea    edi,[esp+0x20]
  5b6a63:	8d b4 24 58 04 00 00 	lea    esi,[esp+0x458]
  5b6a6a:	8b 11                	mov    edx,DWORD PTR [ecx]
  5b6a6c:	8d 9c 24 88 01 00 00 	lea    ebx,[esp+0x188]
  5b6a73:	85 d2                	test   edx,edx
  5b6a75:	8d ac 24 c0 05 00 00 	lea    ebp,[esp+0x5c0]
  5b6a7c:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5b6a80:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  5b6a87:	00 
  5b6a88:	7e 58                	jle    0x5b6ae2
  5b6a8a:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  5b6a8e:	52                   	push   edx
  5b6a8f:	50                   	push   eax
  5b6a90:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b6a94:	55                   	push   ebp
  5b6a95:	53                   	push   ebx
  5b6a96:	56                   	push   esi
  5b6a97:	57                   	push   edi
  5b6a98:	50                   	push   eax
  5b6a99:	e8 72 a4 01 00       	call   0x5d0f10
  5b6a9e:	83 c4 1c             	add    esp,0x1c
  5b6aa1:	85 c0                	test   eax,eax
  5b6aa3:	0f 84 f9 00 00 00    	je     0x5b6ba2
  5b6aa9:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5b6aad:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5b6ab1:	8b c7                	mov    eax,edi
  5b6ab3:	8b fe                	mov    edi,esi
  5b6ab5:	8b f0                	mov    esi,eax
  5b6ab7:	83 c2 14             	add    edx,0x14
  5b6aba:	8b c3                	mov    eax,ebx
  5b6abc:	8b dd                	mov    ebx,ebp
  5b6abe:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5b6ac2:	8b 94 24 44 15 00 00 	mov    edx,DWORD PTR [esp+0x1544]
  5b6ac9:	8b e8                	mov    ebp,eax
  5b6acb:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5b6acf:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  5b6ad3:	8b 0a                	mov    ecx,DWORD PTR [edx]
  5b6ad5:	40                   	inc    eax
  5b6ad6:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5b6ada:	3b c1                	cmp    eax,ecx
  5b6adc:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b6ae0:	7c a8                	jl     0x5b6a8a
  5b6ae2:	83 f8 03             	cmp    eax,0x3
  5b6ae5:	0f 8c b7 00 00 00    	jl     0x5b6ba2
  5b6aeb:	8b ac 24 48 15 00 00 	mov    ebp,DWORD PTR [esp+0x1548]
  5b6af2:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  5b6af6:	85 c0                	test   eax,eax
  5b6af8:	7e 23                	jle    0x5b6b1d
  5b6afa:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5b6afe:	56                   	push   esi
  5b6aff:	8b d7                	mov    edx,edi
  5b6b01:	8b cd                	mov    ecx,ebp
  5b6b03:	e8 08 29 01 00       	call   0x5c9410
  5b6b08:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5b6b0c:	83 c7 0c             	add    edi,0xc
  5b6b0f:	83 c6 0c             	add    esi,0xc
  5b6b12:	48                   	dec    eax
  5b6b13:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5b6b17:	75 e5                	jne    0x5b6afe
  5b6b19:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b6b1d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5b6b21:	55                   	push   ebp
  5b6b22:	50                   	push   eax
  5b6b23:	8d 84 24 98 08 00 00 	lea    eax,[esp+0x898]
  5b6b2a:	50                   	push   eax
  5b6b2b:	53                   	push   ebx
  5b6b2c:	51                   	push   ecx
  5b6b2d:	e8 9e a9 01 00       	call   0x5d14d0
  5b6b32:	8b 84 24 54 15 00 00 	mov    eax,DWORD PTR [esp+0x1554]
  5b6b39:	83 c4 14             	add    esp,0x14
  5b6b3c:	8b 98 a8 00 00 00    	mov    ebx,DWORD PTR [eax+0xa8]
  5b6b42:	8b 88 a0 00 00 00    	mov    ecx,DWORD PTR [eax+0xa0]
  5b6b48:	d9 40 24             	fld    DWORD PTR [eax+0x24]
  5b6b4b:	0f be d3             	movsx  edx,bl
  5b6b4e:	d9 94 24 b0 08 00 00 	fst    DWORD PTR [esp+0x8b0]
  5b6b55:	83 e2 01             	and    edx,0x1
  5b6b58:	c1 e2 03             	shl    edx,0x3
  5b6b5b:	f6 c3 02             	test   bl,0x2
  5b6b5e:	74 03                	je     0x5b6b63
  5b6b60:	83 ca 04             	or     edx,0x4
  5b6b63:	d8 1d 38 a4 64 00    	fcomp  DWORD PTR ds:0x64a438
  5b6b69:	df e0                	fnstsw ax
  5b6b6b:	f6 c4 40             	test   ah,0x40
  5b6b6e:	75 03                	jne    0x5b6b73
  5b6b70:	83 ca 01             	or     edx,0x1
  5b6b73:	f6 c3 08             	test   bl,0x8
  5b6b76:	74 03                	je     0x5b6b7b
  5b6b78:	83 ca 02             	or     edx,0x2
  5b6b7b:	f6 c3 10             	test   bl,0x10
  5b6b7e:	74 03                	je     0x5b6b83
  5b6b80:	83 ca 10             	or     edx,0x10
  5b6b83:	52                   	push   edx
  5b6b84:	e8 77 ca e9 ff       	call   0x453600
  5b6b89:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  5b6b8d:	50                   	push   eax
  5b6b8e:	8b 84 24 44 15 00 00 	mov    eax,DWORD PTR [esp+0x1544]
  5b6b95:	8d 8c 24 98 08 00 00 	lea    ecx,[esp+0x898]
  5b6b9c:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
  5b6ba2:	5f                   	pop    edi
  5b6ba3:	5e                   	pop    esi
  5b6ba4:	5d                   	pop    ebp
  5b6ba5:	5b                   	pop    ebx
  5b6ba6:	81 c4 28 15 00 00    	add    esp,0x1528
  5b6bac:	c3                   	ret
  5b6bad:	90                   	nop
  5b6bae:	90                   	nop
  5b6baf:	90                   	nop
  5b6bb0:	b8 8c 16 00 00       	mov    eax,0x168c
  5b6bb5:	e8 b6 73 05 00       	call   0x60df70
  5b6bba:	8b 8c 24 94 16 00 00 	mov    ecx,DWORD PTR [esp+0x1694]
  5b6bc1:	8b 84 24 98 16 00 00 	mov    eax,DWORD PTR [esp+0x1698]
  5b6bc8:	53                   	push   ebx
  5b6bc9:	83 c0 04             	add    eax,0x4
  5b6bcc:	8b 99 9c 00 00 00    	mov    ebx,DWORD PTR [ecx+0x9c]
  5b6bd2:	55                   	push   ebp
  5b6bd3:	56                   	push   esi
  5b6bd4:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  5b6bd8:	85 db                	test   ebx,ebx
  5b6bda:	57                   	push   edi
  5b6bdb:	8d 41 04             	lea    eax,[ecx+0x4]
  5b6bde:	7e 3d                	jle    0x5b6c1d
  5b6be0:	8d 94 24 f8 02 00 00 	lea    edx,[esp+0x2f8]
  5b6be7:	8d 8c 24 8c 01 00 00 	lea    ecx,[esp+0x18c]
  5b6bee:	8b f3                	mov    esi,ebx
  5b6bf0:	8b 38                	mov    edi,DWORD PTR [eax]
  5b6bf2:	83 c0 24             	add    eax,0x24
  5b6bf5:	89 79 f8             	mov    DWORD PTR [ecx-0x8],edi
  5b6bf8:	8b 78 e0             	mov    edi,DWORD PTR [eax-0x20]
  5b6bfb:	89 79 fc             	mov    DWORD PTR [ecx-0x4],edi
  5b6bfe:	8b 78 e4             	mov    edi,DWORD PTR [eax-0x1c]
  5b6c01:	89 39                	mov    DWORD PTR [ecx],edi
  5b6c03:	8b 78 f0             	mov    edi,DWORD PTR [eax-0x10]
  5b6c06:	89 7a fc             	mov    DWORD PTR [edx-0x4],edi
  5b6c09:	8b 78 f4             	mov    edi,DWORD PTR [eax-0xc]
  5b6c0c:	89 3a                	mov    DWORD PTR [edx],edi
  5b6c0e:	8b 78 f8             	mov    edi,DWORD PTR [eax-0x8]
  5b6c11:	89 7a 04             	mov    DWORD PTR [edx+0x4],edi
  5b6c14:	83 c1 0c             	add    ecx,0xc
  5b6c17:	83 c2 18             	add    edx,0x18
  5b6c1a:	4e                   	dec    esi
  5b6c1b:	75 d3                	jne    0x5b6bf0
  5b6c1d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5b6c21:	8d bc 24 84 01 00 00 	lea    edi,[esp+0x184]
  5b6c28:	8d 74 24 1c          	lea    esi,[esp+0x1c]
  5b6c2c:	8d ac 24 ec 02 00 00 	lea    ebp,[esp+0x2ec]
  5b6c33:	8d 84 24 24 07 00 00 	lea    eax,[esp+0x724]
  5b6c3a:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  5b6c41:	00 
  5b6c42:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5b6c46:	8d 54 24 18          	lea    edx,[esp+0x18]
  5b6c4a:	52                   	push   edx
  5b6c4b:	53                   	push   ebx
  5b6c4c:	50                   	push   eax
  5b6c4d:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5b6c51:	55                   	push   ebp
  5b6c52:	56                   	push   esi
  5b6c53:	57                   	push   edi
  5b6c54:	50                   	push   eax
  5b6c55:	e8 a6 a6 01 00       	call   0x5d1300
  5b6c5a:	83 c4 1c             	add    esp,0x1c
  5b6c5d:	85 c0                	test   eax,eax
  5b6c5f:	0f 84 e4 00 00 00    	je     0x5b6d49
  5b6c65:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5b6c69:	3b f9                	cmp    edi,ecx
  5b6c6b:	75 1b                	jne    0x5b6c88
  5b6c6d:	8d bc 24 bc 05 00 00 	lea    edi,[esp+0x5bc]
  5b6c74:	8d 74 24 1c          	lea    esi,[esp+0x1c]
  5b6c78:	8d ac 24 ec 02 00 00 	lea    ebp,[esp+0x2ec]
  5b6c7f:	8d 84 24 24 07 00 00 	lea    eax,[esp+0x724]
  5b6c86:	eb 19                	jmp    0x5b6ca1
  5b6c88:	8d 7c 24 1c          	lea    edi,[esp+0x1c]
  5b6c8c:	8d b4 24 bc 05 00 00 	lea    esi,[esp+0x5bc]
  5b6c93:	8d ac 24 24 07 00 00 	lea    ebp,[esp+0x724]
  5b6c9a:	8d 84 24 ec 02 00 00 	lea    eax,[esp+0x2ec]
  5b6ca1:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5b6ca5:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5b6ca9:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  5b6cad:	41                   	inc    ecx
  5b6cae:	83 c2 14             	add    edx,0x14
  5b6cb1:	83 f9 04             	cmp    ecx,0x4
  5b6cb4:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  5b6cb8:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5b6cbc:	7c 88                	jl     0x5b6c46
  5b6cbe:	83 fb 03             	cmp    ebx,0x3
  5b6cc1:	0f 8c 82 00 00 00    	jl     0x5b6d49
  5b6cc7:	85 db                	test   ebx,ebx
  5b6cc9:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  5b6ccd:	7e 24                	jle    0x5b6cf3
  5b6ccf:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  5b6cd3:	8b 8c 24 ac 16 00 00 	mov    ecx,DWORD PTR [esp+0x16ac]
  5b6cda:	56                   	push   esi
  5b6cdb:	8b d7                	mov    edx,edi
  5b6cdd:	e8 2e 27 01 00       	call   0x5c9410
  5b6ce2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5b6ce6:	83 c7 0c             	add    edi,0xc
  5b6ce9:	83 c6 0c             	add    esi,0xc
  5b6cec:	48                   	dec    eax
  5b6ced:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5b6cf1:	75 e0                	jne    0x5b6cd3
  5b6cf3:	8b 94 24 ac 16 00 00 	mov    edx,DWORD PTR [esp+0x16ac]
  5b6cfa:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5b6cfe:	52                   	push   edx
  5b6cff:	8d 84 24 f8 09 00 00 	lea    eax,[esp+0x9f8]
  5b6d06:	53                   	push   ebx
  5b6d07:	50                   	push   eax
  5b6d08:	55                   	push   ebp
  5b6d09:	51                   	push   ecx
  5b6d0a:	e8 c1 a7 01 00       	call   0x5d14d0
  5b6d0f:	8b 94 24 b8 16 00 00 	mov    edx,DWORD PTR [esp+0x16b8]
  5b6d16:	83 c4 14             	add    esp,0x14
  5b6d19:	d9 42 24             	fld    DWORD PTR [edx+0x24]
  5b6d1c:	d9 94 24 14 0a 00 00 	fst    DWORD PTR [esp+0xa14]
  5b6d23:	d8 1d 38 a4 64 00    	fcomp  DWORD PTR ds:0x64a438
  5b6d29:	df e0                	fnstsw ax
  5b6d2b:	f6 c4 40             	test   ah,0x40
  5b6d2e:	75 04                	jne    0x5b6d34
  5b6d30:	6a 01                	push   0x1
  5b6d32:	eb 02                	jmp    0x5b6d36
  5b6d34:	6a 00                	push   0x0
  5b6d36:	8b 84 24 a4 16 00 00 	mov    eax,DWORD PTR [esp+0x16a4]
  5b6d3d:	8b d3                	mov    edx,ebx
  5b6d3f:	8d 8c 24 f8 09 00 00 	lea    ecx,[esp+0x9f8]
  5b6d46:	ff 50 78             	call   DWORD PTR [eax+0x78]
  5b6d49:	5f                   	pop    edi
  5b6d4a:	5e                   	pop    esi
  5b6d4b:	5d                   	pop    ebp
  5b6d4c:	5b                   	pop    ebx
  5b6d4d:	81 c4 8c 16 00 00    	add    esp,0x168c
  5b6d53:	c3                   	ret
  5b6d54:	90                   	nop
