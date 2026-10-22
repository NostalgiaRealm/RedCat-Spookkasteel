; Retained original RcHcGame.dat disassembly; lines597365-597487 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  5b8730:	81 ec 04 06 00 00    	sub    esp,0x604
  5b8736:	53                   	push   ebx
  5b8737:	8b 9c 24 10 06 00 00 	mov    ebx,DWORD PTR [esp+0x610]
  5b873e:	55                   	push   ebp
  5b873f:	56                   	push   esi
  5b8740:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  5b8743:	57                   	push   edi
  5b8744:	8b bc 24 18 06 00 00 	mov    edi,DWORD PTR [esp+0x618]
  5b874b:	41                   	inc    ecx
  5b874c:	33 f6                	xor    esi,esi
  5b874e:	8d 83 cc 0b 00 00    	lea    eax,[ebx+0xbcc]
  5b8754:	89 4b 04             	mov    DWORD PTR [ebx+0x4],ecx
  5b8757:	57                   	push   edi
  5b8758:	89 35 24 2f 72 00    	mov    DWORD PTR ds:0x722f24,esi
  5b875e:	89 35 40 7b 74 00    	mov    DWORD PTR ds:0x747b40,esi
  5b8764:	89 35 48 7b 74 00    	mov    DWORD PTR ds:0x747b48,esi
  5b876a:	a3 00 c4 6c 00       	mov    ds:0x6cc400,eax
  5b876f:	e8 bc fe ff ff       	call   0x5b8630
  5b8774:	53                   	push   ebx
  5b8775:	e8 f6 fe ff ff       	call   0x5b8670
  5b877a:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
  5b877d:	51                   	push   ecx
  5b877e:	e8 2d ff ff ff       	call   0x5b86b0
  5b8783:	8b ac 24 2c 06 00 00 	mov    ebp,DWORD PTR [esp+0x62c]
  5b878a:	83 c4 0c             	add    esp,0xc
  5b878d:	8b cd                	mov    ecx,ebp
  5b878f:	e8 ec 0c 01 00       	call   0x5c9480
  5b8794:	8b 10                	mov    edx,DWORD PTR [eax]
  5b8796:	89 15 38 c5 6a 00    	mov    DWORD PTR ds:0x6ac538,edx
  5b879c:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  5b879f:	89 0d 3c c5 6a 00    	mov    DWORD PTR ds:0x6ac53c,ecx
  5b87a5:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  5b87a8:	89 15 40 c5 6a 00    	mov    DWORD PTR ds:0x6ac540,edx
  5b87ae:	e8 4d ff ff ff       	call   0x5b8700
  5b87b3:	8b 0d 10 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc410
  5b87b9:	8d 44 24 10          	lea    eax,[esp+0x10]
  5b87bd:	a3 04 c4 6c 00       	mov    ds:0x6cc404,eax
  5b87c2:	6a 04                	push   0x4
  5b87c4:	8b 91 a8 00 00 00    	mov    edx,DWORD PTR [ecx+0xa8]
  5b87ca:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
  5b87cd:	f7 d0                	not    eax
  5b87cf:	83 e0 01             	and    eax,0x1
  5b87d2:	a3 fc c3 6c 00       	mov    ds:0x6cc3fc,eax
  5b87d7:	e8 44 f6 ff ff       	call   0x5b7e20
  5b87dc:	83 c4 04             	add    esp,0x4
  5b87df:	85 c0                	test   eax,eax
  5b87e1:	75 06                	jne    0x5b87e9
  5b87e3:	89 35 fc c3 6c 00    	mov    DWORD PTR ds:0x6cc3fc,esi
  5b87e9:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5b87ed:	55                   	push   ebp
  5b87ee:	51                   	push   ecx
  5b87ef:	e8 4c 7f 01 00       	call   0x5d0740
  5b87f4:	8d 54 24 18          	lea    edx,[esp+0x18]
  5b87f8:	52                   	push   edx
  5b87f9:	55                   	push   ebp
  5b87fa:	53                   	push   ebx
  5b87fb:	57                   	push   edi
  5b87fc:	e8 7f cd 01 00       	call   0x5d5580
  5b8801:	53                   	push   ebx
  5b8802:	e8 b9 ac 01 00       	call   0x5d34c0
  5b8807:	83 c4 1c             	add    esp,0x1c
  5b880a:	85 c0                	test   eax,eax
  5b880c:	75 0b                	jne    0x5b8819
  5b880e:	5f                   	pop    edi
  5b880f:	5e                   	pop    esi
  5b8810:	5d                   	pop    ebp
  5b8811:	5b                   	pop    ebx
  5b8812:	81 c4 04 06 00 00    	add    esp,0x604
  5b8818:	c3                   	ret
  5b8819:	b9 81 01 00 00       	mov    ecx,0x181
  5b881e:	8d 74 24 10          	lea    esi,[esp+0x10]
  5b8822:	bf 20 29 72 00       	mov    edi,0x722920
  5b8827:	8d 44 24 10          	lea    eax,[esp+0x10]
  5b882b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5b882d:	8b 8c 24 18 06 00 00 	mov    ecx,DWORD PTR [esp+0x618]
  5b8834:	50                   	push   eax
  5b8835:	55                   	push   ebp
  5b8836:	53                   	push   ebx
  5b8837:	51                   	push   ecx
  5b8838:	e8 93 00 00 00       	call   0x5b88d0
  5b883d:	83 c4 10             	add    esp,0x10
  5b8840:	85 c0                	test   eax,eax
  5b8842:	75 0b                	jne    0x5b884f
  5b8844:	5f                   	pop    edi
  5b8845:	5e                   	pop    esi
  5b8846:	5d                   	pop    ebp
  5b8847:	5b                   	pop    ebx
  5b8848:	81 c4 04 06 00 00    	add    esp,0x604
  5b884e:	c3                   	ret
  5b884f:	d9 83 88 03 00 00    	fld    DWORD PTR [ebx+0x388]
  5b8855:	d8 0d 80 01 65 00    	fmul   DWORD PTR ds:0x650180
  5b885b:	d8 0d a8 fa 64 00    	fmul   DWORD PTR ds:0x64faa8
  5b8861:	d8 0d 7c 01 65 00    	fmul   DWORD PTR ds:0x65017c
  5b8867:	d8 83 a8 03 00 00    	fadd   DWORD PTR [ebx+0x3a8]
  5b886d:	d9 9b a8 03 00 00    	fstp   DWORD PTR [ebx+0x3a8]
  5b8873:	8b 15 10 c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc410
  5b8879:	ff 52 70             	call   DWORD PTR [edx+0x70]
  5b887c:	a1 10 c4 6c 00       	mov    eax,ds:0x6cc410
  5b8881:	ff 50 74             	call   DWORD PTR [eax+0x74]
  5b8884:	53                   	push   ebx
  5b8885:	e8 66 da ff ff       	call   0x5b62f0
  5b888a:	83 c4 04             	add    esp,0x4
  5b888d:	85 c0                	test   eax,eax
  5b888f:	75 0b                	jne    0x5b889c
  5b8891:	5f                   	pop    edi
  5b8892:	5e                   	pop    esi
  5b8893:	5d                   	pop    ebp
  5b8894:	5b                   	pop    ebx
  5b8895:	81 c4 04 06 00 00    	add    esp,0x604
  5b889b:	c3                   	ret
  5b889c:	8b cd                	mov    ecx,ebp
  5b889e:	e8 9d 35 fe ff       	call   0x59be40
  5b88a3:	8d bb 20 0c 00 00    	lea    edi,[ebx+0xc20]
  5b88a9:	b9 0c 00 00 00       	mov    ecx,0xc
  5b88ae:	8b f0                	mov    esi,eax
  5b88b0:	b8 01 00 00 00       	mov    eax,0x1
  5b88b5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5b88b7:	5f                   	pop    edi
  5b88b8:	5e                   	pop    esi
  5b88b9:	5d                   	pop    ebp
  5b88ba:	5b                   	pop    ebx
  5b88bb:	81 c4 04 06 00 00    	add    esp,0x604
  5b88c1:	c3                   	ret
