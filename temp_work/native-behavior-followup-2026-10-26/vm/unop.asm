
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005fc480 <.text+0x1fb480>:
  5fc480:	55                   	push   ebp
  5fc481:	8b ec                	mov    ebp,esp
  5fc483:	83 e4 f8             	and    esp,0xfffffff8
  5fc486:	6a ff                	push   0xffffffff
  5fc488:	68 ae 8b 64 00       	push   0x648bae
  5fc48d:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fc493:	50                   	push   eax
  5fc494:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5fc49b:	81 ec ac 00 00 00    	sub    esp,0xac
  5fc4a1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  5fc4a4:	53                   	push   ebx
  5fc4a5:	33 db                	xor    ebx,ebx
  5fc4a7:	56                   	push   esi
  5fc4a8:	57                   	push   edi
  5fc4a9:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  5fc4ad:	ff 24 85 90 cb 5f 00 	jmp    DWORD PTR [eax*4+0x5fcb90]
  5fc4b4:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc4b7:	83 78 08 02          	cmp    DWORD PTR [eax+0x8],0x2
  5fc4bb:	75 15                	jne    0x5fc4d2
  5fc4bd:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  5fc4c0:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc4c3:	f7 d9                	neg    ecx
  5fc4c5:	51                   	push   ecx
  5fc4c6:	8b ce                	mov    ecx,esi
  5fc4c8:	e8 c3 7d ff ff       	call   0x5f4290
  5fc4cd:	e9 32 01 00 00       	jmp    0x5fc604
  5fc4d2:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc4d5:	d9 e0                	fchs
  5fc4d7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc4da:	83 ec 08             	sub    esp,0x8
  5fc4dd:	8b ce                	mov    ecx,esi
  5fc4df:	dd 1c 24             	fstp   QWORD PTR [esp]
  5fc4e2:	e8 89 7d ff ff       	call   0x5f4270
  5fc4e7:	e9 18 01 00 00       	jmp    0x5fc604
  5fc4ec:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc4ef:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc4f2:	33 d2                	xor    edx,edx
  5fc4f4:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  5fc4f7:	85 c9                	test   ecx,ecx
  5fc4f9:	0f 94 c2             	sete   dl
  5fc4fc:	52                   	push   edx
  5fc4fd:	8b ce                	mov    ecx,esi
  5fc4ff:	e8 8c 7d ff ff       	call   0x5f4290
  5fc504:	e9 fb 00 00 00       	jmp    0x5fc604
  5fc509:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc50c:	db 41 10             	fild   DWORD PTR [ecx+0x10]
  5fc50f:	eb c6                	jmp    0x5fc4d7
  5fc511:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc514:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
  5fc517:	50                   	push   eax
  5fc518:	8d 84 24 9c 00 00 00 	lea    eax,[esp+0x9c]
  5fc51f:	68 18 08 69 00       	push   0x690818
  5fc524:	50                   	push   eax
  5fc525:	e8 e6 ab fe ff       	call   0x5e7110
  5fc52a:	83 c4 0c             	add    esp,0xc
  5fc52d:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc530:	50                   	push   eax
  5fc531:	8b ce                	mov    ecx,esi
  5fc533:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x0
  5fc53a:	00 00 00 00 
  5fc53e:	e8 9d 66 fe ff       	call   0x5e2be0
  5fc543:	6a 01                	push   0x1
  5fc545:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  5fc54c:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc552:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc559:	ff ff ff ff 
  5fc55d:	e8 3e 7b e0 ff       	call   0x4040a0
  5fc562:	8b c6                	mov    eax,esi
  5fc564:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc56b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc572:	5f                   	pop    edi
  5fc573:	5e                   	pop    esi
  5fc574:	5b                   	pop    ebx
  5fc575:	8b e5                	mov    esp,ebp
  5fc577:	5d                   	pop    ebp
  5fc578:	c3                   	ret
  5fc579:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc57c:	8b 51 10             	mov    edx,DWORD PTR [ecx+0x10]
  5fc57f:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  5fc583:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  5fc586:	8b c8                	mov    ecx,eax
  5fc588:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5fc58c:	51                   	push   ecx
  5fc58d:	52                   	push   edx
  5fc58e:	8d 84 24 80 00 00 00 	lea    eax,[esp+0x80]
  5fc595:	68 98 17 6b 00       	push   0x6b1798
  5fc59a:	50                   	push   eax
  5fc59b:	e8 70 ab fe ff       	call   0x5e7110
  5fc5a0:	83 c4 10             	add    esp,0x10
  5fc5a3:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc5a6:	50                   	push   eax
  5fc5a7:	8b ce                	mov    ecx,esi
  5fc5a9:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x1
  5fc5b0:	01 00 00 00 
  5fc5b4:	e8 27 66 fe ff       	call   0x5e2be0
  5fc5b9:	6a 01                	push   0x1
  5fc5bb:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  5fc5bf:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc5c5:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc5cc:	ff ff ff ff 
  5fc5d0:	e8 cb 7a e0 ff       	call   0x4040a0
  5fc5d5:	8b c6                	mov    eax,esi
  5fc5d7:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc5de:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc5e5:	5f                   	pop    edi
  5fc5e6:	5e                   	pop    esi
  5fc5e7:	5b                   	pop    ebx
  5fc5e8:	8b e5                	mov    esp,ebp
  5fc5ea:	5d                   	pop    ebp
  5fc5eb:	c3                   	ret
  5fc5ec:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc5ef:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc5f2:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc5f5:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fc5fc:	e8 1f e5 00 00       	call   0x60ab20
  5fc601:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5fc604:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc60a:	8b c6                	mov    eax,esi
  5fc60c:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc613:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc61a:	5f                   	pop    edi
  5fc61b:	5e                   	pop    esi
  5fc61c:	5b                   	pop    ebx
  5fc61d:	8b e5                	mov    esp,ebp
  5fc61f:	5d                   	pop    ebp
  5fc620:	c3                   	ret
  5fc621:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc624:	8d 54 24 58          	lea    edx,[esp+0x58]
  5fc628:	52                   	push   edx
  5fc629:	e8 e2 13 e6 ff       	call   0x45da10
  5fc62e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  5fc631:	85 c0                	test   eax,eax
  5fc633:	75 05                	jne    0x5fc63a
  5fc635:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5fc63a:	50                   	push   eax
  5fc63b:	e8 d0 e8 00 00       	call   0x60af10
  5fc640:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc643:	83 c4 04             	add    esp,0x4
  5fc646:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  5fc64a:	6a 01                	push   0x1
  5fc64c:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fc653:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5fc656:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc65c:	e8 3f 7a e0 ff       	call   0x4040a0
  5fc661:	8b c6                	mov    eax,esi
  5fc663:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc66a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc671:	5f                   	pop    edi
  5fc672:	5e                   	pop    esi
  5fc673:	5b                   	pop    ebx
  5fc674:	8b e5                	mov    esp,ebp
  5fc676:	5d                   	pop    ebp
  5fc677:	c3                   	ret
  5fc678:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc67b:	8d 44 24 28          	lea    eax,[esp+0x28]
  5fc67f:	50                   	push   eax
  5fc680:	e8 8b 13 e6 ff       	call   0x45da10
  5fc685:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  5fc688:	85 c0                	test   eax,eax
  5fc68a:	75 05                	jne    0x5fc691
  5fc68c:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5fc691:	50                   	push   eax
  5fc692:	e8 b5 23 01 00       	call   0x60ea4c
  5fc697:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc69a:	83 c4 04             	add    esp,0x4
  5fc69d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  5fc6a1:	dd 5e 10             	fstp   QWORD PTR [esi+0x10]
  5fc6a4:	6a 01                	push   0x1
  5fc6a6:	c7 46 08 01 00 00 00 	mov    DWORD PTR [esi+0x8],0x1
  5fc6ad:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc6b3:	e8 e8 79 e0 ff       	call   0x4040a0
  5fc6b8:	8b c6                	mov    eax,esi
  5fc6ba:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc6c1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc6c8:	5f                   	pop    edi
  5fc6c9:	5e                   	pop    esi
  5fc6ca:	5b                   	pop    ebx
  5fc6cb:	8b e5                	mov    esp,ebp
  5fc6cd:	5d                   	pop    ebp
  5fc6ce:	c3                   	ret
  5fc6cf:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc6d2:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc6d5:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc6d8:	dc 05 a0 c5 64 00    	fadd   QWORD PTR ds:0x64c5a0
  5fc6de:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fc6e5:	e9 12 ff ff ff       	jmp    0x5fc5fc
  5fc6ea:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc6ed:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc6f0:	dd 42 10             	fld    QWORD PTR [edx+0x10]
  5fc6f3:	d9 f2                	fptan
  5fc6f5:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc6fc:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc702:	dd d8                	fstp   st(0)
  5fc704:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc707:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc70e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc715:	5f                   	pop    edi
  5fc716:	5e                   	pop    esi
  5fc717:	5b                   	pop    ebx
  5fc718:	8b e5                	mov    esp,ebp
  5fc71a:	5d                   	pop    ebp
  5fc71b:	c3                   	ret
  5fc71c:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc71f:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc722:	d9 fe                	fsin
  5fc724:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc727:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc72e:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc734:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc737:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc73e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc745:	5f                   	pop    edi
  5fc746:	5e                   	pop    esi
  5fc747:	5b                   	pop    ebx
  5fc748:	8b e5                	mov    esp,ebp
  5fc74a:	5d                   	pop    ebp
  5fc74b:	c3                   	ret
  5fc74c:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc74f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc752:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc755:	d9 ff                	fcos
  5fc757:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc75e:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc764:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc767:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc76e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc775:	5f                   	pop    edi
  5fc776:	5e                   	pop    esi
  5fc777:	5b                   	pop    ebx
  5fc778:	8b e5                	mov    esp,ebp
  5fc77a:	5d                   	pop    ebp
  5fc77b:	c3                   	ret
  5fc77c:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc77f:	dd 42 10             	fld    QWORD PTR [edx+0x10]
  5fc782:	e8 89 e9 00 00       	call   0x60b110
  5fc787:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc78a:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc78d:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc794:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc79a:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc7a1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc7a8:	5f                   	pop    edi
  5fc7a9:	5e                   	pop    esi
  5fc7aa:	5b                   	pop    ebx
  5fc7ab:	8b e5                	mov    esp,ebp
  5fc7ad:	5d                   	pop    ebp
  5fc7ae:	c3                   	ret
  5fc7af:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc7b2:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc7b5:	e8 16 15 01 00       	call   0x60dcd0
  5fc7ba:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc7bd:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc7c0:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc7c7:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc7cd:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc7d4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc7db:	5f                   	pop    edi
  5fc7dc:	5e                   	pop    esi
  5fc7dd:	5b                   	pop    ebx
  5fc7de:	8b e5                	mov    esp,ebp
  5fc7e0:	5d                   	pop    ebp
  5fc7e1:	c3                   	ret
  5fc7e2:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc7e5:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc7e8:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc7eb:	d9 e8                	fld1
  5fc7ed:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc7f4:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc7fa:	d9 f3                	fpatan
  5fc7fc:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc7ff:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc806:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc80d:	5f                   	pop    edi
  5fc80e:	5e                   	pop    esi
  5fc80f:	5b                   	pop    ebx
  5fc810:	8b e5                	mov    esp,ebp
  5fc812:	5d                   	pop    ebp
  5fc813:	c3                   	ret
  5fc814:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc817:	dd 42 10             	fld    QWORD PTR [edx+0x10]
  5fc81a:	e8 99 22 01 00       	call   0x60eab8
  5fc81f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc822:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc825:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc82c:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc832:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc839:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc840:	5f                   	pop    edi
  5fc841:	5e                   	pop    esi
  5fc842:	5b                   	pop    ebx
  5fc843:	8b e5                	mov    esp,ebp
  5fc845:	5d                   	pop    ebp
  5fc846:	c3                   	ret
  5fc847:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc84a:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc84d:	e8 77 22 01 00       	call   0x60eac9
  5fc852:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc855:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc858:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc85f:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc865:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc86c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc873:	5f                   	pop    edi
  5fc874:	5e                   	pop    esi
  5fc875:	5b                   	pop    ebx
  5fc876:	8b e5                	mov    esp,ebp
  5fc878:	5d                   	pop    ebp
  5fc879:	c3                   	ret
  5fc87a:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc87d:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc880:	e8 3d 22 01 00       	call   0x60eac2
  5fc885:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc888:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc88b:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc892:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc898:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc89f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc8a6:	5f                   	pop    edi
  5fc8a7:	5e                   	pop    esi
  5fc8a8:	5b                   	pop    ebx
  5fc8a9:	8b e5                	mov    esp,ebp
  5fc8ab:	5d                   	pop    ebp
  5fc8ac:	c3                   	ret
  5fc8ad:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc8b0:	dd 42 10             	fld    QWORD PTR [edx+0x10]
  5fc8b3:	d9 ec                	fldlg2
  5fc8b5:	d9 c9                	fxch   st(1)
  5fc8b7:	d9 f1                	fyl2x
  5fc8b9:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc8bc:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc8c3:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc8c9:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc8cc:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc8d3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc8da:	5f                   	pop    edi
  5fc8db:	5e                   	pop    esi
  5fc8dc:	5b                   	pop    ebx
  5fc8dd:	8b e5                	mov    esp,ebp
  5fc8df:	5d                   	pop    ebp
  5fc8e0:	c3                   	ret
  5fc8e1:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc8e4:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc8e7:	d9 ea                	fldl2e
  5fc8e9:	de c9                	fmulp  st(1),st
  5fc8eb:	d9 c0                	fld    st(0)
  5fc8ed:	d9 fc                	frndint
  5fc8ef:	d9 c9                	fxch   st(1)
  5fc8f1:	d8 e1                	fsub   st,st(1)
  5fc8f3:	d9 f0                	f2xm1
  5fc8f5:	d9 e8                	fld1
  5fc8f7:	de c1                	faddp  st(1),st
  5fc8f9:	d9 fd                	fscale
  5fc8fb:	dd d9                	fstp   st(1)
  5fc8fd:	e9 d5 fb ff ff       	jmp    0x5fc4d7
  5fc902:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc905:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc908:	d9 ed                	fldln2
  5fc90a:	eb a9                	jmp    0x5fc8b5
  5fc90c:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc90f:	8d 54 24 38          	lea    edx,[esp+0x38]
  5fc913:	52                   	push   edx
  5fc914:	e8 f7 10 e6 ff       	call   0x45da10
  5fc919:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5fc91c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc91f:	50                   	push   eax
  5fc920:	8b ce                	mov    ecx,esi
  5fc922:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x2
  5fc929:	02 00 00 00 
  5fc92d:	e8 5e 79 ff ff       	call   0x5f4290
  5fc932:	6a 01                	push   0x1
  5fc934:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5fc938:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc93e:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc945:	ff ff ff ff 
  5fc949:	e8 52 77 e0 ff       	call   0x4040a0
  5fc94e:	8b c6                	mov    eax,esi
  5fc950:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc957:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc95e:	5f                   	pop    edi
  5fc95f:	5e                   	pop    esi
  5fc960:	5b                   	pop    ebx
  5fc961:	8b e5                	mov    esp,ebp
  5fc963:	5d                   	pop    ebp
  5fc964:	c3                   	ret
  5fc965:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc968:	83 ec 10             	sub    esp,0x10
  5fc96b:	8b c4                	mov    eax,esp
  5fc96d:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  5fc971:	50                   	push   eax
  5fc972:	e8 99 10 e6 ff       	call   0x45da10
  5fc977:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  5fc97b:	51                   	push   ecx
  5fc97c:	e8 7f 02 00 00       	call   0x5fcc00
  5fc981:	83 c4 14             	add    esp,0x14
  5fc984:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc987:	50                   	push   eax
  5fc988:	8b ce                	mov    ecx,esi
  5fc98a:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x3
  5fc991:	03 00 00 00 
  5fc995:	e8 46 62 fe ff       	call   0x5e2be0
  5fc99a:	6a 01                	push   0x1
  5fc99c:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5fc9a0:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc9a6:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc9ad:	ff ff ff ff 
  5fc9b1:	e8 ea 76 e0 ff       	call   0x4040a0
  5fc9b6:	8b c6                	mov    eax,esi
  5fc9b8:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc9bf:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc9c6:	5f                   	pop    edi
  5fc9c7:	5e                   	pop    esi
  5fc9c8:	5b                   	pop    ebx
  5fc9c9:	8b e5                	mov    esp,ebp
  5fc9cb:	5d                   	pop    ebp
  5fc9cc:	c3                   	ret
  5fc9cd:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc9d0:	6a 00                	push   0x0
  5fc9d2:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5fc9d6:	c6 44 24 11 00       	mov    BYTE PTR [esp+0x11],0x0
  5fc9db:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
  5fc9de:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  5fc9e2:	8a 44 24 10          	mov    al,BYTE PTR [esp+0x10]
  5fc9e6:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  5fc9ea:	e8 b1 76 e0 ff       	call   0x4040a0
  5fc9ef:	8d 7c 24 0c          	lea    edi,[esp+0xc]
  5fc9f3:	83 c9 ff             	or     ecx,0xffffffff
  5fc9f6:	33 c0                	xor    eax,eax
  5fc9f8:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc9fa:	f7 d1                	not    ecx
  5fc9fc:	49                   	dec    ecx
  5fc9fd:	51                   	push   ecx
  5fc9fe:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5fca02:	51                   	push   ecx
  5fca03:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5fca07:	e8 e4 76 e0 ff       	call   0x4040f0
  5fca0c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fca0f:	8d 54 24 18          	lea    edx,[esp+0x18]
  5fca13:	52                   	push   edx
  5fca14:	8b ce                	mov    ecx,esi
  5fca16:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x4
  5fca1d:	04 00 00 00 
  5fca21:	e8 ba 61 fe ff       	call   0x5e2be0
  5fca26:	6a 01                	push   0x1
  5fca28:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5fca2c:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fca32:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fca39:	ff ff ff ff 
  5fca3d:	e8 5e 76 e0 ff       	call   0x4040a0
  5fca42:	8b c6                	mov    eax,esi
  5fca44:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fca4b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fca52:	5f                   	pop    edi
  5fca53:	5e                   	pop    esi
  5fca54:	5b                   	pop    ebx
  5fca55:	8b e5                	mov    esp,ebp
  5fca57:	5d                   	pop    ebp
  5fca58:	c3                   	ret
  5fca59:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  5fca5c:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  5fca63:	50                   	push   eax
  5fca64:	8b ce                	mov    ecx,esi
  5fca66:	e8 a5 0f e6 ff       	call   0x45da10
  5fca6b:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5fca6e:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x5
  5fca75:	05 00 00 00 
  5fca79:	85 c0                	test   eax,eax
  5fca7b:	74 25                	je     0x5fcaa2
  5fca7d:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  5fca81:	51                   	push   ecx
  5fca82:	8b ce                	mov    ecx,esi
  5fca84:	e8 87 0f e6 ff       	call   0x45da10
  5fca89:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  5fca8c:	bb 02 00 00 00       	mov    ebx,0x2
  5fca91:	85 c0                	test   eax,eax
  5fca93:	75 05                	jne    0x5fca9a
  5fca95:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5fca9a:	33 d2                	xor    edx,edx
  5fca9c:	8a 10                	mov    dl,BYTE PTR [eax]
  5fca9e:	8b c2                	mov    eax,edx
  5fcaa0:	eb 02                	jmp    0x5fcaa4
  5fcaa2:	33 c0                	xor    eax,eax
  5fcaa4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fcaa7:	83 cb 01             	or     ebx,0x1
  5fcaaa:	f6 c3 02             	test   bl,0x2
  5fcaad:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fcab4:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5fcab7:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fcabd:	74 0b                	je     0x5fcaca
  5fcabf:	6a 01                	push   0x1
  5fcac1:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  5fcac5:	e8 d6 75 e0 ff       	call   0x4040a0
  5fcaca:	6a 01                	push   0x1
  5fcacc:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
  5fcad3:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fcada:	ff ff ff ff 
  5fcade:	e8 bd 75 e0 ff       	call   0x4040a0
  5fcae3:	8b c6                	mov    eax,esi
  5fcae5:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fcaec:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcaf3:	5f                   	pop    edi
  5fcaf4:	5e                   	pop    esi
  5fcaf5:	5b                   	pop    ebx
  5fcaf6:	8b e5                	mov    esp,ebp
  5fcaf8:	5d                   	pop    ebp
  5fcaf9:	c3                   	ret
  5fcafa:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fcafd:	83 ec 10             	sub    esp,0x10
  5fcb00:	8b c4                	mov    eax,esp
  5fcb02:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  5fcb06:	50                   	push   eax
  5fcb07:	e8 04 0f e6 ff       	call   0x45da10
  5fcb0c:	8d 8c 24 b8 00 00 00 	lea    ecx,[esp+0xb8]
  5fcb13:	51                   	push   ecx
  5fcb14:	e8 d7 01 00 00       	call   0x5fccf0
  5fcb19:	83 c4 14             	add    esp,0x14
  5fcb1c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fcb1f:	50                   	push   eax
  5fcb20:	8b ce                	mov    ecx,esi
  5fcb22:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x6
  5fcb29:	06 00 00 00 
  5fcb2d:	e8 ae 60 fe ff       	call   0x5e2be0
  5fcb32:	8b 84 24 ac 00 00 00 	mov    eax,DWORD PTR [esp+0xac]
  5fcb39:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fcb3f:	85 c0                	test   eax,eax
  5fcb41:	0f 84 c3 fa ff ff    	je     0x5fc60a
  5fcb47:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fcb4a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fcb4d:	84 c0                	test   al,al
  5fcb4f:	74 1f                	je     0x5fcb70
  5fcb51:	3c ff                	cmp    al,0xff
  5fcb53:	74 1b                	je     0x5fcb70
  5fcb55:	fe c8                	dec    al
  5fcb57:	88 01                	mov    BYTE PTR [ecx],al
  5fcb59:	8b c6                	mov    eax,esi
  5fcb5b:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fcb62:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcb69:	5f                   	pop    edi
  5fcb6a:	5e                   	pop    esi
  5fcb6b:	5b                   	pop    ebx
  5fcb6c:	8b e5                	mov    esp,ebp
  5fcb6e:	5d                   	pop    ebp
  5fcb6f:	c3                   	ret
  5fcb70:	51                   	push   ecx
  5fcb71:	e8 7a 1a 00 00       	call   0x5fe5f0
  5fcb76:	8b 8c 24 bc 00 00 00 	mov    ecx,DWORD PTR [esp+0xbc]
  5fcb7d:	83 c4 04             	add    esp,0x4
  5fcb80:	8b c6                	mov    eax,esi
  5fcb82:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcb89:	5f                   	pop    edi
  5fcb8a:	5e                   	pop    esi
  5fcb8b:	5b                   	pop    ebx
  5fcb8c:	8b e5                	mov    esp,ebp
  5fcb8e:	5d                   	pop    ebp
  5fcb8f:	c3                   	ret
  5fcb90:	b4 c4                	mov    ah,0xc4
  5fcb92:	5f                   	pop    edi
  5fcb93:	00 ec                	add    ah,ch
  5fcb95:	c4 5f 00             	les    ebx,FWORD PTR [edi+0x0]
  5fcb98:	09 c5                	or     ebp,eax
  5fcb9a:	5f                   	pop    edi
  5fcb9b:	00 11                	add    BYTE PTR [ecx],dl
  5fcb9d:	c5 5f 00             	lds    ebx,FWORD PTR [edi+0x0]
  5fcba0:	79 c5                	jns    0x5fcb67
  5fcba2:	5f                   	pop    edi
  5fcba3:	00 ec                	add    ah,ch
  5fcba5:	c5 5f 00             	lds    ebx,FWORD PTR [edi+0x0]
  5fcba8:	21 c6                	and    esi,eax
  5fcbaa:	5f                   	pop    edi
  5fcbab:	00 78 c6             	add    BYTE PTR [eax-0x3a],bh
  5fcbae:	5f                   	pop    edi
	...
