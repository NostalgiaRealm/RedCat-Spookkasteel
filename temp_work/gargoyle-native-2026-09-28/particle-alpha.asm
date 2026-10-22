  47e850:	83 ec 3c             	sub    esp,0x3c
  47e853:	53                   	push   ebx
  47e854:	56                   	push   esi
  47e855:	8b f1                	mov    esi,ecx
  47e857:	32 db                	xor    bl,bl
  47e859:	38 5e 6c             	cmp    BYTE PTR [esi+0x6c],bl
  47e85c:	0f 84 fa 01 00 00    	je     0x47ea5c
  47e862:	38 5e 5c             	cmp    BYTE PTR [esi+0x5c],bl
  47e865:	75 0b                	jne    0x47e872
  47e867:	88 5e 6c             	mov    BYTE PTR [esi+0x6c],bl
  47e86a:	5e                   	pop    esi
  47e86b:	5b                   	pop    ebx
  47e86c:	83 c4 3c             	add    esp,0x3c
  47e86f:	c2 04 00             	ret    0x4
  47e872:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
  47e875:	8b 56 54             	mov    edx,DWORD PTR [esi+0x54]
  47e878:	55                   	push   ebp
  47e879:	8b 6c 24 4c          	mov    ebp,DWORD PTR [esp+0x4c]
  47e87d:	8d 48 ff             	lea    ecx,[eax-0x1]
  47e880:	57                   	push   edi
  47e881:	3b d1                	cmp    edx,ecx
  47e883:	c7 86 c4 00 00 00 00 	mov    DWORD PTR [esi+0xc4],0x41a00000
  47e88a:	00 a0 41 
  47e88d:	7c 77                	jl     0x47e906
  47e88f:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
  47e892:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47e896:	8d 04 40             	lea    eax,[eax+eax*2]
  47e899:	52                   	push   edx
  47e89a:	8d 56 04             	lea    edx,[esi+0x4]
  47e89d:	8d 4c 81 f4          	lea    ecx,[ecx+eax*4-0xc]
  47e8a1:	e8 3a 47 13 00       	call   0x5b2fe0
  47e8a6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47e8aa:	e8 71 46 13 00       	call   0x5b2f20
  47e8af:	dd d8                	fstp   st(0)
  47e8b1:	55                   	push   ebp
  47e8b2:	e8 79 b5 f8 ff       	call   0x409e30
  47e8b7:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  47e8bd:	83 c4 04             	add    esp,0x4
  47e8c0:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  47e8c6:	df e0                	fnstsw ax
  47e8c8:	f6 c4 41             	test   ah,0x41
  47e8cb:	75 08                	jne    0x47e8d5
  47e8cd:	dd d8                	fstp   st(0)
  47e8cf:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e8d5:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e8db:	d8 e1                	fsub   st,st(1)
  47e8dd:	51                   	push   ecx
  47e8de:	8d 7e 10             	lea    edi,[esi+0x10]
  47e8e1:	8b d7                	mov    edx,edi
  47e8e3:	8b cf                	mov    ecx,edi
  47e8e5:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e8e8:	dd d8                	fstp   st(0)
  47e8ea:	e8 b1 46 13 00       	call   0x5b2fa0
  47e8ef:	8b cf                	mov    ecx,edi
  47e8f1:	e8 da 46 13 00       	call   0x5b2fd0
  47e8f6:	d8 1d 04 e3 64 00    	fcomp  DWORD PTR ds:0x64e304
  47e8fc:	df e0                	fnstsw ax
  47e8fe:	f6 c4 01             	test   ah,0x1
  47e901:	74 03                	je     0x47e906
  47e903:	88 5e 7a             	mov    BYTE PTR [esi+0x7a],bl
  47e906:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
  47e909:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
  47e90c:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47e910:	8d 5e 04             	lea    ebx,[esi+0x4]
  47e913:	8d 04 40             	lea    eax,[eax+eax*2]
  47e916:	52                   	push   edx
  47e917:	8b d3                	mov    edx,ebx
  47e919:	8d 0c 81             	lea    ecx,[ecx+eax*4]
  47e91c:	e8 bf 46 13 00       	call   0x5b2fe0
  47e921:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47e925:	e8 f6 45 13 00       	call   0x5b2f20
  47e92a:	d8 96 c4 00 00 00    	fcom   DWORD PTR [esi+0xc4]
  47e930:	df e0                	fnstsw ax
  47e932:	f6 c4 01             	test   ah,0x1
  47e935:	74 0f                	je     0x47e946
  47e937:	8b 56 50             	mov    edx,DWORD PTR [esi+0x50]
  47e93a:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
  47e93d:	4a                   	dec    edx
  47e93e:	3b c2                	cmp    eax,edx
  47e940:	7d 04                	jge    0x47e946
  47e942:	40                   	inc    eax
  47e943:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
  47e946:	d9 05 f0 e2 64 00    	fld    DWORD PTR ds:0x64e2f0
  47e94c:	d8 c9                	fmul   st,st(1)
  47e94e:	de c9                	fmulp  st(1),st
  47e950:	d9 56 3c             	fst    DWORD PTR [esi+0x3c]
  47e953:	d8 1d f4 e2 64 00    	fcomp  DWORD PTR ds:0x64e2f4
  47e959:	df e0                	fnstsw ax
  47e95b:	f6 c4 41             	test   ah,0x41
  47e95e:	75 08                	jne    0x47e968
  47e960:	a1 f4 e2 64 00       	mov    eax,ds:0x64e2f4
  47e965:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
  47e968:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
  47e96b:	8d 7e 40             	lea    edi,[esi+0x40]
  47e96e:	51                   	push   ecx
  47e96f:	8b d7                	mov    edx,edi
  47e971:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47e975:	e8 26 46 13 00       	call   0x5b2fa0
  47e97a:	83 c6 10             	add    esi,0x10
  47e97d:	55                   	push   ebp
  47e97e:	8b d6                	mov    edx,esi
  47e980:	8b 02                	mov    eax,DWORD PTR [edx]
  47e982:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47e986:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  47e989:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  47e98d:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47e990:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  47e994:	e8 97 b4 f8 ff       	call   0x409e30
  47e999:	d8 0d bc d0 64 00    	fmul   DWORD PTR ds:0x64d0bc
  47e99f:	8b cf                	mov    ecx,edi
  47e9a1:	8b d7                	mov    edx,edi
  47e9a3:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e9a6:	e8 f5 45 13 00       	call   0x5b2fa0
  47e9ab:	8d 44 24 10          	lea    eax,[esp+0x10]
  47e9af:	8b d7                	mov    edx,edi
  47e9b1:	50                   	push   eax
  47e9b2:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47e9b6:	e8 45 46 13 00       	call   0x5b3000
  47e9bb:	8b cb                	mov    ecx,ebx
  47e9bd:	55                   	push   ebp
  47e9be:	8d 7c 24 44          	lea    edi,[esp+0x44]
  47e9c2:	8b 11                	mov    edx,DWORD PTR [ecx]
  47e9c4:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  47e9c8:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  47e9cb:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  47e9cf:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  47e9d2:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  47e9d6:	e8 55 b4 f8 ff       	call   0x409e30
  47e9db:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e9de:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47e9e2:	8b d7                	mov    edx,edi
  47e9e4:	e8 b7 45 13 00       	call   0x5b2fa0
  47e9e9:	8d 54 24 34          	lea    edx,[esp+0x34]
  47e9ed:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47e9f1:	52                   	push   edx
  47e9f2:	8d 54 24 44          	lea    edx,[esp+0x44]
  47e9f6:	e8 05 46 13 00       	call   0x5b3000
  47e9fb:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  47e9ff:	e8 cc 45 13 00       	call   0x5b2fd0
  47ea04:	d8 15 f8 e2 64 00    	fcom   DWORD PTR ds:0x64e2f8
  47ea0a:	5f                   	pop    edi
  47ea0b:	5d                   	pop    ebp
  47ea0c:	df e0                	fnstsw ax
  47ea0e:	f6 c4 41             	test   ah,0x41
  47ea11:	75 1f                	jne    0x47ea32
  47ea13:	d8 35 f8 e2 64 00    	fdiv   DWORD PTR ds:0x64e2f8
  47ea19:	51                   	push   ecx
  47ea1a:	8d 54 24 0c          	lea    edx,[esp+0xc]
  47ea1e:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  47ea22:	d8 3d 54 a3 64 00    	fdivr  DWORD PTR ds:0x64a354
  47ea28:	d9 1c 24             	fstp   DWORD PTR [esp]
  47ea2b:	e8 70 45 13 00       	call   0x5b2fa0
  47ea30:	eb 02                	jmp    0x47ea34
  47ea32:	dd d8                	fstp   st(0)
  47ea34:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  47ea38:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  47ea3c:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  47ea40:	89 06                	mov    DWORD PTR [esi],eax
  47ea42:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47ea46:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  47ea49:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47ea4d:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47ea50:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  47ea54:	89 03                	mov    DWORD PTR [ebx],eax
  47ea56:	89 4b 04             	mov    DWORD PTR [ebx+0x4],ecx
  47ea59:	89 53 08             	mov    DWORD PTR [ebx+0x8],edx
  47ea5c:	5e                   	pop    esi
  47ea5d:	5b                   	pop    ebx
  47ea5e:	83 c4 3c             	add    esp,0x3c
  47ea61:	c2 04 00             	ret    0x4
  47ea64:	90                   	nop
  47ea65:	90                   	nop
  47ea66:	90                   	nop
  47ea67:	90                   	nop
  47ea68:	90                   	nop
  47ea69:	90                   	nop
  47ea6a:	90                   	nop
  47ea6b:	90                   	nop
  47ea6c:	90                   	nop
  47ea6d:	90                   	nop
  47ea6e:	90                   	nop
  47ea6f:	90                   	nop
  47ea70:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  47ea74:	85 c0                	test   eax,eax
  47ea76:	74 11                	je     0x47ea89
  47ea78:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
  47ea7b:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  47ea7f:	c6 41 5c 01          	mov    BYTE PTR [ecx+0x5c],0x1
  47ea83:	89 41 50             	mov    DWORD PTR [ecx+0x50],eax
  47ea86:	c2 08 00             	ret    0x8
  47ea89:	c6 41 5c 00          	mov    BYTE PTR [ecx+0x5c],0x0
  47ea8d:	c2 08 00             	ret    0x8
  47ea90:	81 ec f8 00 00 00    	sub    esp,0xf8
  47ea96:	56                   	push   esi
  47ea97:	8b f1                	mov    esi,ecx
  47ea99:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  47ea9c:	84 c0                	test   al,al
  47ea9e:	0f 84 2c 02 00 00    	je     0x47ecd0
  47eaa4:	8b 8e ec 00 00 00    	mov    ecx,DWORD PTR [esi+0xec]
  47eaaa:	57                   	push   edi
  47eaab:	83 f9 ff             	cmp    ecx,0xffffffff
  47eaae:	b2 01                	mov    dl,0x1
  47eab0:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  47eab4:	74 63                	je     0x47eb19
  47eab6:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
  47eabc:	83 f8 ff             	cmp    eax,0xffffffff
  47eabf:	75 1b                	jne    0x47eadc
  47eac1:	8b 84 24 04 01 00 00 	mov    eax,DWORD PTR [esp+0x104]
  47eac8:	c7 86 f4 00 00 00 00 	mov    DWORD PTR [esi+0xf4],0x3f800000
  47eacf:	00 80 3f 
  47ead2:	03 c8                	add    ecx,eax
  47ead4:	89 8e f0 00 00 00    	mov    DWORD PTR [esi+0xf0],ecx
  47eada:	eb 3d                	jmp    0x47eb19
  47eadc:	8b bc 24 04 01 00 00 	mov    edi,DWORD PTR [esp+0x104]
  47eae3:	3b f8                	cmp    edi,eax
  47eae5:	7e 0e                	jle    0x47eaf5
  47eae7:	c7 86 f4 00 00 00 00 	mov    DWORD PTR [esi+0xf4],0x0
  47eaee:	00 00 00 
  47eaf1:	32 d2                	xor    dl,dl
  47eaf3:	eb 24                	jmp    0x47eb19
  47eaf5:	85 c9                	test   ecx,ecx
  47eaf7:	7e 16                	jle    0x47eb0f
  47eaf9:	2b c7                	sub    eax,edi
  47eafb:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
  47eaff:	db 44 24 08          	fild   DWORD PTR [esp+0x8]
  47eb03:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  47eb07:	d9 9e f4 00 00 00    	fstp   DWORD PTR [esi+0xf4]
  47eb0d:	eb 0a                	jmp    0x47eb19
  47eb0f:	c7 86 f4 00 00 00 00 	mov    DWORD PTR [esi+0xf4],0x0
  47eb16:	00 00 00 
  47eb19:	84 d2                	test   dl,dl
  47eb1b:	88 96 f8 00 00 00    	mov    BYTE PTR [esi+0xf8],dl
  47eb21:	5f                   	pop    edi
  47eb22:	75 0f                	jne    0x47eb33
  47eb24:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
  47eb2a:	88 56 7a             	mov    BYTE PTR [esi+0x7a],dl
  47eb2d:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
  47eb31:	eb 24                	jmp    0x47eb57
  47eb33:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47eb39:	d8 a6 f4 00 00 00    	fsub   DWORD PTR [esi+0xf4]
  47eb3f:	d8 8e 08 01 00 00    	fmul   DWORD PTR [esi+0x108]
  47eb45:	d9 86 04 01 00 00    	fld    DWORD PTR [esi+0x104]
  47eb4b:	d8 8e f4 00 00 00    	fmul   DWORD PTR [esi+0xf4]
  47eb51:	de c1                	faddp  st(1),st
  47eb53:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
  47eb57:	8b 94 24 04 01 00 00 	mov    edx,DWORD PTR [esp+0x104]
  47eb5e:	52                   	push   edx
  47eb5f:	e8 cc b2 f8 ff       	call   0x409e30
  47eb64:	d8 8e 10 01 00 00    	fmul   DWORD PTR [esi+0x110]
  47eb6a:	83 c4 04             	add    esp,0x4
  47eb6d:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47eb71:	d8 86 0c 01 00 00    	fadd   DWORD PTR [esi+0x10c]
  47eb77:	d9 9e 0c 01 00 00    	fstp   DWORD PTR [esi+0x10c]
  47eb7d:	e8 3e 45 13 00       	call   0x5b30c0
  47eb82:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  47eb86:	e8 35 45 13 00       	call   0x5b30c0
  47eb8b:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  47eb92:	e8 29 45 13 00       	call   0x5b30c0
  47eb97:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  47eb9e:	e8 1d 45 13 00       	call   0x5b30c0
  47eba3:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  47eba7:	e8 14 45 13 00       	call   0x5b30c0
  47ebac:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
  47ebb2:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  47ebb9:	00 
  47ebba:	83 e8 00             	sub    eax,0x0
  47ebbd:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
  47ebc4:	00 
  47ebc5:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  47ebcc:	00 
  47ebcd:	74 54                	je     0x47ec23
  47ebcf:	48                   	dec    eax
  47ebd0:	74 37                	je     0x47ec09
  47ebd2:	48                   	dec    eax
  47ebd3:	74 1a                	je     0x47ebef
  47ebd5:	8b 86 0c 01 00 00    	mov    eax,DWORD PTR [esi+0x10c]
  47ebdb:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47ebdf:	50                   	push   eax
  47ebe0:	e8 4b 45 13 00       	call   0x5b3130
  47ebe5:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  47ebe9:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  47ebed:	eb 4c                	jmp    0x47ec3b
  47ebef:	8b 96 0c 01 00 00    	mov    edx,DWORD PTR [esi+0x10c]
  47ebf5:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47ebf9:	52                   	push   edx
  47ebfa:	e8 71 45 13 00       	call   0x5b3170
  47ebff:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  47ec03:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  47ec07:	eb 32                	jmp    0x47ec3b
  47ec09:	8b 8e 0c 01 00 00    	mov    ecx,DWORD PTR [esi+0x10c]
  47ec0f:	51                   	push   ecx
  47ec10:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  47ec14:	e8 17 45 13 00       	call   0x5b3130
  47ec19:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  47ec1d:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  47ec21:	eb 18                	jmp    0x47ec3b
  47ec23:	8b 86 0c 01 00 00    	mov    eax,DWORD PTR [esi+0x10c]
  47ec29:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47ec2d:	50                   	push   eax
  47ec2e:	e8 bd 44 13 00       	call   0x5b30f0
  47ec33:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  47ec37:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  47ec3b:	8d 54 24 0c          	lea    edx,[esp+0xc]
  47ec3f:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47ec43:	52                   	push   edx
  47ec44:	8d 54 24 10          	lea    edx,[esp+0x10]
  47ec48:	e8 73 46 13 00       	call   0x5b32c0
  47ec4d:	8b 86 24 01 00 00    	mov    eax,DWORD PTR [esi+0x124]
  47ec53:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  47ec57:	50                   	push   eax
  47ec58:	e8 93 44 13 00       	call   0x5b30f0
  47ec5d:	8b 8e 28 01 00 00    	mov    ecx,DWORD PTR [esi+0x128]
  47ec63:	51                   	push   ecx
  47ec64:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  47ec6b:	e8 80 44 13 00       	call   0x5b30f0
  47ec70:	8d 94 24 cc 00 00 00 	lea    edx,[esp+0xcc]
  47ec77:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  47ec7b:	52                   	push   edx
  47ec7c:	8d 94 24 a0 00 00 00 	lea    edx,[esp+0xa0]
  47ec83:	e8 38 46 13 00       	call   0x5b32c0
  47ec88:	8d 44 24 0c          	lea    eax,[esp+0xc]
  47ec8c:	8d 54 24 0c          	lea    edx,[esp+0xc]
  47ec90:	50                   	push   eax
  47ec91:	8d 8c 24 d0 00 00 00 	lea    ecx,[esp+0xd0]
  47ec98:	e8 23 46 13 00       	call   0x5b32c0
  47ec9d:	8b 8e 20 01 00 00    	mov    ecx,DWORD PTR [esi+0x120]
  47eca3:	8b 96 1c 01 00 00    	mov    edx,DWORD PTR [esi+0x11c]
  47eca9:	8b 86 18 01 00 00    	mov    eax,DWORD PTR [esi+0x118]
  47ecaf:	51                   	push   ecx
  47ecb0:	52                   	push   edx
  47ecb1:	50                   	push   eax
  47ecb2:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47ecb6:	e8 c5 45 13 00       	call   0x5b3280
  47ecbb:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47ecbf:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  47ecc3:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  47ecc7:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  47ecca:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47eccd:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  47ecd0:	5e                   	pop    esi
  47ecd1:	81 c4 f8 00 00 00    	add    esp,0xf8
  47ecd7:	c2 08 00             	ret    0x8
  47ecda:	90                   	nop
  47ecdb:	90                   	nop
  47ecdc:	90                   	nop
  47ecdd:	90                   	nop
  47ecde:	90                   	nop
  47ecdf:	90                   	nop
