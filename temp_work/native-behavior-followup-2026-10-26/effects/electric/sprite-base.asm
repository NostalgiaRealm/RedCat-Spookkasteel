
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00591840 <.text+0x190840>:
  591840:	83 ec 18             	sub    esp,0x18
  591843:	53                   	push   ebx
  591844:	56                   	push   esi
  591845:	8b f1                	mov    esi,ecx
  591847:	57                   	push   edi
  591848:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59184c:	8b 06                	mov    eax,DWORD PTR [esi]
  59184e:	51                   	push   ecx
  59184f:	8b ce                	mov    ecx,esi
  591851:	ff 50 48             	call   DWORD PTR [eax+0x48]
  591854:	8b 10                	mov    edx,DWORD PTR [eax]
  591856:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  59185a:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  59185e:	57                   	push   edi
  59185f:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  591862:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  591866:	8b ce                	mov    ecx,esi
  591868:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  59186b:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  59186f:	e8 5c 00 00 00       	call   0x5918d0
  591874:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
  591878:	57                   	push   edi
  591879:	53                   	push   ebx
  59187a:	8b ce                	mov    ecx,esi
  59187c:	e8 6f d6 fd ff       	call   0x56eef0
  591881:	8b 86 9c 01 00 00    	mov    eax,DWORD PTR [esi+0x19c]
  591887:	85 c0                	test   eax,eax
  591889:	74 30                	je     0x5918bb
  59188b:	d9 86 1c 01 00 00    	fld    DWORD PTR [esi+0x11c]
  591891:	d9 58 60             	fstp   DWORD PTR [eax+0x60]
  591894:	8b 86 9c 01 00 00    	mov    eax,DWORD PTR [esi+0x19c]
  59189a:	8b 16                	mov    edx,DWORD PTR [esi]
  59189c:	55                   	push   ebp
  59189d:	8b ce                	mov    ecx,esi
  59189f:	8b 28                	mov    ebp,DWORD PTR [eax]
  5918a1:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  5918a5:	50                   	push   eax
  5918a6:	ff 52 48             	call   DWORD PTR [edx+0x48]
  5918a9:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5918ad:	50                   	push   eax
  5918ae:	51                   	push   ecx
  5918af:	8b 8e 9c 01 00 00    	mov    ecx,DWORD PTR [esi+0x19c]
  5918b5:	57                   	push   edi
  5918b6:	53                   	push   ebx
  5918b7:	ff 55 04             	call   DWORD PTR [ebp+0x4]
  5918ba:	5d                   	pop    ebp
  5918bb:	5f                   	pop    edi
  5918bc:	5e                   	pop    esi
  5918bd:	5b                   	pop    ebx
  5918be:	83 c4 18             	add    esp,0x18
  5918c1:	c2 08 00             	ret    0x8
  5918c4:	90                   	nop
  5918c5:	90                   	nop
  5918c6:	90                   	nop
  5918c7:	90                   	nop
  5918c8:	90                   	nop
  5918c9:	90                   	nop
  5918ca:	90                   	nop
  5918cb:	90                   	nop
  5918cc:	90                   	nop
  5918cd:	90                   	nop
  5918ce:	90                   	nop
  5918cf:	90                   	nop
  5918d0:	83 ec 0c             	sub    esp,0xc
  5918d3:	56                   	push   esi
  5918d4:	8b f1                	mov    esi,ecx
  5918d6:	d9 86 98 01 00 00    	fld    DWORD PTR [esi+0x198]
  5918dc:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5918e2:	df e0                	fnstsw ax
  5918e4:	f6 c4 41             	test   ah,0x41
  5918e7:	75 4b                	jne    0x591934
  5918e9:	8d 86 8c 01 00 00    	lea    eax,[esi+0x18c]
  5918ef:	8b 8e 8c 01 00 00    	mov    ecx,DWORD PTR [esi+0x18c]
  5918f5:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
  5918f9:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5918fd:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  591900:	51                   	push   ecx
  591901:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  591905:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  591908:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  59190c:	e8 1f 85 e7 ff       	call   0x409e30
  591911:	d8 8e 98 01 00 00    	fmul   DWORD PTR [esi+0x198]
  591917:	83 c4 04             	add    esp,0x4
  59191a:	8d 54 24 04          	lea    edx,[esp+0x4]
  59191e:	8b ce                	mov    ecx,esi
  591920:	d8 0d bc d0 64 00    	fmul   DWORD PTR ds:0x64d0bc
  591926:	52                   	push   edx
  591927:	d8 6c 24 0c          	fsubr  DWORD PTR [esp+0xc]
  59192b:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
  59192f:	e8 8c 5e f2 ff       	call   0x4b77c0
  591934:	5e                   	pop    esi
  591935:	83 c4 0c             	add    esp,0xc
  591938:	c2 04 00             	ret    0x4
  59193b:	90                   	nop
  59193c:	90                   	nop
  59193d:	90                   	nop
  59193e:	90                   	nop
  59193f:	90                   	nop
  591940:	6a ff                	push   0xffffffff
  591942:	68 99 37 64 00       	push   0x643799
  591947:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59194d:	50                   	push   eax
  59194e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  591955:	83 ec 30             	sub    esp,0x30
  591958:	53                   	push   ebx
  591959:	55                   	push   ebp
  59195a:	56                   	push   esi
  59195b:	33 f6                	xor    esi,esi
  59195d:	33 db                	xor    ebx,ebx
  59195f:	57                   	push   edi
  591960:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  591964:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  591968:	e8 33 8b 07 00       	call   0x60a4a0
  59196d:	99                   	cdq
  59196e:	b9 10 27 00 00       	mov    ecx,0x2710
  591973:	f7 f9                	idiv   ecx
  591975:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  591979:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  59197d:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  591983:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  591989:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  59198d:	e8 0e 8b 07 00       	call   0x60a4a0
  591992:	99                   	cdq
  591993:	b9 10 27 00 00       	mov    ecx,0x2710
  591998:	f7 f9                	idiv   ecx
  59199a:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  59199e:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  5919a2:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  5919a8:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  5919ae:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5919b2:	e8 e9 8a 07 00       	call   0x60a4a0
  5919b7:	99                   	cdq
  5919b8:	b9 10 27 00 00       	mov    ecx,0x2710
  5919bd:	f7 f9                	idiv   ecx
  5919bf:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5919c3:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5919c7:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  5919cb:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  5919d1:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  5919d7:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  5919db:	e8 f0 15 02 00       	call   0x5b2fd0
  5919e0:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
  5919e4:	d8 1d e0 fc 64 00    	fcomp  DWORD PTR ds:0x64fce0
  5919ea:	df e0                	fnstsw ax
  5919ec:	f6 c4 01             	test   ah,0x1
  5919ef:	0f 85 73 ff ff ff    	jne    0x591968
  5919f5:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
  5919f9:	3b d6                	cmp    edx,esi
  5919fb:	74 20                	je     0x591a1d
  5919fd:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  591a01:	e8 3a 14 02 00       	call   0x5b2e40
  591a06:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  591a0c:	df e0                	fnstsw ax
  591a0e:	f6 c4 01             	test   ah,0x1
  591a11:	74 0a                	je     0x591a1d
  591a13:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  591a17:	d9 e0                	fchs
  591a19:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  591a1d:	8d 7c 24 14          	lea    edi,[esp+0x14]
  591a21:	e8 7a 8a 07 00       	call   0x60a4a0
  591a26:	99                   	cdq
  591a27:	b9 10 27 00 00       	mov    ecx,0x2710
  591a2c:	f7 f9                	idiv   ecx
  591a2e:	51                   	push   ecx
  591a2f:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  591a33:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
  591a37:	8b d7                	mov    edx,edi
  591a39:	db 44 24 5c          	fild   DWORD PTR [esp+0x5c]
  591a3d:	d8 0d 40 e3 64 00    	fmul   DWORD PTR ds:0x64e340
  591a43:	d8 05 7c cf 64 00    	fadd   DWORD PTR ds:0x64cf7c
  591a49:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
  591a4d:	d9 1c 24             	fstp   DWORD PTR [esp]
  591a50:	e8 4b 15 02 00       	call   0x5b2fa0
  591a55:	68 a0 01 00 00       	push   0x1a0
  591a5a:	e8 56 86 07 00       	call   0x60a0b5
  591a5f:	8b e8                	mov    ebp,eax
  591a61:	83 c4 04             	add    esp,0x4
  591a64:	89 6c 24 58          	mov    DWORD PTR [esp+0x58],ebp
  591a68:	3b ee                	cmp    ebp,esi
  591a6a:	c6 44 24 48 01       	mov    BYTE PTR [esp+0x48],0x1
  591a6f:	0f 84 95 00 00 00    	je     0x591b0a
  591a75:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  591a79:	56                   	push   esi
  591a7a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  591a7e:	88 54 24 24          	mov    BYTE PTR [esp+0x24],dl
  591a82:	e8 19 26 e7 ff       	call   0x4040a0
  591a87:	bf c0 62 6a 00       	mov    edi,0x6a62c0
  591a8c:	83 c9 ff             	or     ecx,0xffffffff
  591a8f:	33 c0                	xor    eax,eax
  591a91:	6a 01                	push   0x1
  591a93:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  591a95:	f7 d1                	not    ecx
  591a97:	49                   	dec    ecx
  591a98:	8b d9                	mov    ebx,ecx
  591a9a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  591a9e:	53                   	push   ebx
  591a9f:	e8 9c fe e6 ff       	call   0x401940
  591aa4:	84 c0                	test   al,al
  591aa6:	74 25                	je     0x591acd
  591aa8:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  591aac:	8b cb                	mov    ecx,ebx
  591aae:	8b c1                	mov    eax,ecx
  591ab0:	be c0 62 6a 00       	mov    esi,0x6a62c0
  591ab5:	c1 e9 02             	shr    ecx,0x2
  591ab8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  591aba:	8b c8                	mov    ecx,eax
  591abc:	53                   	push   ebx
  591abd:	83 e1 03             	and    ecx,0x3
  591ac0:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  591ac2:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  591ac6:	e8 c5 26 e7 ff       	call   0x404190
  591acb:	33 f6                	xor    esi,esi
  591acd:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
  591ad4:	00 
  591ad5:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  591ad9:	8d 54 24 30          	lea    edx,[esp+0x30]
  591add:	51                   	push   ecx
  591ade:	52                   	push   edx
  591adf:	c6 44 24 50 02       	mov    BYTE PTR [esp+0x50],0x2
  591ae4:	e8 b7 18 f7 ff       	call   0x5033a0
  591ae9:	bb 03 00 00 00       	mov    ebx,0x3
  591aee:	83 c4 08             	add    esp,0x8
  591af1:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  591af5:	68 f0 9e 6c 00       	push   0x6c9ef0
  591afa:	50                   	push   eax
  591afb:	8b cd                	mov    ecx,ebp
  591afd:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
  591b01:	e8 ea f9 ff ff       	call   0x5914f0
  591b06:	8b e8                	mov    ebp,eax
  591b08:	eb 02                	jmp    0x591b0c
  591b0a:	33 ed                	xor    ebp,ebp
  591b0c:	f6 c3 02             	test   bl,0x2
  591b0f:	c7 44 24 48 04 00 00 	mov    DWORD PTR [esp+0x48],0x4
  591b16:	00 
  591b17:	74 12                	je     0x591b2b
  591b19:	83 e3 fd             	and    ebx,0xfffffffd
  591b1c:	6a 01                	push   0x1
  591b1e:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  591b22:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  591b26:	e8 75 25 e7 ff       	call   0x4040a0
  591b2b:	f6 c3 01             	test   bl,0x1
  591b2e:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  591b32:	74 0b                	je     0x591b3f
  591b34:	6a 01                	push   0x1
  591b36:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  591b3a:	e8 61 25 e7 ff       	call   0x4040a0
  591b3f:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  591b43:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  591b46:	51                   	push   ecx
  591b47:	8b cd                	mov    ecx,ebp
  591b49:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  591b4c:	8a 85 4b 01 00 00    	mov    al,BYTE PTR [ebp+0x14b]
  591b52:	84 c0                	test   al,al
  591b54:	74 60                	je     0x591bb6
  591b56:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  591b5a:	56                   	push   esi
  591b5b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  591b5f:	88 54 24 24          	mov    BYTE PTR [esp+0x24],dl
  591b63:	e8 38 25 e7 ff       	call   0x4040a0
  591b68:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  591b6d:	83 c9 ff             	or     ecx,0xffffffff
  591b70:	33 c0                	xor    eax,eax
  591b72:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  591b74:	f7 d1                	not    ecx
  591b76:	49                   	dec    ecx
  591b77:	51                   	push   ecx
  591b78:	68 70 3f 6b 00       	push   0x6b3f70
  591b7d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  591b81:	e8 6a 25 e7 ff       	call   0x4040f0
  591b86:	8d 44 24 20          	lea    eax,[esp+0x20]
  591b8a:	c6 44 24 48 06       	mov    BYTE PTR [esp+0x48],0x6
  591b8f:	50                   	push   eax
  591b90:	6a 3e                	push   0x3e
  591b92:	68 48 6c 69 00       	push   0x696c48
  591b97:	68 70 13 69 00       	push   0x691370
  591b9c:	e8 4f ec 00 00       	call   0x5a07f0
  591ba1:	ff d0                	call   eax
  591ba3:	83 c4 10             	add    esp,0x10
  591ba6:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  591baa:	c6 44 24 48 00       	mov    BYTE PTR [esp+0x48],0x0
  591baf:	6a 01                	push   0x1
  591bb1:	e8 ea 24 e7 ff       	call   0x4040a0
  591bb6:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  591bba:	8d 8d 8c 01 00 00    	lea    ecx,[ebp+0x18c]
  591bc0:	89 95 8c 01 00 00    	mov    DWORD PTR [ebp+0x18c],edx
  591bc6:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  591bca:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  591bcd:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  591bd1:	89 b5 98 01 00 00    	mov    DWORD PTR [ebp+0x198],esi
  591bd7:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  591bda:	e8 c1 88 07 00       	call   0x60a4a0
  591bdf:	99                   	cdq
  591be0:	b9 10 27 00 00       	mov    ecx,0x2710
  591be5:	f7 f9                	idiv   ecx
  591be7:	89 54 24 58          	mov    DWORD PTR [esp+0x58],edx
  591beb:	db 44 24 58          	fild   DWORD PTR [esp+0x58]
  591bef:	d8 0d 70 c5 64 00    	fmul   DWORD PTR ds:0x64c570
  591bf5:	d8 05 5c ff 64 00    	fadd   DWORD PTR ds:0x64ff5c
  591bfb:	e8 20 8f 07 00       	call   0x60ab20
  591c00:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
  591c04:	db 44 24 58          	fild   DWORD PTR [esp+0x58]
  591c08:	d8 4c 24 60          	fmul   DWORD PTR [esp+0x60]
  591c0c:	e8 0f 8f 07 00       	call   0x60ab20
  591c11:	8b f0                	mov    esi,eax
  591c13:	83 fe ff             	cmp    esi,0xffffffff
  591c16:	74 47                	je     0x591c5f
  591c18:	85 f6                	test   esi,esi
  591c1a:	7d 43                	jge    0x591c5f
  591c1c:	8d 54 24 58          	lea    edx,[esp+0x58]
  591c20:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  591c24:	52                   	push   edx
  591c25:	68 70 3f 6b 00       	push   0x6b3f70
  591c2a:	e8 e1 7b e7 ff       	call   0x409810
  591c2f:	8d 44 24 20          	lea    eax,[esp+0x20]
  591c33:	c6 44 24 48 07       	mov    BYTE PTR [esp+0x48],0x7
  591c38:	50                   	push   eax
  591c39:	6a 56                	push   0x56
  591c3b:	68 c8 d4 68 00       	push   0x68d4c8
  591c40:	68 90 d4 68 00       	push   0x68d490
  591c45:	e8 a6 eb 00 00       	call   0x5a07f0
  591c4a:	ff d0                	call   eax
  591c4c:	83 c4 10             	add    esp,0x10
  591c4f:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  591c53:	c6 44 24 48 00       	mov    BYTE PTR [esp+0x48],0x0
  591c58:	6a 01                	push   0x1
  591c5a:	e8 41 24 e7 ff       	call   0x4040a0
  591c5f:	6a 01                	push   0x1
  591c61:	8b cd                	mov    ecx,ebp
  591c63:	89 b5 20 01 00 00    	mov    DWORD PTR [ebp+0x120],esi
  591c69:	c7 85 24 01 00 00 ff 	mov    DWORD PTR [ebp+0x124],0xffffffff
  591c70:	ff ff ff 
  591c73:	c7 85 28 01 00 00 00 	mov    DWORD PTR [ebp+0x128],0x3f800000
  591c7a:	00 80 3f 
  591c7d:	c6 85 2c 01 00 00 01 	mov    BYTE PTR [ebp+0x12c],0x1
  591c84:	e8 c7 06 f7 ff       	call   0x502350
  591c89:	e8 12 88 07 00       	call   0x60a4a0
  591c8e:	99                   	cdq
  591c8f:	b9 10 27 00 00       	mov    ecx,0x2710
  591c94:	8b 74 24 54          	mov    esi,DWORD PTR [esp+0x54]
  591c98:	f7 f9                	idiv   ecx
  591c9a:	b8 00 00 c8 42       	mov    eax,0x42c80000
  591c9f:	c7 85 88 01 00 00 00 	mov    DWORD PTR [ebp+0x188],0x41a00000
  591ca6:	00 a0 41 
  591ca9:	85 f6                	test   esi,esi
  591cab:	89 85 84 01 00 00    	mov    DWORD PTR [ebp+0x184],eax
  591cb1:	c7 85 7c 01 00 00 00 	mov    DWORD PTR [ebp+0x17c],0x42200000
  591cb8:	00 20 42 
  591cbb:	89 85 80 01 00 00    	mov    DWORD PTR [ebp+0x180],eax
  591cc1:	89 54 24 58          	mov    DWORD PTR [esp+0x58],edx
  591cc5:	db 44 24 58          	fild   DWORD PTR [esp+0x58]
  591cc9:	d8 0d 88 bd 64 00    	fmul   DWORD PTR ds:0x64bd88
  591ccf:	d8 05 84 bd 64 00    	fadd   DWORD PTR ds:0x64bd84
  591cd5:	d8 4c 24 5c          	fmul   DWORD PTR [esp+0x5c]
  591cd9:	d8 0d 2c a4 64 00    	fmul   DWORD PTR ds:0x64a42c
  591cdf:	d9 9d 30 01 00 00    	fstp   DWORD PTR [ebp+0x130]
  591ce5:	0f 85 8d 00 00 00    	jne    0x591d78
  591ceb:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  591cef:	56                   	push   esi
  591cf0:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  591cf4:	88 54 24 24          	mov    BYTE PTR [esp+0x24],dl
  591cf8:	e8 a3 23 e7 ff       	call   0x4040a0
  591cfd:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  591d02:	83 c9 ff             	or     ecx,0xffffffff
  591d05:	33 c0                	xor    eax,eax
  591d07:	6a 01                	push   0x1
  591d09:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  591d0b:	f7 d1                	not    ecx
  591d0d:	49                   	dec    ecx
  591d0e:	8b d9                	mov    ebx,ecx
  591d10:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  591d14:	53                   	push   ebx
  591d15:	e8 26 fc e6 ff       	call   0x401940
  591d1a:	84 c0                	test   al,al
  591d1c:	74 27                	je     0x591d45
  591d1e:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  591d22:	8b cb                	mov    ecx,ebx
  591d24:	8b c1                	mov    eax,ecx
  591d26:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  591d2b:	c1 e9 02             	shr    ecx,0x2
  591d2e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  591d30:	8b c8                	mov    ecx,eax
  591d32:	53                   	push   ebx
  591d33:	83 e1 03             	and    ecx,0x3
  591d36:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  591d38:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  591d3c:	e8 4f 24 e7 ff       	call   0x404190
  591d41:	8b 74 24 54          	mov    esi,DWORD PTR [esp+0x54]
  591d45:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  591d49:	c6 44 24 48 08       	mov    BYTE PTR [esp+0x48],0x8
  591d4e:	51                   	push   ecx
  591d4f:	68 b6 00 00 00       	push   0xb6
  591d54:	68 38 d6 68 00       	push   0x68d638
  591d59:	68 2c d6 68 00       	push   0x68d62c
  591d5e:	e8 8d ea 00 00       	call   0x5a07f0
  591d63:	ff d0                	call   eax
  591d65:	83 c4 10             	add    esp,0x10
  591d68:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  591d6c:	c6 44 24 48 00       	mov    BYTE PTR [esp+0x48],0x0
  591d71:	6a 01                	push   0x1
  591d73:	e8 28 23 e7 ff       	call   0x4040a0
  591d78:	55                   	push   ebp
  591d79:	8b ce                	mov    ecx,esi
  591d7b:	e8 40 24 f6 ff       	call   0x4f41c0
  591d80:	85 f6                	test   esi,esi
  591d82:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  591d89:	ff 
  591d8a:	74 12                	je     0x591d9e
  591d8c:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  591d8f:	48                   	dec    eax
  591d90:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  591d93:	75 09                	jne    0x591d9e
  591d95:	6a 00                	push   0x0
  591d97:	8b ce                	mov    ecx,esi
  591d99:	e8 22 a2 01 00       	call   0x5abfc0
  591d9e:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  591da2:	5f                   	pop    edi
  591da3:	5e                   	pop    esi
  591da4:	5d                   	pop    ebp
  591da5:	5b                   	pop    ebx
  591da6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  591dad:	83 c4 3c             	add    esp,0x3c
  591db0:	c3                   	ret
  591db1:	90                   	nop
  591db2:	90                   	nop
  591db3:	90                   	nop
  591db4:	90                   	nop
  591db5:	90                   	nop
  591db6:	90                   	nop
  591db7:	90                   	nop
  591db8:	90                   	nop
  591db9:	90                   	nop
  591dba:	90                   	nop
  591dbb:	90                   	nop
  591dbc:	90                   	nop
  591dbd:	90                   	nop
  591dbe:	90                   	nop
  591dbf:	90                   	nop
