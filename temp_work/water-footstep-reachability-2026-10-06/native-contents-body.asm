
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005cb830 <.text+0x1ca830>:
  5cb830:	83 ec 48             	sub    esp,0x48
  5cb833:	53                   	push   ebx
  5cb834:	55                   	push   ebp
  5cb835:	8b 6c 24 5c          	mov    ebp,DWORD PTR [esp+0x5c]
  5cb839:	56                   	push   esi
  5cb83a:	8b 74 24 58          	mov    esi,DWORD PTR [esp+0x58]
  5cb83e:	33 c0                	xor    eax,eax
  5cb840:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  5cb844:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5cb848:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5cb84c:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  5cb84f:	57                   	push   edi
  5cb850:	8b 7c 24 60          	mov    edi,DWORD PTR [esp+0x60]
  5cb854:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  5cb858:	05 c8 00 00 00       	add    eax,0xc8
  5cb85d:	51                   	push   ecx
  5cb85e:	8b d7                	mov    edx,edi
  5cb860:	8b cd                	mov    ecx,ebp
  5cb862:	a3 90 c5 6c 00       	mov    ds:0x6cc590,eax
  5cb867:	e8 94 77 fe ff       	call   0x5b3000
  5cb86c:	8b 5c 24 68          	mov    ebx,DWORD PTR [esp+0x68]
  5cb870:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  5cb874:	52                   	push   edx
  5cb875:	8b d7                	mov    edx,edi
  5cb877:	8b cb                	mov    ecx,ebx
  5cb879:	e8 82 77 fe ff       	call   0x5b3000
  5cb87e:	8b 0d 2c 08 72 00    	mov    ecx,DWORD PTR ds:0x72082c
  5cb884:	8a 44 24 6c          	mov    al,BYTE PTR [esp+0x6c]
  5cb888:	41                   	inc    ecx
  5cb889:	a8 04                	test   al,0x4
  5cb88b:	89 0d 2c 08 72 00    	mov    DWORD PTR ds:0x72082c,ecx
  5cb891:	0f 84 be 00 00 00    	je     0x5cb955
  5cb897:	8b 86 b8 03 00 00    	mov    eax,DWORD PTR [esi+0x3b8]
  5cb89d:	8b be bc 03 00 00    	mov    edi,DWORD PTR [esi+0x3bc]
  5cb8a3:	85 c0                	test   eax,eax
  5cb8a5:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
  5cb8a9:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
  5cb8b0:	00 
  5cb8b1:	0f 8e 9e 00 00 00    	jle    0x5cb955
  5cb8b7:	f6 47 04 08          	test   BYTE PTR [edi+0x4],0x8
  5cb8bb:	74 74                	je     0x5cb931
  5cb8bd:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  5cb8c1:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
  5cb8c4:	85 d1                	test   ecx,edx
  5cb8c6:	74 69                	je     0x5cb931
  5cb8c8:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
  5cb8cc:	85 c0                	test   eax,eax
  5cb8ce:	74 13                	je     0x5cb8e3
  5cb8d0:	8b 54 24 78          	mov    edx,DWORD PTR [esp+0x78]
  5cb8d4:	8b 0f                	mov    ecx,DWORD PTR [edi]
  5cb8d6:	52                   	push   edx
  5cb8d7:	51                   	push   ecx
  5cb8d8:	6a 00                	push   0x0
  5cb8da:	ff d0                	call   eax
  5cb8dc:	83 c4 0c             	add    esp,0xc
  5cb8df:	85 c0                	test   eax,eax
  5cb8e1:	74 4a                	je     0x5cb92d
  5cb8e3:	8b 0f                	mov    ecx,DWORD PTR [edi]
  5cb8e5:	8d 54 24 40          	lea    edx,[esp+0x40]
  5cb8e9:	e8 72 8f fe ff       	call   0x5b4860
  5cb8ee:	85 c0                	test   eax,eax
  5cb8f0:	74 3b                	je     0x5cb92d
  5cb8f2:	33 c9                	xor    ecx,ecx
  5cb8f4:	d9 44 8c 1c          	fld    DWORD PTR [esp+ecx*4+0x1c]
  5cb8f8:	d9 44 8c 40          	fld    DWORD PTR [esp+ecx*4+0x40]
  5cb8fc:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  5cb902:	de d9                	fcompp
  5cb904:	df e0                	fnstsw ax
  5cb906:	f6 c4 41             	test   ah,0x41
  5cb909:	74 1d                	je     0x5cb928
  5cb90b:	d9 44 8c 28          	fld    DWORD PTR [esp+ecx*4+0x28]
  5cb90f:	d9 44 8c 4c          	fld    DWORD PTR [esp+ecx*4+0x4c]
  5cb913:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  5cb919:	de d9                	fcompp
  5cb91b:	df e0                	fnstsw ax
  5cb91d:	f6 c4 01             	test   ah,0x1
  5cb920:	75 06                	jne    0x5cb928
  5cb922:	41                   	inc    ecx
  5cb923:	83 f9 03             	cmp    ecx,0x3
  5cb926:	7c cc                	jl     0x5cb8f4
  5cb928:	83 f9 03             	cmp    ecx,0x3
  5cb92b:	74 1a                	je     0x5cb947
  5cb92d:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  5cb931:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
  5cb935:	83 c7 0c             	add    edi,0xc
  5cb938:	41                   	inc    ecx
  5cb939:	3b c8                	cmp    ecx,eax
  5cb93b:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
  5cb93f:	0f 8c 72 ff ff ff    	jl     0x5cb8b7
  5cb945:	eb 0e                	jmp    0x5cb955
  5cb947:	8b 17                	mov    edx,DWORD PTR [edi]
  5cb949:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
  5cb950:	00 
  5cb951:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
  5cb955:	f6 44 24 6c 02       	test   BYTE PTR [esp+0x6c],0x2
  5cb95a:	0f 84 e5 01 00 00    	je     0x5cbb45
  5cb960:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  5cb963:	8b 88 14 01 00 00    	mov    ecx,DWORD PTR [eax+0x114]
  5cb969:	89 0d 10 c5 6c 00    	mov    DWORD PTR ds:0x6cc510,ecx
  5cb96f:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
  5cb972:	8b 82 2c 01 00 00    	mov    eax,DWORD PTR [edx+0x12c]
  5cb978:	a3 c8 c4 6c 00       	mov    ds:0x6cc4c8,eax
  5cb97d:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  5cb980:	a1 90 c5 6c 00       	mov    eax,ds:0x6cc590
  5cb985:	8b 91 1c 01 00 00    	mov    edx,DWORD PTR [ecx+0x11c]
  5cb98b:	89 15 c4 c4 6c 00    	mov    DWORD PTR ds:0x6cc4c4,edx
  5cb991:	8b 48 70             	mov    ecx,DWORD PTR [eax+0x70]
  5cb994:	89 0d 14 c5 6c 00    	mov    DWORD PTR ds:0x6cc514,ecx
  5cb99a:	8b 76 18             	mov    esi,DWORD PTR [esi+0x18]
  5cb99d:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  5cb9a0:	8d 8e cc 01 00 00    	lea    ecx,[esi+0x1cc]
  5cb9a6:	8b b6 10 01 00 00    	mov    esi,DWORD PTR [esi+0x110]
  5cb9ac:	89 15 d8 c4 6c 00    	mov    DWORD PTR ds:0x6cc4d8,edx
  5cb9b2:	8b 55 04             	mov    edx,DWORD PTR [ebp+0x4]
  5cb9b5:	89 15 dc c4 6c 00    	mov    DWORD PTR ds:0x6cc4dc,edx
  5cb9bb:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
  5cb9be:	89 15 e0 c4 6c 00    	mov    DWORD PTR ds:0x6cc4e0,edx
  5cb9c4:	8b 13                	mov    edx,DWORD PTR [ebx]
  5cb9c6:	89 15 70 c5 6c 00    	mov    DWORD PTR ds:0x6cc570,edx
  5cb9cc:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  5cb9cf:	89 15 74 c5 6c 00    	mov    DWORD PTR ds:0x6cc574,edx
  5cb9d5:	8b 53 08             	mov    edx,DWORD PTR [ebx+0x8]
  5cb9d8:	89 15 78 c5 6c 00    	mov    DWORD PTR ds:0x6cc578,edx
  5cb9de:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  5cb9e2:	89 15 e8 c4 6c 00    	mov    DWORD PTR ds:0x6cc4e8,edx
  5cb9e8:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  5cb9ec:	89 15 ec c4 6c 00    	mov    DWORD PTR ds:0x6cc4ec,edx
  5cb9f2:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  5cb9f6:	89 15 f0 c4 6c 00    	mov    DWORD PTR ds:0x6cc4f0,edx
  5cb9fc:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  5cba00:	89 15 80 c5 6c 00    	mov    DWORD PTR ds:0x6cc580,edx
  5cba06:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5cba0a:	89 15 84 c5 6c 00    	mov    DWORD PTR ds:0x6cc584,edx
  5cba10:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  5cba14:	89 15 88 c5 6c 00    	mov    DWORD PTR ds:0x6cc588,edx
  5cba1a:	8b 90 a0 00 00 00    	mov    edx,DWORD PTR [eax+0xa0]
  5cba20:	33 db                	xor    ebx,ebx
  5cba22:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
  5cba26:	85 d2                	test   edx,edx
  5cba28:	0f 8e 17 01 00 00    	jle    0x5cbb45
  5cba2e:	8d b9 a4 00 00 00    	lea    edi,[ecx+0xa4]
  5cba34:	bd d4 00 00 00       	mov    ebp,0xd4
  5cba39:	eb 04                	jmp    0x5cba3f
  5cba3b:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
  5cba3f:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
  5cba43:	85 c0                	test   eax,eax
  5cba45:	74 15                	je     0x5cba5c
  5cba47:	8b 54 24 78          	mov    edx,DWORD PTR [esp+0x78]
  5cba4b:	52                   	push   edx
  5cba4c:	6a 00                	push   0x0
  5cba4e:	51                   	push   ecx
  5cba4f:	ff d0                	call   eax
  5cba51:	83 c4 0c             	add    esp,0xc
  5cba54:	85 c0                	test   eax,eax
  5cba56:	0f 84 c6 00 00 00    	je     0x5cbb22
  5cba5c:	85 db                	test   ebx,ebx
  5cba5e:	7e 36                	jle    0x5cba96
  5cba60:	33 c9                	xor    ecx,ecx
  5cba62:	8d 57 f4             	lea    edx,[edi-0xc]
  5cba65:	d9 44 8c 1c          	fld    DWORD PTR [esp+ecx*4+0x1c]
  5cba69:	d9 42 f4             	fld    DWORD PTR [edx-0xc]
  5cba6c:	de d9                	fcompp
  5cba6e:	df e0                	fnstsw ax
  5cba70:	f6 c4 41             	test   ah,0x41
  5cba73:	74 18                	je     0x5cba8d
  5cba75:	d9 44 8c 28          	fld    DWORD PTR [esp+ecx*4+0x28]
  5cba79:	d9 02                	fld    DWORD PTR [edx]
  5cba7b:	de d9                	fcompp
  5cba7d:	df e0                	fnstsw ax
  5cba7f:	f6 c4 01             	test   ah,0x1
  5cba82:	75 09                	jne    0x5cba8d
  5cba84:	41                   	inc    ecx
  5cba85:	83 c2 04             	add    edx,0x4
  5cba88:	83 f9 03             	cmp    ecx,0x3
  5cba8b:	7c d8                	jl     0x5cba65
  5cba8d:	83 f9 03             	cmp    ecx,0x3
  5cba90:	0f 85 8c 00 00 00    	jne    0x5cbb22
  5cba96:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  5cba9a:	8d 44 24 34          	lea    eax,[esp+0x34]
  5cba9e:	50                   	push   eax
  5cba9f:	8b d7                	mov    edx,edi
  5cbaa1:	e8 3a 75 fe ff       	call   0x5b2fe0
  5cbaa6:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  5cbaaa:	8d 54 24 34          	lea    edx,[esp+0x34]
  5cbaae:	51                   	push   ecx
  5cbaaf:	8d 4f a0             	lea    ecx,[edi-0x60]
  5cbab2:	e8 79 7c fe ff       	call   0x5b3730
  5cbab7:	8d 54 24 34          	lea    edx,[esp+0x34]
  5cbabb:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  5cbabf:	52                   	push   edx
  5cbac0:	8b d7                	mov    edx,edi
  5cbac2:	e8 39 75 fe ff       	call   0x5b3000
  5cbac7:	8d 44 24 64          	lea    eax,[esp+0x64]
  5cbacb:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
  5cbad2:	00 
  5cbad3:	8b 16                	mov    edx,DWORD PTR [esi]
  5cbad5:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  5cbad9:	50                   	push   eax
  5cbada:	51                   	push   ecx
  5cbadb:	52                   	push   edx
  5cbadc:	e8 af 00 00 00       	call   0x5cbb90
  5cbae1:	8b 44 24 70          	mov    eax,DWORD PTR [esp+0x70]
  5cbae5:	83 c4 0c             	add    esp,0xc
  5cbae8:	85 c0                	test   eax,eax
  5cbaea:	74 18                	je     0x5cbb04
  5cbaec:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cbaf0:	85 c9                	test   ecx,ecx
  5cbaf2:	75 10                	jne    0x5cbb04
  5cbaf4:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
  5cbaf8:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
  5cbaff:	00 
  5cbb00:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5cbb04:	a8 43                	test   al,0x43
  5cbb06:	74 08                	je     0x5cbb10
  5cbb08:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  5cbb0c:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5cbb10:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5cbb14:	0b c8                	or     ecx,eax
  5cbb16:	8a 44 24 6c          	mov    al,BYTE PTR [esp+0x6c]
  5cbb1a:	a8 08                	test   al,0x8
  5cbb1c:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  5cbb20:	75 23                	jne    0x5cbb45
  5cbb22:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
  5cbb26:	a1 90 c5 6c 00       	mov    eax,ds:0x6cc590
  5cbb2b:	03 cd                	add    ecx,ebp
  5cbb2d:	43                   	inc    ebx
  5cbb2e:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
  5cbb32:	8b 88 a0 00 00 00    	mov    ecx,DWORD PTR [eax+0xa0]
  5cbb38:	03 fd                	add    edi,ebp
  5cbb3a:	83 c6 50             	add    esi,0x50
  5cbb3d:	3b d9                	cmp    ebx,ecx
  5cbb3f:	0f 8c f6 fe ff ff    	jl     0x5cba3b
  5cbb45:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5cbb49:	5f                   	pop    edi
  5cbb4a:	5e                   	pop    esi
  5cbb4b:	5d                   	pop    ebp
  5cbb4c:	85 c0                	test   eax,eax
  5cbb4e:	5b                   	pop    ebx
  5cbb4f:	74 28                	je     0x5cbb79
  5cbb51:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
  5cbb55:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5cbb59:	8b 54 24 00          	mov    edx,DWORD PTR [esp+0x0]
  5cbb5d:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
  5cbb60:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  5cbb64:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
  5cbb6a:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  5cbb6d:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  5cbb70:	b8 01 00 00 00       	mov    eax,0x1
  5cbb75:	83 c4 48             	add    esp,0x48
  5cbb78:	c3                   	ret
  5cbb79:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
  5cbb7d:	33 d2                	xor    edx,edx
  5cbb7f:	89 10                	mov    DWORD PTR [eax],edx
  5cbb81:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  5cbb84:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  5cbb87:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
  5cbb8a:	33 c0                	xor    eax,eax
  5cbb8c:	83 c4 48             	add    esp,0x48
  5cbb8f:	c3                   	ret
  5cbb90:	53                   	push   ebx
  5cbb91:	55                   	push   ebp
  5cbb92:	8b 6c 24 14          	mov    ebp,DWORD PTR [esp+0x14]
  5cbb96:	56                   	push   esi
  5cbb97:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  5cbb9b:	57                   	push   edi
  5cbb9c:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  5cbba0:	85 f6                	test   esi,esi
  5cbba2:	7c 5d                	jl     0x5cbc01
  5cbba4:	a1 10 c5 6c 00       	mov    eax,ds:0x6cc510
  5cbba9:	8d 0c b6             	lea    ecx,[esi+esi*4]
  5cbbac:	8d 34 4e             	lea    esi,[esi+ecx*2]
  5cbbaf:	c1 e6 02             	shl    esi,0x2
  5cbbb2:	8b 44 06 10          	mov    eax,DWORD PTR [esi+eax*1+0x10]
  5cbbb6:	8d 14 80             	lea    edx,[eax+eax*4]
  5cbbb9:	a1 c8 c4 6c 00       	mov    eax,ds:0x6cc4c8
  5cbbbe:	8d 0c 90             	lea    ecx,[eax+edx*4]
  5cbbc1:	51                   	push   ecx
  5cbbc2:	68 80 c5 6c 00       	push   0x6cc580
  5cbbc7:	68 e8 c4 6c 00       	push   0x6cc4e8
  5cbbcc:	e8 7f ee ff ff       	call   0x5caa50
  5cbbd1:	8b d8                	mov    ebx,eax
  5cbbd3:	83 c4 0c             	add    esp,0xc
  5cbbd6:	f6 c3 01             	test   bl,0x1
  5cbbd9:	74 14                	je     0x5cbbef
  5cbbdb:	8b 15 10 c5 6c 00    	mov    edx,DWORD PTR ds:0x6cc510
  5cbbe1:	55                   	push   ebp
  5cbbe2:	57                   	push   edi
  5cbbe3:	8b 04 16             	mov    eax,DWORD PTR [esi+edx*1]
  5cbbe6:	50                   	push   eax
  5cbbe7:	e8 a4 ff ff ff       	call   0x5cbb90
  5cbbec:	83 c4 0c             	add    esp,0xc
  5cbbef:	f6 c3 02             	test   bl,0x2
  5cbbf2:	74 42                	je     0x5cbc36
  5cbbf4:	a1 10 c5 6c 00       	mov    eax,ds:0x6cc510
  5cbbf9:	8b 74 06 04          	mov    esi,DWORD PTR [esi+eax*1+0x4]
  5cbbfd:	85 f6                	test   esi,esi
  5cbbff:	7d a8                	jge    0x5cbba9
  5cbc01:	83 c8 ff             	or     eax,0xffffffff
  5cbc04:	8b 0d c4 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc4c4
  5cbc0a:	2b c6                	sub    eax,esi
  5cbc0c:	8d 04 40             	lea    eax,[eax+eax*2]
  5cbc0f:	8d 34 80             	lea    esi,[eax+eax*4]
  5cbc12:	c1 e6 02             	shl    esi,0x2
  5cbc15:	8d 14 0e             	lea    edx,[esi+ecx*1]
  5cbc18:	52                   	push   edx
  5cbc19:	57                   	push   edi
  5cbc1a:	e8 21 00 00 00       	call   0x5cbc40
  5cbc1f:	83 c4 08             	add    esp,0x8
  5cbc22:	85 c0                	test   eax,eax
  5cbc24:	74 10                	je     0x5cbc36
  5cbc26:	a1 c4 c4 6c 00       	mov    eax,ds:0x6cc4c4
  5cbc2b:	8b 0c 06             	mov    ecx,DWORD PTR [esi+eax*1]
  5cbc2e:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  5cbc31:	0b c1                	or     eax,ecx
  5cbc33:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
  5cbc36:	5f                   	pop    edi
  5cbc37:	5e                   	pop    esi
  5cbc38:	5d                   	pop    ebp
  5cbc39:	5b                   	pop    ebx
  5cbc3a:	c3                   	ret
  5cbc3b:	90                   	nop
  5cbc3c:	90                   	nop
  5cbc3d:	90                   	nop
  5cbc3e:	90                   	nop
  5cbc3f:	90                   	nop
  5cbc40:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5cbc44:	83 ec 14             	sub    esp,0x14
  5cbc47:	8b 50 38             	mov    edx,DWORD PTR [eax+0x38]
  5cbc4a:	8b 48 34             	mov    ecx,DWORD PTR [eax+0x34]
  5cbc4d:	53                   	push   ebx
  5cbc4e:	55                   	push   ebp
  5cbc4f:	33 ed                	xor    ebp,ebp
  5cbc51:	56                   	push   esi
  5cbc52:	85 d2                	test   edx,edx
  5cbc54:	57                   	push   edi
  5cbc55:	0f 8e 8c 00 00 00    	jle    0x5cbce7
  5cbc5b:	8d 1c cd 00 00 00 00 	lea    ebx,[ecx*8+0x0]
  5cbc62:	8b 15 14 c5 6c 00    	mov    edx,DWORD PTR ds:0x6cc514
  5cbc68:	8b 0d c8 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc4c8
  5cbc6e:	8d 7c 24 10          	lea    edi,[esp+0x10]
  5cbc72:	8b 04 13             	mov    eax,DWORD PTR [ebx+edx*1]
  5cbc75:	8d 04 80             	lea    eax,[eax+eax*4]
  5cbc78:	8d 34 81             	lea    esi,[ecx+eax*4]
  5cbc7b:	b9 05 00 00 00       	mov    ecx,0x5
  5cbc80:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5cbc82:	c7 44 24 20 06 00 00 	mov    DWORD PTR [esp+0x20],0x6
  5cbc89:	00 
  5cbc8a:	8b 44 13 04          	mov    eax,DWORD PTR [ebx+edx*1+0x4]
  5cbc8e:	85 c0                	test   eax,eax
  5cbc90:	74 13                	je     0x5cbca5
  5cbc92:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5cbc96:	e8 e5 73 fe ff       	call   0x5b3080
  5cbc9b:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  5cbc9f:	d9 e0                	fchs
  5cbca1:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  5cbca5:	68 70 c5 6c 00       	push   0x6cc570
  5cbcaa:	8d 54 24 14          	lea    edx,[esp+0x14]
  5cbcae:	68 d8 c4 6c 00       	push   0x6cc4d8
  5cbcb3:	52                   	push   edx
  5cbcb4:	e8 87 ee ff ff       	call   0x5cab40
  5cbcb9:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  5cbcbd:	83 c4 0c             	add    esp,0xc
  5cbcc0:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5cbcc4:	e8 27 5b 00 00       	call   0x5d17f0
  5cbcc9:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5cbccf:	df e0                	fnstsw ax
  5cbcd1:	f6 c4 01             	test   ah,0x1
  5cbcd4:	74 1e                	je     0x5cbcf4
  5cbcd6:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  5cbcda:	45                   	inc    ebp
  5cbcdb:	83 c3 08             	add    ebx,0x8
  5cbcde:	3b 68 38             	cmp    ebp,DWORD PTR [eax+0x38]
  5cbce1:	0f 8c 7b ff ff ff    	jl     0x5cbc62
  5cbce7:	5f                   	pop    edi
  5cbce8:	5e                   	pop    esi
  5cbce9:	5d                   	pop    ebp
  5cbcea:	b8 01 00 00 00       	mov    eax,0x1
  5cbcef:	5b                   	pop    ebx
  5cbcf0:	83 c4 14             	add    esp,0x14
  5cbcf3:	c3                   	ret
  5cbcf4:	5f                   	pop    edi
  5cbcf5:	5e                   	pop    esi
  5cbcf6:	5d                   	pop    ebp
  5cbcf7:	33 c0                	xor    eax,eax
  5cbcf9:	5b                   	pop    ebx
  5cbcfa:	83 c4 14             	add    esp,0x14
  5cbcfd:	c3                   	ret
  5cbcfe:	90                   	nop
  5cbcff:	90                   	nop
  5cbd00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5cbd04:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
  5cbd07:	05 c8 00 00 00       	add    eax,0xc8
  5cbd0c:	a3 90 c5 6c 00       	mov    ds:0x6cc590,eax
  5cbd11:	8b 48 64             	mov    ecx,DWORD PTR [eax+0x64]
  5cbd14:	89 0d 44 c5 6c 00    	mov    DWORD PTR ds:0x6cc544,ecx
  5cbd1a:	8b 50 4c             	mov    edx,DWORD PTR [eax+0x4c]
  5cbd1d:	89 15 2c c5 6c 00    	mov    DWORD PTR ds:0x6cc52c,edx
  5cbd23:	8b 40 54             	mov    eax,DWORD PTR [eax+0x54]
  5cbd26:	a3 04 c5 6c 00       	mov    ds:0x6cc504,eax
  5cbd2b:	c3                   	ret
  5cbd2c:	90                   	nop
  5cbd2d:	90                   	nop
  5cbd2e:	90                   	nop
  5cbd2f:	90                   	nop
