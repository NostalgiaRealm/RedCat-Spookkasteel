
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0042b620 <.text+0x2a620>:
  42b620:	6a ff                	push   0xffffffff
  42b622:	68 b8 31 62 00       	push   0x6231b8
  42b627:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42b62d:	50                   	push   eax
  42b62e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42b635:	83 ec 48             	sub    esp,0x48
  42b638:	53                   	push   ebx
  42b639:	55                   	push   ebp
  42b63a:	56                   	push   esi
  42b63b:	8d 44 24 18          	lea    eax,[esp+0x18]
  42b63f:	57                   	push   edi
  42b640:	8b f1                	mov    esi,ecx
  42b642:	50                   	push   eax
  42b643:	e8 88 81 ff ff       	call   0x4237d0
  42b648:	8b 10                	mov    edx,DWORD PTR [eax]
  42b64a:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  42b64e:	33 db                	xor    ebx,ebx
  42b650:	3b d3                	cmp    edx,ebx
  42b652:	0f 94 44 24 13       	sete   BYTE PTR [esp+0x13]
  42b657:	3b c3                	cmp    eax,ebx
  42b659:	74 17                	je     0x42b672
  42b65b:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  42b65e:	8b c8                	mov    ecx,eax
  42b660:	83 c0 14             	add    eax,0x14
  42b663:	4f                   	dec    edi
  42b664:	8b d7                	mov    edx,edi
  42b666:	3b d3                	cmp    edx,ebx
  42b668:	89 38                	mov    DWORD PTR [eax],edi
  42b66a:	75 06                	jne    0x42b672
  42b66c:	53                   	push   ebx
  42b66d:	e8 4e 09 18 00       	call   0x5abfc0
  42b672:	38 5c 24 13          	cmp    BYTE PTR [esp+0x13],bl
  42b676:	0f 85 e3 01 00 00    	jne    0x42b85f
  42b67c:	51                   	push   ecx
  42b67d:	8b cc                	mov    ecx,esp
  42b67f:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42b683:	51                   	push   ecx
  42b684:	8b ce                	mov    ecx,esi
  42b686:	e8 45 81 ff ff       	call   0x4237d0
  42b68b:	e8 d0 f9 fd ff       	call   0x40b060
  42b690:	8b e8                	mov    ebp,eax
  42b692:	83 c4 04             	add    esp,0x4
  42b695:	3b eb                	cmp    ebp,ebx
  42b697:	75 7e                	jne    0x42b717
  42b699:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42b69e:	83 c9 ff             	or     ecx,0xffffffff
  42b6a1:	33 c0                	xor    eax,eax
  42b6a3:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  42b6a7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42b6a9:	f7 d1                	not    ecx
  42b6ab:	49                   	dec    ecx
  42b6ac:	88 54 24 3c          	mov    BYTE PTR [esp+0x3c],dl
  42b6b0:	51                   	push   ecx
  42b6b1:	68 70 3f 6b 00       	push   0x6b3f70
  42b6b6:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  42b6ba:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  42b6be:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  42b6c2:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
  42b6c6:	e8 25 8a fd ff       	call   0x4040f0
  42b6cb:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  42b6cf:	89 5c 24 60          	mov    DWORD PTR [esp+0x60],ebx
  42b6d3:	50                   	push   eax
  42b6d4:	6a 63                	push   0x63
  42b6d6:	68 c4 ff 68 00       	push   0x68ffc4
  42b6db:	68 14 e5 68 00       	push   0x68e514
  42b6e0:	e8 0b 51 17 00       	call   0x5a07f0
  42b6e5:	ff d0                	call   eax
  42b6e7:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  42b6eb:	83 c4 10             	add    esp,0x10
  42b6ee:	3b c3                	cmp    eax,ebx
  42b6f0:	c7 44 24 60 ff ff ff 	mov    DWORD PTR [esp+0x60],0xffffffff
  42b6f7:	ff 
  42b6f8:	74 1d                	je     0x42b717
  42b6fa:	8d 48 ff             	lea    ecx,[eax-0x1]
  42b6fd:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42b700:	3a c3                	cmp    al,bl
  42b702:	74 0a                	je     0x42b70e
  42b704:	3c ff                	cmp    al,0xff
  42b706:	74 06                	je     0x42b70e
  42b708:	fe c8                	dec    al
  42b70a:	88 01                	mov    BYTE PTR [ecx],al
  42b70c:	eb 09                	jmp    0x42b717
  42b70e:	51                   	push   ecx
  42b70f:	e8 dc 2e 1d 00       	call   0x5fe5f0
  42b714:	83 c4 04             	add    esp,0x4
  42b717:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  42b71a:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  42b71e:	50                   	push   eax
  42b71f:	8b cd                	mov    ecx,ebp
  42b721:	ff 52 48             	call   DWORD PTR [edx+0x48]
  42b724:	8b 08                	mov    ecx,DWORD PTR [eax]
  42b726:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  42b72a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42b72e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  42b731:	51                   	push   ecx
  42b732:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  42b736:	8b 16                	mov    edx,DWORD PTR [esi]
  42b738:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  42b73c:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  42b73f:	8b ce                	mov    ecx,esi
  42b741:	d8 86 2c 02 00 00    	fadd   DWORD PTR [esi+0x22c]
  42b747:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  42b74b:	8d 44 24 40          	lea    eax,[esp+0x40]
  42b74f:	50                   	push   eax
  42b750:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  42b754:	ff 92 c8 00 00 00    	call   DWORD PTR [edx+0xc8]
  42b75a:	8b d0                	mov    edx,eax
  42b75c:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  42b760:	e8 7b 78 18 00       	call   0x5b2fe0
  42b765:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42b769:	e8 b2 77 18 00       	call   0x5b2f20
  42b76e:	8b 8e 18 02 00 00    	mov    ecx,DWORD PTR [esi+0x218]
  42b774:	dd d8                	fstp   st(0)
  42b776:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  42b77a:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42b77e:	d9 e0                	fchs
  42b780:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
  42b784:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  42b788:	e8 13 ed 1d 00       	call   0x60a4a0
  42b78d:	99                   	cdq
  42b78e:	b9 10 27 00 00       	mov    ecx,0x2710
  42b793:	f7 f9                	idiv   ecx
  42b795:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  42b799:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  42b79d:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  42b7a1:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42b7a5:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  42b7a9:	de c9                	fmulp  st(1),st
  42b7ab:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  42b7b1:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  42b7b5:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  42b7b9:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
  42b7bd:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  42b7c1:	e8 da ec 1d 00       	call   0x60a4a0
  42b7c6:	99                   	cdq
  42b7c7:	b9 10 27 00 00       	mov    ecx,0x2710
  42b7cc:	f7 f9                	idiv   ecx
  42b7ce:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  42b7d2:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  42b7d6:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  42b7da:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42b7de:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  42b7e2:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  42b7e6:	de c9                	fmulp  st(1),st
  42b7e8:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  42b7ee:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  42b7f2:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  42b7f6:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  42b7fa:	e8 a1 ec 1d 00       	call   0x60a4a0
  42b7ff:	99                   	cdq
  42b800:	b9 10 27 00 00       	mov    ecx,0x2710
  42b805:	f7 f9                	idiv   ecx
  42b807:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42b80b:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  42b80f:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  42b813:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42b817:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  42b81b:	de c9                	fmulp  st(1),st
  42b81d:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  42b823:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  42b827:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  42b82b:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  42b82f:	e8 ec 76 18 00       	call   0x5b2f20
  42b834:	8b 3e                	mov    edi,DWORD PTR [esi]
  42b836:	8d 54 24 24          	lea    edx,[esp+0x24]
  42b83a:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  42b83e:	52                   	push   edx
  42b83f:	50                   	push   eax
  42b840:	8b ce                	mov    ecx,esi
  42b842:	dd d8                	fstp   st(0)
  42b844:	ff 97 c8 00 00 00    	call   DWORD PTR [edi+0xc8]
  42b84a:	50                   	push   eax
  42b84b:	8b ce                	mov    ecx,esi
  42b84d:	ff 97 c4 00 00 00    	call   DWORD PTR [edi+0xc4]
  42b853:	8b 16                	mov    edx,DWORD PTR [esi]
  42b855:	6a 02                	push   0x2
  42b857:	8b ce                	mov    ecx,esi
  42b859:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
  42b85f:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  42b863:	5f                   	pop    edi
  42b864:	5e                   	pop    esi
  42b865:	5d                   	pop    ebp
  42b866:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42b86d:	5b                   	pop    ebx
  42b86e:	83 c4 54             	add    esp,0x54
  42b871:	c3                   	ret
  42b872:	90                   	nop
  42b873:	90                   	nop
  42b874:	90                   	nop
  42b875:	90                   	nop
  42b876:	90                   	nop
  42b877:	90                   	nop
  42b878:	90                   	nop
  42b879:	90                   	nop
  42b87a:	90                   	nop
  42b87b:	90                   	nop
  42b87c:	90                   	nop
  42b87d:	90                   	nop
  42b87e:	90                   	nop
  42b87f:	90                   	nop
